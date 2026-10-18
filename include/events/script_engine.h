#ifndef SCRIPT_ENGINE_H
#define SCRIPT_ENGINE_H

#include "../global.h"

// =============================================================================
// Harvest Moon VM - Bytecode Instruction Set Architecture (Opcodes 0x00 - 0x24)
// Source: FoMT Studio Suite de Ingeniería Inversa (v3.7.0 / v4.0.0 - Denisovich728)
// =============================================================================
typedef enum VmOpcode {
    OPCODE_NOP      = 0x00, // No Operation / padding
    OPCODE_EQU      = 0x01, // Assignment (=)
    OPCODE_ADDEQU   = 0x02, // Add Assign (+=)
    OPCODE_SUBEQU   = 0x03, // Sub Assign (-=)
    OPCODE_MULEQU   = 0x04, // Mul Assign (*=)
    OPCODE_DIVEQU   = 0x05, // Div Assign (/=)
    OPCODE_MODEQU   = 0x06, // Mod Assign (%=)
    OPCODE_ADD      = 0x07, // Addition (+)
    OPCODE_SUB      = 0x08, // Subtraction (-)
    OPCODE_MUL      = 0x09, // Multiplication (*)
    OPCODE_DIV      = 0x0A, // Division (/)
    OPCODE_MOD      = 0x0B, // Modulo (%)
    OPCODE_AND      = 0x0C, // Bitwise/Logical AND (&&)
    OPCODE_OR       = 0x0D, // Bitwise/Logical OR (||)
    OPCODE_INC      = 0x0E, // Increment (++)
    OPCODE_DEC      = 0x0F, // Decrement (--)
    OPCODE_NEG      = 0x10, // Arithmetic Negation (-x)
    OPCODE_NOT      = 0x11, // Logical NOT (!x)
    OPCODE_CMP      = 0x12, // Comparison (sets internal condition flags)
    OPCODE_PUSHV    = 0x13, // Push variable by ID/address (4-byte operand)
    OPCODE_POPV     = 0x14, // Pop stack into variable (4-byte operand)
    OPCODE_DUP      = 0x15, // Duplicate stack top
    OPCODE_DISC     = 0x16, // Discard stack top
    OPCODE_PUSH32   = 0x17, // Push 32-bit immediate integer (4-byte operand)
    OPCODE_JMP      = 0x18, // Unconditional jump (4-byte target offset)
    OPCODE_BLT      = 0x19, // Branch if Less Than (4-byte target offset)
    OPCODE_BLE      = 0x1A, // Branch if Less or Equal (4-byte target offset)
    OPCODE_BEQ      = 0x1B, // Branch if Equal (4-byte target offset)
    OPCODE_BNE      = 0x1C, // Branch if Not Equal (4-byte target offset)
    OPCODE_BGE      = 0x1D, // Branch if Greater or Equal (4-byte target offset)
    OPCODE_BGT      = 0x1E, // Branch if Greater Than (4-byte target offset)
    OPCODE_JPI      = 0x1F, // Jump Indirect
    OPCODE_END      = 0x20, // End Script execution
    OPCODE_CALL     = 0x21, // Invoke Native Engine Procedure/Function (4-byte Call ID)
    OPCODE_PUSH16   = 0x22, // Push 16-bit immediate integer (2-byte operand)
    OPCODE_PUSH8    = 0x23, // Push 8-bit immediate integer (1-byte operand)
    OPCODE_SWITCH   = 0x24  // Multi-way Jump Table Switch (4-byte table offset)
} VmOpcode;

