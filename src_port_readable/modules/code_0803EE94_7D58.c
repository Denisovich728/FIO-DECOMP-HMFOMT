/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_0803EE94_7D58 (3 functions) */
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

/* 0x0808AB38 (48B) | code_0803EE94_7D58_Create (orig: func_0808AB38) | origin: pure | domain: code_0803EE94_7D58 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 CppRuntime_builtin_new();
extern u32 code_0803EE94_7D4C_Ctor();
u32 code_0803EE94_7D58_Create(u32 *arg0,u32 *arg1,u32 arg2) {
  u32 val;
  *arg0 = 0x080E7D58;
  arg0[1] = code_0803EE94_7D4C_Ctor(CppRuntime_builtin_new(0x10c),arg2);
  val = *arg1;
  *arg1 = 0;
  arg0[2] = val;
  return arg0;
}

/* 0x0808AB68 (64B) | code_0803EE94_7D58_Ctor (orig: func_0808AB68) | origin: pure | domain: code_0803EE94_7D58 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 scene_Dtor();
extern u32 func_080D3914();
void code_0803EE94_7D58_Ctor(u32 *arg0,u32 arg1) {
  int *mem_ptr;
  int val;
  *arg0 = 0x080E7D58;
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

/* 0x0808ABA8 (28B) | code_0803EE94_7D58_vfunc_0C (orig: func_0808ABA8) | origin: pure | domain: code_0803EE94_7D58 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 SpriteAnimEngine_5A28_Dtor_A55C();
u32 code_0803EE94_7D58_vfunc_0C(u32 *arg0,int arg1) {
  u32 val;
  SpriteAnimEngine_5A28_Dtor_A55C(*(u32 *)(arg1 + 4));
  val = *(u32 *)(arg1 + 8);
  *(u32 *)(arg1 + 8) = 0;
  *arg0 = val;
  return arg0;
}

