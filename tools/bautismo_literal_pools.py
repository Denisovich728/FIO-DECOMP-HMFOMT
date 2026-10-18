#!/usr/bin/env python3
"""
=============================================================================
BAUTISMO MASTER: GBA LITERAL POOLS & IO REGISTERS RESOLVER
=============================================================================
Author: Hermes (Antigravity Senior Engineering System)
Target: harvest_moon_fomt_decomp (Denisovich728)
=============================================================================
Sweeps the entire codebase and resolves literal pool pseudo-variables (_DAT_08XXXXXX)
into:
1. GBA Hardware IO Registers (REG_DISPCNT, REG_KEYINPUT, REG_DMA0SAD, etc.)
2. Known Master ROM Tables (gToolDefinitions, gCropFoodDefinitions, etc.)
3. Literal Scalar Constants (bitmasks, offsets, immediate values)
=============================================================================
"""

import os
import re
import struct

WORKSPACE_ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
SRC_DIR = os.path.join(WORKSPACE_ROOT, "src")
ROM_PATH = r"J:\Laboratorio\GBA-Decompiler-FINIS-OMNIVM-IMPOSSIBILIVM\roms\fomt virgen.gba"

with open(ROM_PATH, "rb") as f:
    ROM = f.read()

# Official GBA IO Registers
IO_REGS = {
    0x04000000: 'REG_DISPCNT',
    0x04000004: 'REG_DISPSTAT',
    0x04000006: 'REG_VCOUNT',
    0x04000008: 'REG_BG0CNT',
    0x0400000A: 'REG_BG1CNT',
    0x0400000C: 'REG_BG2CNT',
    0x0400000E: 'REG_BG3CNT',
    0x04000010: 'REG_BG0HOFS',
    0x04000012: 'REG_BG0VOFS',
    0x04000014: 'REG_BG1HOFS',
    0x04000016: 'REG_BG1VOFS',
    0x04000018: 'REG_BG2HOFS',
    0x0400001A: 'REG_BG2VOFS',
    0x0400001C: 'REG_BG3HOFS',
    0x0400001E: 'REG_BG3VOFS',
    0x04000020: 'REG_BG2PA',
    0x04000022: 'REG_BG2PB',
    0x04000024: 'REG_BG2PC',
    0x04000026: 'REG_BG2PD',
    0x04000030: 'REG_WIN0H',
    0x04000032: 'REG_WIN1H',
    0x04000034: 'REG_WIN0V',
    0x04000036: 'REG_WIN1V',
    0x04000038: 'REG_WININ',
    0x0400003A: 'REG_WINOUT',
    0x04000040: 'REG_BLDCNT',
    0x04000044: 'REG_BLDALPHA',
    0x04000048: 'REG_BLDY',
    0x04000080: 'REG_SOUND1CNT_L',
    0x04000082: 'REG_SOUND1CNT_H',
    0x04000084: 'REG_SOUND1CNT_X',
    0x04000088: 'REG_SOUND2CNT_L',
    0x0400008C: 'REG_SOUND2CNT_H',
    0x04000090: 'REG_SOUND3CNT_L',
    0x04000092: 'REG_SOUND3CNT_H',
    0x04000094: 'REG_SOUND3CNT_X',
    0x04000098: 'REG_SOUND4CNT_L',
    0x0400009C: 'REG_SOUND4CNT_H',
    0x040000A0: 'REG_SOUNDCNT_L',
    0x040000A2: 'REG_SOUNDCNT_H',
    0x040000A4: 'REG_SOUNDCNT_X',
    0x040000B0: 'REG_DMA0SAD',
    0x040000B4: 'REG_DMA0DAD',
    0x040000B8: 'REG_DMA0CNT_L',
    0x040000BA: 'REG_DMA0CNT_H',
    0x040000BC: 'REG_DMA1SAD',
    0x040000C0: 'REG_DMA1DAD',
    0x040000C4: 'REG_DMA1CNT_L',
    0x040000C6: 'REG_DMA1CNT_H',
    0x040000C8: 'REG_DMA2SAD',
    0x040000CC: 'REG_DMA2DAD',
    0x040000D0: 'REG_DMA2CNT_L',
    0x040000D2: 'REG_DMA2CNT_H',
    0x040000D4: 'REG_DMA3SAD',
    0x040000D8: 'REG_DMA3DAD',
    0x040000DC: 'REG_DMA3CNT_L',
    0x040000DE: 'REG_DMA3CNT_H',
    0x04000100: 'REG_TM0CNT_L',
    0x04000102: 'REG_TM0CNT_H',
    0x04000104: 'REG_TM1CNT_L',
    0x04000106: 'REG_TM1CNT_H',
    0x04000108: 'REG_TM2CNT_L',
    0x0400010A: 'REG_TM2CNT_H',
    0x0400010C: 'REG_TM3CNT_L',
    0x0400010E: 'REG_TM3CNT_H',
    0x04000130: 'REG_KEYINPUT',
    0x04000132: 'REG_KEYCNT',
    0x04000200: 'REG_IE',
    0x04000202: 'REG_IF',
    0x04000204: 'REG_WAITCNT',
    0x04000208: 'REG_IME'
}

