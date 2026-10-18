// =============================================================================
// Harvest Moon: Friends of Mineral Town (GBA) - Decompiled Source
// Module: FURNITURE_AND_BUILDINGS (88 functions)
// Description: Farmhouse appliances (fridge, shelf, tool chest, record player), coop and barn
// =============================================================================

#include "../../include/farm/furniture.h"

// =============================================================================
// Function: ToolChest_GetItem @ 0x0800B814
// =============================================================================
undefined8 ToolChest_GetItem(undefined4 *param_1,int param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 in_lr;
  undefined4 uStack_2c;
  uint3 uStack_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  
  if (param_2 < 0xab) {
    puVar3 = param_1 + 0x40;
    for (; (param_3 != 0 && (param_1 != puVar3)); param_1 = param_1 + 1) {
      uStack_24 = param_3;
      cVar1 = Item_Routine_0800DEDC(param_1);
      if (cVar1 == '\0') {
        Item_Routine_0800DEB8(&uStack_2c,param_1);
        iVar2 = Item_Routine_0800DCB4(&uStack_2c);
        if (iVar2 == param_2) {
          iVar2 = Item_Routine_0800DEF0(param_1);
          uStack_1c = 99U - iVar2;
          puVar4 = &uStack_24;
          if (99U - iVar2 < uStack_24) {
            puVar4 = &uStack_1c;
          }
          uVar5 = *puVar4;
          Item_Routine_0800DF04(param_1,uVar5);
          uStack_24 = uStack_24 - uVar5;
        }
      }
      else {
        uStack_20 = 99;
        puVar4 = &uStack_24;
        if (99 < uStack_24) {
          puVar4 = &uStack_20;
        }
        uVar5 = *puVar4;
        Item_SetIdAndClearQuality(&uStack_28,param_2);
        Item_Routine_0800DE80(&uStack_2c,(uint)uStack_28,uVar5);
        *param_1 = uStack_2c;
        uStack_24 = uStack_24 - uVar5;
      }
      param_3 = uStack_24;
    }
  }
  return CONCAT44(in_lr,param_3);
}

// =============================================================================
// Function: Building_Routine_0800B8E4 @ 0x0800B8E4
// =============================================================================
undefined8 Building_Routine_0800B8E4(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = 0x3f;
  iVar1 = param_1;
  do {
    Item_Routine_0800E010(iVar1);
    iVar1 = iVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != -1);
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: Fridge_GetItem @ 0x0800B910
// =============================================================================
undefined8 Fridge_GetItem(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  undefined1 auStack_1c [4];
  
  iVar3 = 0;
  iVar4 = param_1 + 0x80;
  for (; param_1 != iVar4; param_1 = param_1 + 2) {
    cVar1 = Item_Routine_0800E07C(param_1);
    if (cVar1 == '\0') {
      auStack_1c[0] = Item_Routine_0800E058(param_1);
      iVar2 = Item_GetQuality(auStack_1c);
      if (iVar2 == param_2) {
        iVar2 = Item_Routine_0800E090(param_1);
        iVar3 = (iVar3 + 99) - iVar2;
      }
    }
    else {
      iVar3 = iVar3 + 99;
    }
  }
  return CONCAT44(in_lr,iVar3);
}

// =============================================================================
// Function: Building_Routine_0800B974 @ 0x0800B974
// =============================================================================
undefined8 Building_Routine_0800B974(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  undefined1 auStack_1c [4];
  
  iVar4 = 0;
  iVar3 = param_1 + 0x80;
  for (; param_1 != iVar3; param_1 = param_1 + 2) {
    cVar1 = Item_Routine_0800E07C(param_1);
    if (cVar1 == '\0') {
      auStack_1c[0] = Item_Routine_0800E058(param_1);
      iVar2 = Item_GetQuality(auStack_1c);
      if (iVar2 == param_2) {
        iVar2 = Item_Routine_0800E090(param_1);
        iVar4 = iVar4 + iVar2;
      }
    }
  }
  return CONCAT44(in_lr,iVar4);
}

// =============================================================================
// Function: Building_Routine_0800B9D0 @ 0x0800B9D0
// =============================================================================
undefined8 Building_Routine_0800B9D0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = 0;
  iVar2 = param_1 + 0x80;
  for (; param_1 != iVar2; param_1 = param_1 + 2) {
    cVar1 = Item_Routine_0800E07C(param_1);
    if (cVar1 != '\0') goto LAB_0800b9fa;
    iVar3 = iVar3 + 1;
  }
  iVar3 = -1;
LAB_0800b9fa:
  return CONCAT44(in_lr,iVar3);
}

// =============================================================================
// Function: Shelf_Init @ 0x0800BA00
// =============================================================================
undefined8 Shelf_Init(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  int iStack_c;
  
  iVar2 = 0x3f;
  for (iStack_c = param_1 + 0x80; iStack_c != param_1; iStack_c = iStack_c + -2) {
    cVar1 = Item_Routine_0800E07C(iStack_c + -2);
    if (cVar1 != '\0') goto LAB_0800ba3a;
    iVar2 = iVar2 + -1;
  }
  iVar2 = -1;
LAB_0800ba3a:
  return CONCAT44(in_lr,iVar2);
}

// =============================================================================
// Function: Shelf_GetItem @ 0x0800BA44
// =============================================================================
undefined8 Shelf_GetItem(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  undefined1 auStack_1c [4];
  
  iVar4 = 0;
  iVar3 = param_1 + 0x80;
  for (; param_1 != iVar3; param_1 = param_1 + 2) {
    cVar1 = Item_Routine_0800E07C(param_1);
    if (cVar1 == '\0') {
      auStack_1c[0] = Item_Routine_0800E058(param_1);
      iVar2 = Item_GetQuality(auStack_1c);
      if (iVar2 == param_2) goto LAB_0800ba92;
    }
    iVar4 = iVar4 + 1;
  }
  iVar4 = -1;
LAB_0800ba92:
  return CONCAT44(in_lr,iVar4);
}

