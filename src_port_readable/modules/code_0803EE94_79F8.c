/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_0803EE94_79F8 (3 functions) */
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

/* 0x0805FCD0 (52B) | code_0803EE94_79F8_Create (orig: func_0805FCD0) | origin: pure | domain: code_0803EE94_79F8 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 CppRuntime_builtin_new();
extern u32 code_0803EE94_79DC_Create();
u32 code_0803EE94_79F8_Create(u32 *arg0,u32 *arg1,u32 arg2) {
  register u32 val;
  *arg0 = 0x080E79F8;
  arg0[1] = code_0803EE94_79DC_Create(CppRuntime_builtin_new(0x00006430),arg2);
  val = (u32)*arg1;
  *arg1 = 0;
  arg0[2] = val;
  return arg0;
}

/* 0x0805FD04 (64B) | code_0803EE94_79F8_Ctor (orig: func_0805FD04) | origin: pure | domain: code_0803EE94_79F8 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 scene_Dtor();
extern u32 func_080D3914();
void code_0803EE94_79F8_Ctor(u32 *arg0,u32 arg1) {
  int *mem_ptr;
  int val;
  *arg0 = 0x080E79F8;
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

/* 0x0805FD44 (52B) | code_0803EE94_79F8_vfunc_0C (orig: func_0805FD44) | origin: pure | domain: code_0803EE94_79F8 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 SpriteAnimEngine_5B80_AutoPtrFactory_EE44();
extern u32 func_080D3914();
u32 code_0803EE94_79F8_vfunc_0C(u32 *arg0,int arg1) {
  u32 val;
  int *piStack_10;
  SpriteAnimEngine_5B80_AutoPtrFactory_EE44(&piStack_10,*(u32 *)(arg1 + 4));
  if (piStack_10 != (int *)0x0) {
    func_080D3914(piStack_10,3,*(u32 *)(*piStack_10 + 8));
  }
  val = *(u32 *)(arg1 + 8);
  *(u32 *)(arg1 + 8) = 0;
  *arg0 = val;
  return arg0;
}

