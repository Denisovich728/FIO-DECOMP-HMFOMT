#!/usr/bin/env python3
"""
=============================================================================
FIO DECOMPILER - TARGETED ROUTINE RUNNER CLI
=============================================================================
Author: Hermes (Antigravity Senior Engineering System)
User: Denisovich728
Workspace: harvest_moon_fomt_decomp
=============================================================================
Invokes Ghidra Headless with FioRoutineDecompiler.java on the pre-analyzed
fomt_virgen_ghidra project to decompile any routine with 4096-depth jump tables
and clean AST recovery.
=============================================================================
"""

import os
import sys
import json
import argparse
import subprocess

WORKSPACE_ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
SCRIPT_DIR = os.path.join(WORKSPACE_ROOT, "tools", "fio_decompiler")
DOCS_DIR = os.path.join(WORKSPACE_ROOT, "docs")
OUTPUT_DIR = os.path.join(WORKSPACE_ROOT, "output", "fio_decomp")

GHIDRA_CANDIDATES = [
    r"J:\Laboratorio\ghidra_12.1.4_PUBLIC\support\analyzeHeadless.bat",
    r"C:\Users\Denis\Downloads\ghidra_12.0.4_PUBLIC_20260303\ghidra_12.0.4_PUBLIC\support\analyzeHeadless.bat"
]

PROJECT_DIR = r"J:\Laboratorio\GBA-Decompiler-FINIS-OMNIVM-IMPOSSIBILIVM\ghidra_projects"
PROJECT_NAME = "fomt_virgen_ghidra"
PROGRAM_NAME = "fomt virgen.gba"

def find_ghidra_headless():
    for p in GHIDRA_CANDIDATES:
        if os.path.exists(p):
            return p
    raise FileNotFoundError("Ghidra analyzeHeadless.bat no fue encontrado.")

def load_master_map():
    map_path = os.path.join(DOCS_DIR, "master_symbol_map.json")
    if os.path.exists(map_path):
        with open(map_path, 'r', encoding='utf-8') as f:
            return json.load(f)
    return {}

def main():
    parser = argparse.ArgumentParser(description="FIO Decompiler Targeted Routine Runner")
    parser.add_argument("address", help="Routine start address in hex (e.g. 0x0803AEA0 or 0803AEA0)")
    parser.add_argument("--end", default="auto", help="Routine end address in hex or 'auto' (default: auto)")
    parser.add_argument("--name", default=None, help="Descriptive routine name (default: auto-lookup)")
    parser.add_argument("--out", default=None, help="Output C file path")
    
    args = parser.parse_args()

    # Normalize address
    raw_addr = args.address.strip()
    if raw_addr.startswith("0x") or raw_addr.startswith("0X"):
        addr_int = int(raw_addr, 16)
    else:
        addr_int = int(raw_addr, 16)
        raw_addr = f"0x{raw_addr}"

    addr_hex = f"0x{addr_int:08X}"

    mmap = load_master_map()
    func_name = args.name
    if not func_name:
        if addr_hex in mmap:
            func_name = mmap[addr_hex].get("canonical_name", f"Routine_{addr_int:08X}")
        else:
            func_name = f"Routine_{addr_int:08X}"

    if not args.out:
        os.makedirs(OUTPUT_DIR, exist_ok=True)
        out_file = os.path.join(OUTPUT_DIR, f"{func_name}.c")
    else:
        out_file = os.path.abspath(args.out)

    headless_bin = find_ghidra_headless()

    print("=============================================================================")
    print(" FIO DECOMPILER - TARGETED ROUTINE RUNNER")
    print("=============================================================================")
    print(f"[*] Address      : {addr_hex}")
    print(f"[*] End Address  : {args.end}")
    print(f"[*] Routine Name : {func_name}")
    print(f"[*] Output File  : {out_file}")
    print(f"[*] Ghidra Engine: {headless_bin}")
    print("=============================================================================")

    cmd = [
        headless_bin,
        PROJECT_DIR,
        PROJECT_NAME,
        "-process", PROGRAM_NAME,
        "-postScript", "FioRoutineDecompiler.java",
        addr_hex, args.end, func_name, out_file,
        "-scriptPath", SCRIPT_DIR,
        "-readOnly",
        "-noanalysis"
    ]

    print("[*] Ejecutando instancia headless de Ghidra...")
    res = subprocess.run(cmd, capture_output=True, text=True)
    
    # Print relevant output
    for line in res.stdout.splitlines():
        if any(tag in line for tag in ["[INFO]", "[*]", "[SUCCESS]", "[ERROR]", "[WARN]", "Decompilando"]):
            print(f"  {line}")

    if os.path.exists(out_file) and os.path.getsize(out_file) > 0:
        # Align symbols using master_symbol_map
        if mmap:
            with open(out_file, 'r', encoding='utf-8') as fp:
                code_text = fp.read()
            import re
            replace_patterns = {}
            for a_hex, sym_info in mmap.items():
                c_name = sym_info.get("canonical_name")
                raw_a = a_hex[2:].lower()
                raw_A = a_hex[2:].upper()
                for prefix in ["func_0x", "sub_0x", "func_", "sub_"]:
                    replace_patterns[f"{prefix}{raw_a}"] = c_name
                    replace_patterns[f"{prefix}{raw_A}"] = c_name
            # Replace function definition itself with target func_name
            replace_patterns[f"func_{addr_hex[2:].lower()}"] = func_name
            replace_patterns[f"func_{addr_hex[2:].upper()}"] = func_name
            
            sorted_p = sorted(replace_patterns.keys(), key=len, reverse=True)
            rx = re.compile(r'\b(' + '|'.join(map(re.escape, sorted_p)) + r')\b')
            code_text = rx.sub(lambda m: replace_patterns.get(m.group(0), m.group(0)), code_text)
            
            with open(out_file, 'w', encoding='utf-8') as fp:
                fp.write(code_text)
            print(f"[+] Simbolos alineados canonicamente en {out_file}")

        print(f"\n[SUCCESS] Rutina descompilada con exito en {out_file} ({os.path.getsize(out_file)} bytes)")
    else:
        print(f"\n[ERROR] No se pudo generar {out_file}")
        if res.stderr:
            print("STDERR:")
            print(res.stderr[:1000])

if __name__ == "__main__":
    main()
