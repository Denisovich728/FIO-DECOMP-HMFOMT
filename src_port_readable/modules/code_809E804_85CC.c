/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_809E804_85CC (3 functions) */
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

/* 0x080CADB4 (60B) | code_809E804_85CC_Ctor (orig: func_080CADB4) | origin: wip | domain: code_809E804_85CC | HIGH / vtable_algebra */
u32 code_809E804_85CC_Ctor(s8 self) {
  u32 val;
  register u32 reg_callee_save;
  *(u32 *)((self + (0x84 << 2))) = 0x080E85CC;
  val = reg_callee_save = 0xc;
  LibC_malloc(reg_callee_save);
  (void)reg_callee_save;
  *(u32 *)(self + 4) = 0;
  return val;
}

/* 0x080CADF0 (112B) | code_809E804_85CC_Dtor (orig: func_080CADF0) | origin: wip | domain: code_809E804_85CC | HIGH / vtable_algebra */
void code_809E804_85CC_Dtor(int self,u32 param_2) {
  u32 *puVar1;
  u32 *puVar2;
  int iVar3;
  u32 *puVar4;
  u32 *puStack_18;
  *(u16 *)(self + 0x210) = 0x080E85CC;
  puVar1 = *(u32 **)(self + 8);
  puVar2 = puVar1;
  puVar4 = (u32 *)*puVar1;
  puStack_18 = (u32 *)*puVar1;
  while ((int)(-((u32)puVar4 ^ (u32)puVar2) | (u32)puVar4 ^ (u32)puVar2) < 0) {
    iVar3 = puStack_18[2];
    if ((s8)iVar3 != 0) {
      func_080D3914(iVar3,3,*(u32 *)(*(int *)(iVar3 + 8) + 0xc));
    }
    puVar2 = (u32 *)*puStack_18;
    puVar4 = puVar1;
    puStack_18 = (s8)puVar2;
  }
  code_linkonce_Sub_080E586C(self + 4);
  if (*(int *)(self + 8) != 0) {
    LibC_free();
  }
  if ((param_2 & 1) != 0) {
    CppRuntime_builtin_delete(self);
  }
}

/* 0x080CAF6C (88B) | code_809E804_85CC_vfunc_0C (orig: func_080CAF6C) | origin: wip | domain: code_809E804_85CC | HIGH / vtable_algebra */
void code_809E804_85CC_vfunc_0C(int self) {
  u32 *puVar1;
  u32 *puVar2;
  u32 uVar3;
  u32 *puVar4;
  u32 *puVar5;
  u32 *puStack_18;
  puVar1 = *(u32 **)(self + 8);
  puStack_18 = (u32 *)*puVar1;
  while (uVar3 = (u32)puStack_18 ^ (u32)puVar1, (int)(-uVar3 | uVar3) < 0) {
    puVar4 = (u32 *)puStack_18[2];
    if ((int)(-*puVar4 | *puVar4) < 0) {
      puStack_18 = (u32 *)*puStack_18;
    }
    else {
      func_080D3914(puVar4,3,*(u32 *)(puVar4[2] + 0xc));
      puVar5 = (u32 *)*puStack_18;
      puVar2 = (u32 *)puStack_18[1];
      *puVar2 = puVar5;
      puVar5[1] = puVar2;
      LibC_free();
      puStack_18 = puVar5;
    }
  }
}

