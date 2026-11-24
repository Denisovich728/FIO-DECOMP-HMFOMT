/* FIO-DECOMP-HMFOMT :: Port Readable Module: hardware_5BB4 (5 functions) */
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

/* 0x0803B8CC (480B) | hardware_5BB4_Ctor (orig: func_0803B8CC) | origin: wip | domain: hardware_5BB4 | HIGH / vtable_algebra */
u32 hardware_5BB4_Ctor(short *self,short param_2,short param_3,short param_4,short param_5,u8 param_6,
             u32 param_7,u32 param_8,u32 param_9) {
  u32 uVar1;
  int iVar2;
  u32 uVar3;
  u32 uVar4;
  u32 uVar5;
  u32 uVar6;
  u32 uVar7;
  int iVar8;
  *self = param_2;
  self[1] = param_3;
  self[2] = param_4;
  self[3] = param_5;
  *(u8 *)(self + 4) =
       *(u8 *)(self + 4) & 0x80 | param_6 & 3 | (u8)((param_7 & 0x1f) << 2);
  uVar3 = (param_7 >> 3 & 3) << 7;
  uVar4 = 0xFFFFFE7F & (u16)self[4];
  self[4] = (u16)uVar4 | (u16)uVar3;
  uVar1 = 0x000003FF;
  uVar6 = ((param_7 & 7) * 0x40 + 0x14) * 0x200;
  uVar7 = *(u32 *)(self + 4) & 0xFFF801FF;
  *(u32 *)(self + 4) = uVar7 | uVar6;
  *(u8 *)(self + 5) = *(u8 *)(self + 5) & 0x87 | (u8)((param_8 & 0xf) << 3);
  self[5] = (u16)0xFFFF807F & self[5] | (u16)((param_9 & 0xff) << 7);
  *(u8 *)((int)self + 0xb) = *(u8 *)((int)self + 0xb) & 0x7f;
  *(u8 *)(self + 6) = *(u8 *)(self + 6) & 0x80;
  *(u8 *)((int)self + 0xd) = 0;
  self[8] = 0;
  self[9] = 0;
  self[10] = 0;
  self[0xb] = 0;
  *(u32 *)(self + 0xc) = 0x080E5BB4;
  *(short **)(self + 0xe) = self + 0x10;
  self[0x12] = 0;
  self[0x13] = 0;
  *(u32 *)(self + 0x14) = 0x080E5BD8;
  *(short **)(self + 0x10) = self + 0xe;
  *(short **)(self + 0x12) = self + 0x10;
  uVar7 = (uVar7 & 0x7ffff | uVar6) >> 9;
  uVar6 = *(u16 *)0x080F9F74;
  uVar5 = *(u16 *)0x080F9F70;
  self[0x16] = 0;
  self[0x17] = 0;
  self[0x18] = 0;
  self[0x19] = 0;
  *(u32 *)(self + 0x1a) = 0x080E7768;
  *(u32 *)(self + 0x1c) = uVar5;
  *(u32 *)(self + 0x1e) = (((uVar4 & 0x1ff | uVar3) >> 7) * 0x200 + uVar7) * 0x20 + 0x6000000;
  *(char *)(self + 0x20) = (char)(uVar6 >> 5);
  *(bool *)((int)self + 0x41) = param_9 == 1;
  *(u8 *)(self + 0x21) = 0;
  iVar2 = (int)*self;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 7;
  }
  iVar8 = (int)self[1];
  if (iVar8 < 0) {
    iVar8 = iVar8 + 7;
  }
  self[0x22] = 0;
  self[0x23] = 0;
  self[0x24] = 0;
  self[0x25] = 0;
  *(u32 *)(self + 0x26) = 0x080E7758;
  *(int *)(self + 0x28) = iVar2 >> 3;
  *(int *)(self + 0x2a) = iVar8 >> 3;
  *(u32 *)(self + 0x2c) = (u32)((u16)self[2] >> 3);
  *(u32 *)(self + 0x2e) = (u32)((u16)self[3] >> 3);
  *(u8 *)(self + 0x30) = *(u8 *)(self + 0x30) & 0xe0 | (u8)(param_7 & 0x1f);
  self[0x30] = (u16)0xFFFF801F & self[0x30] | (u16)((uVar7 & uVar1) << 5);
  *(u32 *)(self + 0x30) = *(u32 *)(self + 0x30) & 0xFFF87FFF | (param_8 & 0xf) << 0xf;
  return (self);
}

