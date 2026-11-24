/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_0803EE94_78F0 (4 functions) */
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

/* 0x080507F8 (112B) | code_0803EE94_78F0_Ctor_07F8 (orig: func_080507F8) | origin: wip | domain: code_0803EE94_78F0 | HIGH / vtable_algebra */
void code_0803EE94_78F0_Ctor_07F8(int self,u8 *param_2,u32 param_3,u32 param_4) {
    u16 uVar3;
    u32 uVar4;
    int iVar5;
    u32 uVar6;
    u32 uStack_1c;
  register u32 uVar1;
  register u16 uVar2;
  uVar6 = (*param_2 & 0x7f) >> 2;
  uVar3 = (u16)uVar6;
  uVar4 = *param_2 & 3;
  uVar2 = (u16)uVar4;
  if (2 < uVar4) {
    uVar2 = LibGcc_umodsi3(uVar4,3);
  }
  *(u16 *)(self + 0xe6) = uVar2;
  if (0x1b < uVar6) {
    uVar3 = LibGcc_umodsi3(uVar6,0x1c);
  }
  code_809E804_Sub_080ADD5C(self + 0xec,param_3,param_4);
  *(u8 *)(self + 0xe9) = 0;
  *(u16 *)(self + 0xe4) = uVar3;
  uVar1 = 0x080E78F0;
  do {
    uStack_1c = uVar1;
    iVar5 = code_809E804_Sub_080ADD78(self + 0xec,self + 0xd0,&uStack_1c);
  } while (iVar5 == 1);
}

/* 0x080E103C (32B) | code_0803EE94_78F0_Dtor (orig: func_080E103C) | origin: pure | domain: code_0803EE94_78F0 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 CppRuntime_builtin_delete();
void code_0803EE94_78F0_Dtor(u32 *arg0,u32 arg1) {
  *arg0 = 0x080E78F0;
  if ((arg1 & 1) != 0) {
    CppRuntime_builtin_delete(arg0);
  }
}

/* 0x080E10EC (4B) | code_0803EE94_78F0_vfunc_14 (orig: func_080E10EC) | origin: pure | domain: code_0803EE94_78F0 | HIGH / vtable_algebra */
u32 code_0803EE94_78F0_vfunc_14(void) {
    return 1;
}

/* 0x080E10F8 (32B) | code_0803EE94_78F0_Dtor_10F8 (orig: func_080E10F8) | origin: pure | domain: code_0803EE94_78F0 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 CppRuntime_builtin_delete();
void code_0803EE94_78F0_Dtor_10F8(u32 *arg0,u32 arg1) {
  *arg0 = 0x080E78F0;
  if ((arg1 & 1) != 0) {
    CppRuntime_builtin_delete(arg0);
  }
}

