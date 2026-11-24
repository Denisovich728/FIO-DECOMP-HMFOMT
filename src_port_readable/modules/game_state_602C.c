/* FIO-DECOMP-HMFOMT :: Port Readable Module: game_state_602C (4 functions) */
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

/* 0x0801C550 (332B) | game_state_602C_AutoPtrFactory (orig: func_0801C550) | origin: wip | domain: game_state_602C | HIGH / vtable_algebra */
void game_state_602C_AutoPtrFactory(int *self,int param_2,u32 param_3,u32 param_4,u8 param_5,u32 param_6) {
  u16 uVar1;
  u16 uVar2;
  u16 uVar3;
  int iVar4;
  int *piVar5;
  u8 *pbVar6;
  int iVar7;
  int *piVar8;
  u16 *apuStack_2c [2];
  u32 uStack_24;
  uStack_24 = param_6 & 0xffff;
  pbVar6 = (u8 *)(*(u16 *)0x0300040C + 0x000004DC + param_2 * 0xc);
  *pbVar6 = *pbVar6 & 0xfc | 1;
  uVar3 = func_080D3910(self,*(u32 *)(*self + 0x14));
  uVar2 = (u16)0x000003FF;
  uVar1 = (u16)0xFFFFFC00;
  *(u16 *)(pbVar6 + 2) = uVar1 & *(u16 *)(pbVar6 + 2) | uVar3 & uVar2;
  pbVar6[3] = pbVar6[3] & 3 | (u8)((param_3 & 0x3f) << 2);
  *(u16 *)(pbVar6 + 4) =
       uVar1 & *(u16 *)(pbVar6 + 4) | (u16)((param_3 & 0xffff) >> 6) & uVar2;
  *(u32 *)(pbVar6 + 4) = *(u32 *)(pbVar6 + 4) & 0xFC0003FF | (param_4 & 0xffff) << 10;
  *pbVar6 = *pbVar6 & 0xf3 | (param_5 & 3) << 2;
  *(u16 *)(pbVar6 + 8) = (u16)uStack_24;
  piVar8 = (int *)((int)self + param_2 * 4 + 0x000010B0);
  iVar4 = CppRuntime_builtin_new(0x4c);
  piVar5 = (int *)func_080D3910(self,*(u32 *)(*self + 100));
  code_809E804_82D8_Ctor_4740(iVar4,self,2,0x1b);
  *(u32 *)(iVar4 + 0x24) = 0x080E602C;
  iVar7 = *piVar5;
  func_080D3918(apuStack_2c,piVar5,uStack_24,*(u32 *)(iVar7 + 0xc));
  func_080D3918(iVar4 + 0x28,piVar5,*apuStack_2c[0],*(u32 *)(iVar7 + 0x10));
  *(u8 *)(iVar4 + 0x48) = 1;
  iVar7 = *piVar8;
  if ((iVar4 != iVar7) && (iVar7 != 0)) {
    func_080D3914(iVar7,3,*(u32 *)(*(int *)(iVar7 + 0x24) + 8));
  }
  *piVar8 = iVar4;
}

/* 0x080387B8 (16B) | game_state_602C_Wrap_Dtor (orig: func_080387B8) | origin: pure | domain: game_state_602C | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 game_state_602C_Dtor();
void game_state_602C_Wrap_Dtor(int arg0) {
  if (*(int *)(arg0 + 0x10) != 0) {
    game_state_602C_Dtor();
  }
}

/* 0x08038DF0 (160B) | game_state_602C_Dtor (orig: func_08038DF0) | origin: wip | domain: game_state_602C | HIGH / vtable_algebra */
void game_state_602C_Dtor(u32 *self) {
  int iVar1;
  u16 *apuStack_20 [2];
  int *piVar2;
  u32 iVar4;
  register int *piVar3;
  iVar1 = CppRuntime_builtin_new(0x54);
  piVar3 = *(int **)*self;
  piVar2 = (int *)func_080D3910(piVar3,*(u32 *)(*piVar3 + 0x70));
  code_809E804_82D8_Ctor_4740(iVar1,piVar3,6,0x1b);
  *(u32 *)(0x24 + iVar1) = 0x080E602C;
  func_080D3918(apuStack_20,piVar2,0,*(u32 *)(iVar4 + 0xc));
  iVar4 = *piVar2;
  func_080D3918(iVar1 + 0x28,piVar2,*apuStack_20[0],*(u32 *)(0x10 + iVar4));
  *(u32 *)(iVar1 + 0x48) = 1;
  *(u32 *)(0x4c + iVar1) = 0x1200000;
  *(u8 *)(0x50 + iVar1) = 0;
  *(u8 *)(iVar1 + 0x51) = 0;
  iVar4 = self[3];
  if ((iVar1 != iVar4) & (iVar4 != 0)) {
    code_809E804_82D8_Dtor(iVar4,2);
    CppRuntime_builtin_delete(iVar4);
  }
  self[3] = iVar1;
}

/* 0x080DC5A8 (12B) | game_state_602C_vfunc_08 (orig: func_080DC5A8) | origin: pure | domain: game_state_602C | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_809E804_82D8_Dtor();
void game_state_602C_vfunc_08(void) {
  code_809E804_82D8_Dtor();
}

