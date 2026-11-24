/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_entities_08034CEC_7380 (2 functions) */
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

/* 0x08038740 (96B) | code_entities_08034CEC_7380_Ctor (orig: func_08038740) | origin: wip | domain: code_entities_08034CEC_7380 | HIGH / vtable_algebra */
u32 code_entities_08034CEC_7380_Ctor(int self,u32 param_2,u32 param_3) {
  AEntity_Ctor(self);
  *(u32 *)(self + 0x14) = 0x080E7380;
  *(u32 *)(self + 0x18) = param_3;
  return self;
}

/* 0x080387A0 (24B) | code_entities_08034CEC_7380_vfunc_30 (orig: func_080387A0) | origin: pure | domain: code_entities_08034CEC_7380 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 CppRuntime_builtin_new();
extern u32 code_entities_08034CEC_736C_Dtor();
u32 code_entities_08034CEC_7380_vfunc_30(u32 arg0) {
  u32 val;
  val = CppRuntime_builtin_new(0x18);
  return code_entities_08034CEC_736C_Dtor(val,arg0);
}

