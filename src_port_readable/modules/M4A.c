/* FIO-DECOMP-HMFOMT :: Port Readable Module: M4A (45 functions) */
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

/* 0x08008BEC (12B) | M4A_Wrap_m4aMPlayContinue (orig: func_08008BEC) | origin: pure | domain: M4A | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 M4A_m4aMPlayContinue();
void M4A_Wrap_m4aMPlayContinue(u32 *arg0) {
  M4A_m4aMPlayContinue(*arg0);
}

/* 0x08008DC8 (16B) | M4A_Wrap_m4aSongNumStartOrContinue (orig: func_08008DC8) | origin: pure | domain: M4A | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 M4A_m4aSongNumStartOrContinue();
void M4A_Wrap_m4aSongNumStartOrContinue(u16 arg0) {
  M4A_m4aSongNumStartOrContinue(arg0);
}

/* 0x08008DD8 (16B) | M4A_Wrap_m4aSongNumStop (orig: func_08008DD8) | origin: pure | domain: M4A | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 M4A_m4aSongNumStop();
void M4A_Wrap_m4aSongNumStop(u16 arg0) {
  M4A_m4aSongNumStop(arg0);
}

/* 0x08008DF4 (16B) | M4A_Wrap_m4aSongNumContinue (orig: func_08008DF4) | origin: pure | domain: M4A | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 M4A_m4aSongNumContinue();
void M4A_Wrap_m4aSongNumContinue(u16 arg0) {
  M4A_m4aSongNumContinue(arg0);
}

/* 0x08008E04 (12B) | M4A_Wrap_m4aMPlayAllContinue (orig: func_08008E04) | origin: pure | domain: M4A | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 M4A_m4aMPlayAllContinue();
void M4A_Wrap_m4aMPlayAllContinue(void) {
  M4A_m4aMPlayAllContinue();
}

/* 0x080D1C52 (602B) | M4A_Sub_080D1C52 (orig: func_080D1C52) | origin: pure | domain: M4A | MEDIUM / graph_algebra */
/* M4A_Sub_080D1C52 @ 0x080D1C52 mode=THUMB size=0x25A (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* M4A_Sub_080D1C52 @ 0x080D1C52  mode=THUMB  size=0x2CE  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 M4A_Sub_080D1C52(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint unaff_r8;
  int unaff_r9;
  
  if (*(int *)(param_1 + 0x38) == 0) {
    if (-1 < *(int *)(param_1 + 4)) {
      iVar2 = *_DAT_080d1ea4;
      func_0x080d2b30(param_1);
      if (-1 < *(int *)(param_1 + 4)) {
        uVar3 = (uint)*(ushort *)(param_1 + 0x22) + (uint)*(ushort *)(param_1 + 0x20);
LAB_080d1ddc:
        *(short *)(param_1 + 0x22) = (short)uVar3;
        if (0x95 < uVar3) {
          pbVar11 = *(byte **)(param_1 + 0x2c);
          uVar8 = 1;
          uVar9 = 0;
          uVar3 = (uint)*(byte *)(param_1 + 8);
          do {
            if ((*pbVar11 & 0x80) != 0) {
              uVar9 = uVar9 | uVar8;
              for (pbVar10 = *(byte **)(pbVar11 + 0x20); pbVar10 != (byte *)0x0;
                  pbVar10 = *(byte **)(pbVar10 + 0x34)) {
                if ((*pbVar10 & 199) == 0) {
                  M4A_ClearChain(pbVar10);
                }
                else if ((pbVar10[0x10] != 0) &&
                        (iVar4 = pbVar10[0x10] - 1, pbVar10[0x10] = (byte)iVar4, iVar4 == 0)) {
                  *pbVar10 = *pbVar10 | 0x40;
                }
              }
              if ((*pbVar11 & 0x40) != 0) {
                M4A_Clear64byte(pbVar11);
                *pbVar11 = 0x80;
                pbVar11[0xf] = 2;
                pbVar11[0x13] = 0x40;
                pbVar11[0x19] = 0x16;
                pbVar11[0x24] = 1;
              }
              do {
                while( true ) {
                  if (pbVar11[1] != 0) {
                    pbVar11[1] = pbVar11[1] - 1;
                    if ((pbVar11[0x19] != 0) && (pbVar11[0x17] != 0)) {
                      if (pbVar11[0x1c] == 0) {
                        iVar4 = (uint)pbVar11[0x1a] + (uint)pbVar11[0x19];
                        pbVar11[0x1a] = (byte)iVar4;
                        if ((iVar4 + -0x40) * 0x1000000 < 0) {
                          iVar4 = (int)(char)(byte)iVar4;
                        }
                        else {
                          iVar4 = 0x80 - iVar4;
                        }
                        uVar7 = (int)(iVar4 * (uint)pbVar11[0x17]) >> 6;
                        if (((pbVar11[0x16] ^ uVar7) & 0xff) != 0) {
                          pbVar11[0x16] = (byte)uVar7;
                          if (pbVar11[0x18] == 0) {
                            bVar6 = 0xc;
                          }
                          else {
                            bVar6 = 3;
                          }
                          *pbVar11 = *pbVar11 | bVar6;
                        }
                      }
                      else {
                        pbVar11[0x1c] = pbVar11[0x1c] - 1;
                      }
                    }
                    goto LAB_080d1db8;
                  }
                  pbVar10 = *(byte **)(pbVar11 + 0x40);
                  bVar6 = *pbVar10;
                  uVar7 = (uint)bVar6;
                  if (uVar7 < 0x80) {
                    uVar7 = (uint)pbVar11[7];
                  }
                  else {
                    pbVar10 = pbVar10 + 1;
                    *(byte **)(pbVar11 + 0x40) = pbVar10;
                    if (0xbc < uVar7) {
                      pbVar11[7] = bVar6;
                    }
                  }
                  if (0xce < uVar7) {
                    uVar7 = uVar7 - 0xcf;
                    param_2 = param_1;
                    goto SUB_080d1e9c;
                  }
                  if (0xb0 < uVar7) break;
                  pbVar11[1] = *(byte *)((uVar7 - 0x80) + _DAT_080d1ea0);
                }
                *(char *)(param_1 + 10) = (char)(uVar7 - 0xb1);
                func_0x080d1e9c(param_1,pbVar11,pbVar10,
                                *(undefined4 *)(*(int *)(iVar2 + 0x34) + (uVar7 - 0xb1) * 4));
              } while (*pbVar11 != 0);
            }
LAB_080d1db8:
            if (uVar3 - 1 == 0 || (int)uVar3 < 1) goto LAB_080d1dc4;
            pbVar11 = pbVar11 + 0x50;
            uVar8 = uVar8 << 1;
            uVar3 = uVar3 - 1;
          } while( true );
        }
        uVar3 = (uint)*(byte *)(param_1 + 8);
        pbVar11 = *(byte **)(param_1 + 0x2c);
        do {
          if (((*pbVar11 & 0x80) != 0) && ((*pbVar11 & 0xf) != 0)) {
            func_0x080d2bf8(param_1,pbVar11);
            for (pbVar10 = *(byte **)(pbVar11 + 0x20); pbVar10 != (byte *)0x0;
                pbVar10 = *(byte **)(pbVar10 + 0x34)) {
              if ((*pbVar10 & 199) == 0) {
                M4A_ClearChain(pbVar10);
              }
              else {
                bVar6 = pbVar10[1];
                uVar7 = bVar6 & 7;
                if (((*pbVar11 & 3) != 0) && (func_0x080d1ef0(), (bVar6 & 7) != 0)) {
                  pbVar10[0x1d] = pbVar10[0x1d] | 1;
                }
                if ((*pbVar11 & 0xc) != 0) {
                  param_2 = (uint)pbVar10[8] + (int)(char)pbVar11[8];
                  if (param_2 < 0) {
                    param_2 = 0;
                  }
                  if ((bVar6 & 7) != 0) goto SUB_080d1e9c;
                  uVar5 = M4A_MidiKeyToFreq(*(undefined4 *)(pbVar10 + 0x24),param_2,pbVar11[9]);
                  *(undefined4 *)(pbVar10 + 0x20) = uVar5;
                }
              }
            }
            *pbVar11 = *pbVar11 & 0xf0;
          }
        } while ((uVar3 - 1 != 0 && 0 < (int)uVar3) &&
                (pbVar10 = pbVar11 + 0x50, bVar1 = -0x51 < (int)pbVar11, uVar3 = uVar3 - 1,
                pbVar11 = pbVar10, pbVar10 != (byte *)0x0 && bVar1));
      }
    }
LAB_080d1e8c:
    *(undefined4 *)(param_1 + 0x34) = _DAT_080d1ea8;
    uVar7 = unaff_r8;
    param_2 = unaff_r9;
  }
  else {
    uVar7 = *(uint *)(param_1 + 0x3c);
  }
SUB_080d1e9c:
  return CONCAT44(param_2,uVar7);
LAB_080d1dc4:
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (uVar9 == 0) {
    *(undefined4 *)(param_1 + 4) = 0x80000000;
    goto LAB_080d1e8c;
  }
  *(uint *)(param_1 + 4) = uVar9;
  uVar3 = *(ushort *)(param_1 + 0x22) - 0x96;
  goto LAB_080d1ddc;
}

/* 0x080D21B0 (100B) | M4A_MidiKeyToFreq (orig: func_080D21B0) | origin: pure | domain: M4A | EXACT / stanhash_elf */
/* M4A_MidiKeyToFreq @ 0x080D21B0 mode=THUMB size=0x64 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
(sin referencia de Ghidra en esta direccion)

/* 0x080D2254 (120B) | M4A_m4aSoundInit (orig: func_080D2254) | origin: pure | domain: M4A | EXACT / stanhash_elf */
/* M4A_m4aSoundInit @ 0x080D2254 mode=THUMB size=0x78 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* M4A_m4aSoundInit @ 0x080D2254  mode=THUMB  size=0x78  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 M4A_m4aSoundInit(void)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 in_lr;
  
  func_0x080d3750(_DAT_080d22a8 & 0xfffffffe,_DAT_080d22ac,_DAT_080d22b0);
  M4A_SoundInit(_DAT_080d22b4);
  M4A_MPlayExtender(_DAT_080d22b8);
  M4A_m4aSoundMode(_DAT_080d22bc);
  piVar3 = _DAT_080d22c4;
  for (uVar1 = _DAT_080d22c0 & 0xffff; uVar1 != 0; uVar1 = uVar1 - 1) {
    iVar2 = *piVar3;
    M4A_MPlayOpen(iVar2,piVar3[1],(char)piVar3[2]);
    *(char *)(iVar2 + 0xb) = (char)*(undefined2 *)((int)piVar3 + 10);
    *(undefined4 *)(iVar2 + 0x18) = _DAT_080d22c8;
    piVar3 = piVar3 + 3;
  }
  return in_lr;
}

/* 0x080D22CC (12B) | M4A_m4aSoundMain (orig: func_080D22CC) | origin: pure | domain: M4A | EXACT / stanhash_elf */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D15A4();
void M4A_m4aSoundMain(void) {
  func_080D15A4();
}

