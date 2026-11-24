/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_0803A8A4_7748 (2 functions) */
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

/* 0x0803B6FC (28B) | code_0803A8A4_7748_Ctor (orig: func_0803B6FC) | origin: pure | domain: code_0803A8A4_7748 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
u32 code_0803A8A4_7748_Ctor(u32 *arg0,u32 *arg1,u32 arg2) {
  u32 val;
  *arg0 = 0x080E7748;
  val = *arg1;
  *arg1 = 0;
  arg0[1] = val;
  arg0[2] = arg2;
  return;
}

/* 0x080E09BC (40B) | code_0803A8A4_7748_vfunc_08 (orig: func_080E09BC) | origin: pure | domain: code_0803A8A4_7748 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 scene_Dtor_080C();
extern u32 func_080D3914();
void code_0803A8A4_7748_vfunc_08(int arg0,u32 arg1) {
  int *mem_ptr;
  mem_ptr = *(int **)(arg0 + 4);
  if (mem_ptr != (int *)0x0) {
    func_080D3914(mem_ptr,3,*(u32 *)(*mem_ptr + 8));
  }
  scene_Dtor_080C(arg0,arg1);
}

