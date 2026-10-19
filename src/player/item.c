// =============================================================================
// Harvest Moon: Friends of Mineral Town (GBA) - Decompiled Source
// Module: ITEM_SYSTEM (79 functions)
// Description: Item registry, tool tier levels, seeds, minerals and inventory valuations
// =============================================================================

#include "../../include/player/item.h"

// =============================================================================
// Function: Tool_Construct @ 0x0800D024
// =============================================================================
u32 Tool_Construct(int arg_1)

{
  char c_char1;
  uint u_val2;
  uint loop_i;
  int i_val4;
  
  u_val2 = Building_Routine_0800CE74();
  i_val4 = 0;
  loop_i = 0;
  if (u_val2 != 0) {
    arg_1 = arg_1 + 0x2c;
    do {
      c_char1 = Item_IsValid(arg_1);
      if (c_char1 == '\0') {
        i_val4 = i_val4 + 1;
      }
      arg_1 = arg_1 + 0x3c;
      loop_i = loop_i + 1;
    } while (loop_i < u_val2);
  }
  return i_val4;
}

// =============================================================================
// Function: Tool_GetId @ 0x0800D058
// =============================================================================
u32 Tool_GetId(int arg_1)

{
  uint u_val1;
  
  if (*(char *)(arg_1 + 3) < '\0') {
    u_val1 = *(byte *)(arg_1 + 4) & 0xf;
  }
  else {
    u_val1 = 0xffffffff;
  }
  return u_val1;
}

// =============================================================================
// Function: Tool_GetName @ 0x0800D074
// =============================================================================
void Tool_GetName(short *arg_1,undefined4 arg_2,uint arg_3)

{
  uint u_val1;
  short s_val2;
  short s_val3;
  
  u_val1 = Building_Routine_0800CE74(arg_2);
  if (u_val1 <= arg_3) {
    arg_3 = math_modsi3(arg_3);
  }
  s_val2 = ((ushort)arg_3 & 3) * 0x28;
  if (arg_3 < 8) {
    s_val2 = s_val2 + 0xd8;
  }
  else {
    s_val2 = s_val2 + 0x1c8;
  }
  s_val3 = 0x90;
  if ((arg_3 & 7) < 4) {
    s_val3 = 0x68;
  }
  *arg_1 = s_val2;
  arg_1[1] = s_val3;
  return arg_1;
}

// =============================================================================
// Function: Tool_GetIconId @ 0x0800D158
// =============================================================================
u32 Tool_GetIconId(int arg_1,uint arg_2)

{
  uint u_val1;
  uint u_val2;
  int i_val3;
  undefined4 u_val4;
  
  u_val1 = Item_HasStarQuality();
  if ((((arg_2 < u_val1) && (u_val1 = (uint)*(char *)(arg_1 + 7 + arg_2), -1 < (int)u_val1)) &&
      (u_val2 = Building_Routine_0800CE74(arg_1), u_val1 < u_val2)) &&
     (i_val3 = FoodStack_AddAmount(arg_1 + u_val1 * 0x3c + 0x2c), i_val3 != 0)) {
    u_val4 = 0;
    u_val1 = Animal_Routine_0809B8D4();
    if ((0x14 < u_val1) || (u_val1 = Animal_Routine_0809B8BC(i_val3), 0x1d < u_val1)) {
      u_val4 = 1;
    }
  }
  else {
    u_val4 = 0;
  }
  return u_val4;
}

// =============================================================================
// Function: Tool_GetDesc @ 0x0800D1B4
// =============================================================================
u32 Tool_GetDesc(int arg_1,uint arg_2)

{
  uint u_val1;
  int i_val2;
  
  u_val1 = Item_HasStarQuality();
  if (arg_2 < u_val1) {
    i_val2 = (int)*(char *)(arg_1 + 7 + arg_2);
  }
  else {
    i_val2 = -1;
  }
  return i_val2;
}

// =============================================================================
// Function: ToolStack_Construct @ 0x0800D1D8
// =============================================================================
u32 ToolStack_Construct(undefined4 *arg_1)

{
  undefined4 stack_val_c;
  
  Tool_CalculateStaminaCost(&stack_val_c);
  stack_val_c = CONCAT22(stack_val_c._2_2_,(short)stack_val_c + 0x20);
  *arg_1 = stack_val_c;
  return arg_1;
}

// =============================================================================
// Function: ToolStack_GetTool @ 0x0800D214
// =============================================================================
void ToolStack_GetTool(byte *arg_1)

{
  byte b_flag1;
  
  b_flag1 = *arg_1;
  if ((b_flag1 & 1) == 0) {
    *arg_1 = b_flag1 & 0xfe | 1U - (char)((int)((uint)b_flag1 << 0x1f) >> 0x1f) & 1;
  }
  return;
}

// =============================================================================
// Function: ToolStack_IsEmpty @ 0x0800D23C
// =============================================================================
void ToolStack_IsEmpty(ushort *arg_1,int arg_2)

{
  uint *p_uint1;
  uint stack_val_14;
  uint stack_val_10;
  
  stack_val_14 = 0x3E7;
  stack_val_10 = ((*arg_1 & 0x7ff) >> 1) + arg_2;
  p_uint1 = &stack_val_14;
  if (stack_val_10 < 0x3E7) {
    p_uint1 = &stack_val_10;
  }
  *arg_1 = (ushort)0xFFFFF801 & *arg_1 | (ushort)((*p_uint1 & 0x3FF) << 1);
  return;
}

// =============================================================================
// Function: ToolStack_GetAmount @ 0x0800D280
// =============================================================================
void ToolStack_GetAmount(ushort *arg_1,uint arg_2)

{
  ushort u_val1;
  uint u_val2;
  
  u_val1 = *arg_1;
  u_val2 = (u_val1 & 0x7ff) >> 1;
  if (arg_2 < u_val2) {
    *arg_1 = (ushort)0xFFFFF801 & u_val1 | (ushort)((u_val2 - arg_2 & 0x3FF) << 1);
  }
  else {
    *arg_1 = (ushort)0xFFFFF801 & u_val1;
  }
  return;
}

// =============================================================================
// Function: ToolStack_AddAmount @ 0x0800D2BC
// =============================================================================
void ToolStack_AddAmount(uint *arg_1,uint arg_2)

