/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_0803EE94_7C20 (3 functions) */
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

/* 0x0807E438 (64B) | code_0803EE94_7C20_Create (orig: func_0807E438) | origin: pure | domain: code_0803EE94_7C20 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 CppRuntime_builtin_new();
extern u32 code_0803EE94_7C08_Ctor();
u32 code_0803EE94_7C20_Create(u32 *self,u32 *param_2,u32 param_3,u32 param_4) {
  u32 val;

  u32 uVar1;
  *self = 0x080E7C20;
  uVar1 = CppRuntime_builtin_new(0x710);
  uVar1 = code_0803EE94_7C08_Ctor(uVar1,param_3,param_4);
  self[1] = uVar1;
  val = *param_2; *param_2 = 0; uVar1 = val;
  self[2] = uVar1;
  return self;
}

/* 0x0807E478 (64B) | code_0803EE94_7C20_Ctor (orig: func_0807E478) | origin: pure | domain: code_0803EE94_7C20 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 scene_Dtor();
extern u32 func_080D3914();
void code_0803EE94_7C20_Ctor(u32 *arg0,u32 arg1) {
  int *mem_ptr;
  int val;
  *arg0 = 0x080E7C20;
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

/* 0x0807E4B8 (28B) | code_0803EE94_7C20_vfunc_0C (orig: func_0807E4B8) | origin: pure | domain: code_0803EE94_7C20 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 BIOS_SWI_0xA4();
u32 code_0803EE94_7C20_vfunc_0C(u32 *arg0,int arg1) {
  u32 val;
  BIOS_SWI_0xA4(*(u32 *)(arg1 + 4));
  val = *(u32 *)(arg1 + 8);
  *(u32 *)(arg1 + 8) = 0;
  *arg0 = val;
  return arg0;
}

