// =============================================================================
// Harvest Moon: Friends of Mineral Town (GBA) - Decompiled Source
// Module: HARDWARE (112 functions)
// Description: GBA Hardware abstraction layer: LCD, Keypad, Timers, DMA controller
// =============================================================================

#include "../../include/gba/gbaio.h"

// =============================================================================
// Function: SaveManager_LoadGameSlot @ 0x080040A0
// =============================================================================
u32 SaveManager_LoadGameSlot(int hw_reg)

{
  undefined1 u_val1;
  ushort u_val2;
  undefined4 u_val3;
  undefined4 u_val4;
  int *p_int5;
  int *p_int6;
  int i_val7;
  int stack_val_2c;
  int stack_val_28;
  int stack_val_24;
  
  u_val1 = *(undefined1 *)(hw_reg + 0x85);
  u_val3 = SramProxy_GetSaveSlotOffset(hw_reg + 0x90,u_val1);
  stack_val_28 = 0;
  i_val7 = 3;
  stack_val_24 = hw_reg + 0x90;
  do {
    u_val2 = Interrupt_WaitForVBlank(0x1000);
    u_val4 = CppRuntime_OperatorNewArray(0x34F4);
    stack_val_2c = Farmer_Routine_08011650(u_val4,hw_reg + 0x90,u_val3,&stack_val_28);
    if (stack_val_28 == 0) {
      if (*(int *)(hw_reg + 8) == 0) {
        p_int5 = (int *)CppRuntime_OperatorNewArray(8);
        *p_int5 = gRomData_080E5A4C;
        p_int5[1] = stack_val_2c;
        p_int6 = *(int **)(hw_reg + 0xc);
        if ((p_int5 != p_int6) && (p_int6 != (int *)0x0)) {
          _call_via_r2(p_int6,3,*(undefined4 *)(*p_int6 + 8));
        }
        *(int **)(hw_reg + 0xc) = p_int5;
        stack_val_2c = 0;
      }
      else {
        VTable_Routine_080D4480(*(int *)(hw_reg + 8),2);
        if (*(int *)(hw_reg + 8) != 0) {
          VTable_Routine_080D4178(*(int *)(hw_reg + 8),stack_val_2c);
        }
      }
      HW_Routine_08008B6C(hw_reg + 0x18,0xc5);
      SramProxy_FlushSlotBuffer(stack_val_24,u_val1);
      if (stack_val_2c != 0) {
        VTable_Routine_080D4480(stack_val_2c,3);
      }
      if ((u_val2 & 0x1000) != 0) {
        Interrupt_EnableHBlank();
      }
      u_val3 = 1;
      goto LAB_080041c6;
    }
    CppRuntime_FreeMemory(stack_val_2c);
    if ((u_val2 & 0x1000) != 0) {
      Interrupt_EnableHBlank();
    }
    i_val7 = i_val7 + -1;
  } while (i_val7 != 0);
  Animal_Routine_08050DC8(hw_reg + 0x10,gRomData_080E88D8,0,0);
  *(undefined4 *)(hw_reg + 0x8c) = 3;
  HW_Routine_08008B6C(hw_reg + 0x18,199);
  u_val3 = 0;
LAB_080041c6:
  return u_val3;
}

// =============================================================================
// Function: SaveLoadScreen_Init @ 0x080041DC
// =============================================================================
u32 SaveLoadScreen_Init(int hw_reg,undefined4 val,undefined4 *size)

{
  byte b_flag1;
  char c_char2;
  ushort u_val3;
  undefined4 u_val4;
  undefined1 *p_uint5;
  uint u_val6;
  undefined4 u_val7;
  int i_val8;
  uint u_val9;
  int *p_int10;
  int i_val11;
  uint u_val12;
  int i_val13;
  uint *p_uint14;
  undefined1 stack_buf_84 [4];
  undefined1 stack_buf_80 [4];
  undefined4 *apuStack_7c [8];
  int stack_val_5c;
  undefined1 stack_val_58;
  undefined1 stack_val_57;
  int stack_val_54;
  undefined4 *puStack_50;
  int stack_val_4c;
  byte *pbStack_48;
  ushort *puStack_44;
  byte *pbStack_40;
  undefined1 *puStack_3c;
  byte *pbStack_38;
  int stack_val_34;
  byte *pbStack_30;
  byte *pbStack_2c;
  byte *pbStack_28;
  undefined4 **ppuStack_24;
  
  stack_val_58 = 7;
  stack_val_57 = 0;
  puStack_50 = size;
  GBA_DisplayController_Reset(hw_reg);
  *(undefined4 *)(hw_reg + 4) = gRomData_080E5A5C;
  *(undefined4 *)(hw_reg + 8) = val;
  u_val4 = *puStack_50;
  *puStack_50 = 0;
  *(undefined4 *)(hw_reg + 0xc) = u_val4;
  GBA_TextLayer_Init(stack_buf_84);
  GBA_BgLayer_Init(stack_buf_80);
  Animal_Routine_08050CC0(hw_reg + 0x10,0,0x1f,0xf,0,stack_buf_84,stack_buf_80);
  GBA_BgLayer_SetPriority(stack_buf_80,2);
  HW_Routine_08008364(stack_buf_84,2);
  HW_Routine_08008B54(hw_reg + 0x14,1);
  HW_Routine_08008B54(hw_reg + 0x18,2);
  Animal_Routine_0805E6CC(hw_reg + 0x1c,gRomGfx_08728208);
  GBA_ObjAttr_Init(hw_reg + 0x4c);
  u_val4 = GBA_ObjAttr_AllocateSprite(hw_reg + 0x4c,2);
  *(undefined4 *)(hw_reg + 0x50) = u_val4;
  GBA_PaletteManager_Init(hw_reg + 0x54);
  u_val4 = GBA_PaletteManager_Allocate(hw_reg + 0x54);
  *(undefined4 *)(hw_reg + 0x58) = u_val4;
  *(undefined4 *)(hw_reg + 0x5c) = 0;
  *(undefined4 *)(hw_reg + 0x60) = 0;
  Animal_Routine_0805E824(hw_reg + 100,hw_reg + 0x1c,0,0x100);
  *(undefined4 *)(hw_reg + 0x80) = 0;
  *(undefined4 *)(hw_reg + 0x8c) = 0;
  SramProxy_LoadGlobalSettings(hw_reg + 0x90);
  p_uint5 = (undefined1 *)(hw_reg + 0x98);
  i_val8 = 1;
  ppuStack_24 = apuStack_7c;
  do {
    *p_uint5 = 0;
    p_uint5 = p_uint5 + 0x80;
    i_val8 = i_val8 + -1;
  } while (i_val8 != -1);
  i_val11 = hw_reg + 0x198;
  i_val13 = 1;
  stack_val_4c = hw_reg + 0x54;
  i_val8 = hw_reg + 0x90;
  puStack_44 = (ushort *)(hw_reg + 0x60);
  pbStack_40 = (byte *)(hw_reg + 0x61);
  pbStack_48 = (byte *)(hw_reg + 0x5d);
  puStack_3c = (undefined1 *)(hw_reg + 0x84);
  pbStack_38 = (byte *)(hw_reg + 0x85);
  stack_val_34 = hw_reg + 0x86;
  pbStack_30 = (byte *)(hw_reg + 0x87);
  pbStack_2c = (byte *)(hw_reg + 0x88);
  pbStack_28 = (byte *)(hw_reg + 0x89);
  do {
    Farmer_Routine_080114F8(i_val11);
    i_val11 = i_val11 + 4;
    i_val13 = i_val13 + -1;
  } while (i_val13 != -1);
  Animal_Routine_0805E790(ppuStack_24,hw_reg + 0x1c,0);
  u_val4 = apuStack_7c[0][1];
  *(undefined4 *)(hw_reg + 0x5c) = *apuStack_7c[0];
  *(undefined4 *)(hw_reg + 0x60) = u_val4;
  u_val3 = GBA_Vram_AllocateTileBlock(hw_reg + 0x4c,*(undefined4 *)(hw_reg + 0x50));
  *puStack_44 = (ushort)0xFFFFFC00 & *puStack_44 | u_val3 & (ushort)0x3FF;
  c_char2 = HW_Routine_080074C0(stack_val_4c,*(undefined4 *)(stack_val_4c + 4));
  *pbStack_40 = *pbStack_40 & 0xf | c_char2 << 4;
  *pbStack_48 = *pbStack_48 | 0x10;
  *(undefined4 *)(hw_reg + 0x78) = *(undefined4 *)(hw_reg + 0x5c);
  *(undefined4 *)(hw_reg + 0x7c) = *(undefined4 *)(hw_reg + 0x60);
  u_val12 = 0;
  do {
    u_val6 = SramProxy_VerifyChecksum(i_val8);
    u_val6 = 1 << (u_val12 & 0xff) & u_val6;
    u_val9 = u_val12 + 1;
    if ((int)(-u_val6 | u_val6) < 0) {
      u_val4 = SramProxy_GetSaveSlotOffset(i_val8,u_val12);
      stack_val_54 = 0;
      i_val11 = 3;
      do {
        u_val7 = CppRuntime_OperatorNewArray(0x34F4);
        i_val13 = Farmer_Routine_08011650(u_val7,i_val8,u_val4,&stack_val_54);
        if (stack_val_54 == 0) {
          stack_val_5c = i_val13;
          Scene_Routine_08003788(hw_reg,hw_reg + u_val12 * 0x80 + 0x98);
          *(undefined4 *)(u_val12 * 4 + hw_reg + 0x198) = *(undefined4 *)(stack_val_5c + 0x2210)
          ;
          if (stack_val_5c != 0) {
            VTable_Routine_080D4480(stack_val_5c,3);
          }
          break;
        }
        stack_val_5c = 0;
        CppRuntime_FreeMemory(i_val13);
        if (stack_val_5c != 0) {
          VTable_Routine_080D4480(stack_val_5c,3);
        }
        i_val11 = i_val11 + -1;
      } while (i_val11 != -1);
    }
    u_val12 = u_val9;
    if (1 < u_val9) {
      i_val8 = SramProxy_VerifySlotChecksum(i_val8);
      b_flag1 = (byte)((uint)i_val8 >> 0x18);
      if (*(int *)(hw_reg + 8) == 0) {
        *(undefined4 *)(hw_reg + 0x80) = 1;
        *puStack_3c = 1;
        *pbStack_38 = (byte)((byte)((uint)-i_val8 >> 0x18) | b_flag1) >> 7;
        p_uint14 = (uint *)((uint)*pbStack_38 * 4 + hw_reg + 0x198);
        *(bool *)stack_val_34 = (*p_uint14 & 1) != 0;
        Scene_Routine_08003DF0(hw_reg,2,*(undefined4 *)(hw_reg + 0x5c),*(undefined4 *)(hw_reg + 0x60));
        *pbStack_30 = (*(byte *)p_uint14 >> 1 ^ 1) & 1;
        Scene_Routine_08003DF0(hw_reg,3,*(undefined4 *)(hw_reg + 0x5c),*(undefined4 *)(hw_reg + 0x60));
        *pbStack_2c = (*(byte *)p_uint14 >> 2 ^ 1) & 1;
        Scene_Routine_08003DF0(hw_reg,4,*(undefined4 *)(hw_reg + 0x5c),*(undefined4 *)(hw_reg + 0x60));
        *pbStack_28 = (*(byte *)p_uint14 >> 3 ^ 1) & 1;
        Scene_Routine_08003DF0(hw_reg,5,*(undefined4 *)(hw_reg + 0x5c),*(undefined4 *)(hw_reg + 0x60));
      }
      else {
        *puStack_3c = 0;
        *pbStack_38 = (byte)((byte)((uint)-i_val8 >> 0x18) | b_flag1) >> 7;
        p_uint14 = (uint *)(*(int *)(hw_reg + 8) + 0x2210);
        *(bool *)stack_val_34 = (*p_uint14 & 1) != 0;
        Scene_Routine_08003DF0(hw_reg,2,*(undefined4 *)(hw_reg + 0x5c),*(undefined4 *)(hw_reg + 0x60));
        *pbStack_30 = ((byte)*p_uint14 >> 1 ^ 1) & 1;
        Scene_Routine_08003DF0(hw_reg,3,*(undefined4 *)(hw_reg + 0x5c),*(undefined4 *)(hw_reg + 0x60));
        *pbStack_2c = ((byte)*p_uint14 >> 2 ^ 1) & 1;
        Scene_Routine_08003DF0(hw_reg,4,*(undefined4 *)(hw_reg + 0x5c),*(undefined4 *)(hw_reg + 0x60));
        *pbStack_28 = ((byte)*p_uint14 >> 3 ^ 1) & 1;
        Scene_Routine_08003DF0(hw_reg,5,*(undefined4 *)(hw_reg + 0x5c),*(undefined4 *)(hw_reg + 0x60));
      }
      p_int10 = (int *)*puStack_50;
      if (p_int10 != (int *)0x0) {
        _call_via_r2(p_int10,3,*(undefined4 *)(*p_int10 + 8));
      }
      return hw_reg;
    }
  } while( true );
}

// =============================================================================
// Function: SaveLoadScreen_RunLoop @ 0x08004570
// =============================================================================
u32 SaveLoadScreen_RunLoop(undefined4 *hw_reg,int val)

{
  byte b_flag1;
  char c_char2;
  undefined2 *p_uint3;
  int i_val4;
  int *p_int5;
  int i_val6;
  byte b_flag7;
  byte *pbVar8;
  undefined *p_uint9;
  int *p_int10;
  undefined4 u_val11;
  undefined4 *p_uint12;
  uint *p_uint13;
  byte b_flag14;
  uint loop_i;
  uint *p_uint16;
  undefined1 *p_uint17;
  undefined1 stack_buf_6c [8];
  undefined4 stack_val_64;
  undefined4 stack_val_5c;
  undefined1 *apuStack_4c [8];
  undefined1 stack_buf_2c [4];
  undefined1 temp_buf_28 [4];
  undefined4 *puStack_24;
  
  puStack_24 = hw_reg;
  HW_Routine_08008724(val);
  p_uint3 = (undefined2 *)HW_GetSpriteAttr1Offset(val);
  *p_uint3 = 0x1c40;
  GBA_DMA3_FastCopy(*gRomData_080F9F78,0x5000000,*gRomData_080F9F7C);
  p_uint3[7] = (short)0x1E4C;
  GBA_DMA3_FastCopy(*gRomData_080F9F70,0x0600C000,*gRomData_080F9F74);
  Animal_Routine_08051320(0x0600F000,0,0,0x1e,0x14,0,0);
  p_uint3[6] = 0x1d40;
  Scene_Routine_08003C80(val);
  Animal_Routine_08050E98(val + 0x10,0x2c);
  Animal_Routine_08050D68(val + 0x10);
  Scene_Routine_08003C28(val);
  p_uint3[4] = p_uint3[4] | 0x40;
  Scene_Routine_08003EEC(val);
  Animal_Routine_0805E790(stack_buf_6c,val + 0x1c,0);
  i_val4 = GBA_Vram_AllocateTileBlock(val + 0x4c,*(undefined4 *)(val + 0x50));
  GBA_DMA3_FastCopy(stack_val_64,i_val4 * 0x20 + 0x06010000,0x80);
  i_val4 = HW_Routine_080074C0(val + 0x54,*(undefined4 *)(val + 0x58));
  GBA_DMA3_FastCopy(stack_val_5c,i_val4 * 0x20 + 0x05000200,0x20);
  loop_i = 0;
  do {
    Scene_Routine_08003DF0(val,loop_i,*(undefined4 *)(val + 0x5c),*(undefined4 *)(val + 0x60));
    loop_i = loop_i + 1;
  } while (loop_i < 6);
  Scene_Routine_08003B40(val);
  p_int5 = (int *)(val + 0x8c);
LAB_08004674:
  do {
    while( true ) {
      HW_Routine_080087C8(val);
      HW_Routine_080088B8(val);
      Scene_Routine_08003C28(val);
      loop_i = HW_Routine_080088D4(val);
      i_val4 = *p_int5;
      if (i_val4 != 1) break;
      i_val4 = Animal_Routine_08050D34(val + 0x10);
      if ((i_val4 == 3) || (i_val4 != 6)) {
        i_val4 = Animal_Routine_08050DF0(val + 0x10);
        if (i_val4 == 1) {
LAB_08004abc:
          Scene_Routine_08003F9C(val);
        }
        else {
LAB_08004b04:
          HW_Routine_08008B6C(val + 0x18,0xc5);
          Scene_Routine_08003EEC(val);
          *p_int5 = 0;
        }
      }
    }
    if (i_val4 < 2) {
      if (i_val4 == 0) {
        i_val4 = Animal_Routine_0805E8F0(val + 100);
        if (i_val4 * 0x40000000 < 0) {
          _call_via_r3(apuStack_4c,*(int **)(val + 100),
                          *(undefined2 *)
                           (*(int *)(val + 0x68) + (uint)*(ushort *)(val + 0x70) * 4),
                          *(undefined4 *)(**(int **)(val + 100) + 0x10));
          gba_memcpy(apuStack_4c,apuStack_4c,0x20);
          *(undefined1 *)(val + 0x78) = *apuStack_4c[0];
          *(ushort *)(val + 0x7a) =
               (ushort)0xFFFFFE00 & *(ushort *)(val + 0x7a) |
               *(ushort *)(apuStack_4c[0] + 2) & 0x1ff;
          Scene_Routine_08003DF0(val,*(undefined4 *)(val + 0x80),*(undefined4 *)(val + 0x78),
                        *(undefined4 *)(val + 0x7c));
          p_uint12 = (undefined4 *)(val + 0x5c);
          if (*(int *)(val + 8) != 0) {
            p_uint12 = (undefined4 *)(val + 0x78);
          }
          Scene_Routine_08003E88(val,*(undefined4 *)(val + 0x80),*p_uint12,p_uint12[1]);
        }
        if ((loop_i & 2) == 0) {
          if ((loop_i & 1) == 0) {
            if ((loop_i & 0x1f) >> 4 == (loop_i & 0x3f) >> 5) {
              if ((*(int *)(val + 8) != 0) && ((loop_i & 0xff) >> 7 != (loop_i & 0x7f) >> 6)) {
                p_int10 = (int *)(val + 0x80);
                i_val4 = *p_int10;
                if ((loop_i & 0x80) == 0) {
                  i_val6 = 0;
                  if (i_val4 != 2) {
                    if (i_val4 == 1) {
                      i_val6 = 5;
                    }
                    else {
                      i_val6 = 5;
                      if (i_val4 != 0) {
                        i_val6 = i_val4 + -1;
                      }
                    }
                  }
                }
                else if (i_val4 == 0) {
                  i_val6 = 2;
                }
                else {
                  i_val6 = 0;
                  if (i_val4 != 5) {
                    i_val6 = i_val4 + 1;
                  }
                }
                *p_int10 = i_val6;
                Scene_Routine_08003DF0(val,i_val4,*(undefined4 *)(val + 0x5c),
                              *(undefined4 *)(val + 0x60));
                Scene_Routine_08003DF0(val,*p_int10,*(undefined4 *)(val + 0x78),
                              *(undefined4 *)(val + 0x7c));
                Scene_Routine_08003E88(val,*p_int10,*(undefined4 *)(val + 0x78),
                              *(undefined4 *)(val + 0x7c));
                Scene_Routine_08003EEC(val);
                goto LAB_08004a92;
              }
            }
            else {
              p_uint13 = (uint *)(val + 0x80);
              pbVar8 = (byte *)(val + 0x84 + *p_uint13);
              loop_i = *pbVar8 ^ 1;
              *pbVar8 = (byte)loop_i;
              if (*(int *)(val + 8) == 0) {
                Scene_Routine_08003EEC(val);
                p_uint16 = (uint *)((uint)*(byte *)(val + 0x85) * 4 + val + 0x198);
                *(bool *)(val + 0x86) = (*p_uint16 & 1) != 0;
                Scene_Routine_08003DF0(val,2,*(undefined4 *)(val + 0x5c),
                              *(undefined4 *)(val + 0x60));
                *(byte *)(val + 0x87) = (*(byte *)p_uint16 >> 1 ^ 1) & 1;
                Scene_Routine_08003DF0(val,3,*(undefined4 *)(val + 0x5c),
                              *(undefined4 *)(val + 0x60));
                *(byte *)(val + 0x88) = (*(byte *)p_uint16 >> 2 ^ 1) & 1;
                Scene_Routine_08003DF0(val,4,*(undefined4 *)(val + 0x5c),
                              *(undefined4 *)(val + 0x60));
                *(byte *)(val + 0x89) = (*(byte *)p_uint16 >> 3 ^ 1) & 1;
                Scene_Routine_08003DF0(val,5,*(undefined4 *)(val + 0x5c),
                              *(undefined4 *)(val + 0x60));
                goto LAB_08004a08;
              }
              if (5 < *p_uint13) goto LAB_08004a08;
              p_uint9 = PTR_case_080048E4_080048e0;
              switch(*(uint *)(PTR_case_080048E4_080048e0 + *p_uint13 * 4) & 0xfffffffe) {
              case 0x80048e4:
                p_uint9 = (undefined *)0x1c211c30;
              case 0x80048fc:
                Scene_Routine_08003EEC(val,p_uint9);
                goto LAB_08004a08;
              case 0x8004904:
                pbVar8 = (byte *)(*(int *)(val + 8) + 0x2210);
                *pbVar8 = *pbVar8 & 0xfe | (byte)(-loop_i >> 0x1f);
                goto LAB_08004a08;
              case 0x8004924:
                pbVar8 = (byte *)(*(int *)(val + 8) + 0x2210);
                b_flag14 = (loop_i == 0) << 1;
                b_flag7 = *pbVar8;
                b_flag1 = 0xfd;
                break;
              case 0x8004940:
                pbVar8 = (byte *)(*(int *)(val + 8) + 0x2210);
                b_flag14 = (loop_i == 0) << 2;
                b_flag7 = *pbVar8;
                b_flag1 = 0xfb;
                break;
              case 0x800495c:
                pbVar8 = (byte *)(*(int *)(val + 8) + 0x2210);
                b_flag14 = (loop_i == 0) << 3;
                b_flag7 = *pbVar8;
                b_flag1 = 0xf7;
              }
              *pbVar8 = b_flag1 & b_flag7 | b_flag14;
LAB_08004a08:
              Scene_Routine_08003DF0(val,*p_uint13,*(undefined4 *)(val + 0x78),
                            *(undefined4 *)(val + 0x7c));
LAB_08004a92:
              HW_Routine_08008B6C(val + 0x18,0xcb);
            }
          }
          else {
            i_val4 = *(int *)(val + 0x80);
            if (i_val4 == 0) {
              *(int *)(val + 0x80) = 1;
              Scene_Routine_08003DF0(val,0,*(undefined4 *)(val + 0x5c),
                            *(undefined4 *)(val + 0x60));
              Scene_Routine_08003DF0(val,1,*(undefined4 *)(val + 0x78),
                            *(undefined4 *)(val + 0x7c));
              Scene_Routine_08003EEC(val);
              HW_Routine_08008B6C(val + 0x18,0xc5);
            }
            else if (i_val4 == 1) {
              if (*(char *)(val + 0x84) == '\0') {
                if (*(char *)((uint)*(byte *)(val + 0x85) * 0x80 + val + 0x98) == '\0')
                goto LAB_08004abc;
                Animal_Routine_08050E30(val + 0x10,gRomData_080E8914,gRomData_080E86EC,gRomData_080E86F0,0,0,0);
                *p_int5 = 1;
              }
              else {
                if (*(char *)((uint)*(byte *)(val + 0x85) * 0x80 + val + 0x98) != '\0') {
                  Animal_Routine_08050E30(val + 0x10,gRomData_080E890C,gRomData_080E86EC,gRomData_080E86F0,0,0,0);
                  i_val4 = 2;
                  goto LAB_08004b30;
                }
                Animal_Routine_08050DC8(val + 0x10,gRomData_080E878C,0,0);
                *p_int5 = 3;
                HW_Routine_08008B6C(val + 0x18,199);
              }
            }
          }
        }
        else {
          if (*(int *)(val + 8) == 0) {
            HW_Routine_08008B6C(val + 0x18,0xc6);
            p_uint17 = stack_buf_2c;
            goto LAB_08004af2;
          }
          if (*(int *)(val + 0x80) != 1) goto LAB_08004b36;
          HW_Routine_08008B6C(val + 0x18,0xc6);
          *(int *)(val + 0x80) = 0;
          Scene_Routine_08003EEC(val);
          Scene_Routine_08003DF0(val,1,*(undefined4 *)(val + 0x5c),*(undefined4 *)(val + 0x60));
          Scene_Routine_08003DF0(val,0,*(undefined4 *)(val + 0x78),*(undefined4 *)(val + 0x7c));
        }
      }
      goto LAB_08004674;
    }
    if (i_val4 == 2) {
      i_val4 = Animal_Routine_08050D34(val + 0x10);
      if ((i_val4 == 3) || (i_val4 != 6)) {
        i_val4 = Animal_Routine_08050DF0(val + 0x10);
        if (i_val4 != 1) goto LAB_08004b04;
        c_char2 = SaveManager_LoadGameSlot(val);
        if (c_char2 != '\0') {
          p_uint17 = temp_buf_28;
LAB_08004af2:
          HW_Routine_08008B54(p_uint17,0);
          HW_Routine_08008BF8(p_uint17,2);
LAB_08004b36:
          Scene_Routine_08003BB4(val);
          u_val11 = *(undefined4 *)(val + 0xc);
          *(undefined4 *)(val + 0xc) = 0;
          *puStack_24 = u_val11;
          return puStack_24;
        }
      }
    }
    else if ((i_val4 == 3) && (i_val4 = Animal_Routine_08050D34(val + 0x10), i_val4 != 5)) {
      Scene_Routine_08003EEC(val);
      i_val4 = 0;
LAB_08004b30:
      *p_int5 = i_val4;
    }
  } while( true );
}

