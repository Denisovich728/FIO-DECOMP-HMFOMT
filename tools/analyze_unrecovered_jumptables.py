import os
import re
import capstone

ROM_PATH = r"J:\Laboratorio\GBA-Decompiler-FINIS-OMNIVM-IMPOSSIBILIVM\roms\fomt virgen.gba"
with open(ROM_PATH, "rb") as f:
    rom = f.read()

md = capstone.Cs(capstone.CS_ARCH_ARM, capstone.CS_MODE_THUMB)

SRC_DIR = r"j:\Laboratorio\harvest_moon_fomt_decomp\src"
func_sites = {}
for root, dirs, files in os.walk(SRC_DIR):
    for f in files:
        if f.endswith(".c"):
            path = os.path.join(root, f)
            with open(path, "r", encoding="utf-8", errors="ignore") as fp:
                lines = fp.readlines()
            for idx, line in enumerate(lines):
                if "UNRECOVERED_JUMPTABLE" in line:
                    for b in range(max(0, idx - 120), idx):
                        m = re.search(r"// Function:\s*([^\s@]+)\s*@\s*0x([0-9a-fA-F]+)", lines[b])
                        if m:
                            func_name = m.group(1)
                            addr = int(m.group(2), 16)
                            if addr not in func_sites:
                                func_sites[addr] = {"file": f, "func": func_name}

categories = {
    "epilogue_return": [],
    "jump_table_or_switch": [],
    "vtable_or_funcptr": [],
    "other": []
}

for addr, info in sorted(func_sites.items()):
    offset = addr - 0x08000000
    if offset < 0 or offset >= len(rom):
        categories["other"].append((addr, info, "out of bounds"))
        continue
    code = rom[offset:offset+512]
    instructions = list(md.disasm(code, addr))
    
    found_epilogue = False
    found_switch = False
    
    for i in range(len(instructions) - 1):
        inst = instructions[i]
        next_inst = instructions[i+1]
        
        if inst.mnemonic == "pop" and next_inst.mnemonic == "bx":
            found_epilogue = True
            break
            
        if inst.mnemonic in ["tbh", "tbb"] or (inst.mnemonic == "add" and "pc" in inst.op_str):
            found_switch = True
            break
        if inst.mnemonic == "ldr" and "pc" in inst.op_str and "pc" not in inst.op_str.split(",")[1]:
            found_switch = True
            break

    if found_epilogue:
        categories["epilogue_return"].append((addr, info))
    elif found_switch:
        categories["jump_table_or_switch"].append((addr, info))
    else:
        has_bx = any(inst.mnemonic == "bx" for inst in instructions)
        if has_bx:
            categories["vtable_or_funcptr"].append((addr, info))
        else:
            categories["other"].append((addr, info, "no bx found"))

print("=== CATEGORIZATION OF UNRECOVERED_JUMPTABLE SITES ===")
print("1. Epilogue Return (pop + bx):", len(categories["epilogue_return"]))
print("2. Real Switch / Jump Tables:", len(categories["jump_table_or_switch"]))
print("3. VTable / FuncPtr Call:", len(categories["vtable_or_funcptr"]))
print("4. Other:", len(categories["other"]))

print("\n-- Other --")
for item in categories["other"]:
    addr, info, reason = item
    print(f"  0x{addr:08X} ({info['file']}): {info['func']} - {reason}")

