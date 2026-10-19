import os
import re

def main():
    with open('src/entities/npc.c', 'r', encoding='utf-8') as f:
        content = f.read()

    # Pattern to match functions
    pattern = re.compile(
        r'// Function:\s*([a-zA-Z0-9_]+)\s*@\s*(0x[0-9a-fA-F]+)\s*\n'
        r'// [=\-]+\n'
        r'([^{]+?)\n\{',
        re.M
    )

    matches = list(pattern.finditer(content))
    print(f'Total matched functions in npc.c: {len(matches)}')
    
    for i, m in enumerate(matches[:20]):
        fn_name = m.group(1)
        addr = m.group(2)
        proto = ' '.join(m.group(3).split())
        print(f'[{i+1}] {fn_name} @ {addr}')
        print(f'    Signature: {proto}')

if __name__ == '__main__':
    main()
