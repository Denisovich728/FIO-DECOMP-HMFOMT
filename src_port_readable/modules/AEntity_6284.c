/* FIO-DECOMP-HMFOMT :: Port Readable Module: AEntity_6284 (17 functions) */
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

/* 0x080238F4 (84B) | AEntity_6284_Dtor (orig: func_080238F4) | origin: pure | domain: AEntity_6284 | HIGH / vtable_algebra */
struct Loc { u32 a, b; };
extern "C" Loc AActorEntity_GetLocation(void const *);
extern "C" void func_0809B124(void *, Loc const &);
struct V4 { u32 f0; virtual ~V4(); };
struct C_080E6250 {
    u8 pad[0x10];
    V4 *unk_10;
    virtual ~C_080E6250() { delete unk_10; }
};
struct C_080E6284 : public C_080E6250 {
    u8 pad2[0x1C];
    void *actor_34;
    virtual ~C_080E6284();
};
C_080E6284::~C_080E6284() {
    func_0809B124(actor_34, AActorEntity_GetLocation(this));
}
extern "C" void AEntity_6284_Dtor() __attribute__((alias("_._10C_080E6284")));

/* 0x08023948 (68B) | AEntity_6284_vfunc_88 (orig: func_08023948) | origin: pure | domain: AEntity_6284 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_entities_Sub_08023FB0();
extern u32 code_entities_Sub_08024020();
extern u32 func_0809B940();
void AEntity_6284_vfunc_88(int arg0, u16 arg1) {
  u32 val;
  u32 local_buf;
  local_buf = (local_buf & 0xFFFF0000 | arg1 & 0xffff) & 0xFF00FFFF;
  func_0809B940(*(u32 *)(arg0 + 0x34),&local_buf);
  val = code_entities_Sub_08024020(arg0);
  code_entities_Sub_08023FB0(arg0,val,*(u8 *)(arg0 + 0x20));
}

/* 0x080240D0 (220B) | AEntity_6284_vfunc_3C (orig: func_080240D0) | origin: wip | domain: AEntity_6284 | HIGH / vtable_algebra */
void AEntity_6284_vfunc_3C(int self,u16 *param_2) {
  char cVar1;
  int iVar2;
  u32 uVar3;
  u32 uVar4;
  int iVar5;
  int iVar6;
  u32 uVar7;
  u32 auStack_1c [2];
  if (((*param_2 & 0x3ff) == *(u16 *)(self + 4)) &&
     (cVar1 = func_0809B8B0(*(u32 *)(self + 0x34)), cVar1 == '\0')) {
    func_0809B228(*(u32 *)(self + 0x34));
    iVar2 = code_entity_08020018_Sub_08020018();
    iVar6 = (int)(short)((u16)((param_2[1] & 0x000003FF) << 6) |
                        (u16)(*(u8 *)((int)param_2 + 1) >> 2)) - (int)*(short *)(self + 10);
    iVar5 = (int)(short)((u16)((param_2[2] & 0x000003FF) << 6) |
                        (u16)(*(u8 *)((int)param_2 + 3) >> 2)) - (int)*(short *)(self + 0xe)
    ;
    if (iVar6 * iVar6 + iVar5 * iVar5 <= iVar2 * iVar2) {
      cVar1 = func_0809B50C(*(u32 *)(self + 0x34));
      if (cVar1 == '\0') {
        cVar1 = func_0809B504(*(u32 *)(self + 0x34));
        uVar7 = 100;
        if (cVar1 != '\0') {
          uVar7 = 0x46;
        }
      }
      else {
        uVar7 = 0x1e;
      }
      uVar3 = code_809E804_Sub_080AB788(100);
      if (uVar3 < uVar7) {
        iVar2 = func_0809B228(*(u32 *)(self + 0x34));
        auStack_1c[0] = ((u32)(iVar2 * 0x3c0) >> 8) + 0x1e0 & 0xffff;
        func_0809B958(*(u32 *)(self + 0x34),auStack_1c);
        uVar4 = code_entities_Sub_08024020(self);
        code_entities_Sub_08023FB0(self,uVar4,*(u8 *)(self + 0x20));
      }
    }
  }
}

