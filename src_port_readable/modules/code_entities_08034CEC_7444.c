/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_entities_08034CEC_7444 (2 functions) */
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

/* 0x08037CC4 (24B) | code_entities_08034CEC_7444_Ctor (orig: func_08037CC4) | origin: pure | domain: code_entities_08034CEC_7444 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 AEntity_Ctor();
u32 code_entities_08034CEC_7444_Ctor(int arg0) {
  AEntity_Ctor();
  *(u32 *)(arg0 + 0x14) = 0x080E7444;
  return arg0;
}

/* 0x08037CF0 (24B) | code_entities_08034CEC_7444_vfunc_30 (orig: func_08037CF0) | origin: pure | domain: code_entities_08034CEC_7444 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 CppRuntime_builtin_new();
extern u32 code_entities_08034CEC_7478_Ctor();
u32 code_entities_08034CEC_7444_vfunc_30(u32 arg0) {
  u32 val;
  val = CppRuntime_builtin_new(0x54);
  return code_entities_08034CEC_7478_Ctor(val,arg0);
}