// =============================================================================
// Function: Building_Routine_0800BAA8 @ 0x0800BAA8
// =============================================================================
void Building_Routine_0800BAA8(int param_1,int param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  undefined1 auStack_28 [4];
  uint uStack_24;
  uint uStack_20;
  undefined1 uStack_1c;
  undefined1 auStack_1b [3];
  uint uStack_18;
  
  uStack_24 = param_3;
  if (param_2 < 0x5f) {
    iVar5 = param_1 + 0x80;
    for (; (uStack_24 != 0 && (param_1 != iVar5)); param_1 = param_1 + 2) {
      cVar1 = Item_Routine_0800E07C(param_1);
      if (cVar1 == '\0') {
        auStack_1b[0] = Item_Routine_0800E058(param_1);
        iVar2 = Item_GetQuality(auStack_1b);
        if (iVar2 == param_2) {
          iVar2 = Item_Routine_0800E090(param_1);
          uStack_18 = 99U - iVar2;
          puVar4 = &uStack_24;
          if (99U - iVar2 < uStack_24) {
            puVar4 = &uStack_18;
          }
          uVar3 = *puVar4;
          Item_Routine_0800E0A4(param_1,uVar3);
          goto LAB_0800bb46;
        }
      }
      else {
        uStack_20 = 99;
        puVar4 = &uStack_24;
        if (99 < uStack_24) {
          puVar4 = &uStack_20;
        }
        uVar3 = *puVar4;
        Item_SetQuality(&uStack_1c,param_2);
        Item_Routine_0800E028(auStack_28,uStack_1c,uVar3);
        gba_memcpy(param_1,auStack_28,2);
LAB_0800bb46:
        uStack_24 = uStack_24 - uVar3;
      }
    }
  }
  return uStack_24;
}

// =============================================================================
// Function: RecordPlayer_PlayTrack @ 0x0800BB7C
// =============================================================================
undefined8 RecordPlayer_PlayTrack(uint *param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 in_lr;
  
  cVar1 = Building_Routine_0800BB74();
  if (cVar1 == '\0') {
    uVar2 = 199;
  }
  else {
    uVar2 = (uint)*(byte *)(((*param_1 & 0x1f) >> 1) + gRomData_080E9605);
  }
  return CONCAT44(in_lr,uVar2);
}

// =============================================================================
// Function: Building_Routine_0800BBA4 @ 0x0800BBA4
// =============================================================================
undefined8 Building_Routine_0800BBA4(undefined4 param_1,uint *param_2)

