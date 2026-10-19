import os
import re

# Tabla de bautismo de funciones identificadas por direccion o firma
FUNCTION_RENAMES = {
    # NPC Schedule & Task State Machine
    "NPC_Routine_0809C304": "NPC_IsCurrentTaskActive",
    "NPC_Routine_0809C318": "NPC_IsCurrentTaskCompleted",
    "NPC_Routine_0809C32C": "NPC_AreAllTasksCompleted",
    "NPC_Routine_0809C38C": "NPC_AreAllTasksActive",
    "NPC_Routine_0809C3BC": "NPC_StartCurrentTask",
    "NPC_Routine_0809C3E0": "NPC_UpdateTaskTimer",
    "NPC_Routine_0809C420": "NPC_ResetTaskTimer",
    "NPC_Routine_0809C444": "NPC_CheckTaskStatus",
    "NPC_Routine_0809C474": "NPC_StepTaskState",
    "NPC_Routine_0809C4B4": "NPC_CompleteTaskState",
    "NPC_Routine_0809C4EC": "NPC_CheckEventFlag",
    "NPC_Routine_0809C510": "NPC_GetEventWaypoint",
    "NPC_Routine_0809C5B4": "NPC_SetEventFlag",
    "NPC_Routine_0809C5D0": "NPC_ClearEventFlag",
    "NPC_Routine_0809C600": "NPC_EventQueue_Push",
    "NPC_Routine_0809C644": "NPC_EventQueue_Remove",
    "NPC_Routine_0809C6BC": "NPC_ResetData",
    # Shipping & Farm Records
    "NPC_Routine_0809CD98": "Shipping_RecordShippedItemCount",
    "NPC_Routine_0809CDCC": "Shipping_AreAllCropsShipped",
    "NPC_Routine_0809CDEC": "Shipping_CalculateTotalFarmShippedValue",
    "NPC_Routine_0809CE30": "Shipping_GetItemCategoryFlag",
    "NPC_Routine_0809CE8C": "Field_ClearPlotGrid",
    # Entity Manager
    "Entity_Routine_08020038": "Entity_ResetMotionState",
    "Entity_Routine_08020080": "Entity_SetVelocityFromDirection",
    "Entity_Routine_08020130": "Entity_CanMoveToPosition",
    "Entity_Routine_08020170": "Entity_MoveAndCollide",
}

# Reglas de bautismo de parametros por prefijo de funcion
PARAM_RULES = {
    "NPC": ["npc", "amount", "extra_arg", "out_data"],
    "Actor": ["actor", "target_pos", "facing", "flags"],
    "Entity": ["entity", "speed", "collision", "flags"],
    "Shipping": ["records", "item_id", "count", "price"],
    "Field": ["field", "tile_x", "tile_y", "crop_id"],
    "Farmer": ["farmer", "amount", "slot_id", "flags"],
    "Item": ["item", "slot", "quantity", "out_item"],
    "Animal": ["animal", "amount", "food_type", "out_stat"],
    "Cow": ["cow", "amount", "flags"],
    "Sheep": ["sheep", "amount", "flags"],
    "Chicken": ["chicken", "amount", "flags"],
    "Dog": ["dog", "amount", "flags"],
    "Horse": ["horse", "amount", "flags"],
    "ScriptEngine": ["ctx", "opcode", "arg1", "arg2"],
    "HW": ["hw_reg", "val", "size", "mode"],
    "GBA": ["reg", "data", "size", "flags"],
    "M4A": ["handle", "channel", "param", "val"],
    "VTable": ["instance", "arg1", "arg2", "arg3"],
    "MainLoop": ["state"],
}

def get_param_names(func_name, count):
    # Buscar regla segun prefijo
    for prefix, names in PARAM_RULES.items():
        if func_name.startswith(prefix + "_") or func_name == prefix:
            result = []
            for i in range(count):
                if i < len(names):
                    result.append(names[i])
                else:
                    result.append(f"arg_{i+1}")
            return result
    return [f"arg_{i+1}" for i in range(count)]

def process_function(header_comment, signature, body):
    # 1. Check if function should be renamed
    m_name = re.search(r'// Function:\s*([a-zA-Z0-9_]+)', header_comment)
    func_name = m_name.group(1) if m_name else "Unknown"

    new_func_name = FUNCTION_RENAMES.get(func_name, func_name)
    if new_func_name != func_name:
        header_comment = header_comment.replace(func_name, new_func_name)
        signature = signature.replace(func_name, new_func_name)
        func_name = new_func_name

    # 2. Extract parameters param_1, param_2, ...
    param_matches = re.findall(r'\bparam_(\d+)\b', signature)
    if param_matches:
        param_indices = sorted(list(set(int(x) for x in param_matches)))
        max_idx = max(param_indices)
        names = get_param_names(func_name, max_idx)

        # Build replacement mapping
        param_map = {}
        for idx in param_indices:
            param_map[f"param_{idx}"] = names[idx - 1]

        # Replace in signature
        for old_p, new_p in sorted(param_map.items(), key=lambda x: len(x[0]), reverse=True):
            signature = re.sub(r'\b' + old_p + r'\b', new_p, signature)
            body = re.sub(r'\b' + old_p + r'\b', new_p, body)

    # 3. Clean up stack coordinate variables in body
    body = re.sub(r'\bauStack_24\b', 'waypoint_coords', body)
    body = re.sub(r'\bauStack_14\b', 'facing_buffer', body)
    body = re.sub(r'\bauStack_10\b', 'temp_coords', body)

    # 4. Canonical loop counters:
    # If uVar1 = 0; ... uVar1 = uVar1 + 1; } while (uVar1 < ...);
    # Check if uVar1 is solely used as an integer counter
    if re.search(r'\buVar1\s*=\s*0\s*;.*?\buVar1\s*=\s*uVar1\s*\+\s*1\s*;.*?\bwhile\s*\(\s*uVar1\s*<', body, re.S):
        # Safely replace uVar1 with loop_i
        body = re.sub(r'\buVar1\b', 'loop_i', body)

    return header_comment, signature, body

def process_file(filepath):
    with open(filepath, 'r', encoding='utf-8', errors='ignore') as f:
        content = f.read()

    # Pattern for functions
    func_pattern = re.compile(
        r'(// =+\s*\n'
        r'// Function:\s*[a-zA-Z0-9_]+\s*@\s*0x[0-9a-fA-F]+\s*\n'
        r'// =+\s*\n)'
        r'([^{]+?\n)\{([\s\S]*?\n\})',
        re.M
    )

    def replacer(match):
        header = match.group(1)
        sig = match.group(2)
        body = match.group(3)
        h, s, b = process_function(header, sig, body)
        return f"{h}{s}{{{b}"

    new_content = func_pattern.sub(replacer, content)

    # Also globally apply FUNCTION_RENAMES across the file (for call sites)
    for old_name, new_name in FUNCTION_RENAMES.items():
        new_content = re.sub(r'\b' + old_name + r'\b', new_name, new_content)

    if new_content != content:
        with open(filepath, 'w', encoding='utf-8', newline='\n') as f:
            f.write(new_content)
        return True
    return False

def main():
    modified = 0
    for root, dirs, files in os.walk('src'):
        for f in sorted(files):
            if f.endswith('.c'):
                p = os.path.join(root, f)
                if process_file(p):
                    modified += 1
                    print(f'Bautismo aplicado en: {p}')

    print(f'Proceso completado. Archivos modificados: {modified}')

if __name__ == '__main__':
    main()
