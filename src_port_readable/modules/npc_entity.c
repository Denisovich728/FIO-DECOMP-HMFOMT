/* FIO-DECOMP-HMFOMT :: Port Readable Module: npc_entity (9 functions) */
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

/* 0x08034C64 (136B) | npc_entity_Sub_08034C64 (orig: func_08034C64) | origin: wip | domain: npc_entity | MEDIUM / graph_algebra */
u32 npc_entity_Sub_08034C64(void) {
  u32 val;
  val = func_080D3910();
  return ((val << 2) + *(u32 *)(0x080F29C0 + 8));
}

/* 0x08034E8C (20B) | npc_entity_vfunc_14 (orig: func_08034E8C) | origin: pure | domain: npc_entity | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 AEntity_vfunc_14();
extern u32 func_0809E3DC();
void npc_entity_vfunc_14(int arg0) {
  AEntity_vfunc_14();
  func_0809E3DC(*(u32 *)(arg0 + 0x30));
}

/* 0x08034EA0 (20B) | npc_entity_vfunc_24 (orig: func_08034EA0) | origin: pure | domain: npc_entity | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D3914();
void npc_entity_vfunc_24(int arg0) {
  *(u8 *)(arg0 + 6) = 0;
  func_080D3914(arg0,1,*(u32 *)(*(int *)(arg0 + 0x14) + 0x3c));
}

/* 0x08034EB4 (44B) | npc_entity_vfunc_18 (orig: func_08034EB4) | origin: pure | domain: npc_entity | HIGH / vtable_algebra */
/* npc_entity_vfunc_18 @ 0x08034EB4 mode=THUMB size=0x2C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* npc_entity_vfunc_18 @ 0x08034EB4  mode=THUMB  size=0x2C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 npc_entity_vfunc_18(int self)

{
  short sVar1;
  int iVar2;
  undefined4 in_lr;
  
  npc_entity_Sub_08035380();
  if (*(short *)(self + 0x24) == 0) {
    sVar1 = *(short *)(self + 0x26);
  }
  else {
    sVar1 = *(short *)(self + 0x24) + -1;
  }
  *(short *)(self + 0x24) = sVar1;
  iVar2 = *(int *)(self + 0x10);
  if (iVar2 != 0) {
    func_0x080d3910(iVar2,*(undefined4 *)(*(int *)(iVar2 + 4) + 0xc));
  }
  return in_lr;
}

/* 0x08034EE0 (24B) | npc_entity_vfunc_34 (orig: func_08034EE0) | origin: pure | domain: npc_entity | HIGH / vtable_algebra */
/* npc_entity_vfunc_34 @ 0x08034EE0 mode=THUMB size=0x18 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* npc_entity_vfunc_34 @ 0x08034EE0  mode=THUMB  size=0x20  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 npc_entity_vfunc_34(int self)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = (uint)*(ushort *)(*(int *)(self + 0x30) + 0x10);
  if (uVar1 == 0) {
    uVar1 = (uint)*(ushort *)(self + 0x42);
  }
  return CONCAT44(in_lr,uVar1);
}

/* 0x08034EF8 (4B) | npc_entity_vfunc_38 (orig: func_08034EF8) | origin: pure | domain: npc_entity | HIGH / vtable_algebra */
/* npc_entity_vfunc_38 @ 0x08034EF8 mode=THUMB size=0x4 (importado de Stan: npc_entity) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* MODULO STAN: npc_entity */

// TODO: Reconstruir logica para coincidir 1:1 con la ROM