// =============================================================================
// Full Native Call IDs (OPCODE_CALL 0x21 / Fomt_Lib.csv)
// =============================================================================
typedef enum NativeCallId {
    // Entities, Camera & Movement (0x002 - 0x018)
    CALL_SetEntityPosition              = 0x002,
    CALL_GetEntityX                     = 0x003,
    CALL_GetEntityY                     = 0x004,
    CALL_SetEntityFacing                = 0x005,
    CALL_GetEntityFacing                = 0x006,
    CALL_Force_Entity_Seat_State        = 0x007,
    CALL_Set_Vector_X                   = 0x008,
    CALL_Set_Camera_Position            = 0x009,
    CALL_Set_Vector_Y                   = 0x00A,
    CALL_Execute_Movement               = 0x00C,
    CALL_SetEntityAnim                  = 0x00D,
    CALL_Hide_Entity                    = 0x00F,
    CALL_Spawn_Event_Entity             = 0x010,
    CALL_Show_Emote                     = 0x011,
    CALL_Wait_For_Animation             = 0x012,
    CALL_GetOppositeFacing              = 0x013,
    CALL_GetEntityLocation              = 0x014,
    CALL_Entity_Action                  = 0x015,
    CALL_Warp_Player                    = 0x016,
    CALL_Pan_Camera_To                  = 0x017,
    CALL_Wait_Camera_Stop               = 0x018,

    // Audio & BGM (0x019 - 0x01D)
    CALL_PlayBGM                        = 0x019,
    CALL_StopBGM                        = 0x01A,
    CALL_PlaySong                       = 0x01B,
    CALL_StopAllSongs                   = 0x01C,
    CALL_FadeOutBGM                     = 0x01D,

    // Dialogue, Choices & UI Windows (0x01F - 0x031)
    CALL_TalkOpen                       = 0x01F,
    CALL_TalkClose                      = 0x020,
    CALL_TalkMessage                    = 0x021,
    CALL_TalkMessageSlow                = 0x022,
    CALL_Print_Message                  = 0x023,
    CALL_Show_Tre_Option_Menu           = 0x024,
    CALL_Draw_Menu_With_Header          = 0x026,
    CALL_TalkChoice2                    = 0x027,
    CALL_TalkChoice3                    = 0x028,
    CALL_TalkChoice4                    = 0x029,
    CALL_TalkChoice5                    = 0x02A,
    CALL_TalkChoice6                    = 0x02B,
    CALL_Set_Name_Window                = 0x02C,
    CALL_Create_Select_List             = 0x02D,
    CALL_Make_Store_Error               = 0x02E,
    CALL_Set_Portrait                   = 0x02F,
    CALL_Talk_Mini_Close                = 0x030,
    CALL_Set_Hearth_Anim                = 0x031,

    // Screen Transitions & Game Flow (0x033 - 0x03E)
    CALL_Fade_Out                       = 0x033,
    CALL_Fade_In                        = 0x034,
    CALL_Tick_Overnight_Engine          = 0x035,
    CALL_Make_Delay                     = 0x036,
    CALL_Execute_Script                 = 0x037,
    CALL_Set_Text_Buffer_Int            = 0x038,
    CALL_Set_Text_Buffer_Int_Formatted  = 0x039,
    CALL_Check_Date                     = 0x03A,
    CALL_RNG_Generator                  = 0x03C,
    CALL_Check_Flag                     = 0x03D,
    CALL_Set_Flag                       = 0x03E,

    // Inventory, Tools & Economy (0x03F - 0x06A)
    CALL_Inventory_Check                = 0x03F,
    CALL_Compare_Gift                   = 0x040,
    CALL_Is_Item_Wrapped                = 0x041,
    CALL_Search_Food_Gift_Address       = 0x042,
    CALL_Search_Item_Gift_Address       = 0x043,
    CALL_Drop_Held_Item                 = 0x045,
    CALL_Remove_Held_Item               = 0x046,
    CALL_Give_Food                      = 0x047,
    CALL_Give_Item                      = 0x048,
    CALL_Give_Item_Silent               = 0x049,
    CALL_Give_Item_Shelf                = 0x04A,
    CALL_Trigger_Machine_Processing     = 0x04D,
    CALL_Check_Equped_Tool              = 0x04E,
    CALL_Check_Tool_TBox_Space          = 0x04F,
    CALL_Give_Tool_In_ToolBox           = 0x050,
    CALL_Remove_Equipped_Item           = 0x051,
    CALL_Has_Met_NPC                    = 0x053,
    CALL_Add_Item_To_Bag                = 0x058,
    CALL_Give_Tool_In_Inventory         = 0x059,
    CALL_Animation_Tool_Give            = 0x05A,
    CALL_Set_Global_RNG_Modifier        = 0x05B,
    CALL_Consume_Items_From_Inventory   = 0x060,
    CALL_Player_Eat_Power_Berry_Anim    = 0x061,
    CALL_Activate_Hot_Spring_Healing    = 0x064,
    CALL_Kill_NPC                       = 0x065,
    CALL_Last_Sleep_Location_Check      = 0x068,
    CALL_Unlock_Player_Input            = 0x069,
    CALL_Lock_Player_Input              = 0x06A,
    CALL_Resume_Tick_Engine             = 0x06B,

    // Social, Friendship & Marriage (0x076 - 0x08E)
    CALL_Set_Goddess_Appearance_Flash   = 0x076,
    CALL_Has_Player_Learned_Recipe      = 0x077,
    CALL_Get_GameCube_Link_Level        = 0x078,
    CALL_Unlock_Cooking_Recipe          = 0x079,
    CALL_Is_NPC_Birthday                = 0x07B,
    CALL_Chek_Friendship_Points         = 0x07C,
    CALL_Give_Friendship_Points         = 0x07D,
    CALL_Add_Rival_Points               = 0x07E,
    CALL_Free_Event_Entity              = 0x080,
    CALL_Has_Spoken_To_NPC_Today        = 0x081,
    CALL_Has_NPC_Talked_Today           = 0x082,
    CALL_Check_If_Single                = 0x083,
    CALL_Warp_Entity_To_Map             = 0x084,
    CALL_Chek_Love_Points               = 0x086,
    CALL_Give_Love_Points               = 0x087,
    CALL_Routine_State_Override         = 0x089,
    CALL_Add_Festival_Friendship_Bonus  = 0x08A,
    CALL_Open_Shop_Buy_UI               = 0x08B,
    CALL_Open_Shop_Quantity_UI          = 0x08C,
    CALL_Reset_NPC_Schedule             = 0x08D,

    // Shops, Farm Buildings & House (0x090 - 0x0C7)
    CALL_Open_Chicken_Shop_Ui           = 0x090,
    CALL_Show_Document_UI               = 0x098,
    CALL_Show_Profile_UI                = 0x09B,
    CALL_Trigger_Naming_Sequence        = 0x0A3,
    CALL_Start_Flashback                = 0x0A4,
    CALL_Open_Name_Entry_UI             = 0x0A6,
    CALL_Finish_Wedding_Sequence        = 0x0A8,
    CALL_Put_Flower_In_Vase             = 0x0B8,
    CALL_Add_Fodder_to_Box              = 0x0BF,
    CALL_Ship_Item_From_Ground          = 0x0C0,
    CALL_Unlock_Mountain_Cottage        = 0x0C4,
    CALL_Init_Notice_Board_UI           = 0x0C6,
    CALL_Anim_Door_Close                = 0x0C7,
    CALL_Anim_Door_Exit                 = 0x0C8,
    CALL_Anim_Door_Open                 = 0x0CA,

    // Nature Sprites (0x0CC - 0x0D1)
    CALL_Get_Sprite_Remaining_Work_Days = 0x0CC,
    CALL_Get_Sprite_Skill_Level         = 0x0CD,
    CALL_Hire_Harvest_Sprite            = 0x0D0,
    CALL_Cancel_Harvest_Sprite_Work     = 0x0D1,

    // Festivals, TV & Environment (0x0D8 - 0x0FE)
    CALL_Set_Animal_Festival_Entry_Status = 0x0D8,
    CALL_Open_Prize_Exchange_UI         = 0x0D9,
    CALL_Unlock_Summer_Events           = 0x0DC,
    CALL_Chek_Envio                     = 0x0DE,
    CALL_Register_TV_Shopping_Item      = 0x0E0,
    CALL_Electrodomestic_initiation     = 0x0E2,
    CALL_Check_Money                    = 0x0EC,
    CALL_Take_Money                     = 0x0EE,
    CALL_End_Cinematic_State            = 0x0EF,
    CALL_Refresh_Map_Entities           = 0x0F0,
    CALL_Set_Time                       = 0x0F4,
    CALL_Schedule_Next_Event            = 0x0F7,
    CALL_Mark_Letter_As_Read            = 0x0F8,
    CALL_Print_TV_Message               = 0x0FB,
    CALL_Set_TV_Screen_Graphic          = 0x0FC,
    CALL_Close_TV_Interface             = 0x0FD,
    CALL_Finalize_Event                 = 0x0FE,

    // Livestock & Animal Care (0x100 - 0x118)
    CALL_Allocate_Unique_Animal         = 0x100,
    CALL_Deallocate_Unique_Animal       = 0x101,
    CALL_GetAnimalName                  = 0x102,
    CALL_Get_Targeted_Animal_Index      = 0x103,
    CALL_HasAnimalBeenTalkedTo          = 0x104,
    CALL_SetAnimalTalkedTo              = 0x105,
    CALL_Add_Animal_Affection           = 0x106,
    CALL_Is_Animal_Stressed             = 0x107,
    CALL_GetAnimalAge                   = 0x108,
    CALL_Is_Animal_Pregnant             = 0x109,
    CALL_Is_Barn_Animal_Cow             = 0x114,
    CALL_Open_Animal_Selection_UI       = 0x118,
    CALL_Recalculate_Global_Schedules   = 0x119,

    // GameCube Link & Special Events (0x123 - 0x146)
    CALL_Sync_GameCube_Data             = 0x123,
    CALL_Set_Spouse_Nickname            = 0x125,
    CALL_Reset_Player_After_Festival    = 0x126,
    CALL_Spawn_Firework_Color_Effect    = 0x127,
    CALL_Screen_Flash                   = 0x12B,
    CALL_Force_Entity_Move_To           = 0x12E,
    CALL_Trigger_Screen_Flash           = 0x132,
    CALL_Mine_Descend_Level             = 0x135,
    CALL_Take_Tool                      = 0x138,
    CALL_Spawn_Item_On_Grid             = 0x139,
    CALL_Despawn_Map_Item               = 0x13A,
    CALL_Get_Item_Sprite_ID             = 0x13B,
    CALL_Refresh_Current_Tile           = 0x13E,
    CALL_Get_Tile_Object_Type           = 0x13F,
    CALL_Player_Hold_Entity             = 0x142,
    CALL_Initialize_Animal_Stats        = 0x143,
    CALL_Register_Shipment_Achievement  = 0x144,
    CALL_Play_SE_ID                     = 0x146
} NativeCallId;

