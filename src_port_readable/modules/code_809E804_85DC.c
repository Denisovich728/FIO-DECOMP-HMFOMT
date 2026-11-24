/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_809E804_85DC (1 functions) */
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

/* 0x080CE19C (40B) | code_809E804_85DC_Ctor (orig: func_080CE19C) | origin: pure | domain: code_809E804_85DC | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_809E804_85A0_Ctor();
u32 code_809E804_85DC_Ctor(int arg0) {
  code_809E804_85A0_Ctor();
  *(u32 *)(arg0 + 4) = 0x080E85DC;
  *(u32 *)(arg0 + 0x8c) = 0;
  *(u32 *)(arg0 + 0x90) = 0;
  *(u32 *)(arg0 + 0x94) = 0;
  return arg0;
}

