/* FIO-DECOMP-HMFOMT :: Port Readable Module: Code_809E804 (14 functions) */
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

/* 0x080A4698 (20B) | Code_809E804_GetMapData (orig: func_080A4698) | origin: pure | domain: Code_809E804 | EXACT / stanhash_elf */
struct S { u8 x[40]; }; extern struct S g_08105EDC[]; struct S *Code_809E804_GetMapData(int a) { return &g_08105EDC[a]; }

/* 0x080A56DC (132B) | Code_809E804_Sub_080A56DC (orig: func_080A56DC) | origin: wip | domain: Code_809E804 | MEDIUM / graph_algebra */
void Code_809E804_Sub_080A56DC(u32 *param_1,u16 *param_2,u32 param_3,u32 param_4,u32 param_5
             ) {
  u32 uVar1;
  *param_1 = *param_2 & 0x3ff;
  param_1[2] = ((param_2[1] & 0x000003FF) << 6 | (u32)(*(u8 *)((int)1 + param_2) >> 2)) <<
               0x10;
  uVar1 = (s8)0x000003FF;
  param_1[3] = ((param_2[2] & uVar1) << 6 | (u32)(*(u8 *)((int)param_2 + 3) >> 2)) << 0x10;
  func_080D391C(param_1,param_3,param_4,param_5);
  Code_809E804_Sub_080A5960(param_1,(int)(short)((u16)((param_2[1] & uVar1) << 6) |
                                    (u16)(*(u16 *)((int)param_2 + 1) >> 2)),
                (int)(short)((u16)((param_2[2] & uVar1) << 6) |
                            (u16)(*(u16 *)((int)3 + param_2) >> 2)));
}

/* 0x080A58EC (116B) | Code_809E804_Sub_080A58EC (orig: func_080A58EC) | origin: wip | domain: Code_809E804 | MEDIUM / graph_algebra */
u32 Code_809E804_Sub_080A58EC(u16 *param_1,int param_2,int param_3,int param_4) {
  int iVar1;
  int iVar2;
  iVar1 = Code_809E804_GetMapData(*(u32 *)(param_2 + 4));
  param_3 = param_3 + -0x78;
  param_4 = param_4 + -0x50;
  if (param_3 < 0) {
    param_3 = 0;
  }
  else {
    iVar2 = (u32)*(u16 *)(iVar1 + 0x20) * 8 + -0xf0;
    if (iVar2 < param_3) {
      param_3 = iVar2;
    }
  }
  if (param_4 < 0) {
    param_4 = 0;
  }
  else {
    iVar1 = (u32)*(u16 *)(iVar1 + 0x22) * 8 + -0xa0;
    if (iVar1 < param_4) {
      param_4 = iVar1;
    }
  }
  *param_1 = (short)param_3;
  param_1[1] = (short)param_4;
  return param_1;
}

/* 0x080A5960 (92B) | Code_809E804_Sub_080A5960 (orig: func_080A5960) | origin: wip | domain: Code_809E804 | MEDIUM / graph_algebra */
void Code_809E804_Sub_080A5960(int param_1,u32 param_2,u32 param_3) {
    short sStack_e;
  u8 auStack_14 [4];
  register short sStack_10;
  Code_809E804_Sub_080A58EC(auStack_14,param_1,param_2,param_3);
  sStack_10 = auStack_14;
  if (*(short *)(param_1 + 10) != (u8)sStack_10) {
    *(u8 *)(param_1 + 0x29) = 1;
    *(int *)(param_1 + 8) = (int)sStack_10 << 0x10;
  }
  sStack_e = (s8)auStack_14;
  if (*(u32 *)(param_1 + 0xe) != sStack_e) {
    *(u8 *)(param_1 + 0x29) = 1;
    *(int *)(param_1 + 0xc) = (s8)(int)sStack_e << 0x10;
  }
  return 0;
}

