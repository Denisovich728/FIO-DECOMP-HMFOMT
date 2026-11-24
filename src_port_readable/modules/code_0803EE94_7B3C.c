/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_0803EE94_7B3C (2 functions) */
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

/* 0x08070B70 (180B) | code_0803EE94_7B3C_Ctor (orig: func_08070B70) | origin: wip | domain: code_0803EE94_7B3C | HIGH / vtable_algebra */
u32 code_0803EE94_7B3C_Ctor(int self,u32 param_2) {
  u32 uVar1;
  u32 *puVar2;
  u32 *puVar3;
  u32 uStack_10;
  code_0803EE94_7B78_Ctor(self,0);
  *(u32 *)(self + 4) = 0x080E7B3C;
  *(u32 *)(self + 0x120) = param_2;
  puVar3 = (u32 *)(self + 0x124);
  *puVar3 = 0;
  uStack_10 = uStack_10 & 0xffff0000;
  if ((u32 *)(self + 0x128) != (u32 *)0x0) {
    *(u32 *)(self + 0x128) = 0;
    *(u32 *)(self + 300) = uStack_10;
  }
  uVar1 = *puVar3 + 1;
  *puVar3 = uVar1;
  if (uVar1 < 10) {
    puVar2 = puVar3 + uVar1 * 2 + 1;
    if (puVar2 != (u32 *)0x0) {
      *puVar2 = 1;
      puVar2[1] = uStack_10;
    }
    *puVar3 = *puVar3 + 1;
  }
  puVar3 = (u32 *)(self + 0x124);
  if (*puVar3 < 10) {
    puVar2 = puVar3 + *puVar3 * 2 + 1;
    if (puVar2 != (u32 *)0x0) {
      *puVar2 = 2;
      puVar2[1] = uStack_10;
    }
    *puVar3 = *puVar3 + 1;
  }
  *(u32 *)(self + 0x178) = 0;
  SpriteAnimEngine_Sub_0807549C(self,*(u32 *)(self + 0x128));
  return self;
}

/* 0x0807555C (144B) | code_0803EE94_7B3C_vfunc_0C (orig: func_0807555C) | origin: wip | domain: code_0803EE94_7B3C | HIGH / vtable_algebra */
void code_0803EE94_7B3C_vfunc_0C(int self,int param_2) {
  u16 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  piVar2 = (int *)(self + 0x124);
  piVar4 = (int *)(self + 0x178);
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
  SpriteAnimEngine_Sub_0807549C(self,*(u32 *)(self + 0x124 + *(int *)(self + 0x178) * 8 + 4));
  code_0803EE94_GetField_0x08(self,(int)*(short *)(self + 0x124 + *(int *)(self + 0x178) * 8 + 8));
}

