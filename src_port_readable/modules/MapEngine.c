/* FIO-DECOMP-HMFOMT :: Port Readable Module: MapEngine (24 functions) */
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

/* 0x0801DE30 (12B) | MapEngine_Sub_0801DE30 (orig: func_0801DE30) | origin: pure | domain: MapEngine | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 MapEngine_Sub_080AA89C();
void MapEngine_Sub_0801DE30(int arg0) {
  MapEngine_Sub_080AA89C(*(u32 *)(arg0 + 4));
}

/* 0x080A6138 (92B) | MapEngine_Sub_080A6138 (orig: func_080A6138) | origin: wip | domain: MapEngine | HIGH / fomt_studio_table */
void MapEngine_Sub_080A6138(int param_1) {
  int iVar1;
  u32 uVar2;
  u32 uVar3;
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0x2a) {
    uVar3 = 0x28;
    uVar2 = 0x08106A7C;
  }
  else {
    if (0x2a < iVar1) {
      if (iVar1 == 0x2b) {
        Code_809E804_Sub_080A5BD8(param_1,0x08106A7C,0x36,0xf);
      }
      goto LAB_080a6180;
    }
    if (iVar1 != 0x29) goto LAB_080a6180;
    uVar3 = 0x19;
    uVar2 = 0x08106A7C;
  }
  Code_809E804_Sub_080A5BD8(param_1,uVar2,uVar3,0xf);
LAB_080a6180:
  *(u8 *)(param_1 + 0x29) = 1;
}

/* 0x080A6194 (92B) | MapEngine_Sub_080A6194 (orig: func_080A6194) | origin: wip | domain: MapEngine | HIGH / fomt_studio_table */
void MapEngine_Sub_080A6194(int param_1) {
  int iVar1;
  u32 uVar2;
  u32 uVar3;
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0x2a) {
    uVar3 = 0x28;
    uVar2 = 0x08106A94;
  }
  else {
    if (0x2a < iVar1) {
      if (iVar1 == 0x2b) {
        Code_809E804_Sub_080A5BD8(param_1,0x08106A94,0x36,0xf);
      }
      goto LAB_080a61dc;
    }
    if (iVar1 != 0x29) goto LAB_080a61dc;
    uVar3 = 0x19;
    uVar2 = 0x08106A94;
  }
  Code_809E804_Sub_080A5BD8(param_1,uVar2,uVar3,0xf);
LAB_080a61dc:
  *(u8 *)(param_1 + 0x29) = 1;
}

/* 0x080A61F0 (68B) | MapEngine_Sub_080A61F0 (orig: func_080A61F0) | origin: wip | domain: MapEngine | HIGH / fomt_studio_table */
void MapEngine_Sub_080A61F0(u32 param_1, u32 param_2, u32 param_3, u32 param_4) {
    register u32 r0 = param_1;
    register u32 r1 = param_2;
    register u32 r2 = param_3;
    register u32 r3 = param_4;
    register u32 r4, r5;
    r4 = r0 + 0;
    r0 = *(u32 *)(r4 + 4);
    if (r0 == 0x2a) goto loc_080A6200;
    if (r0 == 0x2b) goto loc_080A6214;
    goto loc_080A6220;
loc_080A6200:
    r1 = 0x08106AAC;
    r0 = r4 + 0;
    r2 = 0xb;
    r3 = 3;
    r0 = Code_809E804_Sub_080A5BD8(r0, r1, r2, r3);
    goto loc_080A6220;
    r0 = r0;
    r4 = *(u32 *)(r5 + 0x28);
    r0 = (u32)r2 >> 0x20;
loc_080A6214:
    r1 = 0x08106AAC;
    r0 = r4 + 0;
    r2 = 0x13;
    r3 = 3;
    r0 = Code_809E804_Sub_080A5BD8(r0, r1, r2, r3);
loc_080A6220:
    r1 = r4 + 0;
    r1 += 0x29;
    r0 = 1;
    *(u8 *)(r1) = r0;
    return r0;
}

