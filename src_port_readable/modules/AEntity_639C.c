/* FIO-DECOMP-HMFOMT :: Port Readable Module: AEntity_639C (11 functions) */
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

/* 0x080223F0 (84B) | AEntity_639C_Dtor (orig: func_080223F0) | origin: pure | domain: AEntity_639C | HIGH / vtable_algebra */
struct Loc { u32 a, b; };
extern "C" Loc AActorEntity_GetLocation(void const *);
extern "C" void func_0809B124(void *, Loc const &);
struct V4 { u32 f0; virtual ~V4(); };
struct C_080E6250 {
    u8 pad[0x10];
    V4 *unk_10;
    virtual ~C_080E6250() { delete unk_10; }
};
struct C_080E639C : public C_080E6250 {
    u8 pad2[0x1C];
    void *actor_34;
    virtual ~C_080E639C();
};
C_080E639C::~C_080E639C() {
    func_0809B124(actor_34, AActorEntity_GetLocation(this));
}
extern "C" void AEntity_639C_Dtor() __attribute__((alias("_._10C_080E639C")));

/* 0x08022444 (68B) | AEntity_639C_vfunc_88 (orig: func_08022444) | origin: pure | domain: AEntity_639C | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_entities_Sub_080228B4();
extern u32 code_entities_Sub_08022950();
extern u32 func_0809BD20();
void AEntity_639C_vfunc_88(int arg0, u16 arg1) {
  u32 val;
  u32 local_buf;
  local_buf = (local_buf & 0xFFFF0000 | arg1 & 0xffff) & 0xFF00FFFF;
  func_0809BD20(*(u32 *)(arg0 + 0x34),&local_buf);
  val = code_entities_Sub_08022950(arg0);
  code_entities_Sub_080228B4(arg0,val,*(u8 *)(arg0 + 0x20));
}

/* 0x08022488 (52B) | AEntity_639C_vfunc_18 (orig: func_08022488) | origin: pure | domain: AEntity_639C | HIGH / vtable_algebra */
extern void code_entities_Sub_080224E4();
extern void func_080D3910();
void AEntity_639C_vfunc_18(int self) {
    int p;
    code_entities_Sub_080224E4(self);
    *(u8 *)(self + 0x30) = 0;
    if (*(u16 *)(self + 0x24) != 0) {
        *(u16 *)(self + 0x24) -= 1;
    } else {
        *(u16 *)(self + 0x24) = *(u16 *)(self + 0x26);
    }
    p = *(int *)(self + 0x10);
    if (p != 0) {
        func_080D3910(p, *(u32 *)(*(int *)(p + 4) + 0xc));
    }
}

/* 0x080224BC (40B) | AEntity_639C_vfunc_2C (orig: func_080224BC) | origin: pure | domain: AEntity_639C | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_entities_Sub_080224E4();
extern u32 entity_actor_Sub_08032370();
extern u32 code_entities_08034CEC_7018_vfunc_2C();
void AEntity_639C_vfunc_2C(u32 arg0,u32 arg1) {
  char val;
  val = entity_actor_Sub_08032370();
  if (val != '\0') {
    code_entities_Sub_080224E4(arg0,arg1);
  }
  code_entities_08034CEC_7018_vfunc_2C(arg0,arg1);
}

/* 0x080229BC (12B) | AEntity_639C_vfunc_5C (orig: func_080229BC) | origin: pure | domain: AEntity_639C | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0809B50C();
u32 AEntity_639C_vfunc_5C(int arg0) {
  return func_0809B50C(*(u32 *)(arg0 + 0x34));
}

/* 0x080229C8 (48B) | AEntity_639C_vfunc_60 (orig: func_080229C8) | origin: pure | domain: AEntity_639C | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0809B504();
extern u32 func_0809B50C();
u32 AEntity_639C_vfunc_60(int arg0) {
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

/* 0x080229F8 (144B) | AEntity_639C_vfunc_64 (orig: func_080229F8) | origin: wip | domain: AEntity_639C | HIGH / vtable_algebra */
void AEntity_639C_vfunc_64(s16 self) {
  u32 tmp_a2;
  code_809E804_Sub_080AB788(0x78);
  func_0809BD2C(*(s8 *)(self + 0x34));
  code_entities_Sub_08022950();
  code_entities_Sub_080228B4();
  tmp_a2 = *(u8 *)((self + 0x20));
  Animal_SubtractAffection(*(u32 *)(self + 0x34), 0xa, tmp_a2);
  func_0809B638(*(u32 *)(self + 0x34), 0xa, *(short *)((self + 0x20)));
  entity_actor_Sub_08032384();
  Chicken_GetGrowthStage(*(u32 *)(self + 0x34), 2, 0);
}

