/* FIO-DECOMP-HMFOMT :: Port Readable Module: held_item (17 functions) */
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

/* 0x0800F190 (4B) | held_item_VmHelper_0800F190 (orig: func_0800F190) | origin: pure | domain: held_item | HIGH / fomt_studio_dispatch */
/* held_item_VmHelper_0800F190 @ 0x0800F190 mode=THUMB size=0x4 (importado de Stan: held_item) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* MODULO STAN: held_item */

// TODO: Reconstruir logica para coincidir 1:1 con la ROM

/* 0x0800F204 (4B) | held_item_VmHelper_0800F204 (orig: func_0800F204) | origin: pure | domain: held_item | HIGH / fomt_studio_dispatch */
/* held_item_VmHelper_0800F204 @ 0x0800F204 mode=THUMB size=0x4 (importado de Stan: held_item) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* MODULO STAN: held_item */

// TODO: Reconstruir logica para coincidir 1:1 con la ROM

/* 0x0800F20C (76B) | held_item_Search_Item_Gift_Address (orig: func_0800F20C) | origin: pure | domain: held_item | HIGH / fomt_studio_dispatch */
/* held_item_Search_Item_Gift_Address @ 0x0800F20C mode=THUMB size=0x4C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* held_item_Search_Item_Gift_Address @ 0x0800F20C  mode=THUMB  size=0x4C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 held_item_Search_Item_Gift_Address(undefined4 param_1,byte *param_2)

{
  undefined4 in_lr;
  undefined1 auStack_10 [4];
  
  if (((*param_2 & 7) == 0) && (param_2[2] < 0xab)) {
    func_0x0800dca8(auStack_10,param_2[2]);
    Food_AddBonuses(auStack_10,(int)(char)param_2[3],(int)(char)param_2[4]);
    LibC_memcpy(param_1,auStack_10,3);
  }
  else {
    func_0x0800dca8(param_1,0xab);
  }
  return CONCAT44(in_lr,param_1);
}

/* 0x0800F258 (60B) | held_item_Func044 (orig: func_0800F258) | origin: pure | domain: held_item | HIGH / fomt_studio_dispatch */
/* held_item_Func044 @ 0x0800F258 mode=THUMB size=0x3C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* held_item_Func044 @ 0x0800F258  mode=THUMB  size=0x3C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 held_item_Func044(byte *param_1)

{
  undefined4 in_lr;
  byte bStack_c;
  byte abStack_b [3];
  
  if (((*param_1 & 7) == 1) && (param_1[2] < 0x5f)) {
    func_0x0800df50(&bStack_c,param_1[2]);
  }
  else {
    func_0x0800df50(abStack_b,0x5f);
    bStack_c = abStack_b[0];
  }
  return CONCAT44(in_lr,(uint)bStack_c);
}

/* 0x0800F294 (176B) | held_item_Sub_0800F294 (orig: func_0800F294) | origin: pure | domain: held_item | HIGH / stanhash_map_tu */
/* held_item_Sub_0800F294 @ 0x0800F294 mode=THUMB size=0xB0 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* held_item_Sub_0800F294 @ 0x0800F294  mode=THUMB  size=0xB0  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 held_item_Sub_0800F294(undefined4 *param_1,byte *param_2)

{
  undefined4 in_lr;
  undefined4 uStack_24;
  undefined4 uStack_20;
  uint3 uStack_1c;
  undefined1 auStack_18 [4];
  
  if (((*param_2 & 7) == 0) && (param_2[2] < 0xab)) {
    func_0x0800dca8(&uStack_24,param_2[2]);
    Food_AddBonuses(&uStack_24,(int)(char)param_2[3],(int)(char)param_2[4]);
    LibC_memcpy(&uStack_1c,&uStack_24,3);
    RucksackItem_Ctor(&uStack_20,(uint)uStack_1c);
    if ((int)((uint)*param_2 * 0x10000000) < 0) {
      RucksackItem_TryWrap(&uStack_20);
    }
    *param_1 = uStack_20;
  }
  else if (((*param_2 & 7) == 1) && (param_2[2] < 0x5f)) {
    func_0x0800df50(auStack_18,param_2[2]);
    RucksackItem_Ctor_F040(&uStack_24,auStack_18[0]);
    if ((int)((uint)*param_2 * 0x10000000) < 0) {
      RucksackItem_TryWrap(&uStack_24);
    }
    *param_1 = uStack_24;
  }
  else {
    func_0x0800efec(param_1);
  }
  return CONCAT44(in_lr,param_1);
}

/* 0x0800F344 (28B) | held_item_Drop_Held_Item (orig: func_0800F344) | origin: pure | domain: held_item | EXACT / fomt_studio_dispatch */
/* held_item_Drop_Held_Item @ 0x0800F344 mode=THUMB size=0x1C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* held_item_Drop_Held_Item @ 0x0800F344  mode=THUMB  size=0x6C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 held_item_Drop_Held_Item(byte *param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (((*param_1 & 7) != 3) || (uVar1 = (uint)param_1[2], 7 < uVar1)) {
    uVar1 = 0xffffffff;
  }
  return CONCAT44(in_lr,uVar1);
}

/* 0x0800F360 (4B) | held_item_Sub_0800F360 (orig: func_0800F360) | origin: pure | domain: held_item | HIGH / stanhash_map_tu */
/* held_item_Sub_0800F360 @ 0x0800F360 mode=THUMB size=0x4 (importado de Stan: held_item) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* MODULO STAN: held_item */

