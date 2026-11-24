/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_0803EE94_7CCC (2 functions) */
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

/* 0x08081ACC (52B) | code_0803EE94_7CCC_Ctor (orig: func_08081ACC) | origin: pure | domain: code_0803EE94_7CCC | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_809E804_8570_Ctor();
u32 code_0803EE94_7CCC_Ctor(int arg0) {
  code_809E804_8570_Ctor();
  *(u32 *)(arg0 + 4) = 0x080E7CCC;
  *(u32 *)(arg0 + 0x000006A4) = 0;
  *(u8 *)(arg0 + 0x6a8) = 0;
  *(u32 *)(arg0 + 0x6ac) = 0;
  return arg0;
}

/* 0x08081B00 (44B) | code_0803EE94_7CCC_Dtor (orig: func_08081B00) | origin: pure | domain: code_0803EE94_7CCC | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 CppRuntime_builtin_delete();
extern u32 code_809E804_8570_Dtor();
void code_0803EE94_7CCC_Dtor(int arg0,u32 arg1) {
  *(u32 *)(arg0 + 4) = 0x080E7CCC;
  CppRuntime_builtin_delete(*(u32 *)(arg0 + 0x000006AC));
  code_809E804_8570_Dtor(arg0,arg1);
}