# Known Master ROM Tables
ROM_TABLES = {
    0x080EAB0C: 'gToolDefinitions',
    0x080EDCD8: 'gCropFoodDefinitions',
    0x080EFED4: 'gMineralMiscDefinitions',
    0x0804DA58: 'gScriptOpcodeTable',
    0x0802005C: 'gEntity_WorldActorsTable',
    0x0803F838: 'gScript_DefaultDialogContext',
    0x080868DC: 'gAnimal_DefaultSuffix',
    0x080868CC: 'gAnimal_SoundProfile',
    0x080E5A0C: 'gSystem_JumpTable',
    0x08107204: 'gNPC_ScheduleTable',
    0x08107540: 'gNPC_DialogTable',
    0x0809C178: 'gNPC_GiftReactionTable'
}

def build_replacement_dictionary():
    print("[*] Analyzing ROM literal pools...")
    replace_dict = {}

    # Scan all C files to collect all _DAT_08XXXXXX
    all_dats = set()
    for root, dirs, files in os.walk(SRC_DIR):
        for f in files:
            if f.endswith('.c'):
                with open(os.path.join(root, f), 'r', encoding='utf-8', errors='ignore') as fp:
                    matches = re.findall(r'_?DAT_(08[0-9a-fA-F]{6})', fp.read())
                    all_dats.update(matches)

    print(f"[*] Found {len(all_dats)} unique literal pool entries in codebase.")

    io_count = 0
    table_count = 0
    scalar_count = 0

    for hex_addr in all_dats:
        addr = int(hex_addr, 16)
        offset = addr - 0x08000000
        if offset < 0 or offset > len(ROM) - 4:
            continue
        val = struct.unpack('<I', ROM[offset:offset+4])[0]

        # 1. IO Register
        if 0x04000000 <= val <= 0x040003FE:
            reg = IO_REGS.get(val, f"((void *)0x{val:08X})")
            replace_dict[f"_DAT_08{offset:06X}"] = reg
            replace_dict[f"_DAT_08{offset:06x}"] = reg
            replace_dict[f"DAT_08{offset:06X}"] = reg
            replace_dict[f"DAT_08{offset:06x}"] = reg
            io_count += 1

        # 2. Known ROM Table
        elif val in ROM_TABLES:
            tbl = ROM_TABLES[val]
            replace_dict[f"_DAT_08{offset:06X}"] = tbl
            replace_dict[f"_DAT_08{offset:06x}"] = tbl
            replace_dict[f"DAT_08{offset:06X}"] = tbl
            replace_dict[f"DAT_08{offset:06x}"] = tbl
            table_count += 1

        # 3. Known Data Table in ROM (> 0x080E0000)
        elif 0x080E0000 <= val <= 0x0815FFFF:
            tbl = f"gRomData_08{val-0x08000000:06X}"
            replace_dict[f"_DAT_08{offset:06X}"] = tbl
            replace_dict[f"_DAT_08{offset:06x}"] = tbl
            replace_dict[f"DAT_08{offset:06X}"] = tbl
            replace_dict[f"DAT_08{offset:06x}"] = tbl
            table_count += 1

        # 4. IWRAM Globals
        elif 0x03000000 <= val <= 0x03007FFF:
            name = f"gIWRAM_03{val-0x03000000:04X}"
            if val == 0x03000400:
                name = "gIWRAM_SramBuffer"
            elif val == 0x0300040C:
                name = "gIWRAM_PedometerStepCount"
            replace_dict[f"_DAT_08{offset:06X}"] = name
            replace_dict[f"_DAT_08{offset:06x}"] = name
            replace_dict[f"DAT_08{offset:06X}"] = name
            replace_dict[f"DAT_08{offset:06x}"] = name
            table_count += 1

        # 5. EWRAM Globals
        elif 0x02000000 <= val <= 0x0203FFFF:
            name = f"gEWRAM_02{val-0x02000000:04X}"
            replace_dict[f"_DAT_08{offset:06X}"] = name
            replace_dict[f"_DAT_08{offset:06x}"] = name
            replace_dict[f"DAT_08{offset:06X}"] = name
            replace_dict[f"DAT_08{offset:06x}"] = name
            table_count += 1

        # 6. ROM Compressed Graphics & Tilemaps (> 0x08160000)
        elif 0x08160000 <= val <= 0x087FFFFF:
            name = f"gRomGfx_08{val-0x08000000:06X}"
            replace_dict[f"_DAT_08{offset:06X}"] = name
            replace_dict[f"_DAT_08{offset:06x}"] = name
            replace_dict[f"DAT_08{offset:06X}"] = name
            replace_dict[f"DAT_08{offset:06x}"] = name
            table_count += 1

        # 7. Inline Jump Tables / Case Targets
        elif val == addr + 4:
            name = f"gInlineTable_08{val-0x08000000:06X}"
            replace_dict[f"_DAT_08{offset:06X}"] = name
            replace_dict[f"_DAT_08{offset:06x}"] = name
            replace_dict[f"DAT_08{offset:06X}"] = name
            replace_dict[f"DAT_08{offset:06x}"] = name
            table_count += 1

        # 8. Other ROM Tables
        elif 0x08000000 <= val <= 0x08FFFFFF:
            name = f"gRomTable_08{val-0x08000000:06X}"
            replace_dict[f"_DAT_08{offset:06X}"] = name
            replace_dict[f"_DAT_08{offset:06x}"] = name
            replace_dict[f"DAT_08{offset:06X}"] = name
            replace_dict[f"DAT_08{offset:06x}"] = name
            table_count += 1

        # 9. Scalar Constant (Bitmask, Small Number, Coordinate)
        else:
            if val <= 0xFFFF:
                val_repr = f"0x{val:X}"
            elif val >= 0xFFFF0000:
                val_repr = f"0x{val:08X}"
            else:
                val_repr = f"0x{val:08X}"

            replace_dict[f"_DAT_08{offset:06X}"] = val_repr
            replace_dict[f"_DAT_08{offset:06x}"] = val_repr
            replace_dict[f"DAT_08{offset:06X}"] = val_repr
            replace_dict[f"DAT_08{offset:06x}"] = val_repr
            scalar_count += 1

    # Also map misplaced NPC routines in animals.c & npc.c
    npc_routines = {
        'Animal_Routine_0809B104': 'Actor_CopyLocation',
        'Animal_Routine_0809B114': 'Actor_CopyLocation2',
        'Animal_Routine_0809B1A4': 'Actor_ClearLocation',
        'Animal_Routine_0809B240': 'NPC_SetName',
        'Animal_Routine_0809B278': 'NPC_SetTalkedToday',
        'Animal_Routine_0809B290': 'NPC_SetGiftGivenToday',
        'Animal_Routine_0809B2A8': 'NPC_AddFriendship',
        'Animal_Routine_0809B2DC': 'NPC_ReduceFriendship',
        'Animal_Routine_0809B2E8': 'NPC_DailyUpdate',
        'Animal_Routine_0809B32C': 'NPC_ResetLocation',
        'Animal_Routine_0809B350': 'NPC_ResetLocation2',
        'Animal_Routine_0809B388': 'NPC_AddAffection',
        'Animal_Routine_0809B3A4': 'NPC_ReduceAffection',
        'Animal_Routine_0809B3C8': 'NPC_DailyAffectionDecay',
        'Animal_Routine_0809B65C': 'NPC_SetHeartEventFlag',
        'Animal_Routine_0809B828': 'NPC_ClearDailyFlags',
        'Animal_Routine_0809B870': 'NPC_ClearDailyFlags2',
        'Animal_Routine_0809B970': 'NPC_SetScheduleFlags',
        'Animal_Routine_0809B9D4': 'NPC_InitScheduleWaypoint',
        'Animal_Routine_0809BA8C': 'NPC_UpdateScheduleWaypoint',
        'NPC_Routine_0809C068': 'NPC_ReduceMood',
        'NPC_Routine_0809C098': 'NPC_GetFacingDirection',
        'NPC_Routine_0809C0D4': 'NPC_ResetScheduleWaypoint',
        'NPC_Routine_0809C144': 'NPC_ClearWaypoints',
        'NPC_Routine_0809C160': 'NPC_EvaluateGiftReaction'
    }
    replace_dict.update(npc_routines)

    print(f"[+] Prepared replacements:")
    print(f"    - IO Registers     : {io_count}")
    print(f"    - ROM Data Tables  : {table_count}")
    print(f"    - Scalar Constants : {scalar_count}")
    print(f"    - NPC Routines     : {len(npc_routines)}")
    print(f"    - Total Patterns   : {len(replace_dict)}")
    return replace_dict