// =============================================================================
// Function: SaveLoadScreen_Deinit @ 0x08004B94
// =============================================================================
void SaveLoadScreen_Deinit(undefined4 *hw_reg,undefined4 val,undefined4 *size)

{
  undefined4 u_val1;
  int *p_int2;
  undefined4 stack_val_14;
  
  *hw_reg = gRomData_080E5A68;
  stack_val_14 = *size;
  *size = 0;
  u_val1 = CppRuntime_OperatorNewArray(0x1a0);
  u_val1 = SaveLoadScreen_Init(u_val1,val,&stack_val_14);
  hw_reg[1] = u_val1;
  p_int2 = (int *)*size;
  if (p_int2 != (int *)0x0) {
    _call_via_r2(p_int2,3,*(undefined4 *)(*p_int2 + 8));
  }
  return hw_reg;
}

// =============================================================================
// Function: HW_Routine_08004C0C @ 0x08004C0C
// =============================================================================
u32 HW_Routine_08004C0C(undefined4 *hw_reg,int val)

{
  undefined4 facing_buffer [3];
  
  SaveLoadScreen_RunLoop(facing_buffer,*(undefined4 *)(val + 4));
  *hw_reg = facing_buffer[0];
  return hw_reg;
}

// =============================================================================
// Function: HW_Routine_08004C54 @ 0x08004C54
// =============================================================================
void HW_Routine_08004C54(undefined4 *hw_reg)

{
  
  *hw_reg = gRomData_080E5A88;
  SramProxy_VerifyBufferParity();
  return;
}

// =============================================================================
// Function: HW_Routine_08004EFC @ 0x08004EFC
// =============================================================================
undefined8
HW_Routine_08004EFC(int hw_reg,undefined4 val,uint size,undefined4 mode,undefined4 arg_5)

{
  int i_val1;
  undefined4 u_val2;
  undefined1 *p_uint3;
  uint u_val4;
  uint u_val5;
  undefined4 *p_uint6;
  int i_val7;
  undefined1 temp_buf_3c [4];
  undefined1 stack_buf_38 [4];
  undefined1 stack_buf_34 [16];
  undefined4 stack_val_24;
  
  stack_val_24 = mode;
  HW_Routine_08008444();
  *(undefined4 *)(hw_reg + 4) = gRomData_080E5A98;
  i_val1 = 3;
  do {
    i_val1 = i_val1 + -1;
  } while (i_val1 != -1);
  i_val1 = 3;
  do {
    i_val1 = i_val1 + -1;
  } while (i_val1 != -1);
  *(undefined4 *)(hw_reg + 0x1A28) = 2;
  u_val2 = CppRuntime_OperatorNewArray(4);
  GBA_TextLayer_Init(temp_buf_3c);
  GBA_BgLayer_Init(stack_buf_38);
  u_val2 = Animal_Routine_08050CC0(u_val2,0,0x1c,4,0,temp_buf_3c,stack_buf_38);
  *(undefined4 *)(hw_reg + 0x1A2C) = u_val2;
  GBA_BgLayer_SetPriority(stack_buf_38,2);
  HW_Routine_08008364(temp_buf_3c,2);
  p_uint6 = (undefined4 *)(hw_reg + 0x1A30);
  u_val2 = HW_Routine_08008D3C(200);
  *p_uint6 = u_val2;
  p_uint3 = (undefined1 *)(hw_reg + 0x1A34);
  i_val1 = 3;
  do {
    *p_uint3 = 0;
    p_uint3 = p_uint3 + 0x10;
    i_val1 = i_val1 + -1;
  } while (i_val1 != -1);
  *(undefined1 *)(hw_reg + 0x1A76) = 0;
  i_val1 = hw_reg + 0x1A34;
  u_val4 = gba_strlen(val);
  if (0xf < u_val4) {
    u_val4 = 0xf;
  }
  gba_memcpy(i_val1,val,u_val4);
  *(undefined1 *)(i_val1 + u_val4) = 0;
  ScriptEngine_Routine_0804EC84(((size & 0x7f) >> 2) + 1,stack_buf_34,2);
  u_val2 = Farmer_Init(size & 3);
  i_val7 = hw_reg + 0x1A44;
  i_val1 = gba_strlen(i_val7);
  u_val4 = 0xf - i_val1;
  if (u_val4 != 0) {
    u_val5 = gba_strlen(u_val2);
    if (u_val4 < u_val5) {
      u_val5 = u_val4;
    }
    gba_memcpy(i_val7 + i_val1,u_val2,u_val5);
    *(undefined1 *)(i_val7 + i_val1 + u_val5) = 0;
  }
  i_val1 = gba_strlen(i_val7);
  u_val4 = 0xf - i_val1;
  if (u_val4 != 0) {
    u_val5 = gba_strlen(stack_buf_34);
    if (u_val4 < u_val5) {
      u_val5 = u_val4;
    }
    gba_memcpy(i_val7 + i_val1,stack_buf_34,u_val5);
    *(undefined1 *)(i_val7 + i_val1 + u_val5) = 0;
  }
  i_val1 = hw_reg + 0x1A54;
  u_val4 = gba_strlen(stack_val_24);
  if (0xf < u_val4) {
    u_val4 = 0xf;
  }
  gba_memcpy(i_val1,stack_val_24,u_val4);
  *(undefined1 *)(i_val1 + u_val4) = 0;
  i_val1 = hw_reg + 0x1A64;
  u_val4 = gba_strlen(arg_5);
  if (0xf < u_val4) {
    u_val4 = 0xf;
  }
  gba_memcpy(i_val1,arg_5,u_val4);
  *(undefined1 *)(i_val1 + u_val4) = 0;
  return hw_reg;
}

// =============================================================================
// Function: HW_Routine_080050C8 @ 0x080050C8
// =============================================================================
void HW_Routine_080050C8(int hw_reg,undefined4 val)

{
  
  *(undefined4 *)(hw_reg + 4) = gRomData_080E5A98;
  if (*(int *)(hw_reg + 0x1A2C) != 0) {
    Animal_Routine_08050D0C(*(int *)(hw_reg + 0x1A2C),3);
  }
  HW_Routine_080086BC(hw_reg,val);
  return;
}

// =============================================================================
// Function: HW_Routine_080050F8 @ 0x080050F8
// =============================================================================
u32 HW_Routine_080050F8(undefined4 *hw_reg,int val)

{
  bool b_flag1;
  int i_val2;
  uint *p_uint3;
  undefined4 u_val4;
  uint u_val5;
  undefined4 stack_val_28;
  undefined4 *puStack_24;
  undefined4 stack_val_20;
  
  HW_Routine_08005254(val);
  HW_Routine_08005260(val);
  HW_Routine_08005278(val);
  i_val2 = HW_GetSpriteAttr1Offset(val);
  *(undefined2 *)(i_val2 + 0x50) = 0x3f;
  p_uint3 = (uint *)CppRuntime_OperatorNewArray(0x10);
  u_val4 = HW_GetSpriteAttr1Offset(val);
  *p_uint3 = 0;
  p_uint3[1] = 0;
  p_uint3[2] = gRomData_080E5B80;
  Fade_Init(p_uint3 + 3,u_val4);
  Fade_StartFadeOut(p_uint3 + 3,0x889,1,1);
  i_val2 = HW_GetPaletteBankOffset(val);
  _call_via_r2(i_val2,p_uint3,*(undefined4 *)(*(int *)(i_val2 + 8) + 0x10));
  u_val5 = 0;
  b_flag1 = false;
  do {
    HW_Routine_080087C8(val);
    HW_Routine_080088B8(val);
    HW_Routine_080088D4(val);
    if (u_val5 == 1) {
      HW_Routine_08005800(val);
      if (*(char *)(val + 0x1A74) != '\0') {
        u_val5 = 2;
      }
    }
    else if (u_val5 < 2) {
      if ((u_val5 == 0) && (-1 < (int)(-*p_uint3 | *p_uint3))) {
        u_val5 = 1;
      }
    }
    else if (u_val5 == 2) {
      Fade_StartFadeIn(p_uint3 + 3,0x889,1,1);
      i_val2 = HW_GetPaletteBankOffset(val);
      _call_via_r2(i_val2,p_uint3,*(undefined4 *)(*(int *)(i_val2 + 8) + 0x10));
      u_val5 = 3;
    }
    else if ((u_val5 == 3) && (-1 < (int)(-*p_uint3 | *p_uint3))) {
      b_flag1 = true;
    }
  } while (!b_flag1);
  *hw_reg = 0;
  stack_val_20 = 0;
  stack_val_28 = 0;
  if (p_uint3 != (uint *)0x0) {
    puStack_24 = &stack_val_28;
    _call_via_r2(p_uint3,3,*(undefined4 *)(p_uint3[2] + 0xc));
  }
  return hw_reg;
}

// =============================================================================
// Function: HW_Routine_08005254 @ 0x08005254
// =============================================================================
void HW_Routine_08005254(void)

{
  
  HW_Routine_08008724();
  return;
}

// =============================================================================
// Function: HW_Routine_08005278 @ 0x08005278
// =============================================================================
void HW_Routine_08005278(int hw_reg)

{
  int i_val1;
  int i_val2;
  undefined2 *p_uint3;
  int i_val4;
  int *p_int5;
  int *p_int6;
  undefined4 u_val7;
  undefined4 u_val8;
  undefined4 u_val9;
  undefined4 u_val10;
  undefined4 *p_uint11;
  undefined4 *p_uint12;
  undefined4 *p_uint13;
  undefined4 u_val14;
  int i_val15;
  undefined4 u_val16;
  int i_val17;
  uint loop_j;
  int i_val19;
  uint loop_i;
  uint loop_k;
  undefined4 stack_val_a8;
  undefined4 stack_val_a4;
  undefined4 stack_val_a0;
  undefined4 stack_val_9c;
  undefined4 stack_val_94;
  undefined4 stack_val_90;
  undefined4 stack_val_8c;
  undefined4 stack_val_88;
  undefined4 stack_val_84;
  undefined4 stack_val_80;
  undefined4 stack_val_7c;
  int stack_val_78;
  int stack_val_74;
  int stack_val_70;
  int stack_val_6c;
  undefined4 *puStack_68;
  undefined4 *puStack_64;
  int stack_val_60;
  int stack_val_5c;
  undefined4 *puStack_58;
  int stack_val_54;
  undefined4 *puStack_50;
  undefined4 *puStack_4c;
  int stack_val_48;
  undefined4 *puStack_44;
  undefined4 *puStack_40;
  undefined4 *puStack_3c;
  int stack_val_38;
  int stack_val_34;
  int stack_val_30;
  int stack_val_2c;
  undefined4 *puStack_28;
  undefined4 *puStack_24;
  
  GBA_DMA3_FastCopy(*gRomData_080F9F70,0x06004B00,*gRomData_080F9F74);
  GBA_DMA3_FastCopy(*gRomData_080F9F78,0x5000000,0x20);
  p_uint3 = (undefined2 *)HW_GetSpriteAttr1Offset(hw_reg);
  stack_val_a8._0_2_ = 0x1740;
  *p_uint3 = 0x1740;
  i_val4 = HW_GetSpriteAttr1Offset(hw_reg);
  stack_val_a8._0_2_ = (undefined2)0x1841;
  *(undefined2 *)(i_val4 + 10) = (undefined2)stack_val_a8;
  i_val4 = HW_GetSpriteAttr1Offset(hw_reg);
  stack_val_a8 = CONCAT22(stack_val_a8._2_2_,(short)0x1F01);
  *(short *)(i_val4 + 0xc) = (short)0x1F01;
  Animal_Routine_08051320(0x0600F800,0,0,0x1e,0x14,600,0);
  HW_Routine_08008EB8(0,0x06FFC000,0x20);
  loop_i = 0;
  puStack_50 = &stack_val_8c;
  puStack_4c = &stack_val_88;
  puStack_44 = &stack_val_84;
  puStack_40 = &stack_val_80;
  puStack_3c = &stack_val_7c;
  puStack_58 = &stack_val_a4;
  i_val4 = hw_reg + 0xc;
  do {
    stack_val_94 = 0x2000c;
    ScriptEngine_Routine_0804E7A0(0x2000c,i_val4,0);
    i_val4 = i_val4 + 0x304;
    loop_i = loop_i + 1;
  } while (loop_i < 4);
  loop_i = 0;
  i_val19 = 0xC1C + hw_reg;
  stack_val_60 = hw_reg + 4000;
  stack_val_5c = 0x1324 + hw_reg;
  stack_val_48 = 0x16A8 + hw_reg;
  i_val4 = 0xC1C + hw_reg;
  do {
    stack_val_90 = 0x2000e;
    ScriptEngine_Routine_0804E7A0(0x2000e,i_val4,0);
    i_val4 = i_val4 + 900;
    loop_i = loop_i + 1;
  } while (loop_i < 4);
  loop_i = 0;
  i_val4 = hw_reg + 0xc;
  do {
    stack_val_8c = CONCAT22(stack_val_8c._2_2_,0xc);
    *(undefined2 *)((int)puStack_50 + 2) = 2;
    ScriptEngine_Routine_0804E8F0(stack_val_8c,i_val4,0,0,loop_i * 0x10 + hw_reg + 0x1A34);
    i_val4 = i_val4 + 0x304;
    loop_i = loop_i + 1;
  } while (loop_i < 4);
  stack_val_88 = CONCAT22(stack_val_88._2_2_,0xe);
  *(undefined2 *)((int)puStack_4c + 2) = 2;
  ScriptEngine_Routine_0804E8F0(stack_val_88,i_val19,0,0,gRomData_080E8958);
  stack_val_84 = CONCAT22(stack_val_84._2_2_,0xe);
  *(undefined2 *)((int)puStack_44 + 2) = 2;
  ScriptEngine_Routine_0804E8F0(stack_val_84,stack_val_60,0,0,gRomData_080E8968);
  stack_val_80 = CONCAT22(stack_val_80._2_2_,0xe);
  *(undefined2 *)((int)puStack_40 + 2) = 2;
  ScriptEngine_Routine_0804E8F0(stack_val_80,stack_val_5c,0,0,gRomData_080E8978);
  stack_val_7c = CONCAT22(stack_val_7c._2_2_,0xe);
  *(undefined2 *)((int)puStack_3c + 2) = 2;
  ScriptEngine_Routine_0804E8F0(stack_val_7c,stack_val_48,0,0,gRomData_080E8988);
  loop_i = 0;
  puStack_68 = puStack_58;
  stack_val_30 = 0x6000000;
  stack_val_2c = hw_reg + 0xc;
  do {
    p_int5 = (int *)HW_GetSpriteAttr0Offset(hw_reg);
    HW_Routine_08008F0C(&stack_val_a4,stack_val_2c,stack_val_30,0x300);
    p_uint11 = (undefined4 *)p_int5[1];
    if (p_uint11 == (undefined4 *)p_int5[3]) {
      puStack_28 = p_uint11;
      stack_val_74 = 1;
      stack_val_78 = (int)p_uint11 - *p_int5 >> 4;
      p_int6 = &stack_val_78;
      if (stack_val_78 == 0) {
        p_int6 = &stack_val_74;
      }
      if (stack_val_78 + *p_int6 == 0) {
        p_uint11 = (undefined4 *)0x0;
        i_val4 = 0;
      }
      else {
        i_val4 = (stack_val_78 + *p_int6) * 0x10;
        p_uint11 = (undefined4 *)runtime_malloc_aligned(i_val4);
        if (p_uint11 == (undefined4 *)0x0) {
          p_uint11 = (undefined4 *)VTable_Routine_080D3BC0(i_val4);
        }
      }
      p_uint12 = (undefined4 *)*p_int5;
      stack_val_54 = 0xc00;
      p_uint13 = p_uint11;
      for (; p_uint12 != puStack_28; p_uint12 = p_uint12 + 4) {
        if (p_uint13 != (undefined4 *)0x0) {
          u_val14 = p_uint12[1];
          u_val16 = p_uint12[2];
          *p_uint13 = *p_uint12;
          p_uint13[1] = u_val14;
          p_uint13[2] = u_val16;
          p_uint13[3] = p_uint12[3];
        }
        p_uint13 = p_uint13 + 4;
      }
      i_val19 = stack_val_74;
      if (stack_val_74 == 1) {
        if (p_uint13 != (undefined4 *)0x0) {
          u_val14 = puStack_68[1];
          u_val16 = puStack_68[2];
          *p_uint13 = *puStack_68;
          p_uint13[1] = u_val14;
          p_uint13[2] = u_val16;
          p_uint13[3] = puStack_68[3];
        }
        p_uint13 = p_uint13 + 4;
      }
      else {
        for (; i_val19 != 0; i_val19 = i_val19 + -1) {
          if (p_uint13 != (undefined4 *)0x0) {
            u_val14 = puStack_68[1];
            u_val16 = puStack_68[2];
            *p_uint13 = *puStack_68;
            p_uint13[1] = u_val14;
            p_uint13[2] = u_val16;
            p_uint13[3] = puStack_68[3];
          }
          p_uint13 = p_uint13 + 4;
        }
      }
      for (i_val19 = *p_int5; i_val19 != p_int5[1]; i_val19 = i_val19 + 0x10) {
      }
      puStack_24 = p_uint11;
      if (*p_int5 != 0) {
        cpp_operator_delete();
      }
      *p_int5 = (int)puStack_24;
      p_int5[1] = (int)p_uint13;
      p_int5[3] = (int)puStack_24 + i_val4;
    }
    else {
      if (p_uint11 != (undefined4 *)0x0) {
        u_val14 = puStack_68[1];
        u_val16 = puStack_68[2];
        *p_uint11 = *puStack_68;
        p_uint11[1] = u_val14;
        p_uint11[2] = u_val16;
        p_uint11[3] = puStack_68[3];
      }
      p_int5[1] = p_int5[1] + 0x10;
      stack_val_54 = 0xc00;
    }
    stack_val_30 = stack_val_30 + 0x300;
    stack_val_2c = stack_val_2c + 0x304;
    loop_i = loop_i + 1;
  } while (loop_i < 4);
  loop_i = 0;
  puStack_64 = &stack_val_a8;
  stack_val_38 = stack_val_54 + 0x6000000;
  stack_val_34 = 0xC1C + hw_reg;
  do {
    p_int5 = (int *)HW_GetSpriteAttr0Offset(hw_reg);
    HW_Routine_08008F0C(&stack_val_a8,stack_val_34,stack_val_38,0x380);
    p_uint11 = (undefined4 *)p_int5[1];
    if (p_uint11 == (undefined4 *)p_int5[3]) {
      puStack_28 = p_uint11;
      stack_val_6c = 1;
      stack_val_70 = (int)p_uint11 - *p_int5 >> 4;
      p_int6 = &stack_val_70;
      if (stack_val_70 == 0) {
        p_int6 = &stack_val_6c;
      }
      if (stack_val_70 + *p_int6 == 0) {
        p_uint11 = (undefined4 *)0x0;
        i_val4 = 0;
      }
      else {
        i_val4 = (stack_val_70 + *p_int6) * 0x10;
        p_uint11 = (undefined4 *)runtime_malloc_aligned(i_val4);
        if (p_uint11 == (undefined4 *)0x0) {
          p_uint11 = (undefined4 *)VTable_Routine_080D3BC0(i_val4);
        }
      }
      p_uint12 = p_uint11;
      for (p_uint13 = (undefined4 *)*p_int5; p_uint13 != puStack_28; p_uint13 = p_uint13 + 4) {
        if (p_uint12 != (undefined4 *)0x0) {
          u_val14 = p_uint13[1];
          u_val16 = p_uint13[2];
          *p_uint12 = *p_uint13;
          p_uint12[1] = u_val14;
          p_uint12[2] = u_val16;
          p_uint12[3] = p_uint13[3];
        }
        p_uint12 = p_uint12 + 4;
      }
      i_val19 = stack_val_6c;
      if (stack_val_6c == 1) {
        if (p_uint12 != (undefined4 *)0x0) {
          u_val14 = puStack_64[1];
          u_val16 = puStack_64[2];
          *p_uint12 = *puStack_64;
          p_uint12[1] = u_val14;
          p_uint12[2] = u_val16;
          p_uint12[3] = puStack_64[3];
        }
        p_uint12 = p_uint12 + 4;
      }
      else {
        for (; i_val19 != 0; i_val19 = i_val19 + -1) {
          if (p_uint12 != (undefined4 *)0x0) {
            u_val14 = puStack_64[1];
            u_val16 = puStack_64[2];
            *p_uint12 = *puStack_64;
            p_uint12[1] = u_val14;
            p_uint12[2] = u_val16;
            p_uint12[3] = puStack_64[3];
          }
          p_uint12 = p_uint12 + 4;
        }
      }
      for (i_val19 = *p_int5; i_val19 != p_int5[1]; i_val19 = i_val19 + 0x10) {
      }
      puStack_24 = p_uint11;
      if (*p_int5 != 0) {
        cpp_operator_delete();
      }
      *p_int5 = (int)puStack_24;
      p_int5[1] = (int)p_uint12;
      p_int5[3] = (int)puStack_24 + i_val4;
    }
    else {
      if (p_uint11 != (undefined4 *)0x0) {
        *p_uint11 = stack_val_a8;
        p_uint11[1] = stack_val_a4;
        p_uint11[2] = stack_val_a0;
        p_uint11[3] = stack_val_9c;
      }
      p_int5[1] = p_int5[1] + 0x10;
    }
    i_val4 = 0x0600C000;
    stack_val_38 = stack_val_38 + 0x380;
    stack_val_34 = stack_val_34 + 900;
    loop_i = loop_i + 1;
  } while (loop_i < 4);
  HW_Routine_08008EB8(0xffffffff,0x0600C000,0x800);
  loop_i = 0;
  do {
    loop_j = 0;
    p_uint3 = (undefined2 *)(loop_i * 0x40 + i_val4);
    do {
      *p_uint3 = 100;
      i_val19 = 0x0600C080;
      p_uint3 = p_uint3 + 1;
      loop_j = loop_j + 1;
    } while (loop_j < 0x1e);
    loop_i = loop_i + 1;
  } while (loop_i < 0x14);
  loop_i = 2;
  do {
    loop_j = 0;
    i_val4 = loop_i * 2;
    i_val17 = loop_i + 0x6c;
    i_val15 = loop_i + 0x5e;
    p_uint3 = (undefined2 *)(i_val4 + 0x0600C040);
    do {
      *p_uint3 = (short)i_val15;
      *(short *)(i_val4 + i_val19) = (short)i_val17;
      i_val2 = 0xFFF0;
      i_val1 = 0x0600C080;
      i_val17 = i_val17 + 0x1c;
      i_val15 = i_val15 + 0x1c;
      p_uint3 = p_uint3 + 0x60;
      i_val4 = i_val4 + 0xc0;
      loop_j = loop_j + 1;
    } while (loop_j < 4);
    loop_i = loop_i + 1;
  } while (loop_i < 0x10);
  loop_i = 0x10;
  do {
    loop_k = 0;
    i_val4 = loop_i * 2;
    loop_j = loop_i + 1;
    i_val15 = loop_i + 0xc + i_val2;
    i_val19 = loop_i + i_val2;
    p_uint3 = (undefined2 *)(i_val4 + 0x0600C040);
    do {
      *p_uint3 = (short)i_val19;
      *(short *)(i_val4 + i_val1) = (short)i_val15;
      i_val15 = i_val15 + 0x18;
      i_val19 = i_val19 + 0x18;
      p_uint3 = p_uint3 + 0x60;
      i_val4 = i_val4 + 0xc0;
      loop_k = loop_k + 1;
    } while (loop_k < 4);
    loop_i = loop_j;
  } while (loop_j < 0x1c);
  u_val14 = *(undefined4 *)(0x1A2C + hw_reg);
  u_val16 = HW_Routine_080088DC(hw_reg);
  u_val7 = HW_GetSpriteAttr2Offset(hw_reg);
  u_val8 = HW_GetSpriteAttr1Offset(hw_reg);
  u_val9 = HW_GetPaletteBankOffset(hw_reg);
  u_val10 = HW_Routine_0800894C(hw_reg);
  Animal_Routine_08050D3C(u_val14,u_val16,u_val7,u_val8,u_val9,u_val10,0x1A30 + hw_reg);
  return;
}

