import os
import re

def refine_function_types(filepath):
    with open(filepath, 'r', encoding='utf-8', errors='ignore') as f:
        content = f.read()

    # Pattern for functions
    func_pattern = re.compile(
        r'(// =+\s*\n'
        r'// Function:\s*([a-zA-Z0-9_]+)\s*@\s*0x[0-9a-fA-F]+\s*\n'
        r'// =+\s*\n)'
        r'((?:undefined[1-8]|ulonglong|longlong|uint|int|void|ushort|short|byte|char)\b[^\n(]*\b([a-zA-Z0-9_]+)\s*\([^)]*\)\s*\n)\{([\s\S]*?\n\})',
        re.M
    )

    def replacer(match):
        header = match.group(1)
        full_sig = match.group(3)
        fn_name = match.group(4)
        body = match.group(5)

        # Check return statements in body
        returns_with_value = re.findall(r'\breturn\s+([^;]+?);', body)
        # Filter out empty returns
        val_returns = [r.strip() for r in returns_with_value if r.strip() != '']

        new_sig = full_sig

        if len(val_returns) == 0:
            # Pure void function!
            # Replace return type with void
            new_sig = re.sub(r'^(?:undefined[1-8]|ulonglong|longlong)\s+', 'void ', new_sig)
        elif len(val_returns) > 0:
            # Function returns a value
            # If declared undefined8, change to u32 or s32/int
            if new_sig.startswith('undefined8 '):
                # If expression looks like boolean (e.g. u_val != 0 or 0 / 1)
                new_sig = re.sub(r'^undefined8\s+', 'u32 ', new_sig)
            elif new_sig.startswith('undefined4 '):
                new_sig = re.sub(r'^undefined4\s+', 'u32 ', new_sig)
            elif new_sig.startswith('ulonglong '):
                new_sig = re.sub(r'^ulonglong\s+', 'u32 ', new_sig)

        return f"{header}{new_sig}{{{body}"

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
                if refine_function_types(p):
                    modified += 1
                    print(f'Tipos refinados en: {p}')

    print(f'Completado: {modified}/{total} archivos modificados')

if __name__ == '__main__':
    main()
