/* FIO-DECOMP-HMFOMT :: Port Readable Module: RecordPlayer (3 functions) */
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

/* 0x0800BB7C (40B) | RecordPlayer_GetUnknown (orig: func_0800BB7C) | origin: pure | domain: RecordPlayer | EXACT / stanhash_elf */
/* RecordPlayer_GetUnknown @ 0x0800BB7C mode=THUMB size=0x28 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* RecordPlayer_GetUnknown @ 0x0800BB7C  mode=THUMB  size=0x28  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 RecordPlayer_GetUnknown(uint *self)

{
  char cVar1;
  uint uVar2;
  undefined4 in_lr;
  
  cVar1 = func_0x0800bb74();
  if (cVar1 == '\0') {
    uVar2 = 199;
  }
  else {
    uVar2 = (uint)*(byte *)(((*self & 0x1f) >> 1) + _DAT_0800bb98);
  }
  return CONCAT44(in_lr,uVar2);
}

/* 0x0800BBA4 (76B) | RecordPlayer_RemoveAlbum (orig: func_0800BBA4) | origin: pure | domain: RecordPlayer | EXACT / stanhash_elf */
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
extern u32 func_0800BB74();
extern u32 func_0800DF50();
extern u32 ArticleStack_Ctor();
extern u32 ArticleStack_Ctor_E028();
struct _bf { u32 f0 : 1; u32 f1 : 4; };
u32 RecordPlayer_RemoveAlbum(u32 arg0, struct _bf *arg1) {
  u8 auStack_10[4];
  if ((u8)func_0800BB74(arg1) == 0) {
    ArticleStack_Ctor(arg0);
  } else {
    arg1->f0 = 0;
    func_0800DF50(auStack_10, arg1->f1 + 0x40);
    ArticleStack_Ctor_E028(arg0, auStack_10[0], 1);
  }
  return arg0;
}

/* 0x0800BBF0 (104B) | RecordPlayer_SetAlbum (orig: func_0800BBF0) | origin: pure | domain: RecordPlayer | EXACT / stanhash_elf */
/* RecordPlayer_SetAlbum @ 0x0800BBF0 mode=THUMB size=0x68 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* RecordPlayer_SetAlbum @ 0x0800BBF0  mode=THUMB  size=0x68  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 RecordPlayer_SetAlbum(undefined4 self,uint *param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  undefined1 auStack_18 [4];
  
  iVar2 = func_0x0800df54(param_3);
  if ((iVar2 < 0x4f) && (0x3f < iVar2)) {
    *(byte *)param_2 = (byte)*param_2 | 1;
    uVar3 = *param_2;
    cVar1 = func_0x0800df54(param_3);
    *(byte *)param_2 = (byte)*param_2 & 0xe1 | (cVar1 - 0x40U & 0xf) << 1;
    func_0x0800df50(auStack_18,((uVar3 & 0x1f) >> 1) + 0x40);
    ArticleStack_Ctor_E028(self,auStack_18[0],1);
  }
  else {
    ArticleStack_Ctor(self);
  }
  return CONCAT44(in_lr,self);
}