/* 0x080D22D8 (44B) | M4A_m4aSongNumStart (orig: func_080D22D8) | origin: pure | domain: M4A | EXACT / stanhash_elf */
/* M4A_m4aSongNumStart @ 0x080D22D8 mode=THUMB size=0x2C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
(sin referencia de Ghidra en esta direccion)

/* 0x080D2304 (76B) | M4A_m4aSongNumStartOrChange (orig: func_080D2304) | origin: pure | domain: M4A | EXACT / stanhash_elf */
/* M4A_m4aSongNumStartOrChange @ 0x080D2304 mode=THUMB size=0x4C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* M4A_m4aSongNumStartOrChange @ 0x080D2304  mode=THUMB  size=0x4C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 M4A_m4aSongNumStartOrChange(uint param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  
  piVar1 = (int *)((param_1 & 0xffff) * 8 + _DAT_080d2334);
  piVar2 = *(int **)((uint)*(ushort *)(piVar1 + 1) * 0xc + _DAT_080d2330);
  iVar3 = *piVar1;
  if (*piVar2 == iVar3) {
    if (((short)piVar2[1] == 0) || (piVar2[1] < 0)) {
      M4A_m4aMPlayStart(piVar2,*piVar2);
    }
  }
  else {
    M4A_m4aMPlayStart(piVar2,iVar3);
  }
  return in_lr;
}

/* 0x080D2350 (84B) | M4A_m4aSongNumStartOrContinue (orig: func_080D2350) | origin: pure | domain: M4A | EXACT / stanhash_elf */
/* M4A_m4aSongNumStartOrContinue @ 0x080D2350 mode=THUMB size=0x54 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* M4A_m4aSongNumStartOrContinue @ 0x080D2350  mode=THUMB  size=0x54  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 M4A_m4aSongNumStartOrContinue(uint param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  
  piVar1 = (int *)((param_1 & 0xffff) * 8 + _DAT_080d2380);
  piVar2 = *(int **)((uint)*(ushort *)(piVar1 + 1) * 0xc + _DAT_080d237c);
  iVar3 = *piVar1;
  if (*piVar2 == iVar3) {
    if ((short)piVar2[1] == 0) {
      M4A_m4aMPlayStart(piVar2,*piVar2);
    }
    else if (piVar2[1] < 0) {
      func_0x080d2218(piVar2);
    }
  }
  else {
    M4A_m4aMPlayStart(piVar2,iVar3);
  }
  return in_lr;
}

/* 0x080D23A4 (52B) | M4A_m4aSongNumStop (orig: func_080D23A4) | origin: pure | domain: M4A | EXACT / stanhash_elf */
/* M4A_m4aSongNumStop @ 0x080D23A4 mode=THUMB size=0x34 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
(sin referencia de Ghidra en esta direccion)

/* 0x080D23D8 (52B) | M4A_m4aSongNumContinue (orig: func_080D23D8) | origin: pure | domain: M4A | EXACT / stanhash_elf */
/* M4A_m4aSongNumContinue @ 0x080D23D8 mode=THUMB size=0x34 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
(sin referencia de Ghidra en esta direccion)

/* 0x080D240C (44B) | M4A_m4aMPlayAllStop (orig: func_080D240C) | origin: pure | domain: M4A | EXACT / stanhash_elf */
/* M4A_m4aMPlayAllStop @ 0x080D240C mode=THUMB size=0x2C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* M4A_m4aMPlayAllStop @ 0x080D240C  mode=THUMB  size=0x2C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 M4A_m4aMPlayAllStop(void)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 in_lr;
  
  puVar2 = _DAT_080d2434;
  for (uVar1 = _DAT_080d2430 & 0xffff; uVar1 != 0; uVar1 = uVar1 - 1) {
    M4A_m4aMPlayStop(*puVar2);
    puVar2 = puVar2 + 3;
  }
  return in_lr;
}

/* 0x080D2438 (12B) | M4A_m4aMPlayContinue (orig: func_080D2438) | origin: pure | domain: M4A | EXACT / stanhash_elf */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D2218();
void M4A_m4aMPlayContinue(void) {
  func_080D2218();
}

