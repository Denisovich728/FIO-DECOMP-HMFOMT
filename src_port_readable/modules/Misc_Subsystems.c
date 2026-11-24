/* FIO-DECOMP-HMFOMT :: Port Readable Module: Misc_Subsystems (152 functions) */
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

/* 0x0800018C (180B) | CRT0_AgbMain (orig: func_0800018C) | origin: wip | domain: CRT0 | EXACT / runtime_bios */
void CRT0_AgbMain(void) {
    u32 uStack_20;
    int * piStack_1c;
    u8 auStack_24 [4];
    u8 auStack_18 [8];
    int ** ppiStack_10;
  register char cVar1;
  register s16 uStack_c;
  *(u16 *)0x04000204 = (short)0x00004014;
  interrupt_Sub_080004C4();
  code_809E804_Sub_080D100C(0xd,0x03000491);
  interrupt_HW_IF(0x2000);
  sram_proxy_2_Sub_08000640(auStack_18);
  cVar1 = sram_proxy_1_Ctor(auStack_18);
  if (cVar1 == '\0') {
    sram_proxy_1_Ctor_0358(auStack_18);
  }
  code_809E804_Sub_080D100C(0xc,0x08000241);
  *(short *)0x04000132 = (short)0x0000C00F;
  interrupt_HW_IF(0x1000);
  hardware_Sub_08008AFC();
  hardware_Create_8980(auStack_24);
  CppRuntime_builtin_new(8);
  uStack_20 = (u8)intro_scene_Create();
  ppiStack_10 = &piStack_1c;
  piStack_1c = (int *)0x0;
  uStack_c = (s16)uStack_20;
    func_080D3914(piStack_1c,3,*(u32 *)(*piStack_1c + 8));
  if (piStack_1c != (int *)0x0) {
  scene_Sub_0800082C(&uStack_20);
  }
  hardware_Dtor_8A68(auStack_24,2);
}

/* 0x08000240 (160B) | main_HW_KEYINPUT (orig: func_08000240) | origin: wip | domain: main | HIGH / stanhash_map_tu */
void main_HW_KEYINPUT(void) {
  u16 uVar1;
  u16 uVar2;
  int iVar3;
  interrupt_Sub_08000528(0x0000FFFF);
  iVar3 = 0x040000B0;
  (*(vu16 *)0x04000000) = 0x80;
  (*(vu16 *)0x04000084) = 0;
  uVar1 = *(u16 *)0x04000130;
  while ((~uVar1 & 0xf) != 0) {
    uVar1 = *(u16 *)0x04000130;
  }
  uVar1 = (u16)0x0000C5FF;
  *(u16 *)(0x040000B0 + 10) = uVar1 & *(u16 *)(0x040000B0 + 10);
  uVar2 = (u16)0x00007FFF;
  *(u16 *)(iVar3 + 10) = uVar2 & *(u16 *)(iVar3 + 10);
  *(u16 *)(iVar3 + 0x16) = uVar1 & *(u16 *)(iVar3 + 0x16);
  *(u16 *)(iVar3 + 0x16) = uVar2 & *(u16 *)(iVar3 + 0x16);
  *(u16 *)(iVar3 + 0x22) = uVar1 & *(u16 *)(iVar3 + 0x22);
  *(u16 *)(iVar3 + 0x22) = uVar2 & *(u16 *)(iVar3 + 0x22);
  iVar3 = 0x040000D4;
  *(u16 *)(0x040000D4 + 10) = uVar1 & *(u16 *)(0x040000D4 + 10);
  *(u16 *)(iVar3 + 10) = uVar2 & *(u16 *)(iVar3 + 10);
  Code_Lib_Syscall_SoftReset(0xff);
  do {
  } while( true );
}

/* 0x0800059C (40B) | Memory_alloc (orig: func_0800059C) | origin: pure | domain: Memory | EXACT / runtime_bios */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 LibC_malloc();
extern u32 func_080D390C();
/* paridad 95.4% preset agbcc_O2 */
u32 Memory_alloc(u32 arg0) {
  int val;
  do {
    val = LibC_malloc(arg0);
    if (val != 0) {
exit_label:
      return val;
    }
    if (*(u32 *)0x030004C0 == 0) {
      val = 0;
      goto exit_label;
    }
    func_080D390C();
  } while( true );
}

/* 0x08008618 (164B) | hardware_5B00_Create (orig: func_08008618) | origin: wip | domain: hardware_5B00 | HIGH / vtable_algebra */
u32 hardware_5B00_Create(int *self,u16 *param_2,u8 *param_3) {
  u16 uVar2;
  s16 iVar1;
  int iVar3;
  u32 *puVar5;
  register u32 *puVar4;
  self[1] = (s32)0x080E5B00;
  iVar3 = CppRuntime_builtin_new(0x4b0);
  hardware_Sub_080091A4(iVar3,*param_2,param_2[1]);
  *(u32 *)(iVar3 + 0x24) = 0;
  *(u8 *)(iVar3 + 0x28) = 0;
  *(u8 *)(iVar3 + 0x30) = 0;
  hardware_Wrap_CpuSet(iVar3 + 0x34);
  hardware_Sub_08009744(iVar3 + 0x8c,*param_3,param_3[1]);
  hardware_Create_8980(iVar3 + 0x490);
  puVar5 = (u32 *)(iVar3 + 0x00000494);
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[2] = (u16)0x080E5BB4;
  iVar1 = 0x000004A4;
  puVar4 = (u32 *)(iVar3 + 0x000004A4);
  puVar5[3] = puVar4;
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0x080E5BD8;
  puVar5[4] = iVar3 + iVar1 + -4;
  puVar5[5] = puVar4;
  uVar2 = *(u16 *)(iVar3 + 0x38) | 8;
  *(u16 *)(iVar3 + 0x38) = uVar2;
  *(u16 *)0x04000004 = uVar2;
  *self = iVar3;
  return self;
}

/* 0x08008774 (84B) | hardware_5AF0_Ctor (orig: func_08008774) | origin: wip | domain: hardware_5AF0 | HIGH / vtable_algebra */
void hardware_5AF0_Ctor(int *self) {
    u32 uStack_18;
    u32 uStack_10;
    u32 uStack_14;
    int iStack_c;
  register u16 iVar1;
  register int iVar2;
  iVar2 = *self;
  iStack_c = iVar2 + 0x34;
  *(u16 *)(iVar2 + 0x34) = (u16)0x0000FF7F & *(u8 *)(iVar2 + 0x34);
  uStack_18 = 0;
  uStack_14 = (s16)0;
  uStack_10 = 0x080E5AF0;
  iVar1 = hardware_GetField_0x00_8AE0(iVar2 + 0x490);
  func_080D3914(iVar1,&uStack_18,*(u32 *)(*(u32 *)(iVar1 + 8) + 0x10));
  hardware_Wrap_Wrap_IntrWait(iVar2 + 0x490);
  hardware_Dtor_98AC(&uStack_18,2);
}

/* 0x0800B288 (20B) | S_GetAmountShipped (orig: func_0800B288) | origin: pure | domain: S | EXACT / stanhash_elf */
/* S_GetAmountShipped @ 0x0800B288 mode=THUMB size=0x14 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* S_GetAmountShipped @ 0x0800B288  mode=THUMB  size=0x14  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 S_GetAmountShipped(uint *param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if ((int)*param_1 < 0) {
    uVar1 = *param_1 & 0x7fffffff;
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

/* 0x0800B29C (56B) | S_ShipOne (orig: func_0800B29C) | origin: pure | domain: S | EXACT / stanhash_elf */
/* S_ShipOne @ 0x0800B29C mode=THUMB size=0x38 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* S_ShipOne @ 0x0800B29C  mode=THUMB  size=0x38  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 S_ShipOne(uint *param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (-1 < (int)*param_1) {
    *(byte *)((int)param_1 + 3) = *(byte *)((int)param_1 + 3) | 0x80;
  }
  uVar1 = *param_1 & 0x7fffffff;
  if (uVar1 <= _DAT_0800b2cc) {
    *param_1 = _DAT_0800b2d0 + 1 & *param_1 | uVar1 + 1 & _DAT_0800b2d0;
  }
  return in_lr;
}

/* 0x0800B2D4 (24B) | S_ForceEnableDisplay (orig: func_0800B2D4) | origin: pure | domain: S | EXACT / stanhash_elf */
#define true 1
#define false 0
#define NULL ((void *)0)
void S_ForceEnableDisplay(int *arg0) {
  if (-1 < *arg0) {
    *(u8 *)((int)arg0 + 3) = *(u8 *)((int)arg0 + 3) | 0x80;
  }
}

/* 0x0800E268 (40B) | ItemVariant_AsTool (orig: func_0800E268) | origin: pure | domain: ItemVariant | EXACT / stanhash_elf */
/* ItemVariant_AsTool @ 0x0800E268 mode=THUMB size=0x28 (barrido ROM) */
/* COMPILADOR: agbcc_O2 */

u32 ItemVariant_AsTool(const u16 *param_1)
{
    u8 buf[4];
    u16 v = *param_1;
    if ((v << 30) == 0) {
        func_0800DB2C(buf, v >> 2);
    } else {
        func_0800DB2C(buf, 0x51);
    }
    return buf[0];
}

/* 0x0800E290 (40B) | ItemVariant_AsFood (orig: func_0800E290) | origin: pure | domain: ItemVariant | EXACT / stanhash_elf */
/* ItemVariant_AsFood @ 0x0800E290 mode=THUMB size=0x28 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* ItemVariant_AsFood @ 0x0800E290  mode=THUMB  size=0x28  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 ItemVariant_AsFood(undefined4 param_1,ushort *param_2)

{
  undefined4 in_lr;
  
  if ((*param_2 & 3) == 1) {
    func_0x0800dca8(param_1,*param_2 >> 2);
  }
  else {
    func_0x0800dca8(param_1,0xab);
  }
  return CONCAT44(in_lr,param_1);
}

/* 0x0800E2B8 (44B) | ItemVariant_AsArticle (orig: func_0800E2B8) | origin: pure | domain: ItemVariant | EXACT / stanhash_elf */
/* ItemVariant_AsArticle @ 0x0800E2B8 mode=THUMB size=0x2C (barrido ROM) */
/* COMPILADOR: agbcc_O2 */

u32 ItemVariant_AsArticle(const u16 *param_1)
{
    u8 buf[4];
    u16 v = *param_1;
    if (((u32)(v << 30) >> 30) == 2) {
        func_0800DF50(buf, v >> 2);
    } else {
        func_0800DF50(buf, 0x5f);
    }
    return buf[0];
}

/* 0x0801004C (164B) | game_scene_vfunc_0C (orig: func_0801004C) | origin: wip | domain: game_scene | HIGH / vtable_algebra */
u32 game_scene_vfunc_0C(u32 *self,int param_2) {
  u32 uVar1;
  int *piVar2;
  u8 auStack_30 [4];
  int *piStack_2c;
  int *apiStack_28 [3];
  int **ppiStack_1c;
  u32 uStack_18;
  hardware_Create_8980(auStack_30);
  piStack_2c = (int *)0x0;
  apiStack_28[0] = (int *)(u32)(*(char *)(param_2 + 0x364) == '\0');
  uVar1 = CppRuntime_builtin_new(8);
  piVar2 = (int *)game_state_Create(uVar1,*(u32 *)(param_2 + 4),apiStack_28);
  if ((piVar2 != piStack_2c) && (piStack_2c != (int *)0x0)) {
    func_080D3914(piStack_2c,3,*(u32 *)(*piStack_2c + 8));
  }
  piStack_2c = (int *)0x0;
  apiStack_28[0] = piVar2;
  scene_Sub_0800082C(apiStack_28);
  *self = 0;
  uStack_18 = 0;
  apiStack_28[0] = (int *)0x0;
  ppiStack_1c = apiStack_28;
  if (piStack_2c != (int *)0x0) {
    func_080D3914(piStack_2c,3,*(u32 *)(*piStack_2c + 8));
  }
  hardware_Dtor_8A68(auStack_30,2);
  return self;
}

/* 0x08010158 (72B) | game_scene_Ctor (orig: func_08010158) | origin: pure | domain: game_scene | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 scene_Dtor();
extern u32 AScriptEngine_Dtor();
extern u32 new_game_Sub_080D4480();
extern u32 game_scene_Sub_080D7E64();
/* paridad 97.4% preset agbcc_O2 */
void game_scene_Ctor(u32 *arg0,u32 arg1) {
  *arg0 = 0x080E5BF8;
  *(s32 *)0x0300040C = 0;
  game_scene_Sub_080D7E64(arg0 + 0xde,2);
  AScriptEngine_Dtor(arg0 + 2,2);
  if (arg0[1] != 0) {
    new_game_Sub_080D4480(arg0[1],3);
  }
  scene_Dtor(arg0,arg1);
}

