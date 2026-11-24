/* FIO-DECOMP-HMFOMT :: Port Readable Module: ArticleStack (7 functions) */
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

/* 0x0800E010 (24B) | ArticleStack_Ctor (orig: func_0800E010) | origin: pure | domain: ArticleStack | EXACT / stanhash_elf */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0800DF50();
u32 ArticleStack_Ctor(int arg0) {
  func_0800DF50(arg0,0x5f);
  *(u8 *)(arg0 + 1) = 0;
  return arg0;
}

/* 0x0800E028 (48B) | ArticleStack_Ctor_E028 (orig: func_0800E028) | origin: pure | domain: ArticleStack | EXACT / stanhash_elf */
/* ArticleStack_Ctor_E028 @ 0x0800E028 mode=THUMB size=0x30 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* ArticleStack_Ctor_E028 @ 0x0800E028  mode=THUMB  size=0x30  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 ArticleStack_Ctor_E028(undefined1 *self,undefined1 param_2,uint param_3)

{
  undefined1 uVar1;
  uint *puVar2;
  undefined4 in_lr;
  uint uStack_10;
  uint uStack_c;
  
  uStack_c = param_3;
  *self = param_2;
  if (param_3 == 0) {
    uVar1 = 1;
  }
  else {
    uStack_10 = 99;
    puVar2 = &uStack_10;
    if (param_3 < 99) {
      puVar2 = &uStack_c;
    }
    uVar1 = (undefined1)*puVar2;
  }
  self[1] = uVar1;
  return CONCAT44(in_lr,self);
}

/* 0x0800E058 (36B) | ArticleStack_GetArticle (orig: func_0800E058) | origin: pure | domain: ArticleStack | EXACT / stanhash_elf */
/* ArticleStack_GetArticle @ 0x0800E058 mode=THUMB size=0x24 (barrido ROM) */
/* COMPILADOR: agbcc_O2 */

u32 ArticleStack_GetArticle(const u8 *param_1)
{
    u8 buf[4];
    u8 res;
    if (param_1[1] == 0) {
        func_0800DF50(buf, 0x5f);
        res = buf[0];
    } else {
        res = param_1[0];
    }
    return res;
}

/* 0x0800E07C (20B) | ArticleStack_IsEmpty (orig: func_0800E07C) | origin: pure | domain: ArticleStack | EXACT / stanhash_elf */
/* ArticleStack_IsEmpty @ 0x0800E07C mode=THUMB size=0x14 (barrido ROM) */
/* COMPILADOR: agbcc_O2 */

u32 ArticleStack_IsEmpty(const u8 *param_1)
{
    return param_1[1] == 0;
}

/* 0x0800E090 (20B) | ArticleStack_GetAmount (orig: func_0800E090) | origin: pure | domain: ArticleStack | EXACT / stanhash_elf */
#define true 1
#define false 0
#define NULL ((void *)0)
u32 ArticleStack_GetAmount(int arg0) {
  u8 val;
  if (*(char *)(arg0 + 1) == '\0') {
    val = 0;
  }
  else {
    val = (u32)*(u16 *)(arg0 + 1);
  }
  return val;
}

/* 0x0800E0A4 (48B) | ArticleStack_AddAmount (orig: func_0800E0A4) | origin: pure | domain: ArticleStack | EXACT / stanhash_elf */
/* ArticleStack_AddAmount @ 0x0800E0A4 mode=THUMB size=0x30 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* ArticleStack_AddAmount @ 0x0800E0A4  mode=THUMB  size=0x30  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 ArticleStack_AddAmount(int param_1,int param_2)

{
  uint *puVar1;
  undefined4 in_lr;
  uint uStack_10;
  uint uStack_c;
  
  if (*(char *)(param_1 + 1) != '\0') {
    uStack_10 = 99;
    uStack_c = (uint)*(byte *)(param_1 + 1) + param_2;
    puVar1 = &uStack_10;
    if (uStack_c < 99) {
      puVar1 = &uStack_c;
    }
    *(char *)(param_1 + 1) = (char)*puVar1;
  }
  return in_lr;
}

/* 0x0800E0D4 (28B) | ArticleStack_SubtractAmount (orig: func_0800E0D4) | origin: wip | domain: ArticleStack | EXACT / stanhash_elf */
void ArticleStack_SubtractAmount(u32 param_1, u32 param_2, u32 param_3, u32 param_4) {
    register u32 r1 = param_2;
    register u32 r0 = param_1;
    register u32 r2 = param_3;
    register u32 r3 = param_4;
    register u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0;
    r2 = r0 + 0;
    r0 = *(u8 *)(r2 + 1);
    if (r0 == 0) goto loc_0800E0EA;
    if (r0 > r1) goto loc_0800E0E6;
    r0 = 0;
    goto loc_0800E0E8;
loc_0800E0E6:
    r0 = r0 - r1;
loc_0800E0E8:
    *(u8 *)(r2 + 1) = r0;
loc_0800E0EA:
    return r0;
    r0 = r0;
    return r0;
}

