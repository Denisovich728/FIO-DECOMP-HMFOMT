/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_0803A8A4_77E0 (4 functions) */
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

/* 0x0803BEB0 (12B) | code_0803A8A4_77E0_Sub_0803BEB0 (orig: func_0803BEB0) | origin: pure | domain: code_0803A8A4_77E0 | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_0803A8A4_77E0_Sub_0803BAAC();
u32 code_0803A8A4_77E0_Sub_0803BEB0(u32 *arg0) {
  return code_0803A8A4_77E0_Sub_0803BAAC(*arg0);
}

/* 0x0803C54C (60B) | code_0803A8A4_77E0_Ctor (orig: func_0803C54C) | origin: pure | domain: code_0803A8A4_77E0 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_0803A8A4_7778_Create();
extern u32 SpriteAnimEngine_Create();
u32 code_0803A8A4_77E0_Ctor(int arg0,u32 arg1,u32 arg2,u32 arg3,
             u32 arg4) {
  code_0803A8A4_7778_Create(arg0,0x80,0x88,0x70,0x18,arg1,arg2,arg3,arg4);
  *(u32 *)(arg0 + 4) = 0x080E77E0;
  SpriteAnimEngine_Create(arg0 + 8);
  return arg0;
}

/* 0x0803C588 (40B) | code_0803A8A4_77E0_Ctor_C588 (orig: func_0803C588) | origin: pure | domain: code_0803A8A4_77E0 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_0803A8A4_7778_Dtor();
extern u32 SpriteAnimEngine_5A28_Wrap_Dtor();
void code_0803A8A4_77E0_Ctor_C588(int arg0,u32 arg1) {
  *(u32 *)(arg0 + 4) = 0x080E77E0;
  SpriteAnimEngine_5A28_Wrap_Dtor(arg0 + 8,2);
  code_0803A8A4_7778_Dtor(arg0,arg1);
}

/* 0x0803D4D8 (84B) | code_0803A8A4_77E0_vfunc_2C (orig: func_0803D4D8) | origin: wip | domain: code_0803A8A4_77E0 | HIGH / vtable_algebra */
u32 code_0803A8A4_77E0_vfunc_2C(int self,u32 param_2,u32 param_3,u32 param_4,
             u32 param_5) {
  u8 iVar1;
  u32 uVar2;
  u32 uVar3;
  iVar1 = code_0803A8A4_77E0_Sub_0803BEB0(self,param_3,param_4,param_5);
  if (iVar1 == 3) {
    uVar2 = func_080D3910(self,*(u32 *)(*(int *)(self + 4) + 0x1c));
    uVar3 = func_080D3910(self,*(u32 *)(*(int *)(self + 4) + 0x20));
    code_0803A8A4_77E0_Sub_0803C7C8(self + 8,uVar2,uVar3,param_2,param_4);
  }
  return (iVar1);
}

