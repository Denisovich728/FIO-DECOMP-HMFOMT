// =============================================================================
// Harvest Moon: Friends of Mineral Town (GBA) - Decompiled Source
// Module: PLAYER_AND_RUCKSACK (313 functions)
// Description: Farmer character (Pete/Claire), stamina/fatigue management, rucksack slots and held items
// =============================================================================

#include "../../include/player/farmer.h"

// =============================================================================
// Function: Farmer_Init @ 0x0800E2E4
// =============================================================================
u32 Farmer_Init(uint farmer)

{
  int i_val1;
  
  i_val1 = gRomData_080F050C;
  if (farmer < 4) {
    i_val1 = farmer * 7 + gRomData_080F04EE;
  }
  return i_val1;
}

// =============================================================================
// Function: Farmer_Routine_0800E304 @ 0x0800E304
// =============================================================================
u32 Farmer_Routine_0800E304(uint farmer)

{
  int i_val1;
  
  i_val1 = gRomData_080F050C;
  if (farmer < 7) {
    i_val1 = farmer * 5 + gRomData_080F050F;
  }
  return i_val1;
}

// =============================================================================
// Function: Farmer_Routine_0800E324 @ 0x0800E324
// =============================================================================
u32 Farmer_Routine_0800E324(int farmer)

{
  uint u_val1;
  
  if (((*(byte *)(farmer + 1) & 0x7f) >> 2 == 0) && ((*(ushort *)(farmer + 2) & 0x1f) < 6)) {
    u_val1 = (*(byte *)(farmer + 1) & 3) - 1;
  }
  else {
    u_val1 = (uint)*(byte *)(farmer + 1);
  }
  return ((u32)(u_val1) & 0x03);
}

// =============================================================================
// Function: Farmer_Routine_0800E354 @ 0x0800E354
// =============================================================================
u32 Farmer_Routine_0800E354(int farmer,undefined4 amount,undefined1 *slot_id)

{
  ushort u_val1;
  uint u_val2;
  ushort *p_uint3;
  int i_val4;
  int i_val5;
  ushort *p_uint6;
  ushort stack_val_44;
  ushort stack_val_42;
  ushort stack_val_40;
  byte *pbStack_3c;
  byte *pbStack_38;
  ushort *puStack_34;
  byte *pbStack_30;
  int stack_val_2c;
  int stack_val_28;
  int stack_val_24;
  
  u_val2 = gba_strlen(amount);
  if (0xc < u_val2) {
    u_val2 = 0xc;
  }
  gba_memcpy(farmer,amount,u_val2);
  *(undefined1 *)(farmer + u_val2) = 0;
  *(undefined1 *)(farmer + 0x10) = 0;
  *(undefined1 *)(farmer + 0x20) = *slot_id;
  u_val1 = (ushort)0xFFFFFC00;
  stack_val_44 = u_val1 & stack_val_44 & 0x3ff | 2;
  stack_val_42 = u_val1 & stack_val_42 & 0x3ff;
  stack_val_40 = u_val1 & stack_val_40;
  gba_memcpy(farmer + 0x24,&stack_val_44,6);
  *(undefined1 *)(farmer + 0x2a) = 0;
  i_val4 = farmer + 0x2c;
  i_val5 = 5;
  p_uint6 = (ushort *)(farmer + 0x44);
  pbStack_3c = (byte *)(farmer + 0x47);
  pbStack_38 = (byte *)(farmer + 0x4b);
  p_uint3 = (ushort *)(farmer + 0x4c);
  puStack_34 = (ushort *)(farmer + 0x50);
  pbStack_30 = (byte *)(farmer + 0x51);
  stack_val_2c = farmer + 0x54;
  stack_val_28 = farmer + 0x5c;
  stack_val_24 = farmer + 0x60;
  do {
    Farmer_Routine_0800EF44(i_val4);
    i_val4 = i_val4 + 4;
    i_val5 = i_val5 + -1;
  } while (i_val5 != -1);
  *(byte *)p_uint6 = *(byte *)p_uint6 & 0x80;
  u_val1 = (ushort)0xFFFF807F;
  *p_uint6 = u_val1 & *p_uint6 | 0x4b00;
  *(uint *)(farmer + 0x44) = *(uint *)(farmer + 0x44) & 0xFF807FFF;
  *(ushort *)(farmer + 0x46) = u_val1 & *(ushort *)(farmer + 0x46);
  *pbStack_3c = *pbStack_3c & 0x7f;
  *(uint *)(farmer + 0x48) = *(uint *)(farmer + 0x48) & 0xe0000000;
  *pbStack_38 = *pbStack_38 & 0x1f;
  *(byte *)p_uint3 = *(byte *)p_uint3 & 0x80;
  *p_uint3 = u_val1 & *p_uint3;
  *(uint *)(farmer + 0x4c) = *(uint *)(farmer + 0x4c) & 0x7FFF;
  *puStack_34 = (ushort)0xFFFFE000 & *puStack_34;
  *pbStack_30 = *pbStack_30 & 0x1f;
  Farmer_Routine_0800F170(stack_val_2c);
  ArticleStack_AddAmount(stack_val_28);
  Farmer_Routine_0800F574(stack_val_24);
  return farmer;
}

// =============================================================================
// Function: Farmer_IsOverworked @ 0x0800E504
// =============================================================================
u32 Farmer_IsOverworked(int farmer)

{
  
  return (uint)(199 < (*(uint *)(farmer + 0x44) & 0x7fffff) >> 0xf);
}

// =============================================================================
// Function: Farmer_GetUpgradedTool @ 0x0800E550
// =============================================================================
u32 Farmer_GetUpgradedTool(int farmer,byte amount)

{
  undefined4 u_val1;
  int i_val2;
  uint u_val3;
  uint u_val4;
  byte stack_val_27;
  byte stack_val_26;
  byte stack_val_25;
  byte stack_val_24;
  byte stack_val_23;
  byte stack_val_22;
  byte stack_val_21;
  byte stack_val_20;
  byte stack_val_1f;
  byte stack_val_1e;
  byte stack_val_1d;
  byte stack_val_1c;
  byte stack_val_1b;
  byte stack_val_1a;
  byte stack_val_19;
  byte stack_val_18;
  byte stack_val_17;
  byte stack_val_16;
  byte stack_val_15;
  byte stack_val_14;
  byte stack_val_13;
  byte stack_val_12;
  byte stack_val_11;
  byte stack_val_10;
  byte stack_val_f;
  byte stack_val_e;
  byte stack_val_d;
  byte stack_val_c;
  byte stack_val_b;
  byte stack_bytes_a [2];
  
  u_val1 = Item_GetId();
  switch(u_val1) {
  case 0:
    u_val1 = ToolLevel_GetTierLevel(farmer + 0x30);
    switch(u_val1) {
    case 1:
      Item_SetId(&stack_val_27,1);
      u_val3 = (uint)stack_val_27;
      break;
    case 2:
      Item_SetId(&stack_val_26,2);
      u_val3 = (uint)stack_val_26;
      break;
    case 3:
      Item_SetId(&stack_val_25,3);
      u_val3 = (uint)stack_val_25;
      break;
    case 4:
      Item_SetId(&stack_val_24,4);
      u_val3 = (uint)stack_val_24;
      break;
    case 5:
      Item_SetId(&stack_val_23,7);
      u_val3 = (uint)stack_val_23;
      break;
    default:
      goto case_0800E916;
    }
    break;
  case 8:
    u_val1 = ToolLevel_GetTierLevel(farmer + 0x2c);
    switch(u_val1) {
    case 1:
      Item_SetId(&stack_val_22,9);
      u_val3 = (uint)stack_val_22;
      break;
    case 2:
      Item_SetId(&stack_val_21,10);
      u_val3 = (uint)stack_val_21;
      break;
    case 3:
      Item_SetId(&stack_val_20,0xb);
      u_val3 = (uint)stack_val_20;
      break;
    case 4:
      Item_SetId(&stack_val_1f,0xc);
      u_val3 = (uint)stack_val_1f;
      break;
    case 5:
      Item_SetId(&stack_val_1e,0xf);
      u_val3 = (uint)stack_val_1e;
      break;
    default:
      goto case_0800E916;
    }
    break;
  case 0x10:
    u_val1 = ToolLevel_GetTierLevel(farmer + 0x34);
    switch(u_val1) {
    case 1:
      Item_SetId(&stack_val_1d,0x11);
      u_val3 = (uint)stack_val_1d;
      break;
    case 2:
      Item_SetId(&stack_val_1c,0x12);
      u_val3 = (uint)stack_val_1c;
      break;
    case 3:
      Item_SetId(&stack_val_1b,0x13);
      u_val3 = (uint)stack_val_1b;
      break;
    case 4:
      Item_SetId(&stack_val_1a,0x14);
      u_val3 = (uint)stack_val_1a;
      break;
    case 5:
      Item_SetId(&stack_val_19,0x17);
      u_val3 = (uint)stack_val_19;
      break;
    default:
      goto case_0800E916;
    }
    break;
  case 0x18:
    u_val1 = ToolLevel_GetTierLevel(farmer + 0x38);
    switch(u_val1) {
    case 1:
      Item_SetId(&stack_val_18,0x19);
      u_val3 = (uint)stack_val_18;
      break;
    case 2:
      Item_SetId(&stack_val_17,0x1a);
      u_val3 = (uint)stack_val_17;
      break;
    case 3:
      Item_SetId(&stack_val_16,0x1b);
      u_val3 = (uint)stack_val_16;
      break;
    case 4:
      Item_SetId(&stack_val_15,0x1c);
      u_val3 = (uint)stack_val_15;
      break;
    case 5:
      Item_SetId(&stack_val_14,0x1f);
      u_val3 = (uint)stack_val_14;
      break;
    default:
      goto case_0800E916;
    }
    break;
  case 0x20:
    u_val1 = ToolLevel_GetTierLevel(farmer + 0x3c);
    switch(u_val1) {
    case 1:
      Item_SetId(&stack_val_13,0x21);
      u_val3 = (uint)stack_val_13;
      break;
    case 2:
      Item_SetId(&stack_val_12,0x22);
      u_val3 = (uint)stack_val_12;
      break;
    case 3:
      Item_SetId(&stack_val_11,0x23);
      u_val3 = (uint)stack_val_11;
      break;
    case 4:
      Item_SetId(&stack_val_10,0x24);
      u_val3 = (uint)stack_val_10;
      break;
    case 5:
      Item_SetId(&stack_val_f,0x27);
      u_val3 = (uint)stack_val_f;
      break;
    default:
      goto case_0800E916;
    }
    break;
  case 0x28:
    u_val3 = 0x800e89f;
    i_val2 = ToolLevel_GetTierLevel(farmer + 0x40);
    if (i_val2 - 1U < 5) {
      switch((uint)(&case_0800E8B4)[i_val2 - 1U] & 0xfffffffe) {
      case 0x800e8b4:
        u_val4 = 0x800e8b7;
        (*(code *)((u_val3 & 0xfffffffc) + 400))();
        u_val3 = 0x800e8bb;
        (*(code *)((u_val4 & 0xfffffffc) + 0x1b0))(0);
        u_val4 = 0x800e8bf;
        (*(code *)((u_val3 & 0xfffffffc) + 0x1d0))(0);
        u_val3 = 0x800e8c3;
        (*(code *)((u_val4 & 0xfffffffc) + 0x1ec))(0);
        (*(code *)((u_val3 & 0xfffffffc) + 0x20c))(0);
      case 0x800e8c8:
        Item_SetId(&stack_val_e,0x29);
        u_val3 = (uint)stack_val_e;
        break;
      case 0x800e8d8:
        Item_SetId(&stack_val_d,0x2a);
        u_val3 = (uint)stack_val_d;
        break;
      case 0x800e8e8:
        Item_SetId(&stack_val_c,0x2b);
        u_val3 = (uint)stack_val_c;
        break;
      case 0x800e8f6:
        Item_SetId(&stack_val_b,0x2c);
        u_val3 = (uint)stack_val_b;
        break;
      case 0x800e906:
        Item_SetId(stack_bytes_a,0x2f);
        u_val3 = (uint)stack_bytes_a[0];
      }
      break;
    }
  default:
case_0800E916:
    u_val3 = (uint)amount;
  }
  return u_val3;
}

// =============================================================================
// Function: Farmer_GetLocation @ 0x0800E924
// =============================================================================
void Farmer_GetLocation(undefined4 *farmer,int amount)

{
  undefined4 u_val1;
  
  u_val1 = *(undefined4 *)(amount + 0x28);
  *farmer = *(undefined4 *)(amount + 0x24);
  farmer[1] = u_val1;
  return;
}

// =============================================================================
// Function: Farmer_AddStamina @ 0x0800E9E4
// =============================================================================
void Farmer_AddStamina(int farmer,int amount)

{
  uint *p_uint1;
  ushort *p_uint2;
  uint stack_val_10;
  uint stack_val_c;
  
  p_uint2 = (ushort *)(farmer + 0x44);
  stack_val_10 = ((*p_uint2 & 0x7fff) >> 7) + amount;
  if ((int)stack_val_10 < 1) {
    *p_uint2 = (ushort)0xFFFF807F & *p_uint2;
  }
  else {
    stack_val_c = Farmer_GetMaxStamina(farmer);
    p_uint1 = &stack_val_10;
    if (stack_val_c < stack_val_10) {
      p_uint1 = &stack_val_c;
    }
    *p_uint2 = (ushort)0xFFFF807F & *p_uint2 | (ushort)(byte)*p_uint1 << 7;
  }
  return;
}

// =============================================================================
// Function: Farmer_ReduceStamina @ 0x0800EA38
// =============================================================================
void Farmer_ReduceStamina(undefined4 farmer,int amount)

{
  
  Farmer_AddStamina(farmer,-amount);
  return;
}

// =============================================================================
// Function: Farmer_RestoreStamina @ 0x0800EA44
// =============================================================================
void Farmer_RestoreStamina(int farmer)

{
  ushort u_val1;
  
  u_val1 = Farmer_GetMaxStamina();
  *(ushort *)(farmer + 0x44) =
       (ushort)0xFFFF807F & *(ushort *)(farmer + 0x44) | (u_val1 & 0xff) << 7;
  return;
}

// =============================================================================
// Function: Farmer_AddFatigue @ 0x0800EA68
// =============================================================================
void Farmer_AddFatigue(int farmer,int amount)

{
  uint u_val1;
  uint u_val2;
  uint u_val3;
  uint *p_uint4;
  uint stack_val_14;
  byte stack_bytes_10 [4];
  
  if (amount < 1) {
    if (-1 < amount) {
      return;
    }
    u_val2 = *(uint *)(farmer + 0x44);
    u_val3 = (u_val2 & 0x7fffff) >> 0xf;
    u_val1 = 0;
    if ((uint)(amount * -2) < u_val3) {
      u_val1 = u_val3 + amount * 2;
    }
    u_val1 = u_val1 & 0xff;
  }
  else {
    if (-1 < (int)((uint)*(byte *)(farmer + 0x44) * 0x8000000)) {
      amount = amount << 1;
    }
    u_val2 = *(uint *)(farmer + 0x44);
    stack_val_14 = ((u_val2 & 0x7fffff) >> 0xf) + amount;
    stack_bytes_10[0] = 200;
    stack_bytes_10[1] = 0;
    stack_bytes_10[2] = 0;
    stack_bytes_10[3] = 0;
    p_uint4 = &stack_val_14;
    if (200 < stack_val_14) {
      p_uint4 = (uint *)stack_bytes_10;
    }
    u_val1 = (uint)*(byte *)p_uint4;
  }
  *(uint *)(farmer + 0x44) = 0xFF807FFF & u_val2 | u_val1 << 0xf;
  return;
}

// =============================================================================
// Function: Farmer_ReduceFatigue @ 0x0800EAD4
// =============================================================================
void Farmer_ReduceFatigue(undefined4 farmer,int amount)

{
  
  Farmer_AddFatigue(farmer,-amount);
  return;
}

// =============================================================================
// Function: Farmer_EatPowerBerry @ 0x0800EAFC
// =============================================================================
void Farmer_EatPowerBerry(int farmer)

{
  byte b_flag1;
  byte b_flag2;
  
  b_flag1 = *(byte *)(farmer + 0x44);
  b_flag2 = b_flag1 & 0xf;
  if (b_flag2 < 10) {
    *(byte *)(farmer + 0x44) = b_flag1 & 0xf0 | b_flag2 + 1 & 0xf;
    Farmer_AddStamina(farmer,10);
  }
  return;
}

// =============================================================================
// Function: Farmer_CycleHeldItemBack @ 0x0800EB3C
// =============================================================================
u32 Farmer_CycleHeldItemBack(int farmer)

{
  char c_char1;
  int i_val2;
  int i_val3;
  undefined4 stack_val_20;
  undefined4 stack_val_1c;
  undefined4 stack_val_18;
  
  c_char1 = Farmer_Routine_0800F604(farmer + 0x60);
  if (c_char1 == '\0') {
    Farmer_Routine_0800EFEC(&stack_val_20);
    i_val3 = farmer + 0x54;
    c_char1 = HeldItem_IsEmpty(i_val3);
    if (c_char1 == '\0') {
      i_val2 = HeldItem_GetKind(i_val3);
      if ((1 < i_val2) || (i_val2 < 0)) goto LAB_0800eb72;
      HeldItem_ToRucksackItem(&stack_val_1c,i_val3);
      stack_val_20 = stack_val_1c;
      HeldItem_Clear(i_val3);
    }
    i_val2 = 0;
    do {
      stack_val_18 = stack_val_20;
      Farmer_Routine_0800FD20(&stack_val_1c,farmer + 0x60);
      stack_val_20 = stack_val_1c;
      i_val2 = i_val2 + 1;
      c_char1 = Farmer_Routine_0800F06C(&stack_val_20);
    } while (c_char1 != '\0');
    stack_val_1c = stack_val_20;
    HeldItem_FromRucksackItem(i_val3);
  }
  else {
LAB_0800eb72:
    i_val2 = 0;
  }
  return i_val2;
}

// =============================================================================
// Function: Farmer_CycleHeldItemFront @ 0x0800EBC4
// =============================================================================
u32 Farmer_CycleHeldItemFront(int farmer)

{
  char c_char1;
  int i_val2;
  int i_val3;
  undefined4 stack_val_20;
  undefined4 stack_val_1c;
  undefined4 stack_val_18;
  
  c_char1 = Farmer_Routine_0800F604(farmer + 0x60);
  if (c_char1 == '\0') {
    Farmer_Routine_0800EFEC(&stack_val_20);
    i_val3 = farmer + 0x54;
    c_char1 = HeldItem_IsEmpty(i_val3);
    if (c_char1 == '\0') {
      i_val2 = HeldItem_GetKind(i_val3);
      if ((1 < i_val2) || (i_val2 < 0)) goto LAB_0800ebfa;
      HeldItem_ToRucksackItem(&stack_val_1c,i_val3);
      stack_val_20 = stack_val_1c;
      HeldItem_Clear(i_val3);
    }
    i_val2 = 0;
    do {
      stack_val_18 = stack_val_20;
      Farmer_Routine_0800FD38(&stack_val_1c,farmer + 0x60);
      stack_val_20 = stack_val_1c;
      i_val2 = i_val2 + 1;
      c_char1 = Farmer_Routine_0800F06C(&stack_val_20);
    } while (c_char1 != '\0');
    stack_val_1c = stack_val_20;
    HeldItem_FromRucksackItem(i_val3);
  }
  else {
LAB_0800ebfa:
    i_val2 = 0;
  }
  return i_val2;
}

// =============================================================================
// Function: Farmer_CycleToolBack @ 0x0800EC4C
// =============================================================================
u32 Farmer_CycleToolBack(int farmer)

{
  char c_char1;
  int i_val2;
  int i_val3;
  undefined1 temp_buf_20 [4];
  undefined1 stack_buf_1c [4];
  
  c_char1 = Farmer_Routine_0800F874(farmer + 0x60);
  if (c_char1 == '\0') {
    i_val2 = 0;
    i_val3 = farmer + 0x5c;
    do {
      gba_memcpy(stack_buf_1c,i_val3,2);
      Farmer_Routine_0800FE78(temp_buf_20,farmer + 0x60,stack_buf_1c);
      gba_memcpy(i_val3,temp_buf_20,2);
      i_val2 = i_val2 + 1;
      c_char1 = Product_GetId(i_val3);
    } while (c_char1 != '\0');
  }
  else {
    i_val2 = 0;
  }
  return i_val2;
}

// =============================================================================
// Function: Farmer_CycleToolFront @ 0x0800ECB0
// =============================================================================
u32 Farmer_CycleToolFront(int farmer)

{
  char c_char1;
  int i_val2;
  int i_val3;
  undefined1 temp_buf_20 [4];
  undefined1 stack_buf_1c [4];
  
  c_char1 = Farmer_Routine_0800F874(farmer + 0x60);
  if (c_char1 == '\0') {
    i_val2 = 0;
    i_val3 = farmer + 0x5c;
    do {
      gba_memcpy(stack_buf_1c,i_val3,2);
      Farmer_Routine_0800FEA0(temp_buf_20,farmer + 0x60,stack_buf_1c);
      gba_memcpy(i_val3,temp_buf_20,2);
      i_val2 = i_val2 + 1;
      c_char1 = Product_GetId(i_val3);
    } while (c_char1 != '\0');
  }
  else {
    i_val2 = 0;
  }
  return i_val2;
}

// =============================================================================
// Function: Farmer_Routine_0800ED54 @ 0x0800ED54
// =============================================================================
void Farmer_Routine_0800ED54(int farmer,int amount)

{
  uint u_val1;
  
  u_val1 = ((*(ushort *)(farmer + 0x46) & 0x7fff) >> 7) - amount;
  if ((int)u_val1 < 0) {
    u_val1 = 0;
  }
  else if (0xfe < (int)u_val1) {
    u_val1 = 0xff;
  }
  *(ushort *)(farmer + 0x46) =
       (ushort)0xFFFF807F & *(ushort *)(farmer + 0x46) | (ushort)((u_val1 & 0xff) << 7);
  return;
}

// =============================================================================
// Function: Farmer_IncrementPedometerStep @ 0x0800ED8C
// =============================================================================
void Farmer_IncrementPedometerStep(int farmer)

{
  byte b_flag1;
  bool b_flag2;
  uint u_val3;
  char c_char4;
  int item_id;
  uint u_val6;
  undefined1 facing_buffer [4];
  
  if (0x3B9AC9FF <
      ((*(uint *)(farmer + 0x48) & 0x1FFFFFFF) << 1 | (uint)(*(byte *)(farmer + 0x47) >> 7))) {
    return;
  }
  b_flag2 = false;
  c_char4 = Product_GetId(farmer + 0x5c);
  if (c_char4 == '\0') {
    facing_buffer[0] = Product_Construct(farmer + 0x5c);
    item_id = Item_GetId(facing_buffer);
    if (item_id != 0x4c) goto LAB_0800edce;
  }
  else {
LAB_0800edce:
    item_id = Farmer_Routine_0800F92C(farmer + 0x60,0x4c);
    if (item_id == -1) goto LAB_0800ede2;
  }
  b_flag2 = true;
LAB_0800ede2:
  u_val3 = 0x1FFFFFFF;
  if (b_flag2) {
    b_flag1 = *(byte *)(farmer + 0x47);
    u_val6 = ((*(uint *)(farmer + 0x48) & 0x1FFFFFFF) << 1 | (uint)(b_flag1 >> 7)) + 1;
    *(byte *)(farmer + 0x47) = b_flag1 & 0x7f | (byte)((u_val6 & 1) << 7);
    *(uint *)(farmer + 0x48) = *(uint *)(farmer + 0x48) & 0xe0000000 | u_val6 >> 1 & u_val3;
  }
  return;
}

// =============================================================================
// Function: Farmer_Routine_0800EE2C @ 0x0800EE2C
// =============================================================================
u32 Farmer_Routine_0800EE2C(int farmer)

{
  byte b_flag1;
  byte b_flag2;
  byte *pbVar3;
  uint u_val4;
  
  pbVar3 = (byte *)(farmer + 0x4b);
  b_flag1 = (*pbVar3 >> 5) + 1;
  b_flag2 = *pbVar3 & 0x1f;
  *pbVar3 = b_flag2 | b_flag1 * ' ';
  u_val4 = (uint)(4 < (b_flag1 & 7));
  if (u_val4 != 0) {
    *pbVar3 = b_flag2;
  }
  return u_val4;
}

// =============================================================================
// Function: Farmer_Routine_0800EE60 @ 0x0800EE60
// =============================================================================
void Farmer_Routine_0800EE60(int farmer)

{
  byte b_flag1;
  byte b_flag2;
  int i_val3;
  byte *pbVar4;
  
  if ((*(uint *)(farmer + 0x44) & 0x7f8000) == 0) {
    b_flag1 = *(byte *)(farmer + 0x4c);
    b_flag2 = b_flag1 & 0x7f;
    if (b_flag2 < 0x7f) {
      *(byte *)(farmer + 0x4c) = b_flag1 & 0x80 | b_flag2 + 1 & 0x7f;
    }
  }
  else {
    *(byte *)(farmer + 0x4c) = *(byte *)(farmer + 0x4c) & 0x80;
  }
  pbVar4 = (byte *)(farmer + 0x51);
  if ((*pbVar4 >> 5 < 7) && (i_val3 = Farmer_Routine_0800F5D8(farmer + 0x60), i_val3 != 0)) {
    *pbVar4 = *pbVar4 & 0x1f | ((*pbVar4 >> 5) + 1) * ' ';
  }
  return;
}

// =============================================================================
// Function: Farmer_Routine_0800EECC @ 0x0800EECC
// =============================================================================
u32 Farmer_Routine_0800EECC(int farmer,uint amount)

{
  ushort u_val1;
  bool b_flag2;
  
  u_val1 = *(ushort *)(farmer + 0x4c);
  b_flag2 = (u_val1 & 0x7fff) >> 7 < amount;
  if (b_flag2) {
    *(ushort *)(farmer + 0x4c) = (ushort)0xFFFF807F & u_val1 | (ushort)((amount & 0xff) << 7);
  }
  return (uint)b_flag2;
}

// =============================================================================
// Function: Farmer_Routine_0800EEF8 @ 0x0800EEF8
// =============================================================================
void Farmer_Routine_0800EEF8(int farmer)

{
  uint u_val1;
  uint u_val2;
  int i_val3;
  ushort *p_uint4;
  
  u_val1 = 0x1FFF;
  p_uint4 = (ushort *)(farmer + 0x50);
  u_val2 = (*p_uint4 & 0x1FFF) << 0x11 | *(uint *)(farmer + 0x4c) >> 0xf;
  if (u_val2 <= 0x3B9AC9FF) {
    i_val3 = u_val2 + 1;
    *(uint *)(farmer + 0x4c) = 0x7FFF & *(uint *)(farmer + 0x4c) | i_val3 * 0x8000;
    *p_uint4 = (ushort)0xFFFFE000 & *p_uint4 | (ushort)((uint)i_val3 >> 0x11) & (ushort)u_val1;
  }
  return;
}

// =============================================================================
// Function: ToolLevel_AddExperience @ 0x0800EF88
// =============================================================================
void ToolLevel_AddExperience(ushort *arg_1,int arg_2)

{
  uint *p_uint1;
  uint stack_val_10;
  uint stack_val_c;
  
  stack_val_10 = (uint)*arg_1 + arg_2;
  stack_val_c = 0xFFFF;
  p_uint1 = &stack_val_10;
  if (0xFFFF < (uint)*arg_1 + arg_2) {
    p_uint1 = &stack_val_c;
  }
  *arg_1 = (ushort)*p_uint1;
  return;
}

// =============================================================================
// Function: ToolLevel_SetTierLevel @ 0x0800EFB4
// =============================================================================
void ToolLevel_SetTierLevel(uint *arg_1,uint arg_2)

{
  
  if ((*arg_1 & 0x7ffff) >> 0x10 != arg_2) {
    *(byte *)((int)arg_1 + 2) = *(byte *)((int)arg_1 + 2) & 199 | (byte)((arg_2 & 7) << 3);
  }
  return;
}

// =============================================================================
// Function: Farmer_Routine_0800F004 @ 0x0800F004
// =============================================================================
u32 Farmer_Routine_0800F004(byte *farmer,undefined4 amount)

{
  byte b_flag1;
  undefined4 stack_val_c;
  
  *farmer = *farmer & 0xfc;
  stack_val_c = amount;
  b_flag1 = Item_Routine_0800DCB4(&stack_val_c);
  farmer[1] = b_flag1;
  b_flag1 = Item_Routine_0800DD6C(&stack_val_c);
  farmer[2] = b_flag1;
  b_flag1 = Item_Routine_0800DD8C(&stack_val_c);
  farmer[3] = b_flag1;
  return farmer;
}

// =============================================================================
// Function: Farmer_Routine_0800F040 @ 0x0800F040
// =============================================================================
u32 Farmer_Routine_0800F040(byte *farmer,undefined1 amount)

{
  byte b_flag1;
  undefined1 stack_buf_c [4];
  
  *farmer = *farmer & 0xfd | 1;
  stack_buf_c[0] = amount;
  b_flag1 = Item_GetQuality(stack_buf_c);
  farmer[1] = b_flag1;
  return farmer;
}

// =============================================================================
// Function: Farmer_Routine_0800F06C @ 0x0800F06C
// =============================================================================
u32 Farmer_Routine_0800F06C(byte *farmer)

{
  undefined4 u_val1;
  
  if ((*farmer & 1) == 0) {
    u_val1 = 0;
    if (farmer[1] < 0xab) goto LAB_0800f098;
  }
  else {
    if ((*farmer & 1) != 1) {
      u_val1 = 1;
      goto LAB_0800f098;
    }
    u_val1 = 0;
    if (farmer[1] < 0x5f) goto LAB_0800f098;
  }
  u_val1 = 1;
LAB_0800f098:
  return u_val1;
}

// =============================================================================
// Function: Farmer_Routine_0800F0A4 @ 0x0800F0A4
// =============================================================================
u32 Farmer_Routine_0800F0A4(undefined4 farmer,byte *amount)

{
  undefined1 temp_coords [4];
  
  if ((*amount & 1) == 0) {
    Item_SetIdAndClearQuality(temp_coords,amount[1]);
    Item_Routine_0800DE0C(temp_coords,(int)(char)amount[2],(int)(char)amount[3]);
    gba_memcpy(farmer,temp_coords,3);
  }
  else {
    Item_SetIdAndClearQuality(farmer,0xab);
  }
  return farmer;
}

// =============================================================================
// Function: Farmer_Routine_0800F0E8 @ 0x0800F0E8
// =============================================================================
u32 Farmer_Routine_0800F0E8(byte *farmer)

{
  byte stack_val_c;
  byte stack_bytes_b [3];
  
  if ((*farmer & 1) == 0) {
    Item_SetQuality(&stack_val_c,0x5f);
  }
  else {
    Item_SetQuality(stack_bytes_b,farmer[1]);
    stack_val_c = stack_bytes_b[0];
  }
  return (uint)stack_val_c;
}

// =============================================================================
// Function: Farmer_Routine_0800F124 @ 0x0800F124
// =============================================================================
u32 Farmer_Routine_0800F124(byte *farmer)

{
  uint u_val1;
  undefined1 stack_buf_c [4];
  
  u_val1 = 0;
  if ((*farmer & 1) == 0) {
    u_val1 = 1;
  }
  else if ((*farmer & 1) == 1) {
    Item_SetQuality(stack_buf_c,farmer[1]);
    u_val1 = Item_Routine_0800DFB0(stack_buf_c);
    u_val1 = u_val1 & 0xff;
  }
  *farmer = *farmer & 0xfd | (byte)((u_val1 & 1) << 1);
  return u_val1;
}

// =============================================================================
// Function: HeldItem_IsEmpty @ 0x0800F190
// =============================================================================
u32 HeldItem_IsEmpty(byte *arg_1)

{
  uint u_val1;
  
  if (5 < (*arg_1 & 7)) {
LAB_0800f1c4:
    u_val1 = 1;
    goto LAB_0800f1fc;
  }
  switch(*(uint *)(PTR_case_0800F1AC_0800f1a8 + (*arg_1 & 7) * 4) & 0xfffffffe) {
  case 0x800f1ac:
    goto LAB_0800f1c4;
  case 0x800f1c8:
    u_val1 = 0;
    if (arg_1[2] < 0xab) goto LAB_0800f1fc;
    break;
  case 0x800f1d2:
    u_val1 = 0;
    if (arg_1[2] < 0x5f) goto LAB_0800f1fc;
    break;
  case 0x800f1dc:
    u_val1 = 0;
    if (arg_1[2] < 8) goto LAB_0800f1fc;
    break;
  case 0x800f1ea:
    u_val1 = 0;
    goto LAB_0800f1fc;
  case 0x800f1ee:
    u_val1 = (uint)(*(ushort *)(arg_1 + 2) == 0xFFFF);
    goto LAB_0800f1fc;
  }
  u_val1 = 1;
LAB_0800f1fc:
  return u_val1;
}

// =============================================================================
// Function: HeldItem_GetFood @ 0x0800F20C
// =============================================================================
u32 HeldItem_GetFood(undefined4 arg_1,byte *arg_2)

{
  undefined1 temp_coords [4];
  
  if (((*arg_2 & 7) == 0) && (arg_2[2] < 0xab)) {
    Item_SetIdAndClearQuality(temp_coords,arg_2[2]);
    Item_Routine_0800DE0C(temp_coords,(int)(char)arg_2[3],(int)(char)arg_2[4]);
    gba_memcpy(arg_1,temp_coords,3);
  }
  else {
    Item_SetIdAndClearQuality(arg_1,0xab);
  }
  return arg_1;
}

// =============================================================================
// Function: HeldItem_GetArticle @ 0x0800F258
// =============================================================================
u32 HeldItem_GetArticle(byte *arg_1)

{
  byte stack_val_c;
  byte stack_bytes_b [3];
  
  if (((*arg_1 & 7) == 1) && (arg_1[2] < 0x5f)) {
    Item_SetQuality(&stack_val_c,arg_1[2]);
  }
  else {
    Item_SetQuality(stack_bytes_b,0x5f);
    stack_val_c = stack_bytes_b[0];
  }
  return (uint)stack_val_c;
}

// =============================================================================
// Function: HeldItem_ToRucksackItem @ 0x0800F294
// =============================================================================
u32 HeldItem_ToRucksackItem(undefined4 *arg_1,byte *arg_2)

{
  undefined4 stack_val_24;
  undefined4 stack_val_20;
  uint3 stack_val_1c;
  undefined1 temp_buf_18 [4];
  
  if (((*arg_2 & 7) == 0) && (arg_2[2] < 0xab)) {
    Item_SetIdAndClearQuality(&stack_val_24,arg_2[2]);
    Item_Routine_0800DE0C(&stack_val_24,(int)(char)arg_2[3],(int)(char)arg_2[4]);
    gba_memcpy(&stack_val_1c,&stack_val_24,3);
    Farmer_Routine_0800F004(&stack_val_20,(uint)stack_val_1c);
    if ((int)((uint)*arg_2 * 0x10000000) < 0) {
      Farmer_Routine_0800F124(&stack_val_20);
    }
    *arg_1 = stack_val_20;
  }
  else if (((*arg_2 & 7) == 1) && (arg_2[2] < 0x5f)) {
    Item_SetQuality(temp_buf_18,arg_2[2]);
    Farmer_Routine_0800F040(&stack_val_24,temp_buf_18[0]);
    if ((int)((uint)*arg_2 * 0x10000000) < 0) {
      Farmer_Routine_0800F124(&stack_val_24);
    }
    *arg_1 = stack_val_24;
  }
  else {
    Farmer_Routine_0800EFEC(arg_1);
  }
  return arg_1;
}

// =============================================================================
// Function: Farmer_Routine_0800F344 @ 0x0800F344
// =============================================================================
u32 Farmer_Routine_0800F344(byte *farmer)

{
  uint u_val1;
  
  if (((*farmer & 7) != 3) || (u_val1 = (uint)farmer[2], 7 < u_val1)) {
    u_val1 = 0xffffffff;
  }
  return u_val1;
}

// =============================================================================
// Function: Farmer_Routine_0800F360 @ 0x0800F360
// =============================================================================
u32 Farmer_Routine_0800F360(byte *farmer)

{
  uint u_val1;
  
  if (((*farmer & 7) != 5) || (u_val1 = (uint)*(ushort *)(farmer + 2), 0xFFFE < u_val1)) {
    u_val1 = 0xffffffff;
  }
  return u_val1;
}

// =============================================================================
// Function: HeldItem_SetFood @ 0x0800F3B0
// =============================================================================
void HeldItem_SetFood(byte *arg_1,undefined4 arg_2)

{
  byte b_flag1;
  undefined4 stack_val_c;
  
  *arg_1 = *arg_1 & 0xf0;
  stack_val_c = arg_2;
  b_flag1 = Item_Routine_0800DCB4(&stack_val_c);
  arg_1[2] = b_flag1;
  b_flag1 = Item_Routine_0800DD6C(&stack_val_c);
  arg_1[3] = b_flag1;
  b_flag1 = Item_Routine_0800DD8C(&stack_val_c);
  arg_1[4] = b_flag1;
  return;
}

// =============================================================================
// Function: HeldItem_SetArticle @ 0x0800F3E8
// =============================================================================
void HeldItem_SetArticle(byte *arg_1,undefined1 arg_2)

{
  byte b_flag1;
  undefined1 stack_buf_c [4];
  
  *arg_1 = *arg_1 & 0xf0 | 1;
  stack_buf_c[0] = arg_2;
  b_flag1 = Item_GetQuality(stack_buf_c);
  arg_1[2] = b_flag1;
  return;
}

// =============================================================================
// Function: HeldItem_FromRucksackItem @ 0x0800F418
// =============================================================================
void HeldItem_FromRucksackItem(byte *arg_1,undefined4 arg_2)

{
  byte b_flag1;
  int i_val2;
  undefined4 stack_val_18;
  undefined1 facing_buffer [4];
  undefined1 stack_val_10;
  
  stack_val_18 = arg_2;
  i_val2 = Farmer_Routine_0800F09C(&stack_val_18);
  if (i_val2 == 0) {
    *arg_1 = *arg_1 & 0xf8;
    b_flag1 = Farmer_Routine_0800F11C(&stack_val_18);
    *arg_1 = *arg_1 & 0xf7 | (b_flag1 & 1) << 3;
    Farmer_Routine_0800F0A4(facing_buffer,&stack_val_18);
    b_flag1 = Item_Routine_0800DCB4(facing_buffer);
    arg_1[2] = b_flag1;
    b_flag1 = Item_Routine_0800DD6C(facing_buffer);
    arg_1[3] = b_flag1;
    b_flag1 = Item_Routine_0800DD8C(facing_buffer);
    arg_1[4] = b_flag1;
  }
  else if (i_val2 == 1) {
    *arg_1 = *arg_1 & 0xf8 | 1;
    b_flag1 = Farmer_Routine_0800F11C(&stack_val_18);
    *arg_1 = *arg_1 & 0xf7 | (b_flag1 & 1) << 3;
    stack_val_10 = Farmer_Routine_0800F0E8(&stack_val_18);
    b_flag1 = Item_GetQuality();
    arg_1[2] = b_flag1;
  }
  else {
    *arg_1 = *arg_1 & 0xf7;
  }
  return;
}

// =============================================================================
// Function: HeldItem_CanThrow @ 0x0800F528
// =============================================================================
u32 HeldItem_CanThrow(byte *arg_1)

{
  uint u_val1;
  undefined1 stack_buf_c [4];
  
  u_val1 = 0;
  if ((*arg_1 & 7) == 0) {
    u_val1 = 1;
  }
  else if ((*arg_1 & 7) == 1) {
    Item_SetQuality(stack_buf_c,arg_1[2]);
    u_val1 = Item_Routine_0800DFB0(stack_buf_c);
    u_val1 = u_val1 & 0xff;
  }
  *arg_1 = *arg_1 & 0xf7 | (byte)((u_val1 & 1) << 3);
  return u_val1;
}

// =============================================================================
// Function: Farmer_Routine_0800F574 @ 0x0800F574
// =============================================================================
u32 Farmer_Routine_0800F574(undefined4 *farmer)

{
  int i_val1;
  undefined4 *p_uint2;
  undefined4 stack_val_1c;
  undefined1 temp_buf_18 [4];
  
  Farmer_Routine_0800EFEC(&stack_val_1c);
  *farmer = 0;
  i_val1 = 2;
  p_uint2 = farmer;
  do {
    p_uint2 = p_uint2 + 1;
    if (p_uint2 != (undefined4 *)0x0) {
      *p_uint2 = stack_val_1c;
    }
    i_val1 = i_val1 + -1;
  } while (i_val1 != 0);
  *farmer = 2;
  ArticleStack_AddAmount(temp_buf_18);
  farmer[9] = 0;
  i_val1 = 2;
  p_uint2 = farmer + 10;
  do {
    if (p_uint2 != (undefined4 *)0x0) {
      gba_memcpy(p_uint2,temp_buf_18,2);
    }
    i_val1 = i_val1 + -1;
    p_uint2 = (undefined4 *)((int)p_uint2 + 2);
  } while (i_val1 != 0);
  farmer[9] = 2;
  return farmer;
}

// =============================================================================
// Function: Farmer_Routine_0800F5D8 @ 0x0800F5D8
// =============================================================================
u32 Farmer_Routine_0800F5D8(uint *farmer)

{
  uint u_val1;
  undefined4 u_val2;
  
  u_val1 = *farmer;
  if ((u_val1 < 2) || (u_val1 < 4)) {
    u_val2 = 0;
  }
  else if (u_val1 < 8) {
    u_val2 = 1;
  }
  else {
    u_val2 = 2;
  }
  return u_val2;
}

// =============================================================================
// Function: Farmer_Routine_0800F604 @ 0x0800F604
// =============================================================================
u32 Farmer_Routine_0800F604(int *farmer)

{
  char c_char1;
  undefined4 u_val2;
  int *p_int3;
  
  p_int3 = farmer + *farmer + 1;
  do {
    farmer = farmer + 1;
    if (farmer == p_int3) {
      u_val2 = 1;
      goto LAB_0800f62c;
    }
    c_char1 = Farmer_Routine_0800F06C(farmer);
  } while (c_char1 != '\0');
  u_val2 = 0;
LAB_0800f62c:
  return u_val2;
}

// =============================================================================
// Function: Farmer_Routine_0800F634 @ 0x0800F634
// =============================================================================
u32 Farmer_Routine_0800F634(int *farmer)

{
  char c_char1;
  int *p_int2;
  int i_val3;
  
  i_val3 = 0;
  p_int2 = farmer + *farmer + 1;
  while (farmer = farmer + 1, farmer != p_int2) {
    c_char1 = Farmer_Routine_0800F06C(farmer);
    if (c_char1 != '\0') goto LAB_0800f662;
    i_val3 = i_val3 + 1;
  }
  i_val3 = -1;
LAB_0800f662:
  return i_val3;
}

// =============================================================================
// Function: Farmer_Routine_0800F668 @ 0x0800F668
// =============================================================================
u32 Farmer_Routine_0800F668(int *farmer)

{
  char c_char1;
  int i_val2;
  int *piStack_c;
  
  i_val2 = *farmer;
  for (piStack_c = farmer + i_val2 + 1; i_val2 = i_val2 + -1, piStack_c != farmer + 1;
      piStack_c = piStack_c + -1) {
    c_char1 = Farmer_Routine_0800F06C(piStack_c + -1);
    if (c_char1 != '\0') goto LAB_0800f6aa;
  }
  i_val2 = -1;
LAB_0800f6aa:
  return i_val2;
}

// =============================================================================
// Function: Farmer_Routine_0800F6B4 @ 0x0800F6B4
// =============================================================================
u32 Farmer_Routine_0800F6B4(int *farmer,int amount)

{
  char c_char1;
  int i_val2;
  int *p_int3;
  int i_val4;
  undefined1 temp_buf_18 [4];
  
  i_val4 = 0;
  p_int3 = farmer + *farmer + 1;
  while (farmer = farmer + 1, farmer != p_int3) {
    c_char1 = Farmer_Routine_0800F06C(farmer);
    if ((c_char1 == '\0') && (i_val2 = Farmer_Routine_0800F09C(farmer), i_val2 == 0)) {
      Farmer_Routine_0800F0A4(temp_buf_18,farmer);
      i_val2 = Item_Routine_0800DCB4(temp_buf_18);
      if (i_val2 == amount) goto LAB_0800f70a;
    }
    i_val4 = i_val4 + 1;
  }
  i_val4 = -1;
LAB_0800f70a:
  return i_val4;
}

// =============================================================================
// Function: Farmer_Routine_0800F714 @ 0x0800F714
// =============================================================================
u32 Farmer_Routine_0800F714(int *farmer,int amount)

{
  char c_char1;
  int i_val2;
  int *p_int3;
  int i_val4;
  undefined1 stack_buf_1c [4];
  
  i_val4 = 0;
  p_int3 = farmer + *farmer + 1;
  while (farmer = farmer + 1, farmer != p_int3) {
    c_char1 = Farmer_Routine_0800F06C(farmer);
    if ((c_char1 == '\0') && (i_val2 = Farmer_Routine_0800F09C(farmer), i_val2 == 1)) {
      stack_buf_1c[0] = Farmer_Routine_0800F0E8(farmer);
      i_val2 = Item_GetQuality(stack_buf_1c);
      if (i_val2 == amount) goto LAB_0800f770;
    }
    i_val4 = i_val4 + 1;
  }
  i_val4 = -1;
LAB_0800f770:
  return i_val4;
}

// =============================================================================
// Function: Farmer_Routine_0800F77C @ 0x0800F77C
// =============================================================================
u32 Farmer_Routine_0800F77C(int *farmer)

{
  char c_char1;
  int *p_int2;
  int i_val3;
  
  i_val3 = 0;
  p_int2 = farmer + *farmer + 1;
  while (farmer = farmer + 1, farmer != p_int2) {
    c_char1 = Farmer_Routine_0800F06C(farmer);
    if (c_char1 != '\0') {
      i_val3 = i_val3 + 1;
    }
  }
  return i_val3;
}

// =============================================================================
// Function: Farmer_Routine_0800F7AC @ 0x0800F7AC
// =============================================================================
u32 Farmer_Routine_0800F7AC(int *farmer,int amount)

{
  char c_char1;
  int i_val2;
  int *p_int3;
  int i_val4;
  undefined1 temp_buf_18 [4];
  
  i_val4 = 0;
  p_int3 = farmer + *farmer + 1;
  while (farmer = farmer + 1, farmer != p_int3) {
    c_char1 = Farmer_Routine_0800F06C(farmer);
    if ((c_char1 == '\0') && (i_val2 = Farmer_Routine_0800F09C(farmer), i_val2 == 0)) {
      Farmer_Routine_0800F0A4(temp_buf_18,farmer);
      i_val2 = Item_Routine_0800DCB4(temp_buf_18);
      if (i_val2 == amount) {
        i_val4 = i_val4 + 1;
      }
    }
  }
  return i_val4;
}

// =============================================================================
// Function: Farmer_Routine_0800F804 @ 0x0800F804
// =============================================================================
u32 Farmer_Routine_0800F804(int *farmer,int amount)

{
  char c_char1;
  int i_val2;
  int *p_int3;
  int i_val4;
  undefined1 stack_buf_1c [4];
  
  i_val4 = 0;
  p_int3 = farmer + *farmer + 1;
  while (farmer = farmer + 1, farmer != p_int3) {
    c_char1 = Farmer_Routine_0800F06C(farmer);
    if ((c_char1 == '\0') && (i_val2 = Farmer_Routine_0800F09C(farmer), i_val2 == 1)) {
      stack_buf_1c[0] = Farmer_Routine_0800F0E8(farmer);
      i_val2 = Item_GetQuality(stack_buf_1c);
      if (i_val2 == amount) {
        i_val4 = i_val4 + 1;
      }
    }
  }
  return i_val4;
}

// =============================================================================
// Function: Farmer_Routine_0800F874 @ 0x0800F874
// =============================================================================
u32 Farmer_Routine_0800F874(int farmer)

{
  char c_char1;
  undefined4 u_val2;
  int i_val3;
  int i_val4;
  
  i_val3 = *(int *)(farmer + 0x24);
  i_val4 = farmer + 0x28;
  do {
    if (i_val4 == i_val3 * 2 + farmer + 0x28) {
      u_val2 = 1;
LAB_0800f8a0:
      return u_val2;
    }
    c_char1 = Product_GetId(i_val4);
    if (c_char1 == '\0') {
      u_val2 = 0;
      goto LAB_0800f8a0;
    }
    i_val4 = i_val4 + 2;
  } while( true );
}

// =============================================================================
// Function: Farmer_Routine_0800F8A8 @ 0x0800F8A8
// =============================================================================
u32 Farmer_Routine_0800F8A8(int farmer)

{
  char c_char1;
  int i_val2;
  int i_val3;
  int i_val4;
  
  i_val4 = 0;
  i_val2 = *(int *)(farmer + 0x24);
  for (i_val3 = farmer + 0x28; i_val3 != i_val2 * 2 + farmer + 0x28; i_val3 = i_val3 + 2) {
    c_char1 = Product_GetId(i_val3);
    if (c_char1 != '\0') goto LAB_0800f8da;
    i_val4 = i_val4 + 1;
  }
  i_val4 = -1;
LAB_0800f8da:
  return i_val4;
}

// =============================================================================
// Function: Farmer_Routine_0800F8E0 @ 0x0800F8E0
// =============================================================================
u32 Farmer_Routine_0800F8E0(int farmer)

{
  char c_char1;
  int i_val2;
  int stack_val_c;
  
  i_val2 = *(int *)(farmer + 0x24);
  for (stack_val_c = i_val2 * 2 + farmer + 0x28; i_val2 = i_val2 + -1, stack_val_c != farmer + 0x28;
      stack_val_c = stack_val_c + -2) {
    c_char1 = Product_GetId(stack_val_c + -2);
    if (c_char1 != '\0') goto LAB_0800f924;
  }
  i_val2 = -1;
LAB_0800f924:
  return i_val2;
}

// =============================================================================
// Function: Farmer_Routine_0800F92C @ 0x0800F92C
// =============================================================================
u32 Farmer_Routine_0800F92C(int farmer,int amount)

{
  char c_char1;
  int item_id;
  int i_val3;
  int i_val4;
  int i_val5;
  undefined1 stack_buf_1c [4];
  
  i_val5 = 0;
  i_val3 = *(int *)(farmer + 0x24);
  for (i_val4 = farmer + 0x28; i_val4 != i_val3 * 2 + farmer + 0x28; i_val4 = i_val4 + 2) {
    c_char1 = Product_GetId(i_val4);
    if (c_char1 == '\0') {
      stack_buf_1c[0] = Product_Construct(i_val4);
      item_id = Item_GetId(stack_buf_1c);
      if (item_id == amount) goto LAB_0800f982;
    }
    i_val5 = i_val5 + 1;
  }
  i_val5 = -1;
LAB_0800f982:
  return i_val5;
}

// =============================================================================
// Function: Farmer_Routine_0800F990 @ 0x0800F990
// =============================================================================
u32 Farmer_Routine_0800F990(int farmer,int amount)

{
  char c_char1;
  int item_id;
  int i_val3;
  int i_val4;
  int i_val5;
  undefined1 stack_buf_1c [4];
  
  i_val5 = 0;
  i_val3 = *(int *)(farmer + 0x24);
  for (i_val4 = farmer + 0x28; i_val4 != i_val3 * 2 + farmer + 0x28; i_val4 = i_val4 + 2) {
    c_char1 = Product_GetId(i_val4);
    if (c_char1 == '\0') {
      stack_buf_1c[0] = Product_Construct(i_val4);
      item_id = Item_GetId(stack_buf_1c);
      if (item_id == amount) {
        item_id = Product_GetPrice(i_val4);
        i_val5 = (i_val5 + 99) - item_id;
      }
    }
    else {
      i_val5 = i_val5 + 99;
    }
  }
  return i_val5;
}

// =============================================================================
// Function: Farmer_Routine_0800F9FC @ 0x0800F9FC
// =============================================================================
u32 Farmer_Routine_0800F9FC(int farmer,int amount)

{
  char c_char1;
  int item_id;
  int i_val3;
  int i_val4;
  int i_val5;
  undefined1 stack_buf_1c [4];
  
  i_val5 = 0;
  i_val3 = *(int *)(farmer + 0x24);
  for (i_val4 = farmer + 0x28; i_val4 != i_val3 * 2 + farmer + 0x28; i_val4 = i_val4 + 2) {
    c_char1 = Product_GetId(i_val4);
    if (c_char1 == '\0') {
      stack_buf_1c[0] = Product_Construct(i_val4);
      item_id = Item_GetId(stack_buf_1c);
      if (item_id == amount) {
        item_id = Product_GetPrice(i_val4);
        i_val5 = i_val5 + item_id;
      }
    }
  }
  return i_val5;
}

// =============================================================================
// Function: Farmer_Routine_0800FA60 @ 0x0800FA60
// =============================================================================
void Farmer_Routine_0800FA60(uint *farmer)

{
  uint u_val1;
  int i_val2;
  int i_val3;
  uint *p_uint4;
  int i_val5;
  uint u_val6;
  uint *end_ptr;
  uint *curr_ptr;
  int i_val9;
  uint u_val10;
  uint *p_uint11;
  uint stack_val_28;
  undefined1 *puStack_24;
  
  u_val1 = Farmer_Routine_0800F5D8();
  if (u_val1 < 2) {
    u_val1 = 2 << (u_val1 + 1 & 0xff);
    Farmer_Routine_0800EFEC(&stack_val_28);
    u_val6 = *farmer;
    if (u_val1 < u_val6) {
      for (end_ptr = farmer + u_val1 + 1; end_ptr != farmer + u_val6 + 1; end_ptr = end_ptr + 1) {
      }
      *farmer = *farmer - ((int)(farmer + u_val6 + 1) - (int)(farmer + u_val1 + 1) >> 2);
    }
    else {
      u_val10 = u_val1 - u_val6;
      end_ptr = farmer + u_val6 + 1;
      if ((u_val10 != 0) && (u_val10 <= 8 - u_val6)) {
        u_val6 = u_val6 - ((int)end_ptr - (int)(farmer + 1) >> 2);
        if (u_val10 < u_val6) {
          p_uint11 = end_ptr + -u_val10;
          p_uint4 = end_ptr;
          for (curr_ptr = p_uint11; curr_ptr != end_ptr; curr_ptr = curr_ptr + 1) {
            if (p_uint4 != (uint *)0x0) {
              *p_uint4 = *curr_ptr;
            }
            p_uint4 = p_uint4 + 1;
          }
          *farmer = *farmer + u_val10;
          p_uint4 = end_ptr;
          for (i_val9 = (int)p_uint11 - (int)end_ptr >> 2; 0 < i_val9; i_val9 = i_val9 + -1) {
            p_uint4 = p_uint4 + -1;
            p_uint11 = p_uint11 + -1;
            *p_uint4 = *p_uint11;
          }
          for (; u_val10 != 0; u_val10 = u_val10 - 1) {
            *end_ptr = stack_val_28;
            end_ptr = end_ptr + 1;
          }
        }
        else {
          for (i_val9 = u_val10 - u_val6; i_val9 != 0; i_val9 = i_val9 + -1) {
            if (end_ptr != (uint *)0x0) {
              *end_ptr = stack_val_28;
            }
            end_ptr = end_ptr + 1;
          }
          *farmer = *farmer + (u_val10 - u_val6);
          *farmer = *farmer + u_val6;
        }
      }
    }
    ArticleStack_AddAmount(&stack_val_28);
    end_ptr = farmer + 9;
    u_val6 = *end_ptr;
    if (u_val1 < u_val6) {
      i_val2 = u_val6 * 2 + 4 + (int)end_ptr;
      i_val5 = (int)farmer + u_val1 * 2 + 0x28;
      for (i_val9 = i_val5; i_val9 != i_val2; i_val9 = i_val9 + 2) {
      }
      *end_ptr = *end_ptr - (i_val2 - i_val5 >> 1);
    }
    else {
      u_val1 = u_val1 - u_val6;
      i_val9 = u_val6 * 2 + 4 + (int)end_ptr;
      if ((u_val1 != 0) && (u_val1 <= 8 - u_val6)) {
        u_val6 = u_val6 - (i_val9 - (int)(farmer + 10) >> 1);
        if (u_val1 < u_val6) {
          i_val3 = i_val9 + u_val1 * -2;
          i_val2 = i_val9;
          puStack_24 = (undefined1 *)&stack_val_28;
          for (i_val5 = i_val3; i_val5 != i_val9; i_val5 = i_val5 + 2) {
            if (i_val2 != 0) {
              gba_memcpy(i_val2,i_val5,2);
            }
            i_val2 = i_val2 + 2;
          }
          *end_ptr = *end_ptr + u_val1;
          i_val2 = i_val9;
          for (i_val5 = i_val3 - i_val9 >> 1; 0 < i_val5; i_val5 = i_val5 + -1) {
            i_val2 = i_val2 + -2;
            i_val3 = i_val3 + -2;
            gba_memcpy(i_val2,i_val3,2);
          }
          for (; u_val1 != 0; u_val1 = u_val1 - 1) {
            gba_memcpy(i_val9,puStack_24,2);
            i_val9 = i_val9 + 2;
          }
        }
        else {
          puStack_24 = (undefined1 *)&stack_val_28;
          for (i_val2 = u_val1 - u_val6; i_val2 != 0; i_val2 = i_val2 + -1) {
            if (i_val9 != 0) {
              gba_memcpy(i_val9,puStack_24,2);
            }
            i_val9 = i_val9 + 2;
          }
          *end_ptr = *end_ptr + (u_val1 - u_val6);
          *end_ptr = *end_ptr + u_val6;
        }
      }
    }
  }
  return;
}

// =============================================================================
// Function: Farmer_Routine_0800FCE4 @ 0x0800FCE4
// =============================================================================
u32 Farmer_Routine_0800FCE4(undefined4 *farmer,int amount,int slot_id)

{
  char c_char1;
  undefined4 u_val2;
  undefined4 *p_uint3;
  undefined4 stack_val_10;
  
  p_uint3 = (undefined4 *)(amount + slot_id * 4 + 4);
  c_char1 = Farmer_Routine_0800F06C(p_uint3);
  if (c_char1 == '\0') {
    u_val2 = *p_uint3;
    Farmer_Routine_0800EFEC(&stack_val_10);
    *p_uint3 = stack_val_10;
    *farmer = u_val2;
  }
  else {
    Farmer_Routine_0800EFEC(farmer);
  }
  return farmer;
}

// =============================================================================
// Function: Farmer_Routine_0800FD20 @ 0x0800FD20
// =============================================================================
u32 Farmer_Routine_0800FD20(undefined4 farmer)

{
  
  VTable_Routine_080D7CFC();
  return farmer;
}

// =============================================================================
// Function: Farmer_Routine_0800FD38 @ 0x0800FD38
// =============================================================================
u32 Farmer_Routine_0800FD38(undefined4 farmer)

{
  
  VTable_Routine_080D7D40();
  return farmer;
}

// =============================================================================
// Function: Farmer_Routine_0800FD50 @ 0x0800FD50
// =============================================================================
u32 Farmer_Routine_0800FD50(int *farmer,int amount,int slot_id)

{
  char c_char1;
  int i_val2;
  int *p_int3;
  int stack_val_20;
  uint3 stack_val_1c;
  
  if (amount < 0xab) {
    i_val2 = *farmer;
    p_int3 = farmer + 1;
    if ((slot_id != 0) && (p_int3 != farmer + i_val2 + 1)) {
      do {
        c_char1 = Farmer_Routine_0800F06C(p_int3);
        if (c_char1 != '\0') {
          Item_SetIdAndClearQuality(&stack_val_1c,amount);
          Farmer_Routine_0800F004(&stack_val_20,(uint)stack_val_1c);
          *p_int3 = stack_val_20;
          slot_id = slot_id + -1;
        }
        p_int3 = p_int3 + 1;
      } while ((slot_id != 0) && (p_int3 != farmer + i_val2 + 1));
    }
  }
  return slot_id;
}

// =============================================================================
// Function: Farmer_Routine_0800FDC4 @ 0x0800FDC4
// =============================================================================
u32 Farmer_Routine_0800FDC4(int *farmer,int amount,int slot_id)

{
  char c_char1;
  int *p_int2;
  int stack_val_1c;
  undefined1 temp_buf_18 [4];
  
  if (amount < 0x5f) {
    p_int2 = farmer + *farmer + 1;
    while ((farmer = farmer + 1, slot_id != 0 && (farmer != p_int2))) {
      c_char1 = Farmer_Routine_0800F06C(farmer);
      if (c_char1 != '\0') {
        Item_SetQuality(temp_buf_18,amount);
        Farmer_Routine_0800F040(&stack_val_1c,temp_buf_18[0]);
        *farmer = stack_val_1c;
        slot_id = slot_id + -1;
      }
    }
  }
  return slot_id;
}

// =============================================================================
// Function: Farmer_Routine_0800FE24 @ 0x0800FE24
// =============================================================================
u32 Farmer_Routine_0800FE24(undefined4 farmer,int amount,int slot_id)

{
  char c_char1;
  int i_val2;
  undefined1 temp_buf_18 [4];
  undefined1 facing_buffer [4];
  
  i_val2 = slot_id * 2 + amount + 0x28;
  c_char1 = Product_GetId(i_val2);
  if (c_char1 == '\0') {
    gba_memcpy(temp_buf_18,i_val2,2);
    ArticleStack_AddAmount(facing_buffer);
    gba_memcpy(i_val2,facing_buffer,2);
    gba_memcpy(farmer,temp_buf_18,2);
  }
  else {
    ArticleStack_AddAmount(farmer);
  }
  return farmer;
}

// =============================================================================
// Function: Farmer_Routine_0800FE78 @ 0x0800FE78
// =============================================================================
u32 Farmer_Routine_0800FE78(undefined4 farmer,int amount,undefined4 slot_id)

{
  undefined1 temp_coords [4];
  
  gba_memcpy(temp_coords,slot_id,2);
  VTable_Routine_080D7D88(farmer,amount + 0x24,temp_coords);
  return farmer;
}

// =============================================================================
// Function: Farmer_Routine_0800FEA0 @ 0x0800FEA0
// =============================================================================
u32 Farmer_Routine_0800FEA0(undefined4 farmer,int amount,undefined4 slot_id)

{
  undefined1 temp_coords [4];
  
  gba_memcpy(temp_coords,slot_id,2);
  VTable_Routine_080D7DF4(farmer,amount + 0x24,temp_coords);
  return farmer;
}

// =============================================================================
// Function: Farmer_Routine_0800FEC8 @ 0x0800FEC8
// =============================================================================
u32 Farmer_Routine_0800FEC8(int farmer,int amount,uint slot_id)

{
  char c_char1;
  int i_val2;
  int item_id;
  uint u_val4;
  uint *p_uint5;
  int i_val6;
  undefined1 temp_buf_28 [4];
  uint stack_val_24;
  uint stack_val_20;
  undefined1 stack_val_1c;
  undefined1 stack_buf_1b [3];
  uint stack_val_18;
  
  if (amount < 0x51) {
    i_val2 = *(int *)(farmer + 0x24);
    for (i_val6 = farmer + 0x28; (slot_id != 0 && (i_val6 != i_val2 * 2 + farmer + 0x28));
        i_val6 = i_val6 + 2) {
      stack_val_24 = slot_id;
      c_char1 = Product_GetId(i_val6);
      if (c_char1 == '\0') {
        stack_buf_1b[0] = Product_Construct(i_val6);
        item_id = Item_GetId(stack_buf_1b);
        if (item_id == amount) {
          item_id = Product_GetPrice(i_val6);
          stack_val_18 = 99U - item_id;
          p_uint5 = &stack_val_24;
          if (99U - item_id < stack_val_24) {
            p_uint5 = &stack_val_18;
          }
          u_val4 = *p_uint5;
          Product_GetName(i_val6,u_val4);
          goto LAB_0800ff70;
        }
      }
      else {
        stack_val_20 = 99;
        p_uint5 = &stack_val_24;
        if (99 < stack_val_24) {
          p_uint5 = &stack_val_20;
        }
        u_val4 = *p_uint5;
        Item_SetId(&stack_val_1c,amount);
        ArticleStack_SubtractAmount(temp_buf_28,stack_val_1c,u_val4);
        gba_memcpy(i_val6,temp_buf_28,2);
LAB_0800ff70:
        stack_val_24 = stack_val_24 - u_val4;
      }
      slot_id = stack_val_24;
    }
  }
  return slot_id;
}

// =============================================================================
// Function: Farmer_Routine_0800FF8C @ 0x0800FF8C
// =============================================================================
void Farmer_Routine_0800FF8C(undefined4 *farmer)

{
  ushort u_val1;
  
  *farmer = 0;
  u_val1 = (ushort)0xFFFFFC00;
  *(ushort *)(farmer + 9) = u_val1 & *(ushort *)(farmer + 9) | 0x234;
  *(byte *)((int)farmer + 0x25) = *(byte *)((int)farmer + 0x25) & 3;
  *(ushort *)((int)farmer + 0x26) = u_val1 & *(ushort *)((int)farmer + 0x26);
  *(byte *)((int)farmer + 0x27) = *(byte *)((int)farmer + 0x27) & 3;
  *(ushort *)(farmer + 10) = u_val1 & *(ushort *)(farmer + 10);
  return;
}

// =============================================================================
// Function: Farmer_Routine_0800FFE0 @ 0x0800FFE0
// =============================================================================
u32 Farmer_Routine_0800FFE0(undefined4 farmer,int amount)

{
  
  gba_memcpy(farmer,amount + 0x24,6);
  return farmer;
}

// =============================================================================
// Function: Farmer_Routine_0800FFF4 @ 0x0800FFF4
// =============================================================================
void Farmer_Routine_0800FFF4(uint *farmer,undefined1 amount)

{
  undefined1 *p_uint1;
  
  if (*farmer < 0x1e) {
    p_uint1 = (undefined1 *)((int)farmer + *farmer + 4);
    if (p_uint1 != (undefined1 *)0x0) {
      *p_uint1 = amount;
    }
    *farmer = *farmer + 1;
  }
  return;
}

// =============================================================================
// Function: Farmer_Routine_08010014 @ 0x08010014
// =============================================================================
void Farmer_Routine_08010014(int farmer,undefined4 amount)

{
  
  gba_memcpy(farmer + 0x24,amount,6);
  return;
}

// =============================================================================
// Function: Farmer_Routine_08010024 @ 0x08010024
// =============================================================================
void Farmer_Routine_08010024(int *farmer)

{
  int *p_int1;
  int *p_int2;
  
  p_int1 = (int *)((int)farmer + *farmer + 4);
  for (p_int2 = farmer + 1; p_int2 != p_int1; p_int2 = (int *)((int)p_int2 + 1)) {
  }
  *farmer = *farmer - ((int)p_int1 - (int)(farmer + 1));
  return;
}

// =============================================================================
// Function: Farmer_Routine_0801004C @ 0x0801004C
// =============================================================================
void Farmer_Routine_0801004C(undefined4 *farmer,int amount)

{
  undefined4 u_val1;
  int *p_int2;
  undefined1 temp_buf_30 [4];
  int *piStack_2c;
  int *apiStack_28 [3];
  int **ppiStack_1c;
  undefined4 stack_val_18;
  
  HW_Routine_08008980(temp_buf_30);
  piStack_2c = (int *)0x0;
  apiStack_28[0] = (int *)(uint)(*(char *)(amount + 0x364) == '\0');
  u_val1 = Dispatcher_Routine_080005D4(8);
  p_int2 = (int *)Farmer_Routine_08011DC4(u_val1,*(undefined4 *)(amount + 4),apiStack_28);
  if ((p_int2 != piStack_2c) && (piStack_2c != (int *)0x0)) {
    _call_via_r2(piStack_2c,3,*(undefined4 *)(*piStack_2c + 8));
  }
  piStack_2c = (int *)0x0;
  apiStack_28[0] = p_int2;
  Scene_Routine_0800082C(apiStack_28);
  *farmer = 0;
  stack_val_18 = 0;
  apiStack_28[0] = (int *)0x0;
  ppiStack_1c = apiStack_28;
  if (piStack_2c != (int *)0x0) {
    _call_via_r2(piStack_2c,3,*(undefined4 *)(*piStack_2c + 8));
  }
  HW_Routine_08008A68(temp_buf_30,2);
  return farmer;
}

// =============================================================================
// Function: Farmer_Routine_08010158 @ 0x08010158
// =============================================================================
void Farmer_Routine_08010158(undefined4 *farmer,undefined4 amount)

{
  
  *farmer = gRomData_080E5BF8;
  *gIWRAM_PedometerStepCount = 0;
  VTable_Routine_080D7E64(farmer + 0xde,2);
  ScriptEngine_Routine_0803EEC8(farmer + 2,2);
  if (farmer[1] != 0) {
    VTable_Routine_080D4480(farmer[1],3);
  }
  SramProxy_VerifyBufferParity(farmer,amount);
  return;
}

// =============================================================================
// Function: Farmer_Routine_080101A0 @ 0x080101A0
// =============================================================================
u32 Farmer_Routine_080101A0(undefined4 *farmer,int *amount)

{
  int i_val1;
  ushort *p_uint2;
  int i_val3;
  
  *farmer = gRomData_080E5BF8;
  i_val1 = *amount;
  *amount = 0;
  farmer[1] = i_val1;
  ScriptEngine_StartEventScript(farmer + 2);
  *(undefined1 *)(farmer + 0xd9) = 0;
  *(undefined1 *)(farmer + 0xdb) = 0;
  farmer[0xdc] = 0x1d;
  p_uint2 = (ushort *)(farmer + 0xdd);
  *(byte *)p_uint2 = (byte)*p_uint2 & 0xe0 | 6;
  *p_uint2 = (ushort)0xFFFFF81F & *p_uint2;
  farmer[0xde] = 0;
  farmer[0xe3] = 0;
  farmer[0x134] = 0;
  i_val1 = (int)farmer + 0x4DC;
  i_val3 = 5;
  do {
    VTable_Routine_080D4130(i_val1);
    i_val1 = i_val1 + 0xc;
    i_val3 = i_val3 + -1;
  } while (i_val3 != -1);
  i_val1 = (int)farmer + 0x524;
  i_val3 = 3;
  do {
    VTable_Routine_080D40CC(i_val1);
    i_val1 = i_val1 + 0xc;
    i_val3 = i_val3 + -1;
  } while (i_val3 != -1);
  *gIWRAM_PedometerStepCount = farmer;
  if (*amount != 0) {
    VTable_Routine_080D4480(*amount,3);
  }
  return farmer;
}

// =============================================================================
// Function: Farmer_Routine_08010268 @ 0x08010268
// =============================================================================
undefined8
Farmer_Routine_08010268(undefined4 *farmer,undefined4 amount,undefined4 slot_id,undefined4 flags,
             undefined4 arg_5)

{
  undefined4 u_val1;
  ushort *p_uint2;
  int i_val3;
  int i_val4;
  
  *farmer = gRomData_080E5BF8;
  u_val1 = Dispatcher_Routine_080005D4(0x34F4);
  u_val1 = Farmer_Routine_08010358(u_val1,amount,slot_id,flags,arg_5);
  farmer[1] = u_val1;
  ScriptEngine_StartEventScript(farmer + 2);
  *(undefined1 *)(farmer + 0xd9) = 1;
  farmer[0xda] = 0xab;
  *(undefined1 *)(farmer + 0xdb) = 0;
  farmer[0xdc] = 0x1d;
  p_uint2 = (ushort *)(farmer + 0xdd);
  *(byte *)p_uint2 = (byte)*p_uint2 & 0xe0 | 6;
  *p_uint2 = (ushort)0xFFFFF81F & *p_uint2;
  farmer[0xde] = 0;
  farmer[0xe3] = 0;
  farmer[0x134] = 0;
  i_val3 = (int)farmer + 0x4DC;
  i_val4 = 5;
  do {
    VTable_Routine_080D4130(i_val3);
    i_val3 = i_val3 + 0xc;
    i_val4 = i_val4 + -1;
  } while (i_val4 != -1);
  i_val3 = (int)farmer + 0x524;
  i_val4 = 3;
  do {
    VTable_Routine_080D40CC(i_val3);
    i_val3 = i_val3 + 0xc;
    i_val4 = i_val4 + -1;
  } while (i_val4 != -1);
  *gIWRAM_PedometerStepCount = farmer;
  return farmer;
}

// =============================================================================
// Function: Farmer_Routine_08010348 @ 0x08010348
// =============================================================================
void Farmer_Routine_08010348(void)

{
  int i_val1;
  
  do {
    i_val1 = math_rand();
  } while (i_val1 == 0);
  return;
}

// =============================================================================
// Function: Farmer_Routine_08010358 @ 0x08010358
// =============================================================================
undefined8
Farmer_Routine_08010358(uint *farmer,undefined4 amount,undefined4 slot_id,undefined1 flags,
             undefined4 arg_5)

{
  ushort u_val1;
  bool b_flag2;
  uint *p_uint3;
  uint *p_uint4;
  int *p_int5;
  char c_char6;
  byte *pbVar7;
  int i_val8;
  int i_val9;
  int i_val10;
  ushort *p_uint11;
  int i_val12;
  byte *pbVar13;
  undefined1 saved_r4;
  int i_val14;
  byte *pbVar15;
  byte *pbVar16;
  ushort saved_r9;
  undefined4 u_val17;
  undefined4 u_val18;
  uint stack_val_c0;
  undefined1 stack_buf_bc [4];
  undefined4 stack_val_b8;
  undefined4 stack_val_b4;
  int stack_ints_b0 [2];
  int stack_ints_a8 [2];
  int stack_ints_a0 [2];
  int stack_ints_98 [2];
  int stack_ints_90 [2];
  int stack_ints_88 [2];
  uint *puStack_80;
  int *piStack_7c;
  uint stack_val_78;
  int *piStack_74;
  uint stack_val_70;
  int *piStack_6c;
  uint stack_val_68;
  int *piStack_64;
  uint stack_val_60;
  int *piStack_5c;
  uint stack_val_58;
  int *piStack_54;
  uint stack_val_50;
  uint stack_val_4c;
  uint stack_val_48;
  uint stack_val_44;
  uint stack_val_40;
  int *piStack_3c;
  int *piStack_38;
  int *piStack_34;
  int *piStack_30;
  int *piStack_2c;
  uint stack_val_28;
  uint stack_val_24;
  
  *(byte *)farmer = (byte)*farmer & 0xe0;
  *farmer = *farmer & 0xFFFC1FFF;
  *(ushort *)((int)farmer + 2) = (ushort)0xFFFFFE03 & *(ushort *)((int)farmer + 2);
  *(byte *)((int)farmer + 3) = *(byte *)((int)farmer + 3) & 1;
  *(byte *)(farmer + 1) = (byte)farmer[1] & 0xfe;
  u_val17 = 0x1d;
  u_val18 = 0;
  stack_val_c0 = CONCAT22(((ushort)0xFFFFFF00 & saved_r9 | saved_r9 & 0xe0 | 6) &
                       (ushort)0xFFFFF81F,CONCAT11(saved_r4,1)) & 0xffff80ff | 0x400;
  farmer[2] = 0;
  farmer[3] = 0;
  farmer[4] = stack_val_c0;
  stack_buf_bc[0] = flags;
  puStack_80 = farmer;
  Farm_Routine_08009A48(farmer + 5);
  Animal_Routine_0809AB8C((byte *)((int)puStack_80 + 0x1AA8));
  Farmer_Routine_0800E354((byte *)((int)puStack_80 + 0x1BD8),slot_id,stack_buf_bc,puStack_80,u_val17,
                u_val18);
  NPC_InitScheduleWaypoint((byte *)((int)puStack_80 + 0x1C70),arg_5);
  p_uint3 = puStack_80;
  Farmer_Routine_0800FF8C(puStack_80 + 0x728);
  p_uint11 = (ushort *)((int)p_uint3 + 0x1CCC);
  u_val1 = (ushort)0xFFFFFC00;
  *p_uint11 = u_val1 & *p_uint11 | 0x234;
  *(byte *)((int)p_uint11 + 1) = *(byte *)((int)p_uint11 + 1) & 3;
  p_uint11[1] = u_val1 & p_uint11[1];
  *(byte *)((int)p_uint11 + 3) = *(byte *)((int)p_uint11 + 3) & 3;
  p_uint11[2] = u_val1 & p_uint11[2];
  NPC_Routine_0809EEE8((byte *)((int)p_uint3 + 0x1CD4));
  NPC_ResetData((byte *)((int)p_uint3 + 0x214C));
  u_val17 = Farmer_Routine_08010348();
  i_val12 = 0x21CC;
  pbVar13 = (byte *)((int)p_uint3 + 0x21CC);
  *(undefined4 *)pbVar13 = u_val17;
  pbVar13[4] = 0;
  i_val8 = 0x21E0;
  pbVar13[5] = 0;
  pbVar13[6] = 0;
  pbVar13[7] = 0;
  *(byte *)((int)p_uint3 + 0x21E0) = 0;
  *(byte *)((int)p_uint3 + i_val12 + 0x24) = 0;
  *(byte *)((int)p_uint3 + i_val8 + 0x20) = 0;
  stack_val_b8 = 0;
  pbVar7 = (byte *)((int)p_uint3 + i_val12 + 8);
  i_val12 = 8;
  pbVar15 = (byte *)((int)p_uint3 + 0x2C48);
  pbVar16 = (byte *)((int)p_uint3 + 0x2C4A);
  piStack_3c = stack_ints_a8;
  piStack_38 = stack_ints_a0;
  piStack_34 = stack_ints_98;
  piStack_30 = stack_ints_90;
  piStack_2c = stack_ints_88;
  do {
    *pbVar7 = 0;
    i_val12 = i_val12 + -1;
    pbVar7 = pbVar7 + 1;
  } while (0 < i_val12);
  stack_val_b4 = 0;
  pbVar13 = pbVar13 + 0x10;
  i_val12 = 4;
  do {
    *pbVar13 = 0;
    i_val12 = i_val12 + -1;
    pbVar13 = pbVar13 + 1;
  } while (0 < i_val12);
  Farmer_Routine_080114F8((byte *)((int)puStack_80 + 0x2210));
  Animal_Routine_0809A8AC((byte *)((int)puStack_80 + 0x2214));
  i_val12 = 0x2C1C;
  *pbVar15 = *pbVar15 | 3;
  *(uint *)((int)puStack_80 + i_val12 + 0x2c) =
       *(uint *)((int)puStack_80 + i_val12 + 0x2c) & 0xFFF80003;
  *pbVar16 = *pbVar16 & 7;
  pbVar7 = (byte *)((int)puStack_80 + 0x2C4C);
  i_val12 = 9;
  do {
    *pbVar7 = 0;
    pbVar7[2] = 0;
    pbVar7[3] = 0;
    pbVar7 = pbVar7 + 4;
    i_val12 = i_val12 + -1;
  } while (i_val12 != -1);
  Farmer_Routine_08011510((byte *)((int)puStack_80 + 0x2C74));
  p_uint3 = puStack_80;
  NPC_Routine_0809CD78(puStack_80 + 0xb20);
  Field_ClearPlotGrid((byte *)((int)p_uint3 + 0x2E58));
  NPC_ClearWaypoints(p_uint3 + 0xd20);
  pbVar7 = (byte *)((int)p_uint3 + 0x3494);
  i_val12 = 2;
  do {
    *pbVar7 = *pbVar7 & 0xf0;
    pbVar7 = pbVar7 + 0x10;
    i_val12 = i_val12 + -1;
  } while (i_val12 != -1);
  *(byte *)((int)puStack_80 + 0x34C4) = 0;
  *(byte *)((int)puStack_80 + 0x34C5) = 0;
  NPC_Routine_080A1A48((byte *)((int)puStack_80 + 0x34C8));
  NPC_Routine_0809C4E4((byte *)((int)puStack_80 + 0x34D8));
  p_uint3 = puStack_80;
  NPC_UpdateSchedule((byte *)((int)puStack_80 + 0x34DC));
  NPC_AddFriendship((byte *)((int)p_uint3 + 0x1C70),0x32);
  i_val12 = 0x9DC;
  stack_val_48 = 0;
  piStack_7c = stack_ints_b0;
  do {
    stack_val_78 = 0;
    stack_val_48 = stack_val_48 + 1;
    do {
      u_val17 = math_rand();
      i_val8 = math_modsi3(u_val17,0x2a);
      u_val17 = math_rand();
      i_val9 = math_modsi3(u_val17,0x18);
      i_val10 = i_val9 * 0x2b;
      c_char6 = FieldPlot_IsPassable();
      if (c_char6 == '\0') {
        c_char6 = FieldPlot_IsPassable((byte *)((int)p_uint3 + (i_val8 + 1 + i_val10) * 4 + i_val12));
        if (c_char6 == '\0') {
          i_val14 = (i_val9 + 1) * 0x2b;
          c_char6 = FieldPlot_IsPassable((byte *)((int)p_uint3 + (i_val8 + i_val14) * 4 + i_val12));
          if (((((c_char6 == '\0') &&
                (c_char6 = FieldPlot_IsPassable((byte *)((int)p_uint3 + (i_val8 + 1 + i_val14) * 4 + i_val12)),
                p_int5 = piStack_7c, c_char6 == '\0')) &&
               ((*(uint *)((int)p_uint3 + (i_val8 + i_val10) * 4 + i_val12) & 0xfff) >> 8 == 0)) &&
              (((*(uint *)((int)p_uint3 + (i_val8 + 1 + i_val10) * 4 + i_val12) & 0xfff) >> 8 == 0 &&
               (i_val10 = (i_val9 + 1) * 0x2b,
               (*(uint *)((int)p_uint3 + (i_val8 + i_val10) * 4 + i_val12) & 0xfff) >> 8 == 0)))) &&
             ((*(uint *)((int)p_uint3 + (i_val8 + 1 + i_val10) * 4 + i_val12) & 0xfff) >> 8 == 0)) {
            *piStack_7c = i_val8;
            p_int5[1] = i_val9;
            b_flag2 = true;
            goto LAB_0801073e;
          }
        }
      }
      stack_val_78 = stack_val_78 + 1;
    } while (stack_val_78 < 100);
    b_flag2 = false;
LAB_0801073e:
    if (b_flag2) {
      FieldPlot_SetCropAndStage((byte *)((int)p_uint3 + (stack_ints_b0[0] + piStack_7c[1] * 0x2b) * 4 + i_val12),0x1f
                    ,8);
      p_int5 = piStack_7c;
      FieldPlot_SetCropAndStage((byte *)((int)p_uint3 + (stack_ints_b0[0] + 1 + piStack_7c[1] * 0x2b) * 4 + i_val12),
                    0x20,8);
      FieldPlot_SetCropAndStage((byte *)((int)p_uint3 + (stack_ints_b0[0] + (p_int5[1] + 1) * 0x2b) * 4 + i_val12),
                    0x21,8);
      FieldPlot_SetCropAndStage((byte *)((int)p_uint3 + (stack_ints_b0[0] + 1 + (p_int5[1] + 1) * 0x2b) * 4 + i_val12
                            ),0x22,8);
    }
    p_uint4 = puStack_80;
    i_val8 = 0x9DC;
  } while (stack_val_48 < 10);
  stack_val_40 = 0;
  piStack_74 = piStack_3c;
  do {
    stack_val_70 = 0;
    stack_val_40 = stack_val_40 + 1;
    do {
      u_val17 = math_rand();
      i_val12 = math_modsi3(u_val17,0x2a);
      u_val17 = math_rand();
      i_val9 = math_modsi3(u_val17,0x18);
      i_val10 = i_val9 * 0x2b;
      c_char6 = FieldPlot_IsPassable();
      if (c_char6 == '\0') {
        c_char6 = FieldPlot_IsPassable((byte *)((int)p_uint4 + (i_val12 + 1 + i_val10) * 4 + i_val8));
        if (c_char6 == '\0') {
          i_val14 = (i_val9 + 1) * 0x2b;
          c_char6 = FieldPlot_IsPassable((byte *)((int)p_uint4 + (i_val12 + i_val14) * 4 + i_val8));
          if (((c_char6 == '\0') &&
              (c_char6 = FieldPlot_IsPassable((byte *)((int)p_uint4 + (i_val12 + 1 + i_val14) * 4 + i_val8)),
              p_int5 = piStack_74, c_char6 == '\0')) &&
             (((*(uint *)((int)p_uint4 + (i_val12 + i_val10) * 4 + i_val8) & 0xfff) >> 8 == 0 &&
              ((((*(uint *)((int)p_uint4 + (i_val12 + 1 + i_val10) * 4 + i_val8) & 0xfff) >> 8 == 0 &&
                (i_val10 = (i_val9 + 1) * 0x2b,
                (*(uint *)((int)p_uint4 + (i_val12 + i_val10) * 4 + i_val8) & 0xfff) >> 8 == 0)) &&
               ((*(uint *)((int)p_uint4 + (i_val12 + 1 + i_val10) * 4 + i_val8) & 0xfff) >> 8 == 0))))))
          {
            *piStack_74 = i_val12;
            p_int5[1] = i_val9;
            b_flag2 = true;
            goto LAB_080108b8;
          }
        }
      }
      stack_val_70 = stack_val_70 + 1;
    } while (stack_val_70 < 100);
    b_flag2 = false;
LAB_080108b8:
    if (b_flag2) {
      FieldPlot_SetCropAndStage((byte *)((int)p_uint4 + (stack_ints_a8[0] + piStack_74[1] * 0x2b) * 4 + i_val8),0x23,
                    8);
      p_int5 = piStack_74;
      FieldPlot_SetCropAndStage((byte *)((int)p_uint4 + (stack_ints_a8[0] + 1 + piStack_74[1] * 0x2b) * 4 + i_val8),
                    0x24,8);
      FieldPlot_SetCropAndStage((byte *)((int)p_uint4 + (stack_ints_a8[0] + (p_int5[1] + 1) * 0x2b) * 4 + i_val8),
                    0x25,8);
      FieldPlot_SetCropAndStage((byte *)((int)p_uint4 + (stack_ints_a8[0] + 1 + (p_int5[1] + 1) * 0x2b) * 4 + i_val8)
                    ,0x26,8);
    }
    p_uint3 = puStack_80;
    i_val12 = 0x9DC;
  } while (stack_val_40 < 5);
  stack_val_24 = 0;
  piStack_6c = piStack_38;
  do {
    stack_val_68 = 0;
    stack_val_24 = stack_val_24 + 1;
    do {
      u_val17 = math_rand();
      i_val8 = math_modsi3(u_val17,0x2a);
      u_val17 = math_rand();
      i_val9 = math_modsi3(u_val17,0x18);
      i_val10 = i_val9 * 0x2b;
      c_char6 = FieldPlot_IsPassable();
      if (c_char6 == '\0') {
        c_char6 = FieldPlot_IsPassable((byte *)((int)p_uint3 + (i_val8 + 1 + i_val10) * 4 + i_val12));
        if (c_char6 == '\0') {
          i_val14 = (i_val9 + 1) * 0x2b;
          c_char6 = FieldPlot_IsPassable((byte *)((int)p_uint3 + (i_val8 + i_val14) * 4 + i_val12));
          if ((((c_char6 == '\0') &&
               (c_char6 = FieldPlot_IsPassable((byte *)((int)p_uint3 + (i_val8 + 1 + i_val14) * 4 + i_val12)),
               p_int5 = piStack_6c, c_char6 == '\0')) &&
              (((*(uint *)((int)p_uint3 + (i_val8 + i_val10) * 4 + i_val12) & 0xfff) >> 8 == 0 &&
               (((*(uint *)((int)p_uint3 + (i_val8 + 1 + i_val10) * 4 + i_val12) & 0xfff) >> 8 == 0 &&
                (i_val10 = (i_val9 + 1) * 0x2b,
                (*(uint *)((int)p_uint3 + (i_val8 + i_val10) * 4 + i_val12) & 0xfff) >> 8 == 0)))))) &&
             ((*(uint *)((int)p_uint3 + (i_val8 + 1 + i_val10) * 4 + i_val12) & 0xfff) >> 8 == 0)) {
            *piStack_6c = i_val8;
            p_int5[1] = i_val9;
            b_flag2 = true;
            goto LAB_08010a30;
          }
        }
      }
      stack_val_68 = stack_val_68 + 1;
    } while (stack_val_68 < 100);
    b_flag2 = false;
LAB_08010a30:
    if (b_flag2) {
      FieldPlot_SetCropAndStage((byte *)((int)p_uint3 + (stack_ints_a0[0] + piStack_6c[1] * 0x2b) * 4 + i_val12),0x1b
                    ,8);
      p_int5 = piStack_6c;
      FieldPlot_SetCropAndStage((byte *)((int)p_uint3 + (stack_ints_a0[0] + 1 + piStack_6c[1] * 0x2b) * 4 + i_val12),
                    0x1c,8);
      FieldPlot_SetCropAndStage((byte *)((int)p_uint3 + (stack_ints_a0[0] + (p_int5[1] + 1) * 0x2b) * 4 + i_val12),
                    0x1d,8);
      FieldPlot_SetCropAndStage((byte *)((int)p_uint3 + (stack_ints_a0[0] + 1 + (p_int5[1] + 1) * 0x2b) * 4 + i_val12
                            ),0x1e,8);
    }
    p_uint4 = puStack_80;
    i_val8 = 0x9DC;
  } while (stack_val_24 < 10);
  stack_val_4c = 0;
  piStack_64 = piStack_34;
  do {
    stack_val_60 = 0;
    stack_val_4c = stack_val_4c + 1;
    do {
      u_val17 = math_rand();
      i_val12 = math_modsi3(u_val17,0x2b);
      u_val17 = math_rand();
      i_val9 = math_modsi3(u_val17,0x19);
      c_char6 = FieldPlot_IsPassable();
      p_int5 = piStack_64;
      if ((c_char6 == '\0') &&
         ((*(uint *)((int)p_uint4 + (i_val12 + i_val9 * 0x2b) * 4 + i_val8) & 0xfff) >> 8 == 0)) {
        *piStack_64 = i_val12;
        p_int5[1] = i_val9;
        b_flag2 = true;
        goto LAB_08010ba8;
      }
      stack_val_60 = stack_val_60 + 1;
    } while (stack_val_60 < 100);
    b_flag2 = false;
LAB_08010ba8:
    if (b_flag2) {
      FieldPlot_SetCropAndStage((byte *)((int)p_uint4 + (stack_ints_98[0] + piStack_34[1] * 0x2b) * 4 + i_val8),0x15,
                    8);
    }
    p_uint3 = puStack_80;
    i_val12 = 0x9DC;
  } while (stack_val_4c <= 0x12B);
  stack_val_44 = 0;
  piStack_5c = piStack_30;
  do {
    stack_val_58 = 0;
    stack_val_44 = stack_val_44 + 1;
    do {
      u_val17 = math_rand();
      i_val8 = math_modsi3(u_val17,0x2b);
      u_val17 = math_rand();
      i_val9 = math_modsi3(u_val17,0x19);
      c_char6 = FieldPlot_IsPassable();
      p_int5 = piStack_5c;
      if ((c_char6 == '\0') &&
         ((*(uint *)((int)p_uint3 + (i_val8 + i_val9 * 0x2b) * 4 + i_val12) & 0xfff) >> 8 == 0)) {
        *piStack_5c = i_val8;
        p_int5[1] = i_val9;
        b_flag2 = true;
        goto LAB_08010ce0;
      }
      stack_val_58 = stack_val_58 + 1;
    } while (stack_val_58 < 100);
    b_flag2 = false;
LAB_08010ce0:
    if (b_flag2) {
      FieldPlot_SetCropAndStage((byte *)((int)p_uint3 + (stack_ints_90[0] + piStack_30[1] * 0x2b) * 4 + i_val12),0x16
                    ,8);
    }
    p_uint4 = puStack_80;
    i_val8 = 0x9DC;
  } while (stack_val_44 < 0x32);
  stack_val_28 = 0;
  piStack_54 = piStack_2c;
  do {
    stack_val_50 = 0;
    stack_val_28 = stack_val_28 + 1;
    do {
      u_val17 = math_rand();
      i_val12 = math_modsi3(u_val17,0x2b);
      u_val17 = math_rand();
      i_val9 = math_modsi3(u_val17,0x19);
      c_char6 = FieldPlot_IsPassable();
      p_int5 = piStack_54;
      if ((c_char6 == '\0') &&
         ((*(uint *)((int)p_uint4 + (i_val12 + i_val9 * 0x2b) * 4 + i_val8) & 0xfff) >> 8 == 0)) {
        *piStack_54 = i_val12;
        p_int5[1] = i_val9;
        b_flag2 = true;
        goto LAB_08010e10;
      }
      stack_val_50 = stack_val_50 + 1;
    } while (stack_val_50 < 100);
    b_flag2 = false;
LAB_08010e10:
    if (b_flag2) {
      FieldPlot_SetCropAndStage((byte *)((int)p_uint4 + (stack_ints_88[0] + piStack_2c[1] * 0x2b) * 4 + i_val8),0x17,
                    8);
    }
    if (0x31 < stack_val_28) {
      return puStack_80;
    }
  } while( true );
}

// =============================================================================
// Function: Farmer_Routine_08010E68 @ 0x08010E68
// =============================================================================
u32 Farmer_Routine_08010E68(int farmer)

{
  uint u_val1;
  int i_val2;
  uint u_val3;
  uint u_val4;
  
  u_val1 = Animal_Routine_0809B228(farmer + 0x1C70);
  u_val1 = (uint)(199 < u_val1);
  i_val2 = Farm_GetFieldState(farmer + 0x14);
  if ((i_val2 != 0) && (u_val3 = Animal_Routine_0809B228(), u_val3 < 200)) {
    u_val1 = 0;
  }
  for (u_val3 = 0; u_val4 = Barn_GetCowCount(farmer + 0x410), u_val3 < u_val4; u_val3 = u_val3 + 1) {
    i_val2 = Building_Routine_0800C5CC(farmer + 0x410,u_val3);
    if ((i_val2 != 0) && (u_val4 = Animal_Routine_0809B228(), u_val4 < 200)) {
      u_val1 = 0;
    }
  }
  farmer = farmer + 0x5f0;
  for (u_val3 = 0; u_val4 = Building_Routine_0800CE74(farmer), u_val3 < u_val4; u_val3 = u_val3 + 1) {
    i_val2 = Building_Routine_0800CF10(farmer,u_val3);
    if (((i_val2 != 0) || (i_val2 = Building_Routine_0800CF38(farmer,u_val3), i_val2 != 0)) &&
       (u_val4 = Animal_Routine_0809B228(), u_val4 < 200)) {
      u_val1 = 0;
    }
  }
  return u_val1;
}

// =============================================================================
// Function: Farmer_Routine_0801140C @ 0x0801140C
// =============================================================================
u32 Farmer_Routine_0801140C(int farmer)

{
  uint u_val1;
  char *p_char2;
  int i_val3;
  
  u_val1 = ShippingBin_Routine_0800B120(farmer + 0x54);
  i_val3 = farmer + 0x1AA8;
  Animal_Routine_0809ABD8(i_val3,u_val1);
  p_char2 = (char *)(farmer + 0x34C5);
  if (*p_char2 != '\0') {
    Animal_Routine_0809ABD8(i_val3,u_val1);
    *p_char2 = '\0';
  }
  ShippingBin_Routine_0800B24C(farmer + 0x54);
  return (-u_val1 | u_val1) >> 0x1f;
}

// =============================================================================
// Function: Farmer_Routine_08011464 @ 0x08011464
// =============================================================================
u32 Farmer_Routine_08011464(uint *farmer,uint amount)

{
  bool b_flag1;
  
  if (99 < amount) {
    amount = 99;
  }
  b_flag1 = (*farmer & 0x3ffff) >> 0xd < amount;
  if (b_flag1) {
    *farmer = 0xFFFC1FFF & *farmer | (amount & 0x1f) << 0xd;
  }
  return (uint)b_flag1;
}

// =============================================================================
// Function: Farmer_Routine_08011498 @ 0x08011498
// =============================================================================
u32 Farmer_Routine_08011498(int farmer,uint amount)

{
  bool b_flag1;
  
  if (99 < amount) {
    amount = 99;
  }
  b_flag1 = (*(ushort *)(farmer + 2) & 0x1ff) >> 2 < amount;
  if (b_flag1) {
    *(ushort *)(farmer + 2) =
         (ushort)0xFFFFFE03 & *(ushort *)(farmer + 2) | (ushort)((amount & 0x7f) << 2);
  }
  return (uint)b_flag1;
}

// =============================================================================
// Function: Farmer_Routine_080114C8 @ 0x080114C8
// =============================================================================
u32 Farmer_Routine_080114C8(int farmer,uint amount)

{
  bool b_flag1;
  
  if (99 < amount) {
    amount = 99;
  }
  b_flag1 = (*(byte *)(farmer + 3) & 0x7f) >> 1 < amount;
  if (b_flag1) {
    *(byte *)(farmer + 3) = *(byte *)(farmer + 3) & 0x81 | (byte)((amount & 0x3f) << 1);
  }
  return (uint)b_flag1;
}

// =============================================================================
// Function: Farmer_Routine_08011524 @ 0x08011524
// =============================================================================
u32 Farmer_Routine_08011524(int farmer)

{
  undefined4 u_val1;
  
  u_val1 = 0;
  if ((*(int *)(farmer + 4) != 0x10) && (*(char *)(farmer + 8) == '\0')) {
    u_val1 = 1;
  }
  return u_val1;
}

// =============================================================================
// Function: Farmer_Routine_08011550 @ 0x08011550
// =============================================================================
void Farmer_Routine_08011550(int *farmer)

{
  
  if (farmer[1] == *farmer) {
    *farmer = 0x10;
  }
  farmer[1] = 0x10;
  return;
}

// =============================================================================
// Function: Farmer_Routine_08011568 @ 0x08011568
// =============================================================================
void Farmer_Routine_08011568(int *farmer)

{
  
  if (((*farmer != 0x10) && (farmer[1] != 0x10)) && ((char)farmer[2] != '\0')) {
    *(char *)(farmer + 2) = (char)farmer[2] + -1;
  }
  return;
}

// =============================================================================
// Function: Farmer_Routine_08011588 @ 0x08011588
// =============================================================================
u32 Farmer_Routine_08011588(byte *farmer,int amount)

{
  int i_val1;
  
  i_val1 = 0;
  if (farmer != (byte *)0x0) {
    for (; amount != 0; amount = amount + -1) {
      i_val1 = i_val1 + (uint)*farmer;
      farmer = farmer + 1;
    }
  }
  return i_val1;
}

// =============================================================================
// Function: Farmer_Routine_080115B0 @ 0x080115B0
// =============================================================================
u32 Farmer_Routine_080115B0(undefined4 farmer,undefined4 amount,int slot_id)

{
  undefined4 u_val1;
  char c_char2;
  uint u_val3;
  uint u_val4;
  undefined4 stack_val_20;
  undefined4 stack_val_1c;
  
  u_val1 = 0x34F4;
  stack_val_20 = 0x34F4;
  c_char2 = SramProxy_WriteBlock(amount,slot_id,&stack_val_20,4);
  if (c_char2 == '\0') {
    u_val3 = (uint)*gIWRAM_SramBuffer;
    u_val4 = 0x10000;
  }
  else {
    c_char2 = SramProxy_WriteBlock(amount,slot_id + 4,farmer,u_val1);
    if (c_char2 == '\0') {
      u_val3 = (uint)*gIWRAM_SramBuffer;
      u_val4 = 0x20000;
    }
    else {
      slot_id = 0x34F8 + slot_id;
      stack_val_1c = Farmer_Routine_08011588(farmer,u_val1);
      c_char2 = SramProxy_WriteBlock(amount,slot_id,&stack_val_1c,4);
      if (c_char2 != '\0') {
        u_val3 = 0;
        goto LAB_0801163e;
      }
      u_val3 = (uint)*gIWRAM_SramBuffer;
      u_val4 = 0x30000;
    }
  }
  u_val3 = u_val3 | u_val4;
LAB_0801163e:
  return u_val3;
}

// =============================================================================
// Function: Farmer_Routine_08011650 @ 0x08011650
// =============================================================================
u32 Farmer_Routine_08011650(int farmer,undefined4 amount,int slot_id,uint *flags)

{
  ushort u_val1;
  undefined4 u_val2;
  int i_val3;
  char c_char4;
  undefined1 *p_uint5;
  uint u_val6;
  ushort *p_uint7;
  int i_val8;
  uint u_val9;
  undefined4 *p_uint10;
  byte *pbVar11;
  byte *pbVar12;
  byte stack_bytes_38 [4];
  undefined4 stack_val_34;
  undefined4 stack_val_30;
  int stack_val_2c;
  int stack_val_28;
  undefined4 stack_val_24;
  
  *(undefined4 *)(farmer + 8) = 0;
  *(undefined4 *)(farmer + 0xc) = 0;
  *(undefined1 *)(farmer + 0x10) = 0;
  *(byte *)(farmer + 0x11) = *(byte *)(farmer + 0x11) & 0x80;
  *(byte *)(farmer + 0x12) = *(byte *)(farmer + 0x12) & 0xe0;
  *(ushort *)(farmer + 0x12) = (ushort)0xFFFFF81F & *(ushort *)(farmer + 0x12);
  u_val2 = gRomData_080F058C;
  stack_val_24 = amount;
  Farm_Routine_08009A48(farmer + 0x14,gRomData_080F058C);
  Animal_Routine_0809AB8C(farmer + 0x1AA8);
  stack_bytes_38[0] = stack_bytes_38[0] & 0x80;
  Farmer_Routine_0800E354(farmer + 0x1BD8,u_val2,stack_bytes_38);
  NPC_InitScheduleWaypoint(farmer + 0x1C70,u_val2);
  Farmer_Routine_0800FF8C(0x1ca0 + farmer);
  p_uint7 = (ushort *)(farmer + 0x1CCC);
  u_val1 = (ushort)0xFFFFFC00;
  *p_uint7 = u_val1 & *p_uint7 | 0x234;
  *(byte *)((int)p_uint7 + 1) = *(byte *)((int)p_uint7 + 1) & 3;
  p_uint7[1] = u_val1 & p_uint7[1];
  *(byte *)((int)p_uint7 + 3) = *(byte *)((int)p_uint7 + 3) & 3;
  p_uint7[2] = u_val1 & p_uint7[2];
  NPC_Routine_0809EEE8(farmer + 0x1CD4);
  NPC_ResetData(farmer + 0x214C);
  i_val8 = 0x21CC;
  p_uint10 = (undefined4 *)(farmer + 0x21CC);
  *p_uint10 = 1;
  p_uint10[1] = 0;
  i_val3 = 0x21E0;
  *(undefined1 *)(farmer + 0x21E0) = 0;
  *(undefined1 *)(farmer + i_val8 + 0x24) = 0;
  *(undefined1 *)(farmer + i_val3 + 0x20) = 0;
  stack_val_34 = 0;
  p_uint5 = (undefined1 *)(farmer + i_val3 + -0xc);
  i_val8 = 8;
  do {
    *p_uint5 = 0;
    i_val8 = i_val8 + -1;
    p_uint5 = p_uint5 + 1;
  } while (0 < i_val8);
  stack_val_30 = 0;
  p_uint10 = p_uint10 + 4;
  i_val8 = 4;
  pbVar12 = (byte *)(farmer + 0x2C48);
  pbVar11 = (byte *)(0x2C4A + farmer);
  do {
    *(undefined1 *)p_uint10 = 0;
    i_val8 = i_val8 + -1;
    p_uint10 = (undefined4 *)((int)p_uint10 + 1);
  } while (0 < i_val8);
  Farmer_Routine_080114F8(farmer + 0x2210);
  Animal_Routine_0809A8AC(farmer + 0x2214);
  i_val8 = farmer + 0x2C1C;
  *pbVar12 = *pbVar12 | 3;
  *(uint *)(i_val8 + 0x2c) = *(uint *)(i_val8 + 0x2c) & 0xFFF80003;
  *pbVar11 = *pbVar11 & 7;
  p_uint5 = (undefined1 *)(farmer + 0x2C4C);
  i_val8 = 9;
  do {
    *p_uint5 = 0;
    *(undefined2 *)(p_uint5 + 2) = 0;
    p_uint5 = p_uint5 + 4;
    i_val8 = i_val8 + -1;
  } while (i_val8 != -1);
  Farmer_Routine_08011510(farmer + 0x2C74);
  NPC_Routine_0809CD78(0x2c80 + farmer);
  Field_ClearPlotGrid(farmer + 0x2E58);
  NPC_ClearWaypoints(0x3480 + farmer);
  pbVar11 = (byte *)(farmer + 0x3494);
  i_val8 = 2;
  do {
    *pbVar11 = *pbVar11 & 0xf0;
    pbVar11 = pbVar11 + 0x10;
    i_val8 = i_val8 + -1;
  } while (i_val8 != -1);
  NPC_Routine_080A1A48(farmer + 0x34C8);
  NPC_Routine_0809C4E4(farmer + 0x34D8);
  NPC_UpdateSchedule(farmer + 0x34DC);
  *flags = 0;
  stack_val_2c = 0;
  c_char4 = SramProxy_ReadBlock(stack_val_24,&stack_val_2c,slot_id,4);
  i_val8 = stack_val_2c;
  if ((c_char4 == '\0') || (stack_val_2c != 0x34F4)) {
LAB_0801190e:
    u_val6 = *flags;
    u_val9 = 0x10000;
    p_uint7 = gIWRAM_SramBuffer;
  }
  else {
    c_char4 = SramProxy_ReadBlock(stack_val_24,farmer,slot_id + 4,stack_val_2c);
    if (c_char4 == '\0') {
      u_val6 = *flags;
      u_val9 = 0x20000;
      p_uint7 = gIWRAM_SramBuffer;
    }
    else {
      stack_val_28 = 0;
      c_char4 = SramProxy_ReadBlock(stack_val_24,&stack_val_28,0x34F8 + slot_id,4);
      if (c_char4 != '\0') {
        i_val8 = Farmer_Routine_08011588(farmer,i_val8);
        if (i_val8 == stack_val_28) goto LAB_0801191e;
        goto LAB_0801190e;
      }
      u_val6 = *flags;
      u_val9 = 0x30000;
      p_uint7 = gIWRAM_SramBuffer;
    }
  }
  *flags = u_val6 | u_val9 | (uint)*p_uint7;
LAB_0801191e:
  return farmer;
}

// =============================================================================
// Function: Farmer_Routine_08011934 @ 0x08011934
// =============================================================================
void Farmer_Routine_08011934(int farmer,int amount,int slot_id)

{
  int i_val1;
  int i_val2;
  undefined4 u_val3;
  uint u_val4;
  int *p_int5;
  uint u_val6;
  uint u_val7;
  undefined1 stack_buf_4c [4];
  undefined1 temp_buf_48 [4];
  int stack_val_44;
  int stack_val_40;
  int stack_val_3c;
  uint stack_val_38;
  uint stack_val_34;
  uint stack_val_30;
  uint stack_val_2c;
  uint stack_val_28;
  int *piStack_24;
  
  stack_val_44 = farmer;
  stack_val_40 = amount;
  gba_memcpy(stack_buf_4c,gRomData_080F0654,3);
  gba_memcpy(temp_buf_48,gRomData_080F0658,2);
  stack_val_3c = 1;
  u_val7 = 0;
  stack_val_38 = Barn_GetCowCount(*(int *)(stack_val_44 + 0x8c) + 0x410);
  stack_val_34 = 0;
  if (stack_val_38 != 0) {
    do {
      i_val1 = Building_Routine_0800C894(*(int *)(stack_val_44 + 0x8c) + 0x410,stack_val_34);
      if (i_val1 != 0) {
        i_val2 = Animal_Routine_0809B514();
        u_val3 = gRomData_080F0654;
        if (i_val2 == stack_val_40) {
          if (stack_val_3c == 0) {
            i_val2 = gba_strlen(slot_id);
            u_val6 = 0x383 - i_val2;
            if (u_val6 != 0) {
              u_val4 = gba_strlen(u_val3);
              if (u_val6 < u_val4) {
                u_val4 = u_val6;
              }
              gba_memcpy(slot_id + i_val2,u_val3,u_val4);
              *(undefined1 *)(slot_id + i_val2 + u_val4) = (undefined1)stack_val_3c;
            }
          }
          else {
            stack_val_3c = 0;
          }
          u_val3 = Animal_Routine_0809B1F4(i_val1);
          i_val1 = gba_strlen(slot_id);
          u_val6 = 0x383 - i_val1;
          if (u_val6 != 0) {
            u_val4 = gba_strlen(u_val3);
            if (u_val6 < u_val4) {
              u_val4 = u_val6;
            }
            gba_memcpy(slot_id + i_val1,u_val3,u_val4);
            *(undefined1 *)(slot_id + i_val1 + u_val4) = 0;
          }
          u_val3 = gRomData_080F0658;
          u_val7 = u_val7 + 1;
          if (2 < u_val7) {
            i_val1 = gba_strlen(slot_id);
            u_val7 = 0x383 - i_val1;
            if (u_val7 != 0) {
              u_val6 = gba_strlen(u_val3);
              if (u_val7 < u_val6) {
                u_val6 = u_val7;
              }
              gba_memcpy(slot_id + i_val1,u_val3,u_val6);
              *(undefined1 *)(slot_id + i_val1 + u_val6) = 0;
            }
            u_val7 = 0;
          }
        }
      }
      stack_val_34 = stack_val_34 + 1;
    } while (stack_val_34 < stack_val_38);
  }
  p_int5 = (int *)(stack_val_44 + 0x8c);
  stack_val_30 = Building_Routine_0800CE74(*p_int5 + 0x5f0);
  stack_val_2c = 0;
  piStack_24 = p_int5;
  if (stack_val_30 != 0) {
    do {
      i_val1 = Food_GetStaminaGain(*piStack_24 + 0x5f0,stack_val_2c);
      if ((i_val1 != 0) && (i_val2 = Animal_Routine_0809B514(), u_val3 = gRomData_080F0654, i_val2 == stack_val_40)) {
        if (stack_val_3c == 0) {
          i_val2 = gba_strlen(slot_id);
          u_val6 = 0x383 - i_val2;
          if (u_val6 != 0) {
            u_val4 = gba_strlen(u_val3);
            if (u_val6 < u_val4) {
              u_val4 = u_val6;
            }
            gba_memcpy(slot_id + i_val2,u_val3,u_val4);
            *(undefined1 *)(slot_id + i_val2 + u_val4) = (undefined1)stack_val_3c;
          }
        }
        else {
          stack_val_3c = 0;
        }
        u_val3 = Animal_Routine_0809B1F4(i_val1);
        i_val1 = gba_strlen(slot_id);
        u_val6 = 0x383 - i_val1;
        if (u_val6 != 0) {
          u_val4 = gba_strlen(u_val3);
          if (u_val6 < u_val4) {
            u_val4 = u_val6;
          }
          gba_memcpy(slot_id + i_val1,u_val3,u_val4);
          *(undefined1 *)(slot_id + i_val1 + u_val4) = 0;
        }
        u_val3 = gRomData_080F0658;
        u_val7 = u_val7 + 1;
        if (2 < u_val7) {
          i_val1 = gba_strlen(slot_id);
          u_val7 = 0x383 - i_val1;
          if (u_val7 != 0) {
            u_val6 = gba_strlen(u_val3);
            if (u_val7 < u_val6) {
              u_val6 = u_val7;
            }
            gba_memcpy(slot_id + i_val1,u_val3,u_val6);
            *(undefined1 *)(slot_id + i_val1 + u_val6) = 0;
          }
          u_val7 = 0;
        }
      }
      stack_val_2c = stack_val_2c + 1;
    } while (stack_val_2c < stack_val_30);
  }
  stack_val_28 = 0;
  if (stack_val_30 != 0) {
    do {
      i_val1 = Food_GetFatigueGain(*piStack_24 + 0x5f0,stack_val_28);
      if ((i_val1 != 0) && (i_val2 = Animal_Routine_0809B514(), u_val3 = gRomData_080F0654, i_val2 == stack_val_40)) {
        if (stack_val_3c == 0) {
          i_val2 = gba_strlen(slot_id);
          u_val6 = 0x383 - i_val2;
          if (u_val6 != 0) {
            u_val4 = gba_strlen(u_val3);
            if (u_val6 < u_val4) {
              u_val4 = u_val6;
            }
            gba_memcpy(slot_id + i_val2,u_val3,u_val4);
            *(undefined1 *)(slot_id + i_val2 + u_val4) = (undefined1)stack_val_3c;
          }
        }
        else {
          stack_val_3c = 0;
        }
        u_val3 = Animal_Routine_0809B1F4(i_val1);
        i_val1 = gba_strlen(slot_id);
        u_val6 = 0x383 - i_val1;
        if (u_val6 != 0) {
          u_val4 = gba_strlen(u_val3);
          if (u_val6 < u_val4) {
            u_val4 = u_val6;
          }
          gba_memcpy(slot_id + i_val1,u_val3,u_val4);
          *(undefined1 *)(slot_id + i_val1 + u_val4) = 0;
        }
        u_val3 = gRomData_080F0658;
        u_val7 = u_val7 + 1;
        if (2 < u_val7) {
          i_val1 = gba_strlen(slot_id);
          u_val7 = 0x383 - i_val1;
          if (u_val7 != 0) {
            u_val6 = gba_strlen(u_val3);
            if (u_val7 < u_val6) {
              u_val6 = u_val7;
            }
            gba_memcpy(slot_id + i_val1,u_val3,u_val6);
            *(undefined1 *)(slot_id + i_val1 + u_val6) = 0;
          }
          u_val7 = 0;
        }
      }
      stack_val_28 = stack_val_28 + 1;
    } while (stack_val_28 < stack_val_30);
  }
  u_val3 = gRomData_080F0658;
  if (u_val7 != 0) {
    i_val1 = gba_strlen(slot_id);
    u_val7 = 0x383 - i_val1;
    if (u_val7 != 0) {
      u_val6 = gba_strlen(u_val3);
      if (u_val7 < u_val6) {
        u_val6 = u_val7;
      }
      gba_memcpy(slot_id + i_val1,u_val3,u_val6);
      *(undefined1 *)(slot_id + i_val1 + u_val6) = 0;
    }
  }
  return;
}

// =============================================================================
// Function: Farmer_Routine_08011FE8 @ 0x08011FE8
// =============================================================================
void Farmer_Routine_08011FE8(undefined4 *farmer,undefined4 amount)

{
  int i_val1;
  
  *farmer = gRomData_080E5E64;
  ScriptEngine_Routine_0803F8AC(*gIWRAM_PedometerStepCount + 8);
  i_val1 = farmer[1];
  if (i_val1 != 0) {
    _call_via_r2(i_val1,3,*(undefined4 *)(*(int *)(i_val1 + 0xf4) + 8));
  }
  SramProxy_VerifyBufferParity(farmer,amount);
  return;
}

// =============================================================================
// Function: Farmer_Routine_08012028 @ 0x08012028
// =============================================================================
u32 Farmer_Routine_08012028(undefined4 *farmer,int amount)

{
  undefined4 facing_buffer [3];
  
  VTable_Routine_080D8178(facing_buffer,*(undefined4 *)(amount + 4));
  *farmer = facing_buffer[0];
  return farmer;
}

// =============================================================================
// Function: Farmer_Routine_08012064 @ 0x08012064
// =============================================================================
undefined4
Farmer_Routine_08012064(int farmer,undefined4 amount,undefined4 slot_id,undefined4 flags,
             undefined4 arg_5)

{
  int *p_int1;
  undefined4 u_val2;
  int i_val3;
  
  i_val3 = *(int *)(farmer + 4);
  p_int1 = *(int **)(i_val3 + 0xa8);
  u_val2 = _call_via_r1(p_int1,*(undefined4 *)(*p_int1 + 0x14));
  VTable_Routine_080D7F9C(i_val3,amount,u_val2,slot_id,flags,arg_5);
  return;
}

// =============================================================================
// Function: Farmer_Routine_080120A4 @ 0x080120A4
// =============================================================================
u32 Farmer_Routine_080120A4(int farmer,undefined4 amount)

{
  int *p_int1;
  int i_val2;
  int pos_x;
  
  p_int1 = *(int **)(*(int *)(farmer + 4) + 0xa8);
  i_val2 = _call_via_r2(p_int1,amount,*(undefined4 *)(*p_int1 + 0x40));
  pos_x = 0;
  if (i_val2 != 0) {
    pos_x = *(int *)(i_val2 + 8);
  }
  return pos_x >> 0x10;
}

// =============================================================================
// Function: Farmer_Routine_080120C4 @ 0x080120C4
// =============================================================================
u32 Farmer_Routine_080120C4(int farmer,undefined4 amount)

{
  int *p_int1;
  int i_val2;
  int pos_y;
  
  p_int1 = *(int **)(*(int *)(farmer + 4) + 0xa8);
  i_val2 = _call_via_r2(p_int1,amount,*(undefined4 *)(*p_int1 + 0x40));
  pos_y = 0;
  if (i_val2 != 0) {
    pos_y = *(int *)(i_val2 + 0xc);
  }
  return pos_y >> 0x10;
}

// =============================================================================
// Function: Farmer_Routine_080120E4 @ 0x080120E4
// =============================================================================
void Farmer_Routine_080120E4(int farmer,undefined4 amount,uint slot_id)

{
  int *p_int1;
  int i_val2;
  
  p_int1 = *(int **)(*(int *)(farmer + 4) + 0xa8);
  i_val2 = _call_via_r2(p_int1,amount,*(undefined4 *)(*p_int1 + 0x40));
  if ((i_val2 != 0) && (*(byte *)(i_val2 + 0x20) != slot_id)) {
    Entity_Routine_08032198(i_val2,slot_id);
  }
  return;
}

// =============================================================================
// Function: Farmer_Routine_08012114 @ 0x08012114
// =============================================================================
u32 Farmer_Routine_08012114(int farmer,undefined4 amount)

{
  int *p_int1;
  int i_val2;
  uint u_val3;
  
  p_int1 = *(int **)(*(int *)(farmer + 4) + 0xa8);
  i_val2 = _call_via_r2(p_int1,amount,*(undefined4 *)(*p_int1 + 0x40));
  if (i_val2 == 0) {
    u_val3 = 0;
  }
  else {
    u_val3 = (uint)*(byte *)(i_val2 + 0x20);
  }
  return u_val3;
}

// =============================================================================
// Function: Farmer_Routine_08012134 @ 0x08012134
// =============================================================================
u32 Farmer_Routine_08012134(int farmer,undefined4 amount)

{
  int *p_int1;
  int i_val2;
  uint u_val3;
  
  p_int1 = *(int **)(*(int *)(farmer + 4) + 0xa8);
  i_val2 = _call_via_r2(p_int1,amount,*(undefined4 *)(*p_int1 + 0x40));
  u_val3 = 0x234;
  if (i_val2 != 0) {
    u_val3 = (uint)*(ushort *)(i_val2 + 4);
  }
  return u_val3;
}

// =============================================================================
// Function: Farmer_Routine_08012154 @ 0x08012154
// =============================================================================
void Farmer_Routine_08012154(int farmer,undefined4 amount,undefined1 slot_id)

{
  int *p_int1;
  int i_val2;
  
  p_int1 = *(int **)(*(int *)(farmer + 4) + 0xa8);
  i_val2 = _call_via_r2(p_int1,amount,*(undefined4 *)(*p_int1 + 0x40));
  if (i_val2 != 0) {
    *(undefined1 *)(i_val2 + 0x21) = slot_id;
  }
  return;
}

// =============================================================================
// Function: Farmer_Routine_08012174 @ 0x08012174
// =============================================================================
void Farmer_Routine_08012174(int farmer,undefined4 amount,undefined4 slot_id,undefined4 flags)

{
  int *p_int1;
  int i_val2;
  
  p_int1 = *(int **)(*(int *)(farmer + 4) + 0xa8);
  i_val2 = _call_via_r2(p_int1,amount,*(undefined4 *)(*p_int1 + 0x40));
  if (i_val2 != 0) {
    Entity_Routine_08032308(i_val2,slot_id,flags);
  }
  return;
}

// =============================================================================
// Function: Farmer_Routine_0801219C @ 0x0801219C
// =============================================================================
void Farmer_Routine_0801219C(int farmer,undefined4 amount,undefined4 slot_id,undefined4 flags)

{
  int *p_int1;
  int i_val2;
  
  p_int1 = *(int **)(*(int *)(farmer + 4) + 0xa8);
  i_val2 = _call_via_r2(p_int1,amount,*(undefined4 *)(*p_int1 + 0x40));
  if (i_val2 != 0) {
    Entity_Routine_0803233C(i_val2,slot_id,flags);
  }
  return;
}

// =============================================================================
// Function: Farmer_Routine_080121C4 @ 0x080121C4
// =============================================================================
void Farmer_Routine_080121C4(int farmer,undefined4 amount)

{
  int i_val1;
  int i_val2;
  
  i_val2 = *(int *)(farmer + 4);
  i_val1 = _call_via_r2(*(int **)(i_val2 + 0xa8),amount,
                          *(undefined4 *)(**(int **)(i_val2 + 0xa8) + 0x40));
  *(int *)(i_val2 + 0xe4) = i_val1;
  if (i_val1 != 0) {
    *(undefined4 *)(i_val2 + 0x9c) = 0x16;
  }
  return;
}

// =============================================================================
// Function: Farmer_Routine_080121EC @ 0x080121EC
// =============================================================================
void Farmer_Routine_080121EC(int farmer,undefined4 amount,uint slot_id)

{
  int *p_int1;
  int i_val2;
  
  p_int1 = *(int **)(*(int *)(farmer + 4) + 0xa8);
  i_val2 = _call_via_r2(p_int1,amount,*(undefined4 *)(*p_int1 + 0x40));
  if ((i_val2 != 0) && (*(ushort *)(i_val2 + 0x22) != slot_id)) {
    Entity_Routine_080321B0(i_val2,slot_id);
  }
  return;
}

// =============================================================================
// Function: Farmer_Routine_0801221C @ 0x0801221C
// =============================================================================
void Farmer_Routine_0801221C(int farmer,undefined4 amount)

{
  int *p_int1;
  int i_val2;
  
  p_int1 = *(int **)(*(int *)(farmer + 4) + 0xa8);
  i_val2 = _call_via_r2(p_int1,amount,*(undefined4 *)(*p_int1 + 0x40));
  if (i_val2 != 0) {
    Farmer_Routine_0801FF38(i_val2,0x234);
  }
  return;
}

// =============================================================================
// Function: Farmer_Routine_0801223C @ 0x0801223C
// =============================================================================
void Farmer_Routine_0801223C(int farmer,undefined4 amount,int slot_id,int flags)

{
  int *p_int1;
  int i_val2;
  
  p_int1 = *(int **)(*(int *)(farmer + 4) + 0xa8);
  i_val2 = _call_via_r2(p_int1,amount,*(undefined4 *)(*p_int1 + 0x40));
  if (i_val2 != 0) {
    Entity_Routine_08033B84(i_val2,*(undefined1 *)(i_val2 + 0x30),*(short *)(i_val2 + 10) + slot_id,
                  *(short *)(i_val2 + 0xe) + flags);
  }
  return;
}

// =============================================================================
// Function: Farmer_Routine_08012274 @ 0x08012274
// =============================================================================
void Farmer_Routine_08012274(int farmer,undefined4 amount,undefined4 slot_id,uint flags)

{
  int *p_int1;
  int i_val2;
  
  p_int1 = *(int **)(*(int *)(farmer + 4) + 0xa8);
  i_val2 = _call_via_r2(p_int1,amount,*(undefined4 *)(*p_int1 + 0x40));
  if (i_val2 != 0) {
    Entity_Routine_08032384(i_val2,slot_id,(-flags | flags) >> 0x1f);
  }
  return;
}

// =============================================================================
// Function: Farmer_Routine_080122A0 @ 0x080122A0
// =============================================================================
void Farmer_Routine_080122A0(int farmer,undefined4 amount)

{
  int *p_int1;
  int i_val2;
  
  p_int1 = *(int **)(*(int *)(farmer + 4) + 0xa8);
  i_val2 = _call_via_r2(p_int1,amount,*(undefined4 *)(*p_int1 + 0x40));
  if (i_val2 != 0) {
    Entity_Routine_080323C8();
  }
  return;
}

// =============================================================================
// Function: Farmer_Routine_080122BC @ 0x080122BC
// =============================================================================
void Farmer_Routine_080122BC(int farmer,undefined4 amount,undefined4 slot_id)

{
  int *p_int1;
  int i_val2;
  
  p_int1 = *(int **)(*(int *)(farmer + 4) + 0xa8);
  i_val2 = _call_via_r2(p_int1,amount,*(undefined4 *)(*p_int1 + 0x40));
  if (i_val2 != 0) {
    Entity_Routine_080323E0(i_val2,slot_id);
  }
  return;
}

// =============================================================================
// Function: Farmer_Routine_080122E0 @ 0x080122E0
// =============================================================================
void Farmer_Routine_080122E0(int farmer,ushort amount,uint slot_id,uint flags)

{
  ushort u_val1;
  ushort u_val2;
  ushort u_val3;
  int i_val4;
  int *p_int5;
  undefined2 stack_val_28;
  undefined2 stack_val_26;
  ushort stack_val_24;
  
  i_val4 = *(int *)(farmer + 4);
  p_int5 = *(int **)(i_val4 + 0xa8);
  u_val3 = (ushort)0x3FF;
  u_val2 = (ushort)0xFFFFFC00;
  u_val1 = u_val2 & stack_val_28 | amount & u_val3;
  stack_val_28._1_1_ = (byte)(u_val1 >> 8);
  stack_val_28 = CONCAT11(stack_val_28._1_1_ & 3 | (byte)((slot_id & 0x3f) << 2),(char)u_val1);
  u_val1 = u_val2 & stack_val_26 | (ushort)((slot_id & 0xffff) >> 6) & u_val3;
  stack_val_26._1_1_ = (byte)(u_val1 >> 8);
  stack_val_26 = CONCAT11(stack_val_26._1_1_ & 3 | (byte)((flags & 0x3f) << 2),(char)u_val1);
  stack_val_24 = u_val2 & stack_val_24 | (ushort)((flags & 0xffff) >> 6) & u_val3;
  _call_via_r3(p_int5,&stack_val_28,1,*(undefined4 *)(*p_int5 + 0xb4));
  VTable_Routine_080D7F08(i_val4);
  return;
}

// =============================================================================
// Function: Farmer_Routine_0801238C @ 0x0801238C
// =============================================================================
void Farmer_Routine_0801238C(void)

{
  
  _call_via_r4();
  return;
}

// =============================================================================
// Function: Farmer_Routine_080123A4 @ 0x080123A4
// =============================================================================
void Farmer_Routine_080123A4(int farmer)

{
  char c_char1;
  int *p_int2;
  int i_val3;
  
  i_val3 = *(int *)(farmer + 4);
  p_int2 = *(int **)(i_val3 + 0xa8);
  c_char1 = _call_via_r1(p_int2,*(undefined4 *)(*p_int2 + 0x28));
  if (c_char1 == '\0') {
    *(undefined4 *)(i_val3 + 0x9c) = 0x17;
  }
  return;
}

// =============================================================================
// Function: Farmer_Routine_080123CC @ 0x080123CC
// =============================================================================
void Farmer_Routine_080123CC(int farmer,int amount,undefined2 slot_id,undefined2 *flags)

{
  int i_val1;
  int i_val2;
  
  i_val2 = *(int *)(farmer + 4);
  i_val1 = i_val2 + 0xbc;
  if (amount == 1) {
    HW_Routine_08008B88(i_val1,slot_id);
  }
  else if (amount < 2) {
    if (amount == 0) {
      HW_Routine_08008B6C(i_val1,slot_id);
    }
  }
  else if (amount == 2) {
    HW_Routine_08008BB0(i_val1,slot_id);
  }
  i_val2 = i_val2 + 0xbc;
  HW_Routine_08008CC4(i_val2);
  HW_Routine_08008C28(i_val2,*flags);
  HW_Routine_08008C38(i_val2,flags[1],0xFFFF);
  HW_Routine_08008C54(i_val2,(int)(short)flags[2],0xFFFF);
  HW_Routine_08008C70(i_val2,(int)*(char *)(flags + 3),0xFFFF);
  HW_Routine_08008C8C(i_val2,*(undefined1 *)((int)flags + 7),0xFFFF);
  HW_Routine_08008CA8(i_val2,*(undefined1 *)(flags + 4),0xFFFF);
  return;
}

// =============================================================================
// Function: Farmer_Routine_08012454 @ 0x08012454
// =============================================================================
void Farmer_Routine_08012454(int farmer)

{
  
  HW_Routine_08008BE0(*(int *)(farmer + 4) + 0xbc);
  return;
}

// =============================================================================
// Function: Farmer_Routine_08012464 @ 0x08012464
// =============================================================================
void Farmer_Routine_08012464(int farmer,int amount,undefined2 slot_id)

{
  char c_char1;
  undefined4 u_val2;
  undefined4 *p_uint3;
  undefined4 *p_uint4;
  
  p_uint3 = *(undefined4 **)(*(int *)(farmer + 4) + 0xd0);
  p_uint4 = *(undefined4 **)(*(int *)(farmer + 4) + 0xd4);
  do {
    if (p_uint3 == p_uint4) {
      u_val2 = p_uint4[-1];
LAB_0801248c:
      if (amount == 1) {
        HW_Routine_08008B88(u_val2,slot_id);
      }
      else if (amount < 2) {
        if (amount == 0) {
          HW_Routine_08008B6C(u_val2);
        }
      }
      else if (amount == 2) {
        HW_Routine_08008BB0(u_val2);
      }
      return;
    }
    c_char1 = HW_Routine_08008CD0(*p_uint3);
    if (c_char1 == '\0') {
      u_val2 = *p_uint3;
      goto LAB_0801248c;
    }
    p_uint3 = p_uint3 + 1;
  } while( true );
}

// =============================================================================
// Function: Farmer_Routine_080124C4 @ 0x080124C4
// =============================================================================
void Farmer_Routine_080124C4(void)

{
  
  HW_Routine_08008DE8();
  return;
}

// =============================================================================
// Function: Farmer_Routine_080124D0 @ 0x080124D0
// =============================================================================
void Farmer_Routine_080124D0(int farmer)

{
  int *p_int1;
  undefined4 u_val2;
  int i_val3;
  int i_val4;
  int i_val5;
  undefined1 stack_buf_1c [4];
  undefined1 temp_buf_18 [4];
  
  i_val5 = *(int *)(farmer + 4);
  i_val4 = *(int *)(i_val5 + 0xb4);
  if ((i_val4 != 0) && (i_val4 != 0)) {
    _call_via_r2(i_val4,3,*(undefined4 *)(*(int *)(i_val4 + 4) + 8));
  }
  *(int *)(i_val5 + 0xb4) = 0;
  i_val4 = *(int *)(i_val5 + 0xb8);
  if ((i_val4 != 0) && (i_val4 != 0)) {
    _call_via_r2(i_val4,3,*(undefined4 *)(*(int *)(i_val4 + 4) + 8));
  }
  *(int *)(i_val5 + 0xb8) = 0;
  p_int1 = (int *)(i_val5 + 0xac);
  if (*p_int1 == 0) {
    if (*(char *)(i_val5 + 0xe8) == '\0') {
      u_val2 = Dispatcher_Routine_080005D4(4);
      HW_Routine_0800835C(stack_buf_1c);
      HW_Routine_0800770C(temp_buf_18);
      i_val4 = Animal_Routine_08050CC0(u_val2,0,0x1f,0,1,stack_buf_1c,temp_buf_18);
      i_val3 = *p_int1;
      if ((i_val4 != i_val3) && (i_val3 != 0)) {
        Animal_Routine_08050D0C(i_val3,3);
      }
      *p_int1 = i_val4;
      HW_Routine_08007714(temp_buf_18,2);
      HW_Routine_08008364(stack_buf_1c,2);
    }
    else {
      u_val2 = Dispatcher_Routine_080005D4(4);
      HW_Routine_0800835C(stack_buf_1c);
      HW_Routine_0800770C(temp_buf_18);
      i_val4 = Animal_Routine_08050CC0(u_val2,0,0x1f,0,0,stack_buf_1c,temp_buf_18);
      i_val3 = *p_int1;
      if ((i_val4 != i_val3) && (i_val3 != 0)) {
        Animal_Routine_08050D0C(i_val3,3);
      }
      *p_int1 = i_val4;
      HW_Routine_08007714(temp_buf_18,2);
      HW_Routine_08008364(stack_buf_1c,2);
    }
  }
  i_val4 = Animal_Routine_08050D34(*p_int1);
  if (i_val4 != 3) {
    Animal_Routine_08050D5C(*p_int1);
    *(undefined4 *)(i_val5 + 0x9c) = 0xe;
  }
  return;
}

// =============================================================================
// Function: Farmer_Routine_080125EC @ 0x080125EC
// =============================================================================
void Farmer_Routine_080125EC(int farmer)

{
  int i_val1;
  int i_val2;
  
  i_val2 = *(int *)(farmer + 4);
  i_val1 = *(int *)(i_val2 + 0xb4);
  if ((i_val1 != 0) && (i_val1 != 0)) {
    _call_via_r2(i_val1,3,*(undefined4 *)(*(int *)(i_val1 + 4) + 8));
  }
  *(int *)(i_val2 + 0xb4) = 0;
  i_val1 = *(int *)(i_val2 + 0xb8);
  if ((i_val1 != 0) && (i_val1 != 0)) {
    _call_via_r2(i_val1,3,*(undefined4 *)(*(int *)(i_val1 + 4) + 8));
  }
  *(int *)(i_val2 + 0xb8) = 0;
  i_val1 = *(int *)(i_val2 + 0xac);
  if ((i_val1 != 0) && (i_val1 != 0)) {
    Animal_Routine_08050D0C(i_val1,3);
  }
  *(int *)(i_val2 + 0xac) = 0;
  *(ushort *)(i_val2 + 0x10) = (ushort)0xFEFF & *(ushort *)(i_val2 + 0x10);
  return;
}

// =============================================================================
// Function: Farmer_Routine_08012658 @ 0x08012658
// =============================================================================
void Farmer_Routine_08012658(int farmer)

{
  int i_val1;
  
  i_val1 = *(int *)(farmer + 4);
  if (*(int *)(i_val1 + 0xac) != 0) {
    Animal_Routine_08050D74();
    VTable_Routine_080D7F88(i_val1);
    VTable_Routine_080D7F74(i_val1);
    VTable_Routine_080D7F60(i_val1);
    *(undefined4 *)(i_val1 + 0x9c) = 0xf;
  }
  return;
}

// =============================================================================
// Function: Farmer_Routine_0801268C @ 0x0801268C
// =============================================================================
void Farmer_Routine_0801268C(int farmer,undefined4 amount,undefined2 slot_id)

{
  int i_val1;
  
  i_val1 = *(int *)(farmer + 4);
  if (*(int *)(i_val1 + 0xac) != 0) {
    Animal_Routine_08050DC8(*(int *)(i_val1 + 0xac),amount,slot_id,*(undefined4 *)(i_val1 + 0xb0));
    *(undefined4 *)(i_val1 + 0x9c) = 0x10;
  }
  return;
}

// =============================================================================
// Function: Farmer_Routine_080126BC @ 0x080126BC
// =============================================================================
void Farmer_Routine_080126BC(int farmer,undefined4 amount)

{
  int i_val1;
  
  i_val1 = *(int *)(farmer + 4);
  if (*(int *)(i_val1 + 0xac) != 0) {
    Animal_Routine_08050DC8(*(int *)(i_val1 + 0xac),amount,0x40,*(undefined4 *)(i_val1 + 0xb0));
    *(undefined4 *)(i_val1 + 0x9c) = 0x11;
  }
  return;
}

// =============================================================================
// Function: Farmer_Routine_080126E4 @ 0x080126E4
// =============================================================================
void Farmer_Routine_080126E4(int farmer)

{
  undefined4 u_val1;
  int i_val2;
  int i_val3;
  
  i_val3 = *(int *)(*(int *)(farmer + 4) + 0xac);
  if ((i_val3 != 0) &&
     (i_val2 = *(int *)(*(int *)(farmer + 4) + 0x8c),
     (int)((uint)*(byte *)(i_val2 + 0x2210) * 0x10000000) < 0)) {
    u_val1 = NPC_Routine_0809FE3C(i_val2 + 0x1CD4);
    Animal_Routine_08050E68(i_val3,u_val1);
  }
  return;
}

// =============================================================================
// Function: Farmer_Routine_08012720 @ 0x08012720
// =============================================================================
void Farmer_Routine_08012720(int farmer)

{
  int i_val1;
  
  i_val1 = *(int *)(*(int *)(farmer + 4) + 0xac);
  if ((i_val1 != 0) &&
     ((int)((uint)*(byte *)(*(int *)(*(int *)(farmer + 4) + 0x8c) + 0x2210) * 0x10000000) <
      0)) {
    Animal_Routine_08050E68(i_val1);
  }
  return;
}

// =============================================================================
// Function: Farmer_Routine_0801274C @ 0x0801274C
// =============================================================================
void Farmer_Routine_0801274C(int farmer)

{
  
  if (*(int *)(*(int *)(farmer + 4) + 0xac) != 0) {
    Animal_Routine_08050E74();
  }
  return;
}

// =============================================================================
// Function: Farmer_Routine_08012760 @ 0x08012760
// =============================================================================
void Farmer_Routine_08012760(int farmer)

{
  int i_val1;
  
  i_val1 = *(int *)(*(int *)(farmer + 4) + 0xac);
  if ((i_val1 != 0) &&
     ((int)((uint)*(byte *)(*(int *)(*(int *)(farmer + 4) + 0x8c) + 0x2210) * 0x20000000) <
      0)) {
    Animal_Routine_08050E50(i_val1);
  }
  return;
}

// =============================================================================
// Function: Farmer_Routine_0801278C @ 0x0801278C
// =============================================================================
void Farmer_Routine_0801278C(int farmer)

{
  
  if (*(int *)(*(int *)(farmer + 4) + 0xac) != 0) {
    Animal_Routine_08050E5C();
  }
  return;
}

// =============================================================================
// Function: Farmer_Routine_080127A0 @ 0x080127A0
// =============================================================================
void Farmer_Routine_080127A0(int farmer,int amount)

{
  int i_val1;
  uint u_val2;
  undefined4 u_val3;
  int i_val4;
  
  i_val4 = *(int *)(farmer + 4);
  if ((((*(int *)(i_val4 + 0xac) != 0) &&
       ((int)((uint)*(byte *)(*(int *)(i_val4 + 0x8c) + 0x2210) * 0x20000000) < 0)) &&
      (amount != 0x1f)) &&
     (i_val1 = NPC_Routine_080A0878(*(int *)(i_val4 + 0x8c) + 0x1CD4), i_val1 != 0)) {
    u_val2 = NPC_Routine_0809E498();
    if (0xEA5F < u_val2) {
      u_val3 = 6;
    }
    else if (0xC34F < u_val2) {
      u_val3 = 5;
    }
    else if (0x9C3F < u_val2) {
      u_val3 = 4;
    }
    else if (0x752F < u_val2) {
      u_val3 = 3;
    }
    else if (0x4E1F < u_val2) {
      u_val3 = 2;
    }
    else {
      u_val3 = 0;
      if (0x270F < u_val2) {
        u_val3 = 1;
      }
    }
    Animal_Routine_08050E80(*(undefined4 *)(i_val4 + 0xac),u_val3);
  }
  return;
}

// =============================================================================
// Function: Farmer_Routine_0801284C @ 0x0801284C
// =============================================================================
void Farmer_Routine_0801284C(int farmer)

{
  
  if (*(int *)(*(int *)(farmer + 4) + 0xac) != 0) {
    Animal_Routine_08050E8C();
  }
  return;
}

// =============================================================================
// Function: Farmer_Routine_08012860 @ 0x08012860
// =============================================================================
undefined4
Farmer_Routine_08012860(int farmer,undefined4 amount,int slot_id,int flags,int arg_5,int arg_6)

{
  undefined4 u_val1;
  int i_val2;
  int i_val3;
  
  i_val3 = *(int *)(farmer + 4);
  i_val2 = *(int *)(i_val3 + 0xac);
  if (i_val2 == 0) {
    return;
  }
  if (slot_id == 0) {
    return;
  }
  if (flags == 0) {
    return;
  }
  if (arg_5 == 0) {
    u_val1 = *(undefined4 *)(i_val3 + 0xb0);
  }
  else {
    if (arg_6 != 0) {
      Animal_Routine_08050E30(i_val2,amount,slot_id,flags,arg_5,arg_6,*(undefined4 *)(i_val3 + 0xb0));
      goto LAB_080128c0;
    }
    u_val1 = *(undefined4 *)(i_val3 + 0xb0);
  }
  Animal_Routine_08050E30(i_val2,amount,slot_id,flags,arg_5,0,u_val1);
LAB_080128c0:
  *(undefined4 *)(i_val3 + 0x9c) = 0x14;
  return;
}

// =============================================================================
// Function: Farmer_Routine_080128D0 @ 0x080128D0
// =============================================================================
undefined4
Farmer_Routine_080128D0(int farmer,int amount,int slot_id,int flags,int arg_5,int arg_6,int arg_7)

{
  undefined4 u_val1;
  int i_val2;
  int i_val3;
  
  i_val3 = *(int *)(farmer + 4);
  i_val2 = *(int *)(i_val3 + 0xac);
  if (i_val2 == 0) {
    return;
  }
  if (amount == 0) {
    return;
  }
  if (slot_id == 0) {
    return;
  }
  if (flags == 0) {
    Animal_Routine_08050E0C(i_val2,amount,slot_id,0,0,0,0,*(undefined4 *)(i_val3 + 0xb0));
  }
  else {
    if (arg_5 == 0) {
      u_val1 = *(undefined4 *)(i_val3 + 0xb0);
      arg_6 = 0;
    }
    else if (arg_6 == 0) {
      u_val1 = *(undefined4 *)(i_val3 + 0xb0);
    }
    else {
      if (arg_7 != 0) {
        Animal_Routine_08050E0C(i_val2,amount,slot_id,flags,arg_5,arg_6,arg_7,
                      *(undefined4 *)(i_val3 + 0xb0));
        goto LAB_0801296c;
      }
      u_val1 = *(undefined4 *)(i_val3 + 0xb0);
    }
    Animal_Routine_08050E0C(i_val2,amount,slot_id,flags,arg_5,arg_6,0,u_val1);
  }
LAB_0801296c:
  *(undefined4 *)(i_val3 + 0x9c) = 0x14;
  return;
}

// =============================================================================
// Function: Farmer_Routine_0801297C @ 0x0801297C
// =============================================================================
u32 Farmer_Routine_0801297C(int farmer,uint amount,int slot_id,char flags,char arg_5)

{
  ushort u_val1;
  uint u_val2;
  int i_val3;
  undefined4 u_val4;
  int i_val5;
  undefined4 u_val6;
  
  i_val3 = *(int *)(farmer + 4);
  if (4 < amount) goto LAB_08012a98;
  register0x00000054 = (BADSPACEBASE *)PTR_case_080129A4_080129a0;
  switch(*(uint *)(PTR_case_080129A4_080129a0 + amount * 4) & 0xfffffffe) {
  case 0x80129a4:
    register0x00000054 = (BADSPACEBASE *)0x0;
  case 0x80129b8:
    i_val5 = 2;
    u_val6 = 0;
    goto LAB_080129d0;
  case 0x80129be:
    i_val5 = 1;
    u_val6 = 0;
    goto LAB_080129d0;
  case 0x80129c4:
    i_val5 = 2;
    break;
  case 0x80129c8:
    i_val5 = 1;
    break;
  case 0x80129cc:
    i_val5 = 0;
  }
  u_val6 = 1;
LAB_080129d0:
  u_val4 = 0x889;
  if (slot_id != 1) {
    if (slot_id < 2) {
      u_val4 = 0x1112;
      if (slot_id != 0) goto LAB_08012a98;
    }
    else {
      u_val4 = 0x444;
      if (slot_id != 2) goto LAB_08012a98;
    }
  }
  if (flags == '\0') {
    if (arg_5 != '\0') {
      _call_via_r1(*(int **)(i_val3 + 0xa8),*(undefined4 *)(**(int **)(i_val3 + 0xa8) + 0xb8));
    }
    Farm_Routine_0800934C(*(undefined4 *)(i_val3 + 0xa0),u_val4,i_val5,u_val6);
    *(undefined4 *)(i_val3 + 0x9c) = 0x13;
    *(undefined1 *)(i_val3 + 0xe8) = 0;
    *(bool *)(i_val3 + 0xe9) = i_val5 == 2;
    *(ushort *)(i_val3 + 0x10) = *(ushort *)(i_val3 + 0x10) | 0xe00;
    if (i_val5 == 1) {
      u_val1 = *(ushort *)(i_val3 + 0x60);
      u_val2 = 0x80;
    }
    else {
      u_val1 = *(ushort *)(i_val3 + 0x60);
      u_val2 = 0xc0;
    }
    register0x00000054 = (BADSPACEBASE *)(u_val1 | u_val2);
    *(short *)(i_val3 + 0x60) = (short)register0x00000054;
  }
  else {
    Farm_Routine_08009378(*(undefined4 *)(i_val3 + 0xa0),u_val4,i_val5,u_val6);
    *(undefined4 *)(i_val3 + 0x9c) = 0x12;
    *(undefined1 *)(i_val3 + 0xe8) = 0;
    register0x00000054 = (BADSPACEBASE *)(uint)(i_val5 == 2);
    *(bool *)(i_val3 + 0xe9) = i_val5 == 2;
  }
LAB_08012a98:
  return (register0x00000054);
}

// =============================================================================
// Function: Farmer_Routine_08012AA4 @ 0x08012AA4
// =============================================================================
void Farmer_Routine_08012AA4(int farmer,undefined4 amount,undefined4 slot_id)

{
  int i_val1;
  undefined1 temp_buf_40 [52];
  
  i_val1 = *(int *)(farmer + 4);
  ScriptEngine_Routine_0804EC84(slot_id,temp_buf_40,0);
  ScriptEngine_GetPC(*(undefined4 *)(i_val1 + 0xb0),amount,temp_buf_40);
  return;
}

// =============================================================================
// Function: Farmer_Routine_08012ACC @ 0x08012ACC
// =============================================================================
void Farmer_Routine_08012ACC(int farmer)

{
  
  ScriptEngine_GetPC(*(undefined4 *)(*(int *)(farmer + 4) + 0xb0));
  return;
}

// =============================================================================
// Function: Farmer_Routine_08012ADC @ 0x08012ADC
// =============================================================================
void Farmer_Routine_08012ADC(int farmer,undefined4 amount,undefined4 slot_id,undefined4 flags)

{
  int i_val1;
  undefined1 temp_buf_40 [52];
  
  i_val1 = *(int *)(farmer + 4);
  ScriptEngine_Routine_0804EC84(slot_id,temp_buf_40,flags);
  ScriptEngine_GetPC(*(undefined4 *)(i_val1 + 0xb0),amount,temp_buf_40);
  return;
}

// =============================================================================
// Function: Farmer_Routine_08012B04 @ 0x08012B04
// =============================================================================
void Farmer_Routine_08012B04(int farmer)

{
  undefined4 u_val1;
  
  u_val1 = *(undefined4 *)(farmer + 4);
  ScriptEngine_Routine_0803F878(*gIWRAM_PedometerStepCount + 8);
  VTable_Routine_080D7F3C(u_val1);
  return;
}

// =============================================================================
// Function: Farmer_Routine_080134A4 @ 0x080134A4
// =============================================================================
void Farmer_Routine_080134A4(int farmer)

{
  undefined4 *p_uint1;
  int *p_int2;
  int i_val3;
  int *p_int4;
  int i_val5;
  int i_val6;
  undefined4 stack_val_2c;
  undefined4 stack_val_28;
  
  i_val6 = *(int *)(farmer + 4);
  p_uint1 = (undefined4 *)Dispatcher_Routine_080005D4(0x14);
  i_val3 = *(int *)(i_val6 + 0x8c);
  *p_uint1 = gRomData_080E5E74;
  p_uint1[1] = i_val3;
  p_uint1[2] = 0x18;
  p_uint1[3] = stack_val_2c;
  p_uint1[4] = stack_val_28;
  p_int2 = (int *)Dispatcher_Routine_080005D4(0x10,&stack0xffffffec,p_uint1 + 5);
  i_val3 = 0x1001;
  i_val5 = *(int *)(i_val6 + 0x8c);
  *p_int2 = gRomData_080E5D54;
  p_int2[1] = (int)p_uint1;
  p_int2[2] = i_val5;
  p_int2[3] = i_val3;
  p_int4 = *(int **)(i_val6 + 0xa4);
  if ((p_int2 != p_int4) && (p_int4 != (int *)0x0)) {
    _call_via_r2(p_int4,3,*(undefined4 *)(*p_int4 + 8));
  }
  *(int **)(i_val6 + 0xa4) = p_int2;
  *(undefined4 *)(i_val6 + 0x9c) = 0x18;
  return;
}

// =============================================================================
// Function: Farmer_Routine_08013EF8 @ 0x08013EF8
// =============================================================================
void Farmer_Routine_08013EF8(int farmer,undefined4 amount)

{
  int *p_int1;
  int *p_int2;
  undefined4 u_val3;
  int i_val4;
  undefined4 stack_val_30;
  undefined4 stack_val_2c;
  undefined4 *apuStack_24 [3];
  
  i_val4 = *(int *)(farmer + 4);
  apuStack_24[0] = (undefined4 *)Dispatcher_Routine_080005D4(0x14);
  u_val3 = *(undefined4 *)(i_val4 + 0x8c);
  *apuStack_24[0] = gRomData_080E5E74;
  apuStack_24[0][1] = u_val3;
  apuStack_24[0][2] = 0x2f;
  apuStack_24[0][3] = stack_val_30;
  apuStack_24[0][4] = stack_val_2c;
  u_val3 = Dispatcher_Routine_080005D4(0xc,0,apuStack_24[0] + 5);
  p_int1 = (int *)ScriptEngine_ResolveStringPointer(u_val3,apuStack_24,amount);
  p_int2 = *(int **)(i_val4 + 0xa4);
  if ((p_int1 != p_int2) && (p_int2 != (int *)0x0)) {
    _call_via_r2(p_int2,3,*(undefined4 *)(*p_int2 + 8));
  }
  *(int **)(i_val4 + 0xa4) = p_int1;
  *(undefined4 *)(i_val4 + 0x9c) = 0x18;
  return;
}

// =============================================================================
// Function: Farmer_Routine_08014034 @ 0x08014034
// =============================================================================
void Farmer_Routine_08014034(int farmer)

{
  int *p_int1;
  
  p_int1 = *(int **)(*(int *)(farmer + 4) + 0xa8);
  _call_via_r1(p_int1,*(undefined4 *)(*p_int1 + 0x84));
  return;
}

// =============================================================================
// Function: Farmer_Routine_0801404C @ 0x0801404C
// =============================================================================
void Farmer_Routine_0801404C(int farmer)

{
  int *p_int1;
  
  p_int1 = *(int **)(*(int *)(farmer + 4) + 0xa8);
  _call_via_r1(p_int1,*(undefined4 *)(*p_int1 + 0x88));
  return;
}

// =============================================================================
// Function: Farmer_Routine_08014064 @ 0x08014064
// =============================================================================
void Farmer_Routine_08014064(int farmer)

{
  int *p_int1;
  
  p_int1 = *(int **)(*(int *)(farmer + 4) + 0xa8);
  _call_via_r1(p_int1,*(undefined4 *)(*p_int1 + 0x8c));
  return;
}

// =============================================================================
// Function: Farmer_Routine_0801407C @ 0x0801407C
// =============================================================================
void Farmer_Routine_0801407C(int farmer)

{
  int *p_int1;
  
  p_int1 = *(int **)(*(int *)(farmer + 4) + 0xa8);
  _call_via_r1(p_int1,*(undefined4 *)(*p_int1 + 0x90));
  return;
}

// =============================================================================
// Function: Farmer_Routine_08014094 @ 0x08014094
// =============================================================================
void Farmer_Routine_08014094(int farmer)

{
  int *p_int1;
  
  p_int1 = *(int **)(*(int *)(farmer + 4) + 0xa8);
  _call_via_r1(p_int1,*(undefined4 *)(*p_int1 + 0x94));
  return;
}

// =============================================================================
// Function: Farmer_Routine_080140AC @ 0x080140AC
// =============================================================================
void Farmer_Routine_080140AC(int farmer)

{
  int *p_int1;
  
  p_int1 = *(int **)(*(int *)(farmer + 4) + 0xa8);
  _call_via_r1(p_int1,*(undefined4 *)(*p_int1 + 0x98));
  return;
}

// =============================================================================
// Function: Farmer_Routine_080140C4 @ 0x080140C4
// =============================================================================
void Farmer_Routine_080140C4(int farmer,undefined4 amount)

{
  int *p_int1;
  
  p_int1 = *(int **)(*(int *)(farmer + 4) + 0xa8);
  _call_via_r2(p_int1,amount,*(undefined4 *)(*p_int1 + 0x9c));
  return;
}

// =============================================================================
// Function: Farmer_Routine_080140DC @ 0x080140DC
// =============================================================================
void Farmer_Routine_080140DC(int farmer,undefined4 amount)

{
  int *p_int1;
  
  p_int1 = *(int **)(*(int *)(farmer + 4) + 0xa8);
  _call_via_r2(p_int1,amount,*(undefined4 *)(*p_int1 + 0xa0));
  return;
}

// =============================================================================
// Function: Farmer_Routine_080140F4 @ 0x080140F4
// =============================================================================
void Farmer_Routine_080140F4(int farmer)

{
  int *p_int1;
  
  p_int1 = *(int **)(*(int *)(farmer + 4) + 0xa8);
  _call_via_r1(p_int1,*(undefined4 *)(*p_int1 + 0x80));
  return;
}

// =============================================================================
// Function: Farmer_Routine_0801410C @ 0x0801410C
// =============================================================================
void Farmer_Routine_0801410C(int farmer)

{
  int *p_int1;
  int i_val2;
  
  p_int1 = *(int **)(*(int *)(farmer + 4) + 0xa8);
  i_val2 = _call_via_r2(p_int1,0,*(undefined4 *)(*p_int1 + 0x40));
  _call_via_r1(i_val2,*(undefined4 *)(*(int *)(i_val2 + 0x14) + 0x40));
  return;
}

// =============================================================================
// Function: Farmer_Routine_0801412C @ 0x0801412C
// =============================================================================
u32 Farmer_Routine_0801412C(int farmer)

{
  char c_char1;
  int *p_int2;
  int i_val3;
  int i_val4;
  
  i_val4 = *(int *)(farmer + 4);
  p_int2 = *(int **)(i_val4 + 0xa8);
  i_val3 = _call_via_r2(p_int2,0,*(undefined4 *)(*p_int2 + 0x40));
  c_char1 = _call_via_r1(i_val3,*(undefined4 *)(*(int *)(i_val3 + 0x14) + 0x48));
  if (c_char1 != '\0') {
    *(undefined4 *)(i_val4 + 0x9c) = 0x19;
  }
  return (uint)(c_char1 != '\0');
}

// =============================================================================
// Function: Farmer_Routine_08014164 @ 0x08014164
// =============================================================================
u32 Farmer_Routine_08014164(int farmer,undefined4 amount,undefined1 slot_id)

{
  int *p_int1;
  int i_val2;
  int i_val3;
  
  i_val3 = *(int *)(farmer + 4);
  p_int1 = *(int **)(i_val3 + 0xa8);
  i_val2 = _call_via_r2(p_int1,0,*(undefined4 *)(*p_int1 + 0x40));
  _call_via_r3(i_val2,amount,slot_id,*(undefined4 *)(*(int *)(i_val2 + 0x14) + 0x5c));
  *(undefined4 *)(i_val3 + 0x9c) = 0x19;
  return 1;
}

// =============================================================================
// Function: Farmer_Routine_08014198 @ 0x08014198
// =============================================================================
u32 Farmer_Routine_08014198(int farmer)

{
  int *p_int1;
  int i_val2;
  int i_val3;
  
  i_val3 = *(int *)(farmer + 4);
  p_int1 = *(int **)(i_val3 + 0xa8);
  i_val2 = _call_via_r2(p_int1,0,*(undefined4 *)(*p_int1 + 0x40));
  _call_via_r1(i_val2,*(undefined4 *)(*(int *)(i_val2 + 0x14) + 0x60));
  *(undefined4 *)(i_val3 + 0x9c) = 0x19;
  return 1;
}

// =============================================================================
// Function: Farmer_Routine_080141C4 @ 0x080141C4
// =============================================================================
void Farmer_Routine_080141C4(int farmer)

{
  int *p_int1;
  int i_val2;
  int i_val3;
  
  i_val3 = *(int *)(farmer + 4);
  p_int1 = *(int **)(i_val3 + 0xa8);
  i_val2 = _call_via_r2(p_int1,0,*(undefined4 *)(*p_int1 + 0x40));
  _call_via_r1(i_val2,*(undefined4 *)(*(int *)(i_val2 + 0x14) + 0x4c));
  *(undefined4 *)(i_val3 + 0x9c) = 0x19;
  return;
}

// =============================================================================
// Function: Farmer_Routine_080141EC @ 0x080141EC
// =============================================================================
void Farmer_Routine_080141EC(int farmer)

{
  int *p_int1;
  int i_val2;
  int i_val3;
  
  i_val3 = *(int *)(farmer + 4);
  p_int1 = *(int **)(i_val3 + 0xa8);
  i_val2 = _call_via_r2(p_int1,0,*(undefined4 *)(*p_int1 + 0x40));
  _call_via_r1(i_val2,*(undefined4 *)(*(int *)(i_val2 + 0x14) + 0x50));
  *(undefined4 *)(i_val3 + 0x9c) = 0x19;
  return;
}

// =============================================================================
// Function: Farmer_Routine_08014214 @ 0x08014214
// =============================================================================
void Farmer_Routine_08014214(int farmer)

{
  int *p_int1;
  int i_val2;
  
  p_int1 = *(int **)(*(int *)(farmer + 4) + 0xa8);
  i_val2 = _call_via_r2(p_int1,0,*(undefined4 *)(*p_int1 + 0x40));
  _call_via_r1(i_val2,*(undefined4 *)(*(int *)(i_val2 + 0x14) + 0x54));
  return;
}

// =============================================================================
// Function: Farmer_Routine_08014234 @ 0x08014234
// =============================================================================
void Farmer_Routine_08014234(int farmer)

{
  int *p_int1;
  
  p_int1 = *(int **)(*(int *)(farmer + 4) + 0xa8);
  _call_via_r1(p_int1,*(undefined4 *)(*p_int1 + 0xa4));
  return;
}

// =============================================================================
// Function: Farmer_Routine_0801424C @ 0x0801424C
// =============================================================================
void Farmer_Routine_0801424C(int farmer,undefined4 amount)

{
  int *p_int1;
  
  p_int1 = *(int **)(*(int *)(farmer + 4) + 0xa8);
  _call_via_r2(p_int1,amount,*(undefined4 *)(*p_int1 + 0xa8));
  return;
}

// =============================================================================
// Function: Farmer_Routine_08014264 @ 0x08014264
// =============================================================================
void Farmer_Routine_08014264(int farmer,undefined4 amount,undefined4 slot_id)

{
  int *p_int1;
  int i_val2;
  
  p_int1 = *(int **)(*(int *)(farmer + 4) + 0xa8);
  i_val2 = _call_via_r2(p_int1,amount,*(undefined4 *)(*p_int1 + 0x40));
  if (i_val2 != 0) {
    _call_via_r2(i_val2,slot_id,*(undefined4 *)(*(int *)(i_val2 + 0x14) + 0x38));
  }
  return;
}

// =============================================================================
// Function: Farmer_Routine_08014290 @ 0x08014290
// =============================================================================
void Farmer_Routine_08014290(int farmer,undefined4 amount)

{
  int *p_int1;
  int i_val2;
  
  p_int1 = *(int **)(*(int *)(farmer + 4) + 0xa8);
  i_val2 = _call_via_r2(p_int1,amount,*(undefined4 *)(*p_int1 + 0x40));
  if (i_val2 != 0) {
    _call_via_r2(i_val2,0,*(undefined4 *)(*(int *)(i_val2 + 0x14) + 0x38));
  }
  return;
}

// =============================================================================
// Function: Farmer_Routine_080142B8 @ 0x080142B8
// =============================================================================
void Farmer_Routine_080142B8(int farmer,undefined4 amount)

{
  int *p_int1;
  
  p_int1 = *(int **)(*(int *)(farmer + 4) + 0xa8);
  _call_via_r2(p_int1,amount,*(undefined4 *)(*p_int1 + 0x118));
  return;
}

// =============================================================================
// Function: Farmer_Routine_080142D4 @ 0x080142D4
// =============================================================================
void Farmer_Routine_080142D4(int farmer)

{
  int *p_int1;
  
  p_int1 = *(int **)(*(int *)(farmer + 4) + 0xa8);
  _call_via_r1(p_int1,*(undefined4 *)(*p_int1 + 0x11c));
  return;
}

// =============================================================================
// Function: Farmer_Routine_08014318 @ 0x08014318
// =============================================================================
void Farmer_Routine_08014318(int farmer,undefined4 amount)

{
  char c_char1;
  int *p_int2;
  int i_val3;
  int i_val4;
  undefined4 u_val5;
  
  i_val4 = *(int *)(farmer + 4);
  p_int2 = *(int **)(i_val4 + 0xa8);
  _call_via_r2(p_int2,amount,*(undefined4 *)(*p_int2 + 0xbc));
  i_val3 = *(int *)(i_val4 + 0xb4);
  if (i_val3 != 0) {
    u_val5 = 0;
    p_int2 = *(int **)(i_val4 + 0xa8);
    c_char1 = _call_via_r1(p_int2,*(undefined4 *)(*p_int2 + 0xb0));
    if ((c_char1 != '\0') || (((*(ushort *)(*(int *)(i_val4 + 0x8c) + 0x12) & 0x7ff) >> 5 & 1) != 0)) {
      u_val5 = 1;
    }
    ScriptEngine_Routine_0803CD4C(i_val3 + 8,*(int *)(i_val4 + 0x8c) + 0x10,u_val5);
  }
  VTable_Routine_080D7F08(i_val4);
  return;
}

// =============================================================================
// Function: Farmer_Routine_08014694 @ 0x08014694
// =============================================================================
void Farmer_Routine_08014694(int farmer,undefined4 amount)

{
  int *p_int1;
  
  p_int1 = *(int **)(*(int *)(farmer + 4) + 0xa8);
  _call_via_r2(p_int1,amount,*(undefined4 *)(*p_int1 + 0x150));
  return;
}

// =============================================================================
// Function: Farmer_Routine_080146B0 @ 0x080146B0
// =============================================================================
void Farmer_Routine_080146B0(int farmer,undefined4 amount)

{
  int *p_int1;
  
  p_int1 = *(int **)(*(int *)(farmer + 4) + 0xa8);
  _call_via_r2(p_int1,amount,*(undefined4 *)(*p_int1 + 0x154));
  return;
}

// =============================================================================
// Function: Farmer_Routine_080146CC @ 0x080146CC
// =============================================================================
void Farmer_Routine_080146CC(int farmer,undefined4 amount)

{
  int *p_int1;
  int i_val2;
  
  i_val2 = *(int *)(farmer + 4);
  Building_Routine_0800C994(*(int *)(i_val2 + 0x8c) + 0x410,amount);
  p_int1 = *(int **)(i_val2 + 0xa8);
  _call_via_r2(p_int1,amount,*(undefined4 *)(*p_int1 + 0xac));
  return;
}

// =============================================================================
// Function: Farmer_Routine_080146FC @ 0x080146FC
// =============================================================================
void Farmer_Routine_080146FC(int farmer,undefined2 amount)

{
  int *p_int1;
  uint *p_uint2;
  uint *p_uint3;
  uint u_val4;
  int i_val5;
  uint *p_uint6;
  int i_val7;
  uint *p_uint8;
  int *p_int9;
  uint u_val10;
  uint stack_val_74;
  uint stack_val_70;
  uint stack_val_6c;
  uint stack_val_68;
  uint stack_val_64;
  int stack_val_60;
  int stack_val_5c;
  int stack_val_58;
  int stack_val_54;
  int stack_val_50;
  int stack_val_4c;
  int *piStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  int stack_val_3c;
  uint stack_val_38;
  int stack_val_34;
  int *piStack_30;
  undefined2 *puStack_2c;
  uint *puStack_28;
  uint *puStack_24;
  
  p_int9 = *(int **)(farmer + 4);
  *(undefined1 *)((int)p_int9 + 0xea) = 1;
  *(undefined2 *)(p_int9 + 0x3b) = amount;
  *(ushort *)(p_int9 + 4) = *(ushort *)(p_int9 + 4) | 0x100;
  *(short *)(p_int9 + 6) = (short)0x1F0C;
  *(undefined2 *)(p_int9 + 8) = 0;
  stack_val_74 = stack_val_74 & 0xffff0000;
  *(undefined2 *)((int)p_int9 + 0x22) = 0;
  HW_Routine_08008F60(&stack_val_70,(short)p_int9[0x3b],0x05000002,2);
  p_uint3 = (uint *)p_int9[1];
  if (p_uint3 == (uint *)p_int9[3]) {
    stack_val_5c = 1;
    stack_val_60 = (int)p_uint3 - *p_int9 >> 4;
    p_int1 = &stack_val_60;
    if (stack_val_60 == 0) {
      p_int1 = &stack_val_5c;
    }
    puStack_28 = p_uint3;
    if (stack_val_60 + *p_int1 == 0) {
      puStack_24 = (uint *)0x0;
      i_val7 = 0;
    }
    else {
      i_val7 = (stack_val_60 + *p_int1) * 0x10;
      puStack_24 = (uint *)runtime_malloc_aligned(i_val7);
      if (puStack_24 == (uint *)0x0) {
        puStack_24 = (uint *)VTable_Routine_080D3BC0(i_val7);
      }
    }
    p_uint2 = (uint *)*p_int9;
    stack_val_3c = 0x600;
    stack_val_38 = 0;
    stack_val_34 = 0xf800;
    piStack_30 = p_int9 + 0x18;
    puStack_44 = (undefined1 *)((int)p_int9 + 0xee);
    puStack_2c = (undefined2 *)((int)p_int9 + 0x62);
    puStack_40 = (undefined1 *)((int)p_int9 + 0xef);
    piStack_48 = p_int9 + 0x27;
    p_uint3 = puStack_24;
    for (; p_uint2 != puStack_28; p_uint2 = p_uint2 + 4) {
      if (p_uint3 != (uint *)0x0) {
        u_val4 = p_uint2[1];
        u_val10 = p_uint2[2];
        *p_uint3 = *p_uint2;
        p_uint3[1] = u_val4;
        p_uint3[2] = u_val10;
        p_uint3[3] = p_uint2[3];
      }
      p_uint3 = p_uint3 + 4;
    }
    i_val5 = stack_val_5c;
    if (stack_val_5c == 1) {
      if (p_uint3 != (uint *)0x0) {
        *p_uint3 = stack_val_70;
        p_uint3[1] = stack_val_6c;
        p_uint3[2] = stack_val_68;
        p_uint3[3] = stack_val_64;
      }
      p_uint3 = p_uint3 + 4;
    }
    else {
      for (; i_val5 != 0; i_val5 = i_val5 + -1) {
        if (p_uint3 != (uint *)0x0) {
          *p_uint3 = stack_val_70;
          p_uint3[1] = stack_val_6c;
          p_uint3[2] = stack_val_68;
          p_uint3[3] = stack_val_64;
        }
        p_uint3 = p_uint3 + 4;
      }
    }
    for (i_val5 = *p_int9; i_val5 != p_int9[1]; i_val5 = i_val5 + 0x10) {
    }
    if (*p_int9 != 0) {
      cpp_operator_delete();
    }
    *p_int9 = (int)puStack_24;
    p_int9[1] = (int)p_uint3;
    p_int9[3] = (int)puStack_24 + i_val7;
  }
  else {
    if (p_uint3 != (uint *)0x0) {
      *p_uint3 = stack_val_70;
      p_uint3[1] = stack_val_6c;
      p_uint3[2] = stack_val_68;
      p_uint3[3] = stack_val_64;
    }
    p_int9[1] = p_int9[1] + 0x10;
    stack_val_3c = 0x600;
    stack_val_38 = 0;
    stack_val_34 = 0xf800;
    piStack_30 = p_int9 + 0x18;
    puStack_44 = (undefined1 *)((int)p_int9 + 0xee);
    puStack_2c = (undefined2 *)((int)p_int9 + 0x62);
    puStack_40 = (undefined1 *)((int)p_int9 + 0xef);
    piStack_48 = p_int9 + 0x27;
  }
  HW_Routine_08008F60(&stack_val_74,0x11111111,(stack_val_3c + 0x1e8) * 0x20 + 0x6000000,0x20);
  p_uint3 = (uint *)p_int9[1];
  if (p_uint3 == (uint *)p_int9[3]) {
    stack_val_54 = 1;
    stack_val_58 = (int)p_uint3 - *p_int9 >> 4;
    p_int1 = &stack_val_58;
    if (stack_val_58 == 0) {
      p_int1 = &stack_val_54;
    }
    puStack_28 = p_uint3;
    if (stack_val_58 + *p_int1 == 0) {
      p_uint3 = (uint *)0x0;
      i_val7 = 0;
    }
    else {
      i_val7 = (stack_val_58 + *p_int1) * 0x10;
      p_uint3 = (uint *)runtime_malloc_aligned(i_val7);
      if (p_uint3 == (uint *)0x0) {
        p_uint3 = (uint *)VTable_Routine_080D3BC0(i_val7);
      }
    }
    p_uint6 = p_uint3;
    for (p_uint2 = (uint *)*p_int9; p_uint2 != puStack_28; p_uint2 = p_uint2 + 4) {
      if (p_uint6 != (uint *)0x0) {
        u_val4 = p_uint2[1];
        u_val10 = p_uint2[2];
        *p_uint6 = *p_uint2;
        p_uint6[1] = u_val4;
        p_uint6[2] = u_val10;
        p_uint6[3] = p_uint2[3];
      }
      p_uint6 = p_uint6 + 4;
    }
    i_val5 = stack_val_54;
    if (stack_val_54 == 1) {
      if (p_uint6 != (uint *)0x0) {
        *p_uint6 = stack_val_74;
        p_uint6[1] = stack_val_70;
        p_uint6[2] = stack_val_6c;
        p_uint6[3] = stack_val_68;
      }
      p_uint6 = p_uint6 + 4;
    }
    else {
      for (; i_val5 != 0; i_val5 = i_val5 + -1) {
        if (p_uint6 != (uint *)0x0) {
          *p_uint6 = stack_val_74;
          p_uint6[1] = stack_val_70;
          p_uint6[2] = stack_val_6c;
          p_uint6[3] = stack_val_68;
        }
        p_uint6 = p_uint6 + 4;
      }
    }
    for (i_val5 = *p_int9; i_val5 != p_int9[1]; i_val5 = i_val5 + 0x10) {
    }
    puStack_24 = p_uint3;
    if (*p_int9 != 0) {
      cpp_operator_delete();
    }
    *p_int9 = (int)puStack_24;
    p_int9[1] = (int)p_uint6;
    p_int9[3] = (int)puStack_24 + i_val7;
  }
  else {
    if (p_uint3 != (uint *)0x0) {
      *p_uint3 = stack_val_74;
      p_uint3[1] = stack_val_70;
      p_uint3[2] = stack_val_6c;
      p_uint3[3] = stack_val_68;
    }
    p_int9[1] = p_int9[1] + 0x10;
  }
  u_val4 = stack_val_38 & 0xf000 | 0x1e8;
  HW_Routine_08008F60(&stack_val_74,u_val4 | u_val4 << 0x10,stack_val_34 + 0x6000000,0x500);
  p_uint3 = (uint *)p_int9[1];
  if (p_uint3 == (uint *)p_int9[3]) {
    stack_val_4c = 1;
    stack_val_50 = (int)p_uint3 - *p_int9 >> 4;
    p_int1 = &stack_val_50;
    if (stack_val_50 == 0) {
      p_int1 = &stack_val_4c;
    }
    if (stack_val_50 + *p_int1 == 0) {
      p_uint2 = (uint *)0x0;
      i_val7 = 0;
    }
    else {
      i_val7 = (stack_val_50 + *p_int1) * 0x10;
      p_uint2 = (uint *)runtime_malloc_aligned(i_val7);
      if (p_uint2 == (uint *)0x0) {
        p_uint2 = (uint *)VTable_Routine_080D3BC0(i_val7);
      }
    }
    p_uint8 = p_uint2;
    for (p_uint6 = (uint *)*p_int9; p_uint6 != p_uint3; p_uint6 = p_uint6 + 4) {
      if (p_uint8 != (uint *)0x0) {
        u_val4 = p_uint6[1];
        u_val10 = p_uint6[2];
        *p_uint8 = *p_uint6;
        p_uint8[1] = u_val4;
        p_uint8[2] = u_val10;
        p_uint8[3] = p_uint6[3];
      }
      p_uint8 = p_uint8 + 4;
    }
    i_val5 = stack_val_4c;
    if (stack_val_4c == 1) {
      if (p_uint8 != (uint *)0x0) {
        *p_uint8 = stack_val_74;
        p_uint8[1] = stack_val_70;
        p_uint8[2] = stack_val_6c;
        p_uint8[3] = stack_val_68;
      }
      p_uint8 = p_uint8 + 4;
    }
    else {
      for (; i_val5 != 0; i_val5 = i_val5 + -1) {
        if (p_uint8 != (uint *)0x0) {
          *p_uint8 = stack_val_74;
          p_uint8[1] = stack_val_70;
          p_uint8[2] = stack_val_6c;
          p_uint8[3] = stack_val_68;
        }
        p_uint8 = p_uint8 + 4;
      }
    }
    for (i_val5 = *p_int9; i_val5 != p_int9[1]; i_val5 = i_val5 + 0x10) {
    }
    puStack_24 = p_uint2;
    if (*p_int9 != 0) {
      cpp_operator_delete();
    }
    *p_int9 = (int)puStack_24;
    p_int9[1] = (int)p_uint8;
    p_int9[3] = (int)puStack_24 + i_val7;
  }
  else {
    if (p_uint3 != (uint *)0x0) {
      *p_uint3 = stack_val_74;
      p_uint3[1] = stack_val_70;
      p_uint3[2] = stack_val_6c;
      p_uint3[3] = stack_val_68;
    }
    p_int9[1] = p_int9[1] + 0x10;
  }
  *(short *)piStack_30 = (short)0x3E41;
  *puStack_44 = 0x10;
  *puStack_2c = (short)0x1010;
  *puStack_40 = 0;
  *piStack_48 = 0x1a;
  return;
}

// =============================================================================
// Function: Farmer_Routine_08014AF8 @ 0x08014AF8
// =============================================================================
void Farmer_Routine_08014AF8(int farmer)

{
  int i_val1;
  int *p_int2;
  int *p_int3;
  uint u_val4;
  int i_val5;
  undefined4 *p_uint6;
  int *piStack_1c;
  undefined1 *puStack_18;
  int *piStack_14;
  
  i_val5 = *(int *)(farmer + 4);
  p_int2 = *(int **)(i_val5 + 0xa8);
  if ((p_int2 != (int *)0x0) && (p_int2 != (int *)0x0)) {
    _call_via_r2(p_int2,3,*(undefined4 *)(*p_int2 + 8));
  }
  *(undefined4 *)(i_val5 + 0xa8) = 0;
  Farmer_Routine_08010F54(*(undefined4 *)(i_val5 + 0x8c));
  p_uint6 = (undefined4 *)(i_val5 + 0xa8);
  Farmer_Routine_0801FB7C(&piStack_1c,*(undefined4 *)(i_val5 + 0x8c),*(undefined4 *)(i_val5 + 0x88),0);
  p_int2 = piStack_1c;
  piStack_14 = piStack_1c;
  piStack_1c = (int *)0x0;
  p_int3 = (int *)*p_uint6;
  puStack_18 = (undefined1 *)&piStack_1c;
  if ((p_int2 != p_int3) && (puStack_18 = (undefined1 *)&piStack_1c, p_int3 != (int *)0x0)) {
    puStack_18 = (undefined1 *)&piStack_1c;
    _call_via_r2(p_int3,3,*(undefined4 *)(*p_int3 + 8));
  }
  *p_uint6 = p_int2;
  if (piStack_1c != (int *)0x0) {
    _call_via_r2(piStack_1c,3,*(undefined4 *)(*piStack_1c + 8));
  }
  _call_via_r1((int *)*p_uint6,*(undefined4 *)(*(int *)*p_uint6 + 0x138));
  i_val5 = _call_via_r2((int *)*p_uint6,0,*(undefined4 *)(*(int *)*p_uint6 + 0x40));
  if (*(char *)(*gIWRAM_PedometerStepCount + 0x36c) != '\0') {
    u_val4 = *(ushort *)(*gIWRAM_PedometerStepCount + 0x374) & 0x1f;
    if (u_val4 < 6) {
      i_val1 = 6;
    }
    else {
      i_val1 = 0x1e;
    }
    i_val1 = i_val1 - u_val4;
    _call_via_r3(i_val5,i_val1 * 7,i_val1 * -2,*(undefined4 *)(*(int *)(i_val5 + 0x14) + 100));
  }
  return;
}

// =============================================================================
// Function: Farmer_Routine_08014BD8 @ 0x08014BD8
// =============================================================================
void Farmer_Routine_08014BD8(int farmer)

{
  int i_val1;
  int *p_int2;
  int i_val3;
  uint u_val4;
  
  i_val1 = *(int *)(farmer + 4);
  u_val4 = 1;
  do {
    p_int2 = *(int **)(i_val1 + 0xa8);
    i_val3 = _call_via_r2(p_int2,u_val4,*(undefined4 *)(*p_int2 + 0x40));
    if (i_val3 != 0) {
      _call_via_r2(i_val3,3,*(undefined4 *)(*(int *)(i_val3 + 0x14) + 0x3c));
    }
    u_val4 = u_val4 + 1;
  } while (u_val4 < 0x24);
  return;
}

// =============================================================================
// Function: Farmer_Routine_08014C0C @ 0x08014C0C
// =============================================================================
void Farmer_Routine_08014C0C(int farmer,undefined4 amount,undefined4 slot_id)

{
  int *p_int1;
  int i_val2;
  
  p_int1 = *(int **)(*(int *)(farmer + 4) + 0xa8);
  i_val2 = _call_via_r2(p_int1,0,*(undefined4 *)(*p_int1 + 0x40));
  _call_via_r3(i_val2,amount,slot_id,*(undefined4 *)(*(int *)(i_val2 + 0x14) + 100));
  return;
}

// =============================================================================
// Function: Farmer_Routine_08014C34 @ 0x08014C34
// =============================================================================
undefined4
Farmer_Routine_08014C34(int farmer,int amount,int slot_id,ushort flags,uint arg_5,uint arg_6)

{
  ushort u_val1;
  ushort u_val2;
  ushort u_val3;
  char c_char4;
  int i_val5;
  int *p_int6;
  undefined4 *p_uint7;
  undefined1 stack_buf_64 [44];
  undefined1 stack_buf_38 [6];
  undefined1 stack_val_32;
  undefined2 stack_val_30;
  undefined2 stack_val_2e;
  ushort stack_val_2c;
  int stack_val_28;
  int stack_val_24;
  
  stack_val_24 = *(int *)(farmer + 4);
  if (amount == 0) {
    i_val5 = *(int *)(stack_val_24 + 0x8c);
    u_val3 = (ushort)0x3FF;
    u_val2 = (ushort)0xFFFFFC00;
    u_val1 = u_val2 & stack_val_30 | flags & u_val3;
    stack_val_30._1_1_ = (byte)(u_val1 >> 8);
    stack_val_30 = CONCAT11(stack_val_30._1_1_ & 3 | (byte)((arg_5 & 0x3f) << 2),(char)u_val1);
    u_val1 = u_val2 & stack_val_2e | (ushort)((arg_5 & 0xffff) >> 6) & u_val3;
    stack_val_2e._1_1_ = (byte)(u_val1 >> 8);
    stack_val_2e = CONCAT11(stack_val_2e._1_1_ & 3 | (byte)((arg_6 & 0x3f) << 2),(char)u_val1);
    stack_val_2c = u_val2 & stack_val_2c | (ushort)((arg_6 & 0xffff) >> 6) & u_val3;
    stack_val_28 = slot_id;
    gba_memcpy(stack_buf_38,&stack_val_30,6);
    stack_val_32 = 0;
    Animal_Routine_0809BBF0(stack_buf_64,stack_buf_38,stack_val_28 * 0x78);
    Farm_Routine_08009BE4(i_val5 + 0x14,stack_buf_64);
    p_uint7 = (undefined4 *)(stack_val_24 + 0xa8);
    p_int6 = (int *)*p_uint7;
    _call_via_r2(p_int6,0x2c,*(undefined4 *)(*p_int6 + 0x38));
    p_int6 = (int *)*p_uint7;
    i_val5 = _call_via_r2(p_int6,0x2c,*(undefined4 *)(*p_int6 + 0x40));
    if ((i_val5 != 0) &&
       (c_char4 = _call_via_r1(i_val5,*(undefined4 *)(*(int *)(i_val5 + 0x14) + 0x28)), c_char4 == '\0'
       )) {
      _call_via_r1(i_val5,*(undefined4 *)(*(int *)(i_val5 + 0x14) + 0x20));
    }
  }
  return;
}

// =============================================================================
// Function: Farmer_Routine_08014D30 @ 0x08014D30
// =============================================================================
void Farmer_Routine_08014D30(int farmer,int amount)

{
  int *p_int1;
  int i_val2;
  
  i_val2 = *(int *)(farmer + 4);
  if (amount == 0) {
    p_int1 = *(int **)(i_val2 + 0xa8);
    _call_via_r2(p_int1,0x2c,*(undefined4 *)(*p_int1 + 0x3c));
    Farm_Routine_08009C54(*(int *)(i_val2 + 0x8c) + 0x14);
  }
  return;
}

// =============================================================================
// Function: Farmer_Routine_08014D5C @ 0x08014D5C
// =============================================================================
void Farmer_Routine_08014D5C(int farmer)

{
  int *p_int1;
  int i_val2;
  
  p_int1 = *(int **)(*(int *)(farmer + 4) + 0xa8);
  i_val2 = _call_via_r2(p_int1,0,*(undefined4 *)(*p_int1 + 0x40));
  _call_via_r1(i_val2,*(undefined4 *)(*(int *)(i_val2 + 0x14) + 0x78));
  return;
}

// =============================================================================
// Function: Farmer_Routine_08014D7C @ 0x08014D7C
// =============================================================================
void Farmer_Routine_08014D7C(int farmer)

{
  int *p_int1;
  int i_val2;
  
  p_int1 = *(int **)(*(int *)(farmer + 4) + 0xa8);
  i_val2 = _call_via_r2(p_int1,0,*(undefined4 *)(*p_int1 + 0x40));
  _call_via_r1(i_val2,*(undefined4 *)(*(int *)(i_val2 + 0x14) + 0x44));
  return;
}

// =============================================================================
// Function: Farmer_Routine_08014D9C @ 0x08014D9C
// =============================================================================
u32 Farmer_Routine_08014D9C(int farmer)

{
  int i_val1;
  int i_val2;
  int i_val3;
  uint u_val4;
  undefined4 u_val5;
  uint u_val6;
  undefined1 *p_uint7;
  undefined1 *p_uint8;
  undefined1 *p_uint9;
  undefined1 *p_uint10;
  undefined1 *p_uint11;
  undefined1 *p_uint12;
  undefined1 *p_uint13;
  undefined1 *p_uint14;
  undefined1 *p_uint15;
  undefined1 *p_uint16;
  undefined1 *p_uint17;
  undefined1 *p_uint18;
  undefined1 *p_uint19;
  undefined1 *p_uint20;
  undefined1 *p_uint21;
  undefined1 *p_uint22;
  undefined1 *p_uint23;
  undefined1 *p_uint24;
  undefined1 *p_uint25;
  undefined1 *p_uint26;
  undefined1 *p_uint27;
  
  i_val1 = 0xFFFFFC70;
  p_uint7 = &stack0xffffffe0 + 0xFFFFFC70;
  p_uint8 = &stack0xffffffe0 + 0xFFFFFC70;
  p_uint9 = &stack0xffffffe0 + 0xFFFFFC70;
  p_uint10 = &stack0xffffffe0 + 0xFFFFFC70;
  p_uint11 = &stack0xffffffe0 + 0xFFFFFC70;
  p_uint12 = &stack0xffffffe0 + 0xFFFFFC70;
  p_uint13 = &stack0xffffffe0 + 0xFFFFFC70;
  p_uint14 = &stack0xffffffe0 + 0xFFFFFC70;
  p_uint15 = &stack0xffffffe0 + 0xFFFFFC70;
  p_uint16 = &stack0xffffffe0 + 0xFFFFFC70;
  p_uint17 = &stack0xffffffe0 + 0xFFFFFC70;
  p_uint18 = &stack0xffffffe0 + 0xFFFFFC70;
  p_uint19 = &stack0xffffffe0 + 0xFFFFFC70;
  p_uint20 = &stack0xffffffe0 + 0xFFFFFC70;
  p_uint21 = &stack0xffffffe0 + 0xFFFFFC70;
  p_uint22 = &stack0xffffffe0 + 0xFFFFFC70;
  p_uint23 = &stack0xffffffe0 + 0xFFFFFC70;
  p_uint24 = &stack0xffffffe0 + 0xFFFFFC70;
  p_uint25 = &stack0xffffffe0 + 0xFFFFFC70;
  p_uint26 = &stack0xffffffe0 + 0xFFFFFC70;
  p_uint27 = &stack0xffffffe0 + 0xFFFFFC70;
  i_val2 = *(int *)(farmer + 4);
  if (*(int *)(i_val2 + 0xf0) != 0) {
    Dispatcher_Routine_08000608();
  }
  *(int *)(i_val2 + 0xf0) = 0;
  *p_uint7 = 0;
  gba_memcpy(&stack0x00000364 + i_val1,gRomData_080F0654,3);
  gba_memcpy(&stack0x00000368 + i_val1,gRomData_080F0658,2);
  gba_memcpy(&stack0x0000036c + i_val1,gRomData_080F065C,2);
  u_val5 = gRomData_080F0660;
  i_val3 = gba_strlen(p_uint8);
  u_val6 = 0x383 - i_val3;
  if (u_val6 != 0) {
    u_val4 = gba_strlen(u_val5);
    if (u_val6 < u_val4) {
      u_val4 = u_val6;
    }
    gba_memcpy(&stack0xffffffe0 + i_val3 + i_val1,u_val5,u_val4);
    (&stack0xffffffe0 + i_val3 + i_val1)[u_val4] = 0;
  }
  u_val5 = gRomData_080F0654;
  i_val3 = gba_strlen(p_uint9);
  u_val6 = 0x383 - i_val3;
  if (u_val6 != 0) {
    u_val4 = gba_strlen(u_val5);
    if (u_val6 < u_val4) {
      u_val4 = u_val6;
    }
    gba_memcpy(&stack0xffffffe0 + i_val3 + i_val1,u_val5,u_val4);
    (&stack0xffffffe0 + i_val3 + i_val1)[u_val4] = 0;
  }
  u_val5 = gRomData_080F067C;
  i_val3 = gba_strlen(p_uint10);
  u_val6 = 0x383 - i_val3;
  if (u_val6 != 0) {
    u_val4 = gba_strlen(u_val5);
    if (u_val6 < u_val4) {
      u_val4 = u_val6;
    }
    gba_memcpy(&stack0xffffffe0 + i_val3 + i_val1,u_val5,u_val4);
    (&stack0xffffffe0 + i_val3 + i_val1)[u_val4] = 0;
  }
  u_val5 = Farm_NoOp(*(int *)(i_val2 + 0x8c) + 0x14);
  i_val3 = gba_strlen(p_uint11);
  u_val6 = 0x383 - i_val3;
  if (u_val6 != 0) {
    u_val4 = gba_strlen(u_val5);
    if (u_val6 < u_val4) {
      u_val4 = u_val6;
    }
    gba_memcpy(&stack0xffffffe0 + i_val3 + i_val1,u_val5,u_val4);
    (&stack0xffffffe0 + i_val3 + i_val1)[u_val4] = 0;
  }
  u_val5 = gRomData_080F0684;
  i_val3 = gba_strlen(p_uint12);
  u_val6 = 0x383 - i_val3;
  if (u_val6 != 0) {
    u_val4 = gba_strlen(u_val5);
    if (u_val6 < u_val4) {
      u_val4 = u_val6;
    }
    gba_memcpy(&stack0xffffffe0 + i_val3 + i_val1,u_val5,u_val4);
    (&stack0xffffffe0 + i_val3 + i_val1)[u_val4] = 0;
  }
  u_val5 = gRomData_080F0654;
  i_val3 = gba_strlen(p_uint13);
  u_val6 = 0x383 - i_val3;
  if (u_val6 != 0) {
    u_val4 = gba_strlen(u_val5);
    if (u_val6 < u_val4) {
      u_val4 = u_val6;
    }
    gba_memcpy(&stack0xffffffe0 + i_val3 + i_val1,u_val5,u_val4);
    (&stack0xffffffe0 + i_val3 + i_val1)[u_val4] = 0;
  }
  u_val5 = gRomData_080F068C;
  i_val3 = gba_strlen(p_uint14);
  u_val6 = 0x383 - i_val3;
  if (u_val6 != 0) {
    u_val4 = gba_strlen(u_val5);
    if (u_val6 < u_val4) {
      u_val4 = u_val6;
    }
    gba_memcpy(&stack0xffffffe0 + i_val3 + i_val1,u_val5,u_val4);
    (&stack0xffffffe0 + i_val3 + i_val1)[u_val4] = 0;
  }
  u_val5 = gRomData_080F0658;
  i_val3 = gba_strlen(p_uint15);
  u_val6 = 0x383 - i_val3;
  if (u_val6 != 0) {
    u_val4 = gba_strlen(u_val5);
    if (u_val6 < u_val4) {
      u_val4 = u_val6;
    }
    gba_memcpy(&stack0xffffffe0 + i_val3 + i_val1,u_val5,u_val4);
    (&stack0xffffffe0 + i_val3 + i_val1)[u_val4] = 0;
  }
  u_val5 = gRomData_080F0654;
  i_val3 = gba_strlen(p_uint16);
  u_val6 = 0x383 - i_val3;
  if (u_val6 != 0) {
    u_val4 = gba_strlen(u_val5);
    if (u_val6 < u_val4) {
      u_val4 = u_val6;
    }
    gba_memcpy(&stack0xffffffe0 + i_val3 + i_val1,u_val5,u_val4);
    (&stack0xffffffe0 + i_val3 + i_val1)[u_val4] = 0;
  }
  u_val5 = gRomData_080F069C;
  i_val3 = gba_strlen(p_uint17);
  u_val6 = 0x383 - i_val3;
  if (u_val6 != 0) {
    u_val4 = gba_strlen(u_val5);
    if (u_val6 < u_val4) {
      u_val4 = u_val6;
    }
    gba_memcpy(&stack0xffffffe0 + i_val3 + i_val1,u_val5,u_val4);
    (&stack0xffffffe0 + i_val3 + i_val1)[u_val4] = 0;
  }
  u_val5 = gRomData_080F0658;
  i_val3 = gba_strlen(p_uint18);
  u_val6 = 0x383 - i_val3;
  if (u_val6 != 0) {
    u_val4 = gba_strlen(u_val5);
    if (u_val6 < u_val4) {
      u_val4 = u_val6;
    }
    gba_memcpy(&stack0xffffffe0 + i_val3 + i_val1,u_val5,u_val4);
    (&stack0xffffffe0 + i_val3 + i_val1)[u_val4] = 0;
  }
  u_val5 = gRomData_080F0654;
  i_val3 = gba_strlen(p_uint19);
  u_val6 = 0x383 - i_val3;
  if (u_val6 != 0) {
    u_val4 = gba_strlen(u_val5);
    if (u_val6 < u_val4) {
      u_val4 = u_val6;
    }
    gba_memcpy(&stack0xffffffe0 + i_val3 + i_val1,u_val5,u_val4);
    (&stack0xffffffe0 + i_val3 + i_val1)[u_val4] = 0;
  }
  u_val5 = gRomData_080F065C;
  i_val3 = gba_strlen(p_uint20);
  u_val6 = 0x383 - i_val3;
  if (u_val6 != 0) {
    u_val4 = gba_strlen(u_val5);
    if (u_val6 < u_val4) {
      u_val4 = u_val6;
    }
    gba_memcpy(&stack0xffffffe0 + i_val3 + i_val1,u_val5,u_val4);
    (&stack0xffffffe0 + i_val3 + i_val1)[u_val4] = 0;
  }
  Farmer_Routine_08011934(i_val2,2,p_uint21);
  u_val5 = gRomData_080F065C;
  i_val3 = gba_strlen(p_uint22);
  u_val6 = 0x383 - i_val3;
  if (u_val6 != 0) {
    u_val4 = gba_strlen(u_val5);
    if (u_val6 < u_val4) {
      u_val4 = u_val6;
    }
    gba_memcpy(&stack0xffffffe0 + i_val3 + i_val1,u_val5,u_val4);
    (&stack0xffffffe0 + i_val3 + i_val1)[u_val4] = 0;
  }
  u_val5 = gRomData_080F06B4;
  i_val3 = gba_strlen(p_uint23);
  u_val6 = 0x383 - i_val3;
  if (u_val6 != 0) {
    u_val4 = gba_strlen(u_val5);
    if (u_val6 < u_val4) {
      u_val4 = u_val6;
    }
    gba_memcpy(&stack0xffffffe0 + i_val3 + i_val1,u_val5,u_val4);
    (&stack0xffffffe0 + i_val3 + i_val1)[u_val4] = 0;
  }
  u_val5 = gRomData_080F0654;
  i_val3 = gba_strlen(p_uint24);
  u_val6 = 0x383 - i_val3;
  if (u_val6 != 0) {
    u_val4 = gba_strlen(u_val5);
    if (u_val6 < u_val4) {
      u_val4 = u_val6;
    }
    gba_memcpy(&stack0xffffffe0 + i_val3 + i_val1,u_val5,u_val4);
    (&stack0xffffffe0 + i_val3 + i_val1)[u_val4] = 0;
  }
  u_val5 = gRomData_080F06D0;
  i_val3 = gba_strlen(p_uint25);
  u_val6 = 0x383 - i_val3;
  if (u_val6 != 0) {
    u_val4 = gba_strlen(u_val5);
    if (u_val6 < u_val4) {
      u_val4 = u_val6;
    }
    gba_memcpy(&stack0xffffffe0 + i_val3 + i_val1,u_val5,u_val4);
    (&stack0xffffffe0 + i_val3 + i_val1)[u_val4] = 0;
  }
  u_val5 = gRomData_080F0658;
  i_val3 = gba_strlen(p_uint26);
  u_val6 = 0x383 - i_val3;
  if (u_val6 != 0) {
    u_val4 = gba_strlen(u_val5);
    if (u_val6 < u_val4) {
      u_val4 = u_val6;
    }
    gba_memcpy(&stack0xffffffe0 + i_val3 + i_val1,u_val5,u_val4);
    (&stack0xffffffe0 + i_val3 + i_val1)[u_val4] = 0;
  }
  i_val3 = Dispatcher_Routine_080005D4(900);
  gba_strcpy(i_val3,p_uint27);
  if (i_val3 != *(int *)(i_val2 + 0xf0)) {
    Dispatcher_Routine_08000608();
  }
  *(int *)(i_val2 + 0xf0) = i_val3;
  if (*(int *)(i_val2 + 0xac) != 0) {
    Animal_Routine_08050DC8(*(int *)(i_val2 + 0xac),i_val3,0x100,*(undefined4 *)(i_val2 + 0xb0));
    *(undefined4 *)(i_val2 + 0x9c) = 0x10;
  }
  return *(undefined4 *)(&stack0x0000038c + i_val1);
}

// =============================================================================
// Function: Farmer_Routine_08015210 @ 0x08015210
// =============================================================================
void Farmer_Routine_08015210(int farmer)

{
  char c_char1;
  int i_val2;
  uint u_val3;
  int i_val4;
  int i_val5;
  undefined4 u_val6;
  uint loop_i;
  int *p_int8;
  
  i_val2 = *(int *)(farmer + 4);
  p_int8 = (int *)(i_val2 + 0x8c);
  u_val3 = Barn_GetCowCount(*p_int8 + 0x410);
  loop_i = 0;
  if (u_val3 != 0) {
    do {
      i_val4 = Building_Routine_0800C894(*p_int8 + 0x410,loop_i);
      if ((i_val4 != 0) && (i_val4 = Animal_Routine_0809B514(), i_val4 == 2)) {
        _call_via_r2(*(int **)(i_val2 + 0xa8),loop_i + 0x2e,
                        *(undefined4 *)(**(int **)(i_val2 + 0xa8) + 0x3c));
        Building_Routine_0800C91C(*p_int8 + 0x410,loop_i);
      }
      loop_i = loop_i + 1;
    } while (loop_i < u_val3);
  }
  p_int8 = (int *)(i_val2 + 0x8c);
  i_val4 = *p_int8 + 0x1C2C;
  c_char1 = HeldItem_IsEmpty(i_val4);
  if ((c_char1 == '\0') && (i_val5 = HeldItem_GetKind(i_val4), i_val5 == 3)) {
    i_val5 = *p_int8;
    u_val6 = Farmer_Routine_0800F344(i_val4);
    i_val4 = Building_Routine_0800C894(i_val5 + 0x410,u_val6);
    if (i_val4 == 0) {
      HeldItem_Clear(*p_int8 + 0x1C2C);
    }
  }
  u_val3 = Building_Routine_0800CE74(*p_int8 + 0x5f0);
  loop_i = 0;
  if (u_val3 != 0) {
    do {
      i_val4 = Food_GetStaminaBonus(*p_int8 + 0x5f0,loop_i);
      if ((i_val4 != 0) && (i_val4 = Animal_Routine_0809B514(), i_val4 == 2)) {
        _call_via_r2(*(int **)(i_val2 + 0xa8),loop_i + 0x36,
                        *(undefined4 *)(**(int **)(i_val2 + 0xa8) + 0x3c));
        Food_AddBonuses(*p_int8 + 0x5f0,loop_i);
      }
      loop_i = loop_i + 1;
    } while (loop_i < u_val3);
  }
  return;
}

// =============================================================================
// Function: Farmer_Routine_0801531C @ 0x0801531C
// =============================================================================
u32 Farmer_Routine_0801531C(int farmer)

{
  int i_val1;
  int i_val2;
  int i_val3;
  uint u_val4;
  undefined4 u_val5;
  uint u_val6;
  undefined1 *p_uint7;
  undefined1 *p_uint8;
  undefined1 *p_uint9;
  undefined1 *p_uint10;
  undefined1 *p_uint11;
  undefined1 *p_uint12;
  undefined1 *p_uint13;
  undefined1 *p_uint14;
  undefined1 *p_uint15;
  undefined1 *p_uint16;
  undefined1 *p_uint17;
  undefined1 *p_uint18;
  undefined1 *p_uint19;
  undefined1 *p_uint20;
  undefined1 *p_uint21;
  undefined1 *p_uint22;
  undefined1 *p_uint23;
  undefined1 *p_uint24;
  undefined1 *p_uint25;
  undefined1 *p_uint26;
  undefined1 *p_uint27;
  
  i_val1 = 0xFFFFFC70;
  p_uint7 = &stack0xffffffe0 + 0xFFFFFC70;
  p_uint8 = &stack0xffffffe0 + 0xFFFFFC70;
  p_uint9 = &stack0xffffffe0 + 0xFFFFFC70;
  p_uint10 = &stack0xffffffe0 + 0xFFFFFC70;
  p_uint11 = &stack0xffffffe0 + 0xFFFFFC70;
  p_uint12 = &stack0xffffffe0 + 0xFFFFFC70;
  p_uint13 = &stack0xffffffe0 + 0xFFFFFC70;
  p_uint14 = &stack0xffffffe0 + 0xFFFFFC70;
  p_uint15 = &stack0xffffffe0 + 0xFFFFFC70;
  p_uint16 = &stack0xffffffe0 + 0xFFFFFC70;
  p_uint17 = &stack0xffffffe0 + 0xFFFFFC70;
  p_uint18 = &stack0xffffffe0 + 0xFFFFFC70;
  p_uint19 = &stack0xffffffe0 + 0xFFFFFC70;
  p_uint20 = &stack0xffffffe0 + 0xFFFFFC70;
  p_uint21 = &stack0xffffffe0 + 0xFFFFFC70;
  p_uint22 = &stack0xffffffe0 + 0xFFFFFC70;
  p_uint23 = &stack0xffffffe0 + 0xFFFFFC70;
  p_uint24 = &stack0xffffffe0 + 0xFFFFFC70;
  p_uint25 = &stack0xffffffe0 + 0xFFFFFC70;
  p_uint26 = &stack0xffffffe0 + 0xFFFFFC70;
  p_uint27 = &stack0xffffffe0 + 0xFFFFFC70;
  i_val2 = *(int *)(farmer + 4);
  if (*(int *)(i_val2 + 0xf0) != 0) {
    Dispatcher_Routine_08000608();
  }
  *(int *)(i_val2 + 0xf0) = 0;
  *p_uint7 = 0;
  gba_memcpy(&stack0x00000364 + i_val1,gRomData_080F0654,3);
  gba_memcpy(&stack0x00000368 + i_val1,gRomData_080F0658,2);
  gba_memcpy(&stack0x0000036c + i_val1,gRomData_080F065C,2);
  u_val5 = gRomData_080F0660;
  i_val3 = gba_strlen(p_uint8);
  u_val6 = 0x383 - i_val3;
  if (u_val6 != 0) {
    u_val4 = gba_strlen(u_val5);
    if (u_val6 < u_val4) {
      u_val4 = u_val6;
    }
    gba_memcpy(&stack0xffffffe0 + i_val3 + i_val1,u_val5,u_val4);
    (&stack0xffffffe0 + i_val3 + i_val1)[u_val4] = 0;
  }
  u_val5 = gRomData_080F0654;
  i_val3 = gba_strlen(p_uint9);
  u_val6 = 0x383 - i_val3;
  if (u_val6 != 0) {
    u_val4 = gba_strlen(u_val5);
    if (u_val6 < u_val4) {
      u_val4 = u_val6;
    }
    gba_memcpy(&stack0xffffffe0 + i_val3 + i_val1,u_val5,u_val4);
    (&stack0xffffffe0 + i_val3 + i_val1)[u_val4] = 0;
  }
  u_val5 = gRomData_080F067C;
  i_val3 = gba_strlen(p_uint10);
  u_val6 = 0x383 - i_val3;
  if (u_val6 != 0) {
    u_val4 = gba_strlen(u_val5);
    if (u_val6 < u_val4) {
      u_val4 = u_val6;
    }
    gba_memcpy(&stack0xffffffe0 + i_val3 + i_val1,u_val5,u_val4);
    (&stack0xffffffe0 + i_val3 + i_val1)[u_val4] = 0;
  }
  u_val5 = Farm_NoOp(*(int *)(i_val2 + 0x8c) + 0x14);
  i_val3 = gba_strlen(p_uint11);
  u_val6 = 0x383 - i_val3;
  if (u_val6 != 0) {
    u_val4 = gba_strlen(u_val5);
    if (u_val6 < u_val4) {
      u_val4 = u_val6;
    }
    gba_memcpy(&stack0xffffffe0 + i_val3 + i_val1,u_val5,u_val4);
    (&stack0xffffffe0 + i_val3 + i_val1)[u_val4] = 0;
  }
  u_val5 = gRomData_080F0684;
  i_val3 = gba_strlen(p_uint12);
  u_val6 = 0x383 - i_val3;
  if (u_val6 != 0) {
    u_val4 = gba_strlen(u_val5);
    if (u_val6 < u_val4) {
      u_val4 = u_val6;
    }
    gba_memcpy(&stack0xffffffe0 + i_val3 + i_val1,u_val5,u_val4);
    (&stack0xffffffe0 + i_val3 + i_val1)[u_val4] = 0;
  }
  u_val5 = gRomData_080F0654;
  i_val3 = gba_strlen(p_uint13);
  u_val6 = 0x383 - i_val3;
  if (u_val6 != 0) {
    u_val4 = gba_strlen(u_val5);
    if (u_val6 < u_val4) {
      u_val4 = u_val6;
    }
    gba_memcpy(&stack0xffffffe0 + i_val3 + i_val1,u_val5,u_val4);
    (&stack0xffffffe0 + i_val3 + i_val1)[u_val4] = 0;
  }
  u_val5 = gRomData_080F068C;
  i_val3 = gba_strlen(p_uint14);
  u_val6 = 0x383 - i_val3;
  if (u_val6 != 0) {
    u_val4 = gba_strlen(u_val5);
    if (u_val6 < u_val4) {
      u_val4 = u_val6;
    }
    gba_memcpy(&stack0xffffffe0 + i_val3 + i_val1,u_val5,u_val4);
    (&stack0xffffffe0 + i_val3 + i_val1)[u_val4] = 0;
  }
  u_val5 = gRomData_080F0658;
  i_val3 = gba_strlen(p_uint15);
  u_val6 = 0x383 - i_val3;
  if (u_val6 != 0) {
    u_val4 = gba_strlen(u_val5);
    if (u_val6 < u_val4) {
      u_val4 = u_val6;
    }
    gba_memcpy(&stack0xffffffe0 + i_val3 + i_val1,u_val5,u_val4);
    (&stack0xffffffe0 + i_val3 + i_val1)[u_val4] = 0;
  }
  u_val5 = gRomData_080F0654;
  i_val3 = gba_strlen(p_uint16);
  u_val6 = 0x383 - i_val3;
  if (u_val6 != 0) {
    u_val4 = gba_strlen(u_val5);
    if (u_val6 < u_val4) {
      u_val4 = u_val6;
    }
    gba_memcpy(&stack0xffffffe0 + i_val3 + i_val1,u_val5,u_val4);
    (&stack0xffffffe0 + i_val3 + i_val1)[u_val4] = 0;
  }
  u_val5 = gRomData_080F069C;
  i_val3 = gba_strlen(p_uint17);
  u_val6 = 0x383 - i_val3;
  if (u_val6 != 0) {
    u_val4 = gba_strlen(u_val5);
    if (u_val6 < u_val4) {
      u_val4 = u_val6;
    }
    gba_memcpy(&stack0xffffffe0 + i_val3 + i_val1,u_val5,u_val4);
    (&stack0xffffffe0 + i_val3 + i_val1)[u_val4] = 0;
  }
  u_val5 = gRomData_080F0658;
  i_val3 = gba_strlen(p_uint18);
  u_val6 = 0x383 - i_val3;
  if (u_val6 != 0) {
    u_val4 = gba_strlen(u_val5);
    if (u_val6 < u_val4) {
      u_val4 = u_val6;
    }
    gba_memcpy(&stack0xffffffe0 + i_val3 + i_val1,u_val5,u_val4);
    (&stack0xffffffe0 + i_val3 + i_val1)[u_val4] = 0;
  }
  u_val5 = gRomData_080F0654;
  i_val3 = gba_strlen(p_uint19);
  u_val6 = 0x383 - i_val3;
  if (u_val6 != 0) {
    u_val4 = gba_strlen(u_val5);
    if (u_val6 < u_val4) {
      u_val4 = u_val6;
    }
    gba_memcpy(&stack0xffffffe0 + i_val3 + i_val1,u_val5,u_val4);
    (&stack0xffffffe0 + i_val3 + i_val1)[u_val4] = 0;
  }
  u_val5 = gRomData_080F065C;
  i_val3 = gba_strlen(p_uint20);
  u_val6 = 0x383 - i_val3;
  if (u_val6 != 0) {
    u_val4 = gba_strlen(u_val5);
    if (u_val6 < u_val4) {
      u_val4 = u_val6;
    }
    gba_memcpy(&stack0xffffffe0 + i_val3 + i_val1,u_val5,u_val4);
    (&stack0xffffffe0 + i_val3 + i_val1)[u_val4] = 0;
  }
  Farmer_Routine_08011934(i_val2,1,p_uint21);
  u_val5 = gRomData_080F065C;
  i_val3 = gba_strlen(p_uint22);
  u_val6 = 0x383 - i_val3;
  if (u_val6 != 0) {
    u_val4 = gba_strlen(u_val5);
    if (u_val6 < u_val4) {
      u_val4 = u_val6;
    }
    gba_memcpy(&stack0xffffffe0 + i_val3 + i_val1,u_val5,u_val4);
    (&stack0xffffffe0 + i_val3 + i_val1)[u_val4] = 0;
  }
  u_val5 = gRomData_080F06B4;
  i_val3 = gba_strlen(p_uint23);
  u_val6 = 0x383 - i_val3;
  if (u_val6 != 0) {
    u_val4 = gba_strlen(u_val5);
    if (u_val6 < u_val4) {
      u_val4 = u_val6;
    }
    gba_memcpy(&stack0xffffffe0 + i_val3 + i_val1,u_val5,u_val4);
    (&stack0xffffffe0 + i_val3 + i_val1)[u_val4] = 0;
  }
  u_val5 = gRomData_080F0654;
  i_val3 = gba_strlen(p_uint24);
  u_val6 = 0x383 - i_val3;
  if (u_val6 != 0) {
    u_val4 = gba_strlen(u_val5);
    if (u_val6 < u_val4) {
      u_val4 = u_val6;
    }
    gba_memcpy(&stack0xffffffe0 + i_val3 + i_val1,u_val5,u_val4);
    (&stack0xffffffe0 + i_val3 + i_val1)[u_val4] = 0;
  }
  u_val5 = gRomData_080F06D0;
  i_val3 = gba_strlen(p_uint25);
  u_val6 = 0x383 - i_val3;
  if (u_val6 != 0) {
    u_val4 = gba_strlen(u_val5);
    if (u_val6 < u_val4) {
      u_val4 = u_val6;
    }
    gba_memcpy(&stack0xffffffe0 + i_val3 + i_val1,u_val5,u_val4);
    (&stack0xffffffe0 + i_val3 + i_val1)[u_val4] = 0;
  }
  u_val5 = gRomData_080F0658;
  i_val3 = gba_strlen(p_uint26);
  u_val6 = 0x383 - i_val3;
  if (u_val6 != 0) {
    u_val4 = gba_strlen(u_val5);
    if (u_val6 < u_val4) {
      u_val4 = u_val6;
    }
    gba_memcpy(&stack0xffffffe0 + i_val3 + i_val1,u_val5,u_val4);
    (&stack0xffffffe0 + i_val3 + i_val1)[u_val4] = 0;
  }
  i_val3 = Dispatcher_Routine_080005D4(900);
  gba_strcpy(i_val3,p_uint27);
  if (i_val3 != *(int *)(i_val2 + 0xf0)) {
    Dispatcher_Routine_08000608();
  }
  *(int *)(i_val2 + 0xf0) = i_val3;
  if (*(int *)(i_val2 + 0xac) != 0) {
    Animal_Routine_08050DC8(*(int *)(i_val2 + 0xac),i_val3,0x100,*(undefined4 *)(i_val2 + 0xb0));
    *(undefined4 *)(i_val2 + 0x9c) = 0x10;
  }
  return *(undefined4 *)(&stack0x0000038c + i_val1);
}

// =============================================================================
// Function: Farmer_Routine_08015790 @ 0x08015790
// =============================================================================
void Farmer_Routine_08015790(int farmer)

{
  char c_char1;
  int i_val2;
  uint u_val3;
  int i_val4;
  int i_val5;
  undefined4 u_val6;
  uint loop_i;
  int *p_int8;
  
  i_val2 = *(int *)(farmer + 4);
  p_int8 = (int *)(i_val2 + 0x8c);
  u_val3 = Barn_GetCowCount(*p_int8 + 0x410);
  loop_i = 0;
  if (u_val3 != 0) {
    do {
      i_val4 = Building_Routine_0800C894(*p_int8 + 0x410,loop_i);
      if ((i_val4 != 0) && (i_val4 = Animal_Routine_0809B514(), i_val4 == 1)) {
        _call_via_r2(*(int **)(i_val2 + 0xa8),loop_i + 0x2e,
                        *(undefined4 *)(**(int **)(i_val2 + 0xa8) + 0x3c));
        Building_Routine_0800C91C(*p_int8 + 0x410,loop_i);
      }
      loop_i = loop_i + 1;
    } while (loop_i < u_val3);
  }
  p_int8 = (int *)(i_val2 + 0x8c);
  i_val4 = *p_int8 + 0x1C2C;
  c_char1 = HeldItem_IsEmpty(i_val4);
  if ((c_char1 == '\0') && (i_val5 = HeldItem_GetKind(i_val4), i_val5 == 3)) {
    i_val5 = *p_int8;
    u_val6 = Farmer_Routine_0800F344(i_val4);
    i_val4 = Building_Routine_0800C894(i_val5 + 0x410,u_val6);
    if (i_val4 == 0) {
      HeldItem_Clear(*p_int8 + 0x1C2C);
    }
  }
  u_val3 = Building_Routine_0800CE74(*p_int8 + 0x5f0);
  loop_i = 0;
  if (u_val3 != 0) {
    do {
      i_val4 = Food_GetStaminaBonus(*p_int8 + 0x5f0,loop_i);
      if ((i_val4 != 0) && (i_val4 = Animal_Routine_0809B514(), i_val4 == 1)) {
        _call_via_r2(*(int **)(i_val2 + 0xa8),loop_i + 0x36,
                        *(undefined4 *)(**(int **)(i_val2 + 0xa8) + 0x3c));
        Food_AddBonuses(*p_int8 + 0x5f0,loop_i);
      }
      loop_i = loop_i + 1;
    } while (loop_i < u_val3);
  }
  return;
}

// =============================================================================
// Function: Farmer_Routine_0801589C @ 0x0801589C
// =============================================================================
void Farmer_Routine_0801589C(int farmer,undefined2 amount)

{
  int *p_int1;
  int i_val2;
  int i_val3;
  
  i_val3 = *(int *)(farmer + 4);
  p_int1 = *(int **)(i_val3 + 0xa8);
  i_val2 = _call_via_r2(p_int1,0,*(undefined4 *)(*p_int1 + 0x40));
  _call_via_r2(i_val2,amount,*(undefined4 *)(*(int *)(i_val2 + 0x14) + 0x68));
  *(undefined4 *)(i_val3 + 0x9c) = 0x19;
  return;
}

// =============================================================================
// Function: Farmer_Routine_080158CC @ 0x080158CC
// =============================================================================
void Farmer_Routine_080158CC(int farmer)

{
  int *p_int1;
  int i_val2;
  int i_val3;
  
  i_val3 = *(int *)(farmer + 4);
  p_int1 = *(int **)(i_val3 + 0xa8);
  i_val2 = _call_via_r2(p_int1,0,*(undefined4 *)(*p_int1 + 0x40));
  _call_via_r1(i_val2,*(undefined4 *)(*(int *)(i_val2 + 0x14) + 0x80));
  *(undefined4 *)(i_val3 + 0x9c) = 0x19;
  return;
}

// =============================================================================
// Function: Farmer_Routine_080158F8 @ 0x080158F8
// =============================================================================
void Farmer_Routine_080158F8(int farmer)

{
  int *p_int1;
  int i_val2;
  int i_val3;
  
  i_val3 = *(int *)(farmer + 4);
  p_int1 = *(int **)(i_val3 + 0xa8);
  i_val2 = _call_via_r2(p_int1,0,*(undefined4 *)(*p_int1 + 0x40));
  _call_via_r1(i_val2,*(undefined4 *)(*(int *)(i_val2 + 0x14) + 0x7c));
  *(undefined4 *)(i_val3 + 0x9c) = 0x19;
  return;
}

// =============================================================================
// Function: Farmer_Routine_08015920 @ 0x08015920
// =============================================================================
u32 Farmer_Routine_08015920(int farmer,int amount)

{
  int *p_int1;
  int i_val2;
  undefined4 u_val3;
  
  if ((amount - 0x24U < 7) &&
     (p_int1 = *(int **)(*(int *)(farmer + 4) + 0xa8),
     i_val2 = _call_via_r2(p_int1,amount,*(undefined4 *)(*p_int1 + 0x40)), i_val2 != 0)) {
    u_val3 = Entity_Routine_08033B24();
  }
  else {
    u_val3 = 0;
  }
  return u_val3;
}

// =============================================================================
// Function: Farmer_Routine_08015950 @ 0x08015950
// =============================================================================
void Farmer_Routine_08015950(int farmer)

{
  int *p_int1;
  int i_val2;
  
  p_int1 = *(int **)(*(int *)(farmer + 4) + 0xa8);
  i_val2 = _call_via_r2(p_int1,0,*(undefined4 *)(*p_int1 + 0x40));
  _call_via_r1(i_val2,*(undefined4 *)(*(int *)(i_val2 + 0x14) + 0x84));
  return;
}

// =============================================================================
// Function: Farmer_Routine_08015970 @ 0x08015970
// =============================================================================
void Farmer_Routine_08015970(int farmer)

{
  int *p_int1;
  int i_val2;
  
  p_int1 = *(int **)(*(int *)(farmer + 4) + 0xa8);
  i_val2 = _call_via_r2(p_int1,0,*(undefined4 *)(*p_int1 + 0x40));
  _call_via_r1(i_val2,*(undefined4 *)(*(int *)(i_val2 + 0x14) + 0x88));
  return;
}

// =============================================================================
// Function: Farmer_Routine_08015990 @ 0x08015990
// =============================================================================
void Farmer_Routine_08015990(int farmer)

{
  int *p_int1;
  int i_val2;
  
  p_int1 = *(int **)(*(int *)(farmer + 4) + 0xa8);
  i_val2 = _call_via_r2(p_int1,0,*(undefined4 *)(*p_int1 + 0x40));
  _call_via_r1(i_val2,*(undefined4 *)(*(int *)(i_val2 + 0x14) + 0x8c));
  return;
}

// =============================================================================
// Function: Farmer_Routine_080159B0 @ 0x080159B0
// =============================================================================
void Farmer_Routine_080159B0(int farmer,int amount,int slot_id)

{
  bool b_flag1;
  int i_val2;
  int *p_int3;
  undefined4 *p_uint4;
  uint u_val5;
  int i_val6;
  undefined4 *p_uint7;
  int i_val8;
  uint stack_val_98;
  undefined4 stack_buf_94 [12];
  short stack_val_64;
  short stack_val_62;
  short stack_val_60;
  short stack_val_5e;
  undefined4 stack_val_5c;
  undefined4 stack_val_58;
  undefined4 stack_val_54;
  undefined4 stack_val_50;
  short stack_val_4c;
  short stack_val_4a;
  short stack_val_48;
  short stack_val_46;
  undefined4 stack_val_44;
  undefined4 stack_val_40;
  undefined4 stack_val_3c;
  undefined4 stack_val_38;
  short stack_val_34;
  short stack_val_32;
  short stack_val_30;
  short stack_val_2e;
  undefined4 stack_val_2c;
  undefined4 stack_val_28;
  undefined4 stack_val_24;
  undefined4 stack_val_20;
  undefined1 stack_buf_1c [4];
  
  i_val8 = *(int *)(farmer + 4);
  stack_val_98 = 0;
  i_val2 = _call_via_r2(*(int **)(i_val8 + 0xa8),0x4a,
                          *(undefined4 *)(**(int **)(i_val8 + 0xa8) + 0x40));
  if (i_val2 != 0) {
    u_val5 = (uint)*(ushort *)(i_val2 + 4);
    if (((amount == 0) && (0x33 < u_val5)) && ((int)u_val5 <= 0x133)) {
      if (slot_id == u_val5 - 0x34) {
        b_flag1 = true;
      }
      else {
LAB_08015a16:
        b_flag1 = false;
      }
    }
    else if (((amount != 1) || ((int)u_val5 <= 0x133)) ||
            ((0x233 < (int)u_val5 || (b_flag1 = true, slot_id != u_val5 + 0xFFFFFECC))))
    goto LAB_08015a16;
    if (b_flag1) {
      _call_via_r2(&stack_val_64,i_val2,*(undefined4 *)(*(int *)(i_val2 + 0x14) + 0xc));
      i_val2 = (int)stack_val_64;
      if (i_val2 < 0) {
        i_val2 = i_val2 + 7;
      }
      i_val6 = (int)stack_val_62;
      if (i_val6 < 0) {
        i_val6 = i_val6 + 7;
      }
      stack_val_5c._0_2_ = CONCAT11((char)(i_val6 >> 3),(char)(i_val2 >> 3));
      if (&stack0x00000000 != 0x0094) {
        stack_buf_94[0] = stack_val_5c;
      }
      i_val2 = (int)stack_val_60;
      if (i_val2 < 0) {
        i_val2 = i_val2 + 7;
      }
      i_val6 = (int)stack_val_62;
      if (i_val6 < 0) {
        i_val6 = i_val6 + 7;
      }
      stack_val_58._0_2_ = CONCAT11((char)(i_val6 >> 3),(char)(i_val2 >> 3));
      if (&stack0x00000000 != 0x0090) {
        stack_buf_94[1] = stack_val_58;
      }
      i_val2 = (int)stack_val_64;
      if (i_val2 < 0) {
        i_val2 = i_val2 + 7;
      }
      i_val6 = (int)stack_val_5e;
      if (i_val6 < 0) {
        i_val6 = i_val6 + 7;
      }
      stack_val_54._0_2_ = CONCAT11((char)(i_val6 >> 3),(char)(i_val2 >> 3));
      if (&stack0x00000000 != 0x008c) {
        stack_buf_94[2] = stack_val_54;
      }
      i_val2 = (int)stack_val_60;
      if (i_val2 < 0) {
        i_val2 = i_val2 + 7;
      }
      i_val6 = (int)stack_val_5e;
      if (i_val6 < 0) {
        i_val6 = i_val6 + 7;
      }
      stack_val_50._0_2_ = CONCAT11((char)(i_val6 >> 3),(char)(i_val2 >> 3));
      if (&stack0x00000000 != 0x0088) {
        stack_buf_94[3] = stack_val_50;
      }
      stack_val_98 = 4;
    }
  }
  p_int3 = *(int **)(i_val8 + 0xa8);
  i_val2 = _call_via_r2(p_int3,0x2b,*(undefined4 *)(*p_int3 + 0x40));
  if (i_val2 != 0) {
    u_val5 = (uint)*(ushort *)(i_val2 + 4);
    if (((amount == 0) && (0x33 < u_val5)) && ((int)u_val5 <= 0x133)) {
      if (slot_id == u_val5 - 0x34) {
        b_flag1 = true;
      }
      else {
LAB_08015b76:
        b_flag1 = false;
      }
    }
    else if ((((amount != 1) || ((int)u_val5 <= 0x133)) || (0x233 < (int)u_val5)) ||
            (b_flag1 = true, slot_id != u_val5 + 0xFFFFFECC)) goto LAB_08015b76;
    if (b_flag1) {
      _call_via_r2(&stack_val_4c,i_val2,*(undefined4 *)(*(int *)(i_val2 + 0x14) + 0xc));
      i_val2 = (int)stack_val_4c;
      if (i_val2 < 0) {
        i_val2 = i_val2 + 7;
      }
      i_val6 = (int)stack_val_4a;
      if (i_val6 < 0) {
        i_val6 = i_val6 + 7;
      }
      stack_val_44._0_2_ = CONCAT11((char)(i_val6 >> 3),(char)(i_val2 >> 3));
      if (stack_val_98 < 0xc) {
        if (stack_buf_94 + stack_val_98 != (undefined4 *)0x0) {
          stack_buf_94[stack_val_98] = stack_val_44;
        }
        stack_val_98 = stack_val_98 + 1;
      }
      i_val2 = (int)stack_val_48;
      if (i_val2 < 0) {
        i_val2 = i_val2 + 7;
      }
      i_val6 = (int)stack_val_4a;
      if (i_val6 < 0) {
        i_val6 = i_val6 + 7;
      }
      stack_val_40._0_2_ = CONCAT11((char)(i_val6 >> 3),(char)(i_val2 >> 3));
      if (stack_val_98 < 0xc) {
        if (stack_buf_94 + stack_val_98 != (undefined4 *)0x0) {
          stack_buf_94[stack_val_98] = stack_val_40;
        }
        stack_val_98 = stack_val_98 + 1;
      }
      i_val2 = (int)stack_val_4c;
      if (i_val2 < 0) {
        i_val2 = i_val2 + 7;
      }
      i_val6 = (int)stack_val_46;
      if (i_val6 < 0) {
        i_val6 = i_val6 + 7;
      }
      stack_val_3c._0_2_ = CONCAT11((char)(i_val6 >> 3),(char)(i_val2 >> 3));
      if (stack_val_98 < 0xc) {
        if (stack_buf_94 + stack_val_98 != (undefined4 *)0x0) {
          stack_buf_94[stack_val_98] = stack_val_3c;
        }
        stack_val_98 = stack_val_98 + 1;
      }
      i_val2 = (int)stack_val_48;
      if (i_val2 < 0) {
        i_val2 = i_val2 + 7;
      }
      i_val6 = (int)stack_val_46;
      if (i_val6 < 0) {
        i_val6 = i_val6 + 7;
      }
      stack_val_38._0_2_ = CONCAT11((char)(i_val6 >> 3),(char)(i_val2 >> 3));
      if (stack_val_98 < 0xc) {
        if (stack_buf_94 + stack_val_98 != (undefined4 *)0x0) {
          stack_buf_94[stack_val_98] = stack_val_38;
        }
        stack_val_98 = stack_val_98 + 1;
      }
    }
  }
  p_int3 = *(int **)(i_val8 + 0xa8);
  i_val2 = _call_via_r2(p_int3,0x4b,*(undefined4 *)(*p_int3 + 0x40));
  if (i_val2 == 0) goto LAB_08015dd6;
  u_val5 = (uint)*(ushort *)(i_val2 + 4);
  if (((amount == 0) && (0x33 < u_val5)) && ((int)u_val5 <= 0x133)) {
    if (slot_id == u_val5 - 0x34) {
      b_flag1 = true;
    }
    else {
LAB_08015cd2:
      b_flag1 = false;
    }
  }
  else if (((amount != 1) || ((int)u_val5 <= 0x133)) ||
          ((0x233 < (int)u_val5 || (b_flag1 = true, slot_id != u_val5 + 0xFFFFFECC))))
  goto LAB_08015cd2;
  if (b_flag1) {
    _call_via_r2(&stack_val_34,i_val2,*(undefined4 *)(*(int *)(i_val2 + 0x14) + 0xc));
    i_val2 = (int)stack_val_34;
    if (i_val2 < 0) {
      i_val2 = i_val2 + 7;
    }
    i_val6 = (int)stack_val_32;
    if (i_val6 < 0) {
      i_val6 = i_val6 + 7;
    }
    stack_val_2c._0_2_ = CONCAT11((char)(i_val6 >> 3),(char)(i_val2 >> 3));
    if (stack_val_98 < 0xc) {
      if (stack_buf_94 + stack_val_98 != (undefined4 *)0x0) {
        stack_buf_94[stack_val_98] = stack_val_2c;
      }
      stack_val_98 = stack_val_98 + 1;
    }
    i_val2 = (int)stack_val_30;
    if (i_val2 < 0) {
      i_val2 = i_val2 + 7;
    }
    i_val6 = (int)stack_val_32;
    if (i_val6 < 0) {
      i_val6 = i_val6 + 7;
    }
    stack_val_28._0_2_ = CONCAT11((char)(i_val6 >> 3),(char)(i_val2 >> 3));
    if (stack_val_98 < 0xc) {
      if (stack_buf_94 + stack_val_98 != (undefined4 *)0x0) {
        stack_buf_94[stack_val_98] = stack_val_28;
      }
      stack_val_98 = stack_val_98 + 1;
    }
    i_val2 = (int)stack_val_34;
    if (i_val2 < 0) {
      i_val2 = i_val2 + 7;
    }
    i_val6 = (int)stack_val_2e;
    if (i_val6 < 0) {
      i_val6 = i_val6 + 7;
    }
    stack_val_24._0_2_ = CONCAT11((char)(i_val6 >> 3),(char)(i_val2 >> 3));
    if (stack_val_98 < 0xc) {
      if (stack_buf_94 + stack_val_98 != (undefined4 *)0x0) {
        stack_buf_94[stack_val_98] = stack_val_24;
      }
      stack_val_98 = stack_val_98 + 1;
    }
    i_val2 = (int)stack_val_30;
    if (i_val2 < 0) {
      i_val2 = i_val2 + 7;
    }
    i_val6 = (int)stack_val_2e;
    if (i_val6 < 0) {
      i_val6 = i_val6 + 7;
    }
    stack_val_20._0_2_ = CONCAT11((char)(i_val6 >> 3),(char)(i_val2 >> 3));
    if (stack_val_98 < 0xc) {
      if (stack_buf_94 + stack_val_98 != (undefined4 *)0x0) {
        stack_buf_94[stack_val_98] = stack_val_20;
      }
      stack_val_98 = stack_val_98 + 1;
    }
  }
LAB_08015dd6:
  p_uint4 = stack_buf_94;
  p_uint7 = (undefined4 *)0x0;
  if (stack_val_98 != 0) {
    p_uint7 = p_uint4;
  }
  NPC_Routine_0809CF34(stack_buf_1c,*(int *)(i_val8 + 0x8c) + 0x2E58,amount,slot_id,p_uint7,stack_val_98);
  for (; p_uint4 != stack_buf_94 + stack_val_98; p_uint4 = p_uint4 + 1) {
  }
  return;
}

// =============================================================================
// Function: Farmer_Routine_08015E30 @ 0x08015E30
// =============================================================================
void Farmer_Routine_08015E30(int farmer)

{
  ushort u_val1;
  bool b_flag2;
  ushort u_val3;
  ushort u_val4;
  int i_val5;
  int i_val6;
  int i_val7;
  uint *p_uint8;
  uint u_val9;
  undefined4 u_val10;
  ushort *p_uint11;
  ushort *p_uint12;
  undefined4 *p_uint13;
  int *p_int14;
  int i_val15;
  uint u_val16;
  undefined4 stack_val_100;
  ushort stack_buf_fc [2];
  undefined4 stack_buf_f8 [11];
  undefined4 stack_val_cc;
  short stack_val_c8;
  short stack_val_c6;
  short stack_val_c4;
  short stack_val_c2;
  undefined4 stack_val_c0;
  undefined4 stack_val_bc;
  undefined4 stack_val_b8;
  undefined4 stack_val_b4;
  short stack_val_b0;
  short stack_val_ae;
  short stack_val_ac;
  short stack_val_aa;
  undefined4 stack_val_a8;
  undefined4 stack_val_a4;
  undefined4 stack_val_a0;
  undefined4 stack_val_9c;
  short stack_val_98;
  short stack_val_96;
  short stack_val_94;
  short stack_val_92;
  undefined4 stack_val_90;
  undefined4 stack_val_8c;
  undefined4 stack_val_88;
  undefined4 stack_val_84;
  uint stack_val_80;
  short stack_val_7c;
  short stack_val_7a;
  short stack_val_78;
  short stack_val_76;
  undefined4 stack_val_74;
  undefined4 stack_val_70;
  undefined4 stack_val_6c;
  undefined4 stack_val_68;
  short stack_val_64;
  short stack_val_62;
  short stack_val_60;
  short stack_val_5e;
  undefined4 stack_val_5c;
  undefined4 stack_val_58;
  undefined4 stack_val_54;
  undefined4 stack_val_50;
  short stack_val_4c;
  short stack_val_4a;
  short stack_val_48;
  short stack_val_46;
  undefined4 stack_val_44;
  undefined4 stack_val_40;
  undefined4 stack_val_3c;
  undefined4 stack_val_38;
  uint stack_val_34;
  int stack_val_30;
  undefined4 *puStack_2c;
  undefined4 *puStack_28;
  int stack_val_24;
  
  stack_val_30 = *(int *)(farmer + 4);
  p_uint13 = (undefined4 *)(stack_val_30 + 0xa8);
  i_val5 = _call_via_r1((int *)*p_uint13,*(undefined4 *)(*(int *)*p_uint13 + 0x14));
  stack_val_cc = (uint)stack_val_cc._2_2_ << 0x10;
  if (i_val5 - 0x34U < 0x100) {
    i_val15 = i_val5 + -0x33;
    stack_val_100 = 0;
    i_val6 = _call_via_r2((int *)*p_uint13,0x4a,*(undefined4 *)(*(int *)*p_uint13 + 0x40));
    if (i_val6 != 0) {
      u_val9 = (uint)*(ushort *)(i_val6 + 4);
      b_flag2 = false;
      if (((0x33 < u_val9) && ((int)u_val9 <= 0x133)) && (i_val15 == u_val9 - 0x34)) {
        b_flag2 = true;
      }
      if (b_flag2) {
        _call_via_r2(&stack_val_c8,i_val6,*(undefined4 *)(*(int *)(i_val6 + 0x14) + 0xc));
        i_val6 = (int)stack_val_c8;
        if (i_val6 < 0) {
          i_val6 = i_val6 + 7;
        }
        i_val7 = (int)stack_val_c6;
        if (i_val7 < 0) {
          i_val7 = i_val7 + 7;
        }
        stack_val_c0._0_2_ = CONCAT11((char)(i_val7 >> 3),(char)(i_val6 >> 3));
        if (stack_val_100 < 0xc) {
          if (stack_buf_fc + stack_val_100 * 2 != (ushort *)0x0) {
            *(undefined4 *)(stack_buf_fc + stack_val_100 * 2) = stack_val_c0;
          }
          stack_val_100 = stack_val_100 + 1;
        }
        i_val6 = (int)stack_val_c4;
        if (i_val6 < 0) {
          i_val6 = i_val6 + 7;
        }
        i_val7 = (int)stack_val_c6;
        if (i_val7 < 0) {
          i_val7 = i_val7 + 7;
        }
        stack_val_bc._0_2_ = CONCAT11((char)(i_val7 >> 3),(char)(i_val6 >> 3));
        if (stack_val_100 < 0xc) {
          if (stack_buf_fc + stack_val_100 * 2 != (ushort *)0x0) {
            *(undefined4 *)(stack_buf_fc + stack_val_100 * 2) = stack_val_bc;
          }
          stack_val_100 = stack_val_100 + 1;
        }
        i_val6 = (int)stack_val_c8;
        if (i_val6 < 0) {
          i_val6 = i_val6 + 7;
        }
        i_val7 = (int)stack_val_c2;
        if (i_val7 < 0) {
          i_val7 = i_val7 + 7;
        }
        stack_val_b8._0_2_ = CONCAT11((char)(i_val7 >> 3),(char)(i_val6 >> 3));
        if (stack_val_100 < 0xc) {
          if (stack_buf_fc + stack_val_100 * 2 != (ushort *)0x0) {
            *(undefined4 *)(stack_buf_fc + stack_val_100 * 2) = stack_val_b8;
          }
          stack_val_100 = stack_val_100 + 1;
        }
        i_val6 = (int)stack_val_c4;
        if (i_val6 < 0) {
          i_val6 = i_val6 + 7;
        }
        i_val7 = (int)stack_val_c2;
        if (i_val7 < 0) {
          i_val7 = i_val7 + 7;
        }
        stack_val_b4._0_2_ = CONCAT11((char)(i_val7 >> 3),(char)(i_val6 >> 3));
        if (stack_val_100 < 0xc) {
          if (stack_buf_fc + stack_val_100 * 2 != (ushort *)0x0) {
            *(undefined4 *)(stack_buf_fc + stack_val_100 * 2) = stack_val_b4;
          }
          stack_val_100 = stack_val_100 + 1;
        }
      }
    }
    p_uint13 = (undefined4 *)(stack_val_30 + 0xa8);
    i_val6 = _call_via_r2((int *)*p_uint13,0x2b,*(undefined4 *)(*(int *)*p_uint13 + 0x40));
    puStack_28 = p_uint13;
    if (i_val6 != 0) {
      u_val9 = (uint)*(ushort *)(i_val6 + 4);
      b_flag2 = false;
      if (((0x33 < u_val9) && ((int)u_val9 <= 0x133)) && (i_val15 == u_val9 - 0x34)) {
        b_flag2 = true;
      }
      if (b_flag2) {
        _call_via_r2(&stack_val_b0,i_val6,*(undefined4 *)(*(int *)(i_val6 + 0x14) + 0xc));
        i_val6 = (int)stack_val_b0;
        if (i_val6 < 0) {
          i_val6 = i_val6 + 7;
        }
        i_val7 = (int)stack_val_ae;
        if (i_val7 < 0) {
          i_val7 = i_val7 + 7;
        }
        stack_val_a8._0_2_ = CONCAT11((char)(i_val7 >> 3),(char)(i_val6 >> 3));
        if (stack_val_100 < 0xc) {
          if (stack_buf_fc + stack_val_100 * 2 != (ushort *)0x0) {
            *(undefined4 *)(stack_buf_fc + stack_val_100 * 2) = stack_val_a8;
          }
          stack_val_100 = stack_val_100 + 1;
        }
        i_val6 = (int)stack_val_ac;
        if (i_val6 < 0) {
          i_val6 = i_val6 + 7;
        }
        i_val7 = (int)stack_val_ae;
        if (i_val7 < 0) {
          i_val7 = i_val7 + 7;
        }
        stack_val_a4._0_2_ = CONCAT11((char)(i_val7 >> 3),(char)(i_val6 >> 3));
        if (stack_val_100 < 0xc) {
          if (stack_buf_fc + stack_val_100 * 2 != (ushort *)0x0) {
            *(undefined4 *)(stack_buf_fc + stack_val_100 * 2) = stack_val_a4;
          }
          stack_val_100 = stack_val_100 + 1;
        }
        i_val6 = (int)stack_val_b0;
        if (i_val6 < 0) {
          i_val6 = i_val6 + 7;
        }
        i_val7 = (int)stack_val_aa;
        if (i_val7 < 0) {
          i_val7 = i_val7 + 7;
        }
        stack_val_a0._0_2_ = CONCAT11((char)(i_val7 >> 3),(char)(i_val6 >> 3));
        if (stack_val_100 < 0xc) {
          if (stack_buf_fc + stack_val_100 * 2 != (ushort *)0x0) {
            *(undefined4 *)(stack_buf_fc + stack_val_100 * 2) = stack_val_a0;
          }
          stack_val_100 = stack_val_100 + 1;
        }
        i_val6 = (int)stack_val_ac;
        if (i_val6 < 0) {
          i_val6 = i_val6 + 7;
        }
        i_val7 = (int)stack_val_aa;
        if (i_val7 < 0) {
          i_val7 = i_val7 + 7;
        }
        stack_val_9c._0_2_ = CONCAT11((char)(i_val7 >> 3),(char)(i_val6 >> 3));
        if (stack_val_100 < 0xc) {
          if (stack_buf_fc + stack_val_100 * 2 != (ushort *)0x0) {
            *(undefined4 *)(stack_buf_fc + stack_val_100 * 2) = stack_val_9c;
          }
          stack_val_100 = stack_val_100 + 1;
        }
      }
    }
    i_val6 = _call_via_r2((int *)*puStack_28,0x4b,*(undefined4 *)(*(int *)*puStack_28 + 0x40));
    if (i_val6 != 0) {
      u_val9 = (uint)*(ushort *)(i_val6 + 4);
      b_flag2 = false;
      if (((0x33 < u_val9) && ((int)u_val9 <= 0x133)) && (i_val15 == u_val9 - 0x34)) {
        b_flag2 = true;
      }
      if (b_flag2) {
        _call_via_r2(&stack_val_98,i_val6,*(undefined4 *)(*(int *)(i_val6 + 0x14) + 0xc));
        i_val6 = (int)stack_val_98;
        if (i_val6 < 0) {
          i_val6 = i_val6 + 7;
        }
        i_val7 = (int)stack_val_96;
        if (i_val7 < 0) {
          i_val7 = i_val7 + 7;
        }
        stack_val_90._0_2_ = CONCAT11((char)(i_val7 >> 3),(char)(i_val6 >> 3));
        if (stack_val_100 < 0xc) {
          if (stack_buf_fc + stack_val_100 * 2 != (ushort *)0x0) {
            *(undefined4 *)(stack_buf_fc + stack_val_100 * 2) = stack_val_90;
          }
          stack_val_100 = stack_val_100 + 1;
        }
        i_val6 = (int)stack_val_94;
        if (i_val6 < 0) {
          i_val6 = i_val6 + 7;
        }
        i_val7 = (int)stack_val_96;
        if (i_val7 < 0) {
          i_val7 = i_val7 + 7;
        }
        stack_val_8c._0_2_ = CONCAT11((char)(i_val7 >> 3),(char)(i_val6 >> 3));
        if (stack_val_100 < 0xc) {
          if (stack_buf_fc + stack_val_100 * 2 != (ushort *)0x0) {
            *(undefined4 *)(stack_buf_fc + stack_val_100 * 2) = stack_val_8c;
          }
          stack_val_100 = stack_val_100 + 1;
        }
        i_val6 = (int)stack_val_98;
        if (i_val6 < 0) {
          i_val6 = i_val6 + 7;
        }
        i_val7 = (int)stack_val_92;
        if (i_val7 < 0) {
          i_val7 = i_val7 + 7;
        }
        stack_val_88._0_2_ = CONCAT11((char)(i_val7 >> 3),(char)(i_val6 >> 3));
        if (stack_val_100 < 0xc) {
          if (stack_buf_fc + stack_val_100 * 2 != (ushort *)0x0) {
            *(undefined4 *)(stack_buf_fc + stack_val_100 * 2) = stack_val_88;
          }
          stack_val_100 = stack_val_100 + 1;
        }
        i_val6 = (int)stack_val_94;
        if (i_val6 < 0) {
          i_val6 = i_val6 + 7;
        }
        i_val7 = (int)stack_val_92;
        if (i_val7 < 0) {
          i_val7 = i_val7 + 7;
        }
        stack_val_84._0_2_ = CONCAT11((char)(i_val7 >> 3),(char)(i_val6 >> 3));
        if (stack_val_100 < 0xc) {
          if (stack_buf_fc + stack_val_100 * 2 != (ushort *)0x0) {
            *(undefined4 *)(stack_buf_fc + stack_val_100 * 2) = stack_val_84;
          }
          stack_val_100 = stack_val_100 + 1;
        }
      }
    }
    p_uint11 = stack_buf_fc;
    p_uint12 = (ushort *)0x0;
    if (stack_val_100 != 0) {
      p_uint12 = p_uint11;
    }
    p_int14 = (int *)(stack_val_30 + 0x8c);
    NPC_Routine_0809CF34(&stack_val_80,*p_int14 + 0x2E58,0,i_val15,p_uint12,stack_val_100);
    p_uint8 = &stack_val_80;
    for (; p_uint11 != stack_buf_fc + stack_val_100 * 2; p_uint11 = p_uint11 + 2) {
    }
  }
  else {
    if (0xff < (uint)(i_val5 + 0xFFFFFECC)) {
      return;
    }
    i_val15 = i_val5 + 0xFFFFFECC + 1;
    stack_val_100 = 0;
    i_val6 = _call_via_r2((int *)*p_uint13,0x4a,*(undefined4 *)(*(int *)*p_uint13 + 0x40));
    if (i_val6 != 0) {
      u_val9 = (uint)*(ushort *)(i_val6 + 4);
      b_flag2 = false;
      if (((0x133 < (int)u_val9) && ((int)u_val9 <= 0x233)) &&
         (i_val15 == u_val9 + 0xFFFFFECC)) {
        b_flag2 = true;
      }
      if (b_flag2) {
        _call_via_r2(&stack_val_7c,i_val6,*(undefined4 *)(*(int *)(i_val6 + 0x14) + 0xc));
        i_val6 = (int)stack_val_7c;
        if (i_val6 < 0) {
          i_val6 = i_val6 + 7;
        }
        i_val7 = (int)stack_val_7a;
        if (i_val7 < 0) {
          i_val7 = i_val7 + 7;
        }
        stack_val_74._0_2_ = CONCAT11((char)(i_val7 >> 3),(char)(i_val6 >> 3));
        if (stack_val_100 < 0xc) {
          if (stack_buf_fc + stack_val_100 * 2 != (ushort *)0x0) {
            *(undefined4 *)(stack_buf_fc + stack_val_100 * 2) = stack_val_74;
          }
          stack_val_100 = stack_val_100 + 1;
        }
        i_val6 = (int)stack_val_78;
        if (i_val6 < 0) {
          i_val6 = i_val6 + 7;
        }
        i_val7 = (int)stack_val_7a;
        if (i_val7 < 0) {
          i_val7 = i_val7 + 7;
        }
        stack_val_70._0_2_ = CONCAT11((char)(i_val7 >> 3),(char)(i_val6 >> 3));
        if (stack_val_100 < 0xc) {
          if (stack_buf_fc + stack_val_100 * 2 != (ushort *)0x0) {
            *(undefined4 *)(stack_buf_fc + stack_val_100 * 2) = stack_val_70;
          }
          stack_val_100 = stack_val_100 + 1;
        }
        i_val6 = (int)stack_val_7c;
        if (i_val6 < 0) {
          i_val6 = i_val6 + 7;
        }
        i_val7 = (int)stack_val_76;
        if (i_val7 < 0) {
          i_val7 = i_val7 + 7;
        }
        stack_val_6c._0_2_ = CONCAT11((char)(i_val7 >> 3),(char)(i_val6 >> 3));
        if (stack_val_100 < 0xc) {
          if (stack_buf_fc + stack_val_100 * 2 != (ushort *)0x0) {
            *(undefined4 *)(stack_buf_fc + stack_val_100 * 2) = stack_val_6c;
          }
          stack_val_100 = stack_val_100 + 1;
        }
        i_val6 = (int)stack_val_78;
        if (i_val6 < 0) {
          i_val6 = i_val6 + 7;
        }
        i_val7 = (int)stack_val_76;
        if (i_val7 < 0) {
          i_val7 = i_val7 + 7;
        }
        stack_val_68._0_2_ = CONCAT11((char)(i_val7 >> 3),(char)(i_val6 >> 3));
        if (stack_val_100 < 0xc) {
          if (stack_buf_fc + stack_val_100 * 2 != (ushort *)0x0) {
            *(undefined4 *)(stack_buf_fc + stack_val_100 * 2) = stack_val_68;
          }
          stack_val_100 = stack_val_100 + 1;
        }
      }
    }
    p_uint13 = (undefined4 *)(stack_val_30 + 0xa8);
    i_val6 = _call_via_r2((int *)*p_uint13,0x2b,*(undefined4 *)(*(int *)*p_uint13 + 0x40));
    puStack_28 = p_uint13;
    if (i_val6 != 0) {
      u_val9 = (uint)*(ushort *)(i_val6 + 4);
      b_flag2 = false;
      if (((0x133 < (int)u_val9) && ((int)u_val9 <= 0x233)) &&
         (i_val15 == u_val9 + 0xFFFFFECC)) {
        b_flag2 = true;
      }
      if (b_flag2) {
        _call_via_r2(&stack_val_64,i_val6,*(undefined4 *)(*(int *)(i_val6 + 0x14) + 0xc));
        i_val6 = (int)stack_val_64;
        if (i_val6 < 0) {
          i_val6 = i_val6 + 7;
        }
        i_val7 = (int)stack_val_62;
        if (i_val7 < 0) {
          i_val7 = i_val7 + 7;
        }
        stack_val_5c._0_2_ = CONCAT11((char)(i_val7 >> 3),(char)(i_val6 >> 3));
        if (stack_val_100 < 0xc) {
          if (stack_buf_fc + stack_val_100 * 2 != (ushort *)0x0) {
            *(undefined4 *)(stack_buf_fc + stack_val_100 * 2) = stack_val_5c;
          }
          stack_val_100 = stack_val_100 + 1;
        }
        i_val6 = (int)stack_val_60;
        if (i_val6 < 0) {
          i_val6 = i_val6 + 7;
        }
        i_val7 = (int)stack_val_62;
        if (i_val7 < 0) {
          i_val7 = i_val7 + 7;
        }
        stack_val_58._0_2_ = CONCAT11((char)(i_val7 >> 3),(char)(i_val6 >> 3));
        if (stack_val_100 < 0xc) {
          if (stack_buf_fc + stack_val_100 * 2 != (ushort *)0x0) {
            *(undefined4 *)(stack_buf_fc + stack_val_100 * 2) = stack_val_58;
          }
          stack_val_100 = stack_val_100 + 1;
        }
        i_val6 = (int)stack_val_64;
        if (i_val6 < 0) {
          i_val6 = i_val6 + 7;
        }
        i_val7 = (int)stack_val_5e;
        if (i_val7 < 0) {
          i_val7 = i_val7 + 7;
        }
        stack_val_54._0_2_ = CONCAT11((char)(i_val7 >> 3),(char)(i_val6 >> 3));
        if (stack_val_100 < 0xc) {
          if (stack_buf_fc + stack_val_100 * 2 != (ushort *)0x0) {
            *(undefined4 *)(stack_buf_fc + stack_val_100 * 2) = stack_val_54;
          }
          stack_val_100 = stack_val_100 + 1;
        }
        i_val6 = (int)stack_val_60;
        if (i_val6 < 0) {
          i_val6 = i_val6 + 7;
        }
        i_val7 = (int)stack_val_5e;
        if (i_val7 < 0) {
          i_val7 = i_val7 + 7;
        }
        stack_val_50._0_2_ = CONCAT11((char)(i_val7 >> 3),(char)(i_val6 >> 3));
        if (stack_val_100 < 0xc) {
          if (stack_buf_fc + stack_val_100 * 2 != (ushort *)0x0) {
            *(undefined4 *)(stack_buf_fc + stack_val_100 * 2) = stack_val_50;
          }
          stack_val_100 = stack_val_100 + 1;
        }
      }
    }
    i_val6 = _call_via_r2((int *)*puStack_28,0x4b,*(undefined4 *)(*(int *)*puStack_28 + 0x40));
    if (i_val6 != 0) {
      u_val9 = (uint)*(ushort *)(i_val6 + 4);
      b_flag2 = false;
      if (((0x133 < (int)u_val9) && ((int)u_val9 <= 0x233)) &&
         (i_val15 == u_val9 + 0xFFFFFECC)) {
        b_flag2 = true;
      }
      if (b_flag2) {
        _call_via_r2(&stack_val_4c,i_val6,*(undefined4 *)(*(int *)(i_val6 + 0x14) + 0xc));
        i_val6 = (int)stack_val_4c;
        if (i_val6 < 0) {
          i_val6 = i_val6 + 7;
        }
        i_val7 = (int)stack_val_4a;
        if (i_val7 < 0) {
          i_val7 = i_val7 + 7;
        }
        stack_val_44._0_2_ = CONCAT11((char)(i_val7 >> 3),(char)(i_val6 >> 3));
        if (stack_val_100 < 0xc) {
          if (stack_buf_fc + stack_val_100 * 2 != (ushort *)0x0) {
            *(undefined4 *)(stack_buf_fc + stack_val_100 * 2) = stack_val_44;
          }
          stack_val_100 = stack_val_100 + 1;
        }
        i_val6 = (int)stack_val_48;
        if (i_val6 < 0) {
          i_val6 = i_val6 + 7;
        }
        i_val7 = (int)stack_val_4a;
        if (i_val7 < 0) {
          i_val7 = i_val7 + 7;
        }
        stack_val_40._0_2_ = CONCAT11((char)(i_val7 >> 3),(char)(i_val6 >> 3));
        if (stack_val_100 < 0xc) {
          if (stack_buf_fc + stack_val_100 * 2 != (ushort *)0x0) {
            *(undefined4 *)(stack_buf_fc + stack_val_100 * 2) = stack_val_40;
          }
          stack_val_100 = stack_val_100 + 1;
        }
        i_val6 = (int)stack_val_4c;
        if (i_val6 < 0) {
          i_val6 = i_val6 + 7;
        }
        i_val7 = (int)stack_val_46;
        if (i_val7 < 0) {
          i_val7 = i_val7 + 7;
        }
        stack_val_3c._0_2_ = CONCAT11((char)(i_val7 >> 3),(char)(i_val6 >> 3));
        if (stack_val_100 < 0xc) {
          if (stack_buf_fc + stack_val_100 * 2 != (ushort *)0x0) {
            *(undefined4 *)(stack_buf_fc + stack_val_100 * 2) = stack_val_3c;
          }
          stack_val_100 = stack_val_100 + 1;
        }
        i_val6 = (int)stack_val_48;
        if (i_val6 < 0) {
          i_val6 = i_val6 + 7;
        }
        i_val7 = (int)stack_val_46;
        if (i_val7 < 0) {
          i_val7 = i_val7 + 7;
        }
        stack_val_38._0_2_ = CONCAT11((char)(i_val7 >> 3),(char)(i_val6 >> 3));
        if (stack_val_100 < 0xc) {
          if (stack_buf_fc + stack_val_100 * 2 != (ushort *)0x0) {
            *(undefined4 *)(stack_buf_fc + stack_val_100 * 2) = stack_val_38;
          }
          stack_val_100 = stack_val_100 + 1;
        }
      }
    }
    p_uint11 = stack_buf_fc;
    p_uint12 = (ushort *)0x0;
    if (stack_val_100 != 0) {
      p_uint12 = p_uint11;
    }
    p_int14 = (int *)(stack_val_30 + 0x8c);
    NPC_Routine_0809CF34(&stack_val_34,*p_int14 + 0x2E58,1,i_val15,p_uint12,stack_val_100);
    p_uint8 = &stack_val_34;
    for (; p_uint11 != stack_buf_fc + stack_val_100 * 2; p_uint11 = p_uint11 + 2) {
    }
  }
  stack_val_cc = *p_uint8;
  u_val9 = NPC_Routine_0809D8A0(*p_int14 + 0x2E58);
  if (u_val9 < 5) {
    u_val16 = (stack_val_cc & 0xff) * 0x10 + 0x18;
    u_val9 = (stack_val_cc >> 8 & 0xff) * 0x10 + 0x40;
    puStack_2c = (undefined4 *)(*(int *)*puStack_28 + 0xb4);
    u_val4 = (ushort)0x3FF;
    u_val3 = (ushort)0xFFFFFC00;
    u_val1 = u_val3 & (ushort)stack_val_100 | (short)i_val5 + 1U & u_val4;
    stack_val_24 = (u_val16 & 0x3f) << 2;
    stack_val_100._1_1_ = (byte)(u_val1 >> 8);
    stack_val_100._0_2_ = CONCAT11(stack_val_100._1_1_ & 3 | (byte)stack_val_24,(char)u_val1);
    u_val1 = u_val3 & stack_val_100._2_2_;
    stack_val_100 = CONCAT22(u_val1 | (ushort)(u_val16 >> 6) & u_val4,(ushort)stack_val_100);
    u_val10 = stack_val_100;
    stack_val_100._3_1_ = (byte)(u_val1 >> 8);
    stack_val_100 = CONCAT13(stack_val_100._3_1_ & 3 | (byte)((u_val9 & 0x3f) << 2),(int3)u_val10);
    stack_buf_fc[0] = u_val3 & stack_buf_fc[0] | (ushort)(u_val9 >> 6) & u_val4;
    _call_via_r3((int *)*puStack_28,&stack_val_100,1,*puStack_2c);
    VTable_Routine_080D7F08(stack_val_30);
    u_val10 = _call_via_r1((int *)*puStack_28,*(undefined4 *)(*(int *)*puStack_28 + 0x14));
    VTable_Routine_080D7F9C(stack_val_30,0,u_val10,u_val16,u_val9,0);
  }
  return;
}

// =============================================================================
// Function: Farmer_Routine_08016758 @ 0x08016758
// =============================================================================
void Farmer_Routine_08016758(int farmer)

{
  undefined2 u_val1;
  int i_val2;
  int *p_int3;
  
  i_val2 = *(int *)(farmer + 4);
  p_int3 = *(int **)(i_val2 + 0xa8);
  u_val1 = _call_via_r1(p_int3,*(undefined4 *)(*p_int3 + 0x148));
  HW_Routine_08008B88(i_val2 + 0xbc,u_val1);
  return;
}

// =============================================================================
// Function: Farmer_Routine_08016784 @ 0x08016784
// =============================================================================
u32 Farmer_Routine_08016784(int farmer)

{
  char c_char1;
  int i_val2;
  
  i_val2 = *(int *)(farmer + 4) + 0xbc;
  c_char1 = HW_Routine_08008CD0(i_val2);
  if (c_char1 != '\0') {
    HW_Routine_08008BF8(i_val2,5);
  }
  return (uint)(c_char1 != '\0');
}

// =============================================================================
// Function: Farmer_Routine_080167AC @ 0x080167AC
// =============================================================================
void Farmer_Routine_080167AC(int farmer)

{
  int *p_int1;
  int i_val2;
  
  p_int1 = *(int **)(*(int *)(farmer + 4) + 0xa8);
  i_val2 = _call_via_r2(p_int1,0,*(undefined4 *)(*p_int1 + 0x40));
  _call_via_r1(i_val2,*(undefined4 *)(*(int *)(i_val2 + 0x14) + 0x90));
  return;
}

// =============================================================================
// Function: Farmer_Routine_080167CC @ 0x080167CC
// =============================================================================
void Farmer_Routine_080167CC(int farmer)

{
  HW_Routine_08008CD0(*(int *)(farmer + 4) + 0xbc);
  return;
}

// =============================================================================
// Function: Farmer_Routine_080167DC @ 0x080167DC
// =============================================================================
void Farmer_Routine_080167DC(int farmer)

{
  char c_char1;
  int *p_int2;
  int i_val3;
  int i_val4;
  undefined4 *p_uint5;
  
  i_val4 = *(int *)(farmer + 4);
  i_val3 = *(int *)(i_val4 + 0x8c);
  NPC_Routine_080A05E8(i_val3 + 0x1CD4,i_val3 + 0x11);
  p_uint5 = (undefined4 *)(i_val4 + 0xa8);
  p_int2 = (int *)*p_uint5;
  _call_via_r2(p_int2,0x23,*(undefined4 *)(*p_int2 + 0x38));
  p_int2 = (int *)*p_uint5;
  i_val3 = _call_via_r2(p_int2,0x23,*(undefined4 *)(*p_int2 + 0x40));
  if ((i_val3 != 0) &&
     (c_char1 = _call_via_r1(i_val3,*(undefined4 *)(*(int *)(i_val3 + 0x14) + 0x28)), c_char1 == '\0'))
  {
    _call_via_r1(i_val3,*(undefined4 *)(*(int *)(i_val3 + 0x14) + 0x20));
  }
  return;
}

// =============================================================================
// Function: Farmer_Routine_08016834 @ 0x08016834
// =============================================================================
void Farmer_Routine_08016834(int farmer,uint amount,int slot_id)

{
  int i_val1;
  
  i_val1 = *(int *)(farmer + 4);
  if (amount < 5) {
    switch(*(uint *)(PTR_case_0801684C_08016848 + amount * 4) & 0xfffffffe) {
    case 0x801684c:
      i_val1 = *(int *)(*(int *)(i_val1 + 4) + 8);
    case 0x8016860:
      _call_via_r2(*(int **)(i_val1 + 0xa8),0x2c,*(undefined4 *)(**(int **)(i_val1 + 0xa8) + 0x3c))
      ;
      break;
    case 0x8016872:
      _call_via_r2(*(int **)(i_val1 + 0xa8),0x2b,*(undefined4 *)(**(int **)(i_val1 + 0xa8) + 0x3c))
      ;
      break;
    case 0x8016884:
      FoodStack_GetFood(*(int *)(i_val1 + 0x8c) + 0x5f0,slot_id);
      _call_via_r2(*(int **)(i_val1 + 0xa8),slot_id + 0x36,
                      *(undefined4 *)(**(int **)(i_val1 + 0xa8) + 0x3c));
      break;
    case 0x80168aa:
      Building_Routine_0800CB7C(*(int *)(i_val1 + 0x8c) + 0x410,slot_id);
      _call_via_r2(*(int **)(i_val1 + 0xa8),slot_id + 0x2e,
                      *(undefined4 *)(**(int **)(i_val1 + 0xa8) + 0x3c));
    }
  }
  return;
}

// =============================================================================
// Function: Farmer_Routine_080168D4 @ 0x080168D4
// =============================================================================
void Farmer_Routine_080168D4(int farmer,uint amount)

{
  char c_char1;
  int i_val2;
  int *p_int3;
  int *p_int4;
  undefined4 *p_uint5;
  int i_val6;
  short stack_val_20;
  short stack_val_1e;
  short stack_val_1c;
  short stack_val_1a;
  
  i_val6 = *(int *)(farmer + 4);
  if (amount < 5) {
    switch(*(uint *)(PTR_case_080168F4_080168f0 + amount * 4) & 0xfffffffe) {
    case 0x80168f4:
    case 0x8016908:
      p_uint5 = (undefined4 *)(i_val6 + 0xa8);
      i_val6 = _call_via_r2((int *)*p_uint5,0x2c,*(undefined4 *)(*(int *)*p_uint5 + 0x40));
      if (i_val6 == 0) {
        _call_via_r2((int *)*p_uint5,0x2c,*(undefined4 *)(*(int *)*p_uint5 + 0x38));
        i_val6 = _call_via_r2((int *)*p_uint5,0x2c,*(undefined4 *)(*(int *)*p_uint5 + 0x40));
        if ((i_val6 != 0) &&
           (c_char1 = _call_via_r1(i_val6,*(undefined4 *)(*(int *)(i_val6 + 0x14) + 0x28)),
           c_char1 == '\0')) {
          _call_via_r1(i_val6,*(undefined4 *)(*(int *)(i_val6 + 0x14) + 0x20));
        }
        if (i_val6 != 0) {
          Farmer_Routine_0801FE78(i_val6,2,0x2f0,0x84);
        }
      }
      break;
    case 0x801696c:
      p_int4 = (int *)(i_val6 + 0x8c);
      i_val2 = Tool_GetId(*p_int4 + 0x5f0);
      if (i_val2 != -1) {
        Item_Routine_0800D858(*p_int4 + 0x5f0);
        p_int3 = *(int **)(i_val6 + 0xa8);
        _call_via_r2(p_int3,i_val2 + 0x36,*(undefined4 *)(*p_int3 + 0x38));
        p_int3 = *(int **)(i_val6 + 0xa8);
        i_val6 = _call_via_r2(p_int3,i_val2 + 0x36,*(undefined4 *)(*p_int3 + 0x40));
        if ((i_val6 != 0) &&
           (c_char1 = _call_via_r1(i_val6,*(undefined4 *)(*(int *)(i_val6 + 0x14) + 0x28)),
           c_char1 == '\0')) {
          _call_via_r1(i_val6,*(undefined4 *)(*(int *)(i_val6 + 0x14) + 0x20));
        }
        Tool_GetName(&stack_val_20,*p_int4 + 0x5f0,i_val2);
        if (i_val6 != 0) {
          Farmer_Routine_0801FE78(i_val6,0x25,(int)stack_val_20,(int)stack_val_1e);
        }
      }
      break;
    case 0x8016a02:
      p_int4 = (int *)(i_val6 + 0x8c);
      i_val2 = Building_Routine_0800C6D8(*p_int4 + 0x410);
      if (i_val2 != -1) {
        Building_Routine_0800CBC0(*p_int4 + 0x410);
        p_int3 = *(int **)(i_val6 + 0xa8);
        _call_via_r2(p_int3,i_val2 + 0x2e,*(undefined4 *)(*p_int3 + 0x38));
        p_int3 = *(int **)(i_val6 + 0xa8);
        i_val6 = _call_via_r2(p_int3,i_val2 + 0x2e,*(undefined4 *)(*p_int3 + 0x40));
        if ((i_val6 != 0) &&
           (c_char1 = _call_via_r1(i_val6,*(undefined4 *)(*(int *)(i_val6 + 0x14) + 0x28)),
           c_char1 == '\0')) {
          _call_via_r1(i_val6,*(undefined4 *)(*(int *)(i_val6 + 0x14) + 0x20));
        }
        Building_Routine_0800C6F0(&stack_val_1c,*p_int4 + 0x410,i_val2);
        if (i_val6 != 0) {
          Farmer_Routine_0801FE78(i_val6,0x11,(int)stack_val_1c,(int)stack_val_1a);
        }
      }
      break;
    case 0x8016a92:
      p_uint5 = (undefined4 *)(i_val6 + 0xa8);
      i_val6 = _call_via_r2((int *)*p_uint5,0x2b,*(undefined4 *)(*(int *)*p_uint5 + 0x40));
      if (i_val6 == 0) {
        _call_via_r2((int *)*p_uint5,0x2b,*(undefined4 *)(*(int *)*p_uint5 + 0x38));
        i_val6 = _call_via_r2((int *)*p_uint5,0x2b,*(undefined4 *)(*(int *)*p_uint5 + 0x40));
        if ((i_val6 != 0) &&
           (c_char1 = _call_via_r1(i_val6,*(undefined4 *)(*(int *)(i_val6 + 0x14) + 0x28)),
           c_char1 == '\0')) {
          _call_via_r1(i_val6,*(undefined4 *)(*(int *)(i_val6 + 0x14) + 0x20));
        }
        if (i_val6 != 0) {
          Farmer_Routine_0801FE78(i_val6,2,0x17e,0x52);
        }
      }
    }
  }
  return;
}

// =============================================================================
// Function: Farmer_Routine_08016AFC @ 0x08016AFC
// =============================================================================
u32 Farmer_Routine_08016AFC(int farmer,uint amount)

{
  undefined4 u_val1;
  int i_val2;
  
  i_val2 = *(int *)(farmer + 4);
  if (4 < amount) goto LAB_08016b4a;
  switch(*(uint *)(PTR_case_08016B14_08016b10 + amount * 4) & 0xfffffffe) {
  case 0x8016b14:
    i_val2 = UNK_0x0038;
  case 0x8016b28:
    if (((*(byte *)(*(int *)(i_val2 + 0x8c) + 0x219A) & 2) == 0) &&
       ((*(byte *)(*(int *)(i_val2 + 0x8c) + 0x21A1) & 4) == 0)) {
LAB_08016b4a:
      u_val1 = 0xffffffff;
    }
    else {
LAB_08016b70:
      u_val1 = 0;
    }
    break;
  case 0x8016b58:
    u_val1 = 0xffffffff;
    if ((*(byte *)(*(int *)(i_val2 + 0x8c) + 0x219C) & 0x10) == 0) break;
    goto LAB_08016b70;
  case 0x8016b78:
    u_val1 = Tool_GetId(*(int *)(i_val2 + 0x8c) + 0x5f0);
    break;
  case 0x8016b8a:
    u_val1 = Building_Routine_0800C6D8(*(int *)(i_val2 + 0x8c) + 0x410);
  }
  return u_val1;
}

// =============================================================================
// Function: Farmer_Routine_08016BA4 @ 0x08016BA4
// =============================================================================
void Farmer_Routine_08016BA4(int farmer,undefined4 amount)

{
  int *p_int1;
  
  p_int1 = *(int **)(*(int *)(farmer + 4) + 0xa8);
  _call_via_r2(p_int1,amount,*(undefined4 *)(*p_int1 + 0x10c));
  return;
}

// =============================================================================
// Function: Farmer_Routine_08016BC0 @ 0x08016BC0
// =============================================================================
void Farmer_Routine_08016BC0(int farmer,undefined4 amount)

{
  int *p_int1;
  
  p_int1 = *(int **)(*(int *)(farmer + 4) + 0xa8);
  _call_via_r2(p_int1,amount,*(undefined4 *)(*p_int1 + 0x110));
  return;
}

// =============================================================================
// Function: Farmer_Routine_08016BDC @ 0x08016BDC
// =============================================================================
void Farmer_Routine_08016BDC(int farmer)

{
  int *p_int1;
  
  p_int1 = *(int **)(*(int *)(farmer + 4) + 0xa8);
  _call_via_r1(p_int1,*(undefined4 *)(*p_int1 + 0xfc));
  return;
}

// =============================================================================
// Function: Farmer_Routine_08016BF4 @ 0x08016BF4
// =============================================================================
void Farmer_Routine_08016BF4(int farmer)

{
  int *p_int1;
  
  p_int1 = *(int **)(*(int *)(farmer + 4) + 0xa8);
  _call_via_r1(p_int1,*(undefined4 *)(*p_int1 + 0x100));
  return;
}

// =============================================================================
// Function: Farmer_Routine_08016C10 @ 0x08016C10
// =============================================================================
void Farmer_Routine_08016C10(int farmer)

{
  int *p_int1;
  
  p_int1 = *(int **)(*(int *)(farmer + 4) + 0xa8);
  _call_via_r1(p_int1,*(undefined4 *)(*p_int1 + 0x104));
  return;
}

// =============================================================================
// Function: Farmer_Routine_08016C2C @ 0x08016C2C
// =============================================================================
void Farmer_Routine_08016C2C(int farmer)

{
  int *p_int1;
  
  p_int1 = *(int **)(*(int *)(farmer + 4) + 0xa8);
  _call_via_r2(p_int1,0x5d,*(undefined4 *)(*p_int1 + 0x40));
  Entity_Routine_080387B8();
  return;
}

// =============================================================================
// Function: Farmer_Routine_08016C48 @ 0x08016C48
// =============================================================================
void Farmer_Routine_08016C48(int farmer)

{
  int *p_int1;
  int i_val2;
  
  i_val2 = *(int *)(farmer + 4);
  p_int1 = *(int **)(i_val2 + 0xa8);
  _call_via_r2(p_int1,0x5d,*(undefined4 *)(*p_int1 + 0x40));
  Entity_Routine_080387C8();
  *(undefined4 *)(i_val2 + 0x9c) = 0x1c;
  return;
}

// =============================================================================
// Function: Farmer_Routine_08016C6C @ 0x08016C6C
// =============================================================================
void Farmer_Routine_08016C6C(int farmer)

{
  int *p_int1;
  
  p_int1 = *(int **)(*(int *)(farmer + 4) + 0xa8);
  _call_via_r2(p_int1,0x5d,*(undefined4 *)(*p_int1 + 0x40));
  Entity_Routine_080387EC();
  return;
}

// =============================================================================
// Function: Farmer_Routine_08016C88 @ 0x08016C88
// =============================================================================
void Farmer_Routine_08016C88(int farmer)

{
  int *p_int1;
  int i_val2;
  
  i_val2 = *(int *)(farmer + 4);
  p_int1 = *(int **)(i_val2 + 0xa8);
  _call_via_r2(p_int1,0x5d,*(undefined4 *)(*p_int1 + 0x40));
  Entity_Routine_080387FC();
  *(undefined4 *)(i_val2 + 0x9c) = 0x1b;
  return;
}

// =============================================================================
// Function: Farmer_Routine_08016CAC @ 0x08016CAC
// =============================================================================
void Farmer_Routine_08016CAC(int farmer)

{
  int *p_int1;
  int i_val2;
  
  p_int1 = *(int **)(*(int *)(farmer + 4) + 0xa8);
  i_val2 = _call_via_r2(p_int1,0,*(undefined4 *)(*p_int1 + 0x40));
  _call_via_r1(i_val2,*(undefined4 *)(*(int *)(i_val2 + 0x14) + 0xa8));
  return;
}

// =============================================================================
// Function: Farmer_Routine_08016CCC @ 0x08016CCC
// =============================================================================
void Farmer_Routine_08016CCC(int farmer)

{
  int *p_int1;
  int i_val2;
  
  p_int1 = *(int **)(*(int *)(farmer + 4) + 0xa8);
  i_val2 = _call_via_r2(p_int1,0,*(undefined4 *)(*p_int1 + 0x40));
  _call_via_r1(i_val2,*(undefined4 *)(*(int *)(i_val2 + 0x14) + 0xac));
  return;
}

// =============================================================================
// Function: Farmer_Routine_08016CEC @ 0x08016CEC
// =============================================================================
void Farmer_Routine_08016CEC(int farmer,undefined4 amount)

{
  char c_char1;
  int *p_int2;
  int i_val3;
  undefined4 *p_uint4;
  
  p_uint4 = (undefined4 *)(*(int *)(farmer + 4) + 0xa8);
  p_int2 = (int *)*p_uint4;
  _call_via_r2(p_int2,amount,*(undefined4 *)(*p_int2 + 0x38));
  p_int2 = (int *)*p_uint4;
  i_val3 = _call_via_r2(p_int2,amount,*(undefined4 *)(*p_int2 + 0x40));
  if ((i_val3 != 0) &&
     (c_char1 = _call_via_r1(i_val3,*(undefined4 *)(*(int *)(i_val3 + 0x14) + 0x28)), c_char1 == '\0'))
  {
    _call_via_r1(i_val3,*(undefined4 *)(*(int *)(i_val3 + 0x14) + 0x20));
  }
  return;
}

// =============================================================================
// Function: Farmer_Routine_08016D34 @ 0x08016D34
// =============================================================================
void Farmer_Routine_08016D34(int farmer,undefined4 amount)

{
  int *p_int1;
  
  p_int1 = *(int **)(*(int *)(farmer + 4) + 0xa8);
  _call_via_r2(p_int1,amount,*(undefined4 *)(*p_int1 + 0x3c));
  return;
}

// =============================================================================
// Function: Farmer_Routine_08016D48 @ 0x08016D48
// =============================================================================
void Farmer_Routine_08016D48(int farmer)

{
  ushort u_val1;
  int *p_int2;
  int i_val3;
  int i_val4;
  int i_val5;
  
  i_val5 = *(int *)(farmer + 4);
  p_int2 = *(int **)(i_val5 + 0xa8);
  i_val3 = _call_via_r2(p_int2,0,*(undefined4 *)(*p_int2 + 0x40));
  i_val4 = *gIWRAM_PedometerStepCount;
  u_val1 = *(ushort *)(i_val3 + 4);
  i_val3 = *(int *)(i_val5 + 0x8c);
  *(undefined1 *)(i_val4 + 0x36c) = 1;
  *(uint *)(i_val4 + 0x370) = (uint)u_val1;
  *(undefined2 *)(i_val4 + 0x374) = *(undefined2 *)(i_val3 + 0x12);
  return;
}

// =============================================================================
// Function: Farmer_Routine_08016DB0 @ 0x08016DB0
// =============================================================================
void Farmer_Routine_08016DB0(int farmer)

{
  int i_val1;
  int i_val2;
  int i_val3;
  undefined4 u_val4;
  int i_val5;
  undefined1 stack_buf_34 [4];
  ushort stack_val_30;
  char cStack_2e;
  char cStack_2c;
  undefined1 stack_buf_1c [4];
  
  i_val5 = *(int *)(farmer + 4);
  i_val1 = _call_via_r2(*(int **)(i_val5 + 0xa8),0,*(undefined4 *)(**(int **)(i_val5 + 0xa8) + 0x40)
                         );
  i_val2 = *(int *)(i_val1 + 0x14);
  i_val3 = Animal_Routine_0809AAD4(*(int *)(i_val5 + 0x8c) + 0x2214);
  u_val4 = math_rand();
  i_val3 = math_modsi3(u_val4,i_val3 + 2);
  if (i_val3 == 0) {
    Item_SetIdAndClearQuality(stack_buf_34,0x3f);
  }
  else if (i_val3 == 1) {
    Item_SetIdAndClearQuality(stack_buf_34,0x40);
  }
  else {
    Animal_Routine_0809AB08(&stack_val_30,*(int *)(i_val5 + 0x8c) + 0x2214,i_val3 + -2);
    if (stack_val_30 == 0) {
      Item_SetIdAndClearQuality(stack_buf_34,0x40);
    }
    else {
      Item_SetIdAndClearQuality(stack_buf_1c,stack_val_30 - 1);
      Item_Routine_0800DE0C(stack_buf_1c,(int)cStack_2e,(int)cStack_2c);
      gba_memcpy(stack_buf_34,stack_buf_1c,3);
    }
  }
  gba_memcpy(stack_buf_34,stack_buf_34,3);
  _call_via_r2(i_val1,stack_buf_34,*(undefined4 *)(i_val2 + 0x58));
  *(undefined4 *)(i_val5 + 0x9c) = 0x19;
  return;
}

// =============================================================================
// Function: Farmer_Routine_08016E7C @ 0x08016E7C
// =============================================================================
void Farmer_Routine_08016E7C(int farmer)

{
  int *p_int1;
  int i_val2;
  
  p_int1 = *(int **)(*(int *)(farmer + 4) + 0xa8);
  i_val2 = _call_via_r2(p_int1,0,*(undefined4 *)(*p_int1 + 0x40));
  _call_via_r1(i_val2,*(undefined4 *)(*(int *)(i_val2 + 0x14) + 0x6c));
  return;
}

// =============================================================================
// Function: Farmer_Routine_08016E9C @ 0x08016E9C
// =============================================================================
void Farmer_Routine_08016E9C(int farmer)

{
  int *p_int1;
  int i_val2;
  int i_val3;
  
  i_val3 = *(int *)(farmer + 4);
  p_int1 = *(int **)(i_val3 + 0xa8);
  i_val2 = _call_via_r2(p_int1,0,*(undefined4 *)(*p_int1 + 0x40));
  _call_via_r1(i_val2,*(undefined4 *)(*(int *)(i_val2 + 0x14) + 0x70));
  *(undefined4 *)(i_val3 + 0x9c) = 0x19;
  return;
}

// =============================================================================
// Function: Farmer_Routine_08016EC4 @ 0x08016EC4
// =============================================================================
void Farmer_Routine_08016EC4(void)

{
  
  _call_via_r4();
  return;
}

// =============================================================================
// Function: Farmer_Routine_08016EF0 @ 0x08016EF0
// =============================================================================
void Farmer_Routine_08016EF0(int farmer,undefined4 amount)

{
  int *p_int1;
  
  p_int1 = *(int **)(*(int *)(farmer + 4) + 0xa8);
  _call_via_r2(p_int1,amount,*(undefined4 *)(*p_int1 + 0x164));
  return;
}

// =============================================================================
// Function: Farmer_Routine_08016F0C @ 0x08016F0C
// =============================================================================
void Farmer_Routine_08016F0C(int farmer,undefined1 amount)

{
  int *p_int1;
  int i_val2;
  
  p_int1 = *(int **)(*(int *)(farmer + 4) + 0xa8);
  i_val2 = _call_via_r2(p_int1,0,*(undefined4 *)(*p_int1 + 0x40));
  _call_via_r2(i_val2,amount,*(undefined4 *)(*(int *)(i_val2 + 0x14) + 0x9c));
  return;
}

// =============================================================================
// Function: Farmer_Routine_08016F34 @ 0x08016F34
// =============================================================================
void Farmer_Routine_08016F34(int farmer,undefined4 amount)

{
  int *p_int1;
  int i_val2;
  int i_val3;
  
  i_val3 = *(int *)(farmer + 4);
  p_int1 = *(int **)(i_val3 + 0xa8);
  i_val2 = _call_via_r2(p_int1,0,*(undefined4 *)(*p_int1 + 0x40));
  _call_via_r2(i_val2,amount,*(undefined4 *)(*(int *)(i_val2 + 0x14) + 0x74));
  *(undefined4 *)(i_val3 + 0x9c) = 0x19;
  return;
}

// =============================================================================
// Function: Farmer_Routine_08016F60 @ 0x08016F60
// =============================================================================
void Farmer_Routine_08016F60(int farmer)

{
  char c_char1;
  int i_val2;
  int *p_int3;
  int i_val4;
  uint u_val5;
  
  i_val2 = *(int *)(farmer + 4);
  u_val5 = 0x2e;
  do {
    p_int3 = *(int **)(i_val2 + 0xa8);
    i_val4 = _call_via_r2(p_int3,u_val5,*(undefined4 *)(*p_int3 + 0x40));
    if ((i_val4 != 0) &&
       (c_char1 = _call_via_r1(i_val4,*(undefined4 *)(*(int *)(i_val4 + 0x14) + 0x5c)), c_char1 != '\0'
       )) {
      _call_via_r1(i_val4,*(undefined4 *)(*(int *)(i_val4 + 0x14) + 0x7c));
    }
    u_val5 = u_val5 + 1;
  } while (u_val5 < 0x46);
  return;
}

// =============================================================================
// Function: Farmer_Routine_08016FA4 @ 0x08016FA4
// =============================================================================
undefined4
Farmer_Routine_08016FA4(int farmer,int amount,int slot_id,uint flags,uint arg_5,undefined1 arg_6)

{
  ushort u_val1;
  ushort u_val2;
  ushort u_val3;
  int i_val4;
  undefined2 stack_val_38;
  undefined2 stack_val_36;
  ushort stack_val_34;
  undefined1 stack_val_32;
  undefined2 stack_val_30;
  undefined2 stack_val_2e;
  ushort stack_val_2c;
  int stack_val_28;
  int stack_val_24;
  
  stack_val_24 = *(int *)(farmer + 4);
  stack_val_28 = amount;
  if (amount < 0x4a) {
    i_val4 = _call_via_r2(*(int **)(stack_val_24 + 0xa8),amount,
                            *(undefined4 *)(**(int **)(stack_val_24 + 0xa8) + 0x40));
    if (i_val4 != 0) {
      u_val3 = (ushort)0x3FF;
      u_val2 = (ushort)0xFFFFFC00;
      u_val1 = u_val2 & stack_val_30 | (ushort)slot_id & u_val3;
      stack_val_30._1_1_ = (byte)(u_val1 >> 8);
      stack_val_30 = CONCAT11(stack_val_30._1_1_ & 3 | (byte)((flags & 0x3f) << 2),(char)u_val1);
      u_val1 = u_val2 & stack_val_2e | (ushort)((flags & 0xffff) >> 6) & u_val3;
      stack_val_2e._1_1_ = (byte)(u_val1 >> 8);
      stack_val_2e = CONCAT11(stack_val_2e._1_1_ & 3 | (byte)((arg_5 & 0x3f) << 2),(char)u_val1);
      stack_val_2c = u_val2 & stack_val_2c | (ushort)((arg_5 & 0xffff) >> 6) & u_val3;
      gba_memcpy(&stack_val_38,&stack_val_30,6);
      stack_val_32 = arg_6;
      Entity_Routine_0803211C(i_val4,&stack_val_38);
      _call_via_r1(i_val4,*(undefined4 *)(*(int *)(i_val4 + 0x14) + 0x20));
    }
  }
  else {
    i_val4 = _call_via_r2(*(int **)(stack_val_24 + 0xa8),amount,
                            *(undefined4 *)(**(int **)(stack_val_24 + 0xa8) + 0x40));
    if (i_val4 != 0) {
      u_val3 = (ushort)0x3FF;
      u_val2 = (ushort)0xFFFFFC00;
      u_val1 = u_val2 & stack_val_38 | (ushort)slot_id & u_val3;
      stack_val_38._1_1_ = (byte)(u_val1 >> 8);
      stack_val_38 = CONCAT11(stack_val_38._1_1_ & 3 | (byte)((flags & 0x3f) << 2),(char)u_val1);
      u_val1 = u_val2 & stack_val_36 | (ushort)((flags & 0xffff) >> 6) & u_val3;
      stack_val_36._1_1_ = (byte)(u_val1 >> 8);
      stack_val_36 = CONCAT11(stack_val_36._1_1_ & 3 | (byte)((arg_5 & 0x3f) << 2),(char)u_val1);
      stack_val_34 = u_val2 & stack_val_34 | (ushort)((arg_5 & 0xffff) >> 6) & u_val3;
      Farmer_Routine_0801FE78(i_val4,stack_val_38 & 0x3ff,
                    (int)(short)((ushort)((stack_val_36 & 0x3FF) << 6) |
                                (ushort)(flags & 0x3f)),
                    (int)(short)((ushort)((stack_val_34 & 0x3FF) << 6) |
                                (ushort)(arg_5 & 0x3f)));
      _call_via_r1(i_val4,*(undefined4 *)(*(int *)(i_val4 + 0x14) + 0x20));
    }
  }
  if (stack_val_28 == 0) {
    if (slot_id == 0x19) {
      NPC_Routine_080A0A90(*(int *)(stack_val_24 + 0x8c) + 0x1CD4);
    }
    i_val4 = 0;
    if (slot_id - 0x35U < 0xff) {
      i_val4 = slot_id + -0x34;
    }
    else if ((uint)(0xFFFFFECB + slot_id) < 0xff) {
      i_val4 = 0xFFFFFECC + slot_id;
    }
    if (0 < i_val4) {
      Farmer_Routine_0800EECC(*(int *)(stack_val_24 + 0x8c) + 0x1BD8);
    }
  }
  return;
}

// =============================================================================
// Function: Farmer_Routine_08017180 @ 0x08017180
// =============================================================================
void Farmer_Routine_08017180(int farmer,uint amount,byte *slot_id,int flags,int arg_5)

{
  byte b_flag1;
  int i_val2;
  uint loop_i;
  uint u_val4;
  byte *pbVar5;
  undefined4 *p_uint6;
  undefined4 *p_uint7;
  uint u_val8;
  
  if ((((farmer != 0) && (amount != 0)) &&
      (pbVar5 = *(byte **)(slot_id + 0x14), pbVar5 != (byte *)0x0)) &&
     ((i_val2 = *(int *)(slot_id + 0x10), i_val2 != 0 &&
      (u_val8 = (uint)*slot_id, flags + u_val8 <= amount)))) {
    p_uint7 = (undefined4 *)(farmer + flags * 4 + amount * arg_5 * 4);
    b_flag1 = slot_id[1];
    loop_i = 0;
    if (b_flag1 != 0) {
      do {
        u_val4 = 0;
        loop_i = loop_i + 1;
        p_uint6 = p_uint7;
        if (u_val8 != 0) {
          do {
            *p_uint6 = *(undefined4 *)((uint)*pbVar5 * 4 + i_val2);
            pbVar5 = pbVar5 + 1;
            u_val4 = u_val4 + 1;
            p_uint6 = p_uint6 + 1;
          } while (u_val4 < u_val8);
        }
        p_uint7 = p_uint7 + amount;
      } while (loop_i < b_flag1);
    }
  }
  return;
}

// =============================================================================
// Function: Farmer_Routine_0801740C @ 0x0801740C
// =============================================================================
u32 Farmer_Routine_0801740C(uint *farmer,undefined4 amount,undefined4 slot_id,int flags)

{
  undefined1 u_val1;
  undefined1 u_val2;
  uint u_val3;
  undefined4 u_val4;
  int saved_r4;
  
  u_val3 = ((*farmer & 0xff) >> 2) - 0x1b;
  if (0xb < u_val3) goto case_08017458;
  switch(*(uint *)(PTR_case_08017428_08017424 + u_val3 * 4) & 0xfffffffe) {
  case 0x8017428:
    u_val1 = (undefined1)*(uint *)(PTR_case_08017428_08017424 + u_val3 * 4);
    *(undefined1 *)(flags + 0x11) = u_val1;
    u_val2 = (undefined1)saved_r4;
    *(undefined1 *)(flags + 0x11) = u_val2;
    *(undefined1 *)(saved_r4 + 0x11) = u_val1;
    *(undefined1 *)(saved_r4 + 0x11) = u_val2;
    *(undefined1 *)(flags + 0x11) = u_val1;
    *(undefined1 *)(flags + 0x11) = u_val2;
    *(undefined1 *)(saved_r4 + 0x11) = u_val1;
    *(undefined1 *)(saved_r4 + 0x11) = u_val2;
    *(undefined1 *)(flags + 0x11) = u_val1;
    *(undefined1 *)(flags + 0x11) = u_val2;
    *(undefined1 *)(saved_r4 + 0x11) = u_val1;
    *(undefined1 *)(saved_r4 + 0x11) = u_val2;
  case 0x8017458:
case_08017458:
    u_val4 = 0;
    break;
  case 0x801745c:
    u_val4 = 1;
    break;
  case 0x8017460:
    u_val4 = 2;
    break;
  case 0x8017464:
    u_val4 = 3;
  }
  return u_val4;
}

// =============================================================================
// Function: Farmer_Routine_0801746C @ 0x0801746C
// =============================================================================
u32 Farmer_Routine_0801746C(uint *farmer)

{
  undefined1 u_val1;
  uint u_val2;
  undefined4 u_val3;
  undefined1 saved_r4;
  int saved_r7;
  
  u_val2 = ((*farmer & 0xff) >> 2) - 0x1b;
  if (0xb < u_val2) goto case_080174B8;
  u_val2 = *(uint *)(PTR_case_08017488_08017484 + u_val2 * 4);
  switch(u_val2 & 0xfffffffe) {
  case 0x8017488:
    u_val1 = (undefined1)u_val2;
    *(undefined1 *)(saved_r7 + 0x12) = u_val1;
    *(undefined1 *)(saved_r7 + 0x12) = u_val1;
    *(undefined1 *)(saved_r7 + 0x12) = u_val1;
    *(undefined1 *)(saved_r7 + 0x12) = u_val1;
    *(undefined1 *)(saved_r7 + 0x12) = saved_r4;
    *(undefined1 *)(saved_r7 + 0x12) = saved_r4;
    *(undefined1 *)(saved_r7 + 0x12) = saved_r4;
    *(undefined1 *)(saved_r7 + 0x12) = saved_r4;
    *(undefined1 *)(u_val2 + 0x13) = u_val1;
    *(undefined1 *)(u_val2 + 0x13) = u_val1;
    *(undefined1 *)(u_val2 + 0x13) = u_val1;
    *(undefined1 *)(u_val2 + 0x13) = u_val1;
  case 0x80174b8:
case_080174B8:
    u_val3 = 0;
    break;
  case 0x80174bc:
    u_val3 = 1;
    break;
  case 0x80174c0:
    u_val3 = 2;
  }
  return u_val3;
}

// =============================================================================
// Function: Farmer_Routine_080174C8 @ 0x080174C8
// =============================================================================
undefined8
Farmer_Routine_080174C8(undefined4 farmer,undefined4 amount,undefined4 slot_id,undefined4 flags,
             int arg_5,char arg_6,undefined1 *arg_7)

{
  undefined4 u_val1;
  int i_val2;
  int stack_ints_30 [2];
  short stack_val_28;
  short stack_val_26;
  
  NPC_Routine_080A1CBC(stack_ints_30,amount);
  i_val2 = 0;
  if (arg_6 == '\0') {
    if (stack_ints_30[0] != 0x12) {
      if (stack_ints_30[0] != 0x15) goto LAB_080175a0;
      i_val2 = 1;
    }
LAB_08017514:
    arg_7[0x10] = 0;
    if ((0 < arg_5 - i_val2) &&
       (((stack_ints_30[0] == 0x12 || (NPC_Routine_080A1FC4(amount,slot_id), stack_ints_30[0] == 0x12)) ||
        (i_val2 = NPC_Routine_080A1EF4(amount,slot_id), i_val2 == 0)))) {
      NPC_Routine_080A1C94(amount,slot_id,flags);
      *arg_7 = 1;
      *(int *)(arg_7 + 8) = (int)stack_val_28;
      *(int *)(arg_7 + 0xc) = (int)stack_val_26;
      if (stack_ints_30[0] == 0x13) {
        u_val1 = 6;
LAB_08017598:
        *(undefined4 *)(arg_7 + 4) = u_val1;
      }
      else {
        if (0x13 < stack_ints_30[0]) {
          if (stack_ints_30[0] == 0x14) {
            u_val1 = 9;
          }
          else {
            if (stack_ints_30[0] != 0x15) goto LAB_0801759c;
            Farm_AddLumber(farmer,6);
            u_val1 = 7;
          }
          goto LAB_08017598;
        }
        if (stack_ints_30[0] == 0x12) {
          Farm_AddLumber(farmer,1);
          u_val1 = 4;
          goto LAB_08017598;
        }
      }
LAB_0801759c:
      u_val1 = 1;
      goto LAB_080175a2;
    }
  }
  else {
    if (stack_ints_30[0] == 0x13) {
      i_val2 = 2;
      goto LAB_08017514;
    }
    if (stack_ints_30[0] == 0x14) {
      i_val2 = 7;
      goto LAB_08017514;
    }
  }
LAB_080175a0:
  u_val1 = 0;
LAB_080175a2:
  return u_val1;
}

// =============================================================================
// Function: Farmer_Routine_080175B4 @ 0x080175B4
// =============================================================================
undefined8
Farmer_Routine_080175B4(undefined4 *farmer,int amount,undefined4 slot_id,int *flags,byte arg_5)

{
  undefined2 u_val1;
  undefined1 u_val2;
  char c_char3;
  int *p_int4;
  undefined4 u_val5;
  int i_val6;
  int i_val7;
  undefined4 *p_uint8;
  uint loop_i;
  int *p_int10;
  byte *pbVar11;
  int stack_val_4c;
  undefined1 temp_buf_48 [8];
  undefined2 *apuStack_40 [2];
  int stack_val_38;
  int *piStack_34;
  uint stack_val_30;
  uint stack_val_2c;
  int *piStack_28;
  int stack_val_24;
  
  stack_val_30 = (uint)arg_5;
  *farmer = gRomData_080E6038;
  *farmer = gRomData_080E5EC4;
  stack_val_4c = *flags;
  *flags = 0;
  stack_val_38 = amount;
  piStack_34 = flags;
  NPC_Routine_080AC674(farmer + 1,&stack_val_4c);
  p_int4 = (int *)(0x1038 + (int)farmer);
  *p_int4 = stack_val_38;
  *(undefined1 *)((int)farmer + 0x103C) = 0;
  i_val7 = *p_int4;
  farmer[0x410] = i_val7 + 0x10;
  *(undefined1 *)(farmer + 0x411) = 0;
  p_uint8 = (undefined4 *)(0x1048 + (int)farmer);
  u_val5 = Farmer_Routine_0801A8C0(farmer,(*(uint *)(i_val7 + 0x10) & 0x1fffff) >> 0x10);
  *p_uint8 = u_val5;
  loop_i = *(uint *)farmer[0x410];
  u_val5 = Farmer_Routine_0800E324(*p_int4 + 0x10);
  u_val2 = NPC_Routine_080A4650((loop_i & 0x1fffff) >> 0x10,(loop_i & 0x7ffffff) >> 0x15,u_val5,*p_uint8);
  *(undefined1 *)((int)farmer + 0x104C) = u_val2;
  p_uint8 = (undefined4 *)((int)farmer + 0x1050);
  u_val5 = Dispatcher_Routine_080005E4(0xb000);
  *p_uint8 = u_val5;
  *(undefined4 *)((int)farmer + 0x1054) = slot_id;
  i_val7 = 0x1058;
  *(undefined4 *)((int)farmer + 0x1058) = 0;
  *(undefined4 *)((int)farmer + 0x105C) = 0;
  *(undefined4 *)((int)farmer + i_val7 + 0xc) = 0;
  *(undefined4 *)((int)farmer + 0x1068) = 0;
  p_uint8 = (undefined4 *)((int)farmer + i_val7 + 0x14);
  i_val7 = 1;
  do {
    *p_uint8 = 0;
    p_uint8 = p_uint8 + 1;
    i_val7 = i_val7 + -1;
  } while (i_val7 != -1);
  p_uint8 = (undefined4 *)((int)farmer + 0x1074);
  i_val7 = 1;
  p_int4 = (int *)(0x107C + (int)farmer);
  do {
    *p_uint8 = 0;
    p_uint8 = p_uint8 + 1;
    i_val7 = i_val7 + -1;
  } while (i_val7 != -1);
  *(undefined4 *)((int)farmer + 0x107C) = 0;
  p_uint8 = farmer + 0x420;
  i_val7 = 3;
  do {
    *(byte *)((int)p_uint8 + 1) = *(byte *)((int)p_uint8 + 1) & 0xfc;
    p_uint8[2] = 0;
    p_uint8 = p_uint8 + 3;
    i_val7 = i_val7 + -1;
  } while (i_val7 != -1);
  p_uint8 = (undefined4 *)((int)farmer + 0x10B0);
  i_val7 = 5;
  do {
    *p_uint8 = 0;
    p_uint8 = p_uint8 + 1;
    i_val7 = i_val7 + -1;
  } while (i_val7 != -1);
  *(undefined1 *)((int)farmer + 0x10C8) = 0;
  u_val5 = farmer[1];
  p_int10 = (int *)((int)farmer + 0x1038);
  Farmer_GetLocation(temp_buf_48,*p_int10 + 0x1BD8);
  NPC_Routine_080A56DC(u_val5,temp_buf_48,*(undefined4 *)((int)farmer + 0x1048),
                (uint)*(byte *)((int)farmer + 0x104C),
                0x1e - (uint)*(byte *)((int)farmer + 0x104C));
  if (*(int *)farmer[1] != 2) {
    u_val5 = *(undefined4 *)((int)farmer + 0x1050);
    i_val7 = *p_int10;
    i_val6 = Farmer_Routine_0800E324(i_val7 + 0x10);
    Farmer_Routine_080171F8(u_val5,i_val7 + 0x14,i_val6 == 3);
  }
  if ((stack_val_30 != 0) &&
     ((c_char3 = NPC_Routine_0809C5F4(*(int *)((int)farmer + 0x1038) + 0x214C),
      c_char3 == '\0' ||
      (c_char3 = Farmer_Routine_080167CC(*(undefined4 *)((int)farmer + 0x1054)), c_char3 == '\0')))) {
    Farmer_Routine_0801DB58(farmer);
  }
  u_val5 = Dispatcher_Routine_080005D4(0xa0);
  i_val7 = ScriptEngine_Construct(u_val5,farmer);
  p_int10 = (int *)((int)farmer + 0x1024);
  i_val6 = *p_int10;
  if ((i_val7 != i_val6) && (i_val6 != 0)) {
    ScriptEngine_Destruct(i_val6,3);
  }
  *p_int10 = i_val7;
  p_int10 = (int *)((int)farmer + 0x1028);
  i_val7 = *p_int10;
  if ((i_val7 != 0) && (i_val7 != 0)) {
    NPC_Routine_080AB2E4(i_val7,3);
  }
  *p_int10 = 0;
  u_val5 = Dispatcher_Routine_080005D4(4);
  i_val7 = NPC_Routine_080AAFC8(u_val5,farmer,*(undefined4 *)(farmer[1] + 4));
  p_int10 = (int *)((int)farmer + 0x1028);
  i_val6 = *p_int10;
  if ((i_val7 != i_val6) && (i_val6 != 0)) {
    NPC_Routine_080AB2E4(i_val6,3);
  }
  *p_int10 = i_val7;
  loop_i = 0;
  do {
    Farmer_Routine_0801A8E0(farmer,loop_i);
    loop_i = loop_i + 1;
  } while (loop_i < 100);
  i_val7 = *p_int4;
  if ((i_val7 != 0) && (i_val7 != 0)) {
    ScriptEngine_Routine_0803B0A8(i_val7,3);
  }
  *p_int4 = 0;
  i_val7 = Map_GetMapData(*(undefined4 *)(farmer[1] + 4));
  if (*(char *)(i_val7 + 0x24) != '\0') goto LAB_080178ae;
  i_val7 = *(int *)farmer[1];
  if (i_val7 == 0x2e) {
    i_val7 = 1;
  }
  else if (i_val7 < 0x2f) {
    if (i_val7 < 0x2c) goto LAB_08017890;
    i_val7 = 0;
  }
  else if (i_val7 == 0x2f) {
    i_val7 = 2;
  }
  else {
LAB_08017890:
    i_val7 = *(int *)(*(int *)((int)farmer + 0x1038) + 8);
  }
  if (i_val7 == 1) {
    Farmer_Routine_0801FAC8(farmer,1);
  }
  else if (i_val7 == 2) {
    Farmer_Routine_0801FAC8(farmer,0);
  }
LAB_080178ae:
  Farmer_Routine_0801F14C(farmer);
  Farmer_Routine_0801F3E4(farmer);
  Farmer_Routine_0801F2DC(farmer);
  Farmer_Routine_0801F614(farmer);
  Farmer_Routine_0801F77C(farmer);
  stack_val_2c = 0;
  piStack_28 = (int *)((int)farmer + 0xDE4);
  pbVar11 = (byte *)(*gIWRAM_PedometerStepCount + 0x4DC);
  do {
    if (((*pbVar11 & 3) == 1) && ((*(ushort *)(pbVar11 + 2) & 0x3ff) == *(uint *)farmer[1])) {
      p_int4 = (int *)((int)farmer + stack_val_2c * 4 + 0x10B0);
      i_val7 = Dispatcher_Routine_080005D4(0x4c);
      u_val1 = *(undefined2 *)(pbVar11 + 8);
      NPC_Routine_080A4740(i_val7,farmer,2,0x1b);
      *(undefined4 *)(i_val7 + 0x24) = gRomData_080E602C;
      stack_val_24 = i_val7 + 0x28;
      i_val6 = *piStack_28;
      _call_via_r3(apuStack_40,piStack_28,u_val1,*(undefined4 *)(i_val6 + 0xc));
      _call_via_r3(stack_val_24,piStack_28,*apuStack_40[0],*(undefined4 *)(i_val6 + 0x10));
      *(undefined1 *)(i_val7 + 0x48) = 1;
      i_val6 = *p_int4;
      if ((i_val7 != i_val6) && (i_val6 != 0)) {
        _call_via_r2(i_val6,3,*(undefined4 *)(*(int *)(i_val6 + 0x24) + 8));
      }
      *p_int4 = i_val7;
    }
    pbVar11 = pbVar11 + 0xc;
    stack_val_2c = stack_val_2c + 1;
  } while (stack_val_2c < 6);
  if (*(char *)(stack_val_38 + 0x34C4) != '\0') {
    Farmer_Routine_0801D8CC(farmer);
    Farmer_Routine_0801D948(farmer);
  }
  i_val7 = *piStack_34;
  if (i_val7 != 0) {
    _call_via_r2(i_val7,3,*(undefined4 *)(*(int *)(i_val7 + 0x90) + 8));
  }
  return farmer;
}

// =============================================================================
// Function: Farmer_Routine_080179CC @ 0x080179CC
// =============================================================================
void Farmer_Routine_080179CC(undefined4 *farmer,uint amount)

{
  char c_char1;
  undefined4 u_val2;
  int i_val3;
  int *p_int4;
  undefined4 *curr_ptr;
  int *p_int6;
  undefined4 *end_ptr;
  int i_val8;
  undefined4 stack_val_20;
  undefined4 stack_val_1c;
  
  *farmer = gRomData_080E5EC4;
  if (*(char *)((int)farmer + 0x10C8) != '\0') {
    p_int4 = (int *)((int)farmer + 0x1038);
    Farmer_Routine_0800ED2C(*p_int4 + 0x1BD8);
    i_val8 = *p_int4 + 0x1CCC;
    if (*(char *)((int)farmer + 0x10C9) == '\0') {
      p_int4 = (int *)Farmer_Routine_0801DB44(farmer);
      end_ptr = (undefined4 *)p_int4[1];
      for (curr_ptr = (undefined4 *)*p_int4; curr_ptr != end_ptr; curr_ptr = curr_ptr + 1) {
        c_char1 = HW_Routine_08008CD0(*curr_ptr);
        if (c_char1 == '\0') {
          u_val2 = *curr_ptr;
          goto LAB_08017a28;
        }
      }
      u_val2 = end_ptr[-1];
LAB_08017a28:
      HW_Routine_08008B6C(u_val2,0x6d);
      i_val3 = NPC_Routine_080A45A8(i_val8);
      if (i_val3 == 2) {
        stack_val_20 = 0x23B;
        stack_val_1c = 0;
        Farmer_Routine_0801D9A8(farmer,&stack_val_20,0);
      }
      else {
        NPC_Routine_080A1484(*(int *)((int)farmer + 0x1038) + 0x1CD4,i_val8,
                        *(int *)((int)farmer + 0x1038) + 0x214C);
      }
    }
  }
  if (*(int *)((int)farmer + 0x1050) != 0) {
    Dispatcher_Routine_08000614();
  }
  p_int4 = (int *)((int)farmer + 0x10B0);
  if (p_int4 != (int *)0x0) {
    p_int6 = (int *)((int)farmer + 0x10C8);
    while (p_int4 != p_int6) {
      p_int6 = p_int6 + -1;
      i_val8 = *p_int6;
      if (i_val8 != 0) {
        _call_via_r2(i_val8,3,*(undefined4 *)(*(int *)(i_val8 + 0x24) + 8));
      }
    }
  }
  if ((farmer != (undefined4 *)0xffffef80) && (farmer + 0x420 != farmer + 0x42c)) {
    curr_ptr = farmer + 0x42c;
    do {
      end_ptr = curr_ptr + -3;
      i_val8 = curr_ptr[-1];
      if (i_val8 != 0) {
        _call_via_r2(i_val8,3,*(undefined4 *)(*(int *)(i_val8 + 0x24) + 8));
      }
      curr_ptr = end_ptr;
    } while (farmer + 0x420 != end_ptr);
  }
  p_int4 = (int *)((int)farmer + 0x107C);
  if (*p_int4 != 0) {
    ScriptEngine_Routine_0803B0A8(*p_int4,3);
  }
  p_int6 = (int *)((int)farmer + 0x1074);
  if (p_int6 != (int *)0x0) {
    while (p_int6 != p_int4) {
      p_int4 = p_int4 + -1;
      i_val8 = *p_int4;
      if (i_val8 != 0) {
        _call_via_r2(i_val8,3,*(undefined4 *)(*(int *)(i_val8 + 0x24) + 8));
      }
    }
  }
  if (((int *)((int)farmer + 0x106C) != (int *)0x0) &&
     (p_int4 = (int *)((int)farmer + 0x106C + 8),
     (int *)((int)farmer + 0x106C) != p_int4)) {
    p_int6 = (int *)((int)farmer + 0x106C);
    do {
      p_int4 = p_int4 + -1;
      i_val8 = *p_int4;
      if (i_val8 != 0) {
        _call_via_r2(i_val8,3,*(undefined4 *)(*(int *)(i_val8 + 0x24) + 8));
      }
    } while (p_int6 != p_int4);
  }
  i_val8 = *(int *)((int)farmer + 0x1068);
  if (i_val8 != 0) {
    _call_via_r2(i_val8,3,*(undefined4 *)(*(int *)(i_val8 + 0x24) + 8));
  }
  i_val8 = *(int *)((int)farmer + 0x1064);
  if (i_val8 != 0) {
    _call_via_r2(i_val8,3,*(undefined4 *)(*(int *)(i_val8 + 0x24) + 8));
  }
  i_val8 = *(int *)((int)farmer + 0x105C);
  if (i_val8 != 0) {
    _call_via_r2(i_val8,3,*(undefined4 *)(*(int *)(i_val8 + 0x24) + 8));
  }
  i_val8 = *(int *)((int)farmer + 0x1058);
  if (i_val8 != 0) {
    _call_via_r2(i_val8,3,*(undefined4 *)(*(int *)(i_val8 + 0x24) + 8));
  }
  NPC_Routine_080AC85C(farmer + 1,2);
  *farmer = gRomData_080E61A0;
  if ((amount & 1) != 0) {
    Dispatcher_Routine_08000608(farmer);
  }
  return;
}

// =============================================================================
// Function: Farmer_Routine_08017C00 @ 0x08017C00
// =============================================================================
u32 Farmer_Routine_08017C00(int farmer)

{
  int i_val1;
  undefined4 u_val2;
  
  if ((*(char *)(farmer + 0x103C) == '\0') &&
     (i_val1 = Map_GetMapData(*(undefined4 *)(*(int *)(farmer + 4) + 4)),
     *(char *)(i_val1 + 0x24) == '\0')) {
    u_val2 = 0;
  }
  else {
    u_val2 = 1;
  }
  return u_val2;
}

// =============================================================================
// Function: Farmer_Routine_08017C30 @ 0x08017C30
// =============================================================================
void Farmer_Routine_08017C30(int *farmer,undefined4 *amount)

{
  byte b_flag1;
  ushort u_val2;
  bool b_flag3;
  char c_char4;
  char c_char5;
  undefined4 u_val6;
  undefined4 u_val7;
  int i_val8;
  int i_val9;
  undefined4 *curr_ptr;
  char *p_char11;
  byte *pbVar12;
  byte b_flag13;
  int *p_int14;
  uint *p_uint15;
  undefined4 *end_ptr;
  uint u_val17;
  uint loop_i;
  undefined4 stack_val_50;
  undefined4 stack_val_4c;
  undefined4 stack_val_48;
  undefined4 stack_val_44;
  uint stack_val_40;
  undefined4 stack_val_3c;
  undefined1 stack_val_38;
  undefined4 *puStack_34;
  int stack_val_30;
  uint stack_val_2c;
  undefined4 stack_val_28;
  
  p_int14 = (int *)(0x1038 + (int)farmer);
  puStack_34 = amount;
  stack_val_30 = Farmer_GetFatigue(*p_int14 + 0x1BD8);
  if (*(char *)(0x10C8 + (int)farmer) != '\0') {
    *(char *)(0x10C8 + (int)farmer) = '\0';
    _call_via_r2(farmer,0x4b,*(undefined4 *)(*farmer + 0x3c));
    Farmer_Routine_0800ED2C(*p_int14 + 0x1BD8);
    i_val8 = *p_int14 + 0x1CCC;
    if (*(char *)(0x10C9 + (int)farmer) == '\0') {
      p_int14 = (int *)_call_via_r1(farmer,*(undefined4 *)(*farmer + 0x14c));
      end_ptr = (undefined4 *)p_int14[1];
      for (curr_ptr = (undefined4 *)*p_int14; curr_ptr != end_ptr; curr_ptr = curr_ptr + 1) {
        c_char5 = HW_Routine_08008CD0(*curr_ptr);
        if (c_char5 == '\0') {
          u_val6 = *curr_ptr;
          goto LAB_08017cbe;
        }
      }
      u_val6 = end_ptr[-1];
LAB_08017cbe:
      HW_Routine_08008B6C(u_val6,0x6d);
      i_val9 = NPC_Routine_080A45A8(i_val8);
      if (i_val9 == 2) {
        stack_val_4c = 0x23B;
        stack_val_48 = 0;
        _call_via_r3(farmer,&stack_val_4c,0,*(undefined4 *)(*farmer + 0x140));
      }
      else {
        NPC_Routine_080A1484(*(int *)(0x1038 + (int)farmer) + 0x1CD4,i_val8,
                        *(int *)(0x1038 + (int)farmer) + 0x214C);
        stack_val_50 = CONCAT22((ushort)((*(ushort *)(i_val8 + 4) & 0x3FF) << 6) |
                             (ushort)(*(byte *)(i_val8 + 3) >> 2),
                             (ushort)((*(ushort *)(i_val8 + 2) & 0x3FF) << 6) |
                             (ushort)(*(byte *)(i_val8 + 1) >> 2));
        u_val6 = _call_via_r1(farmer,*(undefined4 *)(*farmer + 100));
        p_int14 = (int *)(0x102C + (int)farmer);
        p_int14[1] = stack_val_50;
        i_val8 = *p_int14;
        if ((i_val8 != 0) && (i_val8 != 0)) {
          _call_via_r2(i_val8,3,*(undefined4 *)(*(int *)(i_val8 + 0x24) + 8));
        }
        *p_int14 = 0;
        *(undefined1 *)(p_int14 + 2) = 0;
        u_val7 = Dispatcher_Routine_080005D4(0x40);
        i_val8 = NPC_Routine_080A4A00(u_val7,u_val6,0x1A9,farmer,2,3,0);
        i_val9 = *p_int14;
        if ((i_val8 != i_val9) && (i_val9 != 0)) {
          _call_via_r2(i_val9,3,*(undefined4 *)(*(int *)(i_val9 + 0x24) + 8));
        }
        *p_int14 = i_val8;
      }
    }
  }
  i_val8 = _call_via_r2(farmer,0,*(undefined4 *)(*farmer + 0x40));
  _call_via_r1(farmer[1],*(undefined4 *)(*(int *)(farmer[1] + 0x90) + 0xc));
  i_val9 = Map_GetMapData(*(undefined4 *)(farmer[1] + 4));
  c_char5 = *(char *)(i_val9 + 0x24);
  stack_val_2c = *(uint *)farmer[1];
  stack_val_28 = 0;
  if ((((*(char *)(0x103C + (int)farmer) == '\0') &&
       (*(char *)(*(int *)(0x1038 + (int)farmer) + 0x34C4) == '\0')) &&
      (c_char5 == '\0')) &&
     (c_char4 = _call_via_r1(i_val8,*(undefined4 *)(*(int *)(i_val8 + 0x14) + 0x98)), c_char4 == '\0'))
  {
    p_int14 = farmer + 0x410;
    if (*(byte *)(farmer + 0x411) + 1 < 0x19) {
      *(char *)(farmer + 0x411) = (char)(*(byte *)(farmer + 0x411) + 1);
      b_flag3 = false;
    }
    else {
      *(undefined1 *)(farmer + 0x411) = 0;
      p_uint15 = (uint *)*p_int14;
      loop_i = ((*p_uint15 & 0x7ffffff) >> 0x15) + 1;
      u_val2 = (ushort)0xFFFFF81F;
      *(ushort *)((int)p_uint15 + 2) =
           u_val2 & *(ushort *)((int)p_uint15 + 2) | (ushort)((loop_i & 0x3f) << 5);
      if (0x3b < (loop_i & 0x3f)) {
        *(ushort *)(*p_int14 + 2) = u_val2 & *(ushort *)(*p_int14 + 2);
        p_uint15 = (uint *)*p_int14;
        loop_i = ((*p_uint15 & 0x1fffff) >> 0x10) + 1 & 0x1f;
        *(byte *)((int)p_uint15 + 2) = *(byte *)((int)p_uint15 + 2) & 0xe0 | (byte)loop_i;
        if (0x17 < loop_i) {
          *(byte *)(*p_int14 + 2) = *(byte *)(*p_int14 + 2) & 0xe0;
          i_val9 = *p_int14;
          b_flag1 = *(byte *)(i_val9 + 1);
          loop_i = ((b_flag1 & 0x7f) >> 2) + 1;
          if (loop_i == 0x1e) {
            *(byte *)(i_val9 + 1) = b_flag1 & 0xfc | (b_flag1 & 3) + 1 & 3;
            loop_i = 0;
          }
          *(byte *)(i_val9 + 1) = *(byte *)(i_val9 + 1) & 0x83 | (byte)((loop_i & 0x1f) << 2);
          pbVar12 = (byte *)*p_int14;
          if ((pbVar12[1] & 0x7f) == 0) {
            b_flag1 = *pbVar12;
            b_flag13 = (b_flag1 & 7) + 1;
            if (6 < b_flag13) {
              b_flag13 = 0;
              if (b_flag1 >> 3 < 0x1d) {
                *pbVar12 = b_flag1 & 7 | ((b_flag1 >> 3) + 1) * '\b';
              }
            }
            *pbVar12 = *pbVar12 & 0xf8 | b_flag13 & 7;
          }
        }
      }
      b_flag3 = true;
    }
    if (b_flag3) {
      u_val17 = (*(uint *)farmer[0x410] & 0x1fffff) >> 0x10;
      loop_i = (*(uint *)farmer[0x410] & 0x7ffffff) >> 0x15;
      if ((u_val17 == 6) && (loop_i == 0)) {
        c_char4 = _call_via_r3(i_val8,0,10,*(undefined4 *)(*(int *)(i_val8 + 0x14) + 100));
        if (c_char4 == '\0') {
          stack_val_44 = 0x3D5;
          stack_val_40 = loop_i;
          _call_via_r3(farmer,&stack_val_44,2,*(undefined4 *)(*farmer + 0x140));
        }
      }
      else {
        Farmer_Routine_0801A13C(farmer,u_val17,loop_i,0);
        if ((u_val17 == 0x14) && (loop_i == 0)) {
          Farmer_Routine_08012464(*(undefined4 *)(0x1054 + (int)farmer),0,0x9e);
          Farmer_Routine_0801DB58(farmer);
        }
        else if ((u_val17 == 0) && (loop_i == 0)) {
          _call_via_r3(i_val8,0,3,*(undefined4 *)(*(int *)(i_val8 + 0x14) + 100));
        }
        else if ((u_val17 == 2) && (loop_i == 0)) {
          _call_via_r3(i_val8,0,4,*(undefined4 *)(*(int *)(i_val8 + 0x14) + 100));
        }
        else if ((u_val17 == 4) && (loop_i == 0)) {
          _call_via_r3(i_val8,0,5,*(undefined4 *)(*(int *)(i_val8 + 0x14) + 100));
        }
      }
      stack_val_28 = 1;
    }
  }
  stack_val_3c = *puStack_34;
  stack_val_38 = (undefined1)stack_val_28;
  for (p_int14 = farmer + 2; p_int14 != farmer + 0x66; p_int14 = p_int14 + 1) {
    i_val8 = *p_int14;
    if (i_val8 != 0) {
      c_char4 = _call_via_r1(i_val8,*(undefined4 *)(*(int *)(i_val8 + 0x14) + 0x28));
      if (c_char4 == '\0') {
        if ((c_char5 == '\0') || (stack_val_2c == *(ushort *)(i_val8 + 4))) {
          _call_via_r2(i_val8,&stack_val_3c,*(undefined4 *)(*(int *)(i_val8 + 0x14) + 0x18));
        }
      }
      else {
        _call_via_r2(i_val8,&stack_val_3c,*(undefined4 *)(*(int *)(i_val8 + 0x14) + 0x2c));
      }
    }
  }
  if (*(int *)(0x107C + (int)farmer) != 0) {
    ScriptEngine_AllocateStack();
  }
  if (*(int *)(0x1028 + (int)farmer) != 0) {
    NPC_Routine_080AB380();
  }
  loop_i = 0;
  p_int14 = (int *)(0x106C + (int)farmer);
  do {
    i_val8 = *p_int14;
    if (i_val8 != 0) {
      p_char11 = (char *)(i_val8 + 0x3f);
      if (*p_char11 == '\0') {
        i_val9 = Animal_Routine_0805E8F0(i_val8 + 0x28);
        if (-1 < i_val9 * 0x40000000) goto LAB_080180bc;
        p_char11 = (char *)(i_val8 + 0x3c);
        c_char5 = '\x01';
      }
      else {
        c_char5 = '\0';
      }
      *p_char11 = c_char5;
    }
LAB_080180bc:
    p_int14 = p_int14 + 1;
    loop_i = loop_i + 1;
  } while (loop_i < 2);
  loop_i = 0;
  p_int14 = (int *)(0x1074 + (int)farmer);
  do {
    i_val8 = *p_int14;
    if (i_val8 != 0) {
      p_char11 = (char *)(i_val8 + 0x3f);
      if (*p_char11 == '\0') {
        i_val9 = Animal_Routine_0805E8F0(i_val8 + 0x28);
        if (-1 < i_val9 * 0x40000000) goto LAB_080180f8;
        p_char11 = (char *)(i_val8 + 0x3c);
        c_char5 = '\x01';
      }
      else {
        c_char5 = '\0';
      }
      *p_char11 = c_char5;
    }
LAB_080180f8:
    p_int14 = p_int14 + 1;
    loop_i = loop_i + 1;
    if (1 < loop_i) {
      loop_i = 0;
      curr_ptr = (undefined4 *)(0x1088 + (int)farmer);
      p_int14 = farmer + 0x420;
      do {
        b_flag1 = *(byte *)((int)p_int14 + 1);
        if ((b_flag1 & 3) == 1) {
          u_val17 = (b_flag1 & 0xf) >> 2;
          if (u_val17 == 1) {
            c_char5 = (char)*p_int14 + -1;
            *(char *)p_int14 = c_char5;
            if (c_char5 == '\0') {
              *(byte *)((int)p_int14 + 1) = b_flag1 & 0xf3 | 8;
              i_val8 = p_int14[2];
              Animal_Routine_0805E860(i_val8 + 0x28,0x873);
              *(undefined1 *)(i_val8 + 0x3c) = 1;
              *(undefined1 *)(i_val8 + 0x3e) = 0;
              *(undefined1 *)(i_val8 + 0x3f) = 1;
            }
          }
          else if (u_val17 < 2) {
            if (u_val17 == 0) {
              i_val8 = p_int14[2];
              if (*(char *)(i_val8 + 0x3f) == '\0') {
                i_val9 = Animal_Routine_0805E8F0(i_val8 + 0x28);
                if (i_val9 * 0x40000000 < 0) {
                  *(undefined1 *)(i_val8 + 0x3c) = 1;
                }
              }
              else {
                *(char *)(i_val8 + 0x3f) = '\0';
                i_val9 = 2;
              }
              if (i_val9 * 0x20000000 < 0) {
                *(byte *)((int)p_int14 + 1) = *(byte *)((int)p_int14 + 1) & 0xf3 | 4;
                i_val8 = p_int14[2];
                Animal_Routine_0805E860(i_val8 + 0x28,0x86B);
                *(undefined1 *)(i_val8 + 0x3c) = 1;
                *(undefined1 *)(i_val8 + 0x3e) = 0;
                *(undefined1 *)(i_val8 + 0x3f) = 1;
                *(char *)p_int14 = 'x';
              }
            }
          }
          else if (u_val17 == 2) {
            i_val8 = p_int14[2];
            if (*(char *)(i_val8 + 0x3f) == '\0') {
              i_val9 = Animal_Routine_0805E8F0(i_val8 + 0x28);
              if (i_val9 * 0x40000000 < 0) {
                *(undefined1 *)(i_val8 + 0x3c) = 1;
              }
            }
            else {
              *(char *)(i_val8 + 0x3f) = '\0';
              i_val9 = 2;
            }
            if (i_val9 * 0x20000000 < 0) {
              *(byte *)((int)p_int14 + 1) = *(byte *)((int)p_int14 + 1) & 0xfc;
              i_val8 = p_int14[2];
              if ((i_val8 != 0) && (i_val8 != 0)) {
                _call_via_r2(i_val8,3,*(undefined4 *)(*(int *)(i_val8 + 0x24) + 8));
              }
              *curr_ptr = 0;
            }
          }
        }
        curr_ptr = curr_ptr + 3;
        p_int14 = p_int14 + 3;
        loop_i = loop_i + 1;
      } while (loop_i < 4);
      if (*(char *)(0x103C + (int)farmer) == '\0') {
        NPC_Routine_080A5960(farmer[1],(int)*(short *)(farmer[2] + 10),(int)*(short *)(farmer[2] + 0xe))
        ;
      }
      p_int14 = (int *)(0x1038 + (int)farmer);
      i_val8 = Farmer_GetFatigue(*p_int14 + 0x1BD8);
      if (((i_val8 != stack_val_30) &&
          (c_char5 = Farmer_Routine_080167CC(*(undefined4 *)(0x1054 + (int)farmer)), c_char5 != '\0')) &&
         (c_char5 = NPC_Routine_0809C5F4(*p_int14 + 0x214C), c_char5 == '\0')) {
        Farmer_Routine_0801DB58(farmer);
      }
      return;
    }
  } while( true );
}

// =============================================================================
// Function: Farmer_Routine_080182C8 @ 0x080182C8
// =============================================================================
void Farmer_Routine_080182C8(int *farmer,undefined4 amount)

{
  byte b_flag1;
  byte b_flag2;
  ushort u_val3;
  short s_val4;
  short s_val5;
  bool b_flag6;
  int i_val7;
  char c_char8;
  undefined2 u_val9;
  undefined2 u_val10;
  undefined4 u_val11;
  undefined4 *p_uint12;
  undefined1 *p_uint13;
  int *p_int14;
  uint *p_uint15;
  int i_val16;
  uint *p_uint17;
  uint loop_i;
  undefined4 u_val19;
  char *p_char20;
  int i_val21;
  char *p_char22;
  undefined4 *p_uint23;
  int i_val24;
  uint u_val25;
  undefined4 *p_uint26;
  undefined4 *p_uint27;
  int *p_int28;
  int i_val29;
  ushort *p_uint30;
  byte *pbVar31;
  int *p_int32;
  undefined4 *p_uint33;
  undefined4 stack_val_4;
  undefined4 *p_uint34;
  undefined4 *p_uint35;
  undefined4 *p_uint36;
  undefined4 *p_uint37;
  undefined4 *p_uint38;
  undefined4 *p_uint39;
  undefined4 *p_uint40;
  undefined4 *p_uint41;
  undefined4 *p_uint42;
  int *p_int43;
  int *p_int44;
  int *p_int45;
  int *p_int46;
  
  i_val7 = 0xFFFFF320;
  p_uint33 = (undefined4 *)(&stack0xffffffe0 + 0xFFFFF320);
  p_uint34 = (undefined4 *)(&stack0xffffffe0 + 0xFFFFF320);
  p_uint35 = (undefined4 *)(&stack0xffffffe0 + 0xFFFFF320);
  p_uint36 = (undefined4 *)(&stack0xffffffe0 + 0xFFFFF320);
  p_uint37 = (undefined4 *)(&stack0xffffffe0 + 0xFFFFF320);
  p_uint38 = (undefined4 *)(&stack0xffffffe0 + 0xFFFFF320);
  p_uint39 = (undefined4 *)(&stack0xffffffe0 + 0xFFFFF320);
  p_uint40 = (undefined4 *)(&stack0xffffffe0 + 0xFFFFF320);
  p_uint41 = (undefined4 *)(&stack0xffffffe0 + 0xFFFFF320);
  p_uint42 = (undefined4 *)(&stack0xffffffe0 + 0xFFFFF320);
  p_int43 = (int *)(&stack0xffffffe0 + 0xFFFFF320);
  p_int44 = (int *)(&stack0xffffffe0 + 0xFFFFF320);
  p_int45 = (int *)(&stack0xffffffe0 + 0xFFFFF320);
  p_int46 = (int *)(&stack0xffffffe0 + 0xFFFFF320);
  *(undefined4 *)(&stack0xffffffe0 + 0xC6C + 0xFFFFF320) = amount;
  *(undefined4 *)(&stack0xffffffe0 + 0xC58 + 0xFFFFF320) = 0;
  p_int14 = farmer + 0x67;
  i_val16 = 0x20;
  u_val11 = *(undefined4 *)(&stack0xffffffe0 + 0xC58 + 0xFFFFF320);
  do {
    *(char *)p_int14 = (char)u_val11;
    i_val16 = i_val16 + -1;
    p_int14 = (int *)((int)p_int14 + 1);
  } while (0 < i_val16);
  p_char20 = (char *)(*(int *)(0x1024 + (int)farmer) + 0x9c);
  if (*p_char20 != '\0') {
    ScriptEngine_ClearVM(*(int *)(0x1024 + (int)farmer),
                  **(undefined4 **)(&stack0xffffffe0 + 0xC6C + i_val7));
    *p_char20 = '\0';
  }
  i_val16 = *(int *)(0x107C + (int)farmer);
  if (i_val16 != 0) {
    if (*(char *)(i_val16 + 0xe5) != '\0') {
      ScriptEngine_ParseHeaderChunks(i_val16,**(undefined4 **)(&stack0xffffffe0 + 0xC6C + i_val7));
      *(char *)(i_val16 + 0xe5) = '\0';
    }
  }
  p_uint26 = *(undefined4 **)(&stack0xffffffe0 + 0xC6C + i_val7);
  _call_via_r4(farmer[1],*p_uint26,p_uint26[1],p_uint26[3]);
  p_char20 = (char *)(0xDB1 + (int)farmer);
  *p_char20 = (char)farmer[0x36c];
  loop_i = 0;
  *(int **)(&stack0xffffffe0 + 0xCBC + i_val7) = farmer + 0x36c;
  *(char **)(&stack0x00000ca0 + i_val7) = p_char20;
  if (*p_char20 != '\0') {
    p_char20 = (char *)(0xD1D + (int)farmer);
    do {
      if (-1 < *p_char20) {
        *(undefined1 *)(farmer + *p_char20 * 0x21 + 0x8f) = 0xff;
      }
      p_char20 = p_char20 + 0xc;
      loop_i = loop_i + 1;
    } while (loop_i < *(byte *)((int)farmer + 0xC15 + 0x19c));
  }
  *(undefined1 *)((int)farmer + 0xC14 + 0x19c) = 0;
  loop_i = 0x7c - **(byte **)(*(int *)(&stack0xffffffe0 + 0xC6C + i_val7) + 8);
  *(uint *)(&stack0x00000c50 + i_val7) = loop_i;
  if (0x80 < loop_i) goto Farmer_Routine_08019870;
  (&stack0xfffffff4)[i_val7] = 0;
  p_uint26 = (undefined4 *)(&stack0xfffffff8 + i_val7);
  i_val16 = 3;
  i_val21 = *farmer;
  *(undefined1 **)(&stack0x00000c90 + i_val7) = &stack0xffffffe0 + 0xC5C + i_val7;
  *(int **)(&stack0xffffffe0 + 0xCC4 + i_val7) = farmer + 0x66;
  *(undefined1 **)(&stack0xffffffe0 + 0xCC8 + i_val7) =
       &stack0xffffffe0 + 0x828 + i_val7;
  do {
    *p_uint26 = 0;
    p_uint26 = p_uint26 + 0x81;
    i_val16 = i_val16 + -1;
  } while (i_val16 != -1);
  u_val9 = _call_via_r1(farmer,*(undefined4 *)(i_val21 + 0x18));
  u_val10 = _call_via_r1(farmer,*(undefined4 *)(*farmer + 0x1c));
  p_uint26 = (undefined4 *)(&stack0xffffffe0 + 0xC28 + i_val7);
  u_val11 = (*(undefined4 **)(&stack0xffffffe0 + 0xC6C + i_val7))[1];
  *p_uint26 = **(undefined4 **)(&stack0xffffffe0 + 0xC6C + i_val7);
  p_uint26[1] = u_val11;
  p_uint26[2] = &stack0xfffffff4 + i_val7;
  *(undefined2 *)(p_uint26 + 3) = u_val9;
  *(undefined2 *)((int)p_uint26 + 0xe) = u_val10;
  *(int **)(&stack0xffffffe0 + 0xC98 + i_val7) = farmer + 2;
  *(int **)(&stack0xffffffe0 + 0xC74 + i_val7) = farmer + 2;
  i_val16 = **(int **)(&stack0xffffffe0 + 0xC98 + i_val7);
  if (i_val16 != 0) {
    _call_via_r2(i_val16,p_uint26,*(undefined4 *)(*(int *)(i_val16 + 0x14) + 0x1c));
  }
  if (*(int *)(0x107C + (int)farmer) != 0) {
    ScriptEngine_FreeStack(*(int *)(0x107C + (int)farmer),&stack0xfffffff4 + i_val7);
  }
  if (*(int *)(0x1028 + (int)farmer) != 0) {
    NPC_Routine_080AB410(*(int *)(0x1028 + (int)farmer),&stack0xfffffff4 + i_val7,*p_uint26);
  }
  u_val11 = p_uint26[2];
  *(undefined4 *)(&stack0xffffffe0 + 0xC5C + i_val7) = *p_uint26;
  *(undefined4 *)(*(int *)(&stack0x00000c90 + i_val7) + 4) = u_val11;
  i_val16 = *(int *)(0x105C + (int)farmer);
  if (i_val16 != 0) {
    b_flag6 = false;
    if (*(char *)(i_val16 + 0x3f) == '\0') {
      i_val21 = Animal_Routine_0805E8F0(i_val16 + 0x28);
      if (i_val21 * 0x40000000 < 0) {
        *(undefined1 *)(i_val16 + 0x3c) = 1;
      }
    }
    else {
      *(char *)(i_val16 + 0x3f) = '\0';
      i_val21 = 2;
    }
    if ((i_val21 * 0x20000000 < 0) && ((char)farmer[0x418] != '\0')) {
      b_flag6 = true;
    }
    if (b_flag6) {
      *(undefined1 *)(farmer + 0x418) = 0;
      i_val16 = *(int *)(0x105C + (int)farmer);
      Animal_Routine_0805E860(i_val16 + 0x28,1);
      *(undefined1 *)(i_val16 + 0x3c) = 1;
      *(undefined1 *)(i_val16 + 0x3e) = 0;
      *(undefined1 *)(i_val16 + 0x3f) = 1;
    }
    i_val16 = _call_via_r1(farmer,*(undefined4 *)(*farmer + 0x14));
    if (0x1d < i_val16 - 10U) goto case_0801887E;
    switch(*(uint *)((i_val16 - 10U) * 4 + gInlineTable_080185A0) & 0xfffffffe) {
    case 0x8018618:
      p_uint26 = *(undefined4 **)(0x105C + (int)farmer);
      i_val16 = _call_via_r1(farmer,*(undefined4 *)(*farmer + 0x18));
      i_val16 = 0x30 - i_val16;
      i_val21 = _call_via_r1(farmer,*(undefined4 *)(*farmer + 0x1c));
      p_uint12 = *(undefined4 **)(&stack0x00000c90 + i_val7);
      p_uint13 = &stack0xffffffe0 + 0xC38 + i_val7;
      _call_via_r3(p_uint13,(int *)p_uint26[10],
                      *(undefined2 *)(p_uint26[0xb] + (uint)*(ushort *)(p_uint26 + 0xd) * 4),
                      *(undefined4 *)(*(int *)p_uint26[10] + 0x10));
      u_val19 = *(undefined4 *)(*(int *)(&stack0x00000c90 + i_val7) + 4);
      u_val11 = *p_uint26;
      if (-1 < (int)(-p_uint26[2] | p_uint26[2])) goto LAB_080186b0;
      goto LAB_0801867c;
    case 0x80186e2:
      p_uint26 = *(undefined4 **)(0x105C + (int)farmer);
      i_val21 = _call_via_r1(farmer,*(undefined4 *)(*farmer + 0x18));
      i_val16 = 0x68;
      break;
    case 0x8018754:
      p_uint26 = *(undefined4 **)(0x105C + (int)farmer);
      i_val21 = _call_via_r1(farmer,*(undefined4 *)(*farmer + 0x18));
      i_val16 = 0x18;
      break;
    case 0x8018770:
      p_uint26 = *(undefined4 **)(0x105C + (int)farmer);
      i_val21 = _call_via_r1(farmer,*(undefined4 *)(*farmer + 0x18));
      i_val16 = 0x38;
      break;
    case 0x801878c:
      p_uint26 = *(undefined4 **)(0x105C + (int)farmer);
      i_val16 = _call_via_r1(farmer,*(undefined4 *)(*farmer + 0x18));
      i_val21 = _call_via_r1(farmer,*(undefined4 *)(*farmer + 0x1c));
      p_uint12 = *(undefined4 **)(&stack0x00000c90 + i_val7);
      p_uint13 = &stack0xffffffe0 + 0xC38 + i_val7;
      _call_via_r3(p_uint13,(int *)p_uint26[10],
                      *(undefined2 *)(p_uint26[0xb] + (uint)*(ushort *)(p_uint26 + 0xd) * 4),
                      *(undefined4 *)(*(int *)p_uint26[10] + 0x10));
      u_val19 = *(undefined4 *)(*(int *)(&stack0x00000c90 + i_val7) + 4);
      u_val11 = *p_uint26;
      if ((int)(-p_uint26[2] | p_uint26[2]) < 0) {
        u_val3 = *(ushort *)(p_uint26 + 3);
        *p_uint34 = 0x01FFFFFF;
        *(undefined1 **)(&stack0xffffffe4 + i_val7) = p_uint13;
        *(undefined4 *)(&stack0xffffffe8 + i_val7) = u_val11;
        *(uint *)(&stack0xffffffec + i_val7) = (uint)u_val3;
        *(undefined4 **)(&stack0xfffffff0 + i_val7) = p_uint26 + 4;
        i_val16 = _call_via_r4(u_val19,0x68 - i_val16,0x30 - i_val21,0xff);
      }
      else {
        i_val16 = 0;
      }
      if ((i_val16 == 0) || (p_char20 = (char *)(p_uint26 + 0xf), *p_char20 == '\0'))
      goto case_0801887E;
      NPC_Routine_080A480C(p_uint26,*p_uint12,p_uint13 + 8);
      c_char8 = *(char *)((int)p_uint26 + 0x3d);
      goto joined_r0x08018850;
    case 0x801887e:
      goto case_0801887E;
    }
    i_val16 = i_val16 - i_val21;
    i_val21 = _call_via_r1(farmer,*(undefined4 *)(*farmer + 0x1c));
    p_uint12 = *(undefined4 **)(&stack0x00000c90 + i_val7);
    p_uint13 = &stack0xffffffe0 + 0xC38 + i_val7;
    _call_via_r3(p_uint13,(int *)p_uint26[10],
                    *(undefined2 *)(p_uint26[0xb] + (uint)*(ushort *)(p_uint26 + 0xd) * 4),
                    *(undefined4 *)(*(int *)p_uint26[10] + 0x10));
    u_val19 = *(undefined4 *)(*(int *)(&stack0x00000c90 + i_val7) + 4);
    u_val11 = *p_uint26;
    if ((int)(-p_uint26[2] | p_uint26[2]) < 0) {
LAB_0801867c:
      u_val3 = *(ushort *)(p_uint26 + 3);
      *p_uint33 = 0x01FFFFFF;
      *(undefined1 **)(&stack0xffffffe4 + i_val7) = p_uint13;
      *(undefined4 *)(&stack0xffffffe8 + i_val7) = u_val11;
      *(uint *)(&stack0xffffffec + i_val7) = (uint)u_val3;
      *(undefined4 **)(&stack0xfffffff0 + i_val7) = p_uint26 + 4;
      i_val16 = _call_via_r4(u_val19,i_val16,0x30 - i_val21,0xff);
    }
    else {
LAB_080186b0:
      i_val16 = 0;
    }
    if ((i_val16 != 0) && (p_char20 = (char *)(p_uint26 + 0xf), *p_char20 != '\0')) {
      NPC_Routine_080A480C(p_uint26,*p_uint12,p_uint13 + 8);
      c_char8 = *(char *)((int)p_uint26 + 0x3d);
joined_r0x08018850:
      if (c_char8 == '\0') {
        if (*(char *)((int)p_uint26 + 0x3e) == '\0') {
          NPC_Routine_080A4944(p_uint26,p_uint13 + 0x10,1);
          *(char *)((int)p_uint26 + 0x3e) = '\x01';
        }
      }
      else {
        NPC_Routine_080A4944(p_uint26,p_uint13 + 0x10,1);
      }
      *p_char20 = '\0';
    }
  }
case_0801887E:
  i_val16 = *(int *)(0x1064 + (int)farmer);
  if (i_val16 != 0) {
    p_char20 = (char *)(i_val16 + 0x3f);
    if (*p_char20 == '\0') {
      i_val21 = Animal_Routine_0805E8F0(i_val16 + 0x28);
      if (i_val21 * 0x40000000 < 0) {
        p_char20 = (char *)(i_val16 + 0x3c);
        c_char8 = '\x01';
        goto LAB_080188b2;
      }
    }
    else {
      c_char8 = '\0';
LAB_080188b2:
      *p_char20 = c_char8;
    }
    p_uint26 = *(undefined4 **)(0x1064 + (int)farmer);
    i_val16 = _call_via_r1(farmer,*(undefined4 *)(*farmer + 0x18));
    i_val21 = _call_via_r1(farmer,*(undefined4 *)(*farmer + 0x1c));
    p_uint12 = *(undefined4 **)(&stack0x00000c90 + i_val7);
    p_uint13 = &stack0xffffffe0 + 0xC38 + i_val7;
    _call_via_r3(p_uint13,(int *)p_uint26[10],
                    *(undefined2 *)(p_uint26[0xb] + (uint)*(ushort *)(p_uint26 + 0xd) * 4),
                    *(undefined4 *)(*(int *)p_uint26[10] + 0x10));
    u_val19 = *(undefined4 *)(*(int *)(&stack0x00000c90 + i_val7) + 4);
    u_val11 = *p_uint26;
    if ((int)(-p_uint26[2] | p_uint26[2]) < 0) {
      u_val3 = *(ushort *)(p_uint26 + 3);
      *p_uint35 = 0x01FFFFFF;
      *(undefined1 **)(&stack0xffffffe4 + i_val7) = p_uint13;
      *(undefined4 *)(&stack0xffffffe8 + i_val7) = u_val11;
      *(uint *)(&stack0xffffffec + i_val7) = (uint)u_val3;
      *(undefined4 **)(&stack0xfffffff0 + i_val7) = p_uint26 + 4;
      i_val16 = _call_via_r4(u_val19,0x58 - i_val16,0x10 - i_val21,0xaa);
    }
    else {
      i_val16 = 0;
    }
    if ((i_val16 != 0) && (*(char *)(p_uint26 + 0xf) != '\0')) {
      NPC_Routine_080A480C(p_uint26,*p_uint12,p_uint13 + 8);
      if (*(char *)((int)p_uint26 + 0x3d) == '\0') {
        if (*(char *)((int)p_uint26 + 0x3e) == '\0') {
          NPC_Routine_080A4944(p_uint26,p_uint13 + 0x10,1);
          *(char *)((int)p_uint26 + 0x3e) = '\x01';
        }
      }
      else {
        NPC_Routine_080A4944(p_uint26,p_uint13 + 0x10,1);
      }
      *(char *)(p_uint26 + 0xf) = '\0';
    }
  }
  *(undefined4 *)(&stack0xffffffe0 + 0xC78 + i_val7) = 0;
  *(undefined4 *)(&stack0x00000cb0 + i_val7) = 0x378;
  *(int *)(&stack0xffffffe0 + 0xCD4 + i_val7) = 0x106C + (int)farmer;
  do {
    p_uint26 = (undefined4 *)**(undefined4 **)(&stack0xffffffe0 + 0xCD4 + i_val7);
    if (p_uint26 != (undefined4 *)0x0) {
      i_val16 = _call_via_r1(farmer,*(undefined4 *)(*farmer + 0x18));
      i_val24 = *(int *)(&stack0x00000cb0 + i_val7);
      i_val21 = _call_via_r1(farmer,*(undefined4 *)(*farmer + 0x1c));
      p_uint12 = *(undefined4 **)(&stack0x00000c90 + i_val7);
      p_uint13 = &stack0xffffffe0 + 0xC38 + i_val7;
      _call_via_r3(p_uint13,(int *)p_uint26[10],
                      *(undefined2 *)(p_uint26[0xb] + (uint)*(ushort *)(p_uint26 + 0xd) * 4),
                      *(undefined4 *)(*(int *)p_uint26[10] + 0x10));
      u_val19 = *(undefined4 *)(*(int *)(&stack0x00000c90 + i_val7) + 4);
      u_val11 = *p_uint26;
      if ((int)(-p_uint26[2] | p_uint26[2]) < 0) {
        u_val3 = *(ushort *)(p_uint26 + 3);
        *p_uint36 = 0x01FFFFFF;
        *(undefined1 **)(&stack0xffffffe4 + i_val7) = p_uint13;
        *(undefined4 *)(&stack0xffffffe8 + i_val7) = u_val11;
        *(uint *)(&stack0xffffffec + i_val7) = (uint)u_val3;
        *(undefined4 **)(&stack0xfffffff0 + i_val7) = p_uint26 + 4;
        i_val16 = _call_via_r4(u_val19,i_val24 - i_val16,0x1e0 - i_val21,0x55);
      }
      else {
        i_val16 = 0;
      }
      if ((i_val16 != 0) && (*(char *)(p_uint26 + 0xf) != '\0')) {
        NPC_Routine_080A480C(p_uint26,*p_uint12,p_uint13 + 8);
        if (*(char *)((int)p_uint26 + 0x3d) == '\0') {
          if (*(char *)((int)p_uint26 + 0x3e) == '\0') {
            NPC_Routine_080A4944(p_uint26,p_uint13 + 0x10,1);
            *(char *)((int)p_uint26 + 0x3e) = '\x01';
          }
        }
        else {
          NPC_Routine_080A4944(p_uint26,p_uint13 + 0x10,1);
        }
        *(char *)(p_uint26 + 0xf) = '\0';
      }
    }
    *(int *)(&stack0x00000cb0 + i_val7) = *(int *)(&stack0x00000cb0 + i_val7) + 0x28;
    *(int *)(&stack0xffffffe0 + 0xCD4 + i_val7) =
         *(int *)(&stack0xffffffe0 + 0xCD4 + i_val7) + 4;
    loop_i = *(uint *)(&stack0xffffffe0 + 0xC78 + i_val7) + 1;
    *(uint *)(&stack0xffffffe0 + 0xC78 + i_val7) = loop_i;
  } while (loop_i < 2);
  p_int14 = (int *)(0x1074 + (int)farmer);
  if (*p_int14 != 0) {
    i_val16 = _call_via_r1(farmer,*(undefined4 *)(*farmer + 0x14));
    if (i_val16 == 2) {
      p_uint26 = (undefined4 *)*p_int14;
      i_val16 = _call_via_r1(farmer,*(undefined4 *)(*farmer + 0x18));
      i_val21 = _call_via_r1(farmer,*(undefined4 *)(*farmer + 0x1c));
      p_uint12 = *(undefined4 **)(&stack0x00000c90 + i_val7);
      p_uint13 = &stack0xffffffe0 + 0xC38 + i_val7;
      _call_via_r3(p_uint13,(int *)p_uint26[10],
                      *(undefined2 *)(p_uint26[0xb] + (uint)*(ushort *)(p_uint26 + 0xd) * 4),
                      *(undefined4 *)(*(int *)p_uint26[10] + 0x10));
      u_val19 = *(undefined4 *)(*(int *)(&stack0x00000c90 + i_val7) + 4);
      u_val11 = *p_uint26;
      if ((int)(-p_uint26[2] | p_uint26[2]) < 0) {
        u_val3 = *(ushort *)(p_uint26 + 3);
        *p_uint38 = 0x01FFFFFF;
        *(undefined1 **)(&stack0xffffffe4 + i_val7) = p_uint13;
        *(undefined4 *)(&stack0xffffffe8 + i_val7) = u_val11;
        *(uint *)(&stack0xffffffec + i_val7) = (uint)u_val3;
        *(undefined4 **)(&stack0xfffffff0 + i_val7) = p_uint26 + 4;
        i_val16 = _call_via_r4(u_val19,0x88 - i_val16,0x23 - i_val21,0x55);
      }
      else {
        i_val16 = 0;
      }
      if ((i_val16 == 0) || (p_char20 = (char *)(p_uint26 + 0xf), *p_char20 == '\0')) goto LAB_08018d76;
      NPC_Routine_080A480C(p_uint26,*p_uint12,p_uint13 + 8);
      if (*(char *)((int)p_uint26 + 0x3d) == '\0') goto LAB_08018d58;
LAB_08018d4a:
      NPC_Routine_080A4944(p_uint26,p_uint13 + 0x10,1);
    }
    else {
      if (i_val16 < 3) {
        if (i_val16 != 0) goto LAB_08018d76;
        p_uint26 = (undefined4 *)*p_int14;
        i_val24 = _call_via_r1(farmer,*(undefined4 *)(*farmer + 0x18));
        i_val24 = 0x160 - i_val24;
        i_val21 = _call_via_r1(farmer,*(undefined4 *)(*farmer + 0x1c));
        i_val16 = 0x23;
LAB_08018c1e:
        i_val16 = i_val16 - i_val21;
        p_uint12 = *(undefined4 **)(&stack0x00000c90 + i_val7);
        p_uint13 = &stack0xffffffe0 + 0xC38 + i_val7;
        _call_via_r3(p_uint13,(int *)p_uint26[10],
                        *(undefined2 *)(p_uint26[0xb] + (uint)*(ushort *)(p_uint26 + 0xd) * 4),
                        *(undefined4 *)(*(int *)p_uint26[10] + 0x10));
        u_val19 = *(undefined4 *)(*(int *)(&stack0x00000c90 + i_val7) + 4);
        u_val11 = *p_uint26;
        if ((int)(-p_uint26[2] | p_uint26[2]) < 0) goto LAB_08018b98;
LAB_08018bc8:
        i_val16 = 0;
      }
      else {
        if (i_val16 == 3) {
          p_uint26 = (undefined4 *)*p_int14;
          i_val24 = _call_via_r1(farmer,*(undefined4 *)(*farmer + 0x18));
          i_val24 = 0x26c - i_val24;
          i_val21 = _call_via_r1(farmer,*(undefined4 *)(*farmer + 0x1c));
          i_val16 = 0x76;
          goto LAB_08018c1e;
        }
        if (i_val16 != 7) goto LAB_08018d76;
        p_uint26 = (undefined4 *)*p_int14;
        i_val24 = _call_via_r1(farmer,*(undefined4 *)(*farmer + 0x18));
        i_val24 = 0x22c - i_val24;
        i_val16 = _call_via_r1(farmer,*(undefined4 *)(*farmer + 0x1c));
        i_val16 = 0x86 - i_val16;
        p_uint12 = *(undefined4 **)(&stack0x00000c90 + i_val7);
        p_uint13 = &stack0xffffffe0 + 0xC38 + i_val7;
        _call_via_r3(p_uint13,(int *)p_uint26[10],
                        *(undefined2 *)(p_uint26[0xb] + (uint)*(ushort *)(p_uint26 + 0xd) * 4),
                        *(undefined4 *)(*(int *)p_uint26[10] + 0x10));
        u_val19 = *(undefined4 *)(*(int *)(&stack0x00000c90 + i_val7) + 4);
        u_val11 = *p_uint26;
        if (-1 < (int)(-p_uint26[2] | p_uint26[2])) goto LAB_08018bc8;
LAB_08018b98:
        u_val3 = *(ushort *)(p_uint26 + 3);
        *p_uint37 = 0x01FFFFFF;
        *(undefined1 **)(&stack0xffffffe4 + i_val7) = p_uint13;
        *(undefined4 *)(&stack0xffffffe8 + i_val7) = u_val11;
        *(uint *)(&stack0xffffffec + i_val7) = (uint)u_val3;
        *(undefined4 **)(&stack0xfffffff0 + i_val7) = p_uint26 + 4;
        i_val16 = _call_via_r4(u_val19,i_val24,i_val16,0x55);
      }
      if ((i_val16 == 0) || (p_char20 = (char *)(p_uint26 + 0xf), *p_char20 == '\0')) goto LAB_08018d76;
      NPC_Routine_080A480C(p_uint26,*p_uint12,p_uint13 + 8);
      if (*(char *)((int)p_uint26 + 0x3d) != '\0') goto LAB_08018d4a;
LAB_08018d58:
      if (*(char *)((int)p_uint26 + 0x3e) == '\0') {
        NPC_Routine_080A4944(p_uint26,p_uint13 + 0x10,1);
        *(char *)((int)p_uint26 + 0x3e) = '\x01';
      }
    }
    *p_char20 = '\0';
  }
LAB_08018d76:
  p_uint26 = *(undefined4 **)(0x1078 + (int)farmer);
  if (p_uint26 != (undefined4 *)0x0) {
    i_val16 = _call_via_r1(farmer,*(undefined4 *)(*farmer + 0x18));
    i_val16 = 0x235 - i_val16;
    i_val21 = _call_via_r1(farmer,*(undefined4 *)(*farmer + 0x1c));
    p_uint12 = *(undefined4 **)(&stack0x00000c90 + i_val7);
    p_uint13 = &stack0xffffffe0 + 0xC38 + i_val7;
    _call_via_r3(p_uint13,(int *)p_uint26[10],
                    *(undefined2 *)(p_uint26[0xb] + (uint)*(ushort *)(p_uint26 + 0xd) * 4),
                    *(undefined4 *)(*(int *)p_uint26[10] + 0x10));
    u_val19 = *(undefined4 *)(*(int *)(&stack0x00000c90 + i_val7) + 4);
    u_val11 = *p_uint26;
    if ((int)(-p_uint26[2] | p_uint26[2]) < 0) {
      u_val3 = *(ushort *)(p_uint26 + 3);
      *p_uint39 = 0x01FFFFFF;
      *(undefined1 **)(&stack0xffffffe4 + i_val7) = p_uint13;
      *(undefined4 *)(&stack0xffffffe8 + i_val7) = u_val11;
      *(uint *)(&stack0xffffffec + i_val7) = (uint)u_val3;
      *(undefined4 **)(&stack0xfffffff0 + i_val7) = p_uint26 + 4;
      i_val16 = _call_via_r4(u_val19,i_val16,0x13 - i_val21,0x55);
    }
    else {
      i_val16 = 0;
    }
    if ((i_val16 != 0) && (*(char *)(p_uint26 + 0xf) != '\0')) {
      NPC_Routine_080A480C(p_uint26,*p_uint12,p_uint13 + 8);
      if (*(char *)((int)p_uint26 + 0x3d) == '\0') {
        if (*(char *)((int)p_uint26 + 0x3e) == '\0') {
          NPC_Routine_080A4944(p_uint26,p_uint13 + 0x10,1);
          *(char *)((int)p_uint26 + 0x3e) = '\x01';
        }
      }
      else {
        NPC_Routine_080A4944(p_uint26,p_uint13 + 0x10,1);
      }
      *(char *)(p_uint26 + 0xf) = '\0';
    }
  }
  i_val16 = *(int *)(0x1058 + (int)farmer);
  if (i_val16 != 0) {
    p_char20 = (char *)(i_val16 + 0x3f);
    if (*p_char20 == '\0') {
      i_val21 = Animal_Routine_0805E8F0(i_val16 + 0x28);
      if (i_val21 * 0x40000000 < 0) {
        p_char20 = (char *)(i_val16 + 0x3c);
        c_char8 = '\x01';
        goto LAB_08018ea2;
      }
    }
    else {
      c_char8 = '\0';
LAB_08018ea2:
      *p_char20 = c_char8;
    }
    i_val16 = Building_Routine_0800BF14(*(int *)(0x1038 + (int)farmer) + 500);
    i_val21 = _call_via_r1(farmer,*(undefined4 *)(*farmer + 0x14));
    if (i_val21 == 0x1d) {
      p_uint26 = *(undefined4 **)(0x1058 + (int)farmer);
      i_val24 = _call_via_r1(farmer,*(undefined4 *)(*farmer + 0x18));
      i_val21 = gRomData_080F06FD;
      b_flag2 = *(byte *)(i_val16 * 2 + gRomData_080F06FD);
      i_val29 = _call_via_r1(farmer,*(undefined4 *)(*farmer + 0x1c));
      b_flag1 = *(byte *)(i_val16 * 2 + i_val21 + 1);
      p_uint12 = *(undefined4 **)(&stack0x00000c90 + i_val7);
      p_uint13 = &stack0xffffffe0 + 0xC38 + i_val7;
      _call_via_r3(p_uint13,(int *)p_uint26[10],
                      *(undefined2 *)(p_uint26[0xb] + (uint)*(ushort *)(p_uint26 + 0xd) * 4),
                      *(undefined4 *)(*(int *)p_uint26[10] + 0x10));
      u_val19 = *(undefined4 *)(*(int *)(&stack0x00000c90 + i_val7) + 4);
      u_val11 = *p_uint26;
      if ((int)(-p_uint26[2] | p_uint26[2]) < 0) {
        u_val3 = *(ushort *)(p_uint26 + 3);
        *p_uint40 = 0x01FFFFFF;
        *(undefined1 **)(&stack0xffffffe4 + i_val7) = p_uint13;
        *(undefined4 *)(&stack0xffffffe8 + i_val7) = u_val11;
        *(uint *)(&stack0xffffffec + i_val7) = (uint)u_val3;
        *(undefined4 **)(&stack0xfffffff0 + i_val7) = p_uint26 + 4;
        i_val16 = _call_via_r4(u_val19,(uint)b_flag2 * 8 - i_val24,(uint)b_flag1 * 8 - i_val29,0xaa);
      }
      else {
        i_val16 = 0;
      }
      if ((i_val16 != 0) && (p_char20 = (char *)(p_uint26 + 0xf), *p_char20 != '\0')) {
        NPC_Routine_080A480C(p_uint26,*p_uint12,p_uint13 + 8);
        if (*(char *)((int)p_uint26 + 0x3d) == '\0') {
          p_char22 = (char *)((int)p_uint26 + 0x3e);
          c_char8 = *p_char22;
          goto joined_r0x08018fbe;
        }
LAB_0801909c:
        NPC_Routine_080A4944(p_uint26,p_uint13 + 0x10,1);
LAB_080190be:
        *p_char20 = '\0';
      }
    }
    else if (i_val21 == 0x27) {
      p_uint26 = *(undefined4 **)(0x1058 + (int)farmer);
      i_val16 = _call_via_r1(farmer,*(undefined4 *)(*farmer + 0x18));
      pbVar31 = gRomData_080F06FD;
      b_flag2 = *gRomData_080F06FD;
      i_val21 = _call_via_r1(farmer,*(undefined4 *)(*farmer + 0x1c));
      b_flag1 = pbVar31[1];
      p_uint12 = *(undefined4 **)(&stack0x00000c90 + i_val7);
      p_uint13 = &stack0xffffffe0 + 0xC38 + i_val7;
      _call_via_r3(p_uint13,(int *)p_uint26[10],
                      *(undefined2 *)(p_uint26[0xb] + (uint)*(ushort *)(p_uint26 + 0xd) * 4),
                      *(undefined4 *)(*(int *)p_uint26[10] + 0x10));
      u_val19 = *(undefined4 *)(*(int *)(&stack0x00000c90 + i_val7) + 4);
      u_val11 = *p_uint26;
      if ((int)(-p_uint26[2] | p_uint26[2]) < 0) {
        u_val3 = *(ushort *)(p_uint26 + 3);
        *p_uint41 = 0x01FFFFFF;
        *(undefined1 **)(&stack0xffffffe4 + i_val7) = p_uint13;
        *(undefined4 *)(&stack0xffffffe8 + i_val7) = u_val11;
        *(uint *)(&stack0xffffffec + i_val7) = (uint)u_val3;
        *(undefined4 **)(&stack0xfffffff0 + i_val7) = p_uint26 + 4;
        i_val16 = _call_via_r4(u_val19,(uint)b_flag2 * 8 - i_val16,(uint)b_flag1 * 8 - i_val21,0xaa);
      }
      else {
        i_val16 = 0;
      }
      if ((i_val16 != 0) && (p_char20 = (char *)(p_uint26 + 0xf), *p_char20 != '\0')) {
        NPC_Routine_080A480C(p_uint26,*p_uint12,p_uint13 + 8);
        if (*(char *)((int)p_uint26 + 0x3d) != '\0') goto LAB_0801909c;
        p_char22 = (char *)((int)p_uint26 + 0x3e);
        c_char8 = *p_char22;
joined_r0x08018fbe:
        if (c_char8 == '\0') {
          NPC_Routine_080A4944(p_uint26,p_uint13 + 0x10,1);
          *p_char22 = '\x01';
        }
        goto LAB_080190be;
      }
    }
  }
  p_int14 = (int *)(0x1068 + (int)farmer);
  if ((*p_int14 != 0) &&
     (i_val16 = _call_via_r1(farmer,*(undefined4 *)(*farmer + 0x14)), i_val16 == 0x1d)) {
    i_val16 = Building_Routine_0800BF14(*(int *)(0x1038 + (int)farmer) + 500);
    if (i_val16 == 1) {
      p_uint23 = (undefined4 *)*p_int14;
      i_val16 = _call_via_r1(farmer,*(undefined4 *)(*farmer + 0x18));
      i_val16 = 0x118 - i_val16;
      i_val21 = _call_via_r1(farmer,*(undefined4 *)(*farmer + 0x1c));
      p_uint26 = *(undefined4 **)(&stack0x00000c90 + i_val7);
      p_uint12 = *(undefined4 **)(&stack0x00000c90 + i_val7);
LAB_0801913a:
      p_uint27 = p_uint23 + 10;
      u_val19 = p_uint12[1];
      u_val11 = *p_uint23;
      if ((int)(-p_uint23[2] | p_uint23[2]) < 0) goto LAB_080191da;
LAB_08019204:
      i_val16 = 0;
    }
    else {
      if (i_val16 == 0) {
        p_uint23 = (undefined4 *)*p_int14;
        i_val16 = _call_via_r1(farmer,*(undefined4 *)(*farmer + 0x18));
        i_val16 = 0xa0 - i_val16;
        i_val21 = _call_via_r1(farmer,*(undefined4 *)(*farmer + 0x1c));
        p_uint12 = *(undefined4 **)(&stack0x00000c90 + i_val7);
        p_uint26 = p_uint12;
        goto LAB_0801913a;
      }
      if (i_val16 != 2) goto LAB_08019232;
      p_uint23 = (undefined4 *)*p_int14;
      i_val16 = _call_via_r1(farmer,*(undefined4 *)(*farmer + 0x18));
      i_val16 = 0x158 - i_val16;
      i_val21 = _call_via_r1(farmer,*(undefined4 *)(*farmer + 0x1c));
      p_uint26 = *(undefined4 **)(&stack0x00000c90 + i_val7);
      p_uint27 = p_uint23 + 10;
      u_val19 = *(undefined4 *)(*(int *)(&stack0x00000c90 + i_val7) + 4);
      u_val11 = *p_uint23;
      if (-1 < (int)(-p_uint23[2] | p_uint23[2])) goto LAB_08019204;
LAB_080191da:
      u_val3 = *(ushort *)(p_uint23 + 3);
      *p_uint42 = 0x01FFFFFF;
      *(undefined4 **)(&stack0xffffffe4 + i_val7) = p_uint27;
      *(undefined4 *)(&stack0xffffffe8 + i_val7) = u_val11;
      *(uint *)(&stack0xffffffec + i_val7) = (uint)u_val3;
      *(undefined4 **)(&stack0xfffffff0 + i_val7) = p_uint23 + 4;
      i_val16 = _call_via_r4(u_val19,i_val16,0x30 - i_val21,0xaa);
    }
    if ((i_val16 != 0) && (*(char *)(p_uint23 + 0x12) != '\0')) {
      NPC_Routine_080A480C(p_uint23,*p_uint26,p_uint27 + 2);
      NPC_Routine_080A4944(p_uint23,p_uint27 + 4,1);
      *(char *)(p_uint23 + 0x12) = '\0';
    }
  }
LAB_08019232:
  p_uint15 = (uint *)(0x102C + (int)farmer);
  loop_i = *p_uint15;
  if ((int)(-loop_i | loop_i) < 0) {
    if ((char)p_uint15[2] == '\0') {
      if (*(char *)(loop_i + 0x3f) == '\0') {
        i_val16 = Animal_Routine_0805E8F0(loop_i + 0x28);
        if (i_val16 * 0x40000000 < 0) {
          *(undefined1 *)(loop_i + 0x3c) = 1;
        }
      }
      else {
        *(char *)(loop_i + 0x3f) = '\0';
        i_val16 = 2;
      }
      if (i_val16 * 0x20000000 < 0) {
        loop_i = *p_uint15;
        if ((loop_i != 0) && (loop_i != 0)) {
          _call_via_r2(loop_i,3,*(undefined4 *)(*(int *)(loop_i + 0x24) + 8));
        }
        *p_uint15 = 0;
      }
    }
    else {
      c_char8 = *(char *)((int)p_uint15 + 9) + -1;
      *(char *)((int)p_uint15 + 9) = c_char8;
      if (c_char8 == '\0') {
        loop_i = *p_uint15;
        if ((loop_i != 0) && (loop_i != 0)) {
          _call_via_r2(loop_i,3,*(undefined4 *)(*(int *)(loop_i + 0x24) + 8));
        }
        *p_uint15 = 0;
      }
      else {
        loop_i = *p_uint15;
        if (*(char *)(loop_i + 0x3f) == '\0') {
          i_val16 = Animal_Routine_0805E8F0(loop_i + 0x28);
          if (i_val16 * 0x40000000 < 0) {
            *(undefined1 *)(loop_i + 0x3c) = 1;
          }
        }
        else {
          *(char *)(loop_i + 0x3f) = '\0';
        }
      }
      *(byte *)((int)p_uint15 + 10) = *(char *)((int)p_uint15 + 10) + 1U & 7;
    }
    i_val16 = _call_via_r1(farmer,*(undefined4 *)(*farmer + 0x18));
    i_val21 = _call_via_r1(farmer,*(undefined4 *)(*farmer + 0x1c));
    p_uint26 = (undefined4 *)(0x102C + (int)farmer);
    *(undefined4 *)(&stack0xffffffe0 + 0xC7C + i_val7) =
         *(undefined4 *)(&stack0x00000c90 + i_val7);
    p_uint12 = (undefined4 *)*p_uint26;
    if ((int)(-(int)p_uint12 | (uint)p_uint12) < 0) {
      if (*(char *)(p_uint26 + 2) == '\0') {
        s_val4 = *(short *)(p_uint26 + 1);
        s_val5 = *(short *)((int)p_uint26 + 6);
        p_uint13 = &stack0xffffffe0 + 0xC38 + i_val7;
        _call_via_r3(p_uint13,(int *)p_uint12[10],
                        *(undefined2 *)(p_uint12[0xb] + (uint)*(ushort *)(p_uint12 + 0xd) * 4),
                        *(undefined4 *)(*(int *)p_uint12[10] + 0x10));
        u_val19 = *(undefined4 *)(*(int *)(&stack0x00000c90 + i_val7) + 4);
        u_val11 = *p_uint12;
        if ((int)(-p_uint12[2] | p_uint12[2]) < 0) {
          u_val3 = *(ushort *)(p_uint12 + 3);
          *p_int44 = 0x8000 - s_val5;
          *(undefined1 **)(&stack0xffffffe4 + i_val7) = p_uint13;
          *(undefined4 *)(&stack0xffffffe8 + i_val7) = u_val11;
          *(uint *)(&stack0xffffffec + i_val7) = (uint)u_val3;
          *(undefined4 **)(&stack0xfffffff0 + i_val7) = p_uint12 + 4;
          i_val16 = _call_via_r4(u_val19,s_val4 - i_val16,s_val5 - i_val21,0xaa);
        }
        else {
          i_val16 = 0;
        }
        if ((i_val16 != 0) && (*(char *)(p_uint12 + 0xf) != '\0')) {
          NPC_Routine_080A480C(p_uint12,**(undefined4 **)(&stack0xffffffe0 + 0xC7C + i_val7),
                        p_uint13 + 8);
          if (*(char *)((int)p_uint12 + 0x3d) == '\0') {
            if (*(char *)((int)p_uint12 + 0x3e) == '\0') {
              NPC_Routine_080A4944(p_uint12,p_uint13 + 0x10,1);
              *(char *)((int)p_uint12 + 0x3e) = '\x01';
            }
          }
          else {
            NPC_Routine_080A4944(p_uint12,p_uint13 + 0x10,1);
          }
          *(char *)(p_uint12 + 0xf) = '\0';
        }
      }
      else if (2 < *(byte *)((int)p_uint26 + 10)) {
        *(int *)(&stack0x00000c60 + i_val7) = *(short *)(p_uint26 + 1) - i_val16;
        s_val4 = *(short *)((int)p_uint26 + 6);
        p_uint13 = &stack0xffffffe0 + 0xC38 + i_val7;
        _call_via_r3(p_uint13,(int *)p_uint12[10],
                        *(undefined2 *)(p_uint12[0xb] + (uint)*(ushort *)(p_uint12 + 0xd) * 4),
                        *(undefined4 *)(*(int *)p_uint12[10] + 0x10));
        u_val19 = *(undefined4 *)(*(int *)(&stack0x00000c90 + i_val7) + 4);
        u_val11 = *p_uint12;
        if ((int)(-p_uint12[2] | p_uint12[2]) < 0) {
          u_val3 = *(ushort *)(p_uint12 + 3);
          *p_int43 = 0x8000 - s_val4;
          *(undefined1 **)(&stack0xffffffe4 + i_val7) = p_uint13;
          *(undefined4 *)(&stack0xffffffe8 + i_val7) = u_val11;
          *(uint *)(&stack0xffffffec + i_val7) = (uint)u_val3;
          *(undefined4 **)(&stack0xfffffff0 + i_val7) = p_uint12 + 4;
          i_val16 = _call_via_r4(u_val19,*(undefined4 *)(&stack0x00000c60 + i_val7),s_val4 - i_val21,
                                   0xaa);
        }
        else {
          i_val16 = 0;
        }
        if ((i_val16 != 0) && (*(char *)(p_uint12 + 0xf) != '\0')) {
          NPC_Routine_080A480C(p_uint12,**(undefined4 **)(&stack0xffffffe0 + 0xC7C + i_val7),
                        p_uint13 + 8);
          if (*(char *)((int)p_uint12 + 0x3d) == '\0') {
            if (*(char *)((int)p_uint12 + 0x3e) == '\0') {
              NPC_Routine_080A4944(p_uint12,p_uint13 + 0x10,1);
              *(char *)((int)p_uint12 + 0x3e) = '\x01';
            }
          }
          else {
            NPC_Routine_080A4944(p_uint12,p_uint13 + 0x10,1);
          }
          *(char *)(p_uint12 + 0xf) = '\0';
        }
      }
    }
  }
  *(undefined4 *)(&stack0xffffffe0 + _ASSET_BLOCK_080195CC + i_val7) = 0;
  p_uint30 = (ushort *)(0x1084 + (int)farmer);
  *(int *)(&stack0xffffffe0 + 0xCCC + i_val7) = 0x1081 + (int)farmer;
  do {
    if ((**(byte **)(&stack0xffffffe0 + 0xCCC + i_val7) & 3) == 1) {
      u_val3 = *p_uint30;
      i_val21 = (uint)p_uint30[1] * 8 + 8;
      p_uint26 = *(undefined4 **)(p_uint30 + 2);
      i_val16 = _call_via_r1(farmer,*(undefined4 *)(*farmer + 0x18));
      *(uint *)(&stack0xffffffe0 + 0xC88 + i_val7) = ((uint)u_val3 * 8 + 8) - i_val16;
      i_val16 = _call_via_r1(farmer,*(undefined4 *)(*farmer + 0x1c));
      *(undefined4 *)(&stack0xffffffe0 + 0xC8C + i_val7) =
           *(undefined4 *)(&stack0x00000c90 + i_val7);
      p_uint13 = &stack0xffffffe0 + 0xC38 + i_val7;
      _call_via_r3(p_uint13,(int *)p_uint26[10],
                      *(undefined2 *)(p_uint26[0xb] + (uint)*(ushort *)(p_uint26 + 0xd) * 4),
                      *(undefined4 *)(*(int *)p_uint26[10] + 0x10));
      u_val19 = *(undefined4 *)(*(int *)(&stack0x00000c90 + i_val7) + 4);
      u_val11 = *p_uint26;
      if ((int)(-p_uint26[2] | p_uint26[2]) < 0) {
        u_val3 = *(ushort *)(p_uint26 + 3);
        *p_int45 = 0x8000 - i_val21;
        *(undefined1 **)(&stack0xffffffe4 + i_val7) = p_uint13;
        *(undefined4 *)(&stack0xffffffe8 + i_val7) = u_val11;
        *(uint *)(&stack0xffffffec + i_val7) = (uint)u_val3;
        *(undefined4 **)(&stack0xfffffff0 + i_val7) = p_uint26 + 4;
        i_val16 = _call_via_r4(u_val19,*(undefined4 *)(&stack0xffffffe0 + 0xC88 + i_val7),
                                 i_val21 - i_val16,0xaa);
      }
      else {
        i_val16 = 0;
      }
      if ((i_val16 != 0) && (*(char *)(p_uint26 + 0xf) != '\0')) {
        NPC_Routine_080A480C(p_uint26,**(undefined4 **)(&stack0xffffffe0 + 0xC8C + i_val7),
                      p_uint13 + 8);
        if (*(char *)((int)p_uint26 + 0x3d) == '\0') {
          if (*(char *)((int)p_uint26 + 0x3e) == '\0') {
            NPC_Routine_080A4944(p_uint26,p_uint13 + 0x10,1);
            *(char *)((int)p_uint26 + 0x3e) = '\x01';
          }
        }
        else {
          NPC_Routine_080A4944(p_uint26,p_uint13 + 0x10,1);
        }
        *(char *)(p_uint26 + 0xf) = '\0';
      }
    }
    p_uint30 = p_uint30 + 6;
    *(int *)(&stack0xffffffe0 + _ASSET_BLOCK_08019758 + i_val7) =
         *(int *)(&stack0xffffffe0 + _ASSET_BLOCK_08019758 + i_val7) + 0xc;
    loop_i = *(uint *)(&stack0xffffffe0 + 0xC84 + i_val7) + 1;
    *(uint *)(&stack0xffffffe0 + 0xC84 + i_val7) = loop_i;
  } while (loop_i < 4);
  i_val16 = *gIWRAM_PedometerStepCount;
  *(undefined4 *)(&stack0x00000c70 + i_val7) = 0;
  pbVar31 = (byte *)(i_val16 + 0x4DC);
  do {
    if (((*pbVar31 & 3) == 1) &&
       (u_val3 = *(ushort *)(pbVar31 + 2),
       loop_i = _call_via_r1(farmer,*(undefined4 *)(*farmer + 0x14)), (u_val3 & 0x3ff) == loop_i
       )) {
      b_flag2 = pbVar31[3];
      loop_i = *(ushort *)(pbVar31 + 4) & 0x3FF;
      i_val21 = (*(int *)(pbVar31 + 4) << 6) >> 0x10;
      u_val25 = (*pbVar31 & 0xf) >> 2;
      p_uint26 = *(undefined4 **)
                 ((int)farmer + *(int *)(&stack0x00000c70 + i_val7) * 4 + 0x10B0);
      i_val16 = _call_via_r1(farmer,*(undefined4 *)(*farmer + 0x18));
      *(int *)(&stack0xffffffe0 + 0xC94 + i_val7) =
           (short)((ushort)(loop_i << 6) | (ushort)(b_flag2 >> 2)) - i_val16;
      i_val16 = _call_via_r1(farmer,*(undefined4 *)(*farmer + 0x1c));
      p_uint12 = *(undefined4 **)(&stack0x00000c90 + i_val7);
      *(undefined4 *)(&stack0xffffffe0 + 0xCD8 + i_val7) = p_uint12[1];
      u_val11 = *p_uint26;
      if ((int)(-p_uint26[2] | p_uint26[2]) < 0) {
        u_val3 = *(ushort *)(p_uint26 + 3);
        *p_int46 = 0x8000 - i_val21;
        *(undefined4 **)(&stack0xffffffe4 + i_val7) = p_uint26 + 10;
        *(undefined4 *)(&stack0xffffffe8 + i_val7) = u_val11;
        *(uint *)(&stack0xffffffec + i_val7) = (uint)u_val3;
        *(undefined4 **)(&stack0xfffffff0 + i_val7) = p_uint26 + 4;
        i_val16 = _call_via_r4(*(undefined4 *)(&stack0xffffffe0 + 0xCD8 + i_val7),
                                 *(undefined4 *)(&stack0xffffffe0 + 0xC94 + i_val7),
                                 i_val21 - i_val16,u_val25 << 2 | u_val25 | u_val25 << 4 | u_val25 << 6);
      }
      else {
        i_val16 = 0;
      }
      if ((i_val16 != 0) && (*(char *)(p_uint26 + 0x12) != '\0')) {
        NPC_Routine_080A480C(p_uint26,*p_uint12,p_uint26 + 0xc);
        NPC_Routine_080A4944(p_uint26,p_uint26 + 0xe,1);
        *(char *)(p_uint26 + 0x12) = '\0';
      }
    }
    pbVar31 = pbVar31 + 0xc;
    loop_i = *(uint *)(&stack0x00000c70 + i_val7) + 1;
    *(uint *)(&stack0x00000c70 + i_val7) = loop_i;
  } while (loop_i < 6);
  loop_i = farmer[0x66];
  if (99 < loop_i) {
    loop_i = 0;
  }
  p_int28 = (int *)(*(int *)(&stack0xffffffe0 + 0xC98 + i_val7) + loop_i * 4);
  p_int32 = *(int **)(&stack0xffffffe0 + 0xCC4 + i_val7);
  p_int14 = p_int28;
  if ((uint)(byte)(&stack0xfffffff4)[i_val7] < *(uint *)(&stack0x00000c50 + i_val7)) {
    do {
      if ((p_int14 != *(int **)(&stack0xffffffe0 + 0xC74 + i_val7)) &&
         (i_val16 = *p_int14, i_val16 != 0)) {
        _call_via_r2(i_val16,&stack0xffffffe0 + 0xC28 + i_val7,
                        *(undefined4 *)(*(int *)(i_val16 + 0x14) + 0x1c));
      }
      p_int14 = p_int14 + 1;
      if (p_int14 == p_int32) {
        p_int14 = *(int **)(&stack0xffffffe0 + 0xC98 + i_val7);
      }
      if (p_int14 == p_int28) goto LAB_08019844;
    } while ((uint)(byte)(&stack0xfffffff4)[i_val7] < *(uint *)(&stack0x00000c50 + i_val7));
    i_val16 = (int)p_int14 - *(int *)(&stack0xffffffe0 + 0xC98 + i_val7);
  }
  else {
    i_val16 = (int)p_int28 - *(int *)(&stack0xffffffe0 + 0xC98 + i_val7);
  }
  loop_i = i_val16 >> 2;
LAB_08019844:
  farmer[0x66] = loop_i;
  Animal_Routine_08094A3C(&stack0xfffffff4 + i_val7,
                *(undefined4 *)(*(int *)(&stack0xffffffe0 + 0xC6C + i_val7) + 8));
  for (p_uint13 = *(undefined1 **)(&stack0xffffffe0 + 0xCC8 + i_val7);
      &stack0xfffffff8 + i_val7 != p_uint13; p_uint13 = p_uint13 + 0xFFFFFDFC) {
  }
Farmer_Routine_08019870:
  i_val16 = Map_GetMapData(*(undefined4 *)(farmer[1] + 4));
  b_flag2 = *(byte *)(i_val16 + 0x24);
  *(int **)(&stack0xffffffe0 + 0xC9C + i_val7) = farmer + 0x67;
  p_int14 = (int *)**(undefined4 **)(&stack0xffffffe0 + 0xC6C + i_val7);
  *(uint *)(&stack0x00000c80 + i_val7) = b_flag2 ^ 1;
  *(undefined4 *)(&stack0xffffffe0 + 0xCA4 + i_val7) = 0;
  b_flag2 = **(byte **)(&stack0xffffffe0 + 0xCBC + i_val7);
  *(uint *)(&stack0xffffffe0 + 0xCA8 + i_val7) = (uint)b_flag2;
  if (b_flag2 != 0) {
    do {
      i_val16 = *(int *)(&stack0xffffffe0 + 0xC9C + i_val7) + 0xB78 +
               *(int *)(&stack0xffffffe0 + 0xCA4 + i_val7) * 0xc;
      c_char8 = *(char *)(i_val16 + 9);
      *(int *)(&stack0xffffffe0 + 0xCB4 + i_val7) =
           *(int *)(&stack0xffffffe0 + 0xCA4 + i_val7) + 1;
      if ((-1 < c_char8) &&
         ((i_val21 = *(int *)(&stack0xffffffe0 + 0xC9C + i_val7) + 0x20 +
                    *(char *)(i_val16 + 9) * 0x84, *(char *)(i_val21 + 0x82) != '\0' ||
          (*(char *)(i_val16 + 10) == '\0')))) {
        i_val24 = i_val21 + 0x60;
        if (*(int *)(&stack0x00000c80 + i_val7) == 0) {
          i_val24 = i_val21;
        }
        HW_Routine_08008F0C(&stack0xfffffff4 + i_val7,i_val24,
                      (uint)*(byte *)(i_val16 + 8) * 0x20 + 0x05000200,0x20);
        *(undefined1 **)(&stack0xffffffe0 + 0xCAC + i_val7) = &stack0xfffffff4 + i_val7;
        p_uint26 = (undefined4 *)p_int14[1];
        if (p_uint26 == (undefined4 *)p_int14[3]) {
          *(undefined4 **)(&stack0xffffffe0 + _ASSET_BLOCK_080199EC + i_val7) = p_uint26;
          p_uint17 = (uint *)(&stack0xffffffe0 + 0xC68 + i_val7);
          *p_uint17 = 1;
          loop_i = (int)p_uint26 - *p_int14 >> 4;
          *(uint *)(&stack0xffffffe0 + 0xC64 + i_val7) = loop_i;
          p_uint15 = (uint *)(&stack0xffffffe0 + 0xC64 + i_val7);
          if (loop_i < *p_uint17) {
            p_uint15 = p_uint17;
          }
          if (loop_i + *p_uint15 == 0) {
            p_uint26 = (undefined4 *)0x0;
            *(undefined4 *)(&stack0xffffffe0 + 0xCB8 + i_val7) = 0;
          }
          else {
            i_val24 = (loop_i + *p_uint15) * 0x10;
            p_uint26 = (undefined4 *)runtime_malloc_aligned(i_val24);
            *(int *)(&stack0xffffffe0 + 0xCB8 + i_val7) = i_val24;
            if (p_uint26 == (undefined4 *)0x0) {
              p_uint26 = (undefined4 *)VTable_Routine_080D3BC0(i_val24);
            }
          }
          *(undefined4 **)(&stack0xffffffe0 + 0xCD8 + i_val7) = p_uint26;
          p_uint12 = (undefined4 *)*p_int14;
          *(int *)(&stack0xffffffe0 + 0xCB4 + i_val7) =
               *(int *)(&stack0xffffffe0 + 0xCA4 + i_val7) + 1;
          if (p_uint12 != *(undefined4 **)(&stack0xffffffe0 + 0xCDC + i_val7)) {
            do {
              if (p_uint26 != (undefined4 *)0x0) {
                u_val11 = p_uint12[1];
                u_val19 = p_uint12[2];
                *p_uint26 = *p_uint12;
                p_uint26[1] = u_val11;
                p_uint26[2] = u_val19;
                p_uint26[3] = p_uint12[3];
              }
              p_uint12 = p_uint12 + 4;
              p_uint26 = p_uint26 + 4;
            } while (p_uint12 != *(undefined4 **)(&stack0xffffffe0 + 0xCDC + i_val7));
          }
          i_val24 = *(int *)(&stack0xffffffe0 + 0xC68 + i_val7);
          if (i_val24 == 1) {
            if (p_uint26 != (undefined4 *)0x0) {
              p_uint12 = *(undefined4 **)(&stack0xffffffe0 + 0xCAC + i_val7);
              u_val11 = p_uint12[1];
              u_val19 = p_uint12[2];
              *p_uint26 = *p_uint12;
              p_uint26[1] = u_val11;
              p_uint26[2] = u_val19;
              p_uint26[3] = p_uint12[3];
            }
            p_uint26 = p_uint26 + 4;
          }
          else {
            for (; i_val24 != 0; i_val24 = i_val24 + -1) {
              if (p_uint26 != (undefined4 *)0x0) {
                p_uint12 = *(undefined4 **)(&stack0xffffffe0 + 0xCAC + i_val7);
                u_val11 = p_uint12[1];
                u_val19 = p_uint12[2];
                *p_uint26 = *p_uint12;
                p_uint26[1] = u_val11;
                p_uint26[2] = u_val19;
                p_uint26[3] = p_uint12[3];
              }
              p_uint26 = p_uint26 + 4;
            }
          }
          for (i_val24 = *p_int14; i_val24 != p_int14[1]; i_val24 = i_val24 + 0x10) {
          }
          if (*p_int14 != 0) {
            cpp_operator_delete();
          }
          i_val29 = *(int *)(&stack0xffffffe0 + 0xCB8 + i_val7);
          i_val24 = *(int *)(&stack0xffffffe0 + 0xCD8 + i_val7);
          *p_int14 = i_val24;
          p_int14[1] = (int)p_uint26;
          p_int14[3] = i_val29 + i_val24;
        }
        else {
          if (p_uint26 != (undefined4 *)0x0) {
            u_val11 = *(undefined4 *)(&stack0xfffffff8 + i_val7);
            u_val19 = *(undefined4 *)((int)&stack_val_4 + i_val7);
            *p_uint26 = *(undefined4 *)(&stack0xfffffff4 + i_val7);
            p_uint26[1] = u_val11;
            p_uint26[2] = u_val19;
            p_uint26[3] = *(undefined4 *)(&stack0x00000000 + i_val7);
          }
          p_int14[1] = p_int14[1] + 0x10;
          *(int *)(&stack0xffffffe0 + 0xCB4 + i_val7) =
               *(int *)(&stack0xffffffe0 + 0xCA4 + i_val7) + 1;
        }
        *(undefined1 *)(i_val21 + 0x82) = 0;
        if ((*(char *)(i_val16 + 10) == '\0') && (-1 < *(char *)(i_val16 + 9))) {
          *(undefined1 *)(i_val16 + 10) = 1;
        }
      }
      loop_i = *(uint *)(&stack0xffffffe0 + 0xCB4 + i_val7);
      *(uint *)(&stack0xffffffe0 + 0xCA4 + i_val7) = loop_i;
    } while (loop_i < *(uint *)(&stack0xffffffe0 + 0xCA8 + i_val7));
  }
  loop_i = (uint)**(byte **)(&stack0xffffffe0 + 0xCBC + i_val7);
  if (loop_i < **(byte **)(&stack0x00000ca0 + i_val7)) {
    p_char20 = (char *)((int)farmer + loop_i * 0xc + 0xB81 + 0x19c);
    pbVar31 = (byte *)(0xDB1 + (int)farmer);
    do {
      if (-1 < *p_char20) {
        *p_char20 = -1;
      }
      p_char20 = p_char20 + 0xc;
      loop_i = loop_i + 1;
    } while (loop_i < *pbVar31);
  }
  (**(code **)(&stack0x00000cdc + i_val7))();
  return;
}

// =============================================================================
// Function: Farmer_Routine_08019B90 @ 0x08019B90
// =============================================================================
void Farmer_Routine_08019B90(int farmer)

{
  int i_val1;
  
  _call_via_r4(*(undefined4 *)(farmer + 4),*(undefined4 *)(farmer + 0x1048),
                  (uint)*(byte *)(farmer + 0x104C),
                  0x1e - (uint)*(byte *)(farmer + 0x104C));
  i_val1 = Map_GetMapData(*(undefined4 *)(*(int *)(farmer + 4) + 4));
  if (*(char *)(i_val1 + 0x24) == '\0') {
    Farmer_Routine_0801A13C(farmer,(**(uint **)(0x1040 + farmer) & 0x1fffff) >> 0x10,
                  (**(uint **)(0x1040 + farmer) & 0x7ffffff) >> 0x15,1);
  }
  return;
}

// =============================================================================
// Function: Farmer_Routine_08019BEC @ 0x08019BEC
// =============================================================================
void Farmer_Routine_08019BEC(int *farmer,ushort *amount,uint slot_id)

{
  ushort u_val1;
  undefined2 u_val2;
  char c_char3;
  int *curr_ptr;
  undefined4 u_val5;
  byte *pbVar6;
  int i_val7;
  int *end_ptr;
  int i_val9;
  uint loop_i;
  undefined2 *apuStack_40 [2];
  uint stack_val_38;
  uint stack_val_34;
  uint stack_val_30;
  int *piStack_2c;
  int *piStack_28;
  byte *pbStack_24;
  
  stack_val_38 = slot_id & 0xff;
  for (curr_ptr = farmer + 2; curr_ptr != farmer + 0x66; curr_ptr = curr_ptr + 1) {
    i_val7 = *curr_ptr;
    if (i_val7 != 0) {
      _call_via_r1(i_val7,*(undefined4 *)(*(int *)(i_val7 + 0x14) + 0x14));
    }
  }
  pbVar6 = (byte *)(0x4DC + *gIWRAM_PedometerStepCount);
  loop_i = 0;
  piStack_2c = farmer + 2;
  piStack_28 = farmer + 0x66;
  curr_ptr = (int *)(0x107C + (int)farmer);
  end_ptr = (int *)((int)farmer + 0x10B0);
  do {
    i_val7 = *end_ptr;
    if ((i_val7 != 0) && (i_val7 != 0)) {
      _call_via_r2(i_val7,3,*(undefined4 *)(*(int *)(i_val7 + 0x24) + 8));
    }
    *end_ptr = 0;
    end_ptr = end_ptr + 1;
    loop_i = loop_i + 1;
  } while (loop_i < 6);
  if ((((*amount & 0x3ff) != 2) && (*(int *)farmer[1] == 2)) &&
     (*(int *)((int)farmer + 0x1050) != 0)) {
    HW_Routine_08008E64(((int *)farmer[1])[0xb],*(int *)((int)farmer + 0x1050),0xb000);
  }
  NPC_Routine_080A56DC(farmer[1],amount,*(undefined4 *)((int)farmer + 0x1048),
                (uint)*(byte *)((int)farmer + 0x104C),
                0x1e - (uint)*(byte *)((int)farmer + 0x104C));
  end_ptr = (int *)((int)farmer + 0x1024);
  i_val7 = *end_ptr;
  if ((i_val7 != 0) && (i_val7 != 0)) {
    ScriptEngine_Destruct(i_val7,3);
  }
  *end_ptr = 0;
  i_val7 = *curr_ptr;
  if ((i_val7 != 0) && (i_val7 != 0)) {
    ScriptEngine_Routine_0803B0A8(i_val7,3);
  }
  *curr_ptr = 0;
  curr_ptr = (int *)((int)farmer + 0x1028);
  i_val7 = *curr_ptr;
  if ((i_val7 != 0) && (i_val7 != 0)) {
    NPC_Routine_080AB2E4(i_val7,3);
  }
  *curr_ptr = 0;
  stack_val_34 = 0;
  pbStack_24 = pbVar6;
  do {
    stack_val_30 = *pbStack_24 & 3;
    if ((stack_val_30 == 1) &&
       (u_val1 = *(ushort *)(pbStack_24 + 2),
       loop_i = _call_via_r1(farmer,*(undefined4 *)(*farmer + 0x14)), (u_val1 & 0x3ff) == loop_i
       )) {
      end_ptr = (int *)((int)farmer + stack_val_34 * 4 + 0x10B0);
      i_val7 = Dispatcher_Routine_080005D4(0x4c);
      curr_ptr = (int *)_call_via_r1(farmer,*(undefined4 *)(*farmer + 100));
      u_val2 = *(undefined2 *)(pbStack_24 + 8);
      NPC_Routine_080A4740(i_val7,farmer,2,0x1b);
      *(undefined4 *)(i_val7 + 0x24) = gRomData_080E602C;
      i_val9 = *curr_ptr;
      _call_via_r3(apuStack_40,curr_ptr,u_val2,*(undefined4 *)(i_val9 + 0xc));
      _call_via_r3(i_val7 + 0x28,curr_ptr,*apuStack_40[0],*(undefined4 *)(i_val9 + 0x10));
      *(undefined1 *)(i_val7 + 0x48) = (undefined1)stack_val_30;
      i_val9 = *end_ptr;
      if ((i_val7 != i_val9) && (i_val9 != 0)) {
        _call_via_r2(i_val9,3,*(undefined4 *)(*(int *)(i_val9 + 0x24) + 8));
      }
      *end_ptr = i_val7;
    }
    pbStack_24 = pbStack_24 + 0xc;
    stack_val_34 = stack_val_34 + 1;
  } while (stack_val_34 < 6);
  u_val5 = Dispatcher_Routine_080005D4(0xa0);
  i_val7 = ScriptEngine_Construct(u_val5,farmer);
  curr_ptr = (int *)((int)farmer + 0x1024);
  i_val9 = *curr_ptr;
  if ((i_val7 != i_val9) && (i_val9 != 0)) {
    ScriptEngine_Destruct(i_val9,3);
  }
  *curr_ptr = i_val7;
  i_val7 = Map_GetMapData(*(undefined4 *)(farmer[1] + 4));
  if (*(char *)(i_val7 + 0x24) != '\0') goto LAB_08019e52;
  i_val7 = *(int *)farmer[1];
  if (i_val7 == 0x2e) {
    i_val7 = 1;
  }
  else if (i_val7 < 0x2f) {
    if (i_val7 < 0x2c) goto LAB_08019e34;
    i_val7 = 0;
  }
  else if (i_val7 == 0x2f) {
    i_val7 = 2;
  }
  else {
LAB_08019e34:
    i_val7 = *(int *)(*(int *)((int)farmer + 0x1038) + 8);
  }
  if (i_val7 == 1) {
    Farmer_Routine_0801FAC8(farmer,1);
  }
  else if (i_val7 == 2) {
    Farmer_Routine_0801FAC8(farmer,0);
  }
LAB_08019e52:
  u_val5 = Dispatcher_Routine_080005D4(4);
  i_val7 = NPC_Routine_080AAFC8(u_val5,farmer,*(undefined4 *)(farmer[1] + 4));
  curr_ptr = (int *)((int)farmer + 0x1028);
  i_val9 = *curr_ptr;
  if ((i_val7 != i_val9) && (i_val9 != 0)) {
    NPC_Routine_080AB2E4(i_val9,3);
  }
  *curr_ptr = i_val7;
  Farmer_Routine_0801F14C(farmer);
  Farmer_Routine_0801F3E4(farmer);
  Farmer_Routine_0801F2DC(farmer);
  Farmer_Routine_0801F614(farmer);
  Farmer_Routine_0801F77C(farmer);
  Farmer_Routine_0801E67C(farmer);
  end_ptr = piStack_28;
  for (curr_ptr = piStack_2c; curr_ptr != end_ptr; curr_ptr = curr_ptr + 1) {
    i_val7 = *curr_ptr;
    if (i_val7 != 0) {
      _call_via_r1(i_val7,*(undefined4 *)(*(int *)(i_val7 + 0x14) + 0x10));
    }
  }
  if ((stack_val_38 != 0) &&
     ((c_char3 = NPC_Routine_0809C5F4(*(int *)((int)farmer + 0x1038) + 0x214C),
      c_char3 == '\0' ||
      (c_char3 = Farmer_Routine_080167CC(*(undefined4 *)((int)farmer + 0x1054)), c_char3 == '\0')))) {
    Farmer_Routine_0801DB58(farmer);
  }
  i_val7 = Map_GetMapData(*(undefined4 *)(farmer[1] + 4));
  if (*(char *)(i_val7 + 0x24) == '\0') {
    Farmer_Routine_0801A13C(farmer,(*(uint *)farmer[0x410] & 0x1fffff) >> 0x10,
                  (*(uint *)farmer[0x410] & 0x7ffffff) >> 0x15,1);
  }
  return;
}

// =============================================================================
// Function: Farmer_Routine_08019F38 @ 0x08019F38
// =============================================================================
u32 Farmer_Routine_08019F38(int farmer,undefined4 amount)

{
  char c_char1;
  int i_val2;
  undefined4 u_val3;
  
  i_val2 = Map_GetMapData(*(undefined4 *)(*(int *)(farmer + 4) + 4));
  if ((*(char *)(i_val2 + 0x24) == '\0') &&
     ((i_val2 = Farmer_Routine_0800E324(*(int *)(farmer + 0x1038) + 0x10), i_val2 == 3 ||
      (c_char1 = NPC_Routine_080A5EB8(*(undefined4 *)(farmer + 4),amount), c_char1 != '\0')))) {
    u_val3 = 1;
  }
  else {
    u_val3 = 0;
  }
  return u_val3;
}

// =============================================================================
// Function: Farmer_Routine_08019F7C @ 0x08019F7C
// =============================================================================
u32 Farmer_Routine_08019F7C(int farmer,undefined4 amount)

{
  undefined4 u_val1;
  undefined4 u_val2;
  undefined4 u_val3;
  undefined4 u_val4;
  int i_val5;
  int *p_int6;
  
  p_int6 = (int *)(farmer + 0x1038);
  u_val1 = Farmer_Routine_0800E324(*p_int6 + 0x10);
  u_val2 = Building_Routine_0800BF14(*p_int6 + 500);
  u_val3 = Building_Routine_0800C560(*p_int6 + 0x410);
  u_val4 = Building_Routine_0800CE64(*p_int6 + 0x5f0);
  ScriptEngine_CalculateSpriteHash(amount,u_val1,u_val2,u_val3,u_val4);
  i_val5 = Map_GetMapData();
  return (uint)*(ushort *)(i_val5 + 0x20) << 3;
}

// =============================================================================
// Function: Farmer_Routine_08019FE8 @ 0x08019FE8
// =============================================================================
u32 Farmer_Routine_08019FE8(int farmer,undefined4 amount)

{
  undefined4 u_val1;
  undefined4 u_val2;
  undefined4 u_val3;
  undefined4 u_val4;
  int i_val5;
  int *p_int6;
  
  p_int6 = (int *)(farmer + 0x1038);
  u_val1 = Farmer_Routine_0800E324(*p_int6 + 0x10);
  u_val2 = Building_Routine_0800BF14(*p_int6 + 500);
  u_val3 = Building_Routine_0800C560(*p_int6 + 0x410);
  u_val4 = Building_Routine_0800CE64(*p_int6 + 0x5f0);
  ScriptEngine_CalculateSpriteHash(amount,u_val1,u_val2,u_val3,u_val4);
  i_val5 = Map_GetMapData();
  return (uint)*(ushort *)(i_val5 + 0x22) << 3;
}

// =============================================================================
// Function: Farmer_Routine_0801A054 @ 0x0801A054
// =============================================================================
u32 Farmer_Routine_0801A054(undefined4 *farmer,int amount,uint slot_id)

{
  undefined2 u_val1;
  undefined2 u_val2;
  uint u_val3;
  undefined4 u_val4;
  undefined4 u_val5;
  int i_val6;
  undefined4 u_val7;
  uint u_val8;
  undefined4 u_val9;
  int *p_int10;
  
  if (0x233 < slot_id) {
    *farmer = 0;
    farmer[1] = 0;
    *(undefined2 *)(farmer + 2) = 0;
    *(undefined2 *)((int)farmer + 10) = 0;
  }
  else {
    u_val8 = **(uint **)(amount + 4);
    if ((slot_id == 2) && (u_val8 != 2)) {
      *farmer = *(undefined4 *)(0x1050 + amount);
      farmer[1] = 0;
      *(undefined2 *)(farmer + 2) = 0x80;
      *(undefined2 *)((int)farmer + 10) = 0x58;
    }
    else {
      if (u_val8 == slot_id) {
        u_val3 = (*(uint **)(amount + 4))[1];
      }
      else {
        p_int10 = (int *)(0x1038 + amount);
        u_val7 = Farmer_Routine_0800E324(*p_int10 + 0x10);
        u_val9 = Building_Routine_0800BF14(*p_int10 + 500);
        u_val4 = Building_Routine_0800C560(*p_int10 + 0x410);
        u_val5 = Building_Routine_0800CE64(*p_int10 + 0x5f0);
        u_val3 = ScriptEngine_CalculateSpriteHash(slot_id,u_val7,u_val9,u_val4,u_val5);
      }
      i_val6 = Map_GetMapData(u_val3);
      u_val1 = *(undefined2 *)(i_val6 + 0x20);
      u_val2 = *(undefined2 *)(i_val6 + 0x22);
      if (u_val8 == slot_id) {
        i_val6 = *(int *)(amount + 4);
        Map_GetMapData(*(undefined4 *)(i_val6 + 4));
        u_val9 = 0;
        u_val7 = *(undefined4 *)(i_val6 + 0x2c);
      }
      else {
        u_val9 = *(undefined4 *)(i_val6 + 0x1c);
        u_val7 = *(undefined4 *)(i_val6 + 0x18);
      }
      *farmer = u_val7;
      farmer[1] = u_val9;
      *(undefined2 *)(farmer + 2) = u_val1;
      *(undefined2 *)((int)farmer + 10) = u_val2;
    }
  }
  return farmer;
}

// =============================================================================
// Function: Farmer_Routine_0801A13C @ 0x0801A13C
// =============================================================================
void Farmer_Routine_0801A13C(int farmer,int amount,int slot_id,char flags)

{
  bool b_flag1;
  byte b_flag2;
  int i_val3;
  undefined4 u_val4;
  undefined1 *p_uint5;
  undefined4 *p_uint6;
  ushort *p_uint7;
  uint loop_i;
  undefined4 *p_uint9;
  uint u_val10;
  byte *pbVar11;
  int i_val12;
  int i_val13;
  undefined4 stack_buf_e4 [8];
  undefined4 stack_val_c4;
  undefined4 stack_val_c0;
  ushort stack_buf_bc [2];
  undefined4 stack_val_b8;
  undefined4 stack_val_b4;
  undefined4 stack_val_b0;
  ushort stack_buf_ac [2];
  undefined *puStack_a8;
  undefined4 stack_val_a4;
  undefined *puStack_a0;
  ushort stack_buf_9c [2];
  undefined4 stack_val_98;
  undefined4 stack_val_94;
  undefined4 stack_val_90;
  ushort stack_buf_8c [2];
  undefined4 stack_val_88;
  undefined4 stack_val_84;
  undefined4 stack_val_80;
  ushort stack_buf_7c [2];
  undefined4 stack_val_78;
  undefined4 stack_val_74;
  undefined4 stack_val_70;
  ushort stack_buf_6c [2];
  undefined4 stack_val_68;
  undefined4 stack_val_64;
  undefined4 stack_val_60;
  undefined4 stack_val_5c;
  undefined4 stack_val_58;
  int stack_val_54;
  int stack_val_50;
  int stack_val_4c;
  uint stack_val_48;
  uint stack_val_44;
  uint stack_val_40;
  uint stack_val_3c;
  uint stack_val_38;
  undefined4 *puStack_34;
  undefined4 *puStack_30;
  undefined4 *puStack_2c;
  undefined4 *puStack_28;
  undefined1 *puStack_24;
  
  stack_val_54 = farmer;
  i_val3 = Farmer_Routine_0801A8C0();
  i_val12 = stack_val_54;
  if (*(int *)(stack_val_54 + 0x1048) == i_val3) {
    stack_val_3c = amount << 0x18;
    stack_val_38 = slot_id << 0x18;
    if (flags == '\0') {
      b_flag1 = false;
      goto LAB_0801a7b0;
    }
  }
  *(int *)(stack_val_54 + 0x1048) = i_val3;
  NPC_Routine_080A5D14(*(undefined4 *)(stack_val_54 + 4));
  i_val3 = **(int **)(i_val12 + 4);
  if (i_val3 == 0x2e) {
    stack_val_48 = 1;
  }
  else if (i_val3 < 0x2f) {
    if (i_val3 < 0x2c) goto LAB_0801a1b0;
    stack_val_48 = 0;
  }
  else if (i_val3 == 0x2f) {
    stack_val_48 = 2;
  }
  else {
LAB_0801a1b0:
    stack_val_48 = *(uint *)(*(int *)(i_val12 + 0x1038) + 8);
  }
  stack_val_50 = stack_val_54 + 0x19c;
  stack_val_4c = *(int *)(stack_val_54 + 0x1048);
  loop_i = 0;
  stack_val_3c = amount << 0x18;
  stack_val_38 = slot_id << 0x18;
  do {
    p_uint9 = (undefined4 *)(stack_val_50 + 0x20 + loop_i * 0x84);
    if (*(char *)((int)p_uint9 + 0x83) == '\0') {
      p_uint9[8] = *p_uint9;
      p_uint9[9] = p_uint9[1];
      p_uint9[10] = p_uint9[2];
      p_uint9[0xb] = p_uint9[3];
      p_uint9[0xc] = p_uint9[4];
      p_uint9[0xd] = p_uint9[5];
      p_uint9[0xe] = p_uint9[6];
      p_uint9[0xf] = p_uint9[7];
      p_uint9[0x10] = *p_uint9;
      p_uint9[0x11] = p_uint9[1];
      p_uint9[0x12] = p_uint9[2];
      p_uint9[0x13] = p_uint9[3];
      p_uint9[0x14] = p_uint9[4];
      p_uint9[0x15] = p_uint9[5];
      p_uint9[0x16] = p_uint9[6];
      p_uint9[0x17] = p_uint9[7];
      *(undefined1 *)((int)p_uint9 + 0x82) = 1;
    }
    else {
      puStack_24 = (undefined1 *)((int)p_uint9 + 0x82);
      if (4 < stack_val_48) goto LAB_0801a79e;
      switch(*(uint *)(PTR_case_0801A244_0801a240 + stack_val_48 * 4) & 0xfffffffe) {
      case 0x801a244:
        break;
      case 0x801a4bc:
        if (stack_val_4c == 1) {
          u_val10 = stack_val_74 & 0xffffffe0;
          stack_val_74._0_2_ = (ushort)u_val10 | 10;
          stack_val_74._2_2_ = (undefined2)(u_val10 >> 0x10);
          stack_val_74 = CONCAT22(stack_val_74._2_2_,(ushort)0xFFFFFC1F & (ushort)stack_val_74) | 0x280;
          stack_val_70 = 0x6A32;
          p_uint7 = stack_buf_6c;
          puStack_2c = &stack_val_68;
          puStack_24 = (undefined1 *)((int)p_uint9 + 0x82);
          for (p_uint6 = stack_buf_e4; p_uint6 != &stack_val_c4; p_uint6 = (undefined4 *)((int)p_uint6 + 2))
          {
            *(short *)p_uint6 = (short)0x6A32;
          }
          _call_via_r4(p_uint9 + 8,stack_buf_e4,p_uint9,stack_val_74);
          stack_buf_6c[0] = stack_buf_6c[0] & 0xffe0 | 10;
          stack_buf_6c[0] = (ushort)0xFFFFFC1F & stack_buf_6c[0] | 0x280;
          stack_val_68 = 0x6A32;
          if (stack_buf_e4 != &stack_val_c4) {
            u_val4 = *puStack_2c;
            p_uint6 = stack_buf_e4;
            do {
              *(short *)p_uint6 = (short)u_val4;
              p_uint6 = (undefined4 *)((int)p_uint6 + 2);
            } while (p_uint6 != &stack_val_c4);
          }
          goto LAB_0801a6d8;
        }
        if (stack_val_4c < 2) {
          if (stack_val_4c == 0) {
            u_val10 = stack_val_84 & 0xffffffe0;
            stack_val_84._0_2_ = (ushort)u_val10 | 10;
            stack_val_84._2_2_ = (undefined2)(u_val10 >> 0x10);
            stack_val_84 = CONCAT22(stack_val_84._2_2_,(ushort)0xFFFFFC1F & (ushort)stack_val_84) | 0x280;
            stack_val_80 = 0x6A32;
            p_uint7 = stack_buf_7c;
            puStack_30 = &stack_val_78;
            puStack_24 = (undefined1 *)((int)p_uint9 + 0x82);
            for (p_uint6 = stack_buf_e4; p_uint6 != &stack_val_c4; p_uint6 = (undefined4 *)((int)p_uint6 + 2)
                ) {
              *(short *)p_uint6 = (short)0x6A32;
            }
            _call_via_r4(p_uint9 + 8,stack_buf_e4,p_uint9,stack_val_84);
            stack_buf_7c[0] = stack_buf_7c[0] & 0xffe0 | 10;
            stack_buf_7c[0] = (ushort)0xFFFFFC1F & stack_buf_7c[0] | 0x280;
            stack_val_78 = 0x6A32;
            if (stack_buf_e4 != &stack_val_c4) {
              u_val4 = *puStack_30;
              p_uint6 = stack_buf_e4;
              do {
                *(short *)p_uint6 = (short)u_val4;
                p_uint6 = (undefined4 *)((int)p_uint6 + 2);
              } while (p_uint6 != &stack_val_c4);
            }
            goto LAB_0801a6d8;
          }
          puStack_24 = (undefined1 *)((int)p_uint9 + 0x82);
        }
        else if (stack_val_4c == 2) {
          u_val10 = stack_val_64 & 0xffffffe0;
          stack_val_64._0_2_ = (ushort)u_val10 | 10;
          stack_val_64._2_2_ = (undefined2)(u_val10 >> 0x10);
          stack_val_64 = CONCAT22(stack_val_64._2_2_,(ushort)0xFFFFFC1F & (ushort)stack_val_64) | 0x280;
          stack_val_60 = 0x6A32;
          puStack_28 = &stack_val_58;
          puStack_24 = (undefined1 *)((int)p_uint9 + 0x82);
          for (p_uint6 = stack_buf_e4; p_uint6 != &stack_val_c4; p_uint6 = (undefined4 *)((int)p_uint6 + 2))
          {
            *(short *)p_uint6 = (short)0x6A32;
          }
          _call_via_r4(p_uint9 + 8,stack_buf_e4,p_uint9,stack_val_64);
          u_val10 = stack_val_5c & 0xffffffe0;
          stack_val_5c._0_2_ = (ushort)u_val10 | 10;
          stack_val_5c._2_2_ = (undefined2)(u_val10 >> 0x10);
          stack_val_5c = CONCAT22(stack_val_5c._2_2_,(ushort)0xFFFFFC1F & (ushort)stack_val_5c) | 0x280;
          *puStack_28 = 0x2529;
          for (p_uint6 = stack_buf_e4; p_uint6 != &stack_val_c4; p_uint6 = (undefined4 *)((int)p_uint6 + 2))
          {
            *(short *)p_uint6 = (short)stack_val_58;
          }
          _call_via_r4(p_uint9 + 0x10,stack_buf_e4,p_uint9,stack_val_5c);
        }
        else {
          puStack_24 = (undefined1 *)((int)p_uint9 + 0x82);
          if (stack_val_4c == 3) {
            u_val10 = stack_val_94 & 0xffffffe0;
            stack_val_94._0_2_ = (ushort)u_val10 | 10;
            stack_val_94._2_2_ = (undefined2)(u_val10 >> 0x10);
            stack_val_94 = CONCAT22(stack_val_94._2_2_,(ushort)0xFFFFFC1F & (ushort)stack_val_94) | 0x280;
            stack_val_90 = 0x2529;
            p_uint7 = stack_buf_8c;
            for (p_uint6 = stack_buf_e4; p_uint6 != &stack_val_c4; p_uint6 = (undefined4 *)((int)p_uint6 + 2)
                ) {
              *(short *)p_uint6 = (short)0x2529;
            }
            _call_via_r4(p_uint9 + 8,stack_buf_e4,p_uint9,stack_val_94);
            stack_buf_8c[0] = stack_buf_8c[0] & 0xffe0 | 10;
            stack_buf_8c[0] = (ushort)0xFFFFFC1F & stack_buf_8c[0] | 0x280;
            stack_val_88 = 0x6A32;
            for (p_uint6 = stack_buf_e4; p_uint6 != &stack_val_c4; p_uint6 = (undefined4 *)((int)p_uint6 + 2)
                ) {
              *(short *)p_uint6 = (short)0x6A32;
            }
            goto LAB_0801a6d8;
          }
        }
        goto LAB_0801a79e;
      }
      if (stack_val_4c == 1) {
        gba_memcpy(p_uint9 + 8,p_uint9,0x20);
        p_uint7 = stack_buf_ac;
        stack_buf_ac[0] = stack_buf_ac[0] & 0xffe0 | 3;
        stack_buf_ac[0] = (ushort)0xFFFFFC1F & stack_buf_ac[0] | 0x360;
        puStack_a8 = 0x2120;
        puStack_24 = (undefined1 *)((int)p_uint9 + 0x82);
        for (p_uint6 = stack_buf_e4; p_uint6 != &stack_val_c4; p_uint6 = (undefined4 *)((int)p_uint6 + 2)) {
          *(undefined2 *)p_uint6 = 0x2120;
        }
LAB_0801a6d8:
        _call_via_r4(p_uint9 + 0x10,stack_buf_e4,p_uint9,*(undefined4 *)p_uint7);
      }
      else {
        if (1 < stack_val_4c) {
          if (stack_val_4c == 2) {
            u_val10 = stack_val_a4 & 0xffffffe0;
            stack_val_a4._0_2_ = (ushort)u_val10 | 3;
            stack_val_a4._2_2_ = (undefined2)(u_val10 >> 0x10);
            stack_val_a4 = CONCAT22(stack_val_a4._2_2_,(ushort)0xFFFFFC1F & (ushort)stack_val_a4) | 0x360;
            puStack_a0 = 0x2120;
            p_uint7 = stack_buf_9c;
            puStack_34 = &stack_val_98;
            puStack_24 = (undefined1 *)((int)p_uint9 + 0x82);
            for (p_uint6 = stack_buf_e4; p_uint6 != &stack_val_c4; p_uint6 = (undefined4 *)((int)p_uint6 + 2)
                ) {
              *(undefined2 *)p_uint6 = 0x2120;
            }
            _call_via_r4(p_uint9 + 8,stack_buf_e4,p_uint9,stack_val_a4);
            stack_buf_9c[0] = stack_buf_9c[0] & 0xffe0 | 10;
            stack_buf_9c[0] = (ushort)0xFFFFFC1F & stack_buf_9c[0] | 0x280;
            stack_val_98 = 0x2529;
            if (stack_buf_e4 != &stack_val_c4) {
              u_val4 = *puStack_34;
              p_uint6 = stack_buf_e4;
              do {
                *(short *)p_uint6 = (short)u_val4;
                p_uint6 = (undefined4 *)((int)p_uint6 + 2);
              } while (p_uint6 != &stack_val_c4);
            }
          }
          else {
            puStack_24 = (undefined1 *)((int)p_uint9 + 0x82);
            if (stack_val_4c != 3) goto LAB_0801a79e;
            u_val10 = stack_val_c4 & 0xffffffe0;
            stack_val_c4._0_2_ = (ushort)u_val10 | 10;
            stack_val_c4._2_2_ = (undefined2)(u_val10 >> 0x10);
            stack_val_c4 = CONCAT22(stack_val_c4._2_2_,(ushort)0xFFFFFC1F & (ushort)stack_val_c4) | 0x280;
            stack_val_c0 = 0x2529;
            p_uint7 = stack_buf_bc;
            for (p_uint6 = stack_buf_e4; p_uint6 != &stack_val_c4; p_uint6 = (undefined4 *)((int)p_uint6 + 2)
                ) {
              *(short *)p_uint6 = (short)0x2529;
            }
            _call_via_r4(p_uint9 + 8,stack_buf_e4,p_uint9,stack_val_c4);
            stack_buf_bc[0] = stack_buf_bc[0] & 0xffe0 | 9;
            stack_buf_bc[0] = (ushort)0xFFFFFC1F & stack_buf_bc[0] | 0x2a0;
            stack_val_b8 = 0x1BAA;
            for (p_uint6 = stack_buf_e4; p_uint6 != &stack_val_c4; p_uint6 = (undefined4 *)((int)p_uint6 + 2)
                ) {
              *(short *)p_uint6 = (short)0x1BAA;
            }
          }
          goto LAB_0801a6d8;
        }
        if (stack_val_4c == 0) {
          u_val10 = stack_val_b4 & 0xffffffe0;
          stack_val_b4._0_2_ = (ushort)u_val10 | 9;
          stack_val_b4._2_2_ = (undefined2)(u_val10 >> 0x10);
          stack_val_b4 = CONCAT22(stack_val_b4._2_2_,(ushort)0xFFFFFC1F & (ushort)stack_val_b4) | 0x2a0;
          stack_val_b0 = 0x1BAA;
          puStack_24 = (undefined1 *)((int)p_uint9 + 0x82);
          for (p_uint6 = stack_buf_e4; p_uint6 != &stack_val_c4; p_uint6 = (undefined4 *)((int)p_uint6 + 2))
          {
            *(short *)p_uint6 = (short)0x1BAA;
          }
          _call_via_ip(p_uint9 + 8,stack_buf_e4,p_uint9,stack_val_b4);
          gba_memcpy(p_uint9 + 0x10,p_uint9,0x20);
        }
        else {
          puStack_24 = (undefined1 *)((int)p_uint9 + 0x82);
        }
      }
LAB_0801a79e:
      *puStack_24 = 1;
    }
    loop_i = loop_i + 1;
  } while (loop_i < 0x16);
  b_flag1 = true;
LAB_0801a7b0:
  loop_i = stack_val_3c >> 0x18;
  u_val10 = stack_val_38 >> 0x18;
  u_val4 = Farmer_Routine_0800E324(*(int *)(stack_val_54 + 0x1038) + 0x10);
  b_flag2 = NPC_Routine_080A4650(loop_i,u_val10,u_val4,*(undefined4 *)(stack_val_54 + 0x1048));
  pbVar11 = (byte *)(stack_val_54 + 0x104C);
  if ((*pbVar11 != b_flag2) || (b_flag1)) {
    *pbVar11 = b_flag2;
    NPC_Routine_080A5DFC(*(undefined4 *)(stack_val_54 + 4),(uint)*pbVar11,0x1e - (uint)*pbVar11);
    b_flag2 = *pbVar11;
    loop_i = 0;
    stack_val_40 = b_flag2 & 0x1f;
    p_uint5 = (undefined1 *)(stack_val_54 + 0x23E);
    i_val13 = stack_val_54 + 0x1fc;
    i_val3 = stack_val_54 + 0x1dc;
    i_val12 = stack_val_54 + 0x23E + -0x22;
    do {
      u_val10 = stack_val_44 & 0xFFFFFF00 | (stack_val_44 & 0xffffffe0 | stack_val_40) & 0xff;
      stack_val_44 = u_val10 & 0xFFFF0000 |
                  u_val10 & 0xFFFFFC1F & 0xffff | (0x1e - b_flag2 & 0x1f) << 5;
      _call_via_r4(i_val12,i_val3,i_val13,stack_val_44);
      *p_uint5 = 1;
      p_uint5 = p_uint5 + 0x84;
      i_val13 = i_val13 + 0x84;
      i_val3 = i_val3 + 0x84;
      i_val12 = i_val12 + 0x84;
      loop_i = loop_i + 1;
    } while (loop_i < 0x16);
  }
  return;
}

// =============================================================================
// Function: Farmer_Routine_0801A8C0 @ 0x0801A8C0
// =============================================================================
u32 Farmer_Routine_0801A8C0(undefined4 farmer,uint amount)

{
  undefined4 u_val1;
  
  if (amount < 6) {
    u_val1 = 3;
  }
  else if (amount < 0xc) {
    u_val1 = 0;
  }
  else if (amount < 0x12) {
    u_val1 = 1;
  }
  else {
    u_val1 = 2;
  }
  return u_val1;
}

// =============================================================================
// Function: Farmer_Routine_0801B498 @ 0x0801B498
// =============================================================================
u32 Farmer_Routine_0801B498(int farmer,ushort *amount,short *slot_id)

{
  int *p_int1;
  int i_val2;
  int i_val3;
  int i_val4;
  int i_val5;
  int i_val6;
  short stack_val_34;
  short stack_val_32;
  short stack_val_30;
  short stack_val_2e;
  uint stack_val_2c;
  uint stack_val_28;
  int stack_val_24;
  
  stack_val_2c = 100;
  stack_val_28 = 1;
  stack_val_24 = farmer + 8;
  p_int1 = (int *)(farmer + 0xc);
  do {
    i_val5 = *p_int1;
    if (((i_val5 != 0) && ((*amount & 0x3ff) == *(ushort *)(i_val5 + 4))) &&
       (_call_via_r2(&stack_val_34,i_val5,*(undefined4 *)(*(int *)(i_val5 + 0x14) + 0xc)),
       ((int)*slot_id - (int)stack_val_30 & (int)stack_val_34 - (int)slot_id[2] &
        (int)slot_id[1] - (int)stack_val_2e & (int)stack_val_32 - (int)slot_id[3]) < 0)) {
      if (stack_val_2c != 100) {
        i_val3 = *(int *)(stack_val_24 + stack_val_2c * 4);
        i_val6 = (int)(short)((ushort)((amount[1] & 0x3FF) << 6) |
                            (ushort)(*(byte *)((int)amount + 1) >> 2));
        i_val2 = *(short *)(i_val3 + 10) - i_val6;
        if (i_val2 < 0) {
          i_val2 = -i_val2;
        }
        i_val4 = (int)(short)((ushort)((amount[2] & 0x3FF) << 6) |
                            (ushort)(*(byte *)((int)amount + 3) >> 2));
        i_val3 = *(short *)(i_val3 + 0xe) - i_val4;
        if (i_val3 < 0) {
          i_val3 = -i_val3;
        }
        i_val6 = *(short *)(i_val5 + 10) - i_val6;
        if (i_val6 < 0) {
          i_val6 = -i_val6;
        }
        i_val4 = *(short *)(i_val5 + 0xe) - i_val4;
        if (i_val4 < 0) {
          i_val4 = -i_val4;
        }
        if (i_val2 * i_val2 + i_val3 * i_val3 < i_val6 * i_val6 + i_val4 * i_val4) goto LAB_0801b59c;
      }
      stack_val_2c = stack_val_28;
    }
LAB_0801b59c:
    p_int1 = p_int1 + 1;
    stack_val_28 = stack_val_28 + 1;
    if (99 < stack_val_28) {
      return stack_val_2c;
    }
  } while( true );
}

// =============================================================================
// Function: Farmer_Routine_0801B9E8 @ 0x0801B9E8
// =============================================================================
u32 Farmer_Routine_0801B9E8(int farmer,undefined4 amount,int slot_id,char flags)

{
  int i_val1;
  ushort *p_uint2;
  ushort *p_uint3;
  ushort *p_uint4;
  undefined1 *p_uint5;
  undefined *p_uint6;
  ushort *p_uint7;
  undefined4 u_val8;
  uint u_val9;
  uint *p_uint10;
  undefined4 *p_uint11;
  int i_val12;
  uint u_val13;
  ushort *p_uint14;
  ushort stack_buf_e0 [16];
  byte stack_bytes_c0 [4];
  undefined4 stack_val_bc;
  ushort stack_buf_b8 [2];
  undefined4 stack_val_b4;
  undefined4 stack_val_b0;
  undefined4 stack_val_ac;
  undefined4 stack_val_a8;
  undefined *puStack_a4;
  undefined4 stack_val_a0;
  undefined *puStack_9c;
  ushort stack_buf_98 [2];
  undefined4 stack_val_94;
  undefined4 stack_val_90;
  undefined4 stack_val_8c;
  ushort stack_buf_88 [2];
  undefined4 stack_val_84;
  undefined4 stack_val_80;
  undefined4 stack_val_7c;
  ushort stack_buf_78 [2];
  undefined4 stack_val_74;
  undefined4 stack_val_70;
  undefined4 stack_val_6c;
  ushort stack_buf_68 [2];
  undefined4 stack_val_64;
  undefined4 stack_val_60;
  undefined4 stack_val_5c;
  undefined4 stack_val_58;
  ushort stack_buf_54 [2];
  int stack_val_50;
  uint stack_val_4c;
  uint stack_val_48;
  uint stack_val_44;
  int stack_val_40;
  uint *puStack_3c;
  undefined4 *puStack_38;
  undefined4 *puStack_34;
  undefined4 *puStack_30;
  ushort *puStack_2c;
  ushort *puStack_28;
  uint stack_val_24;
  ushort *p_uint15;
  ushort *p_uint16;
  ushort *p_uint17;
  ushort *p_uint18;
  ushort *p_uint19;
  ushort *p_uint20;
  ushort *p_uint21;
  ushort *p_uint22;
  ushort *p_uint23;
  ushort *p_uint24;
  
  p_uint14 = stack_buf_e0;
  p_uint15 = stack_buf_e0;
  p_uint16 = stack_buf_e0;
  p_uint17 = stack_buf_e0;
  p_uint18 = stack_buf_e0;
  p_uint2 = stack_buf_e0;
  p_uint19 = stack_buf_e0;
  p_uint20 = stack_buf_e0;
  p_uint21 = stack_buf_e0;
  p_uint3 = stack_buf_e0;
  p_uint22 = stack_buf_e0;
  p_uint4 = stack_buf_e0;
  p_uint23 = stack_buf_e0;
  p_uint24 = stack_buf_e0;
  stack_val_50 = slot_id;
  i_val1 = Map_GetMapData(*(undefined4 *)(*(int *)(farmer + 4) + 4));
  if (*(char *)(i_val1 + 0x24) != '\0') {
    i_val1 = farmer + 0x1bc + stack_val_50 * 0x84;
    gba_memcpy(i_val1,amount,0x20);
    p_uint5 = (undefined1 *)(i_val1 + 0x82);
    *p_uint5 = 1;
    *(char *)(i_val1 + 0x83) = flags;
    goto LAB_0801c0b6;
  }
  i_val1 = **(int **)(farmer + 4);
  if (i_val1 == 0x2e) {
    stack_val_24 = 1;
  }
  else if (i_val1 < 0x2f) {
    if (i_val1 < 0x2c) goto LAB_0801ba68;
    stack_val_24 = 0;
  }
  else if (i_val1 == 0x2f) {
    stack_val_24 = 2;
  }
  else {
LAB_0801ba68:
    stack_val_24 = *(uint *)(*(int *)(farmer + 0x1038) + 8);
  }
  stack_val_4c = (uint)*(byte *)(farmer + 0x104C);
  i_val12 = *(int *)(farmer + 0x1048);
  stack_val_48 = 0x1e - stack_val_4c;
  i_val1 = stack_val_50 * 0x20;
  p_uint11 = (undefined4 *)(farmer + 0x1bc + stack_val_50 * 0x84);
  gba_memcpy(p_uint11,amount,0x20);
  p_uint7 = (ushort *)((int)p_uint11 + 0x82);
  *(undefined1 *)p_uint7 = 1;
  *(char *)((int)p_uint11 + 0x83) = flags;
  stack_val_40 = i_val1;
  if (flags == '\0') {
    p_uint11[8] = *p_uint11;
    p_uint11[9] = p_uint11[1];
    p_uint11[10] = p_uint11[2];
    p_uint11[0xb] = p_uint11[3];
    p_uint11[0xc] = p_uint11[4];
    p_uint11[0xd] = p_uint11[5];
    p_uint11[0xe] = p_uint11[6];
    p_uint11[0xf] = p_uint11[7];
    p_uint11[0x10] = *p_uint11;
    p_uint11[0x11] = p_uint11[1];
    p_uint11[0x12] = p_uint11[2];
    p_uint11[0x13] = p_uint11[3];
    p_uint11[0x14] = p_uint11[4];
    p_uint11[0x15] = p_uint11[5];
    p_uint11[0x16] = p_uint11[6];
    p_uint11[0x17] = p_uint11[7];
    *(undefined1 *)p_uint7 = 1;
  }
  else {
    puStack_28 = p_uint7;
    if (stack_val_24 < 5) {
      u_val13 = *(uint *)(PTR_case_0801BB1C_0801bb18 + stack_val_24 * 4);
      switch(u_val13 & 0xfffffffe) {
      case 0x801bb1c:
        p_uint6 = PTR_case_0801BB1C_0801bb18;
        u_val9 = stack_val_24;
        if (u_val13 == 0) {
          return 0;
        }
code_r0x0801bb6c:
        *(byte *)p_uint7 = -(char)u_val13 & (byte)p_uint6 | (byte)u_val9;
        *p_uint7 = (ushort)0xFFFFFC1F & *p_uint7 | 0x280;
        stack_val_bc = 0x2529;
        p_uint10 = (uint *)stack_buf_b8;
        for (; p_uint14 != p_uint7; p_uint14 = p_uint14 + 1) {
          *p_uint14 = (ushort)0x2529;
        }
        _call_via_r4(p_uint11 + 8,stack_buf_e0,p_uint11,*(undefined4 *)p_uint7);
        stack_buf_b8[0] = stack_buf_b8[0] & 0xffe0 | 9;
        stack_buf_b8[0] = (ushort)0xFFFFFC1F & stack_buf_b8[0] | 0x2a0;
        stack_val_b4 = 0x1BAA;
        for (; p_uint15 != (ushort *)stack_bytes_c0; p_uint15 = p_uint15 + 1) {
          *p_uint15 = (ushort)0x1BAA;
        }
        break;
      case 0x801bb30:
        if (i_val12 != 1) {
          if (i_val12 < 2) {
            if (i_val12 == 0) {
              u_val13 = stack_val_b0 & 0xffffffe0;
              stack_val_b0._0_2_ = (ushort)u_val13 | 9;
              stack_val_b0._2_2_ = (undefined2)(u_val13 >> 0x10);
              stack_val_b0 = CONCAT22(stack_val_b0._2_2_,(ushort)0xFFFFFC1F & (ushort)stack_val_b0) |
                          0x2a0;
              stack_val_ac = 0x1BAA;
              puStack_28 = (ushort *)((int)p_uint11 + 0x82);
              for (; p_uint16 != (ushort *)stack_bytes_c0; p_uint16 = p_uint16 + 1) {
                *p_uint16 = (ushort)0x1BAA;
              }
              _call_via_r4(p_uint11 + 8,stack_buf_e0,p_uint11,stack_val_b0);
              gba_memcpy(p_uint11 + 0x10,p_uint11,0x20);
            }
            else {
              puStack_28 = (ushort *)((int)p_uint11 + 0x82);
            }
          }
          else {
            if (i_val12 == 2) {
              u_val13 = stack_val_a0 & 0xffffffe0;
              stack_val_a0._0_2_ = (ushort)u_val13 | 3;
              stack_val_a0._2_2_ = (undefined2)(u_val13 >> 0x10);
              stack_val_a0 = CONCAT22(stack_val_a0._2_2_,(ushort)0xFFFFFC1F & (ushort)stack_val_a0) |
                          0x360;
              puStack_9c = 0x2120;
              puStack_3c = (uint *)stack_buf_98;
              puStack_38 = &stack_val_94;
              puStack_28 = (ushort *)((int)p_uint11 + 0x82);
              for (; p_uint18 != (ushort *)stack_bytes_c0; p_uint18 = p_uint18 + 1) {
                *p_uint18 = 0x2120;
              }
              _call_via_r4(p_uint11 + 8,stack_buf_e0,p_uint11,stack_val_a0);
              stack_buf_98[0] = stack_buf_98[0] & 0xffe0 | 10;
              stack_buf_98[0] = (ushort)0xFFFFFC1F & stack_buf_98[0] | 0x280;
              stack_val_94 = 0x2529;
              p_uint10 = puStack_3c;
              if (stack_buf_e0 != (ushort *)stack_bytes_c0) {
                u_val8 = *puStack_38;
                do {
                  *p_uint2 = (ushort)u_val8;
                  p_uint2 = p_uint2 + 1;
                } while (p_uint2 != (ushort *)stack_bytes_c0);
              }
              break;
            }
            puStack_28 = (ushort *)((int)p_uint11 + 0x82);
            if (i_val12 == 3) {
              p_uint7 = (ushort *)stack_bytes_c0;
              u_val13 = 0x20;
              p_uint6 = (undefined *)(uint)stack_bytes_c0[0];
              u_val9 = 10;
              goto code_r0x0801bb6c;
            }
          }
          goto LAB_0801c054;
        }
        gba_memcpy(p_uint11 + 8,p_uint11,0x20);
        u_val13 = stack_val_a8 & 0xffffffe0;
        stack_val_a8._0_2_ = (ushort)u_val13 | 3;
        stack_val_a8._2_2_ = (undefined2)(u_val13 >> 0x10);
        stack_val_a8 = CONCAT22(stack_val_a8._2_2_,(ushort)0xFFFFFC1F & (ushort)stack_val_a8) | 0x360;
        puStack_a4 = 0x2120;
        puStack_28 = (ushort *)((int)p_uint11 + 0x82);
        for (; u_val13 = stack_val_a8, p_uint17 != (ushort *)stack_bytes_c0; p_uint17 = p_uint17 + 1) {
          *p_uint17 = 0x2120;
        }
        goto LAB_0801bf92;
      case 0x801bd88:
        if (i_val12 != 1) {
          if (i_val12 < 2) {
            if (i_val12 == 0) {
              u_val13 = stack_val_80 & 0xffffffe0;
              stack_val_80._0_2_ = (ushort)u_val13 | 10;
              stack_val_80._2_2_ = (undefined2)(u_val13 >> 0x10);
              stack_val_80 = CONCAT22(stack_val_80._2_2_,(ushort)0xFFFFFC1F & (ushort)stack_val_80) |
                          0x280;
              stack_val_7c = 0x6A32;
              puStack_34 = &stack_val_74;
              puStack_28 = (ushort *)((int)p_uint11 + 0x82);
              for (; p_uint21 != (ushort *)stack_bytes_c0; p_uint21 = p_uint21 + 1) {
                *p_uint21 = (ushort)0x6A32;
              }
              _call_via_r4(p_uint11 + 8,stack_buf_e0,p_uint11,stack_val_80);
              stack_buf_78[0] = stack_buf_78[0] & 0xffe0 | 10;
              stack_buf_78[0] = (ushort)0xFFFFFC1F & stack_buf_78[0] | 0x280;
              stack_val_74 = 0x6A32;
              p_uint10 = (uint *)stack_buf_78;
              if (stack_buf_e0 != (ushort *)stack_bytes_c0) {
                u_val8 = *puStack_34;
                do {
                  *p_uint3 = (ushort)u_val8;
                  p_uint3 = p_uint3 + 1;
                } while (p_uint3 != (ushort *)stack_bytes_c0);
              }
              break;
            }
            puStack_28 = (ushort *)((int)p_uint11 + 0x82);
          }
          else if (i_val12 == 2) {
            u_val13 = stack_val_60 & 0xffffffe0;
            stack_val_60._0_2_ = (ushort)u_val13 | 10;
            stack_val_60._2_2_ = (undefined2)(u_val13 >> 0x10);
            stack_val_60 = CONCAT22(stack_val_60._2_2_,(ushort)0xFFFFFC1F & (ushort)stack_val_60) | 0x280;
            stack_val_5c = 0x6A32;
            puStack_2c = stack_buf_54;
            puStack_28 = (ushort *)((int)p_uint11 + 0x82);
            for (; p_uint23 != (ushort *)stack_bytes_c0; p_uint23 = p_uint23 + 1) {
              *p_uint23 = (ushort)0x6A32;
            }
            _call_via_r4(p_uint11 + 8,stack_buf_e0,p_uint11,stack_val_60);
            u_val13 = stack_val_58 & 0xffffffe0;
            stack_val_58._0_2_ = (ushort)u_val13 | 10;
            stack_val_58._2_2_ = (undefined2)(u_val13 >> 0x10);
            stack_val_58 = CONCAT22(stack_val_58._2_2_,(ushort)0xFFFFFC1F & (ushort)stack_val_58) | 0x280;
            *(undefined4 *)puStack_2c = 0x2529;
            for (; p_uint24 != (ushort *)stack_bytes_c0; p_uint24 = p_uint24 + 1) {
              *p_uint24 = stack_buf_54[0];
            }
            _call_via_r4(p_uint11 + 0x10,stack_buf_e0,p_uint11,stack_val_58);
          }
          else {
            puStack_28 = (ushort *)((int)p_uint11 + 0x82);
            if (i_val12 == 3) {
              u_val13 = stack_val_90 & 0xffffffe0;
              stack_val_90._0_2_ = (ushort)u_val13 | 10;
              stack_val_90._2_2_ = (undefined2)(u_val13 >> 0x10);
              stack_val_90 = CONCAT22(stack_val_90._2_2_,(ushort)0xFFFFFC1F & (ushort)stack_val_90) |
                          0x280;
              stack_val_8c = 0x2529;
              for (; p_uint19 != (ushort *)stack_bytes_c0; p_uint19 = p_uint19 + 1) {
                *p_uint19 = (ushort)0x2529;
              }
              _call_via_r4(p_uint11 + 8,stack_buf_e0,p_uint11,stack_val_90);
              stack_buf_88[0] = stack_buf_88[0] & 0xffe0 | 10;
              stack_buf_88[0] = (ushort)0xFFFFFC1F & stack_buf_88[0] | 0x280;
              stack_val_84 = 0x6A32;
              for (; p_uint10 = (uint *)stack_buf_88, p_uint20 != (ushort *)stack_bytes_c0;
                  p_uint20 = p_uint20 + 1) {
                *p_uint20 = (ushort)0x6A32;
              }
              break;
            }
          }
          goto LAB_0801c054;
        }
        u_val13 = stack_val_70 & 0xffffffe0;
        stack_val_70._0_2_ = (ushort)u_val13 | 10;
        stack_val_70._2_2_ = (undefined2)(u_val13 >> 0x10);
        stack_val_70 = CONCAT22(stack_val_70._2_2_,(ushort)0xFFFFFC1F & (ushort)stack_val_70) | 0x280;
        stack_val_6c = 0x6A32;
        puStack_30 = &stack_val_64;
        puStack_28 = (ushort *)((int)p_uint11 + 0x82);
        for (; p_uint22 != (ushort *)stack_bytes_c0; p_uint22 = p_uint22 + 1) {
          *p_uint22 = (ushort)0x6A32;
        }
        _call_via_r4(p_uint11 + 8,stack_buf_e0,p_uint11,stack_val_70);
        stack_buf_68[0] = stack_buf_68[0] & 0xffe0 | 10;
        stack_buf_68[0] = (ushort)0xFFFFFC1F & stack_buf_68[0] | 0x280;
        stack_val_64 = 0x6A32;
        p_uint10 = (uint *)stack_buf_68;
        if (stack_buf_e0 != (ushort *)stack_bytes_c0) {
          u_val8 = *puStack_30;
          do {
            *p_uint4 = (ushort)u_val8;
            p_uint4 = p_uint4 + 1;
          } while (p_uint4 != (ushort *)stack_bytes_c0);
        }
      }
      u_val13 = *p_uint10;
LAB_0801bf92:
      _call_via_r4(p_uint11 + 0x10,stack_buf_e0,p_uint11,u_val13);
    }
LAB_0801c054:
    *(undefined1 *)puStack_28 = 1;
  }
  i_val1 = farmer + 0x1bc + (stack_val_40 + stack_val_50) * 4;
  u_val13 = stack_val_44 & 0xFFFFFF00 | stack_val_44 & 0xe0 | stack_val_4c & 0x1f;
  stack_val_44 = u_val13 & 0xFFFF0000 | 0xFFFFFC1F & u_val13 & 0xffff | (stack_val_48 & 0x1f) << 5;
  _call_via_r4(i_val1 + 0x60,i_val1 + 0x20,i_val1 + 0x40,stack_val_44);
  p_uint5 = (undefined1 *)(i_val1 + 0x82);
  *p_uint5 = 1;
LAB_0801c0b6:
  return (p_uint5);
}

// =============================================================================
// Function: Farmer_Routine_0801C0F8 @ 0x0801C0F8
// =============================================================================
u32 Farmer_Routine_0801C0F8(int farmer,ushort *amount,int *slot_id)

{
  short s_val1;
  short s_val2;
  int i_val3;
  uint u_val4;
  uint u_val5;
  uint u_val6;
  undefined4 u_val7;
  
  u_val7 = 0;
  if ((*amount & 0x3ff) == 2) {
    i_val3 = (int)(short)((ushort)((amount[1] & 0x3FF) << 6) |
                        (ushort)(*(byte *)((int)amount + 1) >> 2));
    if (i_val3 < 0) {
      i_val3 = i_val3 + 7;
    }
    u_val5 = i_val3 >> 3;
    i_val3 = (int)(short)((ushort)((amount[2] & 0x3FF) << 6) |
                        (ushort)(*(byte *)((int)amount + 3) >> 2));
    if (i_val3 < 0) {
      i_val3 = i_val3 + 7;
    }
    u_val4 = i_val3 >> 3;
    if ((((0x21 < u_val5) && (0x15 < u_val4)) && (u_val5 < 0x78)) && (u_val4 < 0x48)) {
      u_val6 = u_val5 - 0x22 >> 1;
      u_val5 = u_val4 - 0x16 >> 1;
      *slot_id = *(int *)(farmer + 0x1038) + 0x9DC + (u_val6 + u_val5 * 0x2b) * 4;
      s_val1 = (short)u_val6;
      *(short *)(slot_id + 1) = s_val1 * 2 + 0x22;
      s_val2 = (short)u_val5;
      *(short *)((int)slot_id + 6) = s_val2 * 2 + 0x16;
      *(short *)(slot_id + 2) = s_val1;
      *(short *)((int)slot_id + 10) = s_val2;
      u_val7 = 1;
    }
  }
  return u_val7;
}

// =============================================================================
// Function: Farmer_Routine_0801C198 @ 0x0801C198
// =============================================================================
u32 Farmer_Routine_0801C198(int farmer,ushort *amount,short *slot_id)

{
  short s_val1;
  short s_val2;
  int i_val3;
  uint u_val4;
  uint u_val5;
  uint u_val6;
  int i_val7;
  undefined4 u_val8;
  
  u_val8 = 0;
  if (0x1FF < (*amount & 0x3ff) - 0x34) goto LAB_0801c28c;
  i_val7 = *(int *)(farmer + 0x1038) + 0x2E58;
  i_val3 = (int)(short)((ushort)((amount[1] & 0x3FF) << 6) |
                      (ushort)(*(byte *)((int)amount + 1) >> 2));
  if (i_val3 < 0) {
    i_val3 = i_val3 + 7;
  }
  u_val6 = i_val3 >> 3;
  i_val3 = (int)(short)((ushort)((amount[2] & 0x3FF) << 6) |
                      (ushort)(*(byte *)((int)amount + 3) >> 2));
  if (i_val3 < 0) {
    i_val3 = i_val3 + 7;
  }
  u_val5 = i_val3 >> 3;
  u_val4 = NPC_Routine_0809D8A0(i_val7);
  if (u_val4 < 5) {
    switch(*(uint *)(u_val4 * 4 + gInlineTable_0801C220) & 0xfffffffe) {
    case 0x801c234:
      break;
    case 0x801c23a:
      break;
    case 0x801c240:
      goto case_0801C240;
    }
  }
  else {
case_0801C240:
  }
  if ((1 < u_val6) && (6 < u_val5)) {
    i_val3 = NPC_Routine_0809D8A4(i_val7);
    if (u_val6 < i_val3 * 2 + 2U) {
      i_val3 = NPC_Routine_0809D8B8(i_val7);
      if (u_val5 < i_val3 * 2 + 7U) {
        s_val1 = (short)(u_val6 - 2 >> 1);
        *slot_id = s_val1 * 2 + 2;
        s_val2 = (short)(u_val5 - 7 >> 1);
        slot_id[1] = s_val2 * 2 + 7;
        slot_id[2] = s_val1;
        slot_id[3] = s_val2;
        u_val8 = 1;
      }
    }
  }
LAB_0801c28c:
  return u_val8;
}

// =============================================================================
// Function: Farmer_Routine_0801C29C @ 0x0801C29C
// =============================================================================
u32 Farmer_Routine_0801C29C(int *farmer,ushort *amount)

{
  bool b_flag1;
  char c_char2;
  uint loop_i;
  undefined4 u_val4;
  int i_val5;
  int i_val6;
  int i_val7;
  byte *pbVar8;
  uint u_val9;
  int *p_int10;
  int i_val11;
  int i_val12;
  undefined4 stack_val_24;
  undefined2 stack_val_20;
  undefined2 stack_val_1e;
  ushort stack_val_1c;
  ushort stack_val_1a;
  
  i_val12 = 0;
  stack_val_24 = 0;
  stack_val_20 = 0;
  stack_val_1e = 0;
  stack_val_1c = 0;
  stack_val_1a = 0;
  c_char2 = Farmer_Routine_0801C0F8(farmer,amount,&stack_val_24);
  if (c_char2 != '\0') {
    p_int10 = (int *)((int)farmer + 0x1038);
    i_val12 = FieldPlot_TillSoil(stack_val_24,*(int *)(*p_int10 + 8) == 0);
    loop_i = _call_via_r1(farmer,*(undefined4 *)(*farmer + 0x14));
    if (loop_i == (*amount & 0x3ff)) {
      i_val6 = farmer[1];
      i_val11 = *p_int10 + 0x9DC;
      u_val9 = (uint)stack_val_1c;
      loop_i = (uint)stack_val_1a;
      b_flag1 = false;
      if ((u_val9 < 0x2b) && (loop_i + 1 < 0x19)) {
        b_flag1 = true;
      }
      if (b_flag1) {
        i_val5 = i_val11 + (u_val9 + (loop_i + 1) * 0x2b) * 4;
      }
      else {
        i_val5 = 0;
      }
      i_val7 = loop_i - 1;
      b_flag1 = false;
      if (((-1 < i_val7) && (u_val9 < 0x2b)) && (i_val7 < 0x19)) {
        b_flag1 = true;
      }
      if (b_flag1) {
        i_val7 = i_val11 + (u_val9 + i_val7 * 0x2b) * 4;
      }
      else {
        i_val7 = 0;
      }
      u_val4 = FieldPlot_ResolveBorderTile(i_val11 + (u_val9 + loop_i * 0x2b) * 4,i_val5,i_val7);
      NPC_Routine_080AA6D0(i_val6,stack_val_20,stack_val_1e,stack_val_24,u_val4);
    }
    if (i_val12 == 3) {
      loop_i = 0;
      pbVar8 = (byte *)((int)farmer + 0x1081);
      do {
        if ((*pbVar8 & 3) == 0) {
          *pbVar8 = *pbVar8 & 0xfc | 2;
          i_val6 = 0x1084;
          *(undefined2 *)((int)farmer + 0x1084) = stack_val_20;
          *(undefined2 *)((int)farmer + i_val6 + 2) = stack_val_1e;
          break;
        }
        pbVar8 = pbVar8 + 0xc;
        farmer = farmer + 3;
        loop_i = loop_i + 1;
      } while (loop_i < 4);
    }
  }
  return i_val12;
}

// =============================================================================
// Function: Farmer_Routine_0801C3E0 @ 0x0801C3E0
// =============================================================================
void Farmer_Routine_0801C3E0(int *farmer)

{
  bool b_flag1;
  int *p_int2;
  undefined4 u_val3;
  undefined4 u_val4;
  int i_val5;
  int i_val6;
  byte *pbVar7;
  uint loop_i;
  
  b_flag1 = false;
  loop_i = 0;
  p_int2 = (int *)(0x1088 + (int)farmer);
  pbVar7 = (byte *)((int)farmer + 0x1081);
  do {
    if ((*pbVar7 & 3) == 2) {
      *pbVar7 = *pbVar7 & 0xf0 | 1;
      u_val3 = Dispatcher_Routine_080005D4(0x40);
      u_val4 = _call_via_r1(farmer,*(undefined4 *)(*farmer + 0x68));
      i_val5 = NPC_Routine_080A4A00(u_val3,u_val4,0x86F,farmer,3,0x1a,0);
      i_val6 = *p_int2;
      if ((i_val5 != i_val6) && (i_val6 != 0)) {
        _call_via_r2(i_val6,3,*(undefined4 *)(*(int *)(i_val6 + 0x24) + 8));
      }
      *p_int2 = i_val5;
      b_flag1 = true;
    }
    p_int2 = p_int2 + 3;
    pbVar7 = pbVar7 + 0xc;
    loop_i = loop_i + 1;
  } while (loop_i < 4);
  if (b_flag1) {
    Entity_Routine_08032384(farmer[2],2,0);
  }
  return;
}

// =============================================================================
// Function: Farmer_Routine_0801C49C @ 0x0801C49C
// =============================================================================
u32 Farmer_Routine_0801C49C(int *farmer,ushort *amount,undefined4 *slot_id)

{
  char c_char1;
  int i_val2;
  int i_val3;
  undefined4 u_val4;
  uint u_val5;
  undefined4 u_val6;
  uint u_val7;
  int *p_int8;
  undefined2 stack_val_28;
  undefined2 stack_val_26;
  undefined2 stack_val_24;
  undefined2 stack_val_22;
  
  *slot_id = 0;
  c_char1 = Farmer_Routine_0801C198(farmer,amount,&stack_val_28);
  if (c_char1 == '\0') {
    u_val7 = 0;
  }
  else {
    p_int8 = (int *)((int)farmer + 0x1038);
    i_val2 = *p_int8 + 0x2E58;
    i_val3 = NPC_Routine_0809D8D4(i_val2,stack_val_24,stack_val_22);
    u_val7 = (uint)(i_val3 == 0);
    u_val4 = NPC_Routine_0809D8E8(i_val2,stack_val_24,stack_val_22,*p_int8);
    *slot_id = u_val4;
    u_val5 = _call_via_r1(farmer,*(undefined4 *)(*farmer + 0x14));
    if (u_val5 == (*amount & 0x3ff)) {
      i_val3 = farmer[1];
      u_val4 = NPC_Routine_0809D8D4(i_val2,stack_val_24,stack_val_22);
      u_val6 = NPC_Routine_0809E0AC(i_val2,stack_val_24,stack_val_22);
      NPC_Routine_080AA540(i_val3,stack_val_28,stack_val_26,u_val4,u_val6);
    }
  }
  return u_val7;
}

// =============================================================================
// Function: Farmer_Routine_0801C550 @ 0x0801C550
// =============================================================================
undefined4
Farmer_Routine_0801C550(int *farmer,int amount,uint slot_id,uint flags,byte arg_5,uint arg_6)

{
  ushort u_val1;
  ushort u_val2;
  ushort u_val3;
  int i_val4;
  int *p_int5;
  byte *pbVar6;
  int i_val7;
  int *p_int8;
  undefined2 *apuStack_2c [2];
  uint stack_val_24;
  
  stack_val_24 = arg_6 & 0xffff;
  pbVar6 = (byte *)(*gIWRAM_PedometerStepCount + 0x4DC + amount * 0xc);
  *pbVar6 = *pbVar6 & 0xfc | 1;
  u_val3 = _call_via_r1(farmer,*(undefined4 *)(*farmer + 0x14));
  u_val2 = (ushort)0x3FF;
  u_val1 = (ushort)0xFFFFFC00;
  *(ushort *)(pbVar6 + 2) = u_val1 & *(ushort *)(pbVar6 + 2) | u_val3 & u_val2;
  pbVar6[3] = pbVar6[3] & 3 | (byte)((slot_id & 0x3f) << 2);
  *(ushort *)(pbVar6 + 4) =
       u_val1 & *(ushort *)(pbVar6 + 4) | (ushort)((slot_id & 0xffff) >> 6) & u_val2;
  *(uint *)(pbVar6 + 4) = *(uint *)(pbVar6 + 4) & 0xFC0003FF | (flags & 0xffff) << 10;
  *pbVar6 = *pbVar6 & 0xf3 | (arg_5 & 3) << 2;
  *(undefined2 *)(pbVar6 + 8) = (undefined2)stack_val_24;
  p_int8 = (int *)((int)farmer + amount * 4 + 0x10B0);
  i_val4 = Dispatcher_Routine_080005D4(0x4c);
  p_int5 = (int *)_call_via_r1(farmer,*(undefined4 *)(*farmer + 100));
  NPC_Routine_080A4740(i_val4,farmer,2,0x1b);
  *(undefined4 *)(i_val4 + 0x24) = gRomData_080E602C;
  i_val7 = *p_int5;
  _call_via_r3(apuStack_2c,p_int5,stack_val_24,*(undefined4 *)(i_val7 + 0xc));
  _call_via_r3(i_val4 + 0x28,p_int5,*apuStack_2c[0],*(undefined4 *)(i_val7 + 0x10));
  *(undefined1 *)(i_val4 + 0x48) = 1;
  i_val7 = *p_int8;
  if ((i_val4 != i_val7) && (i_val7 != 0)) {
    _call_via_r2(i_val7,3,*(undefined4 *)(*(int *)(i_val7 + 0x24) + 8));
  }
  *p_int8 = i_val4;
  return;
}

// =============================================================================
// Function: Farmer_Routine_0801C69C @ 0x0801C69C
// =============================================================================
void Farmer_Routine_0801C69C(int farmer,int amount)

{
  int i_val1;
  byte *pbVar2;
  int *p_int3;
  
  pbVar2 = (byte *)(*gIWRAM_PedometerStepCount + 0x4DC + amount * 0xc);
  *pbVar2 = *pbVar2 & 0xfc;
  p_int3 = (int *)(farmer + 0x10B0 + amount * 4);
  i_val1 = *p_int3;
  if ((i_val1 != 0) && (i_val1 != 0)) {
    _call_via_r2(i_val1,3,*(undefined4 *)(*(int *)(i_val1 + 0x24) + 8));
  }
  *p_int3 = 0;
  return;
}

// =============================================================================
// Function: Farmer_Routine_0801C6EC @ 0x0801C6EC
// =============================================================================
u32 Farmer_Routine_0801C6EC(int *farmer,int amount,int slot_id,undefined4 flags)

{
  bool b_flag1;
  int i_val2;
  uint u_val3;
  uint u_val4;
  undefined4 u_val5;
  int i_val6;
  uint loop_i;
  int i_val8;
  ushort *p_uint9;
  int i_val10;
  int i_val11;
  byte *pbVar12;
  int *p_int13;
  int i_val14;
  undefined4 stack_val_2c;
  
  stack_val_2c = 0;
  i_val2 = _call_via_r1(farmer,*(undefined4 *)(*farmer + 0x14));
  i_val10 = 0x9DC;
  if (i_val2 == 2) {
    u_val3 = amount * 2 + 0x22;
    u_val4 = slot_id * 2 + 0x16;
    loop_i = 0;
    pbVar12 = (byte *)((int)farmer + 0x1081);
    p_uint9 = (ushort *)((int)farmer + 0x1084);
    do {
      if ((((*pbVar12 & 3) == 1) && (u_val3 == *p_uint9)) && (u_val4 == p_uint9[1])) {
        if ((*pbVar12 & 0xf) >> 2 != 2) {
          Farmer_Routine_08012464(*(undefined4 *)((int)farmer + 0x1054),0,0xc0);
          *pbVar12 = *pbVar12 & 0xf3 | 8;
          i_val10 = *(int *)(p_uint9 + 2);
          Animal_Routine_0805E860(i_val10 + 0x28,0x873);
          *(undefined1 *)(i_val10 + 0x3c) = 1;
          *(undefined1 *)(i_val10 + 0x3e) = 0;
          *(undefined1 *)(i_val10 + 0x3f) = 1;
          Farmer_Routine_0800EEF8(*(int *)((int)farmer + 0x1038) + 0x1BD8);
        }
        goto LAB_0801c862;
      }
      pbVar12 = pbVar12 + 0xc;
      p_uint9 = p_uint9 + 6;
      loop_i = loop_i + 1;
    } while (loop_i < 4);
    p_int13 = (int *)((int)farmer + 0x1038);
    i_val11 = (slot_id * 0x2b + amount) * 4;
    i_val2 = *p_int13 + 0x9DC + i_val11;
    stack_val_2c = FieldPlot_PlantSeeds(i_val2,flags);
    i_val14 = farmer[1];
    i_val10 = *p_int13 + i_val10;
    i_val6 = slot_id + 1;
    b_flag1 = false;
    if (((-1 < amount) && (-1 < i_val6)) && ((amount < 0x2b && (i_val6 < 0x19)))) {
      b_flag1 = true;
    }
    if (b_flag1) {
      i_val6 = i_val10 + (i_val6 * 0x2b + amount) * 4;
    }
    else {
      i_val6 = 0;
    }
    slot_id = slot_id + -1;
    b_flag1 = false;
    if (((-1 < amount) && (-1 < slot_id)) && ((amount < 0x2b && (slot_id < 0x19)))) {
      b_flag1 = true;
    }
    if (b_flag1) {
      i_val8 = i_val10 + (slot_id * 0x2b + amount) * 4;
    }
    else {
      i_val8 = 0;
    }
    u_val5 = FieldPlot_ResolveBorderTile(i_val10 + i_val11,i_val6,i_val8);
    NPC_Routine_080AA6D0(i_val14,u_val3,u_val4,i_val2,u_val5);
  }
LAB_0801c862:
  return stack_val_2c;
}

// =============================================================================
// Function: Farmer_Routine_0801C874 @ 0x0801C874
// =============================================================================
longlong Farmer_Routine_0801C874(int *farmer,int amount,int slot_id,undefined4 flags)

{
  char c_char1;
  uint u_val2;
  int i_val3;
  
  i_val3 = *(int *)((int)farmer + 0x1038) + 0x9DC + (amount + slot_id * 0x2b) * 4;
  c_char1 = FieldPlot_IsPassable(i_val3);
  if (c_char1 == '\0') {
    u_val2 = Farmer_Routine_0801C6EC(farmer,amount,slot_id,flags);
  }
  else {
    i_val3 = Farmer_Routine_0801740C(i_val3);
    if (i_val3 == 1) {
      amount = amount + -1;
    }
    else if (1 < i_val3) {
      if (i_val3 == 2) {
        slot_id = slot_id + -1;
      }
      else if (i_val3 == 3) {
        amount = amount + -1;
        slot_id = slot_id + -1;
      }
    }
    u_val2 = Farmer_Routine_0801C6EC(farmer,amount,slot_id,flags);
    Farmer_Routine_0801C6EC(farmer,amount + 1,slot_id,flags);
    Farmer_Routine_0801C6EC(farmer,amount,slot_id + 1,flags);
    Farmer_Routine_0801C6EC(farmer,amount + 1,slot_id + 1,flags);
  }
  i_val3 = _call_via_r1(farmer,*(undefined4 *)(*farmer + 0x14));
  if ((i_val3 == 2) && (u_val2 < 9)) {
    switch(*(uint *)(PTR_case_0801C948_0801c944 + u_val2 * 4) & 0xfffffffe) {
    case 0x801c948:
      amount = _PrefetchAbort;
      farmer = _DataAbort;
    case 0x801c96c:
      NPC_Routine_080AB68C(*(undefined4 *)((int)farmer + 0x1028),amount * 0x10 + 0x118,
                    slot_id * 0x10 + 0xc0,3);
      break;
    case 0x801c98c:
      NPC_Routine_080AB68C(*(undefined4 *)((int)farmer + 0x1028),amount * 0x10 + 0x118,
                    slot_id * 0x10 + 0xc0,1);
      break;
    case 0x801c9ac:
      NPC_Routine_080AB68C(*(undefined4 *)((int)farmer + 0x1028),amount * 0x10 + 0x118,
                    slot_id * 0x10 + 0xc0,2);
      break;
    case 0x801c9cc:
      NPC_Routine_080AB68C(*(undefined4 *)((int)farmer + 0x1028),amount * 0x10 + 0x120,
                    slot_id * 0x10 + 0xd0,8);
      break;
    case 0x801c9ec:
      NPC_Routine_080AB68C(*(undefined4 *)((int)farmer + 0x1028),amount * 0x10 + 0x120,
                    slot_id * 0x10 + 0xd0,6);
    }
  }
  return 0;
}

// =============================================================================
// Function: Farmer_Routine_0801CA1C @ 0x0801CA1C
// =============================================================================
u32 Farmer_Routine_0801CA1C(int farmer,undefined4 amount,int slot_id)

{
  char c_char1;
  uint u_val2;
  undefined4 stack_val_34;
  undefined2 stack_val_30;
  undefined2 stack_val_2e;
  undefined2 stack_val_2c;
  undefined2 stack_val_2a;
  char stack_str_28 [4];
  int stack_val_24;
  int stack_val_20;
  int stack_val_1c;
  byte stack_val_18;
  
  stack_val_34 = 0;
  stack_val_30 = 0;
  stack_val_2e = 0;
  stack_val_2c = 0;
  stack_val_2a = 0;
  c_char1 = Farmer_Routine_0801C0F8(farmer,amount,&stack_val_34);
  if (c_char1 == '\0') {
    stack_str_28[0] = '\0';
    stack_val_18 = 1;
    Farmer_Routine_0801D104(farmer,amount,*(undefined1 *)(slot_id + gRomData_080F0800),1,stack_str_28);
    if (stack_str_28[0] != '\0') {
      if (stack_val_24 == 6) {
        NPC_Routine_080AB68C(*(undefined4 *)(farmer + 0x1028),stack_val_20 + 0x10,stack_val_1c + 0x20,6);
      }
      else {
        if (stack_val_24 != 9) {
          u_val2 = 0;
          goto LAB_0801caca;
        }
        NPC_Routine_080AB68C(*(undefined4 *)(farmer + 0x1028),stack_val_20 + 0x18,stack_val_1c + 0x20,9);
      }
    }
    u_val2 = stack_val_18 ^ 1;
  }
  else {
    u_val2 = Farmer_Routine_0801C874(farmer,stack_val_2c,stack_val_2a,*(undefined1 *)(slot_id + gRomData_080F0800));
    u_val2 = u_val2 & 0xff;
  }
LAB_0801caca:
  return u_val2;
}

// =============================================================================
// Function: Farmer_Routine_0801CAD8 @ 0x0801CAD8
// =============================================================================
u32 Farmer_Routine_0801CAD8(int *farmer,ushort *amount,undefined4 *slot_id)

{
  char c_char1;
  int i_val2;
  int i_val3;
  undefined4 u_val4;
  uint u_val5;
  undefined4 u_val6;
  uint u_val7;
  int *p_int8;
  ushort stack_val_28;
  ushort stack_val_26;
  undefined2 stack_val_24;
  undefined2 stack_val_22;
  
  *slot_id = 0;
  c_char1 = Farmer_Routine_0801C198(farmer,amount,&stack_val_28);
  if (c_char1 == '\0') {
    u_val7 = 0;
  }
  else {
    p_int8 = (int *)(0x1038 + (int)farmer);
    i_val2 = *p_int8 + 0x2E58;
    i_val3 = NPC_Routine_0809D8D4(i_val2,stack_val_24,stack_val_22);
    u_val7 = (uint)(i_val3 == 4);
    u_val4 = NPC_Routine_0809D9B4(i_val2,stack_val_24,stack_val_22,*p_int8);
    *slot_id = u_val4;
    u_val5 = _call_via_r1(farmer,*(undefined4 *)(*farmer + 0x14));
    if (u_val5 == (*amount & 0x3ff)) {
      i_val3 = farmer[1];
      u_val4 = NPC_Routine_0809D8D4(i_val2,stack_val_24,stack_val_22);
      u_val6 = NPC_Routine_0809E0AC(i_val2,stack_val_24,stack_val_22);
      NPC_Routine_080AA540(i_val3,stack_val_28,stack_val_26,u_val4,u_val6);
      if (u_val7 != 0) {
        NPC_Routine_080AB68C(*(undefined4 *)(0x1028 + (int)farmer),(uint)stack_val_28 * 8 + 8,
                      (uint)stack_val_26 * 8 + 0x10,5);
      }
    }
  }
  return u_val7;
}

// =============================================================================
// Function: Farmer_Routine_0801CBB0 @ 0x0801CBB0
// =============================================================================
u32 Farmer_Routine_0801CBB0(int *farmer,int amount,int slot_id)

{
  char c_char1;
  undefined1 *p_uint2;
  int i_val3;
  undefined4 u_val4;
  int i_val5;
  int *p_int6;
  uint u_val7;
  uint loop_i;
  uint u_val9;
  uint u_val10;
  undefined1 temp_buf_50 [4];
  int stack_val_4c;
  undefined1 temp_buf_40 [16];
  byte stack_val_30;
  undefined4 stack_val_2c;
  undefined4 stack_val_28;
  int stack_val_24;
  
  u_val9 = 0;
  stack_val_24 = amount;
  if (amount == 2) {
    p_uint2 = (undefined1 *)(gRomData_080F0800 + slot_id);
    loop_i = 0;
    do {
      u_val7 = 0;
      u_val10 = loop_i + 1;
      i_val5 = loop_i * 0xac;
      do {
        i_val3 = FieldPlot_PlantSeeds(*(int *)(0x1038 + (int)farmer) + 0x9DC + i_val5,*p_uint2
                             );
        if (i_val3 != 0) {
          u_val9 = 1;
        }
        u_val9 = (uint)(u_val9 != 0);
        i_val5 = i_val5 + 4;
        u_val7 = u_val7 + 1;
      } while (u_val7 < 0x2b);
      loop_i = u_val10;
    } while (u_val10 < 0x19);
  }
  else {
    p_int6 = (int *)(0x1038 + (int)farmer);
    u_val4 = Farmer_Routine_0800E324(*p_int6 + 0x10);
    i_val5 = *p_int6 + 0x34C8;
    loop_i = 0x60;
    p_uint2 = (undefined1 *)(slot_id + gRomData_080F0800);
    do {
      c_char1 = NPC_Routine_080A1ED4(i_val5,loop_i,u_val4);
      if ((c_char1 != '\0') && (NPC_Routine_080A1CBC(temp_buf_50,i_val5,loop_i), stack_val_4c == stack_val_24)) {
        temp_buf_40[0] = 0;
        stack_val_30 = 1;
        Farmer_Routine_080174C8(*(int *)(0x1038 + (int)farmer) + 0x14,
                      *(int *)(0x1038 + (int)farmer) + 0x34C8,loop_i,u_val4,*p_uint2,1,
                      temp_buf_40);
        u_val9 = -u_val9 >> 0x1f | stack_val_30 ^ 1;
      }
      loop_i = loop_i + 1;
    } while (loop_i < 0x74);
  }
  if (u_val9 != 0) {
    stack_val_2c = 0x3DD;
    stack_val_28 = 0;
    _call_via_r3(farmer,&stack_val_2c,0,*(undefined4 *)(*farmer + 0x140));
  }
  return u_val9;
}

// =============================================================================
// Function: Farmer_Routine_0801CCE4 @ 0x0801CCE4
// =============================================================================
u32 Farmer_Routine_0801CCE4(int *farmer,int amount,int slot_id,undefined4 flags)

{
  bool b_flag1;
  undefined4 u_val2;
  int i_val3;
  undefined4 u_val4;
  int i_val5;
  int i_val6;
  int i_val7;
  int i_val8;
  int i_val9;
  int *p_int10;
  
  p_int10 = (int *)((int)farmer + 0x1038);
  i_val9 = (amount + slot_id * 0x2b) * 4;
  i_val5 = *p_int10 + 0x9DC + i_val9;
  u_val2 = FieldPlot_StrikeWithHammer(i_val5,flags);
  i_val3 = _call_via_r1(farmer,*(undefined4 *)(*farmer + 0x14));
  if (i_val3 == 2) {
    i_val8 = farmer[1];
    i_val6 = *p_int10 + 0x9DC;
    i_val3 = slot_id + 1;
    b_flag1 = false;
    if ((((-1 < amount) && (-1 < i_val3)) && (amount < 0x2b)) && (i_val3 < 0x19)) {
      b_flag1 = true;
    }
    if (b_flag1) {
      i_val3 = i_val6 + (amount + i_val3 * 0x2b) * 4;
    }
    else {
      i_val3 = 0;
    }
    i_val7 = slot_id + -1;
    b_flag1 = false;
    if (((-1 < amount) && (-1 < i_val7)) && ((amount < 0x2b && (i_val7 < 0x19)))) {
      b_flag1 = true;
    }
    if (b_flag1) {
      i_val7 = i_val6 + (amount + i_val7 * 0x2b) * 4;
    }
    else {
      i_val7 = 0;
    }
    u_val4 = FieldPlot_ResolveBorderTile(i_val6 + i_val9,i_val3,i_val7);
    NPC_Routine_080AA6D0(i_val8,amount * 2 + 0x22,slot_id * 2 + 0x16,i_val5,u_val4);
  }
  return u_val2;
}

// =============================================================================
// Function: Farmer_Routine_0801CDBC @ 0x0801CDBC
// =============================================================================
longlong Farmer_Routine_0801CDBC(int *farmer,int amount,int slot_id,undefined4 flags)

{
  char c_char1;
  int i_val2;
  int i_val3;
  
  i_val3 = *(int *)((int)farmer + 0x1038) + 0x9DC + (amount + slot_id * 0x2b) * 4;
  c_char1 = FieldPlot_IsPassable(i_val3);
  if (c_char1 == '\0') {
    i_val3 = Farmer_Routine_0801CCE4(farmer,amount,slot_id,flags);
  }
  else {
    i_val3 = Farmer_Routine_0801740C(i_val3);
    if (i_val3 == 1) {
      amount = amount + -1;
    }
    else if (1 < i_val3) {
      if (i_val3 == 2) {
        slot_id = slot_id + -1;
      }
      else if (i_val3 == 3) {
        amount = amount + -1;
        slot_id = slot_id + -1;
      }
    }
    i_val3 = Farmer_Routine_0801CCE4(farmer,amount,slot_id,flags);
    Farmer_Routine_0801CCE4(farmer,amount + 1,slot_id,flags);
    Farmer_Routine_0801CCE4(farmer,amount,slot_id + 1,flags);
    Farmer_Routine_0801CCE4(farmer,amount + 1,slot_id + 1,flags);
  }
  i_val2 = _call_via_r1(farmer,*(undefined4 *)(*farmer + 0x14));
  if (i_val2 == 2) {
    if (i_val3 == 1) {
      Farm_AddLumber(*(int *)((int)farmer + 0x1038) + 0x14,1);
      NPC_Routine_080AB68C(*(undefined4 *)((int)farmer + 0x1028),amount * 0x10 + 0x118,
                    slot_id * 0x10 + 0xbb,4);
    }
    else if ((1 < i_val3) && (i_val3 == 2)) {
      Farm_AddLumber(*(int *)((int)farmer + 0x1038) + 0x14,6);
      NPC_Routine_080AB68C(*(undefined4 *)((int)farmer + 0x1028),amount * 0x10 + 0x120,
                    slot_id * 0x10 + 0xd0,7);
    }
  }
  return 0;
}

// =============================================================================
// Function: Farmer_Routine_0801CEFC @ 0x0801CEFC
// =============================================================================
u32 Farmer_Routine_0801CEFC(int farmer,undefined4 amount,int slot_id)

{
  char c_char1;
  uint u_val2;
  undefined4 stack_val_34;
  undefined2 stack_val_30;
  undefined2 stack_val_2e;
  undefined2 stack_val_2c;
  undefined2 stack_val_2a;
  char stack_str_28 [4];
  int stack_val_24;
  int stack_val_20;
  int stack_val_1c;
  byte stack_val_18;
  
  stack_val_34 = 0;
  stack_val_30 = 0;
  stack_val_2e = 0;
  stack_val_2c = 0;
  stack_val_2a = 0;
  c_char1 = Farmer_Routine_0801C0F8(farmer,amount,&stack_val_34);
  if (c_char1 == '\0') {
    stack_str_28[0] = '\0';
    stack_val_18 = 1;
    Farmer_Routine_0801D104(farmer,amount,*(undefined1 *)(slot_id + gRomData_080F0807),0,stack_str_28);
    if (stack_str_28[0] != '\0') {
      if (stack_val_24 == 4) {
        NPC_Routine_080AB68C(*(undefined4 *)(farmer + 0x1028),stack_val_20 + 8,stack_val_1c + 0xb,4);
      }
      else {
        if (stack_val_24 != 7) {
          u_val2 = 0;
          goto LAB_0801cfaa;
        }
        NPC_Routine_080AB68C(*(undefined4 *)(farmer + 0x1028),stack_val_20 + 0x10,stack_val_1c + 0x20,7);
      }
    }
    u_val2 = stack_val_18 ^ 1;
  }
  else {
    u_val2 = Farmer_Routine_0801CDBC(farmer,stack_val_2c,stack_val_2a,*(undefined1 *)(slot_id + gRomData_080F0807));
    u_val2 = u_val2 & 0xff;
  }
LAB_0801cfaa:
  return u_val2;
}

// =============================================================================
// Function: Farmer_Routine_0801CFB8 @ 0x0801CFB8
// =============================================================================
u32 Farmer_Routine_0801CFB8(int *farmer,int amount,int slot_id)

{
  char c_char1;
  int i_val2;
  undefined4 u_val3;
  uint u_val4;
  uint u_val5;
  uint loop_i;
  uint u_val7;
  undefined1 *p_uint8;
  undefined1 temp_buf_50 [4];
  int stack_val_4c;
  undefined1 temp_buf_40 [16];
  byte stack_val_30;
  undefined4 stack_val_2c;
  undefined4 stack_val_28;
  int *piStack_24;
  
  u_val7 = 0;
  piStack_24 = farmer;
  if (amount == 2) {
    farmer = (int *)((int)farmer + 0x1038);
    p_uint8 = (undefined1 *)(slot_id + gRomData_080F0807);
    loop_i = 0;
    do {
      u_val5 = 0;
      u_val4 = loop_i + 1;
      do {
        i_val2 = FieldPlot_StrikeWithHammer(*farmer + 0x9DC + (u_val5 + loop_i * 0x2b) * 4,*p_uint8);
        if (i_val2 - 1U < 2) {
          Farm_AddLumber(*farmer + 0x14,1);
        }
        if (i_val2 != 0) {
          u_val7 = 1;
        }
        u_val7 = (uint)(u_val7 != 0);
        u_val5 = u_val5 + 1;
      } while (u_val5 < 0x2b);
      loop_i = u_val4;
    } while (u_val4 < 0x19);
  }
  else {
    farmer = (int *)((int)farmer + 0x1038);
    u_val3 = Farmer_Routine_0800E324(*farmer + 0x10);
    i_val2 = *farmer + 0x34C8;
    loop_i = 0x60;
    p_uint8 = (undefined1 *)(slot_id + gRomData_080F0807);
    do {
      c_char1 = NPC_Routine_080A1ED4(i_val2,loop_i,u_val3);
      if ((c_char1 != '\0') && (NPC_Routine_080A1CBC(temp_buf_50,i_val2,loop_i), stack_val_4c == amount)) {
        temp_buf_40[0] = 0;
        stack_val_30 = 1;
        Farmer_Routine_080174C8(*(int *)((int)piStack_24 + 0x1038) + 0x14,
                      *(int *)((int)piStack_24 + 0x1038) + 0x34C8,loop_i,u_val3,*p_uint8,
                      0,temp_buf_40);
        u_val7 = -u_val7 >> 0x1f | stack_val_30 ^ 1;
      }
      loop_i = loop_i + 1;
    } while (loop_i < 0x74);
  }
  if (u_val7 != 0) {
    stack_val_2c = 0x3CF;
    stack_val_28 = 0;
    _call_via_r3(piStack_24,&stack_val_2c,0,*(undefined4 *)(*piStack_24 + 0x140));
  }
  return u_val7;
}

// =============================================================================
// Function: Farmer_Routine_0801D104 @ 0x0801D104
// =============================================================================
u32 Farmer_Routine_0801D104(int farmer,ushort *amount,undefined4 slot_id,uint flags,char *arg_5)

{
  int i_val1;
  undefined4 u_val2;
  undefined4 u_val3;
  int i_val4;
  int *p_int5;
  undefined1 stack_buf_44 [8];
  short stack_val_3c;
  short stack_val_3a;
  ushort stack_val_34;
  ushort stack_val_32;
  short stack_val_30;
  short stack_val_2e;
  undefined2 stack_val_2c;
  undefined2 stack_val_2a;
  undefined4 stack_val_28;
  uint stack_val_24;
  
  stack_val_24 = flags & 0xff;
  p_int5 = (int *)(0x1038 + farmer);
  i_val1 = *p_int5;
  i_val4 = i_val1 + 0x34C8;
  stack_val_28 = slot_id;
  u_val2 = Farmer_Routine_0800E324(i_val1 + 0x10);
  stack_val_34 = (ushort)((amount[1] & 0x3FF) << 6) |
              (ushort)(*(byte *)((int)amount + 1) >> 2);
  stack_val_32 = (ushort)((amount[2] & 0x3FF) << 6) |
              (ushort)(*(byte *)((int)amount + 3) >> 2);
  stack_val_30 = stack_val_34 + 1;
  stack_val_2e = stack_val_32 + 1;
  i_val1 = NPC_Routine_080A1D20(i_val4,*amount & 0x3ff,&stack_val_34,u_val2);
  if (i_val1 == -1) goto LAB_0801d228;
  NPC_Routine_080A1CBC(stack_buf_44,i_val4,i_val1);
  i_val4 = *p_int5;
  Farmer_Routine_080174C8(i_val4 + 0x14,i_val4 + 0x34C8,i_val1,u_val2,stack_val_28,(undefined1)stack_val_24,
                arg_5);
  if ((*arg_5 != '\0') && ((*amount & 0x3ff) == **(uint **)(farmer + 4))) {
    i_val1 = *(int *)(arg_5 + 4);
    if (i_val1 == 6) {
      u_val2 = 4;
LAB_0801d1fa:
      u_val3 = 4;
    }
    else {
      if (6 < i_val1) {
        if (i_val1 == 7) {
          u_val2 = 4;
        }
        else {
          if (i_val1 != 9) goto LAB_0801d228;
          u_val2 = 6;
        }
        goto LAB_0801d1fa;
      }
      if (i_val1 != 4) {
LAB_0801d228:
        u_val2 = 0;
        goto LAB_0801d22a;
      }
      u_val2 = 2;
      u_val3 = 2;
    }
    i_val1 = (int)stack_val_3c;
    if (i_val1 < 0) {
      i_val1 = i_val1 + 7;
    }
    i_val4 = (int)stack_val_3a;
    if (i_val4 < 0) {
      i_val4 = i_val4 + 7;
    }
    stack_val_2c = (undefined2)(i_val1 >> 3);
    stack_val_2a = (undefined2)(i_val4 >> 3);
    NPC_Routine_080A5F78(*(uint **)(farmer + 4),1,&stack_val_2c,u_val2,u_val3);
  }
  u_val2 = 1;
LAB_0801d22a:
  return u_val2;
}

// =============================================================================
// Function: Farmer_Routine_0801D23C @ 0x0801D23C
// =============================================================================
u32 Farmer_Routine_0801D23C(int *farmer,ushort *amount)

{
  char c_char1;
  int i_val2;
  int i_val3;
  int i_val4;
  undefined4 u_val5;
  uint u_val6;
  int i_val7;
  int i_val8;
  bool b_flag9;
  int i_val10;
  int i_val11;
  int i_val12;
  undefined4 stack_val_44;
  ushort stack_val_40;
  ushort stack_val_3e;
  ushort stack_val_3c;
  ushort stack_val_3a;
  uint stack_val_38;
  int stack_val_34;
  uint stack_val_30;
  int stack_val_2c;
  int stack_val_28;
  uint stack_val_24;
  
  stack_val_44 = 0;
  stack_val_40 = 0;
  stack_val_3e = 0;
  stack_val_3c = 0;
  stack_val_3a = 0;
  c_char1 = Farmer_Routine_0801C0F8(farmer,amount,&stack_val_44);
  if (c_char1 == '\0') {
    u_val6 = 0;
    goto LAB_0801d3ec;
  }
  stack_val_38 = FieldPlot_ChopBranch(stack_val_44);
  if (stack_val_38 == 1) {
    ToolStack_IsEmpty(*(int *)(0x1038 + (int)farmer) + 0x5f0,1);
LAB_0801d29c:
    i_val2 = _call_via_r1(farmer,*(undefined4 *)(*farmer + 0x14));
    if (i_val2 == 2) {
      NPC_Routine_080AB68C(*(undefined4 *)(0x1028 + (int)farmer),(uint)stack_val_40 * 8 + 8,
                    (uint)stack_val_3e * 8 + 0x10,0);
    }
    u_val6 = _call_via_r1(farmer,*(undefined4 *)(*farmer + 0x14));
    stack_val_24 = -stack_val_38;
    if (u_val6 == (*amount & 0x3ff)) {
      stack_val_34 = *(int *)(0x1038 + (int)farmer) + 0x14;
      u_val6 = (uint)stack_val_3c;
      stack_val_30 = (uint)stack_val_40;
      stack_val_28 = *(int *)(0x1038 + (int)farmer) + 0x9DC;
      i_val2 = stack_val_3e - 2;
      i_val12 = (uint)stack_val_3a * 0x2b + u_val6 + -0x2b;
      i_val11 = stack_val_3a - 1;
      stack_val_2c = 2;
      do {
        b_flag9 = false;
        if (((-1 < i_val11) && (u_val6 < 0x2b)) && (i_val11 < 0x19)) {
          b_flag9 = true;
        }
        if (b_flag9) {
          i_val10 = stack_val_28 + i_val12 * 4;
        }
        else {
          i_val10 = 0;
        }
        if (i_val10 != 0) {
          i_val7 = farmer[1];
          i_val8 = stack_val_34 + 0x9C8;
          i_val3 = i_val11 + 1;
          b_flag9 = false;
          if (((-1 < i_val3) && (u_val6 < 0x2b)) && (i_val3 < 0x19)) {
            b_flag9 = true;
          }
          if (b_flag9) {
            i_val3 = i_val8 + (u_val6 + i_val3 * 0x2b) * 4;
          }
          else {
            i_val3 = 0;
          }
          i_val4 = i_val11 + -1;
          b_flag9 = false;
          if (((-1 < i_val4) && (u_val6 < 0x2b)) && (i_val4 < 0x19)) {
            b_flag9 = true;
          }
          if (b_flag9) {
            i_val4 = i_val8 + (u_val6 + i_val4 * 0x2b) * 4;
          }
          else {
            i_val4 = 0;
          }
          u_val5 = FieldPlot_ResolveBorderTile(i_val12 * 4 + i_val8,i_val3,i_val4);
          NPC_Routine_080AA6D0(i_val7,stack_val_30,i_val2,i_val10,u_val5);
        }
        i_val2 = i_val2 + 2;
        i_val12 = i_val12 + 0x2b;
        i_val11 = i_val11 + 1;
        stack_val_2c = stack_val_2c + -1;
      } while (-1 < stack_val_2c);
    }
  }
  else {
    stack_val_24 = -stack_val_38;
    if ((1 < (int)stack_val_38) && (stack_val_38 == 2)) goto LAB_0801d29c;
  }
  u_val6 = (stack_val_24 | stack_val_38) >> 0x1f;
LAB_0801d3ec:
  return u_val6;
}

// =============================================================================
// Function: Farmer_Routine_0801D3FC @ 0x0801D3FC
// =============================================================================
u32 Farmer_Routine_0801D3FC(int *farmer,ushort *amount)

{
  bool b_flag1;
  char c_char2;
  int i_val3;
  uint u_val4;
  undefined4 u_val5;
  int i_val6;
  int i_val7;
  uint u_val8;
  int i_val9;
  int i_val10;
  undefined4 stack_val_20;
  undefined2 stack_val_1c;
  undefined2 stack_val_1a;
  ushort stack_val_18;
  ushort stack_val_16;
  
  stack_val_20 = 0;
  stack_val_1c = 0;
  stack_val_1a = 0;
  stack_val_18 = 0;
  stack_val_16 = 0;
  c_char2 = Farmer_Routine_0801C0F8(farmer,amount,&stack_val_20);
  if (c_char2 != '\0') {
    i_val3 = FieldPlot_ClearWeeds(stack_val_20);
    u_val4 = _call_via_r1(farmer,*(undefined4 *)(*farmer + 0x14));
    if (u_val4 == (*amount & 0x3ff)) {
      i_val10 = farmer[1];
      i_val9 = *(int *)((int)farmer + 0x1038) + 0x9DC;
      u_val8 = (uint)stack_val_18;
      u_val4 = (uint)stack_val_16;
      b_flag1 = false;
      if ((u_val8 < 0x2b) && (u_val4 + 1 < 0x19)) {
        b_flag1 = true;
      }
      if (b_flag1) {
        i_val6 = i_val9 + (u_val8 + (u_val4 + 1) * 0x2b) * 4;
      }
      else {
        i_val6 = 0;
      }
      i_val7 = u_val4 - 1;
      b_flag1 = false;
      if (((-1 < i_val7) && (u_val8 < 0x2b)) && (i_val7 < 0x19)) {
        b_flag1 = true;
      }
      if (b_flag1) {
        i_val7 = i_val9 + (u_val8 + i_val7 * 0x2b) * 4;
      }
      else {
        i_val7 = 0;
      }
      u_val5 = FieldPlot_ResolveBorderTile(i_val9 + (u_val8 + u_val4 * 0x2b) * 4,i_val6,i_val7);
      NPC_Routine_080AA6D0(i_val10,stack_val_1c,stack_val_1a,stack_val_20,u_val5);
    }
    if (i_val3 == 1) {
      u_val5 = 1;
      goto LAB_0801d4d8;
    }
  }
  u_val5 = 0;
LAB_0801d4d8:
  return u_val5;
}

// =============================================================================
// Function: Farmer_Routine_0801D4E0 @ 0x0801D4E0
// =============================================================================
void Farmer_Routine_0801D4E0(int *farmer,ushort *amount,undefined4 slot_id)

{
  bool b_flag1;
  char c_char2;
  uint u_val3;
  undefined4 u_val4;
  int i_val5;
  int i_val6;
  uint u_val7;
  int i_val8;
  int i_val9;
  undefined4 stack_val_1c;
  undefined2 stack_val_18;
  undefined2 stack_val_16;
  ushort stack_val_14;
  ushort stack_val_12;
  
  stack_val_1c = 0;
  stack_val_18 = 0;
  stack_val_16 = 0;
  stack_val_14 = 0;
  stack_val_12 = 0;
  c_char2 = Farmer_Routine_0801C0F8(farmer,amount,&stack_val_1c);
  if (c_char2 != '\0') {
    FieldPlot_SetDebris(stack_val_1c,slot_id);
    u_val3 = _call_via_r1(farmer,*(undefined4 *)(*farmer + 0x14));
    if (u_val3 == (*amount & 0x3ff)) {
      i_val9 = farmer[1];
      i_val8 = *(int *)((int)farmer + 0x1038) + 0x9DC;
      u_val7 = (uint)stack_val_14;
      u_val3 = (uint)stack_val_12;
      b_flag1 = false;
      if ((u_val7 < 0x2b) && (u_val3 + 1 < 0x19)) {
        b_flag1 = true;
      }
      if (b_flag1) {
        i_val5 = i_val8 + (u_val7 + (u_val3 + 1) * 0x2b) * 4;
      }
      else {
        i_val5 = 0;
      }
      i_val6 = u_val3 - 1;
      b_flag1 = false;
      if (((-1 < i_val6) && (u_val7 < 0x2b)) && (i_val6 < 0x19)) {
        b_flag1 = true;
      }
      if (b_flag1) {
        i_val6 = i_val8 + (u_val7 + i_val6 * 0x2b) * 4;
      }
      else {
        i_val6 = 0;
      }
      u_val4 = FieldPlot_ResolveBorderTile(i_val8 + (u_val7 + u_val3 * 0x2b) * 4,i_val5,i_val6);
      NPC_Routine_080AA6D0(i_val9,stack_val_18,stack_val_16,stack_val_1c,u_val4);
    }
  }
  return;
}

// =============================================================================
// Function: Farmer_Routine_0801D5BC @ 0x0801D5BC
// =============================================================================
void Farmer_Routine_0801D5BC(int *farmer,ushort *amount,undefined4 *slot_id)

{
  bool b_flag1;
  char c_char2;
  uint u_val3;
  undefined4 u_val4;
  int i_val5;
  int i_val6;
  uint u_val7;
  int i_val8;
  int i_val9;
  undefined4 stack_val_20;
  undefined2 stack_val_1c;
  undefined2 stack_val_1a;
  ushort stack_val_18;
  ushort stack_val_16;
  undefined4 stack_val_14;
  
  stack_val_20 = 0;
  stack_val_1c = 0;
  stack_val_1a = 0;
  stack_val_18 = 0;
  stack_val_16 = 0;
  c_char2 = Farmer_Routine_0801C0F8(farmer,amount,&stack_val_20);
  if (c_char2 == '\0') {
    Farmer_Routine_0801D6AC(&stack_val_14,farmer,amount);
    *slot_id = stack_val_14;
  }
  else {
    FieldPlot_HarvestCrop(&stack_val_14,stack_val_20);
    *slot_id = stack_val_14;
    u_val3 = _call_via_r1(farmer,*(undefined4 *)(*farmer + 0x14));
    if (u_val3 == (*amount & 0x3ff)) {
      i_val9 = farmer[1];
      i_val8 = *(int *)((int)farmer + 0x1038) + 0x9DC;
      u_val7 = (uint)stack_val_18;
      u_val3 = (uint)stack_val_16;
      b_flag1 = false;
      if ((u_val7 < 0x2b) && (u_val3 + 1 < 0x19)) {
        b_flag1 = true;
      }
      if (b_flag1) {
        i_val5 = i_val8 + (u_val7 + (u_val3 + 1) * 0x2b) * 4;
      }
      else {
        i_val5 = 0;
      }
      i_val6 = u_val3 - 1;
      b_flag1 = false;
      if (((-1 < i_val6) && (u_val7 < 0x2b)) && (i_val6 < 0x19)) {
        b_flag1 = true;
      }
      if (b_flag1) {
        i_val6 = i_val8 + (u_val7 + i_val6 * 0x2b) * 4;
      }
      else {
        i_val6 = 0;
      }
      u_val4 = FieldPlot_ResolveBorderTile(i_val8 + (u_val7 + u_val3 * 0x2b) * 4,i_val5,i_val6);
      NPC_Routine_080AA6D0(i_val9,stack_val_1c,stack_val_1a,stack_val_20,u_val4);
    }
  }
  return;
}

// =============================================================================
// Function: Farmer_Routine_0801D6AC @ 0x0801D6AC
// =============================================================================
u32 Farmer_Routine_0801D6AC(undefined4 *farmer,int amount,ushort *slot_id)

{
  char c_char1;
  undefined4 u_val2;
  int i_val3;
  int i_val4;
  undefined4 stack_val_44;
  undefined4 stack_val_40;
  undefined1 temp_buf_3c [8];
  short stack_val_34;
  short stack_val_32;
  ushort stack_val_2c;
  ushort stack_val_2a;
  short stack_val_28;
  short stack_val_26;
  undefined2 stack_val_24;
  undefined2 stack_val_22;
  
  i_val4 = *(int *)(amount + 0x1038) + 0x34C8;
  u_val2 = Farmer_Routine_0800E324(*(int *)(amount + 0x1038) + 0x10);
  stack_val_2c = (ushort)((slot_id[1] & 0x3FF) << 6) |
              (ushort)(*(byte *)((int)slot_id + 1) >> 2);
  stack_val_2a = (ushort)((slot_id[2] & 0x3FF) << 6) |
              (ushort)(*(byte *)((int)slot_id + 3) >> 2);
  stack_val_28 = stack_val_2c + 1;
  stack_val_26 = stack_val_2a + 1;
  i_val3 = NPC_Routine_080A1D20(i_val4,*slot_id & 0x3ff,&stack_val_2c,u_val2);
  Farmer_Routine_0800EFEC(&stack_val_44);
  if (i_val3 != -1) {
    NPC_Routine_080A1B38(&stack_val_40,i_val4,*slot_id & 0x3ff,&stack_val_2c,u_val2);
    stack_val_44 = stack_val_40;
    c_char1 = Farmer_Routine_0800F06C(&stack_val_44);
    if ((c_char1 == '\0') && ((*slot_id & 0x3ff) == **(uint **)(amount + 4))) {
      NPC_Routine_080A1CBC(temp_buf_3c,i_val4,i_val3);
      i_val3 = (int)stack_val_34;
      if (i_val3 < 0) {
        i_val3 = i_val3 + 7;
      }
      i_val4 = (int)stack_val_32;
      if (i_val4 < 0) {
        i_val4 = i_val4 + 7;
      }
      stack_val_24 = (undefined2)(i_val3 >> 3);
      stack_val_22 = (undefined2)(i_val4 >> 3);
      NPC_Routine_080A5F78(*(undefined4 *)(amount + 4),1,&stack_val_24,2,2);
    }
  }
  *farmer = stack_val_44;
  return farmer;
}

// =============================================================================
// Function: Farmer_Routine_0801D7B0 @ 0x0801D7B0
// =============================================================================
void Farmer_Routine_0801D7B0(int *farmer,ushort *amount,undefined4 slot_id)

{
  bool b_flag1;
  char c_char2;
  uint u_val3;
  undefined4 u_val4;
  int i_val5;
  int i_val6;
  uint u_val7;
  int i_val8;
  int i_val9;
  undefined4 stack_val_1c;
  undefined2 stack_val_18;
  undefined2 stack_val_16;
  ushort stack_val_14;
  ushort stack_val_12;
  
  stack_val_1c = 0;
  stack_val_18 = 0;
  stack_val_16 = 0;
  stack_val_14 = 0;
  stack_val_12 = 0;
  c_char2 = Farmer_Routine_0801C0F8(farmer,amount,&stack_val_1c);
  if (c_char2 != '\0') {
    FieldPlot_PlaceItem(stack_val_1c,slot_id);
    u_val3 = _call_via_r1(farmer,*(undefined4 *)(*farmer + 0x14));
    if (u_val3 == (*amount & 0x3ff)) {
      i_val9 = farmer[1];
      i_val8 = *(int *)((int)farmer + 0x1038) + 0x9DC;
      u_val7 = (uint)stack_val_14;
      u_val3 = (uint)stack_val_12;
      b_flag1 = false;
      if ((u_val7 < 0x2b) && (u_val3 + 1 < 0x19)) {
        b_flag1 = true;
      }
      if (b_flag1) {
        i_val5 = i_val8 + (u_val7 + (u_val3 + 1) * 0x2b) * 4;
      }
      else {
        i_val5 = 0;
      }
      i_val6 = u_val3 - 1;
      b_flag1 = false;
      if (((-1 < i_val6) && (u_val7 < 0x2b)) && (i_val6 < 0x19)) {
        b_flag1 = true;
      }
      if (b_flag1) {
        i_val6 = i_val8 + (u_val7 + i_val6 * 0x2b) * 4;
      }
      else {
        i_val6 = 0;
      }
      u_val4 = FieldPlot_ResolveBorderTile(i_val8 + (u_val7 + u_val3 * 0x2b) * 4,i_val5,i_val6);
      NPC_Routine_080AA6D0(i_val9,stack_val_18,stack_val_16,stack_val_1c,u_val4);
    }
  }
  return;
}

// =============================================================================
// Function: Farmer_Routine_0801D88C @ 0x0801D88C
// =============================================================================
u32 Farmer_Routine_0801D88C(undefined4 farmer,undefined4 amount,undefined4 slot_id)

{
  char c_char1;
  undefined4 u_val2;
  undefined4 stack_val_14;
  undefined2 stack_val_10;
  undefined2 stack_val_e;
  undefined2 stack_val_c;
  undefined2 stack_val_a;
  
  stack_val_14 = 0;
  stack_val_10 = 0;
  stack_val_e = 0;
  stack_val_c = 0;
  stack_val_a = 0;
  c_char1 = Farmer_Routine_0801C0F8(farmer,amount,&stack_val_14);
  if (c_char1 == '\0') {
    u_val2 = 2;
  }
  else {
    c_char1 = FieldPlot_CanPlaceItem(stack_val_14,slot_id);
    if (c_char1 == '\0') {
      u_val2 = 1;
    }
    else {
      u_val2 = 0;
    }
  }
  return u_val2;
}

// =============================================================================
// Function: Farmer_Routine_0801D8CC @ 0x0801D8CC
// =============================================================================
void Farmer_Routine_0801D8CC(int farmer)

{
  int i_val1;
  int *p_int2;
  
  *(undefined1 *)(farmer + 0x103C) = 1;
  if (*(char *)(*(int *)(farmer + 0x1038) + 0x34C4) == '\0') {
    for (p_int2 = (int *)(farmer + 8); p_int2 != (int *)(farmer + 0x198); p_int2 = p_int2 + 1) {
      i_val1 = *p_int2;
      if (i_val1 != 0) {
        _call_via_r1(i_val1,*(undefined4 *)(*(int *)(i_val1 + 0x14) + 0x20));
      }
    }
  }
  else {
    for (p_int2 = (int *)(farmer + 8); p_int2 != (int *)(farmer + 0x198); p_int2 = p_int2 + 1) {
      i_val1 = *p_int2;
      if (i_val1 != 0) {
        _call_via_r1(i_val1,*(undefined4 *)(*(int *)(i_val1 + 0x14) + 0x20));
      }
    }
  }
  return;
}

// =============================================================================
// Function: Farmer_Routine_0801D948 @ 0x0801D948
// =============================================================================
void Farmer_Routine_0801D948(int farmer)

{
  int i_val1;
  int *p_int2;
  
  *(undefined1 *)(farmer + 0x103C) = 0;
  if (*(char *)(*(int *)(farmer + 0x1038) + 0x34C4) == '\0') {
    for (p_int2 = (int *)(farmer + 8); p_int2 != (int *)(farmer + 0x198); p_int2 = p_int2 + 1) {
      i_val1 = *p_int2;
      if (i_val1 != 0) {
        _call_via_r1(i_val1,*(undefined4 *)(*(int *)(i_val1 + 0x14) + 0x24));
      }
    }
  }
  else {
    _call_via_r1(*(int *)(farmer + 8),
                    *(undefined4 *)(*(int *)(*(int *)(farmer + 8) + 0x14) + 0x24));
  }
  return;
}

// =============================================================================
// Function: Farmer_Routine_0801D9A8 @ 0x0801D9A8
// =============================================================================
void Farmer_Routine_0801D9A8(int farmer)

{
  
  Farmer_Routine_08012B24(*(undefined4 *)(farmer + 0x1054));
  return;
}

// =============================================================================
// Function: Farmer_Routine_0801D9BC @ 0x0801D9BC
// =============================================================================
u32 Farmer_Routine_0801D9BC(int *farmer)

{
  char c_char1;
  undefined4 u_val2;
  int i_val3;
  uint u_val4;
  int i_val5;
  
  i_val5 = *(int *)((int)farmer + 0x1038);
  if (*(int *)(i_val5 + 8) == 1) {
    u_val2 = 10;
    goto LAB_0801db3e;
  }
  if (*(int *)(i_val5 + 8) - 3U < 2) {
    u_val2 = 0xb;
    goto LAB_0801db3e;
  }
  i_val3 = Building_Routine_0800C07C(i_val5 + 500);
  u_val4 = _call_via_r1(farmer,*(undefined4 *)(*farmer + 0x14));
  if (u_val4 - 0x34 <= 0x1FF) {
    u_val4 = 2;
  }
  if (u_val4 < 0x2c) {
    switch(*(uint *)(u_val4 * 4 + gInlineTable_0801DA20) & 0xfffffffe) {
    case 0x801dad0:
      if ((*(byte *)(i_val5 + 0x12) & 0x1f) * 0x1000000 + 0xfa000000 >> 0x18 < 0xe) {
        if ((i_val3 == 0) || (c_char1 = Building_Routine_0800BB74(i_val3), c_char1 == '\0')) {
          i_val5 = Farmer_Routine_0800E324(i_val5 + 0x10);
          if (i_val5 == 1) {
            u_val2 = 2;
          }
          else {
            if (1 < i_val5) {
              if (i_val5 == 2) {
                u_val2 = 3;
                goto LAB_0801db3e;
              }
              if (i_val5 == 3) {
                u_val2 = 4;
                goto LAB_0801db3e;
              }
            }
            u_val2 = 1;
          }
        }
        else {
          u_val2 = RecordPlayer_PlayTrack(i_val3);
        }
        goto LAB_0801db3e;
      }
      break;
    case 0x801db22:
      u_val2 = 0xc;
      goto LAB_0801db3e;
    case 0x801db26:
      goto case_0801DB26;
    }
  }
  else {
case_0801DB26:
    if ((*(byte *)(i_val5 + 0x12) & 0x1f) * 0x1000000 + 0xfa000000 >> 0x18 < 0xe) {
      u_val2 = 0xd;
      goto LAB_0801db3e;
    }
  }
  u_val2 = 0xe;
LAB_0801db3e:
  return u_val2;
}

// =============================================================================
// Function: Farmer_Routine_0801DB44 @ 0x0801DB44
// =============================================================================
void Farmer_Routine_0801DB44(int farmer)

{
  Farmer_Routine_0801468C(*(undefined4 *)(farmer + 0x1054));
  return;
}

// =============================================================================
// Function: Farmer_Routine_0801DB58 @ 0x0801DB58
// =============================================================================
void Farmer_Routine_0801DB58(int *farmer)

{
  int i_val1;
  undefined4 u_val2;
  uint u_val3;
  undefined4 u_val4;
  undefined2 stack_val_18;
  undefined2 stack_val_16;
  short stack_val_14;
  undefined1 stack_val_12;
  char cStack_11;
  undefined1 stack_val_10;
  
  stack_val_18 = 0x100;
  stack_val_16 = 0x100;
  stack_val_14 = 0;
  stack_val_12 = 0;
  cStack_11 = '\0';
  stack_val_10 = 0;
  i_val1 = _call_via_r1(farmer,*(undefined4 *)(*farmer + 0x14));
  u_val3 = i_val1 - 0x34;
  if ((u_val3 <= 0x1FF) || (i_val1 == 0x2b)) {
    if (i_val1 == 0x2b) {
      u_val3 = 9;
    }
    else if (0x133 < i_val1) {
      u_val3 = i_val1 + 0xFFFFFECC;
    }
    i_val1 = (u_val3 + 1) * (0xFFFFF600 - stack_val_14);
    if (i_val1 < 0) {
      i_val1 = i_val1 + 0xff;
    }
    stack_val_14 = stack_val_14 + (short)((uint)i_val1 >> 8);
  }
  i_val1 = Farmer_GetFatigue(*(int *)((int)farmer + 0x1038) + 0x1BD8);
  if (0x4f < i_val1) {
    cStack_11 = (char)i_val1 + -0x4f;
    stack_val_10 = 3;
  }
  u_val4 = *(undefined4 *)((int)farmer + 0x1054);
  u_val2 = _call_via_r1(farmer,*(undefined4 *)(*farmer + 0x148));
  Farmer_Routine_080123CC(u_val4,1,u_val2,&stack_val_18);
  return;
}

// =============================================================================
// Function: Farmer_Routine_0801DC24 @ 0x0801DC24
// =============================================================================
void Farmer_Routine_0801DC24(int *farmer,undefined4 amount)

{
  undefined4 u_val1;
  undefined4 u_val2;
  int i_val3;
  int i_val4;
  int *p_int5;
  
  p_int5 = (int *)((int)farmer + 0x1058);
  i_val4 = *p_int5;
  if (i_val4 == 0) {
    u_val1 = Dispatcher_Routine_080005D4(0x40);
    u_val2 = _call_via_r1(farmer,*(undefined4 *)(*farmer + 0x5c));
    i_val4 = NPC_Routine_080A4A00(u_val1,u_val2,amount,farmer,3,0x1b,1);
    i_val3 = *p_int5;
    if ((i_val4 != i_val3) && (i_val3 != 0)) {
      _call_via_r2(i_val3,3,*(undefined4 *)(*(int *)(i_val3 + 0x24) + 8));
    }
    *p_int5 = i_val4;
  }
  else {
    Animal_Routine_0805E860(i_val4 + 0x28);
    *(undefined1 *)(i_val4 + 0x3c) = 1;
    *(undefined1 *)(i_val4 + 0x3e) = 0;
    *(undefined1 *)(i_val4 + 0x3f) = 1;
  }
  return;
}

// =============================================================================
// Function: Farmer_Routine_0801DCA8 @ 0x0801DCA8
// =============================================================================
void Farmer_Routine_0801DCA8(int farmer)

{
  int i_val1;
  int *p_int2;
  
  p_int2 = (int *)(farmer + 0x1058);
  i_val1 = *p_int2;
  if ((i_val1 != 0) && (i_val1 != 0)) {
    _call_via_r2(i_val1,3,*(undefined4 *)(*(int *)(i_val1 + 0x24) + 8));
  }
  *p_int2 = 0;
  return;
}

// =============================================================================
// Function: Farmer_Routine_0801DCD4 @ 0x0801DCD4
// =============================================================================
void Farmer_Routine_0801DCD4(int *farmer)

{
  undefined4 u_val1;
  int *p_int2;
  undefined4 stack_val_18;
  undefined4 stack_val_14;
  
  p_int2 = (int *)((int)farmer + 0x1038);
  u_val1 = ShippingBin_Routine_0800B120(*p_int2 + 0x54);
  Farmer_Routine_0801140C(*p_int2);
  stack_val_18 = 0x3DB;
  stack_val_14 = u_val1;
  _call_via_r3(farmer,&stack_val_18,1,*(undefined4 *)(*farmer + 0x140));
  return;
}

// =============================================================================
// Function: Farmer_Routine_0801DD18 @ 0x0801DD18
// =============================================================================
void Farmer_Routine_0801DD18(int farmer)

{
  
  NPC_Routine_080A6138(*(undefined4 *)(farmer + 4));
  return;
}

// =============================================================================
// Function: Farmer_Routine_0801DD24 @ 0x0801DD24
// =============================================================================
void Farmer_Routine_0801DD24(int farmer)

{
  
  NPC_Routine_080A6194(*(undefined4 *)(farmer + 4));
  return;
}

// =============================================================================
// Function: Farmer_Routine_0801DD30 @ 0x0801DD30
// =============================================================================
void Farmer_Routine_0801DD30(int farmer)

{
  
  NPC_Routine_080A61F0(*(undefined4 *)(farmer + 4));
  return;
}

// =============================================================================
// Function: Farmer_Routine_0801DD3C @ 0x0801DD3C
// =============================================================================
void Farmer_Routine_0801DD3C(int farmer)

{
  
  NPC_Routine_080A6234(*(undefined4 *)(farmer + 4));
  return;
}

// =============================================================================
// Function: Farmer_Routine_0801DD48 @ 0x0801DD48
// =============================================================================
void Farmer_Routine_0801DD48(int farmer)

{
  
  NPC_Routine_080A6278(*(undefined4 *)(farmer + 4));
  return;
}

// =============================================================================
// Function: Farmer_Routine_0801DD54 @ 0x0801DD54
// =============================================================================
void Farmer_Routine_0801DD54(int farmer)

{
  
  NPC_Routine_080A62BC(*(undefined4 *)(farmer + 4));
  return;
}

// =============================================================================
// Function: Farmer_Routine_0801DD60 @ 0x0801DD60
// =============================================================================
void Farmer_Routine_0801DD60(int farmer)

{
  
  NPC_Routine_080A607C(*(undefined4 *)(farmer + 4));
  return;
}

// =============================================================================
// Function: Farmer_Routine_0801DD6C @ 0x0801DD6C
// =============================================================================
void Farmer_Routine_0801DD6C(int farmer)

{
  
  NPC_Routine_080A6024(*(undefined4 *)(farmer + 4));
  return;
}

// =============================================================================
// Function: Farmer_Routine_0801DD78 @ 0x0801DD78
// =============================================================================
void Farmer_Routine_0801DD78(int farmer)

{
  
  NPC_Routine_080A601C(*(undefined4 *)(farmer + 4));
  return;
}

// =============================================================================
// Function: Farmer_Routine_0801DD84 @ 0x0801DD84
// =============================================================================
void Farmer_Routine_0801DD84(int farmer)

{
  undefined4 u_val1;
  undefined1 facing_buffer [4];
  undefined1 stack_val_10;
  
  u_val1 = Building_Routine_0800C07C(*(int *)(farmer + 0x1038) + 500);
  NPC_Routine_080A6300(*(undefined4 *)(farmer + 4));
  Building_Routine_0800BBA4(facing_buffer,u_val1);
  Farmer_Routine_0801DB58(farmer);
  stack_val_10 = Item_Routine_0800E058(facing_buffer);
  Item_GetQuality();
  return;
}

// =============================================================================
// Function: Farmer_Routine_0801DDCC @ 0x0801DDCC
// =============================================================================
void Farmer_Routine_0801DDCC(int farmer,undefined4 amount)

{
  
  NPC_SetEventFlag(*(int *)(farmer + 0x1038) + 0x34D8,amount);
  NPC_Routine_080AA850(*(undefined4 *)(farmer + 4),amount);
  return;
}

// =============================================================================
// Function: Farmer_Routine_0801DDF8 @ 0x0801DDF8
// =============================================================================
void Farmer_Routine_0801DDF8(int farmer,undefined4 amount)

{
  
  NPC_ClearEventFlag(*(int *)(farmer + 0x1038) + 0x34D8,amount);
  NPC_Routine_080AA850(*(undefined4 *)(farmer + 4),amount);
  return;
}

// =============================================================================
// Function: Farmer_Routine_0801DE24 @ 0x0801DE24
// =============================================================================
void Farmer_Routine_0801DE24(int farmer)

{
  
  NPC_Routine_080A63B8(*(undefined4 *)(farmer + 4));
  return;
}

// =============================================================================
// Function: Farmer_Routine_0801DE30 @ 0x0801DE30
// =============================================================================
void Farmer_Routine_0801DE30(int farmer)

{
  
  NPC_Routine_080AA89C(*(undefined4 *)(farmer + 4));
  return;
}

// =============================================================================
// Function: Farmer_Routine_0801DE3C @ 0x0801DE3C
// =============================================================================
void Farmer_Routine_0801DE3C(int farmer)

{
  
  NPC_Routine_080AA8BC(*(undefined4 *)(farmer + 4));
  return;
}

// =============================================================================
// Function: Farmer_Routine_0801DE48 @ 0x0801DE48
// =============================================================================
void Farmer_Routine_0801DE48(int farmer)

{
  
  NPC_Routine_080AA8DC(*(undefined4 *)(farmer + 4));
  return;
}

// =============================================================================
// Function: Farmer_Routine_0801DE54 @ 0x0801DE54
// =============================================================================
void Farmer_Routine_0801DE54(int farmer,undefined4 amount)

{
  undefined4 u_val1;
  undefined1 stack_buf_1c [4];
  undefined1 stack_val_18;
  undefined1 stack_val_17;
  
  u_val1 = Building_Routine_0800C07C(*(int *)(farmer + 0x1038) + 500);
  NPC_Routine_080A635C(*(undefined4 *)(farmer + 4));
  Item_SetQuality(&stack_val_18,amount);
  Building_Routine_0800BBF0(stack_buf_1c,u_val1,&stack_val_18);
  Farmer_Routine_0801DB58(farmer);
  stack_val_17 = Item_Routine_0800E058(stack_buf_1c);
  Item_GetQuality();
  return;
}

// =============================================================================
// Function: Farmer_Routine_0801DEB4 @ 0x0801DEB4
// =============================================================================
u32 Farmer_Routine_0801DEB4(int *farmer,short *amount)

{
  int i_val1;
  int i_val2;
  int i_val3;
  undefined4 u_val4;
  uint *p_uint5;
  int i_val6;
  int i_val7;
  uint loop_i;
  int i_val9;
  uint u_val10;
  int i_val11;
  int i_val12;
  uint u_val13;
  uint u_val14;
  bool b_flag15;
  int stack_val_3c;
  uint stack_val_38;
  int stack_val_2c;
  
  stack_val_3c = 0;
  u_val14 = 0;
  stack_val_38 = 0;
  b_flag15 = false;
  u_val10 = 0;
  do {
    loop_i = 0;
    u_val13 = u_val10 + 1;
    i_val12 = 0x118;
    p_uint5 = (uint *)(u_val10 * 0xac + *(int *)(0x1038 + (int)farmer) + 0x9DC);
    do {
      if ((((*p_uint5 & 0xff) >> 2 == 0x14) && ((*p_uint5 & 0xfff) >> 8 == 5)) &&
         ((i_val1 = (u_val10 * 0x10 + 0xb8) - (int)amount[1],
          i_val1 = (i_val12 - *amount) * (i_val12 - *amount) + i_val1 * i_val1, !b_flag15 ||
          (i_val1 < stack_val_3c)))) {
        b_flag15 = true;
        u_val14 = loop_i;
        stack_val_3c = i_val1;
        stack_val_38 = u_val10;
      }
      i_val12 = i_val12 + 0x10;
      p_uint5 = p_uint5 + 1;
      loop_i = loop_i + 1;
    } while (loop_i < 0x2b);
    u_val10 = u_val13;
  } while (u_val13 < 0x19);
  if (b_flag15) {
    i_val1 = u_val14 + stack_val_38 * 0x2b;
    FieldPlot_ChopBranch(*(int *)(0x1038 + (int)farmer) + 0x9DC + i_val1 * 4);
    i_val12 = _call_via_r1(farmer,*(undefined4 *)(*farmer + 0x14));
    if (i_val12 == 2) {
      i_val6 = farmer[1];
      i_val12 = stack_val_38 * 2 + 0x14;
      i_val1 = i_val1 + -0x2b;
      i_val11 = stack_val_38 - 1;
      stack_val_2c = 2;
      do {
        b_flag15 = false;
        if ((((-1 < (int)u_val14) && (-1 < i_val11)) && ((int)u_val14 < 0x2b)) && (i_val11 < 0x19)) {
          b_flag15 = true;
        }
        if (b_flag15) {
          i_val9 = *(int *)(0x1038 + (int)farmer) + 0x9DC + i_val1 * 4;
        }
        else {
          i_val9 = 0;
        }
        if (i_val9 != 0) {
          i_val7 = *(int *)(0x1038 + (int)farmer) + 0x9DC;
          i_val2 = i_val11 + 1;
          b_flag15 = false;
          if (((-1 < (int)u_val14) && (-1 < i_val2)) && (((int)u_val14 < 0x2b && (i_val2 < 0x19)))) {
            b_flag15 = true;
          }
          if (b_flag15) {
            i_val2 = i_val7 + (i_val2 * 0x2b + u_val14) * 4;
          }
          else {
            i_val2 = 0;
          }
          i_val3 = i_val11 + -1;
          b_flag15 = false;
          if (((-1 < (int)u_val14) && (-1 < i_val3)) && (((int)u_val14 < 0x2b && (i_val3 < 0x19)))) {
            b_flag15 = true;
          }
          if (b_flag15) {
            i_val3 = i_val7 + (i_val3 * 0x2b + u_val14) * 4;
          }
          else {
            i_val3 = 0;
          }
          u_val4 = FieldPlot_ResolveBorderTile(i_val1 * 4 + i_val7,i_val2,i_val3);
          NPC_Routine_080AA6D0(i_val6,u_val14 * 2 + 0x22,i_val12,i_val9,u_val4);
        }
        i_val12 = i_val12 + 2;
        i_val1 = i_val1 + 0x2b;
        i_val11 = i_val11 + 1;
        stack_val_2c = stack_val_2c + -1;
      } while (-1 < stack_val_2c);
    }
    u_val4 = 1;
  }
  else {
    u_val4 = 0;
  }
  return u_val4;
}

// =============================================================================
// Function: Farmer_Routine_0801E084 @ 0x0801E084
// =============================================================================
void Farmer_Routine_0801E084(int *farmer)

{
  bool b_flag1;
  undefined4 u_val2;
  char c_char3;
  int i_val4;
  undefined *p_uint5;
  int i_val6;
  undefined *p_uint7;
  ushort *p_uint8;
  uint u_val9;
  undefined1 u_val10;
  ushort u_val11;
  undefined1 *p_uint12;
  int i_val13;
  ushort u_val14;
  uint *p_uint15;
  undefined4 stack_val_68;
  undefined4 stack_val_64;
  undefined2 stack_val_60;
  undefined2 stack_val_5e;
  ushort stack_val_5c;
  ushort stack_val_5a;
  ushort stack_val_58;
  undefined1 stack_buf_54 [8];
  undefined1 stack_buf_4c [8];
  undefined1 stack_buf_44 [8];
  uint stack_val_3c;
  undefined4 stack_val_38;
  uint stack_val_34;
  undefined4 stack_val_30;
  int *piStack_2c;
  int stack_val_28;
  int stack_val_24;
  
  piStack_2c = farmer;
  Farmer_Routine_0801E90C();
  stack_val_28 = 0;
  stack_val_24 = 0;
  do {
    i_val13 = stack_val_24;
    i_val4 = _call_via_r2(piStack_2c,stack_val_24,*(undefined4 *)(*piStack_2c + 0x40));
    if (i_val4 != 0) {
      b_flag1 = false;
      if (0x28 < stack_val_24 - 0x2bU) {
case_0801E29C:
        if (b_flag1) goto LAB_0801e2a4;
        goto case_0801E630;
      }
      p_uint5 = *(undefined **)(PTR_case_0801E0D4_0801e0d0 + (stack_val_24 - 0x2bU) * 4);
      switch((uint)p_uint5 & 0xfffffffe) {
      case 0x801e0d4:
        p_uint7 = PTR_case_0801E0D4_0801e0d0;
        goto code_r0x0801e3ec;
      case 0x801e178:
        if (1 < *(int *)(*(int *)((int)piStack_2c + 0x1038) + 8) - 3U) goto case_0801E18A;
        break;
      case 0x801e18a:
case_0801E18A:
        u_val9 = (uint)*(ushort *)(i_val4 + 4);
        if (u_val9 != 0x234) {
          p_uint15 = (uint *)piStack_2c[1];
          if (u_val9 == *p_uint15) {
            i_val6 = Map_GetMapData(p_uint15[1]);
            u_val11 = *(ushort *)(i_val6 + 0x20);
            u_val14 = *(ushort *)(i_val6 + 0x22);
            i_val6 = piStack_2c[1];
            Map_GetMapData(*(undefined4 *)(i_val6 + 4));
            stack_val_68 = *(undefined4 *)(i_val6 + 0x2c);
            i_val6 = *(int *)(i_val4 + 0x14);
            p_uint12 = stack_buf_54;
            stack_val_60 = u_val11;
            stack_val_5e = u_val14;
          }
          else {
            if (u_val9 != 2) {
              u_val14 = (ushort)0xFFFFFC00;
              stack_val_68 = CONCAT22(stack_val_68._2_2_,
                                   u_val14 & (ushort)stack_val_68 |
                                   *(ushort *)(i_val4 + 4) & (ushort)0x3FF) & 0xffff03ff;
              u_val11 = u_val14 & stack_val_68._2_2_;
              stack_val_68 = CONCAT22(u_val11,(ushort)stack_val_68);
              u_val2 = stack_val_68;
              stack_val_68._3_1_ = (undefined1)(u_val11 >> 8);
              stack_val_68._0_3_ = (undefined3)u_val2;
              stack_val_68 = CONCAT13(stack_val_68._3_1_,(undefined3)stack_val_68) & 0x3ffffff;
              stack_val_64 = CONCAT22(stack_val_64._2_2_,u_val14 & (ushort)stack_val_64);
              NPC_Routine_080A56DC(p_uint15,&stack_val_68,3,0,0x1e);
              stack_val_28 = 1;
              i_val6 = Map_GetMapData(*(undefined4 *)(piStack_2c[1] + 4));
              u_val11 = *(ushort *)(i_val6 + 0x20);
              u_val14 = *(ushort *)(i_val6 + 0x22);
              i_val6 = piStack_2c[1];
              Map_GetMapData(*(undefined4 *)(i_val6 + 4));
              stack_val_68 = *(undefined4 *)(i_val6 + 0x2c);
              stack_val_64 = 0;
              stack_val_60 = u_val11;
              stack_val_5e = u_val14;
              _call_via_r2(stack_buf_44,i_val4,*(undefined4 *)(*(int *)(i_val4 + 0x14) + 0xc));
              c_char3 = NPC_Routine_080AC070(&stack_val_68,stack_buf_44);
              if (c_char3 != '\0') {
                b_flag1 = true;
              }
              goto case_0801E29C;
            }
            stack_val_68 = *(undefined4 *)((int)piStack_2c + 0x1050);
            stack_val_60 = 0x80;
            stack_val_5e = 0x58;
            i_val6 = *(int *)(i_val4 + 0x14);
            p_uint12 = stack_buf_4c;
          }
          stack_val_64 = 0;
          _call_via_r2(p_uint12,i_val4,*(undefined4 *)(i_val6 + 0xc));
          c_char3 = NPC_Routine_080AC070(&stack_val_68,p_uint12);
          if (c_char3 == '\0') goto case_0801E29C;
        }
        break;
      case 0x801e29c:
        goto case_0801E29C;
      }
LAB_0801e2a4:
      if (i_val13 - 0x2bU < 0x29) {
        switch(*(uint *)((i_val13 - 0x2bU) * 4 + gInlineTable_0801E2C4) & 0xfffffffe) {
        case 0x801e368:
          if (i_val4 != 0) {
            p_uint8 = &stack_val_5c;
            u_val11 = (ushort)0xFFFFFC00;
            stack_val_5c = u_val11 & stack_val_5c & 0x3ff | 0xf802;
            stack_val_5a = u_val11 & stack_val_5a & 0x3ff | 0x4805;
            u_val11 = u_val11 & stack_val_58 | 1;
LAB_0801e5e6:
            p_uint8[2] = u_val11;
            u_val10 = 0;
LAB_0801e5ec:
            gba_memcpy(&stack_val_68,p_uint8,6);
            stack_val_64._0_3_ = CONCAT12(u_val10,(ushort)stack_val_64);
LAB_0801e5f6:
            Entity_Routine_0803211C(i_val4,&stack_val_68);
          }
          break;
        case 0x801e3b0:
          if (i_val4 != 0) {
            u_val11 = (ushort)0xFFFFFC00;
            stack_val_60 = u_val11 & stack_val_60 & 0x3ff | 0xc002;
            u_val14 = 0xb;
LAB_0801e5cc:
            p_uint8 = &stack_val_60;
            stack_val_5e = u_val11 & stack_val_5e & 0x3ff | u_val14 | 0x1000;
            u_val11 = u_val11 & stack_val_5c | 2;
            goto LAB_0801e5e6;
          }
          break;
        case 0x801e3dc:
          if (i_val4 != 0) {
            if ((undefined *)(uint)*(ushort *)(i_val4 + 4) != 0x0011) {
              p_uint5 = 0x0234;
              p_uint7 = (undefined *)(uint)*(ushort *)(i_val4 + 4);
code_r0x0801e3ec:
              if (p_uint7 != p_uint5) {
                p_uint8 = &stack_val_60;
                u_val11 = (ushort)0xFFFFFC00;
                stack_val_60 = u_val11 & stack_val_60 & 0x3ff | 0x3c02;
                stack_val_5e = u_val11 & stack_val_5e & 0x3ff | 0x3002;
                u_val11 = u_val11 & stack_val_5c | 8;
                goto LAB_0801e5e6;
              }
            }
            Building_Routine_0800C6F0(&stack_val_3c,*(int *)((int)piStack_2c + 0x1038) + 0x410,
                          i_val13 + -0x2e);
            stack_val_38 = stack_val_3c;
            u_val9 = stack_val_38;
            stack_val_38._0_2_ = (ushort)stack_val_3c;
            stack_val_38._2_2_ = (ushort)(stack_val_3c >> 0x10);
            p_uint8 = &stack_val_60;
            u_val14 = (ushort)0xFFFFFC00;
            u_val11 = u_val14 & stack_val_60;
            stack_val_60._1_1_ = (byte)(u_val11 >> 8);
            stack_val_60 = CONCAT11(stack_val_60._1_1_ & 3 | (byte)((stack_val_3c & 0x3f) << 2),(char)u_val11)
                        | 0x11;
            u_val11 = u_val14 & stack_val_5e | (ushort)stack_val_38 >> 6;
            stack_val_5e._1_1_ = (byte)(u_val11 >> 8);
            stack_val_5e._0_1_ = (undefined1)u_val11;
            stack_val_5e = CONCAT11(stack_val_5e._1_1_ & 3 | (byte)((stack_val_38._2_2_ & 0x3f) << 2),
                                 (undefined1)stack_val_5e);
            stack_val_5c = u_val14 & stack_val_5c | stack_val_38._2_2_ >> 6;
            u_val10 = 1;
            stack_val_38 = u_val9;
            goto LAB_0801e5ec;
          }
          break;
        case 0x801e4bc:
          if (i_val4 != 0) {
            _call_via_r2(piStack_2c,i_val13,*(undefined4 *)(*piStack_2c + 0x3c));
            Building_Routine_0800C9B8(*(int *)((int)piStack_2c + 0x1038) + 0x410,i_val13 + -0x4c);
          }
          break;
        case 0x801e4ec:
          if (i_val4 != 0) {
            if ((*(short *)(i_val4 + 4) != 0x25) && (*(short *)(i_val4 + 4) != 0x234)) {
              u_val11 = (ushort)0xFFFFFC00;
              stack_val_60 = u_val11 & stack_val_60 & 0x3ff | 0xe002;
              u_val14 = 7;
              goto LAB_0801e5cc;
            }
            Tool_GetName(&stack_val_34,*(int *)((int)piStack_2c + 0x1038) + 0x5f0,
                          i_val13 - 0x36U);
            stack_val_30 = stack_val_34;
            u_val9 = stack_val_30;
            stack_val_30._0_2_ = (ushort)stack_val_34;
            stack_val_30._2_2_ = (ushort)(stack_val_34 >> 0x10);
            u_val14 = (ushort)0xFFFFFC00;
            u_val11 = u_val14 & stack_val_60;
            stack_val_60._1_1_ = (byte)(u_val11 >> 8);
            stack_val_60 = CONCAT11(stack_val_60._1_1_ & 3 | (byte)((stack_val_34 & 0x3f) << 2),(char)u_val11)
                        | 0x25;
            u_val11 = u_val14 & stack_val_5e | (ushort)stack_val_30 >> 6;
            stack_val_5e._1_1_ = (byte)(u_val11 >> 8);
            stack_val_5e._0_1_ = (undefined1)u_val11;
            stack_val_5e = CONCAT11(stack_val_5e._1_1_ & 3 | (byte)((stack_val_30._2_2_ & 0x3f) << 2),
                                 (undefined1)stack_val_5e);
            stack_val_5c = u_val14 & stack_val_5c | stack_val_30._2_2_ >> 6;
            stack_val_30 = u_val9;
            gba_memcpy(&stack_val_68,&stack_val_60,6);
            stack_val_64 = CONCAT13(stack_val_64._3_1_,
                                 CONCAT12((char)(i_val13 - 0x36U >> 2),(ushort)stack_val_64)) &
                        0xff01ffff;
            goto LAB_0801e5f6;
          }
          break;
        case 0x801e604:
          Farmer_Routine_0801FE78(i_val4,2,0xe0,0xa8);
          break;
        case 0x801e612:
          _call_via_r2(piStack_2c,i_val13,*(undefined4 *)(*piStack_2c + 0x3c));
          Farmer_Routine_0800ED2C(*(int *)((int)piStack_2c + 0x1038) + 0x1BD8);
        }
      }
    }
case_0801E630:
    stack_val_24 = stack_val_24 + 1;
    if (99 < stack_val_24) {
      if (stack_val_28 != 0) {
        i_val13 = *piStack_2c;
        Farmer_GetLocation(&stack_val_68,*(int *)((int)piStack_2c + 0x1038) + 0x1BD8);
        _call_via_r3(piStack_2c,&stack_val_68,0,*(undefined4 *)(i_val13 + 0xb4));
      }
      return;
    }
  } while( true );
}

// =============================================================================
// Function: Farmer_Routine_0801E67C @ 0x0801E67C
// =============================================================================
void Farmer_Routine_0801E67C(int *farmer)

{
  undefined2 u_val1;
  undefined2 u_val2;
  bool b_flag3;
  int i_val4;
  int i_val5;
  int *p_int6;
  uint u_val7;
  undefined4 u_val8;
  int i_val9;
  undefined4 u_val10;
  undefined *p_uint11;
  uint u_val12;
  undefined8 u_val13;
  ulonglong u_val14;
  undefined4 stack_val_38;
  undefined4 stack_val_34;
  undefined2 stack_val_30;
  undefined2 stack_val_2e;
  undefined1 stack_buf_2c [8];
  undefined *puStack_24;
  
code_r0x0801e688:
  i_val4 = *(int *)(farmer[1] + 4);
  puStack_24 = gRomData_080F0718;
  if (i_val4 != 0x2a) {
    if (i_val4 < 0x2b) {
      if (i_val4 != 0x29) {
        return;
      }
      puStack_24 = gRomData_080F0704;
      u_val10 = 5;
      goto LAB_0801e6be;
    }
    puStack_24 = PTR_case_080F0730_0801e70c;
    if (i_val4 != 0x2b) {
      return;
    }
  }
  u_val10 = 6;
LAB_0801e6be:
  i_val4 = Map_GetMapData();
  u_val1 = *(undefined2 *)(i_val4 + 0x20);
  u_val2 = *(undefined2 *)(i_val4 + 0x22);
  i_val4 = farmer[1];
  Map_GetMapData(*(undefined4 *)(i_val4 + 4));
  stack_val_38 = *(undefined4 *)(i_val4 + 0x2c);
  stack_val_34 = 0;
  i_val4 = 0;
  stack_val_30 = u_val1;
  stack_val_2e = u_val2;
  do {
    u_val12 = 0x801e6ef;
    u_val13 = _call_via_r2(farmer,i_val4,*(undefined4 *)(*farmer + 0x40));
    i_val5 = (int)u_val13;
    if (i_val5 != 0) {
      b_flag3 = false;
      p_uint11 = (undefined *)((ulonglong)u_val13 >> 0x20);
      if (i_val4 - 0x2bU < 0x29) {
        p_int6 = *(int **)(PTR_case_0801E714_0801e710 + (i_val4 - 0x2bU) * 4);
        p_uint11 = PTR_case_0801E714_0801e710;
        switch((uint)p_int6 & 0xfffffffe) {
        case 0x801e714:
          goto case_0801E714;
        case 0x801e7b8:
          if (*(short *)(i_val5 + 4) == 0x1d) {
            _call_via_r2(stack_buf_2c,i_val5,*(undefined4 *)(*(int *)(i_val5 + 0x14) + 0xc));
            u_val12 = 0x801e7d5;
            u_val14 = NPC_Routine_080AC070(&stack_val_38,stack_buf_2c);
            p_uint11 = (undefined *)(u_val14 >> 0x20);
            if ((u_val14 & 0xff) != 0) {
              p_uint11 = 0x0001;
              b_flag3 = true;
            }
          }
          break;
        case 0x80f0730:
          *(int *)(UNK_0x0074 + 0x14) = (int)p_int6 << 0xf;
          do {
          } while( true );
        }
      }
      if (b_flag3) {
        u_val7 = i_val4 - 0x2b;
        if (u_val7 < 0x29) {
          u_val7 = *(uint *)(PTR_case_0801E7FC_0801e7f8 + u_val7 * 4);
          p_uint11 = PTR_case_0801E7FC_0801e7f8;
          switch(u_val7 & 0xfffffffe) {
          case 0x801e7fc:
            u_val7 = 0x801e7ff;
            u_val8 = (*(code *)((u_val12 & 0xfffffffc) + 0x140))();
            u_val12 = 0x801e803;
            u_val8 = (*(code *)((u_val7 & 0xfffffffc) + 0x140))(u_val8,0);
            u_val7 = 0x801e807;
            u_val8 = (*(code *)((u_val12 & 0xfffffffc) + 0x140))(u_val8,0);
            u_val12 = 0x801e80b;
            u_val8 = (*(code *)((u_val7 & 0xfffffffc) + 0x140))(u_val8,0);
            u_val7 = 0x801e80f;
            u_val8 = (*(code *)((u_val12 & 0xfffffffc) + 0x140))(u_val8,0);
            u_val12 = 0x801e813;
            u_val8 = (*(code *)((u_val7 & 0xfffffffc) + 0x140))(u_val8,0);
            u_val7 = 0x801e817;
            u_val8 = (*(code *)((u_val12 & 0xfffffffc) + 0x140))(u_val8,0);
            u_val12 = 0x801e81b;
            u_val8 = (*(code *)((u_val7 & 0xfffffffc) + 0x140))(u_val8,0);
            u_val7 = 0x801e81f;
            u_val8 = (*(code *)((u_val12 & 0xfffffffc) + 0x140))(u_val8,0);
            u_val12 = 0x801e823;
            u_val8 = (*(code *)((u_val7 & 0xfffffffc) + 0x140))(u_val8,0);
            u_val7 = 0x801e827;
            u_val8 = (*(code *)((u_val12 & 0xfffffffc) + 0x140))(u_val8,0);
            u_val12 = 0x801e82b;
            u_val8 = (*(code *)((u_val7 & 0xfffffffc) + 0x140))(u_val8,0);
            u_val7 = 0x801e82f;
            u_val8 = (*(code *)((u_val12 & 0xfffffffc) + 0x140))(u_val8,0);
            u_val12 = 0x801e833;
            u_val8 = (*(code *)((u_val7 & 0xfffffffc) + 0x140))(u_val8,0);
            u_val7 = 0x801e837;
            u_val8 = (*(code *)((u_val12 & 0xfffffffc) + 0x140))(u_val8,0);
            u_val12 = 0x801e83b;
            u_val8 = (*(code *)((u_val7 & 0xfffffffc) + 0x140))(u_val8,0);
            u_val7 = 0x801e83f;
            u_val8 = (*(code *)((u_val12 & 0xfffffffc) + 0x140))(u_val8,0);
            u_val12 = 0x801e843;
            u_val8 = (*(code *)((u_val7 & 0xfffffffc) + 0x140))(u_val8,0);
            u_val7 = 0x801e847;
            u_val8 = (*(code *)((u_val12 & 0xfffffffc) + 0x140))(u_val8,0);
            u_val12 = 0x801e84b;
            u_val8 = (*(code *)((u_val7 & 0xfffffffc) + 0x140))(u_val8,0);
            u_val7 = 0x801e84f;
            u_val8 = (*(code *)((u_val12 & 0xfffffffc) + 0x140))(u_val8,0);
            u_val12 = 0x801e853;
            u_val8 = (*(code *)((u_val7 & 0xfffffffc) + 0x140))(u_val8,0);
            u_val7 = 0x801e857;
            u_val8 = (*(code *)((u_val12 & 0xfffffffc) + 0x140))(u_val8,0);
            u_val12 = 0x801e85b;
            u_val8 = (*(code *)((u_val7 & 0xfffffffc) + 0x140))(u_val8,0);
            u_val7 = 0x801e85f;
            u_val8 = (*(code *)((u_val12 & 0xfffffffc) + 0x140))(u_val8,0);
            u_val12 = 0x801e863;
            u_val8 = (*(code *)((u_val7 & 0xfffffffc) + 0x140))(u_val8,0);
            u_val7 = 0x801e867;
            u_val8 = (*(code *)((u_val12 & 0xfffffffc) + 0x140))(u_val8,0);
            u_val12 = 0x801e86b;
            u_val8 = (*(code *)((u_val7 & 0xfffffffc) + 0x140))(u_val8,0);
            u_val7 = 0x801e86f;
            u_val8 = (*(code *)((u_val12 & 0xfffffffc) + 0x140))(u_val8,0);
            u_val12 = 0x801e873;
            u_val8 = (*(code *)((u_val7 & 0xfffffffc) + 0x140))(u_val8,0);
            u_val7 = 0x801e877;
            u_val8 = (*(code *)((u_val12 & 0xfffffffc) + 0x140))(u_val8,0);
            u_val12 = 0x801e87b;
            u_val8 = (*(code *)((u_val7 & 0xfffffffc) + 0x140))(u_val8,0);
            u_val7 = 0x801e87f;
            u_val8 = (*(code *)((u_val12 & 0xfffffffc) + 0x140))(u_val8,0);
            u_val12 = 0x801e883;
            u_val8 = (*(code *)((u_val7 & 0xfffffffc) + 0x18c))(u_val8,0);
            u_val7 = 0x801e887;
            u_val8 = (*(code *)((u_val12 & 0xfffffffc) + 0x18c))(u_val8,0);
            u_val12 = 0x801e88b;
            u_val8 = (*(code *)((u_val7 & 0xfffffffc) + 0x18c))(u_val8,0);
            u_val7 = 0x801e88f;
            u_val8 = (*(code *)((u_val12 & 0xfffffffc) + 0x18c))(u_val8,0);
            u_val12 = 0x801e893;
            u_val8 = (*(code *)((u_val7 & 0xfffffffc) + 0x18c))(u_val8,0);
            u_val7 = 0x801e897;
            u_val8 = (*(code *)((u_val12 & 0xfffffffc) + 0x18c))(u_val8,0);
            u_val12 = 0x801e89b;
            u_val8 = (*(code *)((u_val7 & 0xfffffffc) + 0x18c))(u_val8,0);
            u_val7 = (*(code *)((u_val12 & 0xfffffffc) + 0x18c))(u_val8,0);
            p_uint11 = (undefined *)0x0;
            break;
          case 0x801e8c6:
            if (i_val5 != 0) {
              _call_via_r2(farmer,i_val4,*(undefined4 *)(*farmer + 0x3c));
              Building_Routine_0800C9B8(*(int *)((int)farmer + 0x1038) + 0x410,i_val4 + -0x4c);
            }
            goto LAB_0801e8ea;
          }
        }
        if (i_val5 != 0) {
          u_val8 = math_rand(u_val7,p_uint11);
          i_val9 = math_modsi3(u_val8,u_val10);
          Farmer_Routine_0801FE78(i_val5,0x1d,(int)*(short *)(puStack_24 + i_val9 * 4),
                        (int)*(short *)((int)(puStack_24 + i_val9 * 4) + 2));
        }
      }
    }
LAB_0801e8ea:
    i_val4 = i_val4 + 1;
    if (99 < i_val4) {
      return;
    }
  } while( true );
case_0801E714:
  farmer = p_int6;
  goto code_r0x0801e688;
}

// =============================================================================
// Function: Farmer_Routine_0801E90C @ 0x0801E90C
// =============================================================================
void Farmer_Routine_0801E90C(int *farmer)

{
  int i_val1;
  int *p_int2;
  int i_val3;
  int *p_int4;
  int i_val5;
  int loop_i;
  int i_val7;
  int i_val8;
  undefined4 u_val9;
  int i_val10;
  int i_val11;
  undefined1 stack_buf_60 [4];
  int stack_val_5c;
  undefined4 stack_val_58;
  int stack_val_54;
  undefined4 stack_val_50;
  int stack_val_4c;
  int stack_ints_48 [3];
  int stack_val_3c;
  int stack_ints_38 [3];
  int stack_val_2c;
  int stack_val_28;
  int stack_val_24;
  
  stack_val_2c = 0;
  loop_i = 0;
  do {
    i_val1 = _call_via_r2(farmer,loop_i,*(undefined4 *)(*farmer + 0x40));
    loop_i = loop_i + 1;
    if ((i_val1 != 0) && (*(short *)(i_val1 + 4) == 2)) {
      _call_via_r2(&stack_val_5c,i_val1,*(undefined4 *)(*(int *)(i_val1 + 0x14) + 0xc));
      stack_val_54 = stack_val_5c;
      stack_val_50 = stack_val_58;
      u_val9 = stack_val_50;
      stack_val_4c = 0;
      stack_ints_48[0] = ((stack_val_5c << 0x10) >> 0x13) + -0x22 >> 1;
      p_int2 = &stack_val_4c;
      if (0 < stack_ints_48[0]) {
        p_int2 = stack_ints_48;
      }
      i_val1 = *p_int2;
      stack_ints_48[1] = 0x2a;
      stack_val_50._0_2_ = (short)stack_val_58;
      stack_ints_48[2] = ((short)stack_val_50 + -1 >> 3) + -0x22 >> 1;
      p_int2 = stack_ints_48 + 1;
      if (stack_ints_48[2] < 0x2a) {
        p_int2 = stack_ints_48 + 2;
      }
      i_val11 = *p_int2;
      stack_val_3c = 0;
      stack_ints_38[0] = (stack_val_5c >> 0x13) + -0x16 >> 1;
      p_int2 = &stack_val_3c;
      if (0 < stack_ints_38[0]) {
        p_int2 = stack_ints_38;
      }
      stack_ints_38[1] = 0x18;
      stack_val_50._2_2_ = (short)((uint)stack_val_58 >> 0x10);
      stack_ints_38[2] = (stack_val_50._2_2_ + -1 >> 3) + -0x16 >> 1;
      p_int4 = stack_ints_38 + 1;
      if (stack_ints_38[2] < 0x18) {
        p_int4 = stack_ints_38 + 2;
      }
      i_val3 = *p_int4;
      stack_val_50 = u_val9;
      if (*p_int2 <= i_val3) {
        i_val5 = i_val1 << 2;
        i_val7 = *p_int2;
        do {
          i_val10 = i_val7 + 1;
          if (i_val1 <= i_val11) {
            i_val8 = i_val5 + i_val7 * 0xac;
            i_val7 = i_val1;
            do {
              if ((*(uint *)(*(int *)(0x1038 + (int)farmer) + 0x9DC + i_val8) & 0xff)
                  >> 2 == 0x15) {
                stack_val_28 = i_val3;
                stack_val_24 = i_val5;
                FieldPlot_HarvestCrop(stack_buf_60);
                stack_val_2c = 1;
                i_val3 = stack_val_28;
                i_val5 = stack_val_24;
              }
              i_val8 = i_val8 + 4;
              i_val7 = i_val7 + 1;
            } while (i_val7 <= i_val11);
          }
          i_val7 = i_val10;
        } while (i_val10 <= i_val3);
      }
    }
  } while (loop_i < 100);
  if (stack_val_2c != 0) {
    if (*(int *)farmer[1] == 2) {
      _call_via_r4((int *)farmer[1],*(undefined4 *)(0x1048 + (int)farmer),
                      (uint)*(byte *)(0x104C + (int)farmer),
                      0x1e - (uint)*(byte *)(0x104C + (int)farmer));
    }
    else {
      u_val9 = *(undefined4 *)(0x1050 + (int)farmer);
      loop_i = *(int *)(0x1038 + (int)farmer);
      i_val1 = Farmer_Routine_0800E324(loop_i + 0x10);
      Farmer_Routine_080171F8(u_val9,loop_i + 0x14,i_val1 == 3);
    }
  }
  return;
}

// =============================================================================
// Function: Farmer_Routine_0801EAA0 @ 0x0801EAA0
// =============================================================================
u32 Farmer_Routine_0801EAA0(int *farmer,undefined4 amount)

{
  byte b_flag1;
  ushort u_val2;
  bool b_flag3;
  int i_val4;
  char c_char5;
  int i_val6;
  byte b_flag7;
  int i_val8;
  byte *pbVar9;
  uint loop_i;
  uint *p_uint11;
  int *p_int12;
  int *p_int13;
  undefined4 *p_uint14;
  uint *p_uint15;
  int *p_int16;
  int *p_int17;
  int *p_int18;
  
  i_val4 = 0xFFFFFCB0;
  p_uint14 = (undefined4 *)(&stack0xffffffe0 + 0xFFFFFCB0);
  p_uint15 = (uint *)(&stack0xffffffe0 + 0xFFFFFCB0);
  p_int16 = (int *)(&stack0xffffffe0 + 0xFFFFFCB0);
  p_int17 = (int *)(&stack0xffffffe0 + 0xFFFFFCB0);
  p_int18 = (int *)(&stack0xffffffe0 + 0xFFFFFCB0);
  *(undefined4 *)(&stack0x00000310 + 0xFFFFFCB0) = amount;
  *(int *)(&stack0x00000314 + 0xFFFFFCB0) = *(int *)((int)farmer + 0x1038) + 0x12;
  b_flag1 = *(byte *)((int)farmer + 0x103C);
  *(uint *)(&stack0x00000318 + 0xFFFFFCB0) = (uint)b_flag1;
  if (b_flag1 != 0) {
    _call_via_r1(farmer,*(undefined4 *)(*farmer + 0x128));
  }
  p_int12 = farmer + 2;
  *(int **)(&stack0x0000031c + i_val4) = p_int12;
  *(int **)(&stack0x00000320 + i_val4) = farmer + 0x66;
  p_int13 = p_int12;
  if (p_int12 != farmer + 0x66) {
    do {
      i_val8 = *p_int13;
      if (i_val8 != 0) {
        _call_via_r1(i_val8,*(undefined4 *)(*(int *)(i_val8 + 0x14) + 0x14));
      }
      p_int13 = p_int13 + 1;
    } while (p_int13 != *(int **)(&stack0x00000320 + i_val4));
  }
  *p_uint14 = 0;
  loop_i = 0;
  p_int13 = gRomData_080F0748;
  do {
    if ((p_int12[*p_int13] != 0) && (*p_uint15 < 100)) {
      if ((int *)(&stack0xffffffe4 + *p_uint15 * 4 + i_val4) != (int *)0x0) {
        *(int *)(&stack0xffffffe4 + *p_uint15 * 4 + i_val4) = p_int12[*p_int13];
      }
      *p_int17 = *p_int16 + 1;
    }
    p_int13 = p_int13 + 1;
    loop_i = loop_i + 1;
  } while (loop_i < 10);
  i_val8 = *p_int18;
  *(undefined4 *)(&stack0x00000174 + i_val4) = 0;
  loop_i = 0;
  p_int13 = gRomData_080F0770;
  do {
    if (p_int12[*p_int13] != 0) {
      p_uint11 = (uint *)(&stack0x00000174 + i_val4);
      if (*p_uint11 < 100) {
        if (p_uint11 + *p_uint11 + 1 != (uint *)0x0) {
          p_uint11[*p_uint11 + 1] = p_int12[*p_int13];
        }
        *p_uint11 = *p_uint11 + 1;
      }
    }
    p_int13 = p_int13 + 1;
    loop_i = loop_i + 1;
  } while (loop_i < 0x24);
  *(int **)(&stack0x00000324 + i_val4) =
       (int *)((int)(&stack0x00000174 + i_val4) + (*(int *)(&stack0x00000174 + i_val4) + 1) * 4);
  *(undefined4 *)(&stack0x00000308 + i_val4) = 0;
  (&stack0x0000030c)[i_val4] = 0;
  p_int13 = farmer + 0x410;
  while( true ) {
    while( true ) {
      if (*(byte *)(farmer + 0x411) + 1 < 0x19) {
        *(char *)(farmer + 0x411) = (char)(*(byte *)(farmer + 0x411) + 1);
        b_flag3 = false;
      }
      else {
        *(undefined1 *)(farmer + 0x411) = 0;
        p_uint11 = (uint *)*p_int13;
        loop_i = ((*p_uint11 & 0x7ffffff) >> 0x15) + 1;
        u_val2 = (ushort)0xFFFFF81F;
        *(ushort *)((int)p_uint11 + 2) =
             u_val2 & *(ushort *)((int)p_uint11 + 2) | (ushort)((loop_i & 0x3f) << 5);
        if (0x3b < (loop_i & 0x3f)) {
          *(ushort *)(*p_int13 + 2) = u_val2 & *(ushort *)(*p_int13 + 2);
          p_uint11 = (uint *)*p_int13;
          loop_i = ((*p_uint11 & 0x1fffff) >> 0x10) + 1 & 0x1f;
          *(byte *)((int)p_uint11 + 2) = *(byte *)((int)p_uint11 + 2) & 0xe0 | (byte)loop_i;
          if (0x17 < loop_i) {
            *(byte *)(*p_int13 + 2) = *(byte *)(*p_int13 + 2) & 0xe0;
            i_val6 = *p_int13;
            b_flag1 = *(byte *)(i_val6 + 1);
            loop_i = ((b_flag1 & 0x7f) >> 2) + 1;
            if (loop_i == 0x1e) {
              b_flag7 = (b_flag1 & 3) + 1 & 3;
              (&stack0x00000328)[i_val4] = (&stack0x00000328)[i_val4] & 0xfc | b_flag7;
              *(byte *)(i_val6 + 1) = b_flag1 & 0xfc | b_flag7;
              loop_i = 0;
            }
            *(byte *)(i_val6 + 1) = *(byte *)(i_val6 + 1) & 0x83 | (byte)((loop_i & 0x1f) << 2);
            (&stack0x0000032c)[i_val4] = (&stack0x0000032c)[i_val4] & 0x80;
            pbVar9 = (byte *)*p_int13;
            if ((pbVar9[1] & 0x7f) == 0) {
              b_flag1 = *pbVar9;
              b_flag7 = (b_flag1 & 7) + 1;
              if (6 < b_flag7) {
                b_flag7 = 0;
                if (b_flag1 >> 3 < 0x1d) {
                  *pbVar9 = b_flag1 & 7 | ((b_flag1 >> 3) + 1) * '\b';
                }
              }
              *pbVar9 = *pbVar9 & 0xf8 | b_flag7 & 7;
            }
          }
        }
        b_flag3 = true;
      }
      if (b_flag3) break;
      for (p_int12 = (int *)(&stack0xffffffe4 + i_val4);
          p_int12 != (int *)(&stack0xffffffe4 + i_val8 * 4 + i_val4); p_int12 = p_int12 + 1) {
        _call_via_r2(*p_int12,&stack0x00000308 + i_val4,
                        *(undefined4 *)(*(int *)(*p_int12 + 0x14) + 0x18));
      }
    }
    (&stack0x0000030c)[i_val4] = 1;
    p_int12 = (int *)(&stack0x00000178 + i_val4);
    if (p_int12 != *(int **)(&stack0x00000324 + i_val4)) {
      do {
        i_val6 = *p_int12;
        p_int12 = p_int12 + 1;
        _call_via_r2(i_val6,&stack0x00000308 + i_val4,
                        *(undefined4 *)(*(int *)(i_val6 + 0x14) + 0x18));
      } while (p_int12 != *(int **)(&stack0x00000324 + i_val4));
    }
    if ((0x7FF & **(ushort **)(&stack0x00000310 + i_val4)) ==
        (0x7FF & **(ushort **)(&stack0x00000314 + i_val4))) break;
    (&stack0x0000030c)[i_val4] = 0;
  }
  p_int13 = *(int **)(&stack0x0000031c + i_val4);
  if (p_int13 != *(int **)(&stack0x00000320 + i_val4)) {
    do {
      i_val8 = *p_int13;
      if (i_val8 != 0) {
        _call_via_r1(i_val8,*(undefined4 *)(*(int *)(i_val8 + 0x14) + 0x10));
      }
      p_int13 = p_int13 + 1;
    } while (p_int13 != *(int **)(&stack0x00000320 + i_val4));
  }
  if (*(int *)(&stack0x00000318 + i_val4) != 0) {
    _call_via_r1(farmer,*(undefined4 *)(*farmer + 0x124));
  }
  i_val8 = Map_GetMapData(*(undefined4 *)(farmer[1] + 4));
  if (*(char *)(i_val8 + 0x24) == '\0') {
    Farmer_Routine_0801A13C(farmer,(*(uint *)farmer[0x410] & 0x1fffff) >> 0x10,
                  (*(uint *)farmer[0x410] & 0x7ffffff) >> 0x15,0);
  }
  _call_via_r1(farmer[2],*(undefined4 *)(*(int *)(farmer[2] + 0x14) + 0xa4));
  c_char5 = Farmer_Routine_080167CC(*(undefined4 *)((int)farmer + 0x1054));
  if ((c_char5 != '\0') &&
     (c_char5 = NPC_Routine_0809C5F4(*(int *)((int)farmer + 0x1038) + 0x214C), c_char5 == '\0'
     )) {
    Farmer_Routine_0801DB58(farmer);
  }
  return *(undefined4 *)(&stack0x0000034c + i_val4);
}

// =============================================================================
// Function: Farmer_Routine_0801EE00 @ 0x0801EE00
// =============================================================================
u32 Farmer_Routine_0801EE00(int *farmer,ushort *amount,undefined4 slot_id)

{
  bool b_flag1;
  bool b_flag2;
  char c_char3;
  undefined2 u_val4;
  uint u_val5;
  int i_val6;
  undefined4 u_val7;
  undefined4 u_val8;
  int i_val9;
  undefined4 *curr_ptr;
  int *p_int11;
  undefined4 *end_ptr;
  undefined1 stack_buf_54 [4];
  undefined1 temp_buf_50 [4];
  undefined1 stack_buf_4c [4];
  undefined1 temp_buf_48 [4];
  uint3 stack_val_44;
  int stack_val_40;
  undefined4 stack_val_3c;
  undefined1 stack_buf_38 [4];
  undefined4 stack_val_34;
  uint stack_val_30;
  int stack_val_2c;
  undefined1 *puStack_28;
  undefined4 *puStack_24;
  
  _call_via_r3(temp_buf_50,farmer,*amount & 0x3ff,*(undefined4 *)(*farmer + 0x34));
  u_val5 = NPC_Routine_080AC5D0(temp_buf_50,
                        (int)(short)((ushort)((amount[1] & 0x3FF) << 6) |
                                    (ushort)(*(byte *)((int)amount + 1) >> 2)),
                        (int)(short)((ushort)((amount[2] & 0x3FF) << 6) |
                                    (ushort)(*(byte *)((int)amount + 3) >> 2)));
  stack_val_30 = (u_val5 ^ 1) & 0xff;
  stack_val_2c = 0;
  b_flag2 = true;
  puStack_24 = &stack_val_34;
  puStack_28 = stack_buf_54;
  if (stack_val_30 != 0) goto LAB_0801efa8;
  p_int11 = (int *)_call_via_r1(farmer,*(undefined4 *)(*farmer + 0x14c));
  end_ptr = (undefined4 *)p_int11[1];
  for (curr_ptr = (undefined4 *)*p_int11; curr_ptr != end_ptr; curr_ptr = curr_ptr + 1) {
    c_char3 = HW_Routine_08008CD0(*curr_ptr);
    if (c_char3 == '\0') {
      u_val7 = *curr_ptr;
      goto LAB_0801eea6;
    }
  }
  u_val7 = end_ptr[-1];
LAB_0801eea6:
  HW_Routine_08008B6C(u_val7,0x6d);
  i_val6 = NPC_Routine_080A45A8(amount);
  if (i_val6 == 2) {
    stack_val_2c = 0x23B;
  }
  else if (i_val6 < 3) {
    if ((i_val6 != 0) || (i_val6 = Farmer_Routine_0800F09C(slot_id), i_val6 != 0)) goto LAB_0801efa8;
    Farmer_Routine_0800F0A4(temp_buf_50,slot_id);
    i_val6 = Item_Routine_0800DCB4(temp_buf_50);
    if (i_val6 != 2) goto LAB_0801efa8;
    stack_val_2c = 0x23c;
  }
  else {
    if (i_val6 == 4) {
      i_val6 = Farmer_Routine_0800F09C(slot_id);
      if (i_val6 == 0) {
        Farmer_Routine_0800F0A4(temp_buf_50,slot_id);
        i_val6 = Item_Routine_0800DCB4(temp_buf_50);
        if (i_val6 == 0xa0) {
          Farmer_Routine_08011458(*(undefined4 *)(0x1038 + (int)farmer));
        }
      }
      goto LAB_0801efa8;
    }
    if (i_val6 != 6) goto LAB_0801efa8;
    b_flag1 = false;
    i_val6 = Farmer_Routine_0800F09C(slot_id);
    if (i_val6 == 0) {
      Farmer_Routine_0800F0A4(temp_buf_50,slot_id);
      i_val6 = Item_Routine_0800DCB4(temp_buf_50);
      if (0xe < i_val6) {
        Farmer_Routine_0800F0A4(stack_buf_4c,slot_id);
        i_val6 = Item_Routine_0800DCB4(stack_buf_4c);
        if (i_val6 < 0x15) {
          b_flag1 = true;
        }
      }
    }
    if (!b_flag1) goto LAB_0801efa8;
    i_val9 = farmer[2];
    i_val6 = *(int *)(i_val9 + 0x14);
    Item_SetIdAndClearQuality(&stack_val_44,0x15);
    Farmer_Routine_0800F004(temp_buf_48,(uint)stack_val_44);
    _call_via_r3(i_val9,temp_buf_48,0,*(undefined4 *)(i_val6 + 0x5c));
  }
  b_flag2 = false;
LAB_0801efa8:
  if (stack_val_2c != 0) {
    stack_val_40 = stack_val_2c;
    stack_val_3c = 0;
    _call_via_r3(farmer,&stack_val_40,0,*(undefined4 *)(*farmer + 0x140));
  }
  if (b_flag2) {
    NPC_Routine_080A1484(*(int *)(0x1038 + (int)farmer) + 0x1CD4,amount,
                    *(int *)(0x1038 + (int)farmer) + 0x214C);
  }
  c_char3 = Farmer_Routine_0800F11C(slot_id);
  if (c_char3 == '\0') {
    i_val6 = Farmer_Routine_0800F09C(slot_id);
    if ((i_val6 == 0) || (i_val6 != 1)) {
      Farmer_Routine_0800F0A4(temp_buf_50,slot_id);
      u_val4 = Item_Routine_0800DCE0(temp_buf_50);
    }
    else {
      stack_buf_38[0] = Farmer_Routine_0800F0E8(slot_id);
      i_val6 = Item_GetQuality(stack_buf_38);
      if (i_val6 == 0x1b) {
        u_val4 = 3;
        if ((*amount & 0x3ff) < 9) {
          u_val4 = 4;
        }
      }
      else {
        u_val4 = Item_Routine_0800DF84(stack_buf_38);
      }
    }
  }
  else {
    u_val4 = 0x160;
  }
  stack_val_34 = CONCAT22(stack_val_34._2_2_,
                       (ushort)((amount[1] & 0x3FF) << 6) |
                       (ushort)(*(byte *)((int)amount + 1) >> 2));
  *(ushort *)((int)puStack_24 + 2) =
       (ushort)((amount[2] & 0x3FF) << 6) | (ushort)(*(byte *)((int)amount + 3) >> 2);
  u_val7 = _call_via_r1(farmer,*(undefined4 *)(*farmer + 100));
  p_int11 = (int *)(0x102C + (int)farmer);
  p_int11[1] = stack_val_34;
  i_val6 = *p_int11;
  if ((i_val6 != 0) && (i_val6 != 0)) {
    _call_via_r2(i_val6,3,*(undefined4 *)(*(int *)(i_val6 + 0x24) + 8));
  }
  *p_int11 = 0;
  *(undefined1 *)(p_int11 + 2) = (undefined1)stack_val_30;
  if (stack_val_30 == 0) {
    u_val8 = Dispatcher_Routine_080005D4(0x40);
    *puStack_28 = 0;
    i_val6 = NPC_Routine_080A4A00(u_val8,u_val7,0x1A9,farmer,2,3);
    i_val9 = *p_int11;
    if ((i_val6 != i_val9) && (i_val9 != 0)) {
      _call_via_r2(i_val9,3,*(undefined4 *)(*(int *)(i_val9 + 0x24) + 8));
    }
    *p_int11 = i_val6;
    u_val7 = 0;
  }
  else {
    u_val8 = Dispatcher_Routine_080005D4(0x40);
    *puStack_28 = 0;
    i_val6 = NPC_Routine_080A4A00(u_val8,u_val7,u_val4,farmer,2,3);
    i_val9 = *p_int11;
    if ((i_val6 != i_val9) && (i_val9 != 0)) {
      _call_via_r2(i_val9,3,*(undefined4 *)(*(int *)(i_val9 + 0x24) + 8));
    }
    *p_int11 = i_val6;
    u_val7 = 0x10;
    *(undefined1 *)((int)p_int11 + 9) = 0x10;
    *(undefined1 *)((int)p_int11 + 10) = 0;
  }
  return u_val7;
}

// =============================================================================
// Function: Farmer_Routine_0801F14C @ 0x0801F14C
// =============================================================================
void Farmer_Routine_0801F14C(int *farmer)

{
  undefined4 u_val1;
  undefined4 u_val2;
  int i_val3;
  int i_val4;
  int *p_int5;
  uint u_val6;
  
  *(undefined1 *)(farmer + 0x418) = 0;
  p_int5 = (int *)((int)farmer + 0x105C);
  i_val3 = *p_int5;
  if ((i_val3 != 0) && (i_val3 != 0)) {
    _call_via_r2(i_val3,3,*(undefined4 *)(*(int *)(i_val3 + 0x24) + 8));
  }
  *p_int5 = 0;
  i_val3 = _call_via_r1(farmer,*(undefined4 *)(*farmer + 0x14));
  if (i_val3 - 10U < 0x1e) {
    switch(*(uint *)((i_val3 - 10U) * 4 + gInlineTable_0801F1A0) & 0xfffffffe) {
    case 0x801f218:
      p_int5 = (int *)((int)farmer + 0x1038);
      i_val3 = Building_Routine_0800BF14(*p_int5 + 500);
      if (i_val3 != 2) {
        return;
      }
      u_val6 = Building_Routine_0800BFC4(*p_int5 + 500);
      u_val6 = -(u_val6 & 0xff) >> 0x1f;
      break;
    case 0x801f248:
      u_val6 = (uint)(*(byte *)(*(int *)((int)farmer + 0x1038) + 3) >> 7);
      break;
    case 0x801f258:
      u_val6 = *(byte *)(*(int *)((int)farmer + 0x1038) + 4) & 1;
      break;
    case 0x801f26c:
      i_val3 = Farmer_Routine_0800E324(*(int *)((int)farmer + 0x1038) + 0x10);
      u_val6 = 0;
      if (i_val3 == 3) {
        u_val6 = 1;
      }
      break;
    case 0x801f2ca:
      goto case_0801F2CA;
    }
    u_val1 = Dispatcher_Routine_080005D4(0x40);
    u_val2 = _call_via_r1(farmer,*(undefined4 *)(*farmer + 0x60));
    i_val3 = NPC_Routine_080A4A00(u_val1,u_val2,u_val6,farmer,2,0x1b,0);
    farmer = (int *)((int)farmer + 0x105C);
    i_val4 = *farmer;
    if ((i_val3 != i_val4) && (i_val4 != 0)) {
      _call_via_r2(i_val4,3,*(undefined4 *)(*(int *)(i_val4 + 0x24) + 8));
    }
    *farmer = i_val3;
  }
case_0801F2CA:
  return;
}

// =============================================================================
// Function: Farmer_Routine_0801F2DC @ 0x0801F2DC
// =============================================================================
void Farmer_Routine_0801F2DC(int *farmer)

{
  byte b_flag1;
  int i_val2;
  undefined4 u_val3;
  int i_val4;
  undefined4 u_val5;
  
  i_val2 = _call_via_r1(farmer,*(undefined4 *)(*farmer + 0x14));
  if (i_val2 != 0x23) {
    farmer = (int *)((int)farmer + 0x1064);
    i_val2 = *farmer;
    if ((i_val2 != 0) && (i_val2 != 0)) {
      _call_via_r2(i_val2,3,*(undefined4 *)(*(int *)(i_val2 + 0x24) + 8));
    }
    *farmer = 0;
    return;
  }
  b_flag1 = *(byte *)(*(int *)((int)farmer + 0x1038) + 0x12) & 0x1f;
  if (3 < b_flag1) {
    if (b_flag1 < 9) {
      u_val3 = Dispatcher_Routine_080005D4(0x40);
      i_val2 = (int)farmer + 0xFF4;
      u_val5 = 0;
      goto LAB_0801f38a;
    }
    if (b_flag1 < 0x10) {
      u_val3 = Dispatcher_Routine_080005D4(0x40);
      i_val2 = (int)farmer + 0xFF4;
      u_val5 = 1;
      goto LAB_0801f38a;
    }
    if (b_flag1 < 0x13) {
      u_val3 = Dispatcher_Routine_080005D4(0x40);
      i_val2 = (int)farmer + 0xFF4;
      u_val5 = 2;
      goto LAB_0801f38a;
    }
  }
  u_val3 = Dispatcher_Routine_080005D4(0x40);
  i_val2 = (int)farmer + 0xFF4;
  u_val5 = 3;
LAB_0801f38a:
  i_val2 = NPC_Routine_080A4A00(u_val3,i_val2,u_val5,farmer,5,0x1b,0);
  farmer = (int *)((int)farmer + 0x1064);
  i_val4 = *farmer;
  if ((i_val2 != i_val4) && (i_val4 != 0)) {
    _call_via_r2(i_val4,3,*(undefined4 *)(*(int *)(i_val4 + 0x24) + 8));
  }
  *farmer = i_val2;
  return;
}

// =============================================================================
// Function: Farmer_Routine_0801F3E4 @ 0x0801F3E4
// =============================================================================
void Farmer_Routine_0801F3E4(int *farmer)

{
  undefined2 u_val1;
  int i_val2;
  undefined4 u_val3;
  int *p_int4;
  int *p_int5;
  int i_val6;
  undefined4 stack_val_5c;
  undefined4 stack_val_58;
  undefined4 stack_val_54;
  undefined4 stack_val_50;
  undefined4 stack_val_4c;
  undefined4 stack_val_48;
  undefined4 stack_val_44;
  undefined4 stack_val_40;
  int *piStack_3c;
  int stack_val_38;
  ushort stack_val_30;
  undefined1 temp_buf_28 [4];
  undefined2 *apuStack_24 [2];
  
  i_val2 = _call_via_r1(farmer,*(undefined4 *)(*farmer + 0x14));
  if (i_val2 == 0x1d) {
    i_val2 = Building_Routine_0800BFA4(*(int *)((int)farmer + 0x1038) + 500);
    if (i_val2 == 0x5f) {
      return;
    }
    Item_SetQuality(temp_buf_28);
    u_val1 = Item_Routine_0800DF84(temp_buf_28);
    p_int5 = (int *)(0x1068 + (int)farmer);
    i_val2 = *p_int5;
    if (i_val2 != 0) {
      u_val3 = _call_via_r1(farmer,*(undefined4 *)(*farmer + 100));
      Animal_Routine_0805E824(&piStack_3c,u_val3,u_val1,0x100);
      _call_via_r3(&stack_val_5c,piStack_3c,*(undefined2 *)(stack_val_38 + (uint)stack_val_30 * 4),
                      *(undefined4 *)(*piStack_3c + 0x10));
      gba_memcpy(&stack_val_5c,&stack_val_5c,0x20);
      *(undefined4 *)(i_val2 + 0x28) = stack_val_5c;
      *(undefined4 *)(i_val2 + 0x2c) = stack_val_58;
      *(undefined4 *)(i_val2 + 0x30) = stack_val_54;
      *(undefined4 *)(i_val2 + 0x34) = stack_val_50;
      *(undefined4 *)(i_val2 + 0x38) = stack_val_4c;
      *(undefined4 *)(i_val2 + 0x3c) = stack_val_48;
      *(undefined4 *)(i_val2 + 0x40) = stack_val_44;
      *(undefined4 *)(i_val2 + 0x44) = stack_val_40;
      *(undefined1 *)(i_val2 + 0x48) = 1;
      return;
    }
    i_val2 = Dispatcher_Routine_080005D4(0x4c);
    p_int4 = (int *)_call_via_r1(farmer,*(undefined4 *)(*farmer + 100));
    NPC_Routine_080A4740(i_val2,farmer,2,0x1b);
    *(undefined4 *)(i_val2 + 0x24) = gRomData_080E602C;
    i_val6 = *p_int4;
    _call_via_r3(apuStack_24,p_int4,u_val1,*(undefined4 *)(i_val6 + 0xc));
    _call_via_r3(i_val2 + 0x28,p_int4,*apuStack_24[0],*(undefined4 *)(i_val6 + 0x10));
    *(undefined1 *)(i_val2 + 0x48) = 1;
  }
  else {
    p_int5 = (int *)((int)farmer + 0x1068);
    i_val2 = 0;
  }
  i_val6 = *p_int5;
  if ((i_val2 != i_val6) && (i_val6 != 0)) {
    _call_via_r2(i_val6,3,*(undefined4 *)(*(int *)(i_val6 + 0x24) + 8));
  }
  *p_int5 = i_val2;
  return;
}

// =============================================================================
// Function: Farmer_Routine_0801F518 @ 0x0801F518
// =============================================================================
void Farmer_Routine_0801F518(int *farmer,int amount)

{
  char c_char1;
  int i_val2;
  undefined4 u_val3;
  undefined4 u_val4;
  int i_val5;
  int *p_int6;
  
  if (amount == 0x1d) {
    p_int6 = (int *)((int)farmer + 0x1038);
    c_char1 = Building_Routine_0800BFC4(*p_int6 + 500);
    if (c_char1 == '\0') {
      Building_Routine_0800C25C(*p_int6 + 500);
    }
  }
  else if (amount < 0x1e) {
    if (amount != 0x12) {
      return;
    }
    *(byte *)(*(int *)((int)farmer + 0x1038) + 3) =
         *(byte *)(*(int *)((int)farmer + 0x1038) + 3) | 0x80;
  }
  else {
    if (amount != 0x27) {
      return;
    }
    *(byte *)(*(int *)((int)farmer + 0x1038) + 4) =
         *(byte *)(*(int *)((int)farmer + 0x1038) + 4) | 1;
  }
  i_val2 = _call_via_r1(farmer,*(undefined4 *)(*farmer + 0x14));
  if (i_val2 == amount) {
    *(undefined1 *)(farmer + 0x418) = 1;
    u_val3 = Dispatcher_Routine_080005D4(0x40);
    u_val4 = _call_via_r1(farmer,*(undefined4 *)(*farmer + 0x60));
    i_val2 = NPC_Routine_080A4A00(u_val3,u_val4,2,farmer,2,0x1b,0);
    farmer = (int *)((int)farmer + 0x105C);
    i_val5 = *farmer;
    if ((i_val2 != i_val5) && (i_val5 != 0)) {
      _call_via_r2(i_val5,3,*(undefined4 *)(*(int *)(i_val5 + 0x24) + 8));
    }
    *farmer = i_val2;
  }
  return;
}

// =============================================================================
// Function: Farmer_Routine_0801F5F0 @ 0x0801F5F0
// =============================================================================
void Farmer_Routine_0801F5F0(int farmer)

{
  
  Building_Routine_0800C1A0(*(int *)(farmer + 0x1038) + 500);
  Farmer_Routine_0801F3E4(farmer);
  return;
}

// =============================================================================
// Function: Farmer_Routine_0801F614 @ 0x0801F614
// =============================================================================
void Farmer_Routine_0801F614(int *farmer)

{
  undefined4 u_val1;
  int i_val2;
  int i_val3;
  undefined4 u_val4;
  int *p_int5;
  int i_val6;
  
  p_int5 = (int *)((int)farmer + 0x106C);
  i_val2 = *p_int5;
  if ((i_val2 != 0) && (i_val2 != 0)) {
    _call_via_r2(i_val2,3,*(undefined4 *)(*(int *)(i_val2 + 0x24) + 8));
  }
  *p_int5 = 0;
  p_int5 = (int *)((int)farmer + 0x1070);
  i_val2 = *p_int5;
  if ((i_val2 != 0) && (i_val2 != 0)) {
    _call_via_r2(i_val2,3,*(undefined4 *)(*(int *)(i_val2 + 0x24) + 8));
  }
  *p_int5 = 0;
  i_val2 = _call_via_r1(farmer,*(undefined4 *)(*farmer + 0x14));
  if (i_val2 == 0) {
    i_val2 = Farmer_Routine_0800E324(*(int *)((int)farmer + 0x1038) + 0x10);
    if (i_val2 == 3) {
      u_val1 = Dispatcher_Routine_080005D4(0x40);
      i_val6 = (int)farmer + 0xF04;
      i_val2 = NPC_Routine_080A4A00(u_val1,i_val6,1,farmer,3,0x1e,0);
      p_int5 = (int *)(0x106C + (int)farmer);
      i_val3 = *p_int5;
      if ((i_val2 != i_val3) && (i_val3 != 0)) {
        _call_via_r2(i_val3,3,*(undefined4 *)(*(int *)(i_val3 + 0x24) + 8));
      }
      *p_int5 = i_val2;
      u_val1 = Dispatcher_Routine_080005D4(0x40);
      u_val4 = 1;
    }
    else {
      u_val1 = Dispatcher_Routine_080005D4(0x40);
      i_val6 = (int)farmer + 0xF04;
      i_val2 = NPC_Routine_080A4A00(u_val1,i_val6,0,farmer,3,0x1e,0);
      p_int5 = (int *)(0x106C + (int)farmer);
      i_val3 = *p_int5;
      if ((i_val2 != i_val3) && (i_val3 != 0)) {
        _call_via_r2(i_val3,3,*(undefined4 *)(*(int *)(i_val3 + 0x24) + 8));
      }
      *p_int5 = i_val2;
      u_val1 = Dispatcher_Routine_080005D4(0x40);
      u_val4 = 0;
    }
    i_val2 = NPC_Routine_080A4A00(u_val1,i_val6,u_val4,farmer,3,0x1e,0);
    farmer = (int *)((int)farmer + 0x1070);
    i_val3 = *farmer;
    if ((i_val2 != i_val3) && (i_val3 != 0)) {
      _call_via_r2(i_val3,3,*(undefined4 *)(*(int *)(i_val3 + 0x24) + 8));
    }
    *farmer = i_val2;
  }
  return;
}

// =============================================================================
// Function: Farmer_Routine_0801F77C @ 0x0801F77C
// =============================================================================
void Farmer_Routine_0801F77C(int *farmer)

{
  char c_char1;
  undefined4 u_val2;
  int i_val3;
  int i_val4;
  int *p_int5;
  
  p_int5 = (int *)((int)farmer + 0x1074);
  i_val3 = *p_int5;
  if ((i_val3 != 0) && (i_val3 != 0)) {
    _call_via_r2(i_val3,3,*(undefined4 *)(*(int *)(i_val3 + 0x24) + 8));
  }
  *p_int5 = 0;
  p_int5 = (int *)((int)farmer + 0x1078);
  i_val3 = *p_int5;
  if ((i_val3 != 0) && (i_val3 != 0)) {
    _call_via_r2(i_val3,3,*(undefined4 *)(*(int *)(i_val3 + 0x24) + 8));
  }
  *p_int5 = 0;
  i_val3 = _call_via_r1(farmer,*(undefined4 *)(*farmer + 0x14));
  if (i_val3 == 2) {
    c_char1 = Building_Routine_0800BFC4(*(int *)((int)farmer + 0x1038) + 500);
    if (c_char1 == '\0') {
      return;
    }
    u_val2 = Dispatcher_Routine_080005D4(0x40);
    i_val3 = (int)farmer + 0xF04;
  }
  else if (i_val3 < 3) {
    if (i_val3 != 0) {
      return;
    }
    if (-1 < *(char *)(*(int *)((int)farmer + 0x1038) + 3)) {
      return;
    }
    u_val2 = Dispatcher_Routine_080005D4(0x40);
    i_val3 = (int)farmer + 0xF04;
  }
  else if (i_val3 == 3) {
    i_val3 = Farmer_Routine_0800E324(*(int *)((int)farmer + 0x1038) + 0x10);
    if (i_val3 != 3) {
      return;
    }
    u_val2 = Dispatcher_Routine_080005D4(0x40);
    i_val3 = (int)farmer + 0xF04;
  }
  else {
    if (i_val3 != 7) {
      return;
    }
    if ((*(byte *)(*(int *)((int)farmer + 0x1038) + 4) & 1) != 0) {
      u_val2 = Dispatcher_Routine_080005D4(0x40);
      i_val3 = NPC_Routine_080A4A00(u_val2,(int)farmer + 0xF04,2,farmer,2,0x1f,0);
      p_int5 = (int *)((int)farmer + 0x1078);
      i_val4 = *p_int5;
      if ((i_val3 != i_val4) && (i_val4 != 0)) {
        _call_via_r2(i_val4,3,*(undefined4 *)(*(int *)(i_val4 + 0x24) + 8));
      }
      *p_int5 = i_val3;
    }
    i_val3 = Farmer_Routine_0800E324(*(int *)((int)farmer + 0x1038) + 0x10);
    if (i_val3 != 3) {
      return;
    }
    u_val2 = Dispatcher_Routine_080005D4(0x40);
    i_val3 = (int)farmer + 0xF04;
  }
  i_val3 = NPC_Routine_080A4A00(u_val2,i_val3,2,farmer,2,0x1f,0);
  farmer = (int *)((int)farmer + 0x1074);
  i_val4 = *farmer;
  if ((i_val3 != i_val4) && (i_val4 != 0)) {
    _call_via_r2(i_val4,3,*(undefined4 *)(*(int *)(i_val4 + 0x24) + 8));
  }
  *farmer = i_val3;
  return;
}

// =============================================================================
// Function: Farmer_Routine_0801F924 @ 0x0801F924
// =============================================================================
void Farmer_Routine_0801F924(int *farmer,undefined4 amount)

{
  byte b_flag1;
  char c_char2;
  int i_val3;
  undefined4 u_val4;
  uint u_val5;
  uint u_val6;
  undefined4 *p_uint7;
  undefined4 *p_uint8;
  undefined4 u_val9;
  undefined4 stack_val_50;
  undefined4 stack_val_4c;
  undefined4 temp_buf_48 [2];
  undefined4 temp_buf_40 [2];
  undefined4 stack_buf_38 [2];
  undefined4 temp_buf_30 [2];
  undefined4 stack_val_28;
  undefined4 stack_val_24;
  undefined4 stack_val_20;
  uint stack_val_1c;
  
  p_uint7 = &stack_val_50;
  i_val3 = *(int *)((int)farmer + 0x1038) + 0x54;
  u_val4 = Item_Routine_0800E194(amount);
  c_char2 = ShippingBin_GetValueShipped(i_val3,u_val4);
  if (c_char2 == '\0') {
    u_val5 = 0;
  }
  else {
    u_val5 = ShippingBin_IsDisplayEnabled(i_val3,u_val4);
  }
  ShippingBin_ShipItem(i_val3,amount);
  u_val6 = ShippingBin_IsDisplayEnabled(i_val3,u_val4);
  if (u_val6 <= u_val5) goto LAB_0801fa50;
  if (u_val6 == 0x000F4240) {
    p_uint8 = (undefined4 *)(*farmer + 0x140);
    p_uint7 = temp_buf_40;
    temp_buf_40[0] = 0x33E;
LAB_0801fa28:
    p_uint7[1] = u_val4;
    u_val9 = *p_uint8;
  }
  else {
    if (0x000F4240 < u_val6) {
      if (u_val6 == 0x05F5E100) {
        p_uint8 = (undefined4 *)(*farmer + 0x140);
        p_uint7 = temp_buf_30;
        temp_buf_30[0] = 0x340;
      }
      else {
        if (0x05F5E100 < u_val6) {
          if (u_val6 == 0x3B9ACA00) {
            stack_val_28 = 0x341;
            stack_val_24 = u_val4;
            _call_via_r3(farmer,&stack_val_28,1,*(undefined4 *)(*farmer + 0x140));
          }
          goto LAB_0801fa50;
        }
        if (u_val6 != 0x00989680) goto LAB_0801fa50;
        p_uint8 = (undefined4 *)(*farmer + 0x140);
        p_uint7 = stack_buf_38;
        stack_buf_38[0] = 0x33F;
      }
      goto LAB_0801fa28;
    }
    if (u_val6 != 0x2710) {
      if (u_val6 != 0x000186A0) goto LAB_0801fa50;
      p_uint8 = (undefined4 *)(*farmer + 0x140);
      p_uint7 = temp_buf_48;
      temp_buf_48[0] = 0x33D;
      goto LAB_0801fa28;
    }
    stack_val_50 = 0x33c;
    u_val9 = *(undefined4 *)(*farmer + 0x140);
    stack_val_4c = u_val4;
  }
  _call_via_r3(farmer,p_uint7,1,u_val9);
LAB_0801fa50:
  b_flag1 = *(byte *)(*(int *)((int)farmer + 0x1038) + 0x2192);
  if (((b_flag1 & 3) == 0) && (c_char2 = ShippingBin_GetAmountShipped(i_val3), c_char2 != '\0')) {
    stack_val_20 = 0x342;
    stack_val_1c = b_flag1 & 3;
    _call_via_r3(farmer,&stack_val_20,1,*(undefined4 *)(*farmer + 0x140));
  }
  return;
}

// =============================================================================
// Function: Farmer_Routine_0801FAA8 @ 0x0801FAA8
// =============================================================================
void Farmer_Routine_0801FAA8(int *farmer,undefined4 amount)

{
  _call_via_r2(farmer,amount,*(undefined4 *)(*farmer + 0x40));
  return;
}

// =============================================================================
// Function: Farmer_Routine_0801FAB8 @ 0x0801FAB8
// =============================================================================
void Farmer_Routine_0801FAB8(int *farmer,undefined4 amount)

{
  _call_via_r2(farmer,amount,*(undefined4 *)(*farmer + 0x44));
  return;
}

// =============================================================================
// Function: Farmer_Routine_0801FAC8 @ 0x0801FAC8
// =============================================================================
void Farmer_Routine_0801FAC8(int farmer,int amount)

{
  undefined4 u_val1;
  int *p_int2;
  uint u_val3;
  int i_val4;
  int i_val5;
  
  i_val5 = 0;
  if (amount == 0) {
    i_val5 = 0xEA4 + farmer;
  }
  else if (amount == 1) {
    i_val5 = 0xED4 + farmer;
  }
  if (i_val5 != 0) {
    i_val4 = 0x20;
    if (**(int **)(farmer + 4) == 2) {
      u_val3 = 0;
      for (p_int2 = (int *)(farmer + 8); p_int2 != (int *)(farmer + 0x198); p_int2 = p_int2 + 1) {
        if ((*p_int2 != 0) && (*(short *)(*p_int2 + 4) == 2)) {
          u_val3 = u_val3 + 1;
        }
      }
      if (10 < u_val3 + 10) {
        if (u_val3 < 0x16) {
          i_val4 = 0x20 - u_val3;
        }
        else {
          i_val4 = 10;
        }
      }
    }
    u_val1 = Dispatcher_Routine_080005D4(0x46C);
    i_val5 = ScriptEngine_GetVariable(u_val1,farmer,i_val5,amount,i_val4);
    p_int2 = (int *)(farmer + 0x107C);
    i_val4 = *p_int2;
    if ((i_val5 != i_val4) && (i_val4 != 0)) {
      ScriptEngine_Routine_0803B0A8(i_val4,3);
    }
    *p_int2 = i_val5;
  }
  return;
}

// =============================================================================
// Function: Farmer_Routine_0801FB7C @ 0x0801FB7C
// =============================================================================
undefined8
Farmer_Routine_0801FB7C(undefined4 *farmer,undefined4 amount,undefined4 slot_id,undefined1 flags)

{
  undefined4 u_val1;
  undefined4 temp_buf_20 [3];
  
  u_val1 = Dispatcher_Routine_080005D4(0xbc);
  temp_buf_20[0] = NPC_Routine_080A6474(u_val1,amount);
  u_val1 = Dispatcher_Routine_080005D4(0x10CC);
  u_val1 = Farmer_Routine_080175B4(u_val1,amount,slot_id,temp_buf_20,flags);
  *farmer = u_val1;
  return farmer;
}

// =============================================================================
// Function: Farmer_Routine_0801FC78 @ 0x0801FC78
// =============================================================================
void Farmer_Routine_0801FC78(int farmer)

{
  int i_val1;
  int *p_int2;
  
  p_int2 = (int *)(farmer + 0x107C);
  i_val1 = *p_int2;
  if ((i_val1 != 0) && (i_val1 != 0)) {
    ScriptEngine_Routine_0803B0A8(i_val1,3);
  }
  *p_int2 = 0;
  return;
}

// =============================================================================
// Function: Farmer_Routine_0801FD0C @ 0x0801FD0C
// =============================================================================
void Farmer_Routine_0801FD0C(int farmer,int amount)

{
  int i_val1;
  int *p_int2;
  
  p_int2 = (int *)(farmer + 8 + amount * 4);
  i_val1 = *p_int2;
  if (i_val1 != 0) {
    _call_via_r2(i_val1,3,*(undefined4 *)(*(int *)(i_val1 + 0x14) + 8));
    *p_int2 = 0;
  }
  return;
}

// =============================================================================
// Function: Farmer_Routine_0801FD3C @ 0x0801FD3C
// =============================================================================
void Farmer_Routine_0801FD3C(int farmer)

{
  
  NPC_Routine_080A5A9C(*(undefined4 *)(farmer + 4));
  return;
}

// =============================================================================
// Function: Farmer_Routine_0801FDC0 @ 0x0801FDC0
// =============================================================================
void Farmer_Routine_0801FDC0(undefined4 *farmer)

{
  uint u_val1;
  int i_val2;
  int i_val3;
  
  i_val2 = farmer[4];
  if ((i_val2 != 0) && (i_val2 != 0)) {
    _call_via_r2(i_val2,3,*(undefined4 *)(*(int *)(i_val2 + 4) + 8));
  }
  farmer[4] = 0;
  u_val1 = _call_via_r1((int *)*farmer,*(undefined4 *)(*(int *)*farmer + 0x14));
  if (u_val1 == *(ushort *)(farmer + 1)) {
    i_val2 = _call_via_r1(farmer,*(undefined4 *)(farmer[5] + 0x30));
    i_val3 = farmer[4];
    if ((i_val2 != i_val3) && (i_val3 != 0)) {
      _call_via_r2(i_val3,3,*(undefined4 *)(*(int *)(i_val3 + 4) + 8));
    }
    farmer[4] = i_val2;
  }
  return;
}

// =============================================================================
// Function: Farmer_Routine_0801FE20 @ 0x0801FE20
// =============================================================================
void Farmer_Routine_0801FE20(int farmer)

{
  int i_val1;
  
  i_val1 = *(int *)(farmer + 0x10);
  if ((i_val1 != 0) && (i_val1 != 0)) {
    _call_via_r2(i_val1,3,*(undefined4 *)(*(int *)(i_val1 + 4) + 8));
  }
  *(undefined4 *)(farmer + 0x10) = 0;
  return;
}

// =============================================================================
// Function: Farmer_Routine_0801FE48 @ 0x0801FE48
// =============================================================================
void Farmer_Routine_0801FE48(int farmer,undefined4 amount)

{
  int i_val1;
  
  i_val1 = *(int *)(farmer + 0x10);
  if (i_val1 != 0) {
    _call_via_r2(i_val1,amount,*(undefined4 *)(*(int *)(i_val1 + 4) + 0x10));
  }
  return;
}

// =============================================================================
// Function: Farmer_Routine_0801FE60 @ 0x0801FE60
// =============================================================================
void Farmer_Routine_0801FE60(int farmer)

{
  int i_val1;
  
  i_val1 = *(int *)(farmer + 0x10);
  if (i_val1 != 0) {
    _call_via_r1(i_val1,*(undefined4 *)(*(int *)(i_val1 + 4) + 0xc));
  }
  return;
}

// =============================================================================
// Function: Farmer_Routine_0801FE78 @ 0x0801FE78
// =============================================================================
void Farmer_Routine_0801FE78(int farmer,undefined4 amount,int slot_id,int flags)

{
  
  Farmer_Routine_0801FF38();
  *(int *)(farmer + 8) = slot_id << 0x10;
  *(int *)(farmer + 0xc) = flags << 0x10;
  return;
}

// =============================================================================
// Function: Farmer_Routine_0801FE94 @ 0x0801FE94
// =============================================================================
void Farmer_Routine_0801FE94(ushort *farmer,int amount)

{
  ushort u_val1;
  ushort u_val2;
  ushort u_val3;
  ushort u_val4;
  
  u_val1 = *(ushort *)(amount + 10);
  u_val2 = *(ushort *)(amount + 0xe);
  u_val4 = (ushort)0x3FF;
  u_val3 = (ushort)0xFFFFFC00;
  *farmer = u_val3 & *farmer | *(ushort *)(amount + 4) & u_val4;
  *(byte *)((int)farmer + 1) = *(byte *)((int)farmer + 1) & 3 | (byte)((u_val1 & 0x3f) << 2);
  farmer[1] = u_val3 & farmer[1] | u_val1 >> 6 & u_val4;
  *(byte *)((int)farmer + 3) = *(byte *)((int)farmer + 3) & 3 | (byte)((u_val2 & 0x3f) << 2);
  farmer[2] = u_val3 & farmer[2] | u_val2 >> 6 & u_val4;
  return;
}

// =============================================================================
// Function: Farmer_Routine_0801FF54 @ 0x0801FF54
// =============================================================================
void Farmer_Routine_0801FF54(int farmer)

{
  int i_val1;
  
  i_val1 = *(int *)(farmer + 0x10);
  if (i_val1 != 0) {
    _call_via_r1(i_val1,*(undefined4 *)(*(int *)(i_val1 + 4) + 0xc));
  }
  return;
}

// =============================================================================
// Function: Farmer_Routine_0801FF84 @ 0x0801FF84
// =============================================================================
void Farmer_Routine_0801FF84(undefined4 farmer)

{
  
  Farmer_Routine_0801FF38(farmer,0x234);
  return;
}

// =============================================================================
// Function: Farmer_Routine_0801FF98 @ 0x0801FF98
// =============================================================================
void Farmer_Routine_0801FF98(undefined4 farmer,ushort *amount)

{
  
  Farmer_Routine_0801FE78(farmer,*amount & 0x3ff,
                (int)(short)((ushort)((amount[1] & 0x3FF) << 6) |
                            (ushort)(*(byte *)((int)amount + 1) >> 2)),
                (int)(short)((ushort)((amount[2] & 0x3FF) << 6) |
                            (ushort)(*(byte *)((int)amount + 3) >> 2)));
  return;
}

