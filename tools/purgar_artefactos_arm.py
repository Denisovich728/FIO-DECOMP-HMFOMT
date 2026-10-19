import os
import re

def purge_file(filepath):
    with open(filepath, 'r', encoding='utf-8', errors='ignore') as f:
        content = f.read()

    original = content

    # 1. Handle CONCAT44(in_lr, <expr>) with trailing bitwise operations:
    # e.g.: CONCAT44(in_lr, expr) & 0xffffffff000000ff -> ((u32)(expr) & 0xff)
    content = re.sub(
        r'CONCAT44\s*\(\s*in_lr\s*,\s*([^)]+?)\)\s*&\s*0xffffffff000000ff',
        r'((u32)(\1) & 0xff)',
        content
    )
    # e.g.: CONCAT44(in_lr, expr) & 0xffffffff0000ffff -> ((u32)(expr) & 0xffff)
    content = re.sub(
        r'CONCAT44\s*\(\s*in_lr\s*,\s*([^)]+?)\)\s*&\s*0xffffffff0000ffff',
        r'((u32)(\1) & 0xffff)',
        content
    )
    # e.g.: CONCAT44(in_lr, expr) & 0xffffffff00000003 -> ((u32)(expr) & 0x03)
    content = re.sub(
        r'CONCAT44\s*\(\s*in_lr\s*,\s*([^)]+?)\)\s*&\s*0xffffffff00000003',
        r'((u32)(\1) & 0x03)',
        content
    )
    # e.g.: CONCAT44(in_lr, expr) ^ 1 -> (\1 ^ 1)
    content = re.sub(
        r'CONCAT44\s*\(\s*in_lr\s*,\s*([^)]+?)\)\s*\^\s*1',
        r'(\1 ^ 1)',
        content
    )
    # Generic: CONCAT44(in_lr, <expr>) -> (\1)
    content = re.sub(r'CONCAT44\s*\(\s*in_lr\s*,\s*([^;]+?)\)', r'(\1)', content)

    # 2. Return statements with in_lr
    content = re.sub(r'return\s+in_lr\s*;', r'return;', content)
    content = re.sub(r'return\s*\(ulonglong\)\s*in_lr\s*<<\s*0x20\s*;', r'return 0;', content)

    # 3. Prologue push of lr: uStack_4 = in_lr;
    content = re.sub(r'^\s*uStack_4\s*=\s*in_lr\s*;\r?\n', '', content, flags=re.M)
    content = re.sub(r'uStack_4\s*=\s*in_lr\s*;', '', content)

    # 4. Declarations of in_lr
    content = re.sub(r'^\s*(?:undefined4|uint|int)\s+in_lr\s*;\r?\n', '', content, flags=re.M)
    content = re.sub(r'(?:undefined4|uint|int)\s+in_lr\s*;', '', content)

    # 5. Clean up any leftover CONCAT44(..., in_lr) where in_lr is low part (rare)
    content = re.sub(r'CONCAT44\s*\(\s*([^,]+?)\s*,\s*in_lr\s*\)', r'(\1)', content)

    if content != original:
        with open(filepath, 'w', encoding='utf-8', newline='\n') as f:
            f.write(content)
        return True
    return False

def main():
    src_dir = 'src'
    modified = 0
    total_files = 0
    for root, dirs, files in os.walk(src_dir):
        for f in files:
            if f.endswith(('.c', '.h')):
                p = os.path.join(root, f)
                total_files += 1
                if purge_file(p):
                    modified += 1
                    print(f'Purged ARM artefacts in: {p}')

    print(f'Total files processed: {total_files}, Modified: {modified}')

if __name__ == '__main__':
    main()
