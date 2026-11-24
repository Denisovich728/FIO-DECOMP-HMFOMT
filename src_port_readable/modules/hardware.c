/* FIO-DECOMP-HMFOMT :: Port Readable Module: hardware (329 functions) */
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

/* 0x08007128 (76B) | hardware_Sub_08007128 (orig: func_08007128) | origin: pure | domain: hardware | HIGH / stanhash_map_tu */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 CppRuntime_builtin_new();
extern u32 hardware_Sub_080D6D98();
/* paridad 97.7% preset agbcc_O2 */
u32 hardware_Sub_08007128(u32 arg0) {
  int *mem_ptr;
  u32 *mem_ptr2;
  u32 val;
  int val2;
  mem_ptr = 0x03000404;
  if (*(u32 *)0x03000404 == 0) {
    mem_ptr2 = (u32 *)CppRuntime_builtin_new(0x54);
    val = hardware_Sub_080D6D98(mem_ptr2 + 1,0x10,0);
    *mem_ptr2 = val;
    mem_ptr2[0x11] = 0;
    *(u16 *)(mem_ptr2 + 0x12) = 0;
    mem_ptr2[0x13] = 0;
    *(u8 *)(mem_ptr2 + 0x14) = 0;
    *(u8 *)((int)mem_ptr2 + 0x51) = 0;
    mem_ptr2[0x11] = 0;
    *mem_ptr = (int)mem_ptr2;
  }
  val2 = *mem_ptr;
  *(int *)(val2 + 0x4c) = *(int *)(val2 + 0x4c) + 1;
  return arg0;
}

/* 0x08007174 (4B) | hardware_Sub_08007174 (orig: func_08007174) | origin: pure | domain: hardware | HIGH / stanhash_map_tu */
/* hardware_Sub_08007174 @ 0x08007174 mode=THUMB size=0x4 (importado de Stan: hardware) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* MODULO STAN: hardware */

// TODO: Reconstruir logica para coincidir 1:1 con la ROM

/* 0x08007184 (56B) | hardware_Sub_08007184 (orig: func_08007184) | origin: pure | domain: hardware | HIGH / stanhash_map_tu */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 CppRuntime_builtin_delete();
/* paridad 96.8% preset agbcc_O2 */
void hardware_Sub_08007184(u32 arg0,u32 arg1) {
  int *mem_ptr;
  int val;
  int val2;
  mem_ptr = 0x03000404;
  val = *mem_ptr;
  val2 = *(int *)(val + 0x4c) + -1;
  *(int *)(val + 0x4c) = val2;
  if (val2 == 0) {
    if (val != 0) {
      CppRuntime_builtin_delete(val);
    }
    *mem_ptr = 0;
  }
  if ((arg1 & 1) != 0) {
    CppRuntime_builtin_delete(arg0);
  }
}

/* 0x080071BC (432B) | hardware_Sub_080071BC (orig: func_080071BC) | origin: pure | domain: hardware | HIGH / stanhash_map_tu */
/* hardware_Sub_080071BC @ 0x080071BC mode=THUMB size=0x1B0 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* hardware_Sub_080071BC @ 0x080071BC  mode=THUMB  size=0x1B0  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 hardware_Sub_080071BC(undefined4 param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int *piVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  undefined4 in_lr;
  undefined1 uStack_2c;
  
  piVar6 = (int *)*_DAT_08007368;
  pbVar3 = (byte *)((int)piVar6 + 0x51);
  if (*pbVar3 != 0) {
    uVar5 = (uint)*(byte *)(piVar6 + 0x14);
    uVar8 = uVar5 + *pbVar3;
    if (uVar5 < uVar8) {
      piVar2 = piVar6 + uVar5 + 1;
      do {
        uVar1 = 0;
        if (uVar5 < 0x10) {
          uVar1 = piVar6[0x11] & 1 << (uVar5 & 0x1f);
          uVar1 = (-uVar1 | uVar1) >> 0x1f;
        }
        if (uVar1 != 0) {
          *piVar2 = *piVar6;
          *piVar6 = (int)piVar2;
          if (uVar5 < 0x10) {
            piVar6[0x11] = piVar6[0x11] & ~(1 << (uVar5 & 0x1f));
          }
        }
        piVar2 = piVar2 + 1;
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar8);
    }
    *pbVar3 = 0;
  }
  if (param_3 != 0) {
    uVar5 = 0;
    piVar7 = piVar6 + 1;
    piVar2 = piVar7;
    do {
      uVar8 = 0;
      if (uVar5 < 0x10) {
        uVar8 = piVar6[0x11] & 1 << (uVar5 & 0x1f);
        uVar8 = (-uVar8 | uVar8) >> 0x1f;
      }
      if (((uVar8 != 0) && (param_2 <= uVar5)) && (uVar5 < param_3 + param_2)) {
        *(undefined2 *)((int)piVar7 + 2) = 0;
        *piVar7 = *piVar6;
        *piVar6 = (int)piVar2;
        if (uVar5 < 0x10) {
          piVar6[0x11] = piVar6[0x11] & ~(1 << (uVar5 & 0x1f));
        }
        *(short *)(piVar6 + 0x12) = (short)piVar6[0x12] + -1;
      }
      piVar7 = piVar7 + 1;
      piVar2 = piVar2 + 1;
      uVar5 = uVar5 + 1;
    } while (uVar5 < 0x10);
    uVar8 = 0;
    uVar5 = (1 << (param_3 & 0xff)) + -1 << (param_2 & 0xff);
    do {
      piVar2 = (int *)*piVar6;
      if (piVar2 == (int *)0x0) break;
      *piVar6 = *piVar2;
      uVar1 = (int)piVar2 + (-4 - (int)piVar6) >> 2;
      if (uVar1 < 0x10) {
        piVar6[0x11] = piVar6[0x11] | 1 << (uVar1 & 0x1f);
      }
      uVar8 = uVar8 | 1 << (uVar1 & 0xff);
    } while ((uVar8 & uVar5) != uVar5);
    uVar1 = 0;
    uVar5 = ~uVar5;
    piVar2 = piVar6;
    if ((uVar8 & uVar5) != 0) {
      do {
        piVar2 = piVar2 + 1;
        uVar4 = 1 << (uVar1 & 0xff);
        if ((uVar8 & uVar4 & uVar5) != 0) {
          *piVar2 = *piVar6;
          *piVar6 = (int)piVar2;
          if (uVar1 < 0x10) {
            piVar6[0x11] = piVar6[0x11] & ~(1 << (uVar1 & 0x1f));
          }
          uVar8 = uVar8 & ~uVar4;
        }
        uVar1 = uVar1 + 1;
      } while (((uVar8 & uVar5) != 0) && (uVar1 < 0x10));
    }
    *(char *)(piVar6 + 0x14) = (char)param_2;
    uStack_2c = (undefined1)param_3;
    *(undefined1 *)((int)piVar6 + 0x51) = uStack_2c;
  }
  return in_lr;
}

/* 0x0800736C (116B) | hardware_Sub_0800736C (orig: func_0800736C) | origin: wip | domain: hardware | HIGH / stanhash_map_tu */
u32 hardware_Sub_0800736C(void) {
  u32 uVar1;
  u32 uVar2;
  u32 *puVar3;
  u32 *puVar4;
  u32 uVar5;
  puVar3 = (u32 *)*(u16 *)0x03000404;
  puVar4 = (u32 *)*puVar3;
  if ((puVar4 == (u32 *)0x0) || (*puVar3 = *puVar4, puVar4 == (u32 *)0x0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = (int)puVar4 + (-4 - (int)puVar3) >> 2;
    if (uVar5 < 0x10) {
      puVar3[0x11] = puVar3[0x11] | 1 << (uVar5 & 0x1f);
    }
    *(short *)(puVar3 + 0x12) = *(short *)(puVar3 + 0x12) + 1;
    *(u16 *)puVar4 = 1;
    uVar1 = 0x0000FFFF;
    uVar2 = *(u16 *)((int)puVar3 + 0x4a) + 1;
    if (0x0000FFFF < uVar2) {
      uVar2 = 1;
    }
    *(u16 *)((int)puVar4 + 2) = (u16)uVar2;
    *(u16 *)((int)puVar3 + 0x4a) = (u16)uVar2;
    uVar5 = uVar5 & 0xf | (*(u16 *)((int)puVar4 + 2) & uVar1) << 4;
  }
  return uVar5;
}

/* 0x080073E0 (124B) | hardware_Sub_080073E0 (orig: func_080073E0) | origin: wip | domain: hardware | HIGH / stanhash_map_tu */
void hardware_Sub_080073E0(u32 param_1,u32 param_2) {
  short sVar1;
  u32 uVar2;
  short *psVar3;
  u32 uVar4;
  u32 *puVar5;
  puVar5 = (u32 *)(*(int *)0x03000404);
  if (param_2 != 0) {
    uVar4 = param_2 & 0xf;
    uVar2 = 0;
    if (uVar4 < 0x10) {
      uVar2 = (u8)puVar5[0x11] & 1 << uVar4;
      uVar2 = (-uVar2 | uVar2) >> 0x1f;
    }
    if (((uVar2 != 0) &&
        (psVar3 = (short *)(puVar5 + uVar4 + 1), (param_2 & 0xfffff) >> 4 == (u32)(u16)psVar3[1]
        )) && (sVar1 = *psVar3, *psVar3 = sVar1 + -1, (short)(sVar1 + -1) == 0)) {
      psVar3[1] = 0;
      *(u32 *)psVar3 = *puVar5;
      *puVar5 = (s16)psVar3;
      if (uVar4 < 0x10) {
        puVar5[0x11] = puVar5[0x11] & ~(1 << uVar4);
      }
      *(short *)(puVar5 + 0x12) = *(short *)(puVar5 + 0x12) + -1;
    }
  }
}

/* 0x0800745C (100B) | hardware_Sub_0800745C (orig: func_0800745C) | origin: wip | domain: hardware | HIGH / stanhash_map_tu */
u32 hardware_Sub_0800745C(u32 param_1,u32 param_2) {
  short sVar1;
  u32 uVar2;
  u32 uVar3;
  short *psVar4;
  if (param_2 != 0) {
    uVar3 = param_2 & 0xf;
    uVar2 = 0;
    if (uVar3 < 0x10) {
      uVar2 = *(u32 *)(*(u16 *)0x03000404 + 0x44) & 1 << uVar3;
      uVar2 = (-uVar2 | uVar2) >> 0x1f;
    }
    if ((uVar2 != 0) &&
       (psVar4 = (short *)(*(u16 *)0x03000404 + uVar3 * 4 + 4),
       (param_2 & 0xfffff) >> 4 == (u32)(u16)psVar4[1])) {
      sVar1 = *psVar4;
      *psVar4 = sVar1 + 1;
      if (sVar1 != -1) goto LAB_080074b8;
      *psVar4 = -1;
    }
  }
  param_2 = 0;
LAB_080074b8:
  return param_2;
}

/* 0x080074C0 (80B) | hardware_Sub_080074C0 (orig: func_080074C0) | origin: wip | domain: hardware | HIGH / stanhash_map_tu */
u32 hardware_Sub_080074C0(u32 param_1,u32 param_2) {
  u32 uVar1;
  u32 uVar2;
  if (param_2 != 0) {
    uVar2 = param_2 & 0xf;
    uVar1 = 0;
    if (uVar2 < 0x10) {
      uVar1 = *(u32 *)(*(u16 *)0x03000404 + 0x44) & 1 << uVar2;
      uVar1 = (-uVar1 | uVar1) >> 0x1f;
    }
    if ((uVar1 != 0) &&
       ((param_2 & 0xfffff) >> 4 == (u32)*(u16 *)(uVar2 * 4 + *(u16 *)0x03000404 + 6)))
    goto LAB_08007506;
  }
  uVar2 = 0xffffffff;
LAB_08007506:
  return uVar2;
}

/* 0x08007510 (84B) | hardware_Sub_08007510 (orig: func_08007510) | origin: wip | domain: hardware | HIGH / stanhash_map_tu */
u32 hardware_Sub_08007510(u32 param_1,u32 param_2) {
  u32 uVar1;
  u32 uVar2;
  u16 *puVar3;
  if (param_2 != 0) {
    uVar2 = param_2 & 0xf;
    uVar1 = 0;
    if (uVar2 < 0x10) {
      uVar1 = *(u32 *)(*(u16 *)0x03000404 + 0x44) & 1 << uVar2;
      uVar1 = (-uVar1 | uVar1) >> 0x1f;
    }
    if ((uVar1 != 0) &&
       (puVar3 = (u16 *)(*(u16 *)0x03000404 + uVar2 * 4 + 4),
       (param_2 & 0xfffff) >> 4 == (u32)puVar3[1])) {
      uVar1 = (u32)*puVar3;
      goto LAB_0800755e;
    }
  }
  uVar1 = 0;
LAB_0800755e:
  return uVar1;
}

/* 0x08007578 (404B) | hardware_Sub_08007578 (orig: func_08007578) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
u32 hardware_Sub_08007578(u32 *param_1,char *param_2) {
  char cVar1;
  int *piVar2;
  u32 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  u32 uVar9;
  u8 auStack_3c [4];
  u32 uStack_38;
  int iStack_34;
  int iStack_30;
  u32 *puStack_2c;
  int iStack_28;
  u32 uStack_24;
  puStack_2c = param_1;
  piVar2 = (int *)CppRuntime_builtin_new(0x14);
  *piVar2 = 0;
  piVar2[1] = 0;
  piVar2[3] = 0;
  cVar1 = *param_2;
  hardware_Sub_080D6DB8(piVar2,cVar1);
  uVar9 = (u32)(u8)(cVar1 - 1);
  if (uVar9 != 0xff) {
    do {
      hardware_Sub_08007128(auStack_3c);
      uStack_38 = hardware_Sub_0800736C(auStack_3c);
      iVar7 = piVar2[1];
      if (iVar7 == piVar2[3]) {
        iStack_30 = 1;
        iVar6 = *piVar2;
        iStack_34 = iVar7 - iVar6 >> 3;
        piVar4 = &iStack_34;
        if (iStack_34 == 0) {
          piVar4 = &iStack_30;
        }
        if (iStack_34 + *piVar4 == 0) {
          iVar5 = 0;
          iStack_28 = 0;
        }
        else {
          iVar6 = (iStack_34 + *piVar4) * 8;
          iVar5 = LibC_malloc(iVar6);
          iStack_28 = iVar6;
          if (iVar5 == 0) {
            iVar5 = code_linkonce_Sub_080D3BC0(iVar6);
          }
          iVar6 = *piVar2;
        }
        uStack_24 = uVar9 - 1;
        iVar8 = iVar5;
        for (; iVar6 != iVar7; iVar6 = iVar6 + 8) {
          if (iVar8 != 0) {
            hardware_Sub_08007128(iVar8);
            uVar3 = hardware_Sub_0800745C(iVar8,*(u32 *)(iVar6 + 4));
            *(u32 *)(iVar8 + 4) = uVar3;
          }
          iVar8 = iVar8 + 8;
        }
        iVar7 = iStack_30;
        if (iStack_30 == 1) {
          if (iVar8 != 0) {
            hardware_Sub_08007128(iVar8);
            uVar3 = hardware_Sub_0800745C(iVar8,uStack_38);
            *(u32 *)(iVar8 + 4) = uVar3;
          }
          iVar8 = iVar8 + 8;
        }
        else {
          for (; iVar7 != 0; iVar7 = iVar7 + -1) {
            if (iVar8 != 0) {
              hardware_Sub_08007128(iVar8);
              uVar3 = hardware_Sub_0800745C(iVar8,uStack_38);
              *(u32 *)(iVar8 + 4) = uVar3;
            }
            iVar8 = iVar8 + 8;
          }
        }
        iVar6 = piVar2[1];
        for (iVar7 = *piVar2; iVar7 != iVar6; iVar7 = iVar7 + 8) {
          hardware_Sub_080073E0(iVar7,*(u32 *)(iVar7 + 4));
          hardware_Sub_08007184(iVar7,2);
        }
        if (*piVar2 != 0) {
          LibC_free();
        }
        *piVar2 = iVar5;
        piVar2[1] = iVar8;
        piVar2[3] = iStack_28 + iVar5;
      }
      else {
        if (iVar7 != 0) {
          hardware_Sub_08007128(iVar7);
          uVar3 = hardware_Sub_0800745C(iVar7,uStack_38);
          *(u32 *)(iVar7 + 4) = uVar3;
        }
        piVar2[1] = piVar2[1] + 8;
        uStack_24 = uVar9 - 1;
      }
      hardware_Sub_080073E0(auStack_3c,uStack_38);
      hardware_Sub_08007184(auStack_3c,2);
      uVar9 = uStack_24 & 0xff;
    } while (uVar9 != 0xff);
  }
  piVar2[4] = *piVar2;
  *puStack_2c = piVar2;
  return;
}

/* 0x0800770C (8B) | hardware_SetField_0x00 (orig: func_0800770C) | origin: pure | domain: hardware | HIGH / stanhash_map_tu */
void hardware_SetField_0x00(u32 *arg0) {
    *arg0 = 0;
}

/* 0x08007714 (92B) | hardware_Sub_08007714 (orig: func_08007714) | origin: pure | domain: hardware | HIGH / stanhash_map_tu */
extern void hardware_Sub_080073E0();
extern void hardware_Sub_08007184();
extern void LibC_free();
extern void CppRuntime_builtin_delete();
void hardware_Sub_08007714(u32 **param_1, int param_2) {
    u32 *p = *param_1;
    if (p != 0) {
        u32 *q = p;
        u32 end = q[1];
        u32 cur = q[0];
        for (; cur != end; cur += 8) {
            hardware_Sub_080073E0(cur, *(u32 *)(cur + 4));
            hardware_Sub_08007184(cur, 2);
        }
        if (q[0] != 0) {
            LibC_free(q[0]);
        }
        CppRuntime_builtin_delete(q);
    }
    if (param_2 & 1) {
        CppRuntime_builtin_delete(param_1);
    }
}

/* 0x08007770 (108B) | hardware_Sub_08007770 (orig: func_08007770) | origin: wip | domain: hardware | HIGH / stanhash_map_tu */
u32 hardware_Sub_08007770(int param_1,u32 *param_2) {
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  u32 uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  piVar6 = (int *)*param_2;
  if (piVar6 == (int *)0x0) {
    hardware_Sub_08007128(param_1);
    uVar5 = hardware_Sub_0800736C(param_1);
  }
  else {
    iVar3 = piVar6[1];
    iVar7 = piVar6[4];
    iVar2 = iVar7;
    iVar8 = iVar3;
    do {
      iVar1 = iVar2;
      if (iVar7 == iVar8) goto LAB_080077a8;
      iVar8 = iVar1 + 8;
      if (iVar8 == iVar3) {
        iVar8 = *piVar6;
      }
      iVar4 = hardware_Sub_08007510(iVar1,*(u32 *)(iVar1 + 4));
      iVar2 = iVar8;
    } while (iVar4 != 1);
    piVar6[4] = iVar8;
LAB_080077a8:
    hardware_Sub_08007128(param_1);
    uVar5 = hardware_Sub_0800745C(param_1,*(u32 *)(iVar1 + 4));
  }
  *(u32 *)(param_1 + 4) = uVar5;
  return param_1;
}

/* 0x080077DC (104B) | hardware_Sub_080077DC (orig: func_080077DC) | origin: wip | domain: hardware | HIGH / stanhash_map_tu */
u32 hardware_Sub_080077DC(u32 *param_1,u32 param_2) {
  int iVar1;
  u32 uVar2;
  u32 uVar3;
  u32 uVar4;
  uVar4 = *param_1;
  if (uVar4 != 0xffffffff) {
    if (uVar4 == 0) {
      *param_1 = (1 << (1 << (param_2 & 0xff) & 0xffU)) - 1;
      iVar1 = 0;
      goto LAB_0800783c;
    }
    if (param_2 < 5) {
      uVar3 = 1 << (param_2 & 0xff);
      iVar1 = 0;
      uVar2 = (1 << (uVar3 & 0xff)) - 1;
      do {
        if ((uVar4 & uVar2) == 0) {
          *param_1 = *param_1 | uVar2;
          goto LAB_0800783c;
        }
        iVar1 = iVar1 + uVar3;
        uVar2 = uVar2 << (uVar3 & 0xff);
      } while (uVar2 != 0);
    }
  }
  iVar1 = 0x20;
LAB_0800783c:
  return iVar1;
}

/* 0x08007844 (48B) | hardware_Sub_08007844 (orig: func_08007844) | origin: wip | domain: hardware | HIGH / stanhash_map_tu */
void hardware_Sub_08007844(u32 *param_1, u32 param_2, s16 param_3) {
    u32 uVar1;
  register u32 _p_param_2 = param_2;
  register u32 _p_param_3 = param_3;

  if (_p_param_3 < 5) {
    uVar1 = *param_1 & ~((1 << (1 << _p_param_3 & 0xffU)) + -1 << (_p_param_2 & 0x1f));
  }
  else {
    if (_p_param_3 != 5) {
    }
    uVar1 = 0;
  }
  *param_1 = uVar1;
}

/* 0x08007874 (348B) | hardware_Sub_08007874 (orig: func_08007874) | origin: wip | domain: hardware | HIGH / stanhash_map_tu */
u32 hardware_Sub_08007874(u32 param_1) {
  u32 *puVar1;
  u32 uVar2;
  u8 *puVar3;
  u32 *puVar4;
  u32 *puVar5;
  int iVar6;
  u8 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  u32 uStack_4c;
  u32 uStack_48;
  u8 *puStack_44;
  u32 *puStack_40;
  u32 *puStack_3c;
  u16 *puStack_38;
  u16 *puStack_34;
  u32 *puStack_30;
  int iStack_2c;
  u8 *puStack_28;
  u32 *puStack_24;
  uStack_48 = param_1;
  if (*(u16 *)0x03000408 == 0) {
    puVar1 = (u32 *)CppRuntime_builtin_new(0x0000092C);
    puStack_24 = &uStack_4c;
    for (puVar4 = puVar1; puVar4 != puVar1 + 8; puVar4 = puVar4 + 1) {
      *puVar4 = 0;
    }
    uVar2 = hardware_Sub_080D770C(puVar1 + 9,0x100,0);
    puVar1[8] = uVar2;
    puStack_44 = (u8 *)(0x00000824 + (int)puVar1);
    *puStack_44 = 0;
    puStack_44[1] = 1;
    puStack_28 = (u8 *)(0x00000828 + (int)puVar1);
    iStack_2c = 1;
    puStack_30 = puVar1 + 8;
    puStack_40 = puVar1 + 0x248;
    puStack_3c = (u32 *)(0x00000924 + (int)puVar1);
    puStack_38 = (u16 *)(0x00000928 + (int)puVar1);
    puStack_34 = (u16 *)(0x0000092A + (int)puVar1);
    do {
      *puStack_28 = 0;
      puStack_28[1] = 1;
      puVar3 = puStack_28 + 4;
      iVar9 = 1;
      puStack_28 = puStack_28 + 0x7c;
      iStack_2c = iStack_2c + -1;
      do {
        *puVar3 = 0;
        puVar3[1] = 1;
        puVar7 = puVar3 + 4;
        iVar6 = 1;
        puVar3 = puVar3 + 0x3c;
        iVar9 = iVar9 + -1;
        do {
          *puVar7 = 0;
          puVar7[1] = 1;
          puVar4 = (u32 *)(puVar7 + 4);
          iVar10 = 1;
          puVar7 = puVar7 + 0x1c;
          iVar6 = iVar6 + -1;
          do {
            *(u8 *)puVar4 = 0;
            *(u8 *)((int)puVar4 + 1) = 1;
            iVar8 = 1;
            puVar5 = puVar4 + 3;
            iVar10 = iVar10 + -1;
            do {
              puVar4 = puVar4 + 1;
              *puVar4 = 0;
              iVar8 = iVar8 + -1;
            } while (iVar8 != -1);
            puVar4 = puVar5;
          } while (iVar10 != -1);
        } while (iVar6 != -1);
      } while (iVar9 != -1);
    } while (iStack_2c != -1);
    *(u16 *)puStack_40 = 0;
    *puStack_3c = 0;
    *puStack_38 = 0;
    *puStack_34 = 0;
    uStack_4c = 0;
    if (puVar1 != puStack_30) {
      uVar2 = *puStack_24;
      puVar4 = puVar1;
      do {
        *puVar4 = uVar2;
        puVar4 = puVar4 + 1;
      } while (puVar4 != puStack_30);
    }
    hardware_Sub_08007EC8(puStack_44);
    *(u16 *)0x03000408 = (int)puVar1;
  }
  *(int *)(*(u16 *)0x03000408 + 0x00000924) = *(int *)(*(u16 *)0x03000408 + 0x00000924) + 1;
  return (uStack_48);
}

/* 0x080079E8 (64B) | hardware_Sub_080079E8 (orig: func_080079E8) | origin: pure | domain: hardware | HIGH / stanhash_map_tu */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 CppRuntime_builtin_delete();
/* paridad 97.2% preset agbcc_O2 */
void hardware_Sub_080079E8(u32 arg0,u32 arg1) {
  int *mem_ptr;
  int val;
  int val2;
  mem_ptr = 0x03000408;
  val = *(u32 *)0x03000408;
  val2 = *(int *)(val + 0x00000924) + -1;
  *(int *)(val + 0x00000924) = val2;
  if (val2 == 0) {
    if (val != 0) {
      CppRuntime_builtin_delete(val);
    }
    *mem_ptr = 0;
  }
  if ((arg1 & 1) != 0) {
    CppRuntime_builtin_delete(arg0);
  }
}

/* 0x08007A28 (300B) | hardware_Sub_08007A28 (orig: func_08007A28) | origin: wip | domain: hardware | HIGH / stanhash_map_tu */
void hardware_Sub_08007A28(u32 param_1,u32 param_2,int param_3) {
  short *psVar1;
  u16 *puVar2;
  u32 uVar3;
  u16 *puVar4;
  u32 *puVar5;
  short *psVar6;
  int iVar7;
  u32 uVar8;
  u16 *puVar9;
  u16 uStack_38;
  short sStack_34;
  iVar7 = *(u16 *)0x03000408;
  psVar6 = (short *)(iVar7 + 0x0000092A);
  if (*psVar6 != 0) {
    hardware_Sub_08007F84(iVar7 + 0x00000824,*(u16 *)(iVar7 + 0x00000928),*psVar6);
    *psVar6 = 0;
  }
  if (param_3 != 0) {
    uVar8 = 0;
    psVar1 = (short *)(iVar7 + 0x920);
    puVar4 = (u16 *)(iVar7 + 0x00000928);
    if (*psVar1 != 0) {
      puVar2 = (u16 *)(iVar7 + 0x24);
      puVar9 = puVar2;
      do {
        uVar3 = 0;
        if (uVar8 < 0x100) {
          uVar3 = *(u32 *)(iVar7 + (uVar8 >> 5) * 4) & 1 << (uVar8 & 0x1f);
          uVar3 = (-uVar3 | uVar3) >> 0x1f;
        }
        if (uVar3 != 0) {
          uVar3 = *puVar2 & 0x3ff;
          if ((param_2 < uVar3 + (1 << ((*(u8 *)((int)puVar2 + 1) & 0x3f) >> 2))) &&
             (uVar3 < param_2 + param_3)) {
            hardware_Sub_080080A0(iVar7 + 0x824,uVar3,(*(u8 *)((int)puVar2 + 1) & 0x3f) >> 2);
            puVar2[2] = 0;
            *(u32 *)puVar2 = *(u32 *)(iVar7 + 0x20);
            *(u16 **)(iVar7 + 0x20) = puVar9;
            if (uVar8 < 0x100) {
              puVar5 = (u32 *)(iVar7 + (uVar8 >> 5) * 4);
              *puVar5 = *puVar5 & ~(1 << (uVar8 & 0x1f));
            }
            *psVar1 = *psVar1 + -1;
          }
        }
        puVar2 = puVar2 + 4;
        puVar9 = puVar9 + 4;
        uVar8 = uVar8 + 1;
      } while ((*psVar1 != 0) && (uVar8 < 0x100));
    }
    hardware_Sub_08007EE8(iVar7 + 0x824,param_2,param_3);
    uStack_38 = (u16)param_2;
    *puVar4 = uStack_38;
    sStack_34 = (short)param_3;
    *psVar6 = sStack_34;
  }
}

/* 0x08007B54 (212B) | hardware_Sub_08007B54 (orig: func_08007B54) | origin: wip | domain: hardware | HIGH / stanhash_map_tu */
u32 hardware_Sub_08007B54(u32 param_1,u32 param_2) {
  u32 uVar1;
  u16 *puVar2;
  u32 uVar3;
  u32 *puVar4;
  u16 *puVar5;
  int iVar6;
  int iVar7;
  u32 uVar8;
  iVar6 = *(u16 *)0x03000408;
  iVar7 = iVar6 + 0x00000824;
  uVar1 = hardware_Sub_08008020(iVar7);
  uVar3 = 0x000003FF;
  if (uVar1 <= 0x000003FF) {
    puVar5 = *(u16 **)(iVar6 + 0x20);
    if ((puVar5 != (u16 *)0x0) &&
       (*(u32 *)(iVar6 + 0x20) = *(u32 *)puVar5, puVar5 != (u16 *)0x0)) {
      uVar8 = (int)puVar5 + (-4 - (iVar6 + 0x20)) >> 3;
      if (uVar8 < 0x100) {
        puVar4 = (u32 *)(iVar6 + (uVar8 >> 5) * 4);
        *puVar4 = *puVar4 | 1 << (uVar8 & 0x1f);
      }
      *(short *)(iVar6 + 0x920) = *(short *)(iVar6 + 0x920) + 1;
      *puVar5 = (u16)0xFFFFFC00 & *puVar5 | (u16)uVar1 & (u16)uVar3;
      *(u8 *)((int)puVar5 + 1) = *(u8 *)((int)puVar5 + 1) & 0xc3 | (u8)((param_2 & 0xf) << 2);
      puVar5[1] = 1;
      uVar3 = 0x0000FFFF;
      puVar2 = (u16 *)(iVar6 + 0x00000922);
      uVar1 = *puVar2 + 1;
      if (0x0000FFFF < uVar1) {
        uVar1 = 1;
      }
      puVar5[2] = (u16)uVar1;
      *puVar2 = (u16)uVar1;
      uVar3 = uVar8 & 0xff | (puVar5[2] & uVar3) << 8;
      goto LAB_08007c1e;
    }
    hardware_Sub_080080A0(iVar7,uVar1,param_2);
  }
  uVar3 = 0;
LAB_08007c1e:
  return uVar3;
}

/* 0x08007C28 (176B) | hardware_Sub_08007C28 (orig: func_08007C28) | origin: wip | domain: hardware | HIGH / stanhash_map_tu */
void hardware_Sub_08007C28(u32 param_1,u32 param_2) {
  u16 uVar1;
  u32 uVar2;
  u32 *puVar3;
  u16 *puVar4;
  u32 uVar5;
  int iVar6;
  u8 bStack_18;
  iVar6 = *(u16 *)0x03000408;
  if (param_2 != 0) {
    bStack_18 = (u8)param_2;
    uVar5 = param_2 & 0xff;
    uVar2 = 0;
    if (uVar5 < 0x100) {
      uVar2 = *(u32 *)(iVar6 + (u32)(bStack_18 >> 5) * 4) & 1 << (param_2 & 0x1f);
      uVar2 = (-uVar2 | uVar2) >> 0x1f;
    }
    if (((uVar2 != 0) &&
        (puVar4 = (u16 *)(iVar6 + uVar5 * 8 + 0x24), (param_2 & 0xffffff) >> 8 == (u32)puVar4[2]
        )) && (uVar1 = puVar4[1], puVar4[1] = uVar1 - 1, (u16)(uVar1 - 1) == 0)) {
      hardware_Sub_080080A0(iVar6 + 0x00000824,*puVar4 & 0x3ff,(*(u8 *)((int)puVar4 + 1) & 0x3f) >> 2);
      puVar4[2] = 0;
      *(u32 *)puVar4 = *(u32 *)(iVar6 + 0x20);
      *(u16 **)(iVar6 + 0x20) = puVar4;
      if (uVar5 < 0x100) {
        puVar3 = (u32 *)(iVar6 + (u32)(bStack_18 >> 5) * 4);
        *puVar3 = *puVar3 & ~(1 << (param_2 & 0x1f));
      }
      *(short *)(iVar6 + 0x920) = *(short *)(iVar6 + 0x920) + -1;
    }
  }
}

/* 0x08007CD8 (116B) | hardware_Sub_08007CD8 (orig: func_08007CD8) | origin: wip | domain: hardware | HIGH / stanhash_map_tu */
u32 hardware_Sub_08007CD8(u32 param_1,u32 param_2) {
  short sVar1;
  u32 uVar2;
  int iVar3;
  if (param_2 != 0) {
    uVar2 = 0;
    if ((param_2 & 0xff) < 0x100) {
      uVar2 = *(u32 *)(*(u16 *)0x03000408 + (param_2 >> 5 & 7) * 4) & 1 << (param_2 & 0x1f);
      uVar2 = (-uVar2 | uVar2) >> 0x1f;
    }
    if ((uVar2 != 0) &&
       (iVar3 = *(u16 *)0x03000408 + (param_2 & 0xff) * 8 + 0x24,
       (param_2 & 0xffffff) >> 8 == (u32)*(u16 *)(iVar3 + 4))) {
      sVar1 = *(short *)(iVar3 + 2);
      *(short *)(iVar3 + 2) = sVar1 + 1;
      if (sVar1 != -1) goto LAB_08007d44;
      *(u16 *)(iVar3 + 2) = 0xffff;
    }
  }
  param_2 = 0;
LAB_08007d44:
  return param_2;
}

/* 0x08007D4C (108B) | hardware_Sub_08007D4C (orig: func_08007D4C) | origin: wip | domain: hardware | HIGH / stanhash_map_tu */
u32 hardware_Sub_08007D4C(u32 param_1,u32 param_2) {
  u32 uVar1;
  u16 *puVar2;
  if (param_2 != 0) {
    uVar1 = 0;
    if ((param_2 & 0xff) < 0x100) {
      uVar1 = *(u32 *)(*(u16 *)0x03000408 + (param_2 >> 5 & 7) * 4) & 1 << (param_2 & 0x1f);
      uVar1 = (-uVar1 | uVar1) >> 0x1f;
    }
    if ((uVar1 != 0) &&
       (puVar2 = (u16 *)(*(u16 *)0x03000408 + (param_2 & 0xff) * 8 + 0x24),
       (param_2 & 0xffffff) >> 8 == (u32)puVar2[2])) {
      uVar1 = *puVar2 & 0x3ff;
      goto LAB_08007db0;
    }
  }
  uVar1 = 0xffffffff;
LAB_08007db0:
  return uVar1;
}

/* 0x08007DB8 (108B) | hardware_Sub_08007DB8 (orig: func_08007DB8) | origin: wip | domain: hardware | HIGH / stanhash_map_tu */
u32 hardware_Sub_08007DB8(u32 param_1,u32 param_2) {
  u32 uVar1;
  int iVar2;
  if (param_2 != 0) {
    uVar1 = 0;
    if ((param_2 & 0xff) < 0x100) {
      uVar1 = *(u32 *)(*(u16 *)0x03000408 + (param_2 >> 5 & 7) * 4) & 1 << (param_2 & 0x1f);
      uVar1 = (-uVar1 | uVar1) >> 0x1f;
    }
    if ((uVar1 != 0) &&
       (iVar2 = *(u16 *)0x03000408 + (param_2 & 0xff) * 8 + 0x24,
       (param_2 & 0xffffff) >> 8 == (u32)*(u16 *)(iVar2 + 4))) {
      uVar1 = (*(u8 *)(iVar2 + 1) & 0x3f) >> 2;
      goto LAB_08007e1a;
    }
  }
  uVar1 = 0xb;
LAB_08007e1a:
  return uVar1;
}

/* 0x08007E24 (104B) | hardware_Sub_08007E24 (orig: func_08007E24) | origin: wip | domain: hardware | HIGH / stanhash_map_tu */
u32 hardware_Sub_08007E24(u32 param_1,u32 param_2) {
  u32 uVar1;
  int iVar2;
  if (param_2 != 0) {
    uVar1 = 0;
    if ((param_2 & 0xff) < 0x100) {
      uVar1 = *(u32 *)(*(u16 *)0x03000408 + (param_2 >> 5 & 7) * 4) & 1 << (param_2 & 0x1f);
      uVar1 = (-uVar1 | uVar1) >> 0x1f;
    }
    if ((uVar1 != 0) &&
       (iVar2 = *(u16 *)0x03000408 + (param_2 & 0xff) * 8 + 0x24,
       (param_2 & 0xffffff) >> 8 == (u32)*(u16 *)(iVar2 + 4))) {
      uVar1 = (u32)*(u16 *)(iVar2 + 2);
      goto LAB_08007e82;
    }
  }
  uVar1 = 0;
LAB_08007e82:
  return uVar1;
}

/* 0x08007EA8 (32B) | hardware_Sub_08007EA8 (orig: func_08007EA8) | origin: pure | domain: hardware | HIGH / stanhash_map_tu */
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
extern u32 hardware_Sub_080D6EEC();
void hardware_Sub_08007EA8(u8 *arg0) {
  u8 zero;
  hardware_Sub_080D6EEC(arg0 + 4);
  hardware_Sub_080D6EEC(arg0 + 0x80);
  zero = 0;
  *arg0 = 1;
  arg0[1] = zero;
}

/* 0x08007EC8 (32B) | hardware_Sub_08007EC8 (orig: func_08007EC8) | origin: pure | domain: hardware | HIGH / stanhash_map_tu */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 hardware_Sub_080D6F5C();
void hardware_Sub_08007EC8(u8 *arg0) {
  hardware_Sub_080D6F5C(arg0 + 0x80);
  hardware_Sub_080D6F5C(arg0 + 4);
  *arg0 = 0;
  arg0[1] = 1;
}

/* 0x08007EE8 (156B) | hardware_Sub_08007EE8 (orig: func_08007EE8) | origin: wip | domain: hardware | HIGH / stanhash_map_tu */
void hardware_Sub_08007EE8(u8 *param_1,u32 param_2,u32 param_3) {
    u32 tmp_a2;
    u32 * puVar3;
    u32 uStack_14;
    u32 uStack_10;
  register u8 bVar1;
  register int iVar2;
  uStack_14 = param_3;
  if ((param_2 <= 0x000003FF) && (param_3 != 0)) {
    if ((param_2 == 0) && (0x000003FF < param_3)) {
      hardware_Sub_08007EA8(param_1);
    }
    else {
      if (param_2 <= 0x000001FF) {
        uStack_10 = (0x000001FF + 1) - param_2;
        puVar3 = (s16)&uStack_14;
        if (uStack_10 < param_3) {
          puVar3 = (u16)&uStack_10;
        }
        hardware_Sub_080D7118(param_1 + 4,param_2,*puVar3);
      }
      if (0x200 < param_2 + uStack_14) {
        iVar2 = 0;
        if (0x000001FF < param_2) {
          iVar2 = param_2 + 0xFFFFFE00;
        }
        tmp_a2 = ((param_2 + uStack_14) - 0x200) - iVar2;
        hardware_Sub_080D7118(param_1 + 0x80, iVar2, tmp_a2);
      }
      bVar1 = 0;
      if (param_1[4] != 0) {
        bVar1 = (u8)(-(u32)param_1[0x80] >> 0x1f);
      }
      *param_1 = bVar1;
      param_1[1] = 0;
    }
  }
}

/* 0x08007F84 (156B) | hardware_Sub_08007F84 (orig: func_08007F84) | origin: wip | domain: hardware | HIGH / stanhash_map_tu */
void hardware_Sub_08007F84(u8 *param_1,u32 param_2,u32 param_3) {
  u32 uStack_14;
  BOOL uStack_18;
  u32 *puVar3;
  BOOL bVar1;
  int iVar2;
  uStack_18 = (u32)param_3;
  if ((param_2 <= 0x000003FF) && (param_3 != 0)) {
    if ((param_2 == 0) && (0x000003FF < param_3)) {
      hardware_Sub_08007EC8(param_1);
    }
    else {
      if (param_2 <= 0x000001FF) {
        uStack_14 = (0x000001FF + 1) - param_2;
        puVar3 = &uStack_18;
        if (param_3 > uStack_14) {
          puVar3 = &uStack_14;
        }
        hardware_Sub_080D734C(param_1 + 4,param_2,*puVar3);
      }
      if (0x200 < param_2 + uStack_18) {
        iVar2 = 0;
        if (0x000001FF < param_2) {
          iVar2 = param_2 + 0xFFFFFE00;
        }
        hardware_Sub_080D734C(param_1 + 0x80,iVar2,((uStack_18 + param_2) - 0x200) - iVar2);
      }
      *param_1 = 0;
      bVar1 = (u32)0;
      if (param_1[5] != '\0') {
        bVar1 = (u8)(-(u32)(u8)param_1[0x81] >> 0x1f);
      }
      param_1[1] = bVar1;
    }
  }
}

/* 0x08008020 (128B) | hardware_Sub_08008020 (orig: func_08008020) | origin: wip | domain: hardware | HIGH / stanhash_map_tu */
u32 hardware_Sub_08008020(u8 *param_1,u32 param_2) {
  u8 *pbVar4;
  register u8 bVar2;
  register u32 uVar1;
  register int iVar3;
  if (param_2 < 10) {
    iVar3 = 0;
    pbVar4 = param_1 + 4;
    do {
      if ((*pbVar4 == 0) && (uVar1 = hardware_Sub_080D7568(pbVar4,param_2), uVar1 <= 0x000001FF)) {
        param_1[1] = 0;
        bVar2 = 0;
        if (param_1[4] != 0) {
          bVar2 = (u32)(-(u32)param_1[0x80] >> 0x1f);
        }
        *param_1 = bVar2;
        uVar1 = iVar3 << uVar1 | 9;
        goto LAB_08008096;
      }
      pbVar4 = pbVar4 + 0x7c;
      iVar3 = (u8)iVar3 + 1;
    } while (iVar3 < 2);
  }
  else if ((param_2 == 10) && (param_1[1] != 0)) {
    hardware_Sub_08007EA8(param_1);
    uVar1 = 0;
    goto LAB_08008096;
  }
  uVar1 = 0x400;
LAB_08008096:
  return (uVar1);
}

/* 0x080080A0 (76B) | hardware_Sub_080080A0 (orig: func_080080A0) | origin: wip | domain: hardware | HIGH / stanhash_map_tu */
void hardware_Sub_080080A0(u8 *param_1, u16 param_2, u32 param_3) {
  u8 bVar1;
  u8 *puVar2;
  if (param_3 < 10) {
    puVar2 = param_1 + 4;
    if ((param_2 & 0x200) != 0) {
      puVar2 = param_1 + 0x80;
    }
    hardware_Sub_080D76C0(puVar2);
    *param_1 = 0;
    bVar1 = 0;
    if (param_1[5] != '\0') {
      bVar1 = (u8)(-(u32)(u8)param_1[0x81] >> 0x1f);
    }
    param_1[1] = bVar1;
  }
  else if (param_3 == 10) {
    hardware_Sub_08007EC8(param_1);
  }
}

/* 0x080080F4 (156B) | hardware_Sub_080080F4 (orig: func_080080F4) | origin: wip | domain: hardware | MEDIUM / tu_interp */
u32 hardware_Sub_080080F4(u8 *param_1) {
  u8 *puVar1;
  u32 *puVar2;
  u32 *puVar3;
  u8 *puVar4;
  u8 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  *param_1 = 0;
  param_1[1] = 1;
  puVar4 = param_1 + 4;
  iVar9 = 1;
  do {
    *puVar4 = 0;
    puVar4[1] = 1;
    puVar1 = puVar4 + 4;
    iVar7 = 1;
    puVar4 = puVar4 + 0x7c;
    iVar9 = iVar9 + -1;
    do {
      *puVar1 = 0;
      puVar1[1] = 1;
      puVar5 = puVar1 + 4;
      iVar10 = 1;
      puVar1 = puVar1 + 0x3c;
      iVar7 = iVar7 + -1;
      do {
        *puVar5 = 0;
        puVar5[1] = 1;
        puVar2 = (u32 *)(puVar5 + 4);
        iVar8 = 1;
        puVar5 = puVar5 + 0x1c;
        iVar10 = iVar10 + -1;
        do {
          *(u8 *)puVar2 = 0;
          *(u8 *)((int)puVar2 + 1) = 1;
          iVar6 = 1;
          puVar3 = puVar2 + 3;
          iVar8 = iVar8 + -1;
          do {
            puVar2 = puVar2 + 1;
            *puVar2 = 0;
            iVar6 = iVar6 + -1;
          } while (iVar6 != -1);
          puVar2 = puVar3;
        } while (iVar8 != -1);
      } while (iVar10 != -1);
    } while (iVar7 != -1);
  } while (iVar9 != -1);
  return param_1;
}

/* 0x08008190 (460B) | hardware_Sub_08008190 (orig: func_08008190) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
u32 hardware_Sub_08008190(u32 *param_1,int param_2) {
  char cVar1;
  u32 uVar2;
  int *piVar3;
  int iVar4;
  u32 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  u32 uVar9;
  int *piVar10;
  u8 auStack_4c [4];
  u32 uStack_48;
  int iStack_44;
  int iStack_40;
  u32 *puStack_3c;
  int iStack_38;
  u32 *puStack_34;
  u32 uStack_30;
  u32 uStack_2c;
  u32 uStack_28;
  int iStack_24;
  puStack_3c = param_1;
  iStack_38 = param_2;
  puStack_34 = (u32 *)CppRuntime_builtin_new(0xa0);
  iVar7 = 7;
  puVar5 = puStack_34;
  do {
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[3] = 0;
    puVar5 = puVar5 + 5;
    iVar7 = iVar7 + -1;
  } while (iVar7 != -1);
  uStack_30 = 0;
  do {
    piVar10 = puStack_34 + uStack_30 * 5;
    cVar1 = *(char *)(iStack_38 + uStack_30);
    hardware_Sub_080D772C(piVar10,cVar1);
    uVar9 = (u32)(u8)(cVar1 - 1);
    uStack_2c = uStack_30 + 1;
    if (uVar9 != 0xff) {
      do {
        hardware_Sub_08007874(auStack_4c);
        uStack_48 = hardware_Sub_08007B54(auStack_4c,uStack_30);
        iVar7 = piVar10[1];
        if (iVar7 == piVar10[3]) {
          iStack_40 = 1;
          iVar6 = *piVar10;
          iStack_44 = iVar7 - iVar6 >> 3;
          piVar3 = &iStack_44;
          if (iStack_44 == 0) {
            piVar3 = &iStack_40;
          }
          if (iStack_44 + *piVar3 == 0) {
            iVar4 = 0;
            iStack_24 = 0;
          }
          else {
            iVar6 = (iStack_44 + *piVar3) * 8;
            iVar4 = LibC_malloc(iVar6);
            iStack_24 = iVar6;
            if (iVar4 == 0) {
              iVar4 = code_linkonce_Sub_080D3BC0(iVar6);
            }
            iVar6 = *piVar10;
          }
          uStack_28 = uVar9 - 1;
          iVar8 = iVar4;
          for (; iVar6 != iVar7; iVar6 = iVar6 + 8) {
            if (iVar8 != 0) {
              hardware_Sub_08007874(iVar8);
              uVar2 = hardware_Sub_08007CD8(iVar8,*(u32 *)(iVar6 + 4));
              *(u32 *)(iVar8 + 4) = uVar2;
            }
            iVar8 = iVar8 + 8;
          }
          iVar7 = iStack_40;
          if (iStack_40 == 1) {
            if (iVar8 != 0) {
              hardware_Sub_08007874(iVar8);
              uVar2 = hardware_Sub_08007CD8(iVar8,uStack_48);
              *(u32 *)(iVar8 + 4) = uVar2;
            }
            iVar8 = iVar8 + 8;
          }
          else {
            for (; iVar7 != 0; iVar7 = iVar7 + -1) {
              if (iVar8 != 0) {
                hardware_Sub_08007874(iVar8);
                uVar2 = hardware_Sub_08007CD8(iVar8,uStack_48);
                *(u32 *)(iVar8 + 4) = uVar2;
              }
              iVar8 = iVar8 + 8;
            }
          }
          iVar6 = piVar10[1];
          for (iVar7 = *piVar10; iVar7 != iVar6; iVar7 = iVar7 + 8) {
            hardware_Sub_08007C28(iVar7,*(u32 *)(iVar7 + 4));
            hardware_Sub_080079E8(iVar7,2);
          }
          if (*piVar10 != 0) {
            LibC_free();
          }
          *piVar10 = iVar4;
          piVar10[1] = iVar8;
          piVar10[3] = iStack_24 + iVar4;
        }
        else {
          if (iVar7 != 0) {
            hardware_Sub_08007874(iVar7);
            uVar2 = hardware_Sub_08007CD8(iVar7,uStack_48);
            *(u32 *)(iVar7 + 4) = uVar2;
          }
          piVar10[1] = piVar10[1] + 8;
          uStack_28 = uVar9 - 1;
        }
        hardware_Sub_08007C28(auStack_4c,uStack_48);
        hardware_Sub_080079E8(auStack_4c,2);
        uVar9 = uStack_28 & 0xff;
      } while (uVar9 != 0xff);
    }
    piVar10[4] = *piVar10;
    uStack_30 = uStack_2c;
  } while (uStack_2c < 8);
  *puStack_3c = puStack_34;
  return (puStack_3c);
}

/* 0x0800835C (8B) | hardware_SetField_0x00_835C (orig: func_0800835C) | origin: pure | domain: hardware | HIGH / stanhash_map_tu */
void hardware_SetField_0x00_835C(u32 *arg0) {
    *arg0 = 0;
}

/* 0x08008364 (108B) | hardware_Sub_08008364 (orig: func_08008364) | origin: wip | domain: hardware | HIGH / stanhash_map_tu */
void hardware_Sub_08008364(u32 *param_1,u32 param_2) {
  int *piVar1;
  u8 iVar5;
  int *piVar4;
  int iVar2;
  register int *piVar3;
  piVar1 = (s16)(int *)*param_1;
  if (piVar1 != (u8)(int *)0x0) {
      piVar4 = (u32)piVar3 + -5;
    do {
    piVar3 = piVar1 + 0x28;
      iVar5 = piVar3[-4];
      for (iVar2 = *piVar4; iVar2 != iVar5; iVar2 = 8 + iVar2) {
        hardware_Sub_08007C28(iVar2,*(u32 *)(4 + iVar2));
        hardware_Sub_080079E8(iVar2,2);
      }
      piVar3 = (u32)piVar4;
      if (*piVar4 != (s16)0) {
        LibC_free();
      }
    } while (piVar3 != piVar1);
    CppRuntime_builtin_delete(piVar1);
  }
  if ((param_2 & 1) != (u16)0) {
    CppRuntime_builtin_delete(param_1);
  }
}

/* 0x080083D0 (116B) | hardware_Sub_080083D0 (orig: func_080083D0) | origin: wip | domain: hardware | HIGH / stanhash_map_tu */
u32 hardware_Sub_080083D0(int param_1,int *param_2,int param_3) {
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  u32 uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  if (*param_2 == 0) {
    hardware_Sub_08007874(param_1);
    uVar5 = hardware_Sub_08007B54(param_1,param_3);
  }
  else {
    piVar8 = (int *)(param_3 * 0x14 + *param_2);
    iVar3 = piVar8[1];
    iVar7 = (u8)iVar3;
    iVar2 = iVar6;
    iVar6 = piVar8[4];
    do {
      iVar1 = (s16)iVar2;
      if (iVar7 == iVar6) goto LAB_08008410;
      iVar7 = iVar1 + 8;
      if (iVar7 == iVar3) {
        iVar7 = *piVar8;
      }
      iVar4 = hardware_Sub_08007E24(iVar1,*(u32 *)(iVar1 + 4));
      iVar2 = iVar7;
    } while (iVar4 != 1);
    piVar8[4] = iVar7;
LAB_08008410:
    hardware_Sub_08007874(param_1);
    uVar5 = hardware_Sub_08007CD8(param_1,*(u32 *)(iVar1 + 4));
  }
  *(u32 *)(param_1 + 4) = uVar5;
  return param_1;
}

/* 0x08008444 (152B) | hardware_Create (orig: func_08008444) | origin: wip | domain: hardware | HIGH / vtable_algebra */
u32 hardware_Create(int *self) {
  int iVar1;
  u16 uVar2;
  int iVar3;
  u32 *puVar4;
  u32 *puVar5;
  self[1] = 0x080E5B00;
  iVar3 = CppRuntime_builtin_new(0x4b0);
  hardware_Sub_080091A4(iVar3,0x1e,4);
  *(u32 *)(iVar3 + 0x24) = 0;
  *(u32 *)(iVar3 + 0x28) = 0;
  *(u32 *)(iVar3 + 0x30) = 0;
  hardware_Wrap_CpuSet(iVar3 + 0x34);
  hardware_Sub_08009744(iVar3 + 0x8c,0,0x20);
  hardware_Create_8980(iVar3 + 0x490);
  iVar1 = 0x00000494;
  puVar5 = (u32 *)(iVar3 + 0x00000494);
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[2] = 0x080E5BB4;
  puVar4 = (u32 *)(iVar3 + 0x000004A4);
  puVar5[3] = puVar4;
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0x080E5BD8;
  puVar5[4] = iVar3 + iVar1 + 0xc;
  puVar5[5] = puVar4;
  uVar2 = *(u16 *)(iVar3 + 0x38) | 8;
  *(u16 *)(iVar3 + 0x38) = uVar2;
  *(u16 *)0x04000004 = uVar2;
  *self = iVar3;
  return self;
}

/* 0x080084DC (152B) | hardware_Create_84DC (orig: func_080084DC) | origin: pure | domain: hardware | HIGH / vtable_algebra */
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
extern u32 CppRuntime_builtin_new();
extern u32 hardware_Create_8980();
extern u32 hardware_Sub_080091A4();
extern u32 hardware_Wrap_CpuSet();
extern u32 hardware_Sub_08009744();
/* paridad 93.2% preset agbcc_O1 */
u32 hardware_Create_84DC(int *arg0,u16 *arg1) {
  u8 dummy[4];
  u32 *p2c;
  int val;
  u16 val2;
  int val3;
  u32 *mem_ptr;
  u32 *mem_ptr2;
  arg0[1] = 0x080E5B00;
  val3 = CppRuntime_builtin_new(0x4b0);
  hardware_Sub_080091A4(val3,*arg1,arg1[1]);
  *(u32 *)(val3 + 0x24) = 0;
  *(u32 *)(val3 + 0x28) = 0;
  p2c = (u32 *)(val3 + 0x2c);
  p2c[1] = 0;
  hardware_Wrap_CpuSet(p2c + 2);
  hardware_Sub_08009744(val3 + 0x8c,0,0x20);
  hardware_Create_8980(val3 + 0x490);
  val = 0x00000494;
  mem_ptr2 = (u32 *)(val3 + 0x00000494);
  *mem_ptr2 = 0;
  mem_ptr2[1] = 0;
  mem_ptr2[2] = 0x080E5BB4;
  mem_ptr = (u32 *)(val3 + 0x000004A4);
  mem_ptr2[3] = mem_ptr;
  *mem_ptr = 0;
  mem_ptr[1] = 0;
  mem_ptr[2] = 0x080E5BD8;
  mem_ptr2[4] = val3 + val + 0xc;
  mem_ptr2[5] = mem_ptr;
  val2 = *(u16 *)(val3 + 0x38) | 8;
  *(u16 *)(val3 + 0x38) = val2;
  *(u16 *)0x04000004 = val2;
  *arg0 = val3;
  return arg0;
}

/* 0x08008574 (164B) | hardware_Create_8574 (orig: func_08008574) | origin: wip | domain: hardware | HIGH / vtable_algebra */
u32 hardware_Create_8574(int *self,u8 *param_2) {
    int iVar3;
    u32 * puVar4;
    u32 * puVar5;
  int iVar1;
  register u16 uVar2;
  self[1] = 0x080E5B00;
  iVar3 = CppRuntime_builtin_new(0x4b0);
  hardware_Sub_080091A4(iVar3,0x1e,4);
  *(u32 *)(iVar3 + 0x24) = 0;
  *(u32 *)(iVar3 + 0x28) = 0;
  *(u8 *)(iVar3 + 0x30) = 0;
  hardware_Wrap_CpuSet(iVar3 + 0x34);
  hardware_Sub_08009744(iVar3 + 0x8c,*param_2,param_2[1]);
  hardware_Create_8980(iVar3 + 0x490);
  puVar5 = (u32 *)(iVar3 + 0x00000494);
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[2] = (s16)0x080E5BB4;
  iVar1 = 0x000004A4;
  puVar4 = (u32 *)(iVar3 + 0x000004A4);
  puVar5[3] = puVar4;
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0x080E5BD8;
  puVar5[4] = iVar3 + iVar1 + -4;
  puVar5[5] = puVar4;
  uVar2 = *(u16 *)(iVar3 + 0x38) | 8;
  *(u16 *)(iVar3 + 0x38) = uVar2;
  *(u16 *)0x04000004 = uVar2;
  *self = iVar3;
  return self;
}

/* 0x080086BC (104B) | hardware_Dtor (orig: func_080086BC) | origin: wip | domain: hardware | HIGH / vtable_algebra */
void hardware_Dtor(u32 self, u32 param_2, u32 param_3, u32 param_4) {
    u32 r2;
    u32 r3;
    u32 r0 = self;
    register u32 r1 = param_2;
    r2 = param_3;
    r3 = param_4;
    register u32 r4, r5, r6;
    r5 = r0 + 0;
    r6 = r1 + 0;
    r0 = 0x080E5B00;
    *(u32 *)(r5 + 4) = r0;
    r0 = *(u32 *)(r5);
    if (r0 == 0) goto loc_08008706;
    r4 = r0 + 0;
    r1 = 0x00000494;
    r0 = r4 + r1;
    r1 = 2;
    r0 = hardware_Ctor_98DC(r0, r1, r2, r3);
    r1 = 0x92;
    r1 = r1 << 3;
    r0 = r4 + r1;
    r1 = 2;
    r0 = hardware_Dtor_8A68(r0, r1, r2, r3);
    r0 = r4 + 0;
    r0 += 0x24;
    r2 = *(u32 *)(r0 + 4);
    r1 = *(u32 *)(r4 + 0x24);
    if (r1 == r2) goto loc_080086F6;
loc_080086F0:
    r1 += 0x10;
    if (r1 != r2) goto loc_080086F0;
loc_080086F6:
    r0 = *(u32 *)(r0);
    if (r0 == 0) goto loc_08008700;
    r0 = LibC_free(r0, r1, r2, r3);
loc_08008700:
    r0 = CppRuntime_builtin_delete(r0, r1, r2, r3);
    r0 = r4 + 0;
loc_08008706:
    r0 &= r6;
    r0 = 1;
    if (r0 == 0) goto loc_08008714;
    r0 = r5 + 0;
    r0 = CppRuntime_builtin_delete(r0, r1, r2, r3);
loc_08008714:
    return r0;
}

/* 0x08008724 (80B) | hardware_Ctor (orig: func_08008724) | origin: wip | domain: hardware | HIGH / vtable_algebra */
void hardware_Ctor(int *self) {
    s16 iStack_c;
    u32 uStack_10;
    u32 uStack_18;
  s16 iVar1;
    register BOOL uStack_14;
  register int iVar2;
  iVar2 = *self;
  iStack_c = iVar2 + 0x34;
  *(u16 *)(iVar2 + 0x34) = *(u8 *)(iVar2 + 0x34) | 0x80;
  uStack_14 = 0;
  uStack_18 = 0;
  uStack_10 = 0x080E5AF0;
  iVar1 = hardware_GetField_0x00_8AE0(iVar2 + 0x490);
  func_080D3914(iVar1,&uStack_18,*(u32 *)(*(u16 *)(iVar1 + 8) + 0x10));
  hardware_Wrap_Wrap_IntrWait(iVar2 + 0x490);
  hardware_Dtor_98AC(&uStack_18,2);
}

/* 0x080088B8 (12B) | hardware_Sub_080088B8 (orig: func_080088B8) | origin: pure | domain: hardware | HIGH / stanhash_map_tu */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 hardware_Sub_08009268();
void hardware_Sub_080088B8(u32 *arg0) {
  hardware_Sub_08009268(*arg0);
}

/* 0x080088C4 (8B) | hardware_GetField_0x00 (orig: func_080088C4) | origin: pure | domain: hardware | HIGH / stanhash_map_tu */
u16 hardware_GetField_0x00(u16 **arg0) {
    return **arg0;
}

/* 0x080088CC (8B) | hardware_GetField_0x00_88CC (orig: func_080088CC) | origin: pure | domain: hardware | HIGH / stanhash_map_tu */
u16 hardware_GetField_0x00_88CC(u8 **arg0) {
    return *(u16 *)(*arg0 + 4);
}

/* 0x080088D4 (8B) | hardware_GetField_0x00_88D4 (orig: func_080088D4) | origin: pure | domain: hardware | HIGH / stanhash_map_tu */
u16 hardware_GetField_0x00_88D4(u8 **arg0) {
    return *(u16 *)(*arg0 + 8);
}

/* 0x080088DC (4B) | hardware_GetField_0x00_88DC (orig: func_080088DC) | origin: pure | domain: hardware | HIGH / stanhash_map_tu */
u32 hardware_GetField_0x00_88DC(u32 *arg0) {
    return *arg0;
}

/* 0x080088E0 (16B) | hardware_Sub_080088E0 (orig: func_080088E0) | origin: pure | domain: hardware | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 hardware_Sub_080092C8();
void hardware_Sub_080088E0(u32 *arg0,u16 arg1) {
  hardware_Sub_080092C8(*arg0,arg1);
}

/* 0x080088F0 (16B) | hardware_Sub_080088F0 (orig: func_080088F0) | origin: pure | domain: hardware | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 hardware_SetField_0x0C();
void hardware_Sub_080088F0(u32 *arg0,u16 arg1) {
  hardware_SetField_0x0C(*arg0,arg1);
}

/* 0x08008910 (8B) | hardware_GetField_0x00_8910 (orig: func_08008910) | origin: pure | domain: hardware | HIGH / stanhash_map_tu */
void *hardware_GetField_0x00_8910(u8 **arg0) {
    return *arg0 + 36;
}

/* 0x08008918 (8B) | hardware_GetField_0x00_8918 (orig: func_08008918) | origin: pure | domain: hardware | HIGH / stanhash_map_tu */
void *hardware_GetField_0x00_8918(u8 **arg0) {
    return *arg0 + 52;
}

/* 0x08008920 (8B) | hardware_GetField_0x00_8920 (orig: func_08008920) | origin: pure | domain: hardware | HIGH / stanhash_map_tu */
void *hardware_GetField_0x00_8920(u8 **arg0) {
    return *arg0 + 140;
}

/* 0x08008940 (12B) | hardware_GetField_0x00_8940 (orig: func_08008940) | origin: pure | domain: hardware | HIGH / stanhash_map_tu */
u32 hardware_GetField_0x00_8940(u32 *arg0) {
    return arg0[0] + 0x494;
}

/* 0x0800894C (20B) | hardware_Sub_0800894C (orig: func_0800894C) | origin: pure | domain: hardware | HIGH / stanhash_map_tu */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 hardware_GetField_0x00_8AE0();
u32 hardware_Sub_0800894C(int *arg0) {
  return hardware_GetField_0x00_8AE0(*arg0 + 0x490);
}

/* 0x0800896C (20B) | hardware_Sub_0800896C (orig: func_0800896C) | origin: pure | domain: hardware | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 hardware_GetField_0x00_8AE0();
u16 hardware_Sub_0800896C(uint32_t *ptr) {
    uint32_t temp = *ptr;
    uint16_t offset = 0x92 << 3;
    temp += offset;
    hardware_GetField_0x00_8AE0(temp);
}

/* 0x08008A68 (120B) | hardware_Dtor_8A68 (orig: func_08008A68) | origin: wip | domain: hardware | HIGH / vtable_algebra */
void hardware_Dtor_8A68(u32 r0, u32 r1) {
    s32 local_a;
    u8 stack_buf[0x20];
    u8 * ptr;
    u32 r4, r5, r6, r7;
    r4 = r0;
    r5 = (s16)r1;
    if ((r6 = *((u32*)r4)) == 0) {
        return;
    }
    ptr = (u8*)(r6 + 0x68);
    if (*ptr != (s16)0) {
        hardware_Wrap_m4aSoundVSyncOff();
    }
    *((u32*)(0x30 + r4)) = 0x080E5B0C;
    r4 = (s16)0x34 + r6;
    *((u32*)&stack_buf[0]) = 0x080E5B0C;
    code_linkonce_5B3C_Dtor();
    *((u32*)(8 + r4)) = 0x080E5B0C;
    r0 = (s16)0x50 + r6;
    r0 = r4;
    hardware_Ctor_959C(2);
    hardware_Dtor_98AC(2);
    r0 = 0x28 + r6;
    hardware_Ctor_959C(2);
    hardware_Dtor_98AC();
    r0 = (u32)r6 + 0xc;
    r0 = r6;
    CppRuntime_builtin_delete();
    r0 = (u16)0xc + r6;
    if (r7 & 1) {
        CppRuntime_builtin_delete();
    }
}

/* 0x08008AE0 (8B) | hardware_GetField_0x00_8AE0 (orig: func_08008AE0) | origin: pure | domain: hardware | HIGH / stanhash_map_tu */
void *hardware_GetField_0x00_8AE0(u8 **arg0) {
    return *arg0 + 12;
}

/* 0x08008AF0 (12B) | hardware_Wrap_Wrap_IntrWait (orig: func_08008AF0) | origin: pure | domain: hardware | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 interrupt_Wrap_IntrWait();
void hardware_Wrap_Wrap_IntrWait(void) {
  interrupt_Wrap_IntrWait(1);
}

/* 0x08008AFC (16B) | hardware_Sub_08008AFC (orig: func_08008AFC) | origin: pure | domain: hardware | HIGH / stanhash_map_tu */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 M4A_m4aSoundInit();
extern u32 M4A_m4aSoundVSyncOff();
void hardware_Sub_08008AFC(void) {
  M4A_m4aSoundInit();
  M4A_m4aSoundVSyncOff();
}

/* 0x08008B0C (12B) | hardware_vfunc_08 (orig: func_08008B0C) | origin: pure | domain: hardware | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D1BF8();
u32 hardware_vfunc_08(void) {
  func_080D1BF8();
  return 1;
}

/* 0x08008B18 (12B) | hardware_vfunc_08_8B18 (orig: func_08008B18) | origin: pure | domain: hardware | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 M4A_m4aSoundMain();
u32 hardware_vfunc_08_8B18(void) {
  M4A_m4aSoundMain();
  return 1;
}

/* 0x08008B24 (48B) | hardware_Sub_08008B24 (orig: func_08008B24) | origin: wip | domain: hardware | HIGH / stanhash_map_tu */
u32 hardware_Sub_08008B24(u32 param_1) {
  u32 status_ptr;
  u32 result;
  u8* bios_ptr = (u8*)0x08008B4C;
  u8* data_table_ptr = (u8*)0x0813ABB4;
  status_ptr = *(u32*)bios_ptr;
  if ((status_ptr & 0xffff) <= param_1) {
    result = LibGcc_umodsi3(param_1);
  } else {
    result = param_1;
  }
  result = result * 0xc + *(u32*)data_table_ptr;
  return *(u32*)(result);
}

/* 0x08008B54 (24B) | hardware_Sub_08008B54 (orig: func_08008B54) | origin: pure | domain: hardware | HIGH / stanhash_map_tu */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 hardware_Sub_08008B24();
u32 hardware_Sub_08008B54(u32 *arg0,u8 arg1) {
  u32 val;
  val = hardware_Sub_08008B24(arg1);
  *arg0 = val;
  return arg0;
}

/* 0x08008B6C (28B) | hardware_Wrap_m4aMPlayStart (orig: func_08008B6C) | origin: pure | domain: hardware | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 M4A_m4aMPlayStart();
struct s_0813ABF0 { u32 a; u32 b; };
extern const struct s_0813ABF0 g_0813ABF0[];
void hardware_Wrap_m4aMPlayStart(u32 *arg0,u16 arg1) {
  M4A_m4aMPlayStart(*arg0,g_0813ABF0[arg1].a);
}

/* 0x08008B88 (40B) | hardware_Wrap_m4aMPlayStart_8B88 (orig: func_08008B88) | origin: pure | domain: hardware | MEDIUM / graph_algebra */
struct Entry { int a; int b; };
extern struct Entry g_0813ABF0[];
extern void M4A_m4aMPlayStart();
void hardware_Wrap_m4aMPlayStart_8B88(int **param_1, u16 param_2) {
    int p = g_0813ABF0[param_2].a;
    int *q = *param_1;
    if (*q != p || q[1] < 0) {
        M4A_m4aMPlayStart(q, p);
    }
}

/* 0x08008BB0 (48B) | hardware_Sub_08008BB0 (orig: func_08008BB0) | origin: wip | domain: hardware | HIGH / stanhash_map_tu */
void hardware_Sub_08008BB0(u32 *param_1,u32 param_2) {
  int *piVar1;
  piVar1 = (int *)*param_1;
  if (*piVar1 == *(int *)((param_2 & 0xffff) * 8 + 0x0813ABF0)) {
    if (piVar1[1] < 0) {
      M4A_m4aMPlayContinue(piVar1);
    }
  }
  else {
    M4A_m4aMPlayStart(piVar1);
  }
}

/* 0x08008BE0 (12B) | hardware_Wrap_m4aMPlayStop (orig: func_08008BE0) | origin: pure | domain: hardware | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 M4A_m4aMPlayStop();
void hardware_Wrap_m4aMPlayStop(u32 *arg0) {
  M4A_m4aMPlayStop(*arg0);
}

/* 0x08008BF8 (16B) | hardware_Wrap_m4aMPlayFadeOut (orig: func_08008BF8) | origin: pure | domain: hardware | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 M4A_m4aMPlayFadeOut();
void hardware_Wrap_m4aMPlayFadeOut(u32 *arg0,u16 arg1) {
  M4A_m4aMPlayFadeOut(*arg0,arg1);
}

/* 0x08008C08 (16B) | hardware_Sub_08008C08 (orig: func_08008C08) | origin: pure | domain: hardware | MEDIUM / tu_interp */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D2480();
void hardware_Sub_08008C08(u32 *arg0,u16 arg1) {
  func_080D2480(*arg0,arg1);
}

/* 0x08008C18 (16B) | hardware_Sub_08008C18 (orig: func_08008C18) | origin: pure | domain: hardware | MEDIUM / tu_interp */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D24A0();
void hardware_Sub_08008C18(u32 *arg0,u16 arg1) {
  func_080D24A0(*arg0,arg1);
}

/* 0x08008C28 (16B) | hardware_Wrap_m4aMPlayTempoControl (orig: func_08008C28) | origin: pure | domain: hardware | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 M4A_m4aMPlayTempoControl();
void hardware_Wrap_m4aMPlayTempoControl(u32 *arg0,u16 arg1) {
  M4A_m4aMPlayTempoControl(*arg0,arg1);
}

/* 0x08008C38 (28B) | hardware_Wrap_m4aMPlayVolumeControl (orig: func_08008C38) | origin: pure | domain: hardware | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 M4A_m4aMPlayVolumeControl();
void hardware_Wrap_m4aMPlayVolumeControl(u32 *arg0,u16 arg1,u16 arg2) {
  M4A_m4aMPlayVolumeControl(*arg0,arg2,arg1);
}

/* 0x08008C54 (28B) | hardware_Wrap_m4aMPlayPitchControl (orig: func_08008C54) | origin: pure | domain: hardware | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 M4A_m4aMPlayPitchControl();
void hardware_Wrap_m4aMPlayPitchControl(u32 *arg0,short arg1,u16 arg2) {
  M4A_m4aMPlayPitchControl(*arg0,arg2,(int)arg1);
}

/* 0x08008C70 (28B) | hardware_Wrap_m4aMPlayPanpotControl (orig: func_08008C70) | origin: pure | domain: hardware | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 M4A_m4aMPlayPanpotControl();
void hardware_Wrap_m4aMPlayPanpotControl(u32 *arg0, s8 arg1, u16 arg2) {
  M4A_m4aMPlayPanpotControl(*arg0,arg2,(int)arg1);
}

/* 0x08008C8C (28B) | hardware_Wrap_m4aMPlayModDepthSet (orig: func_08008C8C) | origin: pure | domain: hardware | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 M4A_m4aMPlayModDepthSet();
void hardware_Wrap_m4aMPlayModDepthSet(u32 *arg0,u8 arg1,u16 arg2) {
  M4A_m4aMPlayModDepthSet(*arg0,arg2,arg1);
}

/* 0x08008CA8 (28B) | hardware_Wrap_m4aMPlayLFOSpeedSet (orig: func_08008CA8) | origin: pure | domain: hardware | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 M4A_m4aMPlayLFOSpeedSet();
void hardware_Wrap_m4aMPlayLFOSpeedSet(u32 *arg0,u8 arg1,u16 arg2) {
  M4A_m4aMPlayLFOSpeedSet(*arg0,arg2,arg1);
}

/* 0x08008CC4 (12B) | hardware_Wrap_m4aMPlayImmInit (orig: func_08008CC4) | origin: pure | domain: hardware | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 M4A_m4aMPlayImmInit();
void hardware_Wrap_m4aMPlayImmInit(u32 *arg0) {
  M4A_m4aMPlayImmInit(*arg0);
}

/* 0x08008CD0 (12B) | hardware_GetField_0x00_8CD0 (orig: func_08008CD0) | origin: pure | domain: hardware | HIGH / stanhash_map_tu */
u32 hardware_GetField_0x00_8CD0(u32 **a) { return ((*a)[1] >> 31) ^ 1; }

/* 0x08008CFC (20B) | hardware_Sub_08008CFC (orig: func_08008CFC) | origin: pure | domain: hardware | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 hardware_Sub_08008B54();
u32 hardware_Sub_08008CFC(void) {
  u32 local_val;
  hardware_Sub_08008B54(&local_val, 0);
  return local_val;
}

/* 0x08008D10 (28B) | hardware_Sub_08008D10 (orig: func_08008D10) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
u32 hardware_Sub_08008D10(void) {
  u32 uStack_8;
  s8 tmp_all_a1;
  u8 tmp_all_a0;
  tmp_all_a0 = &uStack_8;
  hardware_Sub_08008B54(tmp_all_a0, tmp_all_a1);
  tmp_all_a1 = 0x00000005 & 0xff;
  return (uStack_8);
}

/* 0x08008D3C (32B) | hardware_Sub_08008D3C (orig: func_08008D3C) | origin: pure | domain: hardware | HIGH / stanhash_map_tu */
struct S { u32 a; u8 b; }; extern struct S g_0813ABF0[]; void hardware_Sub_08008B54(u32 *, u8); u32 hardware_Sub_08008D3C(u16 i) { u32 x; hardware_Sub_08008B54(&x, g_0813ABF0[i].b); return x; }

/* 0x08008D84 (12B) | hardware_Wrap_m4aSoundVSyncOn (orig: func_08008D84) | origin: pure | domain: hardware | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 M4A_m4aSoundVSyncOn();
void hardware_Wrap_m4aSoundVSyncOn(void) {
  M4A_m4aSoundVSyncOn();
}

/* 0x08008D90 (12B) | hardware_Wrap_m4aSoundVSyncOff (orig: func_08008D90) | origin: pure | domain: hardware | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 M4A_m4aSoundVSyncOff();
void hardware_Wrap_m4aSoundVSyncOff(void) {
  M4A_m4aSoundVSyncOff();
}

/* 0x08008D9C (12B) | hardware_HW_IO_0x0C4 (orig: func_08008D9C) | origin: pure | domain: hardware | HIGH / stanhash_map_tu */
u32 hardware_HW_IO_0x0C4(void) {
    return *(u32 *)0x040000C4 >> 31;
}

/* 0x08008DA8 (16B) | hardware_Wrap_m4aSongNumStart (orig: func_08008DA8) | origin: pure | domain: hardware | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 M4A_m4aSongNumStart();
void hardware_Wrap_m4aSongNumStart(u16 arg0) {
  M4A_m4aSongNumStart(arg0);
}

/* 0x08008DB8 (16B) | hardware_Wrap_m4aSongNumStartOrChange (orig: func_08008DB8) | origin: pure | domain: hardware | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 M4A_m4aSongNumStartOrChange();
void hardware_Wrap_m4aSongNumStartOrChange(u16 arg0) {
  M4A_m4aSongNumStartOrChange(arg0);
}

/* 0x08008DE8 (12B) | hardware_Wrap_m4aMPlayAllStop (orig: func_08008DE8) | origin: pure | domain: hardware | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 M4A_m4aMPlayAllStop();
void hardware_Wrap_m4aMPlayAllStop(void) {
  M4A_m4aMPlayAllStop();
}

/* 0x08008E64 (84B) | hardware_HW_DMA3SAD (orig: func_08008E64) | origin: pure | domain: hardware | HIGH / stanhash_map_tu */
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
extern u32 func_080D0EBC();
void hardware_HW_DMA3SAD(u32 arg0, u32 arg1, u32 arg2, u32 arg3)
{
    register u32 r4;
    if (arg0 == 0) return;
    if (arg1 == 0) return;
    r4 = arg0;
    if (arg2 == 0) goto loc_ea2;
    arg3 = r4;
    arg3 |= arg1;
    arg3 |= arg2;
    arg0 = 1;
    arg0 &= arg3;
    if (arg0 != 0) goto loc_ea2;
    arg0 = 3;
    arg3 &= arg0;
    if (arg3 != 0) goto loc_e96;
    arg0 = arg2 << 14;
    arg2 = (u32)arg0 >> 16;
    arg0 = 0x84;
    arg0 <<= 24;
    arg2 |= arg0;
    goto loc_ea4;
loc_e96:
    arg0 = arg2 << 15;
    arg2 = (u32)arg0 >> 16;
    arg0 = 0x80;
    arg0 <<= 24;
    arg2 |= arg0;
    goto loc_ea4;
loc_ea2:
    arg2 = 0;
loc_ea4:
    func_080D0EBC(r4, arg1, arg2, 0x040000D4);
}

/* 0x08008EB8 (84B) | hardware_HW_DMA3SAD_8EB8 (orig: func_08008EB8) | origin: wip | domain: hardware | HIGH / stanhash_map_tu */
void hardware_HW_DMA3SAD_8EB8(u32 param_1, u16 param_2, u32 param_3, u32 param_4) {
    u32 r1;
    u32 r2;
    u32 r3;
    register u32 r0 = param_1;
    r1 = param_2;
    r2 = param_3;
    r3 = param_4;
    if (r1 == 0) goto loc_08008F02;
    if (r2 == 0) goto loc_08008EF2;
    r3 = r1 + 0;
    r3 |= (u16)r2;
    r0 = 1;
    r0 &= r3;
    if (r0 != 0) goto loc_08008EF2;
    r0 = 3;
    r3 &= r0;
    if (r3 != 0) goto loc_08008EE6;
    r0 = r2 << 0xe;
    r2 = (u32)r0 >> 0x10;
    r0 = 0x84;
    r0 = r0 << 0x18;
    r2 |= r0;
    goto loc_08008EF4;
loc_08008EE6:
    r0 = r2 << 0xf;
    r2 = (u32)r0 >> 0x10;
    r0 = 0x80;
    r0 = r0 << 0x18;
    r2 |= r0;
    goto loc_08008EF4;
loc_08008EF2:
    r2 = 0;
loc_08008EF4:
    r0 = 0x80;
    r0 = r0 << 0x11;
    r2 |= r0;
    r3 = 0x040000D4;
    r0 = func_080D0EBC(r0, r1, r2, r3);
loc_08008F02:
    return r0;
}

/* 0x08008F0C (84B) | hardware_Sub_08008F0C (orig: func_08008F0C) | origin: wip | domain: hardware | HIGH / stanhash_map_tu */
u32 hardware_Sub_08008F0C(u32 param_1, u32 param_2, u32 param_3, u32 param_4) {
    register u32 r0 = param_1;
    register u32 r1 = param_2;
    register u32 r2 = param_3;
    register u32 r3 = param_4;
    register u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0;
    r4 = r0 + 0;
    r5 = r1 + 0;
    if ((u16)r5 == 0) goto loc_08008F4A;
    if (r2 == 0) goto loc_08008F4A;
    if (r3 == 0) goto loc_08008F4A;
    r1 |= r2;
    r1 |= r3;
    r0 = 1;
    r0 &= r1;
    if (r0 != 0) goto loc_08008F4A;
    r0 = 3;
    r1 &= r0;
    if (r1 != 0) goto loc_08008F3E;
    r0 = r3 << 0xe;
    r3 = (u32)r0 >> 0x10;
    r0 = 0x84;
    r0 = r0 << 0x18;
    r3 |= r0;
    goto loc_08008F4C;
loc_08008F3E:
    r0 = r3 << 0xf;
    r3 = (u32)r0 >> 0x10;
    r3 |= r0;
    r0 = r0 << 0x18;
    r0 = 0x80;
    goto loc_08008F4C;
loc_08008F4A:
    r3 = 0;
loc_08008F4C:
    r0 = 0;
    *(u32 *)(r4) = r0;
    *(u32 *)(r4 + 4) = r5;
    *(u32 *)(r4 + 8) = r2;
    *(u32 *)(r4 + 0xc) = r3;
    r0 = r4 + 0;
    return r1;
    r0 = r0;
    return r0;
}

/* 0x08008F60 (88B) | hardware_Sub_08008F60 (orig: func_08008F60) | origin: wip | domain: hardware | HIGH / stanhash_map_tu */
u32 hardware_Sub_08008F60(u32 *param_1,u32 param_2,u32 param_3,u32 param_4) {
  u32 uVar1;
  if ((u8)param_3 == 0) {
    uVar1 = 0;
  }
  else {
    if ((param_4 == 0) || (((param_3 | param_4) & 1) != 0)) {
      uVar1 = 0;
    }
    else if (((param_3 | param_4) & 3) == 0) {
      uVar1 = (param_4 & 0x3ffff) >> 2 | 0x84000000;
    }
    else {
      uVar1 = (param_4 & 0x1ffff) >> 1 | 0x80000000;
    }
    uVar1 = uVar1 | 0x1000000;
  }
  *param_1 = 1;
  param_1[1] = param_2;
  param_1[2] = param_3;
  param_1[3] = uVar1;
  return param_1;
}

/* 0x08008FB8 (44B) | hardware_HW_DMA3SAD_8FB8 (orig: func_08008FB8) | origin: pure | domain: hardware | MEDIUM / tu_interp */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D0EBC();
void hardware_HW_DMA3SAD_8FB8(int *arg0) {
  u8 *puStack_c;
  u8 **ppuVar1;
  ppuVar1 = (u8 **)arg0[1];
  if (*arg0 == 1) {
    puStack_c = (u8 *)arg0[1];
    ppuVar1 = &puStack_c;
  }
  func_080D0EBC(ppuVar1,arg0[2],arg0[3],0x040000D4);
}

/* 0x08008FE4 (56B) | hardware_HW_DMA3SAD_8FE4 (orig: func_08008FE4) | origin: pure | domain: hardware | HIGH / stanhash_map_tu */
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
extern u32 func_080D0EBC();
void hardware_HW_DMA3SAD_8FE4(int *arg0, int *arg1) {
  int *end = arg1;
  u32 val = 0x040000D4;
  int *cur = arg0;
  u8 *puStack_14;
  u8 **ppuVar2;
  while (cur != end) {
    ppuVar2 = (u8 **)cur[1];
    if (*cur == 1) {
      puStack_14 = (u8 *)cur[1];
      ppuVar2 = &puStack_14;
    }
    func_080D0EBC(ppuVar2, cur[2], cur[3], val);
    cur += 4;
  }
}

/* 0x08009094 (172B) | hardware_Sub_08009094 (orig: func_08009094) | origin: wip | domain: hardware | HIGH / stanhash_map_tu */
void hardware_Sub_08009094(int *param_1,int *param_2) {
  u32 uVar1;
  int iVar2;
  u8 **ppuVar3;
  int iVar4;
  u32 uVar5;
  u8 *puStack_24;
  int iStack_20;
  do {
    if (param_1 == param_2) {
    }
    ppuVar3 = (u8 **)param_1[1];
    if (*param_1 == 1) {
      ppuVar3 = &puStack_24;
      puStack_24 = (u8 *)param_1[1];
    }
    uVar5 = param_1[3];
    iVar2 = param_1[2];
    if ((uVar5 & 0x4000000) == 0) {
      Code_Lib_Syscall_CpuSet(ppuVar3,iVar2,uVar5);
    }
    else {
      uVar1 = 0x0000FFFF & uVar5 & 7;
      iVar4 = (0x0000FFFF & uVar5) - uVar1;
      if ((iVar4 != 0) || (uVar1 == 0)) {
        iStack_20 = iVar2;
        Code_Lib_Syscall_CpuFastSet(ppuVar3,iVar2,uVar5 - uVar1);
        iVar2 = iStack_20 + iVar4 * 4;
        if ((uVar5 & 0x1000000) == 0) {
          ppuVar3 = (u8 **)((int)ppuVar3 + iVar4 * 4);
        }
        if (uVar1 == 0) goto LAB_08009116;
      }
      Code_Lib_Syscall_CpuSet(ppuVar3,iVar2,uVar5 - iVar4);
    }
LAB_08009116:
    param_1 = param_1 + 4;
  } while( true );
}

/* 0x08009140 (20B) | hardware_Sub_08009140 (orig: func_08009140) | origin: pure | domain: hardware | HIGH / stanhash_map_tu */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0800912C();
u32 hardware_Sub_08009140(u16 *arg0) {
  u16 val;
  val = func_0800912C();
  *arg0 = val;
  return arg0;
}

/* 0x08009154 (4B) | hardware_SetField_0x00_9154 (orig: func_08009154) | origin: pure | domain: hardware | HIGH / stanhash_map_tu */
void hardware_SetField_0x00_9154(u16 *arg0, u16 arg1) {
    *arg0 = arg1;
}

/* 0x08009158 (16B) | hardware_Sub_08009158 (orig: func_08009158) | origin: pure | domain: hardware | HIGH / stanhash_map_tu */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0800912C();
u32 hardware_Sub_08009158(u16 *arg0) {
  u16 val;
  val = func_0800912C();
  *arg0 = val;
  return;
}

/* 0x08009168 (20B) | hardware_Sub_08009168 (orig: func_08009168) | origin: pure | domain: hardware | HIGH / stanhash_map_tu */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 hardware_Sub_08009140();
u32 hardware_Sub_08009168(u16 *arg0) {
  hardware_Sub_08009140();
  arg0[2] = *arg0;
  return arg0;
}

/* 0x0800917C (20B) | hardware_Sub_0800917C (orig: func_0800917C) | origin: pure | domain: hardware | HIGH / stanhash_map_tu */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 hardware_SetField_0x00_9154();
u32 hardware_Sub_0800917C(u16 *arg0) {
  hardware_SetField_0x00_9154();
  arg0[2] = *arg0;
  return arg0;
}

/* 0x08009190 (20B) | hardware_Sub_08009190 (orig: func_08009190) | origin: pure | domain: hardware | HIGH / stanhash_map_tu */
extern u16 hardware_Sub_08009158();
int hardware_Sub_08009190(u16 *arg0) {
    u16 v = *arg0;
    arg0[2] = hardware_Sub_08009158(arg0) & ~v;
}

/* 0x080091A4 (68B) | hardware_Sub_080091A4 (orig: func_080091A4) | origin: wip | domain: hardware | HIGH / stanhash_map_tu */
u32 hardware_Sub_080091A4(s16 param_1, u16 param_2, s8 param_3) {
  u32 val;
  val = hardware_Sub_08009168();
  *(u16 *)(param_1 + 8) = *(u16 *)(param_1 + 4);
  *(u32 *)(param_1 + 0xa) = (u8)param_2;
  *(u16 *)(param_1 + 0xc) = ((u32)(param_3 << 0x10) >> 0x10);
  return (param_1 + 0xe);
}

/* 0x080091E8 (60B) | hardware_Sub_080091E8 (orig: func_080091E8) | origin: wip | domain: hardware | HIGH / stanhash_map_tu */
u32 hardware_Sub_080091E8(s16 param_1) {
  u32 val;
  val = hardware_Sub_0800917C();
  *(u16 *)(param_1 + 8) = *(u16 *)(param_1 + 4);
  *(u32 *)(param_1 + 0xa) = 0x1e;
  *(u16 *)(param_1 + 0xc) = 4;
  return (param_1 + 0xe);
}

/* 0x08009224 (68B) | hardware_Sub_08009224 (orig: func_08009224) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
u32 hardware_Sub_08009224(s8 param_1, s8 param_2, u16 param_3) {
  u32 val;
  val = hardware_Sub_0800917C();
  *(u32 *)(param_1 + 0xa) = ((u32)(param_2 << 0x10) >> 0x10);
  *(u16 *)(param_1 + 8) = *(u16 *)(param_1 + 4);
  *(u16 *)(param_1 + 0xc) = (u8)param_3;
  return (param_1 + 0xe);
}

/* 0x08009268 (96B) | hardware_Sub_08009268 (orig: func_08009268) | origin: wip | domain: hardware | HIGH / stanhash_map_tu */
u32 hardware_Sub_08009268(u16 *param_1) {
  u16 uVar1;
  u16 uVar2;
  u16 uVar3;
  u16 uVar4;
  u32 uVar5;
  u16 *puVar6;
  u32 uVar7;
  u32 uVar8;
  uVar5 = hardware_Sub_08009190();
  uVar1 = *param_1;
  uVar2 = param_1[6];
  uVar3 = param_1[5];
  uVar8 = 0;
  uVar7 = 0x200;
  puVar6 = param_1 + 0x10;
  do {
    if ((uVar1 & uVar7) != 0) {
      if ((uVar5 & uVar7) == 0) {
        uVar4 = *puVar6;
        if ((int)(short)uVar4 == (u32)uVar3) {
          uVar8 = uVar8 | uVar7;
          uVar4 = uVar4 - uVar2;
        }
        else {
          uVar4 = uVar4 + 1;
        }
      }
      else {
        uVar8 = uVar8 | uVar7;
        uVar4 = 0;
      }
      *puVar6 = uVar4;
    }
    puVar6 = puVar6 + -1;
    uVar7 = uVar7 >> 1;
  } while (uVar7 != 0);
  param_1[4] = (u16)uVar8;
  return uVar8;
}

/* 0x080092C8 (52B) | hardware_Sub_080092C8 (orig: func_080092C8) | origin: pure | domain: hardware | HIGH / stanhash_map_tu */
#define true 1
#define false 0
#define NULL ((void *)0)
void hardware_Sub_080092C8(u16 *arg0,u16 arg1) {
  u16 val;
  u16 val2;
  u16 *mem_ptr;
  u32 val3;
  val = *arg0;
  val3 = 0x200;
  mem_ptr = arg0 + 0x10;
  val2 = arg0[5];
  do {
    if ((val & val3) != 0) {
      *mem_ptr = *mem_ptr + (arg1 - val2);
    }
    mem_ptr = mem_ptr + -1;
    val3 = val3 >> 1;
  } while (val3 != 0);
  arg0[5] = arg1;
}

/* 0x080092FC (4B) | hardware_SetField_0x0C (orig: func_080092FC) | origin: pure | domain: hardware | HIGH / stanhash_map_tu */
void hardware_SetField_0x0C(u8 *arg0, u16 arg1) {
    *(u16 *)(arg0 + 12) = arg1;
}

/* 0x08009300 (36B) | hardware_Sub_08009300 (orig: func_08009300) | origin: pure | domain: hardware | HIGH / stanhash_map_tu */
struct Node { u32 a; u16 b; u32 c; u8 d; u16 e; Node(u32 x) : a(x), b(0), c(0), d(0), e(0) {} }; extern "C" Node **hardware_Sub_08009300(Node **out, u32 x) { *out = new Node(x); return out; }

/* 0x08009324 (32B) | hardware_Sub_08009324 (orig: func_08009324) | origin: pure | domain: hardware | HIGH / stanhash_map_tu */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 CppRuntime_builtin_delete();
void hardware_Sub_08009324(u32 *arg0,u32 arg1) {
  CppRuntime_builtin_delete(*arg0);
  if ((arg1 & 1) != 0) {
    CppRuntime_builtin_delete(arg0);
  }
}

/* 0x08009344 (8B) | hardware_GetField_0x00_9344 (orig: func_08009344) | origin: pure | domain: hardware | HIGH / stanhash_map_tu */
u32 hardware_GetField_0x00_9344(u32 **arg0, u32 arg1) {
    u32 *p = *arg0;
    u32 old = *p;
    *p = arg1;
    return old;
}

/* 0x0800934C (44B) | hardware_Sub_0800934C (orig: func_0800934C) | origin: wip | domain: hardware | HIGH / stanhash_map_tu */
void hardware_Sub_0800934C(int *param_1,short param_2,u32 param_3,int param_4) {
  int iVar1;
  iVar1 = *param_1;
  if (param_2 < 0) {
    param_2 = -param_2;
  }
  *(short *)(iVar1 + 4) = -param_2;
  *(u32 *)(iVar1 + 8) = param_3;
  *(u8 *)(iVar1 + 0xc) =
       (u8)((u8)((u32)-param_4 >> 0x18) | (u8)((u32)param_4 >> 0x18)) >> 7;
  *(short *)(iVar1 + 0xe) = (short)0x0000FFFF;
}

/* 0x08009378 (40B) | hardware_Sub_08009378 (orig: func_08009378) | origin: pure | domain: hardware | HIGH / stanhash_map_tu */
struct S { u32 p0; s16 a; u32 b; u8 c; u16 d; }; void hardware_Sub_08009378(struct S **p, s16 a, u32 b, int c) { struct S *s = *p; int v = a; u8 f; if (v < 0) v = -v; f = ((u32)(-c | c)) >> 31; s->a = v; s->b = b; s->c = f; s->d = 0; }

/* 0x080093A0 (12B) | hardware_GetField_0x00_93A0 (orig: func_080093A0) | origin: pure | domain: hardware | HIGH / stanhash_map_tu */
s16 hardware_GetField_0x00_93A0(s16 **arg0, s16 arg1) {
    s16 *p = *arg0;
    s16 old = p[2];
    p[2] = arg1;
    return old;
}

/* 0x080093AC (256B) | hardware_HW_BLDCNT (orig: func_080093AC) | origin: wip | domain: hardware | HIGH / stanhash_map_tu */
u32 hardware_HW_BLDCNT(u32 *param_1) {
  short sVar1;
  int iVar2;
  u16 *puVar3;
  u32 uVar4;
  short *psVar5;
  u32 uVar6;
  u32 uVar7;
  int *piVar8;
  u16 uVar9;
  int iVar10;
  piVar8 = (int *)*param_1;
  iVar10 = (int)(short)piVar8[1];
  if (iVar10 == 0) {
    uVar4 = 0;
    goto LAB_0800949e;
  }
  uVar7 = (u32)*(u16 *)((int)piVar8 + 0xe);
  iVar2 = piVar8[2];
  if (iVar2 != 0) {
    uVar9 = 0;
    if (iVar2 == 1) {
      uVar9 = 0x80;
    }
    else if (iVar2 == 2) {
      uVar9 = 0xc0;
    }
    iVar2 = *piVar8;
    puVar3 = 0x04000050;
    if (iVar2 != 0) {
      puVar3 = (u16 *)(iVar2 + 0x50);
    }
    *puVar3 = (u16)0x0000FF3F & *puVar3 | uVar9;
    psVar5 = 0x04000054;
    if (iVar2 != 0) {
      psVar5 = (short *)(iVar2 + 0x54);
    }
    if (0x0000FFFE < uVar7) {
      sVar1 = 0x10;
    }
    else if (uVar7 == 0) {
      sVar1 = 0;
    }
    else {
      sVar1 = (short)(uVar7 * 0xf >> 0x10) + 1;
    }
    *psVar5 = sVar1;
  }
  if ((char)piVar8[3] != '\0') {
    if (0x0000FFFE < uVar7) {
      uVar6 = 0xf;
    }
    else if (uVar7 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = (uVar7 * 0xe >> 0x10) + 1;
    }
    uVar6 = uVar6 | uVar6 << 4;
    puVar3 = 0x0400004C;
    if (*piVar8 != 0) {
      puVar3 = (u16 *)(*piVar8 + 0x4c);
    }
    *puVar3 = (u16)uVar6 | (u16)(uVar6 << 8);
  }
  if (iVar10 < 0) {
    if (uVar7 == 0) goto LAB_08009478;
  }
  else if (uVar7 == 0x0000FFFF) {
LAB_08009478:
    uVar4 = 0;
    *(u16 *)(piVar8 + 1) = 0;
    goto LAB_0800949e;
  }
  iVar10 = uVar7 + iVar10;
  if (iVar10 < 0) {
    iVar10 = 0;
  }
  else if (0x0000FFFF < iVar10) {
    iVar10 = 0x0000FFFF;
  }
  *(short *)((int)piVar8 + 0xe) = (short)iVar10;
  uVar4 = 1;
LAB_0800949e:
  return uVar4;
}

/* 0x080094AC (12B) | hardware_vfunc_08_94AC (orig: func_080094AC) | origin: pure | domain: hardware | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 hardware_HW_BLDCNT();
u32 hardware_vfunc_08_94AC(int arg0) {
  return hardware_HW_BLDCNT(arg0 + 0xc);
}

/* 0x080094B8 (40B) | hardware_Ctor_94B8 (orig: func_080094B8) | origin: pure | domain: hardware | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 hardware_Sub_08009324();
extern u32 hardware_Dtor_98AC();
void hardware_Ctor_94B8(int arg0,u32 arg1) {
  *(u32 *)(arg0 + 8) = 0x080E5B80;
  hardware_Sub_08009324(arg0 + 0xc,2);
  hardware_Dtor_98AC(arg0,arg1);
}

/* 0x080094E0 (24B) | hardware_Sub_080094E0 (orig: func_080094E0) | origin: pure | domain: hardware | MEDIUM / tu_interp */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080094A4();
u32 hardware_Sub_080094E0(int arg0) {
  short val;
  val = func_080094A4(arg0 + 0xc);
  return ((u32)(-(int)val | (int)val) >> 0x1f);
}

/* 0x080094F8 (16B) | hardware_Sub_080094F8 (orig: func_080094F8) | origin: pure | domain: hardware | MEDIUM / tu_interp */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080094A4();
s16 hardware_Sub_080094F8(int arg0) {
  int slot;
  s16 result;
  slot = arg0 + 0xc;
  result = func_080094A4(slot);
  return result;
}

/* 0x08009508 (20B) | hardware_Sub_08009508 (orig: func_08009508) | origin: pure | domain: hardware | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 hardware_GetField_0x00_93A0();
s16 hardware_Sub_08009508(int arg0, short arg1) {
  int local_a;
  s16 val;
  local_a = arg0 + 0xc;
  val = hardware_GetField_0x00_93A0(local_a, (int)arg1);
  return val;
}

/* 0x0800951C (16B) | hardware_Sub_0800951C (orig: func_0800951C) | origin: pure | domain: hardware | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 hardware_Sub_08009378();
void hardware_Sub_0800951C(int arg0,short arg1) {
  hardware_Sub_08009378(arg0 + 0xc,(int)arg1);
}

/* 0x0800952C (16B) | hardware_Sub_0800952C (orig: func_0800952C) | origin: pure | domain: hardware | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 hardware_Sub_0800934C();
void hardware_Sub_0800952C(int arg0,short arg1) {
  hardware_Sub_0800934C(arg0 + 0xc,(int)arg1);
}

/* 0x0800953C (12B) | hardware_Sub_0800953C (orig: func_0800953C) | origin: pure | domain: hardware | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 hardware_GetField_0x00_9344();
u32 hardware_Sub_0800953C(int arg0) {
  return hardware_GetField_0x00_9344(arg0 + 0xc);
}

/* 0x0800956C (48B) | hardware_vfunc_18 (orig: func_0800956C) | origin: wip | domain: hardware | HIGH / vtable_algebra */
void hardware_vfunc_18(u32 self, u32 param_2, u32 param_3, u32 param_4) {
    u32 r2;
    u32 r3;
    u32 r4;
    u32 r0 = self;
    register u32 r1 = param_2;
    r2 = param_3;
    r3 = param_4;
    r4 = 0, r5 = 0, r6 = 0, r7 = 0;
    r0 = 1;
    r4 = 1;
    r6 = r0 + 0;
    r0 = interrupt_Sub_08000528(r0, r1, r2, r3);
    r4 &= r0;
    r0 = hardware_vfunc_18_9984(r0, r1, r2, r3);
    r0 = r6 + 0;
    *(u16 *)(r5) = r4;
    r0 = *(u16 *)(r1);
    if (r0 == 0) goto loc_08009592;
    r0 = interrupt_Sub_080004F4(r0, r1, r2, r3);
loc_08009592:
    return r0;
    r0 = r0;
    return r0;
}

/* 0x0800959C (36B) | hardware_Ctor_959C (orig: func_0800959C) | origin: pure | domain: hardware | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 hardware_vfunc_18();
extern u32 hardware_Ctor_98DC();
void hardware_Ctor_959C(int arg0,u32 arg1) {
  *(u32 *)(arg0 + 8) = 0x080E5B90;
  hardware_vfunc_18(arg0);
  hardware_Ctor_98DC(arg0,arg1);
}

/* 0x080095C0 (60B) | hardware_vfunc_10 (orig: func_080095C0) | origin: wip | domain: hardware | HIGH / vtable_algebra */
void hardware_vfunc_10(u32 self, u32 param_2, u32 param_3, u32 param_4) {
    register u32 r0 = self;
    register u32 r1 = param_2;
    register u32 r2 = param_3;
    register u32 r3 = param_4;
    register u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0;
    r6 = r0 + 0;
    r4 = 1;
    r0 = 1;
    r0 = interrupt_Sub_08000528(r0, r1, r2, r3);
    r4 &= r0;
    *(u16 *)(r5) = r4;
    r0 = r6 + 0;
    r0 = *(u16 *)(r1);
    r0 = hardware_vfunc_10_9940(r0, r1, r2, r3);
    if (r0 == 0) goto loc_080095EE;
    r0 = interrupt_Sub_080004F4(r0, r1, r2, r3);
loc_080095EE:
    return r0;
    r0 = r0;
    return r0;
}

/* 0x080095FC (60B) | hardware_vfunc_14 (orig: func_080095FC) | origin: wip | domain: hardware | HIGH / vtable_algebra */
void hardware_vfunc_14(u8 self, u32 param_2, u32 param_3, u32 param_4) {
    register u32 r0 = self;
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
    r0 = r6 + 0;
    r0 = hardware_vfunc_14_9968(r0, r1, r2, r3);
    r0 = interrupt_Sub_080004F4(r0, r1, r2, r3);
    if (r0 == 0) goto loc_0800962A;
    r0 = *(u16 *)(r1);
loc_0800962A:
    return r0;
    r0 = r0;
    return r0;
}

/* 0x08009638 (60B) | hardware_vfunc_1C (orig: func_08009638) | origin: wip | domain: hardware | HIGH / vtable_algebra */
void hardware_vfunc_1C(u32 self, u32 param_2, u32 param_3, u32 param_4) {
    u32 r2;
    u32 r3;
    u32 r4;
    u32 r0 = self;
    register u32 r1 = param_2;
    r2 = param_3;
    r3 = param_4;
    r4 = 0, r5 = 0, r6 = 0, r7 = 0;
    r6 = r0 + 0;
    r4 = 1;
    r0 = 1;
    r0 = interrupt_Sub_08000528(r0, r1, r2, r3);
    r4 &= r0;
    *(u16 *)(r5) = r4;
    r0 = r6 + 0;
    r0 = *(u16 *)(r1);
    r0 = hardware_vfunc_1C_99B0(r0, r1, r2, r3);
    if (r0 == 0) goto loc_08009666;
    r0 = interrupt_Sub_080004F4(r0, r1, r2, r3);
loc_08009666:
    return r0;
    r0 = r0;
    return r0;
}

/* 0x08009674 (60B) | hardware_vfunc_20 (orig: func_08009674) | origin: wip | domain: hardware | HIGH / vtable_algebra */
void hardware_vfunc_20(u32 self, u32 param_2, u32 param_3, u32 param_4) {
    u32 r2;
    u32 r3;
    u32 r4;
    u32 r0 = self;
    register u32 r1 = param_2;
    r2 = param_3;
    r3 = param_4;
    r4 = 0, r5 = 0, r6 = 0, r7 = 0;
    r6 = r0 + 0;
    r4 = 1;
    r0 = 1;
    r0 = interrupt_Sub_08000528(r0, r1, r2, r3);
    r4 &= r0;
    *(u16 *)(r5) = r4;
    r0 = hardware_vfunc_20_99D4(r0, r1, r2, r3);
    r0 = r6 + 0;
    r0 = *(u16 *)(r1);
    if (r0 == 0) goto loc_080096A2;
    r0 = interrupt_Sub_080004F4(r0, r1, r2, r3);
loc_080096A2:
    return r0;
    r0 = r0;
    return r0;
}

/* 0x080096B0 (64B) | hardware_Wrap_CpuSet (orig: func_080096B0) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
u32 hardware_Wrap_CpuSet(int param_1, int param_2) {
  u32 val;
  *(u32 *)(param_1) = 0x80;
  val = Code_Lib_Syscall_CpuSet(0, param_1, 0x0100002B);
  *(u16 *)(param_2) = 0;
  *(u8 *)(param_1 + 0x20) = (0x80 << 1);
  *(u16 *)(param_1 + 0x22) = 0;
  *(u16 *)(param_1 + 0x24) = 0;
  *(u16 *)(param_1 + 0x26) = (0x80 << 1);
  *(u16 *)(param_1 + 0x30) = (0x80 << 1);
  *(u16 *)(param_1 + 0x32) = 0;
  *(u16 *)(param_1 + 0x34) = 0;
  *(u16 *)(param_1 + 0x36) = (0x80 << 1);
  return param_1;
}

/* 0x080096F0 (32B) | hardware_HW_BLDY (orig: func_080096F0) | origin: pure | domain: hardware | HIGH / stanhash_map_tu */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 hardware_HW_DMA3SAD();
void hardware_HW_BLDY(int arg0) {
  hardware_HW_DMA3SAD(arg0,0x4000000,0x54);
  *(u16 *)0x04000054 = *(u16 *)(arg0 + 0x54);
}

/* 0x08009744 (56B) | hardware_Sub_08009744 (orig: func_08009744) | origin: pure | domain: hardware | HIGH / stanhash_map_tu */
#define true 1
#define false 0
#define NULL ((void *)0)
u32 hardware_Sub_08009744(u8 *arg0,u8 arg1,u8 arg2) {
  u8 *mem_ptr;
  u8 *mem_ptr2;
  arg0[1] = arg1 & 0x7f;
  *arg0 = arg1 & 0x7f;
  arg0[3] = arg2 & 0x1f;
  arg0[2] = arg2 & 0x1f;
  mem_ptr = arg0 + 4;
  mem_ptr2 = arg0 + 0x00000404;
  do {
    mem_ptr[1] = 2;
    mem_ptr = mem_ptr + 8;
  } while (mem_ptr != mem_ptr2);
  return arg0;
}

/* 0x0800977C (20B) | hardware_Sub_0800977C (orig: func_0800977C) | origin: pure | domain: hardware | HIGH / stanhash_map_tu */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 hardware_HW_DMA3SAD();
void hardware_Sub_0800977C(int arg0) {
  hardware_HW_DMA3SAD(arg0 + 4,0x7000000,0x400);
}

/* 0x080097A4 (144B) | hardware_Sub_080097A4 (orig: func_080097A4) | origin: wip | domain: hardware | HIGH / stanhash_map_tu */
void hardware_Sub_080097A4(u8 *param_1) {
    u32 * puVar3;
    u8 * pbVar5;
    u32 bVar1;
    s16 uVar4;
    u32 uVar8;
    u32 * puVar7;
  register u16 uVar2;
  register u8 *pbVar6;
  pbVar6 = param_1 + 4;
  uVar4 = 0x00000FFF;
  puVar7 = (u32 *)0x7000000;
  bVar1 = (u16)*param_1;
  uVar8 = 0;
  do {
    for (pbVar5 = 4 + param_1; param_1 != pbVar5 + (u32)bVar1 * 8 + 4; pbVar5 = pbVar5 + 8) {
      uVar2 = *(u16 *)(pbVar5 + 4);
      if ((uVar2 & 0xc00) == uVar8) {
        *puVar7 = *(u32 *)pbVar5;
        *(u16 *)(puVar7 + 1) = uVar2;
        *(u16 *)((int)puVar7 + 6) = *(u16 *)(pbVar6 + 6);
        pbVar6 = pbVar6 + 8;
        puVar7 = puVar7 + 2;
      }
    }
    uVar8 = 0x400 + uVar8;
  } while (uVar8 <= (u8)uVar4);
  for (; puVar7 != (s16)(u32 *)0x7000000 + (uVar4 + 1) * 2; puVar7 = puVar7 + 2) {
    *puVar7 = (u8)0x200;
    *(u16 *)((int)puVar7 + 6) = *(u16 *)(6 + pbVar6);
    pbVar6 = pbVar6 + 8;
  }
}

/* 0x08009834 (48B) | hardware_Sub_08009834 (orig: func_08009834) | origin: wip | domain: hardware | HIGH / stanhash_map_tu */
void hardware_Sub_08009834(u8 *param_1) {
  u8 bVar1;
  u8 bVar2;
  u8 *pbVar3;
  bVar1 = *param_1;
  bVar2 = param_1[1];
  if ((u32)bVar2 < (u32)bVar1) {
    pbVar3 = param_1 + (u32)bVar2 * 8 + 4;
    do {
      pbVar3[1] = 2;
      pbVar3 = pbVar3 + 8;
    } while (pbVar3 != param_1 + (u32)bVar1 * 8 + 4);
  }
  *param_1 = bVar2;
  param_1[2] = param_1[3];
}

/* 0x08009864 (20B) | hardware_Sub_08009864 (orig: func_08009864) | origin: pure | domain: hardware | HIGH / stanhash_map_tu */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 hardware_Sub_0800977C();
extern u32 hardware_Sub_08009834();
void hardware_Sub_08009864(u32 arg0) {
  hardware_Sub_0800977C();
  hardware_Sub_08009834(arg0);
}

/* 0x08009878 (32B) | hardware_Sub_08009878 (orig: func_08009878) | origin: pure | domain: hardware | MEDIUM / tu_interp */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 hardware_Sub_08009834();
extern u32 Code_Lib_Syscall_CpuFastSet();
void hardware_Sub_08009878(int arg0) {
  Code_Lib_Syscall_CpuFastSet(arg0 + 4,0x7000000,0x100);
  hardware_Sub_08009834(arg0);
}

/* 0x08009898 (20B) | hardware_Sub_08009898 (orig: func_08009898) | origin: pure | domain: hardware | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 hardware_Sub_080097A4();
extern u32 hardware_Sub_08009834();
void hardware_Sub_08009898(u32 arg0) {
  hardware_Sub_080097A4();
  hardware_Sub_08009834(arg0);
}

/* 0x080098AC (44B) | hardware_Dtor_98AC (orig: func_080098AC) | origin: pure | domain: hardware | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 CppRuntime_builtin_delete();
void hardware_Dtor_98AC(u32 *arg0,u32 arg1) {
  u32 *mem_ptr;
  arg0[2] = 0x080E5BE8;
  mem_ptr = (u32 *)*arg0;
  if (mem_ptr != (u32 *)0x0) {
    *mem_ptr = arg0[1];
    *(u32 **)arg0[1] = mem_ptr;
  }
  if ((arg1 & 1) != 0) {
    CppRuntime_builtin_delete(arg0);
  }
}

/* 0x080098DC (44B) | hardware_Ctor_98DC (orig: func_080098DC) | origin: pure | domain: hardware | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 hardware_Dtor_98AC();
extern u32 hardware_vfunc_18_9984();
void hardware_Ctor_98DC(int arg0,u32 arg1) {
  *(u32 *)(arg0 + 8) = 0x080E5BB4;
  hardware_vfunc_18_9984(arg0);
  hardware_Dtor_98AC(arg0 + 0x10,2);
  hardware_Dtor_98AC(arg0,arg1);
}

/* 0x08009908 (56B) | hardware_vfunc_08_9908 (orig: func_08009908) | origin: wip | domain: hardware | HIGH / vtable_algebra */
u32 hardware_vfunc_08_9908(int self) {
  char cVar1;
  int iVar2;
  int iVar3;
  iVar3 = *(int *)(self + 0xc);
  while (iVar2 = iVar3, iVar2 != self + 0x10) {
    iVar3 = *(int *)(iVar2 + 4);
    cVar1 = func_080D3910(iVar2,*(u32 *)(*(int *)(iVar2 + 8) + 8));
    if (cVar1 == '\0') {
      func_080D3914(self,iVar2,*(u32 *)(*(int *)(self + 8) + 0x14));
    }
  }
  return 1;
}

/* 0x08009940 (40B) | hardware_vfunc_10_9940 (orig: func_08009940) | origin: pure | domain: hardware | HIGH / vtable_algebra */
void hardware_vfunc_10_9940(int arg0, u32 *arg1) {
    u32 *p = (u32 *)*arg1;
    if (p != 0) {
        *p = arg1[1];
        *(u32 **)arg1[1] = p;
    }
    **(u32 ***)(arg0 + 0x10) = arg1;
    *arg1 = *(u32 *)(arg0 + 0x10);
    arg1[1] = arg0 + 0x10;
    *(u32 **)(arg0 + 0x10) = arg1 + 1;
}

/* 0x08009968 (28B) | hardware_vfunc_14_9968 (orig: func_08009968) | origin: pure | domain: hardware | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
void hardware_vfunc_14_9968(u32 arg0,u32 *arg1) {
  u32 *mem_ptr;
  mem_ptr = (u32 *)*arg1;
  if (mem_ptr != (u32 *)0x0) {
    *mem_ptr = arg1[1];
    *(u32 **)arg1[1] = mem_ptr;
    *arg1 = 0;
    arg1[1] = 0;
  }
}

/* 0x08009984 (44B) | hardware_vfunc_18_9984 (orig: func_08009984) | origin: pure | domain: hardware | HIGH / vtable_algebra */
struct Node { struct Node *prev; struct Node *next; };
struct List { u8 pad[0xc]; struct Node *head; struct Node *tail; };
void hardware_vfunc_18_9984(int arg0) {
    u32 *p = *(u32 **)(arg0 + 0xc);
    u32 *end = (u32 *)(arg0 + 0x10);
    while (p != end) {
        u32 *cur = p;
        p = (u32 *)p[1];
        cur[0] = 0;
        cur[1] = 0;
    }
    *(u32 *)(arg0 + 0xc) = arg0 + 0x10;
    *(u32 *)(arg0 + 0x10) = arg0 + 0xc;
}

/* 0x080099D4 (24B) | hardware_vfunc_20_99D4 (orig: func_080099D4) | origin: pure | domain: hardware | HIGH / vtable_algebra */
void hardware_vfunc_20_99D4(u32 **a, u32 **b) { u32 *x = a[3], *y = b[3], *p, *q, u, v; a[3] = y; b[3] = x; p = a[4]; q = b[4]; u = *p; v = *q; *p = v; *q = u; }

/* 0x08016758 (44B) | hardware_Sub_08016758 (orig: func_08016758) | origin: pure | domain: hardware | MEDIUM / graph_algebra */
extern u16 func_080D3910();
extern void hardware_Wrap_m4aMPlayStart_8B88();
void hardware_Sub_08016758(int arg0) {
    int p = *(int *)(arg0 + 4);
    int dst = p + 0xbc;
    int *obj = *(int **)(p + 0xa8);
    u16 v = func_080D3910(obj, *(u32 *)(*obj + 0x148));
    hardware_Wrap_m4aMPlayStart_8B88(dst, v);
}

/* 0x0801FC78 (36B) | hardware_Sub_0801FC78 (orig: func_0801FC78) | origin: pure | domain: hardware | MEDIUM / graph_algebra */
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
extern u32 hardware_Sub_0803B0A8();
/* paridad 90.88% preset agbcc_O2 (thumb-symbolic-lifter) */
void hardware_Sub_0801FC78(u32 arg0, u32 arg1, u32 arg2, u32 arg3)
{
    register u32 r0 = arg0;
    register u32 r1 = arg1;
    register u32 r2 = arg2;
    register u32 r3 = arg3;
    register u32 r4, r5, r6, r7;
    r1 = 0x0000107C;
    r4 = r0 + r1;
    r5 = 0;
    r0 = *(u32 *)(r4);
    if (r5 == r0) goto loc_0801FC90;
    if (r0 == 0) goto loc_0801FC90;
    r1 = 3;
    r0 = hardware_Sub_0803B0A8(r0, r1, r2, r3);
loc_0801FC90:
    *(u32 *)(r4) = r5;
    return r0;
    r4 = (int)r7 >> 1;
    r0 = r0;
    return r0;
}

/* 0x08039F90 (436B) | hardware_Sub_08039F90 (orig: func_08039F90) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
void hardware_Sub_08039F90(int param_1,int *param_2,u32 param_3,u32 param_4,int param_5,int param_6
             ,int param_7,u32 param_8) {
  u32 uVar1;
  u32 *puVar2;
  int iVar3;
  int iVar4;
  u8 auStack_54 [8];
  u8 auStack_4c [8];
  u8 auStack_44 [16];
  u32 uStack_34;
  u32 uStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  iStack_2c = func_080D3910(param_2,*(u32 *)(*param_2 + 0x18));
  iStack_2c = param_5 - iStack_2c;
  iStack_28 = func_080D3910(param_2,*(u32 *)(*param_2 + 0x1c));
  iStack_28 = param_6 - iStack_28;
  iStack_24 = 0x8000 - param_6;
  iVar3 = param_7;
  if (param_7 < 0) {
    iVar3 = -param_7;
  }
  iVar3 = iStack_28 - iVar3;
  iVar4 = param_1 + 8;
  uVar1 = param_8 & 3;
  uStack_34 = param_4;
  uStack_30 = param_3;
  func_080D3918(auStack_54,*(int **)(param_1 + 0x30),
                  *(u16 *)(*(int *)(param_1 + 0x34) + (u32)*(u16 *)(param_1 + 0x3c) * 4),
                  *(u32 *)(**(int **)(param_1 + 0x30) + 0x10));
  if ((int)(-*(u32 *)(param_1 + 0x10) | *(u32 *)(param_1 + 0x10)) < 0) {
    iVar3 = func_080D391C(uStack_30,iStack_2c,iVar3,uVar1 << 2 | uVar1 | uVar1 << 4 | uVar1 << 6,
                            iStack_24,auStack_54,*(u32 *)(param_1 + 8),
                            *(u16 *)(param_1 + 0x14),param_1 + 0x18);
  }
  else {
    iVar3 = 0;
  }
  if ((iVar3 != 0) && (*(char *)(param_1 + 0x44) != '\0')) {
    hardware_Sub_080A480C(iVar4,uStack_34,auStack_4c);
    if (*(char *)(param_1 + 0x45) == '\0') {
      if (*(char *)(param_1 + 0x46) == '\0') {
        code_809E804_Sub_080A4944(iVar4,auStack_44,1);
        *(char *)(param_1 + 0x46) = '\x01';
      }
    }
    else {
      code_809E804_Sub_080A4944(iVar4,auStack_44,1);
    }
    *(char *)(param_1 + 0x44) = '\0';
  }
  puVar2 = *(u32 **)(param_1 + 0x48);
  if ((puVar2 != (u32 *)0x0) && (-1 < param_7)) {
    param_8 = param_8 & 3;
    if ((int)(-puVar2[2] | puVar2[2]) < 0) {
      iVar3 = func_080D391C(uStack_30,iStack_2c,iStack_28,
                              param_8 << 2 | param_8 | param_8 << 4 | param_8 << 6,iStack_24,
                              puVar2 + 10,*puVar2,*(u16 *)(puVar2 + 3),puVar2 + 4);
    }
    else {
      iVar3 = 0;
    }
    if ((iVar3 != 0) && (*(char *)(puVar2 + 0x12) != '\0')) {
      hardware_Sub_080A480C(puVar2,uStack_34,puVar2 + 0xc);
      code_809E804_Sub_080A4944(puVar2,puVar2 + 0xe,1);
      *(char *)(puVar2 + 0x12) = '\0';
    }
  }
}

/* 0x0803A350 (68B) | hardware_Sub_0803A350 (orig: func_0803A350) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
void hardware_Sub_0803A350(u32 *param_1, u32 param_2) {
    int * piVar2;
    u32 uVar3;
    u32 * puVar4;
    u32 * puVar5;
  register char cVar1;
  piVar2 = (int *)func_080D3910((int *)*param_1,*(u32 *)(*(int *)*param_1 + 0x14c));
  puVar4 = (u32 *)*piVar2;
  puVar5 = (u32 *)piVar2[1];
  do {
    if (puVar4 == puVar5) {
      uVar3 = puVar5[-1];
LAB_0803a386:
      hardware_Wrap_m4aMPlayStart(uVar3,param_2);
    }
    if (hardware_GetField_0x00_8CD0(*puVar4) == '\0') {
      uVar3 = *puVar4;
      goto LAB_0803a386;
    }
    puVar4 = puVar4 + 1;
  } while( true );
}

/* 0x0803AB30 (328B) | hardware_Sub_0803AB30 (orig: func_0803AB30) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
u32 hardware_Sub_0803AB30(u32 *param_1,int *param_2) {
  u16 uVar1;
  int *piVar2;
  u32 uVar3;
  u32 *puVar4;
  u32 *puVar5;
  int iVar6;
  u32 uVar7;
  u32 uStack_50;
  u32 uStack_4c;
  u32 uStack_48;
  u32 uStack_44;
  u32 uStack_40;
  u32 uStack_3c;
  u32 uStack_38;
  u32 uStack_34;
  u8 uStack_30;
  u16 *apuStack_2c [2];
  u16 **ppuStack_24;
  *param_1 = param_2;
  puVar4 = param_1 + 1;
  iVar6 = 2;
  ppuStack_24 = apuStack_2c;
  puVar5 = puVar4;
  do {
    *puVar4 = 0;
    *(u16 *)(puVar4 + 1) = 0;
    puVar4[2] = 0;
    *(u16 *)(puVar4 + 3) = 0;
    puVar4[4] = 0;
    *(u16 *)(puVar4 + 5) = 0;
    puVar4[6] = 0;
    *(u16 *)(puVar4 + 7) = 0;
    hardware_Sub_08007874(puVar5 + 8);
    puVar4[9] = 0;
    puVar4 = puVar4 + 0xb;
    puVar5 = puVar5 + 0xb;
    iVar6 = iVar6 + -1;
  } while (iVar6 != -1);
  piVar2 = param_1 + 0x22;
  *piVar2 = 0;
  *(u8 *)(param_1 + 0x27) = 1;
  uStack_30 = func_080D3914(param_2,0xf,*(u32 *)(*param_2 + 0x48));
  if (*piVar2 == 0) {
    LibC_memset(param_1 + 0x23,uStack_30,(int)param_1 + (0x8c - (int)(param_1 + 0x23)));
    LibC_memset((int)piVar2 + *piVar2 + 4,uStack_30,1 - *piVar2);
    *piVar2 = 1;
  }
  else {
    LibC_memset(param_1 + 0x23,uStack_30,((int)param_1 + 0x8d) - (int)(param_1 + 0x23));
    *piVar2 = *piVar2 - ((int)piVar2 + ((*piVar2 + 4) - ((int)param_1 + 0x8d)));
  }
  piVar2 = (int *)func_080D3910(param_2,*(u32 *)(*param_2 + 0x68));
  uVar7 = 0;
  do {
    iVar6 = *piVar2;
    func_080D3918(ppuStack_24,piVar2,uVar7 + 0x0000091A,*(u32 *)(iVar6 + 0xc));
    func_080D3918(&uStack_50,piVar2,*apuStack_2c[0],*(u32 *)(iVar6 + 0x10));
    LibC_memcpy(&uStack_50,&uStack_50,0x20);
    param_1[uVar7 * 0xb + 1] = uStack_50;
    param_1[uVar7 * 0xb + 2] = uStack_4c;
    param_1[uVar7 * 0xb + 3] = uStack_48;
    param_1[uVar7 * 0xb + 4] = uStack_44;
    param_1[uVar7 * 0xb + 5] = uStack_40;
    param_1[uVar7 * 0xb + 6] = uStack_3c;
    param_1[uVar7 * 0xb + 7] = uStack_38;
    param_1[uVar7 * 0xb + 8] = uStack_34;
    puVar5 = param_1 + uVar7 * 0xb + 9;
    hardware_Sub_08007C28(puVar5,param_1[uVar7 * 0xb + 10]);
    uVar3 = hardware_Sub_08007B54(puVar5,2);
    param_1[uVar7 * 0xb + 10] = uVar3;
    uVar1 = hardware_Sub_08007D4C(puVar5);
    *(u16 *)(param_1 + uVar7 * 0xb + 0xb) = uVar1;
    uVar7 = uVar7 + 1;
  } while (uVar7 < 3);
  return (param_1);
}

/* 0x0803AC78 (96B) | hardware_Sub_0803AC78 (orig: func_0803AC78) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
void hardware_Sub_0803AC78(u32 *param_1,u32 param_2) {
  u32 *puVar1;
  puVar1 = param_1 + 0x22;
  func_080D3914((int *)*param_1,*(u8 *)(param_1 + 0x23),
                  *(u32 *)(*(int *)*param_1 + 0x4c));
  if (param_1 != (u32 *)0xfffffffc) {
    for (; param_1 + 1 != puVar1; puVar1 = puVar1 + -0xb) {
      hardware_Sub_08007C28(puVar1 + -3,puVar1[-2]);
      hardware_Sub_080079E8(puVar1 + -3,2);
    }
  }
  if ((param_2 & 1) != 0) {
    CppRuntime_builtin_delete(param_1);
  }
}

/* 0x0803ACD8 (384B) | hardware_Sub_0803ACD8 (orig: func_0803ACD8) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
void hardware_Sub_0803ACD8(u32 *param_1,int *param_2) {
  int iVar1;
  int *piVar2;
  int iVar3;
  u32 *puVar4;
  u32 *puVar5;
  int iVar6;
  u16 uVar7;
  u32 *puVar8;
  u32 uVar9;
  u32 uVar10;
  u32 uVar11;
  u32 uStack_48;
  u32 uStack_44;
  u32 uStack_40;
  u32 uStack_3c;
  int iStack_38;
  int iStack_34;
  u32 *puStack_30;
  u32 *puStack_2c;
  u32 *puStack_28;
  u32 *puStack_24;
  uVar11 = 0;
  do {
    uVar9 = param_1[uVar11 * 0xb + 3];
    iVar1 = hardware_Sub_08007D4C(param_1 + uVar11 * 0xb + 9,param_1[uVar11 * 0xb + 10]);
    uVar7 = 0;
    if (param_1[uVar11 * 0xb + 3] != 0) {
      uVar7 = *(u16 *)(param_1 + uVar11 * 0xb + 4);
    }
    hardware_Sub_08008F0C(&uStack_48,uVar9,iVar1 * 0x20 + 0x06010000,uVar7);
    puVar4 = (u32 *)param_2[1];
    if (puVar4 == (u32 *)param_2[3]) {
      iStack_34 = 1;
      puVar5 = (u32 *)*param_2;
      iStack_38 = (int)puVar4 - (int)puVar5 >> 4;
      piVar2 = &iStack_38;
      if (iStack_38 == 0) {
        piVar2 = &iStack_34;
      }
      puStack_28 = puVar4;
      if (iStack_38 + *piVar2 == 0) {
        puVar4 = (u32 *)0x0;
        iVar1 = 0;
        puStack_30 = &uStack_48;
      }
      else {
        iVar1 = (iStack_38 + *piVar2) * 0x10;
        puStack_30 = &uStack_48;
        puVar4 = (u32 *)LibC_malloc(iVar1);
        if (puVar4 == (u32 *)0x0) {
          puVar4 = (u32 *)code_linkonce_Sub_080D3BC0(iVar1);
        }
        puVar5 = (u32 *)*param_2;
      }
      puStack_2c = param_1 + 0x23;
      puVar8 = puVar4;
      for (; puVar5 != puStack_28; puVar5 = puVar5 + 4) {
        if (puVar8 != (u32 *)0x0) {
          uVar9 = puVar5[1];
          uVar10 = puVar5[2];
          *puVar8 = *puVar5;
          puVar8[1] = uVar9;
          puVar8[2] = uVar10;
          puVar8[3] = puVar5[3];
        }
        puVar8 = puVar8 + 4;
      }
      iVar3 = iStack_34;
      if (iStack_34 == 1) {
        if (puVar8 != (u32 *)0x0) {
          uVar9 = puStack_30[1];
          uVar10 = puStack_30[2];
          *puVar8 = *puStack_30;
          puVar8[1] = uVar9;
          puVar8[2] = uVar10;
          puVar8[3] = puStack_30[3];
        }
        puVar8 = puVar8 + 4;
      }
      else {
        for (; iVar3 != 0; iVar3 = iVar3 + -1) {
          if (puVar8 != (u32 *)0x0) {
            uVar9 = puStack_30[1];
            uVar10 = puStack_30[2];
            *puVar8 = *puStack_30;
            puVar8[1] = uVar9;
            puVar8[2] = uVar10;
            puVar8[3] = puStack_30[3];
          }
          puVar8 = puVar8 + 4;
        }
      }
      iVar6 = *param_2;
      for (iVar3 = iVar6; iVar3 != param_2[1]; iVar3 = iVar3 + 0x10) {
      }
      puStack_24 = puVar4;
      if (iVar6 != 0) {
        LibC_free(iVar6);
      }
      *param_2 = (int)puStack_24;
      param_2[1] = (int)puVar8;
      param_2[3] = (int)puStack_24 + iVar1;
    }
    else {
      if (puVar4 != (u32 *)0x0) {
        *puVar4 = uStack_48;
        puVar4[1] = uStack_44;
        puVar4[2] = uStack_40;
        puVar4[3] = uStack_3c;
      }
      param_2[1] = param_2[1] + 0x10;
      puStack_2c = param_1 + 0x23;
      puStack_30 = &uStack_48;
    }
    uVar11 = uVar11 + 1;
  } while (uVar11 < 3);
  func_080D391C(*param_1,param_1[5],*(u8 *)puStack_2c,1);
}

/* 0x0803AE58 (72B) | hardware_Sub_0803AE58 (orig: func_0803AE58) | origin: wip | domain: hardware | MEDIUM / tu_interp */
void hardware_Sub_0803AE58(u32 *param_1,u32 param_2,u32 param_3,u32 param_4,
             int param_5) {
  func_080D391C(param_2,param_3,param_4,0xaa,0x8000,param_1 + param_5 * 0xb + 1,*param_1,
                  *(u16 *)(param_1 + param_5 * 0xb + 1 + 10),param_1 + 0x22);
}

/* 0x0803AEA0 (520B) | hardware_Sub_0803AEA0 (orig: func_0803AEA0) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
u32 hardware_Sub_0803AEA0(u32 *param_1,int *param_2,int *param_3,int param_4,u32 param_5) {
  u16 uVar1;
  u8 uVar2;
  u32 uVar3;
  u8 *puVar4;
  u32 uVar5;
  int iVar6;
  u32 *puVar7;
  u32 uVar8;
  u32 *puVar9;
  int iVar10;
  u32 uStack_88;
  u32 uStack_84;
  u32 uStack_80;
  u32 uStack_7c;
  u32 uStack_78;
  u32 uStack_74;
  u32 uStack_70;
  u32 uStack_6c;
  u32 uStack_68;
  u32 uStack_64;
  u32 uStack_60;
  u32 uStack_5c;
  u32 uStack_58;
  u32 uStack_54;
  u32 uStack_50;
  u32 uStack_4c;
  u32 uStack_48;
  u32 uStack_44;
  int iStack_40;
  u16 uStack_3c;
  int iStack_38;
  u32 uStack_34;
  u32 *puStack_30;
  u32 uStack_2c;
  u32 *puStack_28;
  u32 uStack_24;
  *param_1 = param_2;
  param_1[1] = 0;
  puVar9 = param_1 + 0x34;
  *puVar9 = 0;
  (*(u8 *)&iStack_38) = (u8)param_4;
  *(u8 *)(param_1 + 0x39) = (u8)iStack_38;
  *(u8 *)((int)param_1 + 0xe5) = 1;
  *(u8 *)((int)param_1 + 0xe6) = 0;
  param_1[0x3a] = 0;
  iStack_38 = param_4;
  func_080D3918(&iStack_40,param_3,0,*(u32 *)(*param_3 + 0xc));
  uStack_34 = 0;
  if (iStack_40 != 0) {
    uStack_34 = (u32)uStack_3c;
  }
  uStack_24 = 0;
  puStack_28 = puVar9;
  if (uStack_34 != 0) {
    puStack_30 = param_1 + 1;
    do {
      func_080D3918(&uStack_60,param_3,*(u16 *)(iStack_40 + uStack_24 * 4),
                      *(u32 *)(*param_3 + 0x10));
      uStack_88 = uStack_60;
      uStack_84 = uStack_5c;
      uStack_80 = uStack_58;
      uStack_7c = uStack_54;
      uStack_78 = uStack_50;
      uStack_74 = uStack_4c;
      uStack_70 = uStack_48;
      uStack_6c = uStack_44;
      hardware_Sub_08007874(&uStack_68,&uStack_68);
      uStack_64 = hardware_Sub_08007B54(&uStack_68,0);
      if ((u32)param_1[1] < 5) {
        puVar9 = puStack_30 + param_1[1] * 10 + 1;
        if (puVar9 != (u32 *)0x0) {
          *puVar9 = uStack_88;
          puVar9[1] = uStack_84;
          puVar9[2] = uStack_80;
          puVar9[3] = uStack_7c;
          puVar9[4] = uStack_78;
          puVar9[5] = uStack_74;
          puVar9[6] = uStack_70;
          puVar9[7] = uStack_6c;
          hardware_Sub_08007874(puVar9 + 8,puVar9 + 8);
          uVar3 = hardware_Sub_08007CD8(puVar9 + 8,uStack_64);
          puVar9[9] = uVar3;
        }
        param_1[1] = param_1[1] + 1;
      }
      hardware_Sub_08007C28(&uStack_68,uStack_64);
      hardware_Sub_080079E8(&uStack_68,2);
      uStack_24 = uStack_24 + 1;
    } while (uStack_24 < uStack_34);
  }
  if ((iStack_38 == 0) || (iStack_38 != 1)) {
    uVar8 = 0x10;
  }
  else {
    uVar8 = 0x11;
  }
  uVar2 = func_080D3914(param_2,uVar8,*(u32 *)(*param_2 + 0x48));
  if (*puStack_28 < 0x10) {
    puVar4 = (u8 *)((int)puStack_28 + *puStack_28 + 4);
    if (puVar4 != (u8 *)0x0) {
      *puVar4 = uVar2;
    }
    *puStack_28 = *puStack_28 + 1;
  }
  iVar10 = 0;
  uVar3 = 0;
  if (uStack_34 != 0) {
    do {
      iVar10 = iVar10 + (u32)*(u16 *)(iStack_40 + 2);
      iStack_40 = iStack_40 + 4;
      uVar3 = uVar3 + 1;
    } while (uVar3 < uStack_34);
  }
  uStack_2c = func_080D3910(param_2,*(u32 *)(*param_2 + 0x18));
  uVar8 = func_080D3910(param_2,*(u32 *)(*param_2 + 0x1c));
  uStack_24 = 0;
  if (param_5 != 0) {
    do {
      code_0803EE94_Sub_0805E824(&uStack_88,param_3,0,0x100);
      if (iVar10 == 0) {
        iVar6 = 0;
      }
      else {
        uVar5 = LibC_rand();
        iVar6 = LibGcc_umodsi3(uVar5,iVar10);
      }
      if (iVar6 != 0) {
        uVar1 = (u16)uStack_78;
        (*(u16 *)&uStack_78) = (short)(iVar6 << 8);
        code_0803EE94_Sub_0805E8F0(&uStack_88);
        uStack_78 = ((u16)(uVar1));
      }
      hardware_Sub_0803B454(&uStack_74,&uStack_88,uStack_2c,uVar8);
      puVar9 = param_1 + 0x3a;
      if (*puVar9 < 0x20) {
        puVar7 = puVar9 + *puVar9 * 7 + 1;
        if (puVar7 != (u32 *)0x0) {
          *puVar7 = uStack_74;
          puVar7[1] = uStack_70;
          puVar7[2] = uStack_6c;
          puVar7[3] = uStack_68;
          puVar7[4] = uStack_64;
          puVar7[5] = uStack_60;
          puVar7[6] = uStack_5c;
        }
        *puVar9 = *puVar9 + 1;
      }
      uStack_24 = uStack_24 + 1;
    } while (uStack_24 < param_5);
  }
  return (param_1);
}

/* 0x0803B0A8 (128B) | hardware_Sub_0803B0A8 (orig: func_0803B0A8) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
void hardware_Sub_0803B0A8(u8 *param_1, u32 param_2) {
    int * piVar1;
  s32 *puVar3;
  register u8 iVar2;
  func_080D3914((int *)*param_1,*(u8 *)(param_1 + 0x35),
                  *(s32 *)(*(char *)*param_1 + 0x4c));
  for (piVar1 = param_1 + 0x3b; piVar1 != param_1 + 0x3a + param_1[0x3a] * 7 + 1;
      piVar1 = 7 + piVar1) {
  }
  iVar2 = param_1[1];
  for (puVar3 = param_1 + 2; param_1 != puVar3 + iVar2 * 10 + 2; puVar3 = puVar3 + 10) {
    hardware_Sub_08007C28(puVar3 + 8,puVar3[9]);
    hardware_Sub_080079E8(puVar3 + 8,2);
  }
  if ((param_2 && 1) != (u32)0) {
    CppRuntime_builtin_delete(param_1);
  }
}

/* 0x0803B128 (384B) | hardware_Sub_0803B128 (orig: func_0803B128) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
void hardware_Sub_0803B128(u32 *param_1,int *param_2) {
  int iVar1;
  int *piVar2;
  u32 *puVar3;
  u32 *puVar4;
  int iVar5;
  u32 *puVar6;
  int iVar7;
  u32 uVar8;
  short sVar9;
  u32 uVar10;
  u32 uStack_48;
  u32 uStack_44;
  u32 uStack_40;
  u32 uStack_3c;
  int iStack_38;
  int iStack_34;
  u32 *puStack_30;
  u32 *puStack_2c;
  u32 *puStack_28;
  u32 *puStack_24;
  puStack_2c = param_1 + param_1[1] * 10 + 2;
  puVar6 = param_1 + 2;
  puStack_30 = param_1;
  if (param_1 + 2 != puStack_2c) {
    do {
      iVar7 = puVar6[2];
      sVar9 = 0;
      if (iVar7 != 0) {
        sVar9 = *(short *)(puVar6 + 3);
      }
      puStack_28 = puVar6 + 10;
      if (sVar9 != 0) {
        iVar1 = hardware_Sub_08007D4C(puVar6 + 8,puVar6[9]);
        hardware_Sub_08008F0C(&uStack_48,iVar7,iVar1 * 0x20 + 0x06010000,sVar9);
        puVar3 = (u32 *)param_2[1];
        if (puVar3 == (u32 *)param_2[3]) {
          iStack_34 = 1;
          puVar4 = (u32 *)*param_2;
          iStack_38 = (int)puVar3 - (int)puVar4 >> 4;
          piVar2 = &iStack_38;
          if (iStack_38 == 0) {
            piVar2 = &iStack_34;
          }
          puStack_24 = puVar3;
          if (iStack_38 + *piVar2 == 0) {
            puVar3 = (u32 *)0x0;
            iVar7 = 0;
          }
          else {
            iVar7 = (iStack_38 + *piVar2) * 0x10;
            puVar3 = (u32 *)LibC_malloc(iVar7);
            if (puVar3 == (u32 *)0x0) {
              puVar3 = (u32 *)code_linkonce_Sub_080D3BC0(iVar7);
            }
            puVar4 = (u32 *)*param_2;
          }
          puStack_28 = puVar6 + 10;
          puVar6 = puVar3;
          for (; puVar4 != puStack_24; puVar4 = puVar4 + 4) {
            if (puVar6 != (u32 *)0x0) {
              uVar8 = puVar4[1];
              uVar10 = puVar4[2];
              *puVar6 = *puVar4;
              puVar6[1] = uVar8;
              puVar6[2] = uVar10;
              puVar6[3] = puVar4[3];
            }
            puVar6 = puVar6 + 4;
          }
          iVar1 = iStack_34;
          if (iStack_34 == 1) {
            if (puVar6 != (u32 *)0x0) {
              *puVar6 = uStack_48;
              puVar6[1] = uStack_44;
              puVar6[2] = uStack_40;
              puVar6[3] = uStack_3c;
            }
            puVar6 = puVar6 + 4;
          }
          else {
            for (; iVar1 != 0; iVar1 = iVar1 + -1) {
              if (puVar6 != (u32 *)0x0) {
                *puVar6 = uStack_48;
                puVar6[1] = uStack_44;
                puVar6[2] = uStack_40;
                puVar6[3] = uStack_3c;
              }
              puVar6 = puVar6 + 4;
            }
          }
          iVar5 = *param_2;
          for (iVar1 = iVar5; iVar1 != param_2[1]; iVar1 = iVar1 + 0x10) {
          }
          if (iVar5 != 0) {
            LibC_free(iVar5);
          }
          *param_2 = (int)puVar3;
          param_2[1] = (int)puVar6;
          param_2[3] = iVar7 + (int)puVar3;
        }
        else {
          if (puVar3 != (u32 *)0x0) {
            *puVar3 = uStack_48;
            puVar3[1] = uStack_44;
            puVar3[2] = uStack_40;
            puVar3[3] = uStack_3c;
          }
          param_2[1] = param_2[1] + 0x10;
        }
      }
      puVar6 = puStack_28;
    } while (puStack_28 != puStack_2c);
  }
  func_080D391C(*puStack_30,puStack_30[6],*(u8 *)(puStack_30 + 0x35),1);
}

/* 0x0803B368 (236B) | hardware_Sub_0803B368 (orig: func_0803B368) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
void hardware_Sub_0803B368(u32 *param_1,u32 param_2) {
  short sVar1;
  short sVar2;
  char cVar3;
  u32 uVar4;
  int iVar5;
  int iVar6;
  u32 uVar7;
  u32 *puVar8;
  int *piVar9;
  u32 uVar10;
  uVar4 = param_1[0x3a];
  cVar3 = *(char *)((int)param_1 + 0xe6);
  if ((cVar3 == '\0') || (cVar3 != '\x01')) {
    cVar3 = '\x01';
    uVar10 = 0;
    uVar4 = uVar4 >> 1;
  }
  else {
    cVar3 = '\0';
    uVar10 = uVar4 >> 1;
  }
  *(char *)((int)param_1 + 0xe6) = cVar3;
  iVar5 = func_080D3910((int *)*param_1,*(u32 *)(*(int *)*param_1 + 0x18));
  iVar6 = func_080D3910((int *)*param_1,*(u32 *)(*(int *)*param_1 + 0x1c));
  if (uVar10 < uVar4) {
    piVar9 = param_1 + uVar10 * 7 + 0x3c;
    do {
      sVar1 = *(short *)((int)piVar9 + 0x12);
      sVar2 = *(short *)((int)piVar9 + 0x16);
      puVar8 = param_1 + (u32)*(u16 *)(*piVar9 + (u32)*(u16 *)(piVar9 + 2) * 4) * 10 + 2;
      uVar7 = hardware_Sub_08007D4C(puVar8 + 8,puVar8[9]);
      func_080D391C(param_2,((sVar1 - iVar5) + 8U & 0xff) - 8,((sVar2 - iVar6) + 8U & 0xff) - 8,
                      0x55,0,puVar8,*param_1,uVar7,param_1 + 0x34);
      piVar9 = piVar9 + 7;
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar4);
  }
}

/* 0x0803B454 (32B) | hardware_Sub_0803B454 (orig: func_0803B454) | origin: pure | domain: hardware | MEDIUM / graph_algebra */
struct S { u32 w[5]; }; void code_0803A8A4_Sub_0803B474(struct S *, u32, u32); struct S *hardware_Sub_0803B454(struct S *a, struct S *b, u32 c, u32 d) { *a = *b; code_0803A8A4_Sub_0803B474(a, c, d); return a; }

/* 0x0803BCF8 (104B) | hardware_Sub_0803BCF8 (orig: func_0803BCF8) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
void hardware_Sub_0803BCF8(int param_1) {
  if ((*(u8 *)(param_1 + 0xc) & 0x7f) == 0 && -1 < *(char *)(param_1 + 0xb)) {
    if ((*(u16 *)(param_1 + 10) & 0x7fff) >> 7 != 1) {
      hardware_vfunc_10_9940(param_1 + 0x10,param_1 + 0x2c);
    }
    hardware_vfunc_10_9940(param_1 + 0x10,param_1 + 0x44);
    *(u8 *)(param_1 + 0xd) = 0;
  }
  if ((u8)(*(char *)(param_1 + 0xc) << 1 | *(u8 *)(param_1 + 0xb) >> 7) < 3) {
    *(u8 *)(param_1 + 0xb) = *(u8 *)(param_1 + 0xb) | 0x80;
    *(u8 *)(param_1 + 0xc) = *(u8 *)(param_1 + 0xc) & 0x80;
  }
}

/* 0x0803BD60 (40B) | hardware_Sub_0803BD60 (orig: func_0803BD60) | origin: pure | domain: hardware | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 hardware_Sub_0803BCF8();
/* paridad 94.8% preset agbcc_O2 */
void hardware_Sub_0803BD60(int arg0) {
  hardware_Sub_0803BCF8();
  *(u8 *)(arg0 + 0xb) = *(u8 *)(arg0 + 0xb) | 0x80;
  *(u8 *)(arg0 + 0xc) = (s8)*(u8 *)(arg0 + 0xc) & 0x80 | 1;
  *(u8 *)(arg0 + 0xd) = 9;
}

/* 0x08051D70 (1052B) | hardware_Sub_08051D70 (orig: func_08051D70) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
void hardware_Sub_08051D70(int param_1) {
  short sVar1;
  u16 uVar2;
  int *piVar3;
  int iVar4;
  u32 uVar5;
  int *piVar6;
  u32 uVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  u32 uStack_94;
  u32 uStack_90;
  u32 uStack_8c;
  u32 uStack_88;
  u32 uStack_84;
  u32 uStack_80;
  u32 uStack_7c;
  int iStack_78;
  u32 uStack_74;
  int iStack_70;
  u32 uStack_6c;
  u32 uStack_68;
  u32 uStack_64;
  u32 uStack_60;
  u32 uStack_5c;
  int iStack_58;
  u32 uStack_54;
  int iStack_50;
  u32 uStack_4c;
  u32 uStack_48;
  u32 uStack_44;
  u32 uStack_40;
  u32 uStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int *piStack_28;
  int *piStack_24;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_8c = uStack_8c & 0xffff0000;
  uStack_88 = 0;
  uStack_84 = uStack_84 & 0xffff0000;
  uStack_80 = 0;
  uStack_7c = uStack_7c & 0xffffff00;
  iStack_78 = 0;
  uStack_74 = uStack_74 & 0xffff0000;
  iStack_70 = 0;
  uStack_6c = uStack_6c & 0xffff0000;
  uStack_68 = 0;
  uStack_64 = uStack_64 & 0xffff0000;
  uStack_60 = 0;
  uStack_5c = uStack_5c & 0xffff0000;
  if (0 < *(short *)(param_1 + 0x000008B8)) {
    code_0803EE94_Sub_0805E8F0(param_1 + 0x40);
    func_080D3918(&iStack_58,*(int **)(param_1 + 0x40),
                    *(u16 *)
                     (*(int *)(param_1 + 0x44) + (u32)*(u16 *)(param_1 + 0x4c) * 4),
                    *(u32 *)(**(int **)(param_1 + 0x40) + 0x10));
    LibC_memcpy(&iStack_58,&iStack_58,0x20);
    iStack_78 = iStack_58;
    uStack_74 = uStack_54;
    iStack_70 = iStack_50;
    uStack_6c = uStack_4c;
    uStack_68 = uStack_48;
    uStack_64 = uStack_44;
    uStack_60 = uStack_40;
    uStack_5c = uStack_3c;
    uStack_90 = *(u32 *)(param_1 + 0x58);
    uStack_8c = *(u32 *)(param_1 + 0x5c);
    uStack_88 = *(u32 *)(param_1 + 0x60);
    uStack_84 = *(u32 *)(param_1 + 100);
    uStack_80 = *(u32 *)(param_1 + 0x68);
    uStack_7c = *(u32 *)(param_1 + 0x6c);
    uStack_94 = 0x1a00e8;
    uVar2 = hardware_Sub_08007D4C(param_1 + 0xa8,*(u32 *)(param_1 + 0xac));
    (*(u16 *)((u8 *)&uStack_90 + 2)) = uVar2;
    uVar2 = hardware_Sub_080074C0(param_1 + 0xb0,*(u32 *)(param_1 + 0xb4));
    uStack_90 = ((u16)(uVar2));
    uStack_8c = ((u16)(1));
    uStack_7c = (1);
    piVar3 = (int *)hardware_GetField_0x00_8910(param_1);
    iVar8 = iStack_70;
    iVar4 = hardware_Sub_08007D4C(param_1 + 0xa8,*(u32 *)(param_1 + 0xac));
    uVar7 = 0;
    if (iStack_70 != 0) {
      uVar7 = uStack_6c & 0xffff;
    }
    piStack_28 = piVar3;
    hardware_Sub_08008F0C(&iStack_58,iVar8,iVar4 * 0x20 + 0x06010000,uVar7);
    piVar6 = (int *)piVar3[1];
    if (piVar6 == (int *)piVar3[3]) {
      iStack_34 = 1;
      iStack_38 = (int)piVar6 - *piStack_28 >> 4;
      piVar3 = &iStack_38;
      if (iStack_38 == 0) {
        piVar3 = &iStack_34;
      }
      piStack_24 = piVar6;
      if (iStack_38 + *piVar3 == 0) {
        piVar3 = (int *)0x0;
        iVar8 = 0;
      }
      else {
        iVar8 = (iStack_38 + *piVar3) * 0x10;
        piVar3 = (int *)LibC_malloc(iVar8);
        if (piVar3 == (int *)0x0) {
          piVar3 = (int *)code_linkonce_Sub_080D3BC0(iVar8);
        }
      }
      piVar9 = piVar3;
      for (piVar6 = (int *)*piStack_28; piVar6 != piStack_24; piVar6 = piVar6 + 4) {
        if (piVar9 != (int *)0x0) {
          iVar4 = piVar6[1];
          iVar10 = piVar6[2];
          *piVar9 = *piVar6;
          piVar9[1] = iVar4;
          piVar9[2] = iVar10;
          piVar9[3] = piVar6[3];
        }
        piVar9 = piVar9 + 4;
      }
      iVar4 = iStack_34;
      if (iStack_34 == 1) {
        if (piVar9 != (int *)0x0) {
          *piVar9 = iStack_58;
          piVar9[1] = uStack_54;
          piVar9[2] = iStack_50;
          piVar9[3] = uStack_4c;
        }
        piVar9 = piVar9 + 4;
      }
      else {
        for (; iVar4 != 0; iVar4 = iVar4 + -1) {
          if (piVar9 != (int *)0x0) {
            *piVar9 = iStack_58;
            piVar9[1] = uStack_54;
            piVar9[2] = iStack_50;
            piVar9[3] = uStack_4c;
          }
          piVar9 = piVar9 + 4;
        }
      }
      for (iVar4 = *piStack_28; iVar4 != piStack_28[1]; iVar4 = iVar4 + 0x10) {
      }
      if (*piStack_28 != 0) {
        LibC_free();
      }
      *piStack_28 = (int)piVar3;
      piStack_28[1] = (int)piVar9;
      piStack_28[3] = iVar8 + (int)piVar3;
    }
    else {
      if (piVar6 != (int *)0x0) {
        *piVar6 = iStack_58;
        piVar6[1] = uStack_54;
        piVar6[2] = iStack_50;
        piVar6[3] = uStack_4c;
      }
      piStack_28[1] = piStack_28[1] + 0x10;
    }
    uVar5 = hardware_GetField_0x00_8920(param_1);
    uVar7 = 0;
    if (iStack_78 != 0) {
      uVar7 = uStack_74 & 0xffff;
    }
    code_0803EE94_Sub_0805E99C(uVar5,iStack_78,uVar7,&uStack_94);
  }
  if (*(short *)(param_1 + 0x000008B8) < 0x20) {
    code_0803EE94_Sub_0805E8F0(param_1 + 0x74);
    func_080D3918(&iStack_58,*(int **)(param_1 + 0x74),
                    *(u16 *)
                     (*(int *)(param_1 + 0x78) + (u32)*(u16 *)(param_1 + 0x80) * 4),
                    *(u32 *)(**(int **)(param_1 + 0x74) + 0x10));
    LibC_memcpy(&iStack_58,&iStack_58,0x20);
    iStack_78 = iStack_58;
    uStack_74 = uStack_54;
    iStack_70 = iStack_50;
    uStack_6c = uStack_4c;
    uStack_68 = uStack_48;
    uStack_64 = uStack_44;
    uStack_60 = uStack_40;
    uStack_5c = uStack_3c;
    uStack_90 = *(u32 *)(param_1 + 0x8c);
    uStack_8c = *(u32 *)(param_1 + 0x90);
    uStack_88 = *(u32 *)(param_1 + 0x94);
    uStack_84 = *(u32 *)(param_1 + 0x98);
    uStack_80 = *(u32 *)(param_1 + 0x9c);
    uStack_7c = *(u32 *)(param_1 + 0xa0);
    uStack_94 = 0x9800e8;
    sVar1 = hardware_Sub_08007D4C(param_1 + 0xa8,*(u32 *)(param_1 + 0xac));
    (*(u16 *)((u8 *)&uStack_90 + 2)) = sVar1 + 4;
    uVar2 = hardware_Sub_080074C0(param_1 + 0xb0,*(u32 *)(param_1 + 0xb4));
    uStack_90 = ((u16)(uVar2));
    uStack_8c = ((u16)(1));
    uStack_7c = (1);
    piVar3 = (int *)hardware_GetField_0x00_8910(param_1);
    iVar8 = iStack_70;
    iVar4 = hardware_Sub_08007D4C(param_1 + 0xa8,*(u32 *)(param_1 + 0xac));
    uVar7 = 0;
    if (iStack_70 != 0) {
      uVar7 = uStack_6c & 0xffff;
    }
    piStack_28 = piVar3;
    hardware_Sub_08008F0C(&iStack_58,iVar8,iVar4 * 0x20 + 0x06010080,uVar7);
    piVar3 = (int *)piStack_28[1];
    if (piVar3 == (int *)piStack_28[3]) {
      iStack_2c = 1;
      iStack_30 = (int)piVar3 - *piStack_28 >> 4;
      piVar6 = &iStack_30;
      if (iStack_30 == 0) {
        piVar6 = &iStack_2c;
      }
      piStack_24 = piVar3;
      if (iStack_30 + *piVar6 == 0) {
        piVar3 = (int *)0x0;
        iVar8 = 0;
      }
      else {
        iVar8 = (iStack_30 + *piVar6) * 0x10;
        piVar3 = (int *)LibC_malloc(iVar8);
        if (piVar3 == (int *)0x0) {
          piVar3 = (int *)code_linkonce_Sub_080D3BC0(iVar8);
        }
      }
      piVar9 = piVar3;
      for (piVar6 = (int *)*piStack_28; piVar6 != piStack_24; piVar6 = piVar6 + 4) {
        if (piVar9 != (int *)0x0) {
          iVar4 = piVar6[1];
          iVar10 = piVar6[2];
          *piVar9 = *piVar6;
          piVar9[1] = iVar4;
          piVar9[2] = iVar10;
          piVar9[3] = piVar6[3];
        }
        piVar9 = piVar9 + 4;
      }
      iVar4 = iStack_2c;
      if (iStack_2c == 1) {
        if (piVar9 != (int *)0x0) {
          *piVar9 = iStack_58;
          piVar9[1] = uStack_54;
          piVar9[2] = iStack_50;
          piVar9[3] = uStack_4c;
        }
        piVar9 = piVar9 + 4;
      }
      else {
        for (; iVar4 != 0; iVar4 = iVar4 + -1) {
          if (piVar9 != (int *)0x0) {
            *piVar9 = iStack_58;
            piVar9[1] = uStack_54;
            piVar9[2] = iStack_50;
            piVar9[3] = uStack_4c;
          }
          piVar9 = piVar9 + 4;
        }
      }
      for (iVar4 = *piStack_28; iVar4 != piStack_28[1]; iVar4 = iVar4 + 0x10) {
      }
      if (*piStack_28 != 0) {
        LibC_free();
      }
      *piStack_28 = (int)piVar3;
      piStack_28[1] = (int)piVar9;
      piStack_28[3] = iVar8 + (int)piVar3;
    }
    else {
      if (piVar3 != (int *)0x0) {
        *piVar3 = iStack_58;
        piVar3[1] = uStack_54;
        piVar3[2] = iStack_50;
        piVar3[3] = uStack_4c;
      }
      piStack_28[1] = piStack_28[1] + 0x10;
    }
    uVar5 = hardware_GetField_0x00_8920(param_1);
    uVar7 = 0;
    if (iStack_78 != 0) {
      uVar7 = uStack_74 & 0xffff;
    }
    code_0803EE94_Sub_0805E99C(uVar5,iStack_78,uVar7,&uStack_94);
  }
}

/* 0x08054F40 (364B) | hardware_Sub_08054F40 (orig: func_08054F40) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
void hardware_Sub_08054F40(int param_1) {
  u32 uVar1;
  u32 uVar2;
  u16 *puVar3;
  u16 iVar4;
  hardware_HW_DMA3SAD_8EB8(0,0x06007FE0,0x20);
  uVar1 = 0x0600E000;
  hardware_HW_DMA3SAD_8EB8(0xffffffff,0x0600E000,0x800);
  uVar2 = 0x0600E800;
  hardware_HW_DMA3SAD_8EB8(0xffffffff,0x0600E800,0x800);
  hardware_HW_DMA3SAD_8EB8(0xffffffff,0x0600F000,0x800);
  iVar4 = param_1 + 0x00001D5A;
  System_UnpackData(0x08738AD8,iVar4);
  hardware_HW_DMA3SAD(iVar4,uVar1,0x500);
  hardware_HW_DMA3SAD(iVar4,uVar2,0xc0);
  System_UnpackData(0x08738CC8,iVar4);
  System_UnpackData(0x08738CF0,iVar4);
  System_UnpackData(0x08738D1C,0x6000000);
  hardware_HW_DMA3SAD(0x087399C4,0x5000000,0x200);
  System_UnpackData(0x08739A64,param_1 + 0x558);
  puVar3 = (u16 *)hardware_GetField_0x00_8918(param_1);
  *puVar3 = 0x1e40;
  iVar4 = hardware_GetField_0x00_8918(param_1);
  *(short *)(iVar4 + 0xe) = (short)0x00001C43;
  iVar4 = hardware_GetField_0x00_8918(param_1);
  *(short *)(iVar4 + 0xc) = (short)0x00001D42;
  iVar4 = hardware_GetField_0x00_8918(param_1);
  *(short *)(iVar4 + 10) = (short)0x00001E41;
  iVar4 = hardware_GetField_0x00_8918(param_1);
  *(u32 *)(iVar4 + 0x14) = 0;
  iVar4 = hardware_GetField_0x00_8918(param_1);
  *(u16 *)(iVar4 + 0x16) = 0;
  iVar4 = hardware_GetField_0x00_8918(param_1);
  *(u16 *)(iVar4 + 0x18) = 0;
  iVar4 = hardware_GetField_0x00_8918(param_1);
  *(u16 *)(iVar4 + 0x1a) = 0;
  iVar4 = hardware_GetField_0x00_8918(param_1);
  *(u16 *)(iVar4 + 0x1c) = 0;
  iVar4 = hardware_GetField_0x00_8918(param_1);
  *(u32 *)(iVar4 + 0x1e) = 0;
}

/* 0x080579B4 (464B) | hardware_Sub_080579B4 (orig: func_080579B4) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
void hardware_Sub_080579B4(u32 param_1, u16 *param_2, int param_3, short *param_4, int param_5) {
  u16 uVar3;
  int bVar2;
  u32 uVar5;
  short sVar4;
  u8 bVar1;
  u32 uVar6;
  u8 *pbVar7;
  s8 uVar8;
  s8 uVar9;
  u32 *puVar10;
  u32 uVar11;
  u16 iVar12;
  u32 uVar13;
  int iVar14;
  u32 uStack_30;
  u16 uStack_2c;
  puVar10 = param_2 + param_3 * 2;
  for (; param_2 != puVar10; param_2 = param_2 + 2) {
    uStack_30 = *param_2;
    uVar8 = param_2[1];
    iVar12 = (int)(uStack_30 << 7) >> 0x17;
    iVar14 = (int)(char)uStack_30;
    uVar5 = (u16)(uStack_30 & 0xffff) >> 0xe;
    uVar9 = (s16)uStack_30 >> 0x1e;
    if (uVar5 == 0) {
      uVar13 = 8 << uVar9;
      uVar6 = 8 << uVar9;
    }
    else {
      uVar11 = 8 << (uVar9 + 1 >> 1) + 1;
      uVar6 = 8;
      if (uVar9 != 1) {
        uVar6 = uVar11 >> 1;
      }
      uVar13 = uVar11;
      if (uVar5 != 1) {
        uVar13 = uVar6;
        uVar6 = uVar11;
      }
    }
    if ((*(u8 *)(param_4 + 8) & 1) != 0) {
      iVar12 = -(iVar12 + uVar13);
      uStack_30 = 0xEFFFFFFF & uStack_30 | ((uStack_30 & 0x1fffffff) >> 0x1c ^ 1) << 0x1c;
    }
    if ((*(u8 *)(param_4 + 8) & 2) != 0) {
      iVar14 = -(iVar14 + uVar6);
      uStack_30 = (u8)0xDFFFFFFF & uStack_30 | ((uStack_30 & 0x3fffffff) >> 0x1d ^ 1) << 0x1d;
    }
    uVar5 = iVar12 + *param_4;
    uVar9 = iVar14 + param_4[1];
    if ((((0 < (int)(uVar5 + uVar13)) && ((int)uVar5 < 0xf0)) && (0 < (int)(uVar9 + uVar6))) &&
       ((int)uVar9 < 0xa0)) {
      uVar5 = (uStack_30 & 0xFE00FFFF | (uVar5 & 0x000001FF) << 0x10) & 0xFFFFFF00;
      iVar12 = ((uVar8 & 0xffff) >> 0xc) * 8 + param_5;
      sVar4 = hardware_Sub_080074C0(iVar12 + 8,*(u32 *)(iVar12 + 0xc));
      uVar3 = (u16)uVar8 & (u16)0xFFFF0FFF;
      uStack_2c = ((u16)0xFFFFFC00 & (uVar3 | sVar4 << 0xc) |
                  (uVar3 & 0x3ff) + param_4[3] & 0x3ff) & (u16)0xFFFFF3FF |
                  (param_4[4] & 3U) << 10;
      bVar1 = *(u8 *)(param_4 + 0xc);
      uVar5 = (((uVar5 | uVar9 & 0xff) & 0xFFFFF3FF | (*(u32 *)(param_4 + 6) & 3) << 10) &
               0xFFFFFCFF | (*(u32 *)(param_4 + 10) & 3) << 8) & 0xFFFFEFFF;
      pbVar7 = (u8 *)hardware_GetField_0x00_8920(param_1);
      bVar2 = *pbVar7;
      if (bVar2 < 0x80) {
        *(u16 *)((int)(pbVar7 + (u32)bVar2 * 8 + 4) + 4) = uStack_2c;
        *(u32 *)(pbVar7 + (u32)bVar2 * 8 + 4) = uVar5 | (bVar1 & 1) << 0xc;
        *pbVar7 = bVar2 + 1;
      }
    }
  }
}

/* 0x0805AB08 (524B) | hardware_Sub_0805AB08 (orig: func_0805AB08) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
void hardware_Sub_0805AB08(int param_1) {
  int iVar1;
  u16 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  hardware_HW_DMA3SAD_8EB8(0,0x06007FE0,0x20);
  hardware_HW_DMA3SAD_8EB8(0xffffffff,0x0600C800,0x1000);
  hardware_HW_DMA3SAD_8EB8(0xffffffff,0x0600D800,0x1000);
  hardware_HW_DMA3SAD_8EB8(0xffffffff,0x0600E800,0x1000);
  System_UnpackData(0x0872F11C,param_1 + 0x00000BEA);
  System_UnpackData(0x0872F1BC,param_1 + 0x00000CEA);
  System_UnpackData(0x0872F1EC,param_1 + 0x00000DEA);
  System_UnpackData(0x0872FBFC,param_1 + 0x00000EEA);
  System_UnpackData(0x0872F21C,0x6000000);
  hardware_HW_DMA3SAD(0x0872FA9C,0x5000000,0x200);
  puVar2 = (u16 *)hardware_GetField_0x00_8918(param_1);
  *puVar2 = 0x1e40;
  iVar3 = hardware_GetField_0x00_8918(param_1);
  *(short *)(iVar3 + 0xe) = (short)0x00005943;
  iVar3 = hardware_GetField_0x00_8918(param_1);
  *(short *)(iVar3 + 0xc) = (short)0x00005B42;
  iVar3 = hardware_GetField_0x00_8918(param_1);
  *(short *)(iVar3 + 10) = (short)0x00005D41;
  iVar3 = 0;
  do {
    iVar12 = 0;
    iVar5 = iVar3 * 0x40;
    iVar7 = iVar3 + 1;
    iVar3 = iVar3 * 0xc;
    iVar4 = iVar3 + 0x00000EEA;
    iVar6 = iVar3 + 0x00000DEA;
    iVar11 = 0x0600E800 + iVar5;
    iVar10 = 0x0600D800 + iVar5;
    iVar9 = 0x0600C800 + iVar5;
    iVar8 = iVar3 + 0x00000BEA;
    iVar3 = 0x00000CEA + iVar3;
    do {
      hardware_HW_DMA3SAD(param_1 + iVar8,iVar9,0xc);
      if (iVar12 == 0x12) {
        hardware_HW_DMA3SAD(param_1 + iVar4,0x0600D824 + iVar5,0xc);
      }
      else {
        hardware_HW_DMA3SAD(param_1 + iVar3,iVar10,0xc);
      }
      hardware_HW_DMA3SAD(param_1 + iVar6,iVar11,0xc);
      iVar1 = 0x000013EA;
      iVar11 = iVar11 + 0xc;
      iVar10 = iVar10 + 0xc;
      iVar9 = iVar9 + 0xc;
      iVar12 = iVar12 + 6;
    } while (iVar12 < 0x1e);
    iVar3 = iVar7;
  } while (iVar7 < 0x20);
  *(u16 *)(param_1 + 0x000013EA) = 0x600;
  iVar3 = 0x000013EC;
  *(u16 *)(param_1 + 0x000013EC) = 0x600;
  *(u16 *)(param_1 + iVar1 + 4) = 0x600;
  *(u16 *)(param_1 + iVar3 + 4) = 0;
  iVar4 = 0x000013F2;
  *(u16 *)(param_1 + 0x000013F2) = 0;
  *(u16 *)(param_1 + iVar1 + 10) = 0;
  *(u16 *)(param_1 + iVar3 + 10) = 0;
  *(u16 *)(param_1 + iVar4 + 6) = 0;
  *(u16 *)(param_1 + iVar1 + 0x10) = 0;
  iVar3 = hardware_GetField_0x00_8918(param_1);
  *(u16 *)(iVar3 + 0x16) = 0;
  iVar3 = hardware_GetField_0x00_8918(param_1);
  *(u16 *)(iVar3 + 0x1a) = 0;
  iVar3 = hardware_GetField_0x00_8918(param_1);
  *(u16 *)(iVar3 + 0x1e) = 0;
}

/* 0x0805AD14 (1656B) | hardware_Sub_0805AD14 (orig: func_0805AD14) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
void hardware_Sub_0805AD14(int param_1) {
  u16 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  u32 uVar5;
  u32 *puVar6;
  u16 *puVar7;
  u32 *puVar8;
  u16 *puVar9;
  u32 uVar10;
  u32 *puVar11;
  int iVar12;
  u32 uVar13;
  u32 uVar14;
  u32 uStack_88;
  u32 uStack_84;
  u32 uStack_80;
  u32 uStack_7c;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  u32 *puStack_4c;
  int iStack_48;
  u32 *puStack_44;
  int iStack_40;
  u32 *puStack_3c;
  int iStack_38;
  int iStack_34;
  u32 *puStack_30;
  int iStack_2c;
  u32 *puStack_28;
  int iStack_24;
  iVar2 = hardware_GetField_0x00_8918();
  (*(u16 *)&uStack_88) = *(u16 *)(0x000013EA + param_1);
  *(u16 *)(iVar2 + 0x14) = (u16)uStack_88;
  iVar2 = hardware_GetField_0x00_8918(param_1);
  (*(u16 *)&uStack_88) = *(u16 *)(0x000013EC + param_1);
  *(u16 *)(iVar2 + 0x18) = (u16)uStack_88;
  iVar2 = hardware_GetField_0x00_8918(param_1);
  puVar9 = (u16 *)(0x000013EE + param_1);
  uVar1 = *puVar9;
  uStack_88 = ((u16)(uVar1));
  *(u16 *)(iVar2 + 0x1c) = uVar1;
  puVar7 = (u16 *)(0x000013F4 + param_1);
  uVar5 = 0x0000FFF0 & *puVar9;
  if (*puVar7 != uVar5) {
    *puVar7 = (u16)uVar5;
    puVar9 = (u16 *)(0x000013FA + param_1);
    uVar1 = *puVar9;
    *puVar9 = (u16)(uVar1 - 1);
    if ((int)((uVar1 - 1) * 0x10000) < 0) {
      *puVar9 = 2;
    }
    uVar5 = *puVar7 - 0x10 & 0x1f0;
    iStack_50 = ((int)uVar5 >> 8) << 0xb;
    puStack_4c = &uStack_84;
    iStack_54 = ((int)uVar5 >> 3 & 0x1fU) << 1;
    iVar2 = 0;
    do {
      piVar4 = (int *)hardware_GetField_0x00_8910(param_1);
      hardware_Sub_08008F0C(&uStack_84,
                    (iVar2 * 3 + (int)*(short *)(0x000013FA + param_1)) * 4 + param_1 +
                    0x00000BEA,iStack_54 + iStack_50 + iVar2 * 0x40 + 0x0600C800,4);
      puVar6 = (u32 *)piVar4[1];
      if (puVar6 == (u32 *)piVar4[3]) {
        iStack_70 = 1;
        iStack_74 = (int)puVar6 - *piVar4 >> 4;
        piVar3 = &iStack_74;
        if (iStack_74 == 0) {
          piVar3 = &iStack_70;
        }
        puStack_28 = puVar6;
        if (iStack_74 + *piVar3 == 0) {
          puVar6 = (u32 *)0x0;
          iVar12 = 0;
        }
        else {
          iVar12 = (iStack_74 + *piVar3) * 0x10;
          puVar6 = (u32 *)LibC_malloc(iVar12);
          if (puVar6 == (u32 *)0x0) {
            puVar6 = (u32 *)code_linkonce_Sub_080D3BC0(iVar12);
          }
        }
        iStack_24 = iVar2 + 1;
        puVar11 = puVar6;
        for (puVar8 = (u32 *)*piVar4; puVar8 != puStack_28; puVar8 = puVar8 + 4) {
          if (puVar11 != (u32 *)0x0) {
            uVar13 = puVar8[1];
            uVar14 = puVar8[2];
            *puVar11 = *puVar8;
            puVar11[1] = uVar13;
            puVar11[2] = uVar14;
            puVar11[3] = puVar8[3];
          }
          puVar11 = puVar11 + 4;
        }
        iVar2 = iStack_70;
        if (iStack_70 == 1) {
          if (puVar11 != (u32 *)0x0) {
            uVar13 = puStack_4c[1];
            uVar14 = puStack_4c[2];
            *puVar11 = *puStack_4c;
            puVar11[1] = uVar13;
            puVar11[2] = uVar14;
            puVar11[3] = puStack_4c[3];
          }
          puVar11 = puVar11 + 4;
        }
        else {
          for (; iVar2 != 0; iVar2 = iVar2 + -1) {
            if (puVar11 != (u32 *)0x0) {
              uVar13 = puStack_4c[1];
              uVar14 = puStack_4c[2];
              *puVar11 = *puStack_4c;
              puVar11[1] = uVar13;
              puVar11[2] = uVar14;
              puVar11[3] = puStack_4c[3];
            }
            puVar11 = puVar11 + 4;
          }
        }
        for (iVar2 = *piVar4; iVar2 != piVar4[1]; iVar2 = iVar2 + 0x10) {
        }
        if (*piVar4 != 0) {
          LibC_free();
        }
        *piVar4 = (int)puVar6;
        piVar4[1] = (int)puVar11;
        piVar4[3] = iVar12 + (int)puVar6;
      }
      else {
        if (puVar6 != (u32 *)0x0) {
          uVar13 = puStack_4c[1];
          uVar14 = puStack_4c[2];
          *puVar6 = *puStack_4c;
          puVar6[1] = uVar13;
          puVar6[2] = uVar14;
          puVar6[3] = puStack_4c[3];
        }
        piVar4[1] = piVar4[1] + 0x10;
        iStack_24 = iVar2 + 1;
      }
      iVar2 = iStack_24;
    } while (iStack_24 < 0x14);
  }
  puVar7 = (u16 *)(0x000013F2 + param_1);
  uVar5 = 0x0000FFF0 & *(u16 *)(0x000013EC + param_1);
  if (*puVar7 != uVar5) {
    *puVar7 = (u16)uVar5;
    puVar9 = (u16 *)(0x000013F8 + param_1);
    uVar1 = *puVar9;
    *puVar9 = (u16)(uVar1 - 1);
    if ((int)((uVar1 - 1) * 0x10000) < 0) {
      *puVar9 = 2;
    }
    uVar10 = *puVar7 - 0x10 & 0x1f0;
    uVar5 = (int)uVar10 >> 3;
    iStack_2c = (int)uVar10 >> 8;
    if ((*puVar7 - 0x90 & 0xffff) < 0x30) {
      iStack_48 = (uVar5 & 0x1f) << 1;
      iVar2 = 3;
      puStack_44 = &uStack_88;
      do {
        piVar4 = (int *)hardware_GetField_0x00_8910(param_1);
        hardware_Sub_08008F0C(&uStack_88,
                      (iVar2 * 3 + (int)*(short *)(0x000013F8 + param_1)) * 4 + param_1 +
                      0x00000EEA,iStack_48 + iStack_2c * 0x800 + iVar2 * 0x40 + 0x0600D800,4);
        puVar6 = (u32 *)piVar4[1];
        if (puVar6 == (u32 *)piVar4[3]) {
          iStack_68 = 1;
          iStack_6c = (int)puVar6 - *piVar4 >> 4;
          piVar3 = &iStack_6c;
          if (iStack_6c == 0) {
            piVar3 = &iStack_68;
          }
          puStack_28 = puVar6;
          if (iStack_6c + *piVar3 == 0) {
            puVar6 = (u32 *)0x0;
            iVar12 = 0;
          }
          else {
            iVar12 = (iStack_6c + *piVar3) * 0x10;
            puVar6 = (u32 *)LibC_malloc(iVar12);
            if (puVar6 == (u32 *)0x0) {
              puVar6 = (u32 *)code_linkonce_Sub_080D3BC0(iVar12);
            }
          }
          iStack_24 = iVar2 + 1;
          puVar11 = puVar6;
          for (puVar8 = (u32 *)*piVar4; puVar8 != puStack_28; puVar8 = puVar8 + 4) {
            if (puVar11 != (u32 *)0x0) {
              uVar13 = puVar8[1];
              uVar14 = puVar8[2];
              *puVar11 = *puVar8;
              puVar11[1] = uVar13;
              puVar11[2] = uVar14;
              puVar11[3] = puVar8[3];
            }
            puVar11 = puVar11 + 4;
          }
          iVar2 = iStack_68;
          if (iStack_68 == 1) {
            if (puVar11 != (u32 *)0x0) {
              uVar13 = puStack_44[1];
              uVar14 = puStack_44[2];
              *puVar11 = *puStack_44;
              puVar11[1] = uVar13;
              puVar11[2] = uVar14;
              puVar11[3] = puStack_44[3];
            }
            puVar11 = puVar11 + 4;
          }
          else {
            for (; iVar2 != 0; iVar2 = iVar2 + -1) {
              if (puVar11 != (u32 *)0x0) {
                uVar13 = puStack_44[1];
                uVar14 = puStack_44[2];
                *puVar11 = *puStack_44;
                puVar11[1] = uVar13;
                puVar11[2] = uVar14;
                puVar11[3] = puStack_44[3];
              }
              puVar11 = puVar11 + 4;
            }
          }
          for (iVar2 = *piVar4; iVar2 != piVar4[1]; iVar2 = iVar2 + 0x10) {
          }
          if (*piVar4 != 0) {
            LibC_free();
          }
          *piVar4 = (int)puVar6;
          piVar4[1] = (int)puVar11;
          piVar4[3] = iVar12 + (int)puVar6;
        }
        else {
          if (puVar6 != (u32 *)0x0) {
            *puVar6 = uStack_88;
            puVar6[1] = uStack_84;
            puVar6[2] = uStack_80;
            puVar6[3] = uStack_7c;
          }
          piVar4[1] = piVar4[1] + 0x10;
          iStack_24 = iVar2 + 1;
        }
        iVar2 = iStack_24;
      } while (iStack_24 < 0x12);
    }
    else {
      iStack_40 = (uVar5 & 0x1f) << 1;
      iVar2 = 3;
      puStack_3c = &uStack_88;
      do {
        piVar4 = (int *)hardware_GetField_0x00_8910(param_1);
        hardware_Sub_08008F0C(&uStack_88,
                      (iVar2 * 3 + (int)*(short *)(0x000013F8 + param_1)) * 4 + param_1 +
                      0x00000CEA,iStack_40 + iStack_2c * 0x800 + iVar2 * 0x40 + 0x0600D800,4);
        puVar6 = (u32 *)piVar4[1];
        if (puVar6 == (u32 *)piVar4[3]) {
          iStack_60 = 1;
          iStack_64 = (int)puVar6 - *piVar4 >> 4;
          piVar3 = &iStack_64;
          if (iStack_64 == 0) {
            piVar3 = &iStack_60;
          }
          puStack_28 = puVar6;
          if (iStack_64 + *piVar3 == 0) {
            puVar6 = (u32 *)0x0;
            iVar12 = 0;
          }
          else {
            iVar12 = (iStack_64 + *piVar3) * 0x10;
            puVar6 = (u32 *)LibC_malloc(iVar12);
            if (puVar6 == (u32 *)0x0) {
              puVar6 = (u32 *)code_linkonce_Sub_080D3BC0(iVar12);
            }
          }
          iStack_24 = iVar2 + 1;
          puVar11 = puVar6;
          for (puVar8 = (u32 *)*piVar4; puVar8 != puStack_28; puVar8 = puVar8 + 4) {
            if (puVar11 != (u32 *)0x0) {
              uVar13 = puVar8[1];
              uVar14 = puVar8[2];
              *puVar11 = *puVar8;
              puVar11[1] = uVar13;
              puVar11[2] = uVar14;
              puVar11[3] = puVar8[3];
            }
            puVar11 = puVar11 + 4;
          }
          iVar2 = iStack_60;
          if (iStack_60 == 1) {
            if (puVar11 != (u32 *)0x0) {
              uVar13 = puStack_3c[1];
              uVar14 = puStack_3c[2];
              *puVar11 = *puStack_3c;
              puVar11[1] = uVar13;
              puVar11[2] = uVar14;
              puVar11[3] = puStack_3c[3];
            }
            puVar11 = puVar11 + 4;
          }
          else {
            for (; iVar2 != 0; iVar2 = iVar2 + -1) {
              if (puVar11 != (u32 *)0x0) {
                uVar13 = puStack_3c[1];
                uVar14 = puStack_3c[2];
                *puVar11 = *puStack_3c;
                puVar11[1] = uVar13;
                puVar11[2] = uVar14;
                puVar11[3] = puStack_3c[3];
              }
              puVar11 = puVar11 + 4;
            }
          }
          for (iVar2 = *piVar4; iVar2 != piVar4[1]; iVar2 = iVar2 + 0x10) {
          }
          if (*piVar4 != 0) {
            LibC_free();
          }
          *piVar4 = (int)puVar6;
          piVar4[1] = (int)puVar11;
          piVar4[3] = iVar12 + (int)puVar6;
        }
        else {
          if (puVar6 != (u32 *)0x0) {
            *puVar6 = uStack_88;
            puVar6[1] = uStack_84;
            puVar6[2] = uStack_80;
            puVar6[3] = uStack_7c;
          }
          piVar4[1] = piVar4[1] + 0x10;
          iStack_24 = iVar2 + 1;
        }
        iVar2 = iStack_24;
      } while (iStack_24 < 0x12);
    }
  }
  puVar7 = (u16 *)(0x000013F0 + param_1);
  uVar5 = 0x0000FFF0 & *(u16 *)(0x000013EA + param_1);
  if (*puVar7 != uVar5) {
    *puVar7 = (u16)uVar5;
    puVar9 = (u16 *)(0x000013F6 + param_1);
    uVar1 = *puVar9;
    *puVar9 = (u16)(uVar1 - 1);
    if ((int)((uVar1 - 1) * 0x10000) < 0) {
      *puVar9 = 2;
    }
    uVar5 = *puVar7 - 0x10 & 0x1f0;
    iStack_34 = ((int)uVar5 >> 8) << 0xb;
    iStack_38 = ((int)uVar5 >> 3 & 0x1fU) << 1;
    iVar2 = 0x11;
    puStack_30 = &uStack_88;
    do {
      piVar4 = (int *)hardware_GetField_0x00_8910(param_1);
      hardware_Sub_08008F0C(&uStack_88,
                    (iVar2 * 3 + (int)*(short *)(0x000013F6 + param_1)) * 4 + param_1 +
                    0x00000DEA,iStack_38 + iStack_34 + iVar2 * 0x40 + 0x0600E800,4);
      puVar6 = (u32 *)piVar4[1];
      if (puVar6 == (u32 *)piVar4[3]) {
        iStack_58 = 1;
        iStack_5c = (int)puVar6 - *piVar4 >> 4;
        piVar3 = &iStack_5c;
        if (iStack_5c == 0) {
          piVar3 = &iStack_58;
        }
        puStack_28 = puVar6;
        if (iStack_5c + *piVar3 == 0) {
          puVar6 = (u32 *)0x0;
          iVar12 = 0;
        }
        else {
          iVar12 = (iStack_5c + *piVar3) * 0x10;
          puVar6 = (u32 *)LibC_malloc(iVar12);
          if (puVar6 == (u32 *)0x0) {
            puVar6 = (u32 *)code_linkonce_Sub_080D3BC0(iVar12);
          }
        }
        iStack_24 = iVar2 + 1;
        puVar11 = puVar6;
        for (puVar8 = (u32 *)*piVar4; puVar8 != puStack_28; puVar8 = puVar8 + 4) {
          if (puVar11 != (u32 *)0x0) {
            uVar13 = puVar8[1];
            uVar14 = puVar8[2];
            *puVar11 = *puVar8;
            puVar11[1] = uVar13;
            puVar11[2] = uVar14;
            puVar11[3] = puVar8[3];
          }
          puVar11 = puVar11 + 4;
        }
        iVar2 = iStack_58;
        if (iStack_58 == 1) {
          if (puVar11 != (u32 *)0x0) {
            uVar13 = puStack_30[1];
            uVar14 = puStack_30[2];
            *puVar11 = *puStack_30;
            puVar11[1] = uVar13;
            puVar11[2] = uVar14;
            puVar11[3] = puStack_30[3];
          }
          puVar11 = puVar11 + 4;
        }
        else {
          for (; iVar2 != 0; iVar2 = iVar2 + -1) {
            if (puVar11 != (u32 *)0x0) {
              uVar13 = puStack_30[1];
              uVar14 = puStack_30[2];
              *puVar11 = *puStack_30;
              puVar11[1] = uVar13;
              puVar11[2] = uVar14;
              puVar11[3] = puStack_30[3];
            }
            puVar11 = puVar11 + 4;
          }
        }
        for (iVar2 = *piVar4; iVar2 != piVar4[1]; iVar2 = iVar2 + 0x10) {
        }
        if (*piVar4 != 0) {
          LibC_free();
        }
        *piVar4 = (int)puVar6;
        piVar4[1] = (int)puVar11;
        piVar4[3] = iVar12 + (int)puVar6;
      }
      else {
        if (puVar6 != (u32 *)0x0) {
          *puVar6 = uStack_88;
          puVar6[1] = uStack_84;
          puVar6[2] = uStack_80;
          puVar6[3] = uStack_7c;
        }
        piVar4[1] = piVar4[1] + 0x10;
        iStack_24 = iVar2 + 1;
      }
      iVar2 = iStack_24;
    } while (iStack_24 < 0x14);
  }
}

/* 0x0805C63C (464B) | hardware_Sub_0805C63C (orig: func_0805C63C) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
void hardware_Sub_0805C63C(u32 param_1,u32 *param_2,int param_3,short *param_4,int param_5) {
  u32 bVar2;
  u8 bVar1;
  u16 uVar3;
  u16 sVar4;
  u32 uVar5;
  u32 uVar6;
  u8 *pbVar7;
  u32 uVar8;
  u32 uVar9;
  u32 *puVar10;
  u32 uVar11;
  int iVar12;
  u32 uVar13;
  int iVar14;
  u32 uStack_30;
  u16 uStack_2c;
  puVar10 = param_2 + param_3 * 2;
  for (; param_2 != puVar10; param_2 = param_2 + 2) {
    uStack_30 = (u8)*param_2;
    uVar8 = param_2[1];
    iVar12 = (s8)(int)(uStack_30 << 7) >> 0x17;
    iVar14 = (int)(char)uStack_30;
    uVar5 = (uStack_30 & 0xffff) >> 0xe;
    uVar9 = uStack_30 >> 0x1e;
    if (uVar5 == 0) {
      uVar13 = 8 << uVar9;
      uVar6 = 8 << uVar9;
    }
    else {
      uVar11 = 8 << (uVar9 + 1 >> 1) + 1;
      uVar6 = 8;
      if (uVar9 != 1) {
        uVar6 = uVar11 >> 1;
      }
      uVar13 = uVar11;
      if (uVar5 != 1) {
        uVar13 = uVar6;
        uVar6 = uVar11;
      }
    }
    if ((*(u8 *)(param_4 + 8) & 1) != 0) {
      iVar12 = -(iVar12 + uVar13);
      uStack_30 = (s8)0xEFFFFFFF & uStack_30 | ((uStack_30 & 0x1fffffff) >> 0x1c ^ 1) << 0x1c;
    }
    if ((*(u8 *)(param_4 + 8) & 2) != 0) {
      iVar14 = -(iVar14 + uVar6);
      uStack_30 = 0xDFFFFFFF & uStack_30 | ((uStack_30 & 0x3fffffff) >> 0x1d ^ 1) << 0x1d;
    }
    uVar5 = iVar12 + *param_4;
    uVar9 = iVar14 + param_4[1];
    if ((((0 < (int)(uVar5 + uVar13)) && ((int)uVar5 < 0xf0)) && (0 < (int)(uVar9 + uVar6))) &&
       ((int)uVar9 < 0xa0)) {
      uVar5 = (uStack_30 & 0xFE00FFFF | (uVar5 & 0x000001FF) << 0x10) & 0xFFFFFF00;
      sVar4 = hardware_Sub_080074C0(iVar12 + 8,*(u32 *)(iVar12 + 0xc));
      iVar12 = ((uVar8 & 0xffff) >> 0xc) * 8 + param_5;
      uVar3 = (u16)uVar8 & (u16)0xFFFF0FFF;
      uStack_2c = (u32)((u16)0xFFFFFC00 & (uVar3 | sVar4 << 0xc) |
                  (uVar3 & 0x3ff) + param_4[3] & 0x3ff) & (u16)0xFFFFF3FF |
                  (param_4[4] & 3U) << 10;
      bVar1 = *(u8 *)(param_4 + 0xc);
      uVar5 = (((uVar5 | uVar9 & 0xff) & 0xFFFFF3FF | (*(u32 *)(param_4 + 6) & 3) << 10) &
               0xFFFFFCFF | (*(u32 *)(param_4 + 10) & 3) << 8) & 0xFFFFEFFF;
      pbVar7 = (u8 *)hardware_GetField_0x00_8920(param_1);
      bVar2 = *pbVar7;
      if (bVar2 < 0x80) {
        *(u32 *)(pbVar7 + (u32)bVar2 * 8 + 4) = uVar5 | (bVar1 & 1) << 0xc;
        *(u16 *)((int)(pbVar7 + (u32)bVar2 * 8 + 4) + 4) = uStack_2c;
        *pbVar7 = bVar2 + 1;
      }
    }
  }
}

/* 0x0805DFC4 (1632B) | hardware_Sub_0805DFC4 (orig: func_0805DFC4) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
void hardware_Sub_0805DFC4(int param_1) {
  u8 bVar1;
  u32 *puVar2;
  u16 uVar3;
  short sVar4;
  u32 uVar5;
  int iVar6;
  int iVar7;
  u8 *pbVar8;
  int *piVar9;
  int *piVar10;
  u16 *puVar11;
  u32 uVar12;
  int *piVar13;
  int iVar14;
  u32 uStack_a0;
  u32 uStack_9c;
  u32 uStack_98;
  u32 uStack_94;
  u32 uStack_90;
  u32 uStack_8c;
  u32 uStack_88;
  int iStack_84;
  u32 uStack_80;
  int iStack_7c;
  u32 uStack_78;
  u32 uStack_74;
  u32 uStack_70;
  u32 uStack_6c;
  u32 uStack_68;
  int iStack_64;
  u32 uStack_60;
  int iStack_5c;
  u32 uStack_58;
  u32 uStack_54;
  u32 uStack_50;
  u32 uStack_4c;
  u32 uStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  u32 auStack_34 [2];
  u32 *puStack_2c;
  int *piStack_28;
  int *piStack_24;
  uStack_a0 = 0;
  uStack_9c = 0;
  uStack_98 = uStack_98 & 0xffff0000;
  uStack_94 = 0;
  uStack_90 = uStack_90 & 0xffff0000;
  uStack_8c = 0;
  uStack_88 = uStack_88 & 0xffffff00;
  iStack_84 = 0;
  uStack_80 = uStack_80 & 0xffff0000;
  iStack_7c = 0;
  uStack_78 = uStack_78 & 0xffff0000;
  uStack_74 = 0;
  uStack_70 = uStack_70 & 0xffff0000;
  uStack_6c = 0;
  uStack_68 = uStack_68 & 0xffff0000;
  if (0 < *(short *)(param_1 + 0x00000ADA)) {
    code_0803EE94_Sub_0805E8F0((u32 *)(param_1 + 0xe8));
    piVar9 = *(int **)(param_1 + 0xe8);
    func_080D3918(&iStack_64,piVar9,
                    *(u16 *)
                     (*(int *)(param_1 + 0xec) + (u32)*(u16 *)(param_1 + 0xf4) * 4),
                    *(u32 *)(*piVar9 + 0x10));
    LibC_memcpy(&iStack_64,&iStack_64,0x20);
    iStack_84 = iStack_64;
    uStack_80 = uStack_60;
    iStack_7c = iStack_5c;
    uStack_78 = uStack_58;
    uStack_74 = uStack_54;
    uStack_70 = uStack_50;
    uStack_6c = uStack_4c;
    uStack_68 = uStack_48;
    uStack_9c = *(u32 *)(param_1 + 0x100);
    uStack_98 = *(u32 *)(param_1 + 0x104);
    uStack_94 = *(u32 *)(param_1 + 0x108);
    uStack_90 = *(u32 *)(param_1 + 0x10c);
    uStack_8c = *(u32 *)(param_1 + 0x110);
    uStack_88 = *(u32 *)(param_1 + 0x114);
    uStack_a0 = ((u16)(0xc));
    uVar3 = hardware_Sub_08007D4C(param_1 + 0x13c,*(u32 *)(param_1 + 0x140));
    (*(u16 *)((u8 *)&uStack_9c + 2)) = uVar3;
    uVar3 = hardware_Sub_080074C0(param_1 + 0x144,*(u32 *)(param_1 + 0x148));
    uStack_9c = ((u16)(uVar3));
    uStack_98 = ((u16)(2));
    uStack_88 = (1);
    uVar5 = hardware_GetField_0x00_8920(param_1);
    uVar12 = 0;
    if (iStack_84 != 0) {
      uVar12 = uStack_80 & 0xffff;
    }
    code_0803EE94_Sub_0805E99C(uVar5,iStack_84,uVar12,&uStack_a0);
  }
  puStack_2c = auStack_34;
  if (*(short *)(param_1 + 0x14c) != 0) {
    code_0803EE94_Sub_0805E8F0((u32 *)(param_1 + 0x80));
    piVar9 = *(int **)(param_1 + 0x80);
    func_080D3918(&iStack_64,piVar9,
                    *(u16 *)
                     (*(int *)(param_1 + 0x84) + (u32)*(u16 *)(param_1 + 0x8c) * 4),
                    *(u32 *)(*piVar9 + 0x10));
    LibC_memcpy(&iStack_64,&iStack_64,0x20);
    iStack_84 = iStack_64;
    uStack_80 = uStack_60;
    iStack_7c = iStack_5c;
    uStack_78 = uStack_58;
    uStack_74 = uStack_54;
    uStack_70 = uStack_50;
    uStack_6c = uStack_4c;
    uStack_68 = uStack_48;
    uStack_9c = *(u32 *)(param_1 + 0x98);
    uStack_98 = *(u32 *)(param_1 + 0x9c);
    uStack_94 = *(u32 *)(param_1 + 0xa0);
    uStack_90 = *(u32 *)(param_1 + 0xa4);
    uStack_8c = *(u32 *)(param_1 + 0xa8);
    uStack_88 = *(u32 *)(param_1 + 0xac);
    uStack_a0 = 0x1a00e8;
    sVar4 = hardware_Sub_08007D4C(param_1 + 300,*(u32 *)(param_1 + 0x130));
    (*(u16 *)((u8 *)&uStack_9c + 2)) = sVar4 + 4;
    uVar3 = hardware_Sub_080074C0(param_1 + 0x134,*(u32 *)(param_1 + 0x138));
    uStack_9c = ((u16)(uVar3));
    uStack_98 = ((u16)(2));
    uStack_88 = (1);
    piVar9 = (int *)hardware_GetField_0x00_8910(param_1);
    iVar7 = iStack_7c;
    iVar6 = hardware_Sub_08007D4C(param_1 + 300,*(u32 *)(param_1 + 0x130));
    uVar12 = 0;
    if (iStack_7c != 0) {
      uVar12 = uStack_78 & 0xffff;
    }
    piStack_28 = piVar9;
    hardware_Sub_08008F0C(&iStack_64,iVar7,iVar6 * 0x20 + 0x06010080,uVar12);
    piVar10 = (int *)piVar9[1];
    if (piVar10 == (int *)piVar9[3]) {
      piStack_24 = piVar10;
      iStack_40 = 1;
      iStack_44 = (int)piVar10 - *piStack_28 >> 4;
      piVar9 = &iStack_44;
      if (iStack_44 == 0) {
        piVar9 = &iStack_40;
      }
      if (iStack_44 + *piVar9 == 0) {
        piVar9 = (int *)0x0;
        iVar7 = 0;
      }
      else {
        iVar7 = (iStack_44 + *piVar9) * 0x10;
        piVar9 = (int *)LibC_malloc(iVar7);
        if (piVar9 == (int *)0x0) {
          piVar9 = (int *)code_linkonce_Sub_080D3BC0(iVar7);
        }
      }
      puStack_2c = auStack_34;
      piVar13 = piVar9;
      for (piVar10 = (int *)*piStack_28; piVar10 != piStack_24; piVar10 = piVar10 + 4) {
        if (piVar13 != (int *)0x0) {
          iVar6 = piVar10[1];
          iVar14 = piVar10[2];
          *piVar13 = *piVar10;
          piVar13[1] = iVar6;
          piVar13[2] = iVar14;
          piVar13[3] = piVar10[3];
        }
        piVar13 = piVar13 + 4;
      }
      iVar6 = iStack_40;
      if (iStack_40 == 1) {
        if (piVar13 != (int *)0x0) {
          *piVar13 = iStack_64;
          piVar13[1] = uStack_60;
          piVar13[2] = iStack_5c;
          piVar13[3] = uStack_58;
        }
        piVar13 = piVar13 + 4;
      }
      else {
        for (; iVar6 != 0; iVar6 = iVar6 + -1) {
          if (piVar13 != (int *)0x0) {
            *piVar13 = iStack_64;
            piVar13[1] = uStack_60;
            piVar13[2] = iStack_5c;
            piVar13[3] = uStack_58;
          }
          piVar13 = piVar13 + 4;
        }
      }
      for (iVar6 = *piStack_28; iVar6 != piStack_28[1]; iVar6 = iVar6 + 0x10) {
      }
      if (*piStack_28 != 0) {
        LibC_free();
      }
      *piStack_28 = (int)piVar9;
      piStack_28[1] = (int)piVar13;
      piStack_28[3] = iVar7 + (int)piVar9;
    }
    else {
      if (piVar10 != (int *)0x0) {
        *piVar10 = iStack_64;
        piVar10[1] = uStack_60;
        piVar10[2] = iStack_5c;
        piVar10[3] = uStack_58;
      }
      piStack_28[1] = piStack_28[1] + 0x10;
    }
    uVar5 = hardware_GetField_0x00_8920(param_1);
    uVar12 = 0;
    if (iStack_84 != 0) {
      uVar12 = uStack_80 & 0xffff;
    }
    code_0803EE94_Sub_0805E99C(uVar5,iStack_84,uVar12,&uStack_a0);
  }
  if (*(u16 *)(param_1 + 0x14c) < 0x20) {
    code_0803EE94_Sub_0805E8F0((u32 *)(param_1 + 0xb4));
    piVar9 = *(int **)(param_1 + 0xb4);
    func_080D3918(&iStack_64,piVar9,
                    *(u16 *)
                     (*(int *)(param_1 + 0xb8) + (u32)*(u16 *)(param_1 + 0xc0) * 4),
                    *(u32 *)(*piVar9 + 0x10));
    LibC_memcpy(&iStack_64,&iStack_64,0x20);
    iStack_84 = iStack_64;
    uStack_80 = uStack_60;
    iStack_7c = iStack_5c;
    uStack_78 = uStack_58;
    uStack_74 = uStack_54;
    uStack_70 = uStack_50;
    uStack_6c = uStack_4c;
    uStack_68 = uStack_48;
    uStack_9c = *(u32 *)(param_1 + 0xcc);
    uStack_98 = *(u32 *)(param_1 + 0xd0);
    uStack_94 = *(u32 *)(param_1 + 0xd4);
    uStack_90 = *(u32 *)(param_1 + 0xd8);
    uStack_8c = *(u32 *)(param_1 + 0xdc);
    uStack_88 = *(u32 *)(param_1 + 0xe0);
    uStack_a0 = 0x9800e8;
    sVar4 = hardware_Sub_08007D4C(param_1 + 300,*(u32 *)(param_1 + 0x130));
    (*(u16 *)((u8 *)&uStack_9c + 2)) = sVar4 + 8;
    uVar3 = hardware_Sub_080074C0(param_1 + 0x134,*(u32 *)(param_1 + 0x138));
    uStack_9c = ((u16)(uVar3));
    uStack_98 = ((u16)(2));
    uStack_88 = (1);
    piVar9 = (int *)hardware_GetField_0x00_8910(param_1);
    iVar7 = iStack_7c;
    iVar6 = hardware_Sub_08007D4C(param_1 + 300,*(u32 *)(param_1 + 0x130));
    uVar12 = 0;
    if (iStack_7c != 0) {
      uVar12 = uStack_78 & 0xffff;
    }
    piStack_28 = piVar9;
    hardware_Sub_08008F0C(&iStack_64,iVar7,iVar6 * 0x20 + 0x06010100,uVar12);
    piVar10 = (int *)piVar9[1];
    if (piVar10 == (int *)piVar9[3]) {
      piStack_24 = piVar10;
      iStack_38 = 1;
      iStack_3c = (int)piVar10 - *piStack_28 >> 4;
      piVar9 = &iStack_3c;
      if (iStack_3c == 0) {
        piVar9 = &iStack_38;
      }
      if (iStack_3c + *piVar9 == 0) {
        piVar9 = (int *)0x0;
        iVar7 = 0;
      }
      else {
        iVar7 = (iStack_3c + *piVar9) * 0x10;
        piVar9 = (int *)LibC_malloc(iVar7);
        if (piVar9 == (int *)0x0) {
          piVar9 = (int *)code_linkonce_Sub_080D3BC0(iVar7);
        }
      }
      piVar13 = piVar9;
      for (piVar10 = (int *)*piStack_28; piVar10 != piStack_24; piVar10 = piVar10 + 4) {
        if (piVar13 != (int *)0x0) {
          iVar6 = piVar10[1];
          iVar14 = piVar10[2];
          *piVar13 = *piVar10;
          piVar13[1] = iVar6;
          piVar13[2] = iVar14;
          piVar13[3] = piVar10[3];
        }
        piVar13 = piVar13 + 4;
      }
      iVar6 = iStack_38;
      if (iStack_38 == 1) {
        if (piVar13 != (int *)0x0) {
          *piVar13 = iStack_64;
          piVar13[1] = uStack_60;
          piVar13[2] = iStack_5c;
          piVar13[3] = uStack_58;
        }
        piVar13 = piVar13 + 4;
      }
      else {
        for (; iVar6 != 0; iVar6 = iVar6 + -1) {
          if (piVar13 != (int *)0x0) {
            *piVar13 = iStack_64;
            piVar13[1] = uStack_60;
            piVar13[2] = iStack_5c;
            piVar13[3] = uStack_58;
          }
          piVar13 = piVar13 + 4;
        }
      }
      for (iVar6 = *piStack_28; iVar6 != piStack_28[1]; iVar6 = iVar6 + 0x10) {
      }
      if (*piStack_28 != 0) {
        LibC_free();
      }
      *piStack_28 = (int)piVar9;
      piStack_28[1] = (int)piVar13;
      piStack_28[3] = iVar7 + (int)piVar9;
    }
    else {
      if (piVar10 != (int *)0x0) {
        *piVar10 = iStack_64;
        piVar10[1] = uStack_60;
        piVar10[2] = iStack_5c;
        piVar10[3] = uStack_58;
      }
      piStack_28[1] = piStack_28[1] + 0x10;
    }
    uVar5 = hardware_GetField_0x00_8920(param_1);
    uVar12 = 0;
    if (iStack_84 != 0) {
      uVar12 = uStack_80 & 0xffff;
    }
    code_0803EE94_Sub_0805E99C(uVar5,iStack_84,uVar12,&uStack_a0);
  }
  auStack_34[0] =
       ((auStack_34[0] & 0xFFFFFCFF & 0xFFFFF3FF | 0x1000) & 0xFFFFDFFF & 0xFFFF3FFF |
       0x8000) & 0xF1FFFFFF & 0xEFFFFFFF & 0xDFFFFFFF & 0x3FFFFFFF;
  uVar12 = hardware_Sub_080074C0(param_1 + 0x124,*(u32 *)(param_1 + 0x128));
  puStack_2c[1] = (puStack_2c[1] & 0xFFFF0FFF | (uVar12 & 0xf) << 0xc) & 0x0000FFFF;
  puVar2 = puStack_2c;
  auStack_34[0] = auStack_34[0] | 0x1000;
  puVar11 = (u16 *)(param_1 + 0x000002CE);
  iVar7 = *puVar11 - 1;
  *puVar11 = (u16)iVar7;
  while (-1 < iVar7 * 0x10000) {
    puVar2[1] = puVar2[1] & 0xFFFFF3FF |
                (*(u16 *)(param_1 + 0x154 + (short)*puVar11 * 8) & 3) << 10;
    auStack_34[0] =
         (auStack_34[0] & 0xFE00FFFF |
         ((int)*(short *)(param_1 + 0x14e + (short)*puVar11 * 8) & 0x000001FF) << 0x10) &
         0xFFFFFF00 | (u32)*(u8 *)(param_1 + 0x150 + (short)*puVar11 * 8);
    iVar7 = hardware_Sub_08007D4C(param_1 + 0x11c,*(u32 *)(param_1 + 0x120));
    puVar2[1] = puVar2[1] & 0xFFFFFC00 |
                iVar7 + *(short *)(param_1 + 0x152 + (short)*puVar11 * 8) * 2 & 0x3ffU;
    pbVar8 = (u8 *)hardware_GetField_0x00_8920(param_1);
    bVar1 = *pbVar8;
    if (bVar1 < 0x80) {
      *(u32 *)(pbVar8 + (u32)bVar1 * 8 + 4) = auStack_34[0];
      *(short *)((int)(pbVar8 + (u32)bVar1 * 8 + 4) + 4) = (short)puStack_2c[1];
      *pbVar8 = bVar1 + 1;
    }
    iVar7 = *puVar11 - 1;
    *puVar11 = (u16)iVar7;
  }
}

/* 0x0806DEC0 (364B) | hardware_Sub_0806DEC0 (orig: func_0806DEC0) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
void hardware_Sub_0806DEC0(int param_1) {
  u8 bVar1;
  char cVar2;
  u32 uVar3;
  u8 *pbVar4;
  u8 *pbVar5;
  char *pcVar6;
  char *pcVar7;
  uVar3 = hardware_GetField_0x00_88D4();
  if ((uVar3 & 0x40) == 0) {
    if ((uVar3 & 0x80) == 0) {
      if ((uVar3 & 0x20) == 0) {
        if ((uVar3 & 0x10) != 0) {
          hardware_Wrap_m4aMPlayStart(param_1 + 0x14,0xcb);
          pcVar7 = (char *)(param_1 + 0x39);
          if (*pcVar7 == '\0') {
            pcVar7 = (char *)(param_1 + 0x38);
            cVar2 = *pcVar7;
            *pcVar7 = cVar2 + '\x04';
            if ('\f' < (char)(cVar2 + '\x04')) {
              *pcVar7 = '\0';
            }
          }
          else {
            pcVar6 = (char *)(param_1 + 0x38);
            cVar2 = *pcVar6 + '\x02';
            *pcVar6 = cVar2;
            if (*pcVar7 == '\x05') {
              if (cVar2 < '\x04') {
              }
              *pcVar7 = '\x01';
            }
            else {
              if (cVar2 < '\x0e') {
              }
              *pcVar7 = *pcVar7 + '\x01';
            }
            *pcVar6 = '\x01';
          }
        }
      }
      else {
        hardware_Wrap_m4aMPlayStart(param_1 + 0x14,0xcb);
        pbVar5 = (u8 *)(param_1 + 0x39);
        if (*pbVar5 == 0) {
          pbVar5 = (u8 *)(param_1 + 0x38);
          bVar1 = *pbVar5;
          *pbVar5 = (u8)(bVar1 - 4);
          if ((int)((bVar1 - 4) * 0x1000000) < 0) {
            *pbVar5 = 0xc;
          }
        }
        else {
          pbVar4 = (u8 *)(param_1 + 0x38);
          bVar1 = *pbVar4;
          *pbVar4 = (u8)(bVar1 - 2);
          if ((int)((bVar1 - 2) * 0x1000000) < 0) {
            bVar1 = *pbVar5;
            *pbVar5 = (u8)(bVar1 - 1);
            if ((int)((bVar1 - 1) * 0x1000000) < 1) {
              *pbVar5 = 5;
              *pbVar4 = 3;
            }
            else {
              *pbVar4 = 0xd;
            }
          }
        }
      }
    }
    else {
      pcVar7 = (char *)(param_1 + 0x39);
      if (*pcVar7 != '\0') {
        hardware_Wrap_m4aMPlayStart(param_1 + 0x14,0xcb);
        cVar2 = *pcVar7 + '\x01';
        *pcVar7 = cVar2;
        if ((cVar2 == '\x06') || ((cVar2 == '\x05' && ('\x03' < *(char *)(param_1 + 0x38))))) {
          *pcVar7 = '\x01';
        }
      }
    }
  }
  else {
    pcVar7 = (char *)(param_1 + 0x39);
    if (*pcVar7 != '\0') {
      hardware_Wrap_m4aMPlayStart(param_1 + 0x14,0xcb);
      if (*pcVar7 < '\x02') {
        if (*pcVar7 == '\x01') {
          if (*(char *)(param_1 + 0x38) < '\x04') {
            *pcVar7 = '\x05';
          }
          else {
            *pcVar7 = '\x04';
          }
        }
      }
      else {
        *pcVar7 = *pcVar7 + -1;
      }
    }
  }
}

/* 0x0806E164 (132B) | hardware_Sub_0806E164 (orig: func_0806E164) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
u32 hardware_Sub_0806E164(void) {
  s8 val;
  val = hardware_GetField_0x00_88D4();
  return val;
}

/* 0x0806E1E8 (76B) | hardware_Sub_0806E1E8 (orig: func_0806E1E8) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
u32 hardware_Sub_0806E1E8(void) {
  u32 val;
  val = (s8)hardware_GetField_0x00_88D4();
  return val;
}

/* 0x0806E43C (316B) | hardware_Sub_0806E43C (orig: func_0806E43C) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
void hardware_Sub_0806E43C(int param_1) {
  char cVar1;
  u16 uVar2;
  int iVar3;
  int iVar4;
  u32 uVar5;
  int iVar6;
  int iVar7;
  uVar5 = *(u16 *)0x080F9F78;
  iVar6 = param_1 + 0x30;
  iVar3 = hardware_Sub_080074C0(iVar6,*(u32 *)(param_1 + 0x34));
  hardware_HW_DMA3SAD(uVar5,iVar3 * 0x20 + 0x05000200,0x20);
  iVar3 = hardware_Sub_080074C0(iVar6,*(u32 *)(param_1 + 0x34));
  *(short *)(iVar3 * 0x20 + 0x0500020E) = (short)0x0000027F;
  hardware_HW_DMA3SAD_8EB8(0,(u8 *)(param_1 + 0x3c),8);
  *(u8 *)(param_1 + 0x3f) = *(u8 *)(param_1 + 0x3f) & 0x3f | 0x40;
  *(u8 *)(param_1 + 0x3d) = *(u8 *)(param_1 + 0x3d) & 0x33 | 4;
  uVar2 = hardware_Sub_08007D4C(param_1 + 0x28,*(u32 *)(param_1 + 0x2c));
  *(u16 *)(param_1 + 0x40) =
       (u16)0xFFFFFC00 & *(u16 *)(param_1 + 0x40) | uVar2 & (u16)0x000003FF;
  cVar1 = hardware_Sub_080074C0(iVar6,*(u32 *)(param_1 + 0x34));
  *(u8 *)(param_1 + 0x41) = *(u8 *)(param_1 + 0x41) & 0xf | cVar1 << 4 | 0xc;
  iVar3 = 0;
  do {
    iVar6 = 0;
    iVar7 = iVar3 + 1;
    do {
      iVar4 = hardware_Sub_08007D4C(param_1 + 0x28,*(u32 *)(param_1 + 0x2c));
      *(u32 *)((iVar4 + iVar3) * 0x20 + iVar6 * 4 + 0x06010000) = 0x77777777;
      iVar6 = iVar6 + 1;
    } while (iVar6 < 8);
    iVar3 = iVar7;
  } while (iVar7 < 8);
  *(u16 *)(param_1 + 0x3e) =
       (u16)0xFFFFFE00 & *(u16 *)(param_1 + 0x3e) |
       (short)*(char *)(param_1 + 0x38) << 4 & (u16)0x000001FF;
  *(u8 *)(param_1 + 0x3c) = 0x28;
}

/* 0x0806E7E0 (504B) | hardware_Sub_0806E7E0 (orig: func_0806E7E0) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
void hardware_Sub_0806E7E0(int param_1) {
  u8 bVar1;
  u16 uVar2;
  u16 uVar3;
  u32 uVar4;
  u32 uVar5;
  int iVar6;
  int iVar7;
  u8 *pbVar8;
  int iVar9;
  u32 uStack_1c;
  u32 uStack_18;
  uVar4 = (uStack_1c & 0xFFFFFCFF & 0xFFFFF3FF & 0xFFFFDFFF & 0xFFFF3FFF | 0x8000) &
          0xF1FFFFFF & 0xEFFFFFFF & 0xDFFFFFFF & 0x3FFFFFFF;
  uVar5 = hardware_Sub_080074C0(param_1 + 0x20,*(u32 *)(param_1 + 0x24));
  uVar5 = (uStack_18 & 0xFFFF0FFF | (uVar5 & 0xf) << 0xc) & 0x0000FFFF;
  uVar4 = uVar4 | 0x1000;
  iVar6 = (int)*(short *)(param_1 + 0x00000446);
  while (iVar6 = iVar6 + -1, -1 < iVar6) {
    iVar9 = iVar6 * 8;
    uVar2 = *(u16 *)(param_1 + 0x4c + iVar9);
    uVar5 = uVar5 & 0xFFFFF3FF;
    uVar4 = (uVar4 & 0xFE00FFFF |
            ((int)*(short *)(param_1 + 0x46 + iVar9) & 0x000001FF) << 0x10) & 0xFFFFFF00 |
            (u32)*(u8 *)(param_1 + 0x48 + iVar9);
    iVar7 = hardware_Sub_08007D4C(param_1 + 0x18,*(u32 *)(param_1 + 0x1c));
    uVar5 = (uVar5 | (uVar2 & 3) << 10) & 0xFFFFFC00 |
            iVar7 + *(short *)(param_1 + 0x4a + iVar9) * 2 & 0x3ffU;
    pbVar8 = (u8 *)hardware_GetField_0x00_8920(param_1);
    bVar1 = *pbVar8;
    if (bVar1 < 0x80) {
      *(u32 *)(pbVar8 + (u32)bVar1 * 8 + 4) = uVar4;
      (*(u16 *)&uStack_18) = (u16)uVar5;
      *(u16 *)((int)(pbVar8 + (u32)bVar1 * 8 + 4) + 4) = (u16)uStack_18;
      *pbVar8 = bVar1 + 1;
    }
  }
  if (*(char *)(param_1 + 0x44) != '\0') {
    pbVar8 = (u8 *)hardware_GetField_0x00_8920(param_1);
    bVar1 = *pbVar8;
    if (bVar1 < 0x80) {
      *(u32 *)(pbVar8 + (u32)bVar1 * 8 + 4) = *(u32 *)(param_1 + 0x3c);
      *(u16 *)(pbVar8 + (u32)bVar1 * 8 + 4 + 4) = *(u16 *)(param_1 + 0x40);
      *pbVar8 = bVar1 + 1;
    }
    if (*(char *)(param_1 + 0x39) == '\0') {
      uVar3 = (u16)0x000001FF;
      uVar2 = (u16)0xFFFFFE00;
      *(u16 *)(param_1 + 0x3e) =
           uVar2 & *(u16 *)(param_1 + 0x3e) | *(char *)(param_1 + 0x38) * 0x10 + 0x10U & uVar3;
      pbVar8 = (u8 *)hardware_GetField_0x00_8920(param_1);
      bVar1 = *pbVar8;
      if (bVar1 < 0x80) {
        *(u32 *)(pbVar8 + (u32)bVar1 * 8 + 4) = *(u32 *)(param_1 + 0x3c);
        *(u16 *)(pbVar8 + (u32)bVar1 * 8 + 4 + 4) = *(u16 *)(param_1 + 0x40);
        *pbVar8 = bVar1 + 1;
      }
      *(u16 *)(param_1 + 0x3e) =
           uVar2 & *(u16 *)(param_1 + 0x3e) | *(char *)(param_1 + 0x38) * 0x10 + 0x20U & uVar3;
      pbVar8 = (u8 *)hardware_GetField_0x00_8920(param_1);
      bVar1 = *pbVar8;
      if (bVar1 < 0x80) {
        *(u32 *)(pbVar8 + (u32)bVar1 * 8 + 4) = *(u32 *)(param_1 + 0x3c);
        *(u16 *)(pbVar8 + (u32)bVar1 * 8 + 4 + 4) = *(u16 *)(param_1 + 0x40);
        *pbVar8 = bVar1 + 1;
      }
    }
  }
}

/* 0x08070140 (124B) | hardware_Sub_08070140 (orig: func_08070140) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
void hardware_Sub_08070140(int param_1) {
    int iVar2;
    int iVar3;
    int * piVar4;
    int * piVar5;
    u8 auStack_38 [32];
  register u32 uVar1;
  piVar4 = *(int **)(param_1 + 0xd0);
  piVar5 = *(int **)(param_1 + 0xd4);
  if (piVar4 != piVar5) {
    do {
      uVar1 = hardware_GetField_0x00_8920(param_1);
      func_080D3918(auStack_38,(int *)piVar4[2],
                      *(u16 *)(piVar4[3] + (u32)*(u16 *)(piVar4 + 5) * 4),
                      *(s16 *)(*(int *)piVar4[2] + 0x10));
      LibC_memcpy(auStack_38,auStack_38,0x20);
      iVar2 = *(int *)(param_1 + 0x14);
      if ((u8)iVar2 < 0) {
        iVar2 = iVar2 + 0xff;
      }
      iVar3 = *(int *)(param_1 + 0x10);
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0xff;
      }
      hardware_Sub_08075AE8(param_1 + 0x18,uVar1,auStack_38,*piVar4 - (iVar2 >> 8),piVar4[1] - (iVar3 >> 8))
      ;
      piVar4 = piVar4 + 7;
    } while (piVar4 != (s8)piVar5);
  }
}

/* 0x08075A14 (104B) | hardware_Sub_08075A14 (orig: func_08075A14) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
u32 hardware_Sub_08075A14(int *param_1,u32 param_2) {
  u32 uVar1;
  u32 uVar2;
  u32 uVar3;
  u32 uVar4;
  int iVar5;
  iVar5 = *param_1;
  uVar2 = *(u32 *)(*(u32 *)(iVar5 + 8) + 4);
  uVar4 = *(u32 *)(iVar5 + 8);
  while (uVar3 = uVar2, uVar3 != 0) {
    if (*(u32 *)(uVar3 + 0x10) < param_2) {
      uVar2 = *(u32 *)(uVar3 + 0xc);
    }
    else {
      uVar2 = *(u32 *)(uVar3 + 8);
      uVar4 = uVar3;
    }
  }
  if ((uVar4 == *(u32 *)(iVar5 + 8)) || (param_2 < *(u32 *)(uVar4 + 0x10))) {
    uVar4 = *(u32 *)(iVar5 + 8);
  }
  uVar2 = *(u32 *)(iVar5 + 8) ^ uVar4;
  if ((int)(-uVar2 | uVar2) < 0) {
    uVar1 = hardware_Sub_08007D4C(iVar5,*(u32 *)(uVar4 + 0x14));
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

/* 0x08075A7C (108B) | hardware_Sub_08075A7C (orig: func_08075A7C) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
u32 hardware_Sub_08075A7C(int *param_1,u32 param_2) {
  u32 uVar1;
  u32 uVar2;
  u32 uVar3;
  u32 uVar4;
  int iVar5;
  iVar5 = *param_1;
  uVar2 = *(u32 *)(*(u32 *)(iVar5 + 0x1c) + 4);
  uVar4 = *(u32 *)(iVar5 + 0x1c);
  while (uVar3 = uVar2, uVar3 != 0) {
    if (*(u32 *)(uVar3 + 0x10) < param_2) {
      uVar2 = *(u32 *)(uVar3 + 0xc);
    }
    else {
      uVar2 = *(u32 *)(uVar3 + 8);
      uVar4 = uVar3;
    }
  }
  if ((uVar4 == *(u32 *)(iVar5 + 0x1c)) || (param_2 < *(u32 *)(uVar4 + 0x10))) {
    uVar4 = *(u32 *)(iVar5 + 0x1c);
  }
  uVar2 = *(u32 *)(iVar5 + 0x1c) ^ uVar4;
  if ((int)(-uVar2 | uVar2) < 0) {
    uVar1 = hardware_Sub_080074C0(iVar5 + 0x14,*(u32 *)(uVar4 + 0x14));
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

/* 0x08075AE8 (24B) | hardware_Sub_08075AE8 (orig: func_08075AE8) | origin: pure | domain: hardware | MEDIUM / graph_algebra */
void hardware_Sub_080E2BB4(u32, u32, u32, u32, u32); void hardware_Sub_08075AE8(u32 *a, u32 b, u32 c, u32 d, u32 e) { hardware_Sub_080E2BB4(*a, b, c, d, e); }

/* 0x0807628C (1812B) | hardware_Sub_0807628C (orig: func_0807628C) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
void hardware_Sub_0807628C(int param_1) {
  u32 uVar1;
  int *piVar2;
  int *piVar3;
  u16 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  u32 uStack_104;
  u32 uStack_100;
  u32 uStack_fc;
  u32 uStack_f8;
  u32 uStack_f4;
  u32 uStack_f0;
  u32 uStack_ec;
  int iStack_e8;
  u16 uStack_e4;
  int iStack_e0;
  u16 uStack_dc;
  int iStack_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  int aiStack_b8 [2];
  int aiStack_b0 [6];
  int iStack_98;
  u16 uStack_94;
  int iStack_90;
  u16 uStack_8c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int *piStack_58;
  int iStack_54;
  int iStack_50;
  int *piStack_4c;
  int iStack_48;
  int *piStack_44;
  char *pcStack_40;
  int iStack_3c;
  char *pcStack_38;
  u16 *puStack_34;
  u16 *puStack_30;
  int *piStack_2c;
  int *piStack_28;
  int *piStack_24;
  pcStack_38 = (char *)(param_1 + 0xa8);
  *pcStack_38 = (int)*(short *)(*(int *)(param_1 + 8) + 0x590) <
                (*(short *)(*(int *)(*(int *)(param_1 + 8) + 4) + 0xe) + -0xa0) * 0x10000 >> 0x10;
  *(char *)(param_1 + 0x70) = 0 < *(short *)(*(int *)(param_1 + 8) + 0x590);
  uStack_104 = 0;
  uStack_100 = 0;
  uStack_fc = uStack_fc & 0xffff0000;
  uStack_f8 = 0;
  uStack_f4 = uStack_f4 & 0xffff0000;
  uStack_f0 = 0;
  uStack_ec = uStack_ec & 0xffffff00;
  code_0803EE94_Sub_0805E8F0((u32 *)(param_1 + 0xe8));
  piVar3 = *(int **)(param_1 + 0xe8);
  func_080D3918(&iStack_e8,piVar3,
                  *(u16 *)(*(int *)(param_1 + 0xec) + (u32)*(u16 *)(param_1 + 0xf4) * 4),
                  *(u32 *)(*piVar3 + 0x10));
  uStack_fc = *(u32 *)(param_1 + 0x104);
  uStack_f8 = *(u32 *)(param_1 + 0x108);
  uStack_f4 = *(u32 *)(param_1 + 0x10c);
  uStack_f0 = *(u32 *)(param_1 + 0x110);
  uStack_ec = *(u32 *)(param_1 + 0x114);
  uStack_104 = *(u32 *)(param_1 + 0xe4);
  uStack_100 = 0;
  uVar1 = hardware_GetField_0x00_8920(param_1);
  uVar4 = 0;
  if (iStack_e8 != 0) {
    uVar4 = uStack_e4;
  }
  pcStack_40 = (char *)(param_1 + 0x70);
  code_0803EE94_Sub_0805E99C(uVar1,iStack_e8,uVar4,&uStack_104);
  piStack_2c = (int *)hardware_GetField_0x00_8910(param_1);
  uVar4 = 0;
  if (iStack_e0 != 0) {
    uVar4 = uStack_dc;
  }
  hardware_Sub_08008F0C(&iStack_c8,iStack_e0,0x06010000,uVar4);
  piVar3 = (int *)piStack_2c[1];
  if (piVar3 == (int *)piStack_2c[3]) {
    piStack_28 = piVar3;
    iStack_74 = 1;
    iStack_78 = (int)piVar3 - *piStack_2c >> 4;
    piVar3 = &iStack_78;
    if (iStack_78 == 0) {
      piVar3 = &iStack_74;
    }
    if (iStack_78 + *piVar3 == 0) {
      piVar3 = (int *)0x0;
      iStack_50 = 0;
    }
    else {
      iVar6 = (iStack_78 + *piVar3) * 0x10;
      piVar3 = (int *)LibC_malloc(iVar6);
      iStack_50 = iVar6;
      if (piVar3 == (int *)0x0) {
        piVar3 = (int *)code_linkonce_Sub_080D3BC0(iVar6);
      }
    }
    piStack_4c = aiStack_b8;
    piStack_58 = (int *)(param_1 + 0xb4);
    iStack_54 = param_1 + 0xc4;
    puStack_34 = (u16 *)(param_1 + 0xac);
    puStack_30 = (u16 *)(param_1 + 0xae);
    piStack_44 = aiStack_b0;
    iStack_48 = param_1 + 0x40;
    iStack_3c = param_1 + 0x78;
    piVar5 = piVar3;
    for (piVar2 = (int *)*piStack_2c; piVar2 != piStack_28; piVar2 = piVar2 + 4) {
      if (piVar5 != (int *)0x0) {
        iVar6 = piVar2[1];
        iVar7 = piVar2[2];
        *piVar5 = *piVar2;
        piVar5[1] = iVar6;
        piVar5[2] = iVar7;
        piVar5[3] = piVar2[3];
      }
      piVar5 = piVar5 + 4;
    }
    iVar6 = iStack_74;
    if (iStack_74 == 1) {
      if (piVar5 != (int *)0x0) {
        *piVar5 = iStack_c8;
        piVar5[1] = iStack_c4;
        piVar5[2] = iStack_c0;
        piVar5[3] = iStack_bc;
      }
      piVar5 = piVar5 + 4;
    }
    else {
      for (; iVar6 != 0; iVar6 = iVar6 + -1) {
        if (piVar5 != (int *)0x0) {
          *piVar5 = iStack_c8;
          piVar5[1] = iStack_c4;
          piVar5[2] = iStack_c0;
          piVar5[3] = iStack_bc;
        }
        piVar5 = piVar5 + 4;
      }
    }
    for (iVar6 = *piStack_2c; iVar6 != piStack_2c[1]; iVar6 = iVar6 + 0x10) {
    }
    if (*piStack_2c != 0) {
      LibC_free();
    }
    *piStack_2c = (int)piVar3;
    piStack_2c[1] = (int)piVar5;
    piStack_2c[3] = iStack_50 + (int)piVar3;
  }
  else {
    if (piVar3 != (int *)0x0) {
      *piVar3 = iStack_c8;
      piVar3[1] = iStack_c4;
      piVar3[2] = iStack_c0;
      piVar3[3] = iStack_bc;
    }
    piStack_2c[1] = piStack_2c[1] + 0x10;
    piStack_4c = aiStack_b8;
    piStack_58 = (int *)(param_1 + 0xb4);
    iStack_54 = param_1 + 0xc4;
    puStack_34 = (u16 *)(param_1 + 0xac);
    puStack_30 = (u16 *)(param_1 + 0xae);
    piStack_44 = aiStack_b0;
    iStack_48 = param_1 + 0x40;
    iStack_3c = param_1 + 0x78;
  }
  code_0803EE94_Sub_0805E8F0((u32 *)(param_1 + 0xb0));
  piVar3 = *(int **)(param_1 + 0xb0);
  func_080D3918(piStack_4c,piVar3,
                  *(u16 *)(*piStack_58 + (u32)*(u16 *)(param_1 + 0xbc) * 4),
                  *(u32 *)(*piVar3 + 0x10));
  uStack_fc = *(u32 *)(iStack_54 + 8);
  uStack_f8 = *(u32 *)(iStack_54 + 0xc);
  uStack_f4 = *(u32 *)(iStack_54 + 0x10);
  uStack_f0 = *(u32 *)(iStack_54 + 0x14);
  uStack_ec = *(u32 *)(iStack_54 + 0x18);
  uStack_104 = ((u16)(*puStack_34));
  uStack_100 = 0x10000;
  uVar1 = hardware_GetField_0x00_8920(param_1);
  uVar4 = 0;
  if (aiStack_b8[0] != 0) {
    uVar4 = (u16)piStack_4c[1];
  }
  code_0803EE94_Sub_0805E99C(uVar1,aiStack_b8[0],uVar4,&uStack_104);
  piStack_28 = (int *)hardware_GetField_0x00_8910(param_1);
  uVar4 = 0;
  if (aiStack_b0[0] != 0) {
    uVar4 = (u16)piStack_44[1];
  }
  hardware_Sub_08008F0C(&iStack_c8,aiStack_b0[0],0x06010020,uVar4);
  piVar3 = (int *)piStack_28[1];
  if (piVar3 == (int *)piStack_28[3]) {
    piStack_2c = piVar3;
    iStack_6c = 1;
    iStack_70 = (int)piVar3 - *piStack_28 >> 4;
    piVar3 = &iStack_70;
    if (iStack_70 == 0) {
      piVar3 = &iStack_6c;
    }
    if (iStack_70 + *piVar3 == 0) {
      piVar3 = (int *)0x0;
      iVar6 = 0;
    }
    else {
      iVar6 = (iStack_70 + *piVar3) * 0x10;
      piVar3 = (int *)LibC_malloc(iVar6);
      if (piVar3 == (int *)0x0) {
        piVar3 = (int *)code_linkonce_Sub_080D3BC0(iVar6);
      }
    }
    piVar5 = piVar3;
    for (piVar2 = (int *)*piStack_28; piVar2 != piStack_2c; piVar2 = piVar2 + 4) {
      if (piVar5 != (int *)0x0) {
        iVar7 = piVar2[1];
        iVar9 = piVar2[2];
        *piVar5 = *piVar2;
        piVar5[1] = iVar7;
        piVar5[2] = iVar9;
        piVar5[3] = piVar2[3];
      }
      piVar5 = piVar5 + 4;
    }
    iVar7 = iStack_6c;
    if (iStack_6c == 1) {
      if (piVar5 != (int *)0x0) {
        *piVar5 = iStack_c8;
        piVar5[1] = iStack_c4;
        piVar5[2] = iStack_c0;
        piVar5[3] = iStack_bc;
      }
      piVar5 = piVar5 + 4;
    }
    else {
      for (; iVar7 != 0; iVar7 = iVar7 + -1) {
        if (piVar5 != (int *)0x0) {
          *piVar5 = iStack_c8;
          piVar5[1] = iStack_c4;
          piVar5[2] = iStack_c0;
          piVar5[3] = iStack_bc;
        }
        piVar5 = piVar5 + 4;
      }
    }
    for (iVar7 = *piStack_28; iVar7 != piStack_28[1]; iVar7 = iVar7 + 0x10) {
    }
    if (*piStack_28 != 0) {
      LibC_free();
    }
    *piStack_28 = (int)piVar3;
    piStack_28[1] = (int)piVar5;
    piStack_28[3] = iVar6 + (int)piVar3;
  }
  else {
    if (piVar3 != (int *)0x0) {
      *piVar3 = iStack_c8;
      piVar3[1] = iStack_c4;
      piVar3[2] = iStack_c0;
      piVar3[3] = iStack_bc;
    }
    piStack_28[1] = piStack_28[1] + 0x10;
  }
  code_0803EE94_Sub_0805E8F0(iStack_48);
  if (*pcStack_40 != '\0') {
    func_080D3918(&iStack_98,*(int **)(param_1 + 0x40),
                    *(u16 *)
                     (*(int *)(param_1 + 0x44) + (u32)*(u16 *)(iStack_48 + 0xc) * 4),
                    *(u32 *)(**(int **)(param_1 + 0x40) + 0x10));
    uStack_fc = *(u32 *)(param_1 + 0x5c);
    uStack_f8 = *(u32 *)(param_1 + 0x60);
    uStack_f4 = *(u32 *)(param_1 + 100);
    uStack_f0 = *(u32 *)(param_1 + 0x68);
    uStack_ec = *(u32 *)(param_1 + 0x6c);
    uStack_104 = *(u32 *)(param_1 + 0x3c);
    uStack_100 = 0x20000;
    uVar1 = hardware_GetField_0x00_8920(param_1);
    uVar4 = 0;
    if (iStack_98 != 0) {
      uVar4 = uStack_94;
    }
    code_0803EE94_Sub_0805E99C(uVar1,iStack_98,uVar4,&uStack_104);
    piStack_2c = (int *)hardware_GetField_0x00_8910(param_1);
    uVar4 = 0;
    if (iStack_90 != 0) {
      uVar4 = uStack_8c;
    }
    hardware_Sub_08008F0C(&iStack_c8,iStack_90,0x06010040,uVar4);
    piVar3 = (int *)piStack_2c[1];
    if (piVar3 == (int *)piStack_2c[3]) {
      iStack_64 = 1;
      iStack_68 = (int)piVar3 - *piStack_2c >> 4;
      piVar2 = &iStack_68;
      if (iStack_68 == 0) {
        piVar2 = &iStack_64;
      }
      if (iStack_68 + *piVar2 == 0) {
        piStack_24 = (int *)0x0;
        iVar6 = 0;
      }
      else {
        iVar6 = (iStack_68 + *piVar2) * 0x10;
        piStack_24 = (int *)LibC_malloc(iVar6);
        if (piStack_24 == (int *)0x0) {
          piStack_24 = (int *)code_linkonce_Sub_080D3BC0(iVar6);
        }
      }
      piVar5 = piStack_24;
      for (piVar2 = (int *)*piStack_2c; piVar2 != piVar3; piVar2 = piVar2 + 4) {
        if (piVar5 != (int *)0x0) {
          iVar7 = piVar2[1];
          iVar9 = piVar2[2];
          *piVar5 = *piVar2;
          piVar5[1] = iVar7;
          piVar5[2] = iVar9;
          piVar5[3] = piVar2[3];
        }
        piVar5 = piVar5 + 4;
      }
      iVar7 = iStack_64;
      if (iStack_64 == 1) {
        if (piVar5 != (int *)0x0) {
          *piVar5 = iStack_c8;
          piVar5[1] = iStack_c4;
          piVar5[2] = iStack_c0;
          piVar5[3] = iStack_bc;
        }
        piVar5 = piVar5 + 4;
      }
      else {
        for (; iVar7 != 0; iVar7 = iVar7 + -1) {
          if (piVar5 != (int *)0x0) {
            *piVar5 = iStack_c8;
            piVar5[1] = iStack_c4;
            piVar5[2] = iStack_c0;
            piVar5[3] = iStack_bc;
          }
          piVar5 = piVar5 + 4;
        }
      }
      for (iVar7 = *piStack_2c; iVar7 != piStack_2c[1]; iVar7 = iVar7 + 0x10) {
      }
      if (*piStack_2c != 0) {
        LibC_free();
      }
      *piStack_2c = (int)piStack_24;
      piStack_2c[1] = (int)piVar5;
      piStack_2c[3] = (int)piStack_24 + iVar6;
    }
    else {
      if (piVar3 != (int *)0x0) {
        *piVar3 = iStack_c8;
        piVar3[1] = iStack_c4;
        piVar3[2] = iStack_c0;
        piVar3[3] = iStack_bc;
      }
      piStack_2c[1] = piStack_2c[1] + 0x10;
    }
  }
  code_0803EE94_Sub_0805E8F0(iStack_3c);
  if (*pcStack_38 != '\0') {
    func_080D3918(&iStack_98,*(int **)(param_1 + 0x78),
                    *(u16 *)
                     (*(int *)(param_1 + 0x7c) + (u32)*(u16 *)(iStack_3c + 0xc) * 4),
                    *(u32 *)(**(int **)(param_1 + 0x78) + 0x10));
    uStack_fc = *(u32 *)(param_1 + 0x94);
    uStack_f8 = *(u32 *)(param_1 + 0x98);
    uStack_f4 = *(u32 *)(param_1 + 0x9c);
    uStack_f0 = *(u32 *)(param_1 + 0xa0);
    uStack_ec = *(u32 *)(param_1 + 0xa4);
    uStack_104 = *(u32 *)(param_1 + 0x74);
    uStack_100 = 0x30000;
    uVar1 = hardware_GetField_0x00_8920(param_1);
    uVar4 = 0;
    if (iStack_98 != 0) {
      uVar4 = uStack_94;
    }
    code_0803EE94_Sub_0805E99C(uVar1,iStack_98,uVar4,&uStack_104);
    piStack_2c = (int *)hardware_GetField_0x00_8910(param_1);
    uVar4 = 0;
    if (iStack_90 != 0) {
      uVar4 = uStack_8c;
    }
    hardware_Sub_08008F0C(&iStack_c8,iStack_90,0x06010060,uVar4);
    piVar3 = (int *)piStack_2c[1];
    if (piVar3 == (int *)piStack_2c[3]) {
      iStack_5c = 1;
      iStack_60 = (int)piVar3 - *piStack_2c >> 4;
      piVar2 = &iStack_60;
      if (iStack_60 == 0) {
        piVar2 = &iStack_5c;
      }
      if (iStack_60 + *piVar2 == 0) {
        piVar2 = (int *)0x0;
        iVar6 = 0;
      }
      else {
        iVar6 = (iStack_60 + *piVar2) * 0x10;
        piVar2 = (int *)LibC_malloc(iVar6);
        if (piVar2 == (int *)0x0) {
          piVar2 = (int *)code_linkonce_Sub_080D3BC0(iVar6);
        }
      }
      piVar8 = piVar2;
      for (piVar5 = (int *)*piStack_2c; piVar5 != piVar3; piVar5 = piVar5 + 4) {
        if (piVar8 != (int *)0x0) {
          iVar7 = piVar5[1];
          iVar9 = piVar5[2];
          *piVar8 = *piVar5;
          piVar8[1] = iVar7;
          piVar8[2] = iVar9;
          piVar8[3] = piVar5[3];
        }
        piVar8 = piVar8 + 4;
      }
      iVar7 = iStack_5c;
      if (iStack_5c == 1) {
        if (piVar8 != (int *)0x0) {
          *piVar8 = iStack_c8;
          piVar8[1] = iStack_c4;
          piVar8[2] = iStack_c0;
          piVar8[3] = iStack_bc;
        }
        piVar8 = piVar8 + 4;
      }
      else {
        for (; iVar7 != 0; iVar7 = iVar7 + -1) {
          if (piVar8 != (int *)0x0) {
            *piVar8 = iStack_c8;
            piVar8[1] = iStack_c4;
            piVar8[2] = iStack_c0;
            piVar8[3] = iStack_bc;
          }
          piVar8 = piVar8 + 4;
        }
      }
      for (iVar7 = *piStack_2c; iVar7 != piStack_2c[1]; iVar7 = iVar7 + 0x10) {
      }
      piStack_24 = piVar2;
      if (*piStack_2c != 0) {
        LibC_free();
      }
      *piStack_2c = (int)piStack_24;
      piStack_2c[1] = (int)piVar8;
      piStack_2c[3] = (int)piStack_24 + iVar6;
    }
    else {
      if (piVar3 != (int *)0x0) {
        *piVar3 = iStack_c8;
        piVar3[1] = iStack_c4;
        piVar3[2] = iStack_c0;
        piVar3[3] = iStack_bc;
      }
      piStack_2c[1] = piStack_2c[1] + 0x10;
    }
  }
  func_080D3910(*(int *)(param_1 + 8),
                  *(u32 *)(*(int *)(*(int *)(param_1 + 8) + 0x000005B4) + 0xc));
}

/* 0x08079860 (516B) | hardware_Sub_08079860 (orig: func_08079860) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
void hardware_Sub_08079860(int param_1) {
  u16 uVar1;
  int iVar2;
  u32 uVar3;
  u32 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  short *psVar8;
  u16 *puVar9;
  int iVar10;
  int iVar11;
  u32 uVar12;
  u32 *puVar13;
  iVar2 = 0xFFFFF7F0;
  puVar13 = (u32 *)(0 + 0xFFFFF7F0);
  iVar5 = hardware_GetField_0x00_8918();
  *(u16 *)(0 + iVar2) = 0;
  *(u16 *)(iVar5 + 0x14) = 0;
  iVar5 = hardware_GetField_0x00_8918(param_1);
  *(u16 *)(0 + iVar2) = 0;
  *(u16 *)(iVar5 + 0x16) = 0;
  iVar5 = hardware_GetField_0x00_8918(param_1);
  *(u16 *)(0 + iVar2) = 0;
  *(u16 *)(iVar5 + 0x18) = 0;
  iVar5 = hardware_GetField_0x00_8918(param_1);
  *(u16 *)(0 + iVar2) = 0;
  *(u16 *)(iVar5 + 0x1a) = 0;
  iVar5 = hardware_GetField_0x00_8918(param_1);
  *(u16 *)(0 + iVar2) = 0;
  *(u16 *)(iVar5 + 0x1c) = 0;
  iVar5 = hardware_GetField_0x00_8918(param_1);
  *(u16 *)(0 + iVar2) = 0;
  *(u16 *)(iVar5 + 0x1e) = 0;
  hardware_HW_DMA3SAD_8EB8(0,0x06007FE0,0x20);
  uVar3 = 0x0600E000;
  hardware_HW_DMA3SAD_8EB8(0xffffffff,0x0600E000,0x800);
  uVar4 = 0x0600E800;
  hardware_HW_DMA3SAD_8EB8(0xffffffff,0x0600E800,0x800);
  hardware_HW_DMA3SAD_8EB8(0xffffffff,0x0600F000,0x800);
  iVar5 = hardware_GetField_0x00_8918(param_1);
  *(short *)(0 + iVar2) = (short)0x00001C43;
  *(short *)(iVar5 + 0xe) = (short)0x00001C43;
  iVar5 = hardware_GetField_0x00_8918(param_1);
  *(short *)(0 + iVar2) = (short)0x00001D41;
  *(short *)(iVar5 + 0xc) = (short)0x00001D41;
  iVar5 = hardware_GetField_0x00_8918(param_1);
  *(short *)(0 + iVar2) = (short)0x00001E42;
  *(short *)(iVar5 + 10) = (short)0x00001E42;
  hardware_HW_DMA3SAD(*(u16 *)0x080F9F70,0x6000000,*(u16 *)0x080F9F74);
  hardware_HW_DMA3SAD_8EB8(0x00030003,uVar3,0x800);
  *puVar13 = 3;
  *(u32 *)(0 + iVar2) = 0;
  *(u32 *)(0 + iVar2) = 0;
  code_0803EE94_Sub_08051320(uVar4,0,0,0x20);
  hardware_HW_DMA3SAD(*(u16 *)0x080F9F78,0x5000000,0x20);
  puVar9 = 0x05000040;
  *(u16 *)0x05000040 = 0x3e0;
  puVar9[1] = 0;
  uVar1 = (u16)0x00004218;
  puVar9[2] = uVar1;
  param_1 = param_1 + 0x00000828;
  iVar5 = hardware_Sub_080074C0(param_1,*(u32 *)(param_1 + 4));
  *(u16 *)(iVar5 * 0x20 + 0x05000200) = 0x3e0;
  iVar5 = hardware_Sub_080074C0(param_1,*(u32 *)(param_1 + 4));
  *(u16 *)(iVar5 * 0x20 + 0x05000202) = 0;
  iVar5 = hardware_Sub_080074C0(param_1,*(u32 *)(param_1 + 4));
  *(u16 *)(iVar5 * 0x20 + 0x05000204) = uVar1;
  hardware_HW_DMA3SAD_8EB8(0xffffffff,0 + iVar2,0x800);
  iVar5 = 0;
  uVar12 = 0x00002060;
  do {
    iVar11 = 0;
    iVar7 = iVar5 * 0x80;
    iVar6 = iVar5 * 2;
    iVar5 = iVar5 + 1;
    iVar10 = uVar12 + 0x1c;
    puVar9 = (u16 *)(0 + (iVar6 + 1) * 0x40 + iVar2);
    psVar8 = (short *)(0 + iVar7 + iVar2);
    do {
      *psVar8 = (short)uVar12 + (short)iVar11;
      *puVar9 = (short)iVar10;
      iVar10 = iVar10 + 1;
      puVar9 = puVar9 + 1;
      psVar8 = psVar8 + 1;
      iVar11 = iVar11 + 1;
    } while (iVar11 < 0x1c);
    uVar12 = uVar12 + 0x38 & 0xffff;
  } while (iVar5 < 0x10);
  hardware_HW_DMA3SAD(0 + iVar2,0x0600F000,0x800);
  return *(u32 *)(0 + iVar2);
}

/* 0x08093BFC (24B) | hardware_Sub_08093BFC (orig: func_08093BFC) | origin: pure | domain: hardware | MEDIUM / graph_algebra */
int hardware_GetField_0x00_88CC(void *); int hardware_Sub_08093BFC(void *a) { if (hardware_GetField_0x00_88CC(a) & 2) return 1; return 0; }

/* 0x08093C14 (40B) | hardware_Sub_08093C14 (orig: func_08093C14) | origin: pure | domain: hardware | MEDIUM / tu_interp */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_0803EE94_78C0_Sub_08050DC8();
extern u32 PortraitEngine_Sub_08050E50();
void hardware_Sub_08093C14(int arg0) {
  code_0803EE94_78C0_Sub_08050DC8(arg0 + 0x1d0,0x08100594,0,0);
  PortraitEngine_Sub_08050E50(arg0 + 0x1d0,0x38);
}

/* 0x08093C3C (4B) | hardware_NoOp (orig: func_08093C3C) | origin: pure | domain: hardware | MEDIUM / tu_interp */
void hardware_NoOp(void) {
}

/* 0x08093C40 (128B) | hardware_Sub_08093C40 (orig: func_08093C40) | origin: wip | domain: hardware | MEDIUM / tu_interp */
u32 hardware_Sub_08093C40(int param_1) {
  int iVar1;
  u32 uVar2;
  uVar2 = 0;
  iVar1 = *(int *)(param_1 + 0x3e4);
  if ((u8)iVar1 == 0) {
    iVar1 = code_0803EE94_GetField_0x00(param_1 + 0x1d0);
    if (iVar1 == 3) {
      *(int *)(param_1 + 0x3e4) = 1;
      code_0803EE94_Sub_08050E30(param_1 + 0x1d0,0x08100588,0x0810058C,0x08100590,0,0,0);
    }
  }
  else if ((s8)iVar1 == 1) {
    iVar1 = code_0803EE94_GetField_0x00(param_1 + 0x1d0);
    if (iVar1 == 3) {
      iVar1 = code_0803EE94_Sub_08050DF0(param_1 + 0x1d0);
      if (iVar1 == 1) {
        uVar2 = 2;
      }
      else if (iVar1 == 2) {
        uVar2 = 3;
      }
    }
  }
  return (uVar2);
}

/* 0x08093CC0 (60B) | hardware_Sub_08093CC0 (orig: func_08093CC0) | origin: pure | domain: hardware | MEDIUM / tu_interp */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_0803EE94_78C0_Sub_08050DC8();
extern u32 PortraitEngine_Sub_08050E50();
void hardware_Sub_08093CC0(int arg0) {
  *(u32 *)(arg0 + 0x3e0) = 0;
  *(u32 *)(arg0 + 0x3e4) = 0;
  code_0803EE94_78C0_Sub_08050DC8(arg0 + 0x1d0,0x08100558,0,0);
  PortraitEngine_Sub_08050E50(arg0 + 0x1d0,0x3a);
}

/* 0x08093CFC (40B) | hardware_Sub_08093CFC (orig: func_08093CFC) | origin: pure | domain: hardware | MEDIUM / tu_interp */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_0803EE94_78C0_Sub_08050DC8();
extern u32 PortraitEngine_Sub_08050E50();
void hardware_Sub_08093CFC(int arg0) {
  code_0803EE94_78C0_Sub_08050DC8(arg0 + 0x1d0,0x08100540,0,0);
  PortraitEngine_Sub_08050E50(arg0 + 0x1d0,0x38);
}

/* 0x08093D24 (40B) | hardware_Sub_08093D24 (orig: func_08093D24) | origin: pure | domain: hardware | MEDIUM / tu_interp */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_0803EE94_78C0_Sub_08050DC8();
extern u32 PortraitEngine_Sub_08050E50();
void hardware_Sub_08093D24(int arg0) {
  code_0803EE94_78C0_Sub_08050DC8(arg0 + 0x1d0,0x08100524,0,0);
  PortraitEngine_Sub_08050E50(arg0 + 0x1d0,0x38);
}

/* 0x08093D4C (24B) | hardware_Sub_08093D4C (orig: func_08093D4C) | origin: pure | domain: hardware | MEDIUM / graph_algebra */
int hardware_GetField_0x00_88CC(void *); int hardware_Sub_08093D4C(void *a) { if (hardware_GetField_0x00_88CC(a) & 2) return 1; return 0; }

/* 0x08093D64 (40B) | hardware_Sub_08093D64 (orig: func_08093D64) | origin: pure | domain: hardware | MEDIUM / tu_interp */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_0803EE94_78C0_Sub_08050DC8();
extern u32 PortraitEngine_Sub_08050E50();
void hardware_Sub_08093D64(int arg0) {
  code_0803EE94_78C0_Sub_08050DC8(arg0 + 0x1d0,0x081004E0,0,0);
  PortraitEngine_Sub_08050E50(arg0 + 0x1d0,0x39);
}

/* 0x08093D8C (12B) | hardware_Sub_08093D8C (orig: func_08093D8C) | origin: pure | domain: hardware | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 hardware_GetField_0x00_88CC();
u32 hardware_Sub_08093D8C(void) {
  return hardware_GetField_0x00_88CC();
}

/* 0x08093D98 (12B) | hardware_Sub_08093D98 (orig: func_08093D98) | origin: pure | domain: hardware | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 hardware_GetField_0x00();
u32 hardware_Sub_08093D98(void) {
  return hardware_GetField_0x00();
}

/* 0x08099000 (324B) | hardware_Sub_08099000 (orig: func_08099000) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
void hardware_Sub_08099000(int param_1,char param_2) {
  u8 bVar1;
  u32 uVar2;
  int iVar3;
  u8 *pbVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  u32 uVar8;
  u32 uStack_28;
  u32 uStack_24;
  hardware_Sub_0809A3E0();
  uVar8 = 0xFFFFF3FF;
  if (param_2 == '\x01') {
    uStack_28 = ((uStack_28 & 0xFFFFFCFF & 0xFFFFF3FF | 0x1000) & 0xFFFFDFFF &
                 0xFFFF3FFF | 0x8000) & 0xF1FFFFFF & 0xEFFFFFFF & 0xDFFFFFFF &
                0x3FFFFFFF;
    uVar2 = hardware_Sub_080074C0(param_1 + 0x308,*(u32 *)(param_1 + 0x30c));
    uStack_24 = (uStack_24 & 0xFFFF0FFF | (uVar2 & 0xf) << 0xc) & 0x0000FFFF & uVar8 | 0x400;
    iVar5 = 0;
    do {
      iVar7 = 0;
      iVar6 = iVar5 + 1;
      uVar8 = 0x98;
      do {
        uStack_28 = (uStack_28 & 0xFE00FFFF | (0x000001FF & uVar8) << 0x10) & 0xFFFFFF00 |
                    iVar5 * 0x10 + 0x10U & 0xff;
        iVar3 = hardware_Sub_08007D4C(param_1 + 0x300,*(u32 *)(param_1 + 0x304));
        uStack_24 = uStack_24 & 0xFFFFFC00 | iVar3 + iVar7 * 2 + iVar5 * 0x14 & 0x3ffU;
        pbVar4 = (u8 *)hardware_GetField_0x00_8920(param_1);
        bVar1 = *pbVar4;
        if (bVar1 < 0x80) {
          *(u32 *)(pbVar4 + (u32)bVar1 * 8 + 4) = uStack_28;
          *(u16 *)((int)(pbVar4 + (u32)bVar1 * 8 + 4) + 4) = (u16)uStack_24;
          *pbVar4 = bVar1 + 1;
        }
        uVar8 = uVar8 + 8;
        iVar7 = iVar7 + 1;
      } while (iVar7 < 10);
      iVar5 = iVar6;
    } while (iVar6 < 5);
  }
}

/* 0x080A3588 (144B) | hardware_Sub_080A3588 (orig: func_080A3588) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
void hardware_Sub_080A3588(u32 param_1,int param_2,u32 param_3,int param_4,int param_5,
             u32 param_6) {
  bool bVar1;
  int iVar2;
  int iVar3;
  bVar1 = false;
  if (1 < param_5) {
    iVar3 = 10;
    while (param_5 = (s16)param_5 + -1, 1 < param_5) {
      iVar3 = iVar3 * 10;
    }
    for (; 0 < iVar3; iVar3 = (s16)func_080D0EC8(iVar3,10)) {
LAB_080a35c0:
      if ((u8)1 == iVar3) {
        bVar1 = true;
      }
      iVar2 = (s16)func_080D0EC8(param_4,iVar3);
      if ((iVar2 != 0) || (bVar1)) {
        hardware_Sub_080A3618(param_1,param_2,param_3,iVar2,param_6);
        bVar1 = true;
      }
      param_2 = (s8)param_2 + 0x10;
      param_4 = (s8)param_4 - iVar3 * iVar2;
    }
  }
  iVar3 = 1;
  goto LAB_080a35c0;
}

/* 0x080A480C (312B) | hardware_Sub_080A480C (orig: func_080A480C) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
void hardware_Sub_080A480C(int param_1,int *param_2,int *param_3) {
  int iVar1;
  int *piVar2;
  u32 *puVar3;
  u32 *puVar4;
  u32 *puVar5;
  int iVar6;
  short sVar7;
  int iVar8;
  u32 uVar9;
  u32 uVar10;
  u32 uStack_3c;
  u32 uStack_38;
  u32 uStack_34;
  u32 uStack_30;
  int iStack_2c;
  int iStack_28;
  u32 *puStack_24;
  iVar8 = *param_3;
  sVar7 = 0;
  if (iVar8 != 0) {
    sVar7 = (short)param_3[1];
  }
  if (sVar7 != 0) {
    iVar1 = hardware_Sub_08007D4C(param_1 + 4,*(u32 *)(param_1 + 8));
    hardware_Sub_08008F0C(&uStack_3c,iVar8,iVar1 * 0x20 + 0x06010000,sVar7);
    puVar4 = (u32 *)param_2[1];
    if (puVar4 == (u32 *)param_2[3]) {
      iStack_28 = 1;
      puVar5 = (u32 *)*param_2;
      iStack_2c = (int)puVar4 - (int)puVar5 >> 4;
      piVar2 = &iStack_2c;
      if (iStack_2c == 0) {
        piVar2 = &iStack_28;
      }
      if (iStack_2c + *piVar2 == 0) {
        puVar3 = (u32 *)0x0;
        iVar8 = 0;
        puStack_24 = puVar3;
      }
      else {
        iVar8 = (iStack_2c + *piVar2) * 0x10;
        puVar3 = (u32 *)LibC_malloc(iVar8);
        if (puVar3 == (u32 *)0x0) {
          puVar3 = (u32 *)code_linkonce_Sub_080D3BC0(iVar8);
        }
        puVar5 = (u32 *)*param_2;
        puStack_24 = puVar3;
      }
      for (; puVar5 != puVar4; puVar5 = puVar5 + 4) {
        if (puVar3 != (u32 *)0x0) {
          uVar9 = puVar5[1];
          uVar10 = puVar5[2];
          *puVar3 = *puVar5;
          puVar3[1] = uVar9;
          puVar3[2] = uVar10;
          puVar3[3] = puVar5[3];
        }
        puVar3 = puVar3 + 4;
      }
      iVar1 = iStack_28;
      if (iStack_28 == 1) {
        if (puVar3 != (u32 *)0x0) {
          *puVar3 = uStack_3c;
          puVar3[1] = uStack_38;
          puVar3[2] = uStack_34;
          puVar3[3] = uStack_30;
        }
        puVar3 = puVar3 + 4;
      }
      else {
        for (; iVar1 != 0; iVar1 = iVar1 + -1) {
          if (puVar3 != (u32 *)0x0) {
            *puVar3 = uStack_3c;
            puVar3[1] = uStack_38;
            puVar3[2] = uStack_34;
            puVar3[3] = uStack_30;
          }
          puVar3 = puVar3 + 4;
        }
      }
      iVar6 = *param_2;
      for (iVar1 = iVar6; iVar1 != param_2[1]; iVar1 = iVar1 + 0x10) {
      }
      if (iVar6 != 0) {
        LibC_free(iVar6);
      }
      *param_2 = (int)puStack_24;
      param_2[1] = (int)puVar3;
      param_2[3] = (int)puStack_24 + iVar8;
    }
    else {
      if (puVar4 != (u32 *)0x0) {
        *puVar4 = uStack_3c;
        puVar4[1] = uStack_38;
        puVar4[2] = uStack_34;
        puVar4[3] = uStack_30;
      }
      param_2[1] = param_2[1] + 0x10;
    }
  }
}

/* 0x080A5AB0 (296B) | hardware_Sub_080A5AB0 (orig: func_080A5AB0) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
void hardware_Sub_080A5AB0(u32 param_1,u16 *param_2,int param_3,int *param_4) {
  int *piVar1;
  u32 *puVar2;
  int iVar3;
  u32 *puVar4;
  u32 *puVar5;
  int iVar6;
  u32 uVar7;
  int iVar8;
  u32 uVar9;
  u32 uVar10;
  u32 uStack_3c;
  u32 uStack_38;
  u32 uStack_34;
  u32 uStack_30;
  int iStack_2c;
  int iStack_28;
  u32 *puStack_24;
  uVar7 = (u32)**(u16 **)(param_2 + 2);
  hardware_Sub_08008F0C(&uStack_3c,*(u16 **)(param_2 + 2) + param_3 * uVar7 * 0x10 + 2,
                (u32)*param_2 * 0x20 + 0x6000000,uVar7 << 5);
  puVar4 = (u32 *)param_4[1];
  if (puVar4 == (u32 *)param_4[3]) {
    iStack_28 = 1;
    puVar5 = (u32 *)*param_4;
    iStack_2c = (int)puVar4 - (int)puVar5 >> 4;
    piVar1 = &iStack_2c;
    if (iStack_2c == 0) {
      piVar1 = &iStack_28;
    }
    if (iStack_2c + *piVar1 == 0) {
      puVar2 = (u32 *)0x0;
      iVar8 = 0;
      puStack_24 = puVar2;
    }
    else {
      iVar8 = (iStack_2c + *piVar1) * 0x10;
      puVar2 = (u32 *)LibC_malloc(iVar8);
      if (puVar2 == (u32 *)0x0) {
        puVar2 = (u32 *)code_linkonce_Sub_080D3BC0(iVar8);
      }
      puVar5 = (u32 *)*param_4;
      puStack_24 = puVar2;
    }
    for (; puVar5 != puVar4; puVar5 = puVar5 + 4) {
      if (puVar2 != (u32 *)0x0) {
        uVar9 = puVar5[1];
        uVar10 = puVar5[2];
        *puVar2 = *puVar5;
        puVar2[1] = uVar9;
        puVar2[2] = uVar10;
        puVar2[3] = puVar5[3];
      }
      puVar2 = puVar2 + 4;
    }
    iVar3 = iStack_28;
    if (iStack_28 == 1) {
      if (puVar2 != (u32 *)0x0) {
        *puVar2 = uStack_3c;
        puVar2[1] = uStack_38;
        puVar2[2] = uStack_34;
        puVar2[3] = uStack_30;
      }
      puVar2 = puVar2 + 4;
    }
    else {
      for (; iVar3 != 0; iVar3 = iVar3 + -1) {
        if (puVar2 != (u32 *)0x0) {
          *puVar2 = uStack_3c;
          puVar2[1] = uStack_38;
          puVar2[2] = uStack_34;
          puVar2[3] = uStack_30;
        }
        puVar2 = puVar2 + 4;
      }
    }
    iVar6 = *param_4;
    for (iVar3 = iVar6; iVar3 != param_4[1]; iVar3 = iVar3 + 0x10) {
    }
    if (iVar6 != 0) {
      LibC_free(iVar6);
    }
    *param_4 = (int)puStack_24;
    param_4[1] = (int)puVar2;
    param_4[3] = (int)puStack_24 + iVar8;
  }
  else {
    if (puVar4 != (u32 *)0x0) {
      *puVar4 = uStack_3c;
      puVar4[1] = uStack_38;
      puVar4[2] = uStack_34;
      puVar4[3] = uStack_30;
    }
    param_4[1] = param_4[1] + 0x10;
  }
}

/* 0x080AAF9C (28B) | hardware_Sub_080AAF9C (orig: func_080AAF9C) | origin: pure | domain: hardware | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 hardware_HW_DMA3SAD();
void hardware_Sub_080AAF9C(int *arg0,int arg1) {
  if ((arg1 != 0) && (*arg0 == 2)) {
    hardware_HW_DMA3SAD(arg0[0xb],arg1,0xb000);
  }
}

/* 0x080AB2E4 (156B) | hardware_Sub_080AB2E4 (orig: func_080AB2E4) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
void hardware_Sub_080AB2E4(int *param_1,u32 param_2) {
  u32 *puVar1;
  u32 *puVar2;
  u32 *puVar3;
  u32 *puVar4;
  u32 *puVar5;
  puVar1 = (u32 *)*param_1;
  if (puVar1 != (u32 *)0x0) {
    func_080D3914((int *)*puVar1,*(u8 *)(puVar1 + 0xd5),
                    *(u32 *)(*(int *)*puVar1 + 0x4c));
    if ((puVar1 != (u32 *)0xfffffff8) && (puVar1 + 2 != puVar1 + 0xd4)) {
      puVar3 = puVar1 + 0xe5;
      puVar4 = puVar1 + 0xd4;
      do {
        puVar3 = puVar3 + -0x15;
        puVar5 = puVar4 + -0x15;
        if (puVar3 != (u32 *)0x0) {
          while (puVar3 != puVar4) {
            puVar2 = puVar4 + -2;
            hardware_Sub_08007C28(puVar2,puVar4[-1]);
            hardware_Sub_080079E8(puVar2,2);
            puVar4 = puVar2;
          }
        }
        puVar4 = puVar5;
      } while (puVar1 + 2 != puVar5);
    }
    CppRuntime_builtin_delete(puVar1);
  }
  if ((param_2 & 1) != 0) {
    CppRuntime_builtin_delete(param_1);
  }
}

/* 0x080AB380 (144B) | hardware_Sub_080AB380 (orig: func_080AB380) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
void hardware_Sub_080AB380(int *param_1) {
  int iVar5;
  int iVar2;
  u32 uVar3;
  int iVar4;
  int iVar1;
  char *pcVar6;
  char *pcVar7;
  u16 uVar8;
  iVar1 = *param_1;
  iVar4 = 0;
  iVar5 = 0;
  uVar3 = 0;
  iVar2 = iVar1 + 0x368;
  do {
    if (*(char *)(iVar2 + 4) != '\0') {
      iVar4 = iVar4 + 1;
      if (*(u8 *)(iVar2 + 5) < 2) {
        *(u8 *)(iVar2 + 4) = 0;
        iVar5 = iVar5 + 1;
      }
      else {
        *(u8 *)(iVar2 + 5) = *(u16 *)(iVar2 + 5) - 1;
      }
    }
    iVar2 = iVar2 + 8;
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x10);
  if ((iVar4 != 0) && (iVar5 == iVar4)) {
    uVar3 = 0;
    do {
      pcVar7 = (char *)(iVar1 + uVar3 * 0x54 + 8);
      uVar3 = uVar3 + 1;
      if (*pcVar7 != '\0') {
        uVar8 = 0;
        pcVar6 = pcVar7 + 0x48;
        do {
          hardware_Sub_08007C28(pcVar7 + uVar8 * 8 + 0x44,*(u32 *)pcVar6);
          pcVar6[0] = '\0';
          pcVar6[1] = '\0';
          pcVar6[2] = '\0';
          pcVar6[3] = '\0';
          pcVar6 = pcVar6 + 8;
          uVar8 = uVar8 + 1;
        } while (uVar8 < 2);
        *pcVar7 = '\0';
        pcVar7[1] = '\0';
      }
    } while (uVar3 < 10);
  }
}

/* 0x080AB410 (636B) | hardware_Sub_080AB410 (orig: func_080AB410) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
void hardware_Sub_080AB410(int *param_1,u32 param_2,int *param_3) {
  short sVar1;
  int *piVar2;
  int iVar3;
  u32 uVar4;
  u32 *puVar5;
  u32 *puVar6;
  int iVar7;
  u32 uVar8;
  char *pcVar9;
  u16 uVar10;
  int iVar11;
  u32 uVar12;
  short *psVar13;
  u32 uVar14;
  u32 uStack_5c;
  u32 uStack_58;
  u32 uStack_54;
  u32 uStack_50;
  int iStack_4c;
  int iStack_48;
  u32 uStack_44;
  u32 *puStack_40;
  int *piStack_3c;
  u32 *puStack_38;
  int iStack_34;
  u32 uStack_30;
  int iStack_2c;
  u32 *puStack_28;
  u32 *puStack_24;
  puStack_40 = (u32 *)*param_1;
  piStack_3c = (int *)*puStack_40;
  uStack_44 = param_2;
  if (*(char *)((int)puStack_40 + 5) != '\0') {
    uStack_30 = 0;
    do {
      pcVar9 = (char *)(puStack_40 + uStack_30 * 0x15 + 2);
      uStack_30 = uStack_30 + 1;
      if ((*pcVar9 != '\0') && (pcVar9[1] != '\0')) {
        uVar14 = 0;
        do {
          iVar11 = uVar14 * 0x20;
          uVar4 = *(u32 *)(pcVar9 + iVar11 + 0xc);
          iVar3 = hardware_Sub_08007D4C(pcVar9 + uVar14 * 8 + 0x44,
                                *(u32 *)(pcVar9 + uVar14 * 8 + 0x48));
          uVar10 = 0;
          if (*(int *)(pcVar9 + iVar11 + 0xc) != 0) {
            uVar10 = *(u16 *)(pcVar9 + iVar11 + 0x10);
          }
          hardware_Sub_08008F0C(&uStack_5c,uVar4,iVar3 * 0x20 + 0x06010000,uVar10);
          puStack_38 = &uStack_5c;
          puVar5 = (u32 *)param_3[1];
          if (puVar5 == (u32 *)param_3[3]) {
            puStack_28 = puVar5;
            iStack_48 = 1;
            puVar6 = (u32 *)*param_3;
            iStack_4c = (int)puVar5 - (int)puVar6 >> 4;
            piVar2 = &iStack_4c;
            if (iStack_4c == 0) {
              piVar2 = &iStack_48;
            }
            if (iStack_4c + *piVar2 == 0) {
              puVar5 = (u32 *)0x0;
              iVar3 = 0;
              puStack_24 = puVar5;
            }
            else {
              iVar3 = (iStack_4c + *piVar2) * 0x10;
              puVar5 = (u32 *)LibC_malloc(iVar3);
              if (puVar5 == (u32 *)0x0) {
                puVar5 = (u32 *)code_linkonce_Sub_080D3BC0(iVar3);
              }
              puVar6 = (u32 *)*param_3;
              puStack_24 = puVar5;
            }
            for (; puVar6 != puStack_28; puVar6 = puVar6 + 4) {
              if (puVar5 != (u32 *)0x0) {
                uVar4 = puVar6[1];
                uVar12 = puVar6[2];
                *puVar5 = *puVar6;
                puVar5[1] = uVar4;
                puVar5[2] = uVar12;
                puVar5[3] = puVar6[3];
              }
              puVar5 = puVar5 + 4;
            }
            iVar11 = iStack_48;
            if (iStack_48 == 1) {
              if (puVar5 != (u32 *)0x0) {
                uVar4 = puStack_38[1];
                uVar12 = puStack_38[2];
                *puVar5 = *puStack_38;
                puVar5[1] = uVar4;
                puVar5[2] = uVar12;
                puVar5[3] = puStack_38[3];
              }
              puVar5 = puVar5 + 4;
            }
            else {
              for (; iVar11 != 0; iVar11 = iVar11 + -1) {
                if (puVar5 != (u32 *)0x0) {
                  uVar4 = puStack_38[1];
                  uVar12 = puStack_38[2];
                  *puVar5 = *puStack_38;
                  puVar5[1] = uVar4;
                  puVar5[2] = uVar12;
                  puVar5[3] = puStack_38[3];
                }
                puVar5 = puVar5 + 4;
              }
            }
            iVar7 = *param_3;
            for (iVar11 = iVar7; iVar11 != param_3[1]; iVar11 = iVar11 + 0x10) {
            }
            if (iVar7 != 0) {
              LibC_free(iVar7);
            }
            *param_3 = (int)puStack_24;
            param_3[1] = (int)puVar5;
            param_3[3] = (int)puStack_24 + iVar3;
          }
          else {
            if (puVar5 != (u32 *)0x0) {
              *puVar5 = uStack_5c;
              puVar5[1] = uStack_58;
              puVar5[2] = uStack_54;
              puVar5[3] = uStack_50;
            }
            param_3[1] = param_3[1] + 0x10;
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 < 2);
        pcVar9[1] = '\0';
      }
    } while (uStack_30 < 10);
    *(u8 *)((int)puStack_40 + 5) = 0;
  }
  puVar5 = puStack_40;
  if (*(char *)((int)puStack_40 + 6) != '\0') {
    func_080D391C(piStack_3c,puStack_40[(u32)*(u8 *)(puStack_40 + 0xd9) * 0x15 + 7],
                    *(u8 *)(puStack_40 + 0xd5),1);
    *(u8 *)((int)puVar5 + 6) = 0;
  }
  iStack_34 = func_080D3910(piStack_3c,*(u32 *)(*piStack_3c + 0x18));
  iVar3 = func_080D3910(piStack_3c,*(u32 *)(*piStack_3c + 0x1c));
  uVar14 = 0;
  puVar5 = puStack_40 + 0xd4;
  psVar13 = (short *)(puStack_40 + 0xda);
  do {
    if ((char)psVar13[2] != '\0') {
      uVar8 = (u32)(*(u8 *)((int)psVar13 + 5) < 7);
      sVar1 = psVar13[1];
      iStack_2c = *psVar13 - iStack_34;
      puVar6 = puStack_40 + (u32)*(u8 *)(psVar13 + 3) * 0x15 + uVar8 * 8 + 3;
      uVar4 = hardware_Sub_08007D4C(puStack_40 + (u32)*(u8 *)(psVar13 + 3) * 0x15 + uVar8 * 2 + 0x13,
                            (puStack_40 + (u32)*(u8 *)(psVar13 + 3) * 0x15 + uVar8 * 2 + 0x13)[1]
                           );
      func_080D391C(uStack_44,iStack_2c,sVar1 - iVar3,0xaa,0x8000 - sVar1,puVar6,piStack_3c,uVar4,
                      puVar5);
    }
    psVar13 = psVar13 + 4;
    uVar14 = uVar14 + 1;
  } while (uVar14 < 0x10);
}

/* 0x080ACAF0 (288B) | hardware_Sub_080ACAF0 (orig: func_080ACAF0) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
void hardware_Sub_080ACAF0(int param_1,u32 *param_2) {
  char cVar1;
  u32 *puVar2;
  int iVar3;
  u32 uVar4;
  int *piVar5;
  u32 uStack_1c;
  u8 uStack_18;
  func_080D3910(*(int *)(param_1 + 4),
                  *(u32 *)(*(int *)(*(int *)(param_1 + 4) + 0x90) + 0xc));
  if (*(int *)(param_1 + 0x00001028) != 0) {
    hardware_Sub_080AB380();
  }
  puVar2 = (u32 *)(param_1 + 0x0000102C);
  uVar4 = *puVar2;
  if ((int)(-uVar4 | uVar4) < 0) {
    if ((char)puVar2[2] == '\0') {
      if (*(char *)(uVar4 + 0x3f) == '\0') {
        iVar3 = code_0803EE94_Sub_0805E8F0(uVar4 + 0x28);
        if (iVar3 * 0x40000000 < 0) {
          *(u8 *)(uVar4 + 0x3c) = 1;
        }
      }
      else {
        *(char *)(uVar4 + 0x3f) = '\0';
        iVar3 = 2;
      }
      if (iVar3 * 0x20000000 < 0) {
        uVar4 = *puVar2;
        if ((uVar4 != 0) && (uVar4 != 0)) {
          func_080D3914(uVar4,3,*(u32 *)(*(int *)(uVar4 + 0x24) + 8));
        }
        *puVar2 = 0;
      }
    }
    else {
      cVar1 = *(char *)((int)puVar2 + 9) + -1;
      *(char *)((int)puVar2 + 9) = cVar1;
      if (cVar1 == '\0') {
        uVar4 = *puVar2;
        if ((uVar4 != 0) && (uVar4 != 0)) {
          func_080D3914(uVar4,3,*(u32 *)(*(int *)(uVar4 + 0x24) + 8));
        }
        *puVar2 = 0;
      }
      else {
        uVar4 = *puVar2;
        if (*(char *)(uVar4 + 0x3f) == '\0') {
          iVar3 = code_0803EE94_Sub_0805E8F0(uVar4 + 0x28);
          if (iVar3 * 0x40000000 < 0) {
            *(u8 *)(uVar4 + 0x3c) = 1;
          }
        }
        else {
          *(char *)(uVar4 + 0x3f) = '\0';
        }
      }
      *(u8 *)((int)puVar2 + 10) = *(char *)((int)puVar2 + 10) + 1U & 7;
    }
  }
  uStack_1c = *param_2;
  uStack_18 = 0;
  for (piVar5 = (int *)(param_1 + 8); piVar5 != (int *)(param_1 + 0x198); piVar5 = piVar5 + 1) {
    iVar3 = *piVar5;
    if (iVar3 != 0) {
      func_080D3914(iVar3,&uStack_1c,*(u32 *)(*(int *)(iVar3 + 0x14) + 0x2c));
    }
  }
}

/* 0x080AD3B0 (236B) | hardware_Sub_080AD3B0 (orig: func_080AD3B0) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
void hardware_Sub_080AD3B0(int param_1,u32 param_2) {
  u32 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  for (piVar4 = (int *)(param_1 + 8); piVar4 != (int *)(param_1 + 0x198); piVar4 = piVar4 + 1) {
    iVar3 = *piVar4;
    if (iVar3 != 0) {
      func_080D3910(iVar3,*(u32 *)(*(int *)(iVar3 + 0x14) + 0x14));
    }
  }
  piVar4 = (int *)(param_1 + 0x00001024);
  iVar3 = *piVar4;
  if ((iVar3 != 0) && (iVar3 != 0)) {
    hardware_Sub_0803AC78(iVar3,3);
  }
  *piVar4 = 0;
  piVar4 = (int *)(param_1 + 0x00001028);
  iVar3 = *piVar4;
  if ((iVar3 != 0) && (iVar3 != 0)) {
    hardware_Sub_080AB2E4(iVar3,3);
  }
  *piVar4 = 0;
  Code_809E804_Sub_080A56DC(*(u32 *)(param_1 + 4),param_2,0,0,0x1e);
  uVar1 = CppRuntime_builtin_new(0xa0);
  iVar3 = hardware_Sub_0803AB30(uVar1,param_1);
  piVar4 = (int *)(param_1 + 0x00001024);
  iVar2 = *piVar4;
  if ((iVar3 != iVar2) && (iVar2 != 0)) {
    hardware_Sub_0803AC78(iVar2,3);
  }
  *piVar4 = iVar3;
  uVar1 = CppRuntime_builtin_new(4);
  iVar3 = hardware_Sub_080AAFC8(uVar1,param_1,*(u32 *)(*(int *)(param_1 + 4) + 4));
  piVar4 = (int *)(param_1 + 0x00001028);
  iVar2 = *piVar4;
  if ((iVar3 != iVar2) && (iVar2 != 0)) {
    hardware_Sub_080AB2E4(iVar2,3);
  }
  *piVar4 = iVar3;
  for (piVar4 = (int *)(param_1 + 8); piVar4 != (int *)(param_1 + 0x198); piVar4 = piVar4 + 1) {
    iVar3 = *piVar4;
    if (iVar3 != 0) {
      func_080D3910(iVar3,*(u32 *)(*(int *)(iVar3 + 0x14) + 0x10));
    }
  }
}

/* 0x080AE6C0 (12B) | hardware_Wrap_Ctor (orig: func_080AE6C0) | origin: pure | domain: hardware | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 hardware_Ctor();
void hardware_Wrap_Ctor(void) {
  hardware_Ctor();
}

/* 0x080AE6CC (260B) | hardware_Sub_080AE6CC (orig: func_080AE6CC) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
void hardware_Sub_080AE6CC(int param_1) {
  u32 uVar1;
  int iVar2;
  iVar2 = param_1 + 0x00000888;
  hardware_Sub_08007C28(iVar2,*(u32 *)(iVar2 + 4));
  uVar1 = hardware_Sub_08007B54(iVar2,3);
  *(u32 *)(iVar2 + 4) = uVar1;
  hardware_Sub_08007C28(param_1 + 0x890,*(u32 *)(param_1 + 0x894));
  uVar1 = hardware_Sub_08007B54(param_1 + 0x890,6);
  *(u32 *)(param_1 + 0x894) = uVar1;
  hardware_Sub_08007C28(param_1 + 0x8a0,*(u32 *)(param_1 + 0x8a4));
  uVar1 = hardware_Sub_08007B54(param_1 + 0x8a0,5);
  *(u32 *)(param_1 + 0x8a4) = uVar1;
  iVar2 = param_1 + 0x000008A8;
  hardware_Sub_08007C28(iVar2,*(u32 *)(iVar2 + 4));
  uVar1 = hardware_Sub_08007B54(iVar2,2);
  *(u32 *)(iVar2 + 4) = uVar1;
  hardware_Sub_08007C28(param_1 + 0x8b0,*(u32 *)(param_1 + 0x8b4));
  uVar1 = hardware_Sub_08007B54(param_1 + 0x8b0,4);
  *(u32 *)(param_1 + 0x8b4) = uVar1;
  iVar2 = param_1 + 0x000008B8;
  hardware_Sub_08007C28(iVar2,*(u32 *)(iVar2 + 4));
  uVar1 = hardware_Sub_08007B54(iVar2,5);
  *(u32 *)(iVar2 + 4) = uVar1;
  hardware_Sub_08007C28(param_1 + 0x8c0,*(u32 *)(param_1 + 0x8c4));
  uVar1 = hardware_Sub_08007B54(param_1 + 0x8c0,5);
  *(u32 *)(param_1 + 0x8c4) = uVar1;
  iVar2 = param_1 + 0x000008C8;
  hardware_Sub_08007C28(iVar2,*(u32 *)(iVar2 + 4));
  uVar1 = hardware_Sub_08007B54(iVar2,5);
  *(u32 *)(iVar2 + 4) = uVar1;
  hardware_Sub_08007C28(param_1 + 0x8d0,*(u32 *)(param_1 + 0x8d4));
  uVar1 = hardware_Sub_08007B54(param_1 + 0x8d0,6);
  *(u32 *)(param_1 + 0x8d4) = uVar1;
  param_1 = param_1 + 0x000008D8;
  hardware_Sub_08007C28(param_1,*(u32 *)(param_1 + 4));
  uVar1 = hardware_Sub_08007B54(param_1,6);
  *(u32 *)(param_1 + 4) = uVar1;
}

/* 0x080AE7D0 (196B) | hardware_Sub_080AE7D0 (orig: func_080AE7D0) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
void hardware_Sub_080AE7D0(u32 param_1) {
    unsigned int uVar2;
    s16 iVar4;
  u16 *puVar3;
  register s32 uVar1;
  hardware_HW_DMA3SAD_8EB8(0xffffffff,0x0600F000,0x800);
  uVar1 = (u32)0x0600F000;
  hardware_HW_DMA3SAD_8EB8(0,0x06007FE0,0x20);
  uVar2 = (u32)0x0600F800;
  hardware_HW_DMA3SAD_8EB8(0xffffffff,0x0600F800,0x800);
  System_UnpackData(0x0872FE6C,uVar1);
  System_UnpackData(0x0872FC34,uVar2);
  System_UnpackData(0x0872FEF8,0x6000000);
  hardware_HW_DMA3SAD(0x08731940,0x5000000,0x200);
  puVar3 = (s16)(u16 *)hardware_GetField_0x00_8918(param_1);
  *puVar3 = 0x1640;
  iVar4 = hardware_GetField_0x00_8918(param_1);
  *(short *)(iVar4 + 10) = (short)0x00001E41;
  iVar4 = (u16)hardware_GetField_0x00_8918(param_1);
  *(short *)(iVar4 + 0xc) = (short)0x00001F42;
}

/* 0x080AF814 (3828B) | hardware_Sub_080AF814 (orig: func_080AF814) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
void hardware_Sub_080AF814(int param_1) {
  u8 bVar1;
  u16 uVar2;
  u8 *pbVar3;
  u32 uVar4;
  int iVar5;
  int iVar6;
  u32 *puVar7;
  int *piVar8;
  u32 *puVar9;
  int *piVar10;
  u32 *puVar11;
  char *pcVar12;
  u32 uVar13;
  u32 *puVar14;
  int iVar15;
  u32 uStack_b8;
  u32 uStack_b4;
  u32 uStack_b0;
  u32 uStack_ac;
  u32 uStack_a8;
  u32 uStack_a4;
  u32 uStack_a0;
  u32 uStack_9c;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int *piStack_48;
  int iStack_44;
  int iStack_40;
  u32 *puStack_3c;
  int *piStack_38;
  int iStack_34;
  int iStack_30;
  u32 *puStack_2c;
  int *piStack_28;
  u32 *puStack_24;
  if (*(char *)(param_1 + 0x0000092A) != '\0') {
    puVar11 = (u32 *)(param_1 + 0x448);
    iStack_58 = 2;
    do {
      pbVar3 = (u8 *)hardware_GetField_0x00_8920(param_1);
      bVar1 = *pbVar3;
      if (bVar1 < 0x80) {
        *(u32 *)(pbVar3 + (u32)bVar1 * 8 + 4) = *puVar11;
        *(u16 *)(pbVar3 + (u32)bVar1 * 8 + 4 + 4) = *(u16 *)(puVar11 + 1);
        *pbVar3 = bVar1 + 1;
      }
      puVar11 = puVar11 + 2;
      iStack_58 = iStack_58 + -1;
    } while (-1 < iStack_58);
    uVar4 = hardware_GetField_0x00_8920(param_1);
    uVar2 = 0;
    if (*(int *)(param_1 + 0x468) != 0) {
      uVar2 = *(u16 *)(param_1 + 0x46c);
    }
    code_0803EE94_Sub_0805E99C(uVar4,*(int *)(param_1 + 0x468),uVar2,*(u32 *)(param_1 + 0x00000464));
    uVar4 = hardware_GetField_0x00_8920(param_1);
    uVar2 = 0;
    if (*(int *)(param_1 + 0x490) != 0) {
      uVar2 = *(u16 *)(param_1 + 0x494);
    }
    code_0803EE94_Sub_0805E99C(uVar4,*(int *)(param_1 + 0x490),uVar2,*(u32 *)(param_1 + 0x0000048C));
  }
  pbVar3 = (u8 *)hardware_GetField_0x00_8920(param_1);
  bVar1 = *pbVar3;
  if (bVar1 < 0x80) {
    *(u32 *)(pbVar3 + (u32)bVar1 * 8 + 4) = *(u32 *)(param_1 + 0x440);
    *(u16 *)(pbVar3 + (u32)bVar1 * 8 + 4 + 4) = *(u16 *)(param_1 + 0x00000444);
    *pbVar3 = bVar1 + 1;
  }
  if ((*(int *)(param_1 + 0x0000083C) == 1) || (*(int *)(param_1 + 0x00000838) == 2)) {
    uVar4 = hardware_GetField_0x00_8920(param_1);
    uVar2 = 0;
    if (*(int *)(param_1 + 0x4b8) != 0) {
      uVar2 = *(u16 *)(param_1 + 0x4bc);
    }
    code_0803EE94_Sub_0805E99C(uVar4,*(int *)(param_1 + 0x4b8),uVar2,*(u32 *)(param_1 + 0x000004B4));
  }
  uVar4 = hardware_GetField_0x00_8920(param_1);
  uVar2 = 0;
  if (*(int *)(param_1 + 0x4e0) != 0) {
    uVar2 = *(u16 *)(param_1 + 0x4e4);
  }
  code_0803EE94_Sub_0805E99C(uVar4,*(int *)(param_1 + 0x4e0),uVar2,*(u32 *)(param_1 + 0x000004DC));
  **(u16 **)(param_1 + 0x00000504) = (u16)*(u8 *)(param_1 + 0x8e0);
  if (((*(int *)(param_1 + 0x00000838) != 3) || (*(int *)(param_1 + 0x0000083C) == 0)) &&
     (pcVar12 = (char *)(param_1 + 0x00000929), *pcVar12 != '\0')) {
    uVar4 = *(u32 *)(param_1 + 0x500);
    uVar2 = hardware_Sub_080B3990(param_1);
    code_0803EE94_Sub_0805E860(uVar4,uVar2);
    *pcVar12 = '\0';
  }
  iVar5 = code_0803EE94_Sub_0805E8F0(*(int *)(param_1 + 0x500));
  if (iVar5 * 0x40000000 < 0) {
    puVar11 = *(u32 **)(param_1 + 0x500);
    func_080D3918(&uStack_b8,(int *)*puVar11,
                    *(u16 *)(puVar11[1] + (u32)*(u16 *)(puVar11 + 3) * 4),
                    *(u32 *)(*(int *)*puVar11 + 0x10));
    LibC_memcpy(&uStack_b8,&uStack_b8,0x20);
    *(u32 *)(param_1 + 0x508) = uStack_b8;
    *(u32 *)(param_1 + 0x50c) = uStack_b4;
    *(u32 *)(param_1 + 0x510) = uStack_b0;
    *(u32 *)(param_1 + 0x514) = uStack_ac;
    *(u32 *)(param_1 + 0x518) = uStack_a8;
    *(u32 *)(param_1 + 0x51c) = uStack_a4;
    *(u32 *)(param_1 + 0x520) = uStack_a0;
    *(u32 *)(param_1 + 0x524) = uStack_9c;
    piVar10 = (int *)hardware_GetField_0x00_8910(param_1);
    iVar6 = *(int *)(param_1 + 0x510);
    iVar5 = hardware_Sub_08007D4C(param_1 + 0x8b0,*(u32 *)(param_1 + 0x8b4));
    uVar2 = 0;
    if (*(int *)(param_1 + 0x510) != 0) {
      uVar2 = *(u16 *)(param_1 + 0x514);
    }
    piStack_28 = piVar10;
    hardware_Sub_08008F0C(&uStack_b8,iVar6,iVar5 * 0x20 + 0x06010000,uVar2);
    puVar11 = (u32 *)piVar10[1];
    if (puVar11 == (u32 *)piVar10[3]) {
      iStack_94 = 1;
      iStack_98 = (int)puVar11 - *piStack_28 >> 4;
      piVar10 = &iStack_98;
      if (iStack_98 == 0) {
        piVar10 = &iStack_94;
      }
      if (iStack_98 + *piVar10 == 0) {
        puStack_24 = (u32 *)0x0;
        iVar5 = 0;
      }
      else {
        iVar5 = (iStack_98 + *piVar10) * 0x10;
        puStack_24 = (u32 *)LibC_malloc(iVar5);
        if (puStack_24 == (u32 *)0x0) {
          puStack_24 = (u32 *)code_linkonce_Sub_080D3BC0(iVar5);
        }
      }
      puVar9 = puStack_24;
      for (puVar7 = (u32 *)*piStack_28; puVar7 != puVar11; puVar7 = puVar7 + 4) {
        if (puVar9 != (u32 *)0x0) {
          uVar4 = puVar7[1];
          uVar13 = puVar7[2];
          *puVar9 = *puVar7;
          puVar9[1] = uVar4;
          puVar9[2] = uVar13;
          puVar9[3] = puVar7[3];
        }
        puVar9 = puVar9 + 4;
      }
      iVar6 = iStack_94;
      if (iStack_94 == 1) {
        if (puVar9 != (u32 *)0x0) {
          *puVar9 = uStack_b8;
          puVar9[1] = uStack_b4;
          puVar9[2] = uStack_b0;
          puVar9[3] = uStack_ac;
        }
        puVar9 = puVar9 + 4;
      }
      else {
        for (; iVar6 != 0; iVar6 = iVar6 + -1) {
          if (puVar9 != (u32 *)0x0) {
            *puVar9 = uStack_b8;
            puVar9[1] = uStack_b4;
            puVar9[2] = uStack_b0;
            puVar9[3] = uStack_ac;
          }
          puVar9 = puVar9 + 4;
        }
      }
      for (iVar6 = *piStack_28; iVar6 != piStack_28[1]; iVar6 = iVar6 + 0x10) {
      }
      if (*piStack_28 != 0) {
        LibC_free();
      }
      *piStack_28 = (int)puStack_24;
      piStack_28[1] = (int)puVar9;
      piStack_28[3] = (int)puStack_24 + iVar5;
    }
    else {
      if (puVar11 != (u32 *)0x0) {
        *puVar11 = uStack_b8;
        puVar11[1] = uStack_b4;
        puVar11[2] = uStack_b0;
        puVar11[3] = uStack_ac;
      }
      piStack_28[1] = piStack_28[1] + 0x10;
    }
    piVar10 = (int *)hardware_GetField_0x00_8910(param_1);
    uVar2 = 0;
    if (*(int *)(param_1 + 0x518) != 0) {
      uVar2 = *(u16 *)(param_1 + 0x51c);
    }
    piStack_28 = piVar10;
    hardware_Sub_08008F0C(&uStack_b8,*(int *)(param_1 + 0x518),0x050002A0,uVar2);
    puVar11 = (u32 *)piVar10[1];
    if (puVar11 == (u32 *)piVar10[3]) {
      iStack_8c = 1;
      iStack_90 = (int)puVar11 - *piStack_28 >> 4;
      piVar10 = &iStack_90;
      if (iStack_90 == 0) {
        piVar10 = &iStack_8c;
      }
      if (iStack_90 + *piVar10 == 0) {
        puVar7 = (u32 *)0x0;
        iVar5 = 0;
      }
      else {
        iVar5 = (iStack_90 + *piVar10) * 0x10;
        puVar7 = (u32 *)LibC_malloc(iVar5);
        if (puVar7 == (u32 *)0x0) {
          puVar7 = (u32 *)code_linkonce_Sub_080D3BC0(iVar5);
        }
      }
      puVar14 = puVar7;
      for (puVar9 = (u32 *)*piStack_28; puVar9 != puVar11; puVar9 = puVar9 + 4) {
        if (puVar14 != (u32 *)0x0) {
          uVar4 = puVar9[1];
          uVar13 = puVar9[2];
          *puVar14 = *puVar9;
          puVar14[1] = uVar4;
          puVar14[2] = uVar13;
          puVar14[3] = puVar9[3];
        }
        puVar14 = puVar14 + 4;
      }
      iVar6 = iStack_8c;
      if (iStack_8c == 1) {
        if (puVar14 != (u32 *)0x0) {
          *puVar14 = uStack_b8;
          puVar14[1] = uStack_b4;
          puVar14[2] = uStack_b0;
          puVar14[3] = uStack_ac;
        }
        puVar14 = puVar14 + 4;
      }
      else {
        for (; iVar6 != 0; iVar6 = iVar6 + -1) {
          if (puVar14 != (u32 *)0x0) {
            *puVar14 = uStack_b8;
            puVar14[1] = uStack_b4;
            puVar14[2] = uStack_b0;
            puVar14[3] = uStack_ac;
          }
          puVar14 = puVar14 + 4;
        }
      }
      for (iVar6 = *piStack_28; iVar6 != piStack_28[1]; iVar6 = iVar6 + 0x10) {
      }
      puStack_24 = puVar7;
      if (*piStack_28 != 0) {
        LibC_free();
      }
      *piStack_28 = (int)puStack_24;
      piStack_28[1] = (int)puVar14;
      piStack_28[3] = (int)puStack_24 + iVar5;
    }
    else {
      if (puVar11 != (u32 *)0x0) {
        *puVar11 = uStack_b8;
        puVar11[1] = uStack_b4;
        puVar11[2] = uStack_b0;
        puVar11[3] = uStack_ac;
      }
      piStack_28[1] = piStack_28[1] + 0x10;
    }
  }
  uVar4 = hardware_GetField_0x00_8920(param_1);
  uVar2 = 0;
  if (*(int *)(param_1 + 0x508) != 0) {
    uVar2 = *(u16 *)(param_1 + 0x50c);
  }
  code_0803EE94_Sub_0805E99C(uVar4,*(int *)(param_1 + 0x508),uVar2,*(u32 *)(param_1 + 0x00000504));
  iStack_58 = 0;
  piStack_38 = (int *)(param_1 + 0x708);
  iStack_34 = 0;
  iStack_30 = 0;
  puStack_2c = (u32 *)(param_1 + 0x0000071C);
  do {
    *(u16 *)(*piStack_38 + 2) = *(u8 *)(param_1 + 0x000008E1 + iStack_58) - 0x18;
    if (*(int *)(param_1 + 0x0000085C + iStack_34) != 0) {
      pcVar12 = (char *)(param_1 + 0x0000091F + iStack_58);
      iVar5 = iStack_34 + param_1;
      if (*pcVar12 != '\0') {
        uVar4 = *(u32 *)(iVar5 + 0x000006F4);
        uVar2 = hardware_Sub_080B39F4(param_1,iStack_58);
        code_0803EE94_Sub_0805E860(uVar4,uVar2);
        *pcVar12 = '\0';
      }
      piVar10 = (int *)(iVar5 + 0x000006F4);
      iVar5 = code_0803EE94_Sub_0805E8F0(*piVar10);
      if (iVar5 * 0x40000000 < 0) {
        puVar11 = (u32 *)*piVar10;
        func_080D3918(&uStack_b8,(int *)*puVar11,
                        *(u16 *)(puVar11[1] + (u32)*(u16 *)(puVar11 + 3) * 4),
                        *(u32 *)(*(int *)*puVar11 + 0x10));
        LibC_memcpy(&uStack_b8,&uStack_b8,0x20);
        *puStack_2c = uStack_b8;
        puStack_2c[1] = uStack_b4;
        puStack_2c[2] = uStack_b0;
        puStack_2c[3] = uStack_ac;
        puStack_2c[4] = uStack_a8;
        puStack_2c[5] = uStack_a4;
        puStack_2c[6] = uStack_a0;
        puStack_2c[7] = uStack_9c;
        piVar10 = (int *)hardware_GetField_0x00_8910(param_1,puStack_2c + 8);
        uVar4 = puStack_2c[2];
        iVar5 = hardware_Sub_08007D4C(param_1 + 0x000008C8,*(u32 *)(param_1 + 0x000008C8 + 4));
        uVar2 = 0;
        if (puStack_2c[2] != 0) {
          uVar2 = *(u16 *)(puStack_2c + 3);
        }
        hardware_Sub_08008F0C(&uStack_b8,uVar4,(iStack_34 + iVar5) * 0x20 + 0x06010000,uVar2);
        puVar11 = (u32 *)piVar10[1];
        if (puVar11 == (u32 *)piVar10[3]) {
          iStack_84 = 1;
          iStack_88 = (int)puVar11 - *piVar10 >> 4;
          piVar8 = &iStack_88;
          if (iStack_88 == 0) {
            piVar8 = &iStack_84;
          }
          if (iStack_88 + *piVar8 == 0) {
            puVar7 = (u32 *)0x0;
            iVar5 = 0;
          }
          else {
            iVar5 = (iStack_88 + *piVar8) * 0x10;
            puVar7 = (u32 *)LibC_malloc(iVar5);
            if (puVar7 == (u32 *)0x0) {
              puVar7 = (u32 *)code_linkonce_Sub_080D3BC0(iVar5);
            }
          }
          puVar14 = puVar7;
          for (puVar9 = (u32 *)*piVar10; puVar9 != puVar11; puVar9 = puVar9 + 4) {
            if (puVar14 != (u32 *)0x0) {
              uVar4 = puVar9[1];
              uVar13 = puVar9[2];
              *puVar14 = *puVar9;
              puVar14[1] = uVar4;
              puVar14[2] = uVar13;
              puVar14[3] = puVar9[3];
            }
            puVar14 = puVar14 + 4;
          }
          iVar6 = iStack_84;
          if (iStack_84 == 1) {
            if (puVar14 != (u32 *)0x0) {
              *puVar14 = uStack_b8;
              puVar14[1] = uStack_b4;
              puVar14[2] = uStack_b0;
              puVar14[3] = uStack_ac;
            }
            puVar14 = puVar14 + 4;
          }
          else {
            for (; iVar6 != 0; iVar6 = iVar6 + -1) {
              if (puVar14 != (u32 *)0x0) {
                *puVar14 = uStack_b8;
                puVar14[1] = uStack_b4;
                puVar14[2] = uStack_b0;
                puVar14[3] = uStack_ac;
              }
              puVar14 = puVar14 + 4;
            }
          }
          for (iVar6 = *piVar10; iVar6 != piVar10[1]; iVar6 = iVar6 + 0x10) {
          }
          puStack_24 = puVar7;
          if (*piVar10 != 0) {
            LibC_free();
          }
          *piVar10 = (int)puStack_24;
          piVar10[1] = (int)puVar14;
          piVar10[3] = (int)puStack_24 + iVar5;
        }
        else {
          if (puVar11 != (u32 *)0x0) {
            *puVar11 = uStack_b8;
            puVar11[1] = uStack_b4;
            puVar11[2] = uStack_b0;
            puVar11[3] = uStack_ac;
          }
          piVar10[1] = piVar10[1] + 0x10;
        }
        piVar10 = (int *)hardware_GetField_0x00_8910(param_1);
        piVar8 = (int *)(iStack_30 + param_1 + 0x0000072C);
        uVar2 = 0;
        if (*piVar8 != 0) {
          uVar2 = (u16)piVar8[1];
        }
        hardware_Sub_08008F0C(&uStack_b8,*(u32 *)(iStack_30 + param_1 + 0x0000072C),0x05000360,
                      uVar2);
        puVar11 = (u32 *)piVar10[1];
        if (puVar11 == (u32 *)piVar10[3]) {
          iStack_7c = 1;
          iStack_80 = (int)puVar11 - *piVar10 >> 4;
          piVar8 = &iStack_80;
          if (iStack_80 == 0) {
            piVar8 = &iStack_7c;
          }
          if (iStack_80 + *piVar8 == 0) {
            puVar7 = (u32 *)0x0;
            iVar5 = 0;
          }
          else {
            iVar5 = (iStack_80 + *piVar8) * 0x10;
            puVar7 = (u32 *)LibC_malloc(iVar5);
            if (puVar7 == (u32 *)0x0) {
              puVar7 = (u32 *)code_linkonce_Sub_080D3BC0(iVar5);
            }
          }
          puVar14 = puVar7;
          for (puVar9 = (u32 *)*piVar10; puVar9 != puVar11; puVar9 = puVar9 + 4) {
            if (puVar14 != (u32 *)0x0) {
              uVar4 = puVar9[1];
              uVar13 = puVar9[2];
              *puVar14 = *puVar9;
              puVar14[1] = uVar4;
              puVar14[2] = uVar13;
              puVar14[3] = puVar9[3];
            }
            puVar14 = puVar14 + 4;
          }
          iVar6 = iStack_7c;
          if (iStack_7c == 1) {
            if (puVar14 != (u32 *)0x0) {
              *puVar14 = uStack_b8;
              puVar14[1] = uStack_b4;
              puVar14[2] = uStack_b0;
              puVar14[3] = uStack_ac;
            }
            puVar14 = puVar14 + 4;
          }
          else {
            for (; iVar6 != 0; iVar6 = iVar6 + -1) {
              if (puVar14 != (u32 *)0x0) {
                *puVar14 = uStack_b8;
                puVar14[1] = uStack_b4;
                puVar14[2] = uStack_b0;
                puVar14[3] = uStack_ac;
              }
              puVar14 = puVar14 + 4;
            }
          }
          for (iVar6 = *piVar10; iVar6 != piVar10[1]; iVar6 = iVar6 + 0x10) {
          }
          puStack_24 = puVar7;
          if (*piVar10 != 0) {
            LibC_free();
          }
          *piVar10 = (int)puStack_24;
          piVar10[1] = (int)puVar14;
          piVar10[3] = (int)puStack_24 + iVar5;
        }
        else {
          if (puVar11 != (u32 *)0x0) {
            *puVar11 = uStack_b8;
            puVar11[1] = uStack_b4;
            puVar11[2] = uStack_b0;
            puVar11[3] = uStack_ac;
          }
          piVar10[1] = piVar10[1] + 0x10;
        }
      }
      uVar4 = hardware_GetField_0x00_8920(param_1);
      piVar10 = (int *)(iStack_30 + param_1 + 0x0000071C);
      uVar2 = 0;
      if (*piVar10 != 0) {
        uVar2 = (u16)piVar10[1];
      }
      code_0803EE94_Sub_0805E99C(uVar4,*(u32 *)(iStack_30 + param_1 + 0x0000071C),uVar2,*piStack_38);
    }
    piStack_38 = piStack_38 + 1;
    iStack_34 = iStack_34 + 4;
    iStack_30 = iStack_30 + 0x20;
    puStack_2c = puStack_2c + 8;
    iStack_58 = iStack_58 + 1;
  } while (iStack_58 < 5);
  iStack_58 = 0;
  piStack_48 = (int *)(param_1 + 0x0000062C);
  iStack_44 = 0;
  iStack_40 = 0;
  puStack_3c = (u32 *)(param_1 + 0x640);
  do {
    *(u16 *)(*piStack_48 + 2) = (u16)*(u8 *)(param_1 + 0x000008E1 + iStack_58);
    if (1 < *(int *)(param_1 + 0x00000848 + iStack_44) - 5U) {
      pcVar12 = (char *)(param_1 + 0x0000091A + iStack_58);
      iVar5 = iStack_44 + param_1;
      if (*pcVar12 != '\0') {
        uVar4 = *(u32 *)(iVar5 + 0x618);
        uVar2 = hardware_Sub_080B39D8(param_1,iStack_58);
        code_0803EE94_Sub_0805E860(uVar4,uVar2);
        *pcVar12 = '\0';
      }
      piVar10 = (int *)(iVar5 + 0x618);
      iVar5 = code_0803EE94_Sub_0805E8F0(*piVar10);
      if (iVar5 * 0x40000000 < 0) {
        puVar11 = (u32 *)*piVar10;
        func_080D3918(&uStack_b8,(int *)*puVar11,
                        *(u16 *)(puVar11[1] + (u32)*(u16 *)(puVar11 + 3) * 4),
                        *(u32 *)(*(int *)*puVar11 + 0x10));
        LibC_memcpy(&uStack_b8,&uStack_b8,0x20);
        *puStack_3c = uStack_b8;
        puStack_3c[1] = uStack_b4;
        puStack_3c[2] = uStack_b0;
        puStack_3c[3] = uStack_ac;
        puStack_3c[4] = uStack_a8;
        puStack_3c[5] = uStack_a4;
        puStack_3c[6] = uStack_a0;
        puStack_3c[7] = uStack_9c;
        piVar10 = (int *)hardware_GetField_0x00_8910(param_1,puStack_3c + 8);
        puVar11 = puStack_3c;
        uVar4 = puStack_3c[2];
        iVar5 = hardware_Sub_08007D4C(param_1 + 0x8c0,*(u32 *)(param_1 + 0x8c4));
        uVar2 = 0;
        if (puVar11[2] != 0) {
          uVar2 = *(u16 *)(puVar11 + 3);
        }
        hardware_Sub_08008F0C(&uStack_b8,uVar4,(iStack_44 + iVar5) * 0x20 + 0x06010000,uVar2);
        puVar11 = (u32 *)piVar10[1];
        if (puVar11 == (u32 *)piVar10[3]) {
          iStack_74 = 1;
          iStack_78 = (int)puVar11 - *piVar10 >> 4;
          piVar8 = &iStack_78;
          if (iStack_78 == 0) {
            piVar8 = &iStack_74;
          }
          if (iStack_78 + *piVar8 == 0) {
            puVar7 = (u32 *)0x0;
            iVar5 = 0;
          }
          else {
            iVar5 = (iStack_78 + *piVar8) * 0x10;
            puVar7 = (u32 *)LibC_malloc(iVar5);
            if (puVar7 == (u32 *)0x0) {
              puVar7 = (u32 *)code_linkonce_Sub_080D3BC0(iVar5);
            }
          }
          puVar14 = puVar7;
          for (puVar9 = (u32 *)*piVar10; puVar9 != puVar11; puVar9 = puVar9 + 4) {
            if (puVar14 != (u32 *)0x0) {
              uVar4 = puVar9[1];
              uVar13 = puVar9[2];
              *puVar14 = *puVar9;
              puVar14[1] = uVar4;
              puVar14[2] = uVar13;
              puVar14[3] = puVar9[3];
            }
            puVar14 = puVar14 + 4;
          }
          iVar6 = iStack_74;
          if (iStack_74 == 1) {
            if (puVar14 != (u32 *)0x0) {
              *puVar14 = uStack_b8;
              puVar14[1] = uStack_b4;
              puVar14[2] = uStack_b0;
              puVar14[3] = uStack_ac;
            }
            puVar14 = puVar14 + 4;
          }
          else {
            for (; iVar6 != 0; iVar6 = iVar6 + -1) {
              if (puVar14 != (u32 *)0x0) {
                *puVar14 = uStack_b8;
                puVar14[1] = uStack_b4;
                puVar14[2] = uStack_b0;
                puVar14[3] = uStack_ac;
              }
              puVar14 = puVar14 + 4;
            }
          }
          for (iVar6 = *piVar10; iVar6 != piVar10[1]; iVar6 = iVar6 + 0x10) {
          }
          puStack_24 = puVar7;
          if (*piVar10 != 0) {
            LibC_free();
          }
          *piVar10 = (int)puStack_24;
          piVar10[1] = (int)puVar14;
          piVar10[3] = (int)puStack_24 + iVar5;
        }
        else {
          if (puVar11 != (u32 *)0x0) {
            *puVar11 = uStack_b8;
            puVar11[1] = uStack_b4;
            puVar11[2] = uStack_b0;
            puVar11[3] = uStack_ac;
          }
          piVar10[1] = piVar10[1] + 0x10;
        }
        piVar10 = (int *)hardware_GetField_0x00_8910(param_1);
        uVar2 = 0;
        if (*(int *)(iStack_40 + param_1 + 0x650) != 0) {
          uVar2 = *(u16 *)(iStack_40 + param_1 + 0x654);
        }
        hardware_Sub_08008F0C(&uStack_b8,*(u32 *)(iStack_40 + param_1 + 0x650),0x05000340,uVar2);
        puVar11 = (u32 *)piVar10[1];
        if (puVar11 == (u32 *)piVar10[3]) {
          iStack_6c = 1;
          iStack_70 = (int)puVar11 - *piVar10 >> 4;
          piVar8 = &iStack_70;
          if (iStack_70 == 0) {
            piVar8 = &iStack_6c;
          }
          if (iStack_70 + *piVar8 == 0) {
            puVar7 = (u32 *)0x0;
            iVar5 = 0;
          }
          else {
            iVar5 = (iStack_70 + *piVar8) * 0x10;
            puVar7 = (u32 *)LibC_malloc(iVar5);
            if (puVar7 == (u32 *)0x0) {
              puVar7 = (u32 *)code_linkonce_Sub_080D3BC0(iVar5);
            }
          }
          puVar14 = puVar7;
          for (puVar9 = (u32 *)*piVar10; puVar9 != puVar11; puVar9 = puVar9 + 4) {
            if (puVar14 != (u32 *)0x0) {
              uVar4 = puVar9[1];
              uVar13 = puVar9[2];
              *puVar14 = *puVar9;
              puVar14[1] = uVar4;
              puVar14[2] = uVar13;
              puVar14[3] = puVar9[3];
            }
            puVar14 = puVar14 + 4;
          }
          iVar6 = iStack_6c;
          if (iStack_6c == 1) {
            if (puVar14 != (u32 *)0x0) {
              *puVar14 = uStack_b8;
              puVar14[1] = uStack_b4;
              puVar14[2] = uStack_b0;
              puVar14[3] = uStack_ac;
            }
            puVar14 = puVar14 + 4;
          }
          else {
            for (; iVar6 != 0; iVar6 = iVar6 + -1) {
              if (puVar14 != (u32 *)0x0) {
                *puVar14 = uStack_b8;
                puVar14[1] = uStack_b4;
                puVar14[2] = uStack_b0;
                puVar14[3] = uStack_ac;
              }
              puVar14 = puVar14 + 4;
            }
          }
          for (iVar6 = *piVar10; iVar6 != piVar10[1]; iVar6 = iVar6 + 0x10) {
          }
          puStack_24 = puVar7;
          if (*piVar10 != 0) {
            LibC_free();
          }
          *piVar10 = (int)puStack_24;
          piVar10[1] = (int)puVar14;
          piVar10[3] = (int)puStack_24 + iVar5;
        }
        else {
          if (puVar11 != (u32 *)0x0) {
            *puVar11 = uStack_b8;
            puVar11[1] = uStack_b4;
            puVar11[2] = uStack_b0;
            puVar11[3] = uStack_ac;
          }
          piVar10[1] = piVar10[1] + 0x10;
        }
      }
      uVar4 = hardware_GetField_0x00_8920(param_1);
      uVar2 = 0;
      if (*(int *)(iStack_40 + param_1 + 0x640) != 0) {
        uVar2 = *(u16 *)(iStack_40 + param_1 + 0x644);
      }
      code_0803EE94_Sub_0805E99C(uVar4,*(u32 *)(iStack_40 + param_1 + 0x640),uVar2,*piStack_48);
    }
    iVar5 = 0x0000052C;
    piStack_48 = piStack_48 + 1;
    iStack_44 = iStack_44 + 4;
    iStack_40 = iStack_40 + 0x20;
    puStack_3c = puStack_3c + 8;
    iStack_58 = iStack_58 + 1;
  } while (iStack_58 < 5);
  puVar11 = (u32 *)(param_1 + 0x0000052C);
  *(u16 *)*puVar11 = (u16)*(u8 *)(param_1 + 0x8e0);
  uVar4 = hardware_GetField_0x00_8920(param_1);
  piVar10 = (int *)(param_1 + iVar5 + 4);
  iVar5 = *piVar10;
  uVar2 = 0;
  if (iVar5 != 0) {
    uVar2 = (u16)piVar10[1];
  }
  code_0803EE94_Sub_0805E99C(uVar4,iVar5,uVar2,*puVar11);
  iStack_58 = 0;
  piVar10 = (int *)(param_1 + 0x6e0);
  do {
    *(u16 *)(*piVar10 + 2) = (u16)*(u8 *)(param_1 + 0x000008E1 + iStack_58);
    uVar4 = hardware_GetField_0x00_8920(param_1);
    uVar2 = 0;
    if (*(int *)(param_1 + 0x530) != 0) {
      uVar2 = *(u16 *)(param_1 + 0x534);
    }
    iVar5 = *piVar10;
    piVar10 = piVar10 + 1;
    code_0803EE94_Sub_0805E99C(uVar4,*(int *)(param_1 + 0x530),uVar2,iVar5);
    iStack_58 = iStack_58 + 1;
  } while (iStack_58 < 5);
  iStack_58 = 0;
  do {
    iStack_50 = iStack_58 * 4;
    iStack_54 = iStack_58 + 1;
    if (*(int *)(param_1 + 0x870 + iStack_50) != 2) {
      uVar4 = *(u32 *)(iStack_50 + param_1 + 0x550);
      uVar2 = hardware_Sub_080B39BC(param_1,iStack_58);
      code_0803EE94_Sub_0805E860(uVar4,uVar2);
      iVar5 = iStack_50;
      iVar6 = code_0803EE94_Sub_0805E8F0(*(u32 *)(iStack_50 + param_1 + 0x550));
      iStack_4c = iStack_58 * 0x20;
      if (iVar6 * 0x40000000 < 0) {
        iVar6 = iStack_4c + param_1;
        puVar11 = *(u32 **)(iVar5 + param_1 + 0x550);
        func_080D3918(&uStack_b8,(int *)*puVar11,
                        *(u16 *)(puVar11[1] + (u32)*(u16 *)(puVar11 + 3) * 4),
                        *(u32 *)(*(int *)*puVar11 + 0x10));
        LibC_memcpy(&uStack_b8,&uStack_b8,0x20);
        *(u32 *)(iVar6 + 0x578) = uStack_b8;
        *(u32 *)(iVar6 + 0x57c) = uStack_b4;
        *(u32 *)(iVar6 + 0x580) = uStack_b0;
        *(u32 *)(iVar6 + 0x584) = uStack_ac;
        *(u32 *)(iVar6 + 0x588) = uStack_a8;
        *(u32 *)(iVar6 + 0x58c) = uStack_a4;
        *(u32 *)(iVar6 + 0x590) = uStack_a0;
        *(u32 *)(iVar6 + 0x594) = uStack_9c;
        piVar10 = (int *)hardware_GetField_0x00_8910(param_1);
        iVar15 = *(int *)(iVar6 + 0x580);
        iVar5 = hardware_Sub_08007D4C(param_1 + 0x000008B8,*(u32 *)(param_1 + 0x000008B8 + 4));
        uVar2 = 0;
        if (*(int *)(iVar6 + 0x580) != 0) {
          uVar2 = *(u16 *)(iVar6 + 0x584);
        }
        hardware_Sub_08008F0C(&uStack_b8,iVar15,(iStack_50 + iVar5) * 0x20 + 0x06010000,uVar2);
        puVar11 = (u32 *)piVar10[1];
        if (puVar11 == (u32 *)piVar10[3]) {
          iStack_64 = 1;
          iStack_68 = (int)puVar11 - *piVar10 >> 4;
          piVar8 = &iStack_68;
          if (iStack_68 == 0) {
            piVar8 = &iStack_64;
          }
          if (iStack_68 + *piVar8 == 0) {
            puVar7 = (u32 *)0x0;
            iVar5 = 0;
          }
          else {
            iVar5 = (iStack_68 + *piVar8) * 0x10;
            puVar7 = (u32 *)LibC_malloc(iVar5);
            if (puVar7 == (u32 *)0x0) {
              puVar7 = (u32 *)code_linkonce_Sub_080D3BC0(iVar5);
            }
          }
          iStack_54 = iStack_58 + 1;
          puVar14 = puVar7;
          for (puVar9 = (u32 *)*piVar10; puVar9 != puVar11; puVar9 = puVar9 + 4) {
            if (puVar14 != (u32 *)0x0) {
              uVar4 = puVar9[1];
              uVar13 = puVar9[2];
              *puVar14 = *puVar9;
              puVar14[1] = uVar4;
              puVar14[2] = uVar13;
              puVar14[3] = puVar9[3];
            }
            puVar14 = puVar14 + 4;
          }
          iVar6 = iStack_64;
          if (iStack_64 == 1) {
            if (puVar14 != (u32 *)0x0) {
              *puVar14 = uStack_b8;
              puVar14[1] = uStack_b4;
              puVar14[2] = uStack_b0;
              puVar14[3] = uStack_ac;
            }
            puVar14 = puVar14 + 4;
          }
          else {
            for (; iVar6 != 0; iVar6 = iVar6 + -1) {
              if (puVar14 != (u32 *)0x0) {
                *puVar14 = uStack_b8;
                puVar14[1] = uStack_b4;
                puVar14[2] = uStack_b0;
                puVar14[3] = uStack_ac;
              }
              puVar14 = puVar14 + 4;
            }
          }
          for (iVar6 = *piVar10; iVar6 != piVar10[1]; iVar6 = iVar6 + 0x10) {
          }
          puStack_24 = puVar7;
          if (*piVar10 != 0) {
            LibC_free();
          }
          *piVar10 = (int)puStack_24;
          piVar10[1] = (int)puVar14;
          piVar10[3] = (int)puStack_24 + iVar5;
        }
        else {
          if (puVar11 != (u32 *)0x0) {
            *puVar11 = uStack_b8;
            puVar11[1] = uStack_b4;
            puVar11[2] = uStack_b0;
            puVar11[3] = uStack_ac;
          }
          piVar10[1] = piVar10[1] + 0x10;
        }
        piVar10 = (int *)hardware_GetField_0x00_8910(param_1);
        uVar2 = 0;
        if (*(int *)(iStack_4c + param_1 + 0x588) != 0) {
          uVar2 = *(u16 *)(iStack_4c + param_1 + 0x58c);
        }
        hardware_Sub_08008F0C(&uStack_b8,*(u32 *)(iStack_4c + param_1 + 0x588),0x05000320,uVar2);
        puVar11 = (u32 *)piVar10[1];
        if (puVar11 == (u32 *)piVar10[3]) {
          iStack_5c = 1;
          iStack_60 = (int)puVar11 - *piVar10 >> 4;
          piVar8 = &iStack_60;
          if (iStack_60 == 0) {
            piVar8 = &iStack_5c;
          }
          if (iStack_60 + *piVar8 == 0) {
            puVar7 = (u32 *)0x0;
            iVar5 = 0;
          }
          else {
            iVar5 = (iStack_60 + *piVar8) * 0x10;
            puVar7 = (u32 *)LibC_malloc(iVar5);
            if (puVar7 == (u32 *)0x0) {
              puVar7 = (u32 *)code_linkonce_Sub_080D3BC0(iVar5);
            }
          }
          puVar14 = puVar7;
          for (puVar9 = (u32 *)*piVar10; puVar9 != puVar11; puVar9 = puVar9 + 4) {
            if (puVar14 != (u32 *)0x0) {
              uVar4 = puVar9[1];
              uVar13 = puVar9[2];
              *puVar14 = *puVar9;
              puVar14[1] = uVar4;
              puVar14[2] = uVar13;
              puVar14[3] = puVar9[3];
            }
            puVar14 = puVar14 + 4;
          }
          iVar6 = iStack_5c;
          if (iStack_5c == 1) {
            if (puVar14 != (u32 *)0x0) {
              *puVar14 = uStack_b8;
              puVar14[1] = uStack_b4;
              puVar14[2] = uStack_b0;
              puVar14[3] = uStack_ac;
            }
            puVar14 = puVar14 + 4;
          }
          else {
            for (; iVar6 != 0; iVar6 = iVar6 + -1) {
              if (puVar14 != (u32 *)0x0) {
                *puVar14 = uStack_b8;
                puVar14[1] = uStack_b4;
                puVar14[2] = uStack_b0;
                puVar14[3] = uStack_ac;
              }
              puVar14 = puVar14 + 4;
            }
          }
          for (iVar6 = *piVar10; iVar6 != piVar10[1]; iVar6 = iVar6 + 0x10) {
          }
          puStack_24 = puVar7;
          if (*piVar10 != 0) {
            LibC_free();
          }
          *piVar10 = (int)puStack_24;
          piVar10[1] = (int)puVar14;
          piVar10[3] = (int)puStack_24 + iVar5;
        }
        else {
          if (puVar11 != (u32 *)0x0) {
            *puVar11 = uStack_b8;
            puVar11[1] = uStack_b4;
            puVar11[2] = uStack_b0;
            puVar11[3] = uStack_ac;
          }
          piVar10[1] = piVar10[1] + 0x10;
        }
      }
      uVar4 = hardware_GetField_0x00_8920(param_1);
      uVar2 = 0;
      if (*(int *)(iStack_4c + param_1 + 0x578) != 0) {
        uVar2 = *(u16 *)(iStack_4c + param_1 + 0x57c);
      }
      code_0803EE94_Sub_0805E99C(uVar4,*(u32 *)(iStack_4c + param_1 + 0x578),uVar2,
                    *(u32 *)(iStack_50 + param_1 + 0x00000564));
    }
    iStack_58 = iStack_54;
  } while (iStack_54 < 5);
  if (*(char *)(param_1 + 0x0000092B) != '\0') {
    uVar4 = hardware_GetField_0x00_8920(param_1);
    iVar5 = *(int *)(param_1 + 0x000007EC);
    uVar2 = 0;
    if (iVar5 != 0) {
      uVar2 = (u16)((int *)(param_1 + 0x000007EC))[1];
    }
    code_0803EE94_Sub_0805E99C(uVar4,iVar5,uVar2,*(u32 *)(param_1 + 0x7e8));
  }
}

/* 0x080B0708 (556B) | hardware_Sub_080B0708 (orig: func_080B0708) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
void hardware_Sub_080B0708(int param_1,int param_2) {
  u8 bVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  u32 *puVar5;
  int iVar6;
  u32 *puVar7;
  u8 *pbVar8;
  u32 uVar9;
  u32 uVar10;
  u8 uStack_54;
  u8 uStack_53;
  u8 auStack_50 [4];
  u32 uStack_4c;
  u32 uStack_48;
  u32 uStack_44;
  u32 uStack_40;
  u32 uStack_3c;
  u32 uStack_38;
  u32 uStack_34;
  int iStack_30;
  int iStack_2c;
  u32 *puStack_28;
  u32 *puStack_24;
  if (param_2 == 0x3c) {
    pbVar8 = (u8 *)(0x0000090B + param_1);
    bVar1 = *pbVar8;
    *pbVar8 = bVar1 - 1;
    if ((u8)(bVar1 - 1) == 9) {
      hardware_Wrap_m4aMPlayTempoControl(0x0000080C + param_1,0x180);
    }
    code_0803EE94_Sub_0804EC84(*pbVar8,&uStack_54,0);
    if (*pbVar8 < 10) {
      LibC_memcpy(auStack_50,0x08107568,2);
      uStack_53 = uStack_54;
      uStack_54 = 0x30;
    }
    uStack_3c = 0x20004;
    iVar6 = param_1 + 0xc;
    Code_Lib_Syscall_Wrap_CpuFastSet_E7A0(0x20004,iVar6,0);
    if (*pbVar8 < 10) {
      uStack_34 = 0x20004;
      SpriteAnimEngine_Sub_0804E958(0x20004,iVar6,0,0,&uStack_54,0,3);
    }
    else {
      uStack_38 = 0x20004;
      SpriteAnimEngine_Sub_0804E958(0x20004,iVar6,0,0,&uStack_54,0,1);
    }
    piVar2 = (int *)hardware_GetField_0x00_8910(param_1);
    iVar3 = hardware_Sub_08007D4C(0x00000888 + param_1,*(u32 *)(0x00000888 + param_1 + 4));
    hardware_Sub_08008F0C(&uStack_4c,iVar6,iVar3 * 0x20 + 0x06010000,0x100);
    puVar5 = (u32 *)piVar2[1];
    if (puVar5 == (u32 *)piVar2[3]) {
      iStack_2c = 1;
      iStack_30 = (int)puVar5 - *piVar2 >> 4;
      piVar4 = &iStack_30;
      if (iStack_30 == 0) {
        piVar4 = &iStack_2c;
      }
      puStack_28 = puVar5;
      if (iStack_30 + *piVar4 == 0) {
        puStack_24 = (u32 *)0x0;
        iVar6 = 0;
      }
      else {
        iVar6 = (iStack_30 + *piVar4) * 0x10;
        puStack_24 = (u32 *)LibC_malloc(iVar6);
        if (puStack_24 == (u32 *)0x0) {
          puStack_24 = (u32 *)code_linkonce_Sub_080D3BC0(iVar6);
        }
      }
      puVar7 = puStack_24;
      for (puVar5 = (u32 *)*piVar2; puVar5 != puStack_28; puVar5 = puVar5 + 4) {
        if (puVar7 != (u32 *)0x0) {
          uVar9 = puVar5[1];
          uVar10 = puVar5[2];
          *puVar7 = *puVar5;
          puVar7[1] = uVar9;
          puVar7[2] = uVar10;
          puVar7[3] = puVar5[3];
        }
        puVar7 = puVar7 + 4;
      }
      iVar3 = iStack_2c;
      if (iStack_2c == 1) {
        if (puVar7 != (u32 *)0x0) {
          *puVar7 = uStack_4c;
          puVar7[1] = uStack_48;
          puVar7[2] = uStack_44;
          puVar7[3] = uStack_40;
        }
        puVar7 = puVar7 + 4;
      }
      else {
        for (; iVar3 != 0; iVar3 = iVar3 + -1) {
          if (puVar7 != (u32 *)0x0) {
            *puVar7 = uStack_4c;
            puVar7[1] = uStack_48;
            puVar7[2] = uStack_44;
            puVar7[3] = uStack_40;
          }
          puVar7 = puVar7 + 4;
        }
      }
      for (iVar3 = *piVar2; iVar3 != piVar2[1]; iVar3 = iVar3 + 0x10) {
      }
      if (*piVar2 != 0) {
        LibC_free();
      }
      *piVar2 = (int)puStack_24;
      piVar2[1] = (int)puVar7;
      piVar2[3] = (int)puStack_24 + iVar6;
    }
    else {
      if (puVar5 != (u32 *)0x0) {
        *puVar5 = uStack_4c;
        puVar5[1] = uStack_48;
        puVar5[2] = uStack_44;
        puVar5[3] = uStack_40;
      }
      piVar2[1] = piVar2[1] + 0x10;
    }
    if (*(char *)(0x0000090B + param_1) == '\0') {
      *(u32 *)(0x00000838 + param_1) = 4;
      hardware_Wrap_m4aMPlayTempoControl(0x0000080C + param_1,0x100);
      hardware_Wrap_m4aMPlayStart(0x00000814 + param_1,0xbb);
    }
  }
}

/* 0x080B0934 (60B) | hardware_Sub_080B0934 (orig: func_080B0934) | origin: wip | domain: hardware | MEDIUM / tu_interp */
void hardware_Sub_080B0934(int param_1) {
  s16 iVar1;
  int iVar2;
  *(u16 *)(*(int *)(param_1 + 0x500) + 0x10) = 0;
  iVar1 = 0x000006F4;
  iVar2 = 0;
  do {
    *(u16 *)(*(int *)(iVar2 * 4 + param_1 + 0x618) + 0x10) = 0;
    *(u16 *)(*(int *)(iVar2 * 4 + iVar1 + param_1) + 0x10) = 0;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 5);
}

/* 0x080B0970 (64B) | hardware_Sub_080B0970 (orig: func_080B0970) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
void hardware_Sub_080B0970(u32 param_1, u32 param_2, u32 param_3, u32 param_4) {
    register u32 r0 = param_1;
    register u32 r1 = param_2;
    register u32 r2 = param_3;
    register u32 r3 = param_4;
    register u32 r4, r5, r6;
    r3 = r0 + 0;
    r1 = 0xa0;
    r1 = r1 << 3;
    r0 = r3 + r1;
    r0 = *(u32 *)(r0);
    r1 = 0x80;
    r1 = r1 << 1;
    *(u16 *)(r0 + 0x10) = r1;
    r2 = 0;
    r6 = 0xc3;
    r6 = r6 << 3;
    r4 = r1 + 0;
    r5 = 0x000006F4;
loc_080B098C:
    r1 = r2 << 2;
    r0 = r1 + r3;
    r0 = r0 + r6;
    r0 = *(u32 *)(r0);
    *(u16 *)(r0 + 0x10) = r4;
    r1 = r1 + r3;
    r1 = r1 + r5;
    r0 = *(u32 *)(r1);
    *(u16 *)(r0 + 0x10) = r4;
    r2 += 1;
    if ((int)r2 <= 4) goto loc_080B098C;
    return r0;
}

/* 0x080B1D34 (96B) | hardware_Sub_080B1D34 (orig: func_080B1D34) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
void hardware_Sub_080B1D34(s16 param_1) {
  u16 *puVar1;
  int *piVar2;
  int iVar3;
  iVar3 = 0;
  puVar1 = (u32)(u16 *)hardware_GetField_0x00_8918();
  *puVar1 = 0x1640;
  hardware_Sub_080AF814(param_1);
  hardware_Wrap_m4aMPlayStart(param_1 + 0x00000814,0xbb);
  if (*(u32 *)(param_1 + 0x00000838) == 2) {
    piVar2 = (int *)(param_1 + 0x00000838);
    do {
      hardware_Ctor_87C8(param_1);
      hardware_Sub_080AF814(param_1);
      iVar3 = iVar3 + 1;
      if (0x78 < iVar3) {
        *piVar2 = 3;
      }
    } while (*piVar2 == 2);
  }
}

/* 0x080B34DC (60B) | hardware_Sub_080B34DC (orig: func_080B34DC) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
void hardware_Sub_080B34DC(int param_1) {
  int iVar1;
  iVar1 = 0;
  do {
    if (*(char *)(param_1 + 0x8e0) == *(char *)(iVar1 + 0x0810787C)) {
      *(int *)(param_1 + 0x884) = iVar1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 5);
  *(u32 *)(param_1 + 0x00000884) = 5;
}

/* 0x080B36B4 (660B) | hardware_Sub_080B36B4 (orig: func_080B36B4) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
void hardware_Sub_080B36B4(int param_1) {
  short sVar1;
  u16 uVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  u32 uVar6;
  int iVar7;
  u8 *pbVar8;
  short *psVar9;
  u16 *puVar10;
  char *pcVar11;
  int iVar12;
  iVar12 = 0;
  do {
    pcVar11 = (char *)(param_1 + 0x00000915 + iVar12);
    if (*pcVar11 != '\0') {
      uVar6 = LibC_rand();
      *(short *)(param_1 + 0x000008E6 + iVar12 * 2) =
           (short)((uVar6 & 0xffff) * 0xb4 >> 0x10) + 0xb4;
      *pcVar11 = '\0';
    }
    iVar3 = 0x000008E1;
    iVar7 = iVar12 * 4;
    uVar6 = *(int *)(param_1 + 0x00000848 + iVar7) - 1;
    if (uVar6 < 6) {
      switch(*(u32 *)(uVar6 * 4 + 0x080B3718) & 0xfffffffe) {
      case 0x80b3730:
        pbVar8 = (u8 *)(param_1 + 0x000008E1 + iVar12);
        if (0x70 < *pbVar8) {
          *pbVar8 = *pbVar8 - 1;
        }
        if (*pbVar8 == 0x70) {
          *(u32 *)(param_1 + 0x00000848 + iVar7) = 1;
          *(u32 *)(param_1 + 0x0000085C + iVar7) = 2;
          *(u8 *)(param_1 + 0x00000915 + iVar12) = 1;
          *(u16 *)(param_1 + 0x8f0 + iVar12 * 2) = 0;
          *(u8 *)(param_1 + 0x0000091A + iVar12) = 1;
          *(u8 *)(param_1 + 0x0000091F + iVar12) = 1;
        }
        break;
      case 0x80b379c:
        pcVar11 = (char *)(param_1 + 0x000008E1 + iVar12);
        cVar5 = *pcVar11 + '\x01';
        *pcVar11 = cVar5;
        iVar4 = 0x00000848;
        if (cVar5 == -0x58) {
          *(u32 *)(param_1 + 0x00000848 + iVar7) = 5;
          *(u32 *)(param_1 + 0x0000085C + iVar7) = 1;
          pcVar11 = (char *)(param_1 + iVar3 + 0x2c);
          *pcVar11 = *pcVar11 + '\x01';
          *(u8 *)(param_1 + 0x0000091A + iVar12) = 1;
          *(u8 *)(param_1 + iVar4 + 0xd7 + iVar12) = 1;
          hardware_Wrap_m4aMPlayStart(param_1 + 0x00000814,199);
        }
        break;
      case 0x80b3800:
        psVar9 = (short *)(param_1 + 0x000008FC + iVar12 * 2);
        sVar1 = *psVar9;
        *psVar9 = sVar1 + 1;
        if ((short)(sVar1 + 1) == 300) {
          *psVar9 = 0;
          *(u32 *)(param_1 + 0x00000848 + iVar7) = 3;
          *(u8 *)(param_1 + 0x0000091A + iVar12) = 1;
        }
        break;
      case 0x80b3840:
        puVar10 = (u16 *)(param_1 + 0x8f0 + iVar12 * 2);
        uVar2 = *puVar10;
        *puVar10 = uVar2 + 1;
        if ((u16)(uVar2 + 1) == *(u16 *)(param_1 + 0x000008E6 + iVar12 * 2) >> 1) {
          *puVar10 = 0;
          *(u32 *)(param_1 + 0x00000848 + iVar7) = 2;
          *(u32 *)(param_1 + 0x870 + iVar7) = 1;
          *(u8 *)(param_1 + 0x0000091A + iVar12) = 1;
        }
        pcVar11 = (char *)(param_1 + 0x00000924 + iVar12);
        if (*pcVar11 != '\0') {
          pbVar8 = (u8 *)(param_1 + 0x0000090C);
          *pbVar8 = *pbVar8 + 1;
          *pcVar11 = '\0';
          if (5 < *pbVar8) {
            hardware_Wrap_m4aMPlayStart(param_1 + 0x0000081C,0xbc);
          }
        }
        break;
      case 0x80b38d0:
        puVar10 = (u16 *)(param_1 + 0x8f0 + iVar12 * 2);
        uVar2 = *puVar10;
        *puVar10 = uVar2 + 1;
        if ((u16)(uVar2 + 1) == *(u16 *)(param_1 + 0x000008E6 + iVar12 * 2) >> 1) {
          *puVar10 = 0;
          *(u32 *)(param_1 + 0x00000848 + iVar7) = 4;
          *(u32 *)(param_1 + 0x870 + iVar7) = 2;
          *(u8 *)(param_1 + 0x0000091A + iVar12) = 1;
          hardware_Wrap_m4aMPlayStart(param_1 + 0x00000814,0xa6);
        }
      }
    }
    iVar12 = iVar12 + 1;
  } while (iVar12 < 5);
}

/* 0x080B3948 (72B) | hardware_Sub_080B3948 (orig: func_080B3948) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
void hardware_Sub_080B3948(u32 param_1, u32 param_2, u32 param_3, u32 param_4) {
    register u32 r0 = param_1;
    register u32 r1 = param_2;
    register u32 r2 = param_3;
    register u32 r3 = param_4;
    register u32 r4, r5;
    r1 = 0x0000085C;
    r2 = r0 + r1;
    r3 = 0x00000906;
    r1 = r0 + r3;
    r5 = 1;
    r4 = 4;
loc_080B3956:
    r0 = *(u32 *)(r2);
    if ((int)r0 > 2) goto loc_080B3976;
    if (r0 < 1) goto loc_080B3976;
    r0 = *(u8 *)(r1);
    r0 += 1;
    r3 = 0;
    *(u8 *)(r1) = r0;
    r0 = r0 << 0x18;
    r0 = (u32)r0 >> 0x18;
    if (r0 != 0x3c) goto loc_080B3976;
    *(u8 *)(r1) = r3;
    *(u32 *)(r2) = r3;
    *(u8 *)(r1 + 0x19) = r5;
loc_080B3976:
    r2 += 4;
    r1 += 1;
    r4 -= 1;
    if ((int)r4 >= 0) goto loc_080B3956;
    return r0;
}

/* 0x080B3990 (44B) | hardware_Sub_080B3990 (orig: func_080B3990) | origin: pure | domain: hardware | MEDIUM / graph_algebra */
extern u16 g_08107882[]; u16 hardware_Sub_080B3990(u8 *a) { return g_08107882[*(u32 *)(a + 0x844)] + *(u32 *)(a + (0x93 << 4)) * 0x54; }

/* 0x080B39BC (28B) | hardware_Sub_080B39BC (orig: func_080B39BC) | origin: pure | domain: hardware | MEDIUM / graph_algebra */
struct S { u8 pad[0x87 << 4]; u32 arr[16]; }; extern u16 g_0810788A[]; u16 hardware_Sub_080B39BC(struct S *a, int b) { return g_0810788A[a->arr[b]]; }

/* 0x080B39D8 (28B) | hardware_Sub_080B39D8 (orig: func_080B39D8) | origin: pure | domain: hardware | MEDIUM / graph_algebra */
struct S { u8 pad[0x848]; u32 arr[16]; }; extern u16 g_08107890[]; u16 hardware_Sub_080B39D8(struct S *a, int b) { return g_08107890[a->arr[b]]; }

/* 0x080B39F4 (28B) | hardware_Sub_080B39F4 (orig: func_080B39F4) | origin: pure | domain: hardware | MEDIUM / graph_algebra */
struct S { u8 pad[0x85C]; u32 arr[16]; }; extern u16 g_0810789A[]; u16 hardware_Sub_080B39F4(struct S *a, int b) { return g_0810789A[a->arr[b]]; }

/* 0x080B3A28 (384B) | hardware_Sub_080B3A28 (orig: func_080B3A28) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
void hardware_Sub_080B3A28(int param_1) {
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  hardware_Sub_080B34DC();
  *(u32 *)(param_1 + 0x00000844) = 3;
  *(u8 *)(param_1 + 0x00000929) = 1;
  piVar5 = (int *)(param_1 + 0x00000884);
  iVar2 = *piVar5;
  piVar3 = (int *)(param_1 + 0x870 + iVar2 * 4);
  iVar1 = *piVar3;
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x00000848 + iVar2 * 4) == 1) {
      *(u16 *)(param_1 + 0x8f0 + iVar2 * 2) = 0;
      *(u32 *)(param_1 + 0x85c + *piVar5 * 4) = 1;
      *(char *)(param_1 + 0x0000090D) = *(char *)(param_1 + 0x0000090D) + '\x01';
      *(u8 *)(param_1 + 0x0000091F + *piVar5) = 1;
      *(u8 *)(param_1 + 0x906 + *piVar5) = 0;
      hardware_Wrap_m4aMPlayStart(param_1 + 0x00000814,199);
    }
  }
  else if (iVar1 == 1) {
    *piVar3 = 0;
    *(u16 *)(param_1 + 0x8f0 + iVar2 * 2) = 0;
    iVar1 = 0x00000915;
    *(u8 *)(param_1 + 0x00000915 + *piVar5) = 1;
    iVar4 = *piVar5;
    iVar2 = iVar4 * 4;
    *(u32 *)(param_1 + iVar1 + -0xcd + iVar2) = 1;
    *(u32 *)(param_1 + iVar1 + -0xb9 + iVar2) = 2;
    *(u8 *)(param_1 + 0x0000091A + iVar4) = 1;
    *(u8 *)(param_1 + 0x00000924 + *piVar5) = 1;
    *(u8 *)(param_1 + iVar1 + 10 + *piVar5) = 1;
    hardware_Wrap_m4aMPlayStart(param_1 + 0x00000814,0x6c);
  }
  else {
    hardware_Wrap_m4aMPlayStart(param_1 + 0x00000814,0x6c);
    iVar1 = *piVar5;
    *(u32 *)(param_1 + 0x870 + iVar1 * 4) = 0;
    *(u8 *)(param_1 + 0x00000924 + iVar1) = 1;
    iVar1 = *piVar5;
    piVar3 = (int *)(param_1 + 0x00000848 + iVar1 * 4);
    if (*piVar3 == 4) {
      *piVar3 = 3;
      iVar2 = 0x0000091A;
    }
    else {
      if (*piVar3 != 5) {
      }
      *piVar3 = 6;
      iVar2 = 0x0000091A;
    }
    *(u8 *)(param_1 + iVar2 + iVar1) = 1;
  }
}

/* 0x080B3BA8 (60B) | hardware_Wrap_Wrap_m4aMPlayStart (orig: func_080B3BA8) | origin: pure | domain: hardware | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 hardware_Wrap_m4aMPlayStart();
extern u32 hardware_Sub_080B0934();
extern u32 hardware_Sub_080B0970();
void hardware_Wrap_Wrap_m4aMPlayStart(int arg0) {
  int *mem_ptr;
  hardware_Wrap_m4aMPlayStart(arg0 + 0x00000818,0xb8);
  mem_ptr = (int *)(arg0 + 0x0000083C);
  if (*mem_ptr == 0) {
    *mem_ptr = 1;
    hardware_Sub_080B0934(arg0);
  }
  else {
    *mem_ptr = 0;
    hardware_Sub_080B0970(arg0);
  }
}

/* 0x080B44EC (248B) | hardware_Sub_080B44EC (orig: func_080B44EC) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
u32 hardware_Sub_080B44EC(u32 *param_1,int param_2) {
  char cVar1;
  int iVar2;
  hardware_Wrap_Ctor_45E4(param_2);
  iVar2 = hardware_GetField_0x00_8918(param_2);
  *(u16 *)(iVar2 + 0x50) = 0x3f;
  hardware_Sub_080B45F0(param_2);
  hardware_Wrap_m4aMPlayStart(param_2 + 0x00000704,0x21);
  cVar1 = *(char *)(param_2 + 0x00000B32);
  while (cVar1 == '\0') {
    hardware_Ctor_87C8(param_2);
    iVar2 = *(int *)(param_2 + 0x00000B14);
    if (iVar2 == 1) {
      hardware_Sub_080B469C(param_2);
    }
    else if (iVar2 < 2) {
      if (iVar2 == 0) {
        hardware_Sub_080B5824(param_2);
      }
    }
    else if (iVar2 == 2) {
      hardware_Sub_080B7648(param_2);
    }
    else if (iVar2 == 3) {
      hardware_Sub_080B888C(param_2);
    }
    cVar1 = *(char *)(param_2 + 0x00000B32);
  }
  if ((int)(-**(u32 **)(param_2 + 0x7a0) | **(u32 **)(param_2 + 0x7a0)) < 0) {
    do {
      hardware_Ctor_87C8(param_2);
    } while ((int)(-**(u32 **)(param_2 + 0x7a0) | **(u32 **)(param_2 + 0x7a0)) < 0);
  }
  *param_1 = 0;
  return param_1;
}

/* 0x080B45E4 (12B) | hardware_Wrap_Ctor_45E4 (orig: func_080B45E4) | origin: pure | domain: hardware | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 hardware_Ctor();
void hardware_Wrap_Ctor_45E4(void) {
  hardware_Ctor();
}

/* 0x080B45F0 (172B) | hardware_Sub_080B45F0 (orig: func_080B45F0) | origin: pure | domain: hardware | MEDIUM / graph_algebra */
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
extern u32 hardware_GetField_0x00_88DC();
extern u32 hardware_GetField_0x00_8918();
extern u32 hardware_GetField_0x00_8920();
extern u32 hardware_GetField_0x00_8940();
extern u32 hardware_Sub_0800894C();
extern u32 code_0803EE94_78A8_Wrap_Ctor();
void hardware_Sub_080B45F0(int arg0) {
  int val;
  int val2;
  u32 val3;
  u32 val4;
  u32 val5;
  u32 val6;
  u32 val7;
  u32 val8;
  u32 tmp_a6;
  u8 r1_zero;
  *(u8 *)(arg0 + 0x00000B31) = (r1_zero = 0);
  *(u8 *)(arg0 + 0x00000B32) = r1_zero;
  val = 0x00000B18;
  *(u32 *)(arg0 + 0x00000B18) = (u32)*(u8 *)(arg0 + 0x00000B18 + 0x40);
  val2 = 0x00000B14;
  *(u32 *)(arg0 + 0x00000B14) = 0;
  *(u8 *)(arg0 + val + 0x25) = 0x16;
  *(u8 *)(arg0 + val2 + 0x2a) = 0x16;
  *(u8 *)(arg0 + val + 0x27) = 0x16;
  val3 = *(u32 *)(arg0 + 0x718);
  val4 = hardware_GetField_0x00_88DC(arg0);
  val5 = hardware_GetField_0x00_8920(arg0);
  val6 = hardware_GetField_0x00_8918(arg0);
  val7 = hardware_GetField_0x00_8940(arg0);
  val8 = hardware_Sub_0800894C(arg0);
  tmp_a6 = arg0 + 0x708;
  code_0803EE94_78A8_Wrap_Ctor(val3, val4, val5, val6, val7, val8, tmp_a6);
}

/* 0x080B5788 (156B) | hardware_Sub_080B5788 (orig: func_080B5788) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
void hardware_Sub_080B5788(int param_1) {
    short * psVar2;
    u16 * puVar3;
    int iVar4;
    short sVar5;
  register u8 *puVar1;
  iVar4 = 0;
  puVar1 = (u8 *)(0x00000B5E + param_1);
  psVar2 = (short *)(param_1 + 0x8c);
  sVar5 = 0x3a00;
  puVar3 = (u16 *)(param_1 + 0x8a);
  do {
    *puVar3 = 0x7800;
    *psVar2 = sVar5;
    *(u8 *)((int)psVar2 + 3) = *puVar1;
    *(u8 *)((int)psVar2 + 0x11) = 1;
    *(u8 *)((int)psVar2 + 9) = 1;
    *(u32 *)(param_1 + 0x6c + iVar4 * 0x40) = 2;
    *(u8 *)((int)psVar2 + 0x1f) = 0;
    psVar2 = psVar2 + 0x20;
    *(u32 *)(param_1 + 0x70 + iVar4 * 0x40) = 2;
    sVar5 = sVar5 + 0x1800;
    puVar3 = puVar3 + 0x20;
    iVar4 = (s8)iVar4 + 1;
  } while (iVar4 < 2);
  *(u32 *)(param_1 + 0x74) = 3;
  *(u32 *)(param_1 + 0x78) = 3;
  *(u32 *)(param_1 + 0xb4) = 1;
  *(u32 *)(param_1 + 0xb8) = 1;
  hardware_Sub_080B8DF4(param_1,0);
  hardware_Sub_080B8DF4(param_1,1);
}

/* 0x080B5824 (4096B) | hardware_Sub_080B5824 (orig: func_080B5824) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
void hardware_Sub_080B5824(int param_1) {
  u8 bVar1;
  u8 uVar2;
  u32 uVar3;
  u32 uVar4;
  u16 *puVar5;
  short *psVar6;
  u8 *pbVar7;
  u32 *puVar8;
  u32 *puVar9;
  u32 *puVar10;
  u16 uVar11;
  u32 *puVar12;
  u32 *puVar13;
  int *piVar14;
  int iVar15;
  u32 *puVar16;
  short sVar17;
  int *piVar18;
  short sVar19;
  u32 uVar20;
  int iVar21;
  int iVar22;
  u32 uStack_1c4;
  u16 uStack_1c0;
  u8 auStack_194 [4];
  u32 uStack_190;
  u8 auStack_18c [4];
  u32 uStack_188;
  u8 auStack_184 [4];
  u32 uStack_180;
  u8 auStack_17c [4];
  u32 uStack_178;
  u8 auStack_174 [4];
  u32 uStack_170;
  u8 auStack_16c [4];
  u32 uStack_168;
  u32 auStack_164 [8];
  int aiStack_144 [2];
  int aiStack_13c [6];
  u32 uStack_124;
  u32 uStack_120;
  u32 uStack_11c;
  u32 uStack_118;
  u32 auStack_114 [8];
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  int iStack_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  u32 uStack_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int *piStack_68;
  int *piStack_64;
  u32 *puStack_60;
  int iStack_5c;
  u32 *puStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  u32 *puStack_44;
  int *piStack_40;
  int *piStack_3c;
  u32 *puStack_38;
  int iStack_34;
  u32 *puStack_30;
  int iStack_2c;
  u32 *puStack_28;
  u32 *puStack_24;
  puVar12 = &uStack_1c4;
  puVar13 = &uStack_1c4;
  iStack_8c = param_1;
  hardware_Sub_08007874(auStack_194);
  uStack_190 = 0;
  hardware_Sub_08007874(auStack_18c);
  uStack_188 = 0;
  hardware_Sub_08007874();
  uStack_180 = 0;
  hardware_Sub_08007874(auStack_17c);
  uStack_178 = 0;
  hardware_Sub_08007874(auStack_174);
  uStack_170 = 0;
  hardware_Sub_08007874(auStack_16c);
  uStack_168 = 0;
  hardware_Sub_08007C28(auStack_194,uStack_190);
  uStack_190 = hardware_Sub_08007B54(auStack_194,6);
  uStack_88 = hardware_Sub_08007D4C(auStack_194);
  hardware_Sub_08007C28(auStack_18c,uStack_188);
  uStack_188 = hardware_Sub_08007B54(auStack_18c,5);
  iStack_84 = hardware_Sub_08007D4C(auStack_18c);
  hardware_Sub_08007C28(auStack_184,uStack_180);
  uStack_180 = hardware_Sub_08007B54(auStack_184,8);
  iStack_80 = hardware_Sub_08007D4C(auStack_184);
  hardware_Sub_08007C28(auStack_17c,uStack_178);
  uStack_178 = hardware_Sub_08007B54(auStack_17c,3);
  iStack_7c = hardware_Sub_08007D4C(auStack_17c);
  hardware_Sub_08007C28(auStack_174,uStack_170);
  uStack_170 = hardware_Sub_08007B54(auStack_174,7);
  iStack_78 = hardware_Sub_08007D4C(auStack_174);
  hardware_Sub_08007C28(auStack_16c,uStack_168);
  uStack_168 = hardware_Sub_08007B54(auStack_16c,6);
  iStack_74 = hardware_Sub_08007D4C(auStack_16c);
  hardware_Sub_080B757C(iStack_8c);
  hardware_Sub_080B7164(iStack_8c,uStack_88);
  puStack_44 = auStack_164;
  piStack_40 = aiStack_144;
  piStack_3c = aiStack_13c;
  puStack_60 = &uStack_124;
  puStack_58 = auStack_114;
  iVar21 = 5;
  do {
    hardware_HW_DMA3SAD_8EB8(0,puVar12,8);
    puVar12 = (u32 *)((int)puVar12 + 8);
    iVar21 = iVar21 + -1;
  } while (-1 < iVar21);
  iVar22 = 0;
  iVar21 = iStack_84 * 0x20;
  iStack_48 = iStack_80 << 5;
  iStack_5c = iStack_80 + 0x6e;
  iStack_54 = iStack_80 + 0xdc;
  sVar17 = 0x58;
  sVar19 = 0x38;
  do {
    *(u8 *)((int)puVar13 + 3) = *(u8 *)((int)puVar13 + 3) & 0x3f | 0x80;
    *(u8 *)((int)puVar13 + 5) = *(u8 *)((int)puVar13 + 5) & 0xf;
    *(u16 *)((int)puVar13 + 4) =
         *(u16 *)((int)puVar13 + 4) & (u16)0xFFFFFC00 |
         (short)iVar22 * 8 + (short)uStack_88 & (u16)0x000003FF;
    *(u8 *)((int)puVar13 + 1) = *(u8 *)((int)puVar13 + 1) & 0x3f | 0x50;
    if (iVar22 < 3) {
      uVar3 = LibC_strlen(iStack_8c + 0x9e);
      *(u16 *)((int)puVar13 + 2) =
           *(u16 *)((int)puVar13 + 2) & (u16)0xFFFFFE00 |
           sVar19 + (short)(uVar3 >> 1) * -8 & (u16)0x000001FF;
      uVar2 = 0x30;
    }
    else {
      uVar3 = LibC_strlen(iStack_8c + 0xde);
      *(u16 *)((int)puVar13 + 2) =
           *(u16 *)((int)puVar13 + 2) & (u16)0xFFFFFE00 |
           sVar17 + (short)(uVar3 >> 1) * -8 & (u16)0x000001FF;
      uVar2 = 0x88;
    }
    *(u8 *)puVar13 = uVar2;
    puVar13 = (u32 *)((int)puVar13 + 8);
    sVar17 = sVar17 + 0x20;
    sVar19 = sVar19 + 0x20;
    iVar22 = iVar22 + 1;
  } while (iVar22 < 6);
  uVar4 = CppRuntime_builtin_new(0x14);
  iVar22 = code_0803EE94_Sub_0805E824(uVar4,*(u32 *)(iStack_8c + 0x788),0,0x100);
  piVar18 = (int *)(iStack_8c + 0x0000096C);
  if (iVar22 != *piVar18) {
    CppRuntime_builtin_delete();
  }
  *piVar18 = iVar22;
  puVar5 = (u16 *)CppRuntime_builtin_new(0x1c);
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[2] = 0;
  puVar5[3] = 0;
  puVar5[4] = 0;
  *(u32 *)(puVar5 + 6) = 0;
  *(u8 *)(puVar5 + 8) = 0;
  *(u8 *)((int)puVar5 + 0x11) = 0;
  *(u32 *)(puVar5 + 10) = 0;
  *(u8 *)(puVar5 + 0xc) = 0;
  piVar14 = (int *)(iStack_8c + 0x970);
  if (puVar5 != (u16 *)*piVar14) {
    CppRuntime_builtin_delete();
  }
  *piVar14 = (int)puVar5;
  code_0803EE94_Sub_0805E860(*piVar18,*(u32 *)(iStack_8c + 0x00000B18));
  *(u16 *)*piVar14 = 0x60;
  *(u16 *)(*piVar14 + 2) = 10;
  *(u16 *)(*piVar14 + 6) = (u16)iStack_84;
  *(u16 *)(*piVar14 + 4) = 1;
  *(u8 *)(*piVar14 + 0x18) = 1;
  puVar13 = (u32 *)(iStack_8c + 0x00000974);
  puVar12 = (u32 *)*piVar18;
  func_080D3918(auStack_164,(int *)*puVar12,
                  *(u16 *)(puVar12[1] + (u32)*(u16 *)(puVar12 + 3) * 4),
                  *(u32 *)(*(int *)*puVar12 + 0x10));
  LibC_memcpy(puStack_44,puStack_44,0x20);
  uVar4 = puStack_44[1];
  uVar20 = puStack_44[2];
  *puVar13 = *puStack_44;
  puVar13[1] = uVar4;
  puVar13[2] = uVar20;
  uVar4 = puStack_44[4];
  uVar20 = puStack_44[5];
  puVar13[3] = puStack_44[3];
  puVar13[4] = uVar4;
  puVar13[5] = uVar20;
  uVar4 = puStack_44[7];
  puVar13[6] = puStack_44[6];
  puVar13[7] = uVar4;
  piVar18 = (int *)hardware_GetField_0x00_8910(iStack_8c);
  iVar22 = *(int *)(iStack_8c + 0x0000097C);
  uVar11 = 0;
  if (iVar22 != 0) {
    uVar11 = (u16)((int *)(iStack_8c + 0x0000097C))[1];
  }
  hardware_Sub_08008F0C(puStack_44,iVar22,0x06010000 + iVar21,uVar11);
  puVar12 = puStack_44;
  puVar13 = (u32 *)piVar18[1];
  if (puVar13 == (u32 *)piVar18[3]) {
    puStack_28 = puVar13;
    iStack_f0 = 1;
    iStack_f4 = (int)puVar13 - *piVar18 >> 4;
    piVar14 = &iStack_f4;
    if (iStack_f4 == 0) {
      piVar14 = &iStack_f0;
    }
    if (iStack_f4 + *piVar14 == 0) {
      puStack_24 = (u32 *)0x0;
      iVar21 = 0;
    }
    else {
      iVar21 = (iStack_f4 + *piVar14) * 0x10;
      puStack_24 = (u32 *)LibC_malloc(iVar21);
      if (puStack_24 == (u32 *)0x0) {
        puStack_24 = (u32 *)code_linkonce_Sub_080D3BC0(iVar21);
      }
    }
    puVar8 = puStack_24;
    for (puVar13 = (u32 *)*piVar18; puVar13 != puStack_28; puVar13 = puVar13 + 4) {
      if (puVar8 != (u32 *)0x0) {
        uVar4 = puVar13[1];
        uVar20 = puVar13[2];
        *puVar8 = *puVar13;
        puVar8[1] = uVar4;
        puVar8[2] = uVar20;
        puVar8[3] = puVar13[3];
      }
      puVar8 = puVar8 + 4;
    }
    iVar22 = iStack_f0;
    if (iStack_f0 == 1) {
      if (puVar8 != (u32 *)0x0) {
        uVar4 = puVar12[1];
        uVar20 = puVar12[2];
        *puVar8 = *puVar12;
        puVar8[1] = uVar4;
        puVar8[2] = uVar20;
        puVar8[3] = puVar12[3];
      }
      puVar8 = puVar8 + 4;
    }
    else {
      for (; iVar22 != 0; iVar22 = iVar22 + -1) {
        if (puVar8 != (u32 *)0x0) {
          uVar4 = puVar12[1];
          uVar20 = puVar12[2];
          *puVar8 = *puVar12;
          puVar8[1] = uVar4;
          puVar8[2] = uVar20;
          puVar8[3] = puVar12[3];
        }
        puVar8 = puVar8 + 4;
      }
    }
    for (iVar22 = *piVar18; iVar22 != piVar18[1]; iVar22 = iVar22 + 0x10) {
    }
    if (*piVar18 != 0) {
      LibC_free();
    }
    *piVar18 = (int)puStack_24;
    piVar18[1] = (int)puVar8;
    piVar18[3] = (int)puStack_24 + iVar21;
  }
  else {
    if (puVar13 != (u32 *)0x0) {
      uVar4 = puStack_44[1];
      uVar20 = puStack_44[2];
      *puVar13 = *puStack_44;
      puVar13[1] = uVar4;
      puVar13[2] = uVar20;
      puVar13[3] = puStack_44[3];
    }
    piVar18[1] = piVar18[1] + 0x10;
  }
  piVar18 = (int *)hardware_GetField_0x00_8910(iStack_8c);
  iVar21 = *(int *)(iStack_8c + 0x00000984);
  uVar11 = 0;
  if (iVar21 != 0) {
    uVar11 = (u16)((int *)(iStack_8c + 0x00000984))[1];
  }
  hardware_Sub_08008F0C(auStack_164,iVar21,0x05000220,uVar11);
  puVar12 = puStack_44;
  puVar13 = (u32 *)piVar18[1];
  if (puVar13 == (u32 *)piVar18[3]) {
    puStack_28 = puVar13;
    iStack_e8 = 1;
    iStack_ec = (int)puVar13 - *piVar18 >> 4;
    piVar14 = &iStack_ec;
    if (iStack_ec == 0) {
      piVar14 = &iStack_e8;
    }
    if (iStack_ec + *piVar14 == 0) {
      puVar13 = (u32 *)0x0;
      iVar21 = 0;
    }
    else {
      iVar21 = (iStack_ec + *piVar14) * 0x10;
      puVar13 = (u32 *)LibC_malloc(iVar21);
      if (puVar13 == (u32 *)0x0) {
        puVar13 = (u32 *)code_linkonce_Sub_080D3BC0(iVar21);
      }
    }
    puVar10 = puVar13;
    for (puVar8 = (u32 *)*piVar18; puVar8 != puStack_28; puVar8 = puVar8 + 4) {
      if (puVar10 != (u32 *)0x0) {
        uVar4 = puVar8[1];
        uVar20 = puVar8[2];
        *puVar10 = *puVar8;
        puVar10[1] = uVar4;
        puVar10[2] = uVar20;
        puVar10[3] = puVar8[3];
      }
      puVar10 = puVar10 + 4;
    }
    iVar22 = iStack_e8;
    if (iStack_e8 == 1) {
      if (puVar10 != (u32 *)0x0) {
        uVar4 = puVar12[1];
        uVar20 = puVar12[2];
        *puVar10 = *puVar12;
        puVar10[1] = uVar4;
        puVar10[2] = uVar20;
        puVar10[3] = puVar12[3];
      }
      puVar10 = puVar10 + 4;
    }
    else {
      for (; iVar22 != 0; iVar22 = iVar22 + -1) {
        if (puVar10 != (u32 *)0x0) {
          uVar4 = puVar12[1];
          uVar20 = puVar12[2];
          *puVar10 = *puVar12;
          puVar10[1] = uVar4;
          puVar10[2] = uVar20;
          puVar10[3] = puVar12[3];
        }
        puVar10 = puVar10 + 4;
      }
    }
    for (iVar22 = *piVar18; iVar22 != piVar18[1]; iVar22 = iVar22 + 0x10) {
    }
    puStack_24 = puVar13;
    if (*piVar18 != 0) {
      LibC_free();
    }
    *piVar18 = (int)puStack_24;
    piVar18[1] = (int)puVar10;
    piVar18[3] = (int)puStack_24 + iVar21;
  }
  else {
    if (puVar13 != (u32 *)0x0) {
      uVar4 = puStack_44[1];
      uVar20 = puStack_44[2];
      *puVar13 = *puStack_44;
      puVar13[1] = uVar4;
      puVar13[2] = uVar20;
      puVar13[3] = puStack_44[3];
    }
    piVar18[1] = piVar18[1] + 0x10;
  }
  uVar4 = CppRuntime_builtin_new(0x14);
  iVar21 = code_0803EE94_Sub_0805E824(uVar4,*(u32 *)(iStack_8c + 0x0000078C),0,0x100);
  piVar18 = (int *)(iStack_8c + 0x00000994);
  if (iVar21 != *piVar18) {
    CppRuntime_builtin_delete();
  }
  *piVar18 = iVar21;
  puVar5 = (u16 *)CppRuntime_builtin_new(0x1c);
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[2] = 0;
  puVar5[3] = 0;
  puVar5[4] = 0;
  *(u32 *)(puVar5 + 6) = 0;
  *(u8 *)(puVar5 + 8) = 0;
  *(u8 *)((int)puVar5 + 0x11) = 0;
  *(u32 *)(puVar5 + 10) = 0;
  *(u8 *)(puVar5 + 0xc) = 0;
  piVar14 = (int *)(iStack_8c + 0x00000998);
  if (puVar5 != (u16 *)*piVar14) {
    CppRuntime_builtin_delete();
  }
  *piVar14 = (int)puVar5;
  code_0803EE94_Sub_0805E860(*piVar18,0);
  *(u16 *)*piVar14 = 0x10;
  *(u16 *)(*piVar14 + 2) = 0x4a;
  *(u16 *)(*piVar14 + 6) = (u16)iStack_80;
  *(u16 *)(*piVar14 + 4) = 2;
  *(u8 *)(*piVar14 + 0x18) = 1;
  puVar13 = (u32 *)(iStack_8c + 0x0000099C);
  puVar12 = (u32 *)*piVar18;
  func_080D3918(auStack_164,(int *)*puVar12,
                  *(u16 *)(puVar12[1] + (u32)*(u16 *)(puVar12 + 3) * 4),
                  *(u32 *)(*(int *)*puVar12 + 0x10));
  LibC_memcpy(puStack_44,puStack_44,0x20);
  uVar4 = puStack_44[1];
  uVar20 = puStack_44[2];
  *puVar13 = *puStack_44;
  puVar13[1] = uVar4;
  puVar13[2] = uVar20;
  uVar4 = puStack_44[4];
  uVar20 = puStack_44[5];
  puVar13[3] = puStack_44[3];
  puVar13[4] = uVar4;
  puVar13[5] = uVar20;
  uVar4 = puStack_44[7];
  puVar13[6] = puStack_44[6];
  puVar13[7] = uVar4;
  piVar18 = (int *)hardware_GetField_0x00_8910(iStack_8c);
  iVar21 = *(int *)(iStack_8c + 0x000009A4);
  uVar11 = 0;
  if (iVar21 != 0) {
    uVar11 = (u16)((int *)(iStack_8c + 0x000009A4))[1];
  }
  hardware_Sub_08008F0C(puStack_44,iVar21,iStack_48 + 0x06010000,uVar11);
  puVar12 = puStack_44;
  puVar13 = (u32 *)piVar18[1];
  if (puVar13 == (u32 *)piVar18[3]) {
    puStack_28 = puVar13;
    iStack_e0 = 1;
    iStack_e4 = (int)puVar13 - *piVar18 >> 4;
    piVar14 = &iStack_e4;
    if (iStack_e4 == 0) {
      piVar14 = &iStack_e0;
    }
    if (iStack_e4 + *piVar14 == 0) {
      puVar13 = (u32 *)0x0;
      iVar21 = 0;
    }
    else {
      iVar21 = (iStack_e4 + *piVar14) * 0x10;
      puVar13 = (u32 *)LibC_malloc(iVar21);
      if (puVar13 == (u32 *)0x0) {
        puVar13 = (u32 *)code_linkonce_Sub_080D3BC0(iVar21);
      }
    }
    puVar10 = puVar13;
    for (puVar8 = (u32 *)*piVar18; puVar8 != puStack_28; puVar8 = puVar8 + 4) {
      if (puVar10 != (u32 *)0x0) {
        uVar4 = puVar8[1];
        uVar20 = puVar8[2];
        *puVar10 = *puVar8;
        puVar10[1] = uVar4;
        puVar10[2] = uVar20;
        puVar10[3] = puVar8[3];
      }
      puVar10 = puVar10 + 4;
    }
    iVar22 = iStack_e0;
    if (iStack_e0 == 1) {
      if (puVar10 != (u32 *)0x0) {
        uVar4 = puVar12[1];
        uVar20 = puVar12[2];
        *puVar10 = *puVar12;
        puVar10[1] = uVar4;
        puVar10[2] = uVar20;
        puVar10[3] = puVar12[3];
      }
      puVar10 = puVar10 + 4;
    }
    else {
      for (; iVar22 != 0; iVar22 = iVar22 + -1) {
        if (puVar10 != (u32 *)0x0) {
          uVar4 = puVar12[1];
          uVar20 = puVar12[2];
          *puVar10 = *puVar12;
          puVar10[1] = uVar4;
          puVar10[2] = uVar20;
          puVar10[3] = puVar12[3];
        }
        puVar10 = puVar10 + 4;
      }
    }
    for (iVar22 = *piVar18; iVar22 != piVar18[1]; iVar22 = iVar22 + 0x10) {
    }
    puStack_24 = puVar13;
    if (*piVar18 != 0) {
      LibC_free();
    }
    *piVar18 = (int)puStack_24;
    piVar18[1] = (int)puVar10;
    piVar18[3] = (int)puStack_24 + iVar21;
  }
  else {
    if (puVar13 != (u32 *)0x0) {
      uVar4 = puStack_44[1];
      uVar20 = puStack_44[2];
      *puVar13 = *puStack_44;
      puVar13[1] = uVar4;
      puVar13[2] = uVar20;
      puVar13[3] = puStack_44[3];
    }
    piVar18[1] = piVar18[1] + 0x10;
  }
  piVar18 = (int *)hardware_GetField_0x00_8910(iStack_8c);
  iVar21 = *(int *)(iStack_8c + 0x000009AC);
  uVar11 = 0;
  if (iVar21 != 0) {
    uVar11 = (u16)((int *)(iStack_8c + 0x000009AC))[1];
  }
  hardware_Sub_08008F0C(auStack_164,iVar21,0x05000240,uVar11);
  puVar12 = puStack_44;
  puVar13 = (u32 *)piVar18[1];
  if (puVar13 == (u32 *)piVar18[3]) {
    puStack_28 = puVar13;
    iStack_d8 = 1;
    iStack_dc = (int)puVar13 - *piVar18 >> 4;
    piVar14 = &iStack_dc;
    if (iStack_dc == 0) {
      piVar14 = &iStack_d8;
    }
    if (iStack_dc + *piVar14 == 0) {
      puVar13 = (u32 *)0x0;
      iVar21 = 0;
    }
    else {
      iVar21 = (iStack_dc + *piVar14) * 0x10;
      puVar13 = (u32 *)LibC_malloc(iVar21);
      if (puVar13 == (u32 *)0x0) {
        puVar13 = (u32 *)code_linkonce_Sub_080D3BC0(iVar21);
      }
    }
    puVar10 = puVar13;
    for (puVar8 = (u32 *)*piVar18; puVar8 != puStack_28; puVar8 = puVar8 + 4) {
      if (puVar10 != (u32 *)0x0) {
        uVar4 = puVar8[1];
        uVar20 = puVar8[2];
        *puVar10 = *puVar8;
        puVar10[1] = uVar4;
        puVar10[2] = uVar20;
        puVar10[3] = puVar8[3];
      }
      puVar10 = puVar10 + 4;
    }
    iVar22 = iStack_d8;
    if (iStack_d8 == 1) {
      if (puVar10 != (u32 *)0x0) {
        uVar4 = puVar12[1];
        uVar20 = puVar12[2];
        *puVar10 = *puVar12;
        puVar10[1] = uVar4;
        puVar10[2] = uVar20;
        puVar10[3] = puVar12[3];
      }
      puVar10 = puVar10 + 4;
    }
    else {
      for (; iVar22 != 0; iVar22 = iVar22 + -1) {
        if (puVar10 != (u32 *)0x0) {
          uVar4 = puVar12[1];
          uVar20 = puVar12[2];
          *puVar10 = *puVar12;
          puVar10[1] = uVar4;
          puVar10[2] = uVar20;
          puVar10[3] = puVar12[3];
        }
        puVar10 = puVar10 + 4;
      }
    }
    for (iVar22 = *piVar18; iVar22 != piVar18[1]; iVar22 = iVar22 + 0x10) {
    }
    puStack_24 = puVar13;
    if (*piVar18 != 0) {
      LibC_free();
    }
    *piVar18 = (int)puStack_24;
    piVar18[1] = (int)puVar10;
    piVar18[3] = (int)puStack_24 + iVar21;
  }
  else {
    if (puVar13 != (u32 *)0x0) {
      uVar4 = puStack_44[1];
      uVar20 = puStack_44[2];
      *puVar13 = *puStack_44;
      puVar13[1] = uVar4;
      puVar13[2] = uVar20;
      puVar13[3] = puStack_44[3];
    }
    piVar18[1] = piVar18[1] + 0x10;
  }
  puVar12 = puStack_44;
  *(u16 *)(puStack_44 + 2) = 0;
  puVar12[3] = 0;
  *(u8 *)(puVar12 + 4) = 0;
  *(u8 *)((int)puVar12 + 0x11) = 0;
  puVar12[5] = 0;
  *(u16 *)puVar12 = 0x90;
  *(u16 *)((int)puVar12 + 2) = 0x26;
  *(u16 *)((int)puVar12 + 6) = (u16)iStack_5c;
  *(u16 *)(puVar12 + 1) = 3;
  *(u8 *)(puVar12 + 6) = 1;
  func_080D3918(piStack_40,*(int **)(iStack_8c + 0x790),0,
                  *(u32 *)(**(int **)(iStack_8c + 0x790) + 0x10));
  piVar18 = (int *)hardware_GetField_0x00_8910(iStack_8c);
  uVar11 = 0;
  if (*piStack_3c != 0) {
    uVar11 = (u16)piStack_3c[1];
  }
  hardware_Sub_08008F0C(&uStack_124,*piStack_3c,iStack_48 + 0x06010DC0,uVar11);
  puVar12 = puStack_60;
  puVar13 = (u32 *)piVar18[1];
  if (puVar13 == (u32 *)piVar18[3]) {
    puStack_28 = puVar13;
    iStack_d0 = 1;
    iStack_d4 = (int)puVar13 - *piVar18 >> 4;
    piVar14 = &iStack_d4;
    if (iStack_d4 == 0) {
      piVar14 = &iStack_d0;
    }
    if (iStack_d4 + *piVar14 == 0) {
      puVar13 = (u32 *)0x0;
      iVar21 = 0;
    }
    else {
      iVar21 = (iStack_d4 + *piVar14) * 0x10;
      puVar13 = (u32 *)LibC_malloc(iVar21);
      if (puVar13 == (u32 *)0x0) {
        puVar13 = (u32 *)code_linkonce_Sub_080D3BC0(iVar21);
      }
    }
    puVar10 = puVar13;
    for (puVar8 = (u32 *)*piVar18; puVar8 != puStack_28; puVar8 = puVar8 + 4) {
      if (puVar10 != (u32 *)0x0) {
        uVar4 = puVar8[1];
        uVar20 = puVar8[2];
        *puVar10 = *puVar8;
        puVar10[1] = uVar4;
        puVar10[2] = uVar20;
        puVar10[3] = puVar8[3];
      }
      puVar10 = puVar10 + 4;
    }
    iVar22 = iStack_d0;
    if (iStack_d0 == 1) {
      if (puVar10 != (u32 *)0x0) {
        uVar4 = puVar12[1];
        uVar20 = puVar12[2];
        *puVar10 = *puVar12;
        puVar10[1] = uVar4;
        puVar10[2] = uVar20;
        puVar10[3] = puVar12[3];
      }
      puVar10 = puVar10 + 4;
    }
    else {
      for (; iVar22 != 0; iVar22 = iVar22 + -1) {
        if (puVar10 != (u32 *)0x0) {
          uVar4 = puVar12[1];
          uVar20 = puVar12[2];
          *puVar10 = *puVar12;
          puVar10[1] = uVar4;
          puVar10[2] = uVar20;
          puVar10[3] = puVar12[3];
        }
        puVar10 = puVar10 + 4;
      }
    }
    for (iVar22 = *piVar18; iVar22 != piVar18[1]; iVar22 = iVar22 + 0x10) {
    }
    puStack_24 = puVar13;
    if (*piVar18 != 0) {
      LibC_free();
    }
    *piVar18 = (int)puStack_24;
    piVar18[1] = (int)puVar10;
    piVar18[3] = (int)puStack_24 + iVar21;
  }
  else {
    if (puVar13 != (u32 *)0x0) {
      uVar4 = puStack_60[1];
      uVar20 = puStack_60[2];
      *puVar13 = *puStack_60;
      puVar13[1] = uVar4;
      puVar13[2] = uVar20;
      puVar13[3] = puStack_60[3];
    }
    piVar18[1] = piVar18[1] + 0x10;
  }
  uVar4 = CppRuntime_builtin_new(0x14);
  iVar21 = code_0803EE94_Sub_0805E824(uVar4,*(u32 *)(iStack_8c + 0x790),0,0x100);
  piVar18 = (int *)(iStack_8c + 0x000009BC);
  if (iVar21 != *piVar18) {
    CppRuntime_builtin_delete();
  }
  *piVar18 = iVar21;
  puVar5 = (u16 *)CppRuntime_builtin_new(0x1c);
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[2] = 0;
  puVar5[3] = 0;
  puVar5[4] = 0;
  *(u32 *)(puVar5 + 6) = 0;
  *(u8 *)(puVar5 + 8) = 0;
  *(u8 *)((int)puVar5 + 0x11) = 0;
  *(u32 *)(puVar5 + 10) = 0;
  *(u8 *)(puVar5 + 0xc) = 0;
  piVar14 = (int *)(iStack_8c + 0x9c0);
  if (puVar5 != (u16 *)*piVar14) {
    CppRuntime_builtin_delete();
  }
  *piVar14 = (int)puVar5;
  code_0803EE94_Sub_0805E860(*piVar18,*(u8 *)
                          (iStack_8c + 0x00000B3D + *(int *)(iStack_8c + 0x00000B18)));
  *(u16 *)*piVar14 = 0x90;
  *(u16 *)(*piVar14 + 2) = 0x26;
  *(u16 *)(*piVar14 + 6) = (u16)iStack_54;
  *(u16 *)(*piVar14 + 4) = 3;
  *(u8 *)(*piVar14 + 0x18) = 1;
  puVar13 = (u32 *)(iStack_8c + 0x000009C4);
  puVar12 = (u32 *)*piVar18;
  func_080D3918(auStack_114,(int *)*puVar12,
                  *(u16 *)(puVar12[1] + (u32)*(u16 *)(puVar12 + 3) * 4),
                  *(u32 *)(*(int *)*puVar12 + 0x10));
  LibC_memcpy(puStack_58,puStack_58,0x20);
  uVar4 = puStack_58[1];
  uVar20 = puStack_58[2];
  *puVar13 = *puStack_58;
  puVar13[1] = uVar4;
  puVar13[2] = uVar20;
  uVar4 = puStack_58[4];
  uVar20 = puStack_58[5];
  puVar13[3] = puStack_58[3];
  puVar13[4] = uVar4;
  puVar13[5] = uVar20;
  uVar4 = puStack_58[7];
  puVar13[6] = puStack_58[6];
  puVar13[7] = uVar4;
  piVar18 = (int *)hardware_GetField_0x00_8910(iStack_8c);
  iVar21 = *(int *)(iStack_8c + 0x000009CC);
  uVar11 = 0;
  if (iVar21 != 0) {
    uVar11 = (u16)((int *)(iStack_8c + 0x000009CC))[1];
  }
  hardware_Sub_08008F0C(&uStack_124,iVar21,iStack_48 + 0x06011B80,uVar11);
  puVar12 = puStack_60;
  puVar13 = (u32 *)piVar18[1];
  if (puVar13 == (u32 *)piVar18[3]) {
    puStack_28 = puVar13;
    iStack_c8 = 1;
    iStack_cc = (int)puVar13 - *piVar18 >> 4;
    piVar14 = &iStack_cc;
    if (iStack_cc == 0) {
      piVar14 = &iStack_c8;
    }
    if (iStack_cc + *piVar14 == 0) {
      puVar13 = (u32 *)0x0;
      iVar21 = 0;
    }
    else {
      iVar21 = (iStack_cc + *piVar14) * 0x10;
      puVar13 = (u32 *)LibC_malloc(iVar21);
      if (puVar13 == (u32 *)0x0) {
        puVar13 = (u32 *)code_linkonce_Sub_080D3BC0(iVar21);
      }
    }
    puVar10 = puVar13;
    for (puVar8 = (u32 *)*piVar18; puVar8 != puStack_28; puVar8 = puVar8 + 4) {
      if (puVar10 != (u32 *)0x0) {
        uVar4 = puVar8[1];
        uVar20 = puVar8[2];
        *puVar10 = *puVar8;
        puVar10[1] = uVar4;
        puVar10[2] = uVar20;
        puVar10[3] = puVar8[3];
      }
      puVar10 = puVar10 + 4;
    }
    iVar22 = iStack_c8;
    if (iStack_c8 == 1) {
      if (puVar10 != (u32 *)0x0) {
        uVar4 = puVar12[1];
        uVar20 = puVar12[2];
        *puVar10 = *puVar12;
        puVar10[1] = uVar4;
        puVar10[2] = uVar20;
        puVar10[3] = puVar12[3];
      }
      puVar10 = puVar10 + 4;
    }
    else {
      for (; iVar22 != 0; iVar22 = iVar22 + -1) {
        if (puVar10 != (u32 *)0x0) {
          uVar4 = puVar12[1];
          uVar20 = puVar12[2];
          *puVar10 = *puVar12;
          puVar10[1] = uVar4;
          puVar10[2] = uVar20;
          puVar10[3] = puVar12[3];
        }
        puVar10 = puVar10 + 4;
      }
    }
    for (iVar22 = *piVar18; iVar22 != piVar18[1]; iVar22 = iVar22 + 0x10) {
    }
    puStack_24 = puVar13;
    if (*piVar18 != 0) {
      LibC_free();
    }
    *piVar18 = (int)puStack_24;
    piVar18[1] = (int)puVar10;
    piVar18[3] = (int)puStack_24 + iVar21;
  }
  else {
    if (puVar13 != (u32 *)0x0) {
      uVar4 = puStack_60[1];
      uVar20 = puStack_60[2];
      *puVar13 = *puStack_60;
      puVar13[1] = uVar4;
      puVar13[2] = uVar20;
      puVar13[3] = puStack_60[3];
    }
    piVar18[1] = piVar18[1] + 0x10;
  }
  piVar18 = (int *)hardware_GetField_0x00_8910(iStack_8c);
  iVar21 = *(int *)(iStack_8c + 0x000009D4);
  uVar11 = 0;
  if (iVar21 != 0) {
    uVar11 = (u16)((int *)(iStack_8c + 0x000009D4))[1];
  }
  hardware_Sub_08008F0C(&uStack_124,iVar21,0x05000260,uVar11);
  puVar12 = puStack_60;
  puVar13 = (u32 *)piVar18[1];
  if (puVar13 == (u32 *)piVar18[3]) {
    iStack_c0 = 1;
    iStack_c4 = (int)puVar13 - *piVar18 >> 4;
    piVar14 = &iStack_c4;
    if (iStack_c4 == 0) {
      piVar14 = &iStack_c0;
    }
    if (iStack_c4 + *piVar14 == 0) {
      puVar8 = (u32 *)0x0;
      iVar21 = 0;
    }
    else {
      iVar21 = (iStack_c4 + *piVar14) * 0x10;
      puVar8 = (u32 *)LibC_malloc(iVar21);
      if (puVar8 == (u32 *)0x0) {
        puVar8 = (u32 *)code_linkonce_Sub_080D3BC0(iVar21);
      }
    }
    puVar16 = puVar8;
    for (puVar10 = (u32 *)*piVar18; puVar10 != puVar13; puVar10 = puVar10 + 4) {
      if (puVar16 != (u32 *)0x0) {
        uVar4 = puVar10[1];
        uVar20 = puVar10[2];
        *puVar16 = *puVar10;
        puVar16[1] = uVar4;
        puVar16[2] = uVar20;
        puVar16[3] = puVar10[3];
      }
      puVar16 = puVar16 + 4;
    }
    iVar22 = iStack_c0;
    if (iStack_c0 == 1) {
      if (puVar16 != (u32 *)0x0) {
        uVar4 = puVar12[1];
        uVar20 = puVar12[2];
        *puVar16 = *puVar12;
        puVar16[1] = uVar4;
        puVar16[2] = uVar20;
        puVar16[3] = puVar12[3];
      }
      puVar16 = puVar16 + 4;
    }
    else {
      for (; iVar22 != 0; iVar22 = iVar22 + -1) {
        if (puVar16 != (u32 *)0x0) {
          uVar4 = puVar12[1];
          uVar20 = puVar12[2];
          *puVar16 = *puVar12;
          puVar16[1] = uVar4;
          puVar16[2] = uVar20;
          puVar16[3] = puVar12[3];
        }
        puVar16 = puVar16 + 4;
      }
    }
    for (iVar22 = *piVar18; iVar22 != piVar18[1]; iVar22 = iVar22 + 0x10) {
    }
    puStack_24 = puVar8;
    if (*piVar18 != 0) {
      LibC_free();
    }
    *piVar18 = (int)puStack_24;
    piVar18[1] = (int)puVar16;
    piVar18[3] = (int)puStack_24 + iVar21;
  }
  else {
    if (puVar13 != (u32 *)0x0) {
      uVar4 = puStack_60[1];
      uVar20 = puStack_60[2];
      *puVar13 = *puStack_60;
      puVar13[1] = uVar4;
      puVar13[2] = uVar20;
      puVar13[3] = puStack_60[3];
    }
    piVar18[1] = piVar18[1] + 0x10;
  }
  uVar4 = CppRuntime_builtin_new(0x14);
  iVar21 = code_0803EE94_Sub_0805E824(uVar4,*(u32 *)(iStack_8c + 0x00000794),0,0x100);
  piVar18 = (int *)(iStack_8c + 0x000009E4);
  if (iVar21 != *piVar18) {
    CppRuntime_builtin_delete();
  }
  *piVar18 = iVar21;
  code_0803EE94_Sub_0805E860(iVar21,0);
  iVar21 = 0;
  puStack_38 = (u32 *)(iStack_8c + 0x9f0);
  iStack_34 = 0;
  puStack_30 = (u32 *)(iStack_8c + 0x000009E8);
  iStack_2c = iStack_7c;
  do {
    psVar6 = (short *)CppRuntime_builtin_new(0x1c);
    *psVar6 = 0;
    psVar6[1] = 0;
    psVar6[2] = 0;
    psVar6[3] = 0;
    psVar6[4] = 0;
    psVar6[6] = 0;
    psVar6[7] = 0;
    *(u8 *)(psVar6 + 8) = 0;
    *(u8 *)((int)psVar6 + 0x11) = 0;
    psVar6[10] = 0;
    psVar6[0xb] = 0;
    *(u8 *)(psVar6 + 0xc) = 0;
    if (psVar6 != (short *)*puStack_30) {
      CppRuntime_builtin_delete();
    }
    *puStack_30 = psVar6;
    *psVar6 = (short)iVar21 * 0x9e + 0x28;
    psVar6[1] = 0xe;
    psVar6[3] = (short)iStack_2c;
    psVar6[2] = 4;
    *(u8 *)(psVar6 + 0xc) = 1;
    if (iVar21 == 0) {
      *(u8 *)(*(int *)(iStack_8c + 0x000009E8) + 0x10) = 1;
    }
    puVar12 = *(u32 **)(iStack_8c + 0x000009E4);
    func_080D3918(&uStack_124,(int *)*puVar12,
                    *(u16 *)(puVar12[1] + (u32)*(u16 *)(puVar12 + 3) * 4),
                    *(u32 *)(*(int *)*puVar12 + 0x10));
    LibC_memcpy(puStack_60,puStack_60,0x20);
    uVar4 = puStack_60[1];
    uVar20 = puStack_60[2];
    *puStack_38 = *puStack_60;
    puStack_38[1] = uVar4;
    puStack_38[2] = uVar20;
    uVar4 = puStack_60[4];
    uVar20 = puStack_60[5];
    puStack_38[3] = puStack_60[3];
    puStack_38[4] = uVar4;
    puStack_38[5] = uVar20;
    uVar4 = puStack_60[7];
    puStack_38[6] = puStack_60[6];
    puStack_38[7] = uVar4;
    piVar18 = (int *)hardware_GetField_0x00_8910(iStack_8c,puStack_38 + 8);
    uVar11 = 0;
    if (puStack_38[2] != 0) {
      uVar11 = *(u16 *)(puStack_38 + 3);
    }
    hardware_Sub_08008F0C(puStack_60,puStack_38[2],iStack_2c * 0x20 + 0x06010000,uVar11);
    puVar12 = puStack_60;
    puVar13 = (u32 *)piVar18[1];
    if (puVar13 == (u32 *)piVar18[3]) {
      puStack_28 = puVar13;
      iStack_b8 = 1;
      iStack_bc = (int)puVar13 - *piVar18 >> 4;
      piVar14 = &iStack_bc;
      if (iStack_bc == 0) {
        piVar14 = &iStack_b8;
      }
      if (iStack_bc + *piVar14 == 0) {
        puVar13 = (u32 *)0x0;
        iVar22 = 0;
      }
      else {
        iVar22 = (iStack_bc + *piVar14) * 0x10;
        puVar13 = (u32 *)LibC_malloc(iVar22);
        if (puVar13 == (u32 *)0x0) {
          puVar13 = (u32 *)code_linkonce_Sub_080D3BC0(iVar22);
        }
      }
      puVar10 = puVar13;
      for (puVar8 = (u32 *)*piVar18; puVar8 != puStack_28; puVar8 = puVar8 + 4) {
        if (puVar10 != (u32 *)0x0) {
          uVar4 = puVar8[1];
          uVar20 = puVar8[2];
          *puVar10 = *puVar8;
          puVar10[1] = uVar4;
          puVar10[2] = uVar20;
          puVar10[3] = puVar8[3];
        }
        puVar10 = puVar10 + 4;
      }
      iVar15 = iStack_b8;
      if (iStack_b8 == 1) {
        if (puVar10 != (u32 *)0x0) {
          uVar4 = puVar12[1];
          uVar20 = puVar12[2];
          *puVar10 = *puVar12;
          puVar10[1] = uVar4;
          puVar10[2] = uVar20;
          puVar10[3] = puVar12[3];
        }
        puVar10 = puVar10 + 4;
      }
      else {
        for (; iVar15 != 0; iVar15 = iVar15 + -1) {
          if (puVar10 != (u32 *)0x0) {
            uVar4 = puVar12[1];
            uVar20 = puVar12[2];
            *puVar10 = *puVar12;
            puVar10[1] = uVar4;
            puVar10[2] = uVar20;
            puVar10[3] = puVar12[3];
          }
          puVar10 = puVar10 + 4;
        }
      }
      for (iVar15 = *piVar18; iVar15 != piVar18[1]; iVar15 = iVar15 + 0x10) {
      }
      puStack_24 = puVar13;
      if (*piVar18 != 0) {
        LibC_free();
      }
      *piVar18 = (int)puStack_24;
      piVar18[1] = (int)puVar10;
      piVar18[3] = (int)puStack_24 + iVar22;
    }
    else {
      if (puVar13 != (u32 *)0x0) {
        uVar4 = puStack_60[1];
        uVar20 = puStack_60[2];
        *puVar13 = *puStack_60;
        puVar13[1] = uVar4;
        puVar13[2] = uVar20;
        puVar13[3] = puStack_60[3];
      }
      piVar18[1] = piVar18[1] + 0x10;
    }
    piVar18 = (int *)hardware_GetField_0x00_8910(iStack_8c);
    uVar11 = 0;
    if (*(int *)(iStack_34 + iStack_8c + 0xa00) != 0) {
      uVar11 = *(u16 *)(iStack_34 + iStack_8c + 0xa04);
    }
    hardware_Sub_08008F0C(&uStack_124,*(u32 *)(iStack_34 + iStack_8c + 0xa00),0x05000280,uVar11);
    puVar12 = puStack_60;
    puVar13 = (u32 *)piVar18[1];
    if (puVar13 == (u32 *)piVar18[3]) {
      puStack_28 = puVar13;
      iStack_b0 = 1;
      iStack_b4 = (int)puVar13 - *piVar18 >> 4;
      piVar14 = &iStack_b4;
      if (iStack_b4 == 0) {
        piVar14 = &iStack_b0;
      }
      if (iStack_b4 + *piVar14 == 0) {
        puVar13 = (u32 *)0x0;
        iVar22 = 0;
      }
      else {
        iVar22 = (iStack_b4 + *piVar14) * 0x10;
        puVar13 = (u32 *)LibC_malloc(iVar22);
        if (puVar13 == (u32 *)0x0) {
          puVar13 = (u32 *)code_linkonce_Sub_080D3BC0(iVar22);
        }
      }
      puVar10 = puVar13;
      for (puVar8 = (u32 *)*piVar18; puVar8 != puStack_28; puVar8 = puVar8 + 4) {
        if (puVar10 != (u32 *)0x0) {
          uVar4 = puVar8[1];
          uVar20 = puVar8[2];
          *puVar10 = *puVar8;
          puVar10[1] = uVar4;
          puVar10[2] = uVar20;
          puVar10[3] = puVar8[3];
        }
        puVar10 = puVar10 + 4;
      }
      iVar15 = iStack_b0;
      if (iStack_b0 == 1) {
        if (puVar10 != (u32 *)0x0) {
          uVar4 = puVar12[1];
          uVar20 = puVar12[2];
          *puVar10 = *puVar12;
          puVar10[1] = uVar4;
          puVar10[2] = uVar20;
          puVar10[3] = puVar12[3];
        }
        puVar10 = puVar10 + 4;
      }
      else {
        for (; iVar15 != 0; iVar15 = iVar15 + -1) {
          if (puVar10 != (u32 *)0x0) {
            uVar4 = puVar12[1];
            uVar20 = puVar12[2];
            *puVar10 = *puVar12;
            puVar10[1] = uVar4;
            puVar10[2] = uVar20;
            puVar10[3] = puVar12[3];
          }
          puVar10 = puVar10 + 4;
        }
      }
      for (iVar15 = *piVar18; iVar15 != piVar18[1]; iVar15 = iVar15 + 0x10) {
      }
      puStack_24 = puVar13;
      if (*piVar18 != 0) {
        LibC_free();
      }
      *piVar18 = (int)puStack_24;
      piVar18[1] = (int)puVar10;
      piVar18[3] = (int)puStack_24 + iVar22;
    }
    else {
      if (puVar13 != (u32 *)0x0) {
        uVar4 = puStack_60[1];
        uVar20 = puStack_60[2];
        *puVar13 = *puStack_60;
        puVar13[1] = uVar4;
        puVar13[2] = uVar20;
        puVar13[3] = puStack_60[3];
      }
      piVar18[1] = piVar18[1] + 0x10;
    }
    puStack_38 = puStack_38 + 8;
    iStack_34 = iStack_34 + 0x20;
    puStack_30 = puStack_30 + 1;
    iStack_2c = iStack_2c + 4;
    iVar21 = iVar21 + 1;
  } while (iVar21 < 2);
  uVar4 = CppRuntime_builtin_new(0x14);
  iVar21 = code_0803EE94_Sub_0805E824(uVar4,*(u32 *)(iStack_8c + 0x798),0,0x100);
  piVar18 = (int *)(iStack_8c + 0xa30);
  if (iVar21 != *piVar18) {
    CppRuntime_builtin_delete();
  }
  *piVar18 = iVar21;
  code_0803EE94_Sub_0805E860(iVar21,0);
  *(u16 *)(*piVar18 + 0x10) = 0x90;
  iVar21 = 0;
  puVar12 = (u32 *)(iStack_8c + 0x00000A34);
  sVar19 = 0;
  do {
    psVar6 = (short *)CppRuntime_builtin_new(0x1c);
    *psVar6 = 0;
    psVar6[1] = 0;
    psVar6[2] = 0;
    psVar6[3] = 0;
    psVar6[4] = 0;
    psVar6[6] = 0;
    psVar6[7] = 0;
    *(u8 *)(psVar6 + 8) = 0;
    *(u8 *)((int)psVar6 + 0x11) = 0;
    psVar6[10] = 0;
    psVar6[0xb] = 0;
    *(u8 *)(psVar6 + 0xc) = 0;
    if (psVar6 != (short *)*puVar12) {
      CppRuntime_builtin_delete();
    }
    *puVar12 = psVar6;
    puVar12 = puVar12 + 1;
    *psVar6 = (short)iVar21 * 0x80 + 0x10;
    psVar6[1] = 0x4a - sVar19;
    psVar6[3] = (short)iStack_78;
    psVar6[2] = 5;
    *(u8 *)(psVar6 + 0xc) = 1;
    sVar19 = sVar19 + 0x24;
    iVar21 = iVar21 + 1;
  } while (iVar21 < 2);
  uVar4 = CppRuntime_builtin_new(0x14);
  iVar21 = code_0803EE94_Sub_0805E824(uVar4,*(u32 *)(iStack_8c + 0x0000079C),0,0x100);
  piVar18 = (int *)(iStack_8c + 0x00000A7C);
  if (iVar21 != *piVar18) {
    CppRuntime_builtin_delete();
  }
  *piVar18 = iVar21;
  code_0803EE94_Sub_0805E860(iVar21,0);
  puVar5 = (u16 *)CppRuntime_builtin_new(0x1c);
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[2] = 0;
  puVar5[3] = 0;
  puVar5[4] = 0;
  *(u32 *)(puVar5 + 6) = 0;
  *(u8 *)(puVar5 + 8) = 0;
  *(u8 *)((int)puVar5 + 0x11) = 0;
  *(u32 *)(puVar5 + 10) = 0;
  *(u8 *)(puVar5 + 0xc) = 0;
  puVar12 = (u32 *)(iStack_8c + 0xa80);
  if (puVar5 != (u16 *)*puVar12) {
    CppRuntime_builtin_delete();
  }
  *puVar12 = puVar5;
  *puVar5 = 0x60;
  puVar5[1] = 0x48;
  puVar5[3] = (u16)iStack_74;
  puVar5[2] = 6;
  *(u8 *)(puVar5 + 0xc) = 1;
  iStack_70 = 1;
  iStack_6c = 0;
  if (*(int *)(iStack_8c + 0x00000B14) == 0) {
    piStack_68 = (int *)(iStack_8c + 0x7a0);
    do {
      hardware_Ctor_87C8(iStack_8c);
      hardware_Sub_080088B8(iStack_8c);
      uVar3 = hardware_GetField_0x00_88D4(iStack_8c);
      piVar18 = piStack_68;
      if (iStack_70 != 0) {
        hardware_Sub_0800934C(*piStack_68 + 0xc,0x00000889,1,1);
        iVar21 = hardware_GetField_0x00_8940(iStack_8c);
        func_080D3914(iVar21,*piVar18,*(u32 *)(*(int *)(iVar21 + 8) + 0x10));
        iStack_70 = 0;
      }
      if (iStack_6c == 0) {
        if ((uVar3 & 1) != 0) {
          puVar12 = (u32 *)(iStack_8c + 0x7a0);
          puVar9 = (u32 *)*puVar12;
          uVar3 = *puVar9;
          if (-1 < (int)(-uVar3 | uVar3)) {
            iStack_6c = 1;
            hardware_Sub_08009378(puVar9 + 3,0x00000889,1);
            iVar21 = hardware_GetField_0x00_8940(iStack_8c);
            func_080D3914(iVar21,*puVar12,*(u32 *)(*(int *)(iVar21 + 8) + 0x10));
          }
        }
      }
      else if (-1 < (int)(-*(u32 *)*piStack_68 | *(u32 *)*piStack_68)) {
        *(u32 *)(iStack_8c + 0x00000B14) = 1;
      }
      iVar21 = 5;
      puVar12 = &uStack_1c4;
      do {
        pbVar7 = (u8 *)hardware_GetField_0x00_8920(iStack_8c);
        bVar1 = *pbVar7;
        if (bVar1 < 0x80) {
          *(u32 *)(pbVar7 + (u32)bVar1 * 8 + 4) = *puVar12;
          *(u16 *)(pbVar7 + (u32)bVar1 * 8 + 4 + 4) = *(u16 *)(puVar12 + 1);
          *pbVar7 = bVar1 + 1;
        }
        puVar12 = puVar12 + 2;
        iVar21 = iVar21 + -1;
      } while (-1 < iVar21);
      uVar4 = hardware_GetField_0x00_8920(iStack_8c);
      iVar21 = *(int *)(iStack_8c + 0x00000974);
      uVar11 = 0;
      if (iVar21 != 0) {
        uVar11 = (u16)((int *)(iStack_8c + 0x00000974))[1];
      }
      code_0803EE94_Sub_0805E99C(uVar4,iVar21,uVar11,*(u32 *)(iStack_8c + 0x970));
      uVar4 = hardware_GetField_0x00_8920(iStack_8c);
      iVar21 = *(int *)(iStack_8c + 0x0000099C);
      uVar11 = 0;
      if (iVar21 != 0) {
        uVar11 = (u16)((int *)(iStack_8c + 0x0000099C))[1];
      }
      code_0803EE94_Sub_0805E99C(uVar4,iVar21,uVar11,*(u32 *)(iStack_8c + 0x00000998));
      iVar21 = iStack_8c;
      if (*(char *)(iStack_8c + 0x00000B3D + *(int *)(iStack_8c + 0x00000B18)) != '\0') {
        uVar4 = hardware_GetField_0x00_8920(iStack_8c);
        iVar22 = *(int *)(iVar21 + 0x000009C4);
        uVar11 = 0;
        if (iVar22 != 0) {
          uVar11 = (u16)((int *)(iVar21 + 0x000009C4))[1];
        }
        code_0803EE94_Sub_0805E99C(uVar4,iVar22,uVar11,*(u32 *)(iStack_8c + 0x9c0));
      }
      uVar4 = hardware_GetField_0x00_8920(iStack_8c);
      uVar11 = 0;
      if (*piStack_40 != 0) {
        uVar11 = (u16)piStack_40[1];
      }
      code_0803EE94_Sub_0805E99C(uVar4,*piStack_40,uVar11,puStack_44);
      iVar21 = 0;
      piVar18 = (int *)(iStack_8c + 0x9f0);
      do {
        uVar4 = hardware_GetField_0x00_8920(iStack_8c);
        uVar11 = 0;
        if (*piVar18 != 0) {
          uVar11 = (u16)piVar18[1];
        }
        code_0803EE94_Sub_0805E99C(uVar4,*piVar18,uVar11,*(u32 *)(iVar21 * 4 + iStack_8c + 0x000009E8))
        ;
        piVar18 = piVar18 + 8;
        iVar21 = iVar21 + 1;
      } while (iVar21 < 2);
      piStack_64 = (int *)(iStack_8c + 0xa30);
      iVar21 = 0;
      do {
        iVar22 = code_0803EE94_Sub_0805E8F0(*piStack_64);
        iStack_50 = iVar21 + 1;
        iVar15 = iVar21 * 0x20;
        iStack_4c = iVar21 << 2;
        if (iVar22 * 0x40000000 < 0) {
          iVar22 = iStack_8c + iVar15;
          puVar13 = (u32 *)(iVar22 + 0x00000A3C);
          puVar12 = (u32 *)*piStack_64;
          func_080D3918(&uStack_124,(int *)*puVar12,
                          *(u16 *)(puVar12[1] + (u32)*(u16 *)(puVar12 + 3) * 4),
                          *(u32 *)(*(int *)*puVar12 + 0x10));
          LibC_memcpy(puStack_60,puStack_60,0x20);
          uVar4 = puStack_60[1];
          uVar20 = puStack_60[2];
          *puVar13 = *puStack_60;
          puVar13[1] = uVar4;
          puVar13[2] = uVar20;
          uVar4 = puStack_60[4];
          uVar20 = puStack_60[5];
          puVar13[3] = puStack_60[3];
          puVar13[4] = uVar4;
          puVar13[5] = uVar20;
          uVar4 = puStack_60[7];
          puVar13[6] = puStack_60[6];
          puVar13[7] = uVar4;
          piVar18 = (int *)hardware_GetField_0x00_8910(iStack_8c);
          piVar14 = (int *)(iVar22 + 0x00000A44);
          iVar22 = *piVar14;
          uVar11 = 0;
          if (iVar22 != 0) {
            uVar11 = (u16)piVar14[1];
          }
          hardware_Sub_08008F0C(puStack_60,iVar22,iStack_78 * 0x20 + 0x06010000,uVar11);
          puVar12 = (u32 *)piVar18[1];
          if (puVar12 == (u32 *)piVar18[3]) {
            puStack_28 = puVar12;
            iStack_a8 = 1;
            iStack_ac = (int)puVar12 - *piVar18 >> 4;
            piVar14 = &iStack_ac;
            if (iStack_ac == 0) {
              piVar14 = &iStack_a8;
            }
            if (iStack_ac + *piVar14 == 0) {
              puVar12 = (u32 *)0x0;
              iVar22 = 0;
            }
            else {
              iVar22 = (iStack_ac + *piVar14) * 0x10;
              puVar12 = (u32 *)LibC_malloc(iVar22);
              if (puVar12 == (u32 *)0x0) {
                puVar12 = (u32 *)code_linkonce_Sub_080D3BC0(iVar22);
              }
            }
            iStack_50 = iVar21 + 1;
            iStack_4c = iVar21 << 2;
            puVar8 = puVar12;
            for (puVar13 = (u32 *)*piVar18; puVar13 != puStack_28; puVar13 = puVar13 + 4) {
              if (puVar8 != (u32 *)0x0) {
                uVar4 = puVar13[1];
                uVar20 = puVar13[2];
                *puVar8 = *puVar13;
                puVar8[1] = uVar4;
                puVar8[2] = uVar20;
                puVar8[3] = puVar13[3];
              }
              puVar8 = puVar8 + 4;
            }
            iVar21 = iStack_a8;
            if (iStack_a8 == 1) {
              if (puVar8 != (u32 *)0x0) {
                *puVar8 = uStack_124;
                puVar8[1] = uStack_120;
                puVar8[2] = uStack_11c;
                puVar8[3] = uStack_118;
              }
              puVar8 = puVar8 + 4;
            }
            else {
              for (; iVar21 != 0; iVar21 = iVar21 + -1) {
                if (puVar8 != (u32 *)0x0) {
                  *puVar8 = uStack_124;
                  puVar8[1] = uStack_120;
                  puVar8[2] = uStack_11c;
                  puVar8[3] = uStack_118;
                }
                puVar8 = puVar8 + 4;
              }
            }
            for (iVar21 = *piVar18; iVar21 != piVar18[1]; iVar21 = iVar21 + 0x10) {
            }
            puStack_24 = puVar12;
            if (*piVar18 != 0) {
              LibC_free();
            }
            *piVar18 = (int)puStack_24;
            piVar18[1] = (int)puVar8;
            piVar18[3] = (int)puStack_24 + iVar22;
          }
          else {
            if (puVar12 != (u32 *)0x0) {
              uVar4 = puStack_60[1];
              uVar20 = puStack_60[2];
              *puVar12 = *puStack_60;
              puVar12[1] = uVar4;
              puVar12[2] = uVar20;
              puVar12[3] = puStack_60[3];
            }
            piVar18[1] = piVar18[1] + 0x10;
          }
          piVar18 = (int *)hardware_GetField_0x00_8910(iStack_8c);
          piVar14 = (int *)(iStack_8c + iVar15 + 0x00000A4C);
          uVar11 = 0;
          if (*piVar14 != 0) {
            uVar11 = (u16)piVar14[1];
          }
          hardware_Sub_08008F0C(&uStack_124,*(u32 *)(iStack_8c + iVar15 + 0x00000A4C),
                        0x050002A0,uVar11);
          puVar12 = puStack_60;
          puVar13 = (u32 *)piVar18[1];
          if (puVar13 == (u32 *)piVar18[3]) {
            puStack_28 = puVar13;
            iStack_a0 = 1;
            iStack_a4 = (int)puVar13 - *piVar18 >> 4;
            piVar14 = &iStack_a4;
            if (iStack_a4 == 0) {
              piVar14 = &iStack_a0;
            }
            if (iStack_a4 + *piVar14 == 0) {
              puVar13 = (u32 *)0x0;
              iVar21 = 0;
            }
            else {
              iVar21 = (iStack_a4 + *piVar14) * 0x10;
              puVar13 = (u32 *)LibC_malloc(iVar21);
              if (puVar13 == (u32 *)0x0) {
                puVar13 = (u32 *)code_linkonce_Sub_080D3BC0(iVar21);
              }
            }
            puVar8 = puVar13;
            for (puVar10 = (u32 *)*piVar18; puVar10 != puStack_28; puVar10 = puVar10 + 4) {
              if (puVar8 != (u32 *)0x0) {
                uVar4 = puVar10[1];
                uVar20 = puVar10[2];
                *puVar8 = *puVar10;
                puVar8[1] = uVar4;
                puVar8[2] = uVar20;
                puVar8[3] = puVar10[3];
              }
              puVar8 = puVar8 + 4;
            }
            iVar22 = iStack_a0;
            if (iStack_a0 == 1) {
              if (puVar8 != (u32 *)0x0) {
                uVar4 = puVar12[1];
                uVar20 = puVar12[2];
                *puVar8 = *puVar12;
                puVar8[1] = uVar4;
                puVar8[2] = uVar20;
                puVar8[3] = puVar12[3];
              }
              puVar8 = puVar8 + 4;
            }
            else {
              for (; iVar22 != 0; iVar22 = iVar22 + -1) {
                if (puVar8 != (u32 *)0x0) {
                  uVar4 = puVar12[1];
                  uVar20 = puVar12[2];
                  *puVar8 = *puVar12;
                  puVar8[1] = uVar4;
                  puVar8[2] = uVar20;
                  puVar8[3] = puVar12[3];
                }
                puVar8 = puVar8 + 4;
              }
            }
            for (iVar22 = *piVar18; iVar22 != piVar18[1]; iVar22 = iVar22 + 0x10) {
            }
            puStack_24 = puVar13;
            if (*piVar18 != 0) {
              LibC_free();
            }
            *piVar18 = (int)puStack_24;
            piVar18[1] = (int)puVar8;
            piVar18[3] = (int)puStack_24 + iVar21;
          }
          else {
            if (puVar13 != (u32 *)0x0) {
              uVar4 = puStack_60[1];
              uVar20 = puStack_60[2];
              *puVar13 = *puStack_60;
              puVar13[1] = uVar4;
              puVar13[2] = uVar20;
              puVar13[3] = puStack_60[3];
            }
            piVar18[1] = piVar18[1] + 0x10;
          }
        }
        uVar4 = hardware_GetField_0x00_8920(iStack_8c);
        piVar18 = (int *)(iStack_8c + iVar15 + 0x00000A3C);
        uVar11 = 0;
        if (*piVar18 != 0) {
          uVar11 = (u16)piVar18[1];
        }
        code_0803EE94_Sub_0805E99C(uVar4,*(u32 *)(iStack_8c + iVar15 + 0x00000A3C),uVar11,
                      *(u32 *)(iStack_4c + iStack_8c + 0x00000A34));
        iVar21 = iStack_50;
      } while (iStack_50 < 2);
      piVar18 = (int *)(iStack_8c + 0x00000A7C);
      iVar21 = code_0803EE94_Sub_0805E8F0(*piVar18);
      if (iVar21 * 0x40000000 < 0) {
        puVar12 = (u32 *)*piVar18;
        func_080D3918(&uStack_124,(int *)*puVar12,
                        *(u16 *)(puVar12[1] + (u32)*(u16 *)(puVar12 + 3) * 4),
                        *(u32 *)(*(int *)*puVar12 + 0x10));
        LibC_memcpy(puStack_60,puStack_60,0x20);
        puVar12 = (u32 *)(iStack_8c + 0x00000A84);
        uVar4 = puStack_60[1];
        uVar20 = puStack_60[2];
        *puVar12 = *puStack_60;
        puVar12[1] = uVar4;
        puVar12[2] = uVar20;
        uVar4 = puStack_60[4];
        uVar20 = puStack_60[5];
        puVar12[3] = puStack_60[3];
        puVar12[4] = uVar4;
        puVar12[5] = uVar20;
        uVar4 = puStack_60[7];
        puVar12[6] = puStack_60[6];
        puVar12[7] = uVar4;
        piVar18 = (int *)hardware_GetField_0x00_8910(iStack_8c,puVar12 + 8);
        iVar21 = *(int *)(iStack_8c + 0x00000A8C);
        uVar11 = 0;
        if (iVar21 != 0) {
          uVar11 = (u16)((int *)(iStack_8c + 0x00000A8C))[1];
        }
        hardware_Sub_08008F0C(puStack_60,iVar21,iStack_74 * 0x20 + 0x06010000,uVar11);
        puVar12 = puStack_60;
        puVar13 = (u32 *)piVar18[1];
        if (puVar13 == (u32 *)piVar18[3]) {
          iStack_98 = 1;
          iStack_9c = (int)puVar13 - *piVar18 >> 4;
          piVar14 = &iStack_9c;
          if (iStack_9c == 0) {
            piVar14 = &iStack_98;
          }
          if (iStack_9c + *piVar14 == 0) {
            puVar8 = (u32 *)0x0;
            iVar21 = 0;
          }
          else {
            iVar21 = (iStack_9c + *piVar14) * 0x10;
            puVar8 = (u32 *)LibC_malloc(iVar21);
            if (puVar8 == (u32 *)0x0) {
              puVar8 = (u32 *)code_linkonce_Sub_080D3BC0(iVar21);
            }
          }
          puVar16 = puVar8;
          for (puVar10 = (u32 *)*piVar18; puVar10 != puVar13; puVar10 = puVar10 + 4) {
            if (puVar16 != (u32 *)0x0) {
              uVar4 = puVar10[1];
              uVar20 = puVar10[2];
              *puVar16 = *puVar10;
              puVar16[1] = uVar4;
              puVar16[2] = uVar20;
              puVar16[3] = puVar10[3];
            }
            puVar16 = puVar16 + 4;
          }
          iVar22 = iStack_98;
          if (iStack_98 == 1) {
            if (puVar16 != (u32 *)0x0) {
              uVar4 = puVar12[1];
              uVar20 = puVar12[2];
              *puVar16 = *puVar12;
              puVar16[1] = uVar4;
              puVar16[2] = uVar20;
              puVar16[3] = puVar12[3];
            }
            puVar16 = puVar16 + 4;
          }
          else {
            for (; iVar22 != 0; iVar22 = iVar22 + -1) {
              if (puVar16 != (u32 *)0x0) {
                uVar4 = puVar12[1];
                uVar20 = puVar12[2];
                *puVar16 = *puVar12;
                puVar16[1] = uVar4;
                puVar16[2] = uVar20;
                puVar16[3] = puVar12[3];
              }
              puVar16 = puVar16 + 4;
            }
          }
          for (iVar22 = *piVar18; iVar22 != piVar18[1]; iVar22 = iVar22 + 0x10) {
          }
          puStack_24 = puVar8;
          if (*piVar18 != 0) {
            LibC_free();
          }
          *piVar18 = (int)puStack_24;
          piVar18[1] = (int)puVar16;
          piVar18[3] = (int)puStack_24 + iVar21;
        }
        else {
          if (puVar13 != (u32 *)0x0) {
            uVar4 = puStack_60[1];
            uVar20 = puStack_60[2];
            *puVar13 = *puStack_60;
            puVar13[1] = uVar4;
            puVar13[2] = uVar20;
            puVar13[3] = puStack_60[3];
          }
          piVar18[1] = piVar18[1] + 0x10;
        }
        piVar18 = (int *)hardware_GetField_0x00_8910(iStack_8c);
        iVar21 = *(int *)(iStack_8c + 0x00000A94);
        uVar11 = 0;
        if (iVar21 != 0) {
          uVar11 = (u16)((int *)(iStack_8c + 0x00000A94))[1];
        }
        hardware_Sub_08008F0C(&uStack_124,iVar21,0x050002C0,uVar11);
        puVar12 = puStack_60;
        puVar13 = (u32 *)piVar18[1];
        if (puVar13 == (u32 *)piVar18[3]) {
          iStack_90 = 1;
          iStack_94 = (int)puVar13 - *piVar18 >> 4;
          piVar14 = &iStack_94;
          if (iStack_94 == 0) {
            piVar14 = &iStack_90;
          }
          if (iStack_94 + *piVar14 == 0) {
            puVar8 = (u32 *)0x0;
            iVar21 = 0;
          }
          else {
            iVar21 = (iStack_94 + *piVar14) * 0x10;
            puVar8 = (u32 *)LibC_malloc(iVar21);
            if (puVar8 == (u32 *)0x0) {
              puVar8 = (u32 *)code_linkonce_Sub_080D3BC0(iVar21);
            }
          }
          puVar16 = puVar8;
          for (puVar10 = (u32 *)*piVar18; puVar10 != puVar13; puVar10 = puVar10 + 4) {
            if (puVar16 != (u32 *)0x0) {
              uVar4 = puVar10[1];
              uVar20 = puVar10[2];
              *puVar16 = *puVar10;
              puVar16[1] = uVar4;
              puVar16[2] = uVar20;
              puVar16[3] = puVar10[3];
            }
            puVar16 = puVar16 + 4;
          }
          iVar22 = iStack_90;
          if (iStack_90 == 1) {
            if (puVar16 != (u32 *)0x0) {
              uVar4 = puVar12[1];
              uVar20 = puVar12[2];
              *puVar16 = *puVar12;
              puVar16[1] = uVar4;
              puVar16[2] = uVar20;
              puVar16[3] = puVar12[3];
            }
            puVar16 = puVar16 + 4;
          }
          else {
            for (; iVar22 != 0; iVar22 = iVar22 + -1) {
              if (puVar16 != (u32 *)0x0) {
                uVar4 = puVar12[1];
                uVar20 = puVar12[2];
                *puVar16 = *puVar12;
                puVar16[1] = uVar4;
                puVar16[2] = uVar20;
                puVar16[3] = puVar12[3];
              }
              puVar16 = puVar16 + 4;
            }
          }
          for (iVar22 = *piVar18; iVar22 != piVar18[1]; iVar22 = iVar22 + 0x10) {
          }
          puStack_24 = puVar8;
          if (*piVar18 != 0) {
            LibC_free();
          }
          *piVar18 = (int)puStack_24;
          piVar18[1] = (int)puVar16;
          piVar18[3] = (int)puStack_24 + iVar21;
        }
        else {
          if (puVar13 != (u32 *)0x0) {
            uVar4 = puStack_60[1];
            uVar20 = puStack_60[2];
            *puVar13 = *puStack_60;
            puVar13[1] = uVar4;
            puVar13[2] = uVar20;
            puVar13[3] = puStack_60[3];
          }
          piVar18[1] = piVar18[1] + 0x10;
        }
      }
      uVar4 = hardware_GetField_0x00_8920(iStack_8c);
      iVar21 = iStack_8c;
      iVar22 = *(int *)(iStack_8c + 0x00000A84);
      uVar11 = 0;
      if (iVar22 != 0) {
        uVar11 = (u16)((int *)(iStack_8c + 0x00000A84))[1];
      }
      code_0803EE94_Sub_0805E99C(uVar4,iVar22,uVar11,*(u32 *)(iStack_8c + 0xa80));
    } while (*(int *)(iVar21 + 0x00000B14) == 0);
  }
  hardware_Sub_08007C28(auStack_16c,uStack_168);
  hardware_Sub_080079E8(auStack_16c,2);
  hardware_Sub_08007C28(auStack_174,uStack_170);
  hardware_Sub_080079E8(auStack_174,2);
  hardware_Sub_08007C28(auStack_17c,uStack_178);
  hardware_Sub_080079E8(auStack_17c,2);
  hardware_Sub_08007C28(auStack_184,uStack_180);
  hardware_Sub_080079E8(auStack_184,2);
  hardware_Sub_08007C28(auStack_18c,uStack_188);
  hardware_Sub_080079E8(auStack_18c,2);
  hardware_Sub_08007C28(auStack_194,uStack_190);
  hardware_Sub_080079E8(auStack_194,2);
}

/* 0x080B7164 (1048B) | hardware_Sub_080B7164 (orig: func_080B7164) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
void hardware_Sub_080B7164(int param_1,int param_2) {
  u16 *puVar1;
  int iVar2;
  u32 uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  u32 uStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  u32 uStack_7c;
  u32 uStack_78;
  int iStack_74;
  int iStack_70;
  u32 uStack_6c;
  u32 uStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int *piStack_58;
  int iStack_54;
  int iStack_50;
  u32 *puStack_4c;
  u32 *puStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  u32 *puStack_38;
  u32 *puStack_34;
  int *piStack_30;
  int *piStack_2c;
  int *piStack_28;
  int *piStack_24;
  iStack_5c = param_2;
  hardware_Ctor();
  System_UnpackData(0x0872D5CC,0x0600F000);
  System_UnpackData(0x0872D630,0x0600F800);
  System_UnpackData(0x0872D6D8,0x6000000);
  hardware_HW_DMA3SAD_8EB8(0,0x0600BFE0,0x20);
  hardware_HW_DMA3SAD(0x0872DDE4,0x5000000,0x200);
  puVar1 = (u16 *)hardware_GetField_0x00_8918(param_1);
  (*(u16 *)&uStack_90) = 0x1640;
  *puVar1 = 0x1640;
  iVar2 = hardware_GetField_0x00_8918(param_1);
  (*(u16 *)&uStack_90) = (u16)0x00001F41;
  *(u16 *)(iVar2 + 10) = (u16)uStack_90;
  iVar2 = hardware_GetField_0x00_8918(param_1);
  (*(u16 *)&uStack_90) = (u16)0x00001E42;
  *(u16 *)(iVar2 + 0xc) = (u16)uStack_90;
  iVar2 = hardware_GetField_0x00_8918(param_1);
  (*(u16 *)&uStack_90) = 0;
  *(u16 *)(iVar2 + 0x14) = 0;
  iVar2 = hardware_GetField_0x00_8918(param_1);
  uStack_90 = (u32)(*(u16 *)((u8 *)&uStack_90 + 2)) << 0x10;
  *(u16 *)(iVar2 + 0x16) = 0;
  puVar1 = 0x05000200;
  *(u16 *)0x05000200 = 0x3e0;
  puVar1[1] = (short)0x0000FFFE;
  puVar1[2] = (short)0x00007F34;
  puStack_4c = &uStack_7c;
  puStack_48 = &uStack_78;
  puStack_38 = &uStack_6c;
  puStack_34 = &uStack_68;
  piStack_58 = &iStack_8c;
  iVar2 = 0;
  do {
    iVar8 = iVar2 * 0x104;
    uStack_7c = ((u16)(4));
    *(u16 *)((int)puStack_4c + 2) = 2;
    Code_Lib_Syscall_Wrap_CpuFastSet_E7A0(uStack_7c,iVar8 + param_1 + 0xf0,0);
    uVar3 = hardware_Sub_080BC254(param_1,2,iVar2 * 2,param_1 + 0x9e);
    uStack_78 = ((u16)(4));
    *(u16 *)((int)puStack_48 + 2) = 2;
    SpriteAnimEngine_Sub_0804E958(uStack_78,iVar8 + param_1 + 0xf0,0,0,uVar3,0,1);
    piVar4 = (int *)hardware_GetField_0x00_8910(param_1);
    hardware_Sub_08008F0C(&iStack_8c,iVar8 + param_1 + 0xf0,(iVar2 * 8 + iStack_5c) * 0x20 + 0x06010000,
                  0x100);
    piVar5 = (int *)piVar4[1];
    iStack_3c = iVar2 * 0x40;
    iStack_44 = iVar2 * 2;
    iStack_40 = iVar2 * 8;
    if (piVar5 == (int *)piVar4[3]) {
      piStack_30 = piVar5;
      iStack_70 = 1;
      iStack_74 = (int)piVar5 - *piVar4 >> 4;
      piVar5 = &iStack_74;
      if (iStack_74 == 0) {
        piVar5 = &iStack_70;
      }
      if (iStack_74 + *piVar5 == 0) {
        piVar5 = (int *)0x0;
        iVar8 = 0;
      }
      else {
        iVar8 = (iStack_74 + *piVar5) * 0x10;
        piVar5 = (int *)LibC_malloc(iVar8);
        if (piVar5 == (int *)0x0) {
          piVar5 = (int *)code_linkonce_Sub_080D3BC0(iVar8);
        }
      }
      iStack_54 = param_1 + 0xde;
      iStack_50 = iVar2 + 1;
      piVar7 = piVar5;
      for (piVar6 = (int *)*piVar4; piVar6 != piStack_30; piVar6 = piVar6 + 4) {
        if (piVar7 != (int *)0x0) {
          iVar9 = piVar6[1];
          iVar10 = piVar6[2];
          *piVar7 = *piVar6;
          piVar7[1] = iVar9;
          piVar7[2] = iVar10;
          piVar7[3] = piVar6[3];
        }
        piVar7 = piVar7 + 4;
      }
      iVar9 = iStack_70;
      if (iStack_70 == 1) {
        if (piVar7 != (int *)0x0) {
          iVar9 = piStack_58[1];
          iVar10 = piStack_58[2];
          *piVar7 = *piStack_58;
          piVar7[1] = iVar9;
          piVar7[2] = iVar10;
          piVar7[3] = piStack_58[3];
        }
        piVar7 = piVar7 + 4;
      }
      else {
        for (; iVar9 != 0; iVar9 = iVar9 + -1) {
          if (piVar7 != (int *)0x0) {
            iVar10 = piStack_58[1];
            iVar11 = piStack_58[2];
            *piVar7 = *piStack_58;
            piVar7[1] = iVar10;
            piVar7[2] = iVar11;
            piVar7[3] = piStack_58[3];
          }
          piVar7 = piVar7 + 4;
        }
      }
      for (iVar9 = *piVar4; iVar9 != piVar4[1]; iVar9 = iVar9 + 0x10) {
      }
      piStack_2c = piVar5;
      if (*piVar4 != 0) {
        LibC_free();
      }
      *piVar4 = (int)piStack_2c;
      piVar4[1] = (int)piVar7;
      piVar4[3] = (int)piStack_2c + iVar8;
    }
    else {
      if (piVar5 != (int *)0x0) {
        iVar8 = piStack_58[1];
        iVar9 = piStack_58[2];
        *piVar5 = *piStack_58;
        piVar5[1] = iVar8;
        piVar5[2] = iVar9;
        piVar5[3] = piStack_58[3];
      }
      piVar4[1] = piVar4[1] + 0x10;
      iStack_54 = param_1 + 0xde;
      iStack_50 = iVar2 + 1;
    }
    iVar2 = (iStack_3c + iVar2) * 4;
    uStack_6c = ((u16)(4));
    *(u16 *)((int)puStack_38 + 2) = 2;
    Code_Lib_Syscall_Wrap_CpuFastSet_E7A0(uStack_6c,iVar2 + param_1 + 0x3fc,0);
    uVar3 = hardware_Sub_080BC254(param_1,2,iStack_44,iStack_54);
    uStack_68 = ((u16)(4));
    *(u16 *)((int)puStack_34 + 2) = 2;
    SpriteAnimEngine_Sub_0804E958(uStack_68,iVar2 + param_1 + 0x3fc,0,0,uVar3,0,1);
    piVar4 = (int *)hardware_GetField_0x00_8910(param_1);
    hardware_Sub_08008F0C(&uStack_90,iVar2 + param_1 + 0x3fc,(iStack_40 + iStack_5c) * 0x20 + 0x06010300,
                  0x100);
    piVar5 = (int *)piVar4[1];
    if (piVar5 == (int *)piVar4[3]) {
      piStack_28 = piVar5;
      iStack_60 = 1;
      iStack_64 = (int)piVar5 - *piVar4 >> 4;
      piVar5 = &iStack_64;
      if (iStack_64 == 0) {
        piVar5 = &iStack_60;
      }
      if (iStack_64 + *piVar5 == 0) {
        piVar5 = (int *)0x0;
        iVar2 = 0;
      }
      else {
        iVar2 = (iStack_64 + *piVar5) * 0x10;
        piVar5 = (int *)LibC_malloc(iVar2);
        if (piVar5 == (int *)0x0) {
          piVar5 = (int *)code_linkonce_Sub_080D3BC0(iVar2);
        }
      }
      piVar6 = piVar5;
      for (piVar7 = (int *)*piVar4; piVar7 != piStack_28; piVar7 = piVar7 + 4) {
        if (piVar6 != (int *)0x0) {
          iVar8 = piVar7[1];
          iVar9 = piVar7[2];
          *piVar6 = *piVar7;
          piVar6[1] = iVar8;
          piVar6[2] = iVar9;
          piVar6[3] = piVar7[3];
        }
        piVar6 = piVar6 + 4;
      }
      iVar8 = iStack_60;
      if (iStack_60 == 1) {
        if (piVar6 != (int *)0x0) {
          *piVar6 = uStack_90;
          piVar6[1] = iStack_8c;
          piVar6[2] = iStack_88;
          piVar6[3] = iStack_84;
        }
        piVar6 = piVar6 + 4;
      }
      else {
        for (; iVar8 != 0; iVar8 = iVar8 + -1) {
          if (piVar6 != (int *)0x0) {
            *piVar6 = uStack_90;
            piVar6[1] = iStack_8c;
            piVar6[2] = iStack_88;
            piVar6[3] = iStack_84;
          }
          piVar6 = piVar6 + 4;
        }
      }
      for (iVar8 = *piVar4; iVar8 != piVar4[1]; iVar8 = iVar8 + 0x10) {
      }
      piStack_24 = piVar5;
      if (*piVar4 != 0) {
        LibC_free();
      }
      *piVar4 = (int)piStack_24;
      piVar4[1] = (int)piVar6;
      piVar4[3] = (int)piStack_24 + iVar2;
    }
    else {
      if (piVar5 != (int *)0x0) {
        *piVar5 = uStack_90;
        piVar5[1] = iStack_8c;
        piVar5[2] = iStack_88;
        piVar5[3] = iStack_84;
      }
      piVar4[1] = piVar4[1] + 0x10;
    }
    iVar2 = iStack_50;
  } while (iStack_50 < 3);
}

/* 0x080B757C (204B) | hardware_Sub_080B757C (orig: func_080B757C) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
void hardware_Sub_080B757C(int param_1) {
  int iVar1;
  u32 uVar2;
  uVar2 = 0;
  iVar1 = 0;
  do {
    *(u8 *)(param_1 + 0x9e + iVar1) = 0;
    *(u8 *)(param_1 + 0xde + iVar1) = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0xe);
  LibC_strcpy(param_1 + 0x9e,param_1 + 0x00000B1C);
  iVar1 = *(int *)(param_1 + 0x00000B18);
  if (iVar1 == 1) {
    uVar2 = LibC_rand();
    uVar2 = ((0x0000FFFF & uVar2) * 7 >> 0x10) + 6;
  }
  else if (iVar1 < 2) {
    if (iVar1 == 0) {
      uVar2 = LibC_rand();
      uVar2 = (0x0000FFFF & uVar2) * 6 >> 0x10;
    }
  }
  else if (iVar1 == 2) {
    uVar2 = LibC_rand();
    uVar2 = ((0x0000FFFF & uVar2) * 7 >> 0x10) + 0xd;
  }
  *(char *)(param_1 + 0x00000B18 + 0x25 + *(int *)(param_1 + 0x00000B18)) = (char)uVar2;
  LibC_strcpy(param_1 + 0xde,uVar2 * 0xd + 0x081078BD);
}

/* 0x080B87C4 (200B) | hardware_Sub_080B87C4 (orig: func_080B87C4) | origin: wip | domain: hardware | MEDIUM / tu_interp */
void hardware_Sub_080B87C4(int param_1) {
    int uVar6;
    u32 uVar7;
    u32 uVar8;
  u16 *puVar1;
  u16 iVar2;
  u32 uVar5;
  int uVar4;
  register u32 uVar3;
  puVar1 = (u16 *)hardware_GetField_0x00_8918();
  *puVar1 = (u8)8000;
  iVar2 = (u16)hardware_GetField_0x00_8918(param_1);
  *(short *)(iVar2 + 10) = (short)0x00001F45;
  iVar2 = hardware_GetField_0x00_8918(param_1);
  *(short *)(iVar2 + 0xc) = (short)0x00001E43;
  iVar2 = hardware_GetField_0x00_8918(param_1);
  *(short *)(iVar2 + 0xe) = (short)0x00001D46;
  hardware_HW_DMA3SAD_8EB8(0,0x0600BFE0,0x20);
  uVar3 = *(u32 *)(0x718 + param_1);
  uVar4 = hardware_GetField_0x00_88DC(param_1);
  uVar5 = hardware_GetField_0x00_8920(param_1);
  uVar6 = hardware_GetField_0x00_8918(param_1);
  uVar7 = hardware_GetField_0x00_8940(param_1);
  uVar8 = hardware_Sub_0800894C(param_1);
  code_0803EE94_78A8_Wrap_Ctor(uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,0);
  *(u8 *)(param_1 + 0xdd) = 1;
  *(u8 *)(param_1 + 0x9d) = 1;
}

/* 0x080B888C (1312B) | hardware_Sub_080B888C (orig: func_080B888C) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
void hardware_Sub_080B888C(int param_1) {
  int iVar1;
  u32 uVar2;
  int iVar3;
  u32 uVar4;
  u32 *puVar5;
  u32 uVar6;
  u32 uVar7;
  u32 uVar8;
  u32 uVar9;
  int iVar10;
  u16 uVar11;
  u32 uVar12;
  u32 uVar13;
  u16 *puVar14;
  int iVar15;
  u8 auStack_7c [4];
  u32 uStack_78;
  u8 auStack_74 [4];
  u32 uStack_70;
  u8 auStack_6c [4];
  u32 uStack_68;
  u8 auStack_64 [4];
  u32 uStack_60;
  u8 auStack_5c [4];
  u32 uStack_58;
  u8 auStack_54 [4];
  u32 uStack_50;
  u8 auStack_4c [4];
  u32 uStack_48;
  u32 uStack_44;
  u32 uStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int *piStack_2c;
  int *piStack_28;
  int iStack_24;
  iVar1 = *(int *)(param_1 + 0x718);
  if ((iVar1 != 0) && (iVar1 != 0)) {
    SpriteAnimEngine_5A28_Wrap_Dtor_0D0C(iVar1,3);
  }
  *(int *)(param_1 + 0x718) = 0;
  uVar2 = CppRuntime_builtin_new(4);
  hardware_SetField_0x00_835C(auStack_7c);
  hardware_SetField_0x00(&uStack_78);
  iVar1 = hardware_5BB4_Sub_08050CC0(uVar2,0,0xf,0,0,auStack_7c,&uStack_78);
  iVar3 = *(int *)(param_1 + 0x718);
  if ((iVar1 != iVar3) && (iVar3 != 0)) {
    SpriteAnimEngine_5A28_Wrap_Dtor_0D0C(iVar3,3);
  }
  *(int *)(param_1 + 0x718) = iVar1;
  hardware_Sub_08007714(&uStack_78,2);
  hardware_Sub_08008364(auStack_7c,2);
  PortraitEngine_Sub_08050E50(*(u32 *)(param_1 + 0x718),0);
  hardware_Sub_08007874(auStack_7c);
  uStack_78 = 0;
  hardware_Sub_08007874(auStack_74);
  uStack_70 = 0;
  hardware_Sub_08007874(auStack_6c);
  uStack_68 = 0;
  hardware_Sub_08007874(auStack_64);
  uStack_60 = 0;
  hardware_Sub_08007874(auStack_5c);
  uStack_58 = 0;
  hardware_Sub_08007C28(auStack_7c,uStack_78);
  uStack_78 = hardware_Sub_08007B54(auStack_7c,3);
  uStack_44 = hardware_Sub_08007D4C(auStack_7c);
  hardware_Sub_08007C28(auStack_74,uStack_70);
  uStack_70 = hardware_Sub_08007B54(auStack_74,7);
  uStack_40 = hardware_Sub_08007D4C(auStack_74);
  hardware_Sub_08007C28(auStack_6c,uStack_68);
  uStack_68 = hardware_Sub_08007B54(auStack_6c,5);
  hardware_Sub_08007128(auStack_54);
  uStack_50 = hardware_Sub_0800736C(auStack_54);
  *(u8 *)(param_1 + 8) = 0;
  piStack_28 = (int *)(param_1 + 0xc4);
  iStack_24 = param_1 + 8;
  if (*piStack_28 < 0) {
    iVar1 = param_1 + 0x9e;
  }
  else {
    iVar1 = param_1 + 0xde;
  }
  iVar3 = LibC_strlen(iStack_24);
  iVar15 = iStack_24 + iVar3;
  uVar13 = 99 - iVar3;
  if (uVar13 != 0) {
    uVar4 = LibC_strlen(iVar1);
    if (uVar13 < uVar4) {
      uVar4 = uVar13;
    }
    LibC_memcpy(iVar15,iVar1,uVar4);
    *(u8 *)(iVar15 + uVar4) = 0;
  }
  iStack_3c = 0xb5;
  iStack_38 = 0;
  hardware_Sub_080B87C4(param_1);
  hardware_Sub_08007128(auStack_4c);
  uStack_48 = hardware_Sub_0800745C(auStack_4c,uStack_50);
  hardware_Sub_080BC288(param_1,auStack_4c);
  hardware_Sub_080B8EBC(param_1,0,uStack_44);
  hardware_Sub_080B8EBC(param_1,1,uStack_44);
  hardware_Sub_080BAC9C(param_1,uStack_40);
  hardware_Sub_08008BB0(param_1 + 0x710,0xb4);
  iStack_34 = 0;
  if (*(int *)(param_1 + 0x00000B14) == 3) {
    puVar5 = (u32 *)(param_1 + 0x718);
    piStack_2c = (int *)(param_1 + 0x7a0);
    do {
      hardware_Ctor_87C8(param_1);
      hardware_Sub_080088B8(param_1);
      iStack_30 = code_0803EE94_GetField_0x00(*puVar5);
      uVar12 = *puVar5;
      uVar2 = hardware_GetField_0x00_88DC(param_1);
      uVar6 = hardware_GetField_0x00_8920(param_1);
      uVar7 = hardware_GetField_0x00_8918(param_1);
      uVar8 = hardware_GetField_0x00_8940(param_1);
      uVar9 = hardware_Sub_0800894C(param_1);
      iVar1 = code_0803EE94_78A8_Wrap_Ctor(uVar12,uVar2,uVar6,uVar7,uVar8,uVar9,param_1 + 0x708);
      if (iStack_34 == 0) {
        if (iVar1 == 0) {
          if (iStack_38 < 2) {
            code_0803EE94_78C0_Sub_08050D5C(*puVar5);
          }
          else {
            iStack_34 = 1;
            hardware_Sub_08009378(*piStack_2c + 0xc,0x00000889,1,1);
            iVar1 = hardware_GetField_0x00_8940(param_1);
            func_080D3914(iVar1,*piStack_2c,*(u32 *)(*(int *)(iVar1 + 8) + 0x10));
            if (*piStack_28 < 0) {
              iVar1 = *(int *)(param_1 + 0x00000B18);
              if (iVar1 < 2) {
                *(int *)(param_1 + 0x00000B18) = iVar1 + 1;
              }
              else {
                *(u8 *)(param_1 + 0x00000B32) = (u8)iStack_34;
                *(u8 *)(param_1 + 0xb30) = (u8)iStack_34;
              }
            }
            else {
              *(u8 *)(param_1 + 0x00000B32) = (u8)iStack_34;
            }
          }
        }
        else if (iVar1 == 3) {
          if (iStack_30 == 1) {
            if (iStack_38 == 0) {
              code_0803EE94_78C0_Sub_08050D8C(*puVar5,0x08107ABC);
              iStack_38 = 1;
            }
            else if (iStack_38 == 1) {
              hardware_Wrap_m4aMPlayStop(param_1 + 0x710);
              *(int *)(param_1 + 0xb40) = iStack_34;
              *(int *)(param_1 + 0x00000B44) = iStack_38;
              *(int *)(param_1 + 0xb50) = iStack_34;
              uVar2 = 0x08107AC4;
              iVar1 = LibC_strlen(iStack_24);
              iVar3 = iStack_24 + iVar1;
              uVar13 = 99 - iVar1;
              if (uVar13 != 0) {
                uVar4 = LibC_strlen(uVar2);
                if (uVar13 < uVar4) {
                  uVar4 = uVar13;
                }
                LibC_memcpy(iVar3,uVar2,uVar4);
                *(u8 *)(iVar3 + uVar4) = (u8)iStack_34;
              }
              code_0803EE94_78C0_Sub_08050D8C(*puVar5,iStack_24);
              code_0803EE94_GetField_0x00_0DD8(*puVar5);
              iStack_3c = 0;
              iStack_38 = iStack_38 + 1;
            }
          }
          else {
            code_0803EE94_78C0_Sub_08050D74(*puVar5);
          }
        }
      }
      else if (-1 < (int)(-*(u32 *)*piStack_2c | *(u32 *)*piStack_2c)) {
        *(u32 *)(param_1 + 0x00000B14) = 0;
      }
      if (iStack_3c < 0xb4) {
        iStack_3c = iStack_3c + 1;
      }
      if (iStack_3c == 0xb4) {
        code_0803EE94_GetField_0x00_0DE4(*puVar5);
      }
      uVar13 = 0;
      do {
        if (*(int *)(param_1 + 0x84) < 0) {
          hardware_Sub_080B8EBC(param_1,1 - uVar13 & 0xff,uStack_44);
        }
        else {
          hardware_Sub_080B8EBC(param_1,uVar13 & 0xff,uStack_44);
        }
        uVar13 = uVar13 + 1;
      } while ((int)uVar13 < 2);
      hardware_Sub_080BB8EC(param_1,uStack_40);
      iVar3 = 0;
      puVar14 = (u16 *)(param_1 + 0xFFFFFE8A);
      iVar1 = 0;
      do {
        iVar15 = 0x00000AEC;
        if (iVar3 < 8) {
          uVar2 = hardware_GetField_0x00_8920(param_1);
          iVar15 = *(int *)(param_1 + 0x00000ACC);
          uVar11 = 0;
          if (iVar15 != 0) {
            uVar11 = (u16)((int *)(param_1 + 0x00000ACC))[1];
          }
          code_0803EE94_Sub_0805E99C(uVar2,iVar15,uVar11,*(u32 *)(iVar1 + param_1 + 0x00000AEC));
        }
        else {
          **(u16 **)(iVar1 + param_1 + 0x00000AEC) = *puVar14 >> 8;
          *(u16 *)(*(int *)(iVar1 + param_1 + iVar15) + 2) = puVar14[1] >> 8;
          *(u16 *)(*(int *)(iVar1 + param_1 + iVar15) + 8) =
               (u16)*(u8 *)((int)puVar14 + 0xb);
          uVar2 = hardware_GetField_0x00_8920(param_1);
          iVar10 = *(int *)(param_1 + 0x00000AA8);
          uVar11 = 0;
          if (iVar10 != 0) {
            uVar11 = (u16)((int *)(param_1 + 0x00000AA8))[1];
          }
          code_0803EE94_Sub_0805E99C(uVar2,iVar10,uVar11,*(u32 *)(iVar1 + param_1 + iVar15));
        }
        puVar14 = puVar14 + 0x20;
        iVar1 = iVar1 + 4;
        iVar3 = iVar3 + 1;
      } while (iVar3 < 10);
    } while (*(int *)(param_1 + 0x00000B14) == 3);
  }
  hardware_Sub_080073E0(auStack_54,uStack_50);
  hardware_Sub_08007184(auStack_54,2);
  hardware_Sub_08007C28(auStack_5c,uStack_58);
  hardware_Sub_080079E8(auStack_5c,2);
  hardware_Sub_08007C28(auStack_64,uStack_60);
  hardware_Sub_080079E8(auStack_64,2);
  hardware_Sub_08007C28(auStack_6c,uStack_68);
  hardware_Sub_080079E8(auStack_6c,2);
  hardware_Sub_08007C28(auStack_74,uStack_70);
  hardware_Sub_080079E8(auStack_74,2);
  hardware_Sub_08007C28(auStack_7c,uStack_78);
  hardware_Sub_080079E8(auStack_7c,2);
}

/* 0x080B8DAC (72B) | hardware_Sub_080B8DAC (orig: func_080B8DAC) | origin: wip | domain: hardware | MEDIUM / tu_interp */
u16 hardware_Sub_080B8DAC(int param_1,int param_2,int param_3,u32 param_4) {
  param_4 = param_4 & 0xff;
  if (param_4 == 1) {
    param_4 = *(int *)(param_1 + 0x00000B18) + 1U & 0xff;
  }
  return ((u32)*(u16 *)(param_2 * 2 + param_4 * 0xc + 0x08107ACC) +
                        (u32)*(u8 *)(param_3 + 0x08107AFC));
}

/* 0x080B8DF4 (200B) | hardware_Sub_080B8DF4 (orig: func_080B8DF4) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
void hardware_Sub_080B8DF4(int param_1,u32 param_2) {
  u16 uVar1;
  u32 uVar2;
  int iVar3;
  u16 *puVar4;
  u32 *puVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  param_2 = param_2 & 0xff;
  uVar2 = CppRuntime_builtin_new(0x14);
  iVar3 = code_0803EE94_Sub_0805E824(uVar2,*(u32 *)(param_1 + 0x0000077C),0,0x100);
  iVar7 = 0x000007A4;
  iVar8 = param_2 * 4;
  piVar6 = (int *)(iVar8 + param_1 + 0x000007A4);
  if (iVar3 != *piVar6) {
    CppRuntime_builtin_delete();
  }
  *piVar6 = iVar3;
  puVar4 = (u16 *)CppRuntime_builtin_new(0x1c);
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[4] = 0;
  *(u32 *)(puVar4 + 6) = 0;
  *(u8 *)(puVar4 + 8) = 0;
  *(u8 *)((int)puVar4 + 0x11) = 0;
  *(u32 *)(puVar4 + 10) = 0;
  *(u8 *)(puVar4 + 0xc) = 0;
  puVar5 = (u32 *)(iVar8 + param_1 + 0x000007AC);
  if (puVar4 != (u16 *)*puVar5) {
    CppRuntime_builtin_delete();
  }
  *puVar5 = puVar4;
  piVar6 = (int *)(iVar8 + param_1 + iVar7);
  iVar7 = *piVar6;
  uVar1 = hardware_Sub_080B8DAC(param_1,*(u32 *)(param_1 + 0x6c + param_2 * 0x40),
                        *(u32 *)(param_1 + 0x74 + param_2 * 0x40),param_2);
  code_0803EE94_Sub_0805E860(iVar7,uVar1);
  *(u16 *)(*piVar6 + 0x10) = 0x100;
}

/* 0x080B9428 (60B) | hardware_Wrap_Wrap_m4aMPlayStart_9428 (orig: func_080B9428) | origin: pure | domain: hardware | MEDIUM / graph_algebra */
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
extern u32 hardware_Wrap_m4aMPlayStart();
void hardware_Wrap_Wrap_m4aMPlayStart_9428(u32 arg0, u32 arg1, u32 arg2, u32 arg3)
{
    register u32 r0 = arg0;
    register u32 r1 = arg1;
    register u32 r2 = arg2;
    register u32 r3 = arg3;
    register u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0;
    r1 = r0 + 0;
    r0 += 0xd8;
    r3 = 0;
    r4 = 1;
    *(u8 *)(r0) = r4;
    r2 = r1 + 0;
    r2 += 0xac;
    r0 = *(u32 *)(r2);
    if (r0 > 1) goto loc_080B945A;
    r0 = r1 + 0;
    r0 += 0xdc;
    *(u8 *)(r0) = r3;
    r0 -= 0x14;
    *(u8 *)(r0) = r3;
    r0 += 0x11;
    *(u8 *)(r0) = r4;
    r0 = 5;
    *(u32 *)(r2) = r0;
    r2 = 0x0000070C;
    r0 = r1 + r2;
    r1 = 0xcc;
    r0 = hardware_Wrap_m4aMPlayStart(r0, r1, r2, r3);
loc_080B945A:
    return r0;
    r4 = r1 << 0x1c;
    r0 = r0;
    return r0;
}

/* 0x080B9464 (68B) | hardware_Sub_080B9464 (orig: func_080B9464) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
u32 hardware_Sub_080B9464(u32 param_1, u32 param_2, u32 param_3, u32 param_4) {
    u32 r0 = param_1;
    u32 r1 = param_2;
    u32 r2 = param_3;
    u32 r3 = param_4;
    r1 = r1 << 0x10;
    r2 = r2 << 0x10;
    r1 = (u32)r1 >> 0x18;
    r1 -= 0x78;
    r2 = (u32)r2 >> 0x18;
    r2 -= 0x4c;
    r0 = r1 + 0;
    r1 = r0 << 1;
    r1 = r1 + r0;
    r1 = r1 << 3;
    r1 = r1 + r0;
    r1 = r1 << 6;
    r0 = (s8)r2 + 0;
    r2 = r0 + 0;
    r0 = r2 << 3;
    r0 = r0 + r2;
    r0 = r0 << 8;
    r1 = r1 + r0;
    r0 = 0xe1;
    r0 = r0 << 0xe;
    r2 = r0 - r1;
    r1 = r2 - 1;
    r0 = 0x0002C6FE;
    if (r1 > r0) goto loc_080B949E;
    r2 = 0;
loc_080B949E:
    r0 = r2 + 0;
    return r1;
}

/* 0x080B94A8 (516B) | hardware_Sub_080B94A8 (orig: func_080B94A8) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
void hardware_Sub_080B94A8(int param_1,u32 param_2,u32 param_3) {
  u8 bVar1;
  char cVar2;
  u8 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  u16 *puVar8;
  param_2 = param_2 & 0xff;
  param_3 = param_3 & 0xff;
  iVar4 = param_2 * 0x40;
  iVar7 = param_1 + iVar4;
  *(char *)(iVar7 + 0x88) = *(char *)(iVar7 + 0x88) + '\x01';
  bVar1 = *(u8 *)(iVar7 + 0x89) + 1;
  *(u8 *)(iVar7 + 0x89) = bVar1;
  if (bVar1 < *(u8 *)(param_1 + 0x00000B5C)) {
    iVar5 = param_3 * 0x40;
    if (*(int *)(param_1 + 0x6c + iVar5) == 5) {
      iVar6 = param_1 + iVar5;
      puVar3 = (u8 *)(param_1 + 0x00000B5D);
      puVar8 = (u16 *)(0x00000B72 + param_1);
      cVar2 = Code_Lib_Syscall_Sub_080B96AC(param_1,*(u16 *)(iVar6 + 0x8a),*(u16 *)(iVar6 + 0x8c),
                            *(u32 *)(param_1 + 0x74 + iVar5),*(u16 *)(iVar7 + 0x8a),
                            *(u16 *)(iVar7 + 0x8c),*puVar3,*puVar8);
      if ((cVar2 != '\0') &&
         (cVar2 = Code_Lib_Syscall_Sub_080B96AC(param_1,*(u16 *)(iVar7 + 0x8a),*(u16 *)(iVar7 + 0x8c),
                                *(u32 *)(param_1 + 0x74 + iVar4),
                                *(u16 *)(iVar6 + 0x8a),*(u16 *)(iVar6 + 0x8c),*puVar3,
                                *puVar8), cVar2 != '\0')) {
        *(u8 *)(iVar7 + 0x99) = 0;
        *(u8 *)(iVar7 + 0x9a) = 1;
        *(u8 *)(iVar6 + 0x99) = 0;
        *(u8 *)(iVar6 + 0x9a) = 1;
        *(u8 *)(iVar6 + 0x9c) = 0;
        *(u8 *)(iVar7 + 0x90) = 0;
        *(u8 *)(iVar6 + 0x90) = 0;
        hardware_Sub_080B9734(param_1);
      }
    }
  }
  else {
    iVar5 = param_1 + param_3 * 0x40;
    cVar2 = Code_Lib_Syscall_Sub_080B96AC(param_1,*(u16 *)(iVar7 + 0x8a),*(u16 *)(iVar7 + 0x8c),
                          *(u32 *)(param_1 + 0x74 + iVar4),*(u16 *)(iVar5 + 0x8a),
                          *(u16 *)(iVar5 + 0x8c),*(u8 *)(param_1 + 0x00000B5D),
                          *(u16 *)(param_1 + 0x00000B5D + 0x15));
    if (cVar2 != '\0') {
      hardware_Sub_080B97FC(param_1,param_2);
      code_0803EE94_Sub_0805E860(*(u32 *)(param_3 * 4 + param_1 + 0x0000091C),2);
      *(u8 *)(iVar5 + 0xab) = 1;
      *(u8 *)(iVar7 + 0x9b) = 1;
      *(u8 *)(iVar7 + 0x99) = 0;
      *(u8 *)(iVar7 + 0x9a) = 1;
      *(u8 *)(iVar5 + 0x99) = 0;
      *(u8 *)(iVar5 + 0x9a) = 1;
      *(u8 *)(iVar5 + 0x9c) = 0;
      *(u8 *)(iVar5 + 0x90) = 0;
    }
  }
  iVar4 = param_1 + param_2 * 0x40;
  if (1 < *(u8 *)(iVar4 + 0x89)) {
    *(u8 *)(iVar4 + 0x89) = 0;
  }
  if (0x3b < *(u8 *)(iVar4 + 0x88)) {
    *(u8 *)(iVar4 + 0x88) = 0;
    hardware_Sub_080B9828(param_1,param_2);
    *(u8 *)(iVar4 + 0x9b) = 0;
    *(u8 *)(iVar4 + 0x99) = 0;
    *(u8 *)(iVar4 + 0x9a) = 1;
    hardware_Wrap_m4aMPlayStart(param_1 + 0x710,0xb5);
  }
}

/* 0x080B9734 (200B) | hardware_Sub_080B9734 (orig: func_080B9734) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
void hardware_Sub_080B9734(int param_1) {
  u32 uVar1;
  u32 uVar2;
  u8 *puVar3;
  int iVar4;
  int *piVar5;
  uVar1 = LibC_rand();
  uVar1 = (0x0000FFFF & uVar1) * 100 >> 0x10;
  if (*(u8 *)(param_1 + 0xce) < *(u8 *)(param_1 + 0x8e)) {
    if (uVar1 < 0x5a) {
      *(u32 *)(param_1 + 0x80) = 3;
      code_0803EE94_Sub_0805E860(*(u32 *)(param_1 + 0x920),2);
      *(u8 *)(param_1 + 0xeb) = 1;
      uVar2 = 5;
      goto LAB_080b97cc;
    }
  }
  else if (0x59 < uVar1) {
    *(u32 *)(param_1 + 0x80) = 3;
    code_0803EE94_Sub_0805E860(*(u32 *)(param_1 + 0x920),2);
    *(u8 *)(param_1 + 0xeb) = 1;
    uVar2 = 5;
    goto LAB_080b97cc;
  }
  *(u32 *)(param_1 + 0x80) = 5;
  code_0803EE94_Sub_0805E860(*(u32 *)(param_1 + 0x0000091C),2);
  *(u8 *)(param_1 + 0xab) = 1;
  uVar2 = 3;
LAB_080b97cc:
  piVar5 = (int *)(param_1 + 0x80);
  *(u32 *)(param_1 + 0xc0) = uVar2;
  puVar3 = (u8 *)(param_1 + 0x9b);
  iVar4 = 1;
  do {
    if (*piVar5 == 5) {
      *puVar3 = 0;
    }
    else {
      *puVar3 = 1;
    }
    puVar3 = puVar3 + 0x40;
    piVar5 = piVar5 + 0x10;
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
}

/* 0x080B97FC (44B) | hardware_Sub_080B97FC (orig: func_080B97FC) | origin: pure | domain: hardware | MEDIUM / graph_algebra */
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
void hardware_Sub_080B97FC(u8 *ptr, u32 flag) {
    u8 *p = ptr;
    if ((u8)flag) {
        *(u32 *)(p + 0x80) = 4;
        *(u32 *)(p + 0xc0) = 2;
    } else {
        *(u32 *)(p + 0x80) = 2;
        *(u32 *)(p + 0xc0) = 4;
    }
}

/* 0x080B9828 (28B) | hardware_Sub_080B9828 (orig: func_080B9828) | origin: pure | domain: hardware | MEDIUM / graph_algebra */
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
void hardware_Sub_080B9828(u32 arg0, u32 arg1, u32 arg2, u32 arg3)
{
    register u32 r0 = arg0;
    register u32 r1 = arg1;
    register u32 r2 = arg2;
    register u32 r3 = arg3;
    register u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0;
    r1 = r1 << 0x18;
    if (r1 == 0) goto loc_080B9836;
    r1 = r0 + 0;
    r1 += 0xc0;
    goto loc_080B983A;
loc_080B9836:
    r1 = r0 + 0;
    r1 += 0x80;
loc_080B983A:
    r0 = 1;
    *(u32 *)(r1) = r0;
    return r0;
    r0 = r0;
    return r0;
}

/* 0x080B9AC0 (144B) | hardware_Sub_080B9AC0 (orig: func_080B9AC0) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
void hardware_Sub_080B9AC0(int param_1) {
  u32 uVar1;
  int iVar2;
  u32 uVar3;

  int in_stack_000003e4;
  
  uVar3 = 0;
  do {
    iVar2 = uVar3 * 0x40;
    uVar1 = *(u32 *)(param_1 + 0x6c + iVar2);
    if (uVar1 < 6) {
      switch(*(u32 *)(((const u32 *)0x080b9ae0) + uVar1 * 4) & 0xfffffffe) {
      case 0x80b9ae4:
        iVar2 = in_stack_000003e4;
      case 0x80b9afc:
        hardware_Sub_080BA1A4(param_1 + iVar2 + 0x6c);
        break;
      case 0x80b9b08:
        hardware_NoOp_A1F4(param_1 + iVar2 + 0x6c);
        break;
      case 0x80b9b14:
        hardware_NoOp_A1F8(param_1 + iVar2 + 0x6c);
        break;
      case 0x80b9b20:
        hardware_NoOp_A1FC(param_1 + iVar2 + 0x6c);
        break;
      case 0x80b9b2c:
        hardware_NoOp_A200(param_1 + iVar2 + 0x6c);
        break;
      case 0x80b9b38:
        hardware_Sub_080BA204(param_1 + iVar2 + 0x6c);
      }
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 2);
  return 0;
}

/* 0x080B9E1C (240B) | hardware_Sub_080B9E1C (orig: func_080B9E1C) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
void hardware_Sub_080B9E1C(int param_1,u32 param_2) {
  u32 uVar1;
  u32 uVar2;
  int iVar3;
  u32 uVar4;
  int iVar5;
  int iVar6;
  uVar2 = param_2 * 0x1000000 + 0x1000000 >> 0x18;
  if (1 < uVar2) {
    uVar2 = 0;
  }
  iVar3 = (param_2 & 0xff) * 0x40;
  iVar5 = param_1 + 0x74;
  iVar6 = *(int *)(iVar5 + iVar3);
  uVar1 = LibC_rand();
  uVar4 = 0x0000FFFF;
  if ((u32)*(u8 *)(param_1 + iVar3 + 0x8e) <= (uVar1 & 0x0000FFFF) >> 8) goto LAB_080b9ee6;
  uVar1 = LibC_rand();
  uVar4 = (uVar1 & uVar4) >> 0xf;
  uVar2 = hardware_Sub_080B9F64(param_1,param_2 & 0xff,uVar2);
  if (7 < (uVar2 & 0xff)) goto LAB_080b9ee6;
  switch(*(u32 *)((uVar2 & 0xff) * 4 + 0x080B9E98) & 0xfffffffe) {
  case 0x80b9eb8:
    iVar6 = *(int *)(iVar5 + iVar3);
    goto LAB_080b9ee6;
  case 0x80b9ebe:
    if (uVar4 == 0) goto LAB_080b9ee6;
    break;
  case 0x80b9ec4:
    if (uVar4 == 0) goto case_080B9ED4;
    break;
  case 0x80b9ed0:
    if (uVar4 != 0) goto case_080B9EE0;
  case 0x80b9ed4:
case_080B9ED4:
    iVar6 = *(int *)(iVar5 + iVar3) + 2;
    goto LAB_080b9ee6;
  case 0x80b9edc:
    if (uVar4 == 0) goto LAB_080b9ee6;
  case 0x80b9ee0:
case_080B9EE0:
    iVar6 = *(int *)(iVar5 + iVar3) + 3;
    goto LAB_080b9ee6;
  }
  iVar6 = *(int *)(iVar5 + iVar3) + 1;
LAB_080b9ee6:
  if (3 < iVar6) {
    iVar6 = iVar6 + -4;
  }
  *(int *)(iVar5 + iVar3) = iVar6;
  *(u32 *)(param_1 + 0x6c + iVar3) = 0;
}

/* 0x080B9F0C (44B) | hardware_Sub_080B9F0C (orig: func_080B9F0C) | origin: pure | domain: hardware | MEDIUM / graph_algebra */
struct Elem { u32 p0, a, p2, b; u32 rest[12]; }; struct S { u8 pad[0x68]; struct Elem e[4]; }; u32 LibC_rand(void); void hardware_Sub_080B9F0C(struct S *s, u8 i) { u32 v; s->e[i].a = 2; v = (LibC_rand() & 0xFFFF) >> 14; s->e[i].b = v; }

/* 0x080B9F38 (44B) | hardware_Sub_080B9F38 (orig: func_080B9F38) | origin: pure | domain: hardware | MEDIUM / graph_algebra */
struct Elem { u32 p0, a, p2, b; u32 rest[12]; }; struct S { u8 pad[0x68]; struct Elem e[4]; }; u32 LibC_rand(void); void hardware_Sub_080B9F38(struct S *s, u8 i) { u32 v; s->e[i].a = 4; v = (LibC_rand() & 0xFFFF) >> 14; s->e[i].b = v; }

/* 0x080BA1A4 (80B) | hardware_Sub_080BA1A4 (orig: func_080BA1A4) | origin: pure | domain: hardware | MEDIUM / graph_algebra */
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
void hardware_Sub_080BA1A4(u32 arg0, u32 arg1, u32 arg2, u32 arg3)
{
    register u32 r0 = arg0;
    register u32 r1 = arg1;
    register u32 r2 = arg2;
    register u32 r3 = arg3;
    r2 = r0 + 0;
    r0 = *(u32 *)(r2 + 8);
    if (r0 != 0) goto loc_080BA1BC;
    r0 = r2 + 0;
    r0 += 0x23;
    r1 = *(u8 *)(r0);
    r0 = *(u16 *)(r2 + 0x20);
    r0 = r0 - r1;
    *(u16 *)(r2 + 0x20) = r0;
    goto loc_080BA1EE;
loc_080BA1BC:
    if (r0 != 1) goto loc_080BA1CC;
    r1 = r2 + 0;
    r1 += 0x23;
    r0 = *(u16 *)(r2 + 0x1e);
    r1 = *(u8 *)(r1);
    r0 = r0 + r1;
    goto loc_080BA1EC;
loc_080BA1CC:
    if (r0 != 2) goto loc_080BA1DE;
    r1 = r2 + 0;
    r1 += 0x23;
    r0 = *(u16 *)(r2 + 0x20);
    r1 = *(u8 *)(r1);
    r0 = r0 + r1;
    *(u16 *)(r2 + 0x20) = r0;
    goto loc_080BA1EE;
loc_080BA1DE:
    if (r0 != 3) goto loc_080BA1EE;
    r0 = r2 + 0;
    r0 += 0x23;
    r1 = *(u8 *)(r0);
    r0 = *(u16 *)(r2 + 0x1e);
    r0 = r0 - r1;
loc_080BA1EC:
    *(u16 *)(r2 + 0x1e) = r0;
loc_080BA1EE:
    return r0;
}

/* 0x080BA1F4 (4B) | hardware_NoOp_A1F4 (orig: func_080BA1F4) | origin: pure | domain: hardware | MEDIUM / graph_algebra */
void hardware_NoOp_A1F4(void) {
}

/* 0x080BA1F8 (4B) | hardware_NoOp_A1F8 (orig: func_080BA1F8) | origin: pure | domain: hardware | MEDIUM / graph_algebra */
void hardware_NoOp_A1F8(void) {
}

/* 0x080BA1FC (4B) | hardware_NoOp_A1FC (orig: func_080BA1FC) | origin: pure | domain: hardware | MEDIUM / graph_algebra */
void hardware_NoOp_A1FC(void) {
}

/* 0x080BA200 (4B) | hardware_NoOp_A200 (orig: func_080BA200) | origin: pure | domain: hardware | MEDIUM / graph_algebra */
void hardware_NoOp_A200(void) {
}

/* 0x080BA204 (128B) | hardware_Sub_080BA204 (orig: func_080BA204) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
void hardware_Sub_080BA204(int param_1) {
  u8 bVar1;
  short sVar2;
  
  bVar1 = *(u8 *)(param_1 + 0x1c);
  if ((1 < bVar1) && (bVar1 != 2)) {
    if (bVar1 == 9) {
      sVar2 = *(short *)(param_1 + 0x20) + -0x350;
      goto LAB_080ba27e;
    }
    if (bVar1 == 0x13) {
      sVar2 = *(short *)(param_1 + 0x20) + -0x600;
      goto LAB_080ba27e;
    }
    if (bVar1 == 0x1d) {
      sVar2 = *(short *)(param_1 + 0x20) + -0x800;
      goto LAB_080ba27e;
    }
    if (bVar1 == 0x27) {
      sVar2 = *(short *)(param_1 + 0x20) + -0x600;
      goto LAB_080ba27e;
    }
    if (bVar1 == 0x31) {
      sVar2 = *(short *)(param_1 + 0x20) + -0x350;
      goto LAB_080ba27e;
    }
    if ((bVar1 != 0x39) && (bVar1 < 0x3a)) {
      return 0;
    }
  }
  sVar2 = *(short *)(param_1 + 0x20);
LAB_080ba27e:
  *(short *)(param_1 + 0x2a) = sVar2;
  return 0;
}

/* 0x080BA284 (64B) | hardware_Sub_080BA284 (orig: func_080BA284) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
void hardware_Sub_080BA284(int param_1) {
  u8 bVar1;
  u8 *pbVar2;
  u32 *puVar3;
  int iVar4;
  pbVar2 = (u8 *)(param_1 + 0x92);
  puVar3 = (u32 *)(param_1 + 0xb40);
  iVar4 = 1;
  do {
    if (pbVar2[6] != 0) {
      *puVar3 = 2;
      bVar1 = *pbVar2;
      *pbVar2 = bVar1 + 1;
      if (0x3c < (u8)(bVar1 + 1)) {
        *puVar3 = 1;
        pbVar2[6] = 0;
        *pbVar2 = 0;
      }
    }
    pbVar2 = pbVar2 + 0x40;
    puVar3 = puVar3 + 1;
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
}

/* 0x080BA608 (176B) | hardware_Sub_080BA608 (orig: func_080BA608) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
void hardware_Sub_080BA608(u32 param_1, u32 param_2, u32 param_3, u32 param_4) {
    register u32 r0 = param_1;
    register u32 r1 = param_2;
    register u32 r2 = param_3;
    register u32 r3 = param_4;
    register u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0;
    r4 = r0 + 0;
    r0 = hardware_GetField_0x00_88CC(r0, r1, r2, r3);
    r1 = 8;
    r1 &= r0;
    if (r1 == 0) goto loc_080BA6AC;
    r1 = 0x00000714;
    r0 = r4 + r1;
    r1 = 0xb8;
    r0 = hardware_Wrap_m4aMPlayStart(r0, r1, r2, r3);
    r3 = 0x00000B31;
    r2 = r4 + r3;
    r1 = *(u8 *)(r2);
    if (r1 == 0) goto loc_080BA678;
    r0 = 0;
    *(u8 *)(r2) = r0;
    r1 = 0x000007A4;
    r0 = r4 + r1;
    r0 = *(u32 *)(r0);
    r1 = 0x80;
    r1 = r1 << 1;
    *(u16 *)(r0 + 0x10) = r1;
    r2 = 0xf5;
    r2 = r2 << 3;
    r0 = r4 + r2;
    r0 = *(u32 *)(r0);
    *(u16 *)(r0 + 0x10) = r1;
    r3 = 0x0000087C;
    r0 = r4 + r3;
    r0 = *(u32 *)(r0);
    *(u16 *)(r0 + 0x10) = r1;
    r2 += 0xd8;
    r0 = r4 + r2;
    r0 = *(u32 *)(r0);
    *(u16 *)(r0 + 0x10) = r1;
    r3 += 0xa0;
    r0 = r4 + r3;
    r0 = *(u32 *)(r0);
    *(u16 *)(r0 + 0x10) = r1;
    r2 += 0xa0;
    r0 = r4 + r2;
    r0 = *(u32 *)(r0);
    *(u16 *)(r0 + 0x10) = r1;
    goto loc_080BA6AC;
    r4 = r2 << 0x1c;
    r0 = r0;
    r1 = (u32)r6 >> 0xc;
    r0 = r0;
    r4 = r4 << 0x1e;
    r0 = r0;
    r4 = (u32)r7 >> 1;
    r0 = r0;
loc_080BA678:
    r3 = 0x000007A4;
    r0 = r4 + r3;
    r0 = *(u32 *)(r0);
    *(u16 *)(r0 + 0x10) = r1;
    r3 += 4;
    r0 = r4 + r3;
    r0 = *(u32 *)(r0);
    *(u16 *)(r0 + 0x10) = r1;
    r3 += 0xd4;
    r0 = r4 + r3;
    r0 = *(u32 *)(r0);
    *(u16 *)(r0 + 0x10) = r1;
    r3 += 4;
    r0 = r4 + r3;
    r0 = *(u32 *)(r0);
    *(u16 *)(r0 + 0x10) = r1;
    r3 += 0x9c;
    r0 = r4 + r3;
    r0 = *(u32 *)(r0);
    *(u16 *)(r0 + 0x10) = r1;
    r3 += 4;
    r0 = r4 + r3;
    r0 = *(u32 *)(r0);
    *(u16 *)(r0 + 0x10) = r1;
    r0 = 1;
    *(u8 *)(r2) = r0;
loc_080BA6AC:
    return r0;
    r0 = r0;
    r4 = r4 << 0x1e;
    r0 = r0;
    return r0;
}

/* 0x080BA6B8 (124B) | hardware_Sub_080BA6B8 (orig: func_080BA6B8) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
void hardware_Sub_080BA6B8(int param_1) {
  int iVar1;
  u32 uVar2;
  u8 *pbVar3;
  uVar2 = hardware_GetField_0x00_88D4();
  if (((*(char *)(param_1 + 0x9c) == '\x01') && ((uVar2 & 1) != 0)) &&
     (*(u8 *)(param_1 + 0x98) = 1, *(u32 *)(param_1 + 0x6c) < 2)) {
    *(char *)(param_1 + 0x9c) = '\0';
    *(u8 *)(param_1 + 0x88) = 0;
    *(u8 *)(param_1 + 0x99) = 1;
    *(u32 *)(param_1 + 0x6c) = 5;
    hardware_Wrap_m4aMPlayStart(param_1 + 0x0000070C,0xcc);
  }
  iVar1 = 0x00000B3A;
  if (*(char *)(param_1 + 0xdc) == '\x01') {
    pbVar3 = (u8 *)(param_1 + 0x00000B3A);
    *pbVar3 = *pbVar3 + 1;
    if ((int)(*(u8 *)(param_1 + iVar1 + 0x20) - 1) < (int)(u32)*pbVar3) {
      *pbVar3 = 0;
      hardware_Sub_080B92B4(param_1);
    }
  }
}

/* 0x080BA734 (176B) | hardware_Sub_080BA734 (orig: func_080BA734) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
void hardware_Sub_080BA734(int param_1) {
    s32 iVar1;
  register u16 *puVar2;
  if (*(int *)(param_1 + 0x84) < 0) {
    puVar2 = (u16 *)(param_1 + 0x8c);
    if (*puVar2 >> 8 < 0x48) {
      *(u8 *)(param_1 + 0x95) = 2;
    }
    iVar1 = 0x00000B14;
    *puVar2 = *puVar2 + 0x300;
    *(u32 *)(param_1 + 0x00000B14) = 3;
    *(u32 *)(param_1 + 0x00000B44) = 3;
    *(u32 *)(param_1 + iVar1 + 0x2c) = 0;
    *(u32 *)(param_1 + iVar1 + 0x3c) = 1;
  }
  else if (*(int *)(param_1 + 0xc4) < 0) {
    if (*(u16 *)(param_1 + 0x8c) >> 8 < 0x48) {
      *(u8 *)(param_1 + 0xd5) = 2;
    }
    *(short *)(param_1 + 0xcc) = *(short *)(param_1 + 0xcc) + 0x300;
    *(u32 *)(param_1 + 0x00000B14) = 3;
    *(u32 *)(param_1 + 0x00000B44) = 1;
    iVar1 = 0x00000B44;
    *(u32 *)(param_1 + iVar1 + -4) = 3;
    *(u32 *)(param_1 + 0xb50) = 1;
  }
}

/* 0x080BB890 (92B) | hardware_Sub_080BB890 (orig: func_080BB890) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
u32 hardware_Sub_080BB890(int param_1,int param_2,int param_3,int param_4) {
  u32 uVar1;
  int iVar2;
  uVar1 = 0;
  if (param_2 == 1) {
    if (param_3 != 0) {
      param_3 = param_3 + *(int *)(param_1 + 0x00000B18);
    }
    uVar1 = (u32)*(u16 *)(param_4 * 2 + param_3 * 8 + 0x08107D46);
  }
  else {
    if (param_2 < 2) {
      iVar2 = 0x08107D3C;
      if (param_2 != 0) goto LAB_080bb8e0;
    }
    else {
      iVar2 = 0x08107D66;
      param_3 = param_4;
      if (param_2 != 2) goto LAB_080bb8e0;
    }
    uVar1 = (u32)*(u16 *)(param_3 * 2 + iVar2);
  }
LAB_080bb8e0:
  return uVar1;
}

/* 0x080BB8EC (2408B) | hardware_Sub_080BB8EC (orig: func_080BB8EC) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
void hardware_Sub_080BB8EC(int param_1,int param_2) {
  u16 uVar1;
  int iVar2;
  u32 uVar3;
  u32 *puVar4;
  u32 *puVar5;
  int *piVar6;
  u32 *puVar7;
  int *piVar8;
  int iVar9;
  u32 uVar10;
  u32 uStack_a4;
  u32 uStack_a0;
  u32 uStack_9c;
  u32 uStack_98;
  u32 uStack_94;
  u32 uStack_90;
  u32 uStack_8c;
  u32 uStack_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int *piStack_30;
  u32 *puStack_2c;
  u32 *puStack_28;
  u32 *puStack_24;
  iStack_50 = 0;
  iStack_3c = 0;
  iStack_38 = 0x0000073C + param_1;
  piStack_30 = (int *)(0x000007B4 + param_1);
  puStack_2c = (u32 *)(0x000007DC + param_1);
  iStack_54 = param_2;
  iStack_34 = param_2;
  do {
    piVar6 = piStack_30;
    iVar2 = code_0803EE94_Sub_0805E8F0(*piStack_30);
    if (iVar2 * 0x40000000 < 0) {
      puVar4 = (u32 *)*piVar6;
      func_080D3918(&uStack_a4,(int *)*puVar4,
                      *(u16 *)(puVar4[1] + (u32)*(u16 *)(puVar4 + 3) * 4),
                      *(u32 *)(*(int *)*puVar4 + 0x10));
      LibC_memcpy(&uStack_a4,&uStack_a4,0x20);
      *puStack_2c = uStack_a4;
      puStack_2c[1] = uStack_a0;
      puStack_2c[2] = uStack_9c;
      puStack_2c[3] = uStack_98;
      puStack_2c[4] = uStack_94;
      puStack_2c[5] = uStack_90;
      puStack_2c[6] = uStack_8c;
      puStack_2c[7] = uStack_88;
      piVar6 = (int *)hardware_GetField_0x00_8910(param_1,puStack_2c + 8);
      uVar1 = 0;
      if (puStack_2c[2] != 0) {
        uVar1 = *(u16 *)(puStack_2c + 3);
      }
      hardware_Sub_08008F0C(&uStack_a4,puStack_2c[2],iStack_34 * 0x20 + 0x06010000,uVar1);
      puVar4 = (u32 *)piVar6[1];
      if (puVar4 == (u32 *)piVar6[3]) {
        iStack_80 = 1;
        iStack_84 = (int)puVar4 - *piVar6 >> 4;
        piVar8 = &iStack_84;
        if (iStack_84 == 0) {
          piVar8 = &iStack_80;
        }
        puStack_28 = puVar4;
        if (iStack_84 + *piVar8 == 0) {
          puVar4 = (u32 *)0x0;
          iVar2 = 0;
        }
        else {
          iVar2 = (iStack_84 + *piVar8) * 0x10;
          puVar4 = (u32 *)LibC_malloc(iVar2);
          if (puVar4 == (u32 *)0x0) {
            puVar4 = (u32 *)code_linkonce_Sub_080D3BC0(iVar2);
          }
        }
        puVar5 = puVar4;
        for (puVar7 = (u32 *)*piVar6; puVar7 != puStack_28; puVar7 = puVar7 + 4) {
          if (puVar5 != (u32 *)0x0) {
            uVar3 = puVar7[1];
            uVar10 = puVar7[2];
            *puVar5 = *puVar7;
            puVar5[1] = uVar3;
            puVar5[2] = uVar10;
            puVar5[3] = puVar7[3];
          }
          puVar5 = puVar5 + 4;
        }
        iVar9 = iStack_80;
        if (iStack_80 == 1) {
          if (puVar5 != (u32 *)0x0) {
            *puVar5 = uStack_a4;
            puVar5[1] = uStack_a0;
            puVar5[2] = uStack_9c;
            puVar5[3] = uStack_98;
          }
          puVar5 = puVar5 + 4;
        }
        else {
          for (; iVar9 != 0; iVar9 = iVar9 + -1) {
            if (puVar5 != (u32 *)0x0) {
              *puVar5 = uStack_a4;
              puVar5[1] = uStack_a0;
              puVar5[2] = uStack_9c;
              puVar5[3] = uStack_98;
            }
            puVar5 = puVar5 + 4;
          }
        }
        for (iVar9 = *piVar6; iVar9 != piVar6[1]; iVar9 = iVar9 + 0x10) {
        }
        puStack_24 = puVar4;
        if (*piVar6 != 0) {
          LibC_free();
        }
        *piVar6 = (int)puStack_24;
        piVar6[1] = (int)puVar5;
        piVar6[3] = (int)puStack_24 + iVar2;
      }
      else {
        if (puVar4 != (u32 *)0x0) {
          *puVar4 = uStack_a4;
          puVar4[1] = uStack_a0;
          puVar4[2] = uStack_9c;
          puVar4[3] = uStack_98;
        }
        piVar6[1] = piVar6[1] + 0x10;
      }
      piVar6 = (int *)hardware_GetField_0x00_8910(param_1);
      iVar2 = 0x000007EC;
      uVar3 = *(u32 *)(iStack_3c + param_1 + 0x000007EC);
      iVar9 = hardware_Sub_080074C0(iStack_38,*(u32 *)(iStack_38 + 4));
      piVar8 = (int *)(iStack_3c + param_1 + iVar2);
      uVar1 = 0;
      if (*piVar8 != 0) {
        uVar1 = (u16)piVar8[1];
      }
      hardware_Sub_08008F0C(&uStack_a4,uVar3,iVar9 * 0x20 + 0x05000200,uVar1);
      puVar4 = (u32 *)piVar6[1];
      if (puVar4 == (u32 *)piVar6[3]) {
        iStack_78 = 1;
        iStack_7c = (int)puVar4 - *piVar6 >> 4;
        piVar8 = &iStack_7c;
        if (iStack_7c == 0) {
          piVar8 = &iStack_78;
        }
        puStack_28 = puVar4;
        if (iStack_7c + *piVar8 == 0) {
          puVar4 = (u32 *)0x0;
          iVar2 = 0;
        }
        else {
          iVar2 = (iStack_7c + *piVar8) * 0x10;
          puVar4 = (u32 *)LibC_malloc(iVar2);
          if (puVar4 == (u32 *)0x0) {
            puVar4 = (u32 *)code_linkonce_Sub_080D3BC0(iVar2);
          }
        }
        puVar5 = puVar4;
        for (puVar7 = (u32 *)*piVar6; puVar7 != puStack_28; puVar7 = puVar7 + 4) {
          if (puVar5 != (u32 *)0x0) {
            uVar3 = puVar7[1];
            uVar10 = puVar7[2];
            *puVar5 = *puVar7;
            puVar5[1] = uVar3;
            puVar5[2] = uVar10;
            puVar5[3] = puVar7[3];
          }
          puVar5 = puVar5 + 4;
        }
        iVar9 = iStack_78;
        if (iStack_78 == 1) {
          if (puVar5 != (u32 *)0x0) {
            *puVar5 = uStack_a4;
            puVar5[1] = uStack_a0;
            puVar5[2] = uStack_9c;
            puVar5[3] = uStack_98;
          }
          puVar5 = puVar5 + 4;
        }
        else {
          for (; iVar9 != 0; iVar9 = iVar9 + -1) {
            if (puVar5 != (u32 *)0x0) {
              *puVar5 = uStack_a4;
              puVar5[1] = uStack_a0;
              puVar5[2] = uStack_9c;
              puVar5[3] = uStack_98;
            }
            puVar5 = puVar5 + 4;
          }
        }
        for (iVar9 = *piVar6; iVar9 != piVar6[1]; iVar9 = iVar9 + 0x10) {
        }
        puStack_24 = puVar4;
        if (*piVar6 != 0) {
          LibC_free();
        }
        *piVar6 = (int)puStack_24;
        piVar6[1] = (int)puVar5;
        piVar6[3] = (int)puStack_24 + iVar2;
      }
      else {
        if (puVar4 != (u32 *)0x0) {
          *puVar4 = uStack_a4;
          puVar4[1] = uStack_a0;
          puVar4[2] = uStack_9c;
          puVar4[3] = uStack_98;
        }
        piVar6[1] = piVar6[1] + 0x10;
      }
    }
    uVar3 = hardware_GetField_0x00_8920(param_1);
    piVar6 = (int *)(iStack_3c + param_1 + 0x000007DC);
    uVar1 = 0;
    if (*piVar6 != 0) {
      uVar1 = (u16)piVar6[1];
    }
    code_0803EE94_Sub_0805E99C(uVar3,*(u32 *)(iStack_3c + param_1 + 0x000007DC),uVar1,piStack_30[5]);
    iStack_3c = iStack_3c + 0x20;
    iStack_38 = iStack_38 + 8;
    iStack_34 = iStack_34 + 0xf;
    piStack_30 = piStack_30 + 1;
    puStack_2c = puStack_2c + 8;
    iStack_50 = iStack_50 + 1;
  } while (iStack_50 < 5);
  iStack_50 = 0;
  do {
    iStack_48 = iStack_50 * 4;
    piVar8 = (int *)(0x00000B48 + param_1 + iStack_48);
    piVar6 = (int *)(param_1 + 0xb40 + iStack_48);
    if (*piVar8 != *piVar6) {
      uVar3 = *(u32 *)(iStack_48 + param_1 + 0x0000087C);
      uVar1 = hardware_Sub_080BB890(param_1,1);
      code_0803EE94_Sub_0805E860(uVar3,uVar1);
      *piVar8 = *piVar6;
    }
    iVar2 = code_0803EE94_Sub_0805E8F0(*(u32 *)(iStack_48 + param_1 + 0x0000087C));
    iStack_40 = iStack_50 * 0x20;
    iStack_4c = iStack_50 + 1;
    if (iVar2 * 0x40000000 < 0) {
      iVar2 = iStack_40 + param_1;
      puVar7 = (u32 *)(iVar2 + 0x0000088C);
      puVar4 = *(u32 **)(iStack_48 + param_1 + 0x0000087C);
      func_080D3918(&uStack_a4,(int *)*puVar4,
                      *(u16 *)(puVar4[1] + (u32)*(u16 *)(puVar4 + 3) * 4),
                      *(u32 *)(*(int *)*puVar4 + 0x10));
      LibC_memcpy(&uStack_a4,&uStack_a4,0x20);
      *puVar7 = uStack_a4;
      puVar7[1] = uStack_a0;
      puVar7[2] = uStack_9c;
      puVar7[3] = uStack_98;
      puVar7[4] = uStack_94;
      puVar7[5] = uStack_90;
      puVar7[6] = uStack_8c;
      puVar7[7] = uStack_88;
      piVar6 = (int *)hardware_GetField_0x00_8910(param_1);
      piVar8 = (int *)(iVar2 + 0x00000894);
      iVar2 = *piVar8;
      uVar1 = 0;
      if (iVar2 != 0) {
        uVar1 = (u16)piVar8[1];
      }
      hardware_Sub_08008F0C(&uStack_a4,iVar2,(iStack_50 * 0xf + iStack_54) * 0x20 + 0x06010960,uVar1);
      puVar4 = (u32 *)piVar6[1];
      if (puVar4 == (u32 *)piVar6[3]) {
        iStack_70 = 1;
        iStack_74 = (int)puVar4 - *piVar6 >> 4;
        piVar8 = &iStack_74;
        if (iStack_74 == 0) {
          piVar8 = &iStack_70;
        }
        puStack_28 = puVar4;
        if (iStack_74 + *piVar8 == 0) {
          puVar4 = (u32 *)0x0;
          iVar2 = 0;
        }
        else {
          iVar2 = (iStack_74 + *piVar8) * 0x10;
          puVar4 = (u32 *)LibC_malloc(iVar2);
          if (puVar4 == (u32 *)0x0) {
            puVar4 = (u32 *)code_linkonce_Sub_080D3BC0(iVar2);
          }
        }
        iStack_44 = iStack_50 << 3;
        iStack_4c = iStack_50 + 1;
        puVar7 = puVar4;
        for (puVar5 = (u32 *)*piVar6; puVar5 != puStack_28; puVar5 = puVar5 + 4) {
          if (puVar7 != (u32 *)0x0) {
            uVar3 = puVar5[1];
            uVar10 = puVar5[2];
            *puVar7 = *puVar5;
            puVar7[1] = uVar3;
            puVar7[2] = uVar10;
            puVar7[3] = puVar5[3];
          }
          puVar7 = puVar7 + 4;
        }
        iVar9 = iStack_70;
        if (iStack_70 == 1) {
          if (puVar7 != (u32 *)0x0) {
            *puVar7 = uStack_a4;
            puVar7[1] = uStack_a0;
            puVar7[2] = uStack_9c;
            puVar7[3] = uStack_98;
          }
          puVar7 = puVar7 + 4;
        }
        else {
          for (; iVar9 != 0; iVar9 = iVar9 + -1) {
            if (puVar7 != (u32 *)0x0) {
              *puVar7 = uStack_a4;
              puVar7[1] = uStack_a0;
              puVar7[2] = uStack_9c;
              puVar7[3] = uStack_98;
            }
            puVar7 = puVar7 + 4;
          }
        }
        for (iVar9 = *piVar6; iVar9 != piVar6[1]; iVar9 = iVar9 + 0x10) {
        }
        puStack_24 = puVar4;
        if (*piVar6 != 0) {
          LibC_free();
        }
        *piVar6 = (int)puStack_24;
        piVar6[1] = (int)puVar7;
        piVar6[3] = (int)puStack_24 + iVar2;
      }
      else {
        if (puVar4 != (u32 *)0x0) {
          *puVar4 = uStack_a4;
          puVar4[1] = uStack_a0;
          puVar4[2] = uStack_9c;
          puVar4[3] = uStack_98;
        }
        piVar6[1] = piVar6[1] + 0x10;
        iStack_44 = iStack_50 << 3;
      }
      piVar6 = (int *)hardware_GetField_0x00_8910(param_1);
      iVar2 = 0x0000089C;
      uVar3 = *(u32 *)(iStack_40 + param_1 + 0x0000089C);
      iVar9 = iStack_44 + param_1 + 0x00000764;
      iVar9 = hardware_Sub_080074C0(iVar9,*(u32 *)(iVar9 + 4));
      piVar8 = (int *)(iStack_40 + param_1 + iVar2);
      uVar1 = 0;
      if (*piVar8 != 0) {
        uVar1 = (u16)piVar8[1];
      }
      hardware_Sub_08008F0C(&uStack_a4,uVar3,iVar9 * 0x20 + 0x05000200,uVar1);
      puVar4 = (u32 *)piVar6[1];
      if (puVar4 == (u32 *)piVar6[3]) {
        iStack_68 = 1;
        iStack_6c = (int)puVar4 - *piVar6 >> 4;
        piVar8 = &iStack_6c;
        if (iStack_6c == 0) {
          piVar8 = &iStack_68;
        }
        puStack_28 = puVar4;
        if (iStack_6c + *piVar8 == 0) {
          puVar4 = (u32 *)0x0;
          iVar2 = 0;
        }
        else {
          iVar2 = (iStack_6c + *piVar8) * 0x10;
          puVar4 = (u32 *)LibC_malloc(iVar2);
          if (puVar4 == (u32 *)0x0) {
            puVar4 = (u32 *)code_linkonce_Sub_080D3BC0(iVar2);
          }
        }
        puVar5 = puVar4;
        for (puVar7 = (u32 *)*piVar6; puVar7 != puStack_28; puVar7 = puVar7 + 4) {
          if (puVar5 != (u32 *)0x0) {
            uVar3 = puVar7[1];
            uVar10 = puVar7[2];
            *puVar5 = *puVar7;
            puVar5[1] = uVar3;
            puVar5[2] = uVar10;
            puVar5[3] = puVar7[3];
          }
          puVar5 = puVar5 + 4;
        }
        iVar9 = iStack_68;
        if (iStack_68 == 1) {
          if (puVar5 != (u32 *)0x0) {
            *puVar5 = uStack_a4;
            puVar5[1] = uStack_a0;
            puVar5[2] = uStack_9c;
            puVar5[3] = uStack_98;
          }
          puVar5 = puVar5 + 4;
        }
        else {
          for (; iVar9 != 0; iVar9 = iVar9 + -1) {
            if (puVar5 != (u32 *)0x0) {
              *puVar5 = uStack_a4;
              puVar5[1] = uStack_a0;
              puVar5[2] = uStack_9c;
              puVar5[3] = uStack_98;
            }
            puVar5 = puVar5 + 4;
          }
        }
        for (iVar9 = *piVar6; iVar9 != piVar6[1]; iVar9 = iVar9 + 0x10) {
        }
        puStack_24 = puVar4;
        if (*piVar6 != 0) {
          LibC_free();
        }
        *piVar6 = (int)puStack_24;
        piVar6[1] = (int)puVar5;
        piVar6[3] = (int)puStack_24 + iVar2;
      }
      else {
        if (puVar4 != (u32 *)0x0) {
          *puVar4 = uStack_a4;
          puVar4[1] = uStack_a0;
          puVar4[2] = uStack_9c;
          puVar4[3] = uStack_98;
        }
        piVar6[1] = piVar6[1] + 0x10;
      }
    }
    uVar3 = hardware_GetField_0x00_8920(param_1);
    piVar6 = (int *)(iStack_40 + param_1 + 0x0000088C);
    uVar1 = 0;
    if (*piVar6 != 0) {
      uVar1 = (u16)piVar6[1];
    }
    code_0803EE94_Sub_0805E99C(uVar3,*(u32 *)(iStack_40 + param_1 + 0x0000088C),uVar1,
                  *(u32 *)(iStack_48 + param_1 + 0x00000884));
    iStack_50 = iStack_4c;
  } while (iStack_4c < 2);
  piVar6 = (int *)(0x00000B54 + param_1);
  if (*piVar6 != *(int *)(param_1 + 0xb50)) {
    uVar3 = *(u32 *)(0x000008CC + param_1);
    uVar1 = hardware_Sub_080BB890(param_1,2,0);
    code_0803EE94_Sub_0805E860(uVar3,uVar1);
    *piVar6 = *(int *)(param_1 + 0xb50);
  }
  piVar6 = (int *)(0x000008CC + param_1);
  iVar2 = code_0803EE94_Sub_0805E8F0(*piVar6);
  if (iVar2 * 0x40000000 < 0) {
    puVar7 = (u32 *)(0x000008D4 + param_1);
    puVar4 = (u32 *)*piVar6;
    func_080D3918(&uStack_a4,(int *)*puVar4,
                    *(u16 *)(puVar4[1] + (u32)*(u16 *)(puVar4 + 3) * 4),
                    *(u32 *)(*(int *)*puVar4 + 0x10));
    LibC_memcpy(&uStack_a4,&uStack_a4,0x20);
    *puVar7 = uStack_a4;
    puVar7[1] = uStack_a0;
    puVar7[2] = uStack_9c;
    puVar7[3] = uStack_98;
    puVar7[4] = uStack_94;
    puVar7[5] = uStack_90;
    puVar7[6] = uStack_8c;
    puVar7[7] = uStack_88;
    piVar6 = (int *)hardware_GetField_0x00_8910(param_1);
    iVar2 = *(int *)(0x000008DC + param_1);
    uVar1 = 0;
    if (iVar2 != 0) {
      uVar1 = (u16)((int *)(0x000008DC + param_1))[1];
    }
    hardware_Sub_08008F0C(&uStack_a4,iVar2,iStack_54 * 0x20 + 0x06010D20,uVar1);
    puVar4 = (u32 *)piVar6[1];
    if (puVar4 == (u32 *)piVar6[3]) {
      iStack_60 = 1;
      iStack_64 = (int)puVar4 - *piVar6 >> 4;
      piVar8 = &iStack_64;
      if (iStack_64 == 0) {
        piVar8 = &iStack_60;
      }
      puStack_28 = puVar4;
      if (iStack_64 + *piVar8 == 0) {
        puVar4 = (u32 *)0x0;
        iVar2 = 0;
      }
      else {
        iVar2 = (iStack_64 + *piVar8) * 0x10;
        puVar4 = (u32 *)LibC_malloc(iVar2);
        if (puVar4 == (u32 *)0x0) {
          puVar4 = (u32 *)code_linkonce_Sub_080D3BC0(iVar2);
        }
      }
      puVar5 = puVar4;
      for (puVar7 = (u32 *)*piVar6; puVar7 != puStack_28; puVar7 = puVar7 + 4) {
        if (puVar5 != (u32 *)0x0) {
          uVar3 = puVar7[1];
          uVar10 = puVar7[2];
          *puVar5 = *puVar7;
          puVar5[1] = uVar3;
          puVar5[2] = uVar10;
          puVar5[3] = puVar7[3];
        }
        puVar5 = puVar5 + 4;
      }
      iVar9 = iStack_60;
      if (iStack_60 == 1) {
        if (puVar5 != (u32 *)0x0) {
          *puVar5 = uStack_a4;
          puVar5[1] = uStack_a0;
          puVar5[2] = uStack_9c;
          puVar5[3] = uStack_98;
        }
        puVar5 = puVar5 + 4;
      }
      else {
        for (; iVar9 != 0; iVar9 = iVar9 + -1) {
          if (puVar5 != (u32 *)0x0) {
            *puVar5 = uStack_a4;
            puVar5[1] = uStack_a0;
            puVar5[2] = uStack_9c;
            puVar5[3] = uStack_98;
          }
          puVar5 = puVar5 + 4;
        }
      }
      for (iVar9 = *piVar6; iVar9 != piVar6[1]; iVar9 = iVar9 + 0x10) {
      }
      puStack_24 = puVar4;
      if (*piVar6 != 0) {
        LibC_free();
      }
      *piVar6 = (int)puStack_24;
      piVar6[1] = (int)puVar5;
      piVar6[3] = (int)puStack_24 + iVar2;
    }
    else {
      if (puVar4 != (u32 *)0x0) {
        *puVar4 = uStack_a4;
        puVar4[1] = uStack_a0;
        puVar4[2] = uStack_9c;
        puVar4[3] = uStack_98;
      }
      piVar6[1] = piVar6[1] + 0x10;
    }
    piVar6 = (int *)hardware_GetField_0x00_8910(param_1);
    piVar8 = (int *)(0x000008E4 + param_1);
    iVar9 = *piVar8;
    iVar2 = hardware_Sub_080074C0(0x00000774 + param_1,*(u32 *)(0x00000774 + param_1 + 4));
    uVar1 = 0;
    if (*piVar8 != 0) {
      uVar1 = (u16)piVar8[1];
    }
    hardware_Sub_08008F0C(&uStack_a4,iVar9,iVar2 * 0x20 + 0x05000200,uVar1);
    puVar4 = (u32 *)piVar6[1];
    if (puVar4 == (u32 *)piVar6[3]) {
      iStack_58 = 1;
      iStack_5c = (int)puVar4 - *piVar6 >> 4;
      piVar8 = &iStack_5c;
      if (iStack_5c == 0) {
        piVar8 = &iStack_58;
      }
      puStack_28 = puVar4;
      if (iStack_5c + *piVar8 == 0) {
        puVar4 = (u32 *)0x0;
        iVar2 = 0;
      }
      else {
        iVar2 = (iStack_5c + *piVar8) * 0x10;
        puVar4 = (u32 *)LibC_malloc(iVar2);
        if (puVar4 == (u32 *)0x0) {
          puVar4 = (u32 *)code_linkonce_Sub_080D3BC0(iVar2);
        }
      }
      puVar5 = puVar4;
      for (puVar7 = (u32 *)*piVar6; puVar7 != puStack_28; puVar7 = puVar7 + 4) {
        if (puVar5 != (u32 *)0x0) {
          uVar3 = puVar7[1];
          uVar10 = puVar7[2];
          *puVar5 = *puVar7;
          puVar5[1] = uVar3;
          puVar5[2] = uVar10;
          puVar5[3] = puVar7[3];
        }
        puVar5 = puVar5 + 4;
      }
      iVar9 = iStack_58;
      if (iStack_58 == 1) {
        if (puVar5 != (u32 *)0x0) {
          *puVar5 = uStack_a4;
          puVar5[1] = uStack_a0;
          puVar5[2] = uStack_9c;
          puVar5[3] = uStack_98;
        }
        puVar5 = puVar5 + 4;
      }
      else {
        for (; iVar9 != 0; iVar9 = iVar9 + -1) {
          if (puVar5 != (u32 *)0x0) {
            *puVar5 = uStack_a4;
            puVar5[1] = uStack_a0;
            puVar5[2] = uStack_9c;
            puVar5[3] = uStack_98;
          }
          puVar5 = puVar5 + 4;
        }
      }
      for (iVar9 = *piVar6; iVar9 != piVar6[1]; iVar9 = iVar9 + 0x10) {
      }
      puStack_24 = puVar4;
      if (*piVar6 != 0) {
        LibC_free();
      }
      *piVar6 = (int)puStack_24;
      piVar6[1] = (int)puVar5;
      piVar6[3] = (int)puStack_24 + iVar2;
    }
    else {
      if (puVar4 != (u32 *)0x0) {
        *puVar4 = uStack_a4;
        puVar4[1] = uStack_a0;
        puVar4[2] = uStack_9c;
        puVar4[3] = uStack_98;
      }
      piVar6[1] = piVar6[1] + 0x10;
    }
  }
  uVar3 = hardware_GetField_0x00_8920(param_1);
  iVar2 = *(int *)(0x000008D4 + param_1);
  uVar1 = 0;
  if (iVar2 != 0) {
    uVar1 = (u16)((int *)(0x000008D4 + param_1))[1];
  }
  code_0803EE94_Sub_0805E99C(uVar3,iVar2,uVar1,*(u32 *)(param_1 + 0x8d0));
}

/* 0x080BC254 (52B) | hardware_Sub_080BC254 (orig: func_080BC254) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
u32 hardware_Sub_080BC254(int param_1, int param_2, u8 param_3, int param_4) {
    u8 * puVar1;
    int iVar2;
    int iVar3;
  register int _p_param_1 = param_1;
  register int _p_param_2 = param_2;
  register int _p_param_4 = param_4;
  register int _p_param_3 = param_3;

  iVar2 = 0;
  if (0 < _p_param_2 * 2) {
    iVar3 = _p_param_1 + 0x00000B35;
    puVar1 = (u8 *)(_p_param_3 * 2 + _p_param_4);
    do {
      *(u8 *)(iVar3 + iVar2) = *puVar1;
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < _p_param_2 * 2);
  }
  return (_p_param_1 + 0x00000B35);
}

/* 0x080BC288 (1552B) | hardware_Sub_080BC288 (orig: func_080BC288) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
void hardware_Sub_080BC288(int param_1,int param_2) {
  u16 uVar1;
  u16 uVar2;
  u32 uVar3;
  int iVar4;
  u16 *puVar5;
  u32 *puVar6;
  int *piVar7;
  u32 *puVar8;
  int *piVar9;
  u16 *puVar10;
  u32 *puVar11;
  int iVar12;
  u32 uVar13;
  u32 uVar14;
  u8 auStack_b8 [4];
  u32 uStack_b4;
  u8 auStack_b0 [4];
  u32 uStack_ac;
  u32 auStack_a8 [17];
  u32 uStack_64;
  u32 uStack_60;
  u32 uStack_5c;
  u32 uStack_58;
  u32 uStack_54;
  u32 uStack_50;
  u32 uStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  u32 *puStack_2c;
  u32 *puStack_28;
  u32 *puStack_24;
  iStack_30 = param_2;
  hardware_Sub_08007874(auStack_b8);
  uStack_b4 = 0;
  hardware_Sub_08007874(auStack_b0);
  uStack_ac = 0;
  hardware_Sub_08007C28(auStack_b8,uStack_b4);
  uStack_b4 = hardware_Sub_08007B54(auStack_b8,2);
  hardware_Sub_08007C28(auStack_b0,uStack_ac);
  uStack_ac = hardware_Sub_08007B54(auStack_b0,3);
  LibC_memcpy(auStack_a8,0x08107D6C,0x40);
  uVar3 = CppRuntime_builtin_new(0x14);
  puVar11 = (u32 *)(0x0000077C + param_1);
  iVar4 = code_0803EE94_Sub_0805E824(uVar3,*puVar11,0,0x100);
  piVar9 = (int *)(0x00000AA4 + param_1);
  if (iVar4 != *piVar9) {
    CppRuntime_builtin_delete();
  }
  *piVar9 = iVar4;
  uVar3 = CppRuntime_builtin_new(0x14);
  iVar4 = code_0803EE94_Sub_0805E824(uVar3,*puVar11,0,0x100);
  piVar7 = (int *)(0x00000AC8 + param_1);
  if (iVar4 != *piVar7) {
    CppRuntime_builtin_delete();
  }
  *piVar7 = iVar4;
  code_0803EE94_Sub_0805E860(*piVar9,0x0000091A);
  code_0803EE94_Sub_0805E860(*piVar7,0x0000091B);
  puVar8 = (u32 *)(0x00000AA8 + param_1);
  puVar11 = (u32 *)*piVar9;
  func_080D3918(auStack_a8 + 0x10,(int *)*puVar11,
                  *(u16 *)(puVar11[1] + (u32)*(u16 *)(puVar11 + 3) * 4),
                  *(u32 *)(*(int *)*puVar11 + 0x10));
  LibC_memcpy(auStack_a8 + 0x10,auStack_a8 + 0x10,0x20);
  *puVar8 = auStack_a8[0x10];
  puVar8[1] = uStack_64;
  puVar8[2] = uStack_60;
  puVar8[3] = uStack_5c;
  puVar8[4] = uStack_58;
  puVar8[5] = uStack_54;
  puVar8[6] = uStack_50;
  puVar8[7] = uStack_4c;
  piVar9 = (int *)hardware_GetField_0x00_8910(param_1);
  iVar12 = *(int *)(param_1 + 0xab0);
  iVar4 = hardware_Sub_08007D4C(auStack_b8,uStack_b4);
  uVar2 = 0;
  if (*(int *)(param_1 + 0xab0) != 0) {
    uVar2 = *(u16 *)(param_1 + 0xab4);
  }
  hardware_Sub_08008F0C(auStack_a8 + 0x10,iVar12,iVar4 * 0x20 + 0x06010000,uVar2);
  puVar11 = (u32 *)piVar9[1];
  if (puVar11 == (u32 *)piVar9[3]) {
    iStack_44 = 1;
    iStack_48 = (int)puVar11 - *piVar9 >> 4;
    piVar7 = &iStack_48;
    if (iStack_48 == 0) {
      piVar7 = &iStack_44;
    }
    puStack_2c = puVar11;
    if (iStack_48 + *piVar7 == 0) {
      puStack_28 = (u32 *)0x0;
      iVar4 = 0;
    }
    else {
      iVar4 = (iStack_48 + *piVar7) * 0x10;
      puStack_28 = (u32 *)LibC_malloc(iVar4);
      if (puStack_28 == (u32 *)0x0) {
        puStack_28 = (u32 *)code_linkonce_Sub_080D3BC0(iVar4);
      }
    }
    puVar8 = puStack_28;
    for (puVar11 = (u32 *)*piVar9; puVar11 != puStack_2c; puVar11 = puVar11 + 4) {
      if (puVar8 != (u32 *)0x0) {
        uVar3 = puVar11[1];
        uVar13 = puVar11[2];
        *puVar8 = *puVar11;
        puVar8[1] = uVar3;
        puVar8[2] = uVar13;
        puVar8[3] = puVar11[3];
      }
      puVar8 = puVar8 + 4;
    }
    iVar12 = iStack_44;
    if (iStack_44 == 1) {
      if (puVar8 != (u32 *)0x0) {
        *puVar8 = auStack_a8[0x10];
        puVar8[1] = uStack_64;
        puVar8[2] = uStack_60;
        puVar8[3] = uStack_5c;
      }
      puVar8 = puVar8 + 4;
    }
    else {
      for (; iVar12 != 0; iVar12 = iVar12 + -1) {
        if (puVar8 != (u32 *)0x0) {
          *puVar8 = auStack_a8[0x10];
          puVar8[1] = uStack_64;
          puVar8[2] = uStack_60;
          puVar8[3] = uStack_5c;
        }
        puVar8 = puVar8 + 4;
      }
    }
    for (iVar12 = *piVar9; iVar12 != piVar9[1]; iVar12 = iVar12 + 0x10) {
    }
    if (*piVar9 != 0) {
      LibC_free();
    }
    *piVar9 = (int)puStack_28;
    piVar9[1] = (int)puVar8;
    piVar9[3] = (int)puStack_28 + iVar4;
  }
  else {
    if (puVar11 != (u32 *)0x0) {
      *puVar11 = auStack_a8[0x10];
      puVar11[1] = uStack_64;
      puVar11[2] = uStack_60;
      puVar11[3] = uStack_5c;
    }
    piVar9[1] = piVar9[1] + 0x10;
  }
  piVar9 = (int *)hardware_GetField_0x00_8910(param_1);
  piVar7 = (int *)(0x00000AB8 + param_1);
  iVar12 = *piVar7;
  iVar4 = hardware_Sub_080074C0(iStack_30,*(u32 *)(iStack_30 + 4));
  uVar2 = 0;
  if (*piVar7 != 0) {
    uVar2 = (u16)piVar7[1];
  }
  hardware_Sub_08008F0C(auStack_a8 + 0x10,iVar12,iVar4 * 0x20 + 0x05000200,uVar2);
  puVar11 = (u32 *)piVar9[1];
  if (puVar11 == (u32 *)piVar9[3]) {
    iStack_3c = 1;
    iStack_40 = (int)puVar11 - *piVar9 >> 4;
    piVar7 = &iStack_40;
    if (iStack_40 == 0) {
      piVar7 = &iStack_3c;
    }
    puStack_2c = puVar11;
    if (iStack_40 + *piVar7 == 0) {
      puVar11 = (u32 *)0x0;
      iVar4 = 0;
    }
    else {
      iVar4 = (iStack_40 + *piVar7) * 0x10;
      puVar11 = (u32 *)LibC_malloc(iVar4);
      if (puVar11 == (u32 *)0x0) {
        puVar11 = (u32 *)code_linkonce_Sub_080D3BC0(iVar4);
      }
    }
    puVar8 = puVar11;
    for (puVar6 = (u32 *)*piVar9; puVar6 != puStack_2c; puVar6 = puVar6 + 4) {
      if (puVar8 != (u32 *)0x0) {
        uVar3 = puVar6[1];
        uVar13 = puVar6[2];
        *puVar8 = *puVar6;
        puVar8[1] = uVar3;
        puVar8[2] = uVar13;
        puVar8[3] = puVar6[3];
      }
      puVar8 = puVar8 + 4;
    }
    iVar12 = iStack_3c;
    if (iStack_3c == 1) {
      if (puVar8 != (u32 *)0x0) {
        *puVar8 = auStack_a8[0x10];
        puVar8[1] = uStack_64;
        puVar8[2] = uStack_60;
        puVar8[3] = uStack_5c;
      }
      puVar8 = puVar8 + 4;
    }
    else {
      for (; iVar12 != 0; iVar12 = iVar12 + -1) {
        if (puVar8 != (u32 *)0x0) {
          *puVar8 = auStack_a8[0x10];
          puVar8[1] = uStack_64;
          puVar8[2] = uStack_60;
          puVar8[3] = uStack_5c;
        }
        puVar8 = puVar8 + 4;
      }
    }
    for (iVar12 = *piVar9; iVar12 != piVar9[1]; iVar12 = iVar12 + 0x10) {
    }
    puStack_28 = puVar11;
    if (*piVar9 != 0) {
      LibC_free();
    }
    *piVar9 = (int)puStack_28;
    piVar9[1] = (int)puVar8;
    piVar9[3] = (int)puStack_28 + iVar4;
  }
  else {
    if (puVar11 != (u32 *)0x0) {
      *puVar11 = auStack_a8[0x10];
      puVar11[1] = uStack_64;
      puVar11[2] = uStack_60;
      puVar11[3] = uStack_5c;
    }
    piVar9[1] = piVar9[1] + 0x10;
  }
  puVar8 = (u32 *)(0x00000ACC + param_1);
  puVar11 = *(u32 **)(0x00000AC8 + param_1);
  func_080D3918(auStack_a8 + 0x10,(int *)*puVar11,
                  *(u16 *)(puVar11[1] + (u32)*(u16 *)(puVar11 + 3) * 4),
                  *(u32 *)(*(int *)*puVar11 + 0x10));
  LibC_memcpy(auStack_a8 + 0x10,auStack_a8 + 0x10,0x20);
  *puVar8 = auStack_a8[0x10];
  puVar8[1] = uStack_64;
  puVar8[2] = uStack_60;
  puVar8[3] = uStack_5c;
  puVar8[4] = uStack_58;
  puVar8[5] = uStack_54;
  puVar8[6] = uStack_50;
  puVar8[7] = uStack_4c;
  piVar9 = (int *)hardware_GetField_0x00_8910(param_1);
  piVar7 = (int *)(0x00000AD4 + param_1);
  iVar12 = *piVar7;
  iVar4 = hardware_Sub_08007D4C(auStack_b0,uStack_ac);
  uVar2 = 0;
  if (*piVar7 != 0) {
    uVar2 = (u16)piVar7[1];
  }
  hardware_Sub_08008F0C(auStack_a8 + 0x10,iVar12,iVar4 * 0x20 + 0x06010000,uVar2);
  puVar11 = (u32 *)piVar9[1];
  if (puVar11 == (u32 *)piVar9[3]) {
    iStack_34 = 1;
    iStack_38 = (int)puVar11 - *piVar9 >> 4;
    piVar7 = &iStack_38;
    if (iStack_38 == 0) {
      piVar7 = &iStack_34;
    }
    puStack_2c = puVar11;
    if (iStack_38 + *piVar7 == 0) {
      puStack_24 = (u32 *)0x0;
      iVar4 = 0;
    }
    else {
      iVar4 = (iStack_38 + *piVar7) * 0x10;
      puStack_24 = (u32 *)LibC_malloc(iVar4);
      if (puStack_24 == (u32 *)0x0) {
        puStack_24 = (u32 *)code_linkonce_Sub_080D3BC0(iVar4);
      }
    }
    puVar8 = puStack_24;
    for (puVar11 = (u32 *)*piVar9; puVar11 != puStack_2c; puVar11 = puVar11 + 4) {
      if (puVar8 != (u32 *)0x0) {
        uVar3 = puVar11[1];
        uVar13 = puVar11[2];
        *puVar8 = *puVar11;
        puVar8[1] = uVar3;
        puVar8[2] = uVar13;
        puVar8[3] = puVar11[3];
      }
      puVar8 = puVar8 + 4;
    }
    iVar12 = iStack_34;
    if (iStack_34 == 1) {
      if (puVar8 != (u32 *)0x0) {
        *puVar8 = auStack_a8[0x10];
        puVar8[1] = uStack_64;
        puVar8[2] = uStack_60;
        puVar8[3] = uStack_5c;
      }
      puVar8 = puVar8 + 4;
    }
    else {
      for (; iVar12 != 0; iVar12 = iVar12 + -1) {
        if (puVar8 != (u32 *)0x0) {
          *puVar8 = auStack_a8[0x10];
          puVar8[1] = uStack_64;
          puVar8[2] = uStack_60;
          puVar8[3] = uStack_5c;
        }
        puVar8 = puVar8 + 4;
      }
    }
    for (iVar12 = *piVar9; iVar12 != piVar9[1]; iVar12 = iVar12 + 0x10) {
    }
    if (*piVar9 != 0) {
      LibC_free();
    }
    *piVar9 = (int)puStack_24;
    piVar9[1] = (int)puVar8;
    piVar9[3] = (int)puStack_24 + iVar4;
  }
  else {
    if (puVar11 != (u32 *)0x0) {
      *puVar11 = auStack_a8[0x10];
      puVar11[1] = uStack_64;
      puVar11[2] = uStack_60;
      puVar11[3] = uStack_5c;
    }
    piVar9[1] = piVar9[1] + 0x10;
  }
  uVar14 = 0;
  piVar9 = (int *)(0x00000AEC + param_1);
  puVar10 = (u16 *)(0xFFFFFE8A + param_1);
  iVar4 = 0;
  do {
    puVar5 = (u16 *)CppRuntime_builtin_new(0x1c);
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[6] = 0;
    puVar5[7] = 0;
    *(u8 *)(puVar5 + 8) = 0;
    *(u8 *)((int)puVar5 + 0x11) = 0;
    puVar5[10] = 0;
    puVar5[0xb] = 0;
    *(u8 *)(puVar5 + 0xc) = 0;
    if (puVar5 != (u16 *)*piVar9) {
      CppRuntime_builtin_delete();
    }
    *piVar9 = (int)puVar5;
    if (uVar14 < 8) {
      *puVar5 = (u16)auStack_a8[uVar14 * 2];
      puVar5[1] = (u16)auStack_a8[uVar14 * 2 + 1];
      uVar1 = hardware_Sub_08007D4C(auStack_b0,uStack_ac);
      puVar5[3] = uVar1;
      iVar12 = *piVar9;
      uVar2 = hardware_Sub_080074C0(iStack_30,*(u32 *)(iStack_30 + 4));
      *(u16 *)(iVar12 + 4) = uVar2;
      *(u16 *)(*piVar9 + 8) = 2;
      uVar3 = hardware_GetField_0x00_8920(param_1);
      iVar12 = *(int *)(0x00000ACC + param_1);
      uVar2 = 0;
      if (iVar12 != 0) {
        uVar2 = (u16)((int *)(0x00000ACC + param_1))[1];
      }
      code_0803EE94_Sub_0805E99C(uVar3,iVar12,uVar2,*(u32 *)(iVar4 + param_1 + 0x00000AEC));
    }
    else {
      *puVar5 = *puVar10 >> 8;
      puVar5[1] = puVar10[1] >> 8;
      uVar1 = hardware_Sub_08007D4C(auStack_b8,uStack_b4);
      puVar5[3] = uVar1;
      iVar12 = *piVar9;
      uVar2 = hardware_Sub_080074C0(iStack_30,*(u32 *)(iStack_30 + 4));
      *(u16 *)(iVar12 + 4) = uVar2;
      *(u16 *)*piVar9 = *puVar10 >> 8;
      *(u16 *)(*piVar9 + 2) = puVar10[1] >> 8;
      *(u16 *)(*piVar9 + 8) = (u16)*(u8 *)((int)puVar10 + 0xb);
      uVar3 = hardware_GetField_0x00_8920(param_1);
      iVar12 = *(int *)(0x00000AA8 + param_1);
      uVar2 = 0;
      if (iVar12 != 0) {
        uVar2 = (u16)((int *)(0x00000AA8 + param_1))[1];
      }
      code_0803EE94_Sub_0805E99C(uVar3,iVar12,uVar2,*(u32 *)(iVar4 + param_1 + 0x00000AEC));
    }
    iVar12 = *piVar9;
    piVar9 = piVar9 + 1;
    *(u8 *)(iVar12 + 0x18) = 1;
    puVar10 = puVar10 + 0x20;
    iVar4 = iVar4 + 4;
    uVar14 = uVar14 + 1;
  } while (uVar14 < 10);
  hardware_Sub_08007C28(auStack_b0,uStack_ac);
  hardware_Sub_080079E8(auStack_b0,2);
  hardware_Sub_08007C28(auStack_b8,uStack_b4);
  hardware_Sub_080079E8(auStack_b8,2);
  hardware_Sub_080073E0(iStack_30,*(u32 *)(iStack_30 + 4));
  hardware_Sub_08007184(iStack_30,2);
}

/* 0x080BCEBC (12B) | hardware_Wrap_Ctor_CEBC (orig: func_080BCEBC) | origin: pure | domain: hardware | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 hardware_Ctor();
void hardware_Wrap_Ctor_CEBC(void) {
  hardware_Ctor();
}

/* 0x080BCEC8 (228B) | hardware_Sub_080BCEC8 (orig: func_080BCEC8) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
void hardware_Sub_080BCEC8(int param_1) {
  u32 uVar1;
  hardware_Sub_08007C28(param_1 + 0x5b0,*(u32 *)(param_1 + 0x5b4));
  uVar1 = hardware_Sub_08007B54(param_1 + 0x5b0,3);
  *(u32 *)(param_1 + 0x5b4) = uVar1;
  hardware_Sub_08007C28(param_1 + 0x5b8,*(u32 *)(param_1 + 0x5bc));
  uVar1 = hardware_Sub_08007B54(param_1 + 0x5b8,6);
  *(u32 *)(param_1 + 0x5bc) = uVar1;
  hardware_Sub_08007C28(param_1 + 0x5c0,*(u32 *)(param_1 + 0x5c4));
  uVar1 = hardware_Sub_08007B54(param_1 + 0x5c0,2);
  *(u32 *)(param_1 + 0x5c4) = uVar1;
  hardware_Sub_08007C28(param_1 + 0x5c8,*(u32 *)(param_1 + 0x5cc));
  uVar1 = hardware_Sub_08007B54(param_1 + 0x5c8,5);
  *(u32 *)(param_1 + 0x5cc) = uVar1;
  hardware_Sub_08007C28(param_1 + 0x5d0,*(u32 *)(param_1 + 0x5d4));
  uVar1 = hardware_Sub_08007B54(param_1 + 0x5d0,5);
  *(u32 *)(param_1 + 0x5d4) = uVar1;
  hardware_Sub_08007C28(param_1 + 0x5d8,*(u32 *)(param_1 + 0x5dc));
  uVar1 = hardware_Sub_08007B54(param_1 + 0x5d8,2);
  *(u32 *)(param_1 + 0x5dc) = uVar1;
  hardware_Sub_08007C28(param_1 + 0x5f0,*(u32 *)(param_1 + 0x5f4));
  uVar1 = hardware_Sub_08007B54(param_1 + 0x5f0,4);
  *(u32 *)(param_1 + 0x5f4) = uVar1;
  hardware_Sub_08007C28(param_1 + 0x5e8,*(u32 *)(param_1 + 0x5ec));
  uVar1 = hardware_Sub_08007B54(param_1 + 0x5e8,2);
  *(u32 *)(param_1 + 0x5ec) = uVar1;
  hardware_Sub_08007C28(param_1 + 0x5e0,*(u32 *)(param_1 + 0x5e4));
  uVar1 = hardware_Sub_08007B54(param_1 + 0x5e0,6);
  *(u32 *)(param_1 + 0x5e4) = uVar1;
}

/* 0x080BCFAC (184B) | hardware_Sub_080BCFAC (orig: func_080BCFAC) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
void hardware_Sub_080BCFAC(u32 param_1) {
  u32 uVar2;
  u32 uVar1;
  u16 *puVar3;
  s8 iVar4;
  uVar1 = (s16)0x0600F000;
  hardware_HW_DMA3SAD_8EB8(0xffffffff,0x0600F000,0x800);
  uVar2 = (u32)0x0600F800;
  hardware_HW_DMA3SAD_8EB8(0xffffffff,0x0600F800,0x800);
  System_UnpackData(0x0873BE24,uVar2);
  System_UnpackData(0x0873BF48,uVar1);
  System_UnpackData(0x0873BFF0,0x6000000);
  hardware_HW_DMA3SAD(0x0873CBF4,0x5000000,0x200);
  puVar3 = (s8)(u16 *)hardware_GetField_0x00_8918(param_1);
  *puVar3 = 0x1640;
  iVar4 = hardware_GetField_0x00_8918(param_1);
  *(short *)(10 + iVar4) = (short)0x00001E41;
  iVar4 = hardware_GetField_0x00_8918(param_1);
  *(short *)(iVar4 + 0xc) = (short)0x00001F42;
}

/* 0x080BDF40 (2024B) | hardware_Sub_080BDF40 (orig: func_080BDF40) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
void hardware_Sub_080BDF40(int param_1) {
  u8 bVar1;
  u16 uVar2;
  u8 *pbVar3;
  u32 uVar4;
  u32 *puVar5;
  u32 *puVar6;
  u32 *puVar7;
  int *piVar8;
  int iVar9;
  char *pcVar10;
  int iVar11;
  u32 uVar12;
  u32 uStack_68;
  u32 uStack_64;
  u32 uStack_60;
  u32 uStack_5c;
  u32 uStack_58;
  u32 uStack_54;
  u32 uStack_50;
  u32 uStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int *piStack_28;
  u32 *puStack_24;
  if (*(char *)(param_1 + 0x0000060B) != '\0') {
    puVar7 = (u32 *)(param_1 + 0x448);
    iVar9 = 2;
    do {
      pbVar3 = (u8 *)hardware_GetField_0x00_8920(param_1);
      bVar1 = *pbVar3;
      if (bVar1 < 0x80) {
        *(u32 *)(pbVar3 + (u32)bVar1 * 8 + 4) = *puVar7;
        *(u16 *)(pbVar3 + (u32)bVar1 * 8 + 4 + 4) = *(u16 *)(puVar7 + 1);
        *pbVar3 = bVar1 + 1;
      }
      puVar7 = puVar7 + 2;
      iVar9 = iVar9 + -1;
    } while (-1 < iVar9);
  }
  pbVar3 = (u8 *)hardware_GetField_0x00_8920(param_1);
  bVar1 = *pbVar3;
  if (bVar1 < 0x80) {
    *(u32 *)(pbVar3 + (u32)bVar1 * 8 + 4) = *(u32 *)(param_1 + 0x440);
    *(u16 *)(pbVar3 + (u32)bVar1 * 8 + 4 + 4) = *(u16 *)(param_1 + 0x00000444);
    *pbVar3 = bVar1 + 1;
  }
  if ((*(int *)(param_1 + 0x000005A4) - 2U < 2) || (*(int *)(param_1 + 0x5a0) == 2)) {
    uVar4 = hardware_GetField_0x00_8920(param_1);
    uVar2 = 0;
    if (*(int *)(param_1 + 0x468) != 0) {
      uVar2 = *(u16 *)(param_1 + 0x46c);
    }
    code_0803EE94_Sub_0805E99C(uVar4,*(int *)(param_1 + 0x468),uVar2,*(u32 *)(param_1 + 0x00000464));
  }
  if (*(char *)(param_1 + 0x0000060B) != '\0') {
    uVar4 = hardware_GetField_0x00_8920(param_1);
    uVar2 = 0;
    if (*(int *)(param_1 + 0x490) != 0) {
      uVar2 = *(u16 *)(param_1 + 0x494);
    }
    code_0803EE94_Sub_0805E99C(uVar4,*(int *)(param_1 + 0x490),uVar2,*(u32 *)(param_1 + 0x0000048C));
  }
  uVar4 = hardware_GetField_0x00_8920(param_1);
  uVar2 = 0;
  if (*(int *)(param_1 + 0x4b8) != 0) {
    uVar2 = *(u16 *)(param_1 + 0x4bc);
  }
  code_0803EE94_Sub_0805E99C(uVar4,*(int *)(param_1 + 0x4b8),uVar2,*(u32 *)(param_1 + 0x000004B4));
  if (*(int *)(param_1 + 0x5a0) - 4U < 2) {
    if (*(char *)(param_1 + 0x0000060B) != '\0') {
      uVar4 = hardware_GetField_0x00_8920(param_1);
      uVar2 = 0;
      if (*(int *)(param_1 + 0x530) != 0) {
        uVar2 = *(u16 *)(param_1 + 0x534);
      }
      code_0803EE94_Sub_0805E99C(uVar4,*(int *)(param_1 + 0x530),uVar2,*(u32 *)(param_1 + 0x0000052C));
    }
  }
  else {
    iVar9 = code_0803EE94_Sub_0805E8F0(*(int *)(param_1 + 0x528));
    if (iVar9 * 0x40000000 < 0) {
      puVar7 = *(u32 **)(param_1 + 0x528);
      func_080D3918(&uStack_68,(int *)*puVar7,
                      *(u16 *)(puVar7[1] + (u32)*(u16 *)(puVar7 + 3) * 4),
                      *(u32 *)(*(int *)*puVar7 + 0x10));
      LibC_memcpy(&uStack_68,&uStack_68,0x20);
      *(u32 *)(param_1 + 0x530) = uStack_68;
      *(u32 *)(param_1 + 0x534) = uStack_64;
      *(u32 *)(param_1 + 0x538) = uStack_60;
      *(u32 *)(param_1 + 0x53c) = uStack_5c;
      *(u32 *)(param_1 + 0x540) = uStack_58;
      *(u32 *)(param_1 + 0x544) = uStack_54;
      *(u32 *)(param_1 + 0x548) = uStack_50;
      *(u32 *)(param_1 + 0x54c) = uStack_4c;
      piVar8 = (int *)hardware_GetField_0x00_8910(param_1);
      iVar11 = *(int *)(param_1 + 0x538);
      iVar9 = hardware_Sub_08007D4C(param_1 + 0x5d8,*(u32 *)(param_1 + 0x5dc));
      uVar2 = 0;
      if (*(int *)(param_1 + 0x538) != 0) {
        uVar2 = *(u16 *)(param_1 + 0x53c);
      }
      piStack_28 = piVar8;
      hardware_Sub_08008F0C(&uStack_68,iVar11,iVar9 * 0x20 + 0x06010000,uVar2);
      puVar7 = (u32 *)piVar8[1];
      if (puVar7 == (u32 *)piVar8[3]) {
        iStack_44 = 1;
        iStack_48 = (int)puVar7 - *piStack_28 >> 4;
        piVar8 = &iStack_48;
        if (iStack_48 == 0) {
          piVar8 = &iStack_44;
        }
        puStack_24 = puVar7;
        if (iStack_48 + *piVar8 == 0) {
          puVar7 = (u32 *)0x0;
          iVar9 = 0;
        }
        else {
          iVar9 = (iStack_48 + *piVar8) * 0x10;
          puVar7 = (u32 *)LibC_malloc(iVar9);
          if (puVar7 == (u32 *)0x0) {
            puVar7 = (u32 *)code_linkonce_Sub_080D3BC0(iVar9);
          }
        }
        puVar6 = puVar7;
        for (puVar5 = (u32 *)*piStack_28; puVar5 != puStack_24; puVar5 = puVar5 + 4) {
          if (puVar6 != (u32 *)0x0) {
            uVar4 = puVar5[1];
            uVar12 = puVar5[2];
            *puVar6 = *puVar5;
            puVar6[1] = uVar4;
            puVar6[2] = uVar12;
            puVar6[3] = puVar5[3];
          }
          puVar6 = puVar6 + 4;
        }
        iVar11 = iStack_44;
        if (iStack_44 == 1) {
          if (puVar6 != (u32 *)0x0) {
            *puVar6 = uStack_68;
            puVar6[1] = uStack_64;
            puVar6[2] = uStack_60;
            puVar6[3] = uStack_5c;
          }
          puVar6 = puVar6 + 4;
        }
        else {
          for (; iVar11 != 0; iVar11 = iVar11 + -1) {
            if (puVar6 != (u32 *)0x0) {
              *puVar6 = uStack_68;
              puVar6[1] = uStack_64;
              puVar6[2] = uStack_60;
              puVar6[3] = uStack_5c;
            }
            puVar6 = puVar6 + 4;
          }
        }
        for (iVar11 = *piStack_28; iVar11 != piStack_28[1]; iVar11 = iVar11 + 0x10) {
        }
        if (*piStack_28 != 0) {
          LibC_free();
        }
        *piStack_28 = (int)puVar7;
        piStack_28[1] = (int)puVar6;
        piStack_28[3] = iVar9 + (int)puVar7;
      }
      else {
        if (puVar7 != (u32 *)0x0) {
          *puVar7 = uStack_68;
          puVar7[1] = uStack_64;
          puVar7[2] = uStack_60;
          puVar7[3] = uStack_5c;
        }
        piStack_28[1] = piStack_28[1] + 0x10;
      }
      piVar8 = (int *)hardware_GetField_0x00_8910(param_1);
      uVar2 = 0;
      if (*(int *)(param_1 + 0x540) != 0) {
        uVar2 = *(u16 *)(param_1 + 0x544);
      }
      piStack_28 = piVar8;
      hardware_Sub_08008F0C(&uStack_68,*(int *)(param_1 + 0x540),0x050002C0,uVar2);
      puVar7 = (u32 *)piVar8[1];
      if (puVar7 == (u32 *)piVar8[3]) {
        iStack_3c = 1;
        iStack_40 = (int)puVar7 - *piStack_28 >> 4;
        piVar8 = &iStack_40;
        if (iStack_40 == 0) {
          piVar8 = &iStack_3c;
        }
        puStack_24 = puVar7;
        if (iStack_40 + *piVar8 == 0) {
          puVar7 = (u32 *)0x0;
          iVar9 = 0;
        }
        else {
          iVar9 = (iStack_40 + *piVar8) * 0x10;
          puVar7 = (u32 *)LibC_malloc(iVar9);
          if (puVar7 == (u32 *)0x0) {
            puVar7 = (u32 *)code_linkonce_Sub_080D3BC0(iVar9);
          }
        }
        puVar5 = puVar7;
        for (puVar6 = (u32 *)*piStack_28; puVar6 != puStack_24; puVar6 = puVar6 + 4) {
          if (puVar5 != (u32 *)0x0) {
            uVar4 = puVar6[1];
            uVar12 = puVar6[2];
            *puVar5 = *puVar6;
            puVar5[1] = uVar4;
            puVar5[2] = uVar12;
            puVar5[3] = puVar6[3];
          }
          puVar5 = puVar5 + 4;
        }
        iVar11 = iStack_3c;
        if (iStack_3c == 1) {
          if (puVar5 != (u32 *)0x0) {
            *puVar5 = uStack_68;
            puVar5[1] = uStack_64;
            puVar5[2] = uStack_60;
            puVar5[3] = uStack_5c;
          }
          puVar5 = puVar5 + 4;
        }
        else {
          for (; iVar11 != 0; iVar11 = iVar11 + -1) {
            if (puVar5 != (u32 *)0x0) {
              *puVar5 = uStack_68;
              puVar5[1] = uStack_64;
              puVar5[2] = uStack_60;
              puVar5[3] = uStack_5c;
            }
            puVar5 = puVar5 + 4;
          }
        }
        for (iVar11 = *piStack_28; iVar11 != piStack_28[1]; iVar11 = iVar11 + 0x10) {
        }
        if (*piStack_28 != 0) {
          LibC_free();
        }
        *piStack_28 = (int)puVar7;
        piStack_28[1] = (int)puVar5;
        piStack_28[3] = iVar9 + (int)puVar7;
      }
      else {
        if (puVar7 != (u32 *)0x0) {
          *puVar7 = uStack_68;
          puVar7[1] = uStack_64;
          puVar7[2] = uStack_60;
          puVar7[3] = uStack_5c;
        }
        piStack_28[1] = piStack_28[1] + 0x10;
      }
    }
    if (*(int *)(param_1 + 0x000005AC) == 3) {
      uVar4 = hardware_GetField_0x00_8920(param_1);
      uVar2 = 0;
      if (*(int *)(param_1 + 0x530) != 0) {
        uVar2 = *(u16 *)(param_1 + 0x534);
      }
      code_0803EE94_Sub_0805E99C(uVar4,*(int *)(param_1 + 0x530),uVar2,*(u32 *)(param_1 + 0x0000052C));
    }
  }
  if ((*(int *)(param_1 + 0x5a0) == 3) || (*(int *)(param_1 + 0x5a0) == 0)) {
    pcVar10 = (char *)(param_1 + 0x0000060E);
    if (*pcVar10 != '\0') {
      uVar4 = *(u32 *)(param_1 + 0x4d8);
      uVar2 = hardware_Sub_080C09D8(param_1);
      code_0803EE94_Sub_0805E860(uVar4,uVar2);
      *pcVar10 = '\0';
    }
  }
  else {
    uVar4 = *(u32 *)(param_1 + 0x4d8);
    uVar2 = hardware_Sub_080C09D8(param_1);
    code_0803EE94_Sub_0805E860(uVar4,uVar2);
  }
  iVar9 = code_0803EE94_Sub_0805E8F0(*(int *)(param_1 + 0x4d8));
  if (iVar9 * 0x40000000 < 0) {
    puVar7 = *(u32 **)(param_1 + 0x4d8);
    func_080D3918(&uStack_68,(int *)*puVar7,
                    *(u16 *)(puVar7[1] + (u32)*(u16 *)(puVar7 + 3) * 4),
                    *(u32 *)(*(int *)*puVar7 + 0x10));
    LibC_memcpy(&uStack_68,&uStack_68,0x20);
    *(u32 *)(param_1 + 0x4e0) = uStack_68;
    *(u32 *)(param_1 + 0x4e4) = uStack_64;
    *(u32 *)(param_1 + 0x4e8) = uStack_60;
    *(u32 *)(param_1 + 0x4ec) = uStack_5c;
    *(u32 *)(param_1 + 0x4f0) = uStack_58;
    *(u32 *)(param_1 + 0x4f4) = uStack_54;
    *(u32 *)(param_1 + 0x4f8) = uStack_50;
    *(u32 *)(param_1 + 0x4fc) = uStack_4c;
    piVar8 = (int *)hardware_GetField_0x00_8910(param_1);
    iVar11 = *(int *)(param_1 + 0x4e8);
    iVar9 = hardware_Sub_08007D4C(param_1 + 0x5f0,*(u32 *)(param_1 + 0x5f4));
    uVar2 = 0;
    if (*(int *)(param_1 + 0x4e8) != 0) {
      uVar2 = *(u16 *)(param_1 + 0x4ec);
    }
    piStack_28 = piVar8;
    hardware_Sub_08008F0C(&uStack_68,iVar11,iVar9 * 0x20 + 0x06010000,uVar2);
    puVar7 = (u32 *)piVar8[1];
    if (puVar7 == (u32 *)piVar8[3]) {
      iStack_34 = 1;
      iStack_38 = (int)puVar7 - *piStack_28 >> 4;
      piVar8 = &iStack_38;
      if (iStack_38 == 0) {
        piVar8 = &iStack_34;
      }
      puStack_24 = puVar7;
      if (iStack_38 + *piVar8 == 0) {
        puVar7 = (u32 *)0x0;
        iVar9 = 0;
      }
      else {
        iVar9 = (iStack_38 + *piVar8) * 0x10;
        puVar7 = (u32 *)LibC_malloc(iVar9);
        if (puVar7 == (u32 *)0x0) {
          puVar7 = (u32 *)code_linkonce_Sub_080D3BC0(iVar9);
        }
      }
      puVar6 = puVar7;
      for (puVar5 = (u32 *)*piStack_28; puVar5 != puStack_24; puVar5 = puVar5 + 4) {
        if (puVar6 != (u32 *)0x0) {
          uVar4 = puVar5[1];
          uVar12 = puVar5[2];
          *puVar6 = *puVar5;
          puVar6[1] = uVar4;
          puVar6[2] = uVar12;
          puVar6[3] = puVar5[3];
        }
        puVar6 = puVar6 + 4;
      }
      iVar11 = iStack_34;
      if (iStack_34 == 1) {
        if (puVar6 != (u32 *)0x0) {
          *puVar6 = uStack_68;
          puVar6[1] = uStack_64;
          puVar6[2] = uStack_60;
          puVar6[3] = uStack_5c;
        }
        puVar6 = puVar6 + 4;
      }
      else {
        for (; iVar11 != 0; iVar11 = iVar11 + -1) {
          if (puVar6 != (u32 *)0x0) {
            *puVar6 = uStack_68;
            puVar6[1] = uStack_64;
            puVar6[2] = uStack_60;
            puVar6[3] = uStack_5c;
          }
          puVar6 = puVar6 + 4;
        }
      }
      for (iVar11 = *piStack_28; iVar11 != piStack_28[1]; iVar11 = iVar11 + 0x10) {
      }
      if (*piStack_28 != 0) {
        LibC_free();
      }
      *piStack_28 = (int)puVar7;
      piStack_28[1] = (int)puVar6;
      piStack_28[3] = iVar9 + (int)puVar7;
    }
    else {
      if (puVar7 != (u32 *)0x0) {
        *puVar7 = uStack_68;
        puVar7[1] = uStack_64;
        puVar7[2] = uStack_60;
        puVar7[3] = uStack_5c;
      }
      piStack_28[1] = piStack_28[1] + 0x10;
    }
    piVar8 = (int *)hardware_GetField_0x00_8910(param_1);
    uVar2 = 0;
    if (*(int *)(param_1 + 0x4f0) != 0) {
      uVar2 = *(u16 *)(param_1 + 0x4f4);
    }
    piStack_28 = piVar8;
    hardware_Sub_08008F0C(&uStack_68,*(int *)(param_1 + 0x4f0),0x05000340,uVar2);
    puVar7 = (u32 *)piVar8[1];
    if (puVar7 == (u32 *)piVar8[3]) {
      iStack_2c = 1;
      iStack_30 = (int)puVar7 - *piStack_28 >> 4;
      piVar8 = &iStack_30;
      if (iStack_30 == 0) {
        piVar8 = &iStack_2c;
      }
      puStack_24 = puVar7;
      if (iStack_30 + *piVar8 == 0) {
        puVar7 = (u32 *)0x0;
        iVar9 = 0;
      }
      else {
        iVar9 = (iStack_30 + *piVar8) * 0x10;
        puVar7 = (u32 *)LibC_malloc(iVar9);
        if (puVar7 == (u32 *)0x0) {
          puVar7 = (u32 *)code_linkonce_Sub_080D3BC0(iVar9);
        }
      }
      puVar5 = puVar7;
      for (puVar6 = (u32 *)*piStack_28; puVar6 != puStack_24; puVar6 = puVar6 + 4) {
        if (puVar5 != (u32 *)0x0) {
          uVar4 = puVar6[1];
          uVar12 = puVar6[2];
          *puVar5 = *puVar6;
          puVar5[1] = uVar4;
          puVar5[2] = uVar12;
          puVar5[3] = puVar6[3];
        }
        puVar5 = puVar5 + 4;
      }
      iVar11 = iStack_2c;
      if (iStack_2c == 1) {
        if (puVar5 != (u32 *)0x0) {
          *puVar5 = uStack_68;
          puVar5[1] = uStack_64;
          puVar5[2] = uStack_60;
          puVar5[3] = uStack_5c;
        }
        puVar5 = puVar5 + 4;
      }
      else {
        for (; iVar11 != 0; iVar11 = iVar11 + -1) {
          if (puVar5 != (u32 *)0x0) {
            *puVar5 = uStack_68;
            puVar5[1] = uStack_64;
            puVar5[2] = uStack_60;
            puVar5[3] = uStack_5c;
          }
          puVar5 = puVar5 + 4;
        }
      }
      for (iVar11 = *piStack_28; iVar11 != piStack_28[1]; iVar11 = iVar11 + 0x10) {
      }
      if (*piStack_28 != 0) {
        LibC_free();
      }
      *piStack_28 = (int)puVar7;
      piStack_28[1] = (int)puVar5;
      piStack_28[3] = iVar9 + (int)puVar7;
    }
    else {
      if (puVar7 != (u32 *)0x0) {
        *puVar7 = uStack_68;
        puVar7[1] = uStack_64;
        puVar7[2] = uStack_60;
        puVar7[3] = uStack_5c;
      }
      piStack_28[1] = piStack_28[1] + 0x10;
    }
  }
  uVar4 = hardware_GetField_0x00_8920(param_1);
  uVar2 = 0;
  if (*(int *)(param_1 + 0x4e0) != 0) {
    uVar2 = *(u16 *)(param_1 + 0x4e4);
  }
  code_0803EE94_Sub_0805E99C(uVar4,*(int *)(param_1 + 0x4e0),uVar2,*(u32 *)(param_1 + 0x000004DC));
  if (*(char *)(param_1 + 0x0000060D) != '\0') {
    piVar8 = (int *)(param_1 + 0x00000504);
    *(u16 *)*piVar8 = (u16)*(u8 *)(param_1 + 0x608);
    *(u16 *)(*piVar8 + 2) = 0x50;
    uVar4 = hardware_GetField_0x00_8920(param_1);
    uVar2 = 0;
    if (*(int *)(param_1 + 0x508) != 0) {
      uVar2 = *(u16 *)(param_1 + 0x50c);
    }
    code_0803EE94_Sub_0805E99C(uVar4,*(int *)(param_1 + 0x508),uVar2,*piVar8);
  }
  if (*(char *)(param_1 + 0x0000060C) != '\0') {
    uVar4 = hardware_GetField_0x00_8920(param_1);
    uVar2 = 0;
    if (*(int *)(param_1 + 0x558) != 0) {
      uVar2 = *(u16 *)(param_1 + 0x55c);
    }
    code_0803EE94_Sub_0805E99C(uVar4,*(int *)(param_1 + 0x558),uVar2,*(u32 *)(param_1 + 0x00000554));
  }
}

/* 0x080BE728 (556B) | hardware_Sub_080BE728 (orig: func_080BE728) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
void hardware_Sub_080BE728(int param_1,int param_2) {
  u8 bVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  u32 *puVar5;
  int iVar6;
  u32 *puVar7;
  u8 *pbVar8;
  u32 uVar9;
  u32 uVar10;
  u8 uStack_54;
  u8 uStack_53;
  u8 auStack_50 [4];
  u32 uStack_4c;
  u32 uStack_48;
  u32 uStack_44;
  u32 uStack_40;
  u32 uStack_3c;
  u32 uStack_38;
  u32 uStack_34;
  int iStack_30;
  int iStack_2c;
  u32 *puStack_28;
  u32 *puStack_24;
  if (param_2 == 0x3c) {
    pbVar8 = (u8 *)(0x000005FD + param_1);
    bVar1 = *pbVar8;
    *pbVar8 = bVar1 - 1;
    if ((u8)(bVar1 - 1) == 9) {
      hardware_Wrap_m4aMPlayTempoControl(param_1 + 0x578,0x180);
    }
    code_0803EE94_Sub_0804EC84(*pbVar8,&uStack_54,0);
    if (*pbVar8 < 10) {
      LibC_memcpy(auStack_50,0x08107DB8,2);
      uStack_53 = uStack_54;
      uStack_54 = 0x30;
    }
    uStack_3c = 0x20004;
    iVar6 = param_1 + 0xc;
    Code_Lib_Syscall_Wrap_CpuFastSet_E7A0(0x20004,iVar6,0);
    if (*pbVar8 < 10) {
      uStack_34 = 0x20004;
      SpriteAnimEngine_Sub_0804E958(0x20004,iVar6,0,0,&uStack_54,0,3);
    }
    else {
      uStack_38 = 0x20004;
      SpriteAnimEngine_Sub_0804E958(0x20004,iVar6,0,0,&uStack_54,0,1);
    }
    piVar2 = (int *)hardware_GetField_0x00_8910(param_1);
    iVar3 = hardware_Sub_08007D4C(param_1 + 0x5b0,*(u32 *)(param_1 + 0x5b4));
    hardware_Sub_08008F0C(&uStack_4c,iVar6,iVar3 * 0x20 + 0x06010000,0x100);
    puVar5 = (u32 *)piVar2[1];
    if (puVar5 == (u32 *)piVar2[3]) {
      iStack_2c = 1;
      iStack_30 = (int)puVar5 - *piVar2 >> 4;
      piVar4 = &iStack_30;
      if (iStack_30 == 0) {
        piVar4 = &iStack_2c;
      }
      puStack_28 = puVar5;
      if (iStack_30 + *piVar4 == 0) {
        puStack_24 = (u32 *)0x0;
        iVar6 = 0;
      }
      else {
        iVar6 = (iStack_30 + *piVar4) * 0x10;
        puStack_24 = (u32 *)LibC_malloc(iVar6);
        if (puStack_24 == (u32 *)0x0) {
          puStack_24 = (u32 *)code_linkonce_Sub_080D3BC0(iVar6);
        }
      }
      puVar7 = puStack_24;
      for (puVar5 = (u32 *)*piVar2; puVar5 != puStack_28; puVar5 = puVar5 + 4) {
        if (puVar7 != (u32 *)0x0) {
          uVar9 = puVar5[1];
          uVar10 = puVar5[2];
          *puVar7 = *puVar5;
          puVar7[1] = uVar9;
          puVar7[2] = uVar10;
          puVar7[3] = puVar5[3];
        }
        puVar7 = puVar7 + 4;
      }
      iVar3 = iStack_2c;
      if (iStack_2c == 1) {
        if (puVar7 != (u32 *)0x0) {
          *puVar7 = uStack_4c;
          puVar7[1] = uStack_48;
          puVar7[2] = uStack_44;
          puVar7[3] = uStack_40;
        }
        puVar7 = puVar7 + 4;
      }
      else {
        for (; iVar3 != 0; iVar3 = iVar3 + -1) {
          if (puVar7 != (u32 *)0x0) {
            *puVar7 = uStack_4c;
            puVar7[1] = uStack_48;
            puVar7[2] = uStack_44;
            puVar7[3] = uStack_40;
          }
          puVar7 = puVar7 + 4;
        }
      }
      for (iVar3 = *piVar2; iVar3 != piVar2[1]; iVar3 = iVar3 + 0x10) {
      }
      if (*piVar2 != 0) {
        LibC_free();
      }
      *piVar2 = (int)puStack_24;
      piVar2[1] = (int)puVar7;
      piVar2[3] = (int)puStack_24 + iVar6;
    }
    else {
      if (puVar5 != (u32 *)0x0) {
        *puVar5 = uStack_4c;
        puVar5[1] = uStack_48;
        puVar5[2] = uStack_44;
        puVar5[3] = uStack_40;
      }
      piVar2[1] = piVar2[1] + 0x10;
    }
    if (*(char *)(0x000005FD + param_1) == '\0') {
      *(u32 *)(param_1 + 0x5a0) = 4;
      *(u32 *)(0x000005AC + param_1) = 0;
      hardware_Wrap_m4aMPlayTempoControl(param_1 + 0x578,0x100);
      hardware_Wrap_m4aMPlayStart(param_1 + 0x580,0xbb);
    }
  }
}

/* 0x080BF2EC (92B) | hardware_Sub_080BF2EC (orig: func_080BF2EC) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
void hardware_Sub_080BF2EC(s8 param_1) {
  register u16 *puVar1;
  register int iVar2;
  iVar2 = 0;
  puVar1 = (u16 *)hardware_GetField_0x00_8918();
  *puVar1 = 0x1640;
  hardware_Sub_080BDF40(param_1);
  hardware_Wrap_m4aMPlayStart(param_1 + 0x580,0xbb);
  if (*(int *)(param_1 + 0x5a0) == 2) {
    do {
      hardware_Ctor_87C8(param_1);
      hardware_Sub_080BDF40(param_1);
      iVar2 = iVar2 + 1;
      if (0x78 < iVar2) {
        *(int *)(param_1 + 0x5a0) = 3;
      }
    } while (*(int *)(param_1 + 0x5a0) == 2);
  }
}

/* 0x080BF348 (1052B) | hardware_Sub_080BF348 (orig: func_080BF348) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
void hardware_Sub_080BF348(int param_1) {
  u32 uVar1;
  int iVar2;
  u32 *puVar3;
  u32 uVar4;
  u32 *puVar5;
  u32 *puVar6;
  char *pcVar7;
  u16 uVar8;
  int *piVar9;
  int iVar10;
  u32 uVar11;
  u32 uStack_64;
  u32 uStack_60;
  u32 uStack_5c;
  u32 uStack_58;
  u32 uStack_54;
  u32 uStack_50;
  u32 uStack_4c;
  u32 uStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  u32 uStack_2c;
  int *piStack_28;
  u32 *puStack_24;
  iStack_30 = 0;
  iStack_34 = 0;
  uStack_2c = 0x8500;
  uVar1 = CppRuntime_builtin_new(0x14);
  iVar2 = code_0803EE94_Sub_0805E824(uVar1,*(u32 *)(param_1 + 0x420),0,0x100);
  piVar9 = (int *)(param_1 + 0x460);
  if (iVar2 != *piVar9) {
    CppRuntime_builtin_delete();
  }
  *piVar9 = iVar2;
  code_0803EE94_Sub_0805E860(iVar2,0);
  puVar3 = (u32 *)*piVar9;
  func_080D3918(&uStack_64,(int *)*puVar3,
                  *(u16 *)(puVar3[1] + (u32)*(u16 *)(puVar3 + 3) * 4),
                  *(u32 *)(*(int *)*puVar3 + 0x10));
  LibC_memcpy(&uStack_64,&uStack_64,0x20);
  *(u32 *)(param_1 + 0x468) = uStack_64;
  *(u32 *)(param_1 + 0x46c) = uStack_60;
  *(u32 *)(param_1 + 0x470) = uStack_5c;
  *(u32 *)(param_1 + 0x474) = uStack_58;
  *(u32 *)(param_1 + 0x478) = uStack_54;
  *(u32 *)(param_1 + 0x47c) = uStack_50;
  *(u32 *)(param_1 + 0x480) = uStack_4c;
  *(u32 *)(param_1 + 0x484) = uStack_48;
  piVar9 = (int *)hardware_GetField_0x00_8910(param_1);
  iVar10 = *(int *)(param_1 + 0x470);
  iVar2 = hardware_Sub_08007D4C(param_1 + 0x5b8,*(u32 *)(param_1 + 0x5bc));
  uVar8 = 0;
  if (*(int *)(param_1 + 0x470) != 0) {
    uVar8 = *(u16 *)(param_1 + 0x474);
  }
  piStack_28 = piVar9;
  hardware_Sub_08008F0C(&uStack_64,iVar10,iVar2 * 0x20 + 0x06010000,uVar8);
  puVar3 = (u32 *)piVar9[1];
  if (puVar3 == (u32 *)piVar9[3]) {
    iStack_40 = 1;
    iStack_44 = (int)puVar3 - *piStack_28 >> 4;
    piVar9 = &iStack_44;
    if (iStack_44 == 0) {
      piVar9 = &iStack_40;
    }
    puStack_24 = puVar3;
    if (iStack_44 + *piVar9 == 0) {
      puVar3 = (u32 *)0x0;
      iVar2 = 0;
    }
    else {
      iVar2 = (iStack_44 + *piVar9) * 0x10;
      puVar3 = (u32 *)LibC_malloc(iVar2);
      if (puVar3 == (u32 *)0x0) {
        puVar3 = (u32 *)code_linkonce_Sub_080D3BC0(iVar2);
      }
    }
    puVar6 = puVar3;
    for (puVar5 = (u32 *)*piStack_28; puVar5 != puStack_24; puVar5 = puVar5 + 4) {
      if (puVar6 != (u32 *)0x0) {
        uVar1 = puVar5[1];
        uVar11 = puVar5[2];
        *puVar6 = *puVar5;
        puVar6[1] = uVar1;
        puVar6[2] = uVar11;
        puVar6[3] = puVar5[3];
      }
      puVar6 = puVar6 + 4;
    }
    iVar10 = iStack_40;
    if (iStack_40 == 1) {
      if (puVar6 != (u32 *)0x0) {
        *puVar6 = uStack_64;
        puVar6[1] = uStack_60;
        puVar6[2] = uStack_5c;
        puVar6[3] = uStack_58;
      }
      puVar6 = puVar6 + 4;
    }
    else {
      for (; iVar10 != 0; iVar10 = iVar10 + -1) {
        if (puVar6 != (u32 *)0x0) {
          *puVar6 = uStack_64;
          puVar6[1] = uStack_60;
          puVar6[2] = uStack_5c;
          puVar6[3] = uStack_58;
        }
        puVar6 = puVar6 + 4;
      }
    }
    for (iVar10 = *piStack_28; iVar10 != piStack_28[1]; iVar10 = iVar10 + 0x10) {
    }
    if (*piStack_28 != 0) {
      LibC_free();
    }
    *piStack_28 = (int)puVar3;
    piStack_28[1] = (int)puVar6;
    piStack_28[3] = iVar2 + (int)puVar3;
  }
  else {
    if (puVar3 != (u32 *)0x0) {
      *puVar3 = uStack_64;
      puVar3[1] = uStack_60;
      puVar3[2] = uStack_5c;
      puVar3[3] = uStack_58;
    }
    piStack_28[1] = piStack_28[1] + 0x10;
  }
  piVar9 = (int *)hardware_GetField_0x00_8910(param_1);
  uVar8 = 0;
  if (*(int *)(param_1 + 0x478) != 0) {
    uVar8 = *(u16 *)(param_1 + 0x47c);
  }
  piStack_28 = piVar9;
  hardware_Sub_08008F0C(&uStack_64,*(int *)(param_1 + 0x478),0x05000260,uVar8);
  puVar3 = (u32 *)piVar9[1];
  if (puVar3 == (u32 *)piVar9[3]) {
    iStack_38 = 1;
    iStack_3c = (int)puVar3 - *piStack_28 >> 4;
    piVar9 = &iStack_3c;
    if (iStack_3c == 0) {
      piVar9 = &iStack_38;
    }
    puStack_24 = puVar3;
    if (iStack_3c + *piVar9 == 0) {
      puVar3 = (u32 *)0x0;
      iVar2 = 0;
    }
    else {
      iVar2 = (iStack_3c + *piVar9) * 0x10;
      puVar3 = (u32 *)LibC_malloc(iVar2);
      if (puVar3 == (u32 *)0x0) {
        puVar3 = (u32 *)code_linkonce_Sub_080D3BC0(iVar2);
      }
    }
    puVar5 = puVar3;
    for (puVar6 = (u32 *)*piStack_28; puVar6 != puStack_24; puVar6 = puVar6 + 4) {
      if (puVar5 != (u32 *)0x0) {
        uVar1 = puVar6[1];
        uVar11 = puVar6[2];
        *puVar5 = *puVar6;
        puVar5[1] = uVar1;
        puVar5[2] = uVar11;
        puVar5[3] = puVar6[3];
      }
      puVar5 = puVar5 + 4;
    }
    iVar10 = iStack_38;
    if (iStack_38 == 1) {
      if (puVar5 != (u32 *)0x0) {
        *puVar5 = uStack_64;
        puVar5[1] = uStack_60;
        puVar5[2] = uStack_5c;
        puVar5[3] = uStack_58;
      }
      puVar5 = puVar5 + 4;
    }
    else {
      for (; iVar10 != 0; iVar10 = iVar10 + -1) {
        if (puVar5 != (u32 *)0x0) {
          *puVar5 = uStack_64;
          puVar5[1] = uStack_60;
          puVar5[2] = uStack_5c;
          puVar5[3] = uStack_58;
        }
        puVar5 = puVar5 + 4;
      }
    }
    for (iVar10 = *piStack_28; iVar10 != piStack_28[1]; iVar10 = iVar10 + 0x10) {
    }
    if (*piStack_28 != 0) {
      LibC_free();
    }
    *piStack_28 = (int)puVar3;
    piStack_28[1] = (int)puVar5;
    piStack_28[3] = iVar2 + (int)puVar3;
  }
  else {
    if (puVar3 != (u32 *)0x0) {
      *puVar3 = uStack_64;
      puVar3[1] = uStack_60;
      puVar3[2] = uStack_5c;
      puVar3[3] = uStack_58;
    }
    piStack_28[1] = piStack_28[1] + 0x10;
  }
  while (hardware_Sub_080BDF40(param_1), *(int *)(param_1 + 0x5a0) == 3) {
    hardware_Ctor_87C8(param_1);
    hardware_Sub_080088B8(param_1);
    iVar2 = *(int *)(param_1 + 0x000005A4);
    if (iVar2 == 1) {
      hardware_Sub_080C0CA4(param_1);
      uVar4 = hardware_GetField_0x00_88CC(param_1);
      if ((uVar4 & 8) == 0) {
        iStack_34 = iStack_34 + 1;
        hardware_Sub_080BE728(param_1,iStack_34);
        if (iStack_34 == 0x3c) {
          iStack_34 = 0;
        }
        pcVar7 = (char *)(param_1 + 0x0000060A);
        if (*pcVar7 == '\0') {
          if (iStack_30 < 0x21) {
            uVar4 = uStack_2c + 0x20;
            uStack_2c = uVar4 & 0xffff;
            *(char *)(param_1 + 0x608) = (char)(uVar4 >> 8);
          }
          if ((*pcVar7 == '\0') && (iStack_30 == 0x21)) {
            *(u8 *)(param_1 + 0x0000060F) = 1;
            *(u8 *)(param_1 + 0x0000060E) = 1;
            uStack_2c = 0x8500;
            *(u8 *)(param_1 + 0x608) = 0x85;
          }
        }
        iStack_30 = iStack_30 + 1;
        if (iStack_30 == 0x3c) {
          iStack_30 = 0;
          *(u8 *)(param_1 + 0x0000060E) = 1;
          *(u32 *)(param_1 + 0x000005A4) = 0;
        }
      }
    }
    else if (iVar2 < 2) {
      if (iVar2 == 0) {
        hardware_Sub_080C0B70(param_1);
        *(char *)(param_1 + 0x000005FB) = *(char *)(param_1 + 0x000005FB) + '\x01';
        iVar2 = iStack_34 + 1;
        iStack_34 = iVar2;
        hardware_Sub_080BE728(param_1,iVar2);
        if (iVar2 == 0x3c) {
          iStack_34 = 0;
        }
        if (*(char *)(param_1 + 0x00000609) != '\0') {
          hardware_Wrap_m4aMPlayStart_8B88(param_1 + 0x580,0xbd);
        }
      }
    }
    else if (iVar2 < 4) {
      hardware_Sub_080C0CA4(param_1);
    }
  }
}

/* 0x080C0910 (200B) | hardware_Sub_080C0910 (orig: func_080C0910) | origin: pure | domain: hardware | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 hardware_Wrap_m4aMPlayStart();
void hardware_Sub_080C0910(int arg0) {
  register unsigned int val2;
  register char *mem_ptr;
  register char val;
  int one;
  mem_ptr = (char *)(arg0 + 0x000005FA);
  val = *mem_ptr;
  if (val == '\x13') {
    if (*(int *)(arg0 + 0x000005AC) == 3) {
      *(u8 *)(arg0 + 0x0000060A) = 0;
    }
    else {
      *(u8 *)(arg0 + 0x0000060A) = 1;
    }
  }
  else if (val == '\x14') {
    *(u8 *)(arg0 + 0x000005F9) = 0;
    *(u8 *)(0x5f8 + arg0) = 0;
    val2 = 0x00000609;
    *mem_ptr = '\0';
    *(u8 *)(arg0 + 0x00000609) = 0;
    if (*(char *)(arg0 + 0x60a) == '\0') {
      *(char *)(arg0 + 0x000005FF) = *(char *)(arg0 + 0x000005FF) + '\x01';
      hardware_Wrap_m4aMPlayStart(arg0 + val2 + -0x89,199);
    }
    else {
      *(char *)(arg0 + 0x000005FE) = *(char *)(arg0 + 0x000005FE) + '\x01';
      hardware_Wrap_m4aMPlayStart(arg0 + 0x580,0xbc);
    }
    val2 = 0x000005AC;
    *(u32 *)(0x000005AC + arg0) = 0;
    *(u8 *)(0x0000060E + arg0) = (one = 1);
    *(u32 *)(val2 + arg0 + -8) = one;
  }
}

/* 0x080C0B70 (36B) | hardware_Sub_080C0B70 (orig: func_080C0B70) | origin: pure | domain: hardware | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 hardware_GetField_0x00_88CC();
extern u32 hardware_Sub_080C0B94();
extern u32 hardware_Sub_080C0CA4();
void hardware_Sub_080C0B70(u32 arg0) {
  u32 val;
  val = hardware_GetField_0x00_88CC();
  hardware_Sub_080C0CA4(arg0);
  if ((val & 8) == 0) {
    hardware_Sub_080C0B94(arg0);
  }
}

/* 0x080C0CA4 (120B) | hardware_Sub_080C0CA4 (orig: func_080C0CA4) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
void hardware_Sub_080C0CA4(int param_1) {
  u32 uVar1;
  int iVar2;
  int *piVar3;
  uVar1 = hardware_GetField_0x00_88CC();
  if ((uVar1 & 8) != 0) {
    hardware_Wrap_m4aMPlayStart(param_1 + 0x00000584,0xb8);
    piVar3 = (int *)(param_1 + 0x000005A4);
    iVar2 = *piVar3;
    if (iVar2 == 1) {
      *piVar3 = 3;
      *(u16 *)(*(int *)(param_1 + 0x4d8) + 0x10) = 0;
    }
    else {
      if (iVar2 < 2) {
        if (iVar2 != 0) {
        }
        iVar2 = 2;
      }
      else {
        if (iVar2 != 2) {
          if (iVar2 != 3) {
          }
          *piVar3 = 1;
          *(u16 *)(*(int *)(param_1 + 0x4d8) + 0x10) = 0x100;
        }
        iVar2 = 0;
      }
      *piVar3 = iVar2;
    }
  }
}

/* 0x080C14BC (12B) | hardware_Wrap_Ctor_14BC (orig: func_080C14BC) | origin: pure | domain: hardware | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 hardware_Ctor();
void hardware_Wrap_Ctor_14BC(void) {
  hardware_Ctor();
}

/* 0x080C14C8 (324B) | hardware_Sub_080C14C8 (orig: func_080C14C8) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
void hardware_Sub_080C14C8(int param_1) {
  u32 uVar1;
  int iVar2;
  iVar2 = param_1 + 0x0000083C;
  hardware_Sub_08007C28(iVar2,*(u32 *)(iVar2 + 4));
  uVar1 = hardware_Sub_08007B54(iVar2,3);
  *(u32 *)(iVar2 + 4) = uVar1;
  iVar2 = param_1 + 0x00000844;
  hardware_Sub_08007C28(iVar2,*(u32 *)(iVar2 + 4));
  uVar1 = hardware_Sub_08007B54(iVar2,6);
  *(u32 *)(iVar2 + 4) = uVar1;
  iVar2 = param_1 + 0x0000084C;
  hardware_Sub_08007C28(iVar2,*(u32 *)(iVar2 + 4));
  uVar1 = hardware_Sub_08007B54(iVar2,3);
  *(u32 *)(iVar2 + 4) = uVar1;
  iVar2 = param_1 + 0x00000854;
  hardware_Sub_08007C28(iVar2,*(u32 *)(iVar2 + 4));
  uVar1 = hardware_Sub_08007B54(iVar2,2);
  *(u32 *)(iVar2 + 4) = uVar1;
  iVar2 = param_1 + 0x0000085C;
  hardware_Sub_08007C28(iVar2,*(u32 *)(iVar2 + 4));
  uVar1 = hardware_Sub_08007B54(iVar2,2);
  *(u32 *)(iVar2 + 4) = uVar1;
  iVar2 = param_1 + 0x00000864;
  hardware_Sub_08007C28(iVar2,*(u32 *)(iVar2 + 4));
  uVar1 = hardware_Sub_08007B54(iVar2,5);
  *(u32 *)(iVar2 + 4) = uVar1;
  iVar2 = param_1 + 0x0000086C;
  hardware_Sub_08007C28(iVar2,*(u32 *)(iVar2 + 4));
  uVar1 = hardware_Sub_08007B54(iVar2,2);
  *(u32 *)(iVar2 + 4) = uVar1;
  iVar2 = param_1 + 0x0000087C;
  hardware_Sub_08007C28(iVar2,*(u32 *)(iVar2 + 4));
  uVar1 = hardware_Sub_08007B54(iVar2,3);
  *(u32 *)(iVar2 + 4) = uVar1;
  iVar2 = param_1 + 0x00000884;
  hardware_Sub_08007C28(iVar2,*(u32 *)(iVar2 + 4));
  uVar1 = hardware_Sub_08007B54(iVar2,2);
  *(u32 *)(iVar2 + 4) = uVar1;
  iVar2 = param_1 + 0x00000874;
  hardware_Sub_08007C28(iVar2,*(u32 *)(iVar2 + 4));
  uVar1 = hardware_Sub_08007B54(iVar2,6);
  *(u32 *)(iVar2 + 4) = uVar1;
  iVar2 = param_1 + 0x0000088C;
  hardware_Sub_08007C28(iVar2,*(u32 *)(iVar2 + 4));
  uVar1 = hardware_Sub_08007B54(iVar2,5);
  *(u32 *)(iVar2 + 4) = uVar1;
  param_1 = param_1 + 0x00000894;
  hardware_Sub_08007C28(param_1,*(u32 *)(param_1 + 4));
  uVar1 = hardware_Sub_08007B54(param_1,3);
  *(u32 *)(param_1 + 4) = uVar1;
}

/* 0x080C160C (200B) | hardware_Sub_080C160C (orig: func_080C160C) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
void hardware_Sub_080C160C(u32 param_1) {
    s16 iVar4;
    BOOL uVar1;
  register u16 *puVar3;
  register u32 uVar2;
  hardware_HW_DMA3SAD_8EB8(0,0x06007FE0,0x20);
  hardware_HW_DMA3SAD_8EB8(0xffffffff,0x0600F000,0x800);
  uVar2 = 0x0600F800;
  uVar1 = (s16)0x0600F000;
  hardware_HW_DMA3SAD_8EB8(0xffffffff,0x0600F800,0x800);
  System_UnpackData(0x0873F3C8,uVar2);
  System_UnpackData(0x0873F5D4,uVar1);
  System_UnpackData(0x0873F6AC,0x6000000);
  hardware_HW_DMA3SAD(0x087400E4,0x05000020,0x200);
  puVar3 = (u16 *)hardware_GetField_0x00_8918(param_1);
  *puVar3 = 0x1640;
  iVar4 = hardware_GetField_0x00_8918(param_1);
  *(short *)(10 + iVar4) = (short)0x00001E41;
  iVar4 = hardware_GetField_0x00_8918(param_1);
  *(short *)(0xc + iVar4) = (short)0x00001F42;
}

/* 0x080C2D54 (2960B) | hardware_Sub_080C2D54 (orig: func_080C2D54) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
void hardware_Sub_080C2D54(int param_1) {
  u8 bVar1;
  u16 uVar2;
  u16 uVar3;
  u32 uVar4;
  u8 *pbVar5;
  int *piVar6;
  int *piVar7;
  u32 *puVar8;
  u32 *puVar9;
  u32 *puVar10;
  int iVar11;
  char *pcVar12;
  int iVar13;
  u32 uVar14;
  u32 uStack_78;
  u32 uStack_74;
  u32 uStack_70;
  u32 uStack_6c;
  u32 uStack_68;
  u32 uStack_64;
  u32 uStack_60;
  u32 uStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  u32 *puStack_28;
  u32 *puStack_24;
  if (*(char *)(0x0000096B + param_1) != '\0') {
    uVar4 = hardware_GetField_0x00_8920(param_1);
    uVar3 = 0;
    if (*(int *)(param_1 + 0x7a0) != 0) {
      uVar3 = *(u16 *)(param_1 + 0x7a4);
    }
    code_0803EE94_Sub_0805E99C(uVar4,*(int *)(param_1 + 0x7a0),uVar3,*(u32 *)(0x0000079C + param_1));
    uVar4 = hardware_GetField_0x00_8920(param_1);
    uVar3 = 0;
    if (*(int *)(param_1 + 0x7c8) != 0) {
      uVar3 = *(u16 *)(param_1 + 0x7cc);
    }
    code_0803EE94_Sub_0805E99C(uVar4,*(int *)(param_1 + 0x7c8),uVar3,*(u32 *)(0x000007C4 + param_1));
    uVar4 = hardware_GetField_0x00_8920(param_1);
    uVar3 = 0;
    if (*(int *)(param_1 + 0x7f0) != 0) {
      uVar3 = *(u16 *)(param_1 + 0x7f4);
    }
    code_0803EE94_Sub_0805E99C(uVar4,*(int *)(param_1 + 0x7f0),uVar3,*(u32 *)(0x000007EC + param_1));
    puVar9 = (u32 *)(param_1 + 0x778);
    iVar11 = 3;
    do {
      pbVar5 = (u8 *)hardware_GetField_0x00_8920(param_1);
      bVar1 = *pbVar5;
      if (bVar1 < 0x80) {
        *(u32 *)(pbVar5 + (u32)bVar1 * 8 + 4) = *puVar9;
        *(u16 *)(pbVar5 + (u32)bVar1 * 8 + 4 + 4) = *(u16 *)(puVar9 + 1);
        *pbVar5 = bVar1 + 1;
      }
      puVar9 = puVar9 + 2;
      iVar11 = iVar11 + -1;
    } while (-1 < iVar11);
  }
  pbVar5 = (u8 *)hardware_GetField_0x00_8920(param_1);
  bVar1 = *pbVar5;
  if (bVar1 < 0x80) {
    *(u32 *)(pbVar5 + (u32)bVar1 * 8 + 4) = *(u32 *)(param_1 + 0x548);
    *(u16 *)(pbVar5 + (u32)bVar1 * 8 + 4 + 4) = *(u16 *)(0x0000054C + param_1);
    *pbVar5 = bVar1 + 1;
  }
  if (((*(int *)(0x0000089C + param_1) == 4) && (*(int *)(0x000008A4 + param_1) == 1)) ||
     ((*(int *)(0x0000089C + param_1) == 3 && (*(int *)(param_1 + 0x8a0) != 2)))) {
    uVar4 = hardware_GetField_0x00_8920(param_1);
    uVar3 = 0;
    if (*(int *)(param_1 + 0x558) != 0) {
      uVar3 = *(u16 *)(param_1 + 0x55c);
    }
    code_0803EE94_Sub_0805E99C(uVar4,*(int *)(param_1 + 0x558),uVar3,*(u32 *)(0x00000554 + param_1));
  }
  uVar4 = hardware_GetField_0x00_8920(param_1);
  uVar3 = 0;
  if (*(int *)(param_1 + 0x580) != 0) {
    uVar3 = *(u16 *)(param_1 + 0x584);
  }
  code_0803EE94_Sub_0805E99C(uVar4,*(int *)(param_1 + 0x580),uVar3,*(u32 *)(0x0000057C + param_1));
  if (*(char *)(0x0000096D + param_1) != '\0') {
    uVar4 = hardware_GetField_0x00_8920(param_1);
    uVar3 = 0;
    if (*(int *)(param_1 + 0x758) != 0) {
      uVar3 = *(u16 *)(param_1 + 0x75c);
    }
    code_0803EE94_Sub_0805E99C(uVar4,*(int *)(param_1 + 0x758),uVar3,*(u32 *)(0x00000754 + param_1));
  }
  if (*(int *)(0x000008BC + param_1) == 9) {
    piVar7 = (int *)(0x0000072C + param_1);
    *(u16 *)*piVar7 = *(u8 *)(0x000008B4 + param_1) - 8;
    *(u16 *)(*piVar7 + 2) = *(u8 *)(0x000008B5 + param_1) - 0x20;
    piVar7 = (int *)(param_1 + 0x728);
    iVar11 = code_0803EE94_Sub_0805E8F0(*piVar7);
    if (iVar11 * 0x40000000 < 0) {
      if (iVar11 * 0x20000000 < 0) {
        *(u16 *)(*piVar7 + 0x10) = 0;
      }
      puVar9 = (u32 *)*piVar7;
      func_080D3918(&uStack_78,(int *)*puVar9,
                      *(u16 *)(puVar9[1] + (u32)*(u16 *)(puVar9 + 3) * 4),
                      *(u32 *)(*(int *)*puVar9 + 0x10));
      LibC_memcpy(&uStack_78,&uStack_78,0x20);
      *(u32 *)(param_1 + 0x730) = uStack_78;
      *(u32 *)(param_1 + 0x734) = uStack_74;
      *(u32 *)(param_1 + 0x738) = uStack_70;
      *(u32 *)(param_1 + 0x73c) = uStack_6c;
      *(u32 *)(param_1 + 0x740) = uStack_68;
      *(u32 *)(param_1 + 0x744) = uStack_64;
      *(u32 *)(param_1 + 0x748) = uStack_60;
      *(u32 *)(param_1 + 0x74c) = uStack_5c;
      piVar7 = (int *)hardware_GetField_0x00_8910(param_1);
      iVar13 = *(int *)(param_1 + 0x738);
      iVar11 = hardware_Sub_08007D4C(0x0000086C + param_1,*(u32 *)(0x0000086C + param_1 + 4));
      uVar3 = 0;
      if (*(int *)(param_1 + 0x738) != 0) {
        uVar3 = *(u16 *)(param_1 + 0x73c);
      }
      hardware_Sub_08008F0C(&uStack_78,iVar13,iVar11 * 0x20 + 0x06010000,uVar3);
      puVar9 = (u32 *)piVar7[1];
      if (puVar9 == (u32 *)piVar7[3]) {
        iStack_54 = 1;
        iStack_58 = (int)puVar9 - *piVar7 >> 4;
        piVar6 = &iStack_58;
        if (iStack_58 == 0) {
          piVar6 = &iStack_54;
        }
        puStack_28 = puVar9;
        if (iStack_58 + *piVar6 == 0) {
          puStack_24 = (u32 *)0x0;
          iVar11 = 0;
        }
        else {
          iVar11 = (iStack_58 + *piVar6) * 0x10;
          puStack_24 = (u32 *)LibC_malloc(iVar11);
          if (puStack_24 == (u32 *)0x0) {
            puStack_24 = (u32 *)code_linkonce_Sub_080D3BC0(iVar11);
          }
        }
        puVar8 = puStack_24;
        for (puVar9 = (u32 *)*piVar7; puVar9 != puStack_28; puVar9 = puVar9 + 4) {
          if (puVar8 != (u32 *)0x0) {
            uVar4 = puVar9[1];
            uVar14 = puVar9[2];
            *puVar8 = *puVar9;
            puVar8[1] = uVar4;
            puVar8[2] = uVar14;
            puVar8[3] = puVar9[3];
          }
          puVar8 = puVar8 + 4;
        }
        iVar13 = iStack_54;
        if (iStack_54 == 1) {
          if (puVar8 != (u32 *)0x0) {
            *puVar8 = uStack_78;
            puVar8[1] = uStack_74;
            puVar8[2] = uStack_70;
            puVar8[3] = uStack_6c;
          }
          puVar8 = puVar8 + 4;
        }
        else {
          for (; iVar13 != 0; iVar13 = iVar13 + -1) {
            if (puVar8 != (u32 *)0x0) {
              *puVar8 = uStack_78;
              puVar8[1] = uStack_74;
              puVar8[2] = uStack_70;
              puVar8[3] = uStack_6c;
            }
            puVar8 = puVar8 + 4;
          }
        }
        for (iVar13 = *piVar7; iVar13 != piVar7[1]; iVar13 = iVar13 + 0x10) {
        }
        if (*piVar7 != 0) {
          LibC_free();
        }
        *piVar7 = (int)puStack_24;
        piVar7[1] = (int)puVar8;
        piVar7[3] = (int)puStack_24 + iVar11;
      }
      else {
        if (puVar9 != (u32 *)0x0) {
          *puVar9 = uStack_78;
          puVar9[1] = uStack_74;
          puVar9[2] = uStack_70;
          puVar9[3] = uStack_6c;
        }
        piVar7[1] = piVar7[1] + 0x10;
      }
      piVar7 = (int *)hardware_GetField_0x00_8910(param_1);
      uVar3 = 0;
      if (*(int *)(param_1 + 0x740) != 0) {
        uVar3 = *(u16 *)(param_1 + 0x744);
      }
      hardware_Sub_08008F0C(&uStack_78,*(int *)(param_1 + 0x740),0x05000300,uVar3);
      puVar9 = (u32 *)piVar7[1];
      if (puVar9 == (u32 *)piVar7[3]) {
        iStack_4c = 1;
        iStack_50 = (int)puVar9 - *piVar7 >> 4;
        piVar6 = &iStack_50;
        if (iStack_50 == 0) {
          piVar6 = &iStack_4c;
        }
        puStack_28 = puVar9;
        if (iStack_50 + *piVar6 == 0) {
          puVar9 = (u32 *)0x0;
          iVar11 = 0;
        }
        else {
          iVar11 = (iStack_50 + *piVar6) * 0x10;
          puVar9 = (u32 *)LibC_malloc(iVar11);
          if (puVar9 == (u32 *)0x0) {
            puVar9 = (u32 *)code_linkonce_Sub_080D3BC0(iVar11);
          }
        }
        puVar10 = puVar9;
        for (puVar8 = (u32 *)*piVar7; puVar8 != puStack_28; puVar8 = puVar8 + 4) {
          if (puVar10 != (u32 *)0x0) {
            uVar4 = puVar8[1];
            uVar14 = puVar8[2];
            *puVar10 = *puVar8;
            puVar10[1] = uVar4;
            puVar10[2] = uVar14;
            puVar10[3] = puVar8[3];
          }
          puVar10 = puVar10 + 4;
        }
        iVar13 = iStack_4c;
        if (iStack_4c == 1) {
          if (puVar10 != (u32 *)0x0) {
            *puVar10 = uStack_78;
            puVar10[1] = uStack_74;
            puVar10[2] = uStack_70;
            puVar10[3] = uStack_6c;
          }
          puVar10 = puVar10 + 4;
        }
        else {
          for (; iVar13 != 0; iVar13 = iVar13 + -1) {
            if (puVar10 != (u32 *)0x0) {
              *puVar10 = uStack_78;
              puVar10[1] = uStack_74;
              puVar10[2] = uStack_70;
              puVar10[3] = uStack_6c;
            }
            puVar10 = puVar10 + 4;
          }
        }
        for (iVar13 = *piVar7; iVar13 != piVar7[1]; iVar13 = iVar13 + 0x10) {
        }
        puStack_24 = puVar9;
        if (*piVar7 != 0) {
          LibC_free();
        }
        *piVar7 = (int)puStack_24;
        piVar7[1] = (int)puVar10;
        piVar7[3] = (int)puStack_24 + iVar11;
      }
      else {
        if (puVar9 != (u32 *)0x0) {
          *puVar9 = uStack_78;
          puVar9[1] = uStack_74;
          puVar9[2] = uStack_70;
          puVar9[3] = uStack_6c;
        }
        piVar7[1] = piVar7[1] + 0x10;
      }
    }
    uVar4 = hardware_GetField_0x00_8920(param_1);
    uVar3 = 0;
    if (*(int *)(param_1 + 0x730) != 0) {
      uVar3 = *(u16 *)(param_1 + 0x734);
    }
    code_0803EE94_Sub_0805E99C(uVar4,*(int *)(param_1 + 0x730),uVar3,*(u32 *)(0x0000072C + param_1));
  }
  if (*(char *)(0x000008C5 + param_1) != '\0') {
    if ((*(int *)(0x0000089C + param_1) == 2) || (*(int *)(0x0000089C + param_1) == 0)) {
      piVar7 = (int *)(0x000005F4 + param_1);
      *(u16 *)*piVar7 = (u16)*(u8 *)(0x0000097D + param_1);
      iVar11 = *piVar7;
      uVar2 = (u16)*(u8 *)(0x0000097E + param_1);
    }
    else {
      piVar7 = (int *)(0x000005F4 + param_1);
      *(u16 *)*piVar7 = (u16)*(u8 *)(0x000008B4 + param_1);
      iVar11 = *piVar7;
      uVar2 = *(u8 *)(0x000008B5 + param_1) + 0xf;
    }
    *(u16 *)(iVar11 + 2) = uVar2;
    iVar11 = code_0803EE94_Sub_0805E8F0(*(int *)(param_1 + 0x5f0));
    if (iVar11 * 0x40000000 < 0) {
      puVar9 = *(u32 **)(param_1 + 0x5f0);
      func_080D3918(&uStack_78,(int *)*puVar9,
                      *(u16 *)(puVar9[1] + (u32)*(u16 *)(puVar9 + 3) * 4),
                      *(u32 *)(*(int *)*puVar9 + 0x10));
      LibC_memcpy(&uStack_78,&uStack_78,0x20);
      *(u32 *)(param_1 + 0x5f8) = uStack_78;
      *(u32 *)(param_1 + 0x5fc) = uStack_74;
      *(u32 *)(param_1 + 0x600) = uStack_70;
      *(u32 *)(param_1 + 0x604) = uStack_6c;
      *(u32 *)(param_1 + 0x608) = uStack_68;
      *(u32 *)(param_1 + 0x60c) = uStack_64;
      *(u32 *)(param_1 + 0x610) = uStack_60;
      *(u32 *)(param_1 + 0x614) = uStack_5c;
      piVar7 = (int *)hardware_GetField_0x00_8910(param_1);
      iVar13 = *(int *)(param_1 + 0x600);
      iVar11 = hardware_Sub_08007D4C(0x0000084C + param_1,*(u32 *)(0x0000084C + param_1 + 4));
      uVar3 = 0;
      if (*(int *)(param_1 + 0x600) != 0) {
        uVar3 = *(u16 *)(param_1 + 0x604);
      }
      hardware_Sub_08008F0C(&uStack_78,iVar13,iVar11 * 0x20 + 0x06010000,uVar3);
      puVar9 = (u32 *)piVar7[1];
      if (puVar9 == (u32 *)piVar7[3]) {
        iStack_44 = 1;
        iStack_48 = (int)puVar9 - *piVar7 >> 4;
        piVar6 = &iStack_48;
        if (iStack_48 == 0) {
          piVar6 = &iStack_44;
        }
        puStack_28 = puVar9;
        if (iStack_48 + *piVar6 == 0) {
          puVar9 = (u32 *)0x0;
          iVar11 = 0;
        }
        else {
          iVar11 = (iStack_48 + *piVar6) * 0x10;
          puVar9 = (u32 *)LibC_malloc(iVar11);
          if (puVar9 == (u32 *)0x0) {
            puVar9 = (u32 *)code_linkonce_Sub_080D3BC0(iVar11);
          }
        }
        puVar10 = puVar9;
        for (puVar8 = (u32 *)*piVar7; puVar8 != puStack_28; puVar8 = puVar8 + 4) {
          if (puVar10 != (u32 *)0x0) {
            uVar4 = puVar8[1];
            uVar14 = puVar8[2];
            *puVar10 = *puVar8;
            puVar10[1] = uVar4;
            puVar10[2] = uVar14;
            puVar10[3] = puVar8[3];
          }
          puVar10 = puVar10 + 4;
        }
        iVar13 = iStack_44;
        if (iStack_44 == 1) {
          if (puVar10 != (u32 *)0x0) {
            *puVar10 = uStack_78;
            puVar10[1] = uStack_74;
            puVar10[2] = uStack_70;
            puVar10[3] = uStack_6c;
          }
          puVar10 = puVar10 + 4;
        }
        else {
          for (; iVar13 != 0; iVar13 = iVar13 + -1) {
            if (puVar10 != (u32 *)0x0) {
              *puVar10 = uStack_78;
              puVar10[1] = uStack_74;
              puVar10[2] = uStack_70;
              puVar10[3] = uStack_6c;
            }
            puVar10 = puVar10 + 4;
          }
        }
        for (iVar13 = *piVar7; iVar13 != piVar7[1]; iVar13 = iVar13 + 0x10) {
        }
        puStack_24 = puVar9;
        if (*piVar7 != 0) {
          LibC_free();
        }
        *piVar7 = (int)puStack_24;
        piVar7[1] = (int)puVar10;
        piVar7[3] = (int)puStack_24 + iVar11;
      }
      else {
        if (puVar9 != (u32 *)0x0) {
          *puVar9 = uStack_78;
          puVar9[1] = uStack_74;
          puVar9[2] = uStack_70;
          puVar9[3] = uStack_6c;
        }
        piVar7[1] = piVar7[1] + 0x10;
      }
      piVar7 = (int *)hardware_GetField_0x00_8910(param_1);
      uVar3 = 0;
      if (*(int *)(param_1 + 0x608) != 0) {
        uVar3 = *(u16 *)(param_1 + 0x60c);
      }
      hardware_Sub_08008F0C(&uStack_78,*(int *)(param_1 + 0x608),0x05000280,uVar3);
      puVar9 = (u32 *)piVar7[1];
      if (puVar9 == (u32 *)piVar7[3]) {
        iStack_3c = 1;
        iStack_40 = (int)puVar9 - *piVar7 >> 4;
        piVar6 = &iStack_40;
        if (iStack_40 == 0) {
          piVar6 = &iStack_3c;
        }
        puStack_28 = puVar9;
        if (iStack_40 + *piVar6 == 0) {
          puVar9 = (u32 *)0x0;
          iVar11 = 0;
        }
        else {
          iVar11 = (iStack_40 + *piVar6) * 0x10;
          puVar9 = (u32 *)LibC_malloc(iVar11);
          if (puVar9 == (u32 *)0x0) {
            puVar9 = (u32 *)code_linkonce_Sub_080D3BC0(iVar11);
          }
        }
        puVar10 = puVar9;
        for (puVar8 = (u32 *)*piVar7; puVar8 != puStack_28; puVar8 = puVar8 + 4) {
          if (puVar10 != (u32 *)0x0) {
            uVar4 = puVar8[1];
            uVar14 = puVar8[2];
            *puVar10 = *puVar8;
            puVar10[1] = uVar4;
            puVar10[2] = uVar14;
            puVar10[3] = puVar8[3];
          }
          puVar10 = puVar10 + 4;
        }
        iVar13 = iStack_3c;
        if (iStack_3c == 1) {
          if (puVar10 != (u32 *)0x0) {
            *puVar10 = uStack_78;
            puVar10[1] = uStack_74;
            puVar10[2] = uStack_70;
            puVar10[3] = uStack_6c;
          }
          puVar10 = puVar10 + 4;
        }
        else {
          for (; iVar13 != 0; iVar13 = iVar13 + -1) {
            if (puVar10 != (u32 *)0x0) {
              *puVar10 = uStack_78;
              puVar10[1] = uStack_74;
              puVar10[2] = uStack_70;
              puVar10[3] = uStack_6c;
            }
            puVar10 = puVar10 + 4;
          }
        }
        for (iVar13 = *piVar7; iVar13 != piVar7[1]; iVar13 = iVar13 + 0x10) {
        }
        puStack_24 = puVar9;
        if (*piVar7 != 0) {
          LibC_free();
        }
        *piVar7 = (int)puStack_24;
        piVar7[1] = (int)puVar10;
        piVar7[3] = (int)puStack_24 + iVar11;
      }
      else {
        if (puVar9 != (u32 *)0x0) {
          *puVar9 = uStack_78;
          puVar9[1] = uStack_74;
          puVar9[2] = uStack_70;
          puVar9[3] = uStack_6c;
        }
        piVar7[1] = piVar7[1] + 0x10;
      }
    }
    uVar4 = hardware_GetField_0x00_8920(param_1);
    uVar3 = 0;
    if (*(int *)(param_1 + 0x5f8) != 0) {
      uVar3 = *(u16 *)(param_1 + 0x5fc);
    }
    code_0803EE94_Sub_0805E99C(uVar4,*(int *)(param_1 + 0x5f8),uVar3,*(u32 *)(0x000005F4 + param_1));
  }
  piVar7 = (int *)(0x000005A4 + param_1);
  *(u16 *)*piVar7 = (u16)*(u8 *)(0x000008B4 + param_1);
  *(u16 *)(*piVar7 + 2) = (u16)*(u8 *)(0x000008B5 + param_1);
  pcVar12 = (char *)(0x000008C4 + param_1);
  if (*pcVar12 != '\0') {
    uVar4 = *(u32 *)(param_1 + 0x5a0);
    uVar3 = hardware_Sub_080C7B38(param_1);
    code_0803EE94_Sub_0805E860(uVar4,uVar3);
    *pcVar12 = '\0';
  }
  iVar11 = code_0803EE94_Sub_0805E8F0(*(int *)(param_1 + 0x5a0));
  if (iVar11 * 0x40000000 < 0) {
    puVar9 = *(u32 **)(param_1 + 0x5a0);
    func_080D3918(&uStack_78,(int *)*puVar9,
                    *(u16 *)(puVar9[1] + (u32)*(u16 *)(puVar9 + 3) * 4),
                    *(u32 *)(*(int *)*puVar9 + 0x10));
    LibC_memcpy(&uStack_78,&uStack_78,0x20);
    *(u32 *)(param_1 + 0x5a8) = uStack_78;
    *(u32 *)(param_1 + 0x5ac) = uStack_74;
    *(u32 *)(param_1 + 0x5b0) = uStack_70;
    *(u32 *)(param_1 + 0x5b4) = uStack_6c;
    *(u32 *)(param_1 + 0x5b8) = uStack_68;
    *(u32 *)(param_1 + 0x5bc) = uStack_64;
    *(u32 *)(param_1 + 0x5c0) = uStack_60;
    *(u32 *)(param_1 + 0x5c4) = uStack_5c;
    piVar7 = (int *)hardware_GetField_0x00_8910(param_1);
    iVar13 = *(int *)(param_1 + 0x5b0);
    iVar11 = hardware_Sub_08007D4C(0x0000087C + param_1,*(u32 *)(0x0000087C + param_1 + 4));
    uVar3 = 0;
    if (*(int *)(param_1 + 0x5b0) != 0) {
      uVar3 = *(u16 *)(param_1 + 0x5b4);
    }
    hardware_Sub_08008F0C(&uStack_78,iVar13,iVar11 * 0x20 + 0x06010000,uVar3);
    puVar9 = (u32 *)piVar7[1];
    if (puVar9 == (u32 *)piVar7[3]) {
      iStack_34 = 1;
      iStack_38 = (int)puVar9 - *piVar7 >> 4;
      piVar6 = &iStack_38;
      if (iStack_38 == 0) {
        piVar6 = &iStack_34;
      }
      puStack_28 = puVar9;
      if (iStack_38 + *piVar6 == 0) {
        puVar9 = (u32 *)0x0;
        iVar11 = 0;
      }
      else {
        iVar11 = (iStack_38 + *piVar6) * 0x10;
        puVar9 = (u32 *)LibC_malloc(iVar11);
        if (puVar9 == (u32 *)0x0) {
          puVar9 = (u32 *)code_linkonce_Sub_080D3BC0(iVar11);
        }
      }
      puVar10 = puVar9;
      for (puVar8 = (u32 *)*piVar7; puVar8 != puStack_28; puVar8 = puVar8 + 4) {
        if (puVar10 != (u32 *)0x0) {
          uVar4 = puVar8[1];
          uVar14 = puVar8[2];
          *puVar10 = *puVar8;
          puVar10[1] = uVar4;
          puVar10[2] = uVar14;
          puVar10[3] = puVar8[3];
        }
        puVar10 = puVar10 + 4;
      }
      iVar13 = iStack_34;
      if (iStack_34 == 1) {
        if (puVar10 != (u32 *)0x0) {
          *puVar10 = uStack_78;
          puVar10[1] = uStack_74;
          puVar10[2] = uStack_70;
          puVar10[3] = uStack_6c;
        }
        puVar10 = puVar10 + 4;
      }
      else {
        for (; iVar13 != 0; iVar13 = iVar13 + -1) {
          if (puVar10 != (u32 *)0x0) {
            *puVar10 = uStack_78;
            puVar10[1] = uStack_74;
            puVar10[2] = uStack_70;
            puVar10[3] = uStack_6c;
          }
          puVar10 = puVar10 + 4;
        }
      }
      for (iVar13 = *piVar7; iVar13 != piVar7[1]; iVar13 = iVar13 + 0x10) {
      }
      puStack_24 = puVar9;
      if (*piVar7 != 0) {
        LibC_free();
      }
      *piVar7 = (int)puStack_24;
      piVar7[1] = (int)puVar10;
      piVar7[3] = (int)puStack_24 + iVar11;
    }
    else {
      if (puVar9 != (u32 *)0x0) {
        *puVar9 = uStack_78;
        puVar9[1] = uStack_74;
        puVar9[2] = uStack_70;
        puVar9[3] = uStack_6c;
      }
      piVar7[1] = piVar7[1] + 0x10;
    }
    piVar7 = (int *)hardware_GetField_0x00_8910(param_1);
    uVar3 = 0;
    if (*(int *)(param_1 + 0x5b8) != 0) {
      uVar3 = *(u16 *)(param_1 + 0x5bc);
    }
    hardware_Sub_08008F0C(&uStack_78,*(int *)(param_1 + 0x5b8),0x05000380,uVar3);
    puVar9 = (u32 *)piVar7[1];
    if (puVar9 == (u32 *)piVar7[3]) {
      iStack_2c = 1;
      iStack_30 = (int)puVar9 - *piVar7 >> 4;
      piVar6 = &iStack_30;
      if (iStack_30 == 0) {
        piVar6 = &iStack_2c;
      }
      puStack_28 = puVar9;
      if (iStack_30 + *piVar6 == 0) {
        puVar9 = (u32 *)0x0;
        iVar11 = 0;
      }
      else {
        iVar11 = (iStack_30 + *piVar6) * 0x10;
        puVar9 = (u32 *)LibC_malloc(iVar11);
        if (puVar9 == (u32 *)0x0) {
          puVar9 = (u32 *)code_linkonce_Sub_080D3BC0(iVar11);
        }
      }
      puVar10 = puVar9;
      for (puVar8 = (u32 *)*piVar7; puVar8 != puStack_28; puVar8 = puVar8 + 4) {
        if (puVar10 != (u32 *)0x0) {
          uVar4 = puVar8[1];
          uVar14 = puVar8[2];
          *puVar10 = *puVar8;
          puVar10[1] = uVar4;
          puVar10[2] = uVar14;
          puVar10[3] = puVar8[3];
        }
        puVar10 = puVar10 + 4;
      }
      iVar13 = iStack_2c;
      if (iStack_2c == 1) {
        if (puVar10 != (u32 *)0x0) {
          *puVar10 = uStack_78;
          puVar10[1] = uStack_74;
          puVar10[2] = uStack_70;
          puVar10[3] = uStack_6c;
        }
        puVar10 = puVar10 + 4;
      }
      else {
        for (; iVar13 != 0; iVar13 = iVar13 + -1) {
          if (puVar10 != (u32 *)0x0) {
            *puVar10 = uStack_78;
            puVar10[1] = uStack_74;
            puVar10[2] = uStack_70;
            puVar10[3] = uStack_6c;
          }
          puVar10 = puVar10 + 4;
        }
      }
      for (iVar13 = *piVar7; iVar13 != piVar7[1]; iVar13 = iVar13 + 0x10) {
      }
      puStack_24 = puVar9;
      if (*piVar7 != 0) {
        LibC_free();
      }
      *piVar7 = (int)puStack_24;
      piVar7[1] = (int)puVar10;
      piVar7[3] = (int)puStack_24 + iVar11;
    }
    else {
      if (puVar9 != (u32 *)0x0) {
        *puVar9 = uStack_78;
        puVar9[1] = uStack_74;
        puVar9[2] = uStack_70;
        puVar9[3] = uStack_6c;
      }
      piVar7[1] = piVar7[1] + 0x10;
    }
  }
  uVar4 = hardware_GetField_0x00_8920(param_1);
  uVar3 = 0;
  if (*(int *)(param_1 + 0x5a8) != 0) {
    uVar3 = *(u16 *)(param_1 + 0x5ac);
  }
  code_0803EE94_Sub_0805E99C(uVar4,*(int *)(param_1 + 0x5a8),uVar3,*(u32 *)(0x000005A4 + param_1));
  puVar9 = (u32 *)(0x000006A4 + param_1);
  pcVar12 = (char *)(0x00000905 + param_1);
  iVar11 = 0x18;
  do {
    if (*pcVar12 != '\0') {
      uVar4 = hardware_GetField_0x00_8920(param_1);
      uVar3 = 0;
      if (*(int *)(param_1 + 0x708) != 0) {
        uVar3 = *(u16 *)(param_1 + 0x70c);
      }
      code_0803EE94_Sub_0805E99C(uVar4,*(int *)(param_1 + 0x708),uVar3,*puVar9);
    }
    puVar9 = puVar9 + 1;
    pcVar12 = pcVar12 + 4;
    iVar11 = iVar11 + -1;
  } while (-1 < iVar11);
  if (*(char *)(0x0000096C + param_1) != '\0') {
    piVar7 = (int *)(0x000005CC + param_1);
    *(u16 *)*piVar7 = (u16)*(u8 *)(0x000008B4 + param_1);
    *(u16 *)(*piVar7 + 2) = (u16)*(u8 *)(0x000008B5 + param_1);
    uVar4 = hardware_GetField_0x00_8920(param_1);
    uVar3 = 0;
    if (*(int *)(param_1 + 0x5d0) != 0) {
      uVar3 = *(u16 *)(param_1 + 0x5d4);
    }
    code_0803EE94_Sub_0805E99C(uVar4,*(int *)(param_1 + 0x5d0),uVar3,*piVar7);
  }
  puVar9 = (u32 *)(0x0000061C + param_1);
  pcVar12 = (char *)(0x00000904 + param_1);
  iVar11 = 0x18;
  do {
    if (*pcVar12 != '\0') {
      uVar4 = hardware_GetField_0x00_8920(param_1);
      uVar3 = 0;
      if (*(int *)(param_1 + 0x680) != 0) {
        uVar3 = *(u16 *)(param_1 + 0x684);
      }
      code_0803EE94_Sub_0805E99C(uVar4,*(int *)(param_1 + 0x680),uVar3,*puVar9);
    }
    puVar9 = puVar9 + 1;
    pcVar12 = pcVar12 + 4;
    iVar11 = iVar11 + -1;
  } while (-1 < iVar11);
}

/* 0x080C38E4 (564B) | hardware_Sub_080C38E4 (orig: func_080C38E4) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
void hardware_Sub_080C38E4(int param_1,int param_2) {
  u8 bVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  u32 *puVar5;
  int iVar6;
  u32 *puVar7;
  u8 *pbVar8;
  u32 uVar9;
  u32 uVar10;
  u8 uStack_54;
  u8 uStack_53;
  u8 auStack_50 [4];
  u32 uStack_4c;
  u32 uStack_48;
  u32 uStack_44;
  u32 uStack_40;
  u32 uStack_3c;
  u32 uStack_38;
  u32 uStack_34;
  int iStack_30;
  int iStack_2c;
  u32 *puStack_28;
  u32 *puStack_24;
  if (param_2 == 0x3c) {
    pbVar8 = (u8 *)(0x0000097B + param_1);
    bVar1 = *pbVar8;
    *pbVar8 = bVar1 - 1;
    if ((u8)(bVar1 - 1) == 9) {
      hardware_Wrap_m4aMPlayTempoControl(param_1 + 0x810,0x180);
    }
    code_0803EE94_Sub_0804EC84(*pbVar8,&uStack_54,0);
    if (*pbVar8 < 10) {
      LibC_memcpy(auStack_50,0x08108000,2);
      uStack_53 = uStack_54;
      uStack_54 = 0x30;
    }
    uStack_3c = 0x20004;
    iVar6 = param_1 + 0xc;
    Code_Lib_Syscall_Wrap_CpuFastSet_E7A0(0x20004,iVar6,0);
    if (*pbVar8 < 10) {
      uStack_34 = 0x20004;
      SpriteAnimEngine_Sub_0804E958(0x20004,iVar6,0,0,&uStack_54,0,3);
    }
    else {
      uStack_38 = 0x20004;
      SpriteAnimEngine_Sub_0804E958(0x20004,iVar6,0,0,&uStack_54,0,1);
    }
    piVar2 = (int *)hardware_GetField_0x00_8910(param_1);
    iVar3 = hardware_Sub_08007D4C(0x0000083C + param_1,*(u32 *)(0x0000083C + param_1 + 4));
    hardware_Sub_08008F0C(&uStack_4c,iVar6,iVar3 * 0x20 + 0x06010000,0x100);
    puVar5 = (u32 *)piVar2[1];
    if (puVar5 == (u32 *)piVar2[3]) {
      iStack_2c = 1;
      iStack_30 = (int)puVar5 - *piVar2 >> 4;
      piVar4 = &iStack_30;
      if (iStack_30 == 0) {
        piVar4 = &iStack_2c;
      }
      puStack_28 = puVar5;
      if (iStack_30 + *piVar4 == 0) {
        puStack_24 = (u32 *)0x0;
        iVar6 = 0;
      }
      else {
        iVar6 = (iStack_30 + *piVar4) * 0x10;
        puStack_24 = (u32 *)LibC_malloc(iVar6);
        if (puStack_24 == (u32 *)0x0) {
          puStack_24 = (u32 *)code_linkonce_Sub_080D3BC0(iVar6);
        }
      }
      puVar7 = puStack_24;
      for (puVar5 = (u32 *)*piVar2; puVar5 != puStack_28; puVar5 = puVar5 + 4) {
        if (puVar7 != (u32 *)0x0) {
          uVar9 = puVar5[1];
          uVar10 = puVar5[2];
          *puVar7 = *puVar5;
          puVar7[1] = uVar9;
          puVar7[2] = uVar10;
          puVar7[3] = puVar5[3];
        }
        puVar7 = puVar7 + 4;
      }
      iVar3 = iStack_2c;
      if (iStack_2c == 1) {
        if (puVar7 != (u32 *)0x0) {
          *puVar7 = uStack_4c;
          puVar7[1] = uStack_48;
          puVar7[2] = uStack_44;
          puVar7[3] = uStack_40;
        }
        puVar7 = puVar7 + 4;
      }
      else {
        for (; iVar3 != 0; iVar3 = iVar3 + -1) {
          if (puVar7 != (u32 *)0x0) {
            *puVar7 = uStack_4c;
            puVar7[1] = uStack_48;
            puVar7[2] = uStack_44;
            puVar7[3] = uStack_40;
          }
          puVar7 = puVar7 + 4;
        }
      }
      for (iVar3 = *piVar2; iVar3 != piVar2[1]; iVar3 = iVar3 + 0x10) {
      }
      if (*piVar2 != 0) {
        LibC_free();
      }
      *piVar2 = (int)puStack_24;
      piVar2[1] = (int)puVar7;
      piVar2[3] = (int)puStack_24 + iVar6;
    }
    else {
      if (puVar5 != (u32 *)0x0) {
        *puVar5 = uStack_4c;
        puVar5[1] = uStack_48;
        puVar5[2] = uStack_44;
        puVar5[3] = uStack_40;
      }
      piVar2[1] = piVar2[1] + 0x10;
    }
    if (*(char *)(0x0000097B + param_1) == '\0') {
      *(u8 *)(0x0000097F + param_1) = 0;
      *(u32 *)(0x0000089C + param_1) = 5;
      hardware_Wrap_m4aMPlayTempoControl(param_1 + 0x810,0x100);
      hardware_Wrap_m4aMPlayStart(0x00000818 + param_1,0xbb);
    }
  }
}

/* 0x080C5648 (200B) | hardware_Sub_080C5648 (orig: func_080C5648) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
void hardware_Sub_080C5648(int param_1) {
    int iVar3;
    int iVar5;
    int * piVar4;
    int r_zero;
  u16 iVar1;
  register u8 *puVar2;
  r_zero = r_zero;
  iVar5 = r_zero;
  iVar3 = 0x18;
  puVar2 = (u8 *)(param_1 + 0x00000904);
  do {
    *puVar2 = r_zero;
    puVar2[1] = r_zero;
    iVar1 = 0x000008B4;
    puVar2 = puVar2 + 4;
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  *(u8 *)(param_1 + 0x000008B4) = 0x78;
  *(u8 *)(param_1 + 0x000008B5) = 0x51;
  *(u8 *)(param_1 + 0x000008B7) = 2;
  *(u8 *)(param_1 + iVar1 + 2) = 2;
  *(u8 *)(param_1 + 0x000008B9) = r_zero;
  iVar3 = 0x000008B9;
  piVar4 = (int *)(param_1 + 0x00000544);
  *(u8 *)(iVar1 + param_1 + 4) = r_zero;
  hardware_Sub_0800934C(*piVar4 + 0xc,iVar3 + -0x30,1,1);
  iVar3 = hardware_GetField_0x00_8940(param_1);
  func_080D3914(iVar3,*piVar4,*(u32 *)(*(int *)(iVar3 + 8) + 0x10));
  hardware_Sub_080C2D54(param_1);
  hardware_Wrap_m4aMPlayStart(param_1 + 0x00000818,0xbb);
  if (*(int *)(param_1 + 0x0000089C) == 3) {
    piVar4 = (int *)(param_1 + 0x0000089C);
    do {
      hardware_Ctor_87C8(param_1);
      if (iVar5 == 0x78) {
        *piVar4 = 4;
      }
      iVar5 += 1;
      hardware_Sub_080C2D54(param_1);
    } while (*piVar4 == 3);
  }
}

/* 0x080C5710 (860B) | hardware_Sub_080C5710 (orig: func_080C5710) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
void hardware_Sub_080C5710(int param_1) {
  u32 uVar1;
  int iVar2;
  u32 *puVar3;
  u32 *puVar4;
  u32 *puVar5;
  u16 uVar6;
  int *piVar7;
  int iVar8;
  u32 uVar9;
  u32 uStack_5c;
  u32 uStack_58;
  u32 uStack_54;
  u32 uStack_50;
  u32 uStack_4c;
  u32 uStack_48;
  u32 uStack_44;
  u32 uStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int *piStack_28;
  u32 *puStack_24;
  iStack_2c = 0;
  uVar1 = CppRuntime_builtin_new(0x14);
  iVar2 = code_0803EE94_Sub_0805E824(uVar1,*(u32 *)(param_1 + 0x00000524),0,0x100);
  piVar7 = (int *)(param_1 + 0x550);
  if (iVar2 != *piVar7) {
    CppRuntime_builtin_delete();
  }
  *piVar7 = iVar2;
  code_0803EE94_Sub_0805E860(iVar2,0);
  puVar3 = (u32 *)*piVar7;
  func_080D3918(&uStack_5c,(int *)*puVar3,
                  *(u16 *)(puVar3[1] + (u32)*(u16 *)(puVar3 + 3) * 4),
                  *(u32 *)(*(int *)*puVar3 + 0x10));
  LibC_memcpy(&uStack_5c,&uStack_5c,0x20);
  *(u32 *)(param_1 + 0x558) = uStack_5c;
  *(u32 *)(param_1 + 0x55c) = uStack_58;
  *(u32 *)(param_1 + 0x560) = uStack_54;
  *(u32 *)(param_1 + 0x564) = uStack_50;
  *(u32 *)(param_1 + 0x568) = uStack_4c;
  *(u32 *)(param_1 + 0x56c) = uStack_48;
  *(u32 *)(param_1 + 0x570) = uStack_44;
  *(u32 *)(param_1 + 0x574) = uStack_40;
  piVar7 = (int *)hardware_GetField_0x00_8910(param_1);
  iVar8 = *(int *)(param_1 + 0x560);
  iVar2 = hardware_Sub_08007D4C(param_1 + 0x00000844,*(u32 *)(param_1 + 0x00000844 + 4));
  uVar6 = 0;
  if (*(int *)(param_1 + 0x560) != 0) {
    uVar6 = *(u16 *)(param_1 + 0x564);
  }
  piStack_28 = piVar7;
  hardware_Sub_08008F0C(&uStack_5c,iVar8,iVar2 * 0x20 + 0x06010000,uVar6);
  puVar3 = (u32 *)piVar7[1];
  if (puVar3 == (u32 *)piVar7[3]) {
    iStack_38 = 1;
    iStack_3c = (int)puVar3 - *piStack_28 >> 4;
    piVar7 = &iStack_3c;
    if (iStack_3c == 0) {
      piVar7 = &iStack_38;
    }
    puStack_24 = puVar3;
    if (iStack_3c + *piVar7 == 0) {
      puVar3 = (u32 *)0x0;
      iVar2 = 0;
    }
    else {
      iVar2 = (iStack_3c + *piVar7) * 0x10;
      puVar3 = (u32 *)LibC_malloc(iVar2);
      if (puVar3 == (u32 *)0x0) {
        puVar3 = (u32 *)code_linkonce_Sub_080D3BC0(iVar2);
      }
    }
    puVar5 = puVar3;
    for (puVar4 = (u32 *)*piStack_28; puVar4 != puStack_24; puVar4 = puVar4 + 4) {
      if (puVar5 != (u32 *)0x0) {
        uVar1 = puVar4[1];
        uVar9 = puVar4[2];
        *puVar5 = *puVar4;
        puVar5[1] = uVar1;
        puVar5[2] = uVar9;
        puVar5[3] = puVar4[3];
      }
      puVar5 = puVar5 + 4;
    }
    iVar8 = iStack_38;
    if (iStack_38 == 1) {
      if (puVar5 != (u32 *)0x0) {
        *puVar5 = uStack_5c;
        puVar5[1] = uStack_58;
        puVar5[2] = uStack_54;
        puVar5[3] = uStack_50;
      }
      puVar5 = puVar5 + 4;
    }
    else {
      for (; iVar8 != 0; iVar8 = iVar8 + -1) {
        if (puVar5 != (u32 *)0x0) {
          *puVar5 = uStack_5c;
          puVar5[1] = uStack_58;
          puVar5[2] = uStack_54;
          puVar5[3] = uStack_50;
        }
        puVar5 = puVar5 + 4;
      }
    }
    for (iVar8 = *piStack_28; iVar8 != piStack_28[1]; iVar8 = iVar8 + 0x10) {
    }
    if (*piStack_28 != 0) {
      LibC_free();
    }
    *piStack_28 = (int)puVar3;
    piStack_28[1] = (int)puVar5;
    piStack_28[3] = iVar2 + (int)puVar3;
  }
  else {
    if (puVar3 != (u32 *)0x0) {
      *puVar3 = uStack_5c;
      puVar3[1] = uStack_58;
      puVar3[2] = uStack_54;
      puVar3[3] = uStack_50;
    }
    piStack_28[1] = piStack_28[1] + 0x10;
  }
  piVar7 = (int *)hardware_GetField_0x00_8910(param_1);
  uVar6 = 0;
  if (*(int *)(param_1 + 0x568) != 0) {
    uVar6 = *(u16 *)(param_1 + 0x56c);
  }
  piStack_28 = piVar7;
  hardware_Sub_08008F0C(&uStack_5c,*(int *)(param_1 + 0x568),0x05000260,uVar6);
  puVar3 = (u32 *)piVar7[1];
  if (puVar3 == (u32 *)piVar7[3]) {
    iStack_30 = 1;
    iStack_34 = (int)puVar3 - *piStack_28 >> 4;
    piVar7 = &iStack_34;
    if (iStack_34 == 0) {
      piVar7 = &iStack_30;
    }
    puStack_24 = puVar3;
    if (iStack_34 + *piVar7 == 0) {
      puVar3 = (u32 *)0x0;
      iVar2 = 0;
    }
    else {
      iVar2 = (iStack_34 + *piVar7) * 0x10;
      puVar3 = (u32 *)LibC_malloc(iVar2);
      if (puVar3 == (u32 *)0x0) {
        puVar3 = (u32 *)code_linkonce_Sub_080D3BC0(iVar2);
      }
    }
    puVar4 = puVar3;
    for (puVar5 = (u32 *)*piStack_28; puVar5 != puStack_24; puVar5 = puVar5 + 4) {
      if (puVar4 != (u32 *)0x0) {
        uVar1 = puVar5[1];
        uVar9 = puVar5[2];
        *puVar4 = *puVar5;
        puVar4[1] = uVar1;
        puVar4[2] = uVar9;
        puVar4[3] = puVar5[3];
      }
      puVar4 = puVar4 + 4;
    }
    iVar8 = iStack_30;
    if (iStack_30 == 1) {
      if (puVar4 != (u32 *)0x0) {
        *puVar4 = uStack_5c;
        puVar4[1] = uStack_58;
        puVar4[2] = uStack_54;
        puVar4[3] = uStack_50;
      }
      puVar4 = puVar4 + 4;
    }
    else {
      for (; iVar8 != 0; iVar8 = iVar8 + -1) {
        if (puVar4 != (u32 *)0x0) {
          *puVar4 = uStack_5c;
          puVar4[1] = uStack_58;
          puVar4[2] = uStack_54;
          puVar4[3] = uStack_50;
        }
        puVar4 = puVar4 + 4;
      }
    }
    for (iVar8 = *piStack_28; iVar8 != piStack_28[1]; iVar8 = iVar8 + 0x10) {
    }
    if (*piStack_28 != 0) {
      LibC_free();
    }
    *piStack_28 = (int)puVar3;
    piStack_28[1] = (int)puVar4;
    piStack_28[3] = iVar2 + (int)puVar3;
  }
  else {
    if (puVar3 != (u32 *)0x0) {
      *puVar3 = uStack_5c;
      puVar3[1] = uStack_58;
      puVar3[2] = uStack_54;
      puVar3[3] = uStack_50;
    }
    piStack_28[1] = piStack_28[1] + 0x10;
  }
  hardware_Sub_080C2D54(param_1);
  iVar2 = 0x0000089C;
  while (*(int *)(param_1 + iVar2) == 4) {
    hardware_Ctor_87C8(param_1);
    hardware_Sub_080088B8(param_1);
    if (*(int *)(param_1 + 0x000008A4) == 0) {
      hardware_Sub_080C7BF0(param_1);
      hardware_Sub_080C7DF8(param_1);
      hardware_Sub_080C76D4(param_1);
      hardware_Sub_080C7D78(param_1);
      iVar2 = iStack_2c + 1;
      iStack_2c = iVar2;
      hardware_Sub_080C38E4(param_1,iVar2);
      if (iVar2 == 0x3c) {
        iStack_2c = 0;
      }
    }
    else if (*(int *)(param_1 + 0x000008A4) == 1) {
      hardware_Sub_080C7D78(param_1);
    }
    hardware_Sub_080C2D54(param_1);
    iVar2 = 0x0000089C;
  }
}

/* 0x080C7B38 (44B) | hardware_Sub_080C7B38 (orig: func_080C7B38) | origin: pure | domain: hardware | MEDIUM / graph_algebra */
extern u16 g_08108268[]; u16 hardware_Sub_080C7B38(u8 *a) { return g_08108268[*(u32 *)(a + 0x8BC)] + *(u32 *)(a + (0x98 << 4)) * 0x54; }

/* 0x080C7B7C (116B) | hardware_Sub_080C7B7C (orig: func_080C7B7C) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
u32 hardware_Sub_080C7B7C(u32 *param_1,u32 param_2,u32 param_3,u32 param_4) {
  u32 uVar1;
  u32 uVar2;
  uVar1 = (param_4 & 0xFFFFFF00 | param_3 & 0xff) & 0xFFFF00FF;
  uVar2 = uVar1;
  while (4 < (uVar2 & 0xff)) {
    uVar2 = (uVar1 & 0xFFFFFF00 | uVar1 - 5 & 0xff) & 0xFFFF00FF;
    uVar1 = uVar2 | (((uVar1 & 0xFFFFFF00) >> 8) + 1 & 0xff) << 8;
  }
  *param_1 = (uVar1 & 0xFFFFFF00 | uVar1 * 0x10000000 + 0x50000000 >> 0x18) & 0xFFFF00FF |
             ((uVar1 & 0xFFFFFF00) >> 8) * 0x10000000 + 0x28000000 >> 0x10;
  return param_1;
}

/* 0x080C7D78 (128B) | hardware_Sub_080C7D78 (orig: func_080C7D78) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
void hardware_Sub_080C7D78(int param_1) {
    int * piVar2;
  register u32 uVar1;
  register u32 z_pair;
  uVar1 = hardware_GetField_0x00_88CC();
  if ((uVar1 & 8) != 0) {
    hardware_Wrap_m4aMPlayStart(param_1 + 0x0000081C,0xb8);
    piVar2 = (int *)(param_1 + 0x000008A4);
    if (*piVar2 == 0) {
      *piVar2 = 1;
      *(u32 *)(*(int *)(param_1 + 0x5a0) + 0x10) = (z_pair = 0);
      *(u16 *)(*(int *)(param_1 + 0x5f0) + 0x10) = 0;
      *(u8 *)(*(int *)(param_1 + 0x728) + 0x10) = z_pair;
    }
    else if (*piVar2 == 1) {
      *piVar2 = 0;
      *(u32 *)(*(int *)(param_1 + 0x5f0) + 0x10) = 0x100;
      *(u16 *)(*(int *)(param_1 + 0x5a0) + 0x10) = 0x100;
      *(u16 *)(*(int *)(param_1 + 0x728) + 0x10) = 0x100;
    }
  }
}

/* 0x080C7DF8 (176B) | hardware_Sub_080C7DF8 (orig: func_080C7DF8) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
void hardware_Sub_080C7DF8(int param_1) {
  u32 uVar1;
  int iVar2;
  int *piVar3;
  uVar1 = hardware_GetField_0x00();
  iVar2 = *(int *)(param_1 + 0x000008BC);
  if (7 < iVar2) {
  }
  if (((((uVar1 & 0x20) != 0) && (iVar2 != 6)) && (iVar2 != 7)) && (iVar2 != 4)) {
    *(int *)(param_1 + 0x000008BC) = 4;
    goto LAB_080c7e92;
  }
  if ((uVar1 & 0x10) == 0) {
LAB_080c7e50:
    if ((uVar1 & 0x40) != 0) {
      piVar3 = (int *)(param_1 + 0x000008BC);
      iVar2 = *piVar3;
      if (((iVar2 != 4) && (iVar2 != 5)) && (iVar2 != 6)) {
        iVar2 = 6;
        goto LAB_080c7e90;
      }
    }
    if ((uVar1 & 0x80) == 0) {
    }
    piVar3 = (int *)(param_1 + 0x000008BC);
    iVar2 = *piVar3;
    if (iVar2 == 4) {
    }
    if (iVar2 == 5) {
    }
    if (iVar2 == 7) {
    }
    iVar2 = 7;
  }
  else {
    piVar3 = (int *)(param_1 + 0x000008BC);
    iVar2 = *piVar3;
    if (((iVar2 == 6) || (iVar2 == 7)) || (iVar2 == 5)) goto LAB_080c7e50;
    iVar2 = 5;
  }
LAB_080c7e90:
  *piVar3 = iVar2;
LAB_080c7e92:
  *(u8 *)(param_1 + 0x000008C4) = 1;
}

/* 0x080C8550 (80B) | hardware_Sub_080C8550 (orig: func_080C8550) | origin: pure | domain: hardware | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 hardware_HW_DMA3SAD_8EB8();
extern u32 code_0803EE94_Sub_0804EDB4();
void hardware_Sub_080C8550(int arg0) {
  u32 val;
  val = 0x03FF03FF;
  hardware_HW_DMA3SAD_8EB8(0x03FF03FF,0x0600FF8A,0x28);
  hardware_HW_DMA3SAD_8EB8(val,0x0600FFCA,0x28);
  code_0803EE94_Sub_0804EDB4(*(u32 *)(*(int *)(arg0 + 8) + 0x00001AA8),0x0600FFB2,0xa0,0,0x20);
}

/* 0x080CA770 (324B) | hardware_Sub_080CA770 (orig: func_080CA770) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
u32 hardware_Sub_080CA770(u32 *param_1,u32 param_2) {
  int *piVar1;
  int *piVar2;
  u32 *puVar3;
  u32 *puVar4;
  int iVar5;
  u32 *puVar6;
  int iVar7;
  int iVar8;
  u32 uVar9;
  u32 uVar10;
  u32 uStack_40;
  u32 uStack_3c;
  u32 uStack_38;
  u32 uStack_34;
  int iStack_30;
  int iStack_2c;
  u32 *puStack_28;
  u32 *puStack_24;
  *param_1 = 0;
  param_1[1] = 99;
  *(u8 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 1;
  param_1[6] = param_2;
  puStack_28 = param_1;
  piVar1 = (int *)hardware_GetField_0x00_8910();
  hardware_Sub_08008F0C(&uStack_40,0x08750C8C,0x06000480,0x1c0);
  puStack_24 = (u32 *)piVar1[1];
  if (puStack_24 == (u32 *)piVar1[3]) {
    iStack_2c = 1;
    puVar6 = (u32 *)*piVar1;
    iStack_30 = (int)puStack_24 - (int)puVar6 >> 4;
    piVar2 = &iStack_30;
    if (iStack_30 == 0) {
      piVar2 = &iStack_2c;
    }
    if (iStack_30 + *piVar2 == 0) {
      puVar3 = (u32 *)0x0;
      iVar8 = 0;
      puVar4 = puVar3;
    }
    else {
      iVar8 = (iStack_30 + *piVar2) * 0x10;
      puVar3 = (u32 *)LibC_malloc(iVar8);
      if (puVar3 == (u32 *)0x0) {
        puVar3 = (u32 *)code_linkonce_Sub_080D3BC0(iVar8);
      }
      puVar6 = (u32 *)*piVar1;
      puVar4 = puVar3;
    }
    for (; puVar6 != puStack_24; puVar6 = puVar6 + 4) {
      if (puVar3 != (u32 *)0x0) {
        uVar9 = puVar6[1];
        uVar10 = puVar6[2];
        *puVar3 = *puVar6;
        puVar3[1] = uVar9;
        puVar3[2] = uVar10;
        puVar3[3] = puVar6[3];
      }
      puVar3 = puVar3 + 4;
    }
    iVar5 = iStack_2c;
    if (iStack_2c == 1) {
      if (puVar3 != (u32 *)0x0) {
        *puVar3 = uStack_40;
        puVar3[1] = uStack_3c;
        puVar3[2] = uStack_38;
        puVar3[3] = uStack_34;
      }
      puVar3 = puVar3 + 4;
    }
    else {
      for (; iVar5 != 0; iVar5 = iVar5 + -1) {
        if (puVar3 != (u32 *)0x0) {
          *puVar3 = uStack_40;
          puVar3[1] = uStack_3c;
          puVar3[2] = uStack_38;
          puVar3[3] = uStack_34;
        }
        puVar3 = puVar3 + 4;
      }
    }
    iVar7 = *piVar1;
    for (iVar5 = iVar7; iVar5 != piVar1[1]; iVar5 = iVar5 + 0x10) {
    }
    if (iVar7 != 0) {
      LibC_free(iVar7);
    }
    *piVar1 = (int)puVar4;
    piVar1[1] = (int)puVar3;
    piVar1[3] = iVar8 + (int)puVar4;
  }
  else {
    if (puStack_24 != (u32 *)0x0) {
      *puStack_24 = uStack_40;
      puStack_24[1] = uStack_3c;
      puStack_24[2] = uStack_38;
      puStack_24[3] = uStack_34;
    }
    piVar1[1] = piVar1[1] + 0x10;
  }
  return (puStack_28);
}

/* 0x080CC134 (16B) | hardware_SetField_0x00_C134 (orig: func_080CC134) | origin: pure | domain: hardware | MEDIUM / graph_algebra */
void hardware_SetField_0x00_C134(u32 *a, void *b, int c) { *a = ((u32 *)0x0811783C)[c]; }

/* 0x080CC144 (12B) | hardware_SetField_0x00_C144 (orig: func_080CC144) | origin: pure | domain: hardware | MEDIUM / graph_algebra */
void hardware_SetField_0x00_C144(u32 *a) { *a = *(u32 *)0x08117838; }

/* 0x080CD534 (36B) | hardware_Sub_080CD534 (orig: func_080CD534) | origin: pure | domain: hardware | MEDIUM / graph_algebra */
struct S { u32 a:8; u32 b:24; }; void hardware_Sub_080CD534(struct S *out, void *b, int c) { struct S v = ((struct S *)0x0811783C)[c]; v.a += 0x78; *out = v; }

/* 0x080CD558 (32B) | hardware_Sub_080CD558 (orig: func_080CD558) | origin: pure | domain: hardware | MEDIUM / graph_algebra */
struct S { u32 a:8; u32 b:24; }; void hardware_Sub_080CD558(struct S *out) { struct S v = *(struct S *)0x08117838; v.a += 0x78; *out = v; }

/* 0x080CD620 (640B) | hardware_Sub_080CD620 (orig: func_080CD620) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
void hardware_Sub_080CD620(int param_1) {
  int iVar1;
  u16 *puVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  u32 *puVar6;
  u32 *puVar7;
  int iVar8;
  u16 uVar9;
  u32 uVar10;
  u32 uVar11;
  u32 uStack_74;
  u32 uStack_70;
  u32 uStack_6c;
  u32 uStack_68;
  u8 auStack_64 [8];
  int aiStack_5c [2];
  int aiStack_54 [4];
  int iStack_44;
  int iStack_40;
  int *piStack_3c;
  int *piStack_38;
  int iStack_34;
  int iStack_30;
  u8 *puStack_2c;
  u32 *puStack_28;
  u32 *puStack_24;
  iVar1 = hardware_GetField_0x00_8918();
  *(u16 *)(iVar1 + 8) = 0x1d40;
  iVar1 = hardware_GetField_0x00_8918(param_1);
  *(short *)(iVar1 + 10) = (short)0x00001E41;
  iVar1 = hardware_GetField_0x00_8918(param_1);
  *(short *)(iVar1 + 0xc) = (short)0x00003F42;
  hardware_HW_DMA3SAD_8EB8(0xffffffff,0x0600F000,0x800);
  uVar10 = 0x0600F800;
  hardware_HW_DMA3SAD_8EB8(0xffffffff,0x0600F800,0x800);
  hardware_HW_DMA3SAD_8EB8(0,0x6000000,0x8000);
  puVar2 = (u16 *)hardware_GetField_0x00_8918(param_1);
  *puVar2 = 0x1640;
  hardware_HW_DMA3SAD(*(u16 *)0x080F9F78,0x5000000,0x20);
  hardware_HW_DMA3SAD(*(u16 *)0x080F9F70,0x6000000,*(u16 *)0x080F9F74);
  hardware_HW_DMA3SAD_8EB8(0x00030003,uVar10,0x800);
  puStack_2c = auStack_64;
  piStack_3c = aiStack_5c;
  piStack_38 = aiStack_54;
  iVar1 = 0x13;
  puVar2 = 0x0600F81C;
  do {
    *puVar2 = 8;
    puVar2[1] = 2;
    puVar2 = puVar2 + 0x20;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  hardware_HW_DMA3SAD_8EB8(0x03FF03FF,0x0600F000,0x800);
  piVar3 = (int *)hardware_GetField_0x00_8910(param_1);
  hardware_Sub_08008F0C(&uStack_74,0x08750C8C,0x06000400,0x1c0);
  puVar6 = (u32 *)piVar3[1];
  if (puVar6 == (u32 *)piVar3[3]) {
    iStack_40 = 1;
    puVar7 = (u32 *)*piVar3;
    iStack_44 = (int)puVar6 - (int)puVar7 >> 4;
    piVar4 = &iStack_44;
    if (iStack_44 == 0) {
      piVar4 = &iStack_40;
    }
    puStack_28 = puVar6;
    if (iStack_44 + *piVar4 == 0) {
      puStack_24 = (u32 *)0x0;
      iVar1 = 0;
    }
    else {
      iVar1 = (iStack_44 + *piVar4) * 0x10;
      puStack_24 = (u32 *)LibC_malloc(iVar1);
      if (puStack_24 == (u32 *)0x0) {
        puStack_24 = (u32 *)code_linkonce_Sub_080D3BC0(iVar1);
      }
      puVar7 = (u32 *)*piVar3;
    }
    iStack_34 = param_1 + 0x44;
    iStack_30 = param_1 + 0x80;
    puVar6 = puStack_24;
    for (; puVar7 != puStack_28; puVar7 = puVar7 + 4) {
      if (puVar6 != (u32 *)0x0) {
        uVar10 = puVar7[1];
        uVar11 = puVar7[2];
        *puVar6 = *puVar7;
        puVar6[1] = uVar10;
        puVar6[2] = uVar11;
        puVar6[3] = puVar7[3];
      }
      puVar6 = puVar6 + 4;
    }
    iVar5 = iStack_40;
    if (iStack_40 == 1) {
      if (puVar6 != (u32 *)0x0) {
        *puVar6 = uStack_74;
        puVar6[1] = uStack_70;
        puVar6[2] = uStack_6c;
        puVar6[3] = uStack_68;
      }
      puVar6 = puVar6 + 4;
    }
    else {
      for (; iVar5 != 0; iVar5 = iVar5 + -1) {
        if (puVar6 != (u32 *)0x0) {
          *puVar6 = uStack_74;
          puVar6[1] = uStack_70;
          puVar6[2] = uStack_6c;
          puVar6[3] = uStack_68;
        }
        puVar6 = puVar6 + 4;
      }
    }
    iVar8 = *piVar3;
    for (iVar5 = iVar8; iVar5 != piVar3[1]; iVar5 = iVar5 + 0x10) {
    }
    if (iVar8 != 0) {
      LibC_free(iVar8);
    }
    *piVar3 = (int)puStack_24;
    piVar3[1] = (int)puVar6;
    piVar3[3] = (int)puStack_24 + iVar1;
  }
  else {
    if (puVar6 != (u32 *)0x0) {
      *puVar6 = uStack_74;
      puVar6[1] = uStack_70;
      puVar6[2] = uStack_6c;
      puVar6[3] = uStack_68;
    }
    piVar3[1] = piVar3[1] + 0x10;
    iStack_34 = param_1 + 0x44;
    iStack_30 = param_1 + 0x80;
  }
  func_080D3918(puStack_2c,*(int **)(param_1 + 0x44),
                  *(u16 *)(*(int *)(param_1 + 0x48) + (u32)*(u16 *)(iStack_34 + 0xc) * 4)
                  ,*(u32 *)(**(int **)(param_1 + 0x44) + 0x10));
  uVar9 = 0;
  if (aiStack_5c[0] != 0) {
    uVar9 = (u16)piStack_3c[1];
  }
  hardware_HW_DMA3SAD(aiStack_5c[0],0x06000380,uVar9);
  uVar9 = 0;
  if (aiStack_54[0] != 0) {
    uVar9 = (u16)piStack_38[1];
  }
  hardware_HW_DMA3SAD(aiStack_54[0],0x05000020,uVar9);
  code_0803EE94_78C0_Sub_08050D5C(iStack_30);
}

/* 0x080CE120 (100B) | hardware_Sub_080CE120 (orig: func_080CE120) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
u32 hardware_Sub_080CE120(u32 *param_1,int param_2,int param_3,u32 param_4) {
  u32 uStack_18;
  u32 uStack_14;
  u32 uStack_10;
  u32 uStack_c;
  if ((u8)param_3 == 0) {
    if (*(int *)(param_2 + 0x78) != 0) {
      hardware_SetField_0x00_C144(&uStack_18);
      param_4 = uStack_18;
    }
  }
  else if (param_3 == 9) {
    if (*(int *)(param_2 + 0x7c) != 0) {
      hardware_Sub_080CD558(&uStack_14);
      param_4 = uStack_14;
    }
  }
  else if ((u32)param_3 < 9) {
    if (*(int *)(param_2 + 0x78) != 0) {
      hardware_SetField_0x00_C134(&uStack_10,*(int *)(param_2 + 0x78),param_3 + -1);
      param_4 = uStack_10;
    }
  }
  else if (*(int *)(param_2 + 0x7c) != 0) {
    hardware_Sub_080CD534(&uStack_c,*(int *)(param_2 + 0x7c),param_3 + -10);
    param_4 = uStack_c;
  }
  *param_1 = param_4;
  return (param_1);
}

/* 0x080CE294 (48B) | hardware_Sub_080CE294 (orig: func_080CE294) | origin: pure | domain: hardware | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_0803EE94_Sub_08050E98();
extern u32 hardware_Sub_080CD620();
void hardware_Sub_080CE294(int arg0) {
  hardware_Sub_080CD620();
  arg0 = arg0 + 0x80;
  code_0803EE94_Sub_08050E98(arg0,1);
  code_0803EE94_Sub_08050E98(arg0,2);
  code_0803EE94_Sub_08050E98(arg0,4);
  code_0803EE94_Sub_08050E98(arg0,8);
}

/* 0x080CE2C4 (56B) | hardware_Sub_080CE2C4 (orig: func_080CE2C4) | origin: pure | domain: hardware | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_809E804_Sub_080CD8A0();
extern u32 hardware_Sub_080CDDD4();
extern u32 hardware_Sub_080CE790();
extern u32 hardware_Sub_080CECE8();
void hardware_Sub_080CE2C4(int arg0) {
  if (*(int *)(arg0 + 0x8c) != 0) {
    hardware_Sub_080CDDD4();
  }
  if (*(int *)(arg0 + 0x90) != 0) {
    hardware_Sub_080CECE8();
  }
  if (*(int *)(arg0 + 0x94) != 0) {
    hardware_Sub_080CE790();
  }
  code_809E804_Sub_080CD8A0(arg0);
}

/* 0x080CE480 (144B) | hardware_Sub_080CE480 (orig: func_080CE480) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
void hardware_Sub_080CE480(u32 *param_1,u32 param_2,u16 param_3,u32 param_4,
             u32 param_5,u16 param_6,u32 param_7) {
    int * piVar4;
    u32 * puVar5;
  u32 uVar1;
  int iVar2;
  register s16 iVar3;
  uVar1 = CppRuntime_builtin_new(0x20);
  iVar2 = (u16)code_0803EE94_7868_Ctor(uVar1,param_2,param_3,param_4,param_5,param_6,param_7);
  iVar3 = param_1[0x31];
  piVar4 = (int *)LibC_malloc(0xc);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)code_linkonce_Sub_080D3BC0(0xc);
  }
  if (piVar4 != (u8)(int *)0xfffffff8) {
    piVar4[2] = iVar2;
  }
  puVar5 = *(u32 **)(iVar3 + 4);
  *piVar4 = iVar3;
  piVar4[1] = (int)puVar5;
  *puVar5 = piVar4;
  *(int **)(iVar3 + 4) = piVar4;
  iVar3 = hardware_GetField_0x00_8940(*param_1);
  func_080D3914(iVar3,iVar2,*(u32 *)(*(int *)(iVar3 + 8) + 0x10));
}

/* 0x080CE510 (136B) | hardware_Sub_080CE510 (orig: func_080CE510) | origin: wip | domain: hardware | MEDIUM / tu_interp */
void hardware_Sub_080CE510(u32 *param_1,u32 param_2,u32 param_3,u16 param_4,
             u16 param_5,u32 param_6) {
    int iVar2;
    int uVar1;
    u32 * puVar5;
  register int *piVar4;
  register s32 iVar3;
  uVar1 = CppRuntime_builtin_new(0x1c);
  iVar2 = (s16)code_0803EE94_7838_Ctor(uVar1,param_2,param_3,param_4,param_5,param_6);
  iVar3 = param_1[0x31];
  piVar4 = (int *)LibC_malloc(0xc);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)code_linkonce_Sub_080D3BC0(0xc);
  }
  if (piVar4 != (int *)0xfffffff8) {
    piVar4[2] = iVar2;
  }
  puVar5 = *(u32 **)(iVar3 + 4);
  *piVar4 = iVar3;
  piVar4[1] = (int)puVar5;
  *puVar5 = piVar4;
  *(int **)(iVar3 + 4) = piVar4;
  iVar3 = hardware_GetField_0x00_8940(*param_1);
  func_080D3914(iVar3,iVar2,*(u32 *)(*(int *)(8 + iVar3) + 0x10));
}

/* 0x080CE598 (504B) | hardware_Sub_080CE598 (orig: func_080CE598) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
void hardware_Sub_080CE598(u32 *param_1) {
  int *piVar1;
  int iVar2;
  u32 *puVar3;
  u32 *puVar4;
  u16 uVar5;
  int iVar6;
  u32 uVar7;
  u32 *puVar8;
  u32 uVar9;
  u8 auStack_74 [16];
  int iStack_64;
  u16 uStack_60;
  u32 uStack_54;
  u32 uStack_50;
  u32 uStack_4c;
  u32 uStack_48;
  int iStack_44;
  int iStack_40;
  u32 *puStack_3c;
  u16 *puStack_38;
  u32 *puStack_34;
  u16 *puStack_30;
  int *piStack_2c;
  int *piStack_28;
  u32 *puStack_24;
  func_080D3918(auStack_74,(int *)param_1[0x14],
                  *(u16 *)(param_1[0x15] + (u32)*(u16 *)(param_1 + 0x17) * 4),
                  *(u32 *)(*(int *)param_1[0x14] + 0x10));
  piVar1 = (int *)hardware_GetField_0x00_8910(*param_1);
  iVar6 = iStack_64;
  iVar2 = hardware_Sub_080074C0(param_1 + 5,param_1[6]);
  uVar5 = 0;
  if (iStack_64 != 0) {
    uVar5 = uStack_60;
  }
  piStack_28 = piVar1;
  hardware_Sub_08008F0C(&uStack_54,iVar6,iVar2 * 0x20 + 0x05000200,uVar5);
  puVar3 = (u32 *)piVar1[1];
  if (puVar3 == (u32 *)piVar1[3]) {
    iStack_40 = 1;
    iStack_44 = (int)puVar3 - *piStack_28 >> 4;
    piVar1 = &iStack_44;
    if (iStack_44 == 0) {
      piVar1 = &iStack_40;
    }
    if (iStack_44 + *piVar1 == 0) {
      puStack_24 = (u32 *)0x0;
      iVar6 = 0;
    }
    else {
      iVar6 = (iStack_44 + *piVar1) * 0x10;
      puStack_24 = (u32 *)LibC_malloc(iVar6);
      if (puStack_24 == (u32 *)0x0) {
        puStack_24 = (u32 *)code_linkonce_Sub_080D3BC0(iVar6);
      }
    }
    puStack_34 = param_1 + 0x13;
    puStack_30 = (u16 *)((int)param_1 + 0x4e);
    puStack_3c = param_1 + 0x21;
    puStack_38 = (u16 *)((int)param_1 + 0x86);
    piStack_2c = param_1 + 0x2f;
    puVar8 = puStack_24;
    for (puVar4 = (u32 *)*piStack_28; puVar4 != puVar3; puVar4 = puVar4 + 4) {
      if (puVar8 != (u32 *)0x0) {
        uVar7 = puVar4[1];
        uVar9 = puVar4[2];
        *puVar8 = *puVar4;
        puVar8[1] = uVar7;
        puVar8[2] = uVar9;
        puVar8[3] = puVar4[3];
      }
      puVar8 = puVar8 + 4;
    }
    iVar2 = iStack_40;
    if (iStack_40 == 1) {
      if (puVar8 != (u32 *)0x0) {
        *puVar8 = uStack_54;
        puVar8[1] = uStack_50;
        puVar8[2] = uStack_4c;
        puVar8[3] = uStack_48;
      }
      puVar8 = puVar8 + 4;
    }
    else {
      for (; iVar2 != 0; iVar2 = iVar2 + -1) {
        if (puVar8 != (u32 *)0x0) {
          *puVar8 = uStack_54;
          puVar8[1] = uStack_50;
          puVar8[2] = uStack_4c;
          puVar8[3] = uStack_48;
        }
        puVar8 = puVar8 + 4;
      }
    }
    for (iVar2 = *piStack_28; iVar2 != piStack_28[1]; iVar2 = iVar2 + 0x10) {
    }
    if (*piStack_28 != 0) {
      LibC_free();
    }
    *piStack_28 = (int)puStack_24;
    piStack_28[1] = (int)puVar8;
    piStack_28[3] = (int)puStack_24 + iVar6;
  }
  else {
    if (puVar3 != (u32 *)0x0) {
      *puVar3 = uStack_54;
      puVar3[1] = uStack_50;
      puVar3[2] = uStack_4c;
      puVar3[3] = uStack_48;
    }
    piStack_28[1] = piStack_28[1] + 0x10;
    puStack_34 = param_1 + 0x13;
    puStack_30 = (u16 *)((int)param_1 + 0x4e);
    puStack_3c = param_1 + 0x21;
    puStack_38 = (u16 *)((int)param_1 + 0x86);
    piStack_2c = param_1 + 0x2f;
  }
  *(u16 *)puStack_34 = 0xe8;
  *puStack_30 = 0x28;
  *(u16 *)puStack_3c = 0xe8;
  *puStack_38 = 0x50;
  hardware_Sub_080CE510(param_1,*piStack_2c + 1,0x0600F0F6,0x20,0,0x20);
  hardware_Sub_080CE480(param_1,0x0600F0F8,0x2d,1,1,0,0x20);
  hardware_Sub_080CE510(param_1,8,0x0600F0FA,0x20,0,0x20);
}

/* 0x080CEB5C (36B) | hardware_Sub_080CEB5C (orig: func_080CEB5C) | origin: pure | domain: hardware | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 hardware_Sub_080CE510();
void hardware_Sub_080CEB5C(int arg0,int arg1) {
  *(int *)(arg0 + 0xbc) = arg1;
  hardware_Sub_080CE510(arg0,arg1 + 1,0x0600F0F6,0x20,0,0x20);
}

/* 0x080CEC84 (76B) | hardware_Sub_080CEC84 (orig: func_080CEC84) | origin: pure | domain: hardware | MEDIUM / graph_algebra */
struct Sub { s32 flg:3; };
struct Pair { u8 a, b; };
extern struct Sub code_0803EE94_Sub_0805E8F0();
extern void hardware_Sub_080CE120();
void hardware_Sub_080CEC84(int param_1, u32 param_2, u32 param_3) {
    struct Pair buf;
    u32 p0;
    *(u8 *)(param_1 + 0x84) = 1;
    *(u8 *)(param_1 + 0x68) = 1;
    do {
    } while (code_0803EE94_Sub_0805E8F0(param_1 + 0x38).flg >= 0);
    p0 = *(u32 *)param_1;
    hardware_Sub_080CE120(&buf, p0, param_2);
    *(u16 *)(param_1 + 0x34) = buf.a + 8;
    *(u16 *)(param_1 + 0x36) = buf.b;
    *(u32 *)(param_1 + 0x7c) = param_2;
    *(u32 *)(param_1 + 0x80) = param_3;
}

/* 0x080CECD0 (24B) | hardware_Sub_080CECD0 (orig: func_080CECD0) | origin: pure | domain: hardware | MEDIUM / tu_interp */
struct Sub { u32 a; u8 b; };
struct S { u8 pad[0x68]; u8 f68; u8 pad2[0x13]; u32 f7c; Sub sub; };
extern "C" void hardware_Sub_080CECD0(S *s) {
    s->sub.b = 0;
    s->f68 = 0;
    s->f7c = 0x12;
    s->sub.a = 0;
}

/* 0x080D6D98 (32B) | hardware_Sub_080D6D98 (orig: func_080D6D98) | origin: pure | domain: hardware | MEDIUM / graph_algebra */
u32 *hardware_Sub_080D6D98(u32 *param_1, int param_2, u32 param_3) {
    u32 *base = param_1;
    int off = (param_2 << 2) - 4;
    u32 *p;
    
    p = (u32 *)((int)base + off);
    *p = param_3;
    while (p != base) {
        u32 prev = (u32)p;
        p--;
        *p = prev;
    }
    return p;
}

/* 0x080D6DB8 (224B) | hardware_Sub_080D6DB8 (orig: func_080D6DB8) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
void hardware_Sub_080D6DB8(int *param_1,u32 param_2) {
  int iVar1;
  int iVar2;
  u32 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  iVar5 = *param_1;
  if ((u32)(param_1[3] - iVar5 >> 3) < param_2) {
    iVar6 = param_1[1];
    iVar1 = iVar6 - iVar5;
    if (iVar5 == 0) {
      if (param_2 == 0) {
        iVar4 = 0;
        iVar7 = 0;
      }
      else {
        iVar7 = param_2 * 8;
        iVar4 = LibC_malloc(iVar7);
        if (iVar4 == 0) {
          iVar4 = code_linkonce_Sub_080D3BC0(iVar7);
        }
      }
    }
    else {
      if (param_2 == 0) {
        iVar2 = 0;
        iVar7 = 0;
        iVar4 = iVar2;
      }
      else {
        iVar7 = param_2 * 8;
        iVar2 = LibC_malloc(iVar7);
        iVar4 = iVar2;
        if ((u8)iVar2 == 0) {
          iVar2 = code_linkonce_Sub_080D3BC0(iVar7);
          iVar4 = iVar2;
        }
      }
      for (; iVar5 != iVar6; iVar5 = iVar5 + 8) {
        if (iVar2 != 0) {
          hardware_Sub_08007128(iVar2);
          uVar3 = hardware_Sub_0800745C(iVar2,*(u32 *)(iVar5 + 4));
          *(u32 *)(iVar2 + 4) = uVar3;
        }
        iVar2 = iVar2 + 8;
      }
      iVar6 = param_1[1];
      for (iVar5 = *param_1; iVar5 != iVar6; iVar5 = iVar5 + 8) {
        hardware_Sub_080073E0(iVar5,*(u32 *)(iVar5 + 4));
        hardware_Sub_08007184(iVar5,2);
      }
      if (*param_1 != 0) {
        LibC_free();
      }
    }
    *param_1 = iVar4;
    param_1[1] = (iVar1 >> 3) * 8 + iVar4;
    param_1[3] = (u16)iVar7 + iVar4;
  }
}

/* 0x080D6E98 (20B) | hardware_Sub_080D6E98 (orig: func_080D6E98) | origin: pure | domain: hardware | MEDIUM / tu_interp */
struct S { u8 a, b; u32 c, d; }; void hardware_Sub_080D6E98(struct S *p) { p->c = -1; p->d = -1; p->a = 1; p->b = 0; }

/* 0x080D6EAC (32B) | hardware_Sub_080D6EAC (orig: func_080D6EAC) | origin: pure | domain: hardware | MEDIUM / tu_interp */
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
extern u32 hardware_Sub_080D6E98();
void hardware_Sub_080D6EAC(u8 *arg0) {
  hardware_Sub_080D6E98(arg0 + 4);
  hardware_Sub_080D6E98(arg0 + 0x10);
  { u8 zero = 0; *arg0 = 1; arg0[1] = zero; }
}

/* 0x080D6ECC (32B) | hardware_Sub_080D6ECC (orig: func_080D6ECC) | origin: pure | domain: hardware | MEDIUM / tu_interp */
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
extern u32 hardware_Sub_080D6EAC();
void hardware_Sub_080D6ECC(u8 *arg0) {
  hardware_Sub_080D6EAC(arg0 + 4);
  hardware_Sub_080D6EAC(arg0 + 0x20);
  { u8 zero = 0; *arg0 = 1; arg0[1] = zero; }
}

/* 0x080D6EEC (32B) | hardware_Sub_080D6EEC (orig: func_080D6EEC) | origin: pure | domain: hardware | MEDIUM / graph_algebra */
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
extern u32 hardware_Sub_080D6ECC();
void hardware_Sub_080D6EEC(u8 *arg0) {
  hardware_Sub_080D6ECC(arg0 + 4);
  hardware_Sub_080D6ECC(arg0 + 0x40);
  { u8 zero = 0; *arg0 = 1; arg0[1] = zero; }
}

/* 0x080D6F0C (16B) | hardware_SetField_0x08 (orig: func_080D6F0C) | origin: pure | domain: hardware | MEDIUM / tu_interp */
struct S { u8 a, b; u32 c, d; }; void hardware_SetField_0x08(struct S *p) { p->d = 0; p->c = 0; p->a = 0; p->b = 1; }

/* 0x080D6F1C (32B) | hardware_Sub_080D6F1C (orig: func_080D6F1C) | origin: pure | domain: hardware | MEDIUM / tu_interp */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 hardware_SetField_0x08();
void hardware_Sub_080D6F1C(u8 *arg0) {
  hardware_SetField_0x08(arg0 + 0x10);
  hardware_SetField_0x08(arg0 + 4);
  *arg0 = 0;
  arg0[1] = 1;
}

/* 0x080D6F3C (32B) | hardware_Sub_080D6F3C (orig: func_080D6F3C) | origin: pure | domain: hardware | MEDIUM / tu_interp */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 hardware_Sub_080D6F1C();
void hardware_Sub_080D6F3C(u8 *arg0) {
  hardware_Sub_080D6F1C(arg0 + 0x20);
  hardware_Sub_080D6F1C(arg0 + 4);
  *arg0 = 0;
  arg0[1] = 1;
}

/* 0x080D6F5C (32B) | hardware_Sub_080D6F5C (orig: func_080D6F5C) | origin: pure | domain: hardware | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 hardware_Sub_080D6F3C();
void hardware_Sub_080D6F5C(u8 *arg0) {
  hardware_Sub_080D6F3C(arg0 + 0x40);
  hardware_Sub_080D6F3C(arg0 + 4);
  *arg0 = 0;
  arg0[1] = 1;
}

/* 0x080D6F7C (152B) | hardware_Sub_080D6F7C (orig: func_080D6F7C) | origin: wip | domain: hardware | MEDIUM / tu_interp */
void hardware_Sub_080D6F7C(u8 *param_1,u32 param_2,u32 param_3) {
  u8 uVar1;
  u32 uVar2;
  u32 *puVar3;
  u32 uStack_14;
  u32 uStack_10;
  uStack_14 = param_3;
  if ((param_2 < 0x40) && (param_3 != 0)) {
    if ((param_2 == 0) && (0x3f < param_3)) {
      hardware_Sub_080D6E98();
    }
    else {
      if (param_2 < 0x20) {
        uStack_10 = 0x20 - param_2;
        puVar3 = &uStack_14;
        if (0x20 - param_2 < param_3) {
          puVar3 = &uStack_10;
        }
        *(u32 *)(param_1 + 4) =
             *(u32 *)(param_1 + 4) | (1 << (*puVar3 & 0xff)) + -1 << (param_2 & 0xff);
      }
      if (0x20 < param_2 + param_3) {
        uVar2 = 0;
        if (0x1f < param_2) {
          uVar2 = param_2 - 0x20;
        }
        *(u32 *)(param_1 + 8) =
             *(u32 *)(param_1 + 8) |
             (1 << (((param_2 + param_3) - 0x20) - uVar2 & 0xff)) + -1 << (uVar2 & 0xff);
      }
      uVar1 = 0;
      if ((*(int *)(param_1 + 4) == -1) && (*(int *)(param_1 + 8) == -1)) {
        uVar1 = 1;
      }
      *param_1 = uVar1;
      param_1[1] = 0;
    }
  }
}

/* 0x080D7014 (128B) | hardware_Sub_080D7014 (orig: func_080D7014) | origin: wip | domain: hardware | MEDIUM / tu_interp */
void hardware_Sub_080D7014(u8 *param_1,u32 param_2,u32 param_3) {
  u8 bVar1;
  int iVar2;
  u32 *puVar3;
  u32 uStack_14;
  u32 uStack_10;
  uStack_14 = param_3;
  if ((param_2 < 0x80) && (param_3 != 0)) {
    if ((param_2 == 0) && (0x7f < param_3)) {
      hardware_Sub_080D6EAC(param_1);
    }
    else {
      if ((u8)param_2 < 0x40) {
        uStack_10 = 0x40 - param_2;
        puVar3 = &uStack_14;
        if (0x40 - param_2 < param_3) {
          puVar3 = (s8)&uStack_10;
        }
        hardware_Sub_080D6F7C(param_1 + 4,param_2,*puVar3);
      }
      if (0x40 < param_2 + uStack_14) {
        iVar2 = 0;
        if (0x3f < param_2) {
          iVar2 = param_2 - 0x40;
        }
        hardware_Sub_080D6F7C(param_1 + 0x10,iVar2,((param_2 + uStack_14) - 0x40) - iVar2);
      }
      bVar1 = 0;
      if (param_1[4] != 0) {
        bVar1 = (u8)(-(u32)param_1[0x10] >> 0x1f);
      }
      *param_1 = bVar1;
      param_1[1] = 0;
    }
  }
}

/* 0x080D7094 (132B) | hardware_Sub_080D7094 (orig: func_080D7094) | origin: wip | domain: hardware | MEDIUM / tu_interp */
void hardware_Sub_080D7094(u8 *param_1,u32 param_2,u32 param_3) {
    u32 * puVar3;
    u32 uStack_14;
    u32 uStack_10;
    u32 tmp_a2;
  register u8 bVar1;
  register s8 iVar2;
  uStack_14 = param_3;
  if ((param_2 < 0x100) && (param_3 != 0)) {
    if ((param_2 == 0) && (0xff < param_3)) {
      hardware_Sub_080D6ECC(param_1);
    }
    else {
      if (param_2 < 0x80) {
        uStack_10 = 0x80 - param_2;
        puVar3 = &uStack_14;
        if (0x80 - param_2 < param_3) {
          puVar3 = &uStack_10;
        }
        hardware_Sub_080D7014(param_1 + 4,param_2,*puVar3);
      }
      if (0x80 < param_2 + uStack_14) {
        iVar2 = 0;
        if (0x7f < param_2) {
          iVar2 = (s16)param_2 - 0x80;
        }
        tmp_a2 = ((param_2 + uStack_14) - 0x80) - iVar2;
        hardware_Sub_080D7014(param_1 + 0x20, iVar2, tmp_a2);
      }
      bVar1 = 0;
      if (param_1[4] != 0) {
        bVar1 = (u8)(-(u32)param_1[0x20] >> 0x1f);
      }
      *param_1 = bVar1;
      param_1[1] = 0;
    }
  }
}

/* 0x080D7118 (148B) | hardware_Sub_080D7118 (orig: func_080D7118) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
void hardware_Sub_080D7118(u8 *param_1,u32 param_2,u32 param_3) {
    int iVar2;
    u32 * puVar3;
    u32 uStack_14;
    u32 uStack_10;
  register u8 bVar1;
  uStack_14 = param_3;
  if ((param_2 <= 0x000001FF) && (param_3 != 0)) {
    if ((param_2 == 0) && (0x000001FF < param_3)) {
      hardware_Sub_080D6EEC(param_1);
    }
    else {
      if ((u16)param_2 < 0x100) {
        uStack_10 = 0x100 - param_2;
        puVar3 = &uStack_14;
        if (0x100 - param_2 < param_3) {
          puVar3 = (s16)&uStack_10;
        }
        hardware_Sub_080D7094(param_1 + 4,param_2,*puVar3);
      }
      if (0x100 < param_2 + uStack_14) {
        iVar2 = 0;
        if (0xff < param_2) {
          iVar2 = param_2 + 0xFFFFFF00;
        }
        hardware_Sub_080D7094(param_1 + 0x40,iVar2,((param_2 + uStack_14) - 0x100) - iVar2);
      }
      bVar1 = 0;
      if (param_1[4] != 0) {
        bVar1 = (u8)(-(u32)param_1[0x40] >> 0x1f);
      }
      *param_1 = bVar1;
      param_1[1] = 0;
    }
  }
}

/* 0x080D71AC (148B) | hardware_Sub_080D71AC (orig: func_080D71AC) | origin: wip | domain: hardware | MEDIUM / tu_interp */
void hardware_Sub_080D71AC(u8 *param_1,u32 param_2,u32 param_3) {
  u8 uVar1;
  u32 uVar2;
  u32 *puVar3;
  u32 uStack_14;
  u32 uStack_10;
  uStack_14 = param_3;
  if ((param_2 < 0x40) && (param_3 != 0)) {
    if ((param_2 == 0) && (0x3f < param_3)) {
      hardware_SetField_0x08();
    }
    else {
      if (param_2 < 0x20) {
        uStack_10 = 0x20 - param_2;
        puVar3 = &uStack_14;
        if (0x20 - param_2 < param_3) {
          puVar3 = &uStack_10;
        }
        *(u32 *)(param_1 + 4) =
             *(u32 *)(param_1 + 4) & ~((1 << (*puVar3 & 0xff)) + -1 << (param_2 & 0xff));
      }
      if (0x20 < param_2 + param_3) {
        uVar2 = 0;
        if (0x1f < param_2) {
          uVar2 = param_2 - 0x20;
        }
        *(u32 *)(param_1 + 8) =
             *(u32 *)(param_1 + 8) &
             ~((1 << (((param_2 + param_3) - 0x20) - uVar2 & 0xff)) + -1 << (uVar2 & 0xff));
      }
      *param_1 = 0;
      uVar1 = 0;
      if ((*(int *)(param_1 + 4) == 0) && (*(int *)(param_1 + 8) == 0)) {
        uVar1 = 1;
      }
      param_1[1] = uVar1;
    }
  }
}

/* 0x080D7240 (132B) | hardware_Sub_080D7240 (orig: func_080D7240) | origin: wip | domain: hardware | MEDIUM / tu_interp */
void hardware_Sub_080D7240(u8 *param_1,u32 param_2,u32 param_3) {
  u16 bVar1;
  u32 *puVar3;
  u32 iVar2;
  s8 uStack_18;
  u32 uStack_14;
  uStack_18 = param_3;
  if ((param_2 < 0x80) && (param_3 != 0)) {
    if ((param_2 == 0) && (0x7f < param_3)) {
      hardware_Sub_080D6F1C(param_1);
    }
    else {
      if (param_2 < 0x40) {
        uStack_14 = 0x40 - param_2;
        puVar3 = &uStack_18;
        if (0x40 - param_2 < param_3) {
          puVar3 = &uStack_14;
        }
        hardware_Sub_080D71AC(param_1 + 4,param_2,*puVar3);
      }
      if (0x40 < param_2 + uStack_18) {
        iVar2 = 0;
        if (0x3f < param_2) {
          iVar2 = param_2 - 0x40;
        }
        hardware_Sub_080D71AC(0x10 + param_1,iVar2,((param_2 + uStack_18) - 0x40) - iVar2);
      }
      *param_1 = 0;
      bVar1 = 0;
      if (param_1[5] != '\0') {
        bVar1 = (u8)(-(u32)(u8)param_1[0x11] >> 0x1f);
      }
      param_1[1] = bVar1;
    }
  }
}

/* 0x080D72C4 (136B) | hardware_Sub_080D72C4 (orig: func_080D72C4) | origin: wip | domain: hardware | MEDIUM / tu_interp */
void hardware_Sub_080D72C4(u8 *param_1,u32 param_2,u32 param_3) {
  u8 bVar1;
  int iVar2;
  u32 *puVar3;
  u32 uStack_18;
  u32 uStack_14;
  uStack_18 = param_3;
  if ((param_2 < 0x100) && (param_3 != 0)) {
    if ((param_2 == 0) && (0xff < param_3)) {
      hardware_Sub_080D6F3C(param_1);
    }
    else {
      if ((u16)param_2 < 0x80) {
        uStack_14 = 0x80 - param_2;
        puVar3 = &uStack_18;
        if (0x80 - param_2 < param_3) {
          puVar3 = &uStack_14;
        }
        hardware_Sub_080D7240(param_1 + 4,param_2,*puVar3);
      }
      if (0x80 < param_2 + uStack_18) {
        iVar2 = 0;
        if (0x7f < param_2) {
          iVar2 = param_2 - 0x80;
        }
        hardware_Sub_080D7240(param_1 + 0x20,iVar2,((param_2 + uStack_18) - 0x80) - iVar2);
      }
      *param_1 = 0;
      bVar1 = 0;
      if (param_1[5] != '\0') {
        bVar1 = (u8)(-(u32)(u8)param_1[0x21] >> 0x1f);
      }
      param_1[1] = bVar1;
    }
  }
}

/* 0x080D734C (152B) | hardware_Sub_080D734C (orig: func_080D734C) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
void hardware_Sub_080D734C(u8 *param_1,u32 param_2,u32 param_3) {
  u8 bVar1;
  int iVar2;
  u32 *puVar3;
  u32 uStack_18;
  u32 uStack_14;
  uStack_18 = param_3;
  if ((param_2 <= 0x000001FF) && (param_3 != 0)) {
    if ((param_2 == 0) && (0x000001FF < param_3)) {
      hardware_Sub_080D6F5C(param_1);
    }
    else {
      if (param_2 < 0x100) {
        uStack_14 = 0x100 - param_2;
        puVar3 = &uStack_18;
        if (0x100 - param_2 < param_3) {
          puVar3 = &uStack_14;
        }
        hardware_Sub_080D72C4(param_1 + 4,param_2,*puVar3);
      }
      if (0x100 < param_2 + uStack_18) {
        iVar2 = 0;
        if (0xff < param_2) {
          iVar2 = param_2 + 0xFFFFFF00;
        }
        hardware_Sub_080D72C4(param_1 + 0x40,iVar2,((param_2 + uStack_18) - 0x100) - iVar2);
      }
      *param_1 = 0;
      bVar1 = 0;
      if (param_1[5] != '\0') {
        bVar1 = (u8)(-(u32)(u8)param_1[0x41] >> 0x1f);
      }
      param_1[1] = bVar1;
    }
  }
}

/* 0x080D73E4 (156B) | hardware_Sub_080D73E4 (orig: func_080D73E4) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
u32 hardware_Sub_080D73E4(int *param_1,u32 param_2) {
  u32 uVar1;
  u8 uVar2;
  int *piVar3;
  int iVar4;
  if (param_2 < 6) {
    iVar4 = 0;
    piVar3 = param_1;
    do {
      piVar3 = piVar3 + 1;
      if ((*piVar3 != -1) && (uVar1 = hardware_Sub_080077DC(piVar3,param_2), uVar1 < 0x20)) {
        *(u8 *)((int)param_1 + 1) = 0;
        uVar2 = 0;
        if ((param_1[1] == -1) && (param_1[2] == -1)) {
          uVar2 = 1;
        }
        *(u8 *)param_1 = uVar2;
        uVar1 = iVar4 << 5 | uVar1;
        goto LAB_080d7474;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 2);
  }
  else if ((param_2 == 6) && (*(char *)((int)param_1 + 1) != '\0')) {
    hardware_Sub_080D6E98(param_1);
    uVar1 = 0;
    goto LAB_080d7474;
  }
  uVar1 = 0x40;
LAB_080d7474:
  return uVar1;
}

/* 0x080D7480 (112B) | hardware_Sub_080D7480 (orig: func_080D7480) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
u32 hardware_Sub_080D7480(u8 *param_1, u8 param_2) {
    u8 * pbVar4;
  s8 uVar1;
  register int iVar3;
  register u8 bVar2;
  if (param_2 < 7) {
    iVar3 = 0;
    pbVar4 = param_1 + 4;
    do {
      if ((*pbVar4 == 0) && (uVar1 = hardware_Sub_080D73E4(pbVar4,param_2), uVar1 < 0x40)) {
        param_1[1] = (u16)0;
        bVar2 = 0;
        if (param_1[4] != 0) {
          bVar2 = (u8)(-(u32)param_1[0x10] >> 0x1f);
        }
        *param_1 = bVar2;
        uVar1 = iVar3 << 6 | uVar1;
        goto LAB_080d74e8;
      }
      pbVar4 = pbVar4 + 0xc;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 2);
  }
  else if ((param_2 == 7) && (param_1[1] != 0)) {
    hardware_Sub_080D6EAC(param_1);
    uVar1 = 0;
    goto LAB_080d74e8;
  }
  uVar1 = 0x80;
LAB_080d74e8:
  return uVar1;
}

/* 0x080D74F0 (120B) | hardware_Sub_080D74F0 (orig: func_080D74F0) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
u32 hardware_Sub_080D74F0(u8 *param_1, char param_2) {
    u8 * pbVar4;
  register s16 uVar1;
  register s8 bVar2;
  register int iVar3;
  if (8 > param_2) {
    iVar3 = 0;
    pbVar4 = param_1 + 4;
    do {
      if ((*pbVar4 == 0) && (uVar1 = hardware_Sub_080D7480(pbVar4,param_2), 0x80 > uVar1)) {
        param_1[1] = 0;
        bVar2 = 0;
        if (0 != param_1[4]) {
          bVar2 = (u8)(-(u32)param_1[0x20] >> 0x1f);
        }
        *param_1 = bVar2;
        uVar1 = iVar3 << 7 | uVar1;
        goto LAB_080d755e;
      }
      pbVar4 = (u32)0x1c + pbVar4;
      iVar3++;
    } while (iVar3 < 2);
  }
  else if ((param_2 == 8) && (param_1[1] != 0)) {
    hardware_Sub_080D6ECC(param_1);
    uVar1 = 0;
    goto LAB_080d755e;
  }
  uVar1 = 0x100;
LAB_080d755e:
  return uVar1;
}

/* 0x080D7568 (120B) | hardware_Sub_080D7568 (orig: func_080D7568) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
u32 hardware_Sub_080D7568(u8 *param_1,u32 param_2) {
  u32 uVar1;
  u8 bVar2;
  int iVar3;
  u8 *pbVar4;
  if (param_2 < 9) {
    iVar3 = 0;
    pbVar4 = param_1 + 4;
    do {
      if ((*pbVar4 == 0) && (uVar1 = hardware_Sub_080D74F0(pbVar4,param_2), uVar1 < 0x100)) {
        param_1[1] = 0;
        bVar2 = 0;
        if (param_1[4] != 0) {
          bVar2 = (u8)(-(u32)param_1[0x40] >> 0x1f);
        }
        *param_1 = bVar2;
        uVar1 = (u8)iVar3 << uVar1 | 8;
        goto LAB_080d75d6;
      }
      pbVar4 = pbVar4 + 0x3c;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 2);
  }
  else if ((param_2 == 9) && (param_1[1] != 0)) {
    hardware_Sub_080D6EEC(param_1);
    uVar1 = 0;
    goto LAB_080d75d6;
  }
  uVar1 = 0x200;
LAB_080d75d6:
  return uVar1;
}

/* 0x080D75E0 (84B) | hardware_Sub_080D75E0 (orig: func_080D75E0) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
void hardware_Sub_080D75E0(u8 *param_1,u32 param_2,u32 param_3) {
  u8 uVar1;
  u8 *puVar2;
  if (param_3 < 6) {
    puVar2 = param_1 + 4;
    if ((param_2 & 0x20) != 0) {
      puVar2 = param_1 + 8;
    }
    hardware_Sub_08007844(puVar2);
    *param_1 = 0;
    uVar1 = 0;
    if ((*(int *)(param_1 + 4) == 0) & (*(int *)(param_1 + 8) == 0)) {
      uVar1 = 1;
    }
    param_1[1] = uVar1;
  }
  else if (param_3 == 6) {
    hardware_SetField_0x08(param_1);
  }
}

/* 0x080D7634 (68B) | hardware_Sub_080D7634 (orig: func_080D7634) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
void hardware_Sub_080D7634(u8 *param_1, u32 param_2, u8 param_3) {
  u8 bVar1;
  u8 *puVar2;
  if (param_3 < 7) {
    puVar2 = param_1 + 4;
    if ((param_2 & 0x40) != 0) {
      puVar2 = param_1 + 0x10;
    }
    hardware_Sub_080D75E0(puVar2);
    *param_1 = 0;
    bVar1 = 0;
    if (param_1[5] != '\0') {
      bVar1 = (u8)(-(u32)(u8)param_1[0x11] >> 0x1f);
    }
    param_1[1] = bVar1;
  }
  else if (param_3 == 7) {
    hardware_Sub_080D6F1C(param_1);
  }
}

/* 0x080D7678 (72B) | hardware_Sub_080D7678 (orig: func_080D7678) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
void hardware_Sub_080D7678(u8 *param_1, u32 param_2, u16 param_3) {
  u8 bVar1;
  u8 *puVar2;
  if (param_3 < 8) {
    puVar2 = param_1 + 4;
    if ((param_2 & 0x80) != 0) {
      puVar2 = param_1 + 0x20;
    }
    hardware_Sub_080D7634(puVar2);
    *param_1 = 0;
    bVar1 = 0;
    if (param_1[5] != '\0') {
      bVar1 = (u8)(-(u32)(u8)param_1[0x21] >> 0x1f);
    }
    param_1[1] = bVar1;
  }
  else if (param_3 == 8) {
    hardware_Sub_080D6F3C(param_1);
  }
}

/* 0x080D76C0 (76B) | hardware_Sub_080D76C0 (orig: func_080D76C0) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
void hardware_Sub_080D76C0(u8 *param_1, u16 param_2, u32 param_3) {
  u8 bVar1;
  u8 *puVar2;
  if (param_3 < 9) {
    puVar2 = param_1 + 4;
    if ((param_2 & 0x100) != 0) {
      puVar2 = param_1 + 0x40;
    }
    hardware_Sub_080D7678(puVar2);
    *param_1 = 0;
    bVar1 = 0;
    if (param_1[5] != '\0') {
      bVar1 = (u8)(-(u32)(u8)param_1[0x41] >> 0x1f);
    }
    param_1[1] = bVar1;
  }
  else if (param_3 == 9) {
    hardware_Sub_080D6F5C(param_1);
  }
}

/* 0x080D770C (32B) | hardware_Sub_080D770C (orig: func_080D770C) | origin: pure | domain: hardware | MEDIUM / graph_algebra */
u32 *hardware_Sub_080D770C(u32 *param_1, int param_2, u32 param_3) {
    u32 *base = param_1;
    int off = (param_2 << 3) - 8;
    u32 *p;
    
    p = (u32 *)((int)base + off);
    *p = param_3;
    while (p != base) {
        u32 prev = (u32)p;
        p -= 2;
        *p = prev;
    }
    return p;
}

/* 0x080D772C (224B) | hardware_Sub_080D772C (orig: func_080D772C) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
void hardware_Sub_080D772C(int *param_1,u32 param_2) {
  int iVar1;
  int iVar2;
  u32 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  iVar5 = *param_1;
  if ((u32)(param_1[3] - iVar5 >> 3) < param_2) {
    iVar6 = param_1[1];
    iVar1 = iVar6 - iVar5;
    if (iVar5 == 0) {
      if (param_2 == 0) {
        iVar4 = 0;
        iVar7 = 0;
      }
      else {
        iVar7 = param_2 * 8;
        iVar4 = LibC_malloc(iVar7);
        if (iVar4 == 0) {
          iVar4 = code_linkonce_Sub_080D3BC0(iVar7);
        }
      }
    }
    else {
      if (param_2 == 0) {
        iVar2 = 0;
        iVar7 = 0;
        iVar4 = iVar2;
      }
      else {
        iVar7 = param_2 * 8;
        iVar2 = LibC_malloc(iVar7);
        iVar4 = (s16)iVar2;
        if ((s8)iVar2 == 0) {
          iVar2 = code_linkonce_Sub_080D3BC0(iVar7);
          iVar4 = iVar2;
        }
      }
      for (; iVar5 != iVar6; iVar5 = iVar5 + 8) {
        if (iVar2 != 0) {
          hardware_Sub_08007874(iVar2);
          uVar3 = hardware_Sub_08007CD8(iVar2,*(u32 *)(iVar5 + 4));
          *(u32 *)(iVar2 + 4) = uVar3;
        }
        iVar2 = iVar2 + 8;
      }
      iVar6 = param_1[1];
      for (iVar5 = *param_1; iVar5 != iVar6; iVar5 = iVar5 + 8) {
        hardware_Sub_08007C28(iVar5,*(u32 *)(iVar5 + 4));
        hardware_Sub_080079E8(iVar5,2);
      }
      if (*param_1 != 0) {
        LibC_free();
      }
    }
    *param_1 = iVar4;
    param_1[1] = (iVar1 >> 3) * 8 + iVar4;
    param_1[3] = iVar7 + iVar4;
  }
}

/* 0x080E2170 (56B) | hardware_Sub_080E2170 (orig: func_080E2170) | origin: pure | domain: hardware | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
void hardware_Sub_080E2170(int arg0,int *arg1) {
  int val;
  int val2;
  val2 = *(int *)(arg0 + 0xc);
  *(u32 *)(arg0 + 0xc) = *(u32 *)(val2 + 8);
  if (*(int *)(val2 + 8) != 0) {
    *(int *)(*(int *)(val2 + 8) + 4) = arg0;
  }
  *(u32 *)(val2 + 4) = *(u32 *)(arg0 + 4);
  if (arg0 == *arg1) {
    *arg1 = val2;
  }
  else {
    val = *(int *)(arg0 + 4);
    if (arg0 == *(int *)(val + 8)) {
      *(int *)(val + 8) = val2;
    }
    else {
      *(int *)(val + 0xc) = val2;
    }
  }
  *(int *)(val2 + 8) = arg0;
  *(int *)(arg0 + 4) = val2;
}

/* 0x080E21A8 (56B) | hardware_Sub_080E21A8 (orig: func_080E21A8) | origin: pure | domain: hardware | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
void hardware_Sub_080E21A8(int arg0,int *arg1) {
  int val;
  int val2;
  val2 = *(int *)(arg0 + 8);
  *(u32 *)(arg0 + 8) = *(u32 *)(val2 + 0xc);
  if (*(int *)(val2 + 0xc) != 0) {
    *(int *)(*(int *)(val2 + 0xc) + 4) = arg0;
  }
  *(u32 *)(val2 + 4) = *(u32 *)(arg0 + 4);
  if (arg0 == *arg1) {
    *arg1 = val2;
  }
  else {
    val = *(int *)(arg0 + 4);
    if (arg0 == *(int *)(val + 0xc)) {
      *(int *)(val + 0xc) = val2;
    }
    else {
      *(int *)(val + 8) = val2;
    }
  }
  *(int *)(val2 + 0xc) = arg0;
  *(int *)(arg0 + 4) = val2;
}

/* 0x080E21E0 (180B) | hardware_Sub_080E21E0 (orig: func_080E21E0) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
void hardware_Sub_080E21E0(u8 *param_1,u32 *param_2) {
  char cVar1;
  char *pcVar2;
  u8 *puVar3;
  char *pcVar4;
  *param_1 = 0;
  if (param_1 != (u8 *)*param_2) {
    pcVar4 = *(char **)(param_1 + 4);
    cVar1 = *pcVar4;
    while (cVar1 == '\0') {
      pcVar2 = *(char **)(*(int *)(pcVar4 + 4) + 8);
      if (pcVar4 == pcVar2) {
        pcVar2 = *(char **)(*(int *)(pcVar4 + 4) + 0xc);
        if ((pcVar2 == (char *)0x0) || (*pcVar2 != '\0')) {
          puVar3 = *(u8 **)(param_1 + 4);
          if (param_1 == *(u8 **)(puVar3 + 0xc)) {
            hardware_Sub_080E2170(puVar3,param_2);
            param_1 = puVar3;
          }
          **(u8 **)(param_1 + 4) = 1;
          **(u8 **)(*(int *)(param_1 + 4) + 4) = 0;
          hardware_Sub_080E21A8(*(u32 *)(*(int *)(param_1 + 4) + 4),param_2);
        }
        else {
LAB_080e2242:
          *pcVar4 = '\x01';
          *pcVar2 = '\x01';
          **(u8 **)(*(int *)(param_1 + 4) + 4) = 0;
          param_1 = *(u8 **)(*(int *)(param_1 + 4) + 4);
        }
      }
      else {
        if ((pcVar2 != (char *)0x0) && (*pcVar2 == '\0')) goto LAB_080e2242;
        puVar3 = *(u8 **)(param_1 + 4);
        if (param_1 == *(u8 **)(puVar3 + 8)) {
          hardware_Sub_080E21A8(puVar3,param_2);
          param_1 = puVar3;
        }
        **(u8 **)(param_1 + 4) = 1;
        **(u8 **)(*(int *)(param_1 + 4) + 4) = 0;
        hardware_Sub_080E2170(*(u32 *)(*(int *)(param_1 + 4) + 4),param_2);
      }
      if (param_1 == (u8 *)*param_2) break;
      pcVar4 = *(char **)(param_1 + 4);
      cVar1 = *pcVar4;
    }
  }
  *(u8 *)*param_2 = 1;
}

/* 0x080E2294 (192B) | hardware_Sub_080E2294 (orig: func_080E2294) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
u32 hardware_Sub_080E2294(int *param_1, int param_2, u8 param_3, int param_4, u32 *param_5, int param_6) {
  register int iVar1;
  register int iVar2;
  if ((param_4 == *(int *)(param_2 + 4)) ||
     ((param_6 == 0 && ((param_3 != 0 || (*param_5 < *(u32 *)(param_4 + 0x10))))))) {
    iVar1 = LibC_malloc(0x18);
    if ((u8)iVar1 == 0) {
      iVar1 = code_linkonce_Sub_080D3BC0(0x18);
    }
    if (iVar1 != -0x10) {
      *(u32 *)(iVar1 + 0x10) = *param_5;
      *(u32 *)(iVar1 + 0x14) = param_5[1];
    }
    *(int *)(param_4 + 8) = iVar1;
    iVar2 = *(int *)(param_2 + 4);
    if (param_4 == iVar2) {
      *(int *)(param_4 + 4) = iVar1;
      *(int *)(*(int *)(param_2 + 4) + 0xc) = iVar1;
    }
    else if (param_4 == *(int *)(iVar2 + 8)) {
      *(int *)(iVar2 + 8) = iVar1;
    }
  }
  else {
    iVar1 = LibC_malloc(0x18);
    if ((u8)iVar1 == 0) {
      iVar1 = code_linkonce_Sub_080D3BC0(0x18);
    }
    if (iVar1 != -0x10) {
      *(u32 *)(iVar1 + 0x10) = *param_5;
      *(u32 *)(iVar1 + 0x14) = param_5[1];
    }
    *(int *)(param_4 + 0xc) = iVar1;
    if (param_4 == *(int *)(*(int *)(param_2 + 4) + 0xc)) {
      *(int *)(*(int *)(param_2 + 4) + 0xc) = iVar1;
    }
  }
  *(int *)(iVar1 + 4) = param_4;
  *(u32 *)(iVar1 + 8) = 0;
  *(u32 *)(iVar1 + 0xc) = 0;
  hardware_Sub_080E21E0(iVar1,*(int *)(param_2 + 4) + 4);
  *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
  *param_1 = iVar1;
  return param_1;
}

/* 0x080E2354 (60B) | hardware_Sub_080E2354 (orig: func_080E2354) | origin: wip | domain: hardware | MEDIUM / tu_interp */
u32 hardware_Sub_080E2354(char *param_1) {
  char *pcVar1;
  bool bVar2;
  if ((*param_1 == '\0') && (*(char **)(*(int *)(param_1 + 4) + 4) == param_1)) {
    pcVar1 = *(char **)(param_1 + 0xc);
  }
  else {
    pcVar1 = *(char **)(param_1 + 8);
    if (pcVar1 == (char *)0x0) {
      do {
        pcVar1 = *(char **)(param_1 + 4);
        bVar2 = param_1 == *(char **)(pcVar1 + 8);
        param_1 = pcVar1;
      } while (bVar2);
    }
    else {
      for (; *(char *)(pcVar1 + 0xc) != 0; pcVar1 = *(char **)(pcVar1 + 0xc)) {
      }
    }
  }
  return pcVar1;
}

/* 0x080E2390 (180B) | hardware_Sub_080E2390 (orig: func_080E2390) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
u32 hardware_Sub_080E2390(int *param_1,int param_2,u32 *param_3) {
    bool bVar3;
    s8 iStack_24;
    int iStack_20;
    int iStack_1c;
  int iVar1;
  register int iVar2;
  iVar1 = *(int *)(param_2 + 4);
  bVar3 = true;
  if (*(int *)(iVar1 + 4) != 0) {
    iVar2 = (s16)*(int *)(iVar1 + 4);
    do {
      iVar1 = iVar2;
      bVar3 = *param_3 < *(u32 *)(iVar1 + 0x10);
      if (bVar3) {
        iVar2 = *(short *)(iVar1 + 8);
      }
      else {
        iVar2 = *(int *)(iVar1 + 0xc);
      }
    } while (iVar2 != 0);
  }
  iStack_24 = iVar1;
  if (bVar3) {
    iStack_20 = *(int *)(*(int *)(param_2 + 4) + 8);
    if (iVar1 != (s16)iStack_20) {
      iStack_24 = hardware_Sub_080E2354(iVar1);
      goto LAB_080e2400;
    }
    hardware_Sub_080E2294(&iStack_1c,param_2,0,iVar1,param_3,0);
  }
  else {
LAB_080e2400:
    if (*param_3 <= *(u32 *)(iStack_24 + 0x10)) {
      *param_1 = (u8)iStack_24;
      *(u16 *)(param_1 + 1) = 0;
      goto LAB_080e2434;
    }
    hardware_Sub_080E2294(&iStack_20,param_2,0,iVar1,param_3,0);
    iStack_1c = iStack_20;
  }
  *param_1 = iStack_1c;
  *(u8 *)(param_1 + 1) = 1;
LAB_080e2434:
  return param_1;
}

/* 0x080E2444 (440B) | hardware_Sub_080E2444 (orig: func_080E2444) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
u32 hardware_Sub_080E2444(int *param_1,int param_2,int *param_3,u32 *param_4) {
    int iVar3;
    bool bVar4;
    bool bVar5;
    int iStack_2c;
    int iStack_28;
    int aiStack_24 [2];
  int iVar1;
  register int iVar2;
  iVar2 = *param_3;
  if (iVar2 == *(int *)(*(int *)(param_2 + 4) + 8)) {
    if (*(int *)(param_2 + 8) != 0) {
      if (*param_4 < *(s16 *)(iVar2 + 0x10)) {
LAB_080e2548:
        hardware_Sub_080E2294(param_1,param_2,iVar2,iVar2,param_4,0);
        goto LAB_080e25ea;
      }
      if (*param_4 <= *(u32 *)(iVar2 + 0x10)) {
        *param_1 = iVar2;
        goto LAB_080e25ea;
      }
      iStack_2c = iVar2;
      iVar1 = code_linkonce_Sub_080E2B28(iVar2);
      iStack_2c = iVar1;
      if (iVar1 == *(int *)(param_2 + 4)) {
        iVar3 = *param_3;
        iVar2 = iVar3;
      }
      else {
        if (*(u32 *)(iVar1 + 0x10) <= *param_4) goto LAB_080e25dc;
        iVar3 = *param_3;
        iVar2 = iVar3;
        if (*(short *)(iVar3 + 0xc) != 0) goto LAB_080e25c2;
      }
LAB_080e25b2:
      hardware_Sub_080E2294(param_1,param_2,0,iVar3,param_4,iVar2);
      goto LAB_080e25ea;
    }
    hardware_Sub_080E2390(&iStack_2c,param_2,param_4);
  }
  else if (iVar2 == *(int *)(param_2 + 4)) {
    iVar3 = *(int *)(iVar2 + 0xc);
    if (*(u32 *)(iVar3 + 0x10) < *param_4) goto LAB_080e25b2;
    hardware_Sub_080E2390(&iStack_2c,param_2,param_4);
  }
  else {
    iStack_2c = iVar2;
    iVar3 = hardware_Sub_080E2354(iVar2);
    iVar2 = *param_3;
    bVar4 = *param_4 < *(u32 *)(iVar2 + 0x10);
    iStack_2c = iVar3;
    if ((bVar4) && (*(u32 *)(iVar3 + 0x10) < *param_4)) {
      if (*(int *)(iVar3 + 0xc) != 0) goto LAB_080e2548;
      iVar1 = 0;
      iVar2 = iVar3;
LAB_080e25ca:
      hardware_Sub_080E2294(param_1,param_2,iVar1,iVar3,param_4,iVar2);
      goto LAB_080e25ea;
    }
    iStack_28 = *param_3;
    iVar1 = code_linkonce_Sub_080E2B28();
    bVar5 = !bVar4;
    iStack_28 = iVar1;
    if (!bVar4) {
      iVar3 = *param_3;
      bVar5 = *(u8 *)(iVar3 + 0x10) < *param_4;
      if ((bVar5) && ((iVar1 == *(int *)(param_2 + 4) || (*param_4 < *(u32 *)(iVar1 + 0x10))))) {
        iVar2 = iVar3;
        if (*(int *)(iVar3 + 0xc) == 0) goto LAB_080e25b2;
LAB_080e25c2:
        iVar3 = (s8)iVar1;
        iVar2 = 0;
        goto LAB_080e25ca;
      }
    }
    if (bVar4 == bVar5) {
      iStack_2c = *param_3;
    }
    else {
LAB_080e25dc:
      hardware_Sub_080E2390(aiStack_24,param_2,param_4);
      iStack_2c = aiStack_24[0];
    }
  }
  *param_1 = iStack_2c;
LAB_080e25ea:
  return (param_1);
}

/* 0x080E27FC (192B) | hardware_Sub_080E27FC (orig: func_080E27FC) | origin: wip | domain: hardware | MEDIUM / tu_interp */
u32 hardware_Sub_080E27FC(int *param_1, int param_2, s8 param_3, int param_4, u32 *param_5, int param_6) {
    int iVar2;
  register int iVar1;
  if ((param_4 == *(int *)(param_2 + 4)) ||
     ((param_6 == 0 && ((param_3 != 0 || (*param_5 < *(u32 *)(param_4 + 0x10))))))) {
    iVar1 = LibC_malloc(0x18);
    if ((u8)iVar1 == 0) {
      iVar1 = code_linkonce_Sub_080D3BC0(0x18);
    }
    if (iVar1 != -0x10) {
      *(u32 *)(iVar1 + 0x10) = *param_5;
      *(u32 *)(iVar1 + 0x14) = param_5[1];
    }
    *(int *)(param_4 + 8) = iVar1;
    iVar2 = *(int *)(param_2 + 4);
    if (param_4 == iVar2) {
      *(int *)(param_4 + 4) = iVar1;
      *(int *)(*(int *)(param_2 + 4) + 0xc) = iVar1;
    }
    else if (param_4 == *(int *)(iVar2 + 8)) {
      *(int *)(iVar2 + 8) = iVar1;
    }
  }
  else {
    iVar1 = LibC_malloc(0x18);
    if (iVar1 == 0) {
      iVar1 = code_linkonce_Sub_080D3BC0(0x18);
    }
    if (iVar1 != -0x10) {
      *(u32 *)(iVar1 + 0x10) = *param_5;
      *(u32 *)(iVar1 + 0x14) = param_5[1];
    }
    *(int *)(param_4 + 0xc) = iVar1;
    if (param_4 == *(int *)(*(int *)(param_2 + 4) + 0xc)) {
      *(int *)(*(int *)(param_2 + 4) + 0xc) = iVar1;
    }
  }
  *(int *)(iVar1 + 4) = param_4;
  *(u32 *)(iVar1 + 8) = 0;
  *(u32 *)(iVar1 + 0xc) = 0;
  hardware_Sub_080E21E0(iVar1,*(int *)(param_2 + 4) + 4);
  *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
  *param_1 = iVar1;
  return param_1;
}

/* 0x080E28BC (180B) | hardware_Sub_080E28BC (orig: func_080E28BC) | origin: wip | domain: hardware | MEDIUM / tu_interp */
u32 hardware_Sub_080E28BC(int *param_1, s16 param_2, u32 *param_3) {
    int iVar2;
    bool bVar3;
    u16 iStack_24;
    int iStack_20;
    int iStack_1c;
  register int iVar1;
  iVar1 = *(int *)(param_2 + 4);
  bVar3 = true;
  if (*(int *)(iVar1 + 4) != 0) {
    iVar2 = *(int *)(iVar1 + 4);
    do {
      iVar1 = iVar2;
      bVar3 = *param_3 < *(u32 *)(iVar1 + 0x10);
      if (bVar3) {
        iVar2 = *(s8 *)(iVar1 + 8);
      }
      else {
        iVar2 = *(int *)(iVar1 + 0xc);
      }
    } while (iVar2 != 0);
  }
  iStack_24 = iVar1;
  if (bVar3) {
    iStack_20 = *(int *)(*(int *)(param_2 + 4) + 8);
    if (iVar1 != (s8)iStack_20) {
      iStack_24 = hardware_Sub_080E2354(iVar1);
      goto LAB_080e292c;
    }
    hardware_Sub_080E27FC(&iStack_1c,param_2,0,iVar1,param_3,0);
  }
  else {
LAB_080e292c:
    if (*param_3 <= *(u32 *)(iStack_24 + 0x10)) {
      *param_1 = (u8)iStack_24;
      *(u8 *)(param_1 + 1) = 0;
      goto LAB_080e2960;
    }
    hardware_Sub_080E27FC(&iStack_20,param_2,0,iVar1,param_3,0);
    iStack_1c = iStack_20;
  }
  *param_1 = iStack_1c;
  *(u8 *)(param_1 + 1) = 1;
LAB_080e2960:
  return param_1;
}

/* 0x080E2970 (440B) | hardware_Sub_080E2970 (orig: func_080E2970) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
u32 hardware_Sub_080E2970(int *param_1,int param_2,int *param_3,u32 *param_4) {
    int iVar3;
    bool bVar4;
    bool bVar5;
    int iStack_2c;
    int iStack_28;
    int aiStack_24 [2];
  int iVar1;
  register int iVar2;
  iVar2 = *param_3;
  if (iVar2 == *(int *)(*(int *)(param_2 + 4) + 8)) {
    if (*(int *)(param_2 + 8) != 0) {
      if (*param_4 < *(s16 *)(iVar2 + 0x10)) {
LAB_080e2a74:
        hardware_Sub_080E27FC(param_1,param_2,iVar2,iVar2,param_4,0);
        goto LAB_080e2b16;
      }
      if (*param_4 <= *(s16 *)(iVar2 + 0x10)) {
        *param_1 = iVar2;
        goto LAB_080e2b16;
      }
      iStack_2c = iVar2;
      iVar1 = code_linkonce_Sub_080E2B28(iVar2);
      iStack_2c = iVar1;
      if (iVar1 == *(int *)(param_2 + 4)) {
        iVar3 = *param_3;
        iVar2 = iVar3;
      }
      else {
        if (*(u32 *)(iVar1 + 0x10) <= *param_4) goto LAB_080e2b08;
        iVar3 = *param_3;
        iVar2 = iVar3;
        if (*(u8 *)(iVar3 + 0xc) != 0) goto LAB_080e2aee;
      }
LAB_080e2ade:
      hardware_Sub_080E27FC(param_1,param_2,0,iVar3,param_4,iVar2);
      goto LAB_080e2b16;
    }
    hardware_Sub_080E28BC(&iStack_2c,param_2,param_4);
  }
  else if (iVar2 == *(int *)(param_2 + 4)) {
    iVar3 = *(int *)(iVar2 + 0xc);
    if (*(u32 *)(iVar3 + 0x10) < *param_4) goto LAB_080e2ade;
    hardware_Sub_080E28BC(&iStack_2c,param_2,param_4);
  }
  else {
    iStack_2c = iVar2;
    iVar3 = hardware_Sub_080E2354(iVar2);
    iVar2 = *param_3;
    bVar4 = *param_4 < *(u32 *)(iVar2 + 0x10);
    iStack_2c = iVar3;
    if ((bVar4) && (*(u32 *)(iVar3 + 0x10) < *param_4)) {
      if (*(int *)(iVar3 + 0xc) != 0) goto LAB_080e2a74;
      iVar1 = 0;
      iVar2 = iVar3;
LAB_080e2af6:
      hardware_Sub_080E27FC(param_1,param_2,iVar1,iVar3,param_4,iVar2);
      goto LAB_080e2b16;
    }
    iStack_28 = *param_3;
    iVar1 = code_linkonce_Sub_080E2B28();
    bVar5 = !bVar4;
    iStack_28 = iVar1;
    if (!bVar4) {
      iVar3 = *param_3;
      bVar5 = *(u8 *)(iVar3 + 0x10) < *param_4;
      if ((bVar5) && ((iVar1 == *(int *)(param_2 + 4) || (*param_4 < *(u32 *)(iVar1 + 0x10))))) {
        iVar2 = iVar3;
        if (*(int *)(iVar3 + 0xc) == 0) goto LAB_080e2ade;
LAB_080e2aee:
        iVar3 = iVar1;
        iVar2 = 0;
        goto LAB_080e2af6;
      }
    }
    if (bVar4 == bVar5) {
      iStack_2c = *param_3;
    }
    else {
LAB_080e2b08:
      hardware_Sub_080E28BC(aiStack_24,param_2,param_4);
      iStack_2c = aiStack_24[0];
    }
  }
  *param_1 = iStack_2c;
LAB_080e2b16:
  return (param_1);
}

/* 0x080E2BB4 (532B) | hardware_Sub_080E2BB4 (orig: func_080E2BB4) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
void hardware_Sub_080E2BB4(int param_1,u8 *param_2,u32 *param_3,int param_4,int param_5) {
  u8 bVar1;
  int iVar2;
  u32 uVar3;
  u32 *puVar4;
  u32 uVar5;
  int iVar6;
  int iVar7;
  u32 uVar8;
  u32 uVar9;
  u32 uVar10;
  u32 *puVar11;
  u32 uVar12;
  u32 uVar13;
  char cStack_48;
  u16 uStack_44;
  iVar2 = param_3[2];
  iVar7 = param_3[4];
  puVar11 = (u32 *)*param_3;
  uVar3 = 0;
  if (puVar11 != (u32 *)0x0) {
    uVar3 = (u32)*(u16 *)(param_3 + 1);
  }
  puVar4 = puVar11 + uVar3 * 2;
  while (puVar11 != puVar4) {
    uVar3 = *puVar11;
    uVar8 = puVar11[1];
    puVar11 = puVar11 + 2;
    uVar12 = ((int)(uVar3 << 7) >> 0x17) + param_4;
    if ((int)uVar12 < 0xf0) {
      cStack_48 = (char)uVar3;
      uVar13 = cStack_48 + param_5;
      if ((((int)uVar13 < 0xa0) &&
          (uVar9 = ((uVar3 & 0xffff) >> 0xe) * 4 + (uVar3 >> 0x1e),
          uVar9 = (int)(u32)*(u8 *)((uVar9 >> 1) + 0x080FC066) >> ((uVar9 & 1) << 2),
          0 < (int)(uVar12 + (8 << (uVar9 & 3))))) && (0 < (int)((8 << (uVar9 >> 2 & 3)) + uVar13))) {
        uVar5 = iVar2 + (uVar8 & 0x3ff) * 0x20;
        uVar9 = *(u32 *)(param_1 + 8);
        uVar10 = *(u32 *)(*(u32 *)(param_1 + 8) + 4);
        while (uVar10 != 0) {
          if (*(u32 *)(uVar10 + 0x10) < uVar5) {
            uVar10 = *(u32 *)(uVar10 + 0xc);
          }
          else {
            uVar9 = uVar10;
            uVar10 = *(u32 *)(uVar10 + 8);
          }
        }
        if ((uVar9 == *(u32 *)(param_1 + 8)) || (uVar5 < *(u32 *)(uVar9 + 0x10))) {
          uVar9 = *(u32 *)(param_1 + 8);
        }
        uVar10 = *(u32 *)(param_1 + 8) ^ uVar9;
        if ((int)(-uVar10 | uVar10) < 0) {
          iVar6 = hardware_Sub_08007D4C(param_1,*(u32 *)(uVar9 + 0x14));
        }
        else {
          iVar6 = -1;
        }
        if (-1 < iVar6) {
          uVar5 = iVar7 + ((uVar8 & 0xffff) >> 0xc) * 0x20;
          uVar9 = *(u32 *)(param_1 + 0x1c);
          uVar10 = *(u32 *)(*(u32 *)(param_1 + 0x1c) + 4);
          while (uVar10 != 0) {
            if (*(u32 *)(uVar10 + 0x10) < uVar5) {
              uVar10 = *(u32 *)(uVar10 + 0xc);
            }
            else {
              uVar9 = uVar10;
              uVar10 = *(u32 *)(uVar10 + 8);
            }
          }
          if ((uVar9 == *(u32 *)(param_1 + 0x1c)) || (uVar5 < *(u32 *)(uVar9 + 0x10))) {
            uVar9 = *(u32 *)(param_1 + 0x1c);
          }
          uVar10 = *(u32 *)(param_1 + 0x1c) ^ uVar9;
          if ((int)(-uVar10 | uVar10) < 0) {
            uVar9 = hardware_Sub_080074C0(param_1 + 0x14,*(u32 *)(uVar9 + 0x14));
          }
          else {
            uVar9 = 0xffffffff;
          }
          if (-1 < (int)uVar9) {
            uStack_44 = ((u16)uVar8 & (u16)0xFFFFFC00 | (u16)iVar6 & 0x3ff) &
                        (u16)0xFFFF0FFF | (u16)((uVar9 & 0xf) << 0xc);
            bVar1 = *param_2;
            if (bVar1 < 0x80) {
              *(u32 *)(param_2 + (u32)bVar1 * 8 + 4) =
                   (uVar3 & 0xFFFFFF00 | uVar13 & 0xff) & 0xFE00FFFF |
                   (uVar12 & 0x000001FF) << 0x10;
              *(u16 *)((int)(param_2 + (u32)bVar1 * 8 + 4) + 4) = uStack_44;
              *param_2 = bVar1 + 1;
            }
          }
        }
      }
    }
  }
}

/* 0x080E2DC8 (108B) | hardware_Sub_080E2DC8 (orig: func_080E2DC8) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
u32 hardware_Sub_080E2DC8(int param_1) {
  u8 *puVar1;
  hardware_Sub_08007874();
  *(u32 *)(param_1 + 8) = 0;
  puVar1 = (u8 *)LibC_malloc(0x18);
  if (puVar1 == (u8 *)0x0) {
    puVar1 = (u8 *)code_linkonce_Sub_080D3BC0(0x18);
  }
  *(u8 **)(param_1 + 8) = puVar1;
  *(u32 *)(param_1 + 0xc) = 0;
  *(u32 *)(param_1 + 0x10) = 0;
  *puVar1 = 0;
  *(u32 *)(puVar1 + 4) = 0;
  *(int *)(*(int *)(param_1 + 8) + 8) = *(int *)(param_1 + 8);
  *(int *)(*(int *)(param_1 + 8) + 0xc) = *(int *)(param_1 + 8);
  hardware_Sub_08007128(param_1 + 0x14);
  *(u32 *)(param_1 + 0x1c) = 0;
  puVar1 = (u8 *)LibC_malloc(0x18);
  if (puVar1 == (u8 *)0x0) {
    puVar1 = (u8 *)code_linkonce_Sub_080D3BC0(0x18);
  }
  *(u8 **)(param_1 + 0x1c) = puVar1;
  *(u32 *)(param_1 + 0x20) = 0;
  *(u32 *)(param_1 + 0x24) = 0;
  *puVar1 = 0;
  *(u32 *)(puVar1 + 4) = 0;
  *(int *)(*(int *)(param_1 + 0x1c) + 8) = *(int *)(param_1 + 0x1c);
  *(int *)(*(int *)(param_1 + 0x1c) + 0xc) = *(int *)(param_1 + 0x1c);
  return param_1;
}

/* 0x080E2EA4 (208B) | hardware_Sub_080E2EA4 (orig: func_080E2EA4) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
u32 hardware_Sub_080E2EA4(int *param_1,int param_2,int param_3,int param_4,u8 *param_5,int param_6) {
  int iVar1;
  int iVar2;
  bool bVar3;
  if (param_4 != *(int *)(param_2 + 4)) {
    if (param_6 != 0) {
LAB_080e2f1e:
      iVar1 = LibC_malloc(0x18);
      if (iVar1 == 0) {
        iVar1 = code_linkonce_Sub_080D3BC0(0x18);
      }
      if (iVar1 != -0x10) {
        *(u32 *)(iVar1 + 0x10) = *(u32 *)param_5;
        *(u8 *)(iVar1 + 0x14) = param_5[4];
      }
      *(int *)(param_4 + 0xc) = iVar1;
      if (param_4 == *(int *)(*(int *)(param_2 + 4) + 0xc)) {
        *(int *)(*(int *)(param_2 + 4) + 0xc) = iVar1;
      }
      goto LAB_080e2f50;
    }
    if (param_3 == 0) {
      bVar3 = false;
      if ((*param_5 < *(u8 *)(param_4 + 0x10)) ||
         ((*param_5 <= *(u8 *)(param_4 + 0x10) && (param_5[1] < *(u8 *)(param_4 + 0x11))))) {
        bVar3 = true;
      }
      if (!bVar3) goto LAB_080e2f1e;
    }
  }
  iVar1 = LibC_malloc(0x18);
  if (iVar1 == 0) {
    iVar1 = code_linkonce_Sub_080D3BC0(0x18);
  }
  if (iVar1 != -0x10) {
    *(u32 *)(iVar1 + 0x10) = *(u32 *)param_5;
    *(u8 *)(iVar1 + 0x14) = param_5[4];
  }
  *(int *)(param_4 + 8) = iVar1;
  iVar2 = *(int *)(param_2 + 4);
  if (param_4 == iVar2) {
    *(int *)(param_4 + 4) = iVar1;
    *(int *)(*(int *)(param_2 + 4) + 0xc) = iVar1;
  }
  else if (param_4 == *(int *)(iVar2 + 8)) {
    *(int *)(iVar2 + 8) = iVar1;
  }
LAB_080e2f50:
  *(int *)(iVar1 + 4) = param_4;
  *(u32 *)(iVar1 + 8) = 0;
  *(u32 *)(iVar1 + 0xc) = 0;
  hardware_Sub_080E21E0(iVar1,*(int *)(param_2 + 4) + 4);
  *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
  *param_1 = iVar1;
  return param_1;
}

/* 0x080E2F74 (224B) | hardware_Sub_080E2F74 (orig: func_080E2F74) | origin: wip | domain: hardware | MEDIUM / graph_algebra */
u32 hardware_Sub_080E2F74(int *param_1,int param_2,u8 *param_3) {
  bool bVar1;
  int iVar2;
  int iVar3;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  iVar3 = *(int *)(param_2 + 4);
  bVar1 = true;
  if (*(int *)(iVar3 + 4) != 0) {
    iVar2 = *(int *)(iVar3 + 4);
    do {
      iVar3 = iVar2;
      bVar1 = false;
      if ((*param_3 < *(u8 *)(iVar3 + 0x10)) ||
         ((*param_3 <= *(u8 *)(iVar3 + 0x10) && (param_3[1] < *(u8 *)(iVar3 + 0x11))))) {
        bVar1 = true;
      }
      if (bVar1) {
        iVar2 = *(int *)(iVar3 + 8);
      }
      else {
        iVar2 = *(int *)(iVar3 + 0xc);
      }
    } while (iVar2 != 0);
  }
  iStack_28 = iVar3;
  if (bVar1) {
    iStack_24 = *(int *)(*(int *)(param_2 + 4) + 8);
    if (iVar3 != iStack_24) {
      iStack_28 = hardware_Sub_080E2354(iVar3);
      goto LAB_080e2ff6;
    }
    hardware_Sub_080E2EA4(&iStack_20,param_2,0,iVar3,param_3,0);
  }
  else {
LAB_080e2ff6:
    bVar1 = false;
    if ((*(u8 *)(iStack_28 + 0x10) < *param_3) ||
       ((*(u8 *)(iStack_28 + 0x10) <= *param_3 && (*(u8 *)(iStack_28 + 0x11) < param_3[1])))) {
      bVar1 = true;
    }
    if (!bVar1) {
      *param_1 = iStack_28;
      *(bool *)(param_1 + 1) = bVar1;
      goto LAB_080e3042;
    }
    hardware_Sub_080E2EA4(&iStack_24,param_2,0,iVar3,param_3,0);
    iStack_20 = iStack_24;
  }
  *param_1 = iStack_20;
  *(u8 *)(param_1 + 1) = 1;
LAB_080e3042:
  return param_1;
}

/* 0x080E385C (12B) | hardware_Sub_080E385C (orig: func_080E385C) | origin: pure | domain: hardware | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 hardware_GetField_0x00();
u32 hardware_Sub_080E385C(int arg0) {
  return hardware_GetField_0x00((arg0 - 8));
}

/* 0x080E3868 (12B) | hardware_Sub_080E3868 (orig: func_080E3868) | origin: pure | domain: hardware | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 hardware_GetField_0x00_88CC();
u32 hardware_Sub_080E3868(int arg0) {
  return hardware_GetField_0x00_88CC((arg0 - 8));
}

/* 0x080E4238 (12B) | hardware_Wrap_Dtor (orig: func_080E4238) | origin: pure | domain: hardware | MEDIUM / graph_algebra */
void hardware_Dtor_98AC(void);
void hardware_Wrap_Dtor(void) {
    hardware_Dtor_98AC();
}

