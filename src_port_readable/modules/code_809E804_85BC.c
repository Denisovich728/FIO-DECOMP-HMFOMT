/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_809E804_85BC (3 functions) */
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

/* 0x080CAFC4 (204B) | code_809E804_85BC_Ctor (orig: func_080CAFC4) | origin: wip | domain: code_809E804_85BC | HIGH / vtable_algebra */
u32 code_809E804_85BC_Ctor(int self,u32 param_2,u32 param_3,u32 param_4,u32 param_5,
             u8 param_6) {
  u32 *puVar1;
  u32 uVar2;
  u32 uStack_34;
  u32 uStack_30;
  u32 uStack_2c;
  u32 *puStack_28;
  u8 *puStack_24;
  code_809E804_85CC_Ctor(self,param_3);
  *(u32 *)(self + 0x210) = 0x080E85BC;
  code_809E804_SetField_0x00_AC70(&uStack_34);
  puStack_28 = (u32 *)(self + 0x214);
  *puStack_28 = 0;
  if (param_4 < 9) {
    puVar1 = (u32 *)(self + 0x218);
    for (uVar2 = param_4; uVar2 != 0; uVar2 = uVar2 - 1) {
      if (puVar1 != (u32 *)0x0) {
        *puVar1 = uStack_34;
        puVar1[1] = uStack_30;
        puVar1[2] = uStack_2c;
      }
      puVar1 = puVar1 + 3;
    }
    *puStack_28 = param_4;
  }
  *(u32 *)(self + 0x278) = param_2;
  *(u8 *)(self + 0x27c) = param_6;
  puStack_24 = (u8 *)&uStack_34;
  code_809E804_SetField_0x00_AC70(self + 0x280);
  uVar2 = LibC_strlen(param_5);
  if (8 < uVar2) {
    uVar2 = 8;
  }
  LibC_memcpy(self + 0x28c,param_5,uVar2);
  *(u8 *)(self + 0x28c + uVar2) = 0;
  *(u32 *)(self + 0x298) = param_4;
  return self;
}

/* 0x080CC150 (12B) | code_809E804_85BC_vfunc_0C (orig: func_080CC150) | origin: pure | domain: code_809E804_85BC | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_809E804_85CC_vfunc_0C();
void code_809E804_85BC_vfunc_0C(void) {
  code_809E804_85CC_vfunc_0C();
}

/* 0x080CD950 (68B) | code_809E804_85BC_Ctor_D950 (orig: func_080CD950) | origin: wip | domain: code_809E804_85BC | HIGH / vtable_algebra */
void code_809E804_85BC_Ctor_D950(int self,u32 param_2) {
  int *piVar1;
  *(u32 *)(self + 0x210) = 0x080E85BC;
  for (piVar1 = (int *)(self + 0x218);
      piVar1 != (int *)(self + 0x214) + *(int *)(self + 0x214) * 3 + 1; piVar1 = piVar1 + 3) {
  }
  code_809E804_85CC_Dtor(self,param_2);
}