{
  uint u_val1;
  uint u_val2;
  
  u_val1 = Building_Routine_0800CE74();
  if (arg_2 < u_val1) {
    u_val1 = (*arg_1 & 0x1fffffff) >> 0xd;
    u_val2 = 1 << (arg_2 & 0xff);
    if ((u_val1 & u_val2) == 0) {
      *arg_1 = 0xE0001FFF & *arg_1 | ((u_val1 | u_val2) & 0xFFFF) << 0xd;
    }
  }
  return;
}

// =============================================================================
// Function: ToolStack_SubtractAmount @ 0x0800D2FC
// =============================================================================
void ToolStack_SubtractAmount(uint *arg_1,uint arg_2)

{
  uint u_val1;
  uint u_val2;
  
  u_val1 = Building_Routine_0800CE74();
  if (arg_2 < u_val1) {
    u_val1 = (*arg_1 & 0x1fffffff) >> 0xd;
    u_val2 = 1 << (arg_2 & 0xff);
    if ((u_val1 & u_val2) != 0) {
      *arg_1 = 0xE0001FFF & *arg_1 | (u_val1 & ~u_val2) << 0xd;
    }
  }
  return;
}

// =============================================================================
// Function: Food_Construct @ 0x0800D334
// =============================================================================
void Food_Construct(int arg_1,uint arg_2)

{
  uint u_val1;
  uint u_val2;
  
  u_val1 = Item_HasStarQuality();
  if (arg_2 < u_val1) {
    u_val1 = (*(byte *)(arg_1 + 3) & 0x7f) >> 5;
    u_val2 = 1 << (arg_2 & 0xff);
    if ((u_val1 & u_val2) == 0) {
      *(byte *)(arg_1 + 3) = *(byte *)(arg_1 + 3) & 0x9f | (byte)((u_val1 | u_val2 & 3) << 5);
    }
  }
  return;
}

// =============================================================================
// Function: Food_GetId @ 0x0800D36C
// =============================================================================
void Food_GetId(int arg_1,uint arg_2)

{
  uint u_val1;
  uint u_val2;
  
  u_val1 = Item_HasStarQuality();
  if (arg_2 < u_val1) {
    u_val1 = (*(byte *)(arg_1 + 3) & 0x7f) >> 5;
    u_val2 = 1 << (arg_2 & 0xff);
    if ((u_val1 & u_val2) != 0) {
      *(byte *)(arg_1 + 3) = *(byte *)(arg_1 + 3) & 0x9f | (byte)((u_val1 & ~u_val2) << 5);
    }
  }
  return;
}

// =============================================================================
// Function: Food_GetName @ 0x0800D3A0
// =============================================================================
void Food_GetName(int arg_1)

{
  
  if (-1 < (int)((uint)*(byte *)(arg_1 + 1) * 0x10000000)) {
    *(byte *)(arg_1 + 1) = *(byte *)(arg_1 + 1) | 8;
  }
  return;
}

// =============================================================================
// Function: Food_GetIconId @ 0x0800D3B8
// =============================================================================
void Food_GetIconId(int arg_1)

{
  
  if (-1 < (int)((uint)*(byte *)(arg_1 + 1) * 0x8000000)) {
    *(byte *)(arg_1 + 1) = *(byte *)(arg_1 + 1) | 0x10;
  }
  return;
}

// =============================================================================
// Function: Food_GetStaminaGain @ 0x0800D3D0
// =============================================================================
u32 Food_GetStaminaGain(int arg_1,uint arg_2)

{
  uint u_val1;
  undefined4 u_val2;
  
  u_val1 = Building_Routine_0800CE74();
  if (arg_2 < u_val1) {
    u_val2 = Article_GetName(arg_1 + arg_2 * 0x3c + 0x2c);
  }
  else {
    u_val2 = 0;
  }
  return u_val2;
}

// =============================================================================
// Function: Food_GetFatigueGain @ 0x0800D3F8
// =============================================================================
u32 Food_GetFatigueGain(int arg_1,uint arg_2)

{
  uint u_val1;
  undefined4 u_val2;
  
  u_val1 = Building_Routine_0800CE74();
  if (arg_2 < u_val1) {
    u_val2 = Article_GetIconId(arg_1 + arg_2 * 0x3c + 0x2c);
  }
  else {
    u_val2 = 0;
  }
  return u_val2;
}

// =============================================================================
// Function: Food_GetStaminaBonus @ 0x0800D420
// =============================================================================
u32 Food_GetStaminaBonus(int arg_1,uint arg_2)

{
  uint u_val1;
  undefined4 u_val2;
  
  u_val1 = Building_Routine_0800CE74();
  if (arg_2 < u_val1) {
    u_val2 = Article_GetId(arg_1 + arg_2 * 0x3c + 0x2c);
  }
  else {
    u_val2 = 0;
  }
  return u_val2;
}

// =============================================================================
// Function: Food_GetFatigueBonus @ 0x0800D448
// =============================================================================
u32 Food_GetFatigueBonus(int arg_1,undefined4 arg_2)

{
  char c_char1;
  int i_val2;
  
  i_val2 = 0;
  while (i_val2 = Building_Routine_0800CF88(arg_1,i_val2), -1 < i_val2) {
    c_char1 = Article_CanBeDiscarded(arg_1 + i_val2 * 0x3c + 0x2c,arg_2);
    if (c_char1 != '\0') goto LAB_0800d47e;
    i_val2 = i_val2 + 1;
  }
  i_val2 = -1;
LAB_0800d47e:
  return i_val2;
}

// =============================================================================
// Function: Food_IsDrink @ 0x0800D484
// =============================================================================
u32 Food_IsDrink(int arg_1,undefined4 arg_2)

{
  char c_char1;
  int i_val2;
  
  i_val2 = 0;
  while (i_val2 = Building_Routine_0800CF88(arg_1,i_val2), -1 < i_val2) {
    c_char1 = Article_GetDesc(arg_1 + i_val2 * 0x3c + 0x2c,arg_2);
    if (c_char1 != '\0') goto LAB_0800d4ba;
    i_val2 = i_val2 + 1;
  }
  i_val2 = -1;
LAB_0800d4ba:
  return i_val2;
}

// =============================================================================
// Function: Food_GetDesc @ 0x0800D4C0
// =============================================================================
void Food_GetDesc(int arg_1,int arg_2)

{
  
  ArticleStack_Construct(arg_1 + arg_2 * 0x3c + 0x2c);
  return;
}

// =============================================================================
// Function: Food_AddBonuses @ 0x0800D4D4
// =============================================================================
void Food_AddBonuses(int arg_1,undefined4 arg_2)

