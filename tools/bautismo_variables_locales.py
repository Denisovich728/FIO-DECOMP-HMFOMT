import os
import re

def analyze_and_rename_function(fn_name, signature, body):
    # Dictionary of local variable renames for this function
    renames = {}

    # 1. Loop counters detection:
    # Pattern: <var> = 0; ... <var> = <var> + 1; ... while (<var> < ...)
    loop_matches = re.findall(
        r'\b([ui]Var\d+)\s*=\s*0\s*;[\s\S]*?\b\1\s*=\s*\1\s*\+\s*1\s*;[\s\S]*?\bwhile\s*\(\s*\1\s*<',
        body
    )
    loop_vars = []
    for lv in loop_matches:
        if lv not in loop_vars:
            loop_vars.append(lv)

    loop_names = ['loop_i', 'loop_j', 'loop_k', 'loop_idx']
    for idx, lv in enumerate(loop_vars):
        if idx < len(loop_names):
            renames[lv] = loop_names[idx]

    # 2. Pointers in loops:
    # Pattern: for (puVar4 = ...; puVar4 != puVar5; puVar4 = puVar4 + 1)
    for_ptr_matches = re.findall(
        r'for\s*\(\s*([p][ui]Var\d+)\s*=[^;]+;\s*\1\s*!=\s*([p][ui]Var\d+)\s*;\s*\1\s*=\s*\1\s*\+\s*1\s*\)',
        body
    )
    for curr_p, end_p in for_ptr_matches:
        if curr_p not in renames:
            renames[curr_p] = 'curr_ptr'
        if end_p not in renames:
            renames[end_p] = 'end_ptr'

    # 3. Structural fields assignments:
    # bVar = *(byte *)(... + 0x20) -> facing_dir
    m_facing = re.search(r'\b(bVar\d+)\s*=\s*\*\(byte\s*\*\)\s*\([^)]+\+\s*0x20\)', body)
    if m_facing and m_facing.group(1) not in renames:
        renames[m_facing.group(1)] = 'facing_dir'

    # Mood in NPC: *(byte *)(npc + 8)
    m_mood = re.search(r'\b([biu]Var\d+)\s*=\s*\*\(byte\s*\*\)\s*\([^)]+\+\s*8\)', body)
    if m_mood and m_mood.group(1) not in renames:
        renames[m_mood.group(1)] = 'mood_byte'

    # Position and velocity:
    m_pos_x = re.search(r'\b([i]Var\d+)\s*=\s*\*\(int\s*\*\)\s*\([^)]+\+\s*8\)', body)
    if m_pos_x and m_pos_x.group(1) not in renames:
        renames[m_pos_x.group(1)] = 'pos_x'

    m_pos_y = re.search(r'\b([i]Var\d+)\s*=\s*\*\(int\s*\*\)\s*\([^)]+\+\s*0xc\)', body)
    if m_pos_y and m_pos_y.group(1) not in renames:
        renames[m_pos_y.group(1)] = 'pos_y'

    m_vel_x = re.search(r'\b([i]Var\d+)\s*=\s*\*\(int\s*\*\)\s*\([^)]+\+\s*0x18\)', body)
    if m_vel_x and m_vel_x.group(1) not in renames:
        renames[m_vel_x.group(1)] = 'vel_x'

    m_vel_y = re.search(r'\b([i]Var\d+)\s*=\s*\*\(int\s*\*\)\s*\([^)]+\+\s*0x1c\)', body)
    if m_vel_y and m_vel_y.group(1) not in renames:
        renames[m_vel_y.group(1)] = 'vel_y'

    # 4. Function return value assignments:
    # iVar = Item_GetId(...)
    m_item = re.search(r'\b([i]Var\d+)\s*=\s*Item_GetId\s*\(', body)
    if m_item and m_item.group(1) not in renames:
        renames[m_item.group(1)] = 'item_id'

    # iVar = math_divsi3(...)
    m_div = re.search(r'\b([i]Var\d+)\s*=\s*math_div\w+\s*\(', body)
    if m_div and m_div.group(1) not in renames:
        renames[m_div.group(1)] = 'div_result'

    # uVar = NPC_CheckEventFlag(...)
    m_flag = re.search(r'\b([u]Var\d+)\s*=\s*NPC_CheckEventFlag\s*\(', body)
    if m_flag and m_flag.group(1) not in renames:
        renames[m_flag.group(1)] = 'is_event_set'

    # 5. Clean up stack buffers:
    stack_vars = {
        'auStack_10': 'temp_buf_10',
        'auStack_14': 'temp_buf_14',
        'auStack_18': 'temp_buf_18',
        'auStack_20': 'temp_buf_20',
        'auStack_24': 'temp_buf_24',
        'auStack_28': 'temp_buf_28',
        'auStack_30': 'temp_buf_30',
        'auStack_3c': 'temp_buf_3c',
        'auStack_40': 'temp_buf_40',
        'auStack_48': 'temp_buf_48',
        'auStack_50': 'temp_buf_50',
        'auStack_5c': 'temp_buf_5c',
        'abStack_5c': 'temp_bytes_5c',
    }
    for old_s, new_s in stack_vars.items():
        if old_s in body:
            renames[old_s] = new_s

    # 6. For all remaining Ghidra local variables, normalize them systematically to standard C names:
    # uVar1 -> u_val1, iVar1 -> i_val1, bVar1 -> b_flag1, puVar1 -> p_uint1, piVar1 -> p_int1,
    # cVar1 -> c_char1, sVar1 -> s_val1, pcVar1 -> p_char1
    var_map = {
        r'\buVar(\d+)\b': r'u_val\1',
        r'\biVar(\d+)\b': r'i_val\1',
        r'\bbVar(\d+)\b': r'b_flag\1',
        r'\bpuVar(\d+)\b': r'p_uint\1',
        r'\bpiVar(\d+)\b': r'p_int\1',
        r'\bcVar(\d+)\b': r'c_char\1',
        r'\bsVar(\d+)\b': r's_val\1',
        r'\bpcVar(\d+)\b': r'p_char\1',
        r'\bextraout_r1(?:_\d+)?\b': r'sub_ret_val',
        r'\bunaff_r(\d+)\b': r'saved_r\1',
    }

    # Apply specific renames first
    for old_var, new_var in sorted(renames.items(), key=lambda x: len(x[0]), reverse=True):
        body = re.sub(r'\b' + old_var + r'\b', new_var, body)

    # Apply systematic normalization
    for pattern, repl in var_map.items():
        body = re.sub(pattern, repl, body)

    return body

