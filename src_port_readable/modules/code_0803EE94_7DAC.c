/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_0803EE94_7DAC (3 functions) */
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

/* 0x08090E54 (48B) | code_0803EE94_7DAC_Create (orig: func_08090E54) | origin: pure | domain: code_0803EE94_7DAC | HIGH / vtable_algebra */
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
extern u32 code_0803EE94_7DA0_Ctor();
/* paridad 91.8% preset agbcc_O2 */
u32 code_0803EE94_7DAC_Create(u32 *arg0,u32 *arg1,u32 arg2) {
  u32 val;
  *arg0 = 0x080E7DAC;
  arg0[1] = code_0803EE94_7DA0_Ctor(CppRuntime_builtin_new(0x10c),arg2);
  val = *arg1;
  *arg1 = 0;
  arg0[2] = val;
return arg0;
}

/* 0x08090E84 (64B) | code_0803EE94_7DAC_Ctor (orig: func_08090E84) | origin: pure | domain: code_0803EE94_7DAC | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 scene_Dtor();
extern u32 func_080D3914();
void code_0803EE94_7DAC_Ctor(u32 *arg0,u32 arg1) {
  int *mem_ptr;
  int val;
  *arg0 = 0x080E7DAC;
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

/* 0x08090EC4 (28B) | code_0803EE94_7DAC_vfunc_0C (orig: func_08090EC4) | origin: pure | domain: code_0803EE94_7DAC | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 SpriteAnimEngine_5A28_Dtor_0960();
u32 code_0803EE94_7DAC_vfunc_0C(u32 *arg0,int arg1) {
  u32 val;
  SpriteAnimEngine_5A28_Dtor_0960(*(u32 *)(arg1 + 4));
  val = *(u32 *)(arg1 + 8);
  *(u32 *)(arg1 + 8) = 0;
  *arg0 = val;
  return arg0;
}

