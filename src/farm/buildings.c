// =============================================================================
// Harvest Moon: Friends of Mineral Town (GBA) - Decompiled Source
// Module: FURNITURE_AND_BUILDINGS (88 functions)
// Description: Farmhouse appliances (fridge, shelf, tool chest, record player), coop and barn
// =============================================================================

#include "../../include/farm/furniture.h"

// =============================================================================
// Function: ToolChest_GetItem @ 0x0800B814
// =============================================================================
u32 ToolChest_GetItem(undefined4 *arg_1,int arg_2,uint arg_3)

{
  char c_char1;
  int i_val2;
  undefined4 *p_uint3;
  uint *p_uint4;
  uint u_val5;
  undefined4 stack_val_2c;
  uint3 stack_val_28;
  uint stack_val_24;
  uint stack_val_20;
  uint stack_val_1c;
  
  if (arg_2 < 0xab) {
    p_uint3 = arg_1 + 0x40;
    for (; (arg_3 != 0 && (arg_1 != p_uint3)); arg_1 = arg_1 + 1) {
      stack_val_24 = arg_3;
      c_char1 = Item_Routine_0800DEDC(arg_1);
      if (c_char1 == '\0') {
        Item_GetToolExperienceRequired(&stack_val_2c,arg_1);
        i_val2 = Item_Routine_0800DCB4(&stack_val_2c);
        if (i_val2 == arg_2) {
          i_val2 = Item_Routine_0800DEF0(arg_1);
          stack_val_1c = 99U - i_val2;
          p_uint4 = &stack_val_24;
          if (99U - i_val2 < stack_val_24) {
            p_uint4 = &stack_val_1c;
          }
          u_val5 = *p_uint4;
          Item_Routine_0800DF04(arg_1,u_val5);
          stack_val_24 = stack_val_24 - u_val5;
        }
      }
      else {
        stack_val_20 = 99;
        p_uint4 = &stack_val_24;
        if (99 < stack_val_24) {
          p_uint4 = &stack_val_20;
        }
        u_val5 = *p_uint4;
        Item_SetIdAndClearQuality(&stack_val_28,arg_2);
        Item_GetToolTier(&stack_val_2c,(uint)stack_val_28,u_val5);
        *arg_1 = stack_val_2c;
        stack_val_24 = stack_val_24 - u_val5;
      }
      arg_3 = stack_val_24;
    }
  }
  return arg_3;
}

// =============================================================================
// Function: Building_Routine_0800B8E4 @ 0x0800B8E4
// =============================================================================
u32 Building_Routine_0800B8E4(int arg_1)

{
  int i_val1;
  int i_val2;
  
  i_val2 = 0x3f;
  i_val1 = arg_1;
  do {
    Item_Routine_0800E010(i_val1);
    i_val1 = i_val1 + 2;
    i_val2 = i_val2 + -1;
  } while (i_val2 != -1);
  return arg_1;
}

// =============================================================================
// Function: Fridge_GetItem @ 0x0800B910
// =============================================================================
u32 Fridge_GetItem(int arg_1,int arg_2)

{
  char c_char1;
  int i_val2;
  int i_val3;
  int i_val4;
  undefined1 stack_buf_1c [4];
  
  i_val3 = 0;
  i_val4 = arg_1 + 0x80;
  for (; arg_1 != i_val4; arg_1 = arg_1 + 2) {
    c_char1 = Item_Routine_0800E07C(arg_1);
    if (c_char1 == '\0') {
      stack_buf_1c[0] = Item_Routine_0800E058(arg_1);
      i_val2 = Item_GetQuality(stack_buf_1c);
      if (i_val2 == arg_2) {
        i_val2 = Item_Routine_0800E090(arg_1);
        i_val3 = (i_val3 + 99) - i_val2;
      }
    }
    else {
      i_val3 = i_val3 + 99;
    }
  }
  return i_val3;
}

// =============================================================================
// Function: Building_Routine_0800B974 @ 0x0800B974
// =============================================================================
u32 Building_Routine_0800B974(int arg_1,int arg_2)

{
  char c_char1;
  int i_val2;
  int i_val3;
  int i_val4;
  undefined1 stack_buf_1c [4];
  
  i_val4 = 0;
  i_val3 = arg_1 + 0x80;
  for (; arg_1 != i_val3; arg_1 = arg_1 + 2) {
    c_char1 = Item_Routine_0800E07C(arg_1);
    if (c_char1 == '\0') {
      stack_buf_1c[0] = Item_Routine_0800E058(arg_1);
      i_val2 = Item_GetQuality(stack_buf_1c);
      if (i_val2 == arg_2) {
        i_val2 = Item_Routine_0800E090(arg_1);
        i_val4 = i_val4 + i_val2;
      }
    }
  }
  return i_val4;
}

// =============================================================================
// Function: Building_Routine_0800B9D0 @ 0x0800B9D0
// =============================================================================
u32 Building_Routine_0800B9D0(int arg_1)

{
  char c_char1;
  int i_val2;
  int i_val3;
  
  i_val3 = 0;
  i_val2 = arg_1 + 0x80;
  for (; arg_1 != i_val2; arg_1 = arg_1 + 2) {
    c_char1 = Item_Routine_0800E07C(arg_1);
    if (c_char1 != '\0') goto LAB_0800b9fa;
    i_val3 = i_val3 + 1;
  }
  i_val3 = -1;
LAB_0800b9fa:
  return i_val3;
}

// =============================================================================
// Function: Shelf_Init @ 0x0800BA00
// =============================================================================
u32 Shelf_Init(int arg_1)

{
  char c_char1;
  int i_val2;
  int stack_val_c;
  
  i_val2 = 0x3f;
  for (stack_val_c = arg_1 + 0x80; stack_val_c != arg_1; stack_val_c = stack_val_c + -2) {
    c_char1 = Item_Routine_0800E07C(stack_val_c + -2);
    if (c_char1 != '\0') goto LAB_0800ba3a;
    i_val2 = i_val2 + -1;
  }
  i_val2 = -1;
LAB_0800ba3a:
  return i_val2;
}

// =============================================================================
// Function: Shelf_GetItem @ 0x0800BA44
// =============================================================================
u32 Shelf_GetItem(int arg_1,int arg_2)

{
  char c_char1;
  int i_val2;
  int i_val3;
  int i_val4;
  undefined1 stack_buf_1c [4];
  
  i_val4 = 0;
  i_val3 = arg_1 + 0x80;
  for (; arg_1 != i_val3; arg_1 = arg_1 + 2) {
    c_char1 = Item_Routine_0800E07C(arg_1);
    if (c_char1 == '\0') {
      stack_buf_1c[0] = Item_Routine_0800E058(arg_1);
      i_val2 = Item_GetQuality(stack_buf_1c);
      if (i_val2 == arg_2) goto LAB_0800ba92;
    }
    i_val4 = i_val4 + 1;
  }
  i_val4 = -1;
LAB_0800ba92:
  return i_val4;
}

// =============================================================================
// Function: Building_Routine_0800BAA8 @ 0x0800BAA8
// =============================================================================
void Building_Routine_0800BAA8(int arg_1,int arg_2,uint arg_3)

