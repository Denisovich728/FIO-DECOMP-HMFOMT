/* FIO-DECOMP-HMFOMT :: Port Readable Module: NpcSystem (10 functions) */
#include <stdint.h>
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
#ifndef __cplusplus
typedef u32 bool;
#define true 1
#define false 0
#endif
#ifndef NULL
#define NULL 0
#endif

/* 0x0809E9B8 (180B) | NpcSystem_Sub_0809E9B8 (orig: func_0809E9B8) | origin: wip | domain: NpcSystem | HIGH / fomt_studio_table */
u32 NpcSystem_Sub_0809E9B8(int param_1) {
  u16 uVar1;
  u32 uVar2;
  u32 uVar3;
  u8 auStack_28 [6];
  u8 uStack_22;
  u16 uStack_20;
  u16 uStack_1e;
  u16 uStack_1c;
  uVar1 = (u16)0xFFFFFC00;
  uStack_20 = uVar1 & uStack_20 & 0x3ff | 0x901d;
  uStack_1e = uVar1 & uStack_1e & 0x3ff | 0x9001;
  uStack_1c = uVar1 & uStack_1c | 1;
  LibC_memcpy(auStack_28,&uStack_20,6);
  uStack_22 = 0;
  Npc_Ctor(param_1,auStack_28);
  uVar2 = 0x08104108;
  uVar3 = LibC_strlen(0x08104108);
  if (0xc < uVar3) {
    uVar3 = 0xc;
  }
  LibC_memcpy(param_1 + 0x14,uVar2,uVar3);
  *(u8 *)(param_1 + 0x14 + uVar3) = 0;
  *(u8 *)(param_1 + 0x24) = *(u8 *)(param_1 + 0x24) & 0x80;
  *(u8 *)(param_1 + 0x25) = 0;
  return param_1;
}

/* 0x0809EA6C (96B) | NpcSystem_Sub_0809EA6C (orig: func_0809EA6C) | origin: wip | domain: NpcSystem | HIGH / fomt_studio_table */
u32 NpcSystem_Sub_0809EA6C(int param_1, int param_2, s16 param_3) {
  u32 val;
  val = Npc_Ctor();
  val = LibC_strlen(0x08104108, param_3);
  return val;
}

/* 0x0809FE3C (56B) | NpcSystem_Sub_0809FE3C (orig: func_0809FE3C) | origin: wip | domain: NpcSystem | HIGH / fomt_studio_table */
u32 NpcSystem_Sub_0809FE3C(int param_1,u32 param_2) {
  u32 uVar1;
  uVar1 = 0x08104108;
  if (param_2 < 0x2b) {
    if ((param_2 == 0) || (param_2 != 0x23)) {
      uVar1 = *(u32 *)(param_2 * 8 + 0x08104258);
    }
    else {
      uVar1 = code_809E804_Sub_0809EACC(param_1 + 4);
    }
  }
  return uVar1;
}

/* 0x080A05E8 (200B) | NpcSystem_Sub_080A05E8 (orig: func_080A05E8) | origin: wip | domain: NpcSystem | MEDIUM / graph_algebra */
void NpcSystem_Sub_080A05E8(int param_1,u32 param_2) {
  u16 uVar1;
  u32 uStack_54;
  u32 uStack_50;
  u32 uStack_4c;
  u32 uStack_48;
  u32 uStack_44;
  u8 auStack_40 [16];
  u8 uStack_30;
  u8 uStack_2f;
  u8 bStack_2e;
  u8 auStack_2c [6];
  u8 uStack_26;
  u16 uStack_24;
  u16 uStack_22;
  u16 uStack_20;
  if ((*(u8 *)(param_1 + 3) & 3) >> 1 == 0) {
    *(u8 *)(param_1 + 3) = *(u8 *)(param_1 + 3) | 2;
    uVar1 = (u16)0xFFFFFC00;
    uStack_24 = uVar1 & uStack_24 & 0x3ff | 0x901d;
    uStack_22 = uVar1 & uStack_22 & 0x3ff | 0x9001;
    uStack_20 = uVar1 & uStack_20 | 1;
    LibC_memcpy(auStack_2c,&uStack_24,6);
    uStack_26 = 0;
    NpcSystem_Sub_0809EA6C(&uStack_54,param_2,auStack_2c);
    *(u32 *)(param_1 + 4) = uStack_54;
    *(u32 *)(param_1 + 8) = uStack_50;
    *(u32 *)(param_1 + 0xc) = uStack_4c;
    *(u32 *)(param_1 + 0x10) = uStack_48;
    *(u32 *)(param_1 + 0x14) = uStack_44;
    LibC_strcpy(param_1 + 0x18,auStack_40);
    *(u8 *)(param_1 + 0x28) = uStack_30;
    *(u8 *)(param_1 + 0x29) = uStack_2f;
    *(u8 *)(param_1 + 0x2a) = *(u8 *)(param_1 + 0x2a) & 0xfe | bStack_2e & 1;
  }
}

