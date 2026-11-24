/* FIO-DECOMP-HMFOMT :: Port Readable Module: M4A_Runtime (9 functions) */
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

/* 0x080D02B8 (20B) | M4A_Runtime_Sub_080D02B8 (orig: func_080D02B8) | origin: pure | domain: M4A_Runtime | HEURISTIC / semantic_bank */
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
u32 M4A_Runtime_Sub_080D02B8(int arg0) {
  u32 val;
  val = (arg0 == 0) ? (0) : (*(u32 *)(arg0 + -0x10));
  return val;
}

/* 0x080D0CB4 (32B) | M4A_Runtime_Sub_080D0CB4 (orig: func_080D0CB4) | origin: pure | domain: M4A_Runtime | HEURISTIC / semantic_bank */
#define true 1
#define false 0
#define NULL ((void *)0)
u32 M4A_Runtime_Sub_080D0CB4(int arg0,char *arg1) {
  u32 val;
  val = 0;
  if ((*arg1 == *(char *)(arg0 + 2)) && (arg1[1] == *(char *)(arg0 + 3))) {
    val = 1;
  }
  return val;
}

/* 0x080D145E (142B) | M4A_Runtime_Sub_080D145E (orig: func_080D145E) | origin: wip | domain: M4A_Runtime | HEURISTIC / semantic_bank */
void M4A_Runtime_Sub_080D145E(u32 param_1,u16 *param_2) {
  bool bVar1;
  u16 *puVar2;
  u32 uVar3;
  u32 unaff_r5;
  u16 *puVar4;
  int unaff_r6;
  int iVar5;
  int iVar6;
  u32 unaff_r10;
  if (unaff_r5 == 1) {
    if ((int)param_2 << 0x1f < 0) {
      uVar3 = unaff_r10 << 8 | unaff_r10;
      param_2 = (u16 *)((int)param_2 + 1);
      iVar6 = unaff_r6 + 1;
      while( true ) {
        *param_2 = (u16)uVar3;
        unaff_r6 = iVar6 + -2;
        if (unaff_r6 == 0 || iVar6 < 2) break;
LAB_080d14dc:
        param_2 = param_2 + 1;
        iVar6 = unaff_r6;
      }
      return;
    }
    uVar3 = (u32)(*param_2 >> 8) | (u32)(*param_2 >> 8) << 8;
    goto LAB_080d14dc;
  }
  if ((unaff_r5 & 1) == 0) {
    puVar4 = (u16 *)((int)param_2 - unaff_r5);
    iVar6 = unaff_r6;
    if (((u32)puVar4 & 1) != 0) {
      puVar4 = (u16 *)((int)puVar4 + 1);
      param_2 = (u16 *)((int)param_2 + 1);
      *param_2 = *puVar4 & 0xff00 | (u16)unaff_r10;
      iVar6 = unaff_r6 + -1;
      if (unaff_r6 + -1 == 0) {
        return;
      }
    }
    do {
      puVar4 = puVar4 + 1;
      param_2 = param_2 + 1;
      *param_2 = *puVar4;
      iVar5 = iVar6 + -2;
      bVar1 = 1 < iVar6;
      iVar6 = iVar5;
    } while (iVar5 != 0 && bVar1);
    return;
  }
  puVar4 = (u16 *)((int)param_2 - unaff_r5);
  if (((u32)puVar4 & 1) != 0) {
    puVar4 = (u16 *)((int)puVar4 + 1);
    unaff_r10 = (u32)(*puVar4 >> 8);
    param_2 = (u16 *)((int)param_2 + 1);
    unaff_r6 = unaff_r6 + -1;
    if (unaff_r6 == 0) {
      return;
    }
  }
  puVar2 = (u16 *)((int)param_2 + -1);
  do {
    puVar4 = puVar4 + 1;
    uVar3 = (u32)*puVar4 << 8 | unaff_r10;
    puVar2 = puVar2 + 1;
    *puVar2 = (short)uVar3;
    unaff_r10 = uVar3 >> 0x10;
    iVar6 = unaff_r6 + -2;
    bVar1 = 1 < unaff_r6;
    unaff_r6 = iVar6;
  } while (iVar6 != 0 && bVar1);
  return;
}

/* 0x080D15B6 (114B) | M4A_Runtime_HW_VCOUNT (orig: func_080D15B6) | origin: pure | domain: M4A_Runtime | HEURISTIC / semantic_bank */
/* M4A_Runtime_HW_VCOUNT @ 0x080D15B6 mode=THUMB size=0x72 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* M4A_Runtime_HW_VCOUNT @ 0x080D15B6  mode=THUMB  size=0x69C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
void M4A_Runtime_HW_VCOUNT(int param_1)

{
  if (*(int *)(param_1 + 0x20) != 0) {
    func_0x080d19c6(*(undefined4 *)(param_1 + 0x24));
  }
  func_0x080d19c6();
  (*_DAT_080d1618)();
  return;
}

/* 0x080D788C (48B) | M4A_Runtime_Sub_080D788C (orig: func_080D788C) | origin: wip | domain: M4A_Runtime | HEURISTIC / semantic_bank */
void M4A_Runtime_Sub_080D788C(u32 param_1, s8 param_2, u32 param_3, u32 param_4) {
    register u32 r0 = param_1;
    register u32 r1 = param_2;
    register u32 r2 = param_3;
    register u32 r3 = param_4;
    register u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0;
    r6 = r0 + 0;
    r4 = 1;
    r0 = 1;
    *(u16 *)(r5) = r4;
    r4 &= r0;
    r0 = interrupt_Sub_08000528(r0, r1, r2, r3);
    r0 = hardware_vfunc_18_9984(r0, r1, r2, r3);
    r0 = r6 + 0;
    r0 = *(u16 *)(r1);
    if (r0 == 0) goto loc_080D78B2;
    r0 = interrupt_Sub_080004F4(r0, r1, r2, r3);
loc_080D78B2:
    return r0;
    r0 = r0;
    return r0;
}

