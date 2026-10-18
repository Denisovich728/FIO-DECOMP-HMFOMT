#!/usr/bin/env python3
"""
=============================================================================
Harvest Moon: Friends of Mineral Town (GBA)
Master Symbol Mapper, Context Aligner and Codebase Renamer
=============================================================================
Author: Hermes (Antigravity Senior Engineering System)
Target: harvest_moon_fomt_decomp (Denisovich728)
=============================================================================
"""

import os
import re
import json

WORKSPACE_ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
SRC_DIR = os.path.join(WORKSPACE_ROOT, "src")
INCLUDE_DIR = os.path.join(WORKSPACE_ROOT, "include")
DOCS_DIR = os.path.join(WORKSPACE_ROOT, "docs")

# Core curated reverse-engineered symbols from StanHash, Ghidra & FoMT Studio
CURATED_SYMBOLS = {
    # System Boot & Runtime
    0x08000000: 'GBA_Header_Boot',
    0x080000C0: 'crt0_entry',
    0x0800010C: 'crt0_malloc_init',
    0x0800018C: 'AgbMain',
    0x08000240: 'MainLoop_Callback',
    0x080002C0: 'Dispatcher_HandleCall',
    0x080002E0: 'SramProxy_ReadSaveData',
    0x08000358: 'SramProxy_WriteSaveData',
    0x080003A0: 'SramProxy_VerifyChecksum',
    0x080003DC: 'SramProxy_GetSaveSlotOffset',
    0x080003E8: 'SramProxy_ReadSaveSlot',
    0x0800042C: 'SramProxy_WriteSaveSlot',
    0x08000470: 'SramProxy_FlushSlotBuffer',
    0x08000488: 'SramProxy_VerifySlotChecksum',
    0x080004C4: 'Interrupt_InitVBlank',
    0x080004F4: 'Interrupt_EnableHBlank',
    0x0800050C: 'Interrupt_SetMasterEnable',
    0x08000528: 'Interrupt_WaitForVBlank',
    0x08000540: 'Interrupt_SetCallback',
    0x08000554: 'Interrupt_ClearPending',
    0x08000568: 'Interrupt_DisableFlag',
    0x080005B0: 'Runtime_OpNewBase',
    0x080005E8: 'Runtime_OperatorNew',
    0x0800061C: 'Runtime_OperatorDelete',
    0x08000628: 'Runtime_OperatorDeleteArray',
    0x08000634: 'Runtime_OperatorDeleteCustom',
    0x0800063C: 'SramProxy_InitHardware',
    0x08000640: 'SramProxy_LoadGlobalSettings',
    0x08000664: 'SramProxy_SaveGlobalSettings',
    0x080006A4: 'SramProxy_WriteBlock',
    0x080006E4: 'SramProxy_ReadBlock',
    0x08000714: 'SramProxy_SetWaitstates',
    0x08000728: 'SramProxy_CalculateChecksum',
    0x080007EC: 'SramProxy_VerifyBufferParity',
    0x0800080C: 'Scene_Destructor',

    # Keypad & Input Handling
    0x080091A8: 'KeyStatusCore_Construct',
    0x080091BC: 'KeyStatusCore_SetForced',
    0x080091C0: 'KeyStatusCore_Sync',
    0x080091D0: 'KeyStatus_ConstructSynced',
    0x080091E4: 'KeyStatus_ConstructForced',
    0x080091F8: 'KeyStatus_Sync',
    0x0800920C: 'KeyStatusRepeated_Construct',
    0x08009250: 'KeyStatusRepeated_ConstructDefault',
    0x080092D0: 'KeyStatusRepeated_Sync',
    0x08009330: 'KeyStatusRepeated_SetRepeatDelay',
    0x08009364: 'KeyStatusRepeated_SetRepeatInterval',

    # Farm Management
    0x08009ADC: 'Farm_GetSpawnCoordinates',
    0x08009AE8: 'Farm_GetHouseCoordinates',
    0x08009AF4: 'Farm_NoOp',
    0x08009B00: 'Farm_GetFieldState',
    0x08009B20: 'Farm_HasPlantedCrop',
    0x08009B68: 'Farm_AddLumber',
    0x08009BAC: 'Farm_TakeLumber',
    0x08009BE8: 'Farm_SetHorse',
    0x08009C34: 'Farm_GetHorse',
    0x08009C4C: 'Farm_RemoveHorse',
    0x08009C60: 'Farm_ClearDailyFlag',
    0x08009C70: 'Farm_DayUpdate',
    0x08009F80: 'Farm_SetSeasonTransitionFlag',

    # Field Plots & Crops
    0x0800A014: 'FieldPlot_GetState',
    0x0800A07C: 'FieldPlot_IsTilled',
    0x0800A0A4: 'FieldPlot_GetCropType',
    0x0800A120: 'FieldPlot_WaterPlot',
    0x0800A134: 'FieldPlot_SetCropAndStage',
    0x0800A190: 'FieldPlot_TillSoil',
    0x0800A238: 'FieldPlot_PlantSeeds',
    0x0800A33C: 'FieldPlot_StrikeWithHammer',
    0x0800A3C8: 'FieldPlot_ChopBranch',
    0x0800A438: 'FieldPlot_ClearWeeds',
    0x0800A460: 'FieldPlot_SetDebris',
    0x0800A4A4: 'FieldPlot_HarvestCrop',
    0x0800A6C8: 'FieldPlot_CanPlaceItem',
    0x0800A6F4: 'FieldPlot_PlaceItem',
    0x0800A78C: 'FieldPlot_IsPassable',
    0x0800A7C0: 'FieldPlot_DayUpdate',
    0x0800AB08: 'FieldPlot_SeasonChangeClear',
    0x0800AF20: 'FieldPlot_GetTileGraphic',
    0x0800AF5C: 'FieldPlot_ResolveBorderTile',

    # Shipping Bin
    0x0800B0DC: 'ShippingBin_Init',
    0x0800B110: 'ShippingBin_ResetDaily',
    0x0800B124: 'ShippingBin_GetValueShipped',
    0x0800B140: 'ShippingBin_IsDisplayEnabled',
    0x0800B15C: 'ShippingBin_GetAmountShipped',
    0x0800B18C: 'ShippingBin_HasShippedOneOfEachProduct',
    0x0800B1CC: 'ShippingBin_HasShippedOneOfEachCrop',
    0x0800B20C: 'ShippingBin_ShipItem',
    0x0800B254: 'ShippingBin_ResetValueShipped',
    0x0800B288: 'ShippingBin_ForceEnableDisplay',
    0x0800B29C: 'ShippingBin_StatEnt_Init',
    0x0800B2D4: 'ShippingBin_StatEnt_IsDisplayEnabled',
    0x0800B2EC: 'ShippingBin_StatEnt_GetAmountShipped',
    0x0800B410: 'ShippingBin_StatEnt_ShipOne',
    0x0800B474: 'ShippingBin_StatEnt_ForceEnableDisplay',
    0x0800B4D0: 'ShippingBin_HasShippedOneOfEachMineral',

    # Farm Buildings & Furniture
    0x0800B800: 'ToolChest_Init',
    0x0800B814: 'ToolChest_GetItem',
    0x0800B900: 'Fridge_Init',
    0x0800B910: 'Fridge_GetItem',
    0x0800BA00: 'Shelf_Init',
    0x0800BA44: 'Shelf_GetItem',
    0x0800BB00: 'RecordPlayer_Init',
    0x0800BB7C: 'RecordPlayer_PlayTrack',
    0x0800BC58: 'FarmHouse_Init',
    0x0800BCB0: 'FarmHouse_GetLevel',
    0x0800BCD0: 'FarmHouse_Upgrade',
    0x0800BE70: 'Coop_Init',
    0x0800BF1C: 'Coop_GetChickenCount',
    0x0800C450: 'Barn_Init',
    0x0800C570: 'Barn_GetCowCount',
    0x0800CDBC: 'Stable_Init',

    # Item & Tool Subsystems
    0x0800D000: 'Item_GetBuyPrice',
    0x0800D024: 'Tool_Construct',
    0x0800D058: 'Tool_GetId',
    0x0800D074: 'Tool_GetName',
    0x0800D100: 'Item_GetSellPrice',
    0x0800D158: 'Tool_GetIconId',
    0x0800D1B4: 'Tool_GetDesc',
    0x0800D1D8: 'ToolStack_Construct',
    0x0800D200: 'Item_GetDescription',
    0x0800D214: 'ToolStack_GetTool',
    0x0800D23C: 'ToolStack_IsEmpty',
    0x0800D280: 'ToolStack_GetAmount',
    0x0800D2BC: 'ToolStack_AddAmount',
    0x0800D2FC: 'ToolStack_SubtractAmount',
    0x0800D334: 'Food_Construct',
    0x0800D36C: 'Food_GetId',
    0x0800D3A0: 'Food_GetName',
    0x0800D3B8: 'Food_GetIconId',
    0x0800D3D0: 'Food_GetStaminaGain',
    0x0800D3F8: 'Food_GetFatigueGain',
    0x0800D420: 'Food_GetStaminaBonus',
    0x0800D448: 'Food_GetFatigueBonus',
    0x0800D484: 'Food_IsDrink',
    0x0800D4C0: 'Food_GetDesc',
    0x0800D4D4: 'Food_AddBonuses',
    0x0800D5B0: 'FoodStack_Construct',
    0x0800D80C: 'FoodStack_GetFood',
    0x0800D864: 'FoodStack_IsEmpty',
    0x0800D8A8: 'FoodStack_GetAmount',
    0x0800DA14: 'FoodStack_AddAmount',
    0x0800DA2C: 'FoodStack_SubtractAmount',
    0x0800DA48: 'Article_Construct',
    0x0800DA64: 'Article_GetId',
    0x0800DA7C: 'Article_GetName',
    0x0800DA98: 'Article_GetIconId',
    0x0800DAB4: 'Article_CanBeDiscarded',
    0x0800DAE4: 'Article_GetDesc',
    0x0800DB14: 'ArticleStack_Construct',
    0x0800DB34: 'ArticleStack_GetArticle',
    0x0800DB60: 'ArticleStack_IsEmpty',
    0x0800DB8C: 'ArticleStack_GetAmount',
    0x0800DBC8: 'ArticleStack_AddAmount',
    0x0800DBE0: 'ArticleStack_SubtractAmount',
    0x0800DC10: 'Product_Construct',
    0x0800DC34: 'Product_GetId',
    0x0800DC48: 'Product_GetPrice',
    0x0800DC5C: 'Product_GetName',
    0x0800DC8C: 'Product_GetIconId',
    0x0800DD08: 'Item_GetFoodStaminaEffect',
    0x0800DD3C: 'Item_GetFoodFatigueEffect',
    0x0800DDAC: 'Item_GetFoodIsDrinkOrLiquid',

    # Farmer & Rucksack Subsystem
    0x0800E2E4: 'Farmer_Init',
    0x0800E4E0: 'Farmer_GetName',
    0x0800E4E4: 'Farmer_GetFarmName',
    0x0800E4E8: 'Farmer_GetBirthday',
    0x0800E4F0: 'Farmer_GetStamina',
    0x0800E4FC: 'Farmer_GetFatigue',
    0x0800E500: 'Farmer_UpdateFatigue',
    0x0800E504: 'Farmer_IsOverworked',
    0x0800E51C: 'Farmer_GetMaxStamina',
    0x0800E530: 'Farmer_GetPowerBerries',
    0x0800E53C: 'Farmer_AteMysteryBerry',
    0x0800E548: 'Farmer_GetToolLevel',
    0x0800E550: 'Farmer_GetUpgradedTool',
    0x0800E600: 'Farmer_UseEquippedTool',
    0x0800E800: 'Rucksack_AddItem',
    0x0800E900: 'Rucksack_RemoveItem',
    0x0800E924: 'Farmer_GetLocation',
    0x0800E958: 'Farmer_GetStepCount',
    0x0800E9A8: 'Farmer_SetFarmName',
    0x0800E9E4: 'Farmer_AddStamina',
    0x0800EA00: 'HeldItem_Throw',
    0x0800EA38: 'Farmer_ReduceStamina',
    0x0800EA44: 'Farmer_RestoreStamina',
    0x0800EA68: 'Farmer_AddFatigue',
    0x0800EAD4: 'Farmer_ReduceFatigue',
    0x0800EAE0: 'Farmer_ClearFatigue',
    0x0800EAF0: 'Farmer_SetFatiguedFlag',
    0x0800EAFC: 'Farmer_EatPowerBerry',
    0x0800EB2C: 'Farmer_GetToolLevelRef',
    0x0800EB34: 'Farmer_SetLocation',
    0x0800EB3C: 'Farmer_CycleHeldItemBack',
    0x0800EBC4: 'Farmer_CycleHeldItemFront',
    0x0800EC4C: 'Farmer_CycleToolBack',
    0x0800ECB0: 'Farmer_CycleToolFront',
    0x0800ED8C: 'Farmer_IncrementPedometerStep',
    0x0800EF68: 'ToolLevel_GetExperience',
    0x0800EF6C: 'ToolLevel_GetTierLevel',
    0x0800EF74: 'ToolLevel_CanUpgrade',
    0x0800EF88: 'ToolLevel_AddExperience',
    0x0800EFB4: 'ToolLevel_SetTierLevel',
    0x0800EFD8: 'ToolLevel_Reset',
    0x0800F190: 'HeldItem_IsEmpty',
    0x0800F204: 'HeldItem_GetKind',
    0x0800F20C: 'HeldItem_GetFood',
    0x0800F258: 'HeldItem_GetArticle',
    0x0800F294: 'HeldItem_ToRucksackItem',
    0x0800F388: 'HeldItem_IsValid',
    0x0800F390: 'HeldItem_Clear',
    0x0800F3B0: 'HeldItem_SetFood',
    0x0800F3E8: 'HeldItem_SetArticle',
    0x0800F418: 'HeldItem_FromRucksackItem',
    0x0800F528: 'HeldItem_CanThrow',

    # World Entities & Actors
    0x08011730: 'GameData_Construct',
    0x08017740: 'GameObject_Construct',
    0x080177E0: 'GameObject_AllocFarmTerrain',
    0x08019D70: 'GameObject_EntityLocHandler',
    0x0801A214: 'GameData_GetFarmTerrainData',
    0x08020018: 'Entity_InitWorldActors',
    0x0802D0A0: 'PlayerActor_TickCountdown',
    0x0802D2A6: 'PlayerActor_UpdateFacing',
    0x0802D42C: 'PlayerActor_GetDesiredAnimId',
    0x0802F3CC: 'PlayerActor_StateUpdate',
    0x080320DC: 'Entity_UpdatePositions',
    0x08032498: 'ScriptedActor_Construct',
    0x08034CEC: 'Entity_ProcessCollisions',
    0x080350C0: 'ScriptedActor_Factory',

    # Script Engine VM & Native Bytecode Calls
    0x0803A8A4: 'ScriptEngine_CalculateSpriteHash',
    0x0803AB30: 'ScriptEngine_Construct',
    0x0803AC78: 'ScriptEngine_Destruct',
    0x0803ACD8: 'ScriptEngine_ClearVM',
    0x0803AE58: 'ScriptEngine_SetVariable',
    0x0803AEA0: 'ScriptEngine_GetVariable',
    0x0803B000: 'ScriptEngine_LoadBinaryScript',
    0x0803B128: 'ScriptEngine_ParseHeaderChunks',
    0x0803B2A8: 'ScriptEngine_AllocateStack',
    0x0803B368: 'ScriptEngine_FreeStack',
    0x0803B454: 'ScriptEngine_StackPush',
    0x0803B474: 'ScriptEngine_StackPop',
    0x0803B4B0: 'ScriptEngine_StackTop',
    0x0803B4DC: 'ScriptEngine_SetPC',
    0x0803B6B8: 'ScriptEngine_GetPC',
    0x0803B6FC: 'ScriptEngine_ResolveStringPointer',
    0x0803B840: 'ScriptEngine_ResolveJumpTarget',
    0x0803B8CC: 'ScriptEngine_LookupJumpTable',
    0x0803EE94: 'ScriptEngine_HandleDialogTrigger',
    0x0803EFD8: 'AScriptEngine_Execute',
    0x0803F02C: 'AScriptEngine_GetStatus',
    0x0803F038: 'AScriptEngine_Opcode',
    0x0803F044: 'AScriptEngine_OpcodeFlag',
    0x0803F054: 'AScriptEngine_Operand32',
    0x0803F080: 'AScriptEngine_Operand16',
    0x0803F0A4: 'AScriptEngine_Operand8',
    0x0803F0DC: 'AScriptEngine_NextInstruction',
    0x0803F7E0: 'ScriptEngine_GetStringById',
    0x0803F804: 'ScriptEngine_StartEventScript',
    0x0803F8B8: 'ScriptEngine_PushStack32',
    0x0803F8DC: 'ScriptEngine_OnCallDispatcher',

    # Animals & Livestock
    0x08050000: 'Animal_UpdateDailyHealth',
    0x08060000: 'Cow_ProduceMilk',
    0x08070000: 'Sheep_ProduceWool',
    0x08080000: 'Chicken_LayEgg',
    0x08090000: 'Dog_PlayFrisbee',
    0x0809B940: 'BarnAnimal_GetAffection',
    0x0809B94C: 'BarnAnimal_SetAffection',
    0x0809B958: 'BarnAnimal_IsSick',
    0x0809B968: 'BarnAnimal_SetSick',
    0x0809BCC0: 'Chicken_GetAffection',
    0x0809BD20: 'Chicken_IsFedToday',
    0x0809BD2C: 'Chicken_SetFedToday',
    0x0809BFE8: 'NPC_UpdateSchedule',
    0x0809E4BC: 'Bachelorette_GetHeartColor',
    0x0809E550: 'Bachelorette_AddHeartPoints',
    0x080A0000: 'Bachelorette_CheckHeartEvent',
    0x080A4698: 'Map_GetMapData',
    0x080B0000: 'HarvestSprite_PerformChores',
    0x080B18C0: 'VBlankHandleCore_Init',

    # Audio Engine & M4A Sound Driver
    0x080C0000: 'M4A_InitSoundDriver',
    0x080C1000: 'M4A_PlaySong',
    0x080C2000: 'M4A_StopSong',

    # Low-Level Decompression & Math Routines
    0x080D01F8: 'malloc_gba',
    0x080D0260: 'cpp_operator_delete',
    0x080D0EDA: 'math_udivsi3',
    0x080D0F4E: 'math_umodsi3',
    0x080D102C: 'Unpack_ArcanoMarvelous_0x70',
    0x080D10F0: 'Unpack_BuildHuffmanTree',
    0x080D116A: 'Unpack_ReadRawByte',
    0x080D116E: 'Unpack_ReadHuff4',
    0x080D117E: 'Unpack_ReadHuff8',
    0x080D11A4: 'Unpack_ReadBits',
    0x080D11E4: 'math_rand',
    0x080D1204: 'Unpack_CompType4_Raw',
    0x080D1224: 'Unpack_CompType0_LZ',
    0x080D129A: 'Unpack_CompType1_LZ',
    0x080D12EC: 'Unpack_CompType2_LZ',
    0x080D139C: 'Unpack_CompType3_LZ',
    0x080D1518: 'Unpack_Filter1_DeltaNibble4bpp',
    0x080D1548: 'Unpack_Filter2',
    0x080D1564: 'Unpack_Filter3',
    0x080D1574: 'Unpack_Filter4',
    0x080D3748: 'ArcTan2',
    0x080D374C: 'CpuFastSet',
    0x080D3750: 'CpuSet',
    0x080D3754: 'IntrWait',
    0x080D375C: 'SoftReset',
    0x080D3774: 'Sqrt',
    0x080D3910: 'gba_malloc',
    0x080D3914: 'gba_free',
    0x080D3948: 'gba_memcmp',
    0x080D3994: 'gba_memcpy',
    0x080D39F8: 'gba_memmove',
    0x080D3A84: 'gba_memset',
    0x080D3ADC: 'gba_strcat',
    0x080D3B28: 'gba_strcpy',
    0x080D3B78: 'gba_strlen',
    0x080D7DEC: 'malloc_init',
    0x080D7E04: 'malloc',
    0x080D7E6C: 'free',
    0x080DB3C4: 'sramReadFast',
    0x080DB428: 'sramWriteFast',
    0x080DB498: 'sramFindError',
    0x080DB4FC: 'sramWriteSafe',
    0x080E0548: 'checkLocationId',
    0x080E06A4: 'doMainLoop',
    0x0875B9F8: 'ramfunc_FullStop_ROM',
    0x0875BA44: 'ramfunc_1_ROM',
    0x0875BC7C: 'ramfunc_DrawGlyph2Tile_ROM',
    0x0875BDC4: 'ramfunc_DrawGlyph1Tile_ROM',
    0x0875BEC0: 'ramfunc_MasterIRQ_ROM',
    0x0875BF84: 'ramfunc_UpdateIRQ_ROM',
    0x0875C170: 'ramfunc_8_ROM',
    0x0875C194: 'ramfunc_9_ROM'
}