/* 0x080A0B18 (2400B) | NpcSystem_Sub_080A0B18 (orig: func_080A0B18) | origin: wip | domain: NpcSystem | HIGH / fomt_studio_table */
void NpcSystem_Sub_080A0B18(u32 *param_1,int param_2,int param_3,u32 param_4,int param_5) {
  u32 uVar1;
  int iVar2;
  u32 uVar3;
  u32 uVar4;
  u32 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  u32 uVar9;
  u32 *puVar10;
  u8 *pbVar11;
  u32 *puVar12;
  u32 uStack_68;
  u32 uStack_64;
  u32 uStack_60;
  u32 uStack_5c;
  u32 uStack_58;
  u32 uStack_54;
  u32 uStack_50;
  u32 uStack_4c;
  u32 uStack_48;
  u32 uStack_44;
  u32 *puStack_40;
  u32 *puStack_3c;
  u32 *puStack_38;
  u32 *puStack_34;
  u32 *puStack_30;
  u32 *puStack_2c;
  u32 *puStack_28;
  u32 *puStack_24;
  *(u8 *)((int)param_1 + 2) = *(u8 *)((int)param_1 + 2) & 0xdf;
  uStack_44 = param_4;
  uVar1 = ScriptVM_Func120(param_1);
  iVar2 = -((int)(-uVar1 | uVar1) >> 0x1f);
  uVar3 = LibC_rand();
  uVar3 = func_080D0ED0(uVar3,100);
  Npc_DayUpdate(param_1 + 0x1c,uVar3);
  uVar3 = LibC_rand();
  uVar3 = func_080D0ED0(uVar3,100);
  Npc_DayUpdate(param_1 + 0x21,uVar3);
  uVar4 = func_0809E4AC(param_1 + 0x26);
  if ((uVar4 < 5) || ((*(u8 *)(param_2 + 9) & 3) == 1)) {
    uVar3 = LibC_rand();
    uVar3 = func_080D0ED0(uVar3,100);
    Bachelorette_DayUpdate(param_1 + 0x26,iVar2,uVar3);
  }
  uVar3 = LibC_rand();
  uVar3 = func_080D0ED0(uVar3,100);
  Npc_DayUpdate(param_1 + 0x2c,uVar3);
  uVar3 = LibC_rand();
  uVar3 = func_080D0ED0(uVar3,100);
  Npc_DayUpdate(param_1 + 0x31,uVar3);
  Npc_Sub_0809EE4C(param_1 + 0x36);
  uVar3 = LibC_rand();
  uVar3 = func_080D0ED0(uVar3,100);
  Npc_DayUpdate(param_1 + 0x3c,uVar3);
  uVar3 = LibC_rand();
  uVar3 = func_080D0ED0(uVar3,100);
  Npc_DayUpdate(param_1 + 0x41,uVar3);
  uVar3 = LibC_rand();
  uVar3 = func_080D0ED0(uVar3,100);
  Npc_DayUpdate(param_1 + 0x46,uVar3);
  uVar3 = LibC_rand();
  uVar3 = func_080D0ED0(uVar3,100);
  Npc_DayUpdate(param_1 + 0x4b,uVar3);
  uVar3 = LibC_rand();
  uVar3 = func_080D0ED0(uVar3,100);
  Npc_DayUpdate(param_1 + 0x50,uVar3);
  uVar3 = LibC_rand();
  uVar3 = func_080D0ED0(uVar3,100);
  Bachelorette_DayUpdate(param_1 + 0x55,iVar2,uVar3);
  uVar3 = LibC_rand();
  uVar3 = func_080D0ED0(uVar3,100);
  Npc_DayUpdate(param_1 + 0x5b,uVar3);
  uVar3 = LibC_rand();
  uVar3 = func_080D0ED0(uVar3,100);
  Npc_DayUpdate(param_1 + 0x60,uVar3);
  uVar3 = LibC_rand();
  uVar3 = func_080D0ED0(uVar3,100);
  Npc_DayUpdate(param_1 + 0x65,uVar3);
  uVar3 = LibC_rand();
  uVar3 = func_080D0ED0(uVar3,100);
  Npc_DayUpdate(param_1 + 0x6a,uVar3);
  uVar3 = LibC_rand();
  uVar3 = func_080D0ED0(uVar3,100);
  Npc_DayUpdate(param_1 + 0x6f,uVar3);
  uVar3 = LibC_rand();
  uVar3 = func_080D0ED0(uVar3,100);
  Npc_DayUpdate(param_1 + 0x74,uVar3);
  uVar3 = LibC_rand();
  uVar3 = func_080D0ED0(uVar3,100);
  Bachelorette_DayUpdate(param_1 + 0x79,iVar2,uVar3);
  uVar3 = LibC_rand();
  uVar3 = func_080D0ED0(uVar3,100);
  Npc_DayUpdate(param_1 + 0x7f,uVar3);
  uVar3 = LibC_rand();
  uVar3 = func_080D0ED0(uVar3,100);
  Bachelorette_DayUpdate(param_1 + 0x84,iVar2,uVar3);
  uVar3 = LibC_rand();
  uVar3 = func_080D0ED0(uVar3,100);
  Npc_DayUpdate(param_1 + 0x8a,uVar3);
  uVar3 = LibC_rand();
  uVar3 = func_080D0ED0(uVar3,100);
  Npc_DayUpdate(param_1 + 0x8f,uVar3);
  uVar3 = LibC_rand();
  uVar3 = func_080D0ED0(uVar3,100);
  Npc_DayUpdate(param_1 + 0x94,uVar3);
  uVar3 = LibC_rand();
  uVar3 = func_080D0ED0(uVar3,100);
  Bachelorette_DayUpdate(param_1 + 0x99,iVar2,uVar3);
  if ((*(u8 *)(param_2 + 9) & 3) == 1) {
    puVar10 = param_1 + 0x9f;
    uVar4 = func_0809E33C(puVar10);
    uVar3 = LibC_rand();
    uVar3 = func_080D0ED0(uVar3,100);
    Npc_DayUpdate(puVar10,uVar3);
    uVar5 = func_0809E33C(puVar10);
    if (uVar4 < uVar5) {
      iVar6 = func_0809E33C(puVar10);
      Npc_AddFriendship(puVar10,iVar6 - uVar4);
    }
  }
  Npc_Sub_0809EBEC(param_1 + 0xa4);
  uVar3 = LibC_rand();
  uVar3 = func_080D0ED0(uVar3,100);
  Npc_DayUpdate(param_1 + 0xaa,uVar3);
  uVar3 = LibC_rand();
  uVar3 = func_080D0ED0(uVar3,100);
  Npc_DayUpdate(param_1 + 0xaf,uVar3);
  uVar3 = LibC_rand();
  uVar3 = func_080D0ED0(uVar3,100);
  Npc_DayUpdate(param_1 + 0xb4,uVar3);
  uVar3 = LibC_rand();
  uVar3 = func_080D0ED0(uVar3,100);
  Bachelorette_DayUpdate(param_1 + 0xb9,iVar2,uVar3);
  uVar3 = LibC_rand();
  uVar3 = func_080D0ED0(uVar3,100);
  Npc_DayUpdate(param_1 + 0xbf,uVar3);
  if ((*(u8 *)(param_3 + 0x3a) & 0x7f) >> 5 == 2) {
    uVar3 = LibC_rand();
    uVar3 = func_080D0ED0(uVar3,100);
    Npc_DayUpdate(param_1 + 0xc4,uVar3);
  }
  if ((*(u8 *)(param_3 + 0x3b) & 0x1f) >> 3 == 2) {
    uVar3 = LibC_rand();
    uVar3 = func_080D0ED0(uVar3,100);
    Npc_DayUpdate(param_1 + 0xca,uVar3);
  }
  if ((int)((u32)*(u8 *)((int)param_1 + 3) * 0x40000000) < 0) {
    Npc_Sub_0809EAF8(param_1 + 1);
  }
  puVar10 = param_1 + 0xcf;
  HarvestSprite_DayUpdate(puVar10);
  code_809E804_Sub_0809E804(&uStack_68,0);
  func_0809E368(puVar10,&uStack_68);
  uStack_60 = 0;
  func_0809E7C8(puVar10,&uStack_60);
  puVar12 = param_1 + 0x10e;
  code_809E804_Sub_0809E994(puVar12,0);
  puVar10 = param_1 + 0xd8;
  HarvestSprite_DayUpdate(puVar10);
  code_809E804_Sub_0809E804(&uStack_68,1);
  func_0809E368(puVar10,&uStack_68);
  uStack_5c = 0;
  func_0809E7C8(puVar10,&uStack_5c);
  code_809E804_Sub_0809E994(puVar12,1);
  puVar10 = param_1 + 0xe1;
  HarvestSprite_DayUpdate(puVar10);
  code_809E804_Sub_0809E804(&uStack_68,2);
  func_0809E368(puVar10,&uStack_68);
  uStack_58 = 0;
  func_0809E7C8(puVar10,&uStack_58);
  code_809E804_Sub_0809E994(puVar12,2);
  puVar10 = param_1 + 0xea;
  HarvestSprite_DayUpdate(puVar10);
  code_809E804_Sub_0809E804(&uStack_68,3);
  func_0809E368(puVar10,&uStack_68);
  uStack_54 = 0;
  func_0809E7C8(puVar10,&uStack_54);
  code_809E804_Sub_0809E994(puVar12,3);
  puVar10 = param_1 + 0xf3;
  HarvestSprite_DayUpdate(puVar10);
  code_809E804_Sub_0809E804(&uStack_68,4);
  func_0809E368(puVar10,&uStack_68);
  uStack_50 = 0;
  func_0809E7C8(puVar10,&uStack_50);
  code_809E804_Sub_0809E994(puVar12,4);
  puVar10 = param_1 + 0xfc;
  HarvestSprite_DayUpdate(puVar10);
  code_809E804_Sub_0809E804(&uStack_68,5);
  func_0809E368(puVar10,&uStack_68);
  uStack_4c = 0;
  func_0809E7C8(puVar10,&uStack_4c);
  code_809E804_Sub_0809E994(puVar12,5);
  pbVar11 = (u8 *)((int)param_1 + 0x00000414);
  HarvestSprite_DayUpdate(pbVar11);
  code_809E804_Sub_0809E804(&uStack_68,6);
  func_0809E368(pbVar11,&uStack_68);
  uStack_48 = 0;
  func_0809E7C8(pbVar11,&uStack_48);
  code_809E804_Sub_0809E994(puVar12,6);
  uVar4 = (u32)*(u8 *)(param_3 + 0x1c);
  if (((((((uVar4 & 1) << 1 | (u32)(*(u8 *)(param_3 + 0x1b) >> 7)) == 2) ||
        ((uVar4 & 7) >> 1 == 2)) || ((uVar4 & 0x1f) >> 3 == 2)) ||
      (((uVar4 & 0x7f) >> 5 == 2 || ((*(u16 *)(param_3 + 0x1c) & 0x1ff) >> 7 == 2)))) ||
     ((*(u8 *)(param_3 + 0x4b) & 3) == 2)) {
    uVar4 = param_1[0x11c];
    if (uVar4 != 0x3c) {
      param_1[0x11c] = uVar4 + 1;
    }
  }
  puVar10 = param_1 + 0x26;
  uVar4 = func_0809E4BC(puVar10);
  puStack_40 = param_1 + 0xc;
  puStack_3c = param_1 + 0xe;
  puStack_38 = param_1 + 0x10;
  puStack_34 = param_1 + 0x12;
  puStack_30 = param_1 + 0x14;
  puStack_2c = param_1 + 0x16;
  puStack_28 = param_1 + 0x18;
  puStack_24 = param_1 + 0x1a;
  if ((uVar4 < 5) && ((iVar2 == 0 || (uVar1 == 3)))) {
    iVar6 = Coop_CountChickens(param_5 + 0x3fc);
    puStack_40 = param_1 + 0xc;
    puStack_3c = param_1 + 0xe;
    puStack_38 = param_1 + 0x10;
    puStack_34 = param_1 + 0x12;
    puStack_30 = param_1 + 0x14;
    puStack_2c = param_1 + 0x16;
    puStack_28 = param_1 + 0x18;
    puStack_24 = param_1 + 0x1a;
    if (iVar6 == 8) {
      uVar5 = 0;
      uVar4 = 0;
      do {
        iVar6 = Coop_GetChicken(param_5 + 0x3fc,uVar4);
        if (iVar6 != 0) {
          iVar6 = func_0809B228();
          uVar5 = uVar5 + iVar6;
        }
        iVar6 = 0x08104109;
        uVar4 = uVar4 + 1;
      } while (uVar4 < 8);
      while ((uVar4 = func_0809E4BC(puVar10), uVar4 < 5 &&
             (iVar7 = func_0809E4BC(puVar10), (u32)*(u8 *)(iVar7 + iVar6) <= uVar5 >> 3))) {
        Bachelorette_AddLove(puVar10,0x000009C4);
        Bachelorette_Sub_0809E550(puVar10);
      }
    }
  }
  uVar4 = func_0809E4BC(param_1 + 0x55);
  iVar6 = 0x0810410E;
  if ((uVar4 < 5) && ((iVar2 == 0 || (uVar1 == 0xc)))) {
    uVar4 = *param_1;
    puVar12 = param_1 + 0x55;
    while ((uVar5 = func_0809E4BC(puVar12), uVar5 < 5 &&
           (iVar7 = func_0809E4BC(puVar12),
           (u32)*(u8 *)(iVar7 + iVar6) <= (uVar4 & 0x1fffff) >> 0xd))) {
      Bachelorette_AddLove(puVar12,0x000009C4);
      Bachelorette_Sub_0809E550(puVar12);
    }
  }
  uVar4 = func_0809E4BC(param_1 + 0x79);
  iVar6 = 0x08104113;
  if ((uVar4 < 5) && ((iVar2 == 0 || (uVar1 == 0x13)))) {
    uVar4 = *param_1;
    puVar12 = param_1 + 0x79;
    while ((uVar5 = func_0809E4BC(puVar12), uVar5 < 5 &&
           (iVar7 = func_0809E4BC(puVar12),
           (u32)*(u8 *)(iVar7 + iVar6) <= ((u16)uVar4 & 0x1fff) >> 6))) {
      Bachelorette_AddLove(puVar12,0x000009C4);
      Bachelorette_Sub_0809E550(puVar12);
    }
  }
  uVar4 = func_0809E4BC(param_1 + 0x84);
  if ((uVar4 < 5) && ((iVar2 == 0 || (uVar1 == 0x15)))) {
    uVar4 = farmer_Sub_0800E970(uStack_44);
    iVar6 = 0x08104118;
    puVar12 = param_1 + 0x84;
    while ((uVar5 = func_0809E4BC(puVar12), uVar5 < 5 &&
           (iVar7 = func_0809E4BC(puVar12), *(u8 *)(iVar7 + iVar6) <= uVar4))) {
      Bachelorette_AddLove(puVar12,0x000009C4);
      Bachelorette_Sub_0809E550(puVar12);
    }
  }
  uVar4 = func_0809E4BC(param_1 + 0x99);
  iVar6 = 0x0810411D;
  if ((uVar4 < 5) && ((iVar2 == 0 || (uVar1 == 0x19)))) {
    uVar4 = *param_1;
    puVar12 = param_1 + 0x99;
    while ((uVar5 = func_0809E4BC(puVar12), uVar5 < 5 &&
           (iVar7 = func_0809E4BC(puVar12), *(u8 *)(iVar7 + iVar6) <= ((u8)uVar4 & 0x3f)))) {
      Bachelorette_AddLove(puVar12,0x000009C4);
      Bachelorette_Sub_0809E550(puVar12);
    }
  }
  if ((*(u16 *)((int)param_1 + 2) & 0x1ff) >> 6 < 5) {
    iVar7 = 0;
    iVar6 = 0;
    uVar4 = 0;
    do {
      if (uVar4 - 0x17 < 0xd) {
        switch(*(u32 *)((uVar4 - 0x17) * 4 + 0x080A12BC) & 0xfffffffe) {
        case 0x80a12f0:
          goto case_080A12F0;
        }
      }
      else {
case_080A12F0:
        iVar8 = ScriptVM_VmHelper_080A06B0(param_1,uVar4);
        if (iVar8 != 0) {
          iVar8 = func_0809E33C();
          iVar7 = iVar7 + iVar8;
          iVar6 = iVar6 + 1;
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x2b);
    uVar4 = LibGcc_udivsi3(iVar7,iVar6);
    uVar5 = (*(u16 *)((int)param_1 + 2) & 0x1ff) >> 6;
    if (uVar5 < 5) {
      pbVar11 = (u8 *)(uVar5 + 0x08104122);
      while (*pbVar11 <= uVar4) {
        if ((iVar2 == 0) || (uVar1 == 3)) {
          Bachelorette_AddLove(puVar10,0x000009C4);
        }
        if ((iVar2 == 0) || (uVar1 == 0xc)) {
          Bachelorette_AddLove(param_1 + 0x55,0x000009C4);
        }
        if ((iVar2 == 0) || (uVar1 == 0x13)) {
          Bachelorette_AddLove(param_1 + 0x79,0x000009C4);
        }
        if ((iVar2 == 0) || (uVar1 == 0x15)) {
          Bachelorette_AddLove(param_1 + 0x84,0x000009C4);
        }
        if ((iVar2 == 0) || (uVar1 == 0x19)) {
          Bachelorette_AddLove(param_1 + 0x99,0x000009C4);
        }
        if ((iVar2 == 0) || (uVar1 == 0x1f)) {
          Bachelorette_AddLove(param_1 + 0xb9,0x000009C4);
        }
        uVar5 = (((*(u16 *)((int)param_1 + 2) & 0x1ff) >> 6) + 1 & 7) << 6;
        uVar9 = *(u16 *)((int)param_1 + 2) & 0xFFFFFE3F;
        *(u16 *)((int)param_1 + 2) = (u16)uVar9 | (u16)uVar5;
        uVar5 = (uVar9 & 0x1ff | uVar5) >> 6;
        if (4 < uVar5) break;
        pbVar11 = (u8 *)(uVar5 + 0x08104122);
      }
    }
  }
  game_state_Sub_080A17A0(&uStack_68,0);
  *puStack_40 = uStack_68;
  puStack_40[1] = uStack_64;
  game_state_Sub_080A17A0(&uStack_68,1);
  *puStack_3c = uStack_68;
  puStack_3c[1] = uStack_64;
  game_state_Sub_080A17A0(&uStack_68,2);
  *puStack_38 = uStack_68;
  puStack_38[1] = uStack_64;
  game_state_Sub_080A1890(&uStack_68,0);
  *puStack_34 = uStack_68;
  puStack_34[1] = uStack_64;
  game_state_Sub_080A1890(&uStack_68,1);
  *puStack_30 = uStack_68;
  puStack_30[1] = uStack_64;
  game_state_Sub_080A1890(&uStack_68,2);
  *puStack_2c = uStack_68;
  puStack_2c[1] = uStack_64;
  game_state_Sub_080A198C(&uStack_68,puStack_2c + 2);
  *puStack_28 = uStack_68;
  puStack_28[1] = uStack_64;
  game_state_Sub_080A19EC(&uStack_68,puStack_28 + 2);
  *puStack_24 = uStack_68;
  puStack_24[1] = uStack_64;
  return (0);
}

/* 0x080A1C94 (40B) | NpcSystem_Sub_080A1C94 (orig: func_080A1C94) | origin: pure | domain: NpcSystem | MEDIUM / tu_interp */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 NpcSystem_Sub_080A1EA8();
void NpcSystem_Sub_080A1C94(int arg0) {
  u32 val;
  u8 *mem_ptr;
  val = NpcSystem_Sub_080A1EA8();
  if (val >> 3 < 7) {
    mem_ptr = (u8 *)(arg0 + (val >> 3));
    *mem_ptr = *mem_ptr & ~(u8)(1 << (val & 7));
  }
}

/* 0x080A1CBC (100B) | NpcSystem_Sub_080A1CBC (orig: func_080A1CBC) | origin: wip | domain: NpcSystem | HIGH / fomt_studio_table */
u32 NpcSystem_Sub_080A1CBC(int *param_1,u32 param_2,int param_3) {
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  piVar5 = (int *)(param_3 * 0xc + 0x081043BC);
  iVar4 = *piVar5;
  iVar2 = *(int *)(param_3 * 0xc + 0x081043BC + 4);
  iVar1 = piVar5[2];
  if (iVar4 == 0x14) {
    iVar3 = 2;
    goto LAB_080a1d06;
  }
  if (iVar4 < 0x15) {
    if (iVar4 == 0x13) {
LAB_080a1cfc:
      iVar3 = 1;
      goto LAB_080a1d06;
    }
  }
  else if (iVar4 == 0x15) goto LAB_080a1cfc;
  iVar3 = 0;
LAB_080a1d06:
  *param_1 = iVar4;
  param_1[1] = iVar2;
  param_1[2] = iVar1;
  param_1[3] = iVar3;
  return param_1;
}

/* 0x080A1D20 (392B) | NpcSystem_Sub_080A1D20 (orig: func_080A1D20) | origin: wip | domain: NpcSystem | HIGH / fomt_studio_table */
u32 NpcSystem_Sub_080A1D20(u32 param_1,int param_2,short *param_3,int param_4) {
  char cVar1;
  short sVar2;
  short *psVar3;
  int *piVar4;
  u32 uVar5;
  int *piVar6;
  u32 uVar7;
  short sStack_28;
  int iStack_24;
  uVar5 = 0;
  uVar7 = 0x1a;
  if (param_4 == 1) {
    uVar5 = 0x1a;
    uVar7 = 0x3a;
  }
  else if (1 < param_4) {
    if (param_4 == 2) {
      uVar5 = 0x3a;
      uVar7 = 0x5e;
    }
    else if (param_4 == 3) {
      uVar5 = 0x5e;
      uVar7 = 0x60;
    }
  }
  if (uVar5 < uVar7) {
    iStack_24 = uVar5 * 0xc;
    psVar3 = (short *)(iStack_24 + 8 + 0x081043BC);
    do {
      if ((*(int *)(iStack_24 + 0x081043BC + 4) == param_2) &&
         (((int)*psVar3 - (int)param_3[2] & (int)*param_3 - (int)(short)(*psVar3 + 0x10) &
           (int)psVar3[1] - (int)param_3[3] & (int)param_3[1] - (int)(short)(psVar3[1] + 0x10)) < 0)
         ) break;
      psVar3 = psVar3 + 6;
      iStack_24 = iStack_24 + 0xc;
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < (int)uVar7);
  }
  if (uVar5 == uVar7) {
    uVar5 = 0x60;
    piVar6 = (int *)(0x081043BC + 0x480);
    piVar4 = (int *)(0x00000484 + 0x081043BC);
    do {
      if (*piVar4 == param_2) {
        sVar2 = 0x20;
        sStack_28 = 0x20;
        if (*piVar6 == 0x14) {
          sVar2 = 0x30;
        }
        if (*piVar6 == 0x12) {
          sStack_28 = 0x10;
          sVar2 = 0x10;
        }
        if (((int)(short)piVar6[2] - (int)param_3[2] &
             (int)*param_3 - (int)(short)((short)piVar6[2] + sVar2) &
             (int)*(short *)((int)piVar6 + 10) - (int)param_3[3] &
            (int)param_3[1] - (int)(short)(*(short *)((int)piVar6 + 10) + sStack_28)) < 0) break;
      }
      piVar6 = piVar6 + 3;
      piVar4 = piVar4 + 3;
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < 0x74);
    if (uVar5 == 0x74) {
      uVar5 = 0xffffffff;
    }
  }
  if ((-1 < (int)uVar5) && (cVar1 = NpcSystem_Sub_080A1ED4(param_1,uVar5,param_4), cVar1 == '\0')) {
    uVar5 = 0xffffffff;
  }
  return (uVar5);
}

/* 0x080A1EA8 (44B) | NpcSystem_Sub_080A1EA8 (orig: func_080A1EA8) | origin: wip | domain: NpcSystem | MEDIUM / graph_algebra */
u32 NpcSystem_Sub_080A1EA8(u32 param_1, char param_2, int param_3) {
  if (param_2 < 0x60) {
    if (param_3 == 1) {
      param_2 = param_2 - 0x1a;
    }
    else if (1 < param_3) {
      if (param_3 == 2) {
        param_2 = param_2 - 0x3a;
      }
      else if (param_3 == 3) {
        param_2 = param_2 - 0x5e;
      }
    }
  }
  else {
    param_2 = param_2 - 0x3c;
  }
  return param_2;
}

/* 0x080A1ED4 (32B) | NpcSystem_Sub_080A1ED4 (orig: func_080A1ED4) | origin: pure | domain: NpcSystem | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 NpcSystem_Sub_080A1EA8();
u32 NpcSystem_Sub_080A1ED4(int arg0) {
  u32 val;
  val = NpcSystem_Sub_080A1EA8();
  return ((int)(u32)*(u8 *)(arg0 + (val >> 3)) >> (val & 7)) &
         0xffffffff00000001;
}

