/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_0803EE94_7D04 (2 functions) */
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

/* 0x08083A7C (112B) | code_0803EE94_7D04_Create (orig: func_08083A7C) | origin: pure | domain: code_0803EE94_7D04 | HIGH / vtable_algebra */
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
extern u32 code_0803EE94_7CE8_Ctor();
/* paridad 91.1% preset agbcc_O2 */
u32 code_0803EE94_7D04_Create(u32 *arg0,u32 *arg1,u32 arg2,u8 arg3,
             u32 arg4,u32 arg5,u32 arg6,u32 arg7) {
  u32 val;
  *arg0 = 0x080E7D04;
  arg0[1] = code_0803EE94_7CE8_Ctor(CppRuntime_builtin_new(0x000048E8),arg2,arg3,arg4,arg5,arg6,arg7);
  val = *arg1;
  *arg1 = 0;
  arg0[2] = val;
arg0[3] = arg4;
  arg0[4] = arg5;
  arg0[5] = arg6;
  arg0[6] = arg7;
  arg0[7] = arg2;
  return arg0;
}

/* 0x08083AEC (64B) | code_0803EE94_7D04_Ctor (orig: func_08083AEC) | origin: pure | domain: code_0803EE94_7D04 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 scene_Dtor();
extern u32 func_080D3914();
void code_0803EE94_7D04_Ctor(u32 *arg0,u32 arg1) {
  int *mem_ptr;
  int val;
  *arg0 = 0x080E7D04;
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