/* 0x080A6234 (68B) | MapEngine_Sub_080A6234 (orig: func_080A6234) | origin: wip | domain: MapEngine | HIGH / fomt_studio_table */
void MapEngine_Sub_080A6234(u32 param_1, u32 param_2, u32 param_3, u32 param_4) {
    register u32 r0 = param_1;
    register u32 r1 = param_2;
    register u32 r2 = param_3;
    register u32 r3 = param_4;
    register u32 r4;
    r4 = r0 + 0;
    r0 = *(u32 *)(r4 + 4);
    if (r0 == 0x2a) goto loc_080A6244;
    if (r0 == 0x2b) goto loc_080A6258;
    goto loc_080A6264;
loc_080A6244:
    r1 = 0x08106AC4;
    r0 = r4 + 0;
    r2 = 0xb;
    r3 = 3;
    r0 = Code_809E804_Sub_080A5BD8(r0, r1, r2, r3);
    goto loc_080A6264;
    r0 = r0;
    r4 = *(u32 *)(r0 + 0x2c);
    r0 = (u32)r2 >> 0x20;
loc_080A6258:
    r1 = 0x08106AC4;
    r0 = r4 + 0;
    r2 = 0x13;
    r3 = 3;
    r0 = Code_809E804_Sub_080A5BD8(r0, r1, r2, r3);
loc_080A6264:
    r1 = r4 + 0;
    r1 += 0x29;
    r0 = 1;
    *(u8 *)(r1) = r0;
    return r0;
}

/* 0x080A6278 (68B) | MapEngine_Sub_080A6278 (orig: func_080A6278) | origin: wip | domain: MapEngine | HIGH / fomt_studio_table */
void MapEngine_Sub_080A6278(u32 param_1, u32 param_2, u32 param_3, u32 param_4) {
    register u32 r0 = param_1;
    register u32 r1 = param_2;
    register u32 r2 = param_3;
    register u32 r3 = param_4;
    register u32 r4;
    r4 = r0 + 0;
    r0 = *(u32 *)(r4 + 4);
    if (r0 == 0x2a) goto loc_080A6288;
    if (r0 == 0x2b) goto loc_080A629C;
    goto loc_080A62A8;
loc_080A6288:
    r1 = 0x08106ADC;
    r0 = r4 + 0;
    r2 = 0xf;
    r3 = 2;
    r0 = Code_809E804_Sub_080A5BD8(r0, r1, r2, r3);
    goto loc_080A62A8;
    r0 = r0;
    r4 = *(u32 *)(r3 + 0x2c);
    r0 = (u32)r2 >> 0x20;
loc_080A629C:
    r1 = 0x08106ADC;
    r0 = r4 + 0;
    r2 = 0x17;
    r3 = 2;
    r0 = Code_809E804_Sub_080A5BD8(r0, r1, r2, r3);
loc_080A62A8:
    r1 = r4 + 0;
    r1 += 0x29;
    r0 = 1;
    *(u8 *)(r1) = r0;
    return r0;
}

/* 0x080A62BC (68B) | MapEngine_Sub_080A62BC (orig: func_080A62BC) | origin: wip | domain: MapEngine | HIGH / fomt_studio_table */
void MapEngine_Sub_080A62BC(u32 param_1, u32 param_2, u32 param_3, u32 param_4) {
    register u32 r0 = param_1;
    register u32 r1 = param_2;
    register u32 r2 = param_3;
    register u32 r3 = param_4;
    register u32 r4, r6;
    r4 = r0 + 0;
    r0 = *(u32 *)(r4 + 4);
    if (r0 == 0x2a) goto loc_080A62CC;
    if (r0 == 0x2b) goto loc_080A62E0;
    goto loc_080A62EC;
loc_080A62CC:
    r1 = 0x08106AF4;
    r0 = r4 + 0;
    r2 = 0xf;
    r3 = 2;
    r0 = Code_809E804_Sub_080A5BD8(r0, r1, r2, r3);
    goto loc_080A62EC;
    r0 = r0;
    r4 = *(u32 *)(r6 + 0x2c);
    r0 = (u32)r2 >> 0x20;
loc_080A62E0:
    r1 = 0x08106AF4;
    r0 = r4 + 0;
    r2 = 0x17;
    r3 = 2;
    r0 = Code_809E804_Sub_080A5BD8(r0, r1, r2, r3);
loc_080A62EC:
    r1 = r4 + 0;
    r1 += 0x29;
    r0 = 1;
    *(u8 *)(r1) = r0;
    return r0;
}