// =============================================================================
// Function: HW_Routine_08005800 @ 0x08005800
// =============================================================================
u32 HW_Routine_08005800(int hw_reg)

{
  int i_val1;
  undefined4 u_val2;
  undefined4 u_val3;
  undefined4 u_val4;
  undefined4 u_val5;
  undefined4 u_val6;
  uint u_val7;
  undefined4 *p_uint8;
  undefined4 u_val9;
  
  p_uint8 = (undefined4 *)(hw_reg + 0x1A2C);
  i_val1 = Animal_Routine_08050D34(*p_uint8);
  u_val9 = *p_uint8;
  u_val2 = HW_Routine_080088DC(hw_reg);
  u_val3 = HW_GetSpriteAttr2Offset(hw_reg);
  u_val4 = HW_GetSpriteAttr1Offset(hw_reg);
  u_val5 = HW_GetPaletteBankOffset(hw_reg);
  u_val6 = HW_Routine_0800894C(hw_reg);
  u_val7 = Animal_Routine_08050D3C(u_val9,u_val2,u_val3,u_val4,u_val5,u_val6,hw_reg + 0x1A30);
  if (u_val7 < 7) {
    switch(*(uint *)(u_val7 * 4 + gInlineTable_08005878) & 0xfffffffe) {
    case 0x8005894:
      if (*(char *)(hw_reg + 0x1A75) != '\0') {
        *(undefined1 *)(hw_reg + 0x1A74) = 1;
      }
      Animal_Routine_08050D5C(*(undefined4 *)(hw_reg + 0x1A2C));
      break;
    case 0x80058c0:
      if (i_val1 < 6) {
        if (3 < i_val1) {
          return;
        }
        if (i_val1 == 1) {
          Animal_Routine_08050E30(*(undefined4 *)(hw_reg + 0x1A2C),gRomData_080E8998,gRomData_080E89A4,
                        gRomData_080E89A8,0,0,0);
          return;
        }
      }
      else if (i_val1 == 6) {
        u_val7 = Animal_Routine_08050DF0(*(undefined4 *)(hw_reg + 0x1A2C));
        if (6 < u_val7) {
          return;
        }
        u_val2 = (**(code **)(u_val7 * 4 + gInlineTable_08005930))();
        return u_val2;
      }
      Animal_Routine_08050D74(*(undefined4 *)(hw_reg + 0x1A2C));
    }
  }
  return;
}

// =============================================================================
// Function: HW_Routine_0800598C @ 0x0800598C
// =============================================================================
undefined8
HW_Routine_0800598C(undefined4 *hw_reg,undefined4 val,undefined4 size,undefined4 mode,
             undefined4 arg_5)

{
  undefined4 u_val1;
  
  *hw_reg = gRomData_080E5AA4;
  u_val1 = CppRuntime_OperatorNewArray(0x1A78);
  u_val1 = HW_Routine_08004EFC(u_val1,val,size,mode,arg_5);
  hw_reg[1] = u_val1;
  return hw_reg;
}

// =============================================================================
// Function: HW_Routine_080059D0 @ 0x080059D0
// =============================================================================
void HW_Routine_080059D0(undefined4 *hw_reg,undefined4 val)

{
  int i_val1;
  
  *hw_reg = gRomData_080E5AA4;
  i_val1 = hw_reg[1];
  if (i_val1 != 0) {
    _call_via_r2(i_val1,3,*(undefined4 *)(*(int *)(i_val1 + 4) + 8));
  }
  SramProxy_VerifyBufferParity(hw_reg,val);
  return;
}

// =============================================================================
// Function: HW_Routine_08005A00 @ 0x08005A00
// =============================================================================
u32 HW_Routine_08005A00(undefined4 *hw_reg,int val)

{
  undefined4 facing_buffer [3];
  
  HW_Routine_080050F8(facing_buffer,*(undefined4 *)(val + 4));
  *hw_reg = facing_buffer[0];
  return hw_reg;
}

// =============================================================================
// Function: HW_Routine_08005A58 @ 0x08005A58
// =============================================================================
u32 HW_Routine_08005A58(int hw_reg,undefined4 val,char *size)

{
  char c_char1;
  int i_val2;
  undefined4 u_val3;
  undefined4 *p_uint4;
  undefined4 u_val5;
  undefined4 *p_uint6;
  undefined1 temp_buf_20 [4];
  undefined1 stack_buf_1c [4];
  
  HW_Routine_08008444();
  *(undefined4 *)(hw_reg + 4) = gRomData_080E5AB4;
  i_val2 = 7;
  do {
    i_val2 = i_val2 + -1;
  } while (i_val2 != -1);
  HW_Routine_08008B54(hw_reg + 0x45F0,1);
  HW_Routine_08008B54(hw_reg + 0x45F4,2);
  u_val3 = CppRuntime_OperatorNewArray(4);
  GBA_TextLayer_Init(temp_buf_20);
  GBA_BgLayer_Init(stack_buf_1c);
  u_val3 = Animal_Routine_08050CC0(u_val3,0,0xf,4,0,temp_buf_20,stack_buf_1c);
  *(undefined4 *)(hw_reg + 0x45F8) = u_val3;
  GBA_BgLayer_SetPriority(stack_buf_1c,2);
  HW_Routine_08008364(temp_buf_20,2);
  *(undefined4 *)(hw_reg + 0x45FC) = val;
  p_uint4 = (undefined4 *)(hw_reg + 0x461C);
  u_val3 = gRomData_080E8BE4[1];
  u_val5 = gRomData_080E8BE4[2];
  p_uint6 = gRomData_080E8BE4 + 3;
  *p_uint4 = *gRomData_080E8BE4;
  p_uint4[1] = u_val3;
  p_uint4[2] = u_val5;
  *(undefined1 *)(p_uint4 + 3) = *(undefined1 *)p_uint6;
  if (size != (char *)0x0) {
    i_val2 = 0;
    c_char1 = *size;
    while (c_char1 != '\0') {
      *(char *)((int)p_uint4 + i_val2) = *size;
      size = size + 1;
      i_val2 = i_val2 + 1;
      if (0xc < i_val2) break;
      c_char1 = *size;
    }
  }
  return hw_reg;
}

// =============================================================================
// Function: HW_Routine_08005B38 @ 0x08005B38
// =============================================================================
void HW_Routine_08005B38(int hw_reg,undefined4 val)

{
  
  *(undefined4 *)(hw_reg + 4) = gRomData_080E5AB4;
  if (*(int *)(hw_reg + 0x45F8) != 0) {
    Animal_Routine_08050D0C(*(int *)(hw_reg + 0x45F8),3);
  }
  HW_Routine_080086BC(hw_reg,val);
  return;
}

// =============================================================================
// Function: HW_Routine_08005B68 @ 0x08005B68
// =============================================================================
u32 HW_Routine_08005B68(undefined4 *hw_reg,int val)

{
  undefined4 u_val1;
  int i_val2;
  uint u_val3;
  undefined1 temp_buf_40 [4];
  undefined4 stack_val_3c;
  undefined2 stack_val_38;
  uint stack_val_34;
  undefined4 stack_val_30;
  undefined4 stack_val_2c;
  undefined1 temp_buf_28 [4];
  undefined4 stack_val_24;
  undefined4 *puStack_20;
  undefined4 stack_val_1c;
  
  HW_Routine_08008724(val);
  GBA_ObjAttr_Init(temp_buf_40);
  stack_val_3c = 0;
  HW_Routine_08007C28(temp_buf_40,0);
  stack_val_3c = GBA_ObjAttr_AllocateSprite(temp_buf_40,3);
  u_val1 = GBA_Vram_AllocateTileBlock(temp_buf_40);
  HW_Routine_08005CDC(val);
  HW_Routine_080061A0(val,u_val1);
  HW_Routine_08006334(val);
  HW_Routine_0800637C(val);
  i_val2 = HW_GetSpriteAttr1Offset(val);
  stack_val_38 = 0x3f;
  *(undefined2 *)(i_val2 + 0x50) = 0x3f;
  u_val1 = HW_GetSpriteAttr1Offset(val);
  stack_val_34 = 0;
  stack_val_30 = 0;
  stack_val_2c = gRomData_080E5B80;
  Fade_Init(temp_buf_28,u_val1);
  Fade_StartFadeOut(temp_buf_28,0x889,1,1);
  i_val2 = HW_GetPaletteBankOffset(val);
  _call_via_r2(i_val2,&stack_val_34,*(undefined4 *)(*(int *)(i_val2 + 8) + 0x10));
  u_val3 = -stack_val_34 | stack_val_34;
  while ((int)u_val3 < 0) {
    HW_Routine_080087C8(val);
    u_val3 = -stack_val_34 | stack_val_34;
  }
  while (*(char *)(val + 0x4636) == '\0') {
    HW_Routine_080088B8(val);
    HW_Routine_08006CDC(val);
    HW_Routine_080068CC(val);
    HW_Routine_0800637C(val);
    HW_Routine_080064E8(val);
    HW_Routine_08006858(val);
    HW_Routine_08006ED8(val);
    HW_Routine_080087C8(val);
  }
  Fade_StartFadeIn(temp_buf_28,0x889,1,1);
  i_val2 = HW_GetPaletteBankOffset(val);
  _call_via_r2(i_val2,&stack_val_34,*(undefined4 *)(*(int *)(i_val2 + 8) + 0x10));
  while ((int)(-stack_val_34 | stack_val_34) < 0) {
    HW_Routine_080087C8(val);
  }
  *hw_reg = 0;
  stack_val_1c = 0;
  stack_val_24 = 0;
  puStack_20 = &stack_val_24;
  Farm_Routine_080094B8(&stack_val_34,2);
  HW_Routine_08007C28(temp_buf_40,stack_val_3c);
  HW_Routine_080079E8(temp_buf_40,2);
  return hw_reg;
}

// =============================================================================
// Function: HW_Routine_08005CDC @ 0x08005CDC
// =============================================================================
void HW_Routine_08005CDC(int hw_reg)