/* 0x080241AC (76B) | AEntity_6284_vfunc_40 (orig: func_080241AC) | origin: pure | domain: AEntity_6284 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_entities_Sub_08023FB0();
extern u32 code_entities_Sub_08024020();
extern u32 func_0809B940();
void AEntity_6284_vfunc_40(int arg0) {
  u32 val;
  u32 local_buf;
  if (*(int *)(*(int *)(arg0 + 0x34) + 0x28) == 3) {
    local_buf = (local_buf & 0xFFFF0000 | 0xb4) & 0xFF00FFFF;
    func_0809B940(*(int *)(arg0 + 0x34),&local_buf);
    val = code_entities_Sub_08024020(arg0);
    code_entities_Sub_08023FB0(arg0,val,*(u8 *)(arg0 + 0x20));
  }
}

/* 0x080241FC (40B) | AEntity_6284_vfunc_4C (orig: func_080241FC) | origin: pure | domain: AEntity_6284 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0809B8B0();
extern u32 Sheep_CanBeMadePregnant();
u32 AEntity_6284_vfunc_4C(int arg0) {
  char val;
  u32 val2;
  val2 = 0;
  val = func_0809B8B0(*(u32 *)(arg0 + 0x34));
  if (val == '\0') {
    val2 = (s8)Sheep_CanBeMadePregnant(*(u32 *)(arg0 + 0x34));
    val2 = -(val2 & 0xff) >> 0x1f;
  }
  return val2;
}

/* 0x08024224 (16B) | AEntity_6284_vfunc_50 (orig: func_08024224) | origin: pure | domain: AEntity_6284 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0809B230();
u32 AEntity_6284_vfunc_50(int arg0) {
  u32 val;
  val = func_0809B230(*(u32 *)(arg0 + 0x34));
  return val ^ 1;
}

/* 0x08024234 (12B) | AEntity_6284_vfunc_58 (orig: func_08024234) | origin: pure | domain: AEntity_6284 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 Sheep_CanBeSheared();
u32 AEntity_6284_vfunc_58(int arg0) {
  return Sheep_CanBeSheared(*(u32 *)(arg0 + 0x34));
}

/* 0x08024240 (12B) | AEntity_6284_vfunc_5C (orig: func_08024240) | origin: pure | domain: AEntity_6284 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0809B50C();
u32 AEntity_6284_vfunc_5C(int arg0) {
  return func_0809B50C(*(u32 *)(arg0 + 0x34));
}

/* 0x0802424C (48B) | AEntity_6284_vfunc_60 (orig: func_0802424C) | origin: pure | domain: AEntity_6284 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0809B504();
extern u32 func_0809B50C();
u32 AEntity_6284_vfunc_60(int arg0) {
  char val;
  u32 val2;
  val2 = 0;
  if (((*(short *)(arg0 + 4) == 2) &&
      (val = func_0809B50C(*(u32 *)(arg0 + 0x34)), val == '\0')) &&
     (val = func_0809B504(*(u32 *)(arg0 + 0x34)), val == '\0')) {
    val2 = 1;
  }
  return val2;
}

/* 0x0802427C (144B) | AEntity_6284_vfunc_64 (orig: func_0802427C) | origin: pure | domain: AEntity_6284 | HIGH / vtable_algebra */
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
extern u32 code_entities_Sub_080200C4();
extern u32 code_entities_Sub_08023FB0();
extern u32 code_entities_Sub_08024020();
extern u32 entity_actor_Sub_08032384();
extern u32 Animal_SubtractAffection();
extern u32 func_0809B638();
extern u32 func_0809B8B0();
extern u32 func_0809B94C();
extern u32 code_809E804_Sub_080AB788();
struct bf_func_0802427C {
  u32 f0 : 16;
  u32 f1 : 7;
  u32 f2 : 1;
  u32 f3 : 8;
};
void AEntity_6284_vfunc_64(int arg0) {
    struct bf_func_0802427C local_buf;
    s8 val;
  val = func_0809B8B0(*(u32 *)(arg0 + 0x34));
  if (val == '\0') {
    local_buf.f0 = code_809E804_Sub_080AB788(0x78) + 0xf0;
    local_buf.f1 = 0x3c;
    local_buf.f2 = 0;
    local_buf.f3 = 0;
    func_0809B94C(*(u32 *)(arg0 + 0x34),&local_buf);
    code_entities_Sub_08023FB0(arg0, code_entities_Sub_08024020(arg0),*(u8 *)(arg0 + 0x20));
  }
  Animal_SubtractAffection(*(u32 *)(arg0 + 0x34),10);
  func_0809B638(*(u32 *)(arg0 + 0x34));
  entity_actor_Sub_08032384(arg0,0,0);
  code_entities_Sub_080200C4(arg0,0xa4);
}

