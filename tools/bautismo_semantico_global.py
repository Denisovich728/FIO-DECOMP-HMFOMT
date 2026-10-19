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
    # NPC Friendship & Social Mechanics
    "NPC_Routine_0809E370": "NPC_AddFriendship",
    "NPC_Routine_0809E38C": "NPC_ReduceFriendship",
    "NPC_Routine_0809E39C": "NPC_SetTalkedToday",
    "NPC_Routine_0809E3E8": "NPC_ProcessGiftGiven",
    # Bachelorettes & Affection System
    "NPC_Routine_0809E458": "Bachelorette_ResetAffection",
    "NPC_Routine_0809E4C4": "Bachelorette_AddAffection",
    "NPC_Routine_0809E4E8": "Bachelorette_ReduceAffection",
    "NPC_Routine_0809E4F8": "Bachelorette_IncrementTalkCount",
    "NPC_Routine_0809E520": "Bachelorette_IncrementGiftCount",
    "NPC_Routine_0809E574": "Bachelorette_ProcessDailyAffection",
    "NPC_Routine_0809E628": "Bachelorette_ResetAffectionData",
    "NPC_Routine_0809E66C": "Bachelorette_GetStatsByte",
    "NPC_Routine_0809E688": "Bachelorette_GetHeartStatsByte",
    # Harvest Sprites (Nature Sprites) & Minigames
    "NPC_Routine_080B0708": "HarvestSprite_Minigame_UpdateCountdownTimer",
    "NPC_Routine_080B0934": "HarvestSprite_Minigame_HideUI",
    "NPC_Routine_080B0970": "HarvestSprite_Minigame_ShowUI",
    "NPC_Routine_080B09B0": "HarvestSprite_Minigame_SetupDifficultyAndTargets",
    "NPC_Routine_080B0AA0": "HarvestSprite_Minigame_InitState",
    "NPC_Routine_080B0BB8": "HarvestSprite_Minigame_UpdateFrame",
    # C++ Runtime Memory System (src/core/dispatcher.c)
    "Dispatcher_Routine_08000584": "CppRuntime_OperatorNew",
    "Dispatcher_Routine_08000590": "CppRuntime_OperatorDelete",
    "Dispatcher_Routine_0800059C": "CppRuntime_AllocateMemory",
    "Dispatcher_Routine_080005D4": "CppRuntime_OperatorNewArray",
    "Dispatcher_Routine_080005E4": "CppRuntime_OperatorNewArray_Stub",
    "Dispatcher_Routine_080005F0": "CppRuntime_AllocateMemory_NoThrow",
    "Dispatcher_Routine_080005FC": "CppRuntime_OperatorNewArray_NoThrow",
    "Dispatcher_Routine_08000608": "CppRuntime_FreeMemory",
    "Dispatcher_Routine_08000614": "CppRuntime_OperatorDeleteArray",
    "Dispatcher_Routine_08000620": "CppRuntime_FreeMemory_NoThrow",
    "Dispatcher_Routine_0800062C": "CppRuntime_OperatorDeleteArray_NoThrow",
    # Hardware & Save Screen (src/core/hardware.c)
    "HW_Routine_080040A0": "SaveManager_LoadGameSlot",
    "HW_Routine_080041DC": "SaveLoadScreen_Init",
    "HW_Routine_08004570": "SaveLoadScreen_RunLoop",
    "HW_Routine_08004B94": "SaveLoadScreen_Deinit",
    "HW_Routine_08007128": "GBA_PaletteManager_Init",
    "HW_Routine_0800736C": "GBA_PaletteManager_Allocate",
    "HW_Routine_0800770C": "GBA_BgLayer_Init",
    "HW_Routine_08007714": "GBA_BgLayer_SetPriority",
    "HW_Routine_08007874": "GBA_ObjAttr_Init",
    "HW_Routine_08007B54": "GBA_ObjAttr_AllocateSprite",
    "HW_Routine_08007D4C": "GBA_Vram_AllocateTileBlock",
    "HW_Routine_0800835C": "GBA_TextLayer_Init",
    "HW_Routine_08008574": "GBA_DisplayController_Reset",
    "HW_Routine_08008E64": "GBA_DMA3_FastCopy",
    # Farm Engine, Input & Screen Fade (src/farm/farm.c)
    "Farm_Routine_0800901C": "GBA_Bios_CpuCopyBlock",
    "Farm_Routine_08009094": "GBA_Bios_CpuCopyDescriptorList",
    "Farm_Routine_08009190": "Input_PollTriggers",
    "Farm_Routine_080091A4": "Input_InitKeypadState",
    "Farm_Routine_080091E8": "Input_InitDefault",
    "Farm_Routine_08009268": "Input_ProcessAutoRepeat",
    "Farm_Routine_08009300": "Fade_Init",
    "Farm_Routine_08009324": "Fade_Deinit",
    "Farm_Routine_0800934C": "Fade_StartFadeOut",
    "Farm_Routine_08009378": "Fade_StartFadeIn",
    "Farm_Routine_080093AC": "Fade_UpdateFrame",
    "Farm_Routine_080094AC": "Fade_Update",
    "Farm_Routine_080094E0": "Fade_IsActive",
    "Farm_Routine_08009744": "OAM_InitSpriteBuffer",
    "Farm_Routine_0800977C": "OAM_DMA_FlushBuffer",
    "Farm_Routine_08009790": "OAM_CpuFastSet_FlushBuffer",
    "Farm_Routine_080096B0": "GBA_Display_InitRegsBuffer",
    "Farm_Routine_080096F0": "GBA_Display_FlushRegs",
    "Farm_Routine_08009710": "GBA_Display_ApplyScrollAndBlend",
    # Shipping Bin Mechanics (src/farm/shipping_bin.c)
    "ShippingBin_Routine_0800B500": "ShippingBin_FindLastEmptySlot",
    "ShippingBin_Routine_0800B544": "ShippingBin_FindSlotByItemId",
    "ShippingBin_Routine_0800B5A8": "ShippingBin_AddItemQuantity",
    "ShippingBin_Routine_0800B660": "ShippingBin_ClearAllSlots",
    "ShippingBin_Routine_0800B68C": "ShippingBin_GetSlotQuantity",
    "ShippingBin_Routine_0800B6E8": "ShippingBin_SetSlotQuantity",
    "ShippingBin_Routine_0800B73C": "ShippingBin_CalculateDailyTotalEarnings",
    "ShippingBin_Routine_0800B770": "ShippingBin_CollectDailyEarnings",
    "ShippingBin_Routine_0800B7B8": "ShippingBin_ResetDailyShipments",
    # Item Registry & Food Attributes (src/player/item.c)
    "Item_Routine_0800DCB8": "Item_GetFoodName",
    "Item_Routine_0800DCE0": "Item_GetFoodBasePrice",
    "Item_Routine_0800DD6C": "Item_GetFoodStaminaModifier",
    "Item_Routine_0800DD8C": "Item_GetFoodFatigueModifier",
    "Item_Routine_0800DDD4": "Item_GetFoodDescription",
    "Item_Routine_0800DE0C": "Item_GetFoodIconGraphic",
    "Item_Routine_0800DE68": "Item_ResetSlotData",
    "Item_Routine_0800DE80": "Item_GetToolTier",
    "Item_Routine_0800DEB8": "Item_GetToolExperienceRequired",
    # Farmer Character & Tools (src/player/farmer.c)
    "Farmer_Routine_0800E304": "Tool_GetReachArea",
    "Farmer_Routine_0800E324": "Farmer_GetFacingDirection",
    "Farmer_Routine_0800E354": "Farmer_CalculateTargetTileGrid",
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
