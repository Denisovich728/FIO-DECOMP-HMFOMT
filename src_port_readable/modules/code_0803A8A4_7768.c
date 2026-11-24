/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_0803A8A4_7768 (2 functions) */
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

/* 0x080E0A08 (116B) | code_0803A8A4_7768_vfunc_08 (orig: func_080E0A08) | origin: wip | domain: code_0803A8A4_7768 | HIGH / vtable_algebra */
u32 code_0803A8A4_7768_vfunc_08(int self) {
  u32 uVar1;
  u32 uVar2;
  u32 uVar3;
  u32 *puVar4;
  u32 *puVar5;
  u32 *puVar6;
  u32 *puVar7;
  puVar5 = *(u32 **)(self + 0xc);
  puVar4 = *(u32 **)(self + 0x10);
  if (*(char *)(self + 0x15) == '\0') {
    Code_Lib_Syscall_CpuFastSet(puVar5,puVar4,(u32)*(u8 *)(self + 0x14) << 3);
    uVar2 = 0;
  }
  else {
    puVar6 = puVar4 + (u32)*(u8 *)(self + 0x14) * 8;
    uVar1 = *(u8 *)(self + 0x16) ^ 1;
    *(char *)(self + 0x16) = (char)uVar1;
    uVar3 = 0x0F0F0F0F << ((uVar1 & 0x3f) << 2);
    uVar1 = ~uVar3;
    do {
      *puVar4 = *puVar5 & uVar3;
      puVar4[1] = puVar5[1] & uVar1;
      puVar4[2] = puVar5[2] & uVar3;
      puVar4[3] = puVar5[3] & uVar1;
      puVar4[4] = puVar5[4] & uVar3;
      puVar4[5] = puVar5[5] & uVar1;
      puVar7 = puVar5 + 7;
      puVar4[6] = puVar5[6] & uVar3;
      puVar5 = puVar5 + 8;
      puVar4[7] = *puVar7 & uVar1;
      puVar4 = puVar4 + 8;
    } while (puVar4 != puVar6);
    uVar2 = 1;
  }
  return uVar2;
}

/* 0x080E0A88 (12B) | code_0803A8A4_7768_vfunc_0C (orig: func_080E0A88) | origin: pure | domain: code_0803A8A4_7768 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 hardware_Dtor_98AC();
void code_0803A8A4_7768_vfunc_0C(void) {
  hardware_Dtor_98AC();
}