// =============================================================================
// Exact Script Engine VM State Structure (0803F0D8 / RIFF SCR)
// =============================================================================
#define VM_STACK_MAX 100

typedef struct ScriptEngineVM {
    /* +0x000 */ u32 is_initialized;
    /* +0x004 */ const u8 *script_code;          // Subchunk "CODE" pointer
    /* +0x008 */ u32 pc;                         // Current bytecode instruction offset
    /* +0x00C */ u32 code_size;                  // Size of script code data
    /* +0x010 */ u32 string_count;               // Subchunk "STR " entry count
    /* +0x014 */ const u32 *string_offsets;      // Offset table for strings
    /* +0x018 */ const char *string_data;        // Base address of string bytes
    /* +0x01C */ u32 jump_word0;                 // Subchunk "JUMP" header
    /* +0x020 */ const u32 *jump_table;          // Subchunk "JUMP" table
    /* +0x024 */ s32 stack[VM_STACK_MAX];        // Ascending operand stack (100 words)
    /* +0x1B4 */ u32 sp;                         // Stack Pointer index (0 - 100)
    /* +0x1B8 */ u8  reserved[0x194];            // Internal VM scratchpad
    /* +0x34C */ u32 active_flag;
    /* +0x350 */ u32 current_dialog_id;          // Active dialog / event script ID
    /* +0x354 */ u32 dialog_choice;
    /* +0x358 */ u32 status_flags;
} ScriptEngineVM;