/* 0x080A5BD8 (232B) | Code_809E804_Sub_080A5BD8 (orig: func_080A5BD8) | origin: wip | domain: Code_809E804 | MEDIUM / graph_algebra */
void Code_809E804_Sub_080A5BD8(int param_1,u8 *param_2,int param_3,int param_4) {
  u16 uVar1;
  int iVar2;
  u32 uVar3;
  u32 uVar4;
  u8 *pbVar5;
  u32 uVar6;
  int iVar7;
  u32 *puVar8;
  u32 uVar9;
  iVar2 = Code_809E804_GetMapData(*(u32 *)(param_1 + 4));
  uVar1 = *(u16 *)(iVar2 + 0x20);
  uVar9 = (u32)*param_2;
  uVar3 = (u32)param_2[1];
  uVar4 = 0;
  do {
    iVar2 = uVar4 * 4;
    uVar4 = uVar4 + 1;
    if ((*(int *)(param_2 + iVar2 + 4) != 0) && (uVar6 = 0, uVar3 != 0)) {
      iVar7 = 0;
      do {
        LibC_memcpy((u32)uVar1 * (param_4 + uVar6) * 2 +
                      param_3 * 2 + *(int *)(param_1 + 0x10 + iVar2),
                      iVar7 + *(int *)(param_2 + iVar2 + 4),uVar9 << 1);
        iVar7 = iVar7 + uVar9 * 2;
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar3);
    }
  } while (uVar4 < 3);
  if (((*(int *)(param_2 + 0x14) != 0) && (*(int *)(param_2 + 0x10) != 0)) &&
     (uVar4 = 0, uVar3 != 0)) {
    do {
      pbVar5 = (u8 *)(*(int *)(param_2 + 0x14) + uVar9 * uVar4);
      puVar8 = (u32 *)
               (*(int *)(param_1 + 0x2c) + param_3 * 4 + (u32)uVar1 * (param_4 + uVar4) * 4);
      uVar6 = 0;
      uVar4 = uVar4 + 1;
      if (uVar9 != 0) {
        do {
          *puVar8 = *(u32 *)((u32)*pbVar5 * 4 + *(int *)(param_2 + 0x10));
          puVar8 = puVar8 + 1;
          pbVar5 = pbVar5 + 1;
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar9);
      }
    } while (uVar4 < uVar3);
  }
}

/* 0x080A5EB8 (192B) | Code_809E804_Sub_080A5EB8 (orig: func_080A5EB8) | origin: wip | domain: Code_809E804 | MEDIUM / graph_algebra */
u32 Code_809E804_Sub_080A5EB8(int *param_1,u16 *param_2) {
  u32 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  u32 uVar5;
  u32 uVar6;
  int iVar7;
  u32 uVar8;
  uVar1 = 0x000003FF;
  if ((((*param_2 & 0x3ff) == 1) && (*param_1 == 1)) && (param_1[1] == 8)) {
    iVar2 = (int)(short)((u16)((param_2[1] & 0x000003FF) << 6) |
                        (u16)(*(u8 *)((int)param_2 + 1) >> 2));
    if (iVar2 < 0) {
      iVar2 = iVar2 + 7;
    }
    iVar3 = (int)(short)((u16)((param_2[2] & 0x000003FF) << 6) |
                        (u16)(*(u8 *)((int)param_2 + 3) >> 2));
    if (iVar3 < 0) {
      iVar3 = iVar3 + 7;
    }
    iVar4 = Code_809E804_GetMapData(8);
    uVar8 = 0;
    iVar7 = 8;
    do {
      uVar6 = uVar1 & *(u16 *)
                       (*(int *)((int)param_1 + iVar7 + 0x10) + (short)(iVar2 >> 3) * 2 +
                       (u32)*(u16 *)(iVar4 + 0x20) * (int)(short)(iVar3 >> 3) * 2);
      if (uVar6 != uVar1) {
        if ((uVar6 - 0x58 < 0x3d) || (uVar6 < 0x34)) {
          uVar5 = 1;
          goto LAB_080a5f6a;
        }
        break;
      }
      iVar7 = iVar7 + -4;
      uVar8 = uVar8 + 1;
    } while (uVar8 < 3);
  }
  uVar5 = 0;
LAB_080a5f6a:
  return uVar5;
}

/* 0x080A5F78 (164B) | Code_809E804_Sub_080A5F78 (orig: func_080A5F78) | origin: wip | domain: Code_809E804 | MEDIUM / graph_algebra */
void Code_809E804_Sub_080A5F78(int param_1,int param_2,short *param_3,u32 param_4,u32 param_5) {
  u16 uVar1;
  int iVar2;
  u32 uVar3;
  u8 *pbVar4;
  u32 uVar5;
  u32 uVar6;
  iVar2 = Code_809E804_GetMapData(*(u32 *)(param_1 + 4));
  uVar1 = *(u16 *)(iVar2 + 0x20);
  if (param_5 != 0) {
    uVar6 = 0;
    do {
      uVar5 = 0;
      uVar3 = uVar6 + 1;
      if (param_4 != 0) {
        do {
          iVar2 = (int)*param_3 + uVar5 + ((int)param_3[1] + uVar6) * (u32)uVar1;
          *(short *)(*(int *)(param_1 + 0x10 + param_2 * 4) + iVar2 * 2) = (short)0x000003FF;
          iVar2 = iVar2 * 4;
          pbVar4 = (u8 *)(iVar2 + *(int *)(param_1 + 0x2c));
          *pbVar4 = *pbVar4 & 0xfe;
          iVar2 = iVar2 + *(int *)(param_1 + 0x2c);
          *(u16 *)(iVar2 + 2) = *(u16 *)(iVar2 + 2) & 1;
          uVar5 = uVar5 + 1;
        } while (uVar5 < param_4);
      }
      uVar6 = uVar3;
    } while (uVar3 < param_5);
  }
  *(u8 *)(param_1 + 0x29) = 1;
}

