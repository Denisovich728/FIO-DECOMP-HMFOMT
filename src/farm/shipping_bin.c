// =============================================================================
// Harvest Moon: Friends of Mineral Town (GBA) - Decompiled Source
// Module: SHIPPING_BIN (24 functions)
// Description: Shipping bin mechanics, crop/mineral item valuations and daily pickup earnings
// =============================================================================

#include "../../include/farm/shipping_bin.h"

// =============================================================================
// Function: ShippingBin_Init @ 0x0800B0DC
// =============================================================================
u32 ShippingBin_Init(undefined4 *arg_1)

{
  int i_val1;
  undefined4 *p_uint2;
  uint loop_i;
  int i_val4;
  
  *arg_1 = 0;
  i_val4 = 0x66;
  p_uint2 = arg_1;
  do {
    p_uint2 = p_uint2 + 1;
    ShippingBin_Routine_0800B26C(p_uint2);
    i_val1 = gRomData_080E95CC;
    i_val4 = i_val4 + -1;
  } while (i_val4 != -1);
  loop_i = 0;
  do {
    ShippingBin_StatEnt_IsDisplayEnabled(arg_1 + *(byte *)(loop_i + i_val1) + 1);
    loop_i = loop_i + 1;
  } while (loop_i < 0x16);
  return arg_1;
}

// =============================================================================
// Function: ShippingBin_GetValueShipped @ 0x0800B124
// =============================================================================
u32 ShippingBin_GetValueShipped(int arg_1,int arg_2)

{
  undefined4 u_val1;
  
  if (arg_2 < 0x67) {
    u_val1 = ShippingBin_Routine_0800B280(arg_1 + arg_2 * 4 + 4);
  }
  else {
    u_val1 = 0;
  }
  return u_val1;
}

// =============================================================================
// Function: ShippingBin_IsDisplayEnabled @ 0x0800B140
// =============================================================================
u32 ShippingBin_IsDisplayEnabled(int arg_1,int arg_2)

{
  undefined4 u_val1;
  
  if (arg_2 < 0x67) {
    u_val1 = ShippingBin_ForceEnableDisplay(arg_1 + arg_2 * 4 + 4);
  }
  else {
    u_val1 = 0;
  }
  return u_val1;
}

// =============================================================================
// Function: ShippingBin_GetAmountShipped @ 0x0800B15C
// =============================================================================
u32 ShippingBin_GetAmountShipped(int arg_1)

{
  char c_char1;
  int i_val2;
  undefined4 u_val3;
  uint u_val4;
  
  u_val4 = 0;
  while( true ) {
    arg_1 = arg_1 + 4;
    c_char1 = ShippingBin_Routine_0800B280(arg_1);
    if ((c_char1 == '\0') || (i_val2 = ShippingBin_ForceEnableDisplay(arg_1), i_val2 == 0)) break;
    u_val4 = u_val4 + 1;
    if (0x66 < u_val4) {
      u_val3 = 1;
LAB_0800b186:
      return u_val3;
    }
  }
  u_val3 = 0;
  goto LAB_0800b186;
}

// =============================================================================
// Function: ShippingBin_HasShippedOneOfEachProduct @ 0x0800B18C
// =============================================================================
u32 ShippingBin_HasShippedOneOfEachProduct(int arg_1)

{
  char c_char1;
  undefined4 u_val2;
  int i_val3;
  uint u_val4;
  
  u_val4 = 0;
  while( true ) {
    i_val3 = arg_1 + (uint)*(byte *)(u_val4 + gRomData_080E95E2) * 4 + 4;
    c_char1 = ShippingBin_Routine_0800B280(i_val3);
    if ((c_char1 == '\0') || (i_val3 = ShippingBin_ForceEnableDisplay(i_val3), i_val3 == 0)) break;
    u_val4 = u_val4 + 1;
    if (0xe < u_val4) {
      u_val2 = 1;
LAB_0800b1c4:
      return u_val2;
    }
  }
  u_val2 = 0;
  goto LAB_0800b1c4;
}

