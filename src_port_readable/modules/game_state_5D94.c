/* FIO-DECOMP-HMFOMT :: Port Readable Module: game_state_5D94 (4 functions) */
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

/* 0x08085EEC (28B) | game_state_5D94_Sub_08085EEC (orig: func_08085EEC) | origin: pure | domain: game_state_5D94 | MEDIUM / graph_algebra */
u32 game_state_5D94_Sub_08085EEC(u8 *a) { u32 v = *(u32 *)(a + 0x43D8); if (v > 1) return 0x3E7; return v; }

/* 0x080881EC (192B) | game_state_5D94_AutoPtrFactory (orig: func_080881EC) | origin: wip | domain: game_state_5D94 | HIGH / vtable_algebra */
u32 game_state_5D94_AutoPtrFactory(u32 *self,int param_2) {
  int iVar1;
  int iVar2;
  u32 *puVar3;
  u32 *puVar4;
  u32 uVar5;
  u32 uVar6;
  u32 uVar7;
  u32 uVar8;
  iVar1 = SpriteAnimEngine_5B80_AutoPtrFactory_6A08(*(u32 *)(param_2 + 4));
  if (iVar1 == -1) {
    uVar8 = *(u32 *)(param_2 + 8);
    *(u32 *)(param_2 + 8) = 0;
    *self = uVar8;
  }
  else {
    iVar2 = game_state_5D94_Sub_08085EEC(*(u32 *)(param_2 + 4));
    uVar8 = 1;
    if (iVar2 != 0) {
      uVar8 = 2;
    }
    puVar3 = (u32 *)CppRuntime_builtin_new(0x10);
    uVar6 = *(u32 *)(param_2 + 8);
    *(u32 *)(param_2 + 8) = 0;
    uVar7 = 1;
    if (iVar2 != 0) {
      uVar7 = 2;
    }
    uVar5 = *(u32 *)(param_2 + 0x10);
    *puVar3 = 0x080E5D94;
    puVar3[1] = uVar6;
    puVar3[2] = uVar5;
    puVar3[3] = uVar7;
    puVar4 = (u32 *)CppRuntime_builtin_new(0x14);
    uVar6 = *(u32 *)(param_2 + 0x10);
    *puVar4 = 0x080E5C64;
    puVar4[1] = puVar3;
    puVar4[2] = uVar6;
    puVar4[3] = uVar8;
    *(char *)(puVar4 + 4) = (char)iVar1;
    *self = puVar4;
  }
  return self;
}

/* 0x080DBCE8 (72B) | game_state_5D94_vfunc_0C (orig: func_080DBCE8) | origin: wip | domain: game_state_5D94 | HIGH / vtable_algebra */
u32 game_state_5D94_vfunc_0C(u32 *self,int param_2) {
  u32 uVar1;
  u32 auStack_1c [3];
  auStack_1c[0] = *(u32 *)(param_2 + 4);
  *(u32 *)(param_2 + 4) = 0;
  uVar1 = CppRuntime_builtin_new(0x14);
  uVar1 = code_0803EE94_7D3C_Create(uVar1,auStack_1c,*(u32 *)(param_2 + 8),*(u32 *)(param_2 + 0xc)
                       );
  *self = uVar1;
  return self;
}

/* 0x080DBD30 (40B) | game_state_5D94_vfunc_08 (orig: func_080DBD30) | origin: pure | domain: game_state_5D94 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 scene_Dtor_080C();
extern u32 func_080D3914();
void game_state_5D94_vfunc_08(int arg0,u32 arg1) {
  int *mem_ptr;
  mem_ptr = *(int **)(arg0 + 4);
  if (mem_ptr != (int *)0x0) {
    func_080D3914(mem_ptr,3,*(u32 *)(*mem_ptr + 8));
  }
  scene_Dtor_080C(arg0,arg1);
}