/* 0x08011ED8 (272B) | game_state_5E64_Create (orig: func_08011ED8) | origin: wip | domain: game_state_5E64 | HIGH / vtable_algebra */
u32 game_state_5E64_Create(int self, int param_2) {
  *(u32 *)(self) = 0x080E5E64;
  CppRuntime_builtin_new(0xf8);
  *(u32 *)((CppRuntime_builtin_new(0xf8) + 0xf4)) = 0x080E5C08;
  *(u32 *)(CppRuntime_builtin_new(0xf8)) = 0;
  *(u32 *)(CppRuntime_builtin_new(0xf8) + 4) = 0;
  *(u32 *)((CppRuntime_builtin_new(0xf8) + 8) + 4) = 0;
  hardware_Wrap_CpuSet(((CppRuntime_builtin_new(0xf8) + 8) + 8), (CppRuntime_builtin_new(0xf8) + 0xf4));
  hardware_Create_8980((CppRuntime_builtin_new(0xf8) + 0x68), (CppRuntime_builtin_new(0xf8) + 0xf4));
  *(u32 *)(CppRuntime_builtin_new(0xf8) + 0x6c) = 0;
  *(u32 *)((CppRuntime_builtin_new(0xf8) + 0x6c) + 4) = 0;
  *(u32 *)((CppRuntime_builtin_new(0xf8) + 0x6c) + 8) = 0x080E5BB4;
  *(u32 *)((CppRuntime_builtin_new(0xf8) + 0x6c) + 0xc) = (CppRuntime_builtin_new(0xf8) + 0x7c);
  *(u32 *)(CppRuntime_builtin_new(0xf8) + 0x7c) = 0;
  *(u32 *)((CppRuntime_builtin_new(0xf8) + 0x7c) + 4) = 0;
  *(u32 *)((CppRuntime_builtin_new(0xf8) + 0x7c) + 8) = 0x080E5BD8;
  *(u32 *)((CppRuntime_builtin_new(0xf8) + 0x6c) + 0x10) = (CppRuntime_builtin_new(0xf8) + 0x78);
  *(u32 *)((CppRuntime_builtin_new(0xf8) + 0x6c) + 0x14) = (CppRuntime_builtin_new(0xf8) + 0x7c);
  *(u32 *)(((CppRuntime_builtin_new(0xf8) + 0x78) + 0x10)) = self;
  *(u32 *)((((CppRuntime_builtin_new(0xf8) + 0x78) + 0x10) + 4)) = param_2;
  *(u32 *)((CppRuntime_builtin_new(0xf8) + 0xa0)) = 0;
  *(u32 *)(((CppRuntime_builtin_new(0xf8) + 0xa0) + 4)) = 0;
  *(u32 *)((((CppRuntime_builtin_new(0xf8) + 0xa0) + 4) + 4)) = 0;
  *(u32 *)(((((CppRuntime_builtin_new(0xf8) + 0xa0) + 4) + 4) + 4)) = 0;
  *(u32 *)((((((CppRuntime_builtin_new(0xf8) + 0xa0) + 4) + 4) + 4) + 4)) = 0;
  *(u32 *)(((((((CppRuntime_builtin_new(0xf8) + 0xa0) + 4) + 4) + 4) + 4) + 4)) = 0;
  *(u32 *)((((((((CppRuntime_builtin_new(0xf8) + 0xa0) + 4) + 4) + 4) + 4) + 4) + 4)) = 0;
  hardware_Sub_08008B54(((((((((CppRuntime_builtin_new(0xf8) + 0xa0) + 4) + 4) + 4) + 4) + 4) + 4) + 4), 0, (CppRuntime_builtin_new(0xf8) + 0x6c));
  hardware_Sub_08008B54((CppRuntime_builtin_new(0xf8) + 0xc0), 1, (CppRuntime_builtin_new(0xf8) + 0x6c));
  hardware_Sub_08008B54((CppRuntime_builtin_new(0xf8) + 0xc4), 2, (CppRuntime_builtin_new(0xf8) + 0x6c));
  hardware_Sub_08008B54((CppRuntime_builtin_new(0xf8) + 0xc8), 3, (CppRuntime_builtin_new(0xf8) + 0x6c));
  hardware_Sub_08008B54((CppRuntime_builtin_new(0xf8) + 0xcc), 4, (CppRuntime_builtin_new(0xf8) + 0x6c));
  *(u32 *)((CppRuntime_builtin_new(0xf8) + 0xd0)) = 0;
  *(u32 *)((CppRuntime_builtin_new(0xf8) + 0xd0) + 4) = 0;
  *(u32 *)(((CppRuntime_builtin_new(0xf8) + 0xd0) + 8) + 4) = 0;
  *(u8 *)((((CppRuntime_builtin_new(0xf8) + 0xd0) + 8) + 0x10)) = 0;
  *(u8 *)(((((CppRuntime_builtin_new(0xf8) + 0xd0) + 8) + 0x10) + 2)) = 0;
  *(u32 *)((((((CppRuntime_builtin_new(0xf8) + 0xd0) + 8) + 0x10) + 2) + 6)) = 0;
  *(u16 *)(CppRuntime_builtin_new(0xf8) + 0x14) = *(u16 *)(CppRuntime_builtin_new(0xf8) + 0x14);
  *(u16 *)(0x04000004) = *(u16 *)(CppRuntime_builtin_new(0xf8) + 0x14);
  *(u32 *)(self + 4) = CppRuntime_builtin_new(0xf8);
  return func_0803F8A0((*(u32 *)(0x0300040C) + 8), self, (CppRuntime_builtin_new(0xf8) + 0x6c));
}

/* 0x0801C69C (80B) | WorldState_Sub_0801C69C (orig: func_0801C69C) | origin: wip | domain: WorldState | HEURISTIC / semantic_bank */
void WorldState_Sub_0801C69C(u32 param_1, u32 param_2, u32 param_3, u32 param_4) {
    u32 r0 = param_1;
    u32 r1 = param_2;
    u32 r2 = param_3;
    u32 r3 = param_4;
    register u32 r4, r5;
    r2 = 0x0300040C;
    r3 = *(u32 *)(r2);
    r2 = 0x000004DC;
    r3 = r3 + r2;
    r2 = r1 << 1;
    r2 = r2 + r1;
    r2 = r2 << 2;
    r3 = r3 + r2;
    r4 = *(u8 *)(r3);
    r2 = 4;
    r2 &= r4;
    *(u8 *)(r3) = r2;
    r2 = 0x000010B0;
    r0 = r0 + r2;
    r1 = r1 << 2;
    r4 = r0 + r1;
    r5 = 0;
    r1 = *(u32 *)(r4);
    if (r5 == r1) goto loc_0801C6D8;
    if ((s8)r1 == 0) goto loc_0801C6D8;
    r0 = *(u32 *)(r1 + 0x24);
    r2 = *(u32 *)(r0 + 8);
    r0 = r1 + 0;
    r1 = 3;
    r0 = func_080D3914(r0, r1, r2, r3);
loc_0801C6D8:
    *(u32 *)(r4) = r5;
    return r0;
}

