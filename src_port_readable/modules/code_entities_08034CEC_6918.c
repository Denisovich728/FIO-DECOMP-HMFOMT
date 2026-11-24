/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_entities_08034CEC_6918 (7 functions) */
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

/* 0x08035AE0 (28B) | code_entities_08034CEC_6918_Sub_08035AE0 (orig: func_08035AE0) | origin: pure | domain: code_entities_08034CEC_6918 | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
u32 code_entities_08034CEC_6918_Sub_08035AE0(int arg0) {
  u32 val;
  val = 0;
  if ((*(u16 *)(arg0 + 4) == 0x1d) && (*(short *)(arg0 + 0xe) < 0x38)) {
    val = 1;
  }
  return val;
}

/* 0x08036E2C (68B) | code_entities_08034CEC_6918_Ctor (orig: func_08036E2C) | origin: wip | domain: code_entities_08034CEC_6918 | HIGH / vtable_algebra */
u32 code_entities_08034CEC_6918_Ctor(int self) {
  func_08034CEC(self);
  *(u32 *)(self + 0x14) = 0x080E6918;
  *(u16 *)(self + 0x48) = 0;
  return self;
}

/* 0x08036E70 (128B) | code_entities_08034CEC_6918_Sub_08036E70 (orig: func_08036E70) | origin: wip | domain: code_entities_08034CEC_6918 | MEDIUM / graph_algebra */
void code_entities_08034CEC_6918_Sub_08036E70(u32 param_1, u32 param_2, u32 param_3, u32 param_4) {
    u32 r2;
    u32 r3;
    u32 r0 = param_1;
    register u32 r1 = param_2;
    r2 = param_3;
    r3 = param_4;
    register u32 r4, r5, r6, r7;
    r4 = r0 + 0;
    r0 = *(u32 *)(r4 + 0x34);
    r1 = 0x00001CD4;
    r0 = r0 + r1;
    r0 = code_809E804_Sub_080A0384(r0, r1, r2, r3);
    r6 = r0 + 0;
    if (r0 == 0) goto loc_08036EE0;
    r5 = (s8)0x00000267;
    r7 = (u8)0x0000026F;
    r0 = code_809E804_Sub_0809EAD8(r0, r1, r2, r3);
    if (r0 > 0x3b) goto loc_08036EAC;
    r0 = r4 + 0;
    r0 = code_entities_08034CEC_6918_Sub_08035AE0(r0, r1, r2, r3);
    r5 = 0xc;
    if (r0 == 0) goto loc_08036ED0;
    r0 = r0 << 0x18;
    goto loc_08036ED0;
    r4 = r2 + 3;
    r0 = r0;
    r7 = r4 << 9;
    r0 = r0;
    r7 = r5 << 9;
    r0 = r0;
loc_08036EAC:
    r0 = r4 + 0;
    r0 = r0 << 0x18;
    r0 = code_entities_08034CEC_6918_Sub_08035AE0(r0, r1, r2, r3);
    if (r0 == 0) goto loc_08036EC0;
    r5 = 0x00000277;
    goto loc_08036ED0;
    r7 = r6 << 9;
    r0 = r0;
loc_08036EC0:
    r0 = r6 + 0;
    r0 = code_809E804_Sub_0809EAE0(r0, r1, r2, r3);
    r5 = 0x0000026B;
    if (r0 != 0) goto loc_08036ED0;
    r0 = r0 << 0x18;
    r7 = 0x00000273;
loc_08036ED0:
    r0 = r4 + 0;
    r1 = r5 + 0;
    r0 = AActorEntity_Sub_08035908(r0, r1, r2, r3);
    r0 = r4 + 0;
    r1 = r7 + 0;
    r0 = AActorEntity_Sub_08035940(r0, r1, r2, r3);
loc_08036EE0:
    return r0;
}