/* 0x08034F00 (1152B) | npc_entity_vfunc_3C (orig: func_08034F00) | origin: pure | domain: npc_entity | HIGH / vtable_algebra */
/* npc_entity_vfunc_3C @ 0x08034F00 mode=THUMB size=0x480 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* npc_entity_vfunc_3C @ 0x08034F00  mode=THUMB  size=0x480  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 npc_entity_vfunc_3C(undefined4 *self,int param_2)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  short *psVar8;
  int iVar9;
  int iVar10;
  ushort *puVar11;
  int iVar12;
  undefined4 uVar13;
  uint uVar14;
  ushort *puVar15;
  undefined4 in_lr;
  bool bVar16;
  undefined1 auStack_50 [8];
  uint uStack_48;
  uint uStack_44;
  int iStack_40;
  undefined4 *puStack_3c;
  int iStack_38;
  ushort *puStack_34;
  uint uStack_30;
  uint uStack_2c;
  byte *pbStack_28;
  byte *pbStack_24;
  
  if (param_2 < 1) {
    return in_lr;
  }
  pbVar3 = (byte *)(self + 0xf);
  pbStack_24 = (byte *)((int)self + 0x3d);
  iStack_40 = param_2;
  if ((undefined4 *)self[0xe] == (undefined4 *)0x0) {
LAB_08035312:
    if (1 < iStack_40) {
      AEntity_SetMap(self,0x234);
      uVar13 = self[0xc];
      AActorEntity_GetLocation(auStack_50,self);
      func_0x0809e368(uVar13,auStack_50);
    }
    if (*(char *)(self + 8) != '\0') {
      AActorEntity_SetAnimFacing(self,0);
    }
    self[6] = 0;
    self[7] = 0;
    if (*(short *)((int)self + 0x22) != *(short *)(self + 0x11)) {
      AActorEntity_SetAnim(self);
    }
    *pbVar3 = 0;
    *pbStack_24 = 0;
    *(undefined1 *)((int)self + 0x3e) = 0;
    *(undefined2 *)(self + 0x10) = 0;
    return in_lr;
  }
  if (2 < param_2) {
    bVar1 = func_0x080d3910(self[0xd],*(undefined4 *)self[0xe]);
    *pbVar3 = bVar1;
  }
  puVar15 = *(ushort **)((uint)*pbVar3 * 4 + *(int *)(self[0xe] + 8));
  if (puVar15 == (ushort *)0x0) goto LAB_08035312;
  iVar4 = func_0x080d3910((int *)*self,*(undefined4 *)(*(int *)*self + 0x144));
  uVar5 = *(ushort *)(iVar4 + 10) & 0x1f;
  iVar9 = uVar5 - 6;
  if (iVar9 < 0) {
    iVar9 = uVar5 + 0x12;
  }
  uVar5 = iVar9 * 0x3c + ((*(ushort *)(iVar4 + 10) & 0x7ff) >> 5);
  if (2 < iStack_40) {
    iVar9 = *(int *)(puVar15 + 2);
    uStack_48 = uVar5;
    iVar4 = npc_entity_Sub_080D7ECC(iVar9,iVar9 + (uint)*puVar15 * 8,&uStack_48,0,0);
    *pbStack_24 = (char)(iVar4 - iVar9 >> 3) - 1;
    *(undefined1 *)((int)self + 0x3e) = 0;
  }
  if ((uint)*puVar15 <= (uint)*pbStack_24) goto LAB_08035312;
  puVar15 = (ushort *)(*(int *)(puVar15 + 2) + (uint)*pbStack_24 * 8);
  puStack_3c = *(undefined4 **)(puVar15 + 2);
  if (puStack_3c == (undefined4 *)0x0) goto LAB_08035312;
  iStack_38 = 0;
  puVar11 = (ushort *)*puStack_3c;
  if ((puVar11 == (ushort *)0x0) || (*(ushort *)(puStack_3c + 1) == 0)) {
    if (1 < iStack_40) {
      AEntity_SetLocation(self,*(ushort *)((int)puStack_3c + 10) & 0x3ff,
                    (int)*(short *)((int)puStack_3c + 6),(int)*(short *)(puStack_3c + 2));
    }
    if ((uint)*(byte *)(self + 8) != (*(byte *)((int)puStack_3c + 0xb) & 0xf) >> 2) {
      AActorEntity_SetAnimFacing(self);
    }
    self[6] = 0;
    self[7] = 0;
    goto LAB_080352ca;
  }
  pbVar6 = (byte *)((int)self + 0x3e);
  if ((uint)*(ushort *)(puStack_3c + 1) <= (uint)*pbVar6) goto LAB_08035312;
  iVar4 = (int)*(short *)((int)puStack_3c + 6);
  iVar9 = (int)*(short *)(puStack_3c + 2);
  uVar14 = (*(byte *)((int)puStack_3c + 0xb) & 0xf) >> 2;
  if ((int)((uint)*(byte *)((int)puStack_3c + 0xb) * 0x8000000) < 0) {
    puVar15 = puVar11 + (uint)*pbVar6 * 4;
    pbStack_28 = (byte *)(self + 8);
    for (; puVar11 != puVar15; puVar11 = puVar11 + 4) {
      iVar10 = (int)(short)*puVar11;
      if ((int)((uint)(byte)puVar11[3] * 0x20000000) < 0) {
        if (iVar9 != iVar10) {
          iVar9 = iVar10;
        }
      }
      else if (iVar4 != iVar10) {
        iVar4 = iVar10;
      }
    }
    if (1 < iStack_40) {
      *(short *)(self + 0x10) = 0;
    }
    bVar16 = (int)((uint)(byte)puVar15[3] * 0x20000000) < 0;
    iVar10 = iVar9;
    if (!bVar16) {
      iVar10 = iVar4;
    }
    iVar12 = (short)*puVar15 - iVar10;
    if ((*(short *)(self + 0x10) == 0) && ((short)*puVar15 != iVar10)) {
      iVar10 = 0;
      if (*(char *)((int)self + 0x3f) == '\0') {
        iVar10 = 0x8000;
      }
      if (puVar15[1] != 0) {
        iVar10 = (uint)puVar15[1] * iVar10;
      }
      if (bVar16) {
        if (-1 < iVar12) {
          self[7] = iVar10;
        }
        else {
          self[7] = -iVar10;
        }
        uVar14 = (uint)(-1 >= iVar12);
        self[6] = 0;
      }
      else {
        if (iVar12 < 0) {
          uVar14 = 2;
          self[6] = -iVar10;
        }
        else {
          uVar14 = 3;
          self[6] = iVar10;
        }
        self[7] = 0;
      }
      iStack_38 = 0;
      if (*(char *)((int)self + 0x3f) == '\0') {
        iStack_38 = 1;
      }
    }
    else {
      if (bVar16) {
        iVar9 = (int)(short)*puVar15;
      }
      else {
        iVar4 = (int)(short)*puVar15;
      }
      self[6] = 0;
      self[7] = 0;
      uVar14 = (byte)puVar15[3] & 3;
    }
LAB_08035266:
    if (1 < iStack_40) {
      AEntity_SetLocation(self,*(ushort *)((int)puStack_3c + 10) & 0x3ff,iVar4,iVar9);
    }
  }
  else {
    uVar7 = (uint)*puVar15;
    uStack_44 = 0;
    if (uVar7 <= uVar5) {
      uStack_44 = uVar5 - uVar7;
    }
    puStack_34 = puVar11;
    if (2 < iStack_40) {
      iVar10 = npc_entity_Sub_080DC96C(puVar11,puVar11 + (uint)*(ushort *)(puStack_3c + 1) * 4,&uStack_44,0,0)
      ;
      *pbVar6 = (byte)(iVar10 - (int)puVar11 >> 3);
      if (*(ushort *)(puStack_3c + 1) <= (ushort)*pbVar6) {
        *pbVar6 = (char)*(ushort *)(puStack_3c + 1) - 1;
      }
    }
    puVar11 = puStack_34 + (uint)*pbVar6 * 4;
    uStack_30 = 0;
    pbStack_28 = (byte *)(self + 8);
    for (puVar15 = puStack_34; puVar15 != puVar11; puVar15 = puVar15 + 4) {
      uStack_30 = (uint)*puVar15;
      iVar10 = (int)(short)puVar15[1];
      if ((puVar15[2] & 1) == 0) {
        if ((iVar4 != iVar10) && (uVar14 = 3, bVar16 = iVar10 < iVar4, iVar4 = iVar10, bVar16)) {
          uVar14 = 2;
        }
      }
      else if (iVar9 != iVar10) {
        uVar14 = (uint)(iVar10 < iVar9);
        iVar9 = iVar10;
      }
    }
    bVar16 = (puVar11[2] & 1) == 0;
    iVar10 = iVar9;
    if (bVar16) {
      iVar10 = iVar4;
    }
    uStack_2c = (short)puVar11[1] - iVar10;
    if (uStack_2c == 0) {
      self[6] = 0;
      self[7] = 0;
    }
    else {
      if (*(char *)((int)self + 0x3f) == '\0') {
        uVar13 = func_0x080d0ec8(uStack_2c * 0x10000,(*puVar11 - uStack_30) * 0x19);
      }
      else {
        uVar13 = 0;
      }
      if (bVar16) {
        uVar14 = 3;
        if ((int)uStack_2c < 0) {
          uVar14 = 2;
        }
        self[6] = uVar13;
        uVar13 = 0;
      }
      else {
        uVar14 = uStack_2c >> 0x1f;
        self[6] = 0;
      }
      self[7] = uVar13;
      iStack_38 = 0;
      if (*(char *)((int)self + 0x3f) == '\0') {
        iStack_38 = 1;
      }
    }
    if (2 < iStack_40) {
      *(undefined2 *)(self + 0x10) = 0;
      if (bVar16) {
        if (uStack_44 < *puVar11) {
          iVar4 = iVar4 + ((int)(self[6] * (uStack_44 - uStack_30) * 0x19) >> 0x10);
        }
        else {
          iVar4 = (int)(short)puVar11[1];
        }
      }
      else if (uStack_44 < *puVar11) {
        iVar9 = iVar9 + ((int)(self[7] * (uStack_44 - uStack_30) * 0x19) >> 0x10);
      }
      else {
        iVar9 = (int)(short)puVar11[1];
      }
      goto LAB_08035266;
    }
    if (1 < iStack_40) {
      *(short *)(self + 0x10) = ((short)uStack_44 - (short)uStack_30) * 0x19;
      goto LAB_08035266;
    }
  }
  if (*pbStack_28 != uVar14) {
    AActorEntity_SetAnimFacing(self,uVar14);
  }
LAB_080352ca:
  if (1 < iStack_40) {
    uVar13 = self[0xc];
    AActorEntity_GetLocation(auStack_50,self);
    func_0x0809e368(uVar13,auStack_50);
  }
  if ((iStack_38 == 0) ||
     (cVar2 = func_0x080d3910(self,*(undefined4 *)(self[5] + 0x28)), cVar2 != '\0')) {
    psVar8 = (short *)(self + 0x11);
  }
  else {
    psVar8 = (short *)((int)self + 0x46);
  }
  if (*(short *)((int)self + 0x22) == *psVar8) {
    return in_lr;
  }
  AActorEntity_SetAnim(self);
  return in_lr;
}

/* 0x080D7ECC (60B) | npc_entity_Sub_080D7ECC (orig: func_080D7ECC) | origin: pure | domain: npc_entity | MEDIUM / graph_algebra */
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
/* paridad 97.67% preset agbcc_O2 (rosetta-alg) */
u32 npc_entity_Sub_080D7ECC(u32 arg0, u32 arg1, u32 arg2, u32 arg3)
{
    register u32 r0 = arg0;
    register u32 r1 = arg1;
    register u32 r2 = arg2;
    register u32 r3 = arg3;
    register u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0;
    r4 = r0 + 0;
    r1 = r1 - r4;
    r1 = (int)r1 >> 3;
    if ((int)r1 <= 0) goto loc_080D7EFE;
    r5 = *(u32 *)(r2);
loc_080D7EDA:
    r3 = (int)r1 >> 1;
    r0 = r4 + (r3 << 3);
    r2 = 0;
    r6 = *(u16 *)(r0);
    if (r5 >= r6) goto loc_080D7EEA;
    r2 = 1;
loc_080D7EEA:
    if (r2 == 0) goto loc_080D7EF2;
    r1 = r3 + 0;
    goto loc_080D7EFA;
loc_080D7EF2:
    r4 = r0 + 0;
    r4 += 8;
    r0 = r1 - r3;
    r1 = r0 - 1;
loc_080D7EFA:
    if ((int)r1 > 0) goto loc_080D7EDA;
loc_080D7EFE:
    r0 = r4 + 0;
    return r4;
    r0 = r0;
    return r0;
}

