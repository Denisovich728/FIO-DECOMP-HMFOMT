/* FIO-DECOMP-HMFOMT :: Port Readable Module: FarmHouse (29 functions) */
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

/* 0x0800BC58 (88B) | FarmHouse_Sub_0800BC58 (orig: func_0800BC58) | origin: pure | domain: FarmHouse | MEDIUM / graph_algebra */
/* FarmHouse_Sub_0800BC58 @ 0x0800BC58 mode=THUMB size=0x58 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* FarmHouse_Sub_0800BC58 @ 0x0800BC58  mode=THUMB  size=0x58  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 FarmHouse_Sub_0800BC58(undefined4 *self)

{
  undefined4 in_lr;
  undefined4 *puVar1;
  
  for (puVar1 = self; puVar1 != self + 2; puVar1 = puVar1 + 1) {
    *puVar1 = 0;
  }
  self[1] = self[1] & 0xf0000000;
  for (puVar1 = self + 2; puVar1 != self + 4; puVar1 = puVar1 + 1) {
    *puVar1 = 0;
  }
  self[3] = self[3] & 0xf0000000;
  return CONCAT44(in_lr,self);
}

/* 0x0800BE70 (164B) | FarmHouse_Ctor (orig: func_0800BE70) | origin: pure | domain: FarmHouse | EXACT / stanhash_elf */
/* FarmHouse_Ctor @ 0x0800BE70 mode=THUMB size=0xA4 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
(sin referencia de Ghidra en esta direccion)

/* 0x0800BF1C (24B) | FarmHouse_GetFridge (orig: func_0800BF1C) | origin: pure | domain: FarmHouse | EXACT / stanhash_elf */
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
/* paridad 91.7% preset agbcc_O2 */
u32 FarmHouse_GetFridge(int arg0) {
  int val;
  int hv;
  hv = *(u8 *)(arg0 + 1) << 30;
  val = 0;
  if (hv < 0)
    val = arg0 + 8;
  return val;
}

/* 0x0800BF34 (28B) | FarmHouse_GetShelf (orig: func_0800BF34) | origin: pure | domain: FarmHouse | EXACT / stanhash_elf */
/* FarmHouse_GetShelf @ 0x0800BF34 mode=THUMB size=0x1C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* FarmHouse_GetShelf @ 0x0800BF34  mode=THUMB  size=0x1C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 FarmHouse_GetShelf(int self)

{
  undefined4 in_lr;
  
  if ((int)((uint)*(byte *)(self + 1) * 0x20000000) < 0) {
    self = self + 0x108;
  }
  else {
    self = 0;
  }
  return CONCAT44(in_lr,self);
}

/* 0x0800BF50 (28B) | FarmHouse_GetRecordPlayer (orig: func_0800BF50) | origin: pure | domain: FarmHouse | EXACT / stanhash_elf */
/* FarmHouse_GetRecordPlayer @ 0x0800BF50 mode=THUMB size=0x1C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* FarmHouse_GetRecordPlayer @ 0x0800BF50  mode=THUMB  size=0xD4  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 FarmHouse_GetRecordPlayer(int self)

{
  undefined4 in_lr;
  
  if ((int)((uint)*(byte *)(self + 1) * 0x10000000) < 0) {
    self = self + 0x188;
  }
  else {
    self = 0;
  }
  return CONCAT44(in_lr,self);
}

/* 0x0800C024 (36B) | FarmHouse_UpgradeHouseLevel (orig: func_0800C024) | origin: pure | domain: FarmHouse | EXACT / stanhash_elf */
/* FarmHouse_UpgradeHouseLevel @ 0x0800C024 mode=THUMB size=0x24 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* FarmHouse_UpgradeHouseLevel @ 0x0800C024  mode=THUMB  size=0x24  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 FarmHouse_UpgradeHouseLevel(byte *self)

{
  byte bVar1;
  undefined4 in_lr;
  
  bVar1 = *self;
  if ((bVar1 & 3) < 2) {
    *self = bVar1 & 0xfc | (bVar1 & 3) + 1 & 3;
  }
  return in_lr;
}

/* 0x0800C048 (24B) | FarmHouse_GetFridge_C048 (orig: func_0800C048) | origin: pure | domain: FarmHouse | EXACT / stanhash_elf */
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
/* paridad 91.7% preset agbcc_O2 */
u32 FarmHouse_GetFridge_C048(int arg0) {
  int val;
  int hv;
  hv = *(u8 *)(arg0 + 1) << 30;
  val = 0;
  if (hv < 0)
    val = arg0 + 8;
  return val;
}

