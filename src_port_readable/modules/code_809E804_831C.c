/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_809E804_831C (1 functions) */
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

/* 0x080A6474 (68B) | code_809E804_831C_Ctor (orig: func_080A6474) | origin: wip | domain: code_809E804_831C | HIGH / vtable_algebra */
u32 code_809E804_831C_Ctor(int self, int param_2) {
  u32 val;
  val = code_809E804_82E4_Ctor();
  *(u32 *)((self + 0x90)) = 0x080E831C;
  *(u32 *)((0x94 + self)) = param_2;
  *(u8 *)(((self + 0x94) + 4)) = 0;
  val = code_809E804_831C_Sub_080E43FC((((self + 0x94) + 4) + 4), (self + 0x90));
  *(u8 *)((self + 0xb4)) = 0;
  *(u8 *)(((self + 0xb4) + 4) + 1) = 0;
  *(u8 *)((self + 0xb4) + 1) = 0;
  *(u8 *)(((self + 0xb4) + 4)) = 0;
  *(u8 *)((self + 0xb4) + 2) = 0;
  *(u8 *)(((self + 0xb4) + 4) + 2) = 0;
  return self;
}

