/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_0803EE94_78A8 (6 functions) */
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

/* 0x0804F160 (20B) | code_0803EE94_78A8_vfunc_0C (orig: func_0804F160) | origin: pure | domain: code_0803EE94_78A8 | HIGH / vtable_algebra */
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
#define SBORROW4(a, b) (((s32)((u32)(a) - (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) != ((s32)(b) < 0))
#define BADSPACEBASE 0
u32 code_0803EE94_78A8_vfunc_0C(u32 arg0, u32 arg1, u32 arg2, u32 arg3) {
    register u32 r0 = arg0;
    register u16 r1 = arg1;
    register u32 r2 = arg2;
    register u32 r3 = arg3;
    r0 = *(u8 *)(r0 + 4);
    r1 = r0 + 0;
    if ((s8)r0 == 0) goto loc_08050F58;
    r1 = 1;
loc_08050F58:
    r0 = r1 + 0;
    return r1;
}

/* 0x0804F174 (4B) | code_0803EE94_78A8_vfunc_10 (orig: func_0804F174) | origin: pure | domain: code_0803EE94_78A8 | HIGH / vtable_algebra */
u32 code_0803EE94_78A8_vfunc_10(void) {
    return 1;
}

/* 0x0804F178 (36B) | code_0803EE94_78A8_vfunc_14 (orig: func_0804F178) | origin: wip | domain: code_0803EE94_78A8 | HIGH / vtable_algebra */
u32 code_0803EE94_78A8_vfunc_14(s32 *self) {
  return *(s8 *)(self + 8);
}

/* 0x080507D0 (40B) | code_0803EE94_78A8_Sub_080507D0 (orig: func_080507D0) | origin: pure | domain: code_0803EE94_78A8 | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
u32 code_0803EE94_78A8_Sub_080507D0(u32 arg0,int arg1) {
  if (7 < arg0) {
    arg0 = 0;
  }
  if (5 < arg1 - 1U) {
    arg1 = 1;
  }
  return ((u32)*(u8 *)(arg0 * 6 + arg1 + 0x080F9F3C));
}

/* 0x08050D3C (32B) | code_0803EE94_78A8_Wrap_Ctor (orig: func_08050D3C) | origin: pure | domain: code_0803EE94_78A8 | MEDIUM / graph_algebra */
u32 code_0803EE94_78A8_Ctor(u32, u32, u32, u32, u32, u32, u32); u32 code_0803EE94_78A8_Wrap_Ctor(u32 *a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g) { return code_0803EE94_78A8_Ctor(*a, b, c, d, e, f, g); }

/* 0x080ADD08 (24B) | code_0803EE94_78A8_Sub_080ADD08 (orig: func_080ADD08) | origin: pure | domain: code_0803EE94_78A8 | MEDIUM / graph_algebra */
struct S { u32 x[8]; }; struct S *code_0803EE94_78A8_Sub_080ADD08(struct S *a, struct S **b) { *a = **b; return a; }