/* 0x080A6300 (92B) | MapEngine_Sub_080A6300 (orig: func_080A6300) | origin: wip | domain: MapEngine | HIGH / fomt_studio_table */
void MapEngine_Sub_080A6300(int param_1) {
  int iVar1;
  u32 uVar2;
  u32 uVar3;
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0x2a) {
    uVar3 = 0x10;
    uVar2 = 0x08106B3C;
  }
  else {
    if (0x2a < iVar1) {
      if (iVar1 != 0x2b) {
      }
      Code_809E804_Sub_080A5BD8(param_1,0x08106B3C,0x18,0x11);
      goto LAB_080a6348;
    }
    if (iVar1 != 0x29) {
    }
    uVar3 = 1;
    uVar2 = 0x08106B3C;
  }
  Code_809E804_Sub_080A5BD8(param_1,uVar2,uVar3,0x11);
LAB_080a6348:
  *(u8 *)(param_1 + 0x29) = 1;
}

/* 0x080A635C (92B) | MapEngine_Sub_080A635C (orig: func_080A635C) | origin: wip | domain: MapEngine | HIGH / fomt_studio_table */
void MapEngine_Sub_080A635C(int param_1) {
  int iVar1;
  u32 uVar2;
  u32 uVar3;
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0x2a) {
    uVar3 = 0x10;
    uVar2 = 0x08106B24;
  }
  else {
    if (0x2a < iVar1) {
      if (iVar1 != 0x2b) {
      }
      Code_809E804_Sub_080A5BD8(param_1,0x08106B24,0x18,0x11);
      goto LAB_080a63a4;
    }
    if (iVar1 != 0x29) {
    }
    uVar3 = 1;
    uVar2 = 0x08106B24;
  }
  Code_809E804_Sub_080A5BD8(param_1,uVar2,uVar3,0x11);
LAB_080a63a4:
  *(u8 *)(param_1 + 0x29) = 1;
}

/* 0x080AA89C (32B) | MapEngine_Sub_080AA89C (orig: func_080AA89C) | origin: pure | domain: MapEngine | HIGH / fomt_studio_table */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 Code_809E804_Sub_080A5BD8();
void MapEngine_Sub_080AA89C(int arg0) {
  Code_809E804_Sub_080A5BD8(arg0,0x08106DAC,0x21,0x14);
  *(u8 *)(arg0 + 0x29) = 1;
}

/* 0x080AA8BC (32B) | MapEngine_Sub_080AA8BC (orig: func_080AA8BC) | origin: pure | domain: MapEngine | HIGH / fomt_studio_table */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 Code_809E804_Sub_080A5BD8();
void MapEngine_Sub_080AA8BC(int arg0) {
  Code_809E804_Sub_080A5BD8(arg0,0x08106DAC,0x21,0x17);
  *(u8 *)(arg0 + 0x29) = 1;
}