// =============================================================================
// Function: ShippingBin_HasShippedOneOfEachCrop @ 0x0800B1CC
// =============================================================================
u32 ShippingBin_HasShippedOneOfEachCrop(int arg_1)

{
  char c_char1;
  undefined4 u_val2;
  int i_val3;
  uint u_val4;
  
  u_val4 = 0;
  while( true ) {
    i_val3 = arg_1 + (uint)*(byte *)(u_val4 + gRomData_080E95F1) * 4 + 4;
    c_char1 = ShippingBin_Routine_0800B280(i_val3);
    if ((c_char1 == '\0') || (i_val3 = ShippingBin_ForceEnableDisplay(i_val3), i_val3 == 0)) break;
    u_val4 = u_val4 + 1;
    if (0x13 < u_val4) {
      u_val2 = 1;
LAB_0800b204:
      return u_val2;
    }
  }
  u_val2 = 0;
  goto LAB_0800b204;
}

// =============================================================================
// Function: ShippingBin_ShipItem @ 0x0800B20C
// =============================================================================
void ShippingBin_ShipItem(int *arg_1,undefined4 arg_2)

{
  uint u_val1;
  int i_val2;
  uint u_val3;
  
  u_val1 = Item_Routine_0800E198(arg_2);
  if (u_val1 != 0) {
    i_val2 = Item_Routine_0800E194(arg_2);
    ShippingBin_StatEnt_Init(arg_1 + i_val2 + 1);
    u_val3 = 0x3B9ACA00 - *arg_1;
    if (u_val1 < u_val3) {
      u_val3 = u_val1;
    }
    *arg_1 = *arg_1 + u_val3;
  }
  return;
}

// =============================================================================
// Function: ShippingBin_ResetValueShipped @ 0x0800B254
// =============================================================================
void ShippingBin_ResetValueShipped(int arg_1,int arg_2)

{
  
  if (arg_2 < 0x67) {
    ShippingBin_StatEnt_IsDisplayEnabled(arg_1 + arg_2 * 4 + 4);
  }
  return;
}

// =============================================================================
// Function: ShippingBin_ForceEnableDisplay @ 0x0800B288
// =============================================================================
u32 ShippingBin_ForceEnableDisplay(uint *arg_1)

{
  uint u_val1;
  
  if ((int)*arg_1 < 0) {
    u_val1 = *arg_1 & 0x7fffffff;
  }
  else {
    u_val1 = 0;
  }
  return u_val1;
}

// =============================================================================
// Function: ShippingBin_StatEnt_Init @ 0x0800B29C
// =============================================================================
void ShippingBin_StatEnt_Init(uint *arg_1)

{
  uint u_val1;
  
  if (-1 < (int)*arg_1) {
    *(byte *)((int)arg_1 + 3) = *(byte *)((int)arg_1 + 3) | 0x80;
  }
  u_val1 = *arg_1 & 0x7fffffff;
  if (u_val1 <= 0x3B9AC9FF) {
    *arg_1 = 0x7FFFFFFF + 1 & *arg_1 | u_val1 + 1 & 0x7FFFFFFF;
  }
  return;
}

// =============================================================================
// Function: ShippingBin_StatEnt_IsDisplayEnabled @ 0x0800B2D4
// =============================================================================
void ShippingBin_StatEnt_IsDisplayEnabled(int *arg_1)

{
  
  if (-1 < *arg_1) {
    *(byte *)((int)arg_1 + 3) = *(byte *)((int)arg_1 + 3) | 0x80;
  }
  return;
}

// =============================================================================
// Function: ShippingBin_StatEnt_GetAmountShipped @ 0x0800B2EC
// =============================================================================
u32 ShippingBin_StatEnt_GetAmountShipped(int arg_1)

