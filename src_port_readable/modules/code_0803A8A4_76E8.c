/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_0803A8A4_76E8 (1 functions) */
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

/* 0x0803B4B0 (44B) | code_0803A8A4_76E8_Ctor (orig: func_0803B4B0) | origin: pure | domain: code_0803A8A4_76E8 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
u32 code_0803A8A4_76E8_Ctor(u32 *arg0,u32 arg1) {
  u32 *mem_ptr;
  int val;
  *arg0 = 0x080E76E8;
  arg0[1] = arg1;
  mem_ptr = arg0 + 2;
  val = 3;
  do {
    *(u8 *)mem_ptr = 0;
    mem_ptr = mem_ptr + 6;
    val = val + -1;
  } while (val != -1);
  return arg0;
}

