/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_entities_08034CEC_76BC (2 functions) */
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

/* 0x08039E98 (184B) | code_entities_08034CEC_76BC_Create (orig: func_08039E98) | origin: wip | domain: code_entities_08034CEC_76BC | HIGH / vtable_algebra */
u32 code_entities_08034CEC_76BC_Create(u32 *self,int *param_2,u32 param_3,int param_4) {
    u32 tmp_a2;
    u16 * apuStack_24 [2];
    u8 iVar4;
  u32 uVar1;
  int *piVar3;
  register unsigned int iVar2;
  self[0x13] = (u32)0x080E76BC;
  *self = param_2;
  *(u16 *)(self + 1) = (short)param_3;
  uVar1 = func_080D3910(param_2,*(u32 *)(*param_2 + 0x68));
  code_entities_681C_Ctor_4A00(self + 2,uVar1,param_3,param_2,3,0x1b,0);
  if ((u8)param_4 == 1) {
    iVar2 = CppRuntime_builtin_new(0x4c);
    piVar3 = (int *)func_080D3910(param_2,*(u32 *)(*param_2 + 0x68));
    code_809E804_82D8_Ctor_4740(iVar2,param_2,2,0xf);
    *(u32 *)(iVar2 + 0x24) = 0x080E602C;
    func_080D3918(apuStack_24,piVar3,0x0000091A,*(u32 *)(iVar4 + 0xc));
    iVar4 = *piVar3;
    tmp_a2 = *apuStack_24[0];
    func_080D3918(iVar2 + 0x28, piVar3, tmp_a2, *(u32 *)(iVar4 + 0x10));
    *(u8 *)(iVar2 + 0x48) = 1;
  }
  else {
    iVar2 = 0;
  }
  self[0x12] = iVar2;
  return self;
}

/* 0x08039F50 (64B) | code_entities_08034CEC_76BC_Dtor (orig: func_08039F50) | origin: pure | domain: code_entities_08034CEC_76BC | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 CppRuntime_builtin_delete();
extern u32 code_809E804_82D8_Dtor();
extern u32 func_080D3914();
void code_entities_08034CEC_76BC_Dtor(int arg0,u32 arg1) {
  int val;
  *(u32 *)(arg0 + 0x4c) = 0x080E76BC;
  val = *(int *)(arg0 + 0x48);
  if (val != 0) {
    func_080D3914(val,3,*(u32 *)(*(int *)(val + 0x24) + 8));
  }
  code_809E804_82D8_Dtor(arg0 + 8,2);
  if ((arg1 & 1) != 0) {
    CppRuntime_builtin_delete(arg0);
  }
}

