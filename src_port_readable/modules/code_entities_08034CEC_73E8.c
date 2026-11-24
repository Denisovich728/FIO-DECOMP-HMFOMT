/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_entities_08034CEC_73E8 (4 functions) */
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

/* 0x0803836C (8B) | code_entities_08034CEC_73E8_Sub_0803836C (orig: func_0803836C) | origin: pure | domain: code_entities_08034CEC_73E8 | MEDIUM / graph_algebra */
s16 code_entities_08034CEC_73E8_Sub_0803836C(u8 *arg0) {
    return *(s16 *)(arg0 + 30);
}

/* 0x0803853C (68B) | code_entities_08034CEC_73E8_Ctor (orig: func_0803853C) | origin: wip | domain: code_entities_08034CEC_73E8 | HIGH / vtable_algebra */
u32 code_entities_08034CEC_73E8_Ctor(u32 *self, u8 *param_2) {
  u32 uVar1;
  s16 tmp_a3;
  *self = param_2;
  self[1] = 0x080E73E8;
  tmp_a3 = *param_2;
  uVar1 = func_080D3910((int *)*param_2,*(u32 *)(*(int *)*param_2 + 100));
  code_entities_681C_Ctor_4A00(self + 2, uVar1, *(u16 *)(param_2 + 10), tmp_a3, 2, 7, 0);
  return self;
}

/* 0x08038580 (48B) | code_entities_08034CEC_73E8_vfunc_0C (orig: func_08038580) | origin: pure | domain: code_entities_08034CEC_73E8 | HIGH / vtable_algebra */
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
void code_entities_08034CEC_73E8_vfunc_0C(u32 arg0, u32 arg1, u32 arg2, u32 arg3)
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
    if (r0 != 0) goto loc_080385A4;
    r0 = r4 + 0;
    r0 += 0x30;
    r0 = code_0803EE94_Sub_0805E8F0(r0, r1, r2, r3);
    r0 = r0 << 0x1e;
    if ((int)r0 >= 0) goto loc_080385A8;
    r1 = r4 + 0;
    r1 += 0x44;
    r0 = 1;
    goto loc_080385A6;
loc_080385A4:
    r0 = 0;
loc_080385A6:
    *(u8 *)(r1) = r0;
loc_080385A8:
    return r0;
}

/* 0x080385B0 (400B) | code_entities_08034CEC_73E8_vfunc_10 (orig: func_080385B0) | origin: wip | domain: code_entities_08034CEC_73E8 | HIGH / vtable_algebra */
void code_entities_08034CEC_73E8_vfunc_10(int *self,u32 *param_2) {
  short sVar1;
  u32 *puVar2;
  int iVar3;
  int iVar4;
  u32 uVar5;
  int iVar6;
  int *piVar7;
  u32 uVar8;
  u8 auStack_5c [8];
  u8 auStack_54 [8];
  u8 auStack_4c [16];
  u32 uStack_3c;
  u32 uStack_38;
  int iStack_34;
  int iStack_30;
  u32 uStack_2c;
  int iStack_28;
  u32 *puStack_24;
  puVar2 = (u32 *)*self;
  sVar1 = *(short *)((int)puVar2 + 10);
  iStack_34 = (int)sVar1 - (int)*(short *)(param_2 + 3);
  iVar6 = (int)*(short *)((int)puVar2 + 0xe);
  iStack_30 = iVar6 - *(short *)((int)param_2 + 0xe);
  uStack_2c = (u32)*(u8 *)((int)puVar2 + 0x26);
  iVar3 = -iVar6 + 0x8000;
  if (uStack_2c != 0) {
    iVar3 = -iVar6 + 0x7fff;
  }
  uStack_3c = *param_2;
  uStack_38 = param_2[2];
  uVar8 = 2;
  iStack_28 = iStack_30;
  if (uStack_2c == 0) {
    iVar4 = code_entities_08034CEC_73E8_Sub_0803836C(puVar2);
    iStack_28 = iStack_30 - iVar4;
    if ((0xf < iVar4) &&
       ((8 < *(u16 *)(puVar2 + 1) ||
        ((((*(u16 *)(puVar2 + 1) == 2 && ((u32)(sVar1 + 0xFFFFFEF0) <= 0x000002AF)) &&
          (0xaf < iVar6)) && (iVar6 <= (int)(0x000002AF - 0x60))))))) {
      uVar8 = 1;
    }
  }
  piVar7 = self + 2;
  puStack_24 = &uStack_3c;
  func_080D3918(auStack_5c,(int *)self[0xc],
                  *(u16 *)(self[0xd] + (u32)*(u16 *)(self + 0xf) * 4),
                  *(u32 *)(*(int *)self[0xc] + 0x10));
  if ((-self[4] | self[4]) < 0) {
    iVar3 = func_080D391C(puStack_24[1],iStack_34,iStack_28,
                            uVar8 << 2 | uVar8 | uVar8 << 4 | uVar8 << 6,iVar3,auStack_5c,self[2]
                            ,(short)self[5],self + 6);
  }
  else {
    iVar3 = 0;
  }
  if ((iVar3 != 0) && ((char)self[0x11] != '\0')) {
    hardware_Sub_080A480C(piVar7,*puStack_24,auStack_54);
    if (*(char *)((int)self + 0x45) == '\0') {
      if (*(char *)((int)self + 0x46) == '\0') {
        code_809E804_Sub_080A4944(piVar7,auStack_4c,1);
        *(char *)((int)self + 0x46) = '\x01';
      }
    }
    else {
      code_809E804_Sub_080A4944(piVar7,auStack_4c,1);
    }
    *(char *)(self + 0x11) = '\0';
  }
  if (uStack_2c == 0) {
    uVar5 = func_080D3910((int *)*puVar2,*(u32 *)(*(int *)*puVar2 + 0x58));
    hardware_Sub_0803AE58(uVar5,param_2[2],iStack_34,iStack_30,uStack_2c);
  }
}

