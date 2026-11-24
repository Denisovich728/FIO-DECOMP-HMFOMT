/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_0803EE94_7A88 (2 functions) */
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

/* 0x0805FD78 (412B) | code_0803EE94_7A88_Ctor (orig: func_0805FD78) | origin: wip | domain: code_0803EE94_7A88 | HIGH / vtable_algebra */
u32 code_0803EE94_7A88_Ctor(int self,u32 param_2,u8 param_3) {
  u32 uVar1;
  u32 *puVar2;
  int *piVar3;
  u32 *puVar4;
  u32 uStack_14;
  code_0803EE94_7B78_Ctor(self,param_3);
  *(u32 *)(self + 4) = 0x080E7A88;
  *(u32 *)(self + 0x120) = param_2;
  puVar4 = (u32 *)(self + 0x124);
  *puVar4 = 0;
  uStack_14 = uStack_14 & 0xffff0000;
  if ((u32 *)(self + 0x128) != (u32 *)0x0) {
    *(u32 *)(self + 0x128) = 0;
    *(u32 *)(self + 300) = uStack_14;
  }
  *puVar4 = *puVar4 + 1;
  piVar3 = (int *)(self + 0x120);
  uVar1 = Coop_CountChickens(*piVar3 + 0x410);
  if ((int)(-uVar1 | uVar1) < 0) {
    if (*puVar4 < 7) {
      puVar2 = puVar4 + *puVar4 * 2 + 1;
      if (puVar2 != (u32 *)0x0) {
        *puVar2 = 1;
        puVar2[1] = uStack_14;
      }
      *puVar4 = *puVar4 + 1;
    }
  }
  uVar1 = Barn_CountCows(*piVar3 + 0x5f0);
  if ((int)(-uVar1 | uVar1) < 0) {
    puVar4 = (u32 *)(self + 0x124);
    if (*puVar4 < 7) {
      puVar2 = puVar4 + *puVar4 * 2 + 1;
      if (puVar2 != (u32 *)0x0) {
        *puVar2 = 2;
        puVar2[1] = uStack_14;
      }
      *puVar4 = *puVar4 + 1;
    }
  }
  uVar1 = Barn_CountSheeps(*piVar3 + 0x5f0);
  if ((int)(-uVar1 | uVar1) < 0) {
    puVar4 = (u32 *)(self + 0x124);
    if (*puVar4 < 7) {
      puVar2 = puVar4 + *puVar4 * 2 + 1;
      if (puVar2 != (u32 *)0x0) {
        *puVar2 = 3;
        puVar2[1] = uStack_14;
      }
      *puVar4 = *puVar4 + 1;
    }
  }
  puVar4 = (u32 *)(self + 0x124);
  if (*puVar4 < 7) {
    puVar2 = puVar4 + *puVar4 * 2 + 1;
    if (puVar2 != (u32 *)0x0) {
      *puVar2 = 4;
      puVar2[1] = uStack_14;
    }
    *puVar4 = *puVar4 + 1;
  }
  puVar4 = (u32 *)(self + 0x124);
  if (*puVar4 < 7) {
    puVar2 = puVar4 + *puVar4 * 2 + 1;
    if (puVar2 != (u32 *)0x0) {
      *puVar2 = 5;
      puVar2[1] = uStack_14;
    }
    *puVar4 = *puVar4 + 1;
  }
  puVar4 = (u32 *)(self + 0x124);
  if (*puVar4 < 7) {
    puVar2 = puVar4 + *puVar4 * 2 + 1;
    if (puVar2 != (u32 *)0x0) {
      *puVar2 = 6;
      puVar2[1] = uStack_14;
    }
    *puVar4 = *puVar4 + 1;
  }
  *(u32 *)(self + 0x160) = 0;
  code_0803EE94_7A88_Sub_08069C34(self,*(u32 *)(self + 0x128));
  return (self);
}

/* 0x08069D84 (144B) | code_0803EE94_7A88_vfunc_0C (orig: func_08069D84) | origin: wip | domain: code_0803EE94_7A88 | HIGH / vtable_algebra */
void code_0803EE94_7A88_vfunc_0C(int self,int param_2) {
  u16 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  piVar2 = (int *)(self + 0x124);
  piVar4 = (int *)(self + 0x160);
  iVar3 = *piVar4;
  uVar1 = code_0803EE94_GetField_0x08_6BEC(self);
  *(u16 *)(piVar2 + iVar3 * 2 + 2) = uVar1;
  code_0803EE94_Sub_08076B64(self);
  if (param_2 == 0) {
    iVar3 = *piVar4;
    *piVar4 = iVar3 + 1;
    if (iVar3 + 1 == *piVar2) {
      *piVar4 = 0;
    }
  }
  else if (param_2 == 1) {
    iVar3 = *piVar4;
    if (iVar3 == 0) {
      iVar3 = *piVar2;
    }
    *piVar4 = iVar3 + -1;
  }
  code_0803EE94_7A88_Sub_08069C34(self,*(u32 *)(self + 0x124 + *(int *)(self + 0x160) * 8 + 4));
  code_0803EE94_GetField_0x08(self,(int)*(short *)(self + 0x124 + *(int *)(self + 0x160) * 8 + 8));
}

