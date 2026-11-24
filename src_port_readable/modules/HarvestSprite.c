/* FIO-DECOMP-HMFOMT :: Port Readable Module: HarvestSprite (10 functions) */
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

/* 0x08075450 (76B) | HarvestSprite_Sub_08075450 (orig: func_08075450) | origin: pure | domain: HarvestSprite | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 HarvestSprite_GetMinigameExp();
extern u32 HarvestSprite_Sub_080A031C();
u32 HarvestSprite_Sub_08075450(int arg0,u32 arg1) {
  int val;
  BOOL val2;
  int val3;
  u32 val4;
  int val5;
  val4 = 0;
  val5 = 0;
  val3 = 0;
  do {
    val = HarvestSprite_Sub_080A031C(*(int *)(0x0000058C + arg0) + 0x00001CD4,val3);
    if ((val != 0) && (val2 = HarvestSprite_GetMinigameExp(val,arg1), val4 < val2)) {
      val5 = val3;
      val4 = val2;
    }
    val3 = val3 + 1;
  } while (val3 < 7);
  return val5;
}

/* 0x0809E628 (52B) | HarvestSprite_Ctor (orig: func_0809E628) | origin: pure | domain: HarvestSprite | EXACT / stanhash_elf */
/* HarvestSprite_Ctor @ 0x0809E628 mode=THUMB size=0x34 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* HarvestSprite_Ctor @ 0x0809E628  mode=THUMB  size=0x44  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 HarvestSprite_Ctor(int self)

{
  undefined4 in_lr;
  
  Npc_Ctor();
  *(byte *)(self + 0x1a) = *(byte *)(self + 0x1a) & 0xc3 | 3;
  *(undefined4 *)(self + 0x1c) = 0;
  *(undefined1 *)(self + 0x14) = 0;
  *(undefined1 *)(self + 0x15) = 0;
  *(undefined1 *)(self + 0x16) = 0;
  *(undefined1 *)(self + 0x17) = 0;
  *(undefined1 *)(self + 0x18) = 0;
  *(undefined1 *)(self + 0x19) = 0;
  return CONCAT44(in_lr,self);
}

/* 0x0809E66C (20B) | HarvestSprite_GetTaskExp (orig: func_0809E66C) | origin: pure | domain: HarvestSprite | EXACT / stanhash_elf */
/* HarvestSprite_GetTaskExp @ 0x0809E66C mode=THUMB size=0x14 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* HarvestSprite_GetTaskExp @ 0x0809E66C  mode=THUMB  size=0x1C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 HarvestSprite_GetTaskExp(int self,uint param_2)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (param_2 < 3) {
    uVar1 = (uint)*(byte *)(self + 0x14 + param_2);
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

/* 0x0809E688 (20B) | HarvestSprite_GetMinigameExp (orig: func_0809E688) | origin: pure | domain: HarvestSprite | EXACT / stanhash_elf */
/* HarvestSprite_GetMinigameExp @ 0x0809E688 mode=THUMB size=0x14 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* HarvestSprite_GetMinigameExp @ 0x0809E688  mode=THUMB  size=0x14  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 HarvestSprite_GetMinigameExp(int self,uint param_2)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (param_2 < 3) {
    uVar1 = (uint)*(byte *)(self + 0x17 + param_2);
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

/* 0x0809E69C (40B) | HarvestSprite_AddTaskExp (orig: func_0809E69C) | origin: pure | domain: HarvestSprite | EXACT / stanhash_elf */
/* HarvestSprite_AddTaskExp @ 0x0809E69C mode=THUMB size=0x28 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* HarvestSprite_AddTaskExp @ 0x0809E69C  mode=THUMB  size=0x28  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 HarvestSprite_AddTaskExp(int self,uint param_2,int param_3)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (param_2 < 3) {
    uVar1 = (uint)*(byte *)(self + 0x14 + param_2) + param_3;
    if ((int)uVar1 < 0) {
      uVar1 = 0;
    }
    else if (0xff < uVar1) {
      uVar1 = 0xff;
    }
    *(char *)(self + 0x14 + param_2) = (char)uVar1;
  }
  return in_lr;
}

/* 0x0809E6C4 (40B) | HarvestSprite_StartTask (orig: func_0809E6C4) | origin: pure | domain: HarvestSprite | EXACT / stanhash_elf */
/* HarvestSprite_StartTask @ 0x0809E6C4 mode=THUMB size=0x28 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* HarvestSprite_StartTask @ 0x0809E6C4  mode=THUMB  size=0x38  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 HarvestSprite_StartTask(int self,byte param_2,byte param_3)

{
  undefined4 in_lr;
  
  *(byte *)(self + 0x1a) = *(byte *)(self + 0x1a) & 0xe0 | param_2 & 3 | (param_3 & 7) << 2;
  return in_lr;
}

/* 0x0809E6FC (96B) | HarvestSprite_SetPlayedMinigame (orig: func_0809E6FC) | origin: pure | domain: HarvestSprite | EXACT / stanhash_elf */
/* HarvestSprite_SetPlayedMinigame @ 0x0809E6FC mode=THUMB size=0x60 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* HarvestSprite_SetPlayedMinigame @ 0x0809E6FC  mode=THUMB  size=0x60  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 HarvestSprite_SetPlayedMinigame(int self,int param_2,char param_3)

{
  char cVar1;
  byte bVar2;
  char *pcVar3;
  int iVar4;
  undefined4 in_lr;
  
  *(byte *)(self + 0x1a) = *(byte *)(self + 0x1a) | 0x20;
  if (param_3 != '\0') {
    pcVar3 = (char *)(self + 0x17 + param_2);
    cVar1 = *pcVar3;
    if (cVar1 != '\x1f') {
      *pcVar3 = cVar1 + '\x01';
    }
  }
  bVar2 = *(byte *)(self + 0x17 + param_2);
  iVar4 = 1;
  if (((5 < bVar2) && (iVar4 = 2, 10 < bVar2)) && (iVar4 = 4, bVar2 < 0x11)) {
    iVar4 = 3;
  }
  if (param_3 == '\0') {
    iVar4 = -iVar4;
  }
  HarvestSprite_AddTaskExp(self,param_2,iVar4);
  Npc_AddFriendship(self,1);
  return in_lr;
}

/* 0x0809E75C (68B) | HarvestSprite_TaskDayUpdate (orig: func_0809E75C) | origin: pure | domain: HarvestSprite | EXACT / stanhash_elf */
/* HarvestSprite_TaskDayUpdate @ 0x0809E75C mode=THUMB size=0x44 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* HarvestSprite_TaskDayUpdate @ 0x0809E75C  mode=THUMB  size=0x44  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 HarvestSprite_TaskDayUpdate(int self)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(self + 0x1a);
  if ((bVar1 & 0x1c) != 0) {
    uVar2 = ((bVar1 & 0x1f) >> 2) - 1 & 7;
    bVar1 = bVar1 & 0xe3 | (byte)(uVar2 << 2);
    *(byte *)(self + 0x1a) = bVar1;
    if (uVar2 == 0) {
      *(byte *)(self + 0x1a) = bVar1 | 3;
    }
    Npc_SubtractFriendship(self,2);
  }
  return in_lr;
}

/* 0x0809E7A0 (40B) | HarvestSprite_DayUpdate (orig: func_0809E7A0) | origin: pure | domain: HarvestSprite | EXACT / stanhash_elf */
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
extern u32 Npc_DayUpdate();
extern u32 func_080D0ED0();
extern u32 LibC_rand();
void HarvestSprite_DayUpdate(int arg0) {
  u32 val;
  Npc_DayUpdate(arg0,func_080D0ED0(LibC_rand(),100));
  *(u8 *)(arg0 + 0x1a) = (s8)*(u8 *)(arg0 + 0x1a) & 0xdf;
}

/* 0x080A031C (104B) | HarvestSprite_Sub_080A031C (orig: func_080A031C) | origin: wip | domain: HarvestSprite | MEDIUM / graph_algebra */
void * HarvestSprite_Sub_080A031C(int self,u32 param_2) {
  int iVar1;

  if (param_2 < 7) {
    switch(*(u32 *)(((const u32 *)0x080a0330) + param_2 * 4) & 0xfffffffe) {
    case 0x80a0334:
      goto LAB_080a0350;
    case 0x80a0354:
      iVar1 = 0x33c;
      break;
    case 0x80a035a:
      iVar1 = 0x360;
      break;
    case 0x80a0360:
      iVar1 = 900;
      break;
    case 0x80a0366:
      iVar1 = 0x3a8;
      break;
    case 0x80a036c:
      iVar1 = 0x3cc;
      break;
    case 0x80a0372:
      iVar1 = 0x3f0;
      break;
    case 0x80a0378:
      iVar1 = 0x414;
    }
    self = self + iVar1;
  }
  else {
LAB_080a0350:
    self = 0;
  }
  return (void *)self;
}

