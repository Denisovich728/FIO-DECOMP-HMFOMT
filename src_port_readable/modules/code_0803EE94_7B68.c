/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_0803EE94_7B68 (3 functions) */
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

/* 0x08075B00 (200B) | code_0803EE94_7B68_Ctor (orig: func_08075B00) | origin: wip | domain: code_0803EE94_7B68 | HIGH / vtable_algebra */
u32 code_0803EE94_7B68_Ctor(u32 *self,int param_2,u32 param_3,u32 param_4,
             u32 param_5) {
  int iVar1;
  int iVar2;
  int iVar3;
  u8 auStack_60 [64];
  *self = param_3;
  self[5] = param_4;
  self[6] = 0;
  self[7] = 0;
  self[9] = 0;
  if (param_2 == 0) {
    iVar1 = 0;
    iVar3 = 0;
  }
  else {
    iVar3 = param_2 * 0x40;
    iVar1 = LibC_malloc(iVar3);
    if (iVar1 == 0) {
      iVar1 = code_linkonce_Sub_080D3BC0(iVar3);
    }
  }
  self[6] = iVar1;
  self[7] = iVar1;
  self[9] = iVar1 + iVar3;
  LibC_memset(auStack_60,0,0x40);
  iVar1 = self[6];
  iVar2 = param_2 << 3;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (iVar1 != 0) {
      LibC_memcpy(iVar1,auStack_60,0x40);
    }
    iVar1 = iVar1 + 0x40;
  }
  self[7] = iVar1;
  self[10] = 0;
  self[0xb] = 0;
  self[0xc] = 0x080E7B68;
  LibC_memset(self[6],0xff,iVar3);
  *(short *)(self + 1) = (short)iVar2;
  *(short *)((int)self + 6) = (short)0x0000FFFF;
  *(u16 *)(self + 2) = 0;
  *(u16 *)((int)self + 10) = 0xffff;
  *(u16 *)(self + 3) = 0;
  *(u16 *)((int)self + 0xe) = 0xa0;
  self[4] = param_5;
  return self;
}

/* 0x08075DEC (20B) | code_0803EE94_7B68_Ctor_5DEC (orig: func_08075DEC) | origin: pure | domain: code_0803EE94_7B68 | HIGH / vtable_algebra */
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
void code_0803EE94_7B68_Ctor_5DEC(u32 arg0, u32 arg1, u32 arg2, u32 arg3) {
    register u32 r0 = arg0;
    register u32 r1 = arg1;
    register u32 r2 = arg2;
    register u32 r3 = arg3;
    r2 = 0x080E7B68;
    *(u32 *)(r0 + 8) = r2;
    r0 = hardware_Dtor_98AC(r0, r1, r2, r3);
    return r0;
}

/* 0x08075E00 (36B) | code_0803EE94_7B68_vfunc_08 (orig: func_08075E00) | origin: pure | domain: code_0803EE94_7B68 | HIGH / vtable_algebra */
void hardware_HW_DMA3SAD(u32, u32, u32); int code_0803EE94_7B68_vfunc_08(u32 *a) { hardware_HW_DMA3SAD(a[3], a[4], a[5]); if (a[7] != 0) hardware_HW_DMA3SAD(a[6], a[7], a[8]); return 0; }

