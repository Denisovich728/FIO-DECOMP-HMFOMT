/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_0803EE94_7D20 (3 functions) */
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

/* 0x080854F4 (52B) | code_0803EE94_7D20_Create (orig: func_080854F4) | origin: pure | domain: code_0803EE94_7D20 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 CppRuntime_builtin_new();
extern u32 code_0803EE94_7D14_Ctor();
u32 code_0803EE94_7D20_Create(u32 *arg0,u32 *arg1,u32 arg2) {
  u32 val;
  *arg0 = 0x080E7D20;
  arg0[1] = code_0803EE94_7D14_Ctor(CppRuntime_builtin_new(0x000061F4),arg2);
  val = *arg1;
  *arg1 = 0;
  arg0[2] = val;
  return arg0;
}

/* 0x08085528 (64B) | code_0803EE94_7D20_Ctor (orig: func_08085528) | origin: pure | domain: code_0803EE94_7D20 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 scene_Dtor();
extern u32 func_080D3914();
void code_0803EE94_7D20_Ctor(u32 *arg0,u32 arg1) {
  int *mem_ptr;
  int val;
  *arg0 = 0x080E7D20;
  mem_ptr = (int *)arg0[2];
  if (mem_ptr != (int *)0x0) {
    func_080D3914(mem_ptr,3,*(u32 *)(*mem_ptr + 8));
  }
  val = arg0[1];
  if (val != 0) {
    func_080D3914(val,3,*(u32 *)(*(int *)(val + 4) + 8));
  }
  scene_Dtor(arg0,arg1);
}

/* 0x08085568 (28B) | code_0803EE94_7D20_vfunc_0C (orig: func_08085568) | origin: pure | domain: code_0803EE94_7D20 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 SpriteAnimEngine_5B80_AutoPtrFactory_4228();
u32 code_0803EE94_7D20_vfunc_0C(u32 *arg0,int arg1) {
  u32 val;
  SpriteAnimEngine_5B80_AutoPtrFactory_4228(*(u32 *)(arg1 + 4));
  val = *(u32 *)(arg1 + 8);
  *(u32 *)(arg1 + 8) = 0;
  *arg0 = val;
  return arg0;
}