/* 0x080A63B8 (104B) | Code_809E804_Sub_080A63B8 (orig: func_080A63B8) | origin: wip | domain: Code_809E804 | MEDIUM / graph_algebra */
void Code_809E804_Sub_080A63B8(u32 param_1, u32 param_2, u32 param_3, u32 param_4) {
    register u32 r0 = param_1;
    register u32 r1 = param_2;
    register u32 r2 = param_3;
    register u32 r3 = param_4;
    register u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0;
    r4 = r0 + 0;
    r0 = *(u32 *)(r4 + 4);
    if (r0 == 0x25) goto loc_080A63F8;
    if ((int)r0 > 0x25) goto loc_080A63CC;
    if (r0 == 0x24) goto loc_080A63E4;
    goto loc_080A6414;
loc_080A63CC:
    if (r0 != 0x40) goto loc_080A6414;
    r1 = 0x081070C4;
    r0 = r4 + 0;
    r2 = 1;
    r3 = 0xd;
    r0 = Code_809E804_Sub_080A5BD8(r0, r1, r2, r3);
    goto loc_080A640C;
    r0 = r0;
    *(u8 *)(r0 + 3) = r4;
    r0 = (u32)r2 >> 0x20;
loc_080A63E4:
    r1 = 0x081070C4;
    r0 = r4 + 0;
    r2 = 1;
    r3 = 0x11;
    r0 = Code_809E804_Sub_080A5BD8(r0, r1, r2, r3);
    goto loc_080A640C;
    r0 = r0;
    *(u8 *)(r0 + 3) = r4;
    r0 = (u32)r2 >> 0x20;
loc_080A63F8:
    r2 = 0x081070C4;
    r3 = 0xd;
    if ((u8)r1 != 0) goto loc_080A6402;
    r3 = 0x11;
loc_080A6402:
    r0 = r4 + 0;
    r1 = r2 + 0;
    r2 = 1;
    r0 = Code_809E804_Sub_080A5BD8(r0, r1, r2, r3);
loc_080A640C:
    r1 = r4 + 0;
    r1 += 0x29;
    r0 = 1;
    *(u8 *)(r1) = r0;
loc_080A6414:
    return r0;
    r0 = r0;
    *(u8 *)(r0 + 3) = r4;
    r0 = (u32)r2 >> 0x20;
    return r0;
}

/* 0x080A643C (32B) | Code_809E804_Wrap_GetMapData (orig: func_080A643C) | origin: pure | domain: Code_809E804 | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 Code_809E804_GetMapData();
u32 Code_809E804_Wrap_GetMapData(int arg0,int arg1,int arg2) {
  int val;
  val = Code_809E804_GetMapData(*(u32 *)(arg0 + 4));
  return (*(int *)(arg0 + 0x2c) +
                        (arg1 + arg2 * (u32)*(u16 *)(val + 0x20)) * 4);
}

/* 0x080AAFB8 (16B) | Code_809E804_Wrap_GetMapData_AFB8 (orig: func_080AAFB8) | origin: pure | domain: Code_809E804 | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 Code_809E804_GetMapData();
u32 Code_809E804_Wrap_GetMapData_AFB8(int arg0) {
  int val;
  val = Code_809E804_GetMapData(*(u32 *)(arg0 + 4));
  return ((u32)*(u8 *)(val + 0x24));
}

/* 0x080AD944 (12B) | Code_809E804_Sub_080AD944 (orig: func_080AD944) | origin: pure | domain: Code_809E804 | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 Code_809E804_Sub_080A63B8();
void Code_809E804_Sub_080AD944(int arg0) {
  Code_809E804_Sub_080A63B8(*(u32 *)(arg0 + 4));
}

/* 0x080ADA84 (36B) | Code_809E804_Wrap_GetMapData_DA84 (orig: func_080ADA84) | origin: pure | domain: Code_809E804 | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_0803A8A4_Sub_0803A8A4();
extern u32 Code_809E804_GetMapData();
u32 Code_809E804_Wrap_GetMapData_DA84(u32 arg0,u32 arg1) {
  int val;
  code_0803A8A4_Sub_0803A8A4(arg1,1,0,0,0);
  val = Code_809E804_GetMapData();
  return ((u32)*(u16 *)(val + 0x22) << 3);
}

/* 0x080ADAA8 (36B) | Code_809E804_Wrap_GetMapData_DAA8 (orig: func_080ADAA8) | origin: pure | domain: Code_809E804 | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_0803A8A4_Sub_0803A8A4();
extern u32 Code_809E804_GetMapData();
u32 Code_809E804_Wrap_GetMapData_DAA8(u32 arg0,u32 arg1) {
  int val;
  code_0803A8A4_Sub_0803A8A4(arg1,1,0,0,0);
  val = Code_809E804_GetMapData();
  return ((u32)*(u16 *)(val + 0x20) << 3);
}

/* 0x080ADBA8 (12B) | Code_809E804_Sub_080ADBA8 (orig: func_080ADBA8) | origin: pure | domain: Code_809E804 | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 Code_809E804_Sub_080A5960();
void Code_809E804_Sub_080ADBA8(int arg0) {
  Code_809E804_Sub_080A5960(*(u32 *)(arg0 + 4));
}

