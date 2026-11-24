/* FIO-DECOMP-HMFOMT :: Port Readable Module: AEntity_6428 (8 functions) */
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

/* 0x0802173C (108B) | AEntity_6428_Dtor (orig: func_0802173C) | origin: pure | domain: AEntity_6428 | HIGH / vtable_algebra */
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
struct C_080E6428 : public C_080E6250 {
    u8 pad2[0x1C];
    void *actor_34;
    s16 sx_38;
    s16 sy_3a;
    u8 pad3;
    u8 flag_3d;
    virtual ~C_080E6428();
};
C_080E6428::~C_080E6428() {
    if (flag_3d) {
        x_q16 = sx_38 << 16;
        y_q16 = sy_3a << 16;
    }
    func_0809B124(actor_34, AActorEntity_GetLocation(this));
}
extern "C" void AEntity_6428_Dtor() __attribute__((alias("_._10C_080E6428")));

/* 0x080217A8 (68B) | AEntity_6428_vfunc_88 (orig: func_080217A8) | origin: pure | domain: AEntity_6428 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_entities_Sub_08022048();
extern u32 code_entities_Sub_080220D4();
extern u32 func_0809BC24();
void AEntity_6428_vfunc_88(int arg0, u16 arg1) {
  u32 val;
  u32 local_buf;
  local_buf = (local_buf & 0xFFFF0000 | arg1 & 0xffff) & 0xFF00FFFF;
  func_0809BC24(*(u32 *)(arg0 + 0x34),&local_buf);
  val = code_entities_Sub_080220D4(arg0);
  code_entities_Sub_08022048(arg0,val,*(u8 *)(arg0 + 0x20));
}

/* 0x08021EA8 (56B) | AEntity_6428_vfunc_2C (orig: func_08021EA8) | origin: pure | domain: AEntity_6428 | HIGH / vtable_algebra */
extern int func_080D3914();
extern u8 func_080D3910();
extern void code_entities_08034CEC_7018_vfunc_2C();
void AEntity_6428_vfunc_2C(int *self, u32 param_2) {
    if (*(u8 *)((int)self + 0x3e) != 0) {
        int v = func_080D3914((int *)*self, 0, *(u32 *)(*(int *)*self + 0x40));
        if (func_080D3910(v, *(u32 *)(*(int *)(v + 0x14) + 0xa0))) {
            return;
        }
    }
    code_entities_08034CEC_7018_vfunc_2C(self, param_2);
}

/* 0x08022100 (84B) | AEntity_6428_vfunc_40 (orig: func_08022100) | origin: pure | domain: AEntity_6428 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_entities_Sub_08022048();
extern u32 code_entities_Sub_080220D4();
extern u32 func_0809BC24();
void AEntity_6428_vfunc_40(int arg0) {
  u32 val;
  u32 local_buf;
  if (*(int *)(*(int *)(arg0 + 0x34) + 0x20) == 2) {
    local_buf = (local_buf & 0xFFFF0000 | 0xb4) & 0xFF00FFFF;
    func_0809BC24(*(int *)(arg0 + 0x34),&local_buf);
    if (*(char *)(arg0 + 0x3d) == '\0') {
      val = code_entities_Sub_080220D4(arg0);
      code_entities_Sub_08022048(arg0,val,*(u8 *)(arg0 + 0x20));
    }
  }
}

/* 0x08022154 (16B) | AEntity_6428_vfunc_50 (orig: func_08022154) | origin: pure | domain: AEntity_6428 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0809B230();
u32 AEntity_6428_vfunc_50(int arg0) {
  u32 val;
  val = func_0809B230(*(u32 *)(arg0 + 0x34));
  return val ^ 1;
}

/* 0x08022164 (56B) | AEntity_6428_vfunc_70 (orig: func_08022164) | origin: pure | domain: AEntity_6428 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_entities_Sub_080200C4();
extern u32 entity_actor_Sub_08032384();
extern u32 func_0809B230();
extern u32 Animal_SetBrushed();
extern u32 Animal_AddAffection();
void AEntity_6428_vfunc_70(int arg0) {
  char val;
  val = func_0809B230(*(u32 *)(arg0 + 0x34));
  if (val == '\0') {
    Animal_AddAffection(*(u32 *)(arg0 + 0x34),1);
    Animal_SetBrushed(*(u32 *)(arg0 + 0x34));
  }
  entity_actor_Sub_08032384(arg0,1,0);
  code_entities_Sub_080200C4(arg0,0xa7);
}

/* 0x0802219C (84B) | AEntity_6428_vfunc_84 (orig: func_0802219C) | origin: pure | domain: AEntity_6428 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_entities_Sub_08022048();
extern u32 code_entities_Sub_080220D4();
extern u32 AActorEntity_SetAnimFacing();
extern u32 func_0809BC40();
void AEntity_6428_vfunc_84(int arg0,u32 arg1,u32 arg2) {
  u32 val;
  u32 local_buf;
  if (0x3b < arg2) {
    if (*(u8 *)(arg0 + 0x20) != arg1) {
      AActorEntity_SetAnimFacing(arg0);
    }
    local_buf = local_buf & 0xFFFF0000 | 0x3c;
    func_0809BC40(*(u32 *)(arg0 + 0x34),&local_buf);
    if (*(char *)(arg0 + 0x3d) == '\0') {
      val = code_entities_Sub_080220D4(arg0);
      code_entities_Sub_08022048(arg0,val,*(u8 *)(arg0 + 0x20));
    }
  }
}

/* 0x08022348 (96B) | AEntity_6428_vfunc_30 (orig: func_08022348) | origin: wip | domain: AEntity_6428 | HIGH / vtable_algebra */
u32 AEntity_6428_vfunc_30(s16 self) {
  u32 val;
  register s8 reg_callee_save;
  val = reg_callee_save = 0x8c;
  CppRuntime_builtin_new(reg_callee_save);
  (void)reg_callee_save;
  val = (u8)Horse_GetGrowthStage(*(s8 *)(self + 0x34));
  val = code_entities_Ctor_22A8(val, self, val);
  return *(u8 *)((self + 0x3c));
}