{
  undefined2 *p_uint1;
  int i_val2;
  int *p_int3;
  int *p_int4;
  undefined4 u_val5;
  undefined4 u_val6;
  undefined4 u_val7;
  undefined4 u_val8;
  uint loop_i;
  undefined4 *p_uint10;
  undefined4 *p_uint11;
  int i_val12;
  short *psVar13;
  short *psVar14;
  undefined4 *p_uint15;
  uint loop_j;
  uint u_val17;
  undefined4 u_val18;
  int i_val19;
  undefined4 u_val20;
  undefined4 stack_val_68;
  undefined4 stack_val_64;
  undefined4 stack_val_60;
  undefined4 stack_val_5c;
  undefined4 stack_val_54;
  undefined4 stack_val_50;
  int stack_val_4c;
  int stack_val_48;
  undefined4 stack_val_44;
  undefined4 stack_val_40;
  int stack_val_3c;
  int stack_val_38;
  int stack_val_34;
  undefined4 *puStack_30;
  undefined4 *puStack_2c;
  undefined4 *puStack_28;
  undefined4 *puStack_24;
  
  GBA_DMA3_FastCopy(*gRomData_080F9F70,0x06004B00,*gRomData_080F9F74);
  GBA_DMA3_FastCopy(*gRomData_080F9F78,0x5000000,0x20);
  p_uint1 = (undefined2 *)HW_GetSpriteAttr1Offset(hw_reg);
  stack_val_68._0_2_ = 0x1740;
  *p_uint1 = 0x1740;
  i_val2 = HW_GetSpriteAttr1Offset(hw_reg);
  stack_val_68._0_2_ = (undefined2)0x1841;
  *(undefined2 *)(i_val2 + 10) = (undefined2)stack_val_68;
  i_val2 = HW_GetSpriteAttr1Offset(hw_reg);
  stack_val_68 = CONCAT22(stack_val_68._2_2_,(short)0x1F02);
  *(short *)(i_val2 + 0xc) = (short)0x1F02;
  Animal_Routine_08051320(0x0600F800,0,0,0x1e,0x14,600,0);
  i_val2 = 0x0600C000;
  HW_Routine_08008EB8(0xffffffff,0x0600C000,0x800);
  loop_i = 0;
  puStack_30 = &stack_val_64;
  puStack_2c = &stack_val_44;
  i_val19 = hw_reg + 0xc;
  stack_val_34 = 0x43B0 + hw_reg;
  do {
    loop_j = 0;
    i_val12 = loop_i * 0x40;
    loop_i = loop_i + 1;
    p_uint1 = (undefined2 *)(i_val12 + i_val2);
    do {
      *p_uint1 = 0x1a2;
      p_uint1 = p_uint1 + 1;
      loop_j = loop_j + 1;
    } while (loop_j < 0x1e);
  } while (loop_i < 0x14);
  loop_i = 10;
  psVar13 = 0x0600C054;
  psVar14 = 0x0600C094;
  do {
    *psVar13 = (short)loop_i;
    *psVar14 = (short)loop_i + 0x1e;
    psVar14 = psVar14 + 1;
    psVar13 = psVar13 + 1;
    loop_i = loop_i + 1;
  } while (loop_i < 0x10);
  loop_i = 3;
  psVar13 = 0x0600C446;
  psVar14 = 0x0600C486;
  do {
    *psVar13 = (short)loop_i + 0x1a4;
    *psVar14 = (short)loop_i + 0x1c2;
    i_val2 = 0x0600C000;
    psVar14 = psVar14 + 1;
    psVar13 = psVar13 + 1;
    loop_i = loop_i + 1;
  } while (loop_i < 0x1b);
  loop_i = 4;
  do {
    loop_j = 0;
    u_val17 = loop_i + 1;
    psVar13 = (short *)(loop_i * 0x40 + i_val2);
    do {
      *psVar13 = ((short)loop_i + -2) * 0x1e + (short)loop_j;
      psVar13 = psVar13 + 1;
      loop_j = loop_j + 1;
    } while (loop_j < 0x1e);
    loop_i = u_val17;
  } while (u_val17 < 0x10);
  loop_i = 0x12;
  psVar13 = 0x0600C064;
  psVar14 = 0x0600C0A4;
  do {
    *psVar13 = (short)loop_i + 0x1e0;
    *psVar14 = (short)loop_i + 0x1fe;
    u_val18 = 0x21B;
    psVar14 = psVar14 + 1;
    psVar13 = psVar13 + 1;
    loop_i = loop_i + 1;
  } while (loop_i < 0x1e);
  if (*(int *)(0x45FC + hw_reg) != 0) {
    loop_i = 1;
    psVar13 = 0x0600C042;
    psVar14 = 0x0600C082;
    do {
      *psVar13 = (short)loop_i + (short)u_val18;
      *psVar14 = (short)loop_i + 0x224;
      psVar14 = psVar14 + 1;
      psVar13 = psVar13 + 1;
      loop_i = loop_i + 1;
    } while (loop_i < 10);
  }
  HW_Routine_08008EB8(0,0x06FFC000,0x20);
  stack_val_54 = 0x2001e;
  ScriptEngine_Routine_0804E7A0(0x2001e,i_val19,0);
  stack_val_50 = 0x2001e;
  ScriptEngine_Routine_0804E8F0(0x2001e,i_val19,0x58,0,gRomData_080E8BF4);
  p_int3 = (int *)HW_GetSpriteAttr0Offset(hw_reg);
  HW_Routine_08008F0C(&stack_val_64,i_val19,0x6000000,0x780);
  p_uint11 = puStack_30;
  p_uint10 = (undefined4 *)p_int3[1];
  if (p_uint10 == (undefined4 *)p_int3[3]) {
    stack_val_48 = 1;
    stack_val_4c = (int)p_uint10 - *p_int3 >> 4;
    p_int4 = &stack_val_4c;
    if (stack_val_4c == 0) {
      p_int4 = &stack_val_48;
    }
    puStack_28 = p_uint10;
    if (stack_val_4c + *p_int4 == 0) {
      puStack_24 = (undefined4 *)0x0;
      i_val2 = 0;
    }
    else {
      i_val2 = (stack_val_4c + *p_int4) * 0x10;
      puStack_24 = (undefined4 *)runtime_malloc_aligned(i_val2);
      if (puStack_24 == (undefined4 *)0x0) {
        puStack_24 = (undefined4 *)VTable_Routine_080D3BC0(i_val2);
      }
    }
    p_uint15 = puStack_24;
    for (p_uint10 = (undefined4 *)*p_int3; p_uint10 != puStack_28; p_uint10 = p_uint10 + 4) {
      if (p_uint15 != (undefined4 *)0x0) {
        u_val18 = p_uint10[1];
        u_val20 = p_uint10[2];
        *p_uint15 = *p_uint10;
        p_uint15[1] = u_val18;
        p_uint15[2] = u_val20;
        p_uint15[3] = p_uint10[3];
      }
      p_uint15 = p_uint15 + 4;
    }
    i_val19 = stack_val_48;
    if (stack_val_48 == 1) {
      if (p_uint15 != (undefined4 *)0x0) {
        u_val18 = p_uint11[1];
        u_val20 = p_uint11[2];
        *p_uint15 = *p_uint11;
        p_uint15[1] = u_val18;
        p_uint15[2] = u_val20;
        p_uint15[3] = p_uint11[3];
      }
      p_uint15 = p_uint15 + 4;
    }
    else {
      for (; i_val19 != 0; i_val19 = i_val19 + -1) {
        if (p_uint15 != (undefined4 *)0x0) {
          u_val18 = p_uint11[1];
          u_val20 = p_uint11[2];
          *p_uint15 = *p_uint11;
          p_uint15[1] = u_val18;
          p_uint15[2] = u_val20;
          p_uint15[3] = p_uint11[3];
        }
        p_uint15 = p_uint15 + 4;
      }
    }
    for (i_val19 = *p_int3; i_val19 != p_int3[1]; i_val19 = i_val19 + 0x10) {
    }
    if (*p_int3 != 0) {
      cpp_operator_delete();
    }
    *p_int3 = (int)puStack_24;
    p_int3[1] = (int)p_uint15;
    p_int3[3] = (int)puStack_24 + i_val2;
  }
  else {
    if (p_uint10 != (undefined4 *)0x0) {
      u_val18 = puStack_30[1];
      u_val20 = puStack_30[2];
      *p_uint10 = *puStack_30;
      p_uint10[1] = u_val18;
      p_uint10[2] = u_val20;
      p_uint10[3] = puStack_30[3];
    }
    p_int3[1] = p_int3[1] + 0x10;
  }
  *(undefined4 *)(hw_reg + 0x4600) = 0;
  *(undefined1 *)(0x4637 + hw_reg) = 1;
  HW_Routine_080064E8(hw_reg);
  stack_val_44 = CONCAT22(stack_val_44._2_2_,9);
  *(undefined2 *)((int)puStack_2c + 2) = 2;
  i_val2 = stack_val_34;
  ScriptEngine_Routine_0804E7A0(stack_val_44,stack_val_34,0);
  if (*(int *)(0x45FC + hw_reg) != 0) {
    stack_val_40 = 0x20009;
    ScriptEngine_Routine_0804E8F0(0x20009,i_val2,0,0,*(int *)(0x45FC + hw_reg));
  }
  p_int3 = (int *)HW_GetSpriteAttr0Offset(hw_reg);
  HW_Routine_08008F0C(&stack_val_68,stack_val_34,0x06000780 + 0x3c00,0x240);
  p_uint11 = (undefined4 *)p_int3[1];
  if (p_uint11 == (undefined4 *)p_int3[3]) {
    stack_val_38 = 1;
    stack_val_3c = (int)p_uint11 - *p_int3 >> 4;
    p_int4 = &stack_val_3c;
    if (stack_val_3c == 0) {
      p_int4 = &stack_val_38;
    }
    puStack_28 = p_uint11;
    if (stack_val_3c + *p_int4 == 0) {
      p_uint11 = (undefined4 *)0x0;
      i_val2 = 0;
    }
    else {
      i_val2 = (stack_val_3c + *p_int4) * 0x10;
      p_uint11 = (undefined4 *)runtime_malloc_aligned(i_val2);
      if (p_uint11 == (undefined4 *)0x0) {
        p_uint11 = (undefined4 *)VTable_Routine_080D3BC0(i_val2);
      }
    }
    p_uint10 = p_uint11;
    for (p_uint15 = (undefined4 *)*p_int3; p_uint15 != puStack_28; p_uint15 = p_uint15 + 4) {
      if (p_uint10 != (undefined4 *)0x0) {
        u_val18 = p_uint15[1];
        u_val20 = p_uint15[2];
        *p_uint10 = *p_uint15;
        p_uint10[1] = u_val18;
        p_uint10[2] = u_val20;
        p_uint10[3] = p_uint15[3];
      }
      p_uint10 = p_uint10 + 4;
    }
    i_val19 = stack_val_38;
    if (stack_val_38 == 1) {
      if (p_uint10 != (undefined4 *)0x0) {
        *p_uint10 = stack_val_68;
        p_uint10[1] = stack_val_64;
        p_uint10[2] = stack_val_60;
        p_uint10[3] = stack_val_5c;
      }
      p_uint10 = p_uint10 + 4;
    }
    else {
      for (; i_val19 != 0; i_val19 = i_val19 + -1) {
        if (p_uint10 != (undefined4 *)0x0) {
          *p_uint10 = stack_val_68;
          p_uint10[1] = stack_val_64;
          p_uint10[2] = stack_val_60;
          p_uint10[3] = stack_val_5c;
        }
        p_uint10 = p_uint10 + 4;
      }
    }
    for (i_val19 = *p_int3; i_val19 != p_int3[1]; i_val19 = i_val19 + 0x10) {
    }
    puStack_24 = p_uint11;
    if (*p_int3 != 0) {
      cpp_operator_delete();
    }
    *p_int3 = (int)puStack_24;
    p_int3[1] = (int)p_uint10;
    p_int3[3] = (int)puStack_24 + i_val2;
  }
  else {
    if (p_uint11 != (undefined4 *)0x0) {
      *p_uint11 = stack_val_68;
      p_uint11[1] = stack_val_64;
      p_uint11[2] = stack_val_60;
      p_uint11[3] = stack_val_5c;
    }
    p_int3[1] = p_int3[1] + 0x10;
  }
  u_val18 = *(undefined4 *)(0x45F8 + hw_reg);
  u_val20 = HW_Routine_080088DC(hw_reg);
  u_val5 = HW_GetSpriteAttr2Offset(hw_reg);
  u_val6 = HW_GetSpriteAttr1Offset(hw_reg);
  u_val7 = HW_GetPaletteBankOffset(hw_reg);
  u_val8 = HW_Routine_0800894C(hw_reg);
  Animal_Routine_08050D3C(u_val18,u_val20,u_val5,u_val6,u_val7,u_val8,0x45F0 + hw_reg);
  return;
}

// =============================================================================
// Function: HW_Routine_080061A0 @ 0x080061A0
// =============================================================================
void HW_Routine_080061A0(int hw_reg,int val)

{
  ushort u_val1;
  ushort u_val2;
  ushort u_val3;
  undefined4 u_val4;
  int i_val5;
  int i_val6;
  byte *pbVar7;
  uint u_val8;
  
  HW_Routine_08008EB8(0,hw_reg + 0x4608,8);
  HW_Routine_08008EB8(0,hw_reg + 0x4614,8);
  *(byte *)(hw_reg + 0x460B) = *(byte *)(hw_reg + 0x460B) & 0x3f;
  *(byte *)(hw_reg + 0x4617) = *(byte *)(hw_reg + 0x4617) & 0x3f;
  pbVar7 = (byte *)(hw_reg + 0x4615);
  *pbVar7 = *pbVar7 & 0x3f | 0x80;
  *(byte *)(hw_reg + 0x4609) = *(byte *)(hw_reg + 0x4609) & 0xf3 | 4;
  *pbVar7 = *pbVar7 & 0xf3 | 4;
  u_val3 = (ushort)0x3FF;
  u_val1 = (ushort)val & u_val3;
  u_val2 = (ushort)0xFFFFFC00;
  *(ushort *)(hw_reg + 0x460C) = u_val2 & *(ushort *)(hw_reg + 0x460C) | u_val1;
  *(ushort *)(hw_reg + 0x4618) =
       u_val2 & *(ushort *)(hw_reg + 0x4618) | u_val1 & u_val3;
  *(byte *)(hw_reg + 0x460D) = *(byte *)(hw_reg + 0x460D) & 0xf | 0x40;
  *(byte *)(hw_reg + 0x4619) = *(byte *)(hw_reg + 0x4619) & 0xf | 0x40;
  u_val4 = 0x88888888;
  u_val8 = 0;
  do {
    i_val5 = 0x06010000;
    i_val6 = val * 0x20 + u_val8 * 4;
    *(undefined4 *)(i_val6 + 0x06010000) = u_val4;
    *(undefined4 *)(i_val6 + i_val5 + 0x20) = u_val4;
    *(undefined4 *)(i_val6 + i_val5 + 0x40) = u_val4;
    *(undefined4 *)(i_val6 + i_val5 + 0x60) = u_val4;
    *(undefined4 *)(i_val6 + i_val5 + 0x80) = u_val4;
    *(undefined4 *)(i_val6 + i_val5 + 0xa0) = u_val4;
    *(undefined4 *)(i_val6 + i_val5 + 0xc0) = u_val4;
    *(undefined4 *)(i_val6 + 0x060100E0) = u_val4;
    u_val8 = u_val8 + 1 & 0xff;
  } while (u_val8 < 8);
  *0x05000290 = (short)0x27F;
  u_val1 = (ushort)0xFFFFFE00;
  *(ushort *)(hw_reg + 0x4616) = u_val1 & *(ushort *)(hw_reg + 0x4616) | 0x90;
  *(undefined1 *)(hw_reg + 0x4614) = 8;
  *(ushort *)(hw_reg + 0x460A) = u_val1 & *(ushort *)(hw_reg + 0x460A);
  *(undefined1 *)(hw_reg + 0x4608) = 0x20;
  *(byte *)(hw_reg + 0x4619) = *(byte *)(hw_reg + 0x4619) & 0xf3 | 8;
  *(byte *)(hw_reg + 0x460D) = *(byte *)(hw_reg + 0x460D) & 0xf3 | 8;
  return;
}

// =============================================================================
// Function: HW_Routine_0800637C @ 0x0800637C
// =============================================================================
void HW_Routine_0800637C(int hw_reg)

{
  int *p_int1;
  int *p_int2;
  undefined4 *p_uint3;
  int i_val4;
  undefined4 *p_uint5;
  int i_val6;
  undefined4 u_val7;
  undefined4 *p_uint8;
  undefined4 u_val9;
  undefined4 stack_val_44;
  undefined4 stack_val_40;
  undefined4 stack_val_3c;
  undefined4 stack_val_38;
  undefined4 stack_val_34;
  undefined4 stack_val_30;
  int stack_val_2c;
  int stack_val_28;
  undefined4 *puStack_24;
  
  stack_val_34 = 0x2001e;
  i_val6 = hw_reg + 0x3C2C;
  ScriptEngine_Routine_0804E7DC(0x2001e,i_val6,0,0,0x60,0x10,0);
  stack_val_30 = 0x2001e;
  ScriptEngine_Routine_0804E8F0(0x2001e,i_val6,0x90,0,hw_reg + 0x461C);
  p_int1 = (int *)HW_GetSpriteAttr0Offset(hw_reg);
  HW_Routine_08008F0C(&stack_val_44,i_val6,0x6003c00);
  p_uint3 = (undefined4 *)p_int1[1];
  if (p_uint3 == (undefined4 *)p_int1[3]) {
    stack_val_28 = 1;
    stack_val_2c = (int)p_uint3 - *p_int1 >> 4;
    p_int2 = &stack_val_2c;
    if (stack_val_2c == 0) {
      p_int2 = &stack_val_28;
    }
    if (stack_val_2c + *p_int2 == 0) {
      puStack_24 = (undefined4 *)0x0;
      i_val6 = 0;
    }
    else {
      i_val6 = (stack_val_2c + *p_int2) * 0x10;
      puStack_24 = (undefined4 *)runtime_malloc_aligned(i_val6);
      if (puStack_24 == (undefined4 *)0x0) {
        puStack_24 = (undefined4 *)VTable_Routine_080D3BC0(i_val6);
      }
    }
    p_uint8 = puStack_24;
    for (p_uint5 = (undefined4 *)*p_int1; p_uint5 != p_uint3; p_uint5 = p_uint5 + 4) {
      if (p_uint8 != (undefined4 *)0x0) {
        u_val7 = p_uint5[1];
        u_val9 = p_uint5[2];
        *p_uint8 = *p_uint5;
        p_uint8[1] = u_val7;
        p_uint8[2] = u_val9;
        p_uint8[3] = p_uint5[3];
      }
      p_uint8 = p_uint8 + 4;
    }
    i_val4 = stack_val_28;
    if (stack_val_28 == 1) {
      if (p_uint8 != (undefined4 *)0x0) {
        *p_uint8 = stack_val_44;
        p_uint8[1] = stack_val_40;
        p_uint8[2] = stack_val_3c;
        p_uint8[3] = stack_val_38;
      }
      p_uint8 = p_uint8 + 4;
    }
    else {
      for (; i_val4 != 0; i_val4 = i_val4 + -1) {
        if (p_uint8 != (undefined4 *)0x0) {
          *p_uint8 = stack_val_44;
          p_uint8[1] = stack_val_40;
          p_uint8[2] = stack_val_3c;
          p_uint8[3] = stack_val_38;
        }
        p_uint8 = p_uint8 + 4;
      }
    }
    for (i_val4 = *p_int1; i_val4 != p_int1[1]; i_val4 = i_val4 + 0x10) {
    }
    if (*p_int1 != 0) {
      cpp_operator_delete();
    }
    *p_int1 = (int)puStack_24;
    p_int1[1] = (int)p_uint8;
    p_int1[3] = (int)puStack_24 + i_val6;
  }
  else {
    if (p_uint3 != (undefined4 *)0x0) {
      *p_uint3 = stack_val_44;
      p_uint3[1] = stack_val_40;
      p_uint3[2] = stack_val_3c;
      p_uint3[3] = stack_val_38;
    }
    p_int1[1] = p_int1[1] + 0x10;
  }
  return;
}

// =============================================================================
// Function: HW_Routine_080064E8 @ 0x080064E8
// =============================================================================
void HW_Routine_080064E8(int hw_reg)

{
  int *p_int1;
  int *p_int2;
  undefined4 *p_uint3;
  undefined4 *p_uint4;
  int i_val5;
  int i_val6;
  undefined4 *p_uint7;
  undefined4 u_val8;
  undefined4 u_val9;
  uint u_val10;
  undefined4 stack_val_78;
  undefined4 stack_val_74;
  undefined4 stack_val_70;
  undefined4 stack_val_6c;
  undefined4 stack_val_68;
  undefined4 stack_val_64;
  int stack_val_60;
  int stack_val_5c;
  undefined4 stack_val_58;
  undefined4 stack_val_54;
  undefined4 stack_val_50;
  undefined4 stack_val_4c;
  int stack_val_48;
  int stack_val_44;
  undefined4 *puStack_40;
  undefined4 *puStack_3c;
  undefined4 *puStack_38;
  undefined4 *puStack_34;
  int stack_val_30;
  int stack_val_2c;
  undefined4 *puStack_28;
  undefined4 *puStack_24;
  
  if (*(char *)(0x4637 + hw_reg) == '\0') {
    return;
  }
  u_val10 = 1;
  puStack_3c = &stack_val_68;
  puStack_38 = &stack_val_64;
  puStack_34 = &stack_val_58;
  stack_val_2c = 0x34A8 + hw_reg;
  puStack_40 = &stack_val_78;
  do {
    i_val6 = u_val10 * 0x784;
    stack_val_68 = CONCAT22(stack_val_68._2_2_,0x1e);
    *(undefined2 *)((int)puStack_3c + 2) = 2;
    ScriptEngine_Routine_0804E7A0(stack_val_68,i_val6 + hw_reg + 0xc,0);
    i_val5 = *(int *)(hw_reg + 0x4600);
    stack_val_64 = CONCAT22(stack_val_64._2_2_,0x1e);
    *(undefined2 *)((int)puStack_38 + 2) = 2;
    ScriptEngine_Routine_0804E8F0(stack_val_64,i_val6 + hw_reg + 0xc,0,0,u_val10 * 0x1f + i_val5 * 0xba + gRomData_080E8997);
    p_int1 = (int *)HW_GetSpriteAttr0Offset(hw_reg);
    HW_Routine_08008F0C(&stack_val_78,i_val6 + hw_reg + 0xc,u_val10 * 0x780 + 0x6000000,0x780);
    p_uint3 = (undefined4 *)p_int1[1];
    if (p_uint3 == (undefined4 *)p_int1[3]) {
      puStack_28 = p_uint3;
      stack_val_5c = 1;
      stack_val_60 = (int)p_uint3 - *p_int1 >> 4;
      p_int2 = &stack_val_60;
      if (stack_val_60 == 0) {
        p_int2 = &stack_val_5c;
      }
      if (stack_val_60 + *p_int2 == 0) {
        p_uint3 = (undefined4 *)0x0;
        i_val5 = 0;
      }
      else {
        i_val5 = (stack_val_60 + *p_int2) * 0x10;
        p_uint3 = (undefined4 *)runtime_malloc_aligned(i_val5);
        if (p_uint3 == (undefined4 *)0x0) {
          p_uint3 = (undefined4 *)VTable_Routine_080D3BC0(i_val5);
        }
      }
      p_uint4 = (undefined4 *)*p_int1;
      stack_val_30 = 0x3c00;
      p_uint7 = p_uint3;
      for (; p_uint4 != puStack_28; p_uint4 = p_uint4 + 4) {
        if (p_uint7 != (undefined4 *)0x0) {
          u_val8 = p_uint4[1];
          u_val9 = p_uint4[2];
          *p_uint7 = *p_uint4;
          p_uint7[1] = u_val8;
          p_uint7[2] = u_val9;
          p_uint7[3] = p_uint4[3];
        }
        p_uint7 = p_uint7 + 4;
      }
      i_val6 = stack_val_5c;
      if (stack_val_5c == 1) {
        if (p_uint7 != (undefined4 *)0x0) {
          u_val8 = puStack_40[1];
          u_val9 = puStack_40[2];
          *p_uint7 = *puStack_40;
          p_uint7[1] = u_val8;
          p_uint7[2] = u_val9;
          p_uint7[3] = puStack_40[3];
        }
        p_uint7 = p_uint7 + 4;
      }
      else {
        for (; i_val6 != 0; i_val6 = i_val6 + -1) {
          if (p_uint7 != (undefined4 *)0x0) {
            u_val8 = puStack_40[1];
            u_val9 = puStack_40[2];
            *p_uint7 = *puStack_40;
            p_uint7[1] = u_val8;
            p_uint7[2] = u_val9;
            p_uint7[3] = puStack_40[3];
          }
          p_uint7 = p_uint7 + 4;
        }
      }
      for (i_val6 = *p_int1; i_val6 != p_int1[1]; i_val6 = i_val6 + 0x10) {
      }
      puStack_24 = p_uint3;
      if (*p_int1 != 0) {
        cpp_operator_delete();
      }
      *p_int1 = (int)puStack_24;
      p_int1[1] = (int)p_uint7;
      p_int1[3] = (int)puStack_24 + i_val5;
    }
    else {
      if (p_uint3 != (undefined4 *)0x0) {
        *p_uint3 = stack_val_78;
        p_uint3[1] = stack_val_74;
        p_uint3[2] = stack_val_70;
        p_uint3[3] = stack_val_6c;
      }
      p_int1[1] = p_int1[1] + 0x10;
      stack_val_30 = 0x3c00;
    }
    u_val10 = u_val10 + 1;
  } while (u_val10 < 7);
  stack_val_58 = CONCAT22(stack_val_58._2_2_,0x1e);
  *(undefined2 *)((int)puStack_34 + 2) = 2;
  ScriptEngine_Routine_0804E7A0(stack_val_58,stack_val_2c,0);
  i_val5 = *(int *)(hw_reg + 0x4600);
  if (i_val5 == 1) {
    stack_val_50 = 0x2001e;
    u_val8 = gRomData_080E8C14;
  }
  else {
    if (1 < i_val5) {
      if (i_val5 == 2) {
        stack_val_4c = 0x2001e;
        ScriptEngine_Routine_0804E8F0(0x2001e,stack_val_2c,0x18,0,gRomData_080E8C14);
      }
      goto LAB_0800672a;
    }
    if (i_val5 != 0) goto LAB_0800672a;
    stack_val_54 = 0x2001e;
    u_val8 = gRomData_080E8BFC;
  }
  ScriptEngine_Routine_0804E8F0(0x2001e,stack_val_2c,0x18,0,u_val8);
LAB_0800672a:
  p_int1 = (int *)HW_GetSpriteAttr0Offset(hw_reg);
  HW_Routine_08008F0C(&stack_val_78,stack_val_2c,stack_val_30 + 0x5fff880,0x780);
  puStack_28 = (undefined4 *)p_int1[1];
  if (puStack_28 == (undefined4 *)p_int1[3]) {
    stack_val_44 = 1;
    stack_val_48 = (int)puStack_28 - *p_int1 >> 4;
    p_int2 = &stack_val_48;
    if (stack_val_48 == 0) {
      p_int2 = &stack_val_44;
    }
    if (stack_val_48 + *p_int2 == 0) {
      p_uint3 = (undefined4 *)0x0;
      i_val5 = 0;
    }
    else {
      i_val5 = (stack_val_48 + *p_int2) * 0x10;
      p_uint3 = (undefined4 *)runtime_malloc_aligned(i_val5);
      if (p_uint3 == (undefined4 *)0x0) {
        p_uint3 = (undefined4 *)VTable_Routine_080D3BC0(i_val5);
      }
    }
    p_uint7 = p_uint3;
    for (p_uint4 = (undefined4 *)*p_int1; p_uint4 != puStack_28; p_uint4 = p_uint4 + 4) {
      if (p_uint7 != (undefined4 *)0x0) {
        u_val8 = p_uint4[1];
        u_val9 = p_uint4[2];
        *p_uint7 = *p_uint4;
        p_uint7[1] = u_val8;
        p_uint7[2] = u_val9;
        p_uint7[3] = p_uint4[3];
      }
      p_uint7 = p_uint7 + 4;
    }
    i_val6 = stack_val_44;
    if (stack_val_44 == 1) {
      if (p_uint7 != (undefined4 *)0x0) {
        *p_uint7 = stack_val_78;
        p_uint7[1] = stack_val_74;
        p_uint7[2] = stack_val_70;
        p_uint7[3] = stack_val_6c;
      }
      p_uint7 = p_uint7 + 4;
    }
    else {
      for (; i_val6 != 0; i_val6 = i_val6 + -1) {
        if (p_uint7 != (undefined4 *)0x0) {
          *p_uint7 = stack_val_78;
          p_uint7[1] = stack_val_74;
          p_uint7[2] = stack_val_70;
          p_uint7[3] = stack_val_6c;
        }
        p_uint7 = p_uint7 + 4;
      }
    }
    for (i_val6 = *p_int1; i_val6 != p_int1[1]; i_val6 = i_val6 + 0x10) {
    }
    puStack_24 = p_uint3;
    if (*p_int1 != 0) {
      cpp_operator_delete();
    }
    *p_int1 = (int)puStack_24;
    p_int1[1] = (int)p_uint7;
    p_int1[3] = (int)puStack_24 + i_val5;
  }
  else {
    if (puStack_28 != (undefined4 *)0x0) {
      *puStack_28 = stack_val_78;
      puStack_28[1] = stack_val_74;
      puStack_28[2] = stack_val_70;
      puStack_28[3] = stack_val_6c;
    }
    p_int1[1] = p_int1[1] + 0x10;
  }
  *(undefined1 *)(0x4637 + hw_reg) = 0;
  return;
}