{
  char c_char1;
  int i_val2;
  uint u_val3;
  uint *p_uint4;
  int i_val5;
  undefined1 temp_buf_28 [4];
  uint stack_val_24;
  uint stack_val_20;
  undefined1 stack_val_1c;
  undefined1 stack_buf_1b [3];
  uint stack_val_18;
  
  stack_val_24 = arg_3;
  if (arg_2 < 0x5f) {
    i_val5 = arg_1 + 0x80;
    for (; (stack_val_24 != 0 && (arg_1 != i_val5)); arg_1 = arg_1 + 2) {
      c_char1 = Item_Routine_0800E07C(arg_1);
      if (c_char1 == '\0') {
        stack_buf_1b[0] = Item_Routine_0800E058(arg_1);
        i_val2 = Item_GetQuality(stack_buf_1b);
        if (i_val2 == arg_2) {
          i_val2 = Item_Routine_0800E090(arg_1);
          stack_val_18 = 99U - i_val2;
          p_uint4 = &stack_val_24;
          if (99U - i_val2 < stack_val_24) {
            p_uint4 = &stack_val_18;
          }
          u_val3 = *p_uint4;
          Item_Routine_0800E0A4(arg_1,u_val3);
          goto LAB_0800bb46;
        }
      }
      else {
        stack_val_20 = 99;
        p_uint4 = &stack_val_24;
        if (99 < stack_val_24) {
          p_uint4 = &stack_val_20;
        }
        u_val3 = *p_uint4;
        Item_SetQuality(&stack_val_1c,arg_2);
        Item_Routine_0800E028(temp_buf_28,stack_val_1c,u_val3);
        gba_memcpy(arg_1,temp_buf_28,2);
LAB_0800bb46:
        stack_val_24 = stack_val_24 - u_val3;
      }
    }
  }
  return stack_val_24;
}

// =============================================================================
// Function: RecordPlayer_PlayTrack @ 0x0800BB7C
// =============================================================================
u32 RecordPlayer_PlayTrack(uint *arg_1)

{
  char c_char1;
  uint u_val2;
  
  c_char1 = Building_Routine_0800BB74();
  if (c_char1 == '\0') {
    u_val2 = 199;
  }
  else {
    u_val2 = (uint)*(byte *)(((*arg_1 & 0x1f) >> 1) + gRomData_080E9605);
  }
  return u_val2;
}

// =============================================================================
// Function: Building_Routine_0800BBA4 @ 0x0800BBA4
// =============================================================================
u32 Building_Routine_0800BBA4(undefined4 arg_1,uint *arg_2)

{
  char c_char1;
  undefined1 temp_coords [4];
  
  c_char1 = Building_Routine_0800BB74(arg_2);
  if (c_char1 == '\0') {
    Item_Routine_0800E010(arg_1);
  }
  else {
    *(byte *)arg_2 = (byte)*arg_2 & 0xfe;
    Item_SetQuality(temp_coords,((*arg_2 & 0x1f) >> 1) + 0x40);
    Item_Routine_0800E028(arg_1,temp_coords[0],1);
  }
  return arg_1;
}

// =============================================================================
// Function: Building_Routine_0800BBF0 @ 0x0800BBF0
// =============================================================================
u32 Building_Routine_0800BBF0(undefined4 arg_1,uint *arg_2,undefined4 arg_3)

{
  char c_char1;
  int i_val2;
  uint u_val3;
  undefined1 temp_buf_18 [4];
  
  i_val2 = Item_GetQuality(arg_3);
  if ((i_val2 < 0x4f) && (0x3f < i_val2)) {
    *(byte *)arg_2 = (byte)*arg_2 | 1;
    u_val3 = *arg_2;
    c_char1 = Item_GetQuality(arg_3);
    *(byte *)arg_2 = (byte)*arg_2 & 0xe1 | (c_char1 - 0x40U & 0xf) << 1;
    Item_SetQuality(temp_buf_18,((u_val3 & 0x1f) >> 1) + 0x40);
    Item_Routine_0800E028(arg_1,temp_buf_18[0],1);
  }
  else {
    Item_Routine_0800E010(arg_1);
  }
  return arg_1;
}

// =============================================================================
// Function: FarmHouse_Init @ 0x0800BC58
// =============================================================================
u32 FarmHouse_Init(undefined4 *arg_1)

{
  undefined4 *p_uint1;
  
  for (p_uint1 = arg_1; p_uint1 != arg_1 + 2; p_uint1 = p_uint1 + 1) {
    *p_uint1 = 0;
  }
  arg_1[1] = arg_1[1] & 0xf0000000;
  for (p_uint1 = arg_1 + 2; p_uint1 != arg_1 + 4; p_uint1 = p_uint1 + 1) {
    *p_uint1 = 0;
  }
  arg_1[3] = arg_1[3] & 0xf0000000;
  return arg_1;
}

// =============================================================================
// Function: FarmHouse_GetLevel @ 0x0800BCB0
// =============================================================================
void FarmHouse_GetLevel(int arg_1,int arg_2)

{
  uint u_val1;
  uint *p_uint2;
  
  u_val1 = arg_2 - 0x4d;
  if (u_val1 < 0x3c) {
    p_uint2 = (uint *)(arg_1 + (u_val1 >> 5) * 4);
    *p_uint2 = *p_uint2 | 1 << (u_val1 & 0x1f);
  }
  return;
}

// =============================================================================
// Function: FarmHouse_Upgrade @ 0x0800BCD0
// =============================================================================
void FarmHouse_Upgrade(int arg_1,int arg_2)

{
  uint u_val1;
  uint *p_uint2;
  
  u_val1 = arg_2 - 0x4d;
  if (u_val1 < 0x3c) {
    p_uint2 = (uint *)(arg_1 + (u_val1 >> 5) * 4);
    *p_uint2 = *p_uint2 & ~(1 << (u_val1 & 0x1f));
    p_uint2 = (uint *)(arg_1 + 8 + (u_val1 >> 5) * 4);
    *p_uint2 = *p_uint2 | 1 << (u_val1 & 0x1f);
  }
  return;
}

// =============================================================================
// Function: Building_Routine_0800BD14 @ 0x0800BD14
// =============================================================================
u32 Building_Routine_0800BD14(int arg_1,int arg_2)

{
  uint u_val1;
  uint u_val2;
  
  u_val2 = arg_2 - 0x4d;
  u_val1 = 0;
  if (u_val2 < 0x3c) {
    u_val1 = *(uint *)(arg_1 + (u_val2 >> 5) * 4) & 1 << (u_val2 & 0x1f);
    u_val1 = (-u_val1 | u_val1) >> 0x1f;
  }
  return u_val1;
}

// =============================================================================
// Function: Building_Routine_0800BD40 @ 0x0800BD40
// =============================================================================
void Building_Routine_0800BD40(int arg_1,int arg_2)

{
  uint u_val1;
  uint u_val2;
  
  u_val2 = arg_2 - 0x4d;
  u_val1 = 0;
  if (u_val2 < 0x3c) {
    u_val1 = *(uint *)(arg_1 + 8 + (u_val2 >> 5) * 4) & 1 << (u_val2 & 0x1f);
    u_val1 = (-u_val1 | u_val1) >> 0x1f;
  }
  return u_val1;
}

// =============================================================================
// Function: Building_Routine_0800BDEC @ 0x0800BDEC
// =============================================================================
u32 Building_Routine_0800BDEC(int arg_1)

