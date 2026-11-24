/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_0803EE94_7B5C (4 functions) */
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

/* 0x080756B0 (32B) | code_0803EE94_7B5C_Create (orig: func_080756B0) | origin: pure | domain: code_0803EE94_7B5C | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 CppRuntime_builtin_new();
extern u32 hardware_Sub_080E2DC8();
u32 code_0803EE94_7B5C_Create(u32 *arg0) {
  u32 val;
  arg0[1] = 0x080E7B5C;
  CppRuntime_builtin_new(0x28);
  val = hardware_Sub_080E2DC8();
  *arg0 = val;
  return arg0;
}

/* 0x080756D0 (280B) | code_0803EE94_7B5C_Dtor (orig: func_080756D0) | origin: wip | domain: code_0803EE94_7B5C | HIGH / vtable_algebra */
void code_0803EE94_7B5C_Dtor(int *self,u32 param_2) {
  int iVar1;
  u32 uVar2;
  u32 uVar3;
  u32 uVar4;
  u32 uStack_30;
  self[1] = 0x080E7B5C;
  iVar1 = *self;
  if (iVar1 != 0) {
    uVar2 = *(u32 *)(iVar1 + 8);
    uVar4 = uVar2;
    uVar3 = *(u32 *)(uVar2 + 8);
    uStack_30 = *(u32 *)(uVar2 + 8);
    while ((int)(-(uVar3 ^ uVar4) | uVar3 ^ uVar4) < 0) {
      hardware_Sub_08007C28(iVar1,*(u32 *)(uStack_30 + 0x14));
      uVar4 = code_linkonce_Sub_080E2B28(uStack_30);
      uVar3 = uVar2;
      uStack_30 = uVar4;
    }
    uVar3 = *(u32 *)(iVar1 + 0x1c);
    uVar4 = *(u32 *)(uVar3 + 8);
    uVar2 = -(uVar4 ^ uVar3) | uVar4 ^ uVar3;
    while ((int)uVar2 < 0) {
      hardware_Sub_080073E0(iVar1 + 0x14,*(u32 *)(uVar4 + 0x14));
      uVar4 = code_linkonce_Sub_080E2B28(uVar4);
      uVar2 = -(uVar3 ^ uVar4) | uVar3 ^ uVar4;
    }
    if (*(int *)(iVar1 + 0x20) != 0) {
      code_0803EE94_7B5C_Sub_080E2B88(iVar1 + 0x18,*(u32 *)(*(int *)(iVar1 + 0x1c) + 4));
      *(int *)(*(int *)(iVar1 + 0x1c) + 8) = *(int *)(iVar1 + 0x1c);
      *(u32 *)(*(int *)(iVar1 + 0x1c) + 4) = 0;
      *(int *)(*(int *)(iVar1 + 0x1c) + 0xc) = *(int *)(iVar1 + 0x1c);
      *(u32 *)(iVar1 + 0x20) = 0;
    }
    if (*(int *)(iVar1 + 0x1c) != 0) {
      LibC_free();
    }
    hardware_Sub_08007184(iVar1 + 0x14,2);
    if (*(int *)(iVar1 + 0xc) != 0) {
      code_0803EE94_7B5C_Sub_080E2B5C(iVar1 + 4,*(u32 *)(*(int *)(iVar1 + 8) + 4));
      *(int *)(*(int *)(iVar1 + 8) + 8) = *(int *)(iVar1 + 8);
      *(u32 *)(*(int *)(iVar1 + 8) + 4) = 0;
      *(int *)(*(int *)(iVar1 + 8) + 0xc) = *(int *)(iVar1 + 8);
      *(u32 *)(iVar1 + 0xc) = 0;
    }
    if (*(int *)(iVar1 + 8) != 0) {
      LibC_free();
    }
    hardware_Sub_080079E8(iVar1,2);
    CppRuntime_builtin_delete(iVar1);
  }
  if ((param_2 & 1) != 0) {
    CppRuntime_builtin_delete(self);
  }
}

/* 0x080E2B5C (44B) | code_0803EE94_7B5C_Sub_080E2B5C (orig: func_080E2B5C) | origin: pure | domain: code_0803EE94_7B5C | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 LibC_free();
void code_0803EE94_7B5C_Sub_080E2B5C(u32 arg0,int arg1) {
  int val;
  while (val = arg1, val != 0) {
    code_0803EE94_7B5C_Sub_080E2B5C(arg0,*(u32 *)(val + 0xc));
    arg1 = *(int *)(val + 8);
    if (val != 0) {
      LibC_free(val);
    }
  }
}

/* 0x080E2B88 (44B) | code_0803EE94_7B5C_Sub_080E2B88 (orig: func_080E2B88) | origin: pure | domain: code_0803EE94_7B5C | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 LibC_free();
void code_0803EE94_7B5C_Sub_080E2B88(u32 arg0,int arg1) {
  int val;
  while (val = arg1, val != 0) {
    code_0803EE94_7B5C_Sub_080E2B88(arg0,*(u32 *)(val + 0xc));
    arg1 = *(int *)(val + 8);
    if (val != 0) {
      LibC_free(val);
    }
  }
}

