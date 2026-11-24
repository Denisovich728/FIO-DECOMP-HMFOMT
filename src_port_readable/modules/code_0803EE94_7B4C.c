/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_0803EE94_7B4C (4 functions) */
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

/* 0x080755EC (48B) | code_0803EE94_7B4C_Create (orig: func_080755EC) | origin: pure | domain: code_0803EE94_7B4C | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 CppRuntime_builtin_new();
extern u32 code_0803EE94_7B3C_Ctor();
u32 code_0803EE94_7B4C_Create(u32 *self,u32 *param_2,u32 param_3) {
  u32 val;
  register u32 uVar1;
  *self = 0x080E7B4C;
  self[1] = code_0803EE94_7B3C_Ctor(CppRuntime_builtin_new(0x17c),param_3);
  val = *param_2;
  *param_2 = 0;
  self[2] = val;
  return self;
}

/* 0x0807561C (64B) | code_0803EE94_7B4C_Ctor (orig: func_0807561C) | origin: pure | domain: code_0803EE94_7B4C | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 scene_Dtor();
extern u32 func_080D3914();
void code_0803EE94_7B4C_Ctor(u32 *arg0,u32 arg1) {
  int *mem_ptr;
  int val;
  *arg0 = 0x080E7B4C;
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

/* 0x0807565C (28B) | code_0803EE94_7B4C_vfunc_0C (orig: func_0807565C) | origin: pure | domain: code_0803EE94_7B4C | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 SpriteAnimEngine_5B80_Ctor_69A0();
u32 code_0803EE94_7B4C_vfunc_0C(u32 *arg0,int arg1) {
  u32 val;
  SpriteAnimEngine_5B80_Ctor_69A0(*(u32 *)(arg1 + 4));
  val = *(u32 *)(arg1 + 8);
  *(u32 *)(arg1 + 8) = 0;
  *arg0 = val;
  return arg0;
}

/* 0x080DC49C (72B) | code_0803EE94_7B4C_Sub_080DC49C (orig: func_080DC49C) | origin: wip | domain: code_0803EE94_7B4C | MEDIUM / graph_algebra */
u32 code_0803EE94_7B4C_Sub_080DC49C(u32 *param_1,int param_2) {
  u32 uVar1;
  u32 auStack_1c [3];
  auStack_1c[0] = *(u32 *)(param_2 + 4);
  *(u32 *)(param_2 + 4) = 0;
  uVar1 = CppRuntime_builtin_new(0xc);
  uVar1 = code_0803EE94_7B4C_Create(uVar1,auStack_1c,*(u32 *)(param_2 + 8));
  *param_1 = uVar1;
  return param_1;
}