/* 0x0802430C (12B) | AEntity_6284_vfunc_6C (orig: func_0802430C) | origin: pure | domain: AEntity_6284 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0809B8FC();
void AEntity_6284_vfunc_6C(int arg0) {
  func_0809B8FC(*(u32 *)(arg0 + 0x34));
}

/* 0x08024318 (96B) | AEntity_6284_vfunc_70 (orig: func_08024318) | origin: pure | domain: AEntity_6284 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_entities_Sub_080200C4();
extern u32 entity_actor_Sub_08032384();
extern u32 func_0809B230();
extern u32 Animal_SetBrushed();
extern u32 Animal_AddAffection();
extern u32 func_0809B504();
extern u32 func_0809B50C();
extern u32 func_0809B644();
extern u32 code_809E804_Sub_080AB788();
void AEntity_6284_vfunc_70(int arg0) {
  char val;
  u32 val2;
  val = func_0809B230(*(u32 *)(arg0 + 0x34));
  if (val == '\0') {
    Animal_AddAffection(*(u32 *)(arg0 + 0x34),1);
    Animal_SetBrushed(*(u32 *)(arg0 + 0x34));
  }
  val = func_0809B504(*(u32 *)(arg0 + 0x34));
  if ((val != '\0') && (val2 = code_809E804_Sub_080AB788(100), val2 < 0x1e)) {
    func_0809B644(*(u32 *)(arg0 + 0x34));
  }
  val = func_0809B50C(*(u32 *)(arg0 + 0x34));
  if (val == '\0') {
    entity_actor_Sub_08032384(arg0,1,0);
    code_entities_Sub_080200C4(arg0,0xa3);
  }
}

/* 0x08024378 (64B) | AEntity_6284_vfunc_78 (orig: func_08024378) | origin: wip | domain: AEntity_6284 | HIGH / vtable_algebra */
u32 AEntity_6284_vfunc_78(int self) {
  u32 uVar1;
  u32 uVar2;
  entity_actor_Sub_08032384(self,1,0);
  code_entities_Sub_080200C4(self,0xa3);
  uVar1 = Sheep_ConsumeProduct(*(u32 *)(self + 0x34));
  uVar2 = code_entities_Sub_0802405C(self,*(u8 *)(self + 0x38));
  if (*(s16 *)(self + 0x22) != uVar2) {
    AActorEntity_SetAnim(self);
  }
  return uVar1;
}

