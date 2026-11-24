/* FIO-DECOMP-HMFOMT :: Port Readable Module: AEntity_73FC (4 functions) */
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

/* 0x08037E18 (48B) | AEntity_73FC_Ctor (orig: func_08037E18) | origin: pure | domain: AEntity_73FC | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 more_items_Sub_0800FFE0();
extern u32 AEntity_Ctor();
u32 AEntity_73FC_Ctor(int arg0,u32 arg1,u32 arg2) {
  u8 auStack_18 [8];
  more_items_Sub_0800FFE0(auStack_18,arg2);
  AEntity_Ctor(arg0,arg1,auStack_18);
  *(u32 *)(arg0 + 0x14) = 0x080E73FC;
  *(u32 *)(arg0 + 0x18) = arg2;
  return arg0;
}

/* 0x08037E48 (84B) | AEntity_73FC_Dtor (orig: func_08037E48) | origin: pure | domain: AEntity_73FC | HIGH / vtable_algebra */
struct Loc { u32 a, b; };
extern "C" Loc AEntity_GetLocation(void const *);
extern "C" void more_items_Sub_08010014(void *, Loc const &);
struct V4 { u32 f0; virtual ~V4(); };
struct C_080E6250 {
    u8 pad[0x10];
    V4 *unk_10;
    virtual ~C_080E6250() { delete unk_10; }
};
struct C_080E73FC : public C_080E6250 {
    void *actor_18;
    virtual ~C_080E73FC();
};
C_080E73FC::~C_080E73FC() {
    more_items_Sub_08010014(actor_18, AEntity_GetLocation(this));
}
extern "C" void AEntity_73FC_Dtor() __attribute__((alias("_._10C_080E73FC")));

/* 0x08037E9C (24B) | AEntity_73FC_vfunc_30 (orig: func_08037E9C) | origin: pure | domain: AEntity_73FC | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 CppRuntime_builtin_new();
extern u32 code_entities_08034CEC_7430_Ctor();
u32 AEntity_73FC_vfunc_30(u32 arg0) {
  u32 val;
  val = CppRuntime_builtin_new(0x58);
  return code_entities_08034CEC_7430_Ctor(val,arg0);
}

/* 0x08037ED0 (32B) | AEntity_73FC_vfunc_0C (orig: func_08037ED0) | origin: pure | domain: AEntity_73FC | HIGH / vtable_algebra */
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
#define SBORROW4(a, b) (((s32)((u32)(a) - (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) != ((s32)(b) < 0))
#define BADSPACEBASE 0
unsigned long long AEntity_73FC_vfunc_0C(short *arg0, int arg1) {
  int val;
  int val2;
  val = *(short *)(arg1 + 10);
  val2 = *(short *)(arg1 + 0xe);
  *arg0 = val + -7;
  arg0[1] = val2 + -4;
  arg0[2] = val + 7;
  arg0[3] = val2 + 5;
}