{
  int i_val1;
  uint u_val2;
  int i_val3;
  undefined4 u_val4;
  
  i_val1 = Food_GetStaminaBonus();
  if (i_val1 != 0) {
    u_val2 = Animal_Routine_0809B220();
    i_val3 = Food_GetStaminaGain(arg_1,arg_2);
    if (i_val3 == 0) {
      if ((*(uint *)(arg_1 + 4) & 0xffffff) >> 0xe < u_val2) {
        *(uint *)(arg_1 + 4) =
             0xFF003FFF & *(uint *)(arg_1 + 4) | (u_val2 & 0x3FF) << 0xe;
        u_val4 = Animal_Routine_0809B1F4(i_val1);
        u_val2 = gba_strlen();
        if (0xc < u_val2) {
          u_val2 = 0xc;
        }
        gba_memcpy(arg_1 + 0x1c,u_val4,u_val2);
        *(undefined1 *)(arg_1 + 0x1c + u_val2) = 0;
      }
    }
    else if ((*(ushort *)(arg_1 + 4) & 0x3fff) >> 4 < u_val2) {
      *(ushort *)(arg_1 + 4) =
           (ushort)0xFFFFC00F & *(ushort *)(arg_1 + 4) | (ushort)((u_val2 & 0x3FF) << 4)
      ;
      u_val4 = Animal_Routine_0809B1F4(i_val1);
      u_val2 = gba_strlen();
      if (0xc < u_val2) {
        u_val2 = 0xc;
      }
      gba_memcpy(arg_1 + 0xc,u_val4,u_val2);
      *(undefined1 *)(arg_1 + 0xc + u_val2) = 0;
    }
    Food_GetDesc(arg_1,arg_2);
  }
  return;
}

// =============================================================================
// Function: FoodStack_Construct @ 0x0800D5B0
// =============================================================================
void FoodStack_Construct(uint *arg_1)

{
  ushort u_val1;
  ushort u_val2;
  uint u_val3;
  uint u_val4;
  uint u_val5;
  uint u_val6;
  char c_char7;
  uint u_val8;
  int i_val9;
  int i_val10;
  uint u_val11;
  uint u_val12;
  int i_val13;
  uint loop_i;
  uint *p_uint15;
  int i_val16;
  ushort temp_buf_40 [3];
  undefined1 stack_val_3a;
  undefined2 stack_val_38;
  undefined2 stack_val_36;
  ushort stack_val_34;
  uint stack_val_30;
  undefined4 stack_val_2c;
  uint stack_val_28;
  uint stack_val_24;
  
  u_val6 = 0xFFFF;
  u_val5 = 0x00FF00FF;
  u_val4 = 0x0F0F0F0F;
  u_val3 = 0x33333333;
  loop_i = 0x55555555;
  u_val12 = *arg_1;
  u_val8 = ((u_val12 & 0x1fffffff) >> 0xd & 0x55555555) +
          ((u_val12 & 0x1fffffff) >> 0xe & 0x55555555);
  u_val8 = (u_val8 & 0x33333333) + (u_val8 >> 2 & 0x33333333);
  u_val8 = (u_val8 & 0x0F0F0F0F) + (u_val8 >> 4 & 0x0F0F0F0F);
  u_val8 = (u_val8 & 0x00FF00FF) + (u_val8 >> 8 & 0x00FF00FF);
  u_val11 = u_val8 & 0xFFFF;
  u_val8 = u_val8 >> 0x10 & 0xFFFF;
  *arg_1 = u_val12 & 0xE0001FFF;
  i_val16 = u_val11 + u_val8 +
           (((*(byte *)((int)arg_1 + 3) & 0x7f) >> 5 & loop_i) +
            ((*(byte *)((int)arg_1 + 3) & 0x7f) >> 6 & loop_i) & u_val3 & u_val4 & u_val5 & u_val6);
  stack_val_28 = Item_HasStarQuality(arg_1);
  loop_i = 0;
  if (stack_val_28 != 0) {
    do {
      i_val9 = (int)*(char *)((int)arg_1 + loop_i + 7);
      if (((-1 < i_val9) && (i_val9 = Article_GetId(arg_1 + i_val9 * 0xf + 0xb), i_val9 != 0)) &&
         (c_char7 = Animal_Routine_0809B8B0(), c_char7 != '\0')) {
        if (((*(byte *)((int)arg_1 + 3) & 0x7f) >> 5 & 1 << (loop_i & 0xff)) != 0) {
          i_val16 = i_val16 + -1;
          Animal_Routine_0809B8F0(i_val9);
        }
        Tool_CalculateStaminaCost(&stack_val_30,arg_1,loop_i);
        stack_val_2c = stack_val_30;
        u_val3 = stack_val_2c;
        stack_val_2c._0_2_ = (ushort)stack_val_30;
        stack_val_2c._2_2_ = (ushort)(stack_val_30 >> 0x10);
        u_val2 = (ushort)0xFFFFFC00;
        u_val1 = u_val2 & stack_val_38;
        stack_val_38._1_1_ = (byte)(u_val1 >> 8);
        stack_val_38 = CONCAT11(stack_val_38._1_1_ & 3 | (byte)((stack_val_30 & 0x3f) << 2),(char)u_val1) |
                    0x25;
        u_val1 = u_val2 & stack_val_36 | (ushort)stack_val_2c >> 6 & (ushort)0x3FF;
        stack_val_36._1_1_ = (byte)(u_val1 >> 8);
        stack_val_36 = CONCAT11(stack_val_36._1_1_ & 3 | (byte)((stack_val_2c._2_2_ & 0x3f) << 2),(char)u_val1
                            );
        stack_val_34 = u_val2 & stack_val_34 | stack_val_2c._2_2_ >> 6 & (ushort)0x3FF;
        stack_val_2c = u_val3;
        gba_memcpy(temp_buf_40,&stack_val_38,6);
        stack_val_3a = 3;
        Animal_Routine_0809B124(i_val9,temp_buf_40);
      }
      loop_i = loop_i + 1;
    } while (loop_i < stack_val_28);
  }
  *(byte *)((int)arg_1 + 3) = *(byte *)((int)arg_1 + 3) & 0x9f;
  stack_val_24 = Building_Routine_0800CE74(arg_1);
  loop_i = 0;
  if (stack_val_24 != 0) {
    p_uint15 = arg_1 + 0xb;
    do {
      c_char7 = Item_IsValid(p_uint15);
      if (c_char7 == '\0') {
        i_val9 = Article_GetName(p_uint15);
        i_val10 = Article_GetIconId(p_uint15);
        if ((i_val9 != 0) || (i_val10 != 0)) {
          i_val13 = i_val9;
          if (i_val9 == 0) {
            i_val13 = i_val10;
          }
          if ((*(char *)((int)arg_1 + 3) < '\0') && (loop_i == ((byte)arg_1[1] & 0xf))) {
            Animal_Routine_0809B8F0(i_val13);
          }
          else {
            c_char7 = Animal_Routine_0809B4FC(i_val13);
            if ((c_char7 == '\0') &&
               (((c_char7 = Animal_Routine_0809B8B0(i_val13), c_char7 == '\0' && (i_val16 != 0)) &&
                (Actor_CopyLocation2(temp_buf_40,i_val13), (temp_buf_40[0] & 0x3ff) == 0x25)))) {
              i_val16 = i_val16 + -1;
              Animal_Routine_0809B8F0(i_val13);
            }
          }
          if (i_val9 == 0) {
            Animal_Routine_0809BFB4(i_val10);
          }
          else {
            Animal_Routine_0809BE74(i_val9);
          }
        }
      }
      p_uint15 = p_uint15 + 0xf;
      loop_i = loop_i + 1;
    } while (loop_i < stack_val_24);
  }
  return;
}