{
  char cVar1;
  undefined4 in_lr;
  undefined1 auStack_10 [4];
  
  cVar1 = Building_Routine_0800BB74(param_2);
  if (cVar1 == '\0') {
    Item_Routine_0800E010(param_1);
  }
  else {
    *(byte *)param_2 = (byte)*param_2 & 0xfe;
    Item_SetQuality(auStack_10,((*param_2 & 0x1f) >> 1) + 0x40);
    Item_Routine_0800E028(param_1,auStack_10[0],1);
  }
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: Building_Routine_0800BBF0 @ 0x0800BBF0
// =============================================================================
undefined8 Building_Routine_0800BBF0(undefined4 param_1,uint *param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  undefined1 auStack_18 [4];
  
  iVar2 = Item_GetQuality(param_3);
  if ((iVar2 < 0x4f) && (0x3f < iVar2)) {
    *(byte *)param_2 = (byte)*param_2 | 1;
    uVar3 = *param_2;
    cVar1 = Item_GetQuality(param_3);
    *(byte *)param_2 = (byte)*param_2 & 0xe1 | (cVar1 - 0x40U & 0xf) << 1;
    Item_SetQuality(auStack_18,((uVar3 & 0x1f) >> 1) + 0x40);
    Item_Routine_0800E028(param_1,auStack_18[0],1);
  }
  else {
    Item_Routine_0800E010(param_1);
  }
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: FarmHouse_Init @ 0x0800BC58
// =============================================================================
undefined8 FarmHouse_Init(undefined4 *param_1)

{
  undefined4 in_lr;
  undefined4 *puVar1;
  
  for (puVar1 = param_1; puVar1 != param_1 + 2; puVar1 = puVar1 + 1) {
    *puVar1 = 0;
  }
  param_1[1] = param_1[1] & 0xf0000000;
  for (puVar1 = param_1 + 2; puVar1 != param_1 + 4; puVar1 = puVar1 + 1) {
    *puVar1 = 0;
  }
  param_1[3] = param_1[3] & 0xf0000000;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: FarmHouse_GetLevel @ 0x0800BCB0
// =============================================================================
undefined4 FarmHouse_GetLevel(int param_1,int param_2)

{
  uint uVar1;
  uint *puVar2;
  undefined4 in_lr;
  
  uVar1 = param_2 - 0x4d;
  if (uVar1 < 0x3c) {
    puVar2 = (uint *)(param_1 + (uVar1 >> 5) * 4);
    *puVar2 = *puVar2 | 1 << (uVar1 & 0x1f);
  }
  return in_lr;
}

// =============================================================================
// Function: FarmHouse_Upgrade @ 0x0800BCD0
// =============================================================================
undefined4 FarmHouse_Upgrade(int param_1,int param_2)

{
  uint uVar1;
  uint *puVar2;
  undefined4 in_lr;
  
  uVar1 = param_2 - 0x4d;
  if (uVar1 < 0x3c) {
    puVar2 = (uint *)(param_1 + (uVar1 >> 5) * 4);
    *puVar2 = *puVar2 & ~(1 << (uVar1 & 0x1f));
    puVar2 = (uint *)(param_1 + 8 + (uVar1 >> 5) * 4);
    *puVar2 = *puVar2 | 1 << (uVar1 & 0x1f);
  }
  return in_lr;
}

// =============================================================================
// Function: Building_Routine_0800BD14 @ 0x0800BD14
// =============================================================================
undefined8 Building_Routine_0800BD14(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = param_2 - 0x4d;
  uVar1 = 0;
  if (uVar2 < 0x3c) {
    uVar1 = *(uint *)(param_1 + (uVar2 >> 5) * 4) & 1 << (uVar2 & 0x1f);
    uVar1 = (-uVar1 | uVar1) >> 0x1f;
  }
  return CONCAT44(in_lr,uVar1);
}

// =============================================================================
// Function: Building_Routine_0800BD40 @ 0x0800BD40
// =============================================================================
void Building_Routine_0800BD40(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_2 - 0x4d;
  uVar1 = 0;
  if (uVar2 < 0x3c) {
    uVar1 = *(uint *)(param_1 + 8 + (uVar2 >> 5) * 4) & 1 << (uVar2 & 0x1f);
    uVar1 = (-uVar1 | uVar1) >> 0x1f;
  }
  return uVar1;
}

// =============================================================================
// Function: Building_Routine_0800BDEC @ 0x0800BDEC
// =============================================================================
undefined8 Building_Routine_0800BDEC(int param_1)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  undefined4 in_lr;
  
  puVar2 = (uint *)(param_1 + 8);
  iVar3 = 0;
  do {
    uVar1 = *puVar2;
    puVar2 = puVar2 + 1;
    uVar1 = (uVar1 & 0x55555555) + (uVar1 >> 1 & 0x55555555);
    uVar1 = (uVar1 & 0x33333333) + (uVar1 >> 2 & 0x33333333);
    uVar1 = (uVar1 & 0x0F0F0F0F) + (uVar1 >> 4 & 0x0F0F0F0F);
    uVar1 = (uVar1 & 0x00FF00FF) + (uVar1 >> 8 & 0x00FF00FF);
    iVar3 = iVar3 + (uVar1 & 0xFFFF) + (uVar1 >> 0x10 & 0xFFFF);
  } while (puVar2 != (uint *)(param_1 + 0x10));
  return CONCAT44(in_lr,iVar3);
}

// =============================================================================
// Function: Coop_Init @ 0x0800BE70
// =============================================================================
undefined8 Coop_Init(uint *param_1)

{
  undefined4 in_lr;
  
  *(undefined1 *)param_1 = 0;
  *(byte *)((int)param_1 + 1) = *(byte *)((int)param_1 + 1) & 0x80;
  *param_1 = *param_1 & 0xFF807FFF | 0x2f8000;
  *(byte *)((int)param_1 + 3) = *(byte *)((int)param_1 + 3) & 199 | 0xc0;
  *(undefined1 *)(param_1 + 1) = 0x17;
  *(undefined1 *)((int)param_1 + 5) = 0;
  ShippingBin_Routine_0800B660(param_1 + 2);
  Building_Routine_0800B8E4(param_1 + 0x42);
  Building_Routine_0800BB60(param_1 + 0x62);
  ShippingBin_StatEnt_GetAmountShipped(param_1 + 99);
  FarmHouse_Init(param_1 + 0x83);
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: Coop_GetChickenCount @ 0x0800BF1C
// =============================================================================
undefined8 Coop_GetChickenCount(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = 0;
  if ((int)((uint)*(byte *)(param_1 + 1) * 0x40000000) < 0) {
    iVar1 = param_1 + 8;
  }
  return CONCAT44(in_lr,iVar1);
}

// =============================================================================
// Function: Building_Routine_0800BF34 @ 0x0800BF34
// =============================================================================
undefined8 Building_Routine_0800BF34(int param_1)

{
  undefined4 in_lr;
  
  if ((int)((uint)*(byte *)(param_1 + 1) * 0x20000000) < 0) {
    param_1 = param_1 + 0x108;
  }
  else {
    param_1 = 0;
  }
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: Building_Routine_0800BF50 @ 0x0800BF50
// =============================================================================
undefined8 Building_Routine_0800BF50(int param_1)

{
  undefined4 in_lr;
  
  if ((int)((uint)*(byte *)(param_1 + 1) * 0x10000000) < 0) {
    param_1 = param_1 + 0x188;
  }
  else {
    param_1 = 0;
  }
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: Building_Routine_0800C024 @ 0x0800C024
// =============================================================================
undefined4 Building_Routine_0800C024(byte *param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  bVar1 = *param_1;
  if ((bVar1 & 3) < 2) {
    *param_1 = bVar1 & 0xfc | (bVar1 & 3) + 1 & 3;
  }
  return in_lr;
}

// =============================================================================
// Function: Building_Routine_0800C048 @ 0x0800C048
// =============================================================================
undefined8 Building_Routine_0800C048(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = 0;
  if ((int)((uint)*(byte *)(param_1 + 1) * 0x40000000) < 0) {
    iVar1 = param_1 + 8;
  }
  return CONCAT44(in_lr,iVar1);
}

// =============================================================================
// Function: Building_Routine_0800C060 @ 0x0800C060
// =============================================================================
undefined8 Building_Routine_0800C060(int param_1)

{
  undefined4 in_lr;
  
  if ((int)((uint)*(byte *)(param_1 + 1) * 0x20000000) < 0) {
    param_1 = param_1 + 0x108;
  }
  else {
    param_1 = 0;
  }
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: Building_Routine_0800C07C @ 0x0800C07C
// =============================================================================
undefined8 Building_Routine_0800C07C(int param_1)

{
  undefined4 in_lr;
  
  if ((int)((uint)*(byte *)(param_1 + 1) * 0x10000000) < 0) {
    param_1 = param_1 + 0x188;
  }
  else {
    param_1 = 0;
  }
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: Building_Routine_0800C098 @ 0x0800C098
// =============================================================================
undefined4 Building_Routine_0800C098(byte *param_1,byte param_2)

{
  undefined4 in_lr;
  
  if (1 < (*param_1 & 3)) {
    *param_1 = *param_1 & 0xf3 | (param_2 & 3) << 2;
  }
  return in_lr;
}

// =============================================================================
// Function: Building_Routine_0800C0BC @ 0x0800C0BC
// =============================================================================
undefined4 Building_Routine_0800C0BC(byte *param_1,byte param_2)

{
  undefined4 in_lr;
  
  if (1 < (*param_1 & 3)) {
    *param_1 = *param_1 & 0xcf | (param_2 & 3) << 4;
  }
  return in_lr;
}

// =============================================================================
// Function: Building_Routine_0800C0E0 @ 0x0800C0E0
// =============================================================================
undefined4 Building_Routine_0800C0E0(byte *param_1,char param_2)

{
  undefined4 in_lr;
  
  if (1 < (*param_1 & 3)) {
    *param_1 = *param_1 & 0x3f | param_2 << 6;
  }
  return in_lr;
}

// =============================================================================
// Function: Building_Routine_0800C0FC @ 0x0800C0FC
// =============================================================================
undefined4 Building_Routine_0800C0FC(byte *param_1)

{
  undefined4 in_lr;
  
  if ((*param_1 & 3) == 2) {
    param_1[1] = param_1[1] | 1;
  }
  return in_lr;
}

// =============================================================================
// Function: Building_Routine_0800C118 @ 0x0800C118
// =============================================================================
undefined4 Building_Routine_0800C118(byte *param_1)

{
  undefined4 in_lr;
  
  if ((*param_1 & 3) != 0) {
    param_1[1] = param_1[1] | 2;
  }
  return in_lr;
}

// =============================================================================
// Function: Building_Routine_0800C134 @ 0x0800C134
// =============================================================================
void Building_Routine_0800C134(byte *param_1)

{
  
  if ((*param_1 & 3) != 0) {
    param_1[1] = param_1[1] | 4;
  }
  return;
}

// =============================================================================
// Function: Building_Routine_0800C15C @ 0x0800C15C
// =============================================================================
undefined4 Building_Routine_0800C15C(byte *param_1)

{
  undefined4 in_lr;
  
  if (1 < (*param_1 & 3)) {
    param_1[1] = param_1[1] | 0x10;
  }
  return in_lr;
}

// =============================================================================
// Function: Building_Routine_0800C178 @ 0x0800C178
// =============================================================================
void Building_Routine_0800C178(byte *param_1)

{
  
  if ((*param_1 & 3) != 0) {
    param_1[1] = param_1[1] | 0x20;
  }
  return;
}

// =============================================================================
// Function: Building_Routine_0800C1A0 @ 0x0800C1A0
// =============================================================================
undefined4 Building_Routine_0800C1A0(uint *param_1,uint param_2)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  uVar4 = (param_2 & 0xff) << 0xf;
  uVar1 = *param_1 & 0xFF807FFF;
  *param_1 = uVar1 | uVar4;
  uVar1 = (uVar1 & 0x7fffff | uVar4) >> 0xf;
  if (uVar1 < 5) {
    switch(*(uint *)(uVar1 * 4 + gInlineTable_0800C1D0) & 0xfffffffe) {
    case 0x800c1f4:
      uVar2 = (ushort)0xFFFFF87F & *(ushort *)((int)param_1 + 2);
      uVar3 = 0x380;
      break;
    case 0x800c204:
      uVar2 = (ushort)0xFFFFF87F & *(ushort *)((int)param_1 + 2);
      uVar3 = 0x500;
      break;
    case 0x800c214:
      uVar2 = (ushort)0xFFFFF87F & *(ushort *)((int)param_1 + 2);
      uVar3 = 0x280;
    }
    *(ushort *)((int)param_1 + 2) = uVar2 | uVar3;
  }
  else {
    *(ushort *)((int)param_1 + 2) = (ushort)0xFFFFF87F & *(ushort *)((int)param_1 + 2);
  }
  return in_lr;
}

// =============================================================================
// Function: Building_Routine_0800C25C @ 0x0800C25C
// =============================================================================
undefined4 Building_Routine_0800C25C(byte *param_1)

{
  undefined4 in_lr;
  
  if ((1 < (*param_1 & 3)) && (-1 < (int)((uint)param_1[4] * 0x2000000))) {
    param_1[4] = param_1[4] | 0x40;
  }
  return in_lr;
}

// =============================================================================
// Function: Building_Routine_0800C27C @ 0x0800C27C
// =============================================================================
undefined4 Building_Routine_0800C27C(byte *param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (((*param_1 & 3) != 0) && (iVar1 = Building_Routine_0800C048(param_1), iVar1 != 0)) {
    param_1[4] = param_1[4] | 0x80;
  }
  return in_lr;
}

// =============================================================================
// Function: Building_Routine_0800C2A4 @ 0x0800C2A4
// =============================================================================
undefined4 Building_Routine_0800C2A4(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 4) < '\0') {
    *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 1;
  }
  return in_lr;
}

// =============================================================================
// Function: Building_Routine_0800C2BC @ 0x0800C2BC
// =============================================================================
undefined4 Building_Routine_0800C2BC(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 4) < '\0') {
    *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 2;
  }
  return in_lr;
}

// =============================================================================
// Function: Building_Routine_0800C2D4 @ 0x0800C2D4
// =============================================================================
undefined4 Building_Routine_0800C2D4(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 4) < '\0') {
    *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 4;
  }
  return in_lr;
}