/* 0x080D7990 (60B) | M4A_Runtime_Sub_080D7990 (orig: func_080D7990) | origin: wip | domain: M4A_Runtime | HEURISTIC / semantic_bank */
void M4A_Runtime_Sub_080D7990(u32 param_1, u32 param_2, u32 param_3, u32 param_4) {
    u32 r1;
    u32 r2;
    u32 r3;
    register u32 r0 = param_1;
    r1 = param_2;
    r2 = param_3;
    r3 = param_4;
    register u32 r4, r5, r6;
    r6 = r0 + 0;
    r4 = 1;
    r0 = 1;
    r0 = interrupt_Sub_08000528(r0, r1, r2, r3);
    r4 &= r0;
    *(u16 *)(r5) = r4;
    r0 = hardware_vfunc_10_9940(r0, r1, r2, r3);
    r0 = r6 + 0;
    r0 = *(u16 *)(r1);
    if (r0 == 0) goto loc_080D79BE;
    r0 = interrupt_Sub_080004F4(r0, r1, r2, r3);
loc_080D79BE:
    return r0;
}

/* 0x080D79F8 (60B) | M4A_Runtime_Sub_080D79F8 (orig: func_080D79F8) | origin: wip | domain: M4A_Runtime | HEURISTIC / semantic_bank */
void M4A_Runtime_Sub_080D79F8(u32 param_1, u32 param_2, u32 param_3, u32 param_4) {
    u32 r0 = param_1;
    u32 r1 = param_2;
    u32 r2 = param_3;
    u32 r3 = param_4;
    register u32 r4, r5, r6;
    r6 = r0 + 0;
    r4 = 1;
    r0 = 1;
    r0 = interrupt_Sub_08000528(r0, r1, r2, r3);
    r4 &= r0;
    r0 = hardware_vfunc_14_9968(r0, r1, r2, r3);
    r0 = r6 + 0;
    *(u8 *)(r5) = r4;
    r0 = *(u16 *)(r1);
    if (r0 == 0) goto loc_080D7A26;
    r0 = interrupt_Sub_080004F4(r0, r1, r2, r3);
loc_080D7A26:
    return r0;
}

/* 0x080D7A34 (60B) | M4A_Runtime_Sub_080D7A34 (orig: func_080D7A34) | origin: wip | domain: M4A_Runtime | HEURISTIC / semantic_bank */
void M4A_Runtime_Sub_080D7A34(u32 param_1, u32 param_2, u32 param_3, u32 param_4) {
    register u32 r0 = param_1;
    register u32 r1 = param_2;
    register u32 r2 = param_3;
    register u32 r3 = param_4;
    register u32 r4, r5, r6;
    r6 = r0 + 0;
    r4 = 1;
    r0 = 1;
    r0 = interrupt_Sub_08000528(r0, r1, r2, r3);
    r4 &= r0;
    r0 = hardware_vfunc_1C_99B0(r0, r1, r2, r3);
    r0 = r6 + 0;
    *(u8 *)(r5) = r4;
    r0 = *(u16 *)(r1);
    if (r0 == 0) goto loc_080D7A62;
    r0 = interrupt_Sub_080004F4(r0, r1, r2, r3);
loc_080D7A62:
    return r0;
}

/* 0x080D7A70 (60B) | M4A_Runtime_Sub_080D7A70 (orig: func_080D7A70) | origin: wip | domain: M4A_Runtime | HEURISTIC / semantic_bank */
void M4A_Runtime_Sub_080D7A70(u32 param_1, u32 param_2, u32 param_3, u32 param_4) {
    u32 r0 = param_1;
    u32 r1 = param_2;
    u32 r2 = param_3;
    u32 r3 = param_4;
    register u32 r4, r5, r6;
    r6 = r0 + 0;
    r4 = 1;
    r0 = 1;
    r0 = interrupt_Sub_08000528(r0, r1, r2, r3);
    r4 &= r0;
    *(u16 *)(r5) = r4;
    r0 = r6 + 0;
    r0 = *(u16 *)(r1);
    r0 = hardware_vfunc_20_99D4(r0, r1, r2, r3);
    if (r0 == 0) goto loc_080D7A9E;
    r0 = interrupt_Sub_080004F4(r0, r1, r2, r3);
loc_080D7A9E:
    return r0;
}