// =============================================================================
// Function: FoodStack_GetFood @ 0x0800D80C
// =============================================================================
void FoodStack_GetFood(int arg_1,uint arg_2)

{
  char c_char1;
  uint u_val2;
  
  u_val2 = Building_Routine_0800CE74();
  if (u_val2 <= arg_2) {
    arg_2 = math_modsi3(arg_2);
  }
  c_char1 = Item_IsValid(arg_1 + arg_2 * 0x3c + 0x2c);
  if (c_char1 == '\0') {
    *(byte *)(arg_1 + 3) = *(byte *)(arg_1 + 3) | 0x80;
    *(byte *)(arg_1 + 4) = *(byte *)(arg_1 + 4) & 0xf0 | (byte)arg_2 & 0xf;
  }
  return;
}

// =============================================================================
// Function: FoodStack_IsEmpty @ 0x0800D864
// =============================================================================
void FoodStack_IsEmpty(int arg_1,uint arg_2,uint arg_3)

{
  char c_char1;
  uint u_val2;
  int i_val3;
  
  u_val2 = Item_HasStarQuality();
  if ((((arg_2 < u_val2) && (u_val2 = Building_Routine_0800CE74(arg_1), arg_3 < u_val2)) &&
      (i_val3 = Article_GetId(arg_1 + arg_3 * 0x3c + 0x2c), i_val3 != 0)) &&
     (c_char1 = Animal_Routine_0809B8B0(), c_char1 != '\0')) {
    *(char *)(arg_1 + 7 + arg_2) = (char)arg_3;
  }
  return;
}

// =============================================================================
// Function: FoodStack_GetAmount @ 0x0800D8A8
// =============================================================================
void FoodStack_GetAmount(int arg_1,int arg_2)

{
  ushort u_val1;
  ushort u_val2;
  char c_char3;
  char *p_char4;
  int i_val5;
  uint u_val6;
  undefined4 u_val7;
  int i_val8;
  undefined1 stack_buf_70 [6];
  undefined1 stack_val_6a;
  undefined2 stack_val_68;
  undefined2 stack_val_66;
  ushort stack_val_64;
  undefined1 stack_buf_60 [56];
  uint stack_val_28;
  undefined4 stack_val_24;
  
  c_char3 = Tool_GetIconId();
  if (c_char3 != '\0') {
    p_char4 = (char *)(arg_1 + 7 + arg_2);
    c_char3 = *p_char4;
    *p_char4 = -1;
    ToolStack_Construct(&stack_val_28,arg_1,arg_2);
    stack_val_24 = stack_val_28;
    u_val6 = stack_val_24;
    stack_val_24._0_2_ = (ushort)stack_val_28;
    stack_val_24._2_2_ = (ushort)(stack_val_28 >> 0x10);
    u_val2 = (ushort)0xFFFFFC00;
    u_val1 = u_val2 & stack_val_68;
    stack_val_68._1_1_ = (byte)(u_val1 >> 8);
    stack_val_68 = CONCAT11(stack_val_68._1_1_ & 3 | (byte)((stack_val_28 & 0x3f) << 2),(char)u_val1) | 0x25;
    u_val1 = u_val2 & stack_val_66 | (ushort)stack_val_24 >> 6;
    stack_val_66._1_1_ = (byte)(u_val1 >> 8);
    stack_val_66 = CONCAT11(stack_val_66._1_1_ & 3 | (byte)((stack_val_24._2_2_ & 0x3f) << 2),(char)u_val1);
    stack_val_64 = u_val2 & stack_val_64 | stack_val_24._2_2_ >> 6;
    stack_val_24 = u_val6;
    gba_memcpy(stack_buf_70,&stack_val_68,6);
    stack_val_6a = 2;
    i_val8 = arg_1 + c_char3 * 0x3c + 0x2c;
    i_val5 = Article_GetName(i_val8);
    if (i_val5 != 0) {
      Animal_Routine_0809B91C();
      Animal_Routine_0809BD70(stack_buf_60,stack_buf_70,0,0);
      u_val6 = Animal_Routine_0809B228(i_val5);
      if (1 < u_val6 >> 1) {
        u_val7 = math_rand();
        u_val7 = math_modsi3(u_val7,u_val6 >> 1);
        NPC_AddFriendship(stack_buf_60,u_val7);
      }
      u_val7 = Food_GetFatigueBonus(arg_1,stack_buf_60);
      goto LAB_0800d9ec;
    }
    i_val5 = Article_GetIconId(i_val8);
    if (i_val5 != 0) {
      Animal_Routine_0809B91C();
      Animal_Routine_0809BEBC(&stack_val_68,stack_buf_70,0,0);
      u_val6 = Animal_Routine_0809B228(i_val5);
      if (1 < u_val6 >> 1) {
        u_val7 = math_rand();
        u_val7 = math_modsi3(u_val7,u_val6 >> 1);
        NPC_AddFriendship(&stack_val_68,u_val7);
      }
      u_val7 = Food_IsDrink(arg_1,&stack_val_68);
      goto LAB_0800d9ec;
    }
  }
  u_val7 = 0xffffffff;
LAB_0800d9ec:
  return u_val7;
}

