/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_0803A8A4 (8 functions) */
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

/* 0x0803B474 (60B) | code_0803A8A4_Sub_0803B474 (orig: func_0803B474) | origin: pure | domain: code_0803A8A4 | HIGH / stanhash_map_tu */
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
extern u32 func_080D0ED0();
extern u32 LibC_rand();
void code_0803A8A4_Sub_0803B474(int arg0, int arg1, int arg2) {
  register int val3;
  int val;
  register int val2;
  u32 tmp;
  val2 = LibC_rand();
  val3 = func_080D0ED0(val2, 0xf0);
  *(u32 *)(arg0 + 0x14) = (arg1 + val3) * 0x10000;
  val2 = LibC_rand();
  val3 = func_080D0ED0(val2, 0xa0);
  *(int *)(arg0 + 0x18) = (arg2 + val3) * 0x10000;
  val = LibC_rand();
  tmp = 0x90;
  tmp &= val;
  tmp += 0x60;
  *(u16 *)(arg0 + 0x10) = tmp;
}

/* 0x0803BE9C (20B) | code_0803A8A4_Sub_0803BE9C (orig: func_0803BE9C) | origin: pure | domain: code_0803A8A4 | HIGH / stanhash_map_tu */
struct S { u8 pad[11]; u16 x:7; u16 y:8; }; int code_0803A8A4_Sub_0803BE9C(struct S **a) { return (*a)->y; }

/* 0x0803C540 (4B) | code_0803A8A4_GetField_0x0C (orig: func_0803C540) | origin: pure | domain: code_0803A8A4 | HIGH / stanhash_map_tu */
u8 code_0803A8A4_GetField_0x0C(u8 *arg0) {
    return *(u8 *)(arg0 + 12);
}

/* 0x0803C544 (8B) | code_0803A8A4_SetField_0x0F (orig: func_0803C544) | origin: pure | domain: code_0803A8A4 | HIGH / stanhash_map_tu */
void code_0803A8A4_SetField_0x0F(u8 *arg0) {
    *(u8 *)(arg0 + 15) = 0;
}

/* 0x0803D080 (112B) | code_0803A8A4_Sub_0803D080 (orig: func_0803D080) | origin: wip | domain: code_0803A8A4 | HIGH / stanhash_map_tu */
void code_0803A8A4_Sub_0803D080(int *param_1,int param_2) {
  int iVar1;
  int iVar2;
  int iVar3;
  u32 uStack_1c;
  iVar1 = 0x0875A440;
  iVar3 = *param_1;
  if (param_2 == 1) {
    uStack_1c = 0xd;
    iVar2 = 0xe;
    goto LAB_0803d0b4;
  }
  if (1 < param_2) {
    if (param_2 == 2) {
      uStack_1c = 0xf;
      iVar2 = 0x10;
      goto LAB_0803d0b4;
    }
    if (param_2 == 3) {
      uStack_1c = 0x11;
      iVar2 = 0x12;
      goto LAB_0803d0b4;
    }
  }
  uStack_1c = 0xb;
  iVar2 = 0xc;
LAB_0803d0b4:
  LibC_memcpy(iVar3 + 0x84,uStack_1c * 0x20 + 0x0875A440,0x20);
  *(u8 *)(iVar3 + 0x18c) = 1;
  LibC_memcpy(iVar3 + 0xa4,iVar2 * 0x20 + iVar1,0x20);
  *(u8 *)(iVar3 + 0x18c) = 1;
}

/* 0x0803D240 (168B) | code_0803A8A4_Sub_0803D240 (orig: func_0803D240) | origin: wip | domain: code_0803A8A4 | HIGH / stanhash_map_tu */
void code_0803A8A4_Sub_0803D240(int *param_1,u32 param_2) {
  int iVar1;
  int iVar2;
  u8 *puVar3;
  u8 *puVar4;
  u32 uVar5;
  int iVar6;
  u8 auStack_34 [32];
  puVar4 = auStack_34;
  iVar6 = *param_1;
  iVar2 = 0x1e;
  if (param_2 < 0xc) {
    iVar2 = 0x1c;
  }
  LibC_memcpy(iVar6 + 0x104,iVar2 * 0x20 + 0x0875A440,0x20);
  puVar3 = (u8 *)(iVar6 + 0x18c);
  *puVar3 = 1;
  uVar5 = 0xc;
  if ((param_2 != 0xc) && (uVar5 = param_2, 0xb < param_2)) {
    uVar5 = param_2 - 0xc;
  }
  iVar2 = LibGcc_udivsi3(uVar5,10);
  iVar1 = LibGcc_umodsi3(uVar5,10);
  if (iVar2 < 1) {
    LibC_memset(auStack_34,0,0x20);
  }
  else {
    puVar4 = (u8 *)(iVar2 * 0x20 + 0x0875A440);
  }
  LibC_memcpy(iVar6 + 0x144,puVar4,0x20);
  *puVar3 = 1;
  LibC_memcpy(iVar6 + 0x164,iVar1 * 0x20 + 0x0875A440,0x20);
  *puVar3 = 1;
}

/* 0x0803D2E8 (88B) | code_0803A8A4_Sub_0803D2E8 (orig: func_0803D2E8) | origin: wip | domain: code_0803A8A4 | HIGH / stanhash_map_tu */
void code_0803A8A4_Sub_0803D2E8(int *param_1,char param_2) {
  int iVar1;
  u8 auStack_28 [32];
    u32 tmp_a1;
  iVar1 = *param_1;
  if (!(param_2 == '\0')) {
    tmp_a1 = 0x0875A440 + 0x140;
    LibC_memcpy(iVar1 + 0x228, tmp_a1, 0x20);
  } else {
    LibC_memset(auStack_28,0,0x20);
    LibC_memcpy(iVar1 + 0x228,auStack_28,0x20);
  }
  *(u8 *)(iVar1 + 0x2b0) = 1;
}

/* 0x0803D340 (96B) | code_0803A8A4_Sub_0803D340 (orig: func_0803D340) | origin: pure | domain: code_0803A8A4 | HIGH / stanhash_map_tu */
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
extern u32 LibGcc_udivsi3();
extern u32 LibGcc_umodsi3();
extern u32 LibC_memcpy();
void code_0803A8A4_Sub_0803D340(int *arg0, u32 arg1) {
  int val;
  int val2;
  int val3;
  u32 tmp_a0;
  u32 tmp_a1;
  val3 = *arg0;
  val = LibGcc_udivsi3(arg1, 10);
  val2 = LibGcc_umodsi3(arg1, 10);
  tmp_a0 = val * 0x20 + 0x0875A440;
  LibC_memcpy(val3 + 0x248, tmp_a0, 0x20);
  *(u8 *)(val3 + 0x2b0) = 1;
  tmp_a1 = val2 * 0x20 + 0x0875A440;
  LibC_memcpy(val3 + 0x268, tmp_a1, 0x20);
  *(u8 *)(val3 + 0x2b0) = 1;
}