// TODO: Reconstruir logica para coincidir 1:1 con la ROM

/* 0x0800F388 (4B) | held_item_Search_Food_Gift_Address (orig: func_0800F388) | origin: pure | domain: held_item | EXACT / fomt_studio_dispatch */
/* held_item_Search_Food_Gift_Address @ 0x0800F388 mode=THUMB size=0x4 (importado de Stan: held_item) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* MODULO STAN: held_item */

// TODO: Reconstruir logica para coincidir 1:1 con la ROM

/* 0x0800F390 (4B) | held_item_Sub_0800F390 (orig: func_0800F390) | origin: pure | domain: held_item | HIGH / stanhash_map_tu */
/* held_item_Sub_0800F390 @ 0x0800F390 mode=THUMB size=0x4 (importado de Stan: held_item) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* MODULO STAN: held_item */

// TODO: Reconstruir logica para coincidir 1:1 con la ROM

/* 0x0800F3B0 (56B) | held_item_Sub_0800F3B0 (orig: func_0800F3B0) | origin: pure | domain: held_item | HIGH / stanhash_map_tu */
/* held_item_Sub_0800F3B0 @ 0x0800F3B0 mode=THUMB size=0x38 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* held_item_Sub_0800F3B0 @ 0x0800F3B0  mode=THUMB  size=0x38  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 held_item_Sub_0800F3B0(byte *param_1,undefined4 param_2)

{
  byte bVar1;
  undefined4 in_lr;
  undefined4 uStack_c;
  
  *param_1 = *param_1 & 0xf0;
  uStack_c = param_2;
  bVar1 = func_0x0800dcb4(&uStack_c);
  param_1[2] = bVar1;
  bVar1 = Food_GetStaminaBonus(&uStack_c);
  param_1[3] = bVar1;
  bVar1 = Food_GetFatigueBonus(&uStack_c);
  param_1[4] = bVar1;
  return in_lr;
}

/* 0x0800F3E8 (48B) | held_item_Sub_0800F3E8 (orig: func_0800F3E8) | origin: pure | domain: held_item | HIGH / stanhash_map_tu */
/* held_item_Sub_0800F3E8 @ 0x0800F3E8 mode=THUMB size=0x30 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* held_item_Sub_0800F3E8 @ 0x0800F3E8  mode=THUMB  size=0x30  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 held_item_Sub_0800F3E8(byte *param_1,undefined1 param_2)

{
  byte bVar1;
  undefined4 in_lr;
  undefined1 auStack_c [4];
  
  *param_1 = *param_1 & 0xf0 | 1;
  auStack_c[0] = param_2;
  bVar1 = func_0x0800df54(auStack_c);
  param_1[2] = bVar1;
  return in_lr;
}

/* 0x0800F418 (168B) | held_item_Sub_0800F418 (orig: func_0800F418) | origin: pure | domain: held_item | HIGH / stanhash_map_tu */
/* held_item_Sub_0800F418 @ 0x0800F418 mode=THUMB size=0xA8 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* held_item_Sub_0800F418 @ 0x0800F418  mode=THUMB  size=0x110  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 held_item_Sub_0800F418(byte *param_1,undefined4 param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  undefined4 uStack_18;
  undefined1 auStack_14 [4];
  undefined1 uStack_10;
  
  uStack_18 = param_2;
  iVar2 = func_0x0800f09c(&uStack_18);
  if (iVar2 == 0) {
    *param_1 = *param_1 & 0xf8;
    bVar1 = func_0x0800f11c(&uStack_18);
    *param_1 = *param_1 & 0xf7 | (bVar1 & 1) << 3;
    RucksackItem_GetFood(auStack_14,&uStack_18);
    bVar1 = func_0x0800dcb4(auStack_14);
    param_1[2] = bVar1;
    bVar1 = Food_GetStaminaBonus(auStack_14);
    param_1[3] = bVar1;
    bVar1 = Food_GetFatigueBonus(auStack_14);
    param_1[4] = bVar1;
  }
  else if (iVar2 == 1) {
    *param_1 = *param_1 & 0xf8 | 1;
    bVar1 = func_0x0800f11c(&uStack_18);
    *param_1 = *param_1 & 0xf7 | (bVar1 & 1) << 3;
    uStack_10 = RucksackItem_GetArticle(&uStack_18);
    bVar1 = func_0x0800df54();
    param_1[2] = bVar1;
  }
  else {
    *param_1 = *param_1 & 0xf7;
  }
  return in_lr;
}

/* 0x0800F4C0 (4B) | held_item_Sub_0800F4C0 (orig: func_0800F4C0) | origin: pure | domain: held_item | HIGH / stanhash_map_tu */
/* held_item_Sub_0800F4C0 @ 0x0800F4C0 mode=THUMB size=0x4 (importado de Stan: held_item) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* MODULO STAN: held_item */

