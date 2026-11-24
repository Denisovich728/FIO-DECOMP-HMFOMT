/* FIO-DECOMP-HMFOMT :: Port Readable Module: more_items (11 functions) */
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

/* 0x0800FF8C (68B) | more_items_Sub_0800FF8C (orig: func_0800FF8C) | origin: wip | domain: more_items | HIGH / stanhash_map_tu */
u32 more_items_Sub_0800FF8C(u32 *param_1) {
  u16 uVar1;
  *param_1 = 0;
  uVar1 = (u16)0xFFFFFC00;
  *(u16 *)(param_1 + 9) = uVar1 & *(u16 *)(param_1 + 9) | 0x234;
  *(u8 *)((int)param_1 + 0x25) = *(u8 *)((int)param_1 + 0x25) & 3;
  *(u16 *)((int)param_1 + 0x26) = uVar1 & *(u16 *)((int)param_1 + 0x26);
  *(u8 *)((int)param_1 + 0x27) = *(u8 *)((int)param_1 + 0x27) & 3;
  *(u16 *)(param_1 + 10) = uVar1 & *(u16 *)(param_1 + 10);
  return;
}

/* 0x0800FFD0 (4B) | more_items_GetField_0x00 (orig: func_0800FFD0) | origin: pure | domain: more_items | HIGH / stanhash_map_tu */
u32 more_items_GetField_0x00(u32 *arg0) {
    return *arg0;
}

/* 0x0800FFD4 (4B) | more_items_Sub_0800FFD4 (orig: func_0800FFD4) | origin: pure | domain: more_items | HIGH / stanhash_map_tu */
u8 *more_items_Sub_0800FFD4(u8 *arg0) {
    return arg0 + 4;
}

/* 0x0800FFD8 (8B) | more_items_GetField_0x00_FFD8 (orig: func_0800FFD8) | origin: pure | domain: more_items | HIGH / stanhash_map_tu */
u8 *more_items_GetField_0x00_FFD8(u32 *arg0) {
    return (u8 *)arg0 + (*arg0 + 4);
}

/* 0x0800FFE0 (20B) | more_items_Sub_0800FFE0 (orig: func_0800FFE0) | origin: pure | domain: more_items | HIGH / stanhash_map_tu */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 LibC_memcpy();
u32 more_items_Sub_0800FFE0(u32 arg0,int arg1) {
  LibC_memcpy(arg0,arg1 + 0x24,6);
  return arg0;
}

/* 0x0800FFF4 (32B) | more_items_Sub_0800FFF4 (orig: func_0800FFF4) | origin: pure | domain: more_items | HIGH / stanhash_map_tu */
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
void more_items_Sub_0800FFF4(u32 *arg0, s32 arg1) {
  u8 *mem_ptr;
  if (*arg0 < 0x1e) {
    mem_ptr = ((u8 *)arg0) + (*arg0 + 4);
    if (mem_ptr != (u8 *)0x0) {
      *mem_ptr = arg1;
    }
    *arg0 = *arg0 + 1;
  }
}

/* 0x08010014 (16B) | more_items_Sub_08010014 (orig: func_08010014) | origin: pure | domain: more_items | HIGH / stanhash_map_tu */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 LibC_memcpy();
void more_items_Sub_08010014(int arg0,u32 arg1) {
  LibC_memcpy(arg0 + 0x24,arg1,6);
}

/* 0x08010024 (40B) | more_items_Sub_08010024 (orig: func_08010024) | origin: wip | domain: more_items | HIGH / stanhash_map_tu */
void more_items_Sub_08010024(int *param_1) {
  int *piVar1;
  int *piVar2;
  piVar1 = (int *)((int)param_1 + *param_1 + 4);
  for (piVar2 = param_1 + 1; piVar2 != piVar1; piVar2 = (int *)((int)piVar2 + 1)) {
  }
  *param_1 = *param_1 - ((int)piVar1 - (int)(param_1 + 1));
}

/* 0x08037EB4 (28B) | more_items_Sub_08037EB4 (orig: func_08037EB4) | origin: pure | domain: more_items | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 more_items_Sub_0800FFF4();
extern u32 more_items_SetField_0x00();
void more_items_Sub_08037EB4(int arg0,u8 *arg1) {
  more_items_Sub_0800FFF4(*(u32 *)(arg0 + 0x18),*arg1);
  if (*(int *)(arg0 + 0x10) != 0) {
    more_items_SetField_0x00();
  }
}

/* 0x08037F74 (8B) | more_items_SetField_0x00 (orig: func_08037F74) | origin: pure | domain: more_items | MEDIUM / graph_algebra */
void more_items_SetField_0x00(u8 *arg0) {
    *(u8 *)(arg0 + 84) = 10;
}

/* 0x0803911C (24B) | more_items_Sub_0803911C (orig: func_0803911C) | origin: pure | domain: more_items | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 more_items_GetField_0x00();
u32 more_items_Sub_0803911C(int arg0) {
  int val;
  val = more_items_GetField_0x00(*(u32 *)(arg0 + 0x18));
  return ((u32)(val == 0x1e));
}

