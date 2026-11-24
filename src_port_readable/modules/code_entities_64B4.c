/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_entities_64B4 (1 functions) */
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

/* 0x080222F4 (44B) | code_entities_64B4_vfunc_10 (orig: func_080222F4) | origin: pure | domain: code_entities_64B4 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_entities_080320DC_6864_vfunc_10();
extern u32 code_entities_080320DC_Sub_08032900();
void code_entities_64B4_vfunc_10(int *arg0,u32 arg1) {
  u8 val;
  int val2;
  val2 = *arg0;
  val = code_entities_080320DC_Sub_08032900(*(u16 *)(val2 + 4),(int)*(short *)(val2 + 10),
                          (int)*(short *)(val2 + 0xe));
  *(u8 *)((int)arg0 + 0x8b) = val;
  code_entities_080320DC_6864_vfunc_10(arg0,arg1);
}