{
  uint u_val1;
  uint *p_uint2;
  int i_val3;
  
  p_uint2 = (uint *)(arg_1 + 8);
  i_val3 = 0;
  do {
    u_val1 = *p_uint2;
    p_uint2 = p_uint2 + 1;
    u_val1 = (u_val1 & 0x55555555) + (u_val1 >> 1 & 0x55555555);
    u_val1 = (u_val1 & 0x33333333) + (u_val1 >> 2 & 0x33333333);
    u_val1 = (u_val1 & 0x0F0F0F0F) + (u_val1 >> 4 & 0x0F0F0F0F);
    u_val1 = (u_val1 & 0x00FF00FF) + (u_val1 >> 8 & 0x00FF00FF);
    i_val3 = i_val3 + (u_val1 & 0xFFFF) + (u_val1 >> 0x10 & 0xFFFF);
  } while (p_uint2 != (uint *)(arg_1 + 0x10));
  return i_val3;
}

// =============================================================================
// Function: Coop_Init @ 0x0800BE70
// =============================================================================
u32 Coop_Init(uint *arg_1)

{
  
  *(undefined1 *)arg_1 = 0;
  *(byte *)((int)arg_1 + 1) = *(byte *)((int)arg_1 + 1) & 0x80;
  *arg_1 = *arg_1 & 0xFF807FFF | 0x2f8000;
  *(byte *)((int)arg_1 + 3) = *(byte *)((int)arg_1 + 3) & 199 | 0xc0;
  *(undefined1 *)(arg_1 + 1) = 0x17;
  *(undefined1 *)((int)arg_1 + 5) = 0;
  ShippingBin_ClearAllSlots(arg_1 + 2);
  Building_Routine_0800B8E4(arg_1 + 0x42);
  Building_Routine_0800BB60(arg_1 + 0x62);
  ShippingBin_StatEnt_GetAmountShipped(arg_1 + 99);
  FarmHouse_Init(arg_1 + 0x83);
  return arg_1;
}

// =============================================================================
// Function: Coop_GetChickenCount @ 0x0800BF1C
// =============================================================================
u32 Coop_GetChickenCount(int arg_1)

{
  int i_val1;
  
  i_val1 = 0;
  if ((int)((uint)*(byte *)(arg_1 + 1) * 0x40000000) < 0) {
    i_val1 = arg_1 + 8;
  }
  return i_val1;
}

// =============================================================================
// Function: Building_Routine_0800BF34 @ 0x0800BF34
// =============================================================================
u32 Building_Routine_0800BF34(int arg_1)

{
  
  if ((int)((uint)*(byte *)(arg_1 + 1) * 0x20000000) < 0) {
    arg_1 = arg_1 + 0x108;
  }
  else {
    arg_1 = 0;
  }
  return arg_1;
}

// =============================================================================
// Function: Building_Routine_0800BF50 @ 0x0800BF50
// =============================================================================
u32 Building_Routine_0800BF50(int arg_1)

{
  
  if ((int)((uint)*(byte *)(arg_1 + 1) * 0x10000000) < 0) {
    arg_1 = arg_1 + 0x188;
  }
  else {
    arg_1 = 0;
  }
  return arg_1;
}

// =============================================================================
// Function: Building_Routine_0800C024 @ 0x0800C024
// =============================================================================
void Building_Routine_0800C024(byte *arg_1)

{
  byte b_flag1;
  
  b_flag1 = *arg_1;
  if ((b_flag1 & 3) < 2) {
    *arg_1 = b_flag1 & 0xfc | (b_flag1 & 3) + 1 & 3;
  }
  return;
}

// =============================================================================
// Function: Building_Routine_0800C048 @ 0x0800C048
// =============================================================================
u32 Building_Routine_0800C048(int arg_1)

{
  int i_val1;
  
  i_val1 = 0;
  if ((int)((uint)*(byte *)(arg_1 + 1) * 0x40000000) < 0) {
    i_val1 = arg_1 + 8;
  }
  return i_val1;
}

// =============================================================================
// Function: Building_Routine_0800C060 @ 0x0800C060
// =============================================================================
u32 Building_Routine_0800C060(int arg_1)

{
  
  if ((int)((uint)*(byte *)(arg_1 + 1) * 0x20000000) < 0) {
    arg_1 = arg_1 + 0x108;
  }
  else {
    arg_1 = 0;
  }
  return arg_1;
}

// =============================================================================
// Function: Building_Routine_0800C07C @ 0x0800C07C
// =============================================================================
u32 Building_Routine_0800C07C(int arg_1)

{
  
  if ((int)((uint)*(byte *)(arg_1 + 1) * 0x10000000) < 0) {
    arg_1 = arg_1 + 0x188;
  }
  else {
    arg_1 = 0;
  }
  return arg_1;
}

// =============================================================================
// Function: Building_Routine_0800C098 @ 0x0800C098
// =============================================================================
void Building_Routine_0800C098(byte *arg_1,byte arg_2)

{
  
  if (1 < (*arg_1 & 3)) {
    *arg_1 = *arg_1 & 0xf3 | (arg_2 & 3) << 2;
  }
  return;
}

// =============================================================================
// Function: Building_Routine_0800C0BC @ 0x0800C0BC
// =============================================================================
void Building_Routine_0800C0BC(byte *arg_1,byte arg_2)

{
  
  if (1 < (*arg_1 & 3)) {
    *arg_1 = *arg_1 & 0xcf | (arg_2 & 3) << 4;
  }
  return;
}

// =============================================================================
// Function: Building_Routine_0800C0E0 @ 0x0800C0E0
// =============================================================================
void Building_Routine_0800C0E0(byte *arg_1,char arg_2)

{
  
  if (1 < (*arg_1 & 3)) {
    *arg_1 = *arg_1 & 0x3f | arg_2 << 6;
  }
  return;
}

// =============================================================================
// Function: Building_Routine_0800C0FC @ 0x0800C0FC
// =============================================================================
void Building_Routine_0800C0FC(byte *arg_1)

{
  
  if ((*arg_1 & 3) == 2) {
    arg_1[1] = arg_1[1] | 1;
  }
  return;
}

// =============================================================================
// Function: Building_Routine_0800C118 @ 0x0800C118
// =============================================================================
void Building_Routine_0800C118(byte *arg_1)

{
  
  if ((*arg_1 & 3) != 0) {
    arg_1[1] = arg_1[1] | 2;
  }
  return;
}

// =============================================================================
// Function: Building_Routine_0800C134 @ 0x0800C134
// =============================================================================
void Building_Routine_0800C134(byte *arg_1)

{
  
  if ((*arg_1 & 3) != 0) {
    arg_1[1] = arg_1[1] | 4;
  }
  return;
}

// =============================================================================
// Function: Building_Routine_0800C15C @ 0x0800C15C
// =============================================================================
void Building_Routine_0800C15C(byte *arg_1)

{
  
  if (1 < (*arg_1 & 3)) {
    arg_1[1] = arg_1[1] | 0x10;
  }
  return;
}

// =============================================================================
// Function: Building_Routine_0800C178 @ 0x0800C178
// =============================================================================
void Building_Routine_0800C178(byte *arg_1)

{
  
  if ((*arg_1 & 3) != 0) {
    arg_1[1] = arg_1[1] | 0x20;
  }
  return;
}

// =============================================================================
// Function: Building_Routine_0800C1A0 @ 0x0800C1A0
// =============================================================================
void Building_Routine_0800C1A0(uint *arg_1,uint arg_2)