/* 0x080D2444 (44B) | M4A_m4aMPlayAllContinue (orig: func_080D2444) | origin: pure | domain: M4A | EXACT / stanhash_elf */
/* M4A_m4aMPlayAllContinue @ 0x080D2444 mode=THUMB size=0x2C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* M4A_m4aMPlayAllContinue @ 0x080D2444  mode=THUMB  size=0x2C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 M4A_m4aMPlayAllContinue(void)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 in_lr;
  
  puVar2 = _DAT_080d246c;
  for (uVar1 = _DAT_080d2468 & 0xffff; uVar1 != 0; uVar1 = uVar1 - 1) {
    func_0x080d2218(*puVar2);
    puVar2 = puVar2 + 3;
  }
  return in_lr;
}

/* 0x080D2470 (16B) | M4A_m4aMPlayFadeOut (orig: func_080D2470) | origin: pure | domain: M4A | EXACT / stanhash_elf */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D2234();
void M4A_m4aMPlayFadeOut(u32 arg0,u16 arg1) {
  func_080D2234(arg0,arg1);
}

/* 0x080D24C8 (72B) | M4A_m4aMPlayImmInit (orig: func_080D24C8) | origin: pure | domain: M4A | EXACT / stanhash_elf */
/* M4A_m4aMPlayImmInit @ 0x080D24C8 mode=THUMB size=0x48 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* M4A_m4aMPlayImmInit @ 0x080D24C8  mode=THUMB  size=0x48  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 M4A_m4aMPlayImmInit(int param_1)

{
  byte *pbVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = (uint)*(byte *)(param_1 + 8);
  pbVar1 = *(byte **)(param_1 + 0x2c);
  if (uVar2 != 0) {
    do {
      if (((*pbVar1 & 0x80) != 0) && ((*pbVar1 & 0x40) != 0)) {
        M4A_Clear64byte(pbVar1);
        *pbVar1 = 0x80;
        pbVar1[0xf] = 2;
        pbVar1[0x13] = 0x40;
        pbVar1[0x19] = 0x16;
        pbVar1[0x24] = 1;
      }
      uVar2 = uVar2 - 1;
      pbVar1 = pbVar1 + 0x50;
    } while (0 < (int)uVar2);
  }
  return in_lr;
}

/* 0x080D2510 (280B) | M4A_MPlayExtender (orig: func_080D2510) | origin: pure | domain: M4A | EXACT / stanhash_elf */
/* M4A_MPlayExtender @ 0x080D2510 mode=THUMB size=0x118 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* M4A_MPlayExtender @ 0x080D2510  mode=THUMB  size=0x11C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 M4A_MPlayExtender(int param_1)

{
  undefined2 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 in_lr;
  undefined4 uStack_14;
  
  *_DAT_080d25d8 = 0x8f;
  puVar1 = _DAT_080d25dc;
  *_DAT_080d25dc = 0;
  puVar2 = _DAT_080d25e0;
  *_DAT_080d25e0 = 8;
  puVar2[6] = 8;
  puVar2[0x16] = 8;
  puVar2[2] = 0x80;
  puVar2[10] = 0x80;
  puVar2[0x1a] = 0x80;
  puVar2[0xd] = 0;
  *(undefined1 *)puVar1 = 0x77;
  piVar4 = (int *)*_DAT_080d25e4;
  iVar5 = *piVar4;
  if (iVar5 == _DAT_080d25e8) {
    *piVar4 = iVar5 + 1;
    iVar3 = _DAT_080d25ec;
    *(undefined4 *)(_DAT_080d25ec + 0x20) = _DAT_080d25f0;
    *(undefined4 *)(iVar3 + 0x44) = _DAT_080d25f4;
    *(undefined4 *)(iVar3 + 0x4c) = _DAT_080d25f8;
    *(undefined4 *)(iVar3 + 0x70) = _DAT_080d25fc;
    *(undefined4 *)(iVar3 + 0x74) = _DAT_080d2600;
    *(undefined4 *)(iVar3 + 0x78) = _DAT_080d2604;
    *(undefined4 *)(iVar3 + 0x7c) = _DAT_080d2608;
    *(undefined4 *)(iVar3 + 0x80) = _DAT_080d260c;
    *(undefined4 *)(iVar3 + 0x84) = _DAT_080d2610;
    piVar4[7] = param_1;
    piVar4[10] = _DAT_080d2614;
    piVar4[0xb] = _DAT_080d2618;
    piVar4[0xc] = _DAT_080d261c;
    *(char *)(piVar4 + 3) = (char)_DAT_080d2620;
    uStack_14 = 0;
    func_0x080d3750(&uStack_14,param_1,_DAT_080d2624);
    *(undefined1 *)(param_1 + 1) = 1;
    *(undefined1 *)(param_1 + 0x1c) = 0x11;
    *(undefined1 *)(param_1 + 0x41) = 2;
    *(undefined1 *)(param_1 + 0x5c) = 0x22;
    *(undefined1 *)(param_1 + 0x81) = 3;
    *(undefined1 *)(param_1 + 0x9c) = 0x44;
    *(undefined1 *)(param_1 + 0xc1) = 4;
    *(undefined1 *)(param_1 + 0xdc) = 0x88;
    *piVar4 = iVar5;
  }
  return in_lr;
}

/* 0x080D262C (20B) | M4A_ClearChain (orig: func_080D262C) | origin: pure | domain: M4A | EXACT / stanhash_elf */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D3910();
/* paridad 90.7% preset agbcc_O2 */
void M4A_ClearChain(u32 arg0) {
  func_080D3910(arg0,*(u32 *)0x02001CB8);
}

/* 0x080D2640 (20B) | M4A_Clear64byte (orig: func_080D2640) | origin: pure | domain: M4A | EXACT / stanhash_elf */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D3910();
/* paridad 90.7% preset agbcc_O2 */
void M4A_Clear64byte(u32 arg0) {
  func_080D3910(arg0,*(int *)0x02001CBC);
}

