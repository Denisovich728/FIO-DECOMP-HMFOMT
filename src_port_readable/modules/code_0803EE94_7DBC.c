/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_0803EE94_7DBC (1 functions) */
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

/* 0x08090EE0 (120B) | code_0803EE94_7DBC_Ctor (orig: func_08090EE0) | origin: wip | domain: code_0803EE94_7DBC | HIGH / vtable_algebra */
u32 code_0803EE94_7DBC_Ctor(int self, int param_2, int param_3, int param_4) {
  u32 val;
  val = code_809E804_85DC_Ctor();
  *(u32 *)(self + 4) = 0x080E7DBC;
  *(u8 *)((self + 0x98)) = 0;
  *(u32 *)((self + 0xfc)) = (*(u32 *)(self + 8) + 0x00001C34);
  *(u32 *)((self + (0x80 << 1))) = (*(u32 *)(self + 8) + (0x00001C34 - 8));
  *(u32 *)((self + (0x82 << 1))) = (*(u32 *)(self + 8) + ((0x00001C34 - 8) + 0xc));
  *(u32 *)((self + (0x84 << 1))) = 0;
  *(u32 *)((self + ((0x82 << 1) + 8))) = 0;
  *(u8 *)(param_2) = 0;
  *(u32 *)((self + (0x88 << 1))) = *(u32 *)(param_2);
  *(u8 *)((self + (0x8a << 1))) = ((u32)(param_4 << 0x18) >> 0x18);
  *(u8 *)((self + (((0x82 << 1) + 8) + 0xc))) = 0;
  return self;
}