/* 0x0804F288 (1044B) | hardware_5BB4_Dtor (orig: func_0804F288) | origin: wip | domain: hardware_5BB4 | HIGH / vtable_algebra */
u32 hardware_5BB4_Dtor(u32 *self,u8 param_2,u32 param_3,u8 param_4,u32 param_5,u32 param_6,
             u32 param_7) {
  u8 bVar1;
  u32 *puVar2;
  u8 uVar3;
  u8 bVar4;
  int iVar5;
  u32 *puVar6;
  u32 uVar7;
  int iVar8;
  u32 uVar9;
  u32 *puVar10;
  u32 *puVar11;
  u32 uVar12;
  int *piVar13;
  int *piVar14;
  int iVar15;
  u32 *puVar16;
  u8 *pbVar17;
  int iStack_40;
  u32 uStack_3c;
  u32 uStack_38;
  int iStack_34;
  u32 *puStack_30;
  u32 *puStack_2c;
  u32 *puStack_28;
  int iStack_24;
  *(u8 *)self = (u8)*self & 0x80 | param_2 & 3 | (u8)((param_3 & 0x1f) << 2);
  *(u16 *)self = (u16)0xFFFFFE7F & (u16)*self | (u16)((param_3 >> 3 & 3) << 7);
  *self = *self & 0xFFF801FF | ((param_3 & 7) * 0x40 + 0x14) * 0x200;
  *(u8 *)((int)self + 2) = *(u8 *)((int)self + 2) & 0x87 | (param_4 & 0xf) << 3;
  self[1] = param_5;
  self[2] = 0;
  *(u8 *)(self + 3) = 0;
  *(u8 *)((int)self + 0xd) = 1;
  hardware_Sub_08007770(self + 4,param_7);
  hardware_Sub_080083D0(self + 6,param_6,2);
  self[8] = 0;
  self[9] = 0;
  self[10] = 0x080E5BB4;
  self[0xb] = (u32)(self + 0xc);
  self[0xc] = 0;
  self[0xd] = 0;
  self[0xe] = 0x080E5BD8;
  self[0xc] = (u32)(self + 0xb);
  self[0xd] = (u32)(self + 0xc);
  self[0xf] = 0;
  self[0x30] = 0;
  self[0x31] = 0;
  self[0x32] = 0x080E7898;
  self[0x33] = (u32)(self + 0xf);
  puVar11 = self + 0x34;
  *puVar11 = 0x080E78C0;
  self[0x35] = (u32)(self + 4);
  puVar10 = self + 0x36;
  iVar5 = 2;
  do {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != -1);
  *(u16 *)(self + 0x39) = 0;
  *(u16 *)((int)self + 0xe6) = 0;
  *(u8 *)(self + 0x3a) = 0;
  *(u8 *)((int)self + 0xe9) = 0;
  *(u8 *)((int)self + 0xea) = 0;
  *(u8 *)((int)self + 0xeb) = 0;
  puStack_28 = self + 4;
  puStack_30 = self + 0x34;
  puStack_2c = self + 0x3b;
  iVar5 = 0;
  do {
    puVar6 = (u32 *)CppRuntime_builtin_new(0x70);
    iVar15 = 6;
    iStack_34 = iVar5 << 2;
    iStack_24 = iVar5 + 1;
    puVar16 = puVar6;
    do {
      uVar7 = CppRuntime_builtin_new(0x104);
      *puVar16 = uVar7;
      hardware_Sub_08007874(puVar16 + 1);
      puVar16[2] = 0;
      *(u8 *)(puVar16 + 3) = 0;
      puVar16 = puVar16 + 4;
      iVar15 = iVar15 + -1;
    } while (iVar15 != -1);
    pbVar17 = (u8 *)((int)puVar11 + iStack_34 + 8);
    puVar16 = *(u32 **)pbVar17;
    if ((puVar6 != puVar16) && (puVar16 != (u32 *)0x0)) {
      puVar2 = puVar16 + 0x1c;
      while (puVar16 != puVar2) {
        hardware_Sub_08007C28(puVar2 + -3,puVar2[-2]);
        hardware_Sub_080079E8(puVar2 + -3,2);
        CppRuntime_builtin_delete(puVar2[-4]);
        puVar2 = puVar2 + -4;
      }
      CppRuntime_builtin_delete(puVar16);
    }
    *(u32 **)pbVar17 = puVar6;
    iVar15 = 0;
    iVar5 = iStack_34 + 8;
    do {
      piVar14 = (int *)(*(int *)((int)puVar11 + iVar5) + iVar15 * 0x10);
      hardware_Sub_080083D0(&iStack_40,param_6,3);
      piVar13 = piVar14 + 1;
      if (&iStack_40 != piVar13) {
        hardware_Sub_08007C28(piVar13,piVar14[2]);
        iVar8 = hardware_Sub_08007CD8(piVar13,uStack_3c);
        piVar14[2] = iVar8;
      }
      hardware_Sub_08007C28(&iStack_40,uStack_3c);
      hardware_Sub_080079E8(&iStack_40,2);
      iVar8 = -((-piVar14[2] | piVar14[2]) >> 0x1f);
      uVar3 = (u8)iVar8;
      if (iVar8 != 0) {
        uStack_38 = 0x20004;
        Code_Lib_Syscall_Wrap_CpuFastSet_E7A0(0x20004,*piVar14 + 4,0);
        uVar3 = 1;
      }
      *(u8 *)(piVar14 + 3) = uVar3;
      iVar15 = iVar15 + 1;
    } while (iVar15 < 7);
    iVar5 = iStack_24;
  } while (iStack_24 < 3);
  *(u8 *)((int)self + 0xea) = 1;
  hardware_5BB4_Sub_080ADD44(puStack_2c);
  self[0x48] = 0;
  self[0x49] = 0;
  self[0x4a] = 0x080E7888;
  self[0x4b] = (u32)puStack_30;
  uVar9 = *(u16 *)0x080F9F74;
  uVar12 = *(u16 *)0x080F9F70;
  self[0x4c] = 0;
  self[0x4d] = 0;
  self[0x4e] = 0x080E78E0;
  self[0x4f] = uVar12;
  self[0x50] =
       (((u16)*self & 0x1ff) >> 7) * 0x4000 + ((*self & 0x7ffff) >> 9) * 0x20 + 0x6000000;
  *(u16 *)(self + 0x51) =
       (u16)0xFFFFC000 & (u16)self[0x51] | (u16)(uVar9 >> 5) & (u16)0x00003FFF;
  *(u8 *)((int)self + 0x145) = *(u8 *)((int)self + 0x145) & 0x3f | (param_5 == 1) << 7;
  uVar9 = *self;
  uVar12 = *self;
  bVar1 = *(u8 *)((int)self + 2);
  bVar4 = hardware_Sub_080074C0(puStack_28,puStack_28[1]);
  self[0x52] = 0;
  self[0x53] = 0;
  self[0x54] = 0x080E7878;
  *(u8 *)(self + 0x55) = (u8)self[0x55] & 0xe0 | (u8)(((u8)uVar9 & 0x7f) >> 2);
  *(u16 *)(self + 0x55) =
       (u16)0xFFFF801F & (u16)self[0x55] | (u16)(((uVar12 & 0x7ffff) >> 9) << 5);
  self[0x55] = self[0x55] & 0xFFF87FFF | ((bVar1 & 0x7f) >> 3) << 0xf;
  *(u8 *)((int)self + 0x156) = *(u8 *)((int)self + 0x156) & 0x87 | (bVar4 & 0xf) << 3;
  self[0x56] = 0;
  code_0803EE94_79C8_Ctor(self + 0x58,0x08728208);
  code_0803EE94_79C8_Ctor(self + 100,0x0872937C);
  code_0803EE94_Sub_0805E824(self + 0x70,self + 100,0,0x100);
  hardware_Sub_080083D0(self + 0x75,param_6,7);
  *(u8 *)(self + 0x77) = (u8)self[0x77] & 0xfc;
  hardware_5BB4_Sub_080ADC00(self + 0x79);
  hardware_Sub_08007770(self + 0x7a,param_7);
  *(u8 *)(self + 0x7c) = (u8)self[0x7c] & 0xfc;
  iVar5 = 2;
  do {
    iVar5 = iVar5 + -1;
  } while (iVar5 != -1);
  *(u8 *)(self + 0x140) = 0;
  pbVar17 = (u8 *)(0x00000504 + (int)self);
  code_0803EE94_79C8_Ctor(pbVar17,0x08728320);
  code_0803EE94_Sub_0805E824((u8 *)(0x00000534 + (int)self),pbVar17,0,0x100);
  hardware_Sub_08007770(self + 0x152,param_7);
  *(u8 *)(self + 0x154) = (u8)self[0x154] | 0x3f;
  return (self);
}

