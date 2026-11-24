/* FIO-DECOMP-HMFOMT :: Port Readable Module: AEntity_73B4 (10 functions) */
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

/* 0x08038028 (112B) | AEntity_73B4_Ctor (orig: func_08038028) | origin: pure | domain: AEntity_73B4 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 AEntity_Ctor();
extern u32 code_entities_Sub_08020460();
extern u32 code_entities_Sub_08038374();
extern u32 func_080D3914();
u32 AEntity_73B4_Ctor(int arg0,int *arg1,u32 arg2) {
  char val;
  int val2;
  AEntity_Ctor();
  *(u32 *)(arg0 + 0x14) = 0x080E73B4;
  *(u32 *)(arg0 + 0x18) = arg2;
  *(u32 *)(arg0 + 0x1c) = 0;
  *(u8 *)(arg0 + 0x25) = 0;
  *(u8 *)(arg0 + 0x26) = 0;
  *(u16 *)(arg0 + 0x28) = 0x31;
  val2 = func_080D3914(arg1,0x2b,*(u32 *)(*arg1 + 0x40));
  if (((val2 != 0) && (*(short *)(val2 + 4) == *(short *)(arg0 + 4))) &&
     (val = code_entities_Sub_08020460(val2), val != '\0')) {
    code_entities_Sub_08038374(arg0,*(u32 *)(val2 + 8),*(u32 *)(val2 + 0xc),
                  *(u16 *)(val2 + 0x22),*(u8 *)(val2 + 0x20));
  }
  return arg0;
}

/* 0x08038098 (84B) | AEntity_73B4_Dtor (orig: func_08038098) | origin: pure | domain: AEntity_73B4 | HIGH / vtable_algebra */
struct Loc { u32 a, b; };
extern "C" Loc AEntity_GetLocation(void const *);
extern "C" void LibC_memcpy(void *, Loc const &, int);
struct V4 { u32 f0; virtual ~V4(); };
struct C_080E6250 {
    u8 pad[0x10];
    V4 *unk_10;
    virtual ~C_080E6250() { delete unk_10; }
};
struct C_080E73B4 : public C_080E6250 {
    void *actor_18;
    virtual ~C_080E73B4();
};
C_080E73B4::~C_080E73B4() {
    LibC_memcpy(actor_18, AEntity_GetLocation(this), 6);
}
extern "C" void AEntity_73B4_Dtor() __attribute__((alias("_._10C_080E73B4")));

/* 0x08038300 (32B) | AEntity_73B4_vfunc_18 (orig: func_08038300) | origin: pure | domain: AEntity_73B4 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 AEntity_73B4_Sub_08038110();
extern u32 func_080D3910();
void AEntity_73B4_vfunc_18(int arg0) {
  int val;
  val = *(int *)(arg0 + 0x10);
  if (val != 0) {
    func_080D3910(val,*(u32 *)(*(int *)(val + 4) + 0xc));
  }
  AEntity_73B4_Sub_08038110(arg0);
}

/* 0x08038320 (20B) | AEntity_73B4_vfunc_2C (orig: func_08038320) | origin: pure | domain: AEntity_73B4 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 AEntity_vfunc_2C();
extern u32 AEntity_73B4_Sub_08038110();
void AEntity_73B4_vfunc_2C(u32 arg0) {
  AEntity_vfunc_2C();
  AEntity_73B4_Sub_08038110(arg0);
}

/* 0x08038334 (24B) | AEntity_73B4_vfunc_30 (orig: func_08038334) | origin: pure | domain: AEntity_73B4 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 CppRuntime_builtin_new();
extern u32 code_entities_08034CEC_73E8_Ctor();
u32 AEntity_73B4_vfunc_30(u32 arg0) {
  u32 val;
  val = CppRuntime_builtin_new(0x48);
  return code_entities_08034CEC_73E8_Ctor(val,arg0);
}

/* 0x0803834C (32B) | AEntity_73B4_vfunc_0C (orig: func_0803834C) | origin: pure | domain: AEntity_73B4 | HIGH / vtable_algebra */
long long AEntity_73B4_vfunc_0C(s16 *arg0, int arg1) {
    int val = *(s16 *)(arg1 + 10);
    int val2 = *(s16 *)(arg1 + 0xe);
    *arg0 = val - 4;
    arg0[1] = val2 - 4;
    arg0[2] = val + 4;
    arg0[3] = val2 + 4;
}

/* 0x080ABBA0 (36B) | AEntity_73B4_Sub_080ABBA0 (orig: func_080ABBA0) | origin: pure | domain: AEntity_73B4 | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 AEntity_73B4_Sub_080AC388();
void AEntity_73B4_Sub_080ABBA0(u32 *arg0) {
  *arg0 = arg0[9];
  AEntity_73B4_Sub_080AC388(arg0 + 4,arg0 + 7,arg0,0,0,0);
}

/* 0x080ABBC4 (40B) | AEntity_73B4_Sub_080ABBC4 (orig: func_080ABBC4) | origin: pure | domain: AEntity_73B4 | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 AEntity_73B4_Sub_080AC388();
void AEntity_73B4_Sub_080ABBC4(int arg0) {
  *(int *)(arg0 + 4) = -*(int *)(arg0 + 0x24);
  AEntity_73B4_Sub_080AC388(arg0 + 0x10,arg0 + 0x1c,0,arg0 + 4,0,0);
}

/* 0x080ABBEC (40B) | AEntity_73B4_Sub_080ABBEC (orig: func_080ABBEC) | origin: pure | domain: AEntity_73B4 | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 AEntity_73B4_Sub_080AC388();
void AEntity_73B4_Sub_080ABBEC(int arg0) {
  *(int *)(arg0 + 8) = -*(int *)(arg0 + 0x24);
  AEntity_73B4_Sub_080AC388(arg0 + 0x10,arg0 + 0x1c,0,0,arg0 + 8,0);
}

/* 0x080ABC14 (44B) | AEntity_73B4_Sub_080ABC14 (orig: func_080ABC14) | origin: pure | domain: AEntity_73B4 | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 AEntity_73B4_Sub_080AC388();
void AEntity_73B4_Sub_080ABC14(int arg0) {
  *(u32 *)(arg0 + 0xc) = *(u32 *)(arg0 + 0x24);
  AEntity_73B4_Sub_080AC388(arg0 + 0x10,arg0 + 0x1c,0,0,0,arg0 + 0xc);
}

