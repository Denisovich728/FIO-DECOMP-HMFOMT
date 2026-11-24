/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_0803EE94_7B78 (1 functions) */
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

/* 0x08075E7C (1040B) | code_0803EE94_7B78_Ctor (orig: func_08075E7C) | origin: wip | domain: code_0803EE94_7B78 | HIGH / vtable_algebra */
u32 code_0803EE94_7B78_Ctor(int self,u8 param_2) {
  u32 *puVar1;
  u16 *puVar2;
  int iVar3;
  u32 *puVar4;
  int *piVar5;
  u32 *puVar6;
  u16 uVar7;
  u32 uVar8;
  u32 uVar9;
  u32 *puVar10;
  int iVar11;
  u8 auStack_b0 [64];
  u8 auStack_70 [16];
  int aiStack_60 [4];
  u32 auStack_50 [4];
  u32 uStack_40;
  int iStack_3c;
  int iStack_38;
  u8 *puStack_34;
  int *piStack_30;
  u32 *puStack_2c;
  int *piStack_28;
  u32 *puStack_24;
  hardware_Create(self);
  *(u32 *)(self + 4) = 0x080E7B78;
  *(u32 *)(self + 8) = 0;
  iVar3 = self + 0xc;
  code_0803EE94_79C8_Ctor(iVar3,0x08527094);
  *(u16 *)(self + 0x3c) = 0xe8;
  *(u16 *)(self + 0x3e) = 0x18;
  code_0803EE94_Sub_0805E824(self + 0x40,iVar3,0,0x100);
  *(u16 *)(self + 0x54) = 0;
  *(u16 *)(self + 0x56) = 0;
  *(u16 *)(self + 0x58) = 0;
  *(u16 *)(self + 0x5a) = 0;
  *(u16 *)(self + 0x5c) = 0;
  *(u32 *)(self + 0x60) = 0;
  *(u8 *)(self + 100) = 0;
  *(u8 *)(self + 0x65) = 0;
  *(u32 *)(self + 0x68) = 0;
  *(u8 *)(self + 0x6c) = 0;
  *(u8 *)(self + 0x70) = 0;
  *(u16 *)(self + 0x74) = 0xe8;
  *(u16 *)(self + 0x76) = 0x98;
  code_0803EE94_Sub_0805E824(self + 0x78,iVar3,1,0x100);
  *(u16 *)(self + 0x8c) = 0;
  *(u16 *)(self + 0x8e) = 0;
  *(u16 *)(self + 0x90) = 0;
  *(u16 *)(self + 0x92) = 0;
  *(u16 *)(self + 0x94) = 0;
  *(u32 *)(self + 0x98) = 0;
  *(u8 *)(self + 0x9c) = 0;
  *(u8 *)(self + 0x9d) = 0;
  *(u32 *)(self + 0xa0) = 0;
  *(u8 *)(self + 0xa4) = 0;
  *(u8 *)(self + 0xa8) = 0;
  *(u16 *)(self + 0xac) = 0xe8;
  *(u16 *)(self + 0xae) = 8;
  code_0803EE94_Sub_0805E824(self + 0xb0,iVar3,2,0x100);
  *(u16 *)(self + 0xc4) = 0;
  *(u16 *)(self + 0xc6) = 0;
  *(u16 *)(self + 200) = 0;
  *(u16 *)(self + 0xca) = 0;
  *(u16 *)(self + 0xcc) = 0;
  *(u32 *)(self + 0xd0) = 0;
  *(u8 *)(self + 0xd4) = 0;
  *(u8 *)(self + 0xd5) = 0;
  *(u32 *)(self + 0xd8) = 0;
  *(u8 *)(self + 0xdc) = 0;
  *(u8 *)(self + 0xe0) = 0;
  *(u16 *)(self + 0xe4) = 0;
  *(u16 *)(self + 0xe6) = 8;
  code_0803EE94_Sub_0805E824(self + 0xe8,iVar3,3,0x100);
  *(u16 *)(self + 0xfc) = 0;
  *(u16 *)(self + 0xfe) = 0;
  *(u16 *)(self + 0x100) = 0;
  *(u16 *)(self + 0x102) = 0;
  *(u16 *)(self + 0x104) = 0;
  *(u32 *)(self + 0x108) = 0;
  *(u8 *)(self + 0x10c) = 0;
  *(u8 *)(self + 0x10d) = 0;
  *(u32 *)(self + 0x110) = 0;
  *(u8 *)(self + 0x114) = 0;
  *(u8 *)(self + 0x118) = 0;
  *(u8 *)(self + 0x11c) = param_2;
  hardware_Ctor(self);
  iVar3 = hardware_GetField_0x00_8918(self);
  *(short *)(iVar3 + 10) = (short)0x00001E41;
  iVar3 = hardware_GetField_0x00_8918(self);
  *(u16 *)(iVar3 + 0xc) = 0x1d40;
  iVar3 = hardware_GetField_0x00_8918(self);
  *(short *)(iVar3 + 0xe) = (short)0x00003F42;
  iVar3 = hardware_GetField_0x00_8918(self);
  *(short *)(iVar3 + 8) = (short)0x00001C48;
  uVar8 = 0x0600E000;
  hardware_HW_DMA3SAD_8EB8(0xffffffff,0x0600E000,0x2000);
  hardware_HW_DMA3SAD_8EB8(0,0x06007FE0,0x20);
  puVar2 = (u16 *)hardware_GetField_0x00_8918(self);
  *puVar2 = 8000;
  hardware_HW_DMA3SAD(*(u16 *)0x080F9F70,0x6000000,*(u16 *)0x080F9F74);
  hardware_HW_DMA3SAD_8EB8(0x00030003,0x0600F800,0x800);
  iVar3 = hardware_GetField_0x00_8918(self);
  *(u16 *)(iVar3 + 0x1e) = 0;
  code_0803EE94_Sub_08051320(0x0600E800,0,0x1d,0x1e,3,0,0);
  iVar3 = hardware_GetField_0x00_8918(self);
  *(u16 *)(iVar3 + 0x1a) = 0x1e8;
  hardware_HW_DMA3SAD_8EB8(0,0x06008000,0x20);
  hardware_HW_DMA3SAD_8EB8(0,uVar8,0x800);
  code_0803EE94_Sub_0804E9F4(0x0600E008,1,0x16,2,0,0x20);
  iVar3 = hardware_GetField_0x00_8918(self);
  *(short *)(iVar3 + 0x12) = (short)0x0000FFFC;
  uVar8 = *(u16 *)0x080F9F78;
  hardware_HW_DMA3SAD(uVar8,0x5000000,0x20);
  hardware_HW_DMA3SAD(uVar8,0x05000200,0x20);
  iVar11 = 0;
  puStack_34 = auStack_70;
  piStack_30 = aiStack_60;
  puStack_2c = auStack_50;
  puVar2 = 0x080FC082;
  iVar3 = 0x06002400;
  do {
    uStack_40 = 0x20001;
    Code_Lib_Syscall_Sub_0804E4AC(0x20001,auStack_b0,0,0,*puVar2);
    hardware_HW_DMA3SAD(auStack_b0,iVar3,0x40);
    iVar3 = iVar3 + 0x40;
    puVar2 = puVar2 + 1;
    iVar11 = iVar11 + 1;
  } while (iVar11 < 10);
  func_080D3918(puStack_34,*(int **)(self + 0xe8),
                  *(u16 *)(*(int *)(self + 0xec) + (u32)*(u16 *)(self + 0xf4) * 4),
                  *(u32 *)(**(int **)(self + 0xe8) + 0x10));
  piStack_28 = (int *)hardware_GetField_0x00_8910(self);
  uVar7 = 0;
  if (aiStack_60[0] != 0) {
    uVar7 = (u16)piStack_30[1];
  }
  hardware_Sub_08008F0C(auStack_50,aiStack_60[0],0x05000200,uVar7);
  puVar1 = puStack_2c;
  puVar4 = (u32 *)piStack_28[1];
  if (puVar4 == (u32 *)piStack_28[3]) {
    iStack_38 = 1;
    iStack_3c = (int)puVar4 - *piStack_28 >> 4;
    piVar5 = &iStack_3c;
    if (iStack_3c == 0) {
      piVar5 = &iStack_38;
    }
    if (iStack_3c + *piVar5 == 0) {
      puStack_24 = (u32 *)0x0;
      iVar3 = 0;
    }
    else {
      iVar3 = (iStack_3c + *piVar5) * 0x10;
      puStack_24 = (u32 *)LibC_malloc(iVar3);
      if (puStack_24 == (u32 *)0x0) {
        puStack_24 = (u32 *)code_linkonce_Sub_080D3BC0(iVar3);
      }
    }
    puVar10 = puStack_24;
    for (puVar6 = (u32 *)*piStack_28; puVar6 != puVar4; puVar6 = puVar6 + 4) {
      if (puVar10 != (u32 *)0x0) {
        uVar8 = puVar6[1];
        uVar9 = puVar6[2];
        *puVar10 = *puVar6;
        puVar10[1] = uVar8;
        puVar10[2] = uVar9;
        puVar10[3] = puVar6[3];
      }
      puVar10 = puVar10 + 4;
    }
    iVar11 = iStack_38;
    if (iStack_38 == 1) {
      if (puVar10 != (u32 *)0x0) {
        uVar8 = puVar1[1];
        uVar9 = puVar1[2];
        *puVar10 = *puVar1;
        puVar10[1] = uVar8;
        puVar10[2] = uVar9;
        puVar10[3] = puVar1[3];
      }
      puVar10 = puVar10 + 4;
    }
    else {
      for (; iVar11 != 0; iVar11 = iVar11 + -1) {
        if (puVar10 != (u32 *)0x0) {
          uVar8 = puVar1[1];
          uVar9 = puVar1[2];
          *puVar10 = *puVar1;
          puVar10[1] = uVar8;
          puVar10[2] = uVar9;
          puVar10[3] = puVar1[3];
        }
        puVar10 = puVar10 + 4;
      }
    }
    for (iVar11 = *piStack_28; iVar11 != piStack_28[1]; iVar11 = iVar11 + 0x10) {
    }
    if (*piStack_28 != 0) {
      LibC_free();
    }
    *piStack_28 = (int)puStack_24;
    piStack_28[1] = (int)puVar10;
    piStack_28[3] = (int)puStack_24 + iVar3;
  }
  else {
    if (puVar4 != (u32 *)0x0) {
      uVar8 = puStack_2c[1];
      uVar9 = puStack_2c[2];
      *puVar4 = *puStack_2c;
      puVar4[1] = uVar8;
      puVar4[2] = uVar9;
      puVar4[3] = puStack_2c[3];
    }
    piStack_28[1] = piStack_28[1] + 0x10;
  }
  return (self);
}