// =============================================================================
// Function: HW_Routine_08006858 @ 0x08006858
// =============================================================================
void HW_Routine_08006858(int hw_reg)

{
  byte b_flag1;
  int i_val2;
  byte *pbVar3;
  
  if (*(int *)(hw_reg + 0x463C) == 0) {
    pbVar3 = (byte *)HW_GetSpriteAttr2Offset(hw_reg);
    i_val2 = 0x4608;
    b_flag1 = *pbVar3;
    if (b_flag1 < 0x80) {
      *(undefined4 *)(pbVar3 + (uint)b_flag1 * 8 + 4) = *(undefined4 *)(hw_reg + 0x4608);
      *(undefined2 *)(pbVar3 + (uint)b_flag1 * 8 + 4 + 4) = *(undefined2 *)(hw_reg + i_val2 + 4);
      *pbVar3 = b_flag1 + 1;
    }
  }
  pbVar3 = (byte *)HW_GetSpriteAttr2Offset(hw_reg);
  b_flag1 = *pbVar3;
  if (b_flag1 < 0x80) {
    *(undefined4 *)(pbVar3 + (uint)b_flag1 * 8 + 4) = *(undefined4 *)(hw_reg + 0x4614);
    *(undefined2 *)(pbVar3 + (uint)b_flag1 * 8 + 4 + 4) = *(undefined2 *)(hw_reg + 0x4618);
    *pbVar3 = b_flag1 + 1;
  }
  return;
}

// =============================================================================
// Function: HW_Routine_080068CC @ 0x080068CC
// =============================================================================
void HW_Routine_080068CC(int hw_reg)

{
  ushort u_val1;
  int i_val2;
  byte b_flag3;
  ushort u_val5;
  byte *pbVar6;
  ushort *p_uint7;
  char *p_char8;
  byte b_flag4;
  
  u_val1 = (ushort)0x1FF;
  u_val5 = (ushort)0xFFFFFE00;
  *(ushort *)(hw_reg + 0x4616) =
       u_val5 & *(ushort *)(hw_reg + 0x4616) |
       (ushort)*(byte *)(hw_reg + 0x4610) * 8 + 0x90 & u_val1;
  i_val2 = 0x4614;
  *(undefined1 *)(hw_reg + 0x4614) = 8;
  p_char8 = (char *)(hw_reg + 0x4605);
  if (*p_char8 < '\x06') {
    p_uint7 = (ushort *)(hw_reg + i_val2 + -10);
    *p_uint7 = u_val5 & *p_uint7 | (short)*(char *)(hw_reg + 0x4604) << 4 & u_val1;
    *(char *)(hw_reg + 0x4608) = *p_char8 * '\x10' + ' ';
    *(byte *)(hw_reg + 0x460B) = *(byte *)(hw_reg + 0x460B) & 0x3f;
    pbVar6 = (byte *)(hw_reg + 0x4609);
    b_flag4 = *pbVar6;
    b_flag3 = 0x80;
  }
  else {
    u_val5 = 0;
    for (b_flag4 = *(byte *)(hw_reg + 0x4604); 4 < b_flag4; b_flag4 = b_flag4 - 5) {
      u_val5 = u_val5 + 1 & 0xff;
    }
    *(ushort *)(hw_reg + 0x460A) =
         (ushort)0xFFFFFE00 & *(ushort *)(hw_reg + 0x460A) |
         u_val5 * 0x50 + 0x18 & (ushort)0x1FF;
    *(undefined1 *)(hw_reg + 0x4608) = 0x88;
    *(byte *)(hw_reg + 0x460B) = *(byte *)(hw_reg + 0x460B) & 0x3f | 0x80;
    pbVar6 = (byte *)(hw_reg + 0x4609);
    b_flag4 = *pbVar6;
    b_flag3 = 0x40;
  }
  *pbVar6 = b_flag4 & 0x3f | b_flag3;
  return;
}

// =============================================================================
// Function: HW_Routine_080069F4 @ 0x080069F4
// =============================================================================
void HW_Routine_080069F4(int hw_reg)

{
  char c_char1;
  byte b_flag2;
  uint u_val3;
  char *p_char4;
  char *p_char5;
  byte *pbVar6;
  int i_val7;
  
  u_val3 = HW_Routine_080088D4();
  if ((u_val3 & 0x40) == 0) {
    if ((u_val3 & 0x80) == 0) {
      if ((u_val3 & 0x10) == 0) {
        if ((u_val3 & 0x20) == 0) {
          return;
        }
        HW_Routine_08008B6C(hw_reg + 0x45F4,0xcb);
        p_char4 = (char *)(hw_reg + 0x4605);
        if (*p_char4 == '\x06') {
          pbVar6 = (byte *)(hw_reg + 0x4604);
          b_flag2 = 0xc;
        }
        else {
          pbVar6 = (byte *)(hw_reg + 0x4604);
          i_val7 = *pbVar6 - 1;
          *pbVar6 = (byte)i_val7;
          if (*p_char4 == '\x05') {
            if (-1 < i_val7 * 0x1000000) {
              return;
            }
            b_flag2 = 0xc;
          }
          else {
            if (-1 < i_val7 * 0x1000000) {
              return;
            }
            b_flag2 = 0xe;
          }
        }
      }
      else {
        HW_Routine_08008B6C(hw_reg + 0x45F4,0xcb);
        p_char4 = (char *)(hw_reg + 0x4605);
        if (*p_char4 != '\x06') {
          p_char5 = (char *)(hw_reg + 0x4604);
          c_char1 = *p_char5;
          *p_char5 = c_char1 + '\x01';
          if (*p_char4 != '\x05') {
            if ((char)(c_char1 + '\x01') < '\x0f') {
              return;
            }
            *p_char5 = '\0';
            return;
          }
          if (*p_char5 < '\r') {
            return;
          }
          *p_char5 = '\0';
          return;
        }
        pbVar6 = (byte *)(hw_reg + 0x4604);
        b_flag2 = 0xc;
      }
    }
    else {
      HW_Routine_08008B6C(hw_reg + 0x45F4,0xcb);
      p_char4 = (char *)(hw_reg + 0x4605);
      c_char1 = *p_char4;
      *p_char4 = c_char1 + '\x01';
      if ('\x06' < (char)(c_char1 + '\x01')) {
        *p_char4 = '\0';
      }
      if ((*p_char4 == '\x05') && ('\f' < *(char *)(hw_reg + 0x4604))) {
        *p_char4 = *p_char4 + '\x01';
      }
      if (*(char *)(hw_reg + 0x4605) != '\x06') {
        return;
      }
      pbVar6 = (byte *)(hw_reg + 0x4604);
      b_flag2 = 0xc;
    }
    *pbVar6 = b_flag2;
  }
  else {
    HW_Routine_08008B6C(hw_reg + 0x45F4,0xcb);
    pbVar6 = (byte *)(hw_reg + 0x4605);
    b_flag2 = *pbVar6;
    *pbVar6 = (byte)(b_flag2 - 1);
    if ((int)((b_flag2 - 1) * 0x1000000) < 0) {
      *pbVar6 = 6;
      *(undefined1 *)(hw_reg + 0x4604) = 0xc;
    }
    if ((*pbVar6 == 5) && ('\f' < *(char *)(hw_reg + 0x4604))) {
      *pbVar6 = *pbVar6 - 1;
    }
  }
  return;
}

// =============================================================================
// Function: HW_Routine_08006B90 @ 0x08006B90
// =============================================================================
void HW_Routine_08006B90(int hw_reg)

{
  char c_char1;
  byte b_flag2;
  byte *pbVar3;
  char *p_char4;
  
  c_char1 = *(char *)(*(char *)(hw_reg + 0x4604) * 2 +
                    *(char *)(hw_reg + 0x4605) * 0x1f + *(int *)(hw_reg + 0x4600) * 0xba +
                   gRomData_080E89B6);
  pbVar3 = (byte *)(hw_reg + 0x4610);
  b_flag2 = *pbVar3;
  p_char4 = (char *)(hw_reg + 0x4610 + 0xc + (uint)b_flag2);
  if (*p_char4 != c_char1) {
    *p_char4 = c_char1;
    b_flag2 = *pbVar3;
  }
  *pbVar3 = b_flag2 + 1;
  pbVar3 = (byte *)(hw_reg + 0x4610);
  if (0xb < *pbVar3) {
    *(undefined1 *)(hw_reg + 0x4604) = 0xc;
    *(undefined1 *)(hw_reg + 0x4605) = 6;
    *pbVar3 = 0xb;
  }
  return;
}

// =============================================================================
// Function: HW_Routine_08006C28 @ 0x08006C28
// =============================================================================
void HW_Routine_08006C28(int hw_reg,uint val)

{
  int i_val1;
  
  val = val & 0xff;
  if (val < 0xb) {
    i_val1 = hw_reg + 0x461C;
    do {
      *(undefined1 *)(i_val1 + val) = *(undefined1 *)(i_val1 + val + 1);
      val = val + 1 & 0xff;
    } while (val < 0xb);
  }
  *(undefined1 *)(hw_reg + 0x4627) = 0x5f;
  return;
}

// =============================================================================
// Function: HW_Routine_08006C60 @ 0x08006C60
// =============================================================================
u32 HW_Routine_08006C60(int hw_reg)

{
  char c_char1;
  int loop_i;
  char *p_char3;
  int i_val4;
  int i_val5;
  uint u_val6;
  
  u_val6 = 0;
  i_val5 = 0;
  i_val4 = hw_reg + 0x4629;
  gba_strcpy(i_val4,hw_reg + 0x4629 + -0xd);
  loop_i = 0;
  do {
    c_char1 = *(char *)(i_val4 + loop_i);
    if (c_char1 == '_') {
      i_val5 = i_val5 + 1;
    }
    else {
      if (c_char1 == ' ') {
        i_val5 = i_val5 + 1;
      }
      u_val6 = loop_i + 1;
    }
    loop_i = loop_i + 1;
  } while (loop_i < 0xc);
  if (i_val5 == 0xc) {
    u_val6 = 0;
  }
  else {
    loop_i = 0;
    if (0 < (int)u_val6) {
      i_val4 = hw_reg + 0x4629;
      do {
        p_char3 = (char *)(i_val4 + loop_i);
        if (*p_char3 == '_') {
          *p_char3 = ' ';
        }
        loop_i = loop_i + 1;
      } while (loop_i < (int)u_val6);
    }
  }
  *(undefined1 *)(hw_reg + 0x4629 + u_val6) = 0;
  return (-u_val6 | u_val6) >> 0x1f;
}

// =============================================================================
// Function: HW_Routine_08006CDC @ 0x08006CDC
// =============================================================================
void HW_Routine_08006CDC(int hw_reg)

{
  char c_char1;
  uint u_val2;
  int loop_i;
  char *p_char4;
  int *p_int5;
  
  p_int5 = (int *)(hw_reg + 0x463C);
  if (*p_int5 != 0) {
    return;
  }
  HW_Routine_080069F4(hw_reg);
  u_val2 = HW_Routine_080088D4(hw_reg);
  if ((u_val2 & 1) != 0) {
    if (*(char *)(hw_reg + 0x4605) < '\x06') {
      HW_Routine_08008B6C(hw_reg + 0x4605 + -0x11,0x6a);
      HW_Routine_08006B90(hw_reg);
      return;
    }
    if (*(char *)(hw_reg + 0x4604) < '\x05') {
      loop_i = *(int *)(hw_reg + 0x4600);
      if (loop_i == 2) {
        *(int *)(hw_reg + 0x4600) = 0;
        goto LAB_08006d7a;
      }
      loop_i = loop_i + 1;
    }
    else {
      if (4 < (byte)(*(char *)(hw_reg + 0x4604) - 5U)) {
        c_char1 = HW_Routine_08006C60(hw_reg);
        if (c_char1 == '\0') {
LAB_08006de8:
          HW_Routine_08008B6C(hw_reg + 0x45F4,199);
          return;
        }
LAB_08006e48:
        *p_int5 = 1;
LAB_08006e4a:
        HW_Routine_08008B6C(hw_reg + 0x45F4,0xc5);
        return;
      }
      if (*(int *)(hw_reg + 0x4600) == 0) {
        loop_i = 2;
      }
      else {
        loop_i = *(int *)(hw_reg + 0x4600) + -1;
      }
    }
    *(int *)(hw_reg + 0x4600) = loop_i;
LAB_08006d7a:
    *(undefined1 *)(hw_reg + 0x4637) = 1;
    HW_Routine_08008B6C(hw_reg + 0x45F4,0xca);
    return;
  }
  if ((u_val2 & 2) != 0) {
    p_char4 = (char *)(hw_reg + _ASSET_BLOCK_08006DC4);
    if (*p_char4 == '\0') {
      c_char1 = '\0';
      loop_i = 0;
      do {
        if (*(char *)(hw_reg + 0x461C + loop_i) == '_') {
          c_char1 = c_char1 + '\x01';
        }
        loop_i = loop_i + 1;
      } while (loop_i < 0xc);
      if (c_char1 == '\f') goto LAB_08006de8;
      c_char1 = '\0';
    }
    else {
      *p_char4 = *p_char4 + -1;
      c_char1 = *p_char4;
    }
    HW_Routine_08006C28(hw_reg,c_char1);
    HW_Routine_08008B6C(hw_reg + 0x45F4,0x6c);
    return;
  }
  if ((u_val2 & 8) == 0) {
    if ((u_val2 & 0x200) == 0) {
      if ((u_val2 & 0x100) == 0) {
        return;
      }
      c_char1 = *(char *)(hw_reg + _ASSET_BLOCK_08006ED0);
      if (c_char1 != '\v') {
        *(char *)(hw_reg + _ASSET_BLOCK_08006ED0) = c_char1 + '\x01';
      }
      HW_Routine_08008B6C(hw_reg + 0x45F4,0xcb);
      return;
    }
    p_char4 = (char *)(hw_reg + 0x4610);
    if (*p_char4 == '\0') goto LAB_08006e92;
    c_char1 = *p_char4 + -1;
  }
  else {
    if (((*(char *)(hw_reg + 0x4605) == '\x06') &&
        (c_char1 = *(char *)(hw_reg + 0x4605 + -1), '\t' < c_char1)) && (c_char1 < '\x0f')) {
      c_char1 = HW_Routine_08006C60(hw_reg);
      if (c_char1 == '\0') goto LAB_08006e4a;
      goto LAB_08006e48;
    }
    *(undefined1 *)(hw_reg + 0x4604) = 0xc;
    p_char4 = (char *)(hw_reg + 0x4605);
    c_char1 = '\x06';
  }
  *p_char4 = c_char1;
LAB_08006e92:
  HW_Routine_08008B6C(hw_reg + 0x45F4,0xcb);
  return;
}

// =============================================================================
// Function: HW_Routine_08007078 @ 0x08007078
// =============================================================================
u32 HW_Routine_08007078(undefined4 *hw_reg,undefined4 val,undefined4 size)

{
  undefined4 u_val1;
  
  *hw_reg = gRomData_080E5AC0;
  u_val1 = CppRuntime_OperatorNewArray(0x4640);
  u_val1 = HW_Routine_08005A58(u_val1,val,size);
  hw_reg[1] = u_val1;
  return hw_reg;
}

// =============================================================================
// Function: HW_Routine_080070A4 @ 0x080070A4
// =============================================================================
void HW_Routine_080070A4(undefined4 *hw_reg,undefined4 val)

{
  int i_val1;
  
  *hw_reg = gRomData_080E5AC0;
  i_val1 = hw_reg[1];
  if (i_val1 != 0) {
    _call_via_r2(i_val1,3,*(undefined4 *)(*(int *)(i_val1 + 4) + 8));
  }
  SramProxy_VerifyBufferParity(hw_reg,val);
  return;
}

// =============================================================================
// Function: HW_Routine_080070D4 @ 0x080070D4
// =============================================================================
u32 HW_Routine_080070D4(undefined4 *hw_reg,int val)

{
  undefined4 facing_buffer [3];
  
  HW_Routine_08005B68(facing_buffer,*(undefined4 *)(val + 4));
  *hw_reg = facing_buffer[0];
  return hw_reg;
}

// =============================================================================
// Function: HW_Routine_08007184 @ 0x08007184
// =============================================================================
void HW_Routine_08007184(undefined4 hw_reg,uint val)

{
  int *p_int1;
  int i_val2;
  int i_val3;
  
  p_int1 = gIWRAM_030404;
  i_val2 = *gIWRAM_030404;
  i_val3 = *(int *)(i_val2 + 0x4c) + -1;
  *(int *)(i_val2 + 0x4c) = i_val3;
  if (i_val3 == 0) {
    if (i_val2 != 0) {
      CppRuntime_FreeMemory(i_val2);
    }
    *p_int1 = 0;
  }
  if ((val & 1) != 0) {
    CppRuntime_FreeMemory(hw_reg);
  }
  return;
}

// =============================================================================
// Function: HW_Routine_080071BC @ 0x080071BC
// =============================================================================
void HW_Routine_080071BC(undefined4 hw_reg,uint val,uint size)

{
  uint u_val1;
  int *p_int2;
  byte *pbVar3;
  uint u_val4;
  uint loop_i;
  int *p_int6;
  int *p_int7;
  uint u_val8;
  undefined1 stack_val_2c;
  
  p_int6 = (int *)*gIWRAM_030404;
  pbVar3 = (byte *)((int)p_int6 + 0x51);
  if (*pbVar3 != 0) {
    loop_i = (uint)*(byte *)(p_int6 + 0x14);
    u_val8 = loop_i + *pbVar3;
    if (loop_i < u_val8) {
      p_int2 = p_int6 + loop_i + 1;
      do {
        u_val1 = 0;
        if (loop_i < 0x10) {
          u_val1 = p_int6[0x11] & 1 << (loop_i & 0x1f);
          u_val1 = (-u_val1 | u_val1) >> 0x1f;
        }
        if (u_val1 != 0) {
          *p_int2 = *p_int6;
          *p_int6 = (int)p_int2;
          if (loop_i < 0x10) {
            p_int6[0x11] = p_int6[0x11] & ~(1 << (loop_i & 0x1f));
          }
        }
        p_int2 = p_int2 + 1;
        loop_i = loop_i + 1;
      } while (loop_i < u_val8);
    }
    *pbVar3 = 0;
  }
  if (size != 0) {
    loop_i = 0;
    p_int7 = p_int6 + 1;
    p_int2 = p_int7;
    do {
      u_val8 = 0;
      if (loop_i < 0x10) {
        u_val8 = p_int6[0x11] & 1 << (loop_i & 0x1f);
        u_val8 = (-u_val8 | u_val8) >> 0x1f;
      }
      if (((u_val8 != 0) && (val <= loop_i)) && (loop_i < size + val)) {
        *(undefined2 *)((int)p_int7 + 2) = 0;
        *p_int7 = *p_int6;
        *p_int6 = (int)p_int2;
        if (loop_i < 0x10) {
          p_int6[0x11] = p_int6[0x11] & ~(1 << (loop_i & 0x1f));
        }
        *(short *)(p_int6 + 0x12) = (short)p_int6[0x12] + -1;
      }
      p_int7 = p_int7 + 1;
      p_int2 = p_int2 + 1;
      loop_i = loop_i + 1;
    } while (loop_i < 0x10);
    u_val8 = 0;
    loop_i = (1 << (size & 0xff)) + -1 << (val & 0xff);
    do {
      p_int2 = (int *)*p_int6;
      if (p_int2 == (int *)0x0) break;
      *p_int6 = *p_int2;
      u_val1 = (int)p_int2 + (-4 - (int)p_int6) >> 2;
      if (u_val1 < 0x10) {
        p_int6[0x11] = p_int6[0x11] | 1 << (u_val1 & 0x1f);
      }
      u_val8 = u_val8 | 1 << (u_val1 & 0xff);
    } while ((u_val8 & loop_i) != loop_i);
    u_val1 = 0;
    loop_i = ~loop_i;
    p_int2 = p_int6;
    if ((u_val8 & loop_i) != 0) {
      do {
        p_int2 = p_int2 + 1;
        u_val4 = 1 << (u_val1 & 0xff);
        if ((u_val8 & u_val4 & loop_i) != 0) {
          *p_int2 = *p_int6;
          *p_int6 = (int)p_int2;
          if (u_val1 < 0x10) {
            p_int6[0x11] = p_int6[0x11] & ~(1 << (u_val1 & 0x1f));
          }
          u_val8 = u_val8 & ~u_val4;
        }
        u_val1 = u_val1 + 1;
      } while (((u_val8 & loop_i) != 0) && (u_val1 < 0x10));
    }
    *(char *)(p_int6 + 0x14) = (char)val;
    stack_val_2c = (undefined1)size;
    *(undefined1 *)((int)p_int6 + 0x51) = stack_val_2c;
  }
  return;
}