// =============================================================================
// Function: Building_Routine_0800C2EC @ 0x0800C2EC
// =============================================================================
undefined4 Building_Routine_0800C2EC(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 4) < '\0') {
    *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 8;
  }
  return in_lr;
}

// =============================================================================
// Function: Building_Routine_0800C304 @ 0x0800C304
// =============================================================================
undefined4 Building_Routine_0800C304(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 4) < '\0') {
    *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 0x10;
  }
  return in_lr;
}

// =============================================================================
// Function: Building_Routine_0800C31C @ 0x0800C31C
// =============================================================================
undefined4 Building_Routine_0800C31C(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 4) < '\0') {
    *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 0x20;
  }
  return in_lr;
}

// =============================================================================
// Function: Building_Routine_0800C334 @ 0x0800C334
// =============================================================================
undefined4 Building_Routine_0800C334(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 4) < '\0') {
    *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 0x40;
  }
  return in_lr;
}

// =============================================================================
// Function: Building_Routine_0800C34C @ 0x0800C34C
// =============================================================================
undefined4 Building_Routine_0800C34C(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 4) < '\0') {
    *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 0x80;
  }
  return in_lr;
}

// =============================================================================
// Function: Building_Routine_0800C364 @ 0x0800C364
// =============================================================================
undefined4 Building_Routine_0800C364(int param_1,uint param_2)

{
  undefined4 in_lr;
  
  *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0x3f | (byte)((param_2 & 3) << 6);
  *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) & 0xc0 | (byte)(param_2 >> 2) & 0x3f;
  return in_lr;
}

// =============================================================================
// Function: Building_Routine_0800C390 @ 0x0800C390
// =============================================================================
undefined4 Building_Routine_0800C390(uint *param_1,int param_2)

{
  ushort uVar1;
  byte bVar2;
  uint uVar3;
  undefined4 in_lr;
  
  *(byte *)(param_1 + 1) = (byte)param_1[1] & 0xbf;
  if (-1 < (int)((uint)*(byte *)((int)param_1 + 1) * 0x2000000)) {
    return in_lr;
  }
  if ((*param_1 & 0x7fffff) >> 0xf == 0x5f) {
    return in_lr;
  }
  uVar1 = *(ushort *)((int)param_1 + 2);
  if ((uVar1 & 0x780) != 0) {
    *(ushort *)((int)param_1 + 2) =
         (ushort)0xFFFFF87F & uVar1 | (ushort)((((uVar1 & 0x7ff) >> 7) - 1 & 0xf) << 7);
  }
  uVar3 = (*param_1 & 0x7fffff) >> 0xf;
  if (uVar3 < 5) {
    switch(*(uint *)(uVar3 * 4 + gInlineTable_0800C3F0) & 0xfffffffe) {
    case 0x800c404:
      if (param_2 == 0) goto LAB_0800c420;
      break;
    case 0x800c40a:
      if (param_2 == 1) goto LAB_0800c420;
      break;
    case 0x800c410:
      if (param_2 == 2) goto LAB_0800c420;
    }
    *param_1 = 0xFF807FFF & *param_1 | 0x2f8000;
  }
LAB_0800c420:
  if (((*param_1 & 0x7800000) == 0) && (bVar2 = math_rand(), bVar2 < 0x65)) {
    *param_1 = *param_1 & 0xFF807FFF | 0x2f8000;
  }
  return in_lr;
}