{
  uint u_val1;
  ushort u_val2;
  ushort u_val3;
  uint u_val4;
  
  u_val4 = (arg_2 & 0xff) << 0xf;
  u_val1 = *arg_1 & 0xFF807FFF;
  *arg_1 = u_val1 | u_val4;
  u_val1 = (u_val1 & 0x7fffff | u_val4) >> 0xf;
  if (u_val1 < 5) {
    switch(*(uint *)(u_val1 * 4 + gInlineTable_0800C1D0) & 0xfffffffe) {
    case 0x800c1f4:
      u_val2 = (ushort)0xFFFFF87F & *(ushort *)((int)arg_1 + 2);
      u_val3 = 0x380;
      break;
    case 0x800c204:
      u_val2 = (ushort)0xFFFFF87F & *(ushort *)((int)arg_1 + 2);
      u_val3 = 0x500;
      break;
    case 0x800c214:
      u_val2 = (ushort)0xFFFFF87F & *(ushort *)((int)arg_1 + 2);
      u_val3 = 0x280;
    }
    *(ushort *)((int)arg_1 + 2) = u_val2 | u_val3;
  }
  else {
    *(ushort *)((int)arg_1 + 2) = (ushort)0xFFFFF87F & *(ushort *)((int)arg_1 + 2);
  }
  return;
}

// =============================================================================
// Function: Building_Routine_0800C25C @ 0x0800C25C
// =============================================================================
void Building_Routine_0800C25C(byte *arg_1)

{
  
  if ((1 < (*arg_1 & 3)) && (-1 < (int)((uint)arg_1[4] * 0x2000000))) {
    arg_1[4] = arg_1[4] | 0x40;
  }
  return;
}

// =============================================================================
// Function: Building_Routine_0800C27C @ 0x0800C27C
// =============================================================================
void Building_Routine_0800C27C(byte *arg_1)

{
  int i_val1;
  
  if (((*arg_1 & 3) != 0) && (i_val1 = Building_Routine_0800C048(arg_1), i_val1 != 0)) {
    arg_1[4] = arg_1[4] | 0x80;
  }
  return;
}

// =============================================================================
// Function: Building_Routine_0800C2A4 @ 0x0800C2A4
// =============================================================================
void Building_Routine_0800C2A4(int arg_1)

{
  
  if (*(char *)(arg_1 + 4) < '\0') {
    *(byte *)(arg_1 + 5) = *(byte *)(arg_1 + 5) | 1;
  }
  return;
}

// =============================================================================
// Function: Building_Routine_0800C2BC @ 0x0800C2BC
// =============================================================================
void Building_Routine_0800C2BC(int arg_1)

{
  
  if (*(char *)(arg_1 + 4) < '\0') {
    *(byte *)(arg_1 + 5) = *(byte *)(arg_1 + 5) | 2;
  }
  return;
}

// =============================================================================
// Function: Building_Routine_0800C2D4 @ 0x0800C2D4
// =============================================================================
void Building_Routine_0800C2D4(int arg_1)

{
  
  if (*(char *)(arg_1 + 4) < '\0') {
    *(byte *)(arg_1 + 5) = *(byte *)(arg_1 + 5) | 4;
  }
  return;
}

// =============================================================================
// Function: Building_Routine_0800C2EC @ 0x0800C2EC
// =============================================================================
void Building_Routine_0800C2EC(int arg_1)

{
  
  if (*(char *)(arg_1 + 4) < '\0') {
    *(byte *)(arg_1 + 5) = *(byte *)(arg_1 + 5) | 8;
  }
  return;
}

// =============================================================================
// Function: Building_Routine_0800C304 @ 0x0800C304
// =============================================================================
void Building_Routine_0800C304(int arg_1)

{
  
  if (*(char *)(arg_1 + 4) < '\0') {
    *(byte *)(arg_1 + 5) = *(byte *)(arg_1 + 5) | 0x10;
  }
  return;
}

// =============================================================================
// Function: Building_Routine_0800C31C @ 0x0800C31C
// =============================================================================
void Building_Routine_0800C31C(int arg_1)

{
  
  if (*(char *)(arg_1 + 4) < '\0') {
    *(byte *)(arg_1 + 5) = *(byte *)(arg_1 + 5) | 0x20;
  }
  return;
}

// =============================================================================
// Function: Building_Routine_0800C334 @ 0x0800C334
// =============================================================================
void Building_Routine_0800C334(int arg_1)

{
  
  if (*(char *)(arg_1 + 4) < '\0') {
    *(byte *)(arg_1 + 5) = *(byte *)(arg_1 + 5) | 0x40;
  }
  return;
}

// =============================================================================
// Function: Building_Routine_0800C34C @ 0x0800C34C
// =============================================================================
void Building_Routine_0800C34C(int arg_1)

{
  
  if (*(char *)(arg_1 + 4) < '\0') {
    *(byte *)(arg_1 + 5) = *(byte *)(arg_1 + 5) | 0x80;
  }
  return;
}

// =============================================================================
// Function: Building_Routine_0800C364 @ 0x0800C364
// =============================================================================
void Building_Routine_0800C364(int arg_1,uint arg_2)

{
  
  *(byte *)(arg_1 + 3) = *(byte *)(arg_1 + 3) & 0x3f | (byte)((arg_2 & 3) << 6);
  *(byte *)(arg_1 + 4) = *(byte *)(arg_1 + 4) & 0xc0 | (byte)(arg_2 >> 2) & 0x3f;
  return;
}

// =============================================================================
// Function: Building_Routine_0800C390 @ 0x0800C390
// =============================================================================
void Building_Routine_0800C390(uint *arg_1,int arg_2)

{
  ushort u_val1;
  byte b_flag2;
  uint u_val3;
  
  *(byte *)(arg_1 + 1) = (byte)arg_1[1] & 0xbf;
  if (-1 < (int)((uint)*(byte *)((int)arg_1 + 1) * 0x2000000)) {
    return;
  }
  if ((*arg_1 & 0x7fffff) >> 0xf == 0x5f) {
    return;
  }
  u_val1 = *(ushort *)((int)arg_1 + 2);
  if ((u_val1 & 0x780) != 0) {
    *(ushort *)((int)arg_1 + 2) =
         (ushort)0xFFFFF87F & u_val1 | (ushort)((((u_val1 & 0x7ff) >> 7) - 1 & 0xf) << 7);
  }
  u_val3 = (*arg_1 & 0x7fffff) >> 0xf;
  if (u_val3 < 5) {
    switch(*(uint *)(u_val3 * 4 + gInlineTable_0800C3F0) & 0xfffffffe) {
    case 0x800c404:
      if (arg_2 == 0) goto LAB_0800c420;
      break;
    case 0x800c40a:
      if (arg_2 == 1) goto LAB_0800c420;
      break;
    case 0x800c410:
      if (arg_2 == 2) goto LAB_0800c420;
    }
    *arg_1 = 0xFF807FFF & *arg_1 | 0x2f8000;
  }
LAB_0800c420:
  if (((*arg_1 & 0x7800000) == 0) && (b_flag2 = math_rand(), b_flag2 < 0x65)) {
    *arg_1 = *arg_1 & 0xFF807FFF | 0x2f8000;
  }
  return;
}

// =============================================================================
// Function: Barn_Init @ 0x0800C450
// =============================================================================
u32 Barn_Init(uint *arg_1)