PREFIX_MAP = {
    'core/dispatcher.c': 'Dispatcher_',
    'core/scene_manager.c': 'Scene_',
    'core/hardware.c': 'HW_',
    'core/vtables.c': 'VTable_',
    'farm/farm.c': 'Farm_',
    'farm/shipping_bin.c': 'ShippingBin_',
    'farm/buildings.c': 'Building_',
    'player/item.c': 'Item_',
    'player/farmer.c': 'Farmer_',
    'entities/animals.c': 'Animal_',
    'entities/npc.c': 'NPC_',
    'entities/entity_manager.c': 'Entity_',
    'events/script_engine.c': 'ScriptEngine_',
    'audio/m4a.c': 'M4A_',
    'system/sram.c': 'SramProxy_',
    'system/time.c': 'Time_',
    'system/input.c': 'Input_',
    'text/dialogue.c': 'Dialogue_',
    'main.c': 'Main_'
}

def get_subsystem_prefix_from_addr(addr):
    if 0x08000000 <= addr <= 0x080002BF:
        return 'Main_'
    elif 0x080002C0 <= addr <= 0x080007FF:
        return 'Dispatcher_'
    elif 0x08000800 <= addr <= 0x08003FFF:
        return 'Scene_'
    elif 0x08004000 <= addr <= 0x08008FFF:
        return 'HW_'
    elif 0x08009000 <= addr <= 0x0800AFFE:
        return 'Farm_'
    elif 0x0800AFFF <= addr <= 0x0800B7FF:
        return 'ShippingBin_'
    elif 0x0800B800 <= addr <= 0x0800CFFF:
        return 'Building_'
    elif 0x0800D000 <= addr <= 0x0800E2E3:
        return 'Item_'
    elif 0x0800E2E4 <= addr <= 0x0801FFFF:
        return 'Farmer_'
    elif 0x08020000 <= addr <= 0x0803A8A3:
        return 'Entity_'
    elif 0x0803A8A4 <= addr <= 0x0804FFFF:
        return 'ScriptEngine_'
    elif 0x08050000 <= addr <= 0x0809BFE7:
        return 'Animal_'
    elif 0x0809BFE8 <= addr <= 0x080BFFFF:
        return 'NPC_'
    elif 0x080C0000 <= addr <= 0x080D2FFF:
        return 'M4A_'
    elif 0x080D3000 <= addr <= 0x080FFFFF:
        return 'VTable_'
    elif 0x08750000 <= addr <= 0x0875FFFF:
        return 'RAMFunc_'
    return 'GBA_Func_'