/* 0x0800C060 (28B) | FarmHouse_GetShelf_C060 (orig: func_0800C060) | origin: pure | domain: FarmHouse | EXACT / stanhash_elf */
/* FarmHouse_GetShelf_C060 @ 0x0800C060 mode=THUMB size=0x1C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* FarmHouse_GetShelf_C060 @ 0x0800C060  mode=THUMB  size=0x1C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 FarmHouse_GetShelf_C060(int self)

{
  undefined4 in_lr;
  
  if ((int)((uint)*(byte *)(self + 1) * 0x20000000) < 0) {
    self = self + 0x108;
  }
  else {
    self = 0;
  }
  return CONCAT44(in_lr,self);
}

/* 0x0800C07C (28B) | FarmHouse_GetRecordPlayer_C07C (orig: func_0800C07C) | origin: pure | domain: FarmHouse | EXACT / stanhash_elf */
/* FarmHouse_GetRecordPlayer_C07C @ 0x0800C07C mode=THUMB size=0x1C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* FarmHouse_GetRecordPlayer_C07C @ 0x0800C07C  mode=THUMB  size=0x1C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 FarmHouse_GetRecordPlayer_C07C(int self)

{
  undefined4 in_lr;
  
  if ((int)((uint)*(byte *)(self + 1) * 0x10000000) < 0) {
    self = self + 0x188;
  }
  else {
    self = 0;
  }
  return CONCAT44(in_lr,self);
}

/* 0x0800C098 (36B) | FarmHouse_SetWindowStyle (orig: func_0800C098) | origin: pure | domain: FarmHouse | EXACT / stanhash_elf */
/* FarmHouse_SetWindowStyle @ 0x0800C098 mode=THUMB size=0x24 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* FarmHouse_SetWindowStyle @ 0x0800C098  mode=THUMB  size=0x24  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 FarmHouse_SetWindowStyle(byte *self,byte param_2)

{
  undefined4 in_lr;
  
  if (1 < (*self & 3)) {
    *self = *self & 0xf3 | (param_2 & 3) << 2;
  }
  return in_lr;
}

/* 0x0800C0BC (36B) | FarmHouse_SetMailboxStyle (orig: func_0800C0BC) | origin: pure | domain: FarmHouse | EXACT / stanhash_elf */
/* FarmHouse_SetMailboxStyle @ 0x0800C0BC mode=THUMB size=0x24 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* FarmHouse_SetMailboxStyle @ 0x0800C0BC  mode=THUMB  size=0x24  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 FarmHouse_SetMailboxStyle(byte *self,byte param_2)

{
  undefined4 in_lr;
  
  if (1 < (*self & 3)) {
    *self = *self & 0xcf | (param_2 & 3) << 4;
  }
  return in_lr;
}

/* 0x0800C0E0 (28B) | FarmHouse_SetDoghouseStyle (orig: func_0800C0E0) | origin: pure | domain: FarmHouse | EXACT / stanhash_elf */
/* FarmHouse_SetDoghouseStyle @ 0x0800C0E0 mode=THUMB size=0x1C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* FarmHouse_SetDoghouseStyle @ 0x0800C0E0  mode=THUMB  size=0x1C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 FarmHouse_SetDoghouseStyle(byte *self,char param_2)

{
  undefined4 in_lr;
  
  if (1 < (*self & 3)) {
    *self = *self & 0x3f | param_2 << 6;
  }
  return in_lr;
}

/* 0x0800C0FC (28B) | FarmHouse_AddBathroom (orig: func_0800C0FC) | origin: pure | domain: FarmHouse | EXACT / stanhash_elf */
#define true 1
#define false 0
#define NULL ((void *)0)
void FarmHouse_AddBathroom(u8 *arg0) {
  if ((*arg0 & 3) == 2) {
    arg0[1] = arg0[1] | 1;
  }
}

/* 0x0800C118 (28B) | FarmHouse_AddFridge (orig: func_0800C118) | origin: pure | domain: FarmHouse | EXACT / stanhash_elf */
#define true 1
#define false 0
#define NULL ((void *)0)
void FarmHouse_AddFridge(u8 *arg0) {
  if ((*arg0 & 3) != 0) {
    arg0[1] = arg0[1] | 2;
  }
}

/* 0x0800C134 (28B) | FarmHouse_AddShelf (orig: func_0800C134) | origin: pure | domain: FarmHouse | EXACT / stanhash_elf */
#define true 1
#define false 0
#define NULL ((void *)0)
void FarmHouse_AddShelf(u8 *arg0) {
  if ((*arg0 & 3) != 0) {
    arg0[1] = arg0[1] | 4;
  }
}

