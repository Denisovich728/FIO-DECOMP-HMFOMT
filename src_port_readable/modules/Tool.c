/* FIO-DECOMP-HMFOMT :: Port Readable Module: Tool (4 functions) */
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

/* 0x0800DB34 (44B) | Tool_GetName (orig: func_0800DB34) | origin: pure | domain: Tool | EXACT / stanhash_elf */
/* Tool_GetName @ 0x0800DB34 mode=THUMB size=0x2C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Tool_GetName @ 0x0800DB34  mode=THUMB  size=0x2C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Tool_GetName(byte *param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = _DAT_0800db48;
  if (*param_1 < 0x51) {
    uVar1 = *(undefined4 *)((uint)*param_1 * 0xc + _DAT_0800db5c);
  }
  return CONCAT44(in_lr,uVar1);
}

/* 0x0800DB60 (44B) | Tool_GetIconId (orig: func_0800DB60) | origin: pure | domain: Tool | EXACT / stanhash_elf */
/* Tool_GetIconId @ 0x0800DB60 mode=THUMB size=0x2C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Tool_GetIconId @ 0x0800DB60  mode=THUMB  size=0x2C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Tool_GetIconId(byte *param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = _DAT_0800db74;
  if (*param_1 < 0x51) {
    uVar1 = (uint)*(ushort *)((uint)*param_1 * 0xc + _DAT_0800db88 + 4);
  }
  return CONCAT44(in_lr,uVar1);
}

/* 0x0800DB8C (60B) | Tool_GetDesc (orig: func_0800DB8C) | origin: pure | domain: Tool | EXACT / stanhash_elf */
/* Tool_GetDesc @ 0x0800DB8C mode=THUMB size=0x3C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Tool_GetDesc @ 0x0800DB8C  mode=THUMB  size=0x3C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Tool_GetDesc(byte *param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = _DAT_0800dbc4;
  if ((*param_1 < 0x51) && (iVar1 = *(int *)((uint)*param_1 * 0xc + _DAT_0800dbb4 + 8), iVar1 == 0))
  {
    iVar1 = _DAT_0800dbb8;
  }
  return CONCAT44(in_lr,iVar1);
}

/* 0x0807D1DC (60B) | Tool_Sub_0807D1DC (orig: func_0807D1DC) | origin: pure | domain: Tool | MEDIUM / graph_algebra */
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
extern u32 func_0800DB2C();
extern u32 Tool_GetDesc();
extern u32 code_0803EE94_78C0_Sub_080CABEC();
struct Entry_080FDDD8 { u32 val; u32 pad; };
extern const struct Entry_080FDDD8 g_080FDDD8[];
void Tool_Sub_0807D1DC(int arg0, int arg1) {
  u32 val;
  u8 auStack_c[4];
  func_0800DB2C(auStack_c, g_080FDDD8[*(int *)(arg1 * 4 + arg0 + 0x2a8)].val);
  val = Tool_GetDesc(auStack_c);
  code_0803EE94_78C0_Sub_080CABEC(arg0, val);
}