// =============================================================================
// Function: GBA_PaletteManager_Allocate @ 0x0800736C
// =============================================================================
void GBA_PaletteManager_Allocate(void)

{
  uint u_val1;
  uint u_val2;
  undefined4 *p_uint3;
  undefined4 *p_uint4;
  uint u_val5;
  
  p_uint3 = (undefined4 *)*gIWRAM_030404;
  p_uint4 = (undefined4 *)*p_uint3;
  if ((p_uint4 == (undefined4 *)0x0) || (*p_uint3 = *p_uint4, p_uint4 == (undefined4 *)0x0)) {
    u_val5 = 0;
  }
  else {
    u_val5 = (int)p_uint4 + (-4 - (int)p_uint3) >> 2;
    if (u_val5 < 0x10) {
      p_uint3[0x11] = p_uint3[0x11] | 1 << (u_val5 & 0x1f);
    }
    *(short *)(p_uint3 + 0x12) = *(short *)(p_uint3 + 0x12) + 1;
    *(undefined2 *)p_uint4 = 1;
    u_val1 = 0xFFFF;
    u_val2 = *(ushort *)((int)p_uint3 + 0x4a) + 1;
    if (0xFFFF < u_val2) {
      u_val2 = 1;
    }
    *(ushort *)((int)p_uint4 + 2) = (ushort)u_val2;
    *(ushort *)((int)p_uint3 + 0x4a) = (ushort)u_val2;
    u_val5 = u_val5 & 0xf | (*(ushort *)((int)p_uint4 + 2) & u_val1) << 4;
  }
  return u_val5;
}

// =============================================================================
// Function: HW_Routine_0800745C @ 0x0800745C
// =============================================================================
u32 HW_Routine_0800745C(undefined4 hw_reg,uint val)

{
  short s_val1;
  uint u_val2;
  uint u_val3;
  short *psVar4;
  
  if (val != 0) {
    u_val3 = val & 0xf;
    u_val2 = 0;
    if (u_val3 < 0x10) {
      u_val2 = *(uint *)(*gIWRAM_030404 + 0x44) & 1 << u_val3;
      u_val2 = (-u_val2 | u_val2) >> 0x1f;
    }
    if ((u_val2 != 0) &&
       (psVar4 = (short *)(*gIWRAM_030404 + u_val3 * 4 + 4),
       (val & 0xfffff) >> 4 == (uint)(ushort)psVar4[1])) {
      s_val1 = *psVar4;
      *psVar4 = s_val1 + 1;
      if (s_val1 != -1) goto LAB_080074b8;
      *psVar4 = -1;
    }
  }
  val = 0;
LAB_080074b8:
  return val;
}

// =============================================================================
// Function: HW_Routine_080074C0 @ 0x080074C0
// =============================================================================
u32 HW_Routine_080074C0(undefined4 hw_reg,uint val)

{
  uint u_val1;
  uint u_val2;
  
  if (val != 0) {
    u_val2 = val & 0xf;
    u_val1 = 0;
    if (u_val2 < 0x10) {
      u_val1 = *(uint *)(*gIWRAM_030404 + 0x44) & 1 << u_val2;
      u_val1 = (-u_val1 | u_val1) >> 0x1f;
    }
    if ((u_val1 != 0) &&
       ((val & 0xfffff) >> 4 == (uint)*(ushort *)(u_val2 * 4 + *gIWRAM_030404 + 6)))
    goto LAB_08007506;
  }
  u_val2 = 0xffffffff;
LAB_08007506:
  return u_val2;
}

// =============================================================================
// Function: HW_Routine_08007510 @ 0x08007510
// =============================================================================
void HW_Routine_08007510(undefined4 hw_reg,uint val)

{
  undefined2 u_val1;
  uint u_val2;
  uint u_val3;
  undefined2 *p_uint4;
  
  if (val != 0) {
    u_val3 = val & 0xf;
    u_val2 = 0;
    if (u_val3 < 0x10) {
      u_val2 = *(uint *)(*gIWRAM_030404 + 0x44) & 1 << u_val3;
      u_val2 = (-u_val2 | u_val2) >> 0x1f;
    }
    if ((u_val2 != 0) &&
       (p_uint4 = (undefined2 *)(*gIWRAM_030404 + u_val3 * 4 + 4),
       (val & 0xfffff) >> 4 == (uint)(ushort)p_uint4[1])) {
      u_val1 = *p_uint4;
      goto LAB_0800755e;
    }
  }
  u_val1 = 0;
LAB_0800755e:
  return u_val1;
}

// =============================================================================
// Function: HW_Routine_08007578 @ 0x08007578
// =============================================================================
void HW_Routine_08007578(undefined4 *hw_reg,char *val)

{
  char c_char1;
  int *p_int2;
  undefined4 u_val3;
  int *p_int4;
  int i_val5;
  int i_val6;
  int i_val7;
  int i_val8;
  uint u_val9;
  undefined1 temp_buf_3c [4];
  undefined4 stack_val_38;
  int stack_val_34;
  int stack_val_30;
  undefined4 *puStack_2c;
  int stack_val_28;
  uint stack_val_24;
  
  puStack_2c = hw_reg;
  p_int2 = (int *)CppRuntime_OperatorNewArray(0x14);
  *p_int2 = 0;
  p_int2[1] = 0;
  p_int2[3] = 0;
  c_char1 = *val;
  VTable_Routine_080D6DB8(p_int2,c_char1);
  u_val9 = (uint)(byte)(c_char1 - 1);
  if (u_val9 != 0xff) {
    do {
      GBA_PaletteManager_Init(temp_buf_3c);
      stack_val_38 = GBA_PaletteManager_Allocate(temp_buf_3c);
      i_val7 = p_int2[1];
      if (i_val7 == p_int2[3]) {
        stack_val_30 = 1;
        i_val6 = *p_int2;
        stack_val_34 = i_val7 - i_val6 >> 3;
        p_int4 = &stack_val_34;
        if (stack_val_34 == 0) {
          p_int4 = &stack_val_30;
        }
        if (stack_val_34 + *p_int4 == 0) {
          i_val5 = 0;
          stack_val_28 = 0;
        }
        else {
          i_val6 = (stack_val_34 + *p_int4) * 8;
          i_val5 = runtime_malloc_aligned(i_val6);
          stack_val_28 = i_val6;
          if (i_val5 == 0) {
            i_val5 = VTable_Routine_080D3BC0(i_val6);
          }
          i_val6 = *p_int2;
        }
        stack_val_24 = u_val9 - 1;
        i_val8 = i_val5;
        for (; i_val6 != i_val7; i_val6 = i_val6 + 8) {
          if (i_val8 != 0) {
            GBA_PaletteManager_Init(i_val8);
            u_val3 = HW_Routine_0800745C(i_val8,*(undefined4 *)(i_val6 + 4));
            *(undefined4 *)(i_val8 + 4) = u_val3;
          }
          i_val8 = i_val8 + 8;
        }
        i_val7 = stack_val_30;
        if (stack_val_30 == 1) {
          if (i_val8 != 0) {
            GBA_PaletteManager_Init(i_val8);
            u_val3 = HW_Routine_0800745C(i_val8,stack_val_38);
            *(undefined4 *)(i_val8 + 4) = u_val3;
          }
          i_val8 = i_val8 + 8;
        }
        else {
          for (; i_val7 != 0; i_val7 = i_val7 + -1) {
            if (i_val8 != 0) {
              GBA_PaletteManager_Init(i_val8);
              u_val3 = HW_Routine_0800745C(i_val8,stack_val_38);
              *(undefined4 *)(i_val8 + 4) = u_val3;
            }
            i_val8 = i_val8 + 8;
          }
        }
        i_val6 = p_int2[1];
        for (i_val7 = *p_int2; i_val7 != i_val6; i_val7 = i_val7 + 8) {
          HW_Routine_080073E0(i_val7,*(undefined4 *)(i_val7 + 4));
          HW_Routine_08007184(i_val7,2);
        }
        if (*p_int2 != 0) {
          cpp_operator_delete();
        }
        *p_int2 = i_val5;
        p_int2[1] = i_val8;
        p_int2[3] = stack_val_28 + i_val5;
      }
      else {
        if (i_val7 != 0) {
          GBA_PaletteManager_Init(i_val7);
          u_val3 = HW_Routine_0800745C(i_val7,stack_val_38);
          *(undefined4 *)(i_val7 + 4) = u_val3;
        }
        p_int2[1] = p_int2[1] + 8;
        stack_val_24 = u_val9 - 1;
      }
      HW_Routine_080073E0(temp_buf_3c,stack_val_38);
      HW_Routine_08007184(temp_buf_3c,2);
      u_val9 = stack_val_24 & 0xff;
    } while (u_val9 != 0xff);
  }
  p_int2[4] = *p_int2;
  *puStack_2c = p_int2;
  return;
}

// =============================================================================
// Function: GBA_BgLayer_SetPriority @ 0x08007714
// =============================================================================
void GBA_BgLayer_SetPriority(undefined4 *hw_reg,uint val)

{
  int *p_int1;
  int i_val2;
  int i_val3;
  
  p_int1 = (int *)*hw_reg;
  if (p_int1 != (int *)0x0) {
    i_val3 = p_int1[1];
    for (i_val2 = *p_int1; i_val2 != i_val3; i_val2 = i_val2 + 8) {
      HW_Routine_080073E0(i_val2,*(undefined4 *)(i_val2 + 4));
      HW_Routine_08007184(i_val2,2);
    }
    if (*p_int1 != 0) {
      cpp_operator_delete();
    }
    CppRuntime_FreeMemory(p_int1);
  }
  if ((val & 1) != 0) {
    CppRuntime_FreeMemory(hw_reg);
  }
  return;
}

// =============================================================================
// Function: HW_Routine_08007770 @ 0x08007770
// =============================================================================
u32 HW_Routine_08007770(int hw_reg,undefined4 *val)

{
  int i_val1;
  int i_val2;
  int i_val3;
  int i_val4;
  undefined4 u_val5;
  int *p_int6;
  int i_val7;
  int i_val8;
  
  p_int6 = (int *)*val;
  if (p_int6 == (int *)0x0) {
    GBA_PaletteManager_Init(hw_reg);
    u_val5 = GBA_PaletteManager_Allocate(hw_reg);
  }
  else {
    i_val3 = p_int6[1];
    i_val7 = p_int6[4];
    i_val2 = i_val7;
    i_val8 = i_val3;
    do {
      i_val1 = i_val2;
      if (i_val7 == i_val8) goto LAB_080077a8;
      i_val8 = i_val1 + 8;
      if (i_val8 == i_val3) {
        i_val8 = *p_int6;
      }
      i_val4 = HW_Routine_08007510(i_val1,*(undefined4 *)(i_val1 + 4));
      i_val2 = i_val8;
    } while (i_val4 != 1);
    p_int6[4] = i_val8;
LAB_080077a8:
    GBA_PaletteManager_Init(hw_reg);
    u_val5 = HW_Routine_0800745C(hw_reg,*(undefined4 *)(i_val1 + 4));
  }
  *(undefined4 *)(hw_reg + 4) = u_val5;
  return hw_reg;
}

// =============================================================================
// Function: HW_Routine_080077DC @ 0x080077DC
// =============================================================================
u32 HW_Routine_080077DC(uint *hw_reg,uint val)

{
  int i_val1;
  uint u_val2;
  uint u_val3;
  uint u_val4;
  
  u_val4 = *hw_reg;
  if (u_val4 != 0xffffffff) {
    if (u_val4 == 0) {
      *hw_reg = (1 << (1 << (val & 0xff) & 0xffU)) - 1;
      i_val1 = 0;
      goto LAB_0800783c;
    }
    if (val < 5) {
      u_val3 = 1 << (val & 0xff);
      i_val1 = 0;
      u_val2 = (1 << (u_val3 & 0xff)) - 1;
      do {
        if ((u_val4 & u_val2) == 0) {
          *hw_reg = *hw_reg | u_val2;
          goto LAB_0800783c;
        }
        i_val1 = i_val1 + u_val3;
        u_val2 = u_val2 << (u_val3 & 0xff);
      } while (u_val2 != 0);
    }
  }
  i_val1 = 0x20;
LAB_0800783c:
  return i_val1;
}

// =============================================================================
// Function: HW_Routine_08007844 @ 0x08007844
// =============================================================================
void HW_Routine_08007844(uint *hw_reg,uint val,uint size)

{
  uint u_val1;
  
  if (size < 5) {
    u_val1 = *hw_reg & ~((1 << (1 << (size & 0xff) & 0xffU)) + -1 << (val & 0x1f));
  }
  else {
    if (size != 5) {
      return;
    }
    u_val1 = 0;
  }
  *hw_reg = u_val1;
  return;
}

// =============================================================================
// Function: GBA_ObjAttr_Init @ 0x08007874
// =============================================================================
u32 GBA_ObjAttr_Init(undefined4 hw_reg)

{
  undefined4 *p_uint1;
  undefined4 u_val2;
  undefined1 *p_uint3;
  undefined4 *p_uint4;
  undefined4 *p_uint5;
  int i_val6;
  undefined1 *p_uint7;
  int i_val8;
  int i_val9;
  int i_val10;
  undefined4 stack_val_4c;
  undefined4 stack_val_48;
  undefined1 *puStack_44;
  undefined4 *puStack_40;
  undefined4 *puStack_3c;
  undefined2 *puStack_38;
  undefined2 *puStack_34;
  undefined4 *puStack_30;
  int stack_val_2c;
  undefined1 *puStack_28;
  undefined4 *puStack_24;
  
  stack_val_48 = hw_reg;
  if (*gIWRAM_030408 == 0) {
    p_uint1 = (undefined4 *)CppRuntime_OperatorNewArray(0x92C);
    puStack_24 = &stack_val_4c;
    for (p_uint4 = p_uint1; p_uint4 != p_uint1 + 8; p_uint4 = p_uint4 + 1) {
      *p_uint4 = 0;
    }
    u_val2 = VTable_Routine_080D770C(p_uint1 + 9,0x100,0);
    p_uint1[8] = u_val2;
    puStack_44 = (undefined1 *)(0x824 + (int)p_uint1);
    *puStack_44 = 0;
    puStack_44[1] = 1;
    puStack_28 = (undefined1 *)(0x828 + (int)p_uint1);
    stack_val_2c = 1;
    puStack_30 = p_uint1 + 8;
    puStack_40 = p_uint1 + 0x248;
    puStack_3c = (undefined4 *)(0x924 + (int)p_uint1);
    puStack_38 = (undefined2 *)(0x928 + (int)p_uint1);
    puStack_34 = (undefined2 *)(0x92A + (int)p_uint1);
    do {
      *puStack_28 = 0;
      puStack_28[1] = 1;
      p_uint3 = puStack_28 + 4;
      i_val9 = 1;
      puStack_28 = puStack_28 + 0x7c;
      stack_val_2c = stack_val_2c + -1;
      do {
        *p_uint3 = 0;
        p_uint3[1] = 1;
        p_uint7 = p_uint3 + 4;
        i_val6 = 1;
        p_uint3 = p_uint3 + 0x3c;
        i_val9 = i_val9 + -1;
        do {
          *p_uint7 = 0;
          p_uint7[1] = 1;
          p_uint4 = (undefined4 *)(p_uint7 + 4);
          i_val10 = 1;
          p_uint7 = p_uint7 + 0x1c;
          i_val6 = i_val6 + -1;
          do {
            *(undefined1 *)p_uint4 = 0;
            *(undefined1 *)((int)p_uint4 + 1) = 1;
            i_val8 = 1;
            p_uint5 = p_uint4 + 3;
            i_val10 = i_val10 + -1;
            do {
              p_uint4 = p_uint4 + 1;
              *p_uint4 = 0;
              i_val8 = i_val8 + -1;
            } while (i_val8 != -1);
            p_uint4 = p_uint5;
          } while (i_val10 != -1);
        } while (i_val6 != -1);
      } while (i_val9 != -1);
    } while (stack_val_2c != -1);
    *(undefined2 *)puStack_40 = 0;
    *puStack_3c = 0;
    *puStack_38 = 0;
    *puStack_34 = 0;
    stack_val_4c = 0;
    if (p_uint1 != puStack_30) {
      u_val2 = *puStack_24;
      p_uint4 = p_uint1;
      do {
        *p_uint4 = u_val2;
        p_uint4 = p_uint4 + 1;
      } while (p_uint4 != puStack_30);
    }
    HW_Routine_08007EC8(puStack_44);
    *gIWRAM_030408 = (int)p_uint1;
  }
  *(int *)(*gIWRAM_030408 + 0x924) = *(int *)(*gIWRAM_030408 + 0x924) + 1;
  return stack_val_48;
}

// =============================================================================
// Function: HW_Routine_080079E8 @ 0x080079E8
// =============================================================================
void HW_Routine_080079E8(undefined4 hw_reg,uint val)

{
  int *p_int1;
  int i_val2;
  int i_val3;
  
  p_int1 = gIWRAM_030408;
  i_val2 = *gIWRAM_030408;
  i_val3 = *(int *)(i_val2 + 0x924) + -1;
  *(int *)(i_val2 + 0x924) = i_val3;
  if (i_val3 == 0) {
    if (i_val2 != 0) {
      CppRuntime_FreeMemory(i_val2);
    }
    *p_int1 = 0;
  }
  if ((val & 1) != 0) {
    CppRuntime_FreeMemory(hw_reg);
  }
  return;
}

// =============================================================================
// Function: HW_Routine_08007A28 @ 0x08007A28
// =============================================================================
void HW_Routine_08007A28(undefined4 hw_reg,uint val,int size)

{
  short *psVar1;
  ushort *p_uint2;
  uint u_val3;
  undefined2 *p_uint4;
  uint *p_uint5;
  short *psVar6;
  int i_val7;
  uint u_val8;
  ushort *p_uint9;
  undefined2 stack_val_38;
  short stack_val_34;
  
  i_val7 = *gIWRAM_030408;
  psVar6 = (short *)(i_val7 + 0x92A);
  if (*psVar6 != 0) {
    HW_Routine_08007F84(i_val7 + 0x824,*(undefined2 *)(i_val7 + 0x928),*psVar6);
    *psVar6 = 0;
  }
  if (size != 0) {
    u_val8 = 0;
    psVar1 = (short *)(i_val7 + 0x920);
    p_uint4 = (undefined2 *)(i_val7 + 0x928);
    if (*psVar1 != 0) {
      p_uint2 = (ushort *)(i_val7 + 0x24);
      p_uint9 = p_uint2;
      do {
        u_val3 = 0;
        if (u_val8 < 0x100) {
          u_val3 = *(uint *)(i_val7 + (u_val8 >> 5) * 4) & 1 << (u_val8 & 0x1f);
          u_val3 = (-u_val3 | u_val3) >> 0x1f;
        }
        if (u_val3 != 0) {
          u_val3 = *p_uint2 & 0x3ff;
          if ((val < u_val3 + (1 << ((*(byte *)((int)p_uint2 + 1) & 0x3f) >> 2))) &&
             (u_val3 < val + size)) {
            HW_Routine_080080A0(i_val7 + 0x824,u_val3,(*(byte *)((int)p_uint2 + 1) & 0x3f) >> 2);
            p_uint2[2] = 0;
            *(undefined4 *)p_uint2 = *(undefined4 *)(i_val7 + 0x20);
            *(ushort **)(i_val7 + 0x20) = p_uint9;
            if (u_val8 < 0x100) {
              p_uint5 = (uint *)(i_val7 + (u_val8 >> 5) * 4);
              *p_uint5 = *p_uint5 & ~(1 << (u_val8 & 0x1f));
            }
            *psVar1 = *psVar1 + -1;
          }
        }
        p_uint2 = p_uint2 + 4;
        p_uint9 = p_uint9 + 4;
        u_val8 = u_val8 + 1;
      } while ((*psVar1 != 0) && (u_val8 < 0x100));
    }
    HW_Routine_08007EE8(i_val7 + 0x824,val,size);
    stack_val_38 = (undefined2)val;
    *p_uint4 = stack_val_38;
    stack_val_34 = (short)size;
    *psVar6 = stack_val_34;
  }
  return;
}

// =============================================================================
// Function: GBA_ObjAttr_AllocateSprite @ 0x08007B54
// =============================================================================
u32 GBA_ObjAttr_AllocateSprite(undefined4 hw_reg,uint val)

{
  uint u_val1;
  ushort *p_uint2;
  uint u_val3;
  uint *p_uint4;
  ushort *p_uint5;
  int i_val6;
  int i_val7;
  uint u_val8;
  
  i_val6 = *gIWRAM_030408;
  i_val7 = i_val6 + 0x824;
  u_val1 = HW_Routine_08008020(i_val7);
  u_val3 = 0x3FF;
  if (u_val1 <= 0x3FF) {
    p_uint5 = *(ushort **)(i_val6 + 0x20);
    if ((p_uint5 != (ushort *)0x0) &&
       (*(undefined4 *)(i_val6 + 0x20) = *(undefined4 *)p_uint5, p_uint5 != (ushort *)0x0)) {
      u_val8 = (int)p_uint5 + (-4 - (i_val6 + 0x20)) >> 3;
      if (u_val8 < 0x100) {
        p_uint4 = (uint *)(i_val6 + (u_val8 >> 5) * 4);
        *p_uint4 = *p_uint4 | 1 << (u_val8 & 0x1f);
      }
      *(short *)(i_val6 + 0x920) = *(short *)(i_val6 + 0x920) + 1;
      *p_uint5 = (ushort)0xFFFFFC00 & *p_uint5 | (ushort)u_val1 & (ushort)u_val3;
      *(byte *)((int)p_uint5 + 1) = *(byte *)((int)p_uint5 + 1) & 0xc3 | (byte)((val & 0xf) << 2);
      p_uint5[1] = 1;
      u_val3 = 0xFFFF;
      p_uint2 = (ushort *)(i_val6 + 0x922);
      u_val1 = *p_uint2 + 1;
      if (0xFFFF < u_val1) {
        u_val1 = 1;
      }
      p_uint5[2] = (ushort)u_val1;
      *p_uint2 = (ushort)u_val1;
      u_val3 = u_val8 & 0xff | (p_uint5[2] & u_val3) << 8;
      goto LAB_08007c1e;
    }
    HW_Routine_080080A0(i_val7,u_val1,val);
  }
  u_val3 = 0;
LAB_08007c1e:
  return u_val3;
}

