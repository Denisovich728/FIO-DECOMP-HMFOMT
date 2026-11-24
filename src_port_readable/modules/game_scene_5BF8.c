/* FIO-DECOMP-HMFOMT :: Port Readable Module: game_scene_5BF8 (6 functions) */
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

/* 0x080101A0 (200B) | game_scene_5BF8_Ctor (orig: func_080101A0) | origin: wip | domain: game_scene_5BF8 | HIGH / vtable_algebra */
u32 game_scene_5BF8_Ctor(u32 *self,int *param_2) {
    unsigned int iVar1;
    unsigned int iVar3;
  register s16 *puVar2;
  *self = 0x080E5BF8;
  iVar1 = *param_2;
  self[1] = iVar1;
  *param_2 = 0;
  ScriptEngine_Ctor(self + 2);
  *(u8 *)(self + 0xd9) = 0;
  *(u8 *)(self + 0xdb) = 0;
  puVar2 = (u16 *)(self + 0xdd);
  self[0xdc] = 0x1d;
  *(u8 *)puVar2 = (s8)*puVar2 & 0xe0 | 6;
  *puVar2 = (u16)0xFFFFF81F & *puVar2;
  self[0xde] = 0;
  self[0xe3] = 0;
  self[0x134] = 0;
  iVar1 = (int)self + 0x000004DC;
  iVar3 = 5;
  do {
    game_scene_5BF8_Sub_080D4130(iVar1);
    iVar1 = iVar1 + 0xc;
    iVar3 = iVar3 + -1;
  } while (iVar3 != -1);
  iVar1 = (int)self + 0x00000524;
  iVar3 = 3;
  do {
    game_scene_5BF8_Sub_080D40CC(iVar1);
    iVar1 = 0xc + iVar1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != -1);
  *(u32 *)0x0300040C = self;
  if (*param_2 != 0) {
    new_game_Sub_080D4480(*param_2,3);
  }
  return self;
}

/* 0x08010268 (224B) | game_scene_5BF8_Create (orig: func_08010268) | origin: wip | domain: game_scene_5BF8 | HIGH / vtable_algebra */
u32 game_scene_5BF8_Create(u32 *self,u32 param_2,u32 param_3,u32 param_4,
             u32 param_5) {
  u32 uVar1;
  s16 *puVar2;
  int iVar3;
  int iVar4;
  *self = 0x080E5BF8;
  uVar1 = CppRuntime_builtin_new(0x000034F4);
  uVar1 = game_state_Sub_08010358(uVar1,param_2,param_3,param_4,param_5);
  self[1] = uVar1;
  ScriptEngine_Ctor(self + 2);
  *(u8 *)(self + 0xd9) = 1;
  self[0xda] = 0xab;
  *(int *)(self + 0xdb) = 0;
  self[0xdc] = 0x1d;
  puVar2 = (u16 *)(self + 0xdd);
  *(u8 *)puVar2 = (s8)*puVar2 & 0xe0 | 6;
  *puVar2 = (u16)0xFFFFF81F & *puVar2;
  self[0xde] = 0;
  self[0xe3] = 0;
  self[0x134] = 0;
  iVar3 = (int)self + 0x000004DC;
  iVar4 = 5;
  do {
    game_scene_5BF8_Sub_080D4130(iVar3);
    iVar3 = iVar3 + 0xc;
    iVar4 = iVar4 + -1;
  } while (iVar4 != -1);
  iVar3 = (int)self + 0x00000524;
  iVar4 = 3;
  do {
    game_scene_5BF8_Sub_080D40CC(iVar3);
    iVar3 = iVar3 + 0xc;
    iVar4 = iVar4 + -1;
  } while (iVar4 != -1);
  *(u32 *)0x0300040C = self;
  return self;
}

/* 0x080D3EF4 (272B) | game_scene_5BF8_AutoPtrFactory (orig: func_080D3EF4) | origin: wip | domain: game_scene_5BF8 | HIGH / vtable_algebra */
u32 game_scene_5BF8_AutoPtrFactory(u32 *self,int param_2) {
  u32 *puVar1;
  u32 uVar2;
  u16 *puVar3;
  int iVar4;
  int iVar5;
  puVar1 = (u32 *)CppRuntime_builtin_new(0x00000554);
  uVar2 = *(u32 *)(param_2 + 4);
  *(u32 *)(param_2 + 4) = 0;
  *puVar1 = 0x080E5BF8;
  puVar1[1] = uVar2;
  ScriptEngine_Ctor(puVar1 + 2);
  *(u8 *)(puVar1 + 0xd9) = 0;
  *(u8 *)(puVar1 + 0xdb) = 0;
  puVar1[0xdc] = 0x1d;
  puVar3 = (u16 *)(puVar1 + 0xdd);
  *(u8 *)puVar3 = (s8)*puVar3 & 0xe0 | 6;
  *puVar3 = (u8)0xFFFFF81F & *puVar3;
  puVar1[0xde] = 0;
  puVar1[0xe3] = 0;
  puVar1[0x134] = 0;
  iVar4 = (int)puVar1 + 0x000004DC;
  iVar5 = 5;
  do {
    game_scene_5BF8_Sub_080D4130(iVar4);
    iVar4 = iVar4 + 0xc;
    iVar5 = iVar5 + -1;
  } while (iVar5 != -1);
  iVar4 = (int)puVar1 + 0x00000524;
    game_scene_5BF8_Sub_080D40CC(iVar4);
  do {
  iVar5 = 3;
    iVar4 = iVar4 + 0xc;
    iVar5 = iVar5 + -1;
  } while (iVar5 != -1);
  (*(int *)0x0300040C) = puVar1;
  *self = puVar1;
  return (self);
}

