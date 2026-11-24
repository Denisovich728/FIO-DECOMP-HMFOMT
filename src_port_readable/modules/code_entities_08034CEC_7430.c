/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_entities_08034CEC_7430 (3 functions) */
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

/* 0x08037EF0 (112B) | code_entities_08034CEC_7430_Ctor (orig: func_08037EF0) | origin: wip | domain: code_entities_08034CEC_7430 | HIGH / vtable_algebra */
u32 code_entities_08034CEC_7430_Ctor(int self, int param_2) {
  *(u32 *)(self) = param_2;
  *(u32 *)(self + 4) = 0x080E7430;
  func_080D3910(*(u32 *)(param_2), *(u32 *)(*(u32 *)(*(u32 *)(param_2)) + 0x64));
  code_809E804_82D8_Ctor_4740((self + 8), *(u32 *)(param_2), 2, 8);
  *(u32 *)((self + 8) + 0x24) = 0x080E602C;
  func_080D3918(0x080E602C, func_080D3910(*(u32 *)(param_2), *(u32 *)(*(u32 *)(*(u32 *)(param_2)) + 0x64)), 0x35, *(u32 *)(*(u32 *)(func_080D3910(*(u32 *)(param_2), *(u32 *)(*(u32 *)(*(u32 *)(param_2)) + 0x64))) + 0xc));
  func_080D3918((self + 0x30), func_080D3910(*(u32 *)(param_2), *(u32 *)(*(u32 *)(*(u32 *)(param_2)) + 0x64)), *(u16 *)(func_080D3918(0x080E602C, func_080D3910(*(u32 *)(param_2), *(u32 *)(*(u32 *)(*(u32 *)(param_2)) + 0x64)), 0x35, *(u32 *)(*(u32 *)(func_080D3910(*(u32 *)(param_2), *(u32 *)(*(u32 *)(*(u32 *)(param_2)) + 0x64))) + 0xc))), *(u32 *)(*(u32 *)(func_080D3910(*(u32 *)(param_2), *(u32 *)(*(u32 *)(*(u32 *)(param_2)) + 0x64))) + 0x10));
  *(u8 *)((self + 0x50)) = 1;
  *(u8 *)((self + 0x54)) = 0;
  return self;
}

/* 0x08037F60 (20B) | code_entities_08034CEC_7430_vfunc_0C (orig: func_08037F60) | origin: pure | domain: code_entities_08034CEC_7430 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
void code_entities_08034CEC_7430_vfunc_0C(int arg0) {
  BOOL val;
  val = *(char *)(arg0 + 0x54);
  if (val != '\0') {
    *(char *)(arg0 + 0x54) = val + -1;
  }
}

/* 0x08037F7C (172B) | code_entities_08034CEC_7430_vfunc_10 (orig: func_08037F7C) | origin: wip | domain: code_entities_08034CEC_7430 | HIGH / vtable_algebra */
void code_entities_08034CEC_7430_vfunc_10(int *self,u32 *param_2) {
  u32 uVar1;
  int iVar2;
  int iVar3;
  iVar3 = (int)*(short *)(*self + 0xe);
  iVar2 = iVar3 - *(short *)((int)param_2 + 0xe);
  uVar1 = *param_2;
  if ((char)self[0x15] != '\0') {
    iVar2 = iVar2 + -2;
  }
  if ((-self[4] | self[4]) < 0) {
    iVar2 = func_080D391C(param_2[2],(int)*(short *)(*self + 10) - (int)*(short *)(param_2 + 3)
                            ,iVar2,0xaa,0x8000 - iVar3,self + 0xc,self[2],(short)self[5],
                            self + 6,uVar1,param_2[2]);
  }
  else {
    iVar2 = 0;
  }
  if ((iVar2 != 0) && ((char)self[0x14] != '\0')) {
    hardware_Sub_080A480C(self + 2,uVar1,self + 0xe);
    code_809E804_Sub_080A4944(self + 2,self + 0x10,1);
    *(char *)(self + 0x14) = '\0';
  }
}