/* 0x080D2654 (248B) | M4A_SoundInit (orig: func_080D2654) | origin: pure | domain: M4A | EXACT / stanhash_elf */
/* M4A_SoundInit @ 0x080D2654 mode=THUMB size=0xF8 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* M4A_SoundInit @ 0x080D2654  mode=THUMB  size=0x19C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 M4A_SoundInit(undefined4 *param_1)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  undefined4 uStack_10;
  
  *param_1 = 0;
  if ((*_DAT_080d270c & 0x2000000) != 0) {
    *_DAT_080d270c = _DAT_080d2710;
  }
  if ((*_DAT_080d2714 & 0x2000000) != 0) {
    *_DAT_080d2714 = _DAT_080d2710;
  }
  puVar1 = _DAT_080d2718;
  *_DAT_080d2718 = 0x400;
  puVar1[6] = 0x400;
  puVar1 = _DAT_080d271c;
  *_DAT_080d271c = 0x8f;
  puVar1[-1] = (short)_DAT_080d2720;
  *_DAT_080d2724 = *_DAT_080d2724 & 0x3f | 0x40;
  puVar2 = _DAT_080d2728;
  *_DAT_080d2728 = param_1 + 0xd4;
  puVar2[1] = _DAT_080d272c;
  puVar2[3] = param_1 + 0x260;
  puVar2[4] = _DAT_080d2730;
  *_DAT_080d2734 = param_1;
  uStack_10 = 0;
  func_0x080d3750(&uStack_10,param_1,_DAT_080d2738);
  *(undefined1 *)((int)param_1 + 6) = 8;
  *(undefined1 *)((int)param_1 + 7) = 0xf;
  param_1[0xe] = _DAT_080d273c;
  uVar3 = _DAT_080d2740;
  param_1[10] = _DAT_080d2740;
  param_1[0xb] = uVar3;
  param_1[0xc] = uVar3;
  param_1[0xf] = uVar3;
  uVar3 = _DAT_080d2744;
  func_0x080d1a34(_DAT_080d2744);
  param_1[0xd] = uVar3;
  func_0x080d274c(0x40000);
  *param_1 = _DAT_080d2748;
  return in_lr;
}

/* 0x080D274C (164B) | M4A_SampleFreqSet (orig: func_080D274C) | origin: pure | domain: M4A | EXACT / stanhash_elf */
/* M4A_SampleFreqSet @ 0x080D274C mode=THUMB size=0xA4 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
(sin referencia de Ghidra en esta direccion)

/* 0x080D27F0 (152B) | M4A_m4aSoundMode (orig: func_080D27F0) | origin: pure | domain: M4A | EXACT / stanhash_elf */
/* M4A_m4aSoundMode @ 0x080D27F0 mode=THUMB size=0x98 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* M4A_m4aSoundMode @ 0x080D27F0  mode=THUMB  size=0x98  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 M4A_m4aSoundMode(uint param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 in_lr;
  
  piVar3 = (int *)*_DAT_080d287c;
  if (*piVar3 == _DAT_080d2880) {
    *piVar3 = *piVar3 + 1;
    if ((param_1 & 0xff) != 0) {
      *(byte *)((int)piVar3 + 5) = (byte)param_1 & 0x7f;
    }
    if ((param_1 & 0xf00) != 0) {
      *(char *)((int)piVar3 + 6) = (char)((param_1 & 0xf00) >> 8);
      iVar2 = 0xc;
      piVar1 = piVar3 + 0x14;
      do {
        *(undefined1 *)piVar1 = 0;
        iVar2 = iVar2 + -1;
        piVar1 = piVar1 + 0x10;
      } while (iVar2 != 0);
    }
    if ((param_1 & 0xf000) != 0) {
      *(char *)((int)piVar3 + 7) = (char)((param_1 & 0xf000) >> 0xc);
    }
    if ((param_1 & 0xb00000) != 0) {
      *_DAT_080d2884 = *_DAT_080d2884 & 0x3f | (byte)((param_1 & 0x300000) >> 0xe);
    }
    if ((param_1 & 0xf0000) != 0) {
      M4A_m4aSoundVSyncOff();
      func_0x080d274c(param_1 & 0xf0000);
    }
    *piVar3 = _DAT_080d2880;
  }
  return in_lr;
}

/* 0x080D2888 (84B) | M4A_SoundClear (orig: func_080D2888) | origin: pure | domain: M4A | EXACT / stanhash_elf */
/* M4A_SoundClear @ 0x080D2888 mode=THUMB size=0x54 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* M4A_SoundClear @ 0x080D2888  mode=THUMB  size=0x54  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 M4A_SoundClear(void)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 in_lr;
  
  piVar5 = (int *)*_DAT_080d28d4;
  if (*piVar5 == _DAT_080d28d8) {
    *piVar5 = *piVar5 + 1;
    iVar3 = 0xc;
    piVar1 = piVar5 + 0x14;
    do {
      *(undefined1 *)piVar1 = 0;
      iVar3 = iVar3 + -1;
      piVar1 = piVar1 + 0x10;
    } while (0 < iVar3);
    puVar2 = (undefined1 *)piVar5[7];
    if (puVar2 != (undefined1 *)0x0) {
      uVar4 = 1;
      do {
        func_0x080d3910(uVar4 & 0xff,piVar5[0xb]);
        *puVar2 = 0;
        uVar4 = uVar4 + 1;
        puVar2 = puVar2 + 0x40;
      } while ((int)uVar4 < 5);
    }
    *piVar5 = _DAT_080d28d8;
  }
  return in_lr;
}

/* 0x080D28DC (124B) | M4A_m4aSoundVSyncOff (orig: func_080D28DC) | origin: pure | domain: M4A | EXACT / stanhash_elf */
/* M4A_m4aSoundVSyncOff @ 0x080D28DC mode=THUMB size=0x7C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* M4A_m4aSoundVSyncOff @ 0x080D28DC  mode=THUMB  size=0x7C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 M4A_m4aSoundVSyncOff(void)

{
  undefined2 *puVar1;
  int *piVar2;
  undefined4 in_lr;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  piVar2 = (int *)*_DAT_080d293c;
  uStack_4 = in_lr;
  if ((uint)(*piVar2 + _DAT_080d2940) < 2) {
    *piVar2 = *piVar2 + 10;
    if ((*_DAT_080d2944 & 0x2000000) != 0) {
      *_DAT_080d2944 = _DAT_080d2948;
    }
    if ((*_DAT_080d294c & 0x2000000) != 0) {
      *_DAT_080d294c = _DAT_080d2948;
    }
    puVar1 = _DAT_080d2950;
    *_DAT_080d2950 = 0x400;
    puVar1[6] = 0x400;
    uStack_8 = 0;
    func_0x080d3750(&uStack_8,piVar2 + 0xd4,_DAT_080d2954);
  }
  return uStack_4;
}

/* 0x080D2958 (60B) | M4A_m4aSoundVSyncOn (orig: func_080D2958) | origin: pure | domain: M4A | EXACT / stanhash_elf */
/* M4A_m4aSoundVSyncOn @ 0x080D2958 mode=THUMB size=0x3C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* M4A_m4aSoundVSyncOn @ 0x080D2958  mode=THUMB  size=0x3C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 M4A_m4aSoundVSyncOn(void)

{
  undefined2 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  
  puVar1 = _DAT_080d2990;
  piVar2 = (int *)*_DAT_080d2988;
  iVar3 = *piVar2;
  if (iVar3 != _DAT_080d298c) {
    *_DAT_080d2990 = 0xb600;
    puVar1[6] = 0xb600;
    *(undefined1 *)(piVar2 + 1) = 0;
    *piVar2 = iVar3 + -10;
  }
  return in_lr;
}

/* 0x080D2994 (120B) | M4A_MPlayOpen (orig: func_080D2994) | origin: pure | domain: M4A | EXACT / stanhash_elf */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 M4A_Clear64byte();

void M4A_MPlayOpen(int arg0,u8 *arg1,u8 arg2) {
  int val;
  int *mem_ptr;
  if (arg2 != 0) {
    if (0x10 < arg2) {
      arg2 = 0x10;
    }
    mem_ptr = (int *)*(u32 *)0x03007FF0;
    if (*mem_ptr == 0x68736D53) {
      *mem_ptr = *mem_ptr + 1;
      M4A_Clear64byte(arg0);
      *(u8 **)(arg0 + 0x2c) = arg1;
      *(u8 *)(arg0 + 8) = arg2;
      *(u32 *)(arg0 + 4) = 0x80000000;
      if (arg2 != 0) {
        do {
          *arg1 = 0;
          arg2 = (u8)(arg2 - 1);
          arg1 += 0x50;
        } while (arg2 != 0);
      }
      if (mem_ptr[8] != 0) {
        *(int *)(arg0 + 0x38) = mem_ptr[8];
        *(int *)(arg0 + 0x3c) = mem_ptr[9];
        mem_ptr[8] = 0;
      }
      mem_ptr[9] = arg0;
      mem_ptr[8] = 0x080D1C45;
      val = 0x68736D53;
      *mem_ptr = 0x68736D53;
      *(int *)(arg0 + 0x34) = val;
    }
  }
}