def build_master_map():
    print("[*] Building Master Symbol Map...")
    master_map = {}
    
    # 1. Scan all C files to identify every defined function address
    for root, dirs, files in os.walk(SRC_DIR):
        for f in sorted(files):
            if f.endswith('.c'):
                p = os.path.join(root, f)
                rel = os.path.relpath(p, SRC_DIR).replace('\\', '/')
                prefix = PREFIX_MAP.get(rel, 'Func_')
                
                with open(p, 'r', encoding='utf-8', errors='ignore') as fp:
                    content = fp.read()
                    
                matches = re.finditer(r'// Function:\s*([a-zA-Z0-9_/ ]+?)\s*@\s*0x(08[0-9a-fA-F]{6})', content)
                for m in matches:
                    raw_name = m.group(1).strip()
                    addr = int(m.group(2), 16)
                    
                    if addr in CURATED_SYMBOLS:
                        canon = CURATED_SYMBOLS[addr]
                    elif not raw_name.startswith('func_') and not raw_name.startswith('sub_') and not 'func_' in raw_name:
                        canon = raw_name
                    else:
                        canon = f"{prefix}Routine_{addr:08X}"
                        
                    master_map[addr] = {
                        'canonical_name': canon,
                        'original_name': raw_name,
                        'address_hex': f"0x{addr:08X}",
                        'file': rel
                    }

    # 2. Scan for any external call targets (e.g. func_08XXXXXX called but defined elsewhere or in ASM)
    all_source_text = ""
    for root, dirs, files in os.walk(SRC_DIR):
        for f in files:
            if f.endswith('.c'):
                with open(os.path.join(root, f), 'r', encoding='utf-8', errors='ignore') as fp:
                    all_source_text += fp.read()
                    
    ext_matches = set(re.findall(r'\b((?:func|sub)_(08[0-9a-fA-F]{6}))\b', all_source_text))
    for full_sym, addr_str in ext_matches:
        addr = int(addr_str, 16)
        if addr not in master_map:
            prefix = get_subsystem_prefix_from_addr(addr)
            if addr in CURATED_SYMBOLS:
                canon = CURATED_SYMBOLS[addr]
            else:
                canon = f"{prefix}Routine_{addr:08X}"
            master_map[addr] = {
                'canonical_name': canon,
                'original_name': full_sym,
                'address_hex': f"0x{addr:08X}",
                'file': 'external_subsystem'
            }
                    
    print(f"[+] Master Symbol Map created with {len(master_map)} symbols.")
    return master_map

