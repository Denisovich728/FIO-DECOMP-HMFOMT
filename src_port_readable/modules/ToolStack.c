/* FIO-DECOMP-HMFOMT :: Port Readable Module: ToolStack (7 functions) */
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

/* 0x0800DBC8 (24B) | ToolStack_Ctor (orig: func_0800DBC8) | origin: pure | domain: ToolStack | EXACT / stanhash_elf */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0800DB2C();
u32 ToolStack_Ctor(int arg0) {
  func_0800DB2C(arg0,0x51);
  *(u8 *)(arg0 + 1) = 0;
  return arg0;
}

/* 0x0800DBE0 (48B) | ToolStack_Ctor_DBE0 (orig: func_0800DBE0) | origin: pure | domain: ToolStack | EXACT / stanhash_elf */
/* ToolStack_Ctor_DBE0 @ 0x0800DBE0 mode=THUMB size=0x30 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* ToolStack_Ctor_DBE0 @ 0x0800DBE0  mode=THUMB  size=0x30  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 ToolStack_Ctor_DBE0(undefined1 *self,undefined1 param_2,uint param_3)

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

/* 0x0800DC10 (36B) | ToolStack_GetTool (orig: func_0800DC10) | origin: pure | domain: ToolStack | EXACT / stanhash_elf */
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
u8 ToolStack_GetTool(u8 *arg0) {
    u8 buf[4];
    if (arg0[1] != 0)
        return arg0[0];
    func_0800DB2C(&buf, 0x51);
    return buf[0];
}

/* 0x0800DC34 (20B) | ToolStack_IsEmpty (orig: func_0800DC34) | origin: pure | domain: ToolStack | EXACT / stanhash_elf */
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
u32 ToolStack_IsEmpty(const u8 *arg0) {
    return arg0[1] == 0;
}

/* 0x0800DC48 (20B) | ToolStack_GetAmount (orig: func_0800DC48) | origin: pure | domain: ToolStack | EXACT / stanhash_elf */
#define true 1
#define false 0
#define NULL ((void *)0)
u32 ToolStack_GetAmount(int arg0) {
  u32 val;
  if (*(char *)(arg0 + 1) == '\0') {
    val = 0;
  }
  else {
    val = (u8)*(s32 *)(arg0 + 1);
  }
  return val;
}

/* 0x0800DC5C (48B) | ToolStack_AddAmount (orig: func_0800DC5C) | origin: pure | domain: ToolStack | EXACT / stanhash_elf */
/* ToolStack_AddAmount @ 0x0800DC5C mode=THUMB size=0x30 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* ToolStack_AddAmount @ 0x0800DC5C  mode=THUMB  size=0x30  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 ToolStack_AddAmount(int param_1,int param_2)

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

/* 0x0800DC8C (28B) | ToolStack_SubtractAmount (orig: func_0800DC8C) | origin: wip | domain: ToolStack | EXACT / stanhash_elf */
void ToolStack_SubtractAmount(u32 param_1, u32 param_2, u32 param_3, u32 param_4) {
    register u32 r1 = param_2;
    register u32 r0 = param_1;
    register u32 r2 = param_3;
    register u32 r3 = param_4;
    register u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0;
    r2 = r0 + 0;
    r0 = *(u8 *)(r2 + 1);
    if (r0 == 0) goto loc_0800DCA2;
    if (r0 > r1) goto loc_0800DC9E;
    r0 = 0;
    goto loc_0800DCA0;
loc_0800DC9E:
    r0 = r0 - r1;
loc_0800DCA0:
    *(u8 *)(r2 + 1) = r0;
loc_0800DCA2:
    return r0;
    r0 = r0;
    return r0;
}