/* 0x080AA8F0 (216B) | MapEngine_Sub_080AA8F0 (orig: func_080AA8F0) | origin: wip | domain: MapEngine | MEDIUM / graph_algebra */
void * MapEngine_Sub_080AA8F0(int param_1) {
  bool bVar1;
  char cVar2;
  int iVar3;
  u32 uVar4;
  u32 uVar5;
  int *piVar6;
  u32 *puVar7;
  u32 uVar8;
  int iVar9;

  u32 auStack_30 [4];
  u32 uStack_20;
  u32 uStack_1c;
  u8 uStack_18;
  
  puVar7 = auStack_30;
  piVar6 = (int *)(param_1 + 0x94);
  iVar9 = *piVar6 + 0x1CD4;
  cVar2 = ScriptVM_Wrap_Func120(iVar9);
  if ((cVar2 != '\0') || (iVar3 = code_809E804_Sub_080A041C(iVar9), iVar3 != 0)) goto LAB_080aa9b6;
  iVar3 = *piVar6 + 0x1C34;
  bVar1 = false;
  cVar2 = ToolStack_IsEmpty(iVar3);
  if (cVar2 == '\0') {
    uStack_18 = ToolStack_GetTool(iVar3);
    iVar3 = func_0800DB30();
    if (iVar3 != 0x4b) goto LAB_080aa93c;
LAB_080aa964:
    bVar1 = true;
  }
  else {
LAB_080aa93c:
    iVar3 = Rucksack_GetFirstSlotWithTool(*piVar6 + 0x1C38,0x4b);
    if ((iVar3 != -1) || (iVar3 = ToolChest_GetFirstSlotWith(*piVar6 + 0x380,0x4b), iVar3 != -1))
    goto LAB_080aa964;
  }
  if (!bVar1) {
    auStack_30[0] = *((const u32 *)0x08107438);
    auStack_30[1] = ((const u32 *)0x08107438)[1];
    auStack_30[2] = ((const u32 *)0x08107438)[2];
    auStack_30[3] = ((const u32 *)0x08107438)[3];
    uStack_20 = ((const u32 *)0x08107438)[4];
    uStack_1c = ((const u32 *)0x08107438)[5];
    uVar8 = 0;
    do {
      iVar3 = ScriptVM_Sub_080A01F8(iVar9,*puVar7);
      if (((iVar3 != 0) && (uVar4 = func_0809E498(), 0xC34F < uVar4)) &&
         (uVar4 = func_0809E4AC(iVar3), uVar4 < 4)) {
        uVar5 = 1;
        goto LAB_080aa9b8;
      }
      puVar7 = puVar7 + 1;
      uVar8 = uVar8 + 1;
    } while (uVar8 < 6);
  }
LAB_080aa9b6:
  uVar5 = 0;
LAB_080aa9b8:
  return (void *)uVar5;
}

/* 0x080AAE14 (48B) | MapEngine_Sub_080AAE14 (orig: func_080AAE14) | origin: pure | domain: MapEngine | MEDIUM / graph_algebra */
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
extern u32 MapEngine_Sub_080DC57C();
void MapEngine_Sub_080AAE14(u32 arg0, u32 arg1, u32 arg2, u32 arg3)
{
    register u32 r0 = arg0;
    register u32 r1 = arg1;
    register u32 r2 = arg2;
    register u32 r3 = arg3;
    register u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0;
    *(u32 *)(r0) = r1;
    *(u32 *)(r0 + 4) = r2;
    r4 = r0 + 0;
    r4 += 8;
    r0 = *(u32 *)(r4 + 8);
    if (r0 == 0) goto loc_080AAE3E;
    r0 = *(u32 *)(r4 + 4);
    r1 = *(u32 *)(r0 + 4);
    r0 = r4 + 0;
    r0 = MapEngine_Sub_080DC57C(r0, r1, r2, r3);
    r0 = *(u32 *)(r4 + 4);
    *(u32 *)(r0 + 8) = r0;
    r0 = *(u32 *)(r4 + 4);
    r1 = 0;
    *(u32 *)(r0 + 4) = r1;
    r0 = *(u32 *)(r4 + 4);
    *(u32 *)(r0 + 0xc) = r0;
    *(u32 *)(r4 + 8) = r1;
loc_080AAE3E:
    return r0;
}

