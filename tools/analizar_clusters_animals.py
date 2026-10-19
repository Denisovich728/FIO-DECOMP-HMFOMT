import re

def main():
    with open('src/entities/animals.c', 'r', encoding='utf-8') as f:
        content = f.read()

    pattern = re.compile(r'// Function:\s*([a-zA-Z0-9_]+)\s*@\s*(0x08[0-9a-fA-F]{6})')
    funcs = pattern.findall(content)
    print(f'Total functions in animals.c: {len(funcs)}')

    pages = {}
    for fn, addr_str in funcs:
        addr = int(addr_str, 16)
        page = (addr >> 12) << 12
        pages.setdefault(page, []).append((fn, addr_str))

    for page in sorted(pages.keys()):
        fn_list = pages[page]
        named = [fn for fn, a in fn_list if not fn.startswith('Animal_Routine_')]
        generic = [fn for fn, a in fn_list if fn.startswith('Animal_Routine_')]
        print(f'Page {hex(page)}: {len(fn_list)} functions ({len(named)} named, {len(generic)} generic)')
        if named:
            print(f'   Named: {", ".join(named[:6])}')

if __name__ == '__main__':
    main()