{
  int i_val1;
  int i_val2;
  undefined1 stack_buf_38 [4];
  undefined1 stack_val_34;
  undefined1 stack_val_33;
  undefined1 stack_val_32;
  undefined1 stack_val_31;
  undefined1 stack_val_30;
  undefined1 stack_buf_2f [3];
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  
  i_val2 = 0x3f;
  puStack_2c = &stack_val_31;
  puStack_28 = &stack_val_30;
  puStack_24 = stack_buf_2f;
  i_val1 = arg_1;
  do {
    ArticleStack_AddAmount(i_val1);
    i_val1 = i_val1 + 2;
    i_val2 = i_val2 + -1;
  } while (i_val2 != -1);
  Item_SetId(&stack_val_34,0);
  ArticleStack_SubtractAmount(stack_buf_38,stack_val_34,1);
  gba_memcpy(arg_1,stack_buf_38,2);
  Item_SetId(&stack_val_33,0x10);
  ArticleStack_SubtractAmount(stack_buf_38,stack_val_33,1);
  gba_memcpy(arg_1 + 2,stack_buf_38,2);
  Item_SetId(&stack_val_32,8);
  ArticleStack_SubtractAmount(stack_buf_38,stack_val_32,1);
  gba_memcpy(arg_1 + 4,stack_buf_38,2);
  Item_SetId(puStack_2c,0x18);
  ArticleStack_SubtractAmount(stack_buf_38,stack_val_31,1);
  gba_memcpy(arg_1 + 6,stack_buf_38,2);
  Item_SetId(puStack_28,0x20);
  ArticleStack_SubtractAmount(stack_buf_38,stack_val_30,1);
  gba_memcpy(arg_1 + 8,stack_buf_38,2);
  Item_SetId(puStack_24,0x4c);
  ArticleStack_SubtractAmount(stack_buf_38,stack_buf_2f[0],1);
  gba_memcpy(arg_1 + 10,stack_buf_38,2);
  return arg_1;
}

// =============================================================================
// Function: ShippingBin_StatEnt_ShipOne @ 0x0800B410
// =============================================================================
u32 ShippingBin_StatEnt_ShipOne(int arg_1,int arg_2)

{
  char c_char1;
  int item_id;
  int i_val3;
  int i_val4;
  undefined1 stack_buf_1c [4];
  
  i_val3 = 0;
  i_val4 = arg_1 + 0x80;
  for (; arg_1 != i_val4; arg_1 = arg_1 + 2) {
    c_char1 = Product_GetId(arg_1);
    if (c_char1 == '\0') {
      stack_buf_1c[0] = Product_Construct(arg_1);
      item_id = Item_GetId(stack_buf_1c);
      if (item_id == arg_2) {
        item_id = Product_GetPrice(arg_1);
        i_val3 = (i_val3 + 99) - item_id;
      }
    }
    else {
      i_val3 = i_val3 + 99;
    }
  }
  return i_val3;
}

// =============================================================================
// Function: ShippingBin_StatEnt_ForceEnableDisplay @ 0x0800B474
// =============================================================================
u32 ShippingBin_StatEnt_ForceEnableDisplay(int arg_1,int arg_2)

{
  char c_char1;
  int item_id;
  int i_val3;
  int i_val4;
  undefined1 stack_buf_1c [4];
  
  i_val4 = 0;
  i_val3 = arg_1 + 0x80;
  for (; arg_1 != i_val3; arg_1 = arg_1 + 2) {
    c_char1 = Product_GetId(arg_1);
    if (c_char1 == '\0') {
      stack_buf_1c[0] = Product_Construct(arg_1);
      item_id = Item_GetId(stack_buf_1c);
      if (item_id == arg_2) {
        item_id = Product_GetPrice(arg_1);
        i_val4 = i_val4 + item_id;
      }
    }
  }
  return i_val4;
}

// =============================================================================
// Function: ShippingBin_HasShippedOneOfEachMineral @ 0x0800B4D0
// =============================================================================
u32 ShippingBin_HasShippedOneOfEachMineral(int arg_1)

{
  char c_char1;
  int i_val2;
  int i_val3;
  
  i_val3 = 0;
  i_val2 = arg_1 + 0x80;
  for (; arg_1 != i_val2; arg_1 = arg_1 + 2) {
    c_char1 = Product_GetId(arg_1);
    if (c_char1 != '\0') goto LAB_0800b4fa;
    i_val3 = i_val3 + 1;
  }
  i_val3 = -1;
LAB_0800b4fa:
  return i_val3;
}