/* 0x08022A88 (36B) | AEntity_639C_vfunc_7C (orig: func_08022A88) | origin: pure | domain: AEntity_639C | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0809B504();
extern u32 func_0809B624();
extern u32 func_0809B644();
void AEntity_639C_vfunc_7C(int arg0) {
  char val;
  func_0809B624(*(u32 *)(arg0 + 0x34));
  val = func_0809B504(*(u32 *)(arg0 + 0x34));
  if (val != '\0') {
    func_0809B644(*(u32 *)(arg0 + 0x34));
  }
}

/* 0x08022AAC (140B) | AEntity_639C_vfunc_80 (orig: func_08022AAC) | origin: wip | domain: AEntity_639C | HIGH / vtable_algebra */
void AEntity_639C_vfunc_80(s16 self) {
  code_809E804_Sub_080AB788(0x78);
  func_0809BD2C(*(u32 *)(0x34 + self));
  entity_actor_Sub_08032384();
  func_0809B638(*(s8 *)(self + 0x34), 0xa, *(u8 *)((self + 0x20)));
  code_entities_Sub_08022950();
  code_entities_Sub_080228B4();
  Animal_SubtractAffection(*(u32 *)(self + 0x34), 0xa, *(s16 *)((self + 0x20)));
  Chicken_GetGrowthStage(*(u32 *)(self + 0x34), 2, 0);
}

/* 0x08022B38 (32B) | AEntity_639C_vfunc_0C (orig: func_08022B38) | origin: pure | domain: AEntity_639C | HIGH / vtable_algebra */
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
unsigned long long AEntity_639C_vfunc_0C(short *arg0, int arg1) {
  int val;
  int val2;
  val = *(short *)(arg1 + 10);
  val2 = *(short *)(arg1 + 0xe);
  *arg0 = val + -7;
  arg0[1] = val2 + -4;
  arg0[2] = val + 7;
  arg0[3] = val2 + 5;
}

/* 0x08022B70 (168B) | AEntity_639C_vfunc_30 (orig: func_08022B70) | origin: wip | domain: AEntity_639C | HIGH / vtable_algebra */
struct __attribute__((packed)) _s1 { u8 a; };
    u8 uVar1;
    u32 uVar2;
    u8 uVar3;
    int cVar6;
    int iVar5;
    int iVar4;
u32 code_entities_080320DC_68B4_Ctor(u32, u32, u32, u32, u32, u32, u32, struct _s1);
u32 AEntity_639C_vfunc_30(u32 *self) {
  uVar1 = Chicken_GetGrowthStage(self[0xd]);
  uVar2 = CppRuntime_builtin_new(0x8c);
  uVar3 = code_entities_Return_0_2B58(uVar1);
  uVar1 = code_entities_Sub_08022B5C(uVar1);
  iVar4 = code_entities_080320DC_68B4_Ctor(uVar2, self, 2, 9, uVar3, uVar1, 0, (struct _s1){0});
  iVar5 = Chicken_GetGrowthStage(self[0xd]);
  cVar6 = '\0';
  if (iVar5 != 0) {
    cVar6 = '\x03';
  }
  if ((*(char *)(self + 0xe) == cVar6) &&
     (iVar5 = func_080D3910((int *)*self,*(u32 *)(*(int *)*self + 0x144)),
     0xe < (*(u8 *)(iVar5 + 10) & 0x1f) - 6)) {
    code_0803EE94_Sub_0805E860(iVar4 + 0x70,8);
    *(u8 *)(iVar4 + 0x84) = 1;
    *(u8 *)(0x86 + iVar4) = 0;
    *(u8 *)(iVar4 + 0x87) = 1;
    *(u8 *)(iVar4 + 0x8a) = (s8)*(u8 *)(iVar4 + 0x8a) & 0xfc | 2;
  }
  return iVar4;
}

