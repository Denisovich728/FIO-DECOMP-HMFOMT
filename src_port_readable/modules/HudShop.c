/* FIO-DECOMP-HMFOMT :: Port Readable Module: HudShop (8 functions) */
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

/* 0x08050F4C (20B) | HudShop_Sub_08050F4C (orig: func_08050F4C) | origin: pure | domain: HudShop | HEURISTIC / semantic_bank */
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
u32 HudShop_Sub_08050F4C(u32 arg0, u32 arg1, u32 arg2, u32 arg3)
{
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

/* 0x08050F74 (44B) | HudShop_Sub_08050F74 (orig: func_08050F74) | origin: pure | domain: HudShop | HEURISTIC / semantic_bank */
struct S {
    u8 pad[0x14];
    u16 f14;
    u16 f16;
    u8 pad2;
    u8 f19;
};
inline u16 mod3(u32 c) {
    if (c > 2)
        c %= 3;
    return c;
}
inline u16 mod28(u32 b) {
    if (b > 27)
        b %= 28;
    return b;
}
extern "C" void HudShop_Sub_08050F74(S *s, u32 b, u32 c) {
    s->f16 = mod3(c);
    s->f14 = mod28(b);
    s->f19 = 0;
}

/* 0x080510E8 (132B) | HudShop_Sub_080510E8 (orig: func_080510E8) | origin: wip | domain: HudShop | HEURISTIC / semantic_bank */
void HudShop_Sub_080510E8(int param_1) {
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  iVar3 = 0;
  do {
    iVar6 = 0;
    iVar1 = iVar3 * 4;
    iVar3 = iVar3 + 1;
    do {
      piVar5 = (int *)(*(int *)(iVar1 + param_1 + 8) + iVar6 * 0x10);
      if ((char)piVar5[3] != '\0') {
        if ((-piVar5[2] | piVar5[2]) < 0) {
          iVar4 = *piVar5;
          iVar2 = hardware_Sub_08007D4C(piVar5 + 1);
          Code_Lib_Syscall_CpuFastSet(iVar4 + 4,iVar2 * 0x20 + 0x06010000,0x40);
        }
        *(u8 *)(piVar5 + 3) = 0;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 7);
  } while (iVar3 < 3);
  if (*(char *)(param_1 + 0x19) != '\0') {
    *(u8 *)(param_1 + 0x19) = 0;
  }
  if (*(char *)(param_1 + 0x1a) != '\0') {
    *(u8 *)(param_1 + 0x1a) = 0;
  }
}

/* 0x080512B8 (16B) | HudShop_Sub_080512B8 (orig: func_080512B8) | origin: pure | domain: HudShop | HEURISTIC / semantic_bank */
int HudShop_Sub_080512B8(u8 *a, int b) { int v = b + a[0x18]; if (v > 2) v -= 3; return v; }

/* 0x0805F9AC (4B) | HudShop_Sub_0805F9AC (orig: func_0805F9AC) | origin: wip | domain: HudShop | HEURISTIC / semantic_bank */
u32 HudShop_Sub_0805F9AC(u32 param_1) {
  int unaff_r4;
  int unaff_r5;
  u32 unaff_r6;
  u32 in_stack_0000000c;
  *(u32 *)(unaff_r5 + 0x40) = param_1;
  *(u32 *)(unaff_r4 + 0x40) = unaff_r6;
  *(int *)(unaff_r4 + 0x40) = unaff_r4;
  code_0803EE94_78C0_Sub_08050DA0(0,HudShop_Sub_0805F9C8,0x00006428);
  return in_stack_0000000c;
}

/* 0x0805F9B0 (24B) | HudShop_Sub_0805F9B0 (orig: func_0805F9B0) | origin: wip | domain: HudShop | HEURISTIC / semantic_bank */
u32 HudShop_Sub_0805F9B0(u32 param_1) {
  int unaff_r4;
  int unaff_r5;
  u32 unaff_r6;
  u32 in_stack_0000001c;
  *(u32 *)(unaff_r5 + 0x40) = param_1;
  *(u32 *)(unaff_r4 + 0x40) = unaff_r6;
  *(int *)(unaff_r4 + 0x40) = unaff_r4;
  code_0803EE94_78C0_Sub_08050DA0(0,HudShop_Sub_0805F9C8,0x00006428);
  return in_stack_0000001c;
}

/* 0x0805F9F4 (4B) | HudShop_Sub_0805F9F4 (orig: func_0805F9F4) | origin: wip | domain: HudShop | HEURISTIC / semantic_bank */
u8 HudShop_Sub_0805F9F4(u32 param_1, u32 param_2, u32 param_3, u32 param_4) {
    register u32 r0 = param_1;
    register u32 r1 = param_2;
    register u32 r2 = param_3;
    register u32 r3 = param_4;
    register u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0;
    r7 = (u32)r1 >> 0x20;
    return r0;
}

/* 0x0805FA30 (4B) | HudShop_Sub_0805FA30 (orig: func_0805FA30) | origin: wip | domain: HudShop | HEURISTIC / semantic_bank */
u32 HudShop_Sub_0805FA30(u32 param_1, u32 param_2, u32 param_3, u32 param_4) {
    register u8 r0 = param_1;
    register u32 r1 = param_2;
    register u32 r2 = param_3;
    register u32 r3 = param_4;
    register u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0;
    r7 = (u32)r1 >> 0x20;
    return r0;
}