/* 0x080D2A0C (228B) | M4A_m4aMPlayStart (orig: func_080D2A0C) | origin: pure | domain: M4A | EXACT / stanhash_elf */
/* M4A_m4aMPlayStart @ 0x080D2A0C mode=THUMB size=0xE4 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* M4A_m4aMPlayStart @ 0x080D2A0C  mode=THUMB  size=0xE4  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 M4A_m4aMPlayStart(int *param_1,byte *param_2)

{
  byte bVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (param_1[0xd] != _DAT_080d2aec) {
    return in_lr;
  }
  bVar1 = param_2[2];
  if (((*(char *)((int)param_1 + 0xb) != '\0') &&
      (((*param_1 != 0 && ((*(byte *)param_1[0xb] & 0x40) != 0)) ||
       (((short)param_1[1] != 0 && (-1 < param_1[1])))))) &&
     (bVar1 = param_2[2], bVar1 < *(byte *)((int)param_1 + 9))) {
    return in_lr;
  }
  param_1[0xd] = param_1[0xd] + 1;
  param_1[1] = 0;
  *param_1 = (int)param_2;
  param_1[0xc] = *(int *)(param_2 + 4);
  *(byte *)((int)param_1 + 9) = bVar1;
  param_1[3] = 0;
  *(undefined2 *)(param_1 + 7) = 0x96;
  *(undefined2 *)(param_1 + 8) = 0x96;
  *(undefined2 *)((int)param_1 + 0x1e) = 0x100;
  *(undefined2 *)((int)param_1 + 0x22) = 0;
  *(undefined2 *)(param_1 + 9) = 0;
  iVar3 = 0;
  puVar2 = (undefined1 *)param_1[0xb];
  if (*param_2 != 0) {
    if ((char)param_1[2] == '\0') goto LAB_080d2ace;
    do {
      func_0x080d1eac(param_1,puVar2);
      *puVar2 = 0xc0;
      *(undefined4 *)(puVar2 + 0x20) = 0;
      *(undefined4 *)(puVar2 + 0x40) = *(undefined4 *)(param_2 + iVar3 * 4 + 8);
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 0x50;
      if ((int)(uint)*param_2 <= iVar3) break;
    } while (iVar3 < (int)(uint)*(byte *)(param_1 + 2));
  }
  if (iVar3 < (int)(uint)*(byte *)(param_1 + 2)) {
    do {
      func_0x080d1eac(param_1,puVar2);
      *puVar2 = 0;
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 0x50;
    } while (iVar3 < (int)(uint)*(byte *)(param_1 + 2));
  }
LAB_080d2ace:
  if ((param_2[3] & 0x80) != 0) {
    M4A_m4aSoundMode(param_2[3]);
  }
  param_1[0xd] = _DAT_080d2aec;
  return in_lr;
}

/* 0x080D2AF0 (64B) | M4A_m4aMPlayStop (orig: func_080D2AF0) | origin: pure | domain: M4A | EXACT / stanhash_elf */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 M4A_1_TrackStop();

void M4A_m4aMPlayStop(int arg0) {
  int val;
  int val2;
  if (*(int *)(arg0 + 0x34) == 0x68736D53) {
    *(int *)(arg0 + 0x34) = *(int *)(arg0 + 0x34) + 1;
    *(u32 *)(arg0 + 4) = *(u32 *)(arg0 + 4) | 0x80000000;
    val = (int)*(u8 *)(arg0 + 8);
    val2 = *(int *)(arg0 + 0x2c);
    if (0 < val) {
      do {
        M4A_1_TrackStop(arg0,val2);
        val = val - 1;
        val2 = val2 + 0x50;
      } while (0 < val);
    }
    *(int *)(arg0 + 0x34) = 0x68736D53;
  }
}