/* 0x0800C15C (28B) | FarmHouse_AddLargeBed (orig: func_0800C15C) | origin: pure | domain: FarmHouse | EXACT / stanhash_elf */
/* FarmHouse_AddLargeBed @ 0x0800C15C mode=THUMB size=0x1C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* FarmHouse_AddLargeBed @ 0x0800C15C  mode=THUMB  size=0x1C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 FarmHouse_AddLargeBed(byte *self)

{
  undefined4 in_lr;
  
  if (1 < (*self & 3)) {
    self[1] = self[1] | 0x10;
  }
  return in_lr;
}

/* 0x0800C178 (28B) | FarmHouse_AddCarpet (orig: func_0800C178) | origin: pure | domain: FarmHouse | EXACT / stanhash_elf */
#define true 1
#define false 0
#define NULL ((void *)0)
void FarmHouse_AddCarpet(u8 *arg0) {
  if ((*arg0 & 3) != 0) {
    arg0[1] = arg0[1] | 0x20;
  }
}

/* 0x0800C25C (32B) | FarmHouse_LightFireplace (orig: func_0800C25C) | origin: pure | domain: FarmHouse | EXACT / stanhash_elf */
struct S { u32 a:2; u32 pad:30; u32 b:6; bool c:1; };
extern "C" void FarmHouse_LightFireplace(S *s) {
    if (s->a > 1 && !s->c)
        s->c = true;
}

/* 0x0800C27C (40B) | FarmHouse_AddKitchen (orig: func_0800C27C) | origin: pure | domain: FarmHouse | EXACT / stanhash_elf */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 FarmHouse_GetFridge_C048();
void FarmHouse_AddKitchen(u8 *arg0) {
  int val;
  if (((*arg0 & 3) != 0) && (val = FarmHouse_GetFridge_C048(arg0), val != 0)) {
    arg0[4] = arg0[4] | 0x80;
  }
}