// =============================================================================
// Function: FoodStack_AddAmount @ 0x0800DA14
// =============================================================================
u32 FoodStack_AddAmount(byte *arg_1)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)0x0;
  if ((*arg_1 & 1) != 0) {
    pbVar1 = arg_1 + 4;
  }
  return pbVar1;
}

// =============================================================================
// Function: FoodStack_SubtractAmount @ 0x0800DA2C
// =============================================================================
u32 FoodStack_SubtractAmount(byte *arg_1)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)0x0;
  if (((*arg_1 & 1) != 0) && ((int)((uint)*arg_1 * 0x40000000) < 0)) {
    pbVar1 = arg_1 + 4;
  }
  return pbVar1;
}

// =============================================================================
// Function: Article_Construct @ 0x0800DA48
// =============================================================================
u32 Article_Construct(byte *arg_1)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)0x0;
  if (((*arg_1 & 1) != 0) && (-1 < (int)((uint)*arg_1 * 0x40000000))) {
    pbVar1 = arg_1 + 4;
  }
  return pbVar1;
}

// =============================================================================
// Function: Article_GetId @ 0x0800DA64
// =============================================================================
u32 Article_GetId(byte *arg_1)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)0x0;
  if ((*arg_1 & 1) != 0) {
    pbVar1 = arg_1 + 4;
  }
  return pbVar1;
}

// =============================================================================
// Function: Article_GetName @ 0x0800DA7C
// =============================================================================
u32 Article_GetName(byte *arg_1)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)0x0;
  if (((*arg_1 & 1) != 0) && ((int)((uint)*arg_1 * 0x40000000) < 0)) {
    pbVar1 = arg_1 + 4;
  }
  return pbVar1;
}

// =============================================================================
// Function: Article_GetIconId @ 0x0800DA98
// =============================================================================
u32 Article_GetIconId(byte *arg_1)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)0x0;
  if (((*arg_1 & 1) != 0) && (-1 < (int)((uint)*arg_1 * 0x40000000))) {
    pbVar1 = arg_1 + 4;
  }
  return pbVar1;
}

// =============================================================================
// Function: Article_CanBeDiscarded @ 0x0800DAB4
// =============================================================================
u32 Article_CanBeDiscarded(byte *arg_1)

{
  undefined4 u_val1;
  
  if ((*arg_1 & 1) == 0) {
    if (arg_1 != (byte *)0xfffffffc) {
      VTable_Routine_080D7BC4();
    }
    *arg_1 = *arg_1 | 3;
    u_val1 = 1;
  }
  else {
    u_val1 = 0;
  }
  return u_val1;
}

// =============================================================================
// Function: Article_GetDesc @ 0x0800DAE4
// =============================================================================
u32 Article_GetDesc(byte *arg_1)

{
  undefined4 u_val1;
  
  if ((*arg_1 & 1) == 0) {
    if (arg_1 != (byte *)0xfffffffc) {
      VTable_Routine_080D7B50();
    }
    u_val1 = 1;
    *arg_1 = *arg_1 & 0xfd | 1;
  }
  else {
    u_val1 = 0;
  }
  return u_val1;
}

// =============================================================================
// Function: ArticleStack_Construct @ 0x0800DB14
// =============================================================================
void ArticleStack_Construct(byte *arg_1)

{
  
  if ((*arg_1 & 1) != 0) {
    *arg_1 = *arg_1 & 0xfe;
  }
  return;
}

// =============================================================================
// Function: ArticleStack_GetArticle @ 0x0800DB34
// =============================================================================
u32 ArticleStack_GetArticle(byte *arg_1)

{
  undefined4 u_val1;
  
  u_val1 = gRomData_080E9620;
  if (*arg_1 < 0x51) {
    u_val1 = *(undefined4 *)((uint)*arg_1 * 0xc + gToolDefinitions);
  }
  return u_val1;
}

// =============================================================================
// Function: ArticleStack_IsEmpty @ 0x0800DB60
// =============================================================================
u32 ArticleStack_IsEmpty(byte *arg_1)

{
  uint u_val1;
  
  u_val1 = 0x1C9;
  if (*arg_1 < 0x51) {
    u_val1 = (uint)*(ushort *)((uint)*arg_1 * 0xc + gToolDefinitions + 4);
  }
  return u_val1;
}

// =============================================================================
// Function: ArticleStack_GetAmount @ 0x0800DB8C
// =============================================================================
u32 ArticleStack_GetAmount(byte *arg_1)

{
  int i_val1;
  
  i_val1 = gRomData_080E962C;
  if ((*arg_1 < 0x51) && (i_val1 = *(int *)((uint)*arg_1 * 0xc + gToolDefinitions + 8), i_val1 == 0))
  {
    i_val1 = gRomData_080E962C;
  }
  return i_val1;
}

// =============================================================================
// Function: ArticleStack_AddAmount @ 0x0800DBC8
// =============================================================================
u32 ArticleStack_AddAmount(int arg_1)

{
  
  Item_SetId(arg_1,0x51);
  *(undefined1 *)(arg_1 + 1) = 0;
  return arg_1;
}

// =============================================================================
// Function: ArticleStack_SubtractAmount @ 0x0800DBE0
// =============================================================================
u32 ArticleStack_SubtractAmount(undefined1 *arg_1,undefined1 arg_2,uint arg_3)

{
  undefined1 u_val1;
  uint *p_uint2;
  uint stack_val_10;
  uint stack_val_c;
  
  stack_val_c = arg_3;
  *arg_1 = arg_2;
  if (arg_3 == 0) {
    u_val1 = 1;
  }
  else {
    stack_val_10 = 99;
    p_uint2 = &stack_val_10;
    if (arg_3 < 99) {
      p_uint2 = &stack_val_c;
    }
    u_val1 = (undefined1)*p_uint2;
  }
  arg_1[1] = u_val1;
  return arg_1;
}

// =============================================================================
// Function: Product_Construct @ 0x0800DC10
// =============================================================================
u32 Product_Construct(byte *arg_1)

{
  byte stack_bytes_8 [4];
  undefined4 stack_val_4;
  if (arg_1[1] == 0) {
    Item_SetId(stack_bytes_8,0x51);
  }
  else {
    stack_bytes_8[0] = *arg_1;
  }
  return CONCAT44(stack_val_4,(uint)stack_bytes_8[0]);
}

// =============================================================================
// Function: Product_GetId @ 0x0800DC34
// =============================================================================
u32 Product_GetId(int arg_1)

{
  
  return (uint)(*(char *)(arg_1 + 1) == '\0');
}