// =============================================================================
// Function: ShippingBin_FindLastEmptySlot @ 0x0800B500
// =============================================================================
u32 ShippingBin_FindLastEmptySlot(int arg_1)

{
  char c_char1;
  int i_val2;
  int stack_val_c;
  
  i_val2 = 0x3f;
  for (stack_val_c = arg_1 + 0x80; stack_val_c != arg_1; stack_val_c = stack_val_c + -2) {
    c_char1 = Product_GetId(stack_val_c + -2);
    if (c_char1 != '\0') goto LAB_0800b53a;
    i_val2 = i_val2 + -1;
  }
  i_val2 = -1;
LAB_0800b53a:
  return i_val2;
}

// =============================================================================
// Function: ShippingBin_FindSlotByItemId @ 0x0800B544
// =============================================================================
u32 ShippingBin_FindSlotByItemId(int arg_1,int arg_2)

{
  char c_char1;
  int item_id;
  int i_val3;
  int i_val4;
  undefined1 stack_buf_1c [4];
  
  i_val4 = 0;
  i_val3 = arg_1 + 0x80;
  for (; arg_1 != i_val3; arg_1 = arg_1 + 2) {
    c_char1 = Product_GetId(arg_1);
    if (c_char1 == '\0') {
      stack_buf_1c[0] = Product_Construct(arg_1);
      item_id = Item_GetId(stack_buf_1c);
      if (item_id == arg_2) goto LAB_0800b592;
    }
    i_val4 = i_val4 + 1;
  }
  i_val4 = -1;
LAB_0800b592:
  return i_val4;
}

// =============================================================================
// Function: ShippingBin_AddItemQuantity @ 0x0800B5A8
// =============================================================================
u32 ShippingBin_AddItemQuantity(int arg_1,int arg_2,uint arg_3)

{
  char c_char1;
  int item_id;
  uint u_val3;
  uint *p_uint4;
  int i_val5;
  undefined1 temp_buf_28 [4];
  uint stack_val_24;
  uint stack_val_20;
  undefined1 stack_val_1c;
  undefined1 stack_buf_1b [3];
  uint stack_val_18;
  
  if (arg_2 < 0x51) {
    i_val5 = arg_1 + 0x80;
    for (; (arg_3 != 0 && (arg_1 != i_val5)); arg_1 = arg_1 + 2) {
      stack_val_24 = arg_3;
      c_char1 = Product_GetId(arg_1);
      if (c_char1 == '\0') {
        stack_buf_1b[0] = Product_Construct(arg_1);
        item_id = Item_GetId(stack_buf_1b);
        if (item_id == arg_2) {
          item_id = Product_GetPrice(arg_1);
          stack_val_18 = 99U - item_id;
          p_uint4 = &stack_val_24;
          if (99U - item_id < stack_val_24) {
            p_uint4 = &stack_val_18;
          }
          u_val3 = *p_uint4;
          Product_GetName(arg_1,u_val3);
          goto LAB_0800b646;
        }
      }
      else {
        stack_val_20 = 99;
        p_uint4 = &stack_val_24;
        if (99 < stack_val_24) {
          p_uint4 = &stack_val_20;
        }
        u_val3 = *p_uint4;
        Item_SetId(&stack_val_1c,arg_2);
        ArticleStack_SubtractAmount(temp_buf_28,stack_val_1c,u_val3);
        gba_memcpy(arg_1,temp_buf_28,2);
LAB_0800b646:
        stack_val_24 = stack_val_24 - u_val3;
      }
      arg_3 = stack_val_24;
    }
  }
  return arg_3;
}

// =============================================================================
// Function: ShippingBin_ClearAllSlots @ 0x0800B660
// =============================================================================
u32 ShippingBin_ClearAllSlots(int arg_1)

{
  int i_val1;
  int i_val2;
  
  i_val2 = 0x3f;
  i_val1 = arg_1;
  do {
    Item_ResetSlotData(i_val1);
    i_val1 = i_val1 + 4;
    i_val2 = i_val2 + -1;
  } while (i_val2 != -1);
  return arg_1;
}

