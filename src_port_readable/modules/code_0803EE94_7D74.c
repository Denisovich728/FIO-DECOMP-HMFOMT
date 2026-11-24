/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_0803EE94_7D74 (3 functions) */
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

/* 0x0808C56C (48B) | code_0803EE94_7D74_Create (orig: func_0808C56C) | origin: pure | domain: code_0803EE94_7D74 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 CppRuntime_builtin_new();
extern u32 code_0803EE94_7D68_Ctor();
u32 code_0803EE94_7D74_Create(u32 *self,u32 *param_2,u32 param_3) {
  u32 val;
  unsigned int uVar1;
  *self = (u32)0x080E7D74;
  self[1] = code_0803EE94_7D68_Ctor(CppRuntime_builtin_new(0x10c),param_3);
  val = *param_2;
  *param_2 = 0;
  self[2] = val;
  return self;
}

/* 0x0808C59C (64B) | code_0803EE94_7D74_Ctor (orig: func_0808C59C) | origin: pure | domain: code_0803EE94_7D74 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 scene_Dtor();
extern u32 func_080D3914();
void code_0803EE94_7D74_Ctor(u32 *arg0,u32 arg1) {
  int *mem_ptr;
  int val;
  *arg0 = 0x080E7D74;
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

/* 0x0808C5DC (28B) | code_0803EE94_7D74_vfunc_0C (orig: func_0808C5DC) | origin: pure | domain: code_0803EE94_7D74 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 SpriteAnimEngine_5A28_Dtor_C0BC();
u32 code_0803EE94_7D74_vfunc_0C(u32 *arg0,int arg1) {
  u32 val;
  SpriteAnimEngine_5A28_Dtor_C0BC(*(u32 *)(arg1 + 4));
  val = *(u32 *)(arg1 + 8);
  *(u32 *)(arg1 + 8) = 0;
  *arg0 = val;
  return arg0;
}