{
  ushort u_val1;
  undefined4 u_val2;
  uint *p_uint3;
  int i_val4;
  
  *(byte *)arg_1 = (byte)*arg_1 & 0xfe;
  *(ushort *)arg_1 = (ushort)0xFFFFF801 & (ushort)*arg_1;
  *(byte *)((int)arg_1 + 1) = *(byte *)((int)arg_1 + 1) & 0xf7;
  *arg_1 = *arg_1 & 0xFFF00FFF;
  *(byte *)((int)arg_1 + 2) = *(byte *)((int)arg_1 + 2) & 0xef;
  *(byte *)((int)arg_1 + 3) = 0;
  *(byte *)(arg_1 + 1) = (byte)arg_1[1] & 0xfc;
  *(byte *)(arg_1 + 2) = 0;
  p_uint3 = arg_1 + 6;
  i_val4 = 7;
  do {
    *(byte *)p_uint3 = (byte)*p_uint3 & 0xfe;
    u_val2 = 0xFFFFFC00;
    p_uint3 = p_uint3 + 0xc;
    i_val4 = i_val4 + -1;
  } while (i_val4 != -1);
  p_uint3 = arg_1 + 0x66;
  i_val4 = 7;
  do {
    u_val1 = (ushort)u_val2;
    *(ushort *)p_uint3 = u_val1 & (ushort)*p_uint3 | 0x234;
    *(byte *)((int)p_uint3 + 1) = *(byte *)((int)p_uint3 + 1) & 3;
    *(ushort *)((int)p_uint3 + 2) = u_val1 & *(ushort *)((int)p_uint3 + 2);
    *(byte *)((int)p_uint3 + 3) = *(byte *)((int)p_uint3 + 3) & 3;
    *(ushort *)(p_uint3 + 1) = u_val1 & (ushort)p_uint3[1];
    *(byte *)((int)p_uint3 + 6) = *(byte *)((int)p_uint3 + 6) & 0xf8;
    p_uint3 = p_uint3 + 2;
    i_val4 = i_val4 + -1;
  } while (i_val4 != -1);
  p_uint3 = arg_1 + 0x76;
  i_val4 = 1;
  do {
    *(byte *)p_uint3 = (byte)*p_uint3 & 0xf8;
    p_uint3 = p_uint3 + 1;
    i_val4 = i_val4 + -1;
  } while (i_val4 != -1);
  return arg_1;
}

// =============================================================================
// Function: Barn_GetCowCount @ 0x0800C570
// =============================================================================
u32 Barn_GetCowCount(byte *arg_1)

{
  uint *p_uint1;
  uint stack_val_c;
  uint stack_buf_8 [2];
  
  stack_val_c = 8;
  stack_buf_8[0] = (*arg_1 & 1) * 4 + 4;
  p_uint1 = &stack_val_c;
  if (stack_buf_8[0] < 8) {
    p_uint1 = stack_buf_8;
  }
  return *p_uint1;
}

// =============================================================================
// Function: Building_Routine_0800C598 @ 0x0800C598
// =============================================================================
u32 Building_Routine_0800C598(uint *arg_1,uint arg_2)

{
  uint u_val1;
  
  u_val1 = Barn_GetCowCount();
  if (arg_2 < u_val1) {
    u_val1 = -((*arg_1 & 0xfffff) >> 0xc & 1 << (arg_2 & 0xff)) >> 0x1f;
  }
  else {
    u_val1 = 0;
  }
  return u_val1;
}

// =============================================================================
// Function: Building_Routine_0800C5CC @ 0x0800C5CC
// =============================================================================
u32 Building_Routine_0800C5CC(int arg_1,uint arg_2)

{
  uint u_val1;
  undefined4 u_val2;
  
  u_val1 = Barn_GetCowCount();
  if (arg_2 < u_val1) {
    u_val2 = Building_Routine_0800CCB8(arg_1 + arg_2 * 0x30 + 0x18);
  }
  else {
    u_val2 = 0;
  }
  return u_val2;
}

// =============================================================================
// Function: Building_Routine_0800C5F4 @ 0x0800C5F4
// =============================================================================
u32 Building_Routine_0800C5F4(int arg_1,uint arg_2)

{
  char c_char1;
  uint u_val2;
  
  u_val2 = Barn_GetCowCount();
  if (arg_2 < u_val2) {
    arg_1 = arg_2 * 0x30 + 0x18 + arg_1;
    do {
      c_char1 = Building_Routine_0800CCAC(arg_1);
      if (c_char1 != '\0') goto LAB_0800c62a;
      arg_1 = arg_1 + 0x30;
      arg_2 = arg_2 + 1;
    } while (arg_2 < u_val2);
  }
  arg_2 = 0xffffffff;
LAB_0800c62a:
  return arg_2;
}

// =============================================================================
// Function: Building_Routine_0800C630 @ 0x0800C630
// =============================================================================
u32 Building_Routine_0800C630(int arg_1)

{
  uint u_val1;
  int i_val2;
  uint loop_i;
  int i_val4;
  
  u_val1 = Barn_GetCowCount();
  i_val4 = 0;
  loop_i = 0;
  if (u_val1 != 0) {
    arg_1 = arg_1 + 0x18;
    do {
      i_val2 = Building_Routine_0800CCB8(arg_1);
      if (i_val2 != 0) {
        i_val4 = i_val4 + 1;
      }
      arg_1 = arg_1 + 0x30;
      loop_i = loop_i + 1;
    } while (loop_i < u_val1);
  }
  return i_val4;
}

// =============================================================================
// Function: Building_Routine_0800C660 @ 0x0800C660
// =============================================================================
u32 Building_Routine_0800C660(byte *arg_1)

{
  undefined4 u_val1;
  
  u_val1 = 2;
  if ((*arg_1 & 1) == 0) {
    u_val1 = 1;
  }
  return u_val1;
}

// =============================================================================
// Function: Building_Routine_0800C678 @ 0x0800C678
// =============================================================================
u32 Building_Routine_0800C678(int arg_1,uint arg_2)

{
  uint u_val1;
  undefined4 u_val2;
  
  u_val1 = Building_Routine_0800C660();
  if (arg_2 < u_val1) {
    u_val2 = Building_Routine_0800CD38(arg_1 + arg_2 * 4 + 0x1d8);
  }
  else {
    u_val2 = 0;
  }
  return u_val2;
}

// =============================================================================
// Function: Building_Routine_0800C6A0 @ 0x0800C6A0
// =============================================================================
u32 Building_Routine_0800C6A0(int arg_1,uint arg_2)

{
  uint u_val1;
  
  u_val1 = Barn_GetCowCount();
  if ((arg_2 < u_val1) &&
     (u_val1 = (uint)*(ushort *)(arg_1 + arg_2 * 8 + 0x198) * 0x400000,
     u_val1 < 0x8CC00000 || u_val1 - 0x8CC00000 == 0)) {
    arg_1 = arg_1 + arg_2 * 8 + 0x198;
  }
  else {
    arg_1 = 0;
  }
  return arg_1;
}

// =============================================================================
// Function: Building_Routine_0800C6D8 @ 0x0800C6D8
// =============================================================================
u32 Building_Routine_0800C6D8(int arg_1)

{
  uint u_val1;
  
  if ((int)((uint)*(byte *)(arg_1 + 2) * 0x8000000) < 0) {
    u_val1 = (uint)(*(byte *)(arg_1 + 2) >> 5);
  }
  else {
    u_val1 = 0xffffffff;
  }
  return u_val1;
}

// =============================================================================
// Function: Building_Routine_0800C6F0 @ 0x0800C6F0
// =============================================================================
u32 Building_Routine_0800C6F0(short *arg_1,undefined4 arg_2,uint arg_3)

