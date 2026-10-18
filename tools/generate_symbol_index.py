#!/usr/bin/env python3
"""
Generate docs/SYMBOL_INDEX.md from docs/master_symbol_map.json
"""
import os
import json
from collections import defaultdict

WORKSPACE_ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
DOCS_DIR = os.path.join(WORKSPACE_ROOT, "docs")
MAP_FILE = os.path.join(DOCS_DIR, "master_symbol_map.json")
INDEX_FILE = os.path.join(DOCS_DIR, "SYMBOL_INDEX.md")

with open(MAP_FILE, 'r', encoding='utf-8') as f:
    master_map = json.load(f)

by_file = defaultdict(list)
for addr_str, info in sorted(master_map.items()):
    addr_int = int(addr_str, 16)
    target_file = info.get('file', 'external_subsystem')
    by_file[target_file].append((addr_int, info['canonical_name'], info.get('original_name', '')))

with open(INDEX_FILE, 'w', encoding='utf-8') as out:
    out.write("# Harvest Moon: Friends of Mineral Town - Complete Symbol Index\n\n")
    out.write(f"Total Mapped & Named Symbols: **{len(master_map)}** across all game subsystems.\n\n")
    out.write("This document provides an exhaustive, address-sorted index of all reversed routines, C++ class methods, hardware HAL handlers, and virtual machine calls in the 100% decompiled codebase.\n\n")

    for file_rel in sorted(by_file.keys()):
        symbols = by_file[file_rel]
        out.write(f"## Subsystem: {file_rel} ({len(symbols)} functions)\n\n")
        out.write("| Address | Canonical Symbol Name | Original Identifier |\n")
        out.write("| :--- | :--- | :--- |\n")
        for addr, canon, orig in sorted(symbols, key=lambda x: x[0]):
            out.write(f"| 0x{addr:08X} | {canon} | {orig} |\n")
        out.write("\n")

print(f"[+] Updated {INDEX_FILE} with {len(master_map)} symbols.")