/* 0x080243B8 (36B) | AEntity_6284_vfunc_7C (orig: func_080243B8) | origin: pure | domain: AEntity_6284 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0809B504();
extern u32 func_0809B624();
extern u32 func_0809B644();
void AEntity_6284_vfunc_7C(int arg0) {
  char val;
  func_0809B624(*(u32 *)(arg0 + 0x34));
  val = func_0809B504(*(u32 *)(arg0 + 0x34));
  if (val != '\0') {
    func_0809B644(*(u32 *)(arg0 + 0x34));
  }
}

/* 0x080243DC (140B) | AEntity_6284_vfunc_80 (orig: func_080243DC) | origin: wip | domain: AEntity_6284 | HIGH / vtable_algebra */
void AEntity_6284_vfunc_80(int self) {
  int iVar2;
  s8 uVar3;
  u32 uStack_c;
  if (func_0809B8B0(*(u32 *)(self + 0x34)) == '\0') {
    iVar2 = code_809E804_Sub_080AB788(0x78);
    uStack_c = ((uStack_c & 0xFFFF0000 | iVar2 + 0xf0U & 0xffff) & 0xbc0000 | 0xFF80FFFF) &
               0x00FFFFFF;
    func_0809B94C(*(u8 *)(self + 0x34),&uStack_c);
    uVar3 = code_entities_Sub_08024020(self);
    code_entities_Sub_08023FB0(self,uVar3,*(u8 *)(self + 0x20));
  }
  Animal_SubtractAffection(*(s8 *)(self + 0x34),10);
  func_0809B638(*(u32 *)(self + 0x34));
  entity_actor_Sub_08032384(self,0,0);
  code_entities_Sub_080200C4(self,0xa4);
}

/* 0x08024468 (92B) | AEntity_6284_vfunc_84 (orig: func_08024468) | origin: pure | domain: AEntity_6284 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_entities_Sub_08023FB0();
extern u32 code_entities_Sub_08024020();
extern u32 AActorEntity_SetAnimFacing();
extern u32 func_0809B8B0();
extern u32 func_0809B968();
void AEntity_6284_vfunc_84(int arg0,u32 arg1,u32 arg2) {
  char val;
  u32 val2;
  u32 local_buf;
  val = func_0809B8B0(*(u32 *)(arg0 + 0x34));
  if ((val == '\0') && (0x3b < arg2)) {
    if (*(u8 *)(arg0 + 0x20) != arg1) {
      AActorEntity_SetAnimFacing(arg0,arg1);
    }
    local_buf = local_buf & 0xFFFF0000 | 0x3c;
    func_0809B968(*(u32 *)(arg0 + 0x34),&local_buf);
    val2 = code_entities_Sub_08024020(arg0);
    code_entities_Sub_08023FB0(arg0,val2,*(u8 *)(arg0 + 0x20));
  }
}

/* 0x080244EC (136B) | AEntity_6284_vfunc_30 (orig: func_080244EC) | origin: wip | domain: AEntity_6284 | HIGH / vtable_algebra */
u32 AEntity_6284_vfunc_30(int self) {
    u32 uVar3;
    int iVar4;
  register u8 uVar1;
  register u32 uVar2;
  uVar1 = Sheep_GetGrowthStage(*(u32 *)(self + 0x34));
  uVar2 = CppRuntime_builtin_new(0x8c);
  uVar3 = code_entities_Sub_080244C4(uVar1);
  uVar1 = code_entities_Sub_080244D8(uVar1);
  iVar4 = code_entities_080320DC_68B4_Ctor(uVar2,self,4,0xb,uVar3,uVar1,0,0);
  if (*(char *)(self + 0x38) == '\x04') {
    code_0803EE94_Sub_0805E860(iVar4 + 0x70,8);
    *(u8 *)(iVar4 + 0x84) = 1;
    *(u8 *)(iVar4 + 0x86) = 0;
    *(u16 *)(iVar4 + 0x87) = 1;
    *(u8 *)(iVar4 + 0x8a) = *(u8 *)(iVar4 + 0x8a) && 0xfc | 2;
  }
  return (iVar4);
}

