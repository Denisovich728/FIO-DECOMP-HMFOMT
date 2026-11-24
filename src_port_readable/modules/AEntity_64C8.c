/* FIO-DECOMP-HMFOMT :: Port Readable Module: AEntity_64C8 (6 functions) */
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

/* 0x080203A4 (108B) | AEntity_64C8_Dtor (orig: func_080203A4) | origin: pure | domain: AEntity_64C8 | HIGH / vtable_algebra */
struct Loc { u32 a, b; };
extern "C" Loc AActorEntity_GetLocation(void const *);
extern "C" void func_0809B124(void *, Loc const &);
struct V4 { u32 f0; virtual ~V4(); };
struct C_080E6250 {
    u8 pad[0x8];
    int x_q16;
    int y_q16;
    V4 *unk_10;
    virtual ~C_080E6250() { delete unk_10; }
};
struct C_080E64C8 : public C_080E6250 {
    u8 pad2[0x1C];
    void *actor_34;
    u8 pad3[0x4];
    s16 sx_3c;
    s16 sy_3e;
    u8 flag_40;
    virtual ~C_080E64C8();
};
C_080E64C8::~C_080E64C8() {
    if (flag_40) {
        x_q16 = sx_3c << 16;
        y_q16 = sy_3e << 16;
    }
    func_0809B124(actor_34, AActorEntity_GetLocation(this));
}
extern "C" void AEntity_64C8_Dtor() __attribute__((alias("_._10C_080E64C8")));

/* 0x08020474 (52B) | AEntity_64C8_vfunc_18 (orig: func_08020474) | origin: pure | domain: AEntity_64C8 | HIGH / vtable_algebra */
extern void code_entities_Sub_080204CC();
extern void func_080D3910();
void AEntity_64C8_vfunc_18(int self) {
    int p;
    code_entities_Sub_080204CC(self);
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

/* 0x080204A8 (36B) | AEntity_64C8_vfunc_2C (orig: func_080204A8) | origin: pure | domain: AEntity_64C8 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_entities_Sub_080204CC();
extern u32 entity_actor_Sub_08032370();
extern u32 code_entities_08034CEC_7018_vfunc_2C();
void AEntity_64C8_vfunc_2C(u32 arg0,u32 arg1) {
  char val;
  val = entity_actor_Sub_08032370();
  if (val != '\0') {
    code_entities_Sub_080204CC(arg0);
  }
  code_entities_08034CEC_7018_vfunc_2C(arg0,arg1);
}

/* 0x080213B0 (148B) | AEntity_64C8_vfunc_64 (orig: func_080213B0) | origin: pure | domain: AEntity_64C8 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_entities_Sub_080200C4();
extern u32 code_entities_Sub_080211E4();
extern u32 code_entities_Sub_08021264();
extern u32 code_entities_Sub_080212C0();
extern u32 entity_actor_Sub_08032384();
extern u32 Animal_SubtractAffection();
extern u32 func_0809BB64();
extern u32 code_809E804_Sub_080AB788();
struct bf_func_080213B0 {
  u32 f0 : 16;
  u32 f1 : 7;
  u32 f2 : 1;
  u32 f3 : 8;
};
void AEntity_64C8_vfunc_64(int arg0) {
  struct bf_func_080213B0 local_buf;
  if (*(char *)(arg0 + 0x40) == '\0') {
    if (*(int *)(*(int *)(arg0 + 0x34) + 0x20) == 5) {
      code_entities_Sub_080212C0(arg0);
    }
    local_buf.f0 = code_809E804_Sub_080AB788(0x78) + 0xf0;
    local_buf.f1 = 0x3c;
    local_buf.f2 = 0;
    local_buf.f3 = 0;
    func_0809BB64(*(u32 *)(arg0 + 0x34),&local_buf);
    code_entities_Sub_080211E4(arg0, code_entities_Sub_08021264(arg0),*(u8 *)(0x20 + arg0));
    Animal_SubtractAffection(*(u32 *)(arg0 + 0x34),10);
    entity_actor_Sub_08032384(arg0,2,0);
    code_entities_Sub_080200C4(arg0,0xaa);
  }
}

/* 0x080215FC (32B) | AEntity_64C8_vfunc_0C (orig: func_080215FC) | origin: pure | domain: AEntity_64C8 | HIGH / vtable_algebra */
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
unsigned long long AEntity_64C8_vfunc_0C(short *arg0, int arg1) {
  int val;
  int val2;
  val = *(short *)(arg1 + 10);
  val2 = *(short *)(arg1 + 0xe);
  *arg0 = val + -7;
  arg0[1] = val2 + -4;
  arg0[2] = val + 7;
  arg0[3] = val2 + 5;
}

/* 0x08021634 (136B) | AEntity_64C8_vfunc_30 (orig: func_08021634) | origin: wip | domain: AEntity_64C8 | HIGH / vtable_algebra */
u32 AEntity_64C8_vfunc_30(int self) {
  u16 uVar1;
  u32 uVar2;
  u32 uVar3;
  int iVar4;
  uVar1 = Dog_GetGrowthStage(*(u32 *)(self + 0x34));
  uVar2 = CppRuntime_builtin_new(0x8c);
  uVar3 = code_entities_Return_0(uVar1);
  uVar1 = code_entities_Sub_08021620(uVar1);
  iVar4 = code_entities_080320DC_68B4_Ctor(uVar2,self,2,6,uVar3,uVar1,0,0);
  if (*(char *)(self + 0x41) == '\b') {
    code_0803EE94_Sub_0805E860(iVar4 + 0x70,8);
    *(u8 *)(iVar4 + 0x84) = 1;
    *(u8 *)(iVar4 + 0x86) = 0;
    *(u32 *)(iVar4 + 0x87) = 1;
    *(u8 *)(iVar4 + 0x8a) = *(u8 *)(iVar4 + 0x8a) && 0xfc | 2;
  }
  return (iVar4);
}