/* 0x0802459C (48B) | Entity_080E6554_vfunc_18 (orig: func_0802459C) | origin: pure | domain: Entity_080E6554 | HIGH / vtable_algebra */
extern void func_080D3910();
void Entity_080E6554_vfunc_18(int self) {
    int p;
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

/* 0x08034DB0 (220B) | ANpcEntity_Dtor (orig: func_08034DB0) | origin: pure | domain: ANpcEntity | EXACT / stanhash_elf */
/* ANpcEntity_Dtor @ 0x08034DB0 mode=THUMB size=0xDC (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* ANpcEntity_Dtor @ 0x08034DB0  mode=THUMB  size=0xDC  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 ANpcEntity_Dtor(int self,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  undefined1 auStack_18 [8];
  
  *(undefined4 *)(self + 0x14) = _DAT_08034ddc;
  uVar2 = *(undefined4 *)(self + 0x30);
  AActorEntity_GetLocation(auStack_18,self);
  func_0x0809e368(uVar2,auStack_18);
  if (*(char *)(self + 6) == '\0') {
    *(short *)(*(int *)(self + 0x30) + 0x12) = (short)_DAT_08034e78;
  }
  else {
    *(undefined2 *)(*(int *)(self + 0x30) + 0x12) = *(undefined2 *)(self + 0x22);
  }
  if (*(int *)(self + 0x38) != 0) {
    *(byte *)(*(int *)(self + 0x30) + 0xc) =
         *(byte *)(*(int *)(self + 0x30) + 0xc) & 0xe0 | *(byte *)(self + 0x3c) & 0x1f;
    *(ushort *)(*(int *)(self + 0x30) + 0xc) =
         (ushort)_DAT_08034e7c & *(ushort *)(*(int *)(self + 0x30) + 0xc) |
         (*(byte *)(self + 0x3d) & 0x1f) << 5;
    *(byte *)(*(int *)(self + 0x30) + 0xd) =
         *(byte *)(*(int *)(self + 0x30) + 0xd) & 0x83 | (*(byte *)(self + 0x3e) & 0x1f) << 2;
    *(uint *)(*(int *)(self + 0x30) + 0xc) =
         *(uint *)(*(int *)(self + 0x30) + 0xc) & _DAT_08034e84 |
         (*(ushort *)(self + 0x40) & _DAT_08034e80) << 0xf;
  }
  *(undefined4 *)(self + 0x14) = _DAT_08034e88;
  iVar1 = *(int *)(self + 0x10);
  if (iVar1 != 0) {
    func_0x080d3914(iVar1,3,*(undefined4 *)(*(int *)(iVar1 + 4) + 8));
  }
  if ((param_2 & 1) != 0) {
    CppRuntime_builtin_delete(self);
  }
  return in_lr;
}

/* 0x08037008 (64B) | AEntity_7328_Ctor (orig: func_08037008) | origin: wip | domain: AEntity_7328 | HIGH / vtable_algebra */
u32 AEntity_7328_Ctor(int self,u32 param_2,u32 param_3,u32 param_4,
             u16 param_5) {
  AActorEntity_Ctor();
  *(u32 *)(self + 0x14) = 0x080E7328;
  *(u32 *)(self + 0x30) = (u8)param_3;
  *(u16 *)(self + 0x34) = 0;
  *(u16 *)(self + 0x36) = 0;
  *(u32 *)(self + 0x38) = 0;
  *(u16 *)(self + 0x3a) = 0;
  *(u16 *)(self + 0x3c) = param_5;
  *(u16 *)(self + 0x3e) = 0;
  *(u8 *)(self + 0x40) = 1;
  return self;
}

/* 0x0803A798 (108B) | AEntity_7568_Create (orig: func_0803A798) | origin: wip | domain: AEntity_7568 | HIGH / vtable_algebra */
u32 AEntity_7568_Create(u32 self,u32 param_2) {
  u16 uVar1;
  int iVar2;
  u16 uStack_1c;
  u16 uStack_1a;
  u16 uStack_18;
  iVar2 = CppRuntime_builtin_new(0x20);
  uVar1 = (u16)0xFFFFFC00;
  uStack_1c = uVar1 & uStack_1c & 0x3ff;
  uStack_1a = uVar1 & uStack_1a & 0x3ff;
  uStack_18 = uVar1 & uStack_18;
  AEntity_Ctor(iVar2,self,&uStack_1c);
  *(u32 *)(iVar2 + 0x14) = 0x080E7568;
  *(u32 *)(iVar2 + 0x18) = param_2;
  *(u8 *)(iVar2 + 0x1c) = 1;
  return iVar2;
}

/* 0x08063E58 (12B) | IntroSequence_7A38_vfunc_0C (orig: func_08063E58) | origin: pure | domain: IntroSequence_7A38 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_0803EE94_7B88_vfunc_0C();
u32 IntroSequence_7A38_vfunc_0C(void) {
  code_0803EE94_7B88_vfunc_0C();
  return 1;
}

/* 0x080713AC (12B) | SpriteAnimEngine_7B1C_vfunc_0C (orig: func_080713AC) | origin: pure | domain: SpriteAnimEngine_7B1C | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_0803EE94_7B2C_vfunc_0C();
u32 SpriteAnimEngine_7B1C_vfunc_0C(void) {
  code_0803EE94_7B2C_vfunc_0C();
  return 1;
}

/* 0x080722D0 (12B) | SpriteAnimEngine_7B0C_vfunc_0C (orig: func_080722D0) | origin: pure | domain: SpriteAnimEngine_7B0C | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_0803EE94_7B2C_vfunc_0C();
u32 SpriteAnimEngine_7B0C_vfunc_0C(void) {
  code_0803EE94_7B2C_vfunc_0C();
  return 1;
}

/* 0x08075328 (12B) | SpriteAnimEngine_7AFC_vfunc_0C (orig: func_08075328) | origin: pure | domain: SpriteAnimEngine_7AFC | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_0803EE94_7B2C_vfunc_0C();
u32 SpriteAnimEngine_7AFC_vfunc_0C(void) {
  code_0803EE94_7B2C_vfunc_0C();
  return 1;
}

/* 0x08075E50 (28B) | NpcBehavior_Sub_08075E50 (orig: func_08075E50) | origin: pure | domain: NpcBehavior | HEURISTIC / semantic_bank */
#define true 1
#define false 0
#define NULL ((void *)0)
void NpcBehavior_Sub_08075E50(int arg0,u32 arg1,u32 arg2,u32 arg3,
             u32 arg4,u32 arg5,u32 arg6) {
  *(u32 *)(arg0 + 0xc) = arg1;
  *(u32 *)(arg0 + 0x10) = arg2;
  *(u32 *)(arg0 + 0x14) = arg3;
  *(u32 *)(arg0 + 0x18) = arg4;
  *(u32 *)(arg0 + 0x1c) = arg5;
  *(u32 *)(arg0 + 0x20) = arg6;
}

/* 0x0807D0F4 (160B) | game_state_5DA4_AutoPtrFactory (orig: func_0807D0F4) | origin: wip | domain: game_state_5DA4 | HIGH / vtable_algebra */
u32 game_state_5DA4_AutoPtrFactory(u32 *self,int param_2) {
  int iVar1;
  u32 *puVar2;
  u32 *puVar3;
  u32 uVar4;
  u32 uVar5;
  iVar1 = SpriteAnimEngine_5B80_AutoPtrFactory_BEC8(*(u32 *)(param_2 + 4));
  if (iVar1 == -1) {
    uVar4 = *(u32 *)(param_2 + 8);
    *(u32 *)(param_2 + 8) = 0;
    *self = uVar4;
  }
  else {
    puVar2 = (u32 *)CppRuntime_builtin_new(0x10);
    uVar5 = *(u32 *)(param_2 + 8);
    *(u32 *)(param_2 + 8) = 0;
    uVar4 = *(u32 *)(param_2 + 0x10);
    *puVar2 = 0x080E5DA4;
    puVar2[1] = uVar5;
    puVar2[2] = uVar4;
    puVar2[3] = 1;
    puVar3 = (u32 *)CppRuntime_builtin_new(0x14);
    uVar4 = *(u32 *)(param_2 + 0x10);
    *puVar3 = 0x080E5C64;
    puVar3[1] = puVar2;
    puVar3[2] = uVar4;
    puVar3[3] = 3;
    *(char *)(puVar3 + 4) = (char)iVar1;
    *self = puVar3;
  }
  return self;
}

/* 0x0807F60C (48B) | NpcBehavior_Sub_0807F60C (orig: func_0807F60C) | origin: pure | domain: NpcBehavior | HEURISTIC / semantic_bank */
struct NV0 { int x; ~NV0() {} };
struct NV1 : public NV0 {};
template <class T>
struct AutoPtrNV {
    T *_M_ptr;
    explicit AutoPtrNV(T *p = 0) : _M_ptr(p) {}
    AutoPtrNV(AutoPtrNV &a);
    ~AutoPtrNV() { operator delete(_M_ptr); }
    struct Ref {
        void *s;
        T *p;
        Ref(void *s, T *p) : s(s), p(p) {}
    };
    template <class U>
    AutoPtrNV(AutoPtrNV<U> const &a) {
        Ref r((void *)&a, a._M_ptr);
        *(U **)r.s = 0;
        _M_ptr = r.p;
    }
};
struct In { int f0; int f4; };
extern "C" AutoPtrNV<NV1> code_0803EE94_SetField_0x00(int);
extern "C" AutoPtrNV<NV0> NpcBehavior_Sub_0807F60C(In *in) {
    return code_0803EE94_SetField_0x00(in->f4);
}

/* 0x080804E8 (16B) | FestivalMini_Sub_080804E8 (orig: func_080804E8) | origin: pure | domain: FestivalMini | HEURISTIC / semantic_bank */
#define true 1
#define false 0
#define NULL ((void *)0)
u32 FestivalMini_Sub_080804E8(u32 arg0,int arg1) {
  return ((u32)(arg1 < 3));
}

/* 0x080821A0 (48B) | FestivalMini_Sub_080821A0 (orig: func_080821A0) | origin: pure | domain: FestivalMini | HEURISTIC / semantic_bank */
struct NV0 { int x; ~NV0() {} };
struct NV1 : public NV0 {};
template <class T>
struct AutoPtrNV {
    T *_M_ptr;
    explicit AutoPtrNV(T *p = 0) : _M_ptr(p) {}
    AutoPtrNV(AutoPtrNV &a);
    ~AutoPtrNV() { operator delete(_M_ptr); }
    struct Ref {
        void *s;
        T *p;
        Ref(void *s, T *p) : s(s), p(p) {}
    };
    template <class U>
    AutoPtrNV(AutoPtrNV<U> const &a) {
        Ref r((void *)&a, a._M_ptr);
        *(U **)r.s = 0;
        _M_ptr = r.p;
    }
};
struct In { int f0; int f4; };
extern "C" AutoPtrNV<NV1> code_0803EE94_SetField_0x00_1B2C(int);
extern "C" AutoPtrNV<NV0> FestivalMini_Sub_080821A0(In *in) {
    return code_0803EE94_SetField_0x00_1B2C(in->f4);
}

/* 0x0809B104 (16B) | Actor_Ctor (orig: func_0809B104) | origin: pure | domain: Actor | EXACT / stanhash_elf */
/* Actor_Ctor @ 0x0809B104 mode=THUMB size=0x10 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Actor_Ctor @ 0x0809B104  mode=THUMB  size=0x10  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
void Actor_Ctor(undefined4 *self,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = param_2[1];
  *self = *param_2;
  self[1] = uVar1;
  return;
}

/* 0x0809B114 (16B) | Actor_Ctor_B114 (orig: func_0809B114) | origin: pure | domain: Actor | EXACT / stanhash_elf */
/* Actor_Ctor_B114 @ 0x0809B114 mode=THUMB size=0x10 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Actor_Ctor_B114 @ 0x0809B114  mode=THUMB  size=0x18  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
void Actor_Ctor_B114(undefined4 *self,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = param_2[1];
  *self = *param_2;
  self[1] = uVar1;
  return;
}

/* 0x0809BFE8 (120B) | Actor_Sub_0809BFE8 (orig: func_0809BFE8) | origin: pure | domain: Actor | MEDIUM / graph_algebra */
/* Actor_Sub_0809BFE8 @ 0x0809BFE8 mode=THUMB size=0x78 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Actor_Sub_0809BFE8 @ 0x0809BFE8  mode=THUMB  size=0x80  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Actor_Sub_0809BFE8(int param_1)

{
  ushort uVar1;
  undefined4 in_lr;
  undefined1 auStack_24 [6];
  undefined1 uStack_1e;
  ushort uStack_1c;
  ushort uStack_1a;
  ushort uStack_18;
  
  uVar1 = (ushort)_DAT_0809c05c;
  uStack_1c = uVar1 & uStack_1c & 0x3ff | 0x234;
  uStack_1a = uVar1 & uStack_1a & 0x3ff;
  uStack_18 = uVar1 & uStack_18;
  LibC_memcpy(auStack_24,&uStack_1c,6);
  uStack_1e = 0;
  Actor_Ctor(param_1,auStack_24);
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0x80 | 100;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return CONCAT44(in_lr,param_1);
}

/* 0x080A3CD8 (28B) | code_linkonce_82B8_Ctor (orig: func_080A3CD8) | origin: pure | domain: code_linkonce_82B8 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
u32 code_linkonce_82B8_Ctor(u32 *arg0,u32 *arg1,u32 arg2) {
  u32 val;
  *arg0 = 0x080E82B8;
  val = *arg1;
  *arg1 = 0;
  arg0[1] = val;
  arg0[2] = arg2;
  return;
}

/* 0x080A3E70 (32B) | Class_080E82C8_Ctor (orig: func_080A3E70) | origin: pure | domain: Class_080E82C8 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
u32 Class_080E82C8_Ctor(u32 *arg0,u32 *arg1,u32 arg2,u32 arg3,
                  u8 arg4) {
  u32 val;
  *arg0 = 0x080E82C8;
  val = *arg1;
  *arg1 = 0;
  arg0[1] = val;
  arg0[2] = arg2;
  arg0[3] = arg3;
  *(u8 *)(arg0 + 4) = arg4;
  return;
}

/* 0x080CD43C (152B) | DialogueText_Sub_080CD43C (orig: func_080CD43C) | origin: wip | domain: DialogueText | HEURISTIC / semantic_bank */
void DialogueText_Sub_080CD43C(s16 param_1) {
  code_0803EE94_7868_Sub_080CAE60();
  SpriteAnimEngine_5A28_SetField_0x00((param_1 + (0xa0 << 2)));
}

/* 0x080CDDAC (40B) | DialogueText_Sub_080CDDAC (orig: func_080CDDAC) | origin: pure | domain: DialogueText | HEURISTIC / semantic_bank */
#define true 1
#define false 0
#define NULL ((void *)0)
void DialogueText_Sub_080CDDAC(int *arg0,int arg1) {
  arg0[3] = *(int *)(*(int *)(*arg0 + 0x78) + 0x298);
  arg0[4] = *(int *)(*(int *)(*arg0 + 0x7c) + 0x298) + 9;
  arg0[2] = arg0[1];
  arg0[1] = arg1;
}

/* 0x080D102C (196B) | System_UnpackData (orig: func_080D102C) | origin: wip | domain: System | EXACT / runtime_bios */
u32 System_UnpackData(u32 *param_1,int param_2) {
  int iVar1;
  u32 extraout_r1;
  u32 uVar2;
  u32 *puVar3;
  u32 *puVar5;
  u32 auStack_2c [2];
  u32 uStack_4;
  u32 *puVar4;
  iVar1 = 0xFFFFFBE0;
  puVar3 = (u32 *)(0 + 0xFFFFFBE0);
  puVar4 = (u32 *)(0 + 0xFFFFFBE0);
  puVar5 = (u32 *)((int)auStack_2c + 0xFFFFFBE0 + 4);
  *puVar5 = *param_1 >> 8;
  code_809E804_Sub_080D11A4(param_1 + 1,param_2 + -2,0,0);
  *puVar3 = 8;
  code_809E804_Sub_080D10F0();
  *(u32 *)((int)auStack_2c + iVar1) = extraout_r1;
  code_809E804_Sub_080D1224();
  uVar2 = (*puVar4 & 0xff) >> 5;
  if (uVar2 == 1) {
    code_809E804_Sub_080D1518(*(u32 *)((int)auStack_2c + iVar1));
  }
  else if (uVar2 == 2) {
    code_809E804_Sub_080D1548();
  }
  else if (uVar2 == 3) {
    code_809E804_SetField_0x02();
  }
  else if (uVar2 == 4) {
    code_809E804_Sub_080D1574();
  }
  return (*puVar5);
}

/* 0x080D3BE8 (60B) | intro_scene_59FC_vfunc_0C (orig: func_080D3BE8) | origin: wip | domain: intro_scene_59FC | HIGH / vtable_algebra */
u32 intro_scene_59FC_vfunc_0C(u32 *self) {
  u32 uVar1;
  CppRuntime_builtin_new(4);
  uVar1 = new_game_Ctor_4C48();
  *self = uVar1;
  return self;
}

/* 0x080D3C24 (60B) | intro_scene_59EC_vfunc_0C (orig: func_080D3C24) | origin: wip | domain: intro_scene_59EC | HIGH / vtable_algebra */
u32 intro_scene_59EC_vfunc_0C(u32 *self) {
  u32 uVar1;
  u32 _sp_pad[3];
  (void)_sp_pad;
  CppRuntime_builtin_new(8);
  uVar1 = new_game_Create();
  *self = uVar1;
  return self;
}

/* 0x080D3C60 (12B) | intro_scene_59EC_vfunc_08 (orig: func_080D3C60) | origin: pure | domain: intro_scene_59EC | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 scene_Dtor_080C();
void intro_scene_59EC_vfunc_08(void) {
  scene_Dtor_080C();
}

/* 0x080D3C6C (12B) | intro_scene_59FC_vfunc_08 (orig: func_080D3C6C) | origin: pure | domain: intro_scene_59FC | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 scene_Dtor_080C();
void intro_scene_59FC_vfunc_08(void) {
  scene_Dtor_080C();
}

/* 0x080D4004 (60B) | new_game_5A3C_vfunc_0C (orig: func_080D4004) | origin: wip | domain: new_game_5A3C | HIGH / vtable_algebra */
u32 new_game_5A3C_vfunc_0C(u32 *self) {
  u32 uVar1;
  u32 _sp_pad[3];
  (void)_sp_pad;
  CppRuntime_builtin_new(8);
  uVar1 = intro_scene_Create();
  *self = uVar1;
  return self;
}

/* 0x080D4040 (12B) | new_game_5A3C_vfunc_08 (orig: func_080D4040) | origin: pure | domain: new_game_5A3C | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 scene_Dtor_080C();
void new_game_5A3C_vfunc_08(void) {
  scene_Dtor_080C();
}

/* 0x080D404C (32B) | new_game_5A4C_vfunc_08 (orig: func_080D404C) | origin: pure | domain: new_game_5A4C | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 scene_Dtor_080C();
extern u32 new_game_Sub_080D4480();
void new_game_5A4C_vfunc_08(int arg0,u32 arg1) {
  if (*(int *)(arg0 + 4) != 0) {
    new_game_Sub_080D4480(*(int *)(arg0 + 4),3);
  }
  scene_Dtor_080C(arg0,arg1);
}

/* 0x080D6D8C (12B) | new_game_5A78_vfunc_08 (orig: func_080D6D8C) | origin: pure | domain: new_game_5A78 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 scene_Dtor_080C();
void new_game_5A78_vfunc_08(void) {
  scene_Dtor_080C();
}

/* 0x080D780C (16B) | hardware_5AF0_vfunc_08 (orig: func_080D780C) | origin: pure | domain: hardware_5AF0 | HIGH / vtable_algebra */
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
extern u32 hardware_HW_BLDY();
u32 hardware_5AF0_vfunc_08(int arg0) {
  u32 val;
  val = hardware_HW_BLDY(*(u32 *)(arg0 + 0xc));
  return 0;
}

/* 0x080D781C (16B) | hardware_5AE0_vfunc_08 (orig: func_080D781C) | origin: pure | domain: hardware_5AE0 | HIGH / vtable_algebra */
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
extern u32 hardware_Sub_08009864();
u32 hardware_5AE0_vfunc_08(int arg0) {
  u32 val;
  val = hardware_Sub_08009864(*(u32 *)(arg0 + 0xc));
  return 0;
}

/* 0x080D7868 (12B) | hardware_5AD0_vfunc_0C (orig: func_080D7868) | origin: pure | domain: hardware_5AD0 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 hardware_Dtor_98AC();
void hardware_5AD0_vfunc_0C(void) {
  hardware_Dtor_98AC();
}

/* 0x080D7874 (12B) | hardware_5AE0_vfunc_0C (orig: func_080D7874) | origin: pure | domain: hardware_5AE0 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 hardware_Dtor_98AC();
void hardware_5AE0_vfunc_0C(void) {
  hardware_Dtor_98AC();
}

/* 0x080D7880 (12B) | hardware_5AF0_vfunc_0C (orig: func_080D7880) | origin: pure | domain: hardware_5AF0 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 hardware_Dtor_98AC();
void hardware_5AF0_vfunc_0C(void) {
  hardware_Dtor_98AC();
}

/* 0x080D78BC (36B) | hardware_5B90_Ctor (orig: func_080D78BC) | origin: pure | domain: hardware_5B90 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 hardware_vfunc_18();
extern u32 hardware_Ctor_98DC();
void hardware_5B90_Ctor(int arg0,u32 arg1) {
  *(u32 *)(arg0 + 8) = 0x080E5B90;
  hardware_vfunc_18(arg0);
  hardware_Ctor_98DC(arg0,arg1);
}

/* 0x080D78F8 (76B) | code_linkonce_5B3C_Ctor (orig: func_080D78F8) | origin: wip | domain: code_linkonce_5B3C | HIGH / vtable_algebra */
u32 code_linkonce_5B3C_Ctor(u32 *self,u32 *param_2) {
  BOOL uVar1;
  u32 uVar2;
  int iVar3;
  self[5] = 0x080E5B3C;
  *self = *param_2;
  uVar1 = interrupt_Sub_08000528(1);
  *(u16 *)(self + 1) = uVar1 & 1;
  iVar3 = *(int *)0x03000410;
  *(s32 *)0x03000410 = (int)self;
  self[2] = iVar3;
  self[3] = 0x080E5B48;
  self[4] = uVar2;
  uVar2 = code_809E804_Sub_080D100C(0,0x080D78E1);
  interrupt_HW_IF(1);
  return self;
}

/* 0x080D79CC (44B) | hardware_5B0C_Ctor (orig: func_080D79CC) | origin: wip | domain: hardware_5B0C | HIGH / vtable_algebra */
void hardware_5B0C_Ctor(int self) {
  *(u32 *)((self - 0x1c) + 0x30) = 0x080E5B0C;
  *(u32 *)((self - 0x1c) + 8) = 0x080E5B18;
  code_linkonce_5B3C_Dtor(self, 0);
  hardware_Ctor_959C((self - 0x1c));
}

/* 0x080D7AAC (40B) | code_linkonce_5B54_Dtor (orig: func_080D7AAC) | origin: pure | domain: code_linkonce_5B54 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 CppRuntime_builtin_delete();
/* paridad 95.6% preset agbcc_O2 */
void code_linkonce_5B54_Dtor(u32 *arg0,u32 arg1) {
  arg0[1] = 0x080E5B54;
  *(int *)0x03000410 = *arg0;
  if ((arg1 & 1) != 0) {
    CppRuntime_builtin_delete(arg0);
  }
}

/* 0x080D7AD4 (48B) | hardware_5B0C_Ctor_7AD4 (orig: func_080D7AD4) | origin: wip | domain: hardware_5B0C | HIGH / vtable_algebra */
void hardware_5B0C_Ctor_7AD4(s16 self) {
  register u32 reg_callee_save;
  *(u32 *)(self + 0x30) = 0x080E5B0C;
  code_linkonce_5B3C_Dtor((self + 0x1c), 0);
  *(u32 *)(self + 8) = 0x080E5B18;
  hardware_Ctor_959C(reg_callee_save);
  reg_callee_save = self;
  (void)reg_callee_save;
}

/* 0x080D7B04 (40B) | code_linkonce_5B54_Dtor_7B04 (orig: func_080D7B04) | origin: pure | domain: code_linkonce_5B54 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 CppRuntime_builtin_delete();
/* paridad 95.6% preset agbcc_O2 */
void code_linkonce_5B54_Dtor_7B04(u32 *arg0,u32 arg1) {
  arg0[1] = 0x080E5B54;
  *(u32 *)0x03000410 = *arg0;
  if ((arg1 & 1) != 0) {
    CppRuntime_builtin_delete(arg0);
  }
}

/* 0x080D7B2C (12B) | SpriteAnimEngine_5B60_vfunc_0C (orig: func_080D7B2C) | origin: pure | domain: SpriteAnimEngine_5B60 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 hardware_Dtor_98AC();
void SpriteAnimEngine_5B60_vfunc_0C(void) {
  hardware_Dtor_98AC();
}

/* 0x080D7B38 (12B) | SpriteAnimEngine_5B70_vfunc_0C (orig: func_080D7B38) | origin: pure | domain: SpriteAnimEngine_5B70 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 hardware_Dtor_98AC();
void SpriteAnimEngine_5B70_vfunc_0C(void) {
  hardware_Dtor_98AC();
}

/* 0x080D7B44 (12B) | hardware_5BD8_vfunc_0C (orig: func_080D7B44) | origin: pure | domain: hardware_5BD8 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 hardware_Dtor_98AC();
void hardware_5BD8_vfunc_0C(void) {
  hardware_Dtor_98AC();
}

/* 0x080D7E64 (104B) | game_scene_Sub_080D7E64 (orig: func_080D7E64) | origin: wip | domain: game_scene | MEDIUM / graph_algebra */
void game_scene_Sub_080D7E64(int *param_1,u32 param_2) {
  int *piVar1;
  int *piVar2;
  for (piVar1 = param_1 + 0x57; piVar1 != param_1 + 0x56 + param_1[0x56] * 2 + 1;
      piVar1 = piVar1 + 2) {
  }
  piVar2 = param_1 + 1;
  for (piVar1 = param_1 + 6; piVar1 != param_1 + param_1[5] * 2 + 6; piVar1 = piVar1 + 2) {
  }
  for (; piVar2 != param_1 + *param_1 * 2 + 1; piVar2 = piVar2 + 2) {
  }
  if ((param_2 & 1) != 0) {
    CppRuntime_builtin_delete(param_1);
  }
}

/* 0x080DB0EC (248B) | game_state_5C08_Dtor (orig: func_080DB0EC) | origin: pure | domain: game_state_5C08 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 CppRuntime_builtin_delete();
extern u32 hardware_Dtor_8A68();
extern u32 hardware_Sub_08009324();
extern u32 hardware_Ctor_98DC();
extern u32 SpriteAnimEngine_5A28_Wrap_Dtor_0D0C();
extern u32 LibC_free();
extern u32 func_080D3914();
/* paridad 96.2% preset agbcc_O2 */
void game_state_5C08_Dtor(int *arg0,u32 arg1) {
  int val;
  int *mem_ptr;
  arg0[0x3d] = 0x080E5C08;
  CppRuntime_builtin_delete(arg0[0x3c]);
  if (arg0[0x34] != 0) {
    LibC_free();
  }
  val = arg0[0x2e];
  if (val != 0) {
    func_080D3914(val,3,*(u32 *)(*(int *)(val + 4) + 8));
  }
  val = arg0[0x2d];
  if (val != 0) {
    func_080D3914(val,3,*(u32 *)(*(int *)(val + 4) + 8));
  }
  mem_ptr = (int *)arg0[0x2c];
  if (mem_ptr != (int *)0x0) {
    func_080D3914(mem_ptr,3,*(u32 *)(*mem_ptr + 8));
  }
  if (arg0[0x2b] != 0) {
    SpriteAnimEngine_5A28_Wrap_Dtor_0D0C(arg0[0x2b],3);
  }
  mem_ptr = (int *)arg0[0x2a];
  if (mem_ptr != (int *)0x0) {
    func_080D3914(mem_ptr,3,*(u32 *)(*mem_ptr + 8));
  }
  mem_ptr = (int *)arg0[0x29];
  if (mem_ptr != (int *)0x0) {
    func_080D3914(mem_ptr,3,*(u32 *)(*mem_ptr + 8));
  }
  if (arg0[0x28] != 0) {
    hardware_Sub_08009324(arg0[0x28],3);
  }
  hardware_Ctor_98DC(arg0 + 0x1b,2);
  hardware_Dtor_8A68(arg0 + 0x1a,2);
  
  {
    u32 *cur;
    u32 *end = (u32 *)arg0[1];
    for (cur = (u32 *)*arg0; cur != end; cur = (u32 *)((int)cur + 0x10)) {
    }
  }

  if (*arg0 != 0) {
    LibC_free();
  }
  if ((arg1 & 1) != 0) {
    CppRuntime_builtin_delete(arg0);
  }
}

/* 0x080DB1E4 (84B) | game_state_5C14_vfunc_0C (orig: func_080DB1E4) | origin: wip | domain: game_state_5C14 | HIGH / vtable_algebra */
u32 game_state_5C14_vfunc_0C(u32 *self,int param_2) {
  int iVar1;
  u32 uVar2;
  u32 auStack_20 [3];
  iVar1 = *(int *)(param_2 + 0xc);
  auStack_20[0] = *(u32 *)(param_2 + 8);
  *(u32 *)(param_2 + 8) = 0;
  uVar2 = CppRuntime_builtin_new(8);
  uVar2 = code_0803EE94_7BC0_AutoPtrFactory(uVar2,*(u32 *)(param_2 + 4),auStack_20,iVar1 == 2);
  *self = uVar2;
  return self;
}

/* 0x080DB2EC (40B) | game_state_5C14_vfunc_08 (orig: func_080DB2EC) | origin: pure | domain: game_state_5C14 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 scene_Dtor_080C();
extern u32 func_080D3914();
void game_state_5C14_vfunc_08(int arg0,u32 arg1) {
  int *mem_ptr;
  mem_ptr = *(int **)(arg0 + 8);
  if (mem_ptr != (int *)0x0) {
    func_080D3914(mem_ptr,3,*(u32 *)(*mem_ptr + 8));
  }
  scene_Dtor_080C(arg0,arg1);
}

/* 0x080DB314 (12B) | game_state_5C24_vfunc_08 (orig: func_080DB314) | origin: pure | domain: game_state_5C24 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 scene_Dtor_080C();
void game_state_5C24_vfunc_08(void) {
  scene_Dtor_080C();
}

/* 0x080DB36C (40B) | game_state_5C34_vfunc_08 (orig: func_080DB36C) | origin: pure | domain: game_state_5C34 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 scene_Dtor_080C();
extern u32 func_080D3914();
void game_state_5C34_vfunc_08(int arg0,u32 arg1) {
  int *mem_ptr;
  mem_ptr = *(int **)(arg0 + 4);
  if (mem_ptr != (int *)0x0) {
    func_080D3914(mem_ptr,3,*(u32 *)(*mem_ptr + 8));
  }
  scene_Dtor_080C(arg0,arg1);
}

/* 0x080DB394 (72B) | game_state_5C44_vfunc_0C (orig: func_080DB394) | origin: wip | domain: game_state_5C44 | HIGH / vtable_algebra */
u32 game_state_5C44_vfunc_0C(u32 *self,int param_2) {
  u32 uVar1;
  u32 auStack_1c [3];
  auStack_1c[0] = *(u32 *)(param_2 + 4);
  *(u32 *)(param_2 + 4) = 0;
  uVar1 = CppRuntime_builtin_new(0xc);
  uVar1 = code_0803EE94_79F8_Create(uVar1,auStack_1c,*(u32 *)(param_2 + 8));
  *self = uVar1;
  return self;
}

/* 0x080DB3DC (40B) | game_state_5C44_vfunc_08 (orig: func_080DB3DC) | origin: pure | domain: game_state_5C44 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 scene_Dtor_080C();
extern u32 func_080D3914();
void game_state_5C44_vfunc_08(int arg0,u32 arg1) {
  int *mem_ptr;
  mem_ptr = *(int **)(arg0 + 4);
  if (mem_ptr != (int *)0x0) {
    func_080D3914(mem_ptr,3,*(u32 *)(*mem_ptr + 8));
  }
  scene_Dtor_080C(arg0,arg1);
}

/* 0x080DB404 (72B) | game_state_5C54_vfunc_0C (orig: func_080DB404) | origin: wip | domain: game_state_5C54 | HIGH / vtable_algebra */
u32 game_state_5C54_vfunc_0C(u32 *self,int param_2) {
  u32 uVar1;
  u32 auStack_1c [3];
  auStack_1c[0] = *(u32 *)(param_2 + 4);
  *(u32 *)(param_2 + 4) = 0;
  uVar1 = CppRuntime_builtin_new(8);
  uVar1 = code_0803EE94_7AB4_AutoPtrFactory(uVar1,auStack_1c,*(u32 *)(param_2 + 8),*(u32 *)(param_2 + 0xc)
                       );
  *self = uVar1;
  return self;
}

/* 0x080DB44C (40B) | game_state_5C54_vfunc_08 (orig: func_080DB44C) | origin: pure | domain: game_state_5C54 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 scene_Dtor_080C();
extern u32 func_080D3914();
void game_state_5C54_vfunc_08(int arg0,u32 arg1) {
  int *mem_ptr;
  mem_ptr = *(int **)(arg0 + 4);
  if (mem_ptr != (int *)0x0) {
    func_080D3914(mem_ptr,3,*(u32 *)(*mem_ptr + 8));
  }
  scene_Dtor_080C(arg0,arg1);
}

/* 0x080DB474 (84B) | Class_080E82C8_AutoPtrFactory (orig: func_080DB474) | origin: pure | domain: Class_080E82C8 | HIGH / vtable_algebra */
class V0 { public: virtual ~V0(); };
class V1 : public V0 {};
template <class T>
struct AutoPtr {
    T *_M_ptr;
    explicit AutoPtr(T *p = 0) : _M_ptr(p) {}
    AutoPtr(AutoPtr &a) : _M_ptr(a.release()) {}
    ~AutoPtr() { delete _M_ptr; }
    T *release() {
        T *tmp = _M_ptr;
        _M_ptr = 0;
        return tmp;
    }
    struct Ref {
        void *s;
        T *p;
        Ref(void *s, T *p) : s(s), p(p) {}
    };
    template <class U>
    AutoPtr(AutoPtr<U> const &a) {
        Ref r((void *)&a, a._M_ptr);
        *(U **)r.s = 0;
        _M_ptr = r.p;
    }
};
struct C_080E82C8 : public V0 {
    AutoPtr<V0> f4;
    int f8;
    int fc;
    u8 f10;
    C_080E82C8(AutoPtr<V0> a, int b, int c, u8 d) : f4(a), f8(b), fc(c), f10(d) {}
};
struct In { int vtbl; AutoPtr<V0> f4; int f8; int fc; u8 f10; };
extern "C" AutoPtr<V0> Class_080E82C8_AutoPtrFactory(In *in) {
    return AutoPtr<C_080E82C8>(new C_080E82C8(in->f4, in->f8, in->fc, in->f10));
}

/* 0x080DB4C8 (40B) | game_state_5C64_vfunc_08 (orig: func_080DB4C8) | origin: pure | domain: game_state_5C64 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 scene_Dtor_080C();
extern u32 func_080D3914();
void game_state_5C64_vfunc_08(int arg0,u32 arg1) {
  int *mem_ptr;
  mem_ptr = *(int **)(arg0 + 4);
  if (mem_ptr != (int *)0x0) {
    func_080D3914(mem_ptr,3,*(u32 *)(*mem_ptr + 8));
  }
  scene_Dtor_080C(arg0,arg1);
}

/* 0x080DB540 (40B) | game_state_5C74_vfunc_08 (orig: func_080DB540) | origin: pure | domain: game_state_5C74 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 scene_Dtor_080C();
extern u32 func_080D3914();
void game_state_5C74_vfunc_08(int arg0,u32 arg1) {
  int *mem_ptr;
  mem_ptr = *(int **)(arg0 + 4);
  if (mem_ptr != (int *)0x0) {
    func_080D3914(mem_ptr,3,*(u32 *)(*mem_ptr + 8));
  }
  scene_Dtor_080C(arg0,arg1);
}

/* 0x080DB5B8 (40B) | game_state_5C84_vfunc_08 (orig: func_080DB5B8) | origin: pure | domain: game_state_5C84 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 scene_Dtor_080C();
extern u32 func_080D3914();
void game_state_5C84_vfunc_08(int arg0,u32 arg1) {
  int *mem_ptr;
  mem_ptr = *(int **)(arg0 + 4);
  if (mem_ptr != (int *)0x0) {
    func_080D3914(mem_ptr,3,*(u32 *)(*mem_ptr + 8));
  }
  scene_Dtor_080C(arg0,arg1);
}

/* 0x080DB630 (40B) | game_state_5C94_vfunc_08 (orig: func_080DB630) | origin: pure | domain: game_state_5C94 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 scene_Dtor_080C();
extern u32 func_080D3914();
void game_state_5C94_vfunc_08(int arg0,u32 arg1) {
  int *mem_ptr;
  mem_ptr = *(int **)(arg0 + 4);
  if (mem_ptr != (int *)0x0) {
    func_080D3914(mem_ptr,3,*(u32 *)(*mem_ptr + 8));
  }
  scene_Dtor_080C(arg0,arg1);
}

/* 0x080DB658 (76B) | code_linkonce_82B8_AutoPtrFactory (orig: func_080DB658) | origin: pure | domain: code_linkonce_82B8 | HIGH / vtable_algebra */
class V0 { public: virtual ~V0(); };
class V1 : public V0 {};
template <class T>
struct AutoPtr {
    T *_M_ptr;
    explicit AutoPtr(T *p = 0) : _M_ptr(p) {}
    AutoPtr(AutoPtr &a) : _M_ptr(a.release()) {}
    ~AutoPtr() { delete _M_ptr; }
    T *release() {
        T *tmp = _M_ptr;
        _M_ptr = 0;
        return tmp;
    }
    struct Ref {
        void *s;
        T *p;
        Ref(void *s, T *p) : s(s), p(p) {}
    };
    template <class U>
    AutoPtr(AutoPtr<U> const &a) {
        Ref r((void *)&a, a._M_ptr);
        *(U **)r.s = 0;
        _M_ptr = r.p;
    }
};
struct C_080E82B8 : public V0 {
    AutoPtr<V0> f4;
    int f8;
    C_080E82B8(AutoPtr<V0> a, int b) : f4(a), f8(b) {}
};
struct In { int vtbl; AutoPtr<V0> f4; int f8; };
extern "C" AutoPtr<V0> code_linkonce_82B8_AutoPtrFactory(In *in) {
    return AutoPtr<C_080E82B8>(new C_080E82B8(in->f4, in->f8));
}

/* 0x080DB6A4 (40B) | game_state_5CA4_vfunc_08 (orig: func_080DB6A4) | origin: pure | domain: game_state_5CA4 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 scene_Dtor_080C();
extern u32 func_080D3914();
void game_state_5CA4_vfunc_08(int arg0,u32 arg1) {
  int *mem_ptr;
  mem_ptr = *(int **)(arg0 + 4);
  if (mem_ptr != (int *)0x0) {
    func_080D3914(mem_ptr,3,*(u32 *)(*mem_ptr + 8));
  }
  scene_Dtor_080C(arg0,arg1);
}

/* 0x080DB6CC (72B) | game_state_5CB4_vfunc_0C (orig: func_080DB6CC) | origin: wip | domain: game_state_5CB4 | HIGH / vtable_algebra */
u32 game_state_5CB4_vfunc_0C(u32 *self,int param_2) {
  u32 uVar1;
  u32 auStack_1c [3];
  auStack_1c[0] = *(u32 *)(param_2 + 4);
  *(u32 *)(param_2 + 4) = 0;
  uVar1 = CppRuntime_builtin_new(0xc);
  uVar1 = code_809E804_8278_Create(uVar1,auStack_1c,*(u32 *)(param_2 + 8));
  *self = uVar1;
  return self;
}

/* 0x080DB714 (40B) | game_state_5CB4_vfunc_08 (orig: func_080DB714) | origin: pure | domain: game_state_5CB4 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 scene_Dtor_080C();
extern u32 func_080D3914();
void game_state_5CB4_vfunc_08(int arg0,u32 arg1) {
  int *mem_ptr;
  mem_ptr = *(int **)(arg0 + 4);
  if (mem_ptr != (int *)0x0) {
    func_080D3914(mem_ptr,3,*(u32 *)(*mem_ptr + 8));
  }
  scene_Dtor_080C(arg0,arg1);
}

/* 0x080DB73C (72B) | game_state_5CC4_vfunc_0C (orig: func_080DB73C) | origin: wip | domain: game_state_5CC4 | HIGH / vtable_algebra */
u32 game_state_5CC4_vfunc_0C(u32 *self,int param_2) {
  u32 uVar1;
  u32 auStack_1c [3];
  auStack_1c[0] = *(u32 *)(param_2 + 4);
  *(u32 *)(param_2 + 4) = 0;
  uVar1 = CppRuntime_builtin_new(0xc);
  uVar1 = code_0803EE94_7D58_Create(uVar1,auStack_1c,*(u32 *)(param_2 + 8));
  *self = uVar1;
  return self;
}

/* 0x080DB784 (40B) | game_state_5CC4_vfunc_08 (orig: func_080DB784) | origin: pure | domain: game_state_5CC4 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 scene_Dtor_080C();
extern u32 func_080D3914();
void game_state_5CC4_vfunc_08(int arg0,u32 arg1) {
  int *mem_ptr;
  mem_ptr = *(int **)(arg0 + 4);
  if (mem_ptr != (int *)0x0) {
    func_080D3914(mem_ptr,3,*(u32 *)(*mem_ptr + 8));
  }
  scene_Dtor_080C(arg0,arg1);
}

/* 0x080DB7AC (72B) | game_state_5CD4_vfunc_0C (orig: func_080DB7AC) | origin: wip | domain: game_state_5CD4 | HIGH / vtable_algebra */
u32 game_state_5CD4_vfunc_0C(u32 *self,int param_2) {
  u32 uVar1;
  u32 auStack_1c [3];
  auStack_1c[0] = *(u32 *)(param_2 + 4);
  *(u32 *)(param_2 + 4) = 0;
  uVar1 = CppRuntime_builtin_new(0xc);
  uVar1 = code_0803EE94_7D90_Create(uVar1,auStack_1c,*(u32 *)(param_2 + 8));
  *self = uVar1;
  return self;
}

/* 0x080DB7F4 (40B) | game_state_5CD4_vfunc_08 (orig: func_080DB7F4) | origin: pure | domain: game_state_5CD4 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 scene_Dtor_080C();
extern u32 func_080D3914();
void game_state_5CD4_vfunc_08(int arg0,u32 arg1) {
  int *mem_ptr;
  mem_ptr = *(int **)(arg0 + 4);
  if (mem_ptr != (int *)0x0) {
    func_080D3914(mem_ptr,3,*(u32 *)(*mem_ptr + 8));
  }
  scene_Dtor_080C(arg0,arg1);
}

/* 0x080DB81C (72B) | game_state_5CE4_vfunc_0C (orig: func_080DB81C) | origin: wip | domain: game_state_5CE4 | HIGH / vtable_algebra */
u32 game_state_5CE4_vfunc_0C(u32 *self,int param_2) {
  u32 uVar1;
  u32 auStack_1c [3];
  auStack_1c[0] = *(u32 *)(param_2 + 4);
  *(u32 *)(param_2 + 4) = 0;
  uVar1 = CppRuntime_builtin_new(0xc);
  uVar1 = code_0803EE94_7DAC_Create(uVar1,auStack_1c,*(u32 *)(param_2 + 8));
  *self = uVar1;
  return self;
}

/* 0x080DB864 (40B) | game_state_5CE4_vfunc_08 (orig: func_080DB864) | origin: pure | domain: game_state_5CE4 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 scene_Dtor_080C();
extern u32 func_080D3914();
void game_state_5CE4_vfunc_08(int arg0,u32 arg1) {
  int *mem_ptr;
  mem_ptr = *(int **)(arg0 + 4);
  if (mem_ptr != (int *)0x0) {
    func_080D3914(mem_ptr,3,*(u32 *)(*mem_ptr + 8));
  }
  scene_Dtor_080C(arg0,arg1);
}

/* 0x080DB88C (72B) | game_state_5CF4_vfunc_0C (orig: func_080DB88C) | origin: wip | domain: game_state_5CF4 | HIGH / vtable_algebra */
u32 game_state_5CF4_vfunc_0C(u32 *self,int param_2) {
  u32 uVar1;
  u32 auStack_1c [3];
  auStack_1c[0] = *(u32 *)(param_2 + 4);
  *(u32 *)(param_2 + 4) = 0;
  uVar1 = CppRuntime_builtin_new(0xc);
  uVar1 = code_0803EE94_7D74_Create(uVar1,auStack_1c,*(u32 *)(param_2 + 8));
  *self = uVar1;
  return self;
}

/* 0x080DB8D4 (40B) | game_state_5CF4_vfunc_08 (orig: func_080DB8D4) | origin: pure | domain: game_state_5CF4 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 scene_Dtor_080C();
extern u32 func_080D3914();
void game_state_5CF4_vfunc_08(int arg0,u32 arg1) {
  int *mem_ptr;
  mem_ptr = *(int **)(arg0 + 4);
  if (mem_ptr != (int *)0x0) {
    func_080D3914(mem_ptr,3,*(u32 *)(*mem_ptr + 8));
  }
  scene_Dtor_080C(arg0,arg1);
}

/* 0x080DB8FC (72B) | game_state_5D04_vfunc_0C (orig: func_080DB8FC) | origin: wip | domain: game_state_5D04 | HIGH / vtable_algebra */
u32 game_state_5D04_vfunc_0C(u32 *self,int param_2) {
  u32 uVar1;
  u32 auStack_1c [3];
  auStack_1c[0] = *(u32 *)(param_2 + 4);
  *(u32 *)(param_2 + 4) = 0;
  uVar1 = CppRuntime_builtin_new(0xc);
  uVar1 = code_0803EE94_7934_Create(uVar1,auStack_1c,*(u32 *)(param_2 + 8));
  *self = uVar1;
  return self;
}

/* 0x080DB944 (40B) | game_state_5D04_vfunc_08 (orig: func_080DB944) | origin: pure | domain: game_state_5D04 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 scene_Dtor_080C();
extern u32 func_080D3914();
void game_state_5D04_vfunc_08(int arg0,u32 arg1) {
  int *mem_ptr;
  mem_ptr = *(int **)(arg0 + 4);
  if (mem_ptr != (int *)0x0) {
    func_080D3914(mem_ptr,3,*(u32 *)(*mem_ptr + 8));
  }
  scene_Dtor_080C(arg0,arg1);
}

/* 0x080DB96C (72B) | game_state_5D14_vfunc_0C (orig: func_080DB96C) | origin: wip | domain: game_state_5D14 | HIGH / vtable_algebra */
u32 game_state_5D14_vfunc_0C(u32 *self,int param_2) {
  u32 uVar1;
  u32 auStack_1c [3];
  auStack_1c[0] = *(u32 *)(param_2 + 4);
  *(u32 *)(param_2 + 4) = 0;
  uVar1 = CppRuntime_builtin_new(0xc);
  uVar1 = code_0803EE94_7960_Create(uVar1,auStack_1c,*(u32 *)(param_2 + 8),*(u8 *)(param_2 + 0xc)
                       );
  *self = uVar1;
  return self;
}

/* 0x080DB9B4 (40B) | game_state_5D14_vfunc_08 (orig: func_080DB9B4) | origin: pure | domain: game_state_5D14 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 scene_Dtor_080C();
extern u32 func_080D3914();
void game_state_5D14_vfunc_08(int arg0,u32 arg1) {
  int *mem_ptr;
  mem_ptr = *(int **)(arg0 + 4);
  if (mem_ptr != (int *)0x0) {
    func_080D3914(mem_ptr,3,*(u32 *)(*mem_ptr + 8));
  }
  scene_Dtor_080C(arg0,arg1);
}

/* 0x080DB9DC (72B) | game_state_5D24_vfunc_0C (orig: func_080DB9DC) | origin: wip | domain: game_state_5D24 | HIGH / vtable_algebra */
u32 game_state_5D24_vfunc_0C(u32 *self,int param_2) {
  u32 uVar1;
  u32 auStack_1c [3];
  auStack_1c[0] = *(u32 *)(param_2 + 4);
  *(u32 *)(param_2 + 4) = 0;
  uVar1 = CppRuntime_builtin_new(0xc);
  uVar1 = code_0803EE94_79B8_Create(uVar1,auStack_1c,*(u32 *)(param_2 + 8));
  *self = uVar1;
  return self;
}

/* 0x080DBA24 (40B) | game_state_5D24_vfunc_08 (orig: func_080DBA24) | origin: pure | domain: game_state_5D24 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 scene_Dtor_080C();
extern u32 func_080D3914();
void game_state_5D24_vfunc_08(int arg0,u32 arg1) {
  int *mem_ptr;
  mem_ptr = *(int **)(arg0 + 4);
  if (mem_ptr != (int *)0x0) {
    func_080D3914(mem_ptr,3,*(u32 *)(*mem_ptr + 8));
  }
  scene_Dtor_080C(arg0,arg1);
}

/* 0x080DBA4C (72B) | game_state_5D34_vfunc_0C (orig: func_080DBA4C) | origin: wip | domain: game_state_5D34 | HIGH / vtable_algebra */
u32 game_state_5D34_vfunc_0C(u32 *self,int param_2) {
  u32 uVar1;
  u32 auStack_1c [3];
  auStack_1c[0] = *(u32 *)(param_2 + 4);
  *(u32 *)(param_2 + 4) = 0;
  uVar1 = CppRuntime_builtin_new(0xc);
  uVar1 = code_0803EE94_798C_Create(uVar1,auStack_1c,*(u32 *)(param_2 + 8),*(u8 *)(param_2 + 0xc)
                       );
  *self = uVar1;
  return self;
}

/* 0x080DBA94 (40B) | game_state_5D34_vfunc_08 (orig: func_080DBA94) | origin: pure | domain: game_state_5D34 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 scene_Dtor_080C();
extern u32 func_080D3914();
void game_state_5D34_vfunc_08(int arg0,u32 arg1) {
  int *mem_ptr;
  mem_ptr = *(int **)(arg0 + 4);
  if (mem_ptr != (int *)0x0) {
    func_080D3914(mem_ptr,3,*(u32 *)(*mem_ptr + 8));
  }
  scene_Dtor_080C(arg0,arg1);
}

/* 0x080DBABC (72B) | game_state_5D44_vfunc_0C (orig: func_080DBABC) | origin: wip | domain: game_state_5D44 | HIGH / vtable_algebra */
u32 game_state_5D44_vfunc_0C(u32 *self,int param_2) {
  u32 uVar1;
  u32 auStack_1c [3];
  auStack_1c[0] = *(u32 *)(param_2 + 4);
  *(u32 *)(param_2 + 4) = 0;
  uVar1 = CppRuntime_builtin_new(0xc);
  uVar1 = code_0803EE94_824C_Create(uVar1,auStack_1c,*(u32 *)(param_2 + 8),*(u8 *)(param_2 + 0xc)
                       );
  *self = uVar1;
  return self;
}

/* 0x080DBB04 (40B) | game_state_5D44_vfunc_08 (orig: func_080DBB04) | origin: pure | domain: game_state_5D44 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 scene_Dtor_080C();
extern u32 func_080D3914();
void game_state_5D44_vfunc_08(int arg0,u32 arg1) {
  int *mem_ptr;
  mem_ptr = *(int **)(arg0 + 4);
  if (mem_ptr != (int *)0x0) {
    func_080D3914(mem_ptr,3,*(u32 *)(*mem_ptr + 8));
  }
  scene_Dtor_080C(arg0,arg1);
}

/* 0x080DBB2C (72B) | game_state_5D54_vfunc_0C (orig: func_080DBB2C) | origin: wip | domain: game_state_5D54 | HIGH / vtable_algebra */
u32 game_state_5D54_vfunc_0C(u32 *self,int param_2) {
  u32 uVar1;
  u32 auStack_1c [3];
  auStack_1c[0] = *(u32 *)(param_2 + 4);
  *(u32 *)(param_2 + 4) = 0;
  uVar1 = CppRuntime_builtin_new(0xc);
  uVar1 = code_0803EE94_7BDC_Create(uVar1,auStack_1c,*(u32 *)(param_2 + 8),*(u32 *)(param_2 + 0xc)
                       );
  *self = uVar1;
  return self;
}

/* 0x080DBB74 (40B) | game_state_5D54_vfunc_08 (orig: func_080DBB74) | origin: pure | domain: game_state_5D54 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 scene_Dtor_080C();
extern u32 func_080D3914();
void game_state_5D54_vfunc_08(int arg0,u32 arg1) {
  int *mem_ptr;
  mem_ptr = *(int **)(arg0 + 4);
  if (mem_ptr != (int *)0x0) {
    func_080D3914(mem_ptr,3,*(u32 *)(*mem_ptr + 8));
  }
  scene_Dtor_080C(arg0,arg1);
}

/* 0x080DBB9C (72B) | game_state_5D64_vfunc_0C (orig: func_080DBB9C) | origin: wip | domain: game_state_5D64 | HIGH / vtable_algebra */
u32 game_state_5D64_vfunc_0C(u32 *self,int param_2) {
  u32 uVar1;
  u32 auStack_1c [3];
  auStack_1c[0] = *(u32 *)(param_2 + 4);
  *(u32 *)(param_2 + 4) = 0;
  uVar1 = CppRuntime_builtin_new(0xc);
  uVar1 = code_0803EE94_7CBC_Create(uVar1,auStack_1c,*(u32 *)(param_2 + 8));
  *self = uVar1;
  return self;
}

/* 0x080DBBE4 (40B) | game_state_5D64_vfunc_08 (orig: func_080DBBE4) | origin: pure | domain: game_state_5D64 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 scene_Dtor_080C();
extern u32 func_080D3914();
void game_state_5D64_vfunc_08(int arg0,u32 arg1) {
  int *mem_ptr;
  mem_ptr = *(int **)(arg0 + 4);
  if (mem_ptr != (int *)0x0) {
    func_080D3914(mem_ptr,3,*(u32 *)(*mem_ptr + 8));
  }
  scene_Dtor_080C(arg0,arg1);
}

/* 0x080DBC0C (68B) | game_state_5D74_vfunc_0C (orig: func_080DBC0C) | origin: wip | domain: game_state_5D74 | HIGH / vtable_algebra */
u32 game_state_5D74_vfunc_0C(u32 *self,int param_2) {
  u32 uVar1;
  u32 auStack_18 [3];
  auStack_18[0] = *(u32 *)(param_2 + 4);
  *(u32 *)(param_2 + 4) = 0;
  uVar1 = CppRuntime_builtin_new(0xc);
  uVar1 = code_0803EE94_7BA4_Create(uVar1,auStack_18);
  *self = uVar1;
  return self;
}

/* 0x080DBC50 (40B) | game_state_5D74_vfunc_08 (orig: func_080DBC50) | origin: pure | domain: game_state_5D74 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 scene_Dtor_080C();
extern u32 func_080D3914();
void game_state_5D74_vfunc_08(int arg0,u32 arg1) {
  int *mem_ptr;
  mem_ptr = *(int **)(arg0 + 4);
  if (mem_ptr != (int *)0x0) {
    func_080D3914(mem_ptr,3,*(u32 *)(*mem_ptr + 8));
  }
  scene_Dtor_080C(arg0,arg1);
}

/* 0x080DBC78 (72B) | game_state_5D84_vfunc_0C (orig: func_080DBC78) | origin: wip | domain: game_state_5D84 | HIGH / vtable_algebra */
u32 game_state_5D84_vfunc_0C(u32 *self,int param_2) {
  u32 uVar1;
  u32 auStack_1c [3];
  auStack_1c[0] = *(u32 *)(param_2 + 4);
  *(u32 *)(param_2 + 4) = 0;
  uVar1 = CppRuntime_builtin_new(0xc);
  uVar1 = code_0803EE94_7DE4_Create(uVar1,auStack_1c,*(u32 *)(param_2 + 8));
  *self = uVar1;
  return self;
}

/* 0x080DBCC0 (40B) | game_state_5D84_vfunc_08 (orig: func_080DBCC0) | origin: pure | domain: game_state_5D84 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 scene_Dtor_080C();
extern u32 func_080D3914();
void game_state_5D84_vfunc_08(int arg0,u32 arg1) {
  int *mem_ptr;
  mem_ptr = *(int **)(arg0 + 4);
  if (mem_ptr != (int *)0x0) {
    func_080D3914(mem_ptr,3,*(u32 *)(*mem_ptr + 8));
  }
  scene_Dtor_080C(arg0,arg1);
}

/* 0x080DBD58 (72B) | game_state_5DA4_vfunc_0C (orig: func_080DBD58) | origin: wip | domain: game_state_5DA4 | HIGH / vtable_algebra */
u32 game_state_5DA4_vfunc_0C(u32 *self,int param_2) {
  u32 uVar1;
  u32 auStack_1c [3];
  auStack_1c[0] = *(u32 *)(param_2 + 4);
  *(u32 *)(param_2 + 4) = 0;
  uVar1 = CppRuntime_builtin_new(0x14);
  uVar1 = code_0803EE94_7BF8_Create(uVar1,auStack_1c,*(u32 *)(param_2 + 8),*(u32 *)(param_2 + 0xc)
                       );
  *self = uVar1;
  return self;
}

/* 0x080DBDA0 (40B) | game_state_5DA4_vfunc_08 (orig: func_080DBDA0) | origin: pure | domain: game_state_5DA4 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 scene_Dtor_080C();
extern u32 func_080D3914();
void game_state_5DA4_vfunc_08(int arg0,u32 arg1) {
  int *mem_ptr;
  mem_ptr = *(int **)(arg0 + 4);
  if (mem_ptr != (int *)0x0) {
    func_080D3914(mem_ptr,3,*(u32 *)(*mem_ptr + 8));
  }
  scene_Dtor_080C(arg0,arg1);
}

/* 0x080DBDC8 (72B) | game_state_5DB4_vfunc_0C (orig: func_080DBDC8) | origin: wip | domain: game_state_5DB4 | HIGH / vtable_algebra */
u32 game_state_5DB4_vfunc_0C(u32 *self,int param_2) {
  u32 uVar1;
  u32 auStack_1c [3];
  auStack_1c[0] = *(u32 *)(param_2 + 4);
  *(u32 *)(param_2 + 4) = 0;
  uVar1 = CppRuntime_builtin_new(0xc);
  uVar1 = code_0803EE94_7CA0_Create(uVar1,auStack_1c,*(u32 *)(param_2 + 8));
  *self = uVar1;
  return self;
}

/* 0x080DBE10 (40B) | game_state_5DB4_vfunc_08 (orig: func_080DBE10) | origin: pure | domain: game_state_5DB4 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 scene_Dtor_080C();
extern u32 func_080D3914();
void game_state_5DB4_vfunc_08(int arg0,u32 arg1) {
  int *mem_ptr;
  mem_ptr = *(int **)(arg0 + 4);
  if (mem_ptr != (int *)0x0) {
    func_080D3914(mem_ptr,3,*(u32 *)(*mem_ptr + 8));
  }
  scene_Dtor_080C(arg0,arg1);
}

/* 0x080DBE38 (72B) | game_state_5DC4_vfunc_0C (orig: func_080DBE38) | origin: wip | domain: game_state_5DC4 | HIGH / vtable_algebra */
u32 game_state_5DC4_vfunc_0C(u32 *self,int param_2) {
  u32 uVar1;
  u32 auStack_1c [3];
  auStack_1c[0] = *(u32 *)(param_2 + 4);
  *(u32 *)(param_2 + 4) = 0;
  uVar1 = CppRuntime_builtin_new(0xc);
  uVar1 = code_0803EE94_7C68_Create(uVar1,auStack_1c,*(u32 *)(param_2 + 8));
  *self = uVar1;
  return self;
}

/* 0x080DBE80 (40B) | game_state_5DC4_vfunc_08 (orig: func_080DBE80) | origin: pure | domain: game_state_5DC4 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 scene_Dtor_080C();
extern u32 func_080D3914();
void game_state_5DC4_vfunc_08(int arg0,u32 arg1) {
  int *mem_ptr;
  mem_ptr = *(int **)(arg0 + 4);
  if (mem_ptr != (int *)0x0) {
    func_080D3914(mem_ptr,3,*(u32 *)(*mem_ptr + 8));
  }
  scene_Dtor_080C(arg0,arg1);
}

/* 0x080DBEA8 (72B) | game_state_5DD4_vfunc_0C (orig: func_080DBEA8) | origin: wip | domain: game_state_5DD4 | HIGH / vtable_algebra */
u32 game_state_5DD4_vfunc_0C(u32 *self,int param_2) {
  u32 uVar1;
  u32 auStack_1c [3];
  auStack_1c[0] = *(u32 *)(param_2 + 4);
  *(u32 *)(param_2 + 4) = 0;
  uVar1 = CppRuntime_builtin_new(0xc);
  uVar1 = code_0803EE94_7CD8_Create(uVar1,auStack_1c,*(u32 *)(param_2 + 8));
  *self = uVar1;
  return self;
}

/* 0x080DBEF0 (40B) | game_state_5DD4_vfunc_08 (orig: func_080DBEF0) | origin: pure | domain: game_state_5DD4 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 scene_Dtor_080C();
extern u32 func_080D3914();
void game_state_5DD4_vfunc_08(int arg0,u32 arg1) {
  int *mem_ptr;
  mem_ptr = *(int **)(arg0 + 4);
  if (mem_ptr != (int *)0x0) {
    func_080D3914(mem_ptr,3,*(u32 *)(*mem_ptr + 8));
  }
  scene_Dtor_080C(arg0,arg1);
}

/* 0x080DBF18 (72B) | game_state_5DE4_vfunc_0C (orig: func_080DBF18) | origin: wip | domain: game_state_5DE4 | HIGH / vtable_algebra */
u32 game_state_5DE4_vfunc_0C(u32 *self,int param_2) {
  u32 uVar1;
  u32 auStack_1c [3];
  auStack_1c[0] = *(u32 *)(param_2 + 4);
  *(u32 *)(param_2 + 4) = 0;
  uVar1 = CppRuntime_builtin_new(0xc);
  uVar1 = code_0803EE94_7C84_Create(uVar1,auStack_1c,*(u32 *)(param_2 + 8));
  *self = uVar1;
  return self;
}

/* 0x080DBF60 (40B) | game_state_5DE4_vfunc_08 (orig: func_080DBF60) | origin: pure | domain: game_state_5DE4 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 scene_Dtor_080C();
extern u32 func_080D3914();
void game_state_5DE4_vfunc_08(int arg0,u32 arg1) {
  int *mem_ptr;
  mem_ptr = *(int **)(arg0 + 4);
  if (mem_ptr != (int *)0x0) {
    func_080D3914(mem_ptr,3,*(u32 *)(*mem_ptr + 8));
  }
  scene_Dtor_080C(arg0,arg1);
}

/* 0x080DBF88 (72B) | game_state_5DF4_vfunc_0C (orig: func_080DBF88) | origin: wip | domain: game_state_5DF4 | HIGH / vtable_algebra */
u32 game_state_5DF4_vfunc_0C(u32 *self,int param_2) {
  u32 uVar1;
  u32 auStack_1c [3];
  auStack_1c[0] = *(u32 *)(param_2 + 4);
  *(u32 *)(param_2 + 4) = 0;
  uVar1 = CppRuntime_builtin_new(0xc);
  uVar1 = code_0803EE94_7D20_Create(uVar1,auStack_1c,*(u32 *)(param_2 + 8));
  *self = uVar1;
  return self;
}

/* 0x080DBFD0 (40B) | game_state_5DF4_vfunc_08 (orig: func_080DBFD0) | origin: pure | domain: game_state_5DF4 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 scene_Dtor_080C();
extern u32 func_080D3914();
void game_state_5DF4_vfunc_08(int arg0,u32 arg1) {
  int *mem_ptr;
  mem_ptr = *(int **)(arg0 + 4);
  if (mem_ptr != (int *)0x0) {
    func_080D3914(mem_ptr,3,*(u32 *)(*mem_ptr + 8));
  }
  scene_Dtor_080C(arg0,arg1);
}

/* 0x080DBFF8 (72B) | game_state_5E04_vfunc_0C (orig: func_080DBFF8) | origin: wip | domain: game_state_5E04 | HIGH / vtable_algebra */
u32 game_state_5E04_vfunc_0C(u32 *self,int param_2) {
  u32 uVar1;
  u32 auStack_1c [3];
  auStack_1c[0] = *(u32 *)(param_2 + 4);
  *(u32 *)(param_2 + 4) = 0;
  uVar1 = CppRuntime_builtin_new(0xc);
  uVar1 = code_0803EE94_7C4C_Create(uVar1,auStack_1c,*(u32 *)(param_2 + 8));
  *self = uVar1;
  return self;
}

/* 0x080DC040 (40B) | game_state_5E04_vfunc_08 (orig: func_080DC040) | origin: pure | domain: game_state_5E04 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 scene_Dtor_080C();
extern u32 func_080D3914();
void game_state_5E04_vfunc_08(int arg0,u32 arg1) {
  int *mem_ptr;
  mem_ptr = *(int **)(arg0 + 4);
  if (mem_ptr != (int *)0x0) {
    func_080D3914(mem_ptr,3,*(u32 *)(*mem_ptr + 8));
  }
  scene_Dtor_080C(arg0,arg1);
}

/* 0x080DC068 (88B) | game_state_5E14_vfunc_0C (orig: func_080DC068) | origin: wip | domain: game_state_5E14 | HIGH / vtable_algebra */
u32 game_state_5E14_vfunc_0C(u32 *self,int param_2) {
  u32 uVar1;
  u32 auStack_20 [3];
  auStack_20[0] = *(u32 *)(param_2 + 4);
  *(u32 *)(param_2 + 4) = 0;
  uVar1 = CppRuntime_builtin_new(0x20);
  uVar1 = code_0803EE94_7D04_Create(uVar1,auStack_20,*(u32 *)(param_2 + 8),
                        *(u8 *)(param_2 + 0x1c),*(u32 *)(param_2 + 0xc),
                        *(u32 *)(param_2 + 0x10),*(u32 *)(param_2 + 0x14),
                        *(u32 *)(param_2 + 0x18));
  *self = uVar1;
  return self;
}

/* 0x080DC0C0 (40B) | game_state_5E14_vfunc_08 (orig: func_080DC0C0) | origin: pure | domain: game_state_5E14 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 scene_Dtor_080C();
extern u32 func_080D3914();
void game_state_5E14_vfunc_08(int arg0,u32 arg1) {
  int *mem_ptr;
  mem_ptr = *(int **)(arg0 + 4);
  if (mem_ptr != (int *)0x0) {
    func_080D3914(mem_ptr,3,*(u32 *)(*mem_ptr + 8));
  }
  scene_Dtor_080C(arg0,arg1);
}

/* 0x080DC0E8 (72B) | game_state_5E24_vfunc_0C (orig: func_080DC0E8) | origin: wip | domain: game_state_5E24 | HIGH / vtable_algebra */
u32 game_state_5E24_vfunc_0C(u32 *self,int param_2) {
  u32 uVar1;
  u32 auStack_1c [3];
  auStack_1c[0] = *(u32 *)(param_2 + 4);
  *(u32 *)(param_2 + 4) = 0;
  uVar1 = CppRuntime_builtin_new(0xc);
  uVar1 = code_0803EE94_7C20_Create(uVar1,auStack_1c,*(u32 *)(param_2 + 8),*(u32 *)(param_2 + 0xc)
                       );
  *self = uVar1;
  return self;
}

/* 0x080DC130 (40B) | game_state_5E24_vfunc_08 (orig: func_080DC130) | origin: pure | domain: game_state_5E24 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 scene_Dtor_080C();
extern u32 func_080D3914();
void game_state_5E24_vfunc_08(int arg0,u32 arg1) {
  int *mem_ptr;
  mem_ptr = *(int **)(arg0 + 4);
  if (mem_ptr != (int *)0x0) {
    func_080D3914(mem_ptr,3,*(u32 *)(*mem_ptr + 8));
  }
  scene_Dtor_080C(arg0,arg1);
}

/* 0x080DC158 (72B) | game_state_5E34_vfunc_0C (orig: func_080DC158) | origin: wip | domain: game_state_5E34 | HIGH / vtable_algebra */
u32 game_state_5E34_vfunc_0C(u32 *self,int param_2) {
  u32 uVar1;
  u32 auStack_1c [3];
  auStack_1c[0] = *(u32 *)(param_2 + 4);
  *(u32 *)(param_2 + 4) = 0;
  uVar1 = CppRuntime_builtin_new(0xc);
  uVar1 = code_0803EE94_7C30_Create(uVar1,auStack_1c,*(u32 *)(param_2 + 8));
  *self = uVar1;
  return self;
}

/* 0x080DC1A0 (40B) | game_state_5E34_vfunc_08 (orig: func_080DC1A0) | origin: pure | domain: game_state_5E34 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 scene_Dtor_080C();
extern u32 func_080D3914();
void game_state_5E34_vfunc_08(int arg0,u32 arg1) {
  int *mem_ptr;
  mem_ptr = *(int **)(arg0 + 4);
  if (mem_ptr != (int *)0x0) {
    func_080D3914(mem_ptr,3,*(u32 *)(*mem_ptr + 8));
  }
  scene_Dtor_080C(arg0,arg1);
}

/* 0x080DC1C8 (12B) | game_state_5E44_vfunc_08 (orig: func_080DC1C8) | origin: pure | domain: game_state_5E44 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 scene_Dtor_080C();
void game_state_5E44_vfunc_08(void) {
  scene_Dtor_080C();
}

/* 0x080DC1D4 (72B) | game_state_5E54_vfunc_0C (orig: func_080DC1D4) | origin: wip | domain: game_state_5E54 | HIGH / vtable_algebra */
u32 game_state_5E54_vfunc_0C(u32 *self,int param_2) {
  u32 uVar1;
  u32 auStack_1c [3];
  auStack_1c[0] = *(u32 *)(param_2 + 8);
  *(u32 *)(param_2 + 8) = 0;
  uVar1 = CppRuntime_builtin_new(8);
  uVar1 = new_game_AutoPtrFactory(uVar1,*(u32 *)(param_2 + 4),auStack_1c);
  *self = uVar1;
  return self;
}

/* 0x080DC21C (40B) | game_state_5E54_vfunc_08 (orig: func_080DC21C) | origin: pure | domain: game_state_5E54 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 scene_Dtor_080C();
extern u32 func_080D3914();
void game_state_5E54_vfunc_08(int arg0,u32 arg1) {
  int *mem_ptr;
  mem_ptr = *(int **)(arg0 + 8);
  if (mem_ptr != (int *)0x0) {
    func_080D3914(mem_ptr,3,*(u32 *)(*mem_ptr + 8));
  }
  scene_Dtor_080C(arg0,arg1);
}

/* 0x080DC244 (68B) | game_state_5E74_vfunc_0C (orig: func_080DC244) | origin: wip | domain: game_state_5E74 | HIGH / vtable_algebra */
u32 game_state_5E74_vfunc_0C(u32 *self,int param_2) {
  u32 uVar1;
  uVar1 = CppRuntime_builtin_new(8);
  uVar1 = game_state_Create(uVar1,*(u32 *)(param_2 + 4),param_2 + 8);
  *self = uVar1;
  return self;
}

/* 0x080DC288 (12B) | game_state_5E74_vfunc_08 (orig: func_080DC288) | origin: pure | domain: game_state_5E74 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 scene_Dtor_080C();
void game_state_5E74_vfunc_08(void) {
  scene_Dtor_080C();
}

/* 0x080DCFCC (20B) | AEntity_7568_vfunc_14 (orig: func_080DCFCC) | origin: pure | domain: AEntity_7568 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 AEntity_vfunc_14();
void AEntity_7568_vfunc_14(int arg0) {
  AEntity_vfunc_14();
  *(u8 *)(arg0 + 0x1c) = 0;
}

/* 0x080E0D50 (20B) | SpriteAnimEngine_77D0_vfunc_08 (orig: func_080E0D50) | origin: pure | domain: SpriteAnimEngine_77D0 | HIGH / vtable_algebra */
void hardware_HW_DMA3SAD(u32, u32, u32); int SpriteAnimEngine_77D0_vfunc_08(u32 *a) { hardware_HW_DMA3SAD(a[3], a[4], a[5]); return 0; }

/* 0x080E0D64 (12B) | SpriteAnimEngine_77D0_vfunc_0C (orig: func_080E0D64) | origin: pure | domain: SpriteAnimEngine_77D0 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 hardware_Dtor_98AC();
void SpriteAnimEngine_77D0_vfunc_0C(void) {
  hardware_Dtor_98AC();
}

/* 0x080E0EB4 (60B) | Script_Engine_lower_bound_H4ZPC12JumpTableEntZiZ28ScriptJumpTableSearchCompareZl_X01T0RCX11X21PX31_X01 (orig: func_080E0EB4) | origin: pure | domain: Script_Engine | EXACT / stanhash_elf */
/* Script_Engine_lower_bound_H4ZPC12JumpTableEntZiZ28ScriptJumpTableSearchCompareZl_X01T0RCX11X21PX31_X01 @ 0x080E0EB4 mode=THUMB size=0x3C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Script_Engine_lower_bound_H4ZPC12JumpTableEntZiZ28ScriptJumpTableSearchCompareZl_X01T0RCX11X21PX31_X01 @ 0x080E0EB4  mode=THUMB  size=0x3C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Script_Engine_lower_bound_H4ZPC12JumpTableEntZiZ28ScriptJumpTableSearchCompareZl_X01T0RCX11X21PX31_X01(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar1 = param_2 - (int)param_1 >> 3;
  if (0 < iVar1) {
    do {
      iVar2 = iVar1 >> 1;
      if (param_1[iVar2 * 2] < *param_3) {
        param_1 = param_1 + iVar2 * 2 + 2;
        iVar2 = (iVar1 - iVar2) + -1;
      }
      iVar1 = iVar2;
    } while (0 < iVar2);
  }
  return CONCAT44(in_lr,param_1);
}

/* 0x080E105C (132B) | code_linkonce_7908_Dtor (orig: func_080E105C) | origin: wip | domain: code_linkonce_7908 | HIGH / vtable_algebra */
void code_linkonce_7908_Dtor(u32 *self,u32 param_2) {
    u32 * puVar2;
    int * piVar3;
  register u16 *puVar1;
  if ((self != (u8)(u32 *)0xfffffff8) && (piVar3 = self + 5, self + 2 != piVar3)) {
    do {
      piVar3 = piVar3 + -1;
      puVar2 = (u32 *)*piVar3;
      if (puVar2 != (u32 *)0x0) {
        puVar1 = puVar2 + 0x1c;
        do {
          hardware_Sub_08007C28(puVar1 + -3,puVar1[-2]);
          hardware_Sub_080079E8(puVar1 + -3,2);
          CppRuntime_builtin_delete(puVar1[-4]);
          puVar1 = (s8)puVar1 + -4;
        } while (puVar2 != puVar1);
        CppRuntime_builtin_delete(puVar2);
      }
    } while (self + 2 != piVar3);
  }
  *self = 0x080E7908;
  if ((param_2 & 1) != 0) {
    CppRuntime_builtin_delete(self);
  }
}

/* 0x080E1128 (32B) | code_linkonce_7908_Dtor_1128 (orig: func_080E1128) | origin: pure | domain: code_linkonce_7908 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 CppRuntime_builtin_delete();
void code_linkonce_7908_Dtor_1128(u32 *arg0,u32 arg1) {
  *arg0 = 0x080E7908;
  if ((arg1 & 1) != 0) {
    CppRuntime_builtin_delete(arg0);
  }
}

/* 0x080E118C (96B) | SpriteAnimEngine_7950_vfunc_0C (orig: func_080E118C) | origin: pure | domain: SpriteAnimEngine_7950 | HIGH / vtable_algebra */
extern void func_0800DF50();
extern u32 Article_GetName();
extern u32 LibC_strlen();
extern void LibC_memcpy();
extern void LibC_strcpy();
u8 *SpriteAnimEngine_7950_vfunc_0C(u8 *arg0, int arg1, int arg2) {
    u8 buf[32];
    u8 tmp[4];
    if (arg2 == 0xff) {
        u32 str_ptr;
        u32 len;
        func_0800DF50(tmp, *(u16 *)(arg1 + 4));
        str_ptr = Article_GetName(tmp);
        len = LibC_strlen(str_ptr);
        if (len > 0x1f) {
            len = 0x1f;
        }
        LibC_memcpy(buf, str_ptr, len);
        buf[len] = 0;
        *arg0 = 1;
        LibC_strcpy(arg0 + 4, buf);
    } else {
        buf[0] = 0;
        *arg0 = 0;
        LibC_strcpy(arg0 + 4, buf);
    }
    return arg0;
}

/* 0x080E1A48 (12B) | SpriteAnimEngine_7A08_vfunc_0C (orig: func_080E1A48) | origin: pure | domain: SpriteAnimEngine_7A08 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_0803EE94_7B88_vfunc_0C();
u32 SpriteAnimEngine_7A08_vfunc_0C(void) {
  code_0803EE94_7B88_vfunc_0C();
  return 1;
}

/* 0x080E1A70 (424B) | IntroSequence_7A18_vfunc_0C (orig: func_080E1A70) | origin: wip | domain: IntroSequence_7A18 | HIGH / vtable_algebra */
u32 IntroSequence_7A18_vfunc_0C(u32 *self) {
  u8 bVar1;
  u8 *pbVar2;
  short *psVar3;
  u32 *puVar4;
  u32 uVar5;
  u32 uStack_34;
  u16 uStack_30;
  u32 uStack_2c;
  u16 uStack_28;
  short *psStack_24;
  code_0803EE94_7B88_vfunc_0C();
  uVar5 = 0;
  if (*(short *)((int)self + 0x00001268) + 0x30 < (int)*(short *)(self + 0x164)) {
    psVar3 = (short *)((int)self + 0x00001268);
    do {
      psVar3 = psVar3 + 8;
      uVar5 = uVar5 + 1;
    } while (*psVar3 + 0x30 < (int)*(short *)(self + 0x164));
  }
  psStack_24 = (short *)((int)self + 0x0000163C);
  if (uVar5 < *(u32 *)((int)self + 0x00001264)) {
    puVar4 = (u32 *)(0x00001264 + (int)self);
    psVar3 = (short *)(uVar5 * 0x10 + 0x00001268 + (int)self);
    do {
      if ((int)*psVar3 <= *(short *)(self + 0x164) + 0xa0) {
        pbVar2 = (u8 *)hardware_GetField_0x00_8920(*self);
        code_0803EE94_Sub_0804EA94(&uStack_34,*(u32 *)(psVar3 + 2),
                      (int)*psVar3 - (int)*(short *)(self + 0x164),0x10,2,1,1,0);
        bVar1 = *pbVar2;
        if (bVar1 < 0x80) {
          *(u32 *)(pbVar2 + (u32)bVar1 * 8 + 4) = uStack_34;
          *(u16 *)(pbVar2 + (u32)bVar1 * 8 + 4 + 4) = uStack_30;
          *pbVar2 = bVar1 + 1;
        }
      }
      psVar3 = psVar3 + 8;
      uVar5 = uVar5 + 1;
    } while (uVar5 < *puVar4);
  }
  uVar5 = 0;
  if (*psStack_24 + 0x30 < (int)*(short *)(self + 0x164)) {
    psVar3 = (short *)((int)self + 0x0000163C);
    do {
      psVar3 = psVar3 + 8;
      uVar5 = uVar5 + 1;
    } while (*psVar3 + 0x30 < (int)*(short *)(self + 0x164));
  }
  if (uVar5 < *(u32 *)((int)self + 0x00001638)) {
    puVar4 = (u32 *)(0x00001638 + (int)self);
    psVar3 = (short *)(uVar5 * 0x10 + 0x0000163C + (int)self);
    do {
      if ((int)*psVar3 <= *(short *)(self + 0x164) + 0xa0) {
        pbVar2 = (u8 *)hardware_GetField_0x00_8920(*self);
        code_0803EE94_Sub_0804EA94(&uStack_2c,*(u32 *)(psVar3 + 2),
                      (int)*psVar3 - (int)*(short *)(self + 0x164),5,1,1,0,0);
        bVar1 = *pbVar2;
        if (bVar1 < 0x80) {
          *(u32 *)(pbVar2 + (u32)bVar1 * 8 + 4) = uStack_2c;
          *(u16 *)(pbVar2 + (u32)bVar1 * 8 + 4 + 4) = uStack_28;
          *pbVar2 = bVar1 + 1;
        }
      }
      psVar3 = psVar3 + 8;
      uVar5 = uVar5 + 1;
    } while (uVar5 < *puVar4);
  }
  return (1);
}

/* 0x080E1C18 (88B) | IntroSequence_7A18_vfunc_08 (orig: func_080E1C18) | origin: wip | domain: IntroSequence_7A18 | HIGH / vtable_algebra */
void IntroSequence_7A18_vfunc_08(int self,u32 param_2) {
  int *piVar1;
  for (piVar1 = (int *)(self + 0x0000163C);
      piVar1 != (int *)(self + 0x00001638) + *(int *)(self + 0x00001638) * 4 + 1;
      piVar1 = piVar1 + 4) {
  }
  for (piVar1 = (int *)(self + 0x00001268);
      piVar1 != (int *)(self + 0x00001264) + *(int *)(self + 0x00001264) * 4 + 1;
      piVar1 = piVar1 + 4) {
  }
  code_0803EE94_7B88_Dtor(self,param_2);
}

/* 0x080E1C70 (228B) | IntroSequence_7A28_vfunc_0C (orig: func_080E1C70) | origin: wip | domain: IntroSequence_7A28 | HIGH / vtable_algebra */
u32 IntroSequence_7A28_vfunc_0C(u32 *self) {
  u8 bVar1;
  u8 *pbVar2;
  short *psVar3;
  u32 *puVar4;
  u32 uVar5;
  u32 uStack_28;
  u16 uStack_24;
  code_0803EE94_7B88_vfunc_0C();
  uVar5 = 0;
  if (*(short *)((int)self + 0x00002168) + 0x30 < (int)*(short *)(self + 0x164)) {
    psVar3 = (short *)((int)self + 0x00002168);
    do {
      psVar3 = psVar3 + 8;
      uVar5 = uVar5 + 1;
    } while (*psVar3 + 0x30 < (int)*(short *)(self + 0x164));
  }
  if (uVar5 < *(u32 *)((int)self + 0x00002164)) {
    puVar4 = (u32 *)(0x00002164 + (int)self);
    psVar3 = (short *)(uVar5 * 0x10 + 0x00002168 + (int)self);
    do {
      if ((int)*psVar3 <= *(short *)(self + 0x164) + 0xa0) {
        pbVar2 = (u8 *)hardware_GetField_0x00_8920(*self);
        code_0803EE94_Sub_0804EA94(&uStack_28,*(u32 *)(psVar3 + 2),
                      (int)*psVar3 - (int)*(short *)(self + 0x164),5,1,1,0,0);
        bVar1 = *pbVar2;
        if (bVar1 < 0x80) {
          *(u32 *)(pbVar2 + (u32)bVar1 * 8 + 4) = uStack_28;
          *(u16 *)(pbVar2 + (u32)bVar1 * 8 + 4 + 4) = uStack_24;
          *pbVar2 = bVar1 + 1;
        }
      }
      psVar3 = psVar3 + 8;
      uVar5 = uVar5 + 1;
    } while (uVar5 < *puVar4);
  }
  return 1;
}

/* 0x080E1D54 (56B) | IntroSequence_7A28_vfunc_08 (orig: func_080E1D54) | origin: wip | domain: IntroSequence_7A28 | HIGH / vtable_algebra */
void IntroSequence_7A28_vfunc_08(int self,u32 param_2) {
  int *piVar1;
  for (piVar1 = (int *)(self + 0x00002168);
      piVar1 != (int *)(self + 0x00002164) + *(int *)(self + 0x00002164) * 4 + 1;
      piVar1 = piVar1 + 4) {
  }
  code_0803EE94_7B88_Dtor(self,param_2);
}

/* 0x080E1D8C (12B) | IntroSequence_7A38_vfunc_08 (orig: func_080E1D8C) | origin: pure | domain: IntroSequence_7A38 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_0803EE94_7B88_Dtor();
void IntroSequence_7A38_vfunc_08(void) {
  code_0803EE94_7B88_Dtor();
}

/* 0x080E1D98 (12B) | IntroSequence_7A48_vfunc_08 (orig: func_080E1D98) | origin: pure | domain: IntroSequence_7A48 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_0803EE94_7B88_Dtor();
void IntroSequence_7A48_vfunc_08(void) {
  code_0803EE94_7B88_Dtor();
}

/* 0x080E1DA4 (12B) | IntroSequence_7A58_vfunc_08 (orig: func_080E1DA4) | origin: pure | domain: IntroSequence_7A58 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_0803EE94_7B88_Dtor();
void IntroSequence_7A58_vfunc_08(void) {
  code_0803EE94_7B88_Dtor();
}

/* 0x080E1DB0 (12B) | IntroSequence_7A68_vfunc_08 (orig: func_080E1DB0) | origin: pure | domain: IntroSequence_7A68 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_0803EE94_7B88_Dtor();
void IntroSequence_7A68_vfunc_08(void) {
  code_0803EE94_7B88_Dtor();
}

/* 0x080E1DBC (12B) | IntroSequence_7A78_vfunc_0C (orig: func_080E1DBC) | origin: pure | domain: IntroSequence_7A78 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_0803EE94_7B88_vfunc_0C();
u32 IntroSequence_7A78_vfunc_0C(void) {
  code_0803EE94_7B88_vfunc_0C();
  return 1;
}

/* 0x080E1DC8 (12B) | IntroSequence_7A78_vfunc_08 (orig: func_080E1DC8) | origin: pure | domain: IntroSequence_7A78 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_0803EE94_7B88_Dtor();
void IntroSequence_7A78_vfunc_08(void) {
  code_0803EE94_7B88_Dtor();
}

/* 0x080E20F8 (12B) | SpriteAnimEngine_7AFC_vfunc_08 (orig: func_080E20F8) | origin: pure | domain: SpriteAnimEngine_7AFC | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_0803EE94_7B2C_Ctor_0C88();
void SpriteAnimEngine_7AFC_vfunc_08(void) {
  code_0803EE94_7B2C_Ctor_0C88();
}

/* 0x080E2104 (12B) | SpriteAnimEngine_7B0C_vfunc_08 (orig: func_080E2104) | origin: pure | domain: SpriteAnimEngine_7B0C | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_0803EE94_7B2C_Ctor_0C88();
void SpriteAnimEngine_7B0C_vfunc_08(void) {
  code_0803EE94_7B2C_Ctor_0C88();
}

/* 0x080E2110 (12B) | SpriteAnimEngine_7B1C_vfunc_08 (orig: func_080E2110) | origin: pure | domain: SpriteAnimEngine_7B1C | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_0803EE94_7B2C_Ctor_0C88();
void SpriteAnimEngine_7B1C_vfunc_08(void) {
  code_0803EE94_7B2C_Ctor_0C88();
}

/* 0x080E5478 (76B) | code_linkonce_857C_Dtor (orig: func_080E5478) | origin: pure | domain: code_linkonce_857C | HIGH / vtable_algebra */
extern "C" void interrupt_Sub_08000528(int);
extern "C" void code_809E804_Sub_080D100C(int, u32);
extern "C" void interrupt_Sub_080004F4(u16);
struct C_080E8594 {
    u32 f0;
    u16 f4;
    u16 pad;
    u32 f8;
    virtual ~C_080E8594() {
        *(u32 *)0x03000414 = f8;
        if (f4)
            interrupt_Sub_080004F4(f4);
    }
};
struct C_080E857C {
    C_080E8594 base;
    u32 f10;
    virtual ~C_080E857C();
};
C_080E857C::~C_080E857C() {
    interrupt_Sub_08000528(4);
    code_809E804_Sub_080D100C(2, f10);
}
extern "C" void code_linkonce_857C_Dtor() __attribute__((alias("_._10C_080E857C")));

/* 0x080E581C (40B) | code_linkonce_8594_Dtor (orig: func_080E581C) | origin: pure | domain: code_linkonce_8594 | HIGH / vtable_algebra */
void CppRuntime_builtin_delete(void *); void code_linkonce_8594_Dtor(u32 *a, int b) { a[1] = 0x080E8594; *(u32 *)0x03000414 = a[0]; if (b & 1) CppRuntime_builtin_delete(a); }

/* 0x080E5844 (40B) | code_linkonce_8594_Dtor_5844 (orig: func_080E5844) | origin: pure | domain: code_linkonce_8594 | HIGH / vtable_algebra */
void CppRuntime_builtin_delete(void *); void code_linkonce_8594_Dtor_5844(u32 *a, int b) { a[1] = 0x080E8594; *(u32 *)0x03000414 = a[0]; if (b & 1) CppRuntime_builtin_delete(a); }

