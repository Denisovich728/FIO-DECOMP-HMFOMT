/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_entities_65F4 (3 functions) */
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

/* 0x0802BA10 (24B) | code_entities_65F4_vfunc_30 (orig: func_0802BA10) | origin: pure | domain: code_entities_65F4 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 CppRuntime_builtin_new();
extern u32 code_entities_Ctor_BF2C();
u32 code_entities_65F4_vfunc_30(u32 arg0) {
  u32 val;
  val = CppRuntime_builtin_new(0xd0);
  return code_entities_Ctor_BF2C(val,arg0);
}

/* 0x0802BA28 (76B) | code_entities_65F4_vfunc_2C (orig: func_0802BA28) | origin: wip | domain: code_entities_65F4 | HIGH / vtable_algebra */
void code_entities_65F4_vfunc_2C(int self,u32 param_2) {
  u16 sVar1;
  if (*(u8 *)(self + 0x58) == '\0') {
    if (*(char *)(self + 0x54) != '\0') {
      code_entities_Sub_0802BA74(self);
      sVar1 = code_entities_Sub_0802BC48(self);
      if (sVar1 != *(u16 *)(self + 0x22)) {
        AActorEntity_SetAnim(self);
      }
    }
  }
  else {
    *(char *)(self + 0x58) = '\0';
  }
  code_entities_08034CEC_7018_vfunc_2C(self,param_2);
}

/* 0x0802BCA4 (172B) | code_entities_65F4_vfunc_40 (orig: func_0802BCA4) | origin: wip | domain: code_entities_65F4 | HIGH / vtable_algebra */
void code_entities_65F4_vfunc_40(int self,u32 param_2) {
    u32 * puVar3;
    u8 auStack_1c [4];
  s8 uVar1;
  register u32 uVar2;
  *(u16 *)(self + 0x38) = 1;
  *(u8 *)(self + 0x39) = 0;
  *(s8 *)(self + 0x40) = 0;
  *(u32 *)(self + 0x3c) = 0xFFF80000;
  *(u32 *)(self + 0x4c) = 0x110000;
  puVar3 = *(u32 **)(self + 0x10);
  if (puVar3 != (u32 *)0x0) {
    func_0800DB2C(auStack_1c,param_2);
    uVar1 = Tool_GetIconId(auStack_1c);
    uVar2 = func_080D3910(*(int **)*puVar3,*(u32 *)(**(int **)*puVar3 + 100));
    code_0803EE94_Sub_0805E850(puVar3 + 0x2d,uVar2,uVar1);
    *(u8 *)(puVar3 + 0x32) = 1;
    *(u8 *)((int)puVar3 + 0xca) = 0;
    *(u8 *)((int)puVar3 + 0xcb) = 1;
    *(u16 *)(puVar3 + 0x33) = uVar1;
  }
  *(u8 *)(self + 0x34) = 4;
  *(u8 *)(self + 0x35) = 0x14;
  *(u8 *)(self + 0x58) = 1;
  uVar1 = code_entities_Sub_0802BC48(self);
  AActorEntity_SetAnim(self,uVar1);
  *(u8 *)(self + 0x54) = 1;
}