/* 0x080D40CC (100B) | game_scene_5BF8_Sub_080D40CC (orig: func_080D40CC) | origin: wip | domain: game_scene_5BF8 | MEDIUM / graph_algebra */
u32 game_scene_5BF8_Sub_080D40CC(int param_1) {
  u16 uVar1;
  u16 uStack_1c;
  u16 uStack_1a;
  u16 uStack_18;
  uVar1 = (u16)0xFFFFFC00;
  uStack_1c = uVar1 & uStack_1c & 0x3ff | 0x234;
  uStack_1a = uVar1 & uStack_1a & 0x3ff;
  uStack_18 = uVar1 & uStack_18;
  LibC_memcpy(param_1,&uStack_1c,6);
  *(u8 *)(param_1 + 6) = 0;
  *(u16 *)(param_1 + 8) = 0;
  *(u16 *)(param_1 + 10) = 0;
  return param_1;
}

/* 0x080D4130 (72B) | game_scene_5BF8_Sub_080D4130 (orig: func_080D4130) | origin: wip | domain: game_scene_5BF8 | MEDIUM / graph_algebra */
u32 game_scene_5BF8_Sub_080D4130(u8 *param_1) {
  u16 uVar1;
  *param_1 = *param_1 & 0xfc;
  uVar1 = (u16)0xFFFFFC00;
  *(u16 *)(param_1 + 2) = uVar1 & *(u16 *)(param_1 + 2) | 0x234;
  param_1[3] = param_1[3] & 3;
  *(u16 *)(param_1 + 4) = uVar1 & *(u16 *)(param_1 + 4);
  param_1[5] = param_1[5] & 3;
  *(u16 *)(param_1 + 6) = uVar1 & *(u16 *)(param_1 + 6);
  return;
}

/* 0x080D6C58 (308B) | game_scene_5BF8_AutoPtrFactory_6C58 (orig: func_080D6C58) | origin: wip | domain: game_scene_5BF8 | HIGH / vtable_algebra */
u32 game_scene_5BF8_AutoPtrFactory_6C58(u32 *self,int param_2) {
  u8 uVar1;
  u32 *puVar2;
  u32 uVar3;
  u16 *puVar4;
  int iVar5;
  int iVar6;
  puVar2 = (u32 *)CppRuntime_builtin_new(0x00000554);
  uVar1 = *(u8 *)(param_2 + 0x24);
  *puVar2 = 0x080E5BF8;
  uVar3 = CppRuntime_builtin_new(0x000034F4);
  uVar3 = game_state_Sub_08010358(uVar3,param_2 + 4,param_2 + 0x14,uVar1,param_2 + 0x28);
  puVar2[1] = uVar3;
  ScriptEngine_Ctor(puVar2 + 2);
  *(u8 *)(puVar2 + 0xd9) = 1;
  puVar2[0xda] = 0xab;
  *(u8 *)(puVar2 + 0xdb) = 0;
  puVar2[0xdc] = 0x1d;
  puVar4 = (u16 *)(puVar2 + 0xdd);
  *(u8 *)puVar4 = (u8)*puVar4 & 0xe0 | 6;
  *puVar4 = (u16)0xFFFFF81F & *puVar4;
  puVar2[0xde] = 0;
  puVar2[0xe3] = 0;
  puVar2[0x134] = 0;
  iVar5 = (int)puVar2 + 0x000004DC;
  iVar6 = 5;
  do {
    game_scene_5BF8_Sub_080D4130(iVar5);
    iVar5 = iVar5 + 0xc;
    iVar6 = iVar6 + -1;
  } while (iVar6 != -1);
  iVar5 = (int)puVar2 + 0x00000524;
  iVar6 = 3;
  do {
    game_scene_5BF8_Sub_080D40CC(iVar5);
    iVar5 = iVar5 + 0xc;
    iVar6 = iVar6 + -1;
  } while (iVar6 != -1);
  *(u16 *)0x0300040C = puVar2;
  *self = puVar2;
  return (self);
}

