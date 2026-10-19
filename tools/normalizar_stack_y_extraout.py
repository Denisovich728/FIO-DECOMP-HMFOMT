import os
import re

def normalize_stack_and_extraout(filepath):
    with open(filepath, 'r', encoding='utf-8', errors='ignore') as f:
        content = f.read()

    original = content

    # 1. Normalize extraout
    content = re.sub(r'\bextraout_var(?:_\d+)?\b', 'sub_ret_val', content)
    content = re.sub(r'\bextraout_[a-zA-Z0-9_]+\b', 'sub_ret_val', content)

    # 2. Normalize Stack arrays
    content = re.sub(r'\bauStack_([0-9a-fA-F]+)\b', r'stack_buf_\1', content)
    content = re.sub(r'\babStack_([0-9a-fA-F]+)\b', r'stack_bytes_\1', content)
    content = re.sub(r'\baiStack_([0-9a-fA-F]+)\b', r'stack_ints_\1', content)
    content = re.sub(r'\bacStack_([0-9a-fA-F]+)\b', r'stack_str_\1', content)

    # 3. Normalize Stack scalars
    content = re.sub(r'\buStack_([0-9a-fA-F]+)\b', r'stack_val_\1', content)
    content = re.sub(r'\biStack_([0-9a-fA-F]+)\b', r'stack_val_\1', content)
    content = re.sub(r'\bsStack_([0-9a-fA-F]+)\b', r'stack_val_\1', content)
    content = re.sub(r'\bbStack_([0-9a-fA-F]+)\b', r'stack_val_\1', content)

    # 4. Normalize any local_XX leftover from Ghidra
    content = re.sub(r'\blocal_([0-9a-fA-F]+)\b', r'stack_local_\1', content)

    if content != original:
        with open(filepath, 'w', encoding='utf-8', newline='\n') as f:
            f.write(content)
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
                if normalize_stack_and_extraout(p):
                    modified += 1
                    print(f'Normalizado stack y extraout en: {p}')

    print(f'Completado. Modificados: {modified}/{total}')

if __name__ == '__main__':
    main()