// TODO: Reconstruir logica para coincidir 1:1 con la ROM

/* 0x0800F4D8 (4B) | held_item_Sub_0800F4D8 (orig: func_0800F4D8) | origin: pure | domain: held_item | HIGH / stanhash_map_tu */
/* held_item_Sub_0800F4D8 @ 0x0800F4D8 mode=THUMB size=0x4 (importado de Stan: held_item) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* MODULO STAN: held_item */

// TODO: Reconstruir logica para coincidir 1:1 con la ROM

/* 0x0800F4F0 (4B) | held_item_Sub_0800F4F0 (orig: func_0800F4F0) | origin: pure | domain: held_item | HIGH / stanhash_map_tu */
/* held_item_Sub_0800F4F0 @ 0x0800F4F0 mode=THUMB size=0x4 (importado de Stan: held_item) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* MODULO STAN: held_item */

// TODO: Reconstruir logica para coincidir 1:1 con la ROM

/* 0x0800F510 (4B) | held_item_Sub_0800F510 (orig: func_0800F510) | origin: pure | domain: held_item | HIGH / stanhash_map_tu */
/* held_item_Sub_0800F510 @ 0x0800F510 mode=THUMB size=0x4 (importado de Stan: held_item) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* MODULO STAN: held_item */

// TODO: Reconstruir logica para coincidir 1:1 con la ROM

/* 0x0800F528 (76B) | held_item_Sub_0800F528 (orig: func_0800F528) | origin: pure | domain: held_item | HIGH / stanhash_map_tu */
/* held_item_Sub_0800F528 @ 0x0800F528 mode=THUMB size=0x4C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* held_item_Sub_0800F528 @ 0x0800F528  mode=THUMB  size=0x4C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 held_item_Sub_0800F528(byte *param_1)

{
  uint uVar1;
  undefined4 in_lr;
  undefined1 auStack_c [4];
  
  uVar1 = 0;
  if ((*param_1 & 7) == 0) {
    uVar1 = 1;
  }
  else if ((*param_1 & 7) == 1) {
    func_0x0800df50(auStack_c,param_1[2]);
    uVar1 = Article_CanBeDiscarded(auStack_c);
    uVar1 = uVar1 & 0xff;
  }
  *param_1 = *param_1 & 0xf7 | (byte)((uVar1 & 1) << 3);
  return CONCAT44(in_lr,uVar1);
}