/* 0x080AD950 (16B) | MapEngine_Sub_080AD950 (orig: func_080AD950) | origin: pure | domain: MapEngine | MEDIUM / graph_algebra */
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
extern u32 MapEngine_Sub_080A635C();
u32 MapEngine_Sub_080AD950(int arg0) {
  u32 val;
  val = MapEngine_Sub_080A635C(*(u32 *)(arg0 + 4));
  return 0;
}

/* 0x080AD960 (16B) | MapEngine_Sub_080AD960 (orig: func_080AD960) | origin: pure | domain: MapEngine | MEDIUM / graph_algebra */
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
extern u32 MapEngine_Sub_080A6300();
u32 MapEngine_Sub_080AD960(int arg0) {
  u32 val;
  val = MapEngine_Sub_080A6300(*(u32 *)(arg0 + 4));
  return 0;
}

/* 0x080AD970 (12B) | MapEngine_Sub_080AD970 (orig: func_080AD970) | origin: pure | domain: MapEngine | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 MapEngine_Sub_080A6024();
void MapEngine_Sub_080AD970(int arg0) {
  MapEngine_Sub_080A6024(*(u32 *)(arg0 + 4));
}

/* 0x080AD97C (12B) | MapEngine_Sub_080AD97C (orig: func_080AD97C) | origin: pure | domain: MapEngine | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 MapEngine_Sub_080A607C();
void MapEngine_Sub_080AD97C(int arg0) {
  MapEngine_Sub_080A607C(*(u32 *)(arg0 + 4));
}

/* 0x080AD988 (12B) | MapEngine_Sub_080AD988 (orig: func_080AD988) | origin: pure | domain: MapEngine | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 MapEngine_Sub_080A62BC();
void MapEngine_Sub_080AD988(int arg0) {
  MapEngine_Sub_080A62BC(*(u32 *)(arg0 + 4));
}

/* 0x080AD994 (12B) | MapEngine_Sub_080AD994 (orig: func_080AD994) | origin: pure | domain: MapEngine | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 MapEngine_Sub_080A6278();
void MapEngine_Sub_080AD994(int arg0) {
  MapEngine_Sub_080A6278(*(u32 *)(arg0 + 4));
}

/* 0x080AD9A0 (12B) | MapEngine_Sub_080AD9A0 (orig: func_080AD9A0) | origin: pure | domain: MapEngine | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 MapEngine_Sub_080A6234();
void MapEngine_Sub_080AD9A0(int arg0) {
  MapEngine_Sub_080A6234(*(u32 *)(arg0 + 4));
}

/* 0x080AD9AC (12B) | MapEngine_Sub_080AD9AC (orig: func_080AD9AC) | origin: pure | domain: MapEngine | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 MapEngine_Sub_080A61F0();
void MapEngine_Sub_080AD9AC(int arg0) {
  MapEngine_Sub_080A61F0(*(u32 *)(arg0 + 4));
}

/* 0x080AD9B8 (12B) | MapEngine_Sub_080AD9B8 (orig: func_080AD9B8) | origin: pure | domain: MapEngine | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 MapEngine_Sub_080A6194();
void MapEngine_Sub_080AD9B8(int arg0) {
  MapEngine_Sub_080A6194(*(u32 *)(arg0 + 4));
}

/* 0x080AD9C4 (12B) | MapEngine_Sub_080AD9C4 (orig: func_080AD9C4) | origin: pure | domain: MapEngine | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 MapEngine_Sub_080A6138();
void MapEngine_Sub_080AD9C4(int arg0) {
  MapEngine_Sub_080A6138(*(u32 *)(arg0 + 4));
}

/* 0x080DC57C (44B) | MapEngine_Sub_080DC57C (orig: func_080DC57C) | origin: pure | domain: MapEngine | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 LibC_free();
void MapEngine_Sub_080DC57C(u32 arg0,int arg1) {
  int val;
  while (val = arg1, val != 0) {
    MapEngine_Sub_080DC57C(arg0,*(u32 *)(val + 0xc));
    arg1 = *(int *)(val + 8);
    if (val != 0) {
      LibC_free(val);
    }
  }
}