// =============================================================================
// Function: Barn_Init @ 0x0800C450
// =============================================================================
undefined8 Barn_Init(uint *param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  uint *puVar3;
  int iVar4;
  undefined4 in_lr;
  
  *(byte *)param_1 = (byte)*param_1 & 0xfe;
  *(ushort *)param_1 = (ushort)0xFFFFF801 & (ushort)*param_1;
  *(byte *)((int)param_1 + 1) = *(byte *)((int)param_1 + 1) & 0xf7;
  *param_1 = *param_1 & 0xFFF00FFF;
  *(byte *)((int)param_1 + 2) = *(byte *)((int)param_1 + 2) & 0xef;
  *(byte *)((int)param_1 + 3) = 0;
  *(byte *)(param_1 + 1) = (byte)param_1[1] & 0xfc;
  *(byte *)(param_1 + 2) = 0;
  puVar3 = param_1 + 6;
  iVar4 = 7;
  do {
    *(byte *)puVar3 = (byte)*puVar3 & 0xfe;
    uVar2 = 0xFFFFFC00;
    puVar3 = puVar3 + 0xc;
    iVar4 = iVar4 + -1;
  } while (iVar4 != -1);
  puVar3 = param_1 + 0x66;
  iVar4 = 7;
  do {
    uVar1 = (ushort)uVar2;
    *(ushort *)puVar3 = uVar1 & (ushort)*puVar3 | 0x234;
    *(byte *)((int)puVar3 + 1) = *(byte *)((int)puVar3 + 1) & 3;
    *(ushort *)((int)puVar3 + 2) = uVar1 & *(ushort *)((int)puVar3 + 2);
    *(byte *)((int)puVar3 + 3) = *(byte *)((int)puVar3 + 3) & 3;
    *(ushort *)(puVar3 + 1) = uVar1 & (ushort)puVar3[1];
    *(byte *)((int)puVar3 + 6) = *(byte *)((int)puVar3 + 6) & 0xf8;
    puVar3 = puVar3 + 2;
    iVar4 = iVar4 + -1;
  } while (iVar4 != -1);
  puVar3 = param_1 + 0x76;
  iVar4 = 1;
  do {
    *(byte *)puVar3 = (byte)*puVar3 & 0xf8;
    puVar3 = puVar3 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != -1);
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: Barn_GetCowCount @ 0x0800C570
// =============================================================================
undefined8 Barn_GetCowCount(byte *param_1)

{
  uint *puVar1;
  undefined4 in_lr;
  uint uStack_c;
  uint auStack_8 [2];
  
  uStack_c = 8;
  auStack_8[0] = (*param_1 & 1) * 4 + 4;
  puVar1 = &uStack_c;
  if (auStack_8[0] < 8) {
    puVar1 = auStack_8;
  }
  return CONCAT44(in_lr,*puVar1);
}

// =============================================================================
// Function: Building_Routine_0800C598 @ 0x0800C598
// =============================================================================
undefined8 Building_Routine_0800C598(uint *param_1,uint param_2)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = Barn_GetCowCount();
  if (param_2 < uVar1) {
    uVar1 = -((*param_1 & 0xfffff) >> 0xc & 1 << (param_2 & 0xff)) >> 0x1f;
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

// =============================================================================
// Function: Building_Routine_0800C5CC @ 0x0800C5CC
// =============================================================================
undefined8 Building_Routine_0800C5CC(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  uVar1 = Barn_GetCowCount();
  if (param_2 < uVar1) {
    uVar2 = Building_Routine_0800CCB8(param_1 + param_2 * 0x30 + 0x18);
  }
  else {
    uVar2 = 0;
  }
  return CONCAT44(in_lr,uVar2);
}

// =============================================================================
// Function: Building_Routine_0800C5F4 @ 0x0800C5F4
// =============================================================================
undefined8 Building_Routine_0800C5F4(int param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = Barn_GetCowCount();
  if (param_2 < uVar2) {
    param_1 = param_2 * 0x30 + 0x18 + param_1;
    do {
      cVar1 = Building_Routine_0800CCAC(param_1);
      if (cVar1 != '\0') goto LAB_0800c62a;
      param_1 = param_1 + 0x30;
      param_2 = param_2 + 1;
    } while (param_2 < uVar2);
  }
  param_2 = 0xffffffff;
LAB_0800c62a:
  return CONCAT44(in_lr,param_2);
}

// =============================================================================
// Function: Building_Routine_0800C630 @ 0x0800C630
// =============================================================================
undefined8 Building_Routine_0800C630(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  uVar1 = Barn_GetCowCount();
  iVar4 = 0;
  uVar3 = 0;
  if (uVar1 != 0) {
    param_1 = param_1 + 0x18;
    do {
      iVar2 = Building_Routine_0800CCB8(param_1);
      if (iVar2 != 0) {
        iVar4 = iVar4 + 1;
      }
      param_1 = param_1 + 0x30;
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  return CONCAT44(in_lr,iVar4);
}

// =============================================================================
// Function: Building_Routine_0800C660 @ 0x0800C660
// =============================================================================
undefined8 Building_Routine_0800C660(byte *param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = 2;
  if ((*param_1 & 1) == 0) {
    uVar1 = 1;
  }
  return CONCAT44(in_lr,uVar1);
}

// =============================================================================
// Function: Building_Routine_0800C678 @ 0x0800C678
// =============================================================================
undefined8 Building_Routine_0800C678(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  uVar1 = Building_Routine_0800C660();
  if (param_2 < uVar1) {
    uVar2 = Building_Routine_0800CD38(param_1 + param_2 * 4 + 0x1d8);
  }
  else {
    uVar2 = 0;
  }
  return CONCAT44(in_lr,uVar2);
}

// =============================================================================
// Function: Building_Routine_0800C6A0 @ 0x0800C6A0
// =============================================================================
undefined8 Building_Routine_0800C6A0(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = Barn_GetCowCount();
  if ((param_2 < uVar1) &&
     (uVar1 = (uint)*(ushort *)(param_1 + param_2 * 8 + 0x198) * 0x400000,
     uVar1 < 0x8CC00000 || uVar1 - 0x8CC00000 == 0)) {
    param_1 = param_1 + param_2 * 8 + 0x198;
  }
  else {
    param_1 = 0;
  }
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: Building_Routine_0800C6D8 @ 0x0800C6D8
// =============================================================================
undefined8 Building_Routine_0800C6D8(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if ((int)((uint)*(byte *)(param_1 + 2) * 0x8000000) < 0) {
    uVar1 = (uint)(*(byte *)(param_1 + 2) >> 5);
  }
  else {
    uVar1 = 0xffffffff;
  }
  return CONCAT44(in_lr,uVar1);
}

// =============================================================================
// Function: Building_Routine_0800C6F0 @ 0x0800C6F0
// =============================================================================
undefined8 Building_Routine_0800C6F0(short *param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = Barn_GetCowCount(param_2);
  if (uVar1 <= param_3) {
    param_3 = math_modsi3(param_3);
  }
  *param_1 = (short)param_3 * 0x18 + 0x88;
  param_1[1] = 0x60;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: Building_Routine_0800C720 @ 0x0800C720
// =============================================================================
undefined8 Building_Routine_0800C720(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  uVar1 = Building_Routine_0800C660();
  if (param_2 < uVar1) {
    uVar2 = Building_Routine_0800CD58(param_1 + param_2 * 4 + 0x1d8);
  }
  else {
    uVar2 = 0;
  }
  return CONCAT44(in_lr,uVar2);
}

// =============================================================================
// Function: Building_Routine_0800C76C @ 0x0800C76C
// =============================================================================
undefined4 Building_Routine_0800C76C(byte *param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  bVar1 = *param_1;
  if ((bVar1 & 1) == 0) {
    *param_1 = bVar1 & 0xfe | 1U - (char)((int)((uint)bVar1 << 0x1f) >> 0x1f) & 1;
  }
  return in_lr;
}

// =============================================================================
// Function: Building_Routine_0800C794 @ 0x0800C794
// =============================================================================
undefined4 Building_Routine_0800C794(ushort *param_1,int param_2)

{
  uint *puVar1;
  undefined4 in_lr;
  uint uStack_14;
  uint uStack_10;
  
  uStack_14 = 0x3E7;
  uStack_10 = ((*param_1 & 0x7ff) >> 1) + param_2;
  puVar1 = &uStack_14;
  if (uStack_10 < 0x3E7) {
    puVar1 = &uStack_10;
  }
  *param_1 = (ushort)0xFFFFF801 & *param_1 | (ushort)((*puVar1 & 0x3FF) << 1);
  return in_lr;
}

// =============================================================================
// Function: Building_Routine_0800C7D8 @ 0x0800C7D8
// =============================================================================
undefined4 Building_Routine_0800C7D8(ushort *param_1,uint param_2)

{
  ushort uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar1 = *param_1;
  uVar2 = (uVar1 & 0x7ff) >> 1;
  if (param_2 < uVar2) {
    *param_1 = (ushort)0xFFFFF801 & uVar1 | (ushort)((uVar2 - param_2 & 0x3FF) << 1);
  }
  else {
    *param_1 = (ushort)0xFFFFF801 & uVar1;
  }
  return in_lr;
}

// =============================================================================
// Function: Building_Routine_0800C814 @ 0x0800C814
// =============================================================================
undefined4 Building_Routine_0800C814(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar1 = Barn_GetCowCount();
  if (param_2 < uVar1) {
    uVar1 = (*param_1 & 0xfffff) >> 0xc;
    uVar2 = 1 << (param_2 & 0xff);
    if ((uVar1 & uVar2) == 0) {
      *param_1 = 0xFFF00FFF & *param_1 | (uVar1 | uVar2 & 0xff) << 0xc;
    }
  }
  return in_lr;
}

// =============================================================================
// Function: Building_Routine_0800C850 @ 0x0800C850
// =============================================================================
undefined4 Building_Routine_0800C850(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar1 = Barn_GetCowCount();
  if (param_2 < uVar1) {
    uVar1 = (*param_1 & 0xfffff) >> 0xc;
    uVar2 = 1 << (param_2 & 0xff);
    if ((uVar1 & uVar2) != 0) {
      *param_1 = 0xFFF00FFF & *param_1 | (uVar1 & ~uVar2) << 0xc;
    }
  }
  return in_lr;
}

// =============================================================================
// Function: Building_Routine_0800C894 @ 0x0800C894
// =============================================================================
undefined8 Building_Routine_0800C894(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  uVar1 = Barn_GetCowCount();
  if (param_2 < uVar1) {
    uVar2 = Building_Routine_0800CCD0(param_1 + param_2 * 0x30 + 0x18);
  }
  else {
    uVar2 = 0;
  }
  return CONCAT44(in_lr,uVar2);
}

// =============================================================================
// Function: Building_Routine_0800C8BC @ 0x0800C8BC
// =============================================================================
undefined8 Building_Routine_0800C8BC(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = 0;
  while (iVar2 = Building_Routine_0800C5F4(param_1,iVar2), -1 < iVar2) {
    cVar1 = Building_Routine_0800CCE8(param_1 + iVar2 * 0x30 + 0x18,param_2);
    if (cVar1 != '\0') goto LAB_0800c8f2;
    iVar2 = iVar2 + 1;
  }
  iVar2 = -1;
LAB_0800c8f2:
  return CONCAT44(in_lr,iVar2);
}

// =============================================================================
// Function: Building_Routine_0800C8F8 @ 0x0800C8F8
// =============================================================================
undefined4 Building_Routine_0800C8F8(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = Barn_GetCowCount();
  if (param_2 < uVar1) {
    Building_Routine_0800CD20(param_1 + param_2 * 0x30 + 0x18);
  }
  return in_lr;
}

// =============================================================================
// Function: Building_Routine_0800C91C @ 0x0800C91C
// =============================================================================
undefined4 Building_Routine_0800C91C(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  iVar1 = Building_Routine_0800C894();
  if (iVar1 != 0) {
    uVar2 = Animal_Routine_0809B220();
    if (((*(byte *)(param_1 + 4) & 3) << 8 | (uint)*(byte *)(param_1 + 3)) < uVar2) {
      *(char *)(param_1 + 3) = (char)uVar2;
      *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) & 0xfc | (byte)(uVar2 >> 8) & 3;
      uVar3 = Animal_Routine_0809B1F4(iVar1);
      uVar2 = gba_strlen();
      if (0xc < uVar2) {
        uVar2 = 0xc;
      }
      gba_memcpy(param_1 + 8,uVar3,uVar2);
      *(undefined1 *)(param_1 + 8 + uVar2) = 0;
    }
    Building_Routine_0800C8F8(param_1,param_2);
  }
  return in_lr;
}

// =============================================================================
// Function: Building_Routine_0800C994 @ 0x0800C994
// =============================================================================
undefined4 Building_Routine_0800C994(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = Building_Routine_0800C660();
  if (param_2 < uVar1) {
    Building_Routine_0800CD78(param_1 + param_2 * 4 + 0x1d8);
  }
  return in_lr;
}

// =============================================================================
// Function: Building_Routine_0800C9B8 @ 0x0800C9B8
// =============================================================================
undefined4 Building_Routine_0800C9B8(int param_1,uint param_2)

{
  uint uVar1;
  ushort *puVar2;
  undefined4 in_lr;
  
  uVar1 = Barn_GetCowCount();
  if (param_2 < uVar1) {
    puVar2 = (ushort *)(param_1 + param_2 * 8 + 0x198);
    *puVar2 = (ushort)0xFFFFFC00 & *puVar2 | 0x234;
  }
  return in_lr;
}

// =============================================================================
// Function: Building_Routine_0800C9EC @ 0x0800C9EC
// =============================================================================
undefined4 Building_Routine_0800C9EC(uint *param_1)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  undefined4 in_lr;
  uint uStack_38;
  undefined4 uStack_34;
  undefined1 auStack_30 [8];
  uint uStack_28;
  undefined1 *puStack_24;
  
  uVar7 = *param_1;
  uVar4 = ((uVar7 & 0xfffff) >> 0xc & 0x55555555) + ((uVar7 & 0xfffff) >> 0xd & 0x55555555);
  uVar4 = (uVar4 & 0x33333333) + (uVar4 >> 2 & 0x33333333);
  uVar4 = (uVar4 & 0x0F0F0F0F) + (uVar4 >> 4 & 0x0F0F0F0F);
  uVar4 = (uVar4 & 0x00FF00FF) + (uVar4 >> 8 & 0x00FF00FF) & 0xFFFF;
  *param_1 = uVar7 & 0xFFF00FFF;
  uStack_28 = Barn_GetCowCount(param_1);
  uVar7 = 0;
  if (uStack_28 != 0) {
    puStack_24 = auStack_30;
    puVar9 = param_1 + 0x66;
    puVar8 = param_1 + 6;
    do {
      cVar2 = Building_Routine_0800CCAC(puVar8);
      if ((cVar2 == '\0') && (iVar5 = Building_Routine_0800CCD0(puVar8), iVar5 != 0)) {
        if (((int)((uint)*(byte *)((int)param_1 + 2) * 0x8000000) < 0) &&
           (uVar7 == *(byte *)((int)param_1 + 2) >> 5)) {
LAB_0800caa0:
          Animal_Routine_0809BCF0(iVar5);
        }
        else {
          cVar2 = Animal_Routine_0809B4FC(iVar5);
          if (cVar2 == '\0') {
            iVar6 = Animal_Routine_0809BCAC(iVar5);
            if (iVar6 == 0) goto LAB_0800caa0;
            if ((uVar4 != 0) && (Actor_CopyLocation2(&uStack_38,iVar5), (uStack_38 & 0x3ff) == 0x11)) {
              uVar4 = uVar4 - 1;
              Animal_Routine_0809BCF0(iVar5);
            }
          }
        }
        Animal_Routine_0809BD38(iVar5);
        cVar2 = Chicken_GetAffection(iVar5);
        if (cVar2 != '\0') {
          Actor_CopyLocation2(puStack_24,iVar5);
          bVar3 = Animal_Routine_0809BCFC(iVar5);
          gba_memcpy(&uStack_38,puStack_24,6);
          bVar1 = uStack_34._2_1_ & 0xf8;
          uStack_34._0_3_ = CONCAT12(bVar1 | bVar3 & 7,(undefined2)uStack_34);
          *puVar9 = uStack_38;
          puVar9[1] = uStack_34;
        }
      }
      puVar9 = puVar9 + 2;
      puVar8 = puVar8 + 0xc;
      uVar7 = uVar7 + 1;
    } while (uVar7 < uStack_28);
  }
  uVar4 = Building_Routine_0800C660(param_1);
  uVar7 = 0;
  if (uVar4 != 0) {
    param_1 = param_1 + 0x76;
    do {
      cVar2 = Building_Routine_0800CD38(param_1);
      if (cVar2 != '\0') {
        Building_Routine_0800CD88(param_1);
      }
      param_1 = param_1 + 1;
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar4);
  }
  return in_lr;
}

// =============================================================================
// Function: Building_Routine_0800CB7C @ 0x0800CB7C
// =============================================================================
undefined4 Building_Routine_0800CB7C(int param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = Barn_GetCowCount();
  if (uVar2 <= param_2) {
    param_2 = math_modsi3(param_2);
  }
  cVar1 = Building_Routine_0800CCAC(param_1 + param_2 * 0x30 + 0x18);
  if (cVar1 == '\0') {
    *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) & 0x1f | 0x10 | (byte)(param_2 << 5);
  }
  return in_lr;
}

// =============================================================================
// Function: Building_Routine_0800CBCC @ 0x0800CBCC
// =============================================================================
undefined8 Building_Routine_0800CBCC(int param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 in_lr;
  undefined1 auStack_60 [6];
  undefined1 uStack_5a;
  undefined2 uStack_58;
  undefined2 uStack_56;
  ushort uStack_54;
  undefined1 auStack_50 [44];
  uint uStack_24;
  undefined4 uStack_20;
  
  cVar4 = Building_Routine_0800C720();
  if (cVar4 == '\0') {
    uVar5 = 0xffffffff;
  }
  else {
    Building_Routine_0800CDB0(param_1 + param_2 * 4 + 0x1d8);
    Building_Routine_0800C748(&uStack_24,param_1,param_2);
    uStack_20 = uStack_24;
    uVar3 = uStack_20;
    uStack_20._0_2_ = (ushort)uStack_24;
    uStack_20._2_2_ = (ushort)(uStack_24 >> 0x10);
    uVar2 = (ushort)0xFFFFFC00;
    uVar1 = uVar2 & uStack_58;
    uStack_58._1_1_ = (byte)(uVar1 >> 8);
    uStack_58 = CONCAT11(uStack_58._1_1_ & 3 | (byte)((uStack_24 & 0x3f) << 2),(char)uVar1) | 0x11;
    uVar1 = uVar2 & uStack_56 | (ushort)uStack_20 >> 6;
    uStack_56._1_1_ = (byte)(uVar1 >> 8);
    uStack_56 = CONCAT11(uStack_56._1_1_ & 3 | (byte)((uStack_20._2_2_ & 0x3f) << 2),(char)uVar1);
    uStack_54 = uVar2 & uStack_54 | uStack_20._2_2_ >> 6;
    uStack_20 = uVar3;
    gba_memcpy(auStack_60,&uStack_58,6);
    uStack_5a = 3;
    Animal_Routine_0809BC8C(auStack_50,auStack_60,0,0);
    uVar5 = math_rand();
    uVar5 = math_umodsi3(uVar5,10);
    NPC_AddFriendship(auStack_50,uVar5);
    uVar5 = Building_Routine_0800C8BC(param_1,auStack_50);
  }
  return CONCAT44(in_lr,uVar5);
}

// =============================================================================
// Function: Building_Routine_0800CCB8 @ 0x0800CCB8
// =============================================================================
undefined8 Building_Routine_0800CCB8(byte *param_1)

{
  byte *pbVar1;
  undefined4 in_lr;
  
  pbVar1 = (byte *)0x0;
  if ((*param_1 & 1) != 0) {
    pbVar1 = param_1 + 4;
  }
  return CONCAT44(in_lr,pbVar1);
}

// =============================================================================
// Function: Building_Routine_0800CCD0 @ 0x0800CCD0
// =============================================================================
undefined8 Building_Routine_0800CCD0(byte *param_1)

{
  byte *pbVar1;
  undefined4 in_lr;
  
  pbVar1 = (byte *)0x0;
  if ((*param_1 & 1) != 0) {
    pbVar1 = param_1 + 4;
  }
  return CONCAT44(in_lr,pbVar1);
}

// =============================================================================
// Function: Building_Routine_0800CCE8 @ 0x0800CCE8
// =============================================================================
undefined8 Building_Routine_0800CCE8(byte *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if ((*param_1 & 1) == 0) {
    if (param_1 + 4 != (byte *)0x0) {
      VTable_Routine_080D7C40(param_1 + 4);
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x24);
      *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x28);
    }
    *param_1 = *param_1 | 1;
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

// =============================================================================
// Function: Building_Routine_0800CD20 @ 0x0800CD20
// =============================================================================
undefined4 Building_Routine_0800CD20(byte *param_1)

{
  undefined4 in_lr;
  
  if ((*param_1 & 1) != 0) {
    *param_1 = *param_1 & 0xfe;
  }
  return in_lr;
}

// =============================================================================
// Function: Building_Routine_0800CD40 @ 0x0800CD40
// =============================================================================
undefined8 Building_Routine_0800CD40(uint *param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if ((int)(*param_1 * 0x20000000) < 0) {
    uVar1 = *param_1 & 3;
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

// =============================================================================
// Function: Building_Routine_0800CD58 @ 0x0800CD58
// =============================================================================
void Building_Routine_0800CD58(byte *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((*(int *)param_1 * 0x20000000 < 0) && ((*param_1 & 3) == 0)) {
    uVar1 = 1;
  }
  return uVar1;
}

// =============================================================================
// Function: Building_Routine_0800CD88 @ 0x0800CD88
// =============================================================================
undefined4 Building_Routine_0800CD88(byte *param_1)

{
  undefined4 in_lr;
  
  if ((*param_1 & 3) != 0) {
    *param_1 = *param_1 & 0xfc | ((byte)*(undefined4 *)param_1 & 3) - 1 & 3;
  }
  return in_lr;
}

// =============================================================================
// Function: Building_Routine_0800CE74 @ 0x0800CE74
// =============================================================================
undefined8 Building_Routine_0800CE74(byte *param_1)

{
  uint *puVar1;
  undefined4 in_lr;
  uint uStack_c;
  uint auStack_8 [2];
  
  uStack_c = 0x10;
  auStack_8[0] = (*param_1 & 1) * 8 + 8;
  puVar1 = &uStack_c;
  if (auStack_8[0] < 0x10) {
    puVar1 = auStack_8;
  }
  return CONCAT44(in_lr,*puVar1);
}

// =============================================================================
// Function: Building_Routine_0800CEA8 @ 0x0800CEA8
// =============================================================================
undefined8 Building_Routine_0800CEA8(uint *param_1,uint param_2)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = Building_Routine_0800CE74();
  if (param_2 < uVar1) {
    uVar1 = -((*param_1 & 0x1fffffff) >> 0xd & 1 << (param_2 & 0xff)) >> 0x1f;
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

// =============================================================================
// Function: Building_Routine_0800CED4 @ 0x0800CED4
// =============================================================================
undefined8 Building_Routine_0800CED4(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = Item_HasStarQuality();
  if (param_2 < uVar1) {
    uVar1 = -((*(byte *)(param_1 + 3) & 0x7f) >> 5 & 1 << (param_2 & 0xff)) >> 0x1f;
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

// =============================================================================
// Function: Building_Routine_0800CF10 @ 0x0800CF10
// =============================================================================
undefined8 Building_Routine_0800CF10(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  uVar1 = Building_Routine_0800CE74();
  if (param_2 < uVar1) {
    uVar2 = FoodStack_SubtractAmount(param_1 + param_2 * 0x3c + 0x2c);
  }
  else {
    uVar2 = 0;
  }
  return CONCAT44(in_lr,uVar2);
}

// =============================================================================
// Function: Building_Routine_0800CF38 @ 0x0800CF38
// =============================================================================
undefined8 Building_Routine_0800CF38(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  uVar1 = Building_Routine_0800CE74();
  if (param_2 < uVar1) {
    uVar2 = Article_Construct(param_1 + param_2 * 0x3c + 0x2c);
  }
  else {
    uVar2 = 0;
  }
  return CONCAT44(in_lr,uVar2);
}

// =============================================================================
// Function: Building_Routine_0800CF60 @ 0x0800CF60
// =============================================================================
undefined8 Building_Routine_0800CF60(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  uVar1 = Building_Routine_0800CE74();
  if (param_2 < uVar1) {
    uVar2 = FoodStack_AddAmount(param_1 + param_2 * 0x3c + 0x2c);
  }
  else {
    uVar2 = 0;
  }
  return CONCAT44(in_lr,uVar2);
}

// =============================================================================
// Function: Building_Routine_0800CF88 @ 0x0800CF88
// =============================================================================
undefined8 Building_Routine_0800CF88(int param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = Building_Routine_0800CE74();
  if (param_2 < uVar2) {
    param_1 = param_2 * 0x3c + 0x2c + param_1;
    do {
      cVar1 = Item_IsValid(param_1);
      if (cVar1 != '\0') goto LAB_0800cfbe;
      param_1 = param_1 + 0x3c;
      param_2 = param_2 + 1;
    } while (param_2 < uVar2);
  }
  param_2 = 0xffffffff;
LAB_0800cfbe:
  return CONCAT44(in_lr,param_2);
}

// =============================================================================
// Function: Building_Routine_0800CFC4 @ 0x0800CFC4
// =============================================================================
undefined8 Building_Routine_0800CFC4(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  uVar1 = Building_Routine_0800CE74();
  iVar4 = 0;
  uVar3 = 0;
  if (uVar1 != 0) {
    param_1 = param_1 + 0x2c;
    do {
      iVar2 = FoodStack_SubtractAmount(param_1);
      if (iVar2 != 0) {
        iVar4 = iVar4 + 1;
      }
      param_1 = param_1 + 0x3c;
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  return CONCAT44(in_lr,iVar4);
}

// =============================================================================
// Function: Building_Routine_0800CFF4 @ 0x0800CFF4
// =============================================================================
undefined8 Building_Routine_0800CFF4(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  uVar1 = Building_Routine_0800CE74();
  iVar4 = 0;
  uVar3 = 0;
  if (uVar1 != 0) {
    param_1 = param_1 + 0x2c;
    do {
      iVar2 = Article_Construct(param_1);
      if (iVar2 != 0) {
        iVar4 = iVar4 + 1;
      }
      param_1 = param_1 + 0x3c;
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  return CONCAT44(in_lr,iVar4);
}

