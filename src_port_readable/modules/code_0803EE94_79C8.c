/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_0803EE94_79C8 (3 functions) */
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

/* 0x0805E6CC (148B) | code_0803EE94_79C8_Ctor (orig: func_0805E6CC) | origin: wip | domain: code_0803EE94_79C8 | HIGH / vtable_algebra */
u32 code_0803EE94_79C8_Ctor(u32 *self,u16 *param_2) {
  *self = 0x080E79C8;
  if (param_2 == (u16 *)0x0) {
    *(u16 *)(self + 8) = 0;
    self[1] = 0;
    *(u16 *)((int)self + 0x22) = 0;
    self[2] = 0;
    *(u16 *)(self + 9) = 0;
    self[3] = 0;
    *(u16 *)((int)self + 0x26) = 0;
    self[4] = 0;
    *(u16 *)(self + 10) = 0;
    self[5] = 0;
    *(u16 *)((int)self + 0x2a) = 0;
    self[6] = 0;
    *(u16 *)(self + 0xb) = 0;
    self[7] = 0;
  }
  else {
    *(u16 *)(self + 8) = *param_2;
    param_2 = param_2 + 2;
    self[1] = param_2;
    param_2 = param_2 + (u32)*(u16 *)(self + 8) * 2;
    *(u16 *)((int)self + 0x22) = *param_2;
    param_2 = param_2 + 2;
    self[2] = param_2;
    param_2 = param_2 + (u32)*(u16 *)((int)self + 0x22) * 8;
    *(u16 *)(self + 9) = *param_2;
    param_2 = param_2 + 2;
    self[3] = param_2;
    param_2 = param_2 + (u32)*(u16 *)(self + 9) * 4;
    *(u16 *)((int)self + 0x26) = *param_2;
    param_2 = param_2 + 2;
    self[4] = param_2;
    param_2 = param_2 + (u32)*(u16 *)((int)self + 0x26) * 0x10;
    *(u16 *)(self + 10) = *param_2;
    param_2 = param_2 + 2;
    self[5] = param_2;
    param_2 = param_2 + (u32)*(u16 *)(self + 10) * 0x10;
    *(u16 *)((int)self + 0x2a) = *param_2;
    param_2 = param_2 + 2;
    self[6] = param_2;
    *(u16 *)(self + 0xb) = param_2[(u32)*(u16 *)((int)self + 0x2a) * 4];
    self[7] = param_2 + (u32)*(u16 *)((int)self + 0x2a) * 4 + 2;
  }
  return self;
}

/* 0x0805E760 (48B) | code_0803EE94_79C8_vfunc_0C (orig: func_0805E760) | origin: wip | domain: code_0803EE94_79C8 | HIGH / vtable_algebra */
int * code_0803EE94_79C8_vfunc_0C(int *self,int param_2,u32 param_3) {
  u16 uVar1;
  u16 *puVar2;
  if (param_3 < *(u16 *)(param_2 + 0x20)) {
    puVar2 = (u16 *)(*(int *)(param_2 + 4) + param_3 * 4);
    uVar1 = *puVar2;
    *self = (u32)(u16)puVar2[1] * 4 + *(int *)(param_2 + 0x1c);
    *(u16 *)(self + 1) = uVar1;
  }
  else {
    *self = 0;
    *(u16 *)(self + 1) = 0;
  }
  return self;
}

/* 0x0805E790 (140B) | code_0803EE94_79C8_vfunc_10 (orig: func_0805E790) | origin: wip | domain: code_0803EE94_79C8 | HIGH / vtable_algebra */
u32 code_0803EE94_79C8_vfunc_10(int *self,int param_2,u32 param_3) {
  u16 uVar1;
  u16 uVar2;
  short sVar3;
  u16 uVar4;
  short sVar5;
  u16 uVar6;
  u16 uVar7;
  u16 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  if (param_3 < *(u16 *)(param_2 + 0x22)) {
    puVar8 = (u16 *)(*(int *)(param_2 + 8) + param_3 * 0x10);
    uVar1 = *puVar8;
    uVar2 = puVar8[3];
    iVar10 = *(int *)(param_2 + 0x10);
    sVar3 = puVar8[2];
    uVar4 = puVar8[5];
    iVar11 = *(int *)(param_2 + 0x14);
    sVar5 = puVar8[4];
    uVar6 = puVar8[7];
    uVar7 = puVar8[6];
    iVar9 = *(int *)(param_2 + 0x18);
    *self = (u32)(u16)puVar8[1] * 8 + *(int *)(param_2 + 0xc);
    *(u16 *)(self + 1) = uVar1;
    self[2] = (u32)uVar2 * 0x20 + iVar10;
    *(short *)(self + 3) = sVar3 << 5;
    self[4] = (u32)uVar4 * 0x20 + iVar11;
    *(short *)(self + 5) = sVar5 << 5;
    self[6] = (u32)uVar6 * 8 + iVar9;
    *(u16 *)(self + 7) = uVar7;
  }
  else {
    *self = 0;
    *(u16 *)(self + 1) = 0;
    self[2] = 0;
    *(u16 *)(self + 3) = 0;
    self[4] = 0;
    *(u16 *)(self + 5) = 0;
    self[6] = 0;
    *(u16 *)(self + 7) = 0;
  }
  return self;
}

