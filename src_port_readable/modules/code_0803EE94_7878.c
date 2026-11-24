/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_0803EE94_7878 (2 functions) */
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

/* 0x08050EE4 (104B) | code_0803EE94_7878_Ctor (orig: func_08050EE4) | origin: wip | domain: code_0803EE94_7878 | HIGH / vtable_algebra */
u32 code_0803EE94_7878_Ctor(u32 *self,u8 param_2,u32 param_3,u32 param_4,u8 param_5) {
  *self = 0;
  self[1] = 0;
  self[2] = 0x080E7878;
  *(u8 *)(self + 3) = *(u8 *)(self + 3) & 0xe0 | param_2 & 0x1f;
  *(u16 *)(self + 3) =
       (u16)0xFFFF801F & *(u16 *)(self + 3) | (u16)((param_3 & 0x000003FF) << 5);
  self[3] = self[3] & 0xFFF87FFF | (param_4 & 0xf) << 0xf;
  *(u8 *)((int)self + 0xe) = *(u8 *)((int)self + 0xe) & 0x87 | (param_5 & 0xf) << 3;
  return;
}

/* 0x080E1018 (12B) | code_0803EE94_7878_vfunc_0C (orig: func_080E1018) | origin: pure | domain: code_0803EE94_7878 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 hardware_Dtor_98AC();
void code_0803EE94_7878_vfunc_0C(void) {
  hardware_Dtor_98AC();
}

