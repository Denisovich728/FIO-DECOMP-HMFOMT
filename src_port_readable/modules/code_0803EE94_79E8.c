/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_0803EE94_79E8 (1 functions) */
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

/* 0x080E19A4 (84B) | code_0803EE94_79E8_vfunc_0C (orig: func_080E19A4) | origin: pure | domain: code_0803EE94_79E8 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 LibC_memcpy();
extern u32 LibC_strcpy();
extern u32 LibC_strlen();
u32 code_0803EE94_79E8_vfunc_0C(u8 *arg0,int arg1,int arg2) {
  u32 val;
  u32 val2;
  u8 auStack_30 [32];
  if (arg2 == 0xff) {
    val2 = *(u32 *)(arg1 + 4);
    val = LibC_strlen(val2);
    if (0x1f < val) {
      val = 0x1f;
    }
    LibC_memcpy(auStack_30,val2,val);
    auStack_30[val] = 0;
    *arg0 = 1;
    LibC_strcpy(arg0 + 4,auStack_30);
  }
  else {
    auStack_30[0] = 0;
    *arg0 = 0;
    LibC_strcpy(arg0 + 4);
  }
  return arg0;
}