def apply_replacements(replace_dict):
    print("[*] Applying literal pool bautismo across source tree...")
    sorted_keys = sorted(replace_dict.keys(), key=len, reverse=True)
    regex = re.compile(r'\b(' + '|'.join(map(re.escape, sorted_keys)) + r')\b')

    modified_files = 0
    for root, dirs, files in os.walk(SRC_DIR):
        for f in sorted(files):
            if f.endswith('.c'):
                path = os.path.join(root, f)
                with open(path, 'r', encoding='utf-8') as fp:
                    content = fp.read()

                new_content = regex.sub(lambda m: replace_dict.get(m.group(0), m.group(0)), content)
                
                # Clean up &UNK_... pointer/offset artifacts into numeric literals
                new_content = re.sub(r'&_?UNK_0000([0-9a-fA-F]{4})\b', r'0x\1', new_content)
                new_content = re.sub(r'&_?UNK_0000([0-9a-fA-F]{2})\b', r'0x\1', new_content)
                new_content = re.sub(r'&_?UNK_([0-9a-fA-F]+)\b', r'0x\1', new_content)
                new_content = re.sub(r'_?UNK_0000([0-9a-fA-F]{4})\b', r'UNK_0x\1', new_content)
                new_content = re.sub(r'_?UNK_0000([0-9a-fA-F]{2})\b', r'UNK_0x\1', new_content)

                if new_content != content:
                    with open(path, 'w', encoding='utf-8') as fp:
                        fp.write(new_content)
                    rel = os.path.relpath(path, WORKSPACE_ROOT)
                    print(f"  [+] Bautizados simbolos en {rel}")
                    modified_files += 1

    print(f"[SUCCESS] Literal pool bautismo complete across {modified_files} files.")

if __name__ == "__main__":
    r_dict = build_replacement_dictionary()
    apply_replacements(r_dict)
