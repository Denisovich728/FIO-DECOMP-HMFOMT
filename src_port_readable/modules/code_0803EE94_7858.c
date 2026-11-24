/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_0803EE94_7858 (4 functions) */
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

/* 0x0804ED28 (84B) | code_0803EE94_7858_Sub_0804ED28 (orig: func_0804ED28) | origin: wip | domain: code_0803EE94_7858 | MEDIUM / graph_algebra */
void code_0803EE94_7858_Sub_0804ED28(int param_1,u16 *param_2,short param_3,short param_4,int param_5) {
  u16 uVar1;
  int iVar2;
  u16 uVar3;
  uVar3 = param_4 * 0x1000;
  do {
    iVar2 = LibGcc_udivsi3(param_1,10);
    uVar1 = param_3 + ((short)param_1 + (short)iVar2 * -10) * 4;
    *param_2 = uVar1 + 1 | uVar3;
    param_2[-1] = uVar3 | uVar1;
    param_2[param_5] = uVar1 + 3 | uVar3;
    (param_2 + param_5)[-1] = uVar1 + 2 | uVar3;
    param_2 = param_2 + -2;
    param_1 = iVar2;
  } while (iVar2 != 0);
}

/* 0x0804ED7C (36B) | code_0803EE94_7858_Ctor (orig: func_0804ED7C) | origin: pure | domain: code_0803EE94_7858 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
u32 code_0803EE94_7858_Ctor(u32 *arg0,u32 arg1,u32 arg2,u16 arg3,
                  u16 arg4,u32 arg5) {
  *arg0 = 0;
  arg0[1] = 0;
  arg0[2] = 0x080E7858;
  arg0[3] = arg1;
  arg0[4] = arg2;
  *(u16 *)(arg0 + 5) = arg3;
  *(u16 *)((int)arg0 + 0x16) = arg4;
  arg0[6] = arg5;
  return;
}

/* 0x0804EDA0 (20B) | code_0803EE94_7858_Ctor_EDA0 (orig: func_0804EDA0) | origin: pure | domain: code_0803EE94_7858 | HIGH / vtable_algebra */
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
extern u32 hardware_Dtor_98AC();
void code_0803EE94_7858_Ctor_EDA0(u32 arg0, u32 arg1, u32 arg2, u32 arg3) {
    register u32 r0 = arg0;
    register u32 r1 = arg1;
    register u32 r2 = arg2;
    register u32 r3 = arg3;
    r2 = 0x080E7858;
    *(u32 *)(r0 + 8) = r2;
    r0 = hardware_Dtor_98AC(r0, r1, r2, r3);
    return r0;
}

/* 0x0804EEDC (32B) | code_0803EE94_7858_vfunc_08 (orig: func_0804EEDC) | origin: pure | domain: code_0803EE94_7858 | HIGH / vtable_algebra */
struct S { u32 p0, p1, p2, a, b; u16 c, d; u32 e; }; void code_0803EE94_7858_Sub_0804ED28(u32, u32, u16, u16, u32); int code_0803EE94_7858_vfunc_08(struct S *s) { code_0803EE94_7858_Sub_0804ED28(s->a, s->b, s->c, s->d, s->e); return 0; }