def process_file(filepath):
    with open(filepath, 'r', encoding='utf-8', errors='ignore') as f:
        content = f.read()

    func_pattern = re.compile(
        r'(// =+\s*\n'
        r'// Function:\s*([a-zA-Z0-9_]+)\s*@\s*0x[0-9a-fA-F]+\s*\n'
        r'// =+\s*\n)'
        r'([^{]+?\n)\{([\s\S]*?\n\})',
        re.M
    )

    def replacer(match):
        header = match.group(1)
        fn_name = match.group(2)
        sig = match.group(3)
        body = match.group(4)
        new_body = analyze_and_rename_function(fn_name, sig, body)
        return f"{header}{sig}{{{new_body}"

    new_content = func_pattern.sub(replacer, content)

    if new_content != content:
        with open(filepath, 'w', encoding='utf-8', newline='\n') as f:
            f.write(new_content)
        return True
    return False

def main():
    modified = 0
    total = 0
    for root, dirs, files in os.walk('src'):
        for f in sorted(files):
            if f.endswith('.c'):
                p = os.path.join(root, f)
                total += 1
                if process_file(p):
                    modified += 1
                    print(f'Variables locales bautizadas en: {p}')

    print(f'Proceso completado. Total archivos: {total}, Modificados: {modified}')

if __name__ == '__main__':
    main()
