/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_0803EE94_78E0 (3 functions) */
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

/* 0x0804EF20 (140B) | code_0803EE94_78E0_vfunc_08 (orig: func_0804EF20) | origin: wip | domain: code_0803EE94_78E0 | HIGH / vtable_algebra */
u32 code_0803EE94_78E0_vfunc_08(int self) {
  u8 bVar1;
  u32 uVar2;
  u32 uVar3;
  u32 uVar4;
  u32 *puVar5;
  u32 *puVar6;
  u32 *puVar7;
  u32 *puVar8;
  puVar6 = *(u32 **)(self + 0xc);
  puVar5 = *(u32 **)(self + 0x10);
  bVar1 = *(u8 *)(self + 0x15);
  if ((bVar1 & 0x80) == 0) {
    Code_Lib_Syscall_CpuFastSet(puVar6,puVar5,(*(u16 *)(self + 0x14) & 0x3fff) << 3);
    uVar2 = 0;
  }
  else {
    puVar7 = puVar5 + (*(u16 *)(self + 0x14) & 0x3fff) * 8;
    uVar3 = (bVar1 & 0x7f) >> 6 ^ 1;
    *(u8 *)(self + 0x15) = bVar1 & 0xbf | (u8)(uVar3 << 6);
    uVar4 = 0x0F0F0F0F << (uVar3 << 2);
    uVar3 = ~uVar4;
    do {
      *puVar5 = *puVar6 & uVar4;
      puVar5[1] = puVar6[1] & uVar3;
      puVar5[2] = puVar6[2] & uVar4;
      puVar5[3] = puVar6[3] & uVar3;
      puVar5[4] = puVar6[4] & uVar4;
      puVar5[5] = puVar6[5] & uVar3;
      puVar8 = puVar6 + 7;
      puVar5[6] = puVar6[6] & uVar4;
      puVar6 = puVar6 + 8;
      puVar5[7] = *puVar8 & uVar3;
      puVar5 = puVar5 + 8;
    } while (puVar5 != puVar7);
    uVar2 = 1;
  }
  return uVar2;
}

/* 0x080512D8 (72B) | code_0803EE94_78E0_Ctor (orig: func_080512D8) | origin: wip | domain: code_0803EE94_78E0 | HIGH / vtable_algebra */
u32 code_0803EE94_78E0_Ctor(u32 *self,u32 param_2,u32 param_3,u16 param_4,
                  char param_5) {
  *self = 0;
  self[1] = 0;
  self[2] = 0x080E78E0;
  self[3] = param_2;
  self[4] = param_3;
  *(u16 *)(self + 5) =
       (u16)0xFFFFC000 & *(s16 *)(self + 5) | param_4 & (u16)0x00003FFF;
  *(u8 *)((int)self + 0x15) = *(u8 *)((int)self + 0x15) & 0x3f | param_5 << 7;
  return;
}

/* 0x080E10E0 (12B) | code_0803EE94_78E0_vfunc_0C (orig: func_080E10E0) | origin: pure | domain: code_0803EE94_78E0 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 hardware_Dtor_98AC();
void code_0803EE94_78E0_vfunc_0C(void) {
  hardware_Dtor_98AC();
}

