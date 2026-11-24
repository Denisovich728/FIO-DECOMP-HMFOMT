/* FIO-DECOMP-HMFOMT :: Port Readable Module: TownUI (13 functions) */
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

/* 0x08032A64 (32B) | TownUI_Sub_08032A64 (orig: func_08032A64) | origin: pure | domain: TownUI | HEURISTIC / semantic_bank */
int TownUI_Sub_08032A64(u8 *a) { u8 *p = a + 0x30; int r = 0; if (*(u16 *)(p + 0xe) != 0) r = ((u32)(-(*(s16 *)(p + 0x10)) | *(s16 *)(p + 0x10))) >> 31; return r; }

/* 0x08032AB4 (64B) | TownUI_Sub_08032AB4 (orig: func_08032AB4) | origin: pure | domain: TownUI | HEURISTIC / semantic_bank */
struct S {
    u8 pad[0x84];
    u8 a;
    u8 pad2;
    u8 b;
    u8 c;
    u8 pad3[2];
    u8 d:2;
};
extern void code_0803EE94_Sub_0805E860();
void TownUI_Sub_08032AB4(struct S *p, u32 param_2, u8 param_3) {
    code_0803EE94_Sub_0805E860((u8 *)p + 0x70, param_2);
    p->a = 1;
    p->b = 0;
    p->c = 1;
    p->d = param_3 != 0 ? 2 : 1;
}

/* 0x08032B04 (36B) | TownUI_Sub_08032B04 (orig: func_08032B04) | origin: pure | domain: TownUI | HEURISTIC / semantic_bank */
struct Sub { u8 a; u8 pad; u8 b; u8 c; };
struct S { u8 pad[0x30]; u8 sub0[0x14]; Sub sub; };
extern "C" void code_0803EE94_Sub_0805E860(void *);
extern "C" void TownUI_Sub_08032B04(S *s) {
    code_0803EE94_Sub_0805E860(s->sub0);
    s->sub.a = 1;
    s->sub.b = 0;
    s->sub.c = 1;
}

/* 0x08032B2C (20B) | TownUI_Sub_08032B2C (orig: func_08032B2C) | origin: pure | domain: TownUI | HEURISTIC / semantic_bank */
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
u32 TownUI_Sub_08032B2C(int arg0) {
  return ((u32)(*(u16 *)(arg0 + 0x24) == 0));
}

/* 0x080390DC (36B) | TownUI_Sub_080390DC (orig: func_080390DC) | origin: pure | domain: TownUI | HEURISTIC / semantic_bank */
struct Sub { u8 a; u8 pad; u8 b; u8 c; };
struct S { u8 pad[0x30]; u8 sub0[0x14]; Sub sub; };
extern "C" void code_0803EE94_Sub_0805E860(void *);
extern "C" void TownUI_Sub_080390DC(S *s) {
    code_0803EE94_Sub_0805E860(s->sub0);
    s->sub.a = 1;
    s->sub.b = 0;
    s->sub.c = 1;
}

/* 0x0803A820 (32B) | TownUI_Sub_0803A820 (orig: func_0803A820) | origin: pure | domain: TownUI | HEURISTIC / semantic_bank */
int TownUI_Sub_0803A820(u8 *a) { u8 *p = a + 0x30; int r = 0; if (*(u16 *)(p + 0xe) != 0) r = ((u32)(-(*(s16 *)(p + 0x10)) | *(s16 *)(p + 0x10))) >> 31; return r; }

/* 0x0803A840 (48B) | TownUI_Sub_0803A840 (orig: func_0803A840) | origin: pure | domain: TownUI | HEURISTIC / semantic_bank */
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
extern u32 code_0803EE94_Sub_0805E8F0();
void TownUI_Sub_0803A840(u32 arg0, u32 arg1, u32 arg2, u32 arg3)
{
    register u32 r0 = arg0;
    u32 r1 = arg1;
    u32 r2 = arg2;
    u32 r3 = arg3;
    u32 r4;
    r4 = r0 + 0;
    r1 = r4 + 0;
    r1 += 0x47;
    r0 = *(u8 *)(r1);
    if (r0 != 0) goto loc_0803A864;
    r0 = r4 + 0;
    r0 += 0x30;
    r0 = code_0803EE94_Sub_0805E8F0(r0, r1, r2, r3);
    r0 = r0 << 0x1e;
    if ((int)r0 >= 0) goto loc_0803A868;
    r1 = r4 + 0;
    r1 += 0x44;
    r0 = 1;
    goto loc_0803A866;
loc_0803A864:
    r0 = 0;
loc_0803A866:
    *(u8 *)(r1) = r0;
loc_0803A868:
    return r0;
}

/* 0x0803D488 (12B) | TownUI_Sub_0803D488 (orig: func_0803D488) | origin: pure | domain: TownUI | HEURISTIC / semantic_bank */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_0803A8A4_Sub_0803D340();
void TownUI_Sub_0803D488(int arg0) {
  code_0803A8A4_Sub_0803D340(arg0 + 8);
}

/* 0x0803D494 (16B) | TownUI_Sub_0803D494 (orig: func_0803D494) | origin: pure | domain: TownUI | HEURISTIC / semantic_bank */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_0803A8A4_Sub_0803D2E8();
void TownUI_Sub_0803D494(int arg0,u8 arg1) {
  code_0803A8A4_Sub_0803D2E8(arg0 + 8,arg1);
}

/* 0x0803D4A4 (12B) | TownUI_Sub_0803D4A4 (orig: func_0803D4A4) | origin: pure | domain: TownUI | HEURISTIC / semantic_bank */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_0803A8A4_Sub_0803D240();
void TownUI_Sub_0803D4A4(int arg0) {
  code_0803A8A4_Sub_0803D240(arg0 + 8);
}

/* 0x0803D4B0 (12B) | TownUI_Sub_0803D4B0 (orig: func_0803D4B0) | origin: pure | domain: TownUI | HEURISTIC / semantic_bank */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_0803A8A4_Sub_0803D0F0();
void TownUI_Sub_0803D4B0(int arg0) {
  code_0803A8A4_Sub_0803D0F0(arg0 + 8);
}

/* 0x0803D4BC (12B) | TownUI_Sub_0803D4BC (orig: func_0803D4BC) | origin: pure | domain: TownUI | HEURISTIC / semantic_bank */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_0803A8A4_Sub_0803D080();
void TownUI_Sub_0803D4BC(int arg0) {
  code_0803A8A4_Sub_0803D080(arg0 + 8);
}

/* 0x0803D4C8 (16B) | TownUI_Sub_0803D4C8 (orig: func_0803D4C8) | origin: pure | domain: TownUI | HEURISTIC / semantic_bank */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_0803A8A4_Sub_0803CD4C();
void TownUI_Sub_0803D4C8(int arg0,u32 arg1,u8 arg2) {
  code_0803A8A4_Sub_0803CD4C(arg0 + 8,arg1,arg2);
}