/* 0x080D2BF8 (180B) | M4A_TrkVolPitSet (orig: func_080D2BF8) | origin: pure | domain: M4A | EXACT / stanhash_elf */
/* M4A_TrkVolPitSet @ 0x080D2BF8 mode=THUMB size=0xB4 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
(sin referencia de Ghidra en esta direccion)

/* 0x080D2CAC (168B) | M4A_MidiKeyToCgbFreq (orig: func_080D2CAC) | origin: pure | domain: M4A | EXACT / stanhash_elf */
/* M4A_MidiKeyToCgbFreq @ 0x080D2CAC mode=THUMB size=0xA8 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
(sin referencia de Ghidra en esta direccion)

/* 0x080D2DA4 (104B) | M4A_CgbModVol (orig: func_080D2DA4) | origin: pure | domain: M4A | EXACT / stanhash_elf */
/* M4A_CgbModVol @ 0x080D2DA4 mode=THUMB size=0x68 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* M4A_CgbModVol @ 0x080D2DA4  mode=THUMB  size=0x68  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 M4A_CgbModVol(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 2);
  bVar2 = *(byte *)(param_1 + 3);
  if (bVar1 < bVar2) {
    if (bVar2 >> 1 < bVar1) goto LAB_080d2dd0;
    *(undefined1 *)(param_1 + 0x1b) = 0xf0;
LAB_080d2dde:
    uVar4 = (uint)*(byte *)(param_1 + 3) + (uint)*(byte *)(param_1 + 2) >> 4;
    *(char *)(param_1 + 10) = (char)uVar4;
    if (uVar4 < 0x10) goto LAB_080d2df0;
    uVar3 = 0xf;
  }
  else {
    if (bVar2 <= bVar1 >> 1) {
      *(undefined1 *)(param_1 + 0x1b) = 0xf;
      goto LAB_080d2dde;
    }
LAB_080d2dd0:
    *(undefined1 *)(param_1 + 0x1b) = 0xff;
    uVar3 = (undefined1)((uint)*(byte *)(param_1 + 3) + (uint)*(byte *)(param_1 + 2) >> 4);
  }
  *(undefined1 *)(param_1 + 10) = uVar3;
LAB_080d2df0:
  *(char *)(param_1 + 0x19) =
       (char)((int)((uint)*(byte *)(param_1 + 10) * (uint)*(byte *)(param_1 + 6) + 0xf) >> 4);
  *(byte *)(param_1 + 0x1b) = *(byte *)(param_1 + 0x1c) & *(byte *)(param_1 + 0x1b);
  return in_lr;
}

/* 0x080D2E0C (1100B) | M4A_CgbSound (orig: func_080D2E0C) | origin: pure | domain: M4A | EXACT / stanhash_elf */
/* M4A_CgbSound @ 0x080D2E0C mode=THUMB size=0x44C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* M4A_CgbSound @ 0x080D2E0C  mode=THUMB  size=0x44C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 M4A_CgbSound(void)

{
  undefined4 *puVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  byte *extraout_r1;
  uint uVar8;
  byte *pbVar9;
  undefined4 *puVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint uVar13;
  byte bVar14;
  undefined4 in_lr;
  uint uStack_3c;
  byte *pbStack_34;
  byte *pbStack_30;
  byte *pbStack_2c;
  
  iVar3 = *_DAT_080d2e2c;
  if (*(char *)(iVar3 + 10) == '\0') {
    *(undefined1 *)(iVar3 + 10) = 0xe;
  }
  else {
    *(char *)(iVar3 + 10) = *(char *)(iVar3 + 10) + -1;
  }
  uVar13 = 1;
  pbVar12 = *(byte **)(iVar3 + 0x1c);
  do {
    bVar2 = *pbVar12;
    pbVar7 = (byte *)(uint)bVar2;
    if ((bVar2 & 199) != 0) {
      pbStack_34 = _DAT_080d2e90;
      pbStack_30 = _DAT_080d2e98;
      pbVar11 = _DAT_080d2e94;
      if (uVar13 == 2) {
LAB_080d2ec4:
        pbStack_2c = pbStack_34 + 0xb;
        pbVar9 = pbStack_30 + 4;
      }
      else {
        pbStack_34 = _DAT_080d2f1c;
        pbStack_30 = _DAT_080d2f24;
        pbVar11 = _DAT_080d2f20;
        if ((int)uVar13 < 3) {
          if (uVar13 != 1) goto LAB_080d2ec4;
          pbStack_34 = _DAT_080d2e78;
          pbStack_30 = _DAT_080d2e80;
          pbStack_2c = _DAT_080d2e78 + 4;
          pbVar9 = _DAT_080d2e80 + 2;
          pbVar11 = _DAT_080d2e7c;
        }
        else {
          if (uVar13 != 3) goto LAB_080d2ec4;
          pbStack_34 = _DAT_080d2eb0;
          pbStack_30 = _DAT_080d2eb8;
          pbStack_2c = _DAT_080d2eb0 + 4;
          pbVar9 = _DAT_080d2eb8 + 2;
          pbVar11 = _DAT_080d2eb4;
        }
      }
      uStack_3c = (uint)*(byte *)(iVar3 + 10);
      bVar14 = *pbStack_30;
      pbVar4 = (byte *)(uint)bVar14;
      if ((bVar2 & 0x80) == 0) {
        if ((bVar2 & 4) == 0) {
          pbVar11 = pbVar12 + 0x40;
          if ((bVar2 & 0x40) == 0) goto LAB_080d3034;
          if ((bVar2 & 3) == 0) goto LAB_080d3034;
          pbVar11 = (byte *)0x0;
          *pbVar12 = bVar2 & 0xfc;
          pbVar12[0xb] = pbVar12[7];
          if (pbVar12[7] == 0) {
LAB_080d3066:
            iVar5 = (uint)pbVar12[10] * (uint)pbVar12[0xc] + 0xff;
            pbVar7 = (byte *)0x0;
            pbVar12[9] = (byte)((uint)iVar5 >> 8);
            if ((iVar5 >> 8 & 0xffU) != 0) {
              *pbVar12 = *pbVar12 | 4;
              pbVar12[0x1d] = pbVar12[0x1d] | 1;
              if (uVar13 != 3) {
                bVar14 = 8;
              }
              goto LAB_080d313a;
            }
            goto LAB_080d2fe6;
          }
          pbVar7 = (byte *)(uint)pbVar12[0x1d];
          pbVar12[0x1d] = pbVar12[0x1d] | 1;
          if (uVar13 != 3) {
            pbVar11 = (byte *)(uint)pbVar12[7];
            pbVar4 = pbVar11;
          }
          goto LAB_080d3128;
        }
        bVar2 = pbVar12[0xd];
        pbVar12[0xd] = (byte)(bVar2 - 1);
        pbVar7 = (byte *)(uVar13 + 1);
        if (0 < (int)((bVar2 - 1) * 0x1000000)) goto LAB_080d313a;
LAB_080d2fe6:
        func_0x080d2d54(uVar13 & 0xff,pbVar7);
        *pbVar12 = 0;
      }
      else {
        pbVar7 = pbVar12 + 0x40;
        if ((bVar2 & 0x40) != 0) goto LAB_080d2fe6;
        *pbVar12 = 3;
        pbVar12[0x1d] = 3;
        M4A_CgbModVol(pbVar12);
        if (uVar13 == 2) {
LAB_080d2f34:
          *pbVar11 = pbVar12[0x1e] + (char)*(undefined4 *)(pbVar12 + 0x24) * '@';
LAB_080d2f94:
          pbVar4 = (byte *)(pbVar12[4] + 8);
          bVar2 = 0;
          if (pbVar12[0x1e] != 0) {
            bVar2 = 0x40;
          }
LAB_080d2fa2:
          pbVar12[0x1a] = bVar2;
        }
        else {
          if ((int)uVar13 < 3) {
            if (uVar13 == 1) {
              *pbStack_34 = pbVar12[0x1f];
              goto LAB_080d2f34;
            }
LAB_080d2f88:
            *pbVar11 = pbVar12[0x1e];
            *pbStack_2c = (byte)(*(int *)(pbVar12 + 0x24) << 3);
            goto LAB_080d2f94;
          }
          if (uVar13 != 3) goto LAB_080d2f88;
          if (*(int *)(pbVar12 + 0x24) != *(int *)(pbVar12 + 0x28)) {
            *pbStack_34 = 0x40;
            puVar1 = _DAT_080d2f7c;
            puVar10 = *(undefined4 **)(pbVar12 + 0x24);
            *_DAT_080d2f7c = *puVar10;
            puVar1[1] = puVar10[1];
            puVar1[2] = puVar10[2];
            puVar1[3] = puVar10[3];
            *(undefined4 **)(pbVar12 + 0x28) = puVar10;
          }
          *pbStack_34 = bVar2 & 0x40;
          *pbVar11 = pbVar12[0x1e];
          if (pbVar12[0x1e] != 0) {
            bVar2 = 0xc0;
            goto LAB_080d2fa2;
          }
          pbVar12[0x1a] = 0x80;
        }
        pbVar11 = (byte *)0x0;
        pbVar12[0xb] = pbVar12[4];
        pbVar7 = pbVar12 + 0x40;
        if (pbVar12[4] == 0) goto LAB_080d30fa;
        pbVar12[9] = 0;
LAB_080d3128:
        bVar14 = (byte)pbVar4;
        pbVar12[0xb] = pbVar12[0xb] - 1;
        if (uStack_3c == 0) {
          uStack_3c = 0xffffffff;
LAB_080d3034:
          bVar14 = (byte)pbVar4;
          if (pbVar12[0xb] == 0) {
            if (uVar13 == 3) {
              pbVar7 = (byte *)(uint)pbVar12[0x1d];
              pbVar12[0x1d] = pbVar12[0x1d] | 1;
            }
            M4A_CgbModVol(pbVar12,pbVar7,pbVar11);
            pbVar11 = (byte *)(uint)*pbVar12;
            if ((*pbVar12 & 3) == 0) {
              bVar2 = pbVar12[9];
              pbVar12[9] = (byte)(bVar2 - 1);
              pbVar7 = &UNK_000000ff;
              if (0 < (int)((bVar2 - 1) * 0x1000000)) {
                bVar2 = pbVar12[7];
                goto LAB_080d3126;
              }
              goto LAB_080d3066;
            }
            pbVar7 = extraout_r1;
            if (((uint)pbVar11 & 3) == 1) {
LAB_080d309e:
              pbVar12[9] = pbVar12[0x19];
              bVar2 = 7;
            }
            else if (((uint)pbVar11 & 3) == 2) {
              bVar2 = pbVar12[9];
              pbVar12[9] = (byte)(bVar2 - 1);
              iVar5 = (bVar2 - 1) * 0x1000000;
              pbVar11 = (byte *)(uint)pbVar12[0x19];
              pbVar7 = (byte *)((int)pbVar11 * 0x1000000);
              if (iVar5 + (int)pbVar11 * -0x1000000 == 0 || iVar5 < (int)pbVar7) {
LAB_080d30be:
                bVar14 = (byte)pbVar4;
                if (pbVar12[6] != 0) {
                  *pbVar12 = *pbVar12 - 1;
                  pbVar11 = (byte *)(uint)pbVar12[0x1d];
                  pbVar12[0x1d] = pbVar12[0x1d] | 1;
                  if (uVar13 != 3) {
                    pbVar4 = &SupervisorCall;
                  }
                  goto LAB_080d309e;
                }
                *pbVar12 = *pbVar12 & 0xfc;
                goto LAB_080d3066;
              }
              bVar2 = pbVar12[5];
            }
            else {
              bVar2 = pbVar12[9];
              pbVar12[9] = (byte)(bVar2 + 1);
              pbVar7 = &UNK_000000ff;
              pbVar11 = (byte *)(uint)pbVar12[10];
              if (pbVar11 <= (byte *)(bVar2 + 1 & 0xff)) {
LAB_080d30fa:
                pbVar11 = (byte *)0x0;
                *pbVar12 = *pbVar12 - 1;
                pbVar12[0xb] = pbVar12[5];
                pbVar7 = (byte *)0x0;
                if (pbVar12[5] == 0) goto LAB_080d30be;
                pbVar7 = (byte *)(uint)pbVar12[0x1d];
                pbVar12[0x1d] = pbVar12[0x1d] | 1;
                pbVar12[9] = pbVar12[10];
                if (uVar13 != 3) {
                  pbVar11 = (byte *)(uint)pbVar12[5];
                  pbVar4 = pbVar11;
                }
                goto LAB_080d3128;
              }
              bVar2 = pbVar12[4];
            }
LAB_080d3126:
            pbVar12[0xb] = bVar2;
          }
          goto LAB_080d3128;
        }
LAB_080d313a:
        if ((pbVar12[0x1d] & 2) != 0) {
          if (((int)uVar13 < 4) && ((pbVar12[1] & 8) != 0)) {
            if (*_DAT_080d3164 < 0x40) {
              uVar6 = *(int *)(pbVar12 + 0x20) + 2;
              uVar8 = _DAT_080d3168;
            }
            else {
              if (0x7f < *_DAT_080d3164) goto LAB_080d317a;
              uVar6 = *(int *)(pbVar12 + 0x20) + 1;
              uVar8 = _DAT_080d3188;
            }
            *(uint *)(pbVar12 + 0x20) = uVar6 & uVar8;
          }
LAB_080d317a:
          if (uVar13 == 4) {
            *pbStack_2c = (byte)*(undefined4 *)(pbVar12 + 0x20) | *pbStack_2c & 8;
          }
          else {
            *pbStack_2c = (byte)*(undefined4 *)(pbVar12 + 0x20);
          }
          bVar2 = pbVar12[0x21] + (pbVar12[0x1a] & 0xc0);
          pbVar12[0x1a] = bVar2;
          *pbVar9 = bVar2;
        }
        if ((pbVar12[0x1d] & 1) != 0) {
          *_DAT_080d31fc = *_DAT_080d31fc & ~pbVar12[0x1c] | pbVar12[0x1b];
          if (uVar13 == 3) {
            *pbStack_30 = *(byte *)((uint)pbVar12[9] + _DAT_080d3200);
            if ((pbVar12[0x1a] & 0x80) != 0) {
              *pbStack_34 = 0x80;
              *pbVar9 = pbVar12[0x1a];
              pbVar12[0x1a] = pbVar12[0x1a] & 0x7f;
            }
          }
          else {
            *pbStack_30 = pbVar12[9] * '\x10' + (bVar14 & 0xf);
            *pbVar9 = pbVar12[0x1a] | 0x80;
            if ((uVar13 == 1) && ((*pbStack_34 & 8) == 0)) {
              *pbVar9 = pbVar12[0x1a] | 0x80;
            }
          }
        }
      }
      pbVar12[0x1d] = 0;
    }
    uVar13 = uVar13 + 1;
    pbVar12 = pbVar12 + 0x40;
    if (4 < (int)uVar13) {
      return in_lr;
    }
  } while( true );
}

/* 0x080D3258 (40B) | M4A_m4aMPlayTempoControl (orig: func_080D3258) | origin: pure | domain: M4A | EXACT / stanhash_elf */
/* M4A_m4aMPlayTempoControl @ 0x080D3258 mode=THUMB size=0x28 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* M4A_m4aMPlayTempoControl @ 0x080D3258  mode=THUMB  size=0x28  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 M4A_m4aMPlayTempoControl(int param_1,ushort param_2)

{
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x34) == _DAT_080d327c) {
    *(ushort *)(param_1 + 0x1e) = param_2;
    *(short *)(param_1 + 0x20) = (short)((uint)*(ushort *)(param_1 + 0x1c) * (uint)param_2 >> 8);
  }
  return in_lr;
}

/* 0x080D3280 (104B) | M4A_m4aMPlayVolumeControl (orig: func_080D3280) | origin: pure | domain: M4A | EXACT / stanhash_elf */
/* M4A_m4aMPlayVolumeControl @ 0x080D3280 mode=THUMB size=0x68 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* M4A_m4aMPlayVolumeControl @ 0x080D3280  mode=THUMB  size=0x68  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 M4A_m4aMPlayVolumeControl(int param_1,ushort param_2,uint param_3)

{
  byte *pbVar1;
  uint uVar2;
  ushort uVar3;
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x34) == _DAT_080d32e4) {
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
    uVar2 = (uint)*(byte *)(param_1 + 8);
    pbVar1 = *(byte **)(param_1 + 0x2c);
    uVar3 = 1;
    if (uVar2 != 0) {
      do {
        if (((param_2 & uVar3) != 0) && ((*pbVar1 & 0x80) != 0)) {
          pbVar1[0x13] = (byte)((param_3 & 0xffff) >> 2);
          *pbVar1 = *pbVar1 | 3;
        }
        uVar2 = uVar2 - 1;
        pbVar1 = pbVar1 + 0x50;
        uVar3 = uVar3 << 1;
      } while (0 < (int)uVar2);
    }
    *(int *)(param_1 + 0x34) = _DAT_080d32e4;
  }
  return in_lr;
}

/* 0x080D32E8 (116B) | M4A_m4aMPlayPitchControl (orig: func_080D32E8) | origin: pure | domain: M4A | EXACT / stanhash_elf */
/* M4A_m4aMPlayPitchControl @ 0x080D32E8 mode=THUMB size=0x74 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* M4A_m4aMPlayPitchControl @ 0x080D32E8  mode=THUMB  size=0x74  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 M4A_m4aMPlayPitchControl(int param_1,ushort param_2,undefined2 param_3)

{
  uint uVar1;
  byte *pbVar2;
  ushort uVar3;
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x34) == _DAT_080d3358) {
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
    uVar1 = (uint)*(byte *)(param_1 + 8);
    pbVar2 = *(byte **)(param_1 + 0x2c);
    uVar3 = 1;
    if (uVar1 != 0) {
      do {
        if (((param_2 & uVar3) != 0) && ((*pbVar2 & 0x80) != 0)) {
          pbVar2[0xb] = (byte)((ushort)param_3 >> 8);
          pbVar2[0xd] = (byte)param_3;
          *pbVar2 = *pbVar2 | 0xc;
        }
        uVar1 = uVar1 - 1;
        pbVar2 = pbVar2 + 0x50;
        uVar3 = uVar3 << 1;
      } while (0 < (int)uVar1);
    }
    *(int *)(param_1 + 0x34) = _DAT_080d3358;
  }
  return in_lr;
}

/* 0x080D335C (104B) | M4A_m4aMPlayPanpotControl (orig: func_080D335C) | origin: pure | domain: M4A | EXACT / stanhash_elf */
/* M4A_m4aMPlayPanpotControl @ 0x080D335C mode=THUMB size=0x68 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* M4A_m4aMPlayPanpotControl @ 0x080D335C  mode=THUMB  size=0x88  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 M4A_m4aMPlayPanpotControl(int param_1,ushort param_2,byte param_3)

{
  byte *pbVar1;
  uint uVar2;
  ushort uVar3;
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x34) == _DAT_080d33c0) {
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
    uVar2 = (uint)*(byte *)(param_1 + 8);
    pbVar1 = *(byte **)(param_1 + 0x2c);
    uVar3 = 1;
    if (uVar2 != 0) {
      do {
        if (((param_2 & uVar3) != 0) && ((*pbVar1 & 0x80) != 0)) {
          pbVar1[0x15] = param_3;
          *pbVar1 = *pbVar1 | 3;
        }
        uVar2 = uVar2 - 1;
        pbVar1 = pbVar1 + 0x50;
        uVar3 = uVar3 << 1;
      } while (0 < (int)uVar2);
    }
    *(int *)(param_1 + 0x34) = _DAT_080d33c0;
  }
  return in_lr;
}

/* 0x080D33E4 (116B) | M4A_m4aMPlayModDepthSet (orig: func_080D33E4) | origin: pure | domain: M4A | EXACT / stanhash_elf */
/* M4A_m4aMPlayModDepthSet @ 0x080D33E4 mode=THUMB size=0x74 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* M4A_m4aMPlayModDepthSet @ 0x080D33E4  mode=THUMB  size=0x74  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 M4A_m4aMPlayModDepthSet(int param_1,ushort param_2,byte param_3)

{
  byte *pbVar1;
  uint uVar2;
  ushort uVar3;
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x34) == _DAT_080d3454) {
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
    uVar2 = (uint)*(byte *)(param_1 + 8);
    pbVar1 = *(byte **)(param_1 + 0x2c);
    uVar3 = 1;
    if (uVar2 != 0) {
      do {
        if ((((param_2 & uVar3) != 0) && ((*pbVar1 & 0x80) != 0)) &&
           (pbVar1[0x17] = param_3, param_3 == 0)) {
          func_0x080d33c4(pbVar1);
        }
        uVar2 = uVar2 - 1;
        pbVar1 = pbVar1 + 0x50;
        uVar3 = uVar3 << 1;
      } while (0 < (int)uVar2);
    }
    *(int *)(param_1 + 0x34) = _DAT_080d3454;
  }
  return in_lr;
}

/* 0x080D3458 (116B) | M4A_m4aMPlayLFOSpeedSet (orig: func_080D3458) | origin: pure | domain: M4A | EXACT / stanhash_elf */
/* M4A_m4aMPlayLFOSpeedSet @ 0x080D3458 mode=THUMB size=0x74 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* M4A_m4aMPlayLFOSpeedSet @ 0x080D3458  mode=THUMB  size=0x74  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 M4A_m4aMPlayLFOSpeedSet(int param_1,ushort param_2,byte param_3)

{
  byte *pbVar1;
  uint uVar2;
  ushort uVar3;
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x34) == _DAT_080d34c8) {
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
    uVar2 = (uint)*(byte *)(param_1 + 8);
    pbVar1 = *(byte **)(param_1 + 0x2c);
    uVar3 = 1;
    if (uVar2 != 0) {
      do {
        if ((((param_2 & uVar3) != 0) && ((*pbVar1 & 0x80) != 0)) &&
           (pbVar1[0x19] = param_3, param_3 == 0)) {
          func_0x080d33c4(pbVar1);
        }
        uVar2 = uVar2 - 1;
        pbVar1 = pbVar1 + 0x50;
        uVar3 = uVar3 << 1;
      } while (0 < (int)uVar2);
    }
    *(int *)(param_1 + 0x34) = _DAT_080d34c8;
  }
  return in_lr;
}

/* 0x080D34CC (344B) | M4A_ply_memacc (orig: func_080D34CC) | origin: pure | domain: M4A | EXACT / stanhash_elf */
/* M4A_ply_memacc @ 0x080D34CC mode=THUMB size=0x158 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* M4A_ply_memacc @ 0x080D34CC  mode=THUMB  size=0x158  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 M4A_ply_memacc(int param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  byte *pbVar5;
  undefined4 in_lr;
  
  pbVar3 = *(byte **)(param_2 + 0x40);
  bVar1 = *pbVar3;
  *(byte **)(param_2 + 0x40) = pbVar3 + 1;
  pbVar5 = (byte *)((uint)pbVar3[1] + *(int *)(param_1 + 0x18));
  *(byte **)(param_2 + 0x40) = pbVar3 + 2;
  bVar2 = pbVar3[2];
  uVar4 = (uint)bVar2;
  *(byte **)(param_2 + 0x40) = pbVar3 + 3;
  if (0x11 < bVar1) {
    return in_lr;
  }
  switch(*(uint *)(PTR_case_080D3500_080d34fc + (uint)bVar1 * 4) & 0xfffffffe) {
  case 0x80d3500:
  case 0x80d3548:
    *pbVar5 = bVar2;
    return in_lr;
  case 0x80d354c:
    *pbVar5 = *pbVar5 + bVar2;
    return in_lr;
  case 0x80d3554:
    *pbVar5 = *pbVar5 - bVar2;
    return in_lr;
  case 0x80d355c:
    *pbVar5 = *(byte *)(*(int *)(param_1 + 0x18) + uVar4);
    return in_lr;
  case 0x80d3566:
    *pbVar5 = *pbVar5 + *(char *)(*(int *)(param_1 + 0x18) + uVar4);
    return in_lr;
  case 0x80d3574:
    *pbVar5 = *pbVar5 - *(char *)(*(int *)(param_1 + 0x18) + uVar4);
    return in_lr;
  case 0x80d3582:
    if (*pbVar5 == uVar4) {
LAB_080d3604:
      func_0x080d3914(param_1,param_2,*_DAT_080d3614);
      return in_lr;
    }
    break;
  case 0x80d358a:
    if (*pbVar5 != uVar4) goto LAB_080d3604;
    break;
  case 0x80d3592:
    if (uVar4 < *pbVar5) goto LAB_080d3604;
    break;
  case 0x80d359a:
    if (uVar4 <= *pbVar5) goto LAB_080d3604;
    break;
  case 0x80d35a2:
    if (*pbVar5 <= uVar4) goto LAB_080d3604;
    break;
  case 0x80d35aa:
    if (*pbVar5 < uVar4) goto LAB_080d3604;
    break;
  case 0x80d35b2:
    if (*pbVar5 == *(byte *)(*(int *)(param_1 + 0x18) + uVar4)) goto LAB_080d3604;
    break;
  case 0x80d35c0:
    if (*pbVar5 != *(byte *)(*(int *)(param_1 + 0x18) + uVar4)) goto LAB_080d3604;
    break;
  case 0x80d35ce:
    if (*(byte *)(*(int *)(param_1 + 0x18) + uVar4) < *pbVar5) goto LAB_080d3604;
    break;
  case 0x80d35dc:
    if (*(byte *)(*(int *)(param_1 + 0x18) + uVar4) <= *pbVar5) goto LAB_080d3604;
    break;
  case 0x80d35ea:
    if (*pbVar5 <= *(byte *)(*(int *)(param_1 + 0x18) + uVar4)) goto LAB_080d3604;
    break;
  case 0x80d35f8:
    if (*pbVar5 < *(byte *)(*(int *)(param_1 + 0x18) + uVar4)) goto LAB_080d3604;
  }
  *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + 4;
  return in_lr;
}

/* 0x080D3624 (32B) | M4A_ply_xcmd (orig: func_080D3624) | origin: wip | domain: M4A | EXACT / stanhash_elf */
void M4A_ply_xcmd(u32 param_1, u32 param_2, u32 param_3, u32 param_4) {
    register u32 r1 = param_2;
    register u32 r0 = param_1;
    register u32 r2 = param_3;
    register u32 r3 = param_4;
    register u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0;
    r2 = *(u32 *)(r1 + 0x40);
    r3 = *(u8 *)(r2);
    r2 += 1;
    *(u32 *)(r1 + 0x40) = r2;
    r2 = 0x08139D30;
    r3 = r3 << 2;
    r3 = r3 + r2;
    r2 = *(u32 *)(r3);
    r0 = func_080D3914(r0, r1, r2, r3);
    return r0;
    r0 = r0;
    r3 = (u32)r2 >> 0x20;
    return r0;
}

/* 0x080D3644 (20B) | M4A_ply_xxx (orig: func_080D3644) | origin: pure | domain: M4A | EXACT / stanhash_elf */
/* M4A_ply_xxx @ 0x080D3644 mode=THUMB size=0x14 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
(sin referencia de Ghidra en esta direccion)

/* 0x080D3658 (72B) | M4A_ply_xwave (orig: func_080D3658) | origin: pure | domain: M4A | EXACT / stanhash_elf */
/* M4A_ply_xwave @ 0x080D3658 mode=THUMB size=0x48 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
(sin referencia de Ghidra en esta direccion)