/* 0x080DC96C (60B) | npc_entity_Sub_080DC96C (orig: func_080DC96C) | origin: pure | domain: npc_entity | MEDIUM / graph_algebra */
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
/* paridad 97.67% preset agbcc_O2 (rosetta-alg) */
u32 npc_entity_Sub_080DC96C(u32 arg0, u32 arg1, u32 arg2, u32 arg3)
{
    register u32 r0 = arg0;
    register u32 r1 = arg1;
    register u32 r2 = arg2;
    register u32 r3 = arg3;
    register u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0;
    r4 = r0 + 0;
    r1 = r1 - r4;
    r1 = (int)r1 >> 3;
    if ((int)r1 <= 0) goto loc_080DC99E;
    r5 = *(u32 *)(r2);
loc_080DC97A:
    r3 = (int)r1 >> 1;
    r0 = r4 + (r3 << 3);
    r2 = 0;
    r6 = *(u16 *)(r0);
    if (r5 >= r6) goto loc_080DC98A;
    r2 = 1;
loc_080DC98A:
    if (r2 == 0) goto loc_080DC992;
    r1 = r3 + 0;
    goto loc_080DC99A;
loc_080DC992:
    r4 = r0 + 0;
    r4 += 8;
    r0 = r1 - r3;
    r1 = r0 - 1;
loc_080DC99A:
    if ((int)r1 > 0) goto loc_080DC97A;
loc_080DC99E:
    r0 = r4 + 0;
    return r4;
    r0 = r0;
    return r0;
}