/* 0x08036EF0 (28B) | code_entities_08034CEC_6918_vfunc_3C (orig: func_08036EF0) | origin: pure | domain: code_entities_08034CEC_6918 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 npc_entity_vfunc_3C();
extern u32 code_entities_08034CEC_6918_Sub_08036E70();
void code_entities_08034CEC_6918_vfunc_3C(u32 arg0,int arg1) {
  npc_entity_vfunc_3C();
  if (1 < arg1) {
    code_entities_08034CEC_6918_Sub_08036E70(arg0);
  }
}

/* 0x08036F0C (92B) | code_entities_08034CEC_6918_vfunc_30 (orig: func_08036F0C) | origin: pure | domain: code_entities_08034CEC_6918 | HIGH / vtable_algebra */
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
extern u32 code_entities_08034CEC_6918_Sub_08036E70();
extern u32 code_809E804_Sub_0809EAE0();
extern u32 code_809E804_Sub_080A0384();
struct __attribute__((packed)) _s1 { u8 a; };
u32 code_entities_080320DC_68B4_Ctor(u32, u32, u32, u32, u32, u32, u32, struct _s1);
u32 code_entities_08034CEC_6918_vfunc_30(int arg0) {
  u8 val;
  int val2;
  u32 val3;
  val2 = code_809E804_Sub_080A0384(*(int *)(arg0 + 0x34) + 0x1CD4);
  if (val2 != 0) {
    code_entities_08034CEC_6918_Sub_08036E70(arg0);
    val = code_809E804_Sub_0809EAE0(val2);
    val3 = 1;
    if (val != 0) {
      val3 = 4;
    }
    return code_entities_080320DC_68B4_Ctor(CppRuntime_builtin_new(0x8c), arg0, 4, 0x1b, 0, val3, 0, (struct _s1){0});
  }
  return 0;
}

/* 0x08036F68 (156B) | code_entities_08034CEC_6918_vfunc_18 (orig: func_08036F68) | origin: wip | domain: code_entities_08034CEC_6918 | HIGH / vtable_algebra */
void code_entities_08034CEC_6918_vfunc_18(int self,u32 param_2) {
  char cVar1;
  short sVar2;
  int iVar3;
  u32 uVar4;
  u32 uVar5;
  u8 *pbVar6;
  u32 uVar7;

  u32 uStack_24;
  u32 uStack_20;
  u32 uStack_1c;
  u32 uStack_18;
  
  pbVar6 = (u8 *)&uStack_24;
  if ((((*(int *)(self + 0x10) != 0) &&
       (iVar3 = code_809E804_Sub_080A0384(*(int *)(self + 0x34) + 0x1CD4), iVar3 != 0)) &&
      (uVar4 = code_809E804_Sub_0809EAD8(), uVar4 < 0x3c)) && (cVar1 = code_entities_08034CEC_6918_Sub_08035AE0(self), cVar1 != '\0')) {
    sVar2 = *(short *)(self + 0x48);
    if (sVar2 == 0) {
      uStack_24 = *((const u32 *)0x080F1514);
      uStack_20 = ((const u32 *)0x080F1514)[1];
      uStack_1c = ((const u32 *)0x080F1514)[2];
      uStack_18 = ((const u32 *)0x080F1514)[3];
      uVar5 = LibC_rand();
      uVar4 = func_080D0ED0(uVar5,100);
      for (uVar7 = 0; uVar7 < 4; uVar7 = uVar7 + 1) {
        if (uVar4 < *pbVar6) {
          AActorEntity_Sub_08035908(self,*(u16 *)(pbVar6 + 2));
          break;
        }
        uVar4 = uVar4 - *pbVar6;
        pbVar6 = pbVar6 + 4;
      }
      uVar5 = LibC_rand();
      sVar2 = func_080D0ED0(uVar5,0x78);
      sVar2 = sVar2 + 0x78;
    }
    else {
      sVar2 = sVar2 + -1;
    }
    *(short *)(self + 0x48) = sVar2;
  }
  npc_entity_vfunc_18(self,param_2);
  return 0;
}

/* 0x080DC9A8 (12B) | code_entities_08034CEC_6918_vfunc_08 (orig: func_080DC9A8) | origin: pure | domain: code_entities_08034CEC_6918 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 ANpcEntity_Dtor();
void code_entities_08034CEC_6918_vfunc_08(void) {
  ANpcEntity_Dtor();
}

