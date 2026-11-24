/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_0803EE94_824C (3 functions) */
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

/* 0x0809A4D4 (68B) | code_0803EE94_824C_Create (orig: func_0809A4D4) | origin: pure | domain: code_0803EE94_824C | HIGH / vtable_algebra */
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
extern u32 code_0803EE94_8230_Ctor();
u32 code_0803EE94_824C_Create(u32 *arg0,u32 *arg1,u32 arg2,u8 arg3) {
  u32 val;
  *arg0 = 0x080E824C;
  arg0[1] = code_0803EE94_8230_Ctor(CppRuntime_builtin_new(0x000033E0),arg2,arg3);
  val = *arg1;
  *arg1 = 0;
  arg0[2] = val;
  return arg0;
}

/* 0x0809A518 (64B) | code_0803EE94_824C_Ctor (orig: func_0809A518) | origin: pure | domain: code_0803EE94_824C | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 scene_Dtor();
extern u32 func_080D3914();
void code_0803EE94_824C_Ctor(u32 *arg0,u32 arg1) {
  int *mem_ptr;
  int val;
  *arg0 = 0x080E824C;
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

/* 0x0809A558 (52B) | code_0803EE94_824C_vfunc_0C (orig: func_0809A558) | origin: pure | domain: code_0803EE94_824C | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_0803EE94_824C_Sub_08094F6C();
extern u32 func_080D3914();
u32 code_0803EE94_824C_vfunc_0C(u32 *arg0,int arg1) {
  u32 val;
  int *piStack_10;
  code_0803EE94_824C_Sub_08094F6C(&piStack_10,*(u32 *)(arg1 + 4));
  if (piStack_10 != (int *)0x0) {
    func_080D3914(piStack_10,3,*(u32 *)(*piStack_10 + 8));
  }
  val = *(u32 *)(arg1 + 8);
  *(u32 *)(arg1 + 8) = 0;
  *arg0 = val;
  return arg0;
}