// =============================================================================
// Function: ShippingBin_GetSlotQuantity @ 0x0800B68C
// =============================================================================
u32 ShippingBin_GetSlotQuantity(int arg_1,int arg_2)

{
  char c_char1;
  int i_val2;
  int i_val3;
  int i_val4;
  undefined1 temp_buf_18 [4];
  
  i_val3 = 0;
  i_val4 = arg_1 + 0x100;
  for (; arg_1 != i_val4; arg_1 = arg_1 + 4) {
    c_char1 = Item_Routine_0800DEDC(arg_1);
    if (c_char1 == '\0') {
      Item_GetToolExperienceRequired(temp_buf_18,arg_1);
      i_val2 = Item_Routine_0800DCB4(temp_buf_18);
      if (i_val2 == arg_2) {
        i_val2 = Item_Routine_0800DEF0(arg_1);
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
// Function: ShippingBin_SetSlotQuantity @ 0x0800B6E8
// =============================================================================
u32 ShippingBin_SetSlotQuantity(int arg_1,int arg_2)

{
  char c_char1;
  int i_val2;
  int i_val3;
  int i_val4;
  undefined1 temp_buf_18 [4];
  
  i_val4 = 0;
  i_val3 = arg_1 + 0x100;
  for (; arg_1 != i_val3; arg_1 = arg_1 + 4) {
    c_char1 = Item_Routine_0800DEDC(arg_1);
    if (c_char1 == '\0') {
      Item_GetToolExperienceRequired(temp_buf_18,arg_1);
      i_val2 = Item_Routine_0800DCB4(temp_buf_18);
      if (i_val2 == arg_2) {
        i_val2 = Item_Routine_0800DEF0(arg_1);
        i_val4 = i_val4 + i_val2;
      }
    }
  }
  return i_val4;
}

// =============================================================================
// Function: ShippingBin_CalculateDailyTotalEarnings @ 0x0800B73C
// =============================================================================
u32 ShippingBin_CalculateDailyTotalEarnings(int arg_1)

{
  char c_char1;
  int i_val2;
  int i_val3;
  
  i_val3 = 0;
  i_val2 = arg_1 + 0x100;
  for (; arg_1 != i_val2; arg_1 = arg_1 + 4) {
    c_char1 = Item_Routine_0800DEDC(arg_1);
    if (c_char1 != '\0') goto LAB_0800b768;
    i_val3 = i_val3 + 1;
  }
  i_val3 = -1;
LAB_0800b768:
  return i_val3;
}

// =============================================================================
// Function: ShippingBin_CollectDailyEarnings @ 0x0800B770
// =============================================================================
u32 ShippingBin_CollectDailyEarnings(int arg_1)

{
  char c_char1;
  int i_val2;
  int stack_val_c;
  
  i_val2 = 0x3f;
  for (stack_val_c = arg_1 + 0x100; stack_val_c != arg_1; stack_val_c = stack_val_c + -4) {
    c_char1 = Item_Routine_0800DEDC(stack_val_c + -4);
    if (c_char1 != '\0') goto LAB_0800b7ae;
    i_val2 = i_val2 + -1;
  }
  i_val2 = -1;
LAB_0800b7ae:
  return i_val2;
}

// =============================================================================
// Function: ShippingBin_ResetDailyShipments @ 0x0800B7B8
// =============================================================================
u32 ShippingBin_ResetDailyShipments(int arg_1,int arg_2)

{
  char c_char1;
  int i_val2;
  int i_val3;
  int i_val4;
  undefined1 temp_buf_18 [4];
  
  i_val4 = 0;
  i_val3 = arg_1 + 0x100;
  for (; arg_1 != i_val3; arg_1 = arg_1 + 4) {
    c_char1 = Item_Routine_0800DEDC(arg_1);
    if (c_char1 == '\0') {
      Item_GetToolExperienceRequired(temp_buf_18,arg_1);
      i_val2 = Item_Routine_0800DCB4(temp_buf_18);
      if (i_val2 == arg_2) goto LAB_0800b802;
    }
    i_val4 = i_val4 + 1;
  }
  i_val4 = -1;
LAB_0800b802:
  return i_val4;
}