// =============================================================================
// Script Engine Function Prototypes
// =============================================================================
void        ScriptEngine_Construct(ScriptEngineVM *vm);
void        ScriptEngine_Destruct(ScriptEngineVM *vm);
void        ScriptEngine_ClearVM(ScriptEngineVM *vm);
void        ScriptEngine_SetVariable(ScriptEngineVM *vm, u32 var_id, s32 val);
s32         ScriptEngine_GetVariable(const ScriptEngineVM *vm, u32 var_id);
bool        ScriptEngine_ParseHeaderChunks(ScriptEngineVM *vm, const u8 *riff_data);
void        ScriptEngine_AllocateStack(ScriptEngineVM *vm);
void        ScriptEngine_FreeStack(ScriptEngineVM *vm);
void        ScriptEngine_StackPush(ScriptEngineVM *vm, s32 val);
s32         ScriptEngine_StackPop(ScriptEngineVM *vm);
s32         ScriptEngine_StackTop(const ScriptEngineVM *vm);
void        ScriptEngine_SetPC(ScriptEngineVM *vm, u32 target_pc);
u32         ScriptEngine_GetPC(const ScriptEngineVM *vm);
const char *ScriptEngine_ResolveStringPointer(const ScriptEngineVM *vm, u32 string_id);
const char *ScriptEngine_GetStringById(const ScriptEngineVM *vm, u32 string_id);
u32         ScriptEngine_ResolveJumpTarget(const ScriptEngineVM *vm, u32 jump_idx);
u32         ScriptEngine_LookupJumpTable(const ScriptEngineVM *vm, u32 case_id);
void        ScriptEngine_HandleDialogTrigger(void);
void        ScriptEngine_StartEventScript(ScriptEngineVM *vm, u32 script_id);
void        ScriptEngine_PushStack32(ScriptEngineVM *vm, s32 val);
void        ScriptEngine_OnCallDispatcher(ScriptEngineVM *vm, u32 call_id);
void        AScriptEngine_Execute(ScriptEngineVM *vm);

#endif // SCRIPT_ENGINE_H