{
  uint u_val1;
  
  u_val1 = Barn_GetCowCount(arg_2);
  if (u_val1 <= arg_3) {
    arg_3 = math_modsi3(arg_3);
  }
  *arg_1 = (short)arg_3 * 0x18 + 0x88;
  arg_1[1] = 0x60;
  return arg_1;
}

// =============================================================================
// Function: Building_Routine_0800C720 @ 0x0800C720
// =============================================================================
u32 Building_Routine_0800C720(int arg_1,uint arg_2)

{
  uint u_val1;
  undefined4 u_val2;
  
  u_val1 = Building_Routine_0800C660();
  if (arg_2 < u_val1) {
    u_val2 = Building_Routine_0800CD58(arg_1 + arg_2 * 4 + 0x1d8);
  }
  else {
    u_val2 = 0;
  }
  return u_val2;
}

// =============================================================================
// Function: Building_Routine_0800C76C @ 0x0800C76C
// =============================================================================
void Building_Routine_0800C76C(byte *arg_1)

{
  byte b_flag1;
  
  b_flag1 = *arg_1;
  if ((b_flag1 & 1) == 0) {
    *arg_1 = b_flag1 & 0xfe | 1U - (char)((int)((uint)b_flag1 << 0x1f) >> 0x1f) & 1;
  }
  return;
}

// =============================================================================
// Function: Building_Routine_0800C794 @ 0x0800C794
// =============================================================================
void Building_Routine_0800C794(ushort *arg_1,int arg_2)

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
// Function: Building_Routine_0800C7D8 @ 0x0800C7D8
// =============================================================================
void Building_Routine_0800C7D8(ushort *arg_1,uint arg_2)

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
// Function: Building_Routine_0800C814 @ 0x0800C814
// =============================================================================
void Building_Routine_0800C814(uint *arg_1,uint arg_2)

{
  uint u_val1;
  uint u_val2;
  
  u_val1 = Barn_GetCowCount();
  if (arg_2 < u_val1) {
    u_val1 = (*arg_1 & 0xfffff) >> 0xc;
    u_val2 = 1 << (arg_2 & 0xff);
    if ((u_val1 & u_val2) == 0) {
      *arg_1 = 0xFFF00FFF & *arg_1 | (u_val1 | u_val2 & 0xff) << 0xc;
    }
  }
  return;
}

// =============================================================================
// Function: Building_Routine_0800C850 @ 0x0800C850
// =============================================================================
void Building_Routine_0800C850(uint *arg_1,uint arg_2)

{
  uint u_val1;
  uint u_val2;
  
  u_val1 = Barn_GetCowCount();
  if (arg_2 < u_val1) {
    u_val1 = (*arg_1 & 0xfffff) >> 0xc;
    u_val2 = 1 << (arg_2 & 0xff);
    if ((u_val1 & u_val2) != 0) {
      *arg_1 = 0xFFF00FFF & *arg_1 | (u_val1 & ~u_val2) << 0xc;
    }
  }
  return;
}

// =============================================================================
// Function: Building_Routine_0800C894 @ 0x0800C894
// =============================================================================
u32 Building_Routine_0800C894(int arg_1,uint arg_2)

{
  uint u_val1;
  undefined4 u_val2;
  
  u_val1 = Barn_GetCowCount();
  if (arg_2 < u_val1) {
    u_val2 = Building_Routine_0800CCD0(arg_1 + arg_2 * 0x30 + 0x18);
  }
  else {
    u_val2 = 0;
  }
  return u_val2;
}

// =============================================================================
// Function: Building_Routine_0800C8BC @ 0x0800C8BC
// =============================================================================
u32 Building_Routine_0800C8BC(int arg_1,undefined4 arg_2)

{
  char c_char1;
  int i_val2;
  
  i_val2 = 0;
  while (i_val2 = Building_Routine_0800C5F4(arg_1,i_val2), -1 < i_val2) {
    c_char1 = Building_Routine_0800CCE8(arg_1 + i_val2 * 0x30 + 0x18,arg_2);
    if (c_char1 != '\0') goto LAB_0800c8f2;
    i_val2 = i_val2 + 1;
  }
  i_val2 = -1;
LAB_0800c8f2:
  return i_val2;
}

// =============================================================================
// Function: Building_Routine_0800C8F8 @ 0x0800C8F8
// =============================================================================
void Building_Routine_0800C8F8(int arg_1,uint arg_2)

{
  uint u_val1;
  
  u_val1 = Barn_GetCowCount();
  if (arg_2 < u_val1) {
    Building_Routine_0800CD20(arg_1 + arg_2 * 0x30 + 0x18);
  }
  return;
}

// =============================================================================
// Function: Building_Routine_0800C91C @ 0x0800C91C
// =============================================================================
void Building_Routine_0800C91C(int arg_1,undefined4 arg_2)

{
  int i_val1;
  uint u_val2;
  undefined4 u_val3;
  
  i_val1 = Building_Routine_0800C894();
  if (i_val1 != 0) {
    u_val2 = Animal_Routine_0809B220();
    if (((*(byte *)(arg_1 + 4) & 3) << 8 | (uint)*(byte *)(arg_1 + 3)) < u_val2) {
      *(char *)(arg_1 + 3) = (char)u_val2;
      *(byte *)(arg_1 + 4) = *(byte *)(arg_1 + 4) & 0xfc | (byte)(u_val2 >> 8) & 3;
      u_val3 = Animal_Routine_0809B1F4(i_val1);
      u_val2 = gba_strlen();
      if (0xc < u_val2) {
        u_val2 = 0xc;
      }
      gba_memcpy(arg_1 + 8,u_val3,u_val2);
      *(undefined1 *)(arg_1 + 8 + u_val2) = 0;
    }
    Building_Routine_0800C8F8(arg_1,arg_2);
  }
  return;
}

// =============================================================================
// Function: Building_Routine_0800C994 @ 0x0800C994
// =============================================================================
void Building_Routine_0800C994(int arg_1,uint arg_2)

{
  uint u_val1;
  
  u_val1 = Building_Routine_0800C660();
  if (arg_2 < u_val1) {
    Building_Routine_0800CD78(arg_1 + arg_2 * 4 + 0x1d8);
  }
  return;
}

// =============================================================================
// Function: Building_Routine_0800C9B8 @ 0x0800C9B8
// =============================================================================
void Building_Routine_0800C9B8(int arg_1,uint arg_2)

{
  uint u_val1;
  ushort *p_uint2;
  
  u_val1 = Barn_GetCowCount();
  if (arg_2 < u_val1) {
    p_uint2 = (ushort *)(arg_1 + arg_2 * 8 + 0x198);
    *p_uint2 = (ushort)0xFFFFFC00 & *p_uint2 | 0x234;
  }
  return;
}

// =============================================================================
// Function: Building_Routine_0800C9EC @ 0x0800C9EC
// =============================================================================
void Building_Routine_0800C9EC(uint *arg_1)