/* 0x08050CC0 (76B) | hardware_5BB4_Sub_08050CC0 (orig: func_08050CC0) | origin: pure | domain: hardware_5BB4 | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 CppRuntime_builtin_new();
extern u32 hardware_5BB4_Dtor();
u32 hardware_5BB4_Sub_08050CC0(u32 *arg0,u32 arg1,u32 arg2,u32 arg3,
             u32 arg4,u32 arg5,u32 arg6) {
  u32 val;
  val = CppRuntime_builtin_new(0x00000554);
  val = hardware_5BB4_Dtor(val,arg1,arg2,arg3,arg4,arg5,arg6);
  *arg0 = val;
  return arg0;
}

/* 0x080ADC00 (48B) | hardware_5BB4_Sub_080ADC00 (orig: func_080ADC00) | origin: wip | domain: hardware_5BB4 | MEDIUM / graph_algebra */
u32 hardware_5BB4_Sub_080ADC00(u32 *param_1) {
  u32 *puVar1;
  puVar1 = (u32 *)CppRuntime_builtin_new(0x20);
  *puVar1 = 0;
  *(u16 *)(puVar1 + 1) = 0;
  puVar1[2] = 0;
  *(u16 *)(puVar1 + 3) = 0;
  puVar1[4] = 0;
  *(u16 *)(puVar1 + 5) = 0;
  puVar1[6] = 0;
  *(u16 *)(puVar1 + 7) = 0;
  *param_1 = puVar1;
  return param_1;
}

/* 0x080ADD44 (24B) | hardware_5BB4_Sub_080ADD44 (orig: func_080ADD44) | origin: pure | domain: hardware_5BB4 | MEDIUM / graph_algebra */
struct S { u32 a; u16 b, c; u32 d, e, f; u8 g; }; void hardware_5BB4_Sub_080ADD44(struct S *p) { p->a = 0; p->b = 0x100; p->c = 0; p->d = 0; p->e = 0; p->f = 0; p->g = 0; }