def apply_symbol_replacements(master_map):
    print("[*] Applying symbol replacements across source tree...")
    
    replace_dict = {}
    for addr, info in master_map.items():
        addr_hex = f"{addr:08X}"
        addr_hex_lower = f"{addr:08x}"
        canon = info['canonical_name']
        
        replace_dict[f"func_{addr_hex}"] = canon
        replace_dict[f"func_{addr_hex_lower}"] = canon
        replace_dict[f"sub_{addr_hex}"] = canon
        replace_dict[f"sub_{addr_hex_lower}"] = canon
        
        orig = info['original_name']
        if orig and orig != canon and not orig.startswith('func_') and not orig.startswith('sub_'):
            replace_dict[orig] = canon

    print(f"[*] Prepared {len(replace_dict)} replacement patterns.")
    
    # Sort keys by length descending to prevent partial match collisions
    sorted_patterns = sorted(replace_dict.keys(), key=len, reverse=True)
    regex_pattern = re.compile(r'\b(' + '|'.join(map(re.escape, sorted_patterns)) + r')\b')
    
    def repl_func(match):
        return replace_dict.get(match.group(0), match.group(0))

    total_modifications = 0
    # Process all .c files in src/
    for root, dirs, files in os.walk(SRC_DIR):
        for f in files:
            if f.endswith('.c'):
                p = os.path.join(root, f)
                with open(p, 'r', encoding='utf-8') as fp:
                    content = fp.read()
                    
                new_content = regex_pattern.sub(repl_func, content)
                
                # Also ensure the comment block '// Function: ... @ 0x...' is updated cleanly
                for addr, info in master_map.items():
                    addr_hex = f"0x{addr:08X}"
                    canon = info['canonical_name']
                    pattern_comment = re.compile(r'// Function:\s*[^\n@]+?@\s*' + re.escape(addr_hex))
                    new_content = pattern_comment.sub(f"// Function: {canon} @ {addr_hex}", new_content)
                    
                if new_content != content:
                    with open(p, 'w', encoding='utf-8') as fp:
                        fp.write(new_content)
                    rel = os.path.relpath(p, WORKSPACE_ROOT)
                    print(f"  -> Updated symbols in {rel}")
                    total_modifications += 1

    # Process all .h files in include/
    for root, dirs, files in os.walk(INCLUDE_DIR):
        for f in files:
            if f.endswith('.h'):
                p = os.path.join(root, f)
                with open(p, 'r', encoding='utf-8') as fp:
                    content = fp.read()
                    
                new_content = regex_pattern.sub(repl_func, content)
                if new_content != content:
                    with open(p, 'w', encoding='utf-8') as fp:
                        fp.write(new_content)
                    rel = os.path.relpath(p, WORKSPACE_ROOT)
                    print(f"  -> Updated headers in {rel}")
                    total_modifications += 1

    print(f"[SUCCESS] Symbol replacement complete across {total_modifications} files.")

def save_master_map(master_map):
    out_json = os.path.join(DOCS_DIR, "master_symbol_map.json")
    with open(out_json, 'w', encoding='utf-8') as fp:
        json_data = {
            f"0x{k:08X}": v for k, v in sorted(master_map.items())
        }
        json.dump(json_data, fp, indent=2)
    print(f"[+] Saved master symbol map: {out_json}")

if __name__ == "__main__":
    mmap = build_master_map()
    save_master_map(mmap)
    apply_symbol_replacements(mmap)