// =============================================================================
// Function: Product_GetPrice @ 0x0800DC48
// =============================================================================
u32 Product_GetPrice(int arg_1)

{
  uint u_val1;
  
  if (*(char *)(arg_1 + 1) == '\0') {
    u_val1 = 0;
  }
  else {
    u_val1 = (uint)*(byte *)(arg_1 + 1);
  }
  return u_val1;
}

// =============================================================================
// Function: Product_GetName @ 0x0800DC5C
// =============================================================================
void Product_GetName(int arg_1,int arg_2)

{
  uint *p_uint1;
  uint stack_val_10;
  uint stack_val_c;
  
  if (*(char *)(arg_1 + 1) != '\0') {
    stack_val_10 = 99;
    stack_val_c = (uint)*(byte *)(arg_1 + 1) + arg_2;
    p_uint1 = &stack_val_10;
    if (stack_val_c < 99) {
      p_uint1 = &stack_val_c;
    }
    *(char *)(arg_1 + 1) = (char)*p_uint1;
  }
  return;
}

// =============================================================================
// Function: Product_GetIconId @ 0x0800DC8C
// =============================================================================
void Product_GetIconId(int arg_1,uint arg_2)

{
  byte b_flag1;
  char c_char2;
  
  b_flag1 = *(byte *)(arg_1 + 1);
  if (b_flag1 != 0) {
    if (arg_2 < b_flag1) {
      c_char2 = b_flag1 - (char)arg_2;
    }
    else {
      c_char2 = '\0';
    }
    *(char *)(arg_1 + 1) = c_char2;
  }
  return;
}

// =============================================================================
// Function: Item_Routine_0800DCB8 @ 0x0800DCB8
// =============================================================================
u32 Item_Routine_0800DCB8(byte *item)

{
  undefined4 u_val1;
  
  u_val1 = gRomData_080E963C;
  if (*item < 0xab) {
    u_val1 = *(undefined4 *)((uint)*item * 0x10 + gCropFoodDefinitions);
  }
  return u_val1;
}

// =============================================================================
// Function: Item_Routine_0800DCE0 @ 0x0800DCE0
// =============================================================================
u32 Item_Routine_0800DCE0(byte *item)

{
  uint u_val1;
  
  if (*item < 0xab) {
    u_val1 = (uint)*(ushort *)((uint)*item * 0x10 + gCropFoodDefinitions + 8);
  }
  else {
    u_val1 = 0x1ac;
  }
  return u_val1;
}

// =============================================================================
// Function: Item_GetFoodStaminaEffect @ 0x0800DD08
// Description: Computes net stamina effect from Food/Crop entry +5 (signed byte)
// =============================================================================
undefined8 Item_GetFoodStaminaEffect(byte *food_item)

{
  int net_effect;
  
  if (*food_item < 0xab) {
    // Reads signed byte at FoodCropDef offset +0x05 (Stamina effect)
    net_effect = (int)*(char *)((uint)*food_item * 0x10 + gCropFoodDefinitions + 5) + (int)(char)food_item[1];
  }
  else {
    net_effect = -100;
  }
  return net_effect;
}

// =============================================================================
// Function: Item_GetFoodFatigueEffect @ 0x0800DD3C
// Description: Computes net fatigue effect from Food/Crop entry +6 (signed byte)
// =============================================================================
undefined8 Item_GetFoodFatigueEffect(byte *food_item)

{
  int net_effect;
  
  if (*food_item < 0xab) {
    // Reads signed byte at FoodCropDef offset +0x06 (Fatigue effect)
    net_effect = (int)*(char *)((uint)*food_item * 0x10 + gCropFoodDefinitions + 6) + (int)(char)food_item[2];
  }
  else {
    net_effect = 100;
  }
  return net_effect;
}

// =============================================================================
// Function: Item_Routine_0800DD6C @ 0x0800DD6C
// =============================================================================
u32 Item_Routine_0800DD6C(byte *item)

{
  int i_val1;
  
  if (*item < 0xab) {
    i_val1 = (int)(char)item[1];
  }
  else {
    i_val1 = -100;
  }
  return i_val1;
}

// =============================================================================
// Function: Item_Routine_0800DD8C @ 0x0800DD8C
// =============================================================================
u32 Item_Routine_0800DD8C(byte *item)

{
  int i_val1;
  
  if (*item < 0xab) {
    i_val1 = (int)(char)item[2];
  }
  else {
    i_val1 = 100;
  }
  return i_val1;
}

// =============================================================================
// Function: Item_GetFoodIsDrinkOrLiquid @ 0x0800DDAC
// =============================================================================
u32 Item_GetFoodIsDrinkOrLiquid(byte *item)

{
  uint u_val1;
  
  if (*item < 0xab) {
    u_val1 = *(byte *)((uint)*item * 0x10 + gCropFoodDefinitions + 4) & 1;
  }
  else {
    u_val1 = 0;
  }
  return u_val1;
}

// =============================================================================
// Function: Item_Routine_0800DDD4 @ 0x0800DDD4
// =============================================================================
u32 Item_Routine_0800DDD4(byte *item)

{
  int i_val1;
  
  i_val1 = gRomData_080E962C;
  if ((*item < 0xab) &&
     (i_val1 = *(int *)((uint)*item * 0x10 + gCropFoodDefinitions + 0xc), i_val1 == 0)) {
    i_val1 = gRomData_080E962C;
  }
  return i_val1;
}

// =============================================================================
// Function: Item_Routine_0800DE0C @ 0x0800DE0C
// =============================================================================
void Item_Routine_0800DE0C(byte *item,char slot,char quantity)

{
  int i_val1;
  int i_val2;
  
  if (*item < 0xab) {
    i_val1 = (int)(char)item[1] + (int)slot;
    i_val2 = -0x80;
    if ((-0x81 < i_val1) && (i_val2 = i_val1, 0x7f < i_val1)) {
      i_val2 = 0x7f;
    }
    item[1] = (byte)i_val2;
    i_val1 = (int)(char)item[2] + (int)quantity;
    i_val2 = -0x80;
    if ((-0x81 < i_val1) && (i_val2 = i_val1, 0x7f < i_val1)) {
      i_val2 = 0x7f;
    }
    item[2] = (byte)i_val2;
  }
  return;
}

// =============================================================================
// Function: Item_Routine_0800DE68 @ 0x0800DE68
// =============================================================================
u32 Item_Routine_0800DE68(int item)

{
  
  Item_SetIdAndClearQuality(item,0xab);
  *(undefined1 *)(item + 3) = 0;
  return item;
}

