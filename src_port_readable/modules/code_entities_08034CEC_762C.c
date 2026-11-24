/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_entities_08034CEC_762C (3 functions) */
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

/* 0x080DD944 (80B) | code_entities_08034CEC_762C_vfunc_14 (orig: func_080DD944) | origin: wip | domain: code_entities_08034CEC_762C | HIGH / vtable_algebra */
void code_entities_08034CEC_762C_vfunc_14(int self,u8 *param_2) {
  *param_2 = *param_2 & 0xf0 | 6;
  *(u32 *)(param_2 + 4) = *(u32 *)(self + 0x50);
  *(u16 *)(param_2 + 8) = *(u16 *)(self + 0x54);
  *(u16 *)(param_2 + 10) = *(u16 *)(self + 0x56);
  param_2[0xc] = *(u8 *)(self + 0x78) & 0xf | *(char *)(self + 0x79) << 4;
}

/* 0x080DD994 (56B) | code_entities_08034CEC_762C_vfunc_10 (orig: func_080DD994) | origin: wip | domain: code_entities_08034CEC_762C | HIGH / vtable_algebra */
void code_entities_08034CEC_762C_vfunc_10(u32 self) {
  hardware_Sub_08039F90(self);
}

/* 0x080DDC18 (12B) | code_entities_08034CEC_762C_vfunc_08 (orig: func_080DDC18) | origin: pure | domain: code_entities_08034CEC_762C | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_entities_08034CEC_76BC_Dtor();
void code_entities_08034CEC_762C_vfunc_08(void) {
  code_entities_08034CEC_76BC_Dtor();
}

