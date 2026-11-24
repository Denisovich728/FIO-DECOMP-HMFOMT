/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_entities_08034CEC_7018 (4 functions) */
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

/* 0x0803242C (140B) | code_entities_08034CEC_7018_vfunc_2C (orig: func_0803242C) | origin: wip | domain: code_entities_08034CEC_7018 | HIGH / vtable_algebra */
void code_entities_08034CEC_7018_vfunc_2C(int self,u32 param_2) {
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  if (*(short *)(self + 0x24) == 0) {
    sVar1 = *(short *)(self + 0x26);
  }
  else {
    sVar1 = *(short *)(self + 0x24) + -1;
  }
  *(short *)(self + 0x24) = sVar1;
  iVar3 = *(int *)(self + 0x28);
  if (iVar3 == 0) goto LAB_080324a6;
  bVar6 = *(char *)(self + 0x2e) != '\0';
  if (bVar6) {
    iVar2 = *(int *)(self + 0xc);
  }
  else {
    iVar2 = *(int *)(self + 8);
  }
  iVar4 = iVar2 >> 0x10;
  iVar5 = (int)*(short *)(self + 0x2c);
  if (iVar5 == iVar4) {
    *(u32 *)(self + 0x28) = 0;
    goto LAB_080324a6;
  }
  if (iVar5 - iVar4 < 1) {
    iVar3 = -iVar3;
  }
  iVar2 = iVar2 + iVar3;
  if (iVar2 >> 0x10 != iVar4) {
    iVar3 = iVar5 - (iVar2 >> 0x10);
    if (iVar5 - iVar4 < 1) {
      if (-1 < iVar3) goto LAB_08032496;
    }
    else if (iVar3 < 1) {
LAB_08032496:
      *(u32 *)(self + 0x28) = 0;
    }
  }
  if (bVar6) {
    *(int *)(self + 0xc) = iVar2;
  }
  else {
    *(int *)(self + 8) = iVar2;
  }
LAB_080324a6:
  AEntity_vfunc_2C(self,param_2);
}

/* 0x08035E40 (60B) | code_entities_08034CEC_7018_Ctor (orig: func_08035E40) | origin: wip | domain: code_entities_08034CEC_7018 | HIGH / vtable_algebra */
u32 code_entities_08034CEC_7018_Ctor(u32 self, u32 param_2, u16 param_3, u32 param_4) {
    register u32 r0 = self;
    register u32 r1 = param_2;
    register u32 r2 = param_3;
    register s16 r3 = param_4;
    register u32 r4;
    r0 = 0x00000989;
    r0 = 0x080F7294;
    r4 = r0 + 0;
    r0 += 4;
    r0 = func_08034CEC(r0, r1, r2, r3);
    r0 = r4 + 0;
    r0 = 0x00000402;
    r0 = 0x080E7018;
    *(u32 *)(r4 + 0x14) = (s16)r0;
    r0 = r4 + 0;
    return r1;
}

/* 0x08035E7C (48B) | code_entities_08034CEC_7018_vfunc_30 (orig: func_08035E7C) | origin: pure | domain: code_entities_08034CEC_7018 | HIGH / vtable_algebra */
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
struct __attribute__((packed)) _s1 { u8 a; };
u32 code_entities_080320DC_68B4_Ctor(u32, u32, u32, u32, u32, u32, u32, struct _s1);
u32 code_entities_08034CEC_7018_vfunc_30(u32 arg0) {
  u32 val;
  val = CppRuntime_builtin_new(0x8c);
  return code_entities_080320DC_68B4_Ctor(val, arg0, 4, 0x1b, 1, 2, 0, (struct _s1){0});
}

/* 0x080DCAF8 (12B) | code_entities_08034CEC_7018_vfunc_08 (orig: func_080DCAF8) | origin: pure | domain: code_entities_08034CEC_7018 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 ANpcEntity_Dtor();
void code_entities_08034CEC_7018_vfunc_08(void) {
  ANpcEntity_Dtor();
}

