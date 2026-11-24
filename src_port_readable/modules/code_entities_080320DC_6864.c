/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_entities_080320DC_6864 (2 functions) */
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

/* 0x0803260C (132B) | code_entities_080320DC_6864_vfunc_0C (orig: func_0803260C) | origin: wip | domain: code_entities_080320DC_6864 | HIGH / vtable_algebra */
void code_entities_080320DC_6864_vfunc_0C(int self) {
  s32 bVar1;
  bool bVar2;
  u8 iVar4;
  char cVar3;
  char *pcVar5;
  register u8 *pbVar6;
  pcVar5 = (char *)(self + 0x47);
  if (*pcVar5 == '\0') {
    iVar4 = code_0803EE94_Sub_0805E8F0(self + 0x30);
    if (-1 < iVar4 * 0x40000000) goto LAB_08032634;
    pcVar5 = (char *)(self + 0x44);
    cVar3 = '\x01';
  }
  else {
    cVar3 = '\0';
  }
  *pcVar5 = cVar3;
LAB_08032634:
  pbVar6 = (u8 *)(self + 0x8a);
  bVar1 = *pbVar6;
  if ((bVar1 & 3) != 0) {
    bVar2 = false;
    if (*(char *)(self + 0x87) == '\0') {
      iVar4 = code_0803EE94_Sub_0805E8F0(self + 0x70);
      if (iVar4 * 0x40000000 < 0) {
        *(u8 *)(self + 0x84) = 1;
      }
    }
    else {
      *(char *)(self + 0x87) = '\0';
      iVar4 = (u32)2;
    }
    if ((iVar4 * 0x20000000 < 0) && ((bVar1 & 3) != 2)) {
      bVar2 = true;
    }
    if (bVar2) {
      *pbVar6 = *pbVar6 & 0xfc;
    }
  }
}

/* 0x08032A00 (48B) | code_entities_080320DC_6864_Ctor (orig: func_08032A00) | origin: pure | domain: code_entities_080320DC_6864 | HIGH / vtable_algebra */
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
struct __attribute__((packed)) _s1 { u8 a; };
u32 code_entities_080320DC_68B4_Ctor(u32, u32, u32, u32, u32, u32, u32, struct _s1);
/* paridad 91.4% preset agbcc_O2 (rosetta-ghidra-reclean) */
u32 code_entities_080320DC_6864_Ctor(int arg0,u32 arg1) {
  code_entities_080320DC_68B4_Ctor(arg0, arg1, 6, 0x20, 1, 0, 0, (struct _s1){0});
  *(u32 *)(arg0 + 4) = 0x080E6864;
  return (arg0);
}

