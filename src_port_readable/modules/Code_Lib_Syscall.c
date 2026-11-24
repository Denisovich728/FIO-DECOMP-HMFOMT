/* FIO-DECOMP-HMFOMT :: Port Readable Module: Code_Lib_Syscall (17 functions) */
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

/* 0x08000554 (20B) | Code_Lib_Syscall_Wrap_IntrWait (orig: func_08000554) | origin: pure | domain: Code_Lib_Syscall | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 Code_Lib_Syscall_IntrWait();
void Code_Lib_Syscall_Wrap_IntrWait(u16 arg0) {
  Code_Lib_Syscall_IntrWait(0,arg0);
}

/* 0x0800901C (120B) | Code_Lib_Syscall_Sub_0800901C (orig: func_0800901C) | origin: wip | domain: Code_Lib_Syscall | MEDIUM / graph_algebra */
void Code_Lib_Syscall_Sub_0800901C(int *param_1) {
  u32 uVar1;
  u8 **ppuVar2;
  int iVar3;
  u32 uVar4;
  int iVar5;
  u8 *puStack_1c;
  u32 uStack_18;
  ppuVar2 = (u8 **)param_1[1];
  if (*param_1 == 1) {
    ppuVar2 = &puStack_1c;
    puStack_1c = (u8 *)param_1[1];
  }
  uVar4 = param_1[3];
  iVar5 = param_1[2];
  if ((uVar4 & 0x4000000) == 0) {
    Code_Lib_Syscall_CpuSet(ppuVar2,iVar5,uVar4);
  }
  else {
    uVar1 = 0x0000FFFF & uVar4 & 7;
    iVar3 = (0x0000FFFF & uVar4) - uVar1;
    if ((iVar3 != 0) || (uVar1 == 0)) {
      uStack_18 = uVar1;
      Code_Lib_Syscall_CpuFastSet(ppuVar2,iVar5,uVar4 - uVar1);
      iVar5 = iVar5 + iVar3 * 4;
      if ((uVar4 & 0x1000000) == 0) {
        ppuVar2 = (u8 **)((int)ppuVar2 + iVar3 * 4);
      }
      if (uStack_18 == 0) {
      }
    }
    Code_Lib_Syscall_CpuSet(ppuVar2,iVar5,uVar4 - iVar3);
  }
}