{
  byte b_flag1;
  char c_char2;
  byte b_flag3;
  uint u_val4;
  int i_val5;
  int i_val6;
  uint loop_i;
  uint *p_uint8;
  uint *p_uint9;
  uint stack_val_38;
  undefined4 stack_val_34;
  undefined1 temp_buf_30 [8];
  uint stack_val_28;
  undefined1 *puStack_24;
  
  loop_i = *arg_1;
  u_val4 = ((loop_i & 0xfffff) >> 0xc & 0x55555555) + ((loop_i & 0xfffff) >> 0xd & 0x55555555);
  u_val4 = (u_val4 & 0x33333333) + (u_val4 >> 2 & 0x33333333);
  u_val4 = (u_val4 & 0x0F0F0F0F) + (u_val4 >> 4 & 0x0F0F0F0F);
  u_val4 = (u_val4 & 0x00FF00FF) + (u_val4 >> 8 & 0x00FF00FF) & 0xFFFF;
  *arg_1 = loop_i & 0xFFF00FFF;
  stack_val_28 = Barn_GetCowCount(arg_1);
  loop_i = 0;
  if (stack_val_28 != 0) {
    puStack_24 = temp_buf_30;
    p_uint9 = arg_1 + 0x66;
    p_uint8 = arg_1 + 6;
    do {
      c_char2 = Building_Routine_0800CCAC(p_uint8);
      if ((c_char2 == '\0') && (i_val5 = Building_Routine_0800CCD0(p_uint8), i_val5 != 0)) {
        if (((int)((uint)*(byte *)((int)arg_1 + 2) * 0x8000000) < 0) &&
           (loop_i == *(byte *)((int)arg_1 + 2) >> 5)) {
LAB_0800caa0:
          Animal_Routine_0809BCF0(i_val5);
        }
        else {
          c_char2 = Animal_Routine_0809B4FC(i_val5);
          if (c_char2 == '\0') {
            i_val6 = Animal_Routine_0809BCAC(i_val5);
            if (i_val6 == 0) goto LAB_0800caa0;
            if ((u_val4 != 0) && (Actor_CopyLocation2(&stack_val_38,i_val5), (stack_val_38 & 0x3ff) == 0x11)) {
              u_val4 = u_val4 - 1;
              Animal_Routine_0809BCF0(i_val5);
            }
          }
        }
        Animal_Routine_0809BD38(i_val5);
        c_char2 = Chicken_GetAffection(i_val5);
        if (c_char2 != '\0') {
          Actor_CopyLocation2(puStack_24,i_val5);
          b_flag3 = Animal_Routine_0809BCFC(i_val5);
          gba_memcpy(&stack_val_38,puStack_24,6);
          b_flag1 = stack_val_34._2_1_ & 0xf8;
          stack_val_34._0_3_ = CONCAT12(b_flag1 | b_flag3 & 7,(undefined2)stack_val_34);
          *p_uint9 = stack_val_38;
          p_uint9[1] = stack_val_34;
        }
      }
      p_uint9 = p_uint9 + 2;
      p_uint8 = p_uint8 + 0xc;
      loop_i = loop_i + 1;
    } while (loop_i < stack_val_28);
  }
  u_val4 = Building_Routine_0800C660(arg_1);
  loop_i = 0;
  if (u_val4 != 0) {
    arg_1 = arg_1 + 0x76;
    do {
      c_char2 = Building_Routine_0800CD38(arg_1);
      if (c_char2 != '\0') {
        Building_Routine_0800CD88(arg_1);
      }
      arg_1 = arg_1 + 1;
      loop_i = loop_i + 1;
    } while (loop_i < u_val4);
  }
  return;
}

// =============================================================================
// Function: Building_Routine_0800CB7C @ 0x0800CB7C
// =============================================================================
void Building_Routine_0800CB7C(int arg_1,uint arg_2)

{
  char c_char1;
  uint u_val2;
  
  u_val2 = Barn_GetCowCount();
  if (u_val2 <= arg_2) {
    arg_2 = math_modsi3(arg_2);
  }
  c_char1 = Building_Routine_0800CCAC(arg_1 + arg_2 * 0x30 + 0x18);
  if (c_char1 == '\0') {
    *(byte *)(arg_1 + 2) = *(byte *)(arg_1 + 2) & 0x1f | 0x10 | (byte)(arg_2 << 5);
  }
  return;
}

// =============================================================================
// Function: Building_Routine_0800CBCC @ 0x0800CBCC
// =============================================================================
u32 Building_Routine_0800CBCC(int arg_1,int arg_2)

{
  ushort u_val1;
  ushort u_val2;
  uint u_val3;
  char c_char4;
  undefined4 u_val5;
  undefined1 stack_buf_60 [6];
  undefined1 stack_val_5a;
  undefined2 stack_val_58;
  undefined2 stack_val_56;
  ushort stack_val_54;
  undefined1 temp_buf_50 [44];
  uint stack_val_24;
  undefined4 stack_val_20;
  
  c_char4 = Building_Routine_0800C720();
  if (c_char4 == '\0') {
    u_val5 = 0xffffffff;
  }
  else {
    Building_Routine_0800CDB0(arg_1 + arg_2 * 4 + 0x1d8);
    Building_Routine_0800C748(&stack_val_24,arg_1,arg_2);
    stack_val_20 = stack_val_24;
    u_val3 = stack_val_20;
    stack_val_20._0_2_ = (ushort)stack_val_24;
    stack_val_20._2_2_ = (ushort)(stack_val_24 >> 0x10);
    u_val2 = (ushort)0xFFFFFC00;
    u_val1 = u_val2 & stack_val_58;
    stack_val_58._1_1_ = (byte)(u_val1 >> 8);
    stack_val_58 = CONCAT11(stack_val_58._1_1_ & 3 | (byte)((stack_val_24 & 0x3f) << 2),(char)u_val1) | 0x11;
    u_val1 = u_val2 & stack_val_56 | (ushort)stack_val_20 >> 6;
    stack_val_56._1_1_ = (byte)(u_val1 >> 8);
    stack_val_56 = CONCAT11(stack_val_56._1_1_ & 3 | (byte)((stack_val_20._2_2_ & 0x3f) << 2),(char)u_val1);
    stack_val_54 = u_val2 & stack_val_54 | stack_val_20._2_2_ >> 6;
    stack_val_20 = u_val3;
    gba_memcpy(stack_buf_60,&stack_val_58,6);
    stack_val_5a = 3;
    Animal_Routine_0809BC8C(temp_buf_50,stack_buf_60,0,0);
    u_val5 = math_rand();
    u_val5 = math_umodsi3(u_val5,10);
    NPC_AddFriendship(temp_buf_50,u_val5);
    u_val5 = Building_Routine_0800C8BC(arg_1,temp_buf_50);
  }
  return u_val5;
}

// =============================================================================
// Function: Building_Routine_0800CCB8 @ 0x0800CCB8
// =============================================================================
u32 Building_Routine_0800CCB8(byte *arg_1)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)0x0;
  if ((*arg_1 & 1) != 0) {
    pbVar1 = arg_1 + 4;
  }
  return pbVar1;
}

// =============================================================================
// Function: Building_Routine_0800CCD0 @ 0x0800CCD0
// =============================================================================
u32 Building_Routine_0800CCD0(byte *arg_1)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)0x0;
  if ((*arg_1 & 1) != 0) {
    pbVar1 = arg_1 + 4;
  }
  return pbVar1;
}

// =============================================================================
// Function: Building_Routine_0800CCE8 @ 0x0800CCE8
// =============================================================================
u32 Building_Routine_0800CCE8(byte *arg_1,int arg_2)

