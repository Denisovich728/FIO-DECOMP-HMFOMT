/* FIO-DECOMP-HMFOMT :: Port Readable Module: Food (13 functions) */
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

/* 0x0800DCB8 (40B) | Food_GetName (orig: func_0800DCB8) | origin: pure | domain: Food | EXACT / stanhash_elf */
/* Food_GetName @ 0x0800DCB8 mode=THUMB size=0x28 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Food_GetName @ 0x0800DCB8  mode=THUMB  size=0x28  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Food_GetName(byte *param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = _DAT_0800dccc;
  if (*param_1 < 0xab) {
    uVar1 = *(undefined4 *)((uint)*param_1 * 0x10 + _DAT_0800dcdc);
  }
  return CONCAT44(in_lr,uVar1);
}

/* 0x0800DCE0 (40B) | Food_GetIconId (orig: func_0800DCE0) | origin: pure | domain: Food | EXACT / stanhash_elf */
/* Food_GetIconId @ 0x0800DCE0 mode=THUMB size=0x28 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Food_GetIconId @ 0x0800DCE0  mode=THUMB  size=0x28  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Food_GetIconId(byte *param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (*param_1 < 0xab) {
    uVar1 = (uint)*(ushort *)((uint)*param_1 * 0x10 + _DAT_0800dd04 + 8);
  }
  else {
    uVar1 = 0x1ac;
  }
  return CONCAT44(in_lr,uVar1);
}

/* 0x0800DD08 (52B) | Food_GetStaminaGain (orig: func_0800DD08) | origin: pure | domain: Food | EXACT / stanhash_elf */
/* Food_GetStaminaGain @ 0x0800DD08 mode=THUMB size=0x34 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Food_GetStaminaGain @ 0x0800DD08  mode=THUMB  size=0x34  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Food_GetStaminaGain(byte *param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*param_1 < 0xab) {
    iVar1 = (int)*(char *)((uint)*param_1 * 0x10 + _DAT_0800dd38 + 5) + (int)(char)param_1[1];
  }
  else {
    iVar1 = -100;
  }
  return CONCAT44(in_lr,iVar1);
}

/* 0x0800DD3C (48B) | Food_GetFatigueGain (orig: func_0800DD3C) | origin: pure | domain: Food | EXACT / stanhash_elf */
/* Food_GetFatigueGain @ 0x0800DD3C mode=THUMB size=0x30 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Food_GetFatigueGain @ 0x0800DD3C  mode=THUMB  size=0x30  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Food_GetFatigueGain(byte *param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*param_1 < 0xab) {
    iVar1 = (int)*(char *)((uint)*param_1 * 0x10 + _DAT_0800dd68 + 6) + (int)(char)param_1[2];
  }
  else {
    iVar1 = 100;
  }
  return CONCAT44(in_lr,iVar1);
}

/* 0x0800DD6C (32B) | Food_GetStaminaBonus (orig: func_0800DD6C) | origin: pure | domain: Food | EXACT / stanhash_elf */
/* Food_GetStaminaBonus @ 0x0800DD6C mode=THUMB size=0x20 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Food_GetStaminaBonus @ 0x0800DD6C  mode=THUMB  size=0x20  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Food_GetStaminaBonus(byte *param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*param_1 < 0xab) {
    iVar1 = (int)(char)param_1[1];
  }
  else {
    iVar1 = -100;
  }
  return CONCAT44(in_lr,iVar1);
}

/* 0x0800DD8C (32B) | Food_GetFatigueBonus (orig: func_0800DD8C) | origin: pure | domain: Food | EXACT / stanhash_elf */
/* Food_GetFatigueBonus @ 0x0800DD8C mode=THUMB size=0x20 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Food_GetFatigueBonus @ 0x0800DD8C  mode=THUMB  size=0x20  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Food_GetFatigueBonus(byte *param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*param_1 < 0xab) {
    iVar1 = (int)(char)param_1[2];
  }
  else {
    iVar1 = 100;
  }
  return CONCAT44(in_lr,iVar1);
}

/* 0x0800DDAC (40B) | Food_IsDrink (orig: func_0800DDAC) | origin: pure | domain: Food | EXACT / stanhash_elf */
/* Food_IsDrink @ 0x0800DDAC mode=THUMB size=0x28 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Food_IsDrink @ 0x0800DDAC  mode=THUMB  size=0x28  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Food_IsDrink(byte *param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (*param_1 < 0xab) {
    uVar1 = *(byte *)((uint)*param_1 * 0x10 + _DAT_0800ddd0 + 4) & 1;
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

/* 0x0800DDD4 (56B) | Food_GetDesc (orig: func_0800DDD4) | origin: pure | domain: Food | EXACT / stanhash_elf */
/* Food_GetDesc @ 0x0800DDD4 mode=THUMB size=0x38 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Food_GetDesc @ 0x0800DDD4  mode=THUMB  size=0x38  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Food_GetDesc(byte *param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = _DAT_0800de08;
  if ((*param_1 < 0xab) &&
     (iVar1 = *(int *)((uint)*param_1 * 0x10 + _DAT_0800ddf8 + 0xc), iVar1 == 0)) {
    iVar1 = _DAT_0800ddfc;
  }
  return CONCAT44(in_lr,iVar1);
}

/* 0x0800DE0C (92B) | Food_AddBonuses (orig: func_0800DE0C) | origin: pure | domain: Food | EXACT / stanhash_elf */
/* Food_AddBonuses @ 0x0800DE0C mode=THUMB size=0x5C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Food_AddBonuses @ 0x0800DE0C  mode=THUMB  size=0x5C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 Food_AddBonuses(byte *param_1,char param_2,char param_3)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*param_1 < 0xab) {
    iVar1 = (int)(char)param_1[1] + (int)param_2;
    iVar2 = -0x80;
    if ((-0x81 < iVar1) && (iVar2 = iVar1, 0x7f < iVar1)) {
      iVar2 = 0x7f;
    }
    param_1[1] = (byte)iVar2;
    iVar1 = (int)(char)param_1[2] + (int)param_3;
    iVar2 = -0x80;
    if ((-0x81 < iVar1) && (iVar2 = iVar1, 0x7f < iVar1)) {
      iVar2 = 0x7f;
    }
    param_1[2] = (byte)iVar2;
  }
  return in_lr;
}

/* 0x0807DE0C (48B) | Food_Sub_0807DE0C (orig: func_0807DE0C) | origin: pure | domain: Food | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0800DCA8();
extern u32 Food_GetDesc();
extern u32 code_0803EE94_78C0_Sub_080CABEC();
struct s_080FDFA4 { u32 a; u32 b; };
extern const struct s_080FDFA4 g_080FDFA4[];
void Food_Sub_0807DE0C(u32 arg0,int arg1) {
  u32 val;
  u8 auStack_c [4];
  func_0800DCA8(auStack_c,g_080FDFA4[arg1].a);
  val = Food_GetDesc(auStack_c);
  code_0803EE94_78C0_Sub_080CABEC(arg0,val);
}

/* 0x0807E51C (60B) | Food_Sub_0807E51C (orig: func_0807E51C) | origin: pure | domain: Food | MEDIUM / graph_algebra */
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
extern u32 func_0800DCA8();
extern u32 Food_GetDesc();
extern u32 code_0803EE94_78C0_Sub_080CABEC();
struct Entry_080FE050 { u32 val; u32 pad; };
extern const struct Entry_080FE050 g_080FE050[];
void Food_Sub_0807E51C(int arg0, int arg1) {
  u32 val;
  u8 auStack_c[4];
  func_0800DCA8(auStack_c, g_080FE050[*(int *)(arg1 * 4 + arg0 + 0x2a8)].val);
  val = Food_GetDesc(auStack_c);
  code_0803EE94_78C0_Sub_080CABEC(arg0, val);
}