// =============================================================================
// Function: Item_Routine_0800DE80 @ 0x0800DE80
// =============================================================================
u32 Item_Routine_0800DE80(int item,undefined4 slot,uint quantity)

{
  undefined1 u_val1;
  uint *p_uint2;
  undefined4 stack_val_14;
  uint stack_val_10;
  uint stack_val_c;
  
  stack_val_14 = slot;
  stack_val_c = quantity;
  gba_memcpy(item,&stack_val_14,3);
  if (stack_val_c == 0) {
    u_val1 = 1;
  }
  else {
    stack_val_10 = 99;
    p_uint2 = &stack_val_10;
    if (stack_val_c < 99) {
      p_uint2 = &stack_val_c;
    }
    u_val1 = (undefined1)*p_uint2;
  }
  *(undefined1 *)(item + 3) = u_val1;
  return item;
}

// =============================================================================
// Function: Item_Routine_0800DEB8 @ 0x0800DEB8
// =============================================================================
u32 Item_Routine_0800DEB8(undefined4 item,int slot)

{
  
  if (*(char *)(slot + 3) == '\0') {
    Item_SetIdAndClearQuality(item,0xab);
  }
  else {
    gba_memcpy(item,slot,3);
  }
  return item;
}

// =============================================================================
// Function: Item_Routine_0800DEDC @ 0x0800DEDC
// =============================================================================
u32 Item_Routine_0800DEDC(int item)

{
  
  return (uint)(*(char *)(item + 3) == '\0');
}

// =============================================================================
// Function: Item_Routine_0800DEF0 @ 0x0800DEF0
// =============================================================================
u32 Item_Routine_0800DEF0(int item)

{
  uint u_val1;
  
  if (*(char *)(item + 3) == '\0') {
    u_val1 = 0;
  }
  else {
    u_val1 = (uint)*(byte *)(item + 3);
  }
  return u_val1;
}

// =============================================================================
// Function: Item_Routine_0800DF04 @ 0x0800DF04
// =============================================================================
void Item_Routine_0800DF04(int item,int slot)

{
  uint *p_uint1;
  uint stack_val_10;
  uint stack_val_c;
  
  if (*(char *)(item + 3) != '\0') {
    stack_val_10 = 99;
    stack_val_c = (uint)*(byte *)(item + 3) + slot;
    p_uint1 = &stack_val_10;
    if (stack_val_c < 99) {
      p_uint1 = &stack_val_c;
    }
    *(char *)(item + 3) = (char)*p_uint1;
  }
  return;
}

// =============================================================================
// Function: Item_Routine_0800DF34 @ 0x0800DF34
// =============================================================================
void Item_Routine_0800DF34(int item,uint slot)

{
  byte b_flag1;
  char c_char2;
  
  b_flag1 = *(byte *)(item + 3);
  if (b_flag1 != 0) {
    if (slot < b_flag1) {
      c_char2 = b_flag1 - (char)slot;
    }
    else {
      c_char2 = '\0';
    }
    *(char *)(item + 3) = c_char2;
  }
  return;
}

// =============================================================================
// Function: Item_Routine_0800DF58 @ 0x0800DF58
// =============================================================================
u32 Item_Routine_0800DF58(byte *item)

{
  undefined4 u_val1;
  
  u_val1 = gRomData_080E9648;
  if (*item < 0x5f) {
    u_val1 = *(undefined4 *)((uint)*item * 0xc + gMineralMiscDefinitions);
  }
  return u_val1;
}

// =============================================================================
// Function: Item_Routine_0800DF84 @ 0x0800DF84
// =============================================================================
u32 Item_Routine_0800DF84(byte *item)

{
  uint u_val1;
  
  u_val1 = 0x1C9;
  if (*item < 0x5f) {
    u_val1 = (uint)*(ushort *)((uint)*item * 0xc + gMineralMiscDefinitions + 4);
  }
  return u_val1;
}

// =============================================================================
// Function: Item_Routine_0800DFB0 @ 0x0800DFB0
// =============================================================================
u32 Item_Routine_0800DFB0(byte *item)

{
  byte b_flag1;
  undefined4 u_val2;
  
  b_flag1 = *item;
  if (b_flag1 < 0x40) {
    if ((b_flag1 < 0x3b) && ((0x27 < b_flag1 || (b_flag1 < 0x25)))) {
LAB_0800dfca:
      u_val2 = 1;
      goto LAB_0800dfd0;
    }
  }
  else if (b_flag1 != 0x5e) goto LAB_0800dfca;
  u_val2 = 0;
LAB_0800dfd0:
  return u_val2;
}

// =============================================================================
// Function: Item_Routine_0800DFD4 @ 0x0800DFD4
// =============================================================================
u32 Item_Routine_0800DFD4(byte *item)

{
  int i_val1;
  
  i_val1 = gRomData_080E962C;
  if ((*item < 0x5f) && (i_val1 = *(int *)((uint)*item * 0xc + gMineralMiscDefinitions + 8), i_val1 == 0))
  {
    i_val1 = gRomData_080E962C;
  }
  return i_val1;
}

// =============================================================================
// Function: Item_Routine_0800E010 @ 0x0800E010
// =============================================================================
u32 Item_Routine_0800E010(int item)

{
  
  Item_SetQuality(item,0x5f);
  *(undefined1 *)(item + 1) = 0;
  return item;
}

// =============================================================================
// Function: Item_Routine_0800E028 @ 0x0800E028
// =============================================================================
u32 Item_Routine_0800E028(undefined1 *item,undefined1 slot,uint quantity)

{
  undefined1 u_val1;
  uint *p_uint2;
  uint stack_val_10;
  uint stack_val_c;
  
  stack_val_c = quantity;
  *item = slot;
  if (quantity == 0) {
    u_val1 = 1;
  }
  else {
    stack_val_10 = 99;
    p_uint2 = &stack_val_10;
    if (quantity < 99) {
      p_uint2 = &stack_val_c;
    }
    u_val1 = (undefined1)*p_uint2;
  }
  item[1] = u_val1;
  return item;
}

// =============================================================================
// Function: Item_Routine_0800E058 @ 0x0800E058
// =============================================================================
u32 Item_Routine_0800E058(byte *item)

{
  byte stack_bytes_8 [4];
  undefined4 stack_val_4;
  if (item[1] == 0) {
    Item_SetQuality(stack_bytes_8,0x5f);
  }
  else {
    stack_bytes_8[0] = *item;
  }
  return CONCAT44(stack_val_4,(uint)stack_bytes_8[0]);
}

