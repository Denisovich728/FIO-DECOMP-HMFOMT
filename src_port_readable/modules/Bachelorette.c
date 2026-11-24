/* FIO-DECOMP-HMFOMT :: Port Readable Module: Bachelorette (7 functions) */
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

/* 0x0809E458 (64B) | Bachelorette_Ctor (orig: func_0809E458) | origin: pure | domain: Bachelorette | EXACT / stanhash_elf */
/* Bachelorette_Ctor @ 0x0809E458 mode=THUMB size=0x40 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Bachelorette_Ctor @ 0x0809E458  mode=THUMB  size=0x6C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Bachelorette_Ctor(int self)

{
  undefined4 in_lr;
  
  Npc_Ctor();
  *(undefined2 *)(self + 0x14) = 0;
  *(byte *)(self + 0x16) = *(byte *)(self + 0x16) & 0xc0;
  *(ushort *)(self + 0x16) = (ushort)_DAT_0809e494 & *(ushort *)(self + 0x16);
  *(byte *)(self + 0x17) = *(byte *)(self + 0x17) & 0x81;
  return CONCAT44(in_lr,self);
}

/* 0x0809E4C4 (36B) | Bachelorette_AddLove (orig: func_0809E4C4) | origin: pure | domain: Bachelorette | EXACT / stanhash_elf */
#define true 1
#define false 0
#define NULL ((void *)0)
void Bachelorette_AddLove(int arg0,int arg1) {
  u32 val;
  val = (u32)*(u16 *)(arg0 + 0x14) + arg1;
  if ((int)val < 0) {
    val = 0;
  }
  else if (0x0000FFFF < val) {
    val = 0x0000FFFF;
  }
  *(short *)(arg0 + 0x14) = (short)val;
}

/* 0x0809E4E8 (12B) | Bachelorette_SubtractLove (orig: func_0809E4E8) | origin: pure | domain: Bachelorette | EXACT / stanhash_elf */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 Bachelorette_AddLove();
void Bachelorette_SubtractLove(u32 arg0,int arg1) {
  Bachelorette_AddLove(arg0,-arg1);
}

/* 0x0809E4F8 (40B) | Bachelorette_PlayerEventUpdate (orig: func_0809E4F8) | origin: pure | domain: Bachelorette | EXACT / stanhash_elf */
/* Bachelorette_PlayerEventUpdate @ 0x0809E4F8 mode=THUMB size=0x28 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Bachelorette_PlayerEventUpdate @ 0x0809E4F8  mode=THUMB  size=0x28  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 Bachelorette_PlayerEventUpdate(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0x16) & 7;
  if (bVar1 < 6) {
    *(byte *)(param_1 + 0x16) = *(byte *)(param_1 + 0x16) & 0xc0 | bVar1 + 1 & 7;
  }
  return in_lr;
}

/* 0x0809E520 (48B) | Bachelorette_RivalEventUpdate (orig: func_0809E520) | origin: pure | domain: Bachelorette | EXACT / stanhash_elf */
/* Bachelorette_RivalEventUpdate @ 0x0809E520 mode=THUMB size=0x30 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Bachelorette_RivalEventUpdate @ 0x0809E520  mode=THUMB  size=0x30  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 Bachelorette_RivalEventUpdate(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = (*(ushort *)(param_1 + 0x16) & 0x1ff) >> 6;
  if (uVar1 < 5) {
    *(ushort *)(param_1 + 0x16) =
         (ushort)_DAT_0809e54c & *(ushort *)(param_1 + 0x16) | (ushort)((uVar1 + 1 & 7) << 6);
    *(byte *)(param_1 + 0x17) = *(byte *)(param_1 + 0x17) & 0xf1;
  }
  return in_lr;
}

/* 0x0809E550 (36B) | Bachelorette_Sub_0809E550 (orig: func_0809E550) | origin: pure | domain: Bachelorette | HIGH / stanhash_elf_class */
/* Bachelorette_Sub_0809E550 @ 0x0809E550 mode=THUMB size=0x24 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Bachelorette_Sub_0809E550 @ 0x0809E550  mode=THUMB  size=0x24  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 Bachelorette_Sub_0809E550(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = (*(byte *)(param_1 + 0x17) & 0x7f) >> 4;
  if (uVar1 < 5) {
    *(byte *)(param_1 + 0x17) = *(byte *)(param_1 + 0x17) & 0x8f | (byte)((uVar1 + 1 & 7) << 4);
  }
  return in_lr;
}

/* 0x0809E574 (180B) | Bachelorette_DayUpdate (orig: func_0809E574) | origin: pure | domain: Bachelorette | EXACT / stanhash_elf */
/* Bachelorette_DayUpdate @ 0x0809E574 mode=THUMB size=0xB4 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Bachelorette_DayUpdate @ 0x0809E574  mode=THUMB  size=0xB4  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 Bachelorette_DayUpdate(int param_1,char param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  cVar1 = func_0x0809e350();
  if (cVar1 != '\0') {
    Bachelorette_AddLove(param_1,200);
  }
  Npc_DayUpdate(param_1,param_3);
  iVar2 = func_0x0809e340(param_1);
  if ((iVar2 != 0) && (param_3 < 10)) {
    Bachelorette_SubtractLove(param_1,200);
  }
  if (param_2 != '\0') {
    if ((*(byte *)(param_1 + 0x16) & 7) < 6) {
      Bachelorette_SubtractLove(param_1,100);
    }
    else {
      uVar3 = func_0x0809e340(param_1);
      if (4 < uVar3) {
        uVar4 = func_0x080d11e4();
        iVar2 = func_0x080d0ed0(uVar4,100);
        if (iVar2 < 10) {
          Bachelorette_SubtractLove(param_1,1000);
        }
      }
    }
  }
  uVar3 = (*(byte *)(param_1 + 0x16) & 0x3f) >> 3;
  if (uVar3 < 7) {
    *(byte *)(param_1 + 0x16) = *(byte *)(param_1 + 0x16) & 199 | (byte)((uVar3 + 1 & 7) << 3);
  }
  uVar3 = (*(byte *)(param_1 + 0x17) & 0xf) >> 1;
  if (uVar3 < 7) {
    *(byte *)(param_1 + 0x17) = *(byte *)(param_1 + 0x17) & 0xf1 | (byte)((uVar3 + 1 & 7) << 1);
  }
  return in_lr;
}

