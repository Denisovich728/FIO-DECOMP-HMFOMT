/* FIO-DECOMP-HMFOMT :: Port Readable Module: AEntity_6828 (4 functions) */
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

/* 0x08032934 (40B) | AEntity_6828_Ctor (orig: func_08032934) | origin: pure | domain: AEntity_6828 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 AActorEntity_Ctor();
u32 AEntity_6828_Ctor(int arg0,u32 arg1,int arg2) {
  AActorEntity_Ctor(arg0,arg1,arg2,2,*(u16 *)(arg2 + 8));
  *(u32 *)(arg0 + 0x14) = 0x080E6828;
  *(int *)(arg0 + 0x30) = arg2;
  return arg0;
}

/* 0x080329B4 (24B) | AEntity_6828_vfunc_30 (orig: func_080329B4) | origin: pure | domain: AEntity_6828 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 CppRuntime_builtin_new();
extern u32 code_entities_080320DC_6864_Ctor();
u32 AEntity_6828_vfunc_30(u32 arg0) {
  u32 val;
  val = CppRuntime_builtin_new(0x8c);
  return code_entities_080320DC_6864_Ctor(val,arg0);
}

/* 0x080329DC (36B) | AEntity_6828_vfunc_0C (orig: func_080329DC) | origin: pure | domain: AEntity_6828 | HIGH / vtable_algebra */
long long AEntity_6828_vfunc_0C(s16 *arg0, int arg1) {
    int val = *(s16 *)(arg1 + 10);
    int val2 = *(s16 *)(arg1 + 0xe);
    *arg0 = val - 7;
    arg0[1] = val2 - 10;
    arg0[2] = val + 7;
    arg0[3] = val2 + 4;
}

/* 0x08032A30 (40B) | AEntity_6828_vfunc_18 (orig: func_08032A30) | origin: wip | domain: AEntity_6828 | HIGH / vtable_algebra */
void AEntity_6828_vfunc_18(int self) {
  short sVar1;
  int iVar2;
  if (*(u16 *)(self + 0x24) == 0) {
    sVar1 = *(short *)(self + 0x26);
  }
  else {
    sVar1 = *(short *)(self + 0x24) + -1;
  }
  *(short *)(self + 0x24) = sVar1;
  iVar2 = *(int *)(self + 0x10);
  if (iVar2 != 0) {
    func_080D3910(iVar2,*(u32 *)(*(int *)(iVar2 + 4) + 0xc));
  }
}