// =============================================================================
// Function: Item_Routine_0800E07C @ 0x0800E07C
// =============================================================================
u32 Item_Routine_0800E07C(int item)

{
  
  return (uint)(*(char *)(item + 1) == '\0');
}

// =============================================================================
// Function: Item_Routine_0800E090 @ 0x0800E090
// =============================================================================
u32 Item_Routine_0800E090(int item)

{
  uint u_val1;
  
  if (*(char *)(item + 1) == '\0') {
    u_val1 = 0;
  }
  else {
    u_val1 = (uint)*(byte *)(item + 1);
  }
  return u_val1;
}

// =============================================================================
// Function: Item_Routine_0800E0A4 @ 0x0800E0A4
// =============================================================================
void Item_Routine_0800E0A4(int item,int slot)

{
  uint *p_uint1;
  uint stack_val_10;
  uint stack_val_c;
  
  if (*(char *)(item + 1) != '\0') {
    stack_val_10 = 99;
    stack_val_c = (uint)*(byte *)(item + 1) + slot;
    p_uint1 = &stack_val_10;
    if (stack_val_c < 99) {
      p_uint1 = &stack_val_c;
    }
    *(char *)(item + 1) = (char)*p_uint1;
  }
  return;
}

// =============================================================================
// Function: Item_Routine_0800E0D4 @ 0x0800E0D4
// =============================================================================
void Item_Routine_0800E0D4(int item,uint slot)

{
  byte b_flag1;
  char c_char2;
  
  b_flag1 = *(byte *)(item + 1);
  if (b_flag1 != 0) {
    if (slot < b_flag1) {
      c_char2 = b_flag1 - (char)slot;
    }
    else {
      c_char2 = '\0';
    }
    *(char *)(item + 1) = c_char2;
  }
  return;
}

// =============================================================================
// Function: Item_Routine_0800E148 @ 0x0800E148
// =============================================================================
u32 Item_Routine_0800E148(undefined1 *item,undefined1 slot)

{
  uint u_val1;
  int *p_int2;
  int i_val3;
  undefined1 stack_buf_c [4];
  
  *item = 0x67;
  stack_buf_c[0] = slot;
  u_val1 = Item_GetQuality(stack_buf_c);
  i_val3 = 0;
  p_int2 = gRomData_080F0348;
  while ((-1 < *p_int2 * 0x10000 || (*(byte *)((int)p_int2 + 2) != u_val1))) {
    i_val3 = i_val3 + 1;
    if (0x66 < i_val3) goto LAB_0800e184;
    p_int2 = (int *)(i_val3 * 4 + gRomData_080F0348);
  }
  *item = (char)i_val3;
LAB_0800e184:
  return item;
}

// =============================================================================
// Function: Item_Routine_0800E198 @ 0x0800E198
// =============================================================================
void Item_Routine_0800E198(byte *item)

{
  ushort u_val1;
  
  if (*item < 0x67) {
    u_val1 = *(ushort *)((uint)*item * 4 + gRomData_080F0348) & 0x7fff;
  }
  else {
    u_val1 = 0;
  }
  return u_val1;
}

// =============================================================================
// Function: Item_Routine_0800E1C0 @ 0x0800E1C0
// =============================================================================
u32 Item_Routine_0800E1C0(byte *item)

{
  undefined4 u_val1;
  int *p_int2;
  undefined1 temp_coords [4];
  undefined1 stack_buf_c [4];
  
  u_val1 = gRomData_080E9658;
  if (*item < 0x67) {
    p_int2 = (int *)((uint)*item * 4 + gRomData_080F0348);
    if (*p_int2 * 0x10000 < 0) {
      Item_SetQuality(stack_buf_c,*(undefined1 *)((int)p_int2 + 2));
      u_val1 = Item_Routine_0800DF58(stack_buf_c);
    }
    else {
      Item_SetIdAndClearQuality(temp_coords,*(undefined1 *)((int)p_int2 + 2));
      u_val1 = Item_Routine_0800DCB8(temp_coords);
    }
  }
  return u_val1;
}

// =============================================================================
// Function: Item_Routine_0800E214 @ 0x0800E214
// =============================================================================
u32 Item_Routine_0800E214(byte *item)

{
  uint u_val1;
  int *p_int2;
  undefined1 temp_coords [4];
  undefined1 stack_buf_c [4];
  
  if (*item < 0x67) {
    p_int2 = (int *)((uint)*item * 4 + gRomData_080F0348);
    if (*p_int2 * 0x10000 < 0) {
      Item_SetQuality(stack_buf_c,*(undefined1 *)((int)p_int2 + 2));
      u_val1 = Item_Routine_0800DF84(stack_buf_c);
    }
    else {
      Item_SetIdAndClearQuality(temp_coords,*(undefined1 *)((int)p_int2 + 2));
      u_val1 = Item_Routine_0800DCE0(temp_coords);
    }
    u_val1 = u_val1 & 0xffff;
  }
  else {
    u_val1 = 0;
  }
  return u_val1;
}

// =============================================================================
// Function: Item_Routine_0800E268 @ 0x0800E268
// =============================================================================
u32 Item_Routine_0800E268(ushort *item)

{
  byte stack_bytes_8 [4];
  undefined4 stack_val_4;
  if ((*item & 3) == 0) {
    Item_SetId(stack_bytes_8,*item >> 2);
  }
  else {
    Item_SetId(stack_bytes_8,0x51);
  }
  return CONCAT44(stack_val_4,(uint)stack_bytes_8[0]);
}

// =============================================================================
// Function: Item_Routine_0800E290 @ 0x0800E290
// =============================================================================
u32 Item_Routine_0800E290(undefined4 item,ushort *slot)

{
  
  if ((*slot & 3) == 1) {
    Item_SetIdAndClearQuality(item,*slot >> 2);
  }
  else {
    Item_SetIdAndClearQuality(item,0xab);
  }
  return item;
}

// =============================================================================
// Function: Item_Routine_0800E2B8 @ 0x0800E2B8
// =============================================================================
u32 Item_Routine_0800E2B8(ushort *item)

{
  byte stack_bytes_8 [4];
  undefined4 stack_val_4;
  if ((*item & 3) == 2) {
    Item_SetQuality(stack_bytes_8,*item >> 2);
  }
  else {
    Item_SetQuality(stack_bytes_8,0x5f);
  }
  return CONCAT44(stack_val_4,(uint)stack_bytes_8[0]);
}