/* 0x0800C2A4 (24B) | FarmHouse_AddKitchenKnife (orig: func_0800C2A4) | origin: pure | domain: FarmHouse | EXACT / stanhash_elf */
/* FarmHouse_AddKitchenKnife @ 0x0800C2A4 mode=THUMB size=0x18 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* FarmHouse_AddKitchenKnife @ 0x0800C2A4  mode=THUMB  size=0x18  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 FarmHouse_AddKitchenKnife(int self)

{
  undefined4 in_lr;
  
  if (*(char *)(self + 4) < '\0') {
    *(byte *)(self + 5) = *(byte *)(self + 5) | 1;
  }
  return in_lr;
}

/* 0x0800C2BC (24B) | FarmHouse_AddKitchenFryingPan (orig: func_0800C2BC) | origin: pure | domain: FarmHouse | EXACT / stanhash_elf */
/* FarmHouse_AddKitchenFryingPan @ 0x0800C2BC mode=THUMB size=0x18 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* FarmHouse_AddKitchenFryingPan @ 0x0800C2BC  mode=THUMB  size=0x18  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 FarmHouse_AddKitchenFryingPan(int self)

{
  undefined4 in_lr;
  
  if (*(char *)(self + 4) < '\0') {
    *(byte *)(self + 5) = *(byte *)(self + 5) | 2;
  }
  return in_lr;
}

/* 0x0800C2D4 (24B) | FarmHouse_AddKitchenPot (orig: func_0800C2D4) | origin: pure | domain: FarmHouse | EXACT / stanhash_elf */
/* FarmHouse_AddKitchenPot @ 0x0800C2D4 mode=THUMB size=0x18 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* FarmHouse_AddKitchenPot @ 0x0800C2D4  mode=THUMB  size=0x18  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 FarmHouse_AddKitchenPot(int self)

{
  undefined4 in_lr;
  
  if (*(char *)(self + 4) < '\0') {
    *(byte *)(self + 5) = *(byte *)(self + 5) | 4;
  }
  return in_lr;
}

/* 0x0800C2EC (24B) | FarmHouse_AddKitchenMixer (orig: func_0800C2EC) | origin: pure | domain: FarmHouse | EXACT / stanhash_elf */
/* FarmHouse_AddKitchenMixer @ 0x0800C2EC mode=THUMB size=0x18 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* FarmHouse_AddKitchenMixer @ 0x0800C2EC  mode=THUMB  size=0x18  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 FarmHouse_AddKitchenMixer(int self)

{
  undefined4 in_lr;
  
  if (*(char *)(self + 4) < '\0') {
    *(byte *)(self + 5) = *(byte *)(self + 5) | 8;
  }
  return in_lr;
}

/* 0x0800C304 (24B) | FarmHouse_AddKitchenWhisk (orig: func_0800C304) | origin: pure | domain: FarmHouse | EXACT / stanhash_elf */
/* FarmHouse_AddKitchenWhisk @ 0x0800C304 mode=THUMB size=0x18 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* FarmHouse_AddKitchenWhisk @ 0x0800C304  mode=THUMB  size=0x18  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 FarmHouse_AddKitchenWhisk(int self)

{
  undefined4 in_lr;
  
  if (*(char *)(self + 4) < '\0') {
    *(byte *)(self + 5) = *(byte *)(self + 5) | 0x10;
  }
  return in_lr;
}

/* 0x0800C31C (24B) | FarmHouse_KitchenRollingPin (orig: func_0800C31C) | origin: pure | domain: FarmHouse | EXACT / stanhash_elf */
/* FarmHouse_KitchenRollingPin @ 0x0800C31C mode=THUMB size=0x18 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* FarmHouse_KitchenRollingPin @ 0x0800C31C  mode=THUMB  size=0x18  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 FarmHouse_KitchenRollingPin(int self)

{
  undefined4 in_lr;
  
  if (*(char *)(self + 4) < '\0') {
    *(byte *)(self + 5) = *(byte *)(self + 5) | 0x20;
  }
  return in_lr;
}

/* 0x0800C334 (24B) | FarmHouse_AddKitchenOven (orig: func_0800C334) | origin: pure | domain: FarmHouse | EXACT / stanhash_elf */
/* FarmHouse_AddKitchenOven @ 0x0800C334 mode=THUMB size=0x18 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* FarmHouse_AddKitchenOven @ 0x0800C334  mode=THUMB  size=0x18  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 FarmHouse_AddKitchenOven(int self)

{
  undefined4 in_lr;
  
  if (*(char *)(self + 4) < '\0') {
    *(byte *)(self + 5) = *(byte *)(self + 5) | 0x40;
  }
  return in_lr;
}

/* 0x0800C34C (24B) | FarmHouse_AddKitchenSeasoningSet (orig: func_0800C34C) | origin: pure | domain: FarmHouse | EXACT / stanhash_elf */
/* FarmHouse_AddKitchenSeasoningSet @ 0x0800C34C mode=THUMB size=0x18 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* FarmHouse_AddKitchenSeasoningSet @ 0x0800C34C  mode=THUMB  size=0x18  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 FarmHouse_AddKitchenSeasoningSet(int self)

{
  undefined4 in_lr;
  
  if (*(char *)(self + 4) < '\0') {
    *(byte *)(self + 5) = *(byte *)(self + 5) | 0x80;
  }
  return in_lr;
}

/* 0x0800C364 (44B) | FarmHouse_SetStockingArticleId (orig: func_0800C364) | origin: pure | domain: FarmHouse | EXACT / stanhash_elf */
/* FarmHouse_SetStockingArticleId @ 0x0800C364 mode=THUMB size=0x2C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* FarmHouse_SetStockingArticleId @ 0x0800C364  mode=THUMB  size=0x2C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 FarmHouse_SetStockingArticleId(int self,uint param_2)

{
  undefined4 in_lr;
  
  *(byte *)(self + 3) = *(byte *)(self + 3) & 0x3f | (byte)((param_2 & 3) << 6);
  *(byte *)(self + 4) = *(byte *)(self + 4) & 0xc0 | (byte)(param_2 >> 2) & 0x3f;
  return in_lr;
}

/* 0x0800C390 (192B) | FarmHouse_DayUpdate (orig: func_0800C390) | origin: pure | domain: FarmHouse | EXACT / stanhash_elf */
/* FarmHouse_DayUpdate @ 0x0800C390 mode=THUMB size=0xC0 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* FarmHouse_DayUpdate @ 0x0800C390  mode=THUMB  size=0xC0  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 FarmHouse_DayUpdate(uint *self,int param_2)

{
  ushort uVar1;
  byte bVar2;
  uint uVar3;
  undefined4 in_lr;
  
  *(byte *)(self + 1) = (byte)self[1] & 0xbf;
  if (-1 < (int)((uint)*(byte *)((int)self + 1) * 0x2000000)) {
    return in_lr;
  }
  if ((*self & 0x7fffff) >> 0xf == 0x5f) {
    return in_lr;
  }
  uVar1 = *(ushort *)((int)self + 2);
  if ((uVar1 & 0x780) != 0) {
    *(ushort *)((int)self + 2) =
         (ushort)_DAT_0800c3e8 & uVar1 | (ushort)((((uVar1 & 0x7ff) >> 7) - 1 & 0xf) << 7);
  }
  uVar3 = (*self & 0x7fffff) >> 0xf;
  if (uVar3 < 5) {
    switch(*(uint *)(uVar3 * 4 + _DAT_0800c3ec) & 0xfffffffe) {
    case 0x800c404:
      if (param_2 == 0) goto LAB_0800c420;
      break;
    case 0x800c40a:
      if (param_2 == 1) goto LAB_0800c420;
      break;
    case 0x800c410:
      if (param_2 == 2) goto LAB_0800c420;
    }
    *self = _DAT_0800c44c & *self | 0x2f8000;
  }
LAB_0800c420:
  if (((*self & 0x7800000) == 0) && (bVar2 = func_0x080d11e4(), bVar2 < 0x65)) {
    *self = *self & _DAT_0800c44c | 0x2f8000;
  }
  return in_lr;
}