// =============================================================================
// Function: HW_Routine_08007C28 @ 0x08007C28
// =============================================================================
void HW_Routine_08007C28(undefined4 hw_reg,uint val)

{
  ushort u_val1;
  uint u_val2;
  uint *p_uint3;
  ushort *p_uint4;
  uint u_val5;
  int i_val6;
  byte stack_val_18;
  
  i_val6 = *gIWRAM_030408;
  if (val != 0) {
    stack_val_18 = (byte)val;
    u_val5 = val & 0xff;
    u_val2 = 0;
    if (u_val5 < 0x100) {
      u_val2 = *(uint *)(i_val6 + (uint)(stack_val_18 >> 5) * 4) & 1 << (val & 0x1f);
      u_val2 = (-u_val2 | u_val2) >> 0x1f;
    }
    if (((u_val2 != 0) &&
        (p_uint4 = (ushort *)(i_val6 + u_val5 * 8 + 0x24), (val & 0xffffff) >> 8 == (uint)p_uint4[2]
        )) && (u_val1 = p_uint4[1], p_uint4[1] = u_val1 - 1, (ushort)(u_val1 - 1) == 0)) {
      HW_Routine_080080A0(i_val6 + 0x824,*p_uint4 & 0x3ff,(*(byte *)((int)p_uint4 + 1) & 0x3f) >> 2);
      p_uint4[2] = 0;
      *(undefined4 *)p_uint4 = *(undefined4 *)(i_val6 + 0x20);
      *(ushort **)(i_val6 + 0x20) = p_uint4;
      if (u_val5 < 0x100) {
        p_uint3 = (uint *)(i_val6 + (uint)(stack_val_18 >> 5) * 4);
        *p_uint3 = *p_uint3 & ~(1 << (val & 0x1f));
      }
      *(short *)(i_val6 + 0x920) = *(short *)(i_val6 + 0x920) + -1;
    }
  }
  return;
}

// =============================================================================
// Function: HW_Routine_08007CD8 @ 0x08007CD8
// =============================================================================
u32 HW_Routine_08007CD8(undefined4 hw_reg,uint val)

{
  short s_val1;
  uint u_val2;
  int i_val3;
  
  if (val != 0) {
    u_val2 = 0;
    if ((val & 0xff) < 0x100) {
      u_val2 = *(uint *)(*gIWRAM_030408 + (val >> 5 & 7) * 4) & 1 << (val & 0x1f);
      u_val2 = (-u_val2 | u_val2) >> 0x1f;
    }
    if ((u_val2 != 0) &&
       (i_val3 = *gIWRAM_030408 + (val & 0xff) * 8 + 0x24,
       (val & 0xffffff) >> 8 == (uint)*(ushort *)(i_val3 + 4))) {
      s_val1 = *(short *)(i_val3 + 2);
      *(short *)(i_val3 + 2) = s_val1 + 1;
      if (s_val1 != -1) goto LAB_08007d44;
      *(undefined2 *)(i_val3 + 2) = 0xffff;
    }
  }
  val = 0;
LAB_08007d44:
  return val;
}

// =============================================================================
// Function: GBA_Vram_AllocateTileBlock @ 0x08007D4C
// =============================================================================
u32 GBA_Vram_AllocateTileBlock(undefined4 hw_reg,uint val)

{
  uint u_val1;
  ushort *p_uint2;
  
  if (val != 0) {
    u_val1 = 0;
    if ((val & 0xff) < 0x100) {
      u_val1 = *(uint *)(*gIWRAM_030408 + (val >> 5 & 7) * 4) & 1 << (val & 0x1f);
      u_val1 = (-u_val1 | u_val1) >> 0x1f;
    }
    if ((u_val1 != 0) &&
       (p_uint2 = (ushort *)(*gIWRAM_030408 + (val & 0xff) * 8 + 0x24),
       (val & 0xffffff) >> 8 == (uint)p_uint2[2])) {
      u_val1 = *p_uint2 & 0x3ff;
      goto LAB_08007db0;
    }
  }
  u_val1 = 0xffffffff;
LAB_08007db0:
  return u_val1;
}

// =============================================================================
// Function: HW_Routine_08007DB8 @ 0x08007DB8
// =============================================================================
u32 HW_Routine_08007DB8(undefined4 hw_reg,uint val)

{
  uint u_val1;
  int i_val2;
  
  if (val != 0) {
    u_val1 = 0;
    if ((val & 0xff) < 0x100) {
      u_val1 = *(uint *)(*gIWRAM_030408 + (val >> 5 & 7) * 4) & 1 << (val & 0x1f);
      u_val1 = (-u_val1 | u_val1) >> 0x1f;
    }
    if ((u_val1 != 0) &&
       (i_val2 = *gIWRAM_030408 + (val & 0xff) * 8 + 0x24,
       (val & 0xffffff) >> 8 == (uint)*(ushort *)(i_val2 + 4))) {
      u_val1 = (*(byte *)(i_val2 + 1) & 0x3f) >> 2;
      goto LAB_08007e1a;
    }
  }
  u_val1 = 0xb;
LAB_08007e1a:
  return u_val1;
}

// =============================================================================
// Function: HW_Routine_08007E24 @ 0x08007E24
// =============================================================================
u32 HW_Routine_08007E24(undefined4 hw_reg,uint val)

{
  uint u_val1;
  int i_val2;
  
  if (val != 0) {
    u_val1 = 0;
    if ((val & 0xff) < 0x100) {
      u_val1 = *(uint *)(*gIWRAM_030408 + (val >> 5 & 7) * 4) & 1 << (val & 0x1f);
      u_val1 = (-u_val1 | u_val1) >> 0x1f;
    }
    if ((u_val1 != 0) &&
       (i_val2 = *gIWRAM_030408 + (val & 0xff) * 8 + 0x24,
       (val & 0xffffff) >> 8 == (uint)*(ushort *)(i_val2 + 4))) {
      u_val1 = (uint)*(ushort *)(i_val2 + 2);
      goto LAB_08007e82;
    }
  }
  u_val1 = 0;
LAB_08007e82:
  return u_val1;
}

// =============================================================================
// Function: HW_Routine_08007EA8 @ 0x08007EA8
// =============================================================================
void HW_Routine_08007EA8(undefined1 *hw_reg)

{
  
  VTable_Routine_080D6EEC(hw_reg + 4);
  VTable_Routine_080D6EEC(hw_reg + 0x80);
  *hw_reg = 1;
  hw_reg[1] = 0;
  return;
}

// =============================================================================
// Function: HW_Routine_08007EC8 @ 0x08007EC8
// =============================================================================
void HW_Routine_08007EC8(undefined1 *hw_reg)

{
  
  VTable_Routine_080D6F5C(hw_reg + 0x80);
  VTable_Routine_080D6F5C(hw_reg + 4);
  *hw_reg = 0;
  hw_reg[1] = 1;
  return;
}

// =============================================================================
// Function: HW_Routine_08007EE8 @ 0x08007EE8
// =============================================================================
void HW_Routine_08007EE8(byte *hw_reg,uint val,uint size)

{
  byte b_flag1;
  int i_val2;
  uint *p_uint3;
  uint stack_val_14;
  uint stack_val_10;
  
  stack_val_14 = size;
  if ((val <= 0x3FF) && (size != 0)) {
    if ((val == 0) && (0x3FF < size)) {
      HW_Routine_08007EA8(hw_reg);
    }
    else {
      if (val <= 0x1FF) {
        stack_val_10 = (0x1FF + 1) - val;
        p_uint3 = &stack_val_14;
        if (stack_val_10 < size) {
          p_uint3 = &stack_val_10;
        }
        VTable_Routine_080D7118(hw_reg + 4,val,*p_uint3);
      }
      if (0x200 < val + stack_val_14) {
        i_val2 = 0;
        if (0x1FF < val) {
          i_val2 = val + 0xFFFFFE00;
        }
        VTable_Routine_080D7118(hw_reg + 0x80,i_val2,((val + stack_val_14) - 0x200) - i_val2);
      }
      b_flag1 = 0;
      if (hw_reg[4] != 0) {
        b_flag1 = (byte)(-(uint)hw_reg[0x80] >> 0x1f);
      }
      *hw_reg = b_flag1;
      hw_reg[1] = 0;
    }
  }
  return;
}

// =============================================================================
// Function: HW_Routine_08007F84 @ 0x08007F84
// =============================================================================
void HW_Routine_08007F84(undefined1 *hw_reg,uint val,uint size)

{
  byte b_flag1;
  int i_val2;
  uint *p_uint3;
  uint stack_val_18;
  uint stack_val_14;
  
  stack_val_18 = size;
  if ((val <= 0x3FF) && (size != 0)) {
    if ((val == 0) && (0x3FF < size)) {
      HW_Routine_08007EC8(hw_reg);
    }
    else {
      if (val <= 0x1FF) {
        stack_val_14 = (0x1FF + 1) - val;
        p_uint3 = &stack_val_18;
        if (stack_val_14 < size) {
          p_uint3 = &stack_val_14;
        }
        VTable_Routine_080D734C(hw_reg + 4,val,*p_uint3);
      }
      if (0x200 < val + stack_val_18) {
        i_val2 = 0;
        if (0x1FF < val) {
          i_val2 = val + 0xFFFFFE00;
        }
        VTable_Routine_080D734C(hw_reg + 0x80,i_val2,((val + stack_val_18) - 0x200) - i_val2);
      }
      *hw_reg = 0;
      b_flag1 = 0;
      if (hw_reg[5] != '\0') {
        b_flag1 = (byte)(-(uint)(byte)hw_reg[0x81] >> 0x1f);
      }
      hw_reg[1] = b_flag1;
    }
  }
  return;
}

// =============================================================================
// Function: HW_Routine_08008020 @ 0x08008020
// =============================================================================
u32 HW_Routine_08008020(byte *hw_reg,uint val)

{
  uint u_val1;
  byte b_flag2;
  int loop_i;
  byte *pbVar4;
  
  if (val < 10) {
    loop_i = 0;
    pbVar4 = hw_reg + 4;
    do {
      if ((*pbVar4 == 0) && (u_val1 = VTable_Routine_080D7568(pbVar4,val), u_val1 <= 0x1FF)) {
        hw_reg[1] = 0;
        b_flag2 = 0;
        if (hw_reg[4] != 0) {
          b_flag2 = (byte)(-(uint)hw_reg[0x80] >> 0x1f);
        }
        *hw_reg = b_flag2;
        u_val1 = loop_i << 9 | u_val1;
        goto LAB_08008096;
      }
      pbVar4 = pbVar4 + 0x7c;
      loop_i = loop_i + 1;
    } while (loop_i < 2);
  }
  else if ((val == 10) && (hw_reg[1] != 0)) {
    HW_Routine_08007EA8(hw_reg);
    u_val1 = 0;
    goto LAB_08008096;
  }
  u_val1 = 0x400;
LAB_08008096:
  return u_val1;
}

// =============================================================================
// Function: HW_Routine_080080A0 @ 0x080080A0
// =============================================================================
void HW_Routine_080080A0(undefined1 *hw_reg,uint val,uint size)

{
  byte b_flag1;
  undefined1 *p_uint2;
  
  if (size < 10) {
    p_uint2 = hw_reg + 4;
    if ((val & 0x200) != 0) {
      p_uint2 = hw_reg + 0x80;
    }
    VTable_Routine_080D76C0(p_uint2);
    *hw_reg = 0;
    b_flag1 = 0;
    if (hw_reg[5] != '\0') {
      b_flag1 = (byte)(-(uint)(byte)hw_reg[0x81] >> 0x1f);
    }
    hw_reg[1] = b_flag1;
  }
  else if (size == 10) {
    HW_Routine_08007EC8(hw_reg);
  }
  return;
}

// =============================================================================
// Function: HW_Routine_08008190 @ 0x08008190
// =============================================================================
u32 HW_Routine_08008190(undefined4 *hw_reg,int val)

{
  char c_char1;
  undefined4 u_val2;
  int *p_int3;
  int i_val4;
  undefined4 *p_uint5;
  int i_val6;
  int i_val7;
  int i_val8;
  uint u_val9;
  int *p_int10;
  undefined1 stack_buf_4c [4];
  undefined4 stack_val_48;
  int stack_val_44;
  int stack_val_40;
  undefined4 *puStack_3c;
  int stack_val_38;
  undefined4 *puStack_34;
  uint stack_val_30;
  uint stack_val_2c;
  uint stack_val_28;
  int stack_val_24;
  
  puStack_3c = hw_reg;
  stack_val_38 = val;
  puStack_34 = (undefined4 *)CppRuntime_OperatorNewArray(0xa0);
  i_val7 = 7;
  p_uint5 = puStack_34;
  do {
    *p_uint5 = 0;
    p_uint5[1] = 0;
    p_uint5[3] = 0;
    p_uint5 = p_uint5 + 5;
    i_val7 = i_val7 + -1;
  } while (i_val7 != -1);
  stack_val_30 = 0;
  do {
    p_int10 = puStack_34 + stack_val_30 * 5;
    c_char1 = *(char *)(stack_val_38 + stack_val_30);
    VTable_Routine_080D772C(p_int10,c_char1);
    u_val9 = (uint)(byte)(c_char1 - 1);
    stack_val_2c = stack_val_30 + 1;
    if (u_val9 != 0xff) {
      do {
        GBA_ObjAttr_Init(stack_buf_4c);
        stack_val_48 = GBA_ObjAttr_AllocateSprite(stack_buf_4c,stack_val_30);
        i_val7 = p_int10[1];
        if (i_val7 == p_int10[3]) {
          stack_val_40 = 1;
          i_val6 = *p_int10;
          stack_val_44 = i_val7 - i_val6 >> 3;
          p_int3 = &stack_val_44;
          if (stack_val_44 == 0) {
            p_int3 = &stack_val_40;
          }
          if (stack_val_44 + *p_int3 == 0) {
            i_val4 = 0;
            stack_val_24 = 0;
          }
          else {
            i_val6 = (stack_val_44 + *p_int3) * 8;
            i_val4 = runtime_malloc_aligned(i_val6);
            stack_val_24 = i_val6;
            if (i_val4 == 0) {
              i_val4 = VTable_Routine_080D3BC0(i_val6);
            }
            i_val6 = *p_int10;
          }
          stack_val_28 = u_val9 - 1;
          i_val8 = i_val4;
          for (; i_val6 != i_val7; i_val6 = i_val6 + 8) {
            if (i_val8 != 0) {
              GBA_ObjAttr_Init(i_val8);
              u_val2 = HW_Routine_08007CD8(i_val8,*(undefined4 *)(i_val6 + 4));
              *(undefined4 *)(i_val8 + 4) = u_val2;
            }
            i_val8 = i_val8 + 8;
          }
          i_val7 = stack_val_40;
          if (stack_val_40 == 1) {
            if (i_val8 != 0) {
              GBA_ObjAttr_Init(i_val8);
              u_val2 = HW_Routine_08007CD8(i_val8,stack_val_48);
              *(undefined4 *)(i_val8 + 4) = u_val2;
            }
            i_val8 = i_val8 + 8;
          }
          else {
            for (; i_val7 != 0; i_val7 = i_val7 + -1) {
              if (i_val8 != 0) {
                GBA_ObjAttr_Init(i_val8);
                u_val2 = HW_Routine_08007CD8(i_val8,stack_val_48);
                *(undefined4 *)(i_val8 + 4) = u_val2;
              }
              i_val8 = i_val8 + 8;
            }
          }
          i_val6 = p_int10[1];
          for (i_val7 = *p_int10; i_val7 != i_val6; i_val7 = i_val7 + 8) {
            HW_Routine_08007C28(i_val7,*(undefined4 *)(i_val7 + 4));
            HW_Routine_080079E8(i_val7,2);
          }
          if (*p_int10 != 0) {
            cpp_operator_delete();
          }
          *p_int10 = i_val4;
          p_int10[1] = i_val8;
          p_int10[3] = stack_val_24 + i_val4;
        }
        else {
          if (i_val7 != 0) {
            GBA_ObjAttr_Init(i_val7);
            u_val2 = HW_Routine_08007CD8(i_val7,stack_val_48);
            *(undefined4 *)(i_val7 + 4) = u_val2;
          }
          p_int10[1] = p_int10[1] + 8;
          stack_val_28 = u_val9 - 1;
        }
        HW_Routine_08007C28(stack_buf_4c,stack_val_48);
        HW_Routine_080079E8(stack_buf_4c,2);
        u_val9 = stack_val_28 & 0xff;
      } while (u_val9 != 0xff);
    }
    p_int10[4] = *p_int10;
    stack_val_30 = stack_val_2c;
  } while (stack_val_2c < 8);
  *puStack_3c = puStack_34;
  return puStack_3c;
}

// =============================================================================
// Function: HW_Routine_080083D0 @ 0x080083D0
// =============================================================================
u32 HW_Routine_080083D0(int hw_reg,int *val,int size)

{
  int i_val1;
  int i_val2;
  int i_val3;
  int i_val4;
  undefined4 u_val5;
  int i_val6;
  int i_val7;
  int *p_int8;
  
  if (*val == 0) {
    GBA_ObjAttr_Init(hw_reg);
    u_val5 = GBA_ObjAttr_AllocateSprite(hw_reg,size);
  }
  else {
    p_int8 = (int *)(size * 0x14 + *val);
    i_val3 = p_int8[1];
    i_val6 = p_int8[4];
    i_val2 = i_val6;
    i_val7 = i_val3;
    do {
      i_val1 = i_val2;
      if (i_val6 == i_val7) goto LAB_08008410;
      i_val7 = i_val1 + 8;
      if (i_val7 == i_val3) {
        i_val7 = *p_int8;
      }
      i_val4 = HW_Routine_08007E24(i_val1,*(undefined4 *)(i_val1 + 4));
      i_val2 = i_val7;
    } while (i_val4 != 1);
    p_int8[4] = i_val7;
LAB_08008410:
    GBA_ObjAttr_Init(hw_reg);
    u_val5 = HW_Routine_08007CD8(hw_reg,*(undefined4 *)(i_val1 + 4));
  }
  *(undefined4 *)(hw_reg + 4) = u_val5;
  return hw_reg;
}

// =============================================================================
// Function: HW_Routine_08008444 @ 0x08008444
// =============================================================================
u32 HW_Routine_08008444(int *hw_reg)

{
  int i_val1;
  ushort u_val2;
  int i_val3;
  undefined4 *p_uint4;
  undefined4 *p_uint5;
  
  hw_reg[1] = gRomData_080E5B00;
  i_val3 = CppRuntime_OperatorNewArray(0x4b0);
  Input_InitKeypadState(i_val3,0x1e,4);
  *(undefined4 *)(i_val3 + 0x24) = 0;
  *(undefined4 *)(i_val3 + 0x28) = 0;
  *(undefined4 *)(i_val3 + 0x30) = 0;
  GBA_Display_InitRegsBuffer(i_val3 + 0x34);
  OAM_InitSpriteBuffer(i_val3 + 0x8c,0,0x20);
  HW_Routine_08008980(i_val3 + 0x490);
  i_val1 = 0x494;
  p_uint5 = (undefined4 *)(i_val3 + 0x494);
  *p_uint5 = 0;
  p_uint5[1] = 0;
  p_uint5[2] = gRomData_080E5BB4;
  p_uint4 = (undefined4 *)(i_val3 + 0x4A4);
  p_uint5[3] = p_uint4;
  *p_uint4 = 0;
  p_uint4[1] = 0;
  p_uint4[2] = gRomData_080E5BD8;
  p_uint5[4] = i_val3 + i_val1 + 0xc;
  p_uint5[5] = p_uint4;
  u_val2 = *(ushort *)(i_val3 + 0x38) | 8;
  *(ushort *)(i_val3 + 0x38) = u_val2;
  *REG_DISPSTAT = u_val2;
  *hw_reg = i_val3;
  return hw_reg;
}

// =============================================================================
// Function: HW_Routine_080084DC @ 0x080084DC
// =============================================================================
u32 HW_Routine_080084DC(int *hw_reg,undefined2 *val)

{
  int i_val1;
  ushort u_val2;
  int i_val3;
  undefined4 *p_uint4;
  undefined4 *p_uint5;
  
  hw_reg[1] = gRomData_080E5B00;
  i_val3 = CppRuntime_OperatorNewArray(0x4b0);
  Input_InitKeypadState(i_val3,*val,val[1]);
  *(undefined4 *)(i_val3 + 0x24) = 0;
  *(undefined4 *)(i_val3 + 0x28) = 0;
  *(undefined4 *)(i_val3 + 0x30) = 0;
  GBA_Display_InitRegsBuffer(i_val3 + 0x34);
  OAM_InitSpriteBuffer(i_val3 + 0x8c,0,0x20);
  HW_Routine_08008980(i_val3 + 0x490);
  i_val1 = 0x494;
  p_uint5 = (undefined4 *)(i_val3 + 0x494);
  *p_uint5 = 0;
  p_uint5[1] = 0;
  p_uint5[2] = gRomData_080E5BB4;
  p_uint4 = (undefined4 *)(i_val3 + 0x4A4);
  p_uint5[3] = p_uint4;
  *p_uint4 = 0;
  p_uint4[1] = 0;
  p_uint4[2] = gRomData_080E5BD8;
  p_uint5[4] = i_val3 + i_val1 + 0xc;
  p_uint5[5] = p_uint4;
  u_val2 = *(ushort *)(i_val3 + 0x38) | 8;
  *(ushort *)(i_val3 + 0x38) = u_val2;
  *REG_DISPSTAT = u_val2;
  *hw_reg = i_val3;
  return hw_reg;
}

// =============================================================================
// Function: GBA_DisplayController_Reset @ 0x08008574
// =============================================================================
u32 GBA_DisplayController_Reset(int *hw_reg,undefined1 *val)