{
  undefined4 u_val1;
  
  if ((*arg_1 & 1) == 0) {
    if (arg_1 + 4 != (byte *)0x0) {
      VTable_Routine_080D7C40(arg_1 + 4);
      *(undefined4 *)(arg_1 + 0x28) = *(undefined4 *)(arg_2 + 0x24);
      *(undefined4 *)(arg_1 + 0x2c) = *(undefined4 *)(arg_2 + 0x28);
    }
    *arg_1 = *arg_1 | 1;
    u_val1 = 1;
  }
  else {
    u_val1 = 0;
  }
  return u_val1;
}

// =============================================================================
// Function: Building_Routine_0800CD20 @ 0x0800CD20
// =============================================================================
void Building_Routine_0800CD20(byte *arg_1)

{
  
  if ((*arg_1 & 1) != 0) {
    *arg_1 = *arg_1 & 0xfe;
  }
  return;
}

// =============================================================================
// Function: Building_Routine_0800CD40 @ 0x0800CD40
// =============================================================================
u32 Building_Routine_0800CD40(uint *arg_1)

{
  uint u_val1;
  
  if ((int)(*arg_1 * 0x20000000) < 0) {
    u_val1 = *arg_1 & 3;
  }
  else {
    u_val1 = 0;
  }
  return u_val1;
}

// =============================================================================
// Function: Building_Routine_0800CD58 @ 0x0800CD58
// =============================================================================
void Building_Routine_0800CD58(byte *arg_1)

{
  undefined4 u_val1;
  
  u_val1 = 0;
  if ((*(int *)arg_1 * 0x20000000 < 0) && ((*arg_1 & 3) == 0)) {
    u_val1 = 1;
  }
  return u_val1;
}

// =============================================================================
// Function: Building_Routine_0800CD88 @ 0x0800CD88
// =============================================================================
void Building_Routine_0800CD88(byte *arg_1)

{
  
  if ((*arg_1 & 3) != 0) {
    *arg_1 = *arg_1 & 0xfc | ((byte)*(undefined4 *)arg_1 & 3) - 1 & 3;
  }
  return;
}

// =============================================================================
// Function: Building_Routine_0800CE74 @ 0x0800CE74
// =============================================================================
u32 Building_Routine_0800CE74(byte *arg_1)

{
  uint *p_uint1;
  uint stack_val_c;
  uint stack_buf_8 [2];
  
  stack_val_c = 0x10;
  stack_buf_8[0] = (*arg_1 & 1) * 8 + 8;
  p_uint1 = &stack_val_c;
  if (stack_buf_8[0] < 0x10) {
    p_uint1 = stack_buf_8;
  }
  return *p_uint1;
}

// =============================================================================
// Function: Building_Routine_0800CEA8 @ 0x0800CEA8
// =============================================================================
u32 Building_Routine_0800CEA8(uint *arg_1,uint arg_2)

{
  uint u_val1;
  
  u_val1 = Building_Routine_0800CE74();
  if (arg_2 < u_val1) {
    u_val1 = -((*arg_1 & 0x1fffffff) >> 0xd & 1 << (arg_2 & 0xff)) >> 0x1f;
  }
  else {
    u_val1 = 0;
  }
  return u_val1;
}

// =============================================================================
// Function: Building_Routine_0800CED4 @ 0x0800CED4
// =============================================================================
u32 Building_Routine_0800CED4(int arg_1,uint arg_2)

{
  uint u_val1;
  
  u_val1 = Item_HasStarQuality();
  if (arg_2 < u_val1) {
    u_val1 = -((*(byte *)(arg_1 + 3) & 0x7f) >> 5 & 1 << (arg_2 & 0xff)) >> 0x1f;
  }
  else {
    u_val1 = 0;
  }
  return u_val1;
}

// =============================================================================
// Function: Building_Routine_0800CF10 @ 0x0800CF10
// =============================================================================
u32 Building_Routine_0800CF10(int arg_1,uint arg_2)

{
  uint u_val1;
  undefined4 u_val2;
  
  u_val1 = Building_Routine_0800CE74();
  if (arg_2 < u_val1) {
    u_val2 = FoodStack_SubtractAmount(arg_1 + arg_2 * 0x3c + 0x2c);
  }
  else {
    u_val2 = 0;
  }
  return u_val2;
}

// =============================================================================
// Function: Building_Routine_0800CF38 @ 0x0800CF38
// =============================================================================
u32 Building_Routine_0800CF38(int arg_1,uint arg_2)

{
  uint u_val1;
  undefined4 u_val2;
  
  u_val1 = Building_Routine_0800CE74();
  if (arg_2 < u_val1) {
    u_val2 = Article_Construct(arg_1 + arg_2 * 0x3c + 0x2c);
  }
  else {
    u_val2 = 0;
  }
  return u_val2;
}

// =============================================================================
// Function: Building_Routine_0800CF60 @ 0x0800CF60
// =============================================================================
u32 Building_Routine_0800CF60(int arg_1,uint arg_2)

{
  uint u_val1;
  undefined4 u_val2;
  
  u_val1 = Building_Routine_0800CE74();
  if (arg_2 < u_val1) {
    u_val2 = FoodStack_AddAmount(arg_1 + arg_2 * 0x3c + 0x2c);
  }
  else {
    u_val2 = 0;
  }
  return u_val2;
}

// =============================================================================
// Function: Building_Routine_0800CF88 @ 0x0800CF88
// =============================================================================
u32 Building_Routine_0800CF88(int arg_1,uint arg_2)

{
  char c_char1;
  uint u_val2;
  
  u_val2 = Building_Routine_0800CE74();
  if (arg_2 < u_val2) {
    arg_1 = arg_2 * 0x3c + 0x2c + arg_1;
    do {
      c_char1 = Item_IsValid(arg_1);
      if (c_char1 != '\0') goto LAB_0800cfbe;
      arg_1 = arg_1 + 0x3c;
      arg_2 = arg_2 + 1;
    } while (arg_2 < u_val2);
  }
  arg_2 = 0xffffffff;
LAB_0800cfbe:
  return arg_2;
}

// =============================================================================
// Function: Building_Routine_0800CFC4 @ 0x0800CFC4
// =============================================================================
u32 Building_Routine_0800CFC4(int arg_1)

{
  uint u_val1;
  int i_val2;
  uint loop_i;
  int i_val4;
  
  u_val1 = Building_Routine_0800CE74();
  i_val4 = 0;
  loop_i = 0;
  if (u_val1 != 0) {
    arg_1 = arg_1 + 0x2c;
    do {
      i_val2 = FoodStack_SubtractAmount(arg_1);
      if (i_val2 != 0) {
        i_val4 = i_val4 + 1;
      }
      arg_1 = arg_1 + 0x3c;
      loop_i = loop_i + 1;
    } while (loop_i < u_val1);
  }
  return i_val4;
}

// =============================================================================
// Function: Building_Routine_0800CFF4 @ 0x0800CFF4
// =============================================================================
u32 Building_Routine_0800CFF4(int arg_1)

{
  uint u_val1;
  int i_val2;
  uint loop_i;
  int i_val4;
  
  u_val1 = Building_Routine_0800CE74();
  i_val4 = 0;
  loop_i = 0;
  if (u_val1 != 0) {
    arg_1 = arg_1 + 0x2c;
    do {
      i_val2 = Article_Construct(arg_1);
      if (i_val2 != 0) {
        i_val4 = i_val4 + 1;
      }
      arg_1 = arg_1 + 0x3c;
      loop_i = loop_i + 1;
    } while (loop_i < u_val1);
  }
  return i_val4;
}

