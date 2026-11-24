/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_809E804_85E8 (1 functions) */
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

/* 0x080CFB28 (52B) | code_809E804_85E8_Ctor (orig: func_080CFB28) | origin: pure | domain: code_809E804_85E8 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 FieldPlot_Ctor();
extern u32 code_809E804_82E4_Ctor();
u32 code_809E804_85E8_Ctor(int arg0) {
  int val;
  int val2;
  code_809E804_82E4_Ctor();
  *(u32 *)(arg0 + 0x90) = 0x080E85E8;
  val = arg0 + 0x94;
  val2 = 0x53;
  do {
    FieldPlot_Ctor(val);
    val = val + 4;
    val2 = val2 + -1;
  } while (val2 != -1);
  return arg0;
}