/* 0x08009710 (52B) | Code_Lib_Syscall_HW_IO_0x040 (orig: func_08009710) | origin: pure | domain: Code_Lib_Syscall | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 Code_Lib_Syscall_CpuFastSet();
extern u32 Code_Lib_Syscall_CpuSet();
void Code_Lib_Syscall_HW_IO_0x040(int arg0) {
  Code_Lib_Syscall_CpuFastSet(arg0,0x4000000,0x10);
  Code_Lib_Syscall_CpuSet(arg0 + 0x40,0x04000040,0x04000005);
  *(u16 *)0x04000014 = *(u16 *)(arg0 + 0x14);
}

/* 0x08009790 (20B) | Code_Lib_Syscall_Wrap_CpuFastSet (orig: func_08009790) | origin: pure | domain: Code_Lib_Syscall | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 Code_Lib_Syscall_CpuFastSet();
void Code_Lib_Syscall_Wrap_CpuFastSet(int arg0) {
  Code_Lib_Syscall_CpuFastSet(arg0 + 4,0x7000000,0x100);
}

/* 0x0804E4AC (256B) | Code_Lib_Syscall_Sub_0804E4AC (orig: func_0804E4AC) | origin: wip | domain: Code_Lib_Syscall | MEDIUM / graph_algebra */
u32 Code_Lib_Syscall_Sub_0804E4AC(u32 param_1,int param_2,u32 param_3,u32 param_4,u32 param_5) {
  u32 uVar1;
  u32 uVar2;
  u32 uVar3;
  u32 uVar4;
  u32 uVar5;
  u32 uVar6;
  int iVar7;
  u8 auStack_a8 [32];
  u8 auStack_88 [32];
  u8 auStack_68 [32];
  u8 auStack_48 [32];
  u32 uStack_28;
  u32 uStack_24;
  uVar1 = code_809E804_Sub_080D0D28(auStack_a8,param_5);
  if (uVar1 - 1 < 2) {
    uVar5 = param_3 >> 3;
    uVar4 = param_4 >> 3;
    uVar2 = param_1 & 0xffff;
    uVar3 = param_1 >> 0x10;
    if ((uVar5 < uVar2) && (uVar4 < uVar3)) {
      uStack_28 = uVar5;
      if (((param_3 & 7) == 0) && ((param_4 & 7) == 0)) {
        uStack_24 = (u32)(uVar5 + 1 < uVar2);
        uVar6 = uVar4 + 1;
        iVar7 = (uVar4 * uVar2 + uVar5) * 0x20 + param_2;
        Code_Lib_Syscall_CpuFastSet(auStack_a8,iVar7,8);
        if (uVar6 < uVar3) {
          Code_Lib_Syscall_CpuFastSet(auStack_68,(uVar6 * uVar2 + uVar5) * 0x20 + param_2,8);
        }
        if (((uStack_24 != 0) && (1 < uVar1)) &&
           (Code_Lib_Syscall_CpuFastSet(auStack_88,iVar7 + 0x20,8), uVar6 < uVar3)) {
          Code_Lib_Syscall_CpuFastSet(auStack_48,(uStack_28 + uVar6 * uVar2) * 0x20 + param_2 + 0x20,8);
        }
      }
      else {
        Code_Lib_Syscall_Return_0(param_1,param_2,param_3,param_4,auStack_a8);
      }
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

/* 0x0804E7A0 (60B) | Code_Lib_Syscall_Wrap_CpuFastSet_E7A0 (orig: func_0804E7A0) | origin: wip | domain: Code_Lib_Syscall | MEDIUM / graph_algebra */
void Code_Lib_Syscall_Wrap_CpuFastSet_E7A0(u32 param_1,u32 param_2,u32 param_3) {
  u32 uStack_8;
  uStack_8 = param_3 & 0xf | (param_3 & 0xf) << 4;
  uStack_8 = uStack_8 | uStack_8 << 8;
  uStack_8 = uStack_8 | uStack_8 << 0x10;
  Code_Lib_Syscall_CpuFastSet(&uStack_8,param_2,
                  (param_1 >> 0x10) * 0x20 * (param_1 & 0xffff) >> 2 & 0x001FFFFF | 0x1000000);
}

/* 0x0804E7DC (276B) | Code_Lib_Syscall_Sub_0804E7DC (orig: func_0804E7DC) | origin: wip | domain: Code_Lib_Syscall | MEDIUM / graph_algebra */
void Code_Lib_Syscall_Sub_0804E7DC(u32 param_1,int param_2,u32 param_3,u32 param_4,u32 param_5,u32 param_6,
             u32 param_7) {
  u32 uVar1;
  u32 uVar2;
  u32 uVar3;
  u32 uVar4;
  u32 uStack_20;
  uVar1 = param_7 & 0xf | (param_7 & 0xf) << 4;
  uVar1 = uVar1 | uVar1 << 8;
  uVar1 = uVar1 << 0x10 | uVar1;
  uVar3 = param_1 & 0xffff;
  param_1 = param_1 >> 0x10;
  uVar2 = uVar3 * 8;
  uVar4 = param_1 * 8;
  if ((((param_3 == 0) && (param_4 == 0)) && (uVar2 <= param_5)) && (uVar4 <= param_6)) {
    uStack_20 = uVar1;
    Code_Lib_Syscall_CpuFastSet(&uStack_20,param_2,param_1 * 0x20 * uVar3 >> 2 & 0x001FFFFF | 0x1000000);
  }
  else if ((param_3 < uVar3) && (param_4 < param_1)) {
    if (uVar2 <= param_3 + param_5) {
      param_5 = uVar2 - param_3;
    }
    if (uVar4 <= param_4 + param_6) {
      param_6 = uVar4 - param_4;
    }
    if ((((param_3 & 7) == 0) && ((param_4 & 7) == 0)) &&
       (((param_5 & 7) == 0 && ((param_6 & 7) == 0)))) {
      param_6 = param_6 >> 3;
      param_2 = param_2 + (uVar3 * (param_4 >> 3) + (param_3 >> 3)) * 0x20;
      uVar2 = 0x3FFFFFF8 & param_5 & 0x001FFFFF;
      do {
        uStack_20 = uVar1;
        Code_Lib_Syscall_CpuFastSet(&uStack_20,param_2,uVar2 | 0x1000000);
        param_2 = param_2 + uVar3 * 0x20;
        param_6 = param_6 - 1;
      } while (param_6 != 0);
    }
  }
}

/* 0x0804E8F0 (104B) | Code_Lib_Syscall_Sub_0804E8F0 (orig: func_0804E8F0) | origin: wip | domain: Code_Lib_Syscall | MEDIUM / graph_algebra */
void Code_Lib_Syscall_Sub_0804E8F0(u32 param_1,u32 param_2,u32 param_3,u32 param_4,u8 *param_5) {
  u8 bVar1;
  int iVar2;
  u32 uVar3;
  uVar3 = 0;
  bVar1 = *param_5;
  while ((bVar1 != 0 && (param_3 < (param_1 & 0xffff) << 3))) {
    uVar3 = uVar3 | bVar1;
    iVar2 = Code_Lib_Syscall_Sub_0804E4AC(param_1,param_2,param_3,param_4,uVar3);
    if (iVar2 == 1) {
      uVar3 = 0;
      param_3 = param_3 + 8;
    }
    else if (iVar2 != 0) {
      if (iVar2 != 2) {
      }
      uVar3 = 0;
      param_3 = param_3 + 0x10;
    }
    param_5 = param_5 + 1;
    bVar1 = *param_5;
    uVar3 = uVar3 << 8;
  }
}

/* 0x0804E9C8 (4B) | Code_Lib_Syscall_Return_0 (orig: func_0804E9C8) | origin: pure | domain: Code_Lib_Syscall | MEDIUM / graph_algebra */
u32 Code_Lib_Syscall_Return_0(void) {
    return 0;
}

/* 0x0804E9D0 (36B) | Code_Lib_Syscall_Wrap_CpuFastSet_E9D0 (orig: func_0804E9D0) | origin: pure | domain: Code_Lib_Syscall | MEDIUM / graph_algebra */
void Code_Lib_Syscall_CpuFastSet(void *, u32, u32); void Code_Lib_Syscall_Wrap_CpuFastSet_E9D0(u32 a, u32 b, void *c) { Code_Lib_Syscall_CpuFastSet(c, b, ((((u32)(u16)a * (a >> 16)) << 5) >> 2) & 0x1FFFFF); }

/* 0x08050B50 (200B) | Code_Lib_Syscall_Sub_08050B50 (orig: func_08050B50) | origin: wip | domain: Code_Lib_Syscall | MEDIUM / graph_algebra */
void Code_Lib_Syscall_Sub_08050B50(int param_1,u8 *param_2) {
  int iVar1;
  u8 *puVar2;
  int iVar3;
  u32 uVar4;
  u8 auStack_34 [8];
  u32 uStack_2c;
  u32 uStack_28;
  u32 *puStack_24;
  if (param_2 == (u8 *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = LibC_strlen(param_2);
  }
  if (iVar1 - 1U < 0xc) {
    uVar4 = 0;
    puStack_24 = &uStack_2c;
    do {
      uStack_2c = ((u16)(4));
      *(u16 *)((int)puStack_24 + 2) = 2;
      iVar3 = uVar4 * 0x104 + param_1 + 0x1f8;
      Code_Lib_Syscall_Wrap_CpuFastSet_E7A0(uStack_2c,iVar3,0);
      uVar4 = uVar4 + 1;
      if (iVar1 != 0) {
        puVar2 = auStack_34;
        do {
          *puVar2 = *param_2;
          param_2 = param_2 + 1;
          puVar2 = puVar2 + 1;
          iVar1 = iVar1 + -1;
          if (iVar1 == 0) break;
        } while (puVar2 != auStack_34 + 4);
        *puVar2 = 0;
        uStack_28 = 0x20004;
        Code_Lib_Syscall_Sub_0804E8F0(0x20004,iVar3,0,0,auStack_34);
      }
    } while (uVar4 < 3);
    *(u8 *)(param_1 + 0x1f0) = *(u8 *)(param_1 + 0x1f0) | 3;
  }
  else {
    Code_Lib_Syscall_Sub_08050C18(param_1);
  }
}

/* 0x08050C18 (20B) | Code_Lib_Syscall_Sub_08050C18 (orig: func_08050C18) | origin: pure | domain: Code_Lib_Syscall | MEDIUM / graph_algebra */
struct S { u8 pad[0x1f0]; u8 b0:1; }; void Code_Lib_Syscall_Sub_08050C18(struct S *a) { a->b0 = 0; }

/* 0x08050E68 (12B) | Code_Lib_Syscall_Sub_08050E68 (orig: func_08050E68) | origin: pure | domain: Code_Lib_Syscall | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 Code_Lib_Syscall_Sub_08050B50();
void Code_Lib_Syscall_Sub_08050E68(u32 *arg0) {
  Code_Lib_Syscall_Sub_08050B50(*arg0);
}

/* 0x08050E74 (12B) | Code_Lib_Syscall_Sub_08050E74 (orig: func_08050E74) | origin: pure | domain: Code_Lib_Syscall | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 Code_Lib_Syscall_Sub_08050C18();
void Code_Lib_Syscall_Sub_08050E74(u32 *arg0) {
  Code_Lib_Syscall_Sub_08050C18(*arg0);
}

/* 0x0805FA34 (32B) | Code_Lib_Syscall_Sub_0805FA34 (orig: func_0805FA34) | origin: wip | domain: Code_Lib_Syscall | MEDIUM / graph_algebra */
Code_Lib_Syscall_Sub_0805FA34(u32 param_1,u32 param_2,u32 param_3,u32 param_4) {
  int unaff_r4;
  int unaff_r5;
  u32 unaff_r6;
  u32 in_stack_00000010;
  *(u32 *)(unaff_r5 + 0x40) = param_1;
  *(u32 *)(unaff_r4 + 0x40) = unaff_r6;
  *(int *)(unaff_r4 + 0x40) = unaff_r4;
  Code_Lib_Syscall_Sub_08050E68(0,IntroSequence_Sub_0805FA54,param_3,param_4,param_4);
  code_0803EE94_78C0_Sub_08050DA0(0,func_0805FA58,0x00006428);
  return in_stack_00000010;
}

/* 0x080B96AC (136B) | Code_Lib_Syscall_Sub_080B96AC (orig: func_080B96AC) | origin: wip | domain: Code_Lib_Syscall | MEDIUM / graph_algebra */
u32 Code_Lib_Syscall_Sub_080B96AC(u32 param_1,u32 param_2,u32 param_3,int param_4,u32 param_5,u32 param_6,
             u32 param_7,u32 param_8) {
  u32 uVar1;
  u32 uVar2;
  int iVar3;
  int iVar4;
  param_8 = param_8 & 0xffff;
  iVar4 = ((param_5 & 0xffff) >> 8) - ((param_2 & 0xffff) >> 8);
  iVar3 = ((param_3 & 0xffff) >> 8) - ((param_6 & 0xffff) >> 8);
  if (iVar4 * iVar4 + iVar3 * iVar3 <= (int)((param_7 & 0xff) * (param_7 & 0xff))) {
    uVar1 = Code_Lib_Syscall_ArcTan2(iVar4,iVar3);
    uVar1 = uVar1 & 0xffff;
    if (param_4 == 1) {
      if (param_8 <= uVar1) {
        iVar3 = 0x10000 - param_8;
LAB_080b971e:
        if ((int)uVar1 <= iVar3) goto LAB_080b9726;
      }
      uVar2 = 1;
      goto LAB_080b9728;
    }
    if (param_4 == 3) {
      param_4 = 1;
    }
    iVar3 = (param_4 + 1) * 0x4000;
    if ((int)uVar1 < (int)(param_8 + iVar3)) {
      iVar3 = iVar3 - param_8;
      goto LAB_080b971e;
    }
  }
LAB_080b9726:
  uVar2 = 0;
LAB_080b9728:
  return uVar2;
}

/* 0x080D7F88 (20B) | Code_Lib_Syscall_Sub_080D7F88 (orig: func_080D7F88) | origin: pure | domain: Code_Lib_Syscall | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 Code_Lib_Syscall_Sub_08050E74();
void Code_Lib_Syscall_Sub_080D7F88(int arg0) {
  if (*(int *)(arg0 + 0xac) != 0) {
    Code_Lib_Syscall_Sub_08050E74();
  }
}

