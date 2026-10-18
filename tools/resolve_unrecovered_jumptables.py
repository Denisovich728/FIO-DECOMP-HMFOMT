#!/usr/bin/env python3
"""
=============================================================================
UNRECOVERED JUMPTABLE & EPILOGUE RESOLVER
=============================================================================
Author: Hermes (Antigravity Senior Engineering System)
Workspace: harvest_moon_fomt_decomp
=============================================================================
Resolves Ghidra false indirect jump calls caused by ARMv4T Thumb epilogue
returns (pop {rX}; bx rX), converting them into clean 'return' statements,
and renames legitimate indirect dispatch pointers (e.g. crt0 ctor loop,
script engine opcode dispatch) to descriptive names.
=============================================================================
"""

import os
import re

WORKSPACE_ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
SRC_DIR = os.path.join(WORKSPACE_ROOT, "src")

def resolve_file(filepath):
    with open(filepath, 'r', encoding='utf-8') as f:
        content = f.read()

    original = content

    # 1. Handle crt0 / static constructors loop in main.c
    if "main.c" in filepath:
        content = content.replace("code *UNRECOVERED_JUMPTABLE;", "code *init_func;")
        content = content.replace("UNRECOVERED_JUMPTABLE = (code *)*piVar2;", "init_func = (code *)*piVar2;")
        content = content.replace("bVar3 = UNRECOVERED_JUMPTABLE == (code *)0x0;", "bVar3 = init_func == (code *)0x0;")
        content = content.replace("(*UNRECOVERED_JUMPTABLE)();", "(*init_func)();")

    # 2. Handle ScriptEngine opcode dispatch table in script_engine.c
    if "script_engine.c" in filepath:
        content = content.replace("UNRECOVERED_JUMPTABLE = *(code **)((param_2 - 0x46U) * 4 + _DAT_0804da58);",
                                  "opcode_handler = *(code **)((param_2 - 0x46U) * 4 + _DAT_0804da58);")
        content = content.replace("uVar5 = (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE,_DAT_0804da58,uVar5);",
                                  "uVar5 = (*opcode_handler)(opcode_handler,_DAT_0804da58,uVar5);")

    # 3. Handle epilogue return calls with return value: (*UNRECOVERED_JUMPTABLE)(ret_val); return;
    content = re.sub(
        r'\(\*UNRECOVERED_JUMPTABLE\)\(([a-zA-Z0-9_]+)\);\s*return;',
        r'return \1;',
        content
    )

    # 4. Handle epilogue return calls with void return: (*UNRECOVERED_JUMPTABLE)(); return;
    content = re.sub(
        r'\(\*UNRECOVERED_JUMPTABLE\)\(\);\s*return;',
        r'return;',
        content
    )

    # 5. Handle epilogue return calls with multiple dummy params: (*UNRECOVERED_JUMPTABLE)(...); return;
    content = re.sub(
        r'\(\*UNRECOVERED_JUMPTABLE\)\([^;\n]+\);\s*return;',
        r'return;',
        content
    )

    # 6. Clean up unused 'code *UNRECOVERED_JUMPTABLE;' declarations
    # Only remove if UNRECOVERED_JUMPTABLE is no longer used in that function block
    lines = content.splitlines(keepends=True)
    cleaned_lines = []
    i = 0
    while i < len(lines):
        line = lines[i]
        if "code *UNRECOVERED_JUMPTABLE;" in line:
            # Look ahead up to 150 lines or next function to see if UNRECOVERED_JUMPTABLE is still referenced
            still_used = False
            for j in range(i + 1, min(len(lines), i + 150)):
                if lines[j].startswith("// Function:"):
                    break
                if "UNRECOVERED_JUMPTABLE" in lines[j]:
                    still_used = True
                    break
            if not still_used:
                # Omit this declaration line
                i += 1
                continue
            else:
                # If still used in script_engine opcode table, change type to opcode_handler
                if "script_engine.c" in filepath:
                    line = line.replace("code *UNRECOVERED_JUMPTABLE;", "code *opcode_handler;\n")
        cleaned_lines.append(line)
        i += 1

    content = "".join(cleaned_lines)

    if content != original:
        with open(filepath, 'w', encoding='utf-8') as f:
            f.write(content)
        rel = os.path.relpath(filepath, WORKSPACE_ROOT)
        print(f"  [+] Cleaned epilogues in {rel}")
        return True
    return False

def main():
    print("[*] Resolving UNRECOVERED_JUMPTABLE epilogues across codebase...")
    total_cleaned = 0
    for root, dirs, files in os.walk(SRC_DIR):
        for f in sorted(files):
            if f.endswith('.c'):
                p = os.path.join(root, f)
                if resolve_file(p):
                    total_cleaned += 1
    print(f"[SUCCESS] UNRECOVERED_JUMPTABLE resolution complete across {total_cleaned} files.")

if __name__ == "__main__":
    main()
