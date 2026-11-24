/* FIO-DECOMP-HMFOMT :: Port Readable Module: Core (4 functions) */
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

/* 0x08000584 (12B) | Core_Sub_08000584 (orig: func_08000584) | origin: pure | domain: Core | HEURISTIC / semantic_bank */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 CppRuntime_builtin_new();
u32 Core_Sub_08000584(void) {
  return CppRuntime_builtin_new();
}

/* 0x08000590 (12B) | Core_Sub_08000590 (orig: func_08000590) | origin: pure | domain: Core | HEURISTIC / semantic_bank */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 CppRuntime_builtin_delete();
void Core_Sub_08000590(void) {
  CppRuntime_builtin_delete();
}

/* 0x08008E28 (60B) | Core_Sub_08008E28 (orig: func_08008E28) | origin: wip | domain: Core | HEURISTIC / semantic_bank */
u32 Core_Sub_08008E28(u32 param_1,u32 param_2,u32 param_3) {
  u32 uVar1;
  if ((param_3 == 0) || (uVar1 = param_2 | param_1 | param_3, (((s32)(uVar1) << 31) >> 31) != 0)) {
    uVar1 = 0;
  }
  else if ((uVar1 & 3) == 0) {
    uVar1 = (param_3 & 0x3ffff) >> 2 | 0x84000000;
  }
  else {
    uVar1 = (param_3 & 0x1ffff) >> 1 | 0x80000000;
  }
  return uVar1;
}

/* 0x080099EC (24B) | Core_Sub_080099EC (orig: func_080099EC) | origin: pure | domain: Core | HEURISTIC / semantic_bank */
int Core_Sub_080099EC(u8 *a) { return *(u8 **)(a + 0xc) == a + 0x10; }