{
  int i_val1;
  ushort u_val2;
  int i_val3;
  undefined4 *p_uint4;
  undefined4 *p_uint5;
  
  hw_reg[1] = gRomData_080E5B00;
  i_val3 = CppRuntime_OperatorNewArray(0x4b0);
  Input_InitKeypadState(i_val3,0x1e,4);
  *(undefined4 *)(i_val3 + 0x24) = 0;
  *(undefined4 *)(i_val3 + 0x28) = 0;
  *(undefined4 *)(i_val3 + 0x30) = 0;
  GBA_Display_InitRegsBuffer(i_val3 + 0x34);
  OAM_InitSpriteBuffer(i_val3 + 0x8c,*val,val[1]);
  HW_Routine_08008980(i_val3 + 0x490);
  p_uint5 = (undefined4 *)(i_val3 + 0x494);
  *p_uint5 = 0;
  p_uint5[1] = 0;
  p_uint5[2] = gRomData_080E5BB4;
  i_val1 = 0x4A4;
  p_uint4 = (undefined4 *)(i_val3 + 0x4A4);
  p_uint5[3] = p_uint4;
  *p_uint4 = 0;
  p_uint4[1] = 0;
  p_uint4[2] = gRomData_080E5BD8;
  p_uint5[4] = i_val3 + i_val1 + -4;
  p_uint5[5] = p_uint4;
  u_val2 = *(ushort *)(i_val3 + 0x38) | 8;
  *(ushort *)(i_val3 + 0x38) = u_val2;
  *REG_DISPSTAT = u_val2;
  *hw_reg = i_val3;
  return hw_reg;
}

// =============================================================================
// Function: HW_Routine_08008618 @ 0x08008618
// =============================================================================
u32 HW_Routine_08008618(int *hw_reg,undefined2 *val,undefined1 *size)

{
  int i_val1;
  ushort u_val2;
  int i_val3;
  undefined4 *p_uint4;
  undefined4 *p_uint5;
  
  hw_reg[1] = gRomData_080E5B00;
  i_val3 = CppRuntime_OperatorNewArray(0x4b0);
  Input_InitKeypadState(i_val3,*val,val[1]);
  *(undefined4 *)(i_val3 + 0x24) = 0;
  *(undefined4 *)(i_val3 + 0x28) = 0;
  *(undefined4 *)(i_val3 + 0x30) = 0;
  GBA_Display_InitRegsBuffer(i_val3 + 0x34);
  OAM_InitSpriteBuffer(i_val3 + 0x8c,*size,size[1]);
  HW_Routine_08008980(i_val3 + 0x490);
  p_uint5 = (undefined4 *)(i_val3 + 0x494);
  *p_uint5 = 0;
  p_uint5[1] = 0;
  p_uint5[2] = gRomData_080E5BB4;
  i_val1 = 0x4A4;
  p_uint4 = (undefined4 *)(i_val3 + 0x4A4);
  p_uint5[3] = p_uint4;
  *p_uint4 = 0;
  p_uint4[1] = 0;
  p_uint4[2] = gRomData_080E5BD8;
  p_uint5[4] = i_val3 + i_val1 + -4;
  p_uint5[5] = p_uint4;
  u_val2 = *(ushort *)(i_val3 + 0x38) | 8;
  *(ushort *)(i_val3 + 0x38) = u_val2;
  *REG_DISPSTAT = u_val2;
  *hw_reg = i_val3;
  return hw_reg;
}

// =============================================================================
// Function: HW_Routine_080086BC @ 0x080086BC
// =============================================================================
void HW_Routine_080086BC(int *hw_reg,uint val)

{
  int i_val1;
  int i_val2;
  
  hw_reg[1] = gRomData_080E5B00;
  i_val1 = *hw_reg;
  if (i_val1 != 0) {
    Farm_Routine_080098DC(i_val1 + 0x494,2);
    HW_Routine_08008A68(i_val1 + 0x490,2);
    for (i_val2 = *(int *)(i_val1 + 0x24); i_val2 != *(int *)(i_val1 + 0x28); i_val2 = i_val2 + 0x10) {
    }
    if (*(int *)(i_val1 + 0x24) != 0) {
      cpp_operator_delete();
    }
    CppRuntime_FreeMemory(i_val1);
  }
  if ((val & 1) != 0) {
    CppRuntime_FreeMemory(hw_reg);
  }
  return;
}

// =============================================================================
// Function: HW_Routine_08008724 @ 0x08008724
// =============================================================================
void HW_Routine_08008724(int *hw_reg)

{
  int i_val1;
  int i_val2;
  undefined4 stack_val_18;
  undefined4 stack_val_14;
  undefined4 stack_val_10;
  int stack_val_c;
  
  i_val2 = *hw_reg;
  stack_val_c = i_val2 + 0x34;
  *(ushort *)(i_val2 + 0x34) = *(ushort *)(i_val2 + 0x34) | 0x80;
  stack_val_18 = 0;
  stack_val_14 = 0;
  stack_val_10 = gRomData_080E5AF0;
  i_val1 = HW_Routine_08008AE0(i_val2 + 0x490);
  _call_via_r2(i_val1,&stack_val_18,*(undefined4 *)(*(int *)(i_val1 + 8) + 0x10));
  HW_Routine_08008AF0(i_val2 + 0x490);
  Farm_Routine_080098AC(&stack_val_18,2);
  return;
}

// =============================================================================
// Function: HW_Routine_08008774 @ 0x08008774
// =============================================================================
void HW_Routine_08008774(int *hw_reg)

{
  int i_val1;
  int i_val2;
  undefined4 stack_val_18;
  undefined4 stack_val_14;
  undefined4 stack_val_10;
  int stack_val_c;
  
  i_val2 = *hw_reg;
  stack_val_c = i_val2 + 0x34;
  *(ushort *)(i_val2 + 0x34) = (ushort)0xFF7F & *(ushort *)(i_val2 + 0x34);
  stack_val_18 = 0;
  stack_val_14 = 0;
  stack_val_10 = gRomData_080E5AF0;
  i_val1 = HW_Routine_08008AE0(i_val2 + 0x490);
  _call_via_r2(i_val1,&stack_val_18,*(undefined4 *)(*(int *)(i_val1 + 8) + 0x10));
  HW_Routine_08008AF0(i_val2 + 0x490);
  Farm_Routine_080098AC(&stack_val_18,2);
  return;
}

// =============================================================================
// Function: HW_Routine_080088B8 @ 0x080088B8
// =============================================================================
void HW_Routine_080088B8(undefined4 *hw_reg)

{
  
  Input_ProcessAutoRepeat(*hw_reg);
  return;
}

// =============================================================================
// Function: HW_Routine_080088E0 @ 0x080088E0
// =============================================================================
void HW_Routine_080088E0(undefined4 *hw_reg,undefined2 val)

{
  
  Farm_Routine_080092C8(*hw_reg,val);
  return;
}

// =============================================================================
// Function: HW_Routine_080088F0 @ 0x080088F0
// =============================================================================
void HW_Routine_080088F0(undefined4 *hw_reg,undefined2 val)

{
  
  Farm_Routine_080092FC(*hw_reg,val);
  return;
}

// =============================================================================
// Function: HW_Routine_0800894C @ 0x0800894C
// =============================================================================
void HW_Routine_0800894C(int *hw_reg)

{
  HW_Routine_08008AE0(*hw_reg + 0x490);
  return;
}

// =============================================================================
// Function: HW_Routine_0800896C @ 0x0800896C
// =============================================================================
void HW_Routine_0800896C(int *hw_reg)

{
  HW_Routine_08008AE0(*hw_reg + 0x490);
  return;
}

// =============================================================================
// Function: HW_Routine_08008AF0 @ 0x08008AF0
// =============================================================================
void HW_Routine_08008AF0(void)

{
  
  Interrupt_DisableFlag(1);
  return;
}

// =============================================================================
// Function: HW_Routine_08008AFC @ 0x08008AFC
// =============================================================================
void HW_Routine_08008AFC(void)

{
  
  M4A_Routine_080D2254();
  M4A_Routine_080D28DC();
  return;
}

// =============================================================================
// Function: HW_Routine_08008B0C @ 0x08008B0C
// =============================================================================
u32 HW_Routine_08008B0C(void)

{
  
  M4A_Routine_080D1BF8();
  return 1;
}

// =============================================================================
// Function: HW_Routine_08008B18 @ 0x08008B18
// =============================================================================
u32 HW_Routine_08008B18(void)

{
  
  M4A_Routine_080D22CC();
  return 1;
}

// =============================================================================
// Function: HW_Routine_08008B24 @ 0x08008B24
// =============================================================================
u32 HW_Routine_08008B24(uint hw_reg)

{
  
  if ((0x5 & 0xffff) <= hw_reg) {
    hw_reg = math_modsi3(hw_reg);
  }
  return *(undefined4 *)(hw_reg * 0xc + gRomData_0813ABB4);
}

// =============================================================================
// Function: HW_Routine_08008B54 @ 0x08008B54
// =============================================================================
u32 HW_Routine_08008B54(undefined4 *hw_reg,undefined1 val)

{
  undefined4 u_val1;
  
  u_val1 = HW_Routine_08008B24(val);
  *hw_reg = u_val1;
  return hw_reg;
}

// =============================================================================
// Function: HW_Routine_08008B6C @ 0x08008B6C
// =============================================================================
void HW_Routine_08008B6C(undefined4 *hw_reg,uint val)

{
  
  M4A_Routine_080D2A0C(*hw_reg,*(undefined4 *)((val & 0xffff) * 8 + gRomData_0813ABF0));
  return;
}

// =============================================================================
// Function: HW_Routine_08008B88 @ 0x08008B88
// =============================================================================
void HW_Routine_08008B88(undefined4 *hw_reg,uint val)

{
  int *p_int1;
  
  p_int1 = (int *)*hw_reg;
  if ((*p_int1 != *(int *)((val & 0xffff) * 8 + gRomData_0813ABF0)) || (p_int1[1] < 0)) {
    M4A_Routine_080D2A0C(p_int1);
  }
  return;
}

// =============================================================================
// Function: HW_Routine_08008BB0 @ 0x08008BB0
// =============================================================================
void HW_Routine_08008BB0(undefined4 *hw_reg,uint val)

{
  int *p_int1;
  
  p_int1 = (int *)*hw_reg;
  if (*p_int1 == *(int *)((val & 0xffff) * 8 + gRomData_0813ABF0)) {
    if (p_int1[1] < 0) {
      M4A_Routine_080D2438(p_int1);
    }
  }
  else {
    M4A_Routine_080D2A0C(p_int1);
  }
  return;
}

// =============================================================================
// Function: HW_Routine_08008BE0 @ 0x08008BE0
// =============================================================================
void HW_Routine_08008BE0(undefined4 *hw_reg)

{
  
  M4A_Routine_080D2AF0(*hw_reg);
  return;
}

// =============================================================================
// Function: HW_Routine_08008BEC @ 0x08008BEC
// =============================================================================
void HW_Routine_08008BEC(undefined4 *hw_reg)

{
  
  M4A_Routine_080D2438(*hw_reg);
  return;
}

// =============================================================================
// Function: HW_Routine_08008BF8 @ 0x08008BF8
// =============================================================================
void HW_Routine_08008BF8(undefined4 *hw_reg,undefined2 val)

{
  
  M4A_Routine_080D2470(*hw_reg,val);
  return;
}

// =============================================================================
// Function: HW_Routine_08008C08 @ 0x08008C08
// =============================================================================
void HW_Routine_08008C08(undefined4 *hw_reg,undefined2 val)

{
  
  M4A_Routine_080D2480(*hw_reg,val);
  return;
}

// =============================================================================
// Function: HW_Routine_08008C18 @ 0x08008C18
// =============================================================================
void HW_Routine_08008C18(undefined4 *hw_reg,undefined2 val)

{
  
  M4A_Routine_080D24A0(*hw_reg,val);
  return;
}

// =============================================================================
// Function: HW_Routine_08008C28 @ 0x08008C28
// =============================================================================
void HW_Routine_08008C28(undefined4 *hw_reg,undefined2 val)

{
  
  VTable_Routine_080D3258(*hw_reg,val);
  return;
}

// =============================================================================
// Function: HW_Routine_08008C38 @ 0x08008C38
// =============================================================================
void HW_Routine_08008C38(undefined4 *hw_reg,undefined2 val,undefined2 size)

{
  
  VTable_Routine_080D3280(*hw_reg,size,val);
  return;
}

// =============================================================================
// Function: HW_Routine_08008C54 @ 0x08008C54
// =============================================================================
void HW_Routine_08008C54(undefined4 *hw_reg,short val,undefined2 size)

{
  
  VTable_Routine_080D32E8(*hw_reg,size,(int)val);
  return;
}

// =============================================================================
// Function: HW_Routine_08008C70 @ 0x08008C70
// =============================================================================
void HW_Routine_08008C70(undefined4 *hw_reg,char val,undefined2 size)

{
  
  VTable_Routine_080D335C(*hw_reg,size,(int)val);
  return;
}

// =============================================================================
// Function: HW_Routine_08008C8C @ 0x08008C8C
// =============================================================================
void HW_Routine_08008C8C(undefined4 *hw_reg,undefined1 val,undefined2 size)

{
  
  VTable_Routine_080D33E4(*hw_reg,size,val);
  return;
}

// =============================================================================
// Function: HW_Routine_08008CA8 @ 0x08008CA8
// =============================================================================
void HW_Routine_08008CA8(undefined4 *hw_reg,undefined1 val,undefined2 size)

{
  
  VTable_Routine_080D3458(*hw_reg,size,val);
  return;
}

// =============================================================================
// Function: HW_Routine_08008CC4 @ 0x08008CC4
// =============================================================================
void HW_Routine_08008CC4(undefined4 *hw_reg)

{
  
  M4A_Routine_080D24C8(*hw_reg);
  return;
}

// =============================================================================
// Function: HW_Routine_08008CFC @ 0x08008CFC
// =============================================================================
u32 HW_Routine_08008CFC(void)

{
  undefined4 stack_val_8;
  undefined4 stack_val_4;
  HW_Routine_08008B54(&stack_val_8,0);
  return CONCAT44(stack_val_4,stack_val_8);
}

// =============================================================================
// Function: HW_Routine_08008D10 @ 0x08008D10
// =============================================================================
u32 HW_Routine_08008D10(void)

{
  undefined4 stack_val_8;
  undefined4 stack_val_4;
  HW_Routine_08008B54(&stack_val_8,0x5 & 0xff);
  return CONCAT44(stack_val_4,stack_val_8);
}

// =============================================================================
// Function: HW_Routine_08008D3C @ 0x08008D3C
// =============================================================================
u32 HW_Routine_08008D3C(uint hw_reg)

{
  undefined4 stack_val_8;
  undefined4 stack_val_4;
  HW_Routine_08008B54(&stack_val_8,*(undefined1 *)((hw_reg & 0xffff) * 8 + gRomData_0813ABF0 + 4));
  return CONCAT44(stack_val_4,stack_val_8);
}

// =============================================================================
// Function: HW_Routine_08008D84 @ 0x08008D84
// =============================================================================
void HW_Routine_08008D84(void)

{
  
  M4A_Routine_080D2958();
  return;
}

// =============================================================================
// Function: HW_Routine_08008D90 @ 0x08008D90
// =============================================================================
void HW_Routine_08008D90(void)

{
  
  M4A_Routine_080D28DC();
  return;
}

// =============================================================================
// Function: HW_Routine_08008DA8 @ 0x08008DA8
// =============================================================================
void HW_Routine_08008DA8(undefined2 hw_reg)

{
  
  M4A_Routine_080D22D8(hw_reg);
  return;
}

// =============================================================================
// Function: HW_Routine_08008DB8 @ 0x08008DB8
// =============================================================================
void HW_Routine_08008DB8(undefined2 hw_reg)

{
  
  M4A_Routine_080D2304(hw_reg);
  return;
}

// =============================================================================
// Function: HW_Routine_08008DC8 @ 0x08008DC8
// =============================================================================
void HW_Routine_08008DC8(undefined2 hw_reg)

{
  
  M4A_Routine_080D2350(hw_reg);
  return;
}

// =============================================================================
// Function: HW_Routine_08008DD8 @ 0x08008DD8
// =============================================================================
void HW_Routine_08008DD8(undefined2 hw_reg)

{
  
  M4A_Routine_080D23A4(hw_reg);
  return;
}

// =============================================================================
// Function: HW_Routine_08008DE8 @ 0x08008DE8
// =============================================================================
void HW_Routine_08008DE8(void)

{
  
  M4A_Routine_080D240C();
  return;
}

// =============================================================================
// Function: HW_Routine_08008DF4 @ 0x08008DF4
// =============================================================================
void HW_Routine_08008DF4(undefined2 hw_reg)

{
  
  M4A_Routine_080D23D8(hw_reg);
  return;
}

// =============================================================================
// Function: HW_Routine_08008E04 @ 0x08008E04
// =============================================================================
void HW_Routine_08008E04(void)

{
  
  M4A_Routine_080D2444();
  return;
}

// =============================================================================
// Function: HW_Routine_08008E28 @ 0x08008E28
// =============================================================================
u32 HW_Routine_08008E28(uint hw_reg,uint val,uint size)

{
  uint u_val1;
  
  if ((size == 0) || (u_val1 = val | hw_reg | size, (u_val1 & 1) != 0)) {
    u_val1 = 0;
  }
  else if ((u_val1 & 3) == 0) {
    u_val1 = (size & 0x3ffff) >> 2 | 0x84000000;
  }
  else {
    u_val1 = (size & 0x1ffff) >> 1 | 0x80000000;
  }
  return u_val1;
}

// =============================================================================
// Function: GBA_DMA3_FastCopy @ 0x08008E64
// =============================================================================
void GBA_DMA3_FastCopy(uint hw_reg,uint val,uint size)

{
  uint u_val1;
  
  if ((hw_reg != 0) && (val != 0)) {
    if ((size == 0) || (u_val1 = hw_reg | val | size, (u_val1 & 1) != 0)) {
      u_val1 = 0;
    }
    else if ((u_val1 & 3) == 0) {
      u_val1 = (size & 0x3ffff) >> 2 | 0x84000000;
    }
    else {
      u_val1 = (size & 0x1ffff) >> 1 | 0x80000000;
    }
    M4A_Routine_080D0EBC(hw_reg,val,u_val1,REG_DMA3SAD);
  }
  return;
}

// =============================================================================
// Function: HW_Routine_08008EB8 @ 0x08008EB8
// =============================================================================
u32 HW_Routine_08008EB8(undefined4 hw_reg,uint val,uint size)

{
  uint u_val1;
  undefined4 stack_val_8;
  undefined4 stack_val_4;
  if (val != 0) {
    if ((size == 0) || (((val | size) & 1) != 0)) {
      u_val1 = 0;
    }
    else if (((val | size) & 3) == 0) {
      u_val1 = (size & 0x3ffff) >> 2 | 0x84000000;
    }
    else {
      u_val1 = (size & 0x1ffff) >> 1 | 0x80000000;
    }
    stack_val_8 = hw_reg;
    M4A_Routine_080D0EBC(&stack_val_8,val,u_val1 | 0x1000000,REG_DMA3SAD);
  }
  return stack_val_4;
}

// =============================================================================
// Function: HW_Routine_08008F0C @ 0x08008F0C
// =============================================================================
u32 HW_Routine_08008F0C(undefined4 *hw_reg,uint val,uint size,uint mode)

{
  uint u_val1;
  
  if ((((val == 0) || (size == 0)) || (mode == 0)) ||
     (u_val1 = val | size | mode, (u_val1 & 1) != 0)) {
    u_val1 = 0;
  }
  else if ((u_val1 & 3) == 0) {
    u_val1 = (mode & 0x3ffff) >> 2 | 0x84000000;
  }
  else {
    u_val1 = (mode & 0x1ffff) >> 1 | 0x80000000;
  }
  *hw_reg = 0;
  hw_reg[1] = val;
  hw_reg[2] = size;
  hw_reg[3] = u_val1;
  return hw_reg;
}

// =============================================================================
// Function: HW_Routine_08008F60 @ 0x08008F60
// =============================================================================
u32 HW_Routine_08008F60(undefined4 *hw_reg,undefined4 val,uint size,uint mode)

{
  uint u_val1;
  
  if (size == 0) {
    u_val1 = 0;
  }
  else {
    if ((mode == 0) || (((size | mode) & 1) != 0)) {
      u_val1 = 0;
    }
    else if (((size | mode) & 3) == 0) {
      u_val1 = (mode & 0x3ffff) >> 2 | 0x84000000;
    }
    else {
      u_val1 = (mode & 0x1ffff) >> 1 | 0x80000000;
    }
    u_val1 = u_val1 | 0x1000000;
  }
  *hw_reg = 1;
  hw_reg[1] = val;
  hw_reg[2] = size;
  hw_reg[3] = u_val1;
  return hw_reg;
}

// =============================================================================
// Function: HW_Routine_08008FB8 @ 0x08008FB8
// =============================================================================
void HW_Routine_08008FB8(int *hw_reg)

{
  undefined1 **ppuVar1;
  undefined1 *puStack_c;
  
  ppuVar1 = (undefined1 **)hw_reg[1];
  if (*hw_reg == 1) {
    ppuVar1 = &puStack_c;
    puStack_c = (undefined1 *)hw_reg[1];
  }
  M4A_Routine_080D0EBC(ppuVar1,hw_reg[2],hw_reg[3],REG_DMA3SAD);
  return;
}

// =============================================================================
// Function: HW_Routine_08008FE4 @ 0x08008FE4
// =============================================================================
void HW_Routine_08008FE4(int *hw_reg,int *val)

{
  undefined4 u_val1;
  undefined1 **ppuVar2;
  undefined1 *puStack_14;
  
  u_val1 = REG_DMA3SAD;
  for (; hw_reg != val; hw_reg = hw_reg + 4) {
    ppuVar2 = (undefined1 **)hw_reg[1];
    if (*hw_reg == 1) {
      ppuVar2 = &puStack_14;
      puStack_14 = (undefined1 *)hw_reg[1];
    }
    M4A_Routine_080D0EBC(ppuVar2,hw_reg[2],hw_reg[3],u_val1);
  }
  return;
}