/* 0x0807EF14 (124B) | Food_Sub_0807EF14 (orig: func_0807EF14) | origin: wip | domain: Food | MEDIUM / graph_algebra */
void Food_Sub_0807EF14(int param_1,int param_2) {
  u32 uVar1;
  int iVar2;
  u8 auStack_10 [4];
  iVar2 = param_1 + 0x2a4;
  if (*(int *)(*(short *)(iVar2 + *(int *)(param_1 + 0x10) * 4 + 4) * 0x1c + 0x080FE2D8 + 0xc) == 0
     ) {
    func_0800DCA8(auStack_10,
                    *(u32 *)(*(u32 *)(iVar2 + (param_2 << 2) + 4) * 0x1c + 0x080FE2D8));
    uVar1 = Food_GetDesc(auStack_10);
    code_0803EE94_78C0_Sub_080CABEC(param_1,uVar1);
  }
  else {
    code_0803EE94_78C0_Sub_080CABEC(param_1,*(u32 *)
                           (*(int *)(iVar2 + (param_2 << 2) + 4) * 0x1c + 0x080FE2D8 + 8));
  }
}

/* 0x08081B40 (124B) | Food_Sub_08081B40 (orig: func_08081B40) | origin: wip | domain: Food | MEDIUM / graph_algebra */
void Food_Sub_08081B40(u32 param_1, u32 param_2, u32 param_3, u32 param_4) {
    u32 r0 = param_1;
    u32 r1 = param_2;
    u32 r2 = param_3;
    u32 r3 = param_4;
    register u32 r4, r5;
    r4 = r0 + 0;
    r3 = r1 + 0;
    r5 = 0x080FEB60;
    r0 = 0xa9;
    r0 = r0 << 2;
    r2 = r4 + r0;
    r0 = *(u32 *)(r4 + 0x10);
    r0 = r0 << 2;
    r0 += 4;
    r0 = r2 + r0;
    r1 = *(u32 *)(r0);
    r0 = r1 << 3;
    r0 = r0 - r1;
    r1 += 0xc;
    r1 = r5 + 0;
    r0 = r0 << 2;
    r0 = r0 + r1;
    r0 = *(u32 *)(r0);
    if (r0 != 0) goto loc_08081B98;
    r0 = r3 << 2;
    r1 = *(u32 *)(r0);
    r0 = r2 + r0;
    r0 += 4;
    r0 = r1 << 3;
    r0 = r0 - r1;
    r0 = r0 << 2;
    r0 = r0 + r5;
    r1 = *(u32 *)(r0);
    r0 = func_0800DCA8(r0, r1, r2, r3);
    r0 = Food_GetDesc(r0, r1, r2, r3);
    r1 = r0 + 0;
    r0 = r4 + 0;
    r0 = code_0803EE94_78C0_Sub_080CABEC(r0, r1, r2, r3);
    goto loc_08081BB4;
loc_08081B98:
    r0 = r3 << 2;
    r1 = *(u32 *)(r0);
    r0 = r2 + r0;
    r0 += 4;
    r0 = r1 << 3;
    r0 = r0 - r1;
    r1 += 8;
    r1 = r5 + 0;
    r0 = r0 << 2;
    r0 = r0 + r1;
    r1 = *(u32 *)(r0);
    r0 = r4 + 0;
    r0 = code_0803EE94_78C0_Sub_080CABEC(r0, r1, r2, r3);
loc_08081BB4:
    return r0;
}

