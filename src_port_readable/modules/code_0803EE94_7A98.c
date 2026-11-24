/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_0803EE94_7A98 (4 functions) */
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

/* 0x08069E14 (68B) | code_0803EE94_7A98_Create (orig: func_08069E14) | origin: pure | domain: code_0803EE94_7A98 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
#define CONCAT11(a, b) ((u16)(((u16)(u8)(a) << 8) | (u8)(b)))
#define CONCAT12(a, b) ((u32)(((u32)(u8)(a) << 16) | (u16)(b)))
#define CONCAT13(a, b) ((u32)(((u32)(u8)(a) << 24) | ((u32)(b) & 0xFFFFFFu)))
#define CONCAT21(a, b) ((u32)(((u32)(u16)(a) << 8) | (u8)(b)))
#define CONCAT22(a, b) ((u32)(((u32)(u16)(a) << 16) | (u16)(b)))
#define CONCAT31(a, b) ((u32)(((u32)(a) << 8) | (u8)(b)))
#define CONCAT44(a, b) ((u32)(b))
#define SUB41(a, b) ((u8)((u32)(a) >> ((b) * 8)))
#define SUB42(a, b) ((u16)((u32)(a) >> ((b) * 8)))
#define SUB84(a, b) ((u32)(a))
#define ZEXT14(a) ((u32)(u8)(a))
#define ZEXT24(a) ((u32)(u16)(a))
#define ZEXT48(a) ((u32)(a))
#define SEXT14(a) ((s32)(s8)(a))
#define SEXT24(a) ((s32)(s16)(a))
#define SEXT48(a) ((s32)(a))
#define CARRY4(a, b) ((u32)(a) > (0xFFFFFFFFu - (u32)(b)))
#define SCARRY4(a, b) (((s32)((u32)(a) + (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) == ((s32)(b) < 0))
#define SBORROW4(a, b) (((s32)((u32)(a) - (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) != ((s32)(b) < 0))
#define BADSPACEBASE 0
extern u32 CppRuntime_builtin_new();
extern u32 code_0803EE94_7A88_Ctor();
u32 *code_0803EE94_7A98_Create(u32 *arg0, u32 *arg1, u32 arg2, u8 arg3) {
  u32 val;
  *arg0 = 0x080E7A98;
  arg0[1] = code_0803EE94_7A88_Ctor(CppRuntime_builtin_new(0x164), arg2, arg3);
  val = *arg1;
  *arg1 = 0;
  arg0[2] = val;
  return arg0;
}

/* 0x08069E58 (64B) | code_0803EE94_7A98_Ctor (orig: func_08069E58) | origin: pure | domain: code_0803EE94_7A98 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 scene_Dtor();
extern u32 func_080D3914();
void code_0803EE94_7A98_Ctor(u32 *arg0,u32 arg1) {
  int *mem_ptr;
  int val;
  *arg0 = 0x080E7A98;
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

/* 0x08069E98 (28B) | code_0803EE94_7A98_vfunc_0C (orig: func_08069E98) | origin: pure | domain: code_0803EE94_7A98 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 SpriteAnimEngine_5B80_Ctor_69A0();
u32 code_0803EE94_7A98_vfunc_0C(u32 *arg0,int arg1) {
  u32 val;
  SpriteAnimEngine_5B80_Ctor_69A0(*(u32 *)(arg1 + 4));
  val = *(u32 *)(arg1 + 8);
  *(u32 *)(arg1 + 8) = 0;
  *arg0 = val;
  return arg0;
}

/* 0x080DC50C (72B) | code_0803EE94_7A98_Sub_080DC50C (orig: func_080DC50C) | origin: wip | domain: code_0803EE94_7A98 | MEDIUM / graph_algebra */
u32 code_0803EE94_7A98_Sub_080DC50C(u32 *param_1,int param_2) {
  u32 uVar1;
  u32 auStack_1c [3];
  auStack_1c[0] = *(u32 *)(param_2 + 4);
  *(u32 *)(param_2 + 4) = 0;
  uVar1 = CppRuntime_builtin_new(0xc);
  uVar1 = code_0803EE94_7A98_Create(uVar1,auStack_1c,*(u32 *)(param_2 + 8),*(u8 *)(param_2 + 0xc)
                       );
  *param_1 = uVar1;
  return param_1;
}

