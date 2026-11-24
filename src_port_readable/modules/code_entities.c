/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_entities (135 functions) */
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

/* 0x08020060 (32B) | code_entities_Sub_08020060 (orig: func_08020060) | origin: pure | domain: code_entities | HIGH / stanhash_map_tu */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D3910();
u32 code_entities_Sub_08020060(u32 *arg0) {
  u32 val;
  val = func_080D3910((int *)*arg0,*(u32 *)(*(int *)*arg0 + 0x14));
  return ((u32)(val == *(u16 *)(arg0 + 1)));
}

/* 0x08020080 (68B) | code_entities_Sub_08020080 (orig: func_08020080) | origin: wip | domain: code_entities | HIGH / stanhash_map_tu */
void code_entities_Sub_08020080(int param_1,int param_2) {
    int iVar3;
    int iVar4;
    int iVar5;
  u8 bVar1;
  register int iVar2;
  iVar2 = 0;
  iVar4 = 0;
  iVar3 = iVar2;
  iVar5 = iVar4;
  if (param_2 != 0) {
    bVar1 = *(u8 *)(param_1 + 0x20);
    if (bVar1 == 1) {
      iVar5 = -param_2;
    }
    else if (bVar1 < 2) {
      iVar5 = param_2;
      if (bVar1 != 0) {
        iVar5 = iVar4;
      }
    }
    else if (bVar1 == 2) {
      iVar3 = -param_2;
    }
    else {
        iVar3 = iVar2;
      if (bVar1 != 3) {
      iVar3 = param_2;
      }
    }
  }
  *(int *)(param_1 + 0x18) = iVar3;
  *(int *)(param_1 + 0x1c) = iVar5;
}

/* 0x080200C4 (108B) | code_entities_Sub_080200C4 (orig: func_080200C4) | origin: wip | domain: code_entities | HIGH / stanhash_map_tu */
void code_entities_Sub_080200C4(u32 param_1, u32 param_2, u32 param_3, u32 param_4) {
    u32 r2 = param_3;
    u32 r3 = param_4;
    u32 r1 = param_2;
    u32 r0 = param_1;
    register u32 r4, r5, r6, r7;
    r4 = r0 + 0;
    r6 = r4 + 0;
    r6 += 0x30;
    r0 = *(u8 *)(r6);
    if (r0 != 0) goto loc_08020126;
    r0 = r4 + 0;
    r0 = code_entities_Sub_08020060(r0, r1, r2, r3);
    r0 = r0 << 0x18;
    if (r0 == 0) goto loc_08020126;
    r0 = *(u32 *)(r4);
    r1 = *(u32 *)(r0);
    r2 = 0xa6;
    r2 = r2 << 1;
    r1 = r1 + r2;
    r1 = *(u32 *)(r1);
    r0 = func_080D3910(r0, r1, r2, r3);
    r4 = (s16)*(u32 *)(r0);
    r6 = r0 << 0x10;
    r7 = r6 + 0;
    r5 = *(u32 *)(r0 + 4);
    if (r4 == r5) goto loc_08020118;
loc_08020102:
    r0 = *(u32 *)(r4);
    r0 = hardware_GetField_0x00_8CD0(r0, r1, r2, r3);
    r0 = *(u32 *)(r4);
    if (r0 != 0) goto loc_08020112;
    r0 = r0 << 0x18;
    goto loc_0802011C;
loc_08020112:
    r4 += 4;
    if (r4 != r5) goto loc_08020102;
loc_08020118:
    r0 = r5 - 4;
    r0 = *(u32 *)(r0);
loc_0802011C:
    r0 = 1;
    r0 = hardware_Wrap_m4aMPlayStart(r0, r1, r2, r3);
    r1 = (u32)r6 >> 0x10;
    *(u8 *)(r7) = r0;
loc_08020126:
    return r0;
}

/* 0x08020130 (64B) | code_entities_Sub_08020130 (orig: func_08020130) | origin: wip | domain: code_entities | HIGH / stanhash_map_tu */
u32 code_entities_Sub_08020130(int param_1) {
    int iVar2;
  register unsigned int cVar1;
  register u32 uVar3;
  register u16 uVar4;
  if (*(int *)(param_1 + 0x10) == 0) {
    uVar4 = 1;
    iVar2 = 0;
  }
  else {
    uVar4 = uVar3 = 0;
    if (*(u16 *)(0x3e + iVar2) != 0) {
      uVar3 = (u32)(-(int)*(short *)(iVar2 + 0x40) | (int)*(short *)(iVar2 + 0x40)) >> 0x1f;
    }
    if ((uVar3 == 0) || (cVar1 = code_entities_Sub_0805E894(iVar2 + 0x30), cVar1 != '\0')) {
      uVar4 = 1;
    }
  }
  return uVar4;
}

/* 0x080202A0 (36B) | code_entities_vfunc_0C (orig: func_080202A0) | origin: pure | domain: code_entities | HIGH / vtable_algebra */
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
unsigned long long code_entities_vfunc_0C(short *arg0, int arg1) {
  int val;
  int val2;
  val = *(short *)(arg1 + 10);
  val2 = *(short *)(arg1 + 0xe);
  *arg0 = val + -7;
  arg0[1] = val2 + -9;
  arg0[2] = val + 7;
  arg0[3] = val2 + 5;
}

/* 0x080202C4 (4B) | code_entities_vfunc_3C (orig: func_080202C4) | origin: pure | domain: code_entities | HIGH / vtable_algebra */
void code_entities_vfunc_3C(void) {
}

/* 0x080202C8 (4B) | code_entities_vfunc_40 (orig: func_080202C8) | origin: pure | domain: code_entities | HIGH / vtable_algebra */
void code_entities_vfunc_40(void) {
}

/* 0x08020310 (148B) | code_entities_Ctor (orig: func_08020310) | origin: pure | domain: code_entities | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_entity_08020018_Ctor();
extern u32 code_entities_vfunc_88();
extern u32 code_entities_Sub_080211E4();
extern u32 code_entities_Sub_08021264();
extern u32 code_entities_Sub_08038374();
extern u32 Actor_Ctor_B114();
extern u32 func_080D3914();
u32 code_entities_Ctor(int arg0,int *arg1,int arg2,u32 arg3) {
  int val;
  u32 val2;
  u8 auStack_1c [8];
  Actor_Ctor_B114(auStack_1c,arg2);
  code_entity_08020018_Ctor(arg0,arg1,auStack_1c,0x340);
  *(u32 *)(arg0 + 0x14) = 0x080E64C8;
  *(int *)(arg0 + 0x34) = arg2;
  *(u32 *)(arg0 + 0x38) = arg3;
  *(u8 *)(arg0 + 0x40) = 0;
  if ((*(int *)(arg2 + 0x20) == 5) &&
     (val = func_080D3914(arg1,0x4b,*(u32 *)(*arg1 + 0x40)), val != 0)) {
    if (*(short *)(val + 4) == *(short *)(arg0 + 4)) {
      code_entities_Sub_08038374(val,*(u32 *)(arg0 + 8),*(u32 *)(arg0 + 0xc),
                    *(u16 *)(arg0 + 0x22),*(u8 *)(arg0 + 0x20));
    }
    else {
      code_entities_vfunc_88(arg0,0);
    }
  }
  val2 = code_entities_Sub_08021264(arg0);
  code_entities_Sub_080211E4(arg0,val2,*(u8 *)(arg0 + 0x20));
  return arg0;
}

/* 0x08020410 (80B) | code_entities_vfunc_88 (orig: func_08020410) | origin: wip | domain: code_entities | HIGH / vtable_algebra */
void code_entities_vfunc_88(int self,u32 param_2) {
  u32 uStack_10;
  if (*(int *)(*(int *)(self + 0x34) + 0x20) == 5) {
    code_entities_Sub_080212C0(self);
  }
  uStack_10 = (uStack_10 & 0xFFFF0000 | param_2 & 0xffff) & 0xFF00FFFF;
  func_0809BB48(*(u32 *)(self + 0x34),&uStack_10);
  code_entities_Sub_080211E4(self,0,*(u8 *)(self + 0x20));
}

/* 0x08020460 (20B) | code_entities_Sub_08020460 (orig: func_08020460) | origin: pure | domain: code_entities | HIGH / stanhash_map_tu */
#define true 1
#define false 0
#define NULL ((void *)0)
u32 code_entities_Sub_08020460(int arg0) {
  return ((u32)(*(int *)(*(int *)(arg0 + 0x34) + 0x20) == 5));
}

/* 0x0802110C (36B) | code_entities_Wrap_GetGrowthStage (orig: func_0802110C) | origin: wip | domain: code_entities | MEDIUM / graph_algebra */
u32 code_entities_Wrap_GetGrowthStage(s16 param_1) {
  u8 val;
  val = Dog_GetGrowthStage(*(s8 *)(param_1 + 0x34));
  return val;
}

/* 0x08021130 (180B) | code_entities_Sub_08021130 (orig: func_08021130) | origin: wip | domain: code_entities | HIGH / stanhash_map_tu */
void * code_entities_Sub_08021130(int param_1,u32 param_2) {
  u32 uVar1;
  u32 uVar2;
  int iVar3;

  u32 uStack_18;
  u32 uStack_14;
  u32 uStack_10;
  u32 uStack_c;
  
  if (0xc < param_2) goto case_0802117C;
  switch(*(u32 *)(((const u32 *)0x08021144) + param_2 * 4) & 0xfffffffe) {
  case 0x8021148:
  case 0x802117c:
case_0802117C:
    uVar2 = 0;
    break;
  case 0x8021180:
    uVar2 = 0x8000;
    break;
  case 0x8021186:
    uVar2 = 0x10000;
    break;
  case 0x802118c:
    func_080D3914(&uStack_18,param_1,*(u32 *)(*(int *)(param_1 + 0x14) + 0xc));
    uStack_10 = uStack_18;
    uVar2 = uStack_10;
    uStack_c = uStack_14;
    uVar1 = uStack_c;
    iVar3 = 0x10;
    if (*(u8 *)(param_1 + 0x20) < 2) {
      uStack_c = (short)((u32)uStack_14 >> 0x10);
      uStack_10 = (short)((u32)uStack_18 >> 0x10);
      uStack_c = uStack_c;
      uStack_10 = uStack_10;
LAB_080211cc:
      iVar3 = ((int)(short)uStack_c - (int)(short)uStack_10) + 0x10;
    }
    else if (*(u8 *)(param_1 + 0x20) < 4) {
      uStack_c = (short)uStack_14;
      uStack_10 = (short)uStack_18;
      goto LAB_080211cc;
    }
    uStack_10 = uVar2;
    uStack_c = uVar1;
    uVar2 = func_080D0EC8(iVar3 << 0x10,0x1e);
  }
  return (void *)uVar2;
}

/* 0x080211E4 (128B) | code_entities_Sub_080211E4 (orig: func_080211E4) | origin: pure | domain: code_entities | HIGH / stanhash_map_tu */
extern u32 code_entities_Wrap_GetGrowthStage();
extern void AActorEntity_SetAnim();
extern void AActorEntity_SetAnimFacing();
extern u32 code_entities_Sub_08021130();
extern void code_entities_Sub_08020080();
extern void entity_actor_Sub_080323C8();
extern void entity_actor_Sub_08032384();
void code_entities_Sub_080211E4(int param_1, u32 param_2, u32 param_3) {
    u32 uVar1;
    u32 uVar2;
    int iVar3;
    if ((param_2 != 0xc) && (*(u8 *)(param_1 + 0x40) != 0)) {
        param_2 = 0xc;
    }
    uVar1 = code_entities_Wrap_GetGrowthStage(param_1, param_2);
    if (*(u16 *)(param_1 + 0x22) != uVar1) {
        AActorEntity_SetAnim(param_1, uVar1);
    }
    if (*(u8 *)(param_1 + 0x20) != param_3) {
        AActorEntity_SetAnimFacing(param_1, param_3);
    }
    uVar2 = code_entities_Sub_08021130(param_1, param_2);
    code_entities_Sub_08020080(param_1, uVar2);
    if (param_2 != *(u8 *)(param_1 + 0x41)) {
        iVar3 = -1;
        if (param_2 == 8) {
            iVar3 = 8;
        }
        if (iVar3 >= 0) {
            entity_actor_Sub_08032384(param_1, iVar3, 1);
        } else {
            entity_actor_Sub_080323C8(param_1);
        }
    }
    *(u8 *)(param_1 + 0x41) = (u8)param_2;
}

/* 0x08021264 (92B) | code_entities_Sub_08021264 (orig: func_08021264) | origin: wip | domain: code_entities | HIGH / stanhash_map_tu */
void * code_entities_Sub_08021264(int param_1) {
  u32 uVar1;

  uVar1 = *(u32 *)(*(int *)(param_1 + 0x34) + 0x20);
  if (6 < uVar1) goto case_0802129C;
  switch(*(u32 *)(((const u32 *)0x0802127c) + uVar1 * 4) & 0xfffffffe) {
  case 0x8021280:
  case 0x802129c:
case_0802129C:
    uVar1 = 3;
    break;
  case 0x80212a0:
    uVar1 = (u32)*(u8 *)(*(int *)(param_1 + 0x34) + 0x26);
    break;
  case 0x80212a8:
    uVar1 = 2;
    break;
  case 0x80212ac:
    uVar1 = 2;
    if (*(char *)(*(int *)(param_1 + 0x34) + 0x26) != '\0') {
      uVar1 = 0xb;
    }
  }
  return (void *)uVar1;
}

/* 0x080212C0 (228B) | code_entities_Sub_080212C0 (orig: func_080212C0) | origin: wip | domain: code_entities | HIGH / stanhash_map_tu */
void code_entities_Sub_080212C0(u32 *param_1) {
  char cVar2;
  u8 bVar1;
  int iVar3;
  int iVar4;
  u32 uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  u32 uVar9;
  int iVar10;
  u8 auStack_34 [12];
  u8 auStack_28 [8];
      u32 tmp_a2;
  iVar3 = func_080D3914((int *)*param_1,0x4b,*(u32 *)(*(int *)*param_1 + 0x40));
  if ((iVar3 != 0) && (*(char *)(iVar3 + 0x26) != '\0')) {
    iVar7 = param_1[3];
    iVar4 = param_1[2];
    iVar10 = 8;
    uVar9 = (u32)*(u16 *)(param_1 + 1);
    piVar8 = (int *)*param_1;
    uVar5 = func_080D3910(piVar8,*(u32 *)(*piVar8 + 0x14));
    if ((uVar9 != uVar5) && (uVar9 != 2)) {
      iVar10 = 0;
    }
    func_080D3918(auStack_34,piVar8,uVar9,*(char *)(*piVar8 + 0x34));
    do {
      iVar6 = iVar10 * 0x10000;
      bVar1 = *(u8 *)(param_1 + 8);
      if (bVar1 == 1) {
        *(int *)(iVar3 + 8) = iVar4;
        iVar6 = iVar7 + iVar10 * -0x10000;
LAB_08021380:
        *(int *)(iVar3 + 0xc) = iVar6;
      }
      else {
        if (1 < bVar1) {
          if (bVar1 == 2) {
            iVar6 = iVar10 * -0x10000;
          }
          else if (bVar1 != 3) goto LAB_08021382;
          *(int *)(iVar3 + 8) = iVar4 + iVar6;
          iVar6 = iVar7;
          goto LAB_08021380;
        }
        if (bVar1 == 0) {
          *(int *)(iVar3 + 8) = iVar4;
          iVar6 = iVar7 + iVar6;
          goto LAB_08021380;
        }
      }
LAB_08021382:
      iVar10 = iVar10 + -1;
      if (iVar10 < 0) break;
      tmp_a2 = *(u32 *)(*(int *)(iVar3 + 0x14) + 0xc);
      func_080D3914(auStack_28, iVar3, tmp_a2);
      cVar2 = code_entities_Sub_080AC070(auStack_34,auStack_28);
    } while (cVar2 != '\0');
    code_entities_Sub_080384FC(iVar3);
  }
}

/* 0x08021444 (216B) | code_entities_Sub_08021444 (orig: func_08021444) | origin: wip | domain: code_entities | HIGH / stanhash_map_tu */
void code_entities_Sub_08021444(int param_1,u16 *param_2) {
  int iVar1;
  int iVar2;
  u32 uVar3;
  int iVar4;
  int iVar5;
  u32 auStack_20 [2];
  if (((*param_2 & 0x3ff) == *(u16 *)(param_1 + 4)) &&
     (*(int *)(*(int *)(param_1 + 0x34) + 0x20) != 5)) {
    iVar1 = func_0809B228(*(int *)(param_1 + 0x34));
    iVar2 = code_entity_08020018_Sub_08020018();
    iVar5 = (int)(short)((u16)((param_2[1] & 0x000003FF) << 6) |
                        (u16)(*(u8 *)((int)param_2 + 1) >> 2)) - (int)*(short *)(param_1 + 10);
    iVar4 = (int)(short)((u16)((param_2[2] & 0x000003FF) << 6) |
                        (u16)(*(u8 *)((int)param_2 + 3) >> 2)) - (int)*(short *)(param_1 + 0xe)
    ;
    if (iVar5 * iVar5 + iVar4 * iVar4 <= iVar2 * iVar2) {
      if (*(int *)(*(int *)(param_1 + 0x34) + 0x20) == 5) {
        code_entities_Sub_080212C0(param_1);
      }
      iVar1 = LibGcc_udivsi3(iVar1 * 0x3c0,0xfb);
      auStack_20[0] = iVar1 + 0x1e0U & 0xffff;
      func_0809BB54(*(u32 *)(param_1 + 0x34),auStack_20);
      if (*(char *)(param_1 + 0x40) == '\0') {
        uVar3 = code_entities_Sub_08021264(param_1);
        code_entities_Sub_080211E4(param_1,uVar3,*(u8 *)(param_1 + 0x20));
      }
      func_0809B3BC(*(u32 *)(param_1 + 0x34));
    }
  }
}

/* 0x0802151C (224B) | code_entities_Sub_0802151C (orig: func_0802151C) | origin: wip | domain: code_entities | HIGH / stanhash_map_tu */
void code_entities_Sub_0802151C(int param_1,u16 *param_2) {
  int iVar1;
  int iVar2;
  u32 uVar3;
  int iVar4;
  int iVar5;
  u32 auStack_20 [2];
  iVar1 = Dog_GetGrowthStage(*(u32 *)(param_1 + 0x34));
  if ((iVar1 == 1) && ((*param_2 & 0x3ff) == *(u16 *)(param_1 + 4))) {
    iVar1 = func_0809B374(*(u32 *)(param_1 + 0x34));
    iVar2 = code_entity_08020018_Sub_08020018();
    iVar5 = (int)(short)((u16)((param_2[1] & 0x000003FF) << 6) |
                        (u16)(*(u8 *)((int)1 + param_2) >> 2)) - (int)*(short *)(param_1 + 10);
    iVar4 = (int)(short)((u16)((param_2[2] & 0x000003FF) << 6) |
                        (u16)(*(u8 *)((int)param_2 + 3) >> 2)) - (int)*(short *)(param_1 + 0xe)
    ;
    if (iVar5 * iVar5 + iVar4 * iVar4 <= iVar2 * iVar2) {
      code_entities_Sub_080200C4(param_1,0xa9);
      if (*(int *)(*(int *)(param_1 + 0x34) + 0x20) == 5) {
        code_entities_Sub_080212C0(param_1);
      }
      iVar1 = LibGcc_udivsi3(iVar1 * 0x3c0,0xfb);
      auStack_20[0] = iVar1 + 0x1e0U & 0xffff;
      func_0809BB70(*(u32 *)(param_1 + 0x34),auStack_20);
      if (*(char *)(param_1 + 0x40) == '\0') {
        uVar3 = code_entities_Sub_08021264(param_1);
        code_entities_Sub_080211E4(param_1,uVar3,*(u8 *)(param_1 + 0x20));
      }
      func_0809B3B0(*(u32 *)(param_1 + 0x34));
    }
  }
}

/* 0x0802161C (4B) | code_entities_Return_0 (orig: func_0802161C) | origin: pure | domain: code_entities | HIGH / stanhash_map_tu */
u32 code_entities_Return_0(void) {
    return 0;
}

/* 0x08021620 (20B) | code_entities_Sub_08021620 (orig: func_08021620) | origin: pure | domain: code_entities | HIGH / stanhash_map_tu */
int code_entities_Sub_08021620(int arg0) {
    switch (arg0) {
    case 0: return 6;
    case 1: return 8;
    default: return 6;
    }
}

/* 0x080216BC (128B) | code_entities_Ctor_16BC (orig: func_080216BC) | origin: pure | domain: code_entities | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_entity_08020018_Ctor();
extern u32 code_entities_Sub_08022048();
extern u32 code_entities_Sub_080220D4();
extern u32 Actor_Ctor_B114();
extern u32 func_080D3910();
extern u32 func_080D3914();
/* paridad 96.6% preset agbcc_O1 */
u32 code_entities_Ctor_16BC(int arg0,int *arg1,u32 arg2) {
  u8 val;
  int val2;
  u32 val3;
  u32 val4;
  u8 auStack_18 [8];
  Actor_Ctor_B114(auStack_18,arg2);
  code_entity_08020018_Ctor(arg0,arg1,auStack_18,0x00000782);
  *(u32 *)(arg0 + 0x14) = 0x080E6428;
  *(u32 *)(arg0 + 0x34) = arg2;
  *(u8 *)(arg0 + 0x3d) = 0;
  val2 = func_080D3914(arg1,0,*(u32 *)(*arg1 + 0x40));
  val = 0;
  if (val2 != 0) {
    val3 = (u8)func_080D3910(val2,*(u32 *)(*(int *)(val2 + 0x14) + 0x40));
    val = (u8)(-(val3 & 0xff) >> 0x1f);
  }
  *(u8 *)(arg0 + 0x3e) = val;
  val4 = code_entities_Sub_080220D4(arg0);
  code_entities_Sub_08022048(arg0,val4,*(u8 *)(arg0 + 0x20));
  return arg0;
}

/* 0x08021EE0 (92B) | code_entities_Sub_08021EE0 (orig: func_08021EE0) | origin: pure | domain: code_entities | HIGH / stanhash_map_tu */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_entities_Sub_08022048();
extern u32 code_entities_Sub_080220D4();
extern u32 func_0809B3B0();
extern u32 Horse_GetGrowthStage();
extern u32 func_0809BC24();
void code_entities_Sub_08021EE0(int arg0) {
  int val;
  u32 val2;
  u32 local_buf;
  val = Horse_GetGrowthStage(*(u32 *)(arg0 + 0x34));
  if (val == 1) {
    local_buf = (local_buf & 0xFFFF0000 | 0x78) & 0xFF00FFFF;
    func_0809BC24(*(u32 *)(arg0 + 0x34),&local_buf);
    val2 = code_entities_Sub_080220D4(arg0);
    code_entities_Sub_08022048(arg0,val2,*(u8 *)(arg0 + 0x20));
    *(u8 *)(arg0 + 0x3e) = 1;
    func_0809B3B0(*(u32 *)(arg0 + 0x34));
  }
}

/* 0x08021F3C (76B) | code_entities_Sub_08021F3C (orig: func_08021F3C) | origin: pure | domain: code_entities | HIGH / stanhash_map_tu */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_entities_Sub_08022048();
extern u32 code_entities_Sub_080220D4();
extern u32 func_0809BC24();
void code_entities_Sub_08021F3C(int arg0) {
  u32 val;
  u32 local_buf;
  *(u8 *)(arg0 + 0x3e) = 0;
  local_buf = (local_buf & 0xFFFF0000 | 0x78) & 0xFF00FFFF;
  func_0809BC24(*(u32 *)(arg0 + 0x34),&local_buf);
  val = code_entities_Sub_080220D4(arg0);
  code_entities_Sub_08022048(arg0,val,*(u8 *)(arg0 + 0x20));
}

/* 0x08021F88 (36B) | code_entities_Wrap_GetGrowthStage_1F88 (orig: func_08021F88) | origin: pure | domain: code_entities | MEDIUM / graph_algebra */
extern u16 g_080F09AC[][7]; int Horse_GetGrowthStage(u32); u16 code_entities_Wrap_GetGrowthStage_1F88(u32 *a, int b) { return g_080F09AC[Horse_GetGrowthStage(a[13])][b]; }

/* 0x08021FAC (156B) | code_entities_Sub_08021FAC (orig: func_08021FAC) | origin: wip | domain: code_entities | HIGH / stanhash_map_tu */
void * code_entities_Sub_08021FAC(int param_1,u32 param_2) {
  u32 uVar1;
  u32 uVar2;
  int iVar3;

  u32 uStack_18;
  u32 uStack_14;
  u32 uStack_10;
  u32 uStack_c;
  
  if (6 < param_2) goto case_08021FE0;
  switch(*(u32 *)(((const u32 *)0x08021fc0) + param_2 * 4) & 0xfffffffe) {
  case 0x8021fc4:
  case 0x8021fe0:
case_08021FE0:
    uVar2 = 0;
    break;
  case 0x8021fe4:
    uVar2 = 0x8000;
    break;
  case 0x8021fea:
    uVar2 = 0x10000;
    break;
  case 0x8021ff0:
    func_080D3914(&uStack_18,param_1,*(u32 *)(*(int *)(param_1 + 0x14) + 0xc));
    uStack_10 = uStack_18;
    uVar2 = uStack_10;
    uStack_c = uStack_14;
    uVar1 = uStack_c;
    iVar3 = 0x10;
    if (*(u8 *)(param_1 + 0x20) < 2) {
      uStack_c = (short)((u32)uStack_14 >> 0x10);
      uStack_10 = (short)((u32)uStack_18 >> 0x10);
      uStack_c = uStack_c;
      uStack_10 = uStack_10;
LAB_08022030:
      iVar3 = ((int)(short)uStack_c - (int)(short)uStack_10) + 0x10;
    }
    else if (*(u8 *)(param_1 + 0x20) < 4) {
      uStack_c = (short)uStack_14;
      uStack_10 = (short)uStack_18;
      goto LAB_08022030;
    }
    uStack_10 = uVar2;
    uStack_c = uVar1;
    uVar2 = func_080D0EC8(iVar3 << 0x10,0xc);
  }
  return (void *)uVar2;
}

/* 0x08022048 (140B) | code_entities_Sub_08022048 (orig: func_08022048) | origin: pure | domain: code_entities | HIGH / stanhash_map_tu */
extern u32 code_entities_Wrap_GetGrowthStage_1F88();
extern void AActorEntity_SetAnim();
extern void AActorEntity_SetAnimFacing();
extern u32 code_entities_Sub_08021FAC();
extern void code_entities_Sub_08020080();
extern void entity_actor_Sub_08032384();
extern void entity_actor_Sub_080323C8();
void code_entities_Sub_08022048(int param_1, u32 param_2, u32 param_3) {
    u32 uVar1;
    u32 uVar2;
    int iVar3;
    if ((param_2 != 6) && (*(u8 *)(param_1 + 0x3d) != 0)) {
        param_2 = 6;
    }
    uVar1 = code_entities_Wrap_GetGrowthStage_1F88(param_1, param_2);
    if (*(u16 *)(param_1 + 0x22) != uVar1) {
        AActorEntity_SetAnim(param_1, uVar1);
    }
    if (*(u8 *)(param_1 + 0x20) != param_3) {
        AActorEntity_SetAnimFacing(param_1, param_3);
    }
    uVar2 = code_entities_Sub_08021FAC(param_1, param_2);
    code_entities_Sub_08020080(param_1, uVar2);
    if ((param_2 != *(u8 *)(param_1 + 0x3c)) && (*(u8 *)(param_1 + 0x3e) == 0)) {
        iVar3 = -1;
        if (param_2 == 4) {
            iVar3 = 8;
        }
        if (iVar3 >= 0) {
            entity_actor_Sub_08032384(param_1, iVar3, 1);
        } else {
            entity_actor_Sub_080323C8(param_1);
        }
    }
    *(u8 *)(param_1 + 0x3c) = (u8)param_2;
}

/* 0x080220D4 (44B) | code_entities_Sub_080220D4 (orig: func_080220D4) | origin: pure | domain: code_entities | HIGH / stanhash_map_tu */
int code_entities_Sub_080220D4(u8 **a) { u8 *p = a[13]; switch (*(int *)(p + 0x20)) { default: return 0; case 0: return p[0x26]; case 1: return 2; case 2: return 1; } }

/* 0x080221F0 (184B) | code_entities_Sub_080221F0 (orig: func_080221F0) | origin: wip | domain: code_entities | HIGH / stanhash_map_tu */
void code_entities_Sub_080221F0(int param_1,u16 *param_2) {
  int iVar1;
  u32 uVar2;
  int iVar3;
  int iVar4;
  u32 auStack_1c [2];
  if ((*param_2 & 0x3ff) == *(u16 *)(param_1 + 4)) {
    func_0809B228(*(u32 *)(param_1 + 0x34));
    iVar1 = code_entity_08020018_Sub_08020018();
    iVar4 = (int)(short)((u16)((param_2[1] & 0x000003FF) << 6) |
                        (u16)(*(u8 *)((int)param_2 + 1) >> 2)) - (int)*(short *)(param_1 + 10);
    iVar3 = (int)(short)((u16)((param_2[2] & 0x000003FF) << 6) |
                        (u16)(*(u8 *)((int)param_2 + 3) >> 2)) - (int)*(short *)(param_1 + 0xe)
    ;
    if (iVar4 * iVar4 + iVar3 * iVar3 <= iVar1 * iVar1) {
      iVar1 = func_0809B228(*(u32 *)(param_1 + 0x34));
      auStack_1c[0] = ((u32)(iVar1 * 0x3c0) >> 8) + 0x1e0 & 0xffff;
      func_0809BC30(*(u32 *)(param_1 + 0x34),auStack_1c);
      if (*(char *)(param_1 + 0x3d) == '\0') {
        uVar2 = code_entities_Sub_080220D4(param_1);
        code_entities_Sub_08022048(param_1,uVar2,*(u8 *)(param_1 + 0x20));
      }
      func_0809B3BC(*(u32 *)(param_1 + 0x34));
    }
  }
}

/* 0x080222A8 (76B) | code_entities_Ctor_22A8 (orig: func_080222A8) | origin: pure | domain: code_entities | HIGH / vtable_algebra */
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
extern u32 code_entities_Sub_08022320();
extern u32 code_entities_Sub_08022334();
struct __attribute__((packed)) _s1 { u8 a; };
u32 code_entities_080320DC_68B4_Ctor(u32, u32, u32, u32, u32, u32, u32, struct _s1);
u32 code_entities_Ctor_22A8(int arg0,u32 arg1,u32 arg2) {
  u32 val;
  u32 val2;
  val = code_entities_Sub_08022320(arg2);
  val2 = code_entities_Sub_08022334(arg2);
  code_entities_080320DC_68B4_Ctor(arg0, arg1, 5, 0xd, val, val2, 0, (struct _s1){0});
  *(u32 *)(arg0 + 4) = 0x080E64B4;
  return arg0;
}

/* 0x08022320 (20B) | code_entities_Sub_08022320 (orig: func_08022320) | origin: pure | domain: code_entities | HIGH / stanhash_map_tu */
int code_entities_Sub_08022320(int arg0) {
    switch (arg0) {
    case 0: return 1;
    case 1: return 2;
    default: return 1;
    }
}

/* 0x08022334 (20B) | code_entities_Sub_08022334 (orig: func_08022334) | origin: pure | domain: code_entities | HIGH / stanhash_map_tu */
int code_entities_Sub_08022334(int arg0) {
    switch (arg0) {
    case 0: return 14;
    case 1: return 15;
    default: return 14;
    }
}

/* 0x080223A8 (72B) | code_entities_Ctor_23A8 (orig: func_080223A8) | origin: pure | domain: code_entities | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_entity_08020018_Ctor();
extern u32 code_entities_Sub_080228B4();
extern u32 code_entities_Sub_08022950();
extern u32 Actor_Ctor_B114();
u32 code_entities_Ctor_23A8(int arg0,u32 arg1,u32 arg2) {
  u32 val;
  u8 auStack_18 [8];
  Actor_Ctor_B114(auStack_18,arg2);
  code_entity_08020018_Ctor(arg0,arg1,auStack_18,0x720);
  *(u32 *)(arg0 + 0x14) = 0x080E639C;
  *(u32 *)(arg0 + 0x34) = arg2;
  val = code_entities_Sub_08022950(arg0);
  code_entities_Sub_080228B4(arg0,val,*(u8 *)(arg0 + 0x20));
  return arg0;
}

/* 0x080228B4 (156B) | code_entities_Sub_080228B4 (orig: func_080228B4) | origin: wip | domain: code_entities | HIGH / stanhash_map_tu */
void code_entities_Sub_080228B4(u32 *param_1,u32 param_2,u32 param_3) {
  u32 uVar1;
  u32 uVar2;
  int iVar3;
  int iVar4;
  uVar1 = code_entities_Wrap_GetGrowthStage_2980();
  if (*(u16 *)((int)param_1 + 0x22) != uVar1) {
    AActorEntity_SetAnim(param_1);
  }
  if (*(u8 *)(param_1 + 8) != param_3) {
    AActorEntity_SetAnimFacing(param_1,param_3);
  }
  uVar2 = code_entities_Sub_080229A4(param_1,param_2);
  code_entities_Sub_08020080(param_1,uVar2);
  if (param_2 != *(u8 *)(param_1 + 0xe)) {
    iVar4 = -1;
    iVar3 = Chicken_GetGrowthStage(param_1[0xd]);
    uVar1 = 0;
    if (iVar3 != 0) {
      uVar1 = 3;
    }
    if ((param_2 == uVar1) &&
       (iVar3 = func_080D3910((int *)*param_1,*(u32 *)(*(int *)*param_1 + 0x144)),
       0xe < (((u32)(*(u8 *)(iVar3 + 10)) << 27) >> 27) - 6)) {
      iVar4 = 8;
    }
    if (iVar4 < 0) {
      entity_actor_Sub_080323C8(param_1);
    }
    else {
      entity_actor_Sub_08032384(param_1,iVar4,1);
    }
  }
  *(u8 *)(param_1 + 0xe) = (u8)param_2;
}

/* 0x08022950 (48B) | code_entities_Sub_08022950 (orig: func_08022950) | origin: pure | domain: code_entities | HIGH / stanhash_map_tu */
struct S { u8 pad[0x24]; int m; u8 pad2[2]; u8 b:7; }; int code_entities_Sub_08022950(struct S **a) { struct S *p = a[13]; switch (p->m) { case 0: return *(u8 *)((u8 *)p + 0x2a); case 1: return p->b != 0 ? 4 : 1; default: return 0; } }

/* 0x08022980 (36B) | code_entities_Wrap_GetGrowthStage_2980 (orig: func_08022980) | origin: pure | domain: code_entities | MEDIUM / graph_algebra */
extern u16 g_080F0A68[][5]; int Chicken_GetGrowthStage(u32); u16 code_entities_Wrap_GetGrowthStage_2980(u32 *a, int b) { return g_080F0A68[Chicken_GetGrowthStage(a[13])][b]; }

/* 0x080229A4 (20B) | code_entities_Sub_080229A4 (orig: func_080229A4) | origin: pure | domain: code_entities | HIGH / stanhash_map_tu */
int code_entities_Sub_080229A4(int arg0, int arg1) {
    switch (arg1) {
    case 1: return 32768;
    default: return 0;
    }
}

/* 0x08022B58 (4B) | code_entities_Return_0_2B58 (orig: func_08022B58) | origin: pure | domain: code_entities | HIGH / stanhash_map_tu */
u32 code_entities_Return_0_2B58(void) {
    return 0;
}

/* 0x08022B5C (20B) | code_entities_Sub_08022B5C (orig: func_08022B5C) | origin: pure | domain: code_entities | HIGH / stanhash_map_tu */
int code_entities_Sub_08022B5C(int arg0) {
    switch (arg0) {
    case 0: return 6;
    case 1: return 7;
    default: return 6;
    }
}

/* 0x08022C18 (72B) | code_entities_Ctor_2C18 (orig: func_08022C18) | origin: pure | domain: code_entities | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_entity_08020018_Ctor();
extern u32 code_entities_Sub_08023308();
extern u32 code_entities_Sub_08023378();
extern u32 Actor_Ctor_B114();
u32 code_entities_Ctor_2C18(int arg0,u32 arg1,u32 arg2) {
  u32 val;
  u8 auStack_18 [8];
  Actor_Ctor_B114(auStack_18,arg2);
  code_entity_08020018_Ctor(arg0,arg1,auStack_18,0x2b0);
  *(u32 *)(arg0 + 0x14) = 0x080E6310;
  *(u32 *)(arg0 + 0x34) = arg2;
  val = code_entities_Sub_08023378(arg0);
  code_entities_Sub_08023308(arg0,val,*(u8 *)(arg0 + 0x20));
  return arg0;
}

/* 0x08023308 (112B) | code_entities_Sub_08023308 (orig: func_08023308) | origin: pure | domain: code_entities | HIGH / stanhash_map_tu */
extern u32 code_entities_Sub_080233B4();
extern void AActorEntity_SetAnim();
extern void AActorEntity_SetAnimFacing();
extern u32 code_entities_Sub_08023400();
extern void code_entities_Sub_08020080();
extern void entity_actor_Sub_08032384();
extern void entity_actor_Sub_080323C8();
void code_entities_Sub_08023308(int param_1, u32 param_2, u32 param_3) {
    u32 uVar1 = code_entities_Sub_080233B4(param_1, param_2);
    u32 uVar2;
    if (*(u16 *)(param_1 + 0x22) != uVar1) {
        AActorEntity_SetAnim(param_1, uVar1);
    }
    if (*(u8 *)(param_1 + 0x20) != param_3) {
        AActorEntity_SetAnimFacing(param_1, param_3);
    }
    uVar2 = code_entities_Sub_08023400(param_1, param_2);
    code_entities_Sub_08020080(param_1, uVar2);
    if (param_2 != *(u8 *)(param_1 + 0x38)) {
        int iVar3 = -1;
        if (param_2 == 4) {
            iVar3 = 8;
        }
        if (iVar3 >= 0) {
            entity_actor_Sub_08032384(param_1, iVar3, 1);
        } else {
            entity_actor_Sub_080323C8(param_1);
        }
    }
    *(u8 *)(param_1 + 0x38) = (u8)param_2;
}

/* 0x08023378 (60B) | code_entities_Sub_08023378 (orig: func_08023378) | origin: wip | domain: code_entities | HIGH / stanhash_map_tu */
u32 code_entities_Sub_08023378(int param_1) {
  int iVar1;
  u32 uVar2;
  int iVar3;
  iVar1 = *(int *)(param_1 + 0x34);
  iVar3 = *(int *)(iVar1 + 0x28);
  if (iVar3 == 1) {
    uVar2 = 1;
    if ((*(u8 *)(iVar1 + 0x2e) & 0x7f) != 0) {
      uVar2 = 6;
    }
  }
  else {
    if (iVar3 < 2) {
      if (iVar3 == 0) {
        uVar2 = (u32)*(u8 *)(iVar1 + 0x2e);
        goto LAB_080233b0;
      }
    }
    else if (iVar3 < 4) {
      uVar2 = 1;
      goto LAB_080233b0;
    }
    uVar2 = 0;
  }
LAB_080233b0:
  return uVar2;
}

/* 0x080233B4 (76B) | code_entities_Sub_080233B4 (orig: func_080233B4) | origin: wip | domain: code_entities | HIGH / stanhash_map_tu */
u32 code_entities_Sub_080233B4(int param_1,int param_2) {
  int iVar1;
  char cVar2;
  int iVar3;
  u32 uVar4;
  uVar4 = 0;
  cVar2 = func_0809B8B0(*(u32 *)(param_1 + 0x34));
  if (cVar2 != '\0') {
    uVar4 = BarnAnimal_GetDaysPregnant(*(u32 *)(param_1 + 0x34));
    uVar4 = (-uVar4 | uVar4) >> 0x1f;
  }
  iVar1 = 0x080F0C3C;
  if (uVar4 == 0) {
    iVar3 = Cow_GetGrowthStage(*(u32 *)(param_1 + 0x34));
    iVar3 = param_2 * 2 + iVar3 * 0xe;
  }
  else {
    iVar3 = param_2 * 2 + 0x2a;
  }
  return ((u32)*(u16 *)(iVar1 + iVar3));
}

/* 0x08023400 (20B) | code_entities_Sub_08023400 (orig: func_08023400) | origin: pure | domain: code_entities | HIGH / stanhash_map_tu */
int code_entities_Sub_08023400(int arg0, int arg1) {
    switch (arg1) {
    case 1: return 32768;
    default: return 0;
    }
}

/* 0x080237F0 (20B) | code_entities_Sub_080237F0 (orig: func_080237F0) | origin: pure | domain: code_entities | HIGH / stanhash_map_tu */
int code_entities_Sub_080237F0(u32 arg0) {
    switch (arg0) {
    case 0:
    case 1: return 1;
    case 2: return 2;
    default: return 1;
    }
}

/* 0x08023804 (28B) | code_entities_Sub_08023804 (orig: func_08023804) | origin: pure | domain: code_entities | HIGH / stanhash_map_tu */
int code_entities_Sub_08023804(u32 a) { switch (a) { case 0: return 9; case 1: return 11; case 2: return 12; default: return 9; } }

/* 0x080238A8 (76B) | code_entities_Ctor_38A8 (orig: func_080238A8) | origin: pure | domain: code_entities | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_entity_08020018_Ctor();
extern u32 code_entities_Sub_08023FB0();
extern u32 code_entities_Sub_08024020();
extern u32 Actor_Ctor_B114();
u32 code_entities_Ctor_38A8(int arg0,u32 arg1,u32 arg2) {
  u32 val;
  u8 auStack_18 [8];
  Actor_Ctor_B114(auStack_18,arg2);
  code_entity_08020018_Ctor(arg0,arg1,auStack_18,0x00000921);
  *(u32 *)(arg0 + 0x14) = 0x080E6284;
  *(u32 *)(arg0 + 0x34) = arg2;
  val = code_entities_Sub_08024020(arg0);
  code_entities_Sub_08023FB0(arg0,val,*(u8 *)(arg0 + 0x20));
  return arg0;
}

/* 0x08023FB0 (112B) | code_entities_Sub_08023FB0 (orig: func_08023FB0) | origin: pure | domain: code_entities | HIGH / stanhash_map_tu */
extern u32 code_entities_Sub_0802405C();
extern void AActorEntity_SetAnim();
extern void AActorEntity_SetAnimFacing();
extern u32 code_entities_Sub_080240BC();
extern void code_entities_Sub_08020080();
extern void entity_actor_Sub_08032384();
extern void entity_actor_Sub_080323C8();
void code_entities_Sub_08023FB0(int param_1, u32 param_2, u32 param_3) {
    u32 uVar1 = code_entities_Sub_0802405C(param_1, param_2);
    u32 uVar2;
    if (*(u16 *)(param_1 + 0x22) != uVar1) {
        AActorEntity_SetAnim(param_1, uVar1);
    }
    if (*(u8 *)(param_1 + 0x20) != param_3) {
        AActorEntity_SetAnimFacing(param_1, param_3);
    }
    uVar2 = code_entities_Sub_080240BC(param_1, param_2);
    code_entities_Sub_08020080(param_1, uVar2);
    if (param_2 != *(u8 *)(param_1 + 0x38)) {
        int iVar3 = -1;
        if (param_2 == 4) {
            iVar3 = 8;
        }
        if (iVar3 >= 0) {
            entity_actor_Sub_08032384(param_1, iVar3, 1);
        } else {
            entity_actor_Sub_080323C8(param_1);
        }
    }
    *(u8 *)(param_1 + 0x38) = (u8)param_2;
}

/* 0x08024020 (60B) | code_entities_Sub_08024020 (orig: func_08024020) | origin: wip | domain: code_entities | HIGH / stanhash_map_tu */
u32 code_entities_Sub_08024020(int param_1) {
  int iVar1;
  u32 uVar2;
  int iVar3;
  iVar1 = *(int *)(param_1 + 0x34);
  iVar3 = *(int *)(iVar1 + 0x28);
  if (iVar3 == 1) {
    uVar2 = 1;
    if ((*(u8 *)(iVar1 + 0x2e) & 0x7f) != 0) {
      uVar2 = 6;
    }
  }
  else {
    if (iVar3 < 2) {
      if (iVar3 == 0) {
        uVar2 = (u32)*(u8 *)(iVar1 + 0x2e);
        goto LAB_08024058;
      }
    }
    else if (iVar3 < 4) {
      uVar2 = 1;
      goto LAB_08024058;
    }
    uVar2 = 0;
  }
LAB_08024058:
  return uVar2;
}

/* 0x0802405C (96B) | code_entities_Sub_0802405C (orig: func_0802405C) | origin: wip | domain: code_entities | HIGH / stanhash_map_tu */
u32 code_entities_Sub_0802405C(int param_1,int param_2) {
  int iVar1;
  char cVar2;
  int iVar3;
  u32 uVar4;
  uVar4 = 0;
  cVar2 = func_0809B8B0(*(u32 *)(param_1 + 0x34));
  if (cVar2 != '\0') {
    uVar4 = BarnAnimal_GetDaysPregnant(*(u32 *)(param_1 + 0x34));
    uVar4 = (-uVar4 | uVar4) >> 0x1f;
  }
  iVar1 = 0x080F0E34;
  param_2 = param_2 * 2;
  if (uVar4 == 0) {
    cVar2 = Sheep_IsSheared(*(u32 *)(param_1 + 0x34));
    if (cVar2 == '\0') {
      iVar3 = Sheep_GetGrowthStage(*(u32 *)(param_1 + 0x34));
      param_2 = param_2 + iVar3 * 0xe;
    }
    else {
      param_2 = param_2 + 0x1c;
    }
  }
  else {
    param_2 = param_2 + 0x2a;
  }
  return ((u32)*(u16 *)(iVar1 + param_2));
}

/* 0x080240BC (20B) | code_entities_Sub_080240BC (orig: func_080240BC) | origin: pure | domain: code_entities | HIGH / stanhash_map_tu */
int code_entities_Sub_080240BC(int arg0, int arg1) {
    switch (arg1) {
    case 1: return 32768;
    default: return 0;
    }
}

/* 0x080244C4 (20B) | code_entities_Sub_080244C4 (orig: func_080244C4) | origin: pure | domain: code_entities | HIGH / stanhash_map_tu */
int code_entities_Sub_080244C4(int arg0) {
    switch (arg0) {
    case 0: return 1;
    case 1: return 2;
    default: return 1;
    }
}

/* 0x080244D8 (20B) | code_entities_Sub_080244D8 (orig: func_080244D8) | origin: pure | domain: code_entities | HIGH / stanhash_map_tu */
int code_entities_Sub_080244D8(int arg0) {
    switch (arg0) {
    case 0: return 10;
    case 1: return 13;
    default: return 10;
    }
}

/* 0x080245E0 (220B) | code_entities_Sub_080245E0 (orig: func_080245E0) | origin: wip | domain: code_entities | HIGH / stanhash_map_tu */
void * code_entities_Sub_080245E0(int param_1) {
  u8 bVar1;
  u32 uVar2;

  if (param_1 - 0x32U < 0x14) {
    switch(*(u32 *)(((const u32 *)0x080245f4) + (param_1 - 0x32U) * 4) & 0xfffffffe) {
    case 0x80245f8:
    case 0x8024648:
      uVar2 = 0;
      break;
    case 0x802464c:
      uVar2 = 1;
      break;
    case 0x8024650:
      uVar2 = 2;
      break;
    case 0x8024654:
      uVar2 = 3;
      break;
    case 0x8024658:
      uVar2 = 4;
      break;
    case 0x802465c:
      uVar2 = 5;
      break;
    case 0x8024660:
      uVar2 = 6;
      break;
    case 0x8024664:
      uVar2 = 7;
      break;
    case 0x8024668:
      uVar2 = 8;
      break;
    case 0x802466c:
      uVar2 = 9;
      break;
    case 0x8024670:
      uVar2 = 10;
      break;
    case 0x8024674:
      uVar2 = 0xb;
      break;
    case 0x8024678:
      uVar2 = 0xc;
      break;
    case 0x802467c:
      uVar2 = 0xd;
      break;
    case 0x8024680:
      uVar2 = 0xe;
      break;
    case 0x8024684:
      uVar2 = 0x14;
      break;
    case 0x8024688:
      uVar2 = 0xf;
      break;
    case 0x802468c:
      uVar2 = 0x10;
      break;
    case 0x8024690:
      uVar2 = LibC_rand();
      uVar2 = func_080D0ED0(uVar2,1000);
      bVar1 = func_080D0EC8(uVar2,10);
      if (bVar1 < 5) {
        uVar2 = 0x12;
      }
      else {
        uVar2 = 0x11;
      }
      break;
    case 0x80246b2:
      uVar2 = 0x13;
    }
  }
  else {
    uVar2 = 0x15;
  }
  return (void *)uVar2;
}

/* 0x08024974 (268B) | code_entities_Ctor_4974 (orig: func_08024974) | origin: wip | domain: code_entities | HIGH / vtable_algebra */
u32 code_entities_Ctor_4974(int self,u32 param_2,int param_3) {
  short sVar1;
  code_entities_Ctor_B908();
  *(u32 *)(self + 0x14) = 0x080E6658;
  *(int *)(self + 0x34) = param_3;
  *(int *)(self + 0x38) = param_3 + 0x00001BD8;
  *(u8 *)(self + 0x3c) = 0;
  *(u8 *)(self + 0x3d) = 0;
  *(u8 *)(self + 0x3e) = 0;
  *(u8 *)(self + 0x3f) = 0xf;
  *(u8 *)(self + 0x40) = 0;
  *(u8 *)(self + 0x41) = 0;
  *(u8 *)(self + 0x42) = 0;
  *(u16 *)(self + 0x44) = 0;
  *(u32 *)(self + 0x60) = 0x080F0E80;
  *(u16 *)(self + 100) = 0;
  func_0800EFEC(self + 0x68);
  *(u8 *)(self + 0x6c) = 0;
  *(u8 *)(self + 0x6d) = 0;
  *(u32 *)(self + 0x70) = 0x3b;
  *(u8 *)(self + 0x74) = 0;
  *(u8 *)(self + 0x78) = 0;
  *(u8 *)(self + 0x79) = 0;
  *(u8 *)(self + 0x7a) = 0;
  *(short *)(self + 0x7c) = (short)0x0000FFFF;
  *(u32 *)(self + 0x80) = 0;
  *(u8 *)(self + 0x88) = 0;
  *(u8 *)(self + 0x89) = 0;
  *(u32 *)(self + 0x8c) = 0;
  *(u32 *)(self + 0x90) = 0;
  *(u32 *)(self + 0x94) = 0;
  *(u32 *)(self + 0x98) = 0;
  *(u32 *)(self + 0x9c) = 0;
  *(u32 *)(self + 0xa0) = 0;
  *(u8 *)(self + 0xa4) = 1;
  *(u16 *)(self + 0xa6) = 0;
  *(u32 *)(self + 0xa8) = 0xffffffff;
  *(u32 *)(self + 0xac) = 0xffffffff;
  *(u8 *)(self + 0xb0) = 0;
  *(u8 *)(self + 0xb1) = 0;
  *(u8 *)(self + 0xb2) = 100;
  *(u8 *)(self + 0xb3) = 0;
  *(u8 *)(self + 0xb4) = 0;
  *(u8 *)(self + 0xc0) = 0;
  *(u8 *)(self + 0xc1) = 0;
  *(u8 *)(self + 0xc2) = 0;
  *(u8 *)(self + 0xc3) = 0;
  *(u8 *)(self + 0xc4) = 0;
  *(u8 *)(self + 0xc5) = 0;
  code_entities_NoOp(self);
  sVar1 = code_entities_Sub_0802D158(self);
  if (*(short *)(self + 0x22) != sVar1) {
    AActorEntity_SetAnim(self);
  }
  return (self);
}

/* 0x08024B9C (76B) | code_entities_vfunc_30 (orig: func_08024B9C) | origin: wip | domain: code_entities | HIGH / vtable_algebra */
u32 code_entities_vfunc_30(int self) {
  char cVar1;
  u32 uVar2;
  u8 uVar3;
  uVar3 = 2;
  if (*(short *)(self + 4) == 0x13) {
    if (((*(u8 *)(*(int *)(self + 0x34) + 0x00002171) & 0x1f) >> 3 == 1) ||
       (cVar1 = game_state_Sub_0809C694(*(u16 *)(self + 0x34) + 0x00002171 + -0x25,0x4a), cVar1 != '\0')
       ) {
      uVar3 = 1;
    }
  }
  *(u8 *)(self + 0x21) = uVar3;
  uVar2 = CppRuntime_builtin_new(0x284);
  return code_entities_Ctor_B260(uVar2,self);
}

/* 0x08024BE8 (20B) | code_entities_vfunc_10 (orig: func_08024BE8) | origin: pure | domain: code_entities | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 AEntity_vfunc_10();
extern u32 code_entities_Sub_0802A588();
void code_entities_vfunc_10(u32 arg0) {
  AEntity_vfunc_10();
  code_entities_Sub_0802A588(arg0);
}

/* 0x08024C54 (16B) | code_entities_vfunc_20 (orig: func_08024C54) | origin: pure | domain: code_entities | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 entity_actor_Sub_080323C8();
void code_entities_vfunc_20(int arg0) {
  *(u8 *)(arg0 + 6) = 1;
  entity_actor_Sub_080323C8();
}

/* 0x08024C64 (16B) | code_entities_vfunc_24 (orig: func_08024C64) | origin: pure | domain: code_entities | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 entity_actor_Sub_080323C8();
void code_entities_vfunc_24(int arg0) {
  *(u8 *)(arg0 + 6) = 0;
  entity_actor_Sub_080323C8();
}

/* 0x08024C74 (20B) | code_entities_vfunc_A4 (orig: func_08024C74) | origin: pure | domain: code_entities | HIGH / vtable_algebra */
struct Sub { u8 a; u8 pad; u8 b; u8 pad2[0x67]; u16 c; };
struct S { u8 pad[0x3c]; Sub sub; };
extern "C" void code_entities_vfunc_A4(S *s) {
    s->sub.a = 0;
    s->sub.b = 0;
    s->sub.c = 0;
}

/* 0x08024C88 (16B) | code_entities_vfunc_A8 (orig: func_08024C88) | origin: pure | domain: code_entities | HIGH / vtable_algebra */
void code_entities_vfunc_A8(u8 *a) { a[0x3c] = 8; a[0x3d] = 0xff; }

/* 0x08024C98 (8B) | code_entities_vfunc_AC (orig: func_08024C98) | origin: pure | domain: code_entities | HIGH / vtable_algebra */
void code_entities_vfunc_AC(u8 *arg0) {
    *(u8 *)(arg0 + 60) = 0;
}

/* 0x08024CA0 (48B) | code_entities_vfunc_98 (orig: func_08024CA0) | origin: wip | domain: code_entities | HIGH / vtable_algebra */
u32 code_entities_vfunc_98(int self) {
  u32 val;
  val = func_080D3910();
  return (val << 0x18);
}

/* 0x08025018 (80B) | code_entities_vfunc_2C (orig: func_08025018) | origin: pure | domain: code_entities | HIGH / vtable_algebra */
extern void code_entities_Sub_0802F0EC();
extern u16 code_entities_Sub_0802D158();
extern void AActorEntity_SetAnim();
extern void code_entities_08034CEC_7018_vfunc_2C();
void code_entities_vfunc_2C(int self, u32 param_2) {
    u16 sVar1;
    *(u8 *)(self + 0xc1) = 0;
    if (*(u8 *)(self + 0xc2) == 0) {
        if (*(u8 *)(self + 0xc0) != 0) {
            code_entities_Sub_0802F0EC(self, 0, 0);
            sVar1 = code_entities_Sub_0802D158(self);
            if (*(u16 *)(self + 0x22) != sVar1) {
                AActorEntity_SetAnim(self, sVar1);
            }
        }
        code_entities_08034CEC_7018_vfunc_2C(self, param_2);
    }
}

/* 0x08025294 (216B) | code_entities_Sub_08025294 (orig: func_08025294) | origin: wip | domain: code_entities | HIGH / stanhash_map_tu */
u32 code_entities_Sub_08025294(u32 param_1,u32 param_2,int param_3,short *param_4) {
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  char cVar5;
  short sVar6;
  u32 uVar7;
  short *psVar8;
  short asStack_24 [4];
  short asStack_1c [4];
  sVar1 = param_4[2];
  sVar2 = *param_4;
  sVar3 = param_4[3];
  sVar4 = param_4[1];
  if ((int)(0x10fU - (int)sVar1 & sVar2 + 0xFFFFFC3F & 0xafU - (int)sVar3 & sVar4 + 0xFFFFFDBF
           ) < 0) {
    if (param_3 != 1) {
      if (param_3 < 2) {
        if (param_3 != 0) goto LAB_08025360;
      }
      else {
        if (param_3 == 2) {
          sVar6 = -((sVar1 - sVar2) + 0x10);
          psVar8 = asStack_24;
        }
        else {
          if (param_3 != 3) goto LAB_08025360;
          sVar6 = (sVar1 - sVar2) + 0x10;
          psVar8 = asStack_1c;
        }
        *psVar8 = sVar6 + sVar2;
        psVar8[1] = sVar4;
        psVar8[2] = sVar6 + sVar1;
        psVar8[3] = sVar3;
      }
    }
    cVar5 = code_entities_Sub_080AC070(param_2);
    if (cVar5 != '\x01') {
      uVar7 = 1;
      goto LAB_08025362;
    }
  }
LAB_08025360:
  uVar7 = 0;
LAB_08025362:
  return uVar7;
}

/* 0x080257D0 (104B) | code_entities_Sub_080257D0 (orig: func_080257D0) | origin: pure | domain: code_entities | HIGH / stanhash_map_tu */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 hardware_Wrap_m4aMPlayStart();
extern u32 hardware_GetField_0x00_8CD0();
extern u32 farmer_Sub_0800EB3C();
extern u32 farmer_Sub_0800EBC4();
extern u32 code_entities_SetField_0x00();
extern u32 func_080D3910();
void code_entities_Sub_080257D0(u32 *arg0,char arg1) {
  char val;
  int val2;
  int *mem_ptr;
  u32 val3;
  u32 *mem_ptr2;
  u32 *mem_ptr3;
  if (arg1 == 0) {
    val2 = farmer_Sub_0800EB3C(arg0[0xe]);
  }
  else {
    val2 = farmer_Sub_0800EBC4(arg0[0xe]);
  }
  if (val2 != 0) {
    *(u8 *)(arg0 + 0xf) = 0x13;
    code_entities_SetField_0x00(arg0);
    mem_ptr = (int *)func_080D3910((int *)*arg0,*(u32 *)(*(int *)*arg0 + 0x14c));
    mem_ptr2 = (u32 *)*mem_ptr;
    mem_ptr3 = (u32 *)mem_ptr[1];
    for (; mem_ptr2 != mem_ptr3; mem_ptr2 = mem_ptr2 + 1) {
      val = hardware_GetField_0x00_8CD0(*mem_ptr2);
      if (val == 0) {
        val3 = *mem_ptr2;
        goto exit_label;
      }
    }
    val3 = mem_ptr3[-1];
exit_label:
    hardware_Wrap_m4aMPlayStart(val3,0x6b);
  }
}

/* 0x08025838 (104B) | code_entities_Sub_08025838 (orig: func_08025838) | origin: pure | domain: code_entities | HIGH / stanhash_map_tu */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 hardware_Wrap_m4aMPlayStart();
extern u32 hardware_GetField_0x00_8CD0();
extern u32 farmer_Sub_0800EB3C();
extern u32 farmer_Sub_0800EBC4();
extern u32 code_entities_Sub_0802A588();
extern u32 func_080D3910();
void code_entities_Sub_08025838(u32 *arg0,char arg1) {
  char val;
  int val2;
  int *mem_ptr;
  u32 val3;
  u32 *mem_ptr2;
  u32 *mem_ptr3;
  if (arg1 == 0) {
    val2 = farmer_Sub_0800EB3C(arg0[0xe]);
  }
  else {
    val2 = farmer_Sub_0800EBC4(arg0[0xe]);
  }
  if (val2 != 0) {
    code_entities_Sub_0802A588(arg0);
    *(u8 *)(arg0 + 0xf) = 0x14;
    mem_ptr = (int *)func_080D3910((int *)*arg0,*(u32 *)(*(int *)*arg0 + 0x14c));
    mem_ptr2 = (u32 *)*mem_ptr;
    mem_ptr3 = (u32 *)mem_ptr[1];
    for (; mem_ptr2 != mem_ptr3; mem_ptr2 = mem_ptr2 + 1) {
      val = hardware_GetField_0x00_8CD0(*mem_ptr2);
      if (val == 0) {
        val3 = *mem_ptr2;
        goto exit_label;
      }
    }
    val3 = mem_ptr3[-1];
exit_label:
    hardware_Wrap_m4aMPlayStart(val3,0x6b);
  }
}

/* 0x080258A0 (164B) | code_entities_Sub_080258A0 (orig: func_080258A0) | origin: wip | domain: code_entities | HIGH / stanhash_map_tu */
void code_entities_Sub_080258A0(u32 *param_1) {
  char cVar1;
  u8 uVar2;
  int iVar3;
  u32 *puVar4;
  int *piVar5;
  u32 uVar6;
  u32 *puVar7;
  u32 uStack_10;
  held_item_Sub_0800F294(&uStack_10,param_1[0xe] + 0x54);
  cVar1 = RucksackItem_IsEmpty(&uStack_10);
  if (cVar1 == '\0') {
    iVar3 = Rucksack_GetFirstFreeItemSlot(param_1[0xe] + 0x60);
    if (iVar3 != -1) {
      puVar4 = (u32 *)func_0800FCDC(param_1[0xe] + 0x60);
      *puVar4 = uStack_10;
      held_item_Sub_0800F390(param_1[0xe] + 0x54);
      *(u8 *)(param_1 + 0xf) = 0x12;
      code_entities_SetField_0x00(param_1);
      piVar5 = (int *)func_080D3910((int *)*param_1,*(u32 *)(*(int *)*param_1 + 0x14c));
      puVar4 = (u32 *)*piVar5;
      puVar7 = (u32 *)piVar5[1];
      do {
        if (puVar4 == puVar7) {
          uVar6 = puVar7[-1];
LAB_0802591e:
          hardware_Wrap_m4aMPlayStart(uVar6,0x6b);
        }
        cVar1 = hardware_GetField_0x00_8CD0(*puVar4);
        if (cVar1 == '\0') {
          uVar6 = *puVar4;
          goto LAB_0802591e;
        }
        puVar4 = (u8)puVar4 + 1;
      } while( true );
    }
    uVar2 = 4;
  }
  else {
    uVar2 = 0;
  }
  *(u32 *)(param_1 + 0xf) = uVar2;
}

/* 0x08025944 (252B) | code_entities_Sub_08025944 (orig: func_08025944) | origin: wip | domain: code_entities | HIGH / stanhash_map_tu */
void * code_entities_Sub_08025944(int param_1) {
  char cVar1;
  u32 uVar2;
  u32 uVar3;
  int iVar4;

  u8 auStack_10 [4];
  
  iVar4 = *(int *)(param_1 + 0x38) + 0x5c;
  cVar1 = ToolStack_IsEmpty(iVar4);
  if (cVar1 == '\0') {
    uVar3 = *(u32 *)(param_1 + 0x38);
    uVar2 = ToolStack_GetTool(iVar4);
    auStack_10[0] = farmer_Sub_0800E550(uVar3,uVar2);
    iVar4 = func_0800DB30(auStack_10);
    if (iVar4 - 5U < 0x29) {
      switch(*(u32 *)(((const u32 *)0x08025988) + (iVar4 - 5U) * 4) & 0xfffffffe) {
      case 0x802598c:
      case 0x8025a30:
        uVar2 = 1;
        goto LAB_08025a36;
      }
    }
  }
  uVar2 = 0;
LAB_08025a36:
  return (void *)uVar2;
}

/* 0x08025A40 (188B) | code_entities_Sub_08025A40 (orig: func_08025A40) | origin: wip | domain: code_entities | HIGH / stanhash_map_tu */
void code_entities_Sub_08025A40(u32 *param_1,char param_2) {
  char cVar1;
  int *piVar2;
  u32 uVar3;
  int iVar4;
  u32 *puVar5;
  u32 *puVar6;
  cVar1 = code_entities_Sub_08025944();
  if (cVar1 == '\0') {
    if (param_2 == '\0') {
      iVar4 = farmer_Sub_0800EC4C(param_1[0xe]);
    }
    else {
      iVar4 = farmer_Sub_0800ECB0(param_1[0xe]);
    }
    if (iVar4 != 0) {
      *(u8 *)(param_1 + 0xf) = 0x15;
      *(u8 *)((int)param_1 + 0x3d) = 0x14;
      code_entities_Sub_0802A510(param_1);
      piVar2 = (int *)func_080D3910((int *)*param_1,*(u32 *)(*(int *)*param_1 + 0x14c));
      puVar6 = (u32 *)piVar2[1];
      for (puVar5 = (u32 *)*piVar2; puVar5 != puVar6; puVar5 = puVar5 + 1) {
        cVar1 = hardware_GetField_0x00_8CD0(*puVar5);
        if (cVar1 == '\0') {
          uVar3 = *puVar5;
          goto LAB_08025aee;
        }
      }
      uVar3 = puVar6[-1];
LAB_08025aee:
      hardware_Wrap_m4aMPlayStart(uVar3,0xbc);
    }
  }
  else {
    piVar2 = (int *)func_080D3910((int *)*param_1,*(u32 *)(*(int *)*param_1 + 0x14c));
    puVar6 = (u32 *)piVar2[1];
    for (puVar5 = (u32 *)*piVar2; puVar5 != puVar6; puVar5 = puVar5 + 1) {
      cVar1 = hardware_GetField_0x00_8CD0(*puVar5);
      if (cVar1 == '\0') {
        uVar3 = *puVar5;
        goto LAB_08025a82;
      }
    }
    uVar3 = puVar6[-1];
LAB_08025a82:
    hardware_Wrap_m4aMPlayStart(uVar3,199);
    *(u8 *)(param_1 + 0xf) = 0;
  }
}

/* 0x08025AFC (20B) | code_entities_Sub_08025AFC (orig: func_08025AFC) | origin: pure | domain: code_entities | HIGH / stanhash_map_tu */
struct S { u32 f0; u16 f4; };
extern "C" bool code_entities_Sub_08025AFC(S const *s) {
    int v = s->f4;
    if (v <= 8)
        return true;
    return false;
}

/* 0x08025B10 (84B) | code_entities_Sub_08025B10 (orig: func_08025B10) | origin: wip | domain: code_entities | HIGH / stanhash_map_tu */
u32 code_entities_Sub_08025B10(int param_1) {
  u16 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  iVar4 = 0;
  cVar2 = code_entities_Sub_08025AFC();
  if ((cVar2 != '\0') && (*(int *)(*(int *)(param_1 + 0x34) + 8) - 1U < 2)) {
    iVar4 = 1;
  }
  uVar1 = *(u16 *)(*(int *)(param_1 + 0x34) + 0x12);
  if (0x15 < (((u32)(uVar1 ) << 27) >> 27)) {
    iVar4 = iVar4 + 1;
  }
  if ((((u32)(uVar1 ) << 27) >> 27) < 6) {
    iVar4 = iVar4 + 2;
  }
  iVar3 = farmer_Sub_0800E4F0(*(u32 *)(param_1 + 0x38));
  if ((u8)iVar3 == 0) {
    iVar4 = iVar4 + 2;
  }
  cVar2 = code_entities_Sub_08025944(param_1);
  if (cVar2 != '\0') {
    iVar4 = iVar4 + 10;
  }
  return (iVar4);
}

/* 0x08025E38 (196B) | code_entities_Sub_08025E38 (orig: func_08025E38) | origin: wip | domain: code_entities | HIGH / stanhash_map_tu */
void code_entities_Sub_08025E38(u32 *param_1) {
    u32 uVar4;
    u32 * puVar5;
    u32 * puVar6;
  u8 bVar1;
  char cVar2;
  register int *piVar3;
  held_item_Sub_0800F4C0(param_1[0xe] + 0x54);
  code_entities_Sub_0802A588(param_1);
  *(u8 *)(param_1 + 0xf) = 0x11;
  uVar4 = 0xFFF60000;
  bVar1 = *(u8 *)(param_1 + 8);
  if (bVar1 == 1) {
    param_1[0x23] = 0;
LAB_08025ebe:
    param_1[0x24] = uVar4;
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) goto LAB_08025ec2;
      uVar4 = 0xa0000;
      param_1[0x23] = 0;
      goto LAB_08025ebe;
    }
    if (bVar1 == 2) {
      param_1[0x23] = 0xFFF60000;
      param_1[0x24] = 0;
    }
    else {
      if (bVar1 != 3) goto LAB_08025ec2;
      param_1[0x23] = 0xa0000;
      param_1[0x24] = 0;
    }
  }
  param_1[0x27] = (u16)0xc0000;
LAB_08025ec2:
  piVar3 = (int *)func_080D3910((int *)*param_1,*(u32 *)(*(int *)*param_1 + 0x14c));
  puVar5 = (u32 *)*piVar3;
  puVar6 = (u32 *)piVar3[1];
  do {
    if (puVar5 == puVar6) {
      uVar4 = puVar6[-1];
LAB_08025ef0:
      hardware_Wrap_m4aMPlayStart(uVar4,0x6a);
    }
    cVar2 = hardware_GetField_0x00_8CD0(*puVar5);
    if (cVar2 == '\0') {
      uVar4 = *puVar5;
      goto LAB_08025ef0;
    }
    puVar5 = puVar5 + 1;
  } while( true );
}

/* 0x08025EFC (200B) | code_entities_Sub_08025EFC (orig: func_08025EFC) | origin: wip | domain: code_entities | HIGH / stanhash_map_tu */
void code_entities_Sub_08025EFC(u32 *param_1,u8 param_2) {
  u8 bVar1;
  char cVar2;
  int *piVar3;
  u32 uVar4;
  u32 *puVar5;
  u32 *puVar6;
  held_item_Sub_0800F4F0(param_1[0xe] + 0x54,param_2);
  code_entities_Sub_0802A588(param_1);
  *(u8 *)(param_1 + 0xf) = 0x11;
  uVar4 = 0xFFF60000;
  bVar1 = *(u8 *)(param_1 + 8);
  if (bVar1 == 1) {
    param_1[0x23] = 0;
LAB_08025f86:
    param_1[0x24] = uVar4;
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) goto LAB_08025f8a;
      uVar4 = 0xa0000;
      param_1[0x23] = 0;
      goto LAB_08025f86;
    }
    if (bVar1 == 2) {
      param_1[0x23] = 0xFFF60000;
      param_1[0x24] = 0;
    }
    else {
      if (bVar1 != 3) goto LAB_08025f8a;
      param_1[0x23] = 0xa0000;
      param_1[0x24] = 0;
    }
  }
  param_1[0x27] = 0xc0000;
LAB_08025f8a:
  piVar3 = (int *)func_080D3910((int *)*param_1,*(u32 *)(*(int *)*param_1 + 0x14c));
  puVar5 = (u32 *)*piVar3;
  puVar6 = (u32 *)piVar3[1];
  do {
    if (puVar5 == puVar6) {
      uVar4 = puVar6[-1];
LAB_08025fb8:
      hardware_Wrap_m4aMPlayStart(uVar4,0x6a);
    }
    cVar2 = hardware_GetField_0x00_8CD0(*puVar5);
    if (cVar2 == '\0') {
      uVar4 = *puVar5;
      goto LAB_08025fb8;
    }
    puVar5 = puVar5 + 1;
  } while( true );
}

/* 0x08025FC4 (196B) | code_entities_Sub_08025FC4 (orig: func_08025FC4) | origin: wip | domain: code_entities | HIGH / stanhash_map_tu */
void code_entities_Sub_08025FC4(u32 *param_1) {
    int * piVar3;
    u32 uVar4;
    u32 * puVar5;
    u32 * puVar6;
  register u8 bVar1;
  register char cVar2;
  held_item_Sub_0800F4D8(param_1[0xe] + 0x54);
  code_entities_Sub_0802A588(param_1);
  *(u8 *)(param_1 + 0xf) = 0x11;
  uVar4 = 0xFFF60000;
  bVar1 = *(u8 *)(param_1 + 8);
  if (bVar1 == 1) {
    param_1[0x23] = 0;
LAB_0802604a:
    param_1[0x24] = uVar4;
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) goto LAB_0802604e;
      uVar4 = 0xa0000;
      param_1[0x23] = 0;
      goto LAB_0802604a;
    }
    if (bVar1 == 2) {
      param_1[0x23] = 0xFFF60000;
      param_1[0x24] = 0;
    }
    else {
      if (bVar1 != 3) goto LAB_0802604e;
      param_1[0x23] = 0xa0000;
      param_1[0x24] = 0;
    }
  }
  param_1[0x27] = (s8)0xc0000;
LAB_0802604e:
  piVar3 = (int *)func_080D3910((int *)*param_1,*(u32 *)(*(int *)*param_1 + 0x14c));
  puVar5 = (u32 *)*piVar3;
  puVar6 = (u32 *)piVar3[1];
  do {
    if (puVar5 == puVar6) {
      uVar4 = puVar6[-1];
LAB_0802607c:
      hardware_Wrap_m4aMPlayStart(uVar4,0x6a);
    }
    cVar2 = hardware_GetField_0x00_8CD0(*puVar5);
    if (cVar2 == '\0') {
      uVar4 = *puVar5;
      goto LAB_0802607c;
    }
    puVar5 = puVar5 + 1;
  } while( true );
}

/* 0x08026088 (200B) | code_entities_Sub_08026088 (orig: func_08026088) | origin: wip | domain: code_entities | MEDIUM / tu_interp */
void code_entities_Sub_08026088(u32 *param_1,u16 param_2) {
  u8 bVar1;
  char cVar2;
  int *piVar3;
  u32 uVar4;
  u32 *puVar5;
  u32 *puVar6;
  held_item_Sub_0800F510(param_1[0xe] + 0x54,param_2);
  code_entities_Sub_0802A588(param_1);
  *(u8 *)(param_1 + 0xf) = 0x11;
  uVar4 = 0xFFF60000;
  bVar1 = *(u8 *)(param_1 + 8);
  if (bVar1 == 1) {
    param_1[0x23] = 0;
LAB_08026112:
    param_1[0x24] = uVar4;
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) goto LAB_08026116;
      uVar4 = 0xa0000;
      param_1[0x23] = 0;
      goto LAB_08026112;
    }
    if (bVar1 == 2) {
      param_1[0x23] = 0xFFF60000;
      param_1[0x24] = 0;
    }
    else {
      if (bVar1 != 3) goto LAB_08026116;
      param_1[0x23] = 0xa0000;
      param_1[0x24] = 0;
    }
  }
  param_1[0x27] = 0xc0000;
LAB_08026116:
  piVar3 = (int *)func_080D3910((int *)*param_1,*(u32 *)(*(int *)*param_1 + 0x14c));
  puVar5 = (u32 *)*piVar3;
  puVar6 = (u32 *)piVar3[1];
  do {
    if (puVar5 == puVar6) {
      uVar4 = puVar6[-1];
LAB_08026144:
      hardware_Wrap_m4aMPlayStart(uVar4,0x6a);
    }
    cVar2 = hardware_GetField_0x00_8CD0(*puVar5);
    if (cVar2 == '\0') {
      uVar4 = *puVar5;
      goto LAB_08026144;
    }
    puVar5 = puVar5 + 1;
  } while( true );
}

/* 0x0802634C (1252B) | code_entities_vfunc_7C (orig: func_0802634C) | origin: wip | domain: code_entities | HIGH / vtable_algebra */
void code_entities_vfunc_7C(u32 *self) {
  u8 uStack_1c;
  char cVar3;
  u16 uVar4;
  u8 bVar1;
  u32 uVar5;
  u32 uVar6;
  int iVar8;
  int *piVar9;
  u32 *puVar10;
  u16 uVar11;
  u32 *puVar12;
  u8 uVar2;
  u8 auStack_1b [7];
  u8 *puVar7;
  puVar7 = &uStack_1c;
  farmer_Sub_0800EAF0(self[0xe]);
  *(u8 *)(self + 0x22) = 1;
  *(short *)((int)self + 0x89) = 0;
  self[0x27] = 0x110000;
  self[0x24] = 0;
  self[0x23] = 0xFFF80000;
  puVar10 = (u32 *)self[4];
  if (puVar10 != (u32 *)0x0) {
    uVar5 = func_080D3910(*(int **)*puVar10,*(u32 *)(**(int **)*puVar10 + 100));
    code_0803EE94_Sub_0805E850(puVar10 + 0x2d,uVar5,0x000001DD);
    *(u8 *)(puVar10 + 0x32) = 1;
    *(u8 *)((int)puVar10 + 0xca) = 0;
    *(u8 *)((int)puVar10 + 0xcb) = 1;
  }
  *(u8 *)(self + 0xf) = 0x2f;
  *(char *)((int)self + 0x3d) = 'x';
  uVar11 = 0x192;
  *(short *)(self + 0x1f) = (short)0x0000FFFF;
  uVar6 = (u32)*(u8 *)(self + 0xf);
  if (0x39 < uVar6) goto LAB_080267e4;
  switch(*(u32 *)(uVar6 * 4 + 0x080263DC) & 0xfffffffe) {
  case 0x80264c4:
    cVar3 = held_item_VmHelper_0800F190(self[0xe] + 0x54);
    if (cVar3 != '\0') {
      bVar1 = *(u8 *)((int)self + 0x3e);
      if (bVar1 == 1) {
        uVar11 = 0x132;
        if (*(char *)((int)self + 0xb3) == '\0') {
          uVar11 = 0x1c6;
        }
        break;
      }
      if (1 < bVar1) {
        if ((bVar1 == 2) && (uVar11 = 0x132, *(char *)((int)self + 0xb3) == '\0')) {
          uVar11 = 0x15e;
        }
        break;
      }
      if (bVar1 != 0) break;
      goto case_08026624;
    }
    bVar1 = *(u8 *)((int)self + 0x3e);
    if (bVar1 != 1) {
      if (1 < bVar1) {
        if (bVar1 == 2) {
          uVar11 = 0x14e;
        }
        break;
      }
      goto joined_r0x08026598;
    }
    goto LAB_080267d0;
  case 0x8026538:
    cVar3 = held_item_VmHelper_0800F190(self[0xe] + 0x54);
    if (cVar3 == '\0') goto case_080267AE;
    if (5 < *(u8 *)((int)self + 0x3f)) goto case_08026624;
    uVar11 = *(u16 *)
              (((u32)*(u8 *)((int)self + 0x3f) * 7 + (u32)*(u8 *)(self + 0x10)) * 2 +
              0x080F0FCC);
    iVar8 = self[0xe];
    uVar5 = ToolStack_GetTool(iVar8 + 0x5c);
    uStack_1c = farmer_Sub_0800E550(iVar8,uVar5);
    goto LAB_080266a6;
  case 0x8026588:
    bVar1 = held_item_VmHelper_0800F190(self[0xe] + 0x54);
joined_r0x08026598:
    uVar11 = 0x192;
    if (bVar1 != 0) break;
  case 0x80267ae:
case_080267AE:
    uVar11 = 0x152;
    break;
  case 0x802659e:
    cVar3 = held_item_VmHelper_0800F190(self[0xe] + 0x54);
    uVar11 = 0x192;
    if (cVar3 == '\0') {
      uVar11 = 0x152;
    }
    break;
  case 0x80265b6:
    uVar11 = 0x136;
    break;
  case 0x80265bc:
    uVar11 = 0x19e;
    break;
  case 0x80265c2:
    uVar11 = 0x4e;
    break;
  case 0x80265c6:
    uVar11 = 0x46;
    break;
  case 0x80265ca:
    uVar11 = (s8)0x13e;
    break;
  case 0x80265d0:
    uVar11 = 0x142;
    break;
  case 0x80265d6:
    uVar11 = *(u16 *)(self + 0x11);
    iVar8 = self[0xe];
    uVar5 = ToolStack_GetTool(iVar8 + 0x5c);
    uVar2 = farmer_Sub_0800E550(iVar8,uVar5);
    puVar7 = auStack_1b;
    goto LAB_080266a4;
  case 0x80265f6:
    uVar11 = 0x1ea;
    iVar8 = self[0xe];
    uVar2 = farmer_Sub_0800E550(iVar8,uVar5);
    uVar5 = ToolStack_GetTool(iVar8 + 0x5c);
    puVar7 = auStack_1b + 1;
    goto LAB_080266a4;
  case 0x8026614:
    if (*(u8 *)((int)self + 0x4e) != *(u8 *)((int)self + 0x4f)) {
      uVar11 = 0x182;
      if ((u32)*(u8 *)((int)self + 0x4f) - (u32)*(u8 *)((int)self + 0x4e) == 1) {
        uVar11 = 0x186;
      }
      iVar8 = self[0xe];
      uVar5 = ToolStack_GetTool(iVar8 + 0x5c);
      uVar2 = farmer_Sub_0800E550(iVar8,uVar5);
      puVar7 = auStack_1b + 2;
      goto LAB_080266a4;
    }
  case 0x8026624:
case_08026624:
    uVar11 = 0x192;
    break;
  case 0x8026654:
    uVar11 = 0x76;
    iVar8 = self[0xe];
    uVar5 = ToolStack_GetTool(iVar8 + 0x5c);
    uVar2 = farmer_Sub_0800E550(iVar8,uVar5);
    puVar7 = auStack_1b + 3;
    goto LAB_080266a4;
  case 0x802666e:
    uVar11 = 0x6e;
    iVar8 = self[0xe];
    uVar5 = ToolStack_GetTool(iVar8 + 0x5c);
    uVar2 = farmer_Sub_0800E550(iVar8,uVar5);
    puVar7 = auStack_1b + 4;
    goto LAB_080266a4;
  case 0x802668a:
    uVar11 = 0x72;
    iVar8 = self[0xe];
    uVar5 = ToolStack_GetTool(iVar8 + 0x5c);
    uVar2 = farmer_Sub_0800E550(iVar8,uVar5);
    puVar7 = auStack_1b + 5;
LAB_080266a4:
    *puVar7 = uVar2;
LAB_080266a6:
    uVar4 = Tool_GetIconId(puVar7);
    *(u16 *)(self + 0x1f) = uVar4;
    break;
  case 0x80266ae:
    uVar11 = 0x1fa;
    break;
  case 0x80266b4:
    uVar11 = 0x196;
    break;
  case 0x80266ba:
    uVar11 = 0x112;
    break;
  case 0x80266c0:
    uVar11 = 0x116;
    break;
  case 0x80266c6:
    iVar8 = func_080D3914((int *)*self,0x2c,*(u32 *)(*(int *)*self + 0x40));
    bVar1 = *(u8 *)((int)self + 0x3e);
    if (bVar1 == 1) {
      uVar11 = 0xee;
      uVar6 = 0x0000077E;
    }
    else if (bVar1 < 2) {
      if (bVar1 != 0) break;
      uVar11 = 0xea;
      uVar6 = 0x0000077A;
    }
    else {
      if (bVar1 != 2) break;
      uVar11 = 0xe6;
      uVar6 = 0x00000782;
    }
    goto LAB_08026792;
  case 0x8026710:
    uVar11 = 0x15a;
    iVar8 = func_080D3914((int *)*self,0x2c,*(u32 *)(*(int *)*self + 0x40));
    uVar6 = 0x0000077A;
    goto LAB_08026792;
  case 0x802672c:
    uVar11 = 0x9a;
    iVar8 = func_080D3914((int *)*self,0x2c,*(u32 *)(*(int *)*self + 0x40));
    uVar6 = 0x0000077A;
    goto LAB_08026792;
  case 0x8026744:
    uVar11 = 0x106;
    break;
  case 0x802674a:
    uVar11 = 0x102;
    break;
  case 0x8026750:
    uVar11 = 0xfe;
    break;
  case 0x8026754:
    uVar11 = 0xfa;
    break;
  case 0x8026758:
    uVar11 = 0x122;
    break;
  case 0x802675e:
    uVar11 = 0x11e;
    break;
  case 0x8026764:
    uVar11 = 0x11a;
    break;
  case 0x802676a:
    cVar3 = held_item_VmHelper_0800F190(self[0xe] + 0x54);
    uVar11 = 0x14a;
    if (cVar3 != '\0') {
      uVar11 = 0x10a;
    }
    break;
  case 0x8026780:
    uVar11 = 0xe2;
    iVar8 = func_080D3914((int *)*self,0x2c,*(u32 *)(*(int *)*self + 0x40));
    uVar6 = 0x00000792;
LAB_08026792:
    if (*(u16 *)(iVar8 + 0x22) != uVar6) {
      AActorEntity_SetAnim(iVar8);
    }
    break;
  case 0x80267a4:
    uVar11 = 0x3e;
    break;
  case 0x80267a8:
    uVar11 = 0x146;
    break;
  case 0x80267b4:
    uVar11 = 0x13a;
    break;
  case 0x80267ba:
    uVar11 = 0x42;
    break;
  case 0x80267be:
    cVar3 = held_item_VmHelper_0800F190(self[0xe] + 0x54);
    uVar11 = 0x1c6;
    if (cVar3 != '\0') break;
LAB_080267d0:
    uVar11 = 0x156;
    break;
  case 0x80267da:
    uVar11 = 0xf6;
    if (*(char *)((int)self + 0x3d) != '\0') {
      uVar11 = 0xf2;
    }
  }
LAB_080267e4:
  AActorEntity_SetAnim(self,uVar11);
  piVar9 = (int *)func_080D3910((int *)*self,*(u32 *)(*(int *)*self + 0x14c));
  puVar10 = (u32 *)*piVar9;
  puVar12 = (u32 *)piVar9[1];
  do {
    if (puVar10 == puVar12) {
      uVar5 = puVar12[-1];
LAB_0802681e:
      hardware_Wrap_m4aMPlayStart(uVar5,0xb6);
      *(u8 *)(self + 0x30) = 1;
    }
    cVar3 = hardware_GetField_0x00_8CD0(*puVar10);
    if (cVar3 == '\0') {
      uVar5 = *puVar10;
      goto LAB_0802681e;
    }
    puVar10 = puVar10 + 1;
  } while( true );
}

/* 0x08026830 (1252B) | code_entities_vfunc_80 (orig: func_08026830) | origin: wip | domain: code_entities | HIGH / vtable_algebra */
void code_entities_vfunc_80(u32 *self) {
  char cVar3;
  u8 uVar2;
  u16 uVar4;
  u8 bVar1;
  u32 uVar5;
  u32 uVar6;
  int iVar8;
  int *piVar9;
  u32 *puVar10;
  u16 uVar11;
  u32 *puVar12;
  u8 uStack_1c;
  u8 auStack_1b [7];
  u8 *puVar7;
  puVar7 = &uStack_1c;
  farmer_Sub_0800EAFC(self[0xe]);
  *(u8 *)(self + 0x22) = 1;
  *(u8 *)((int)self + 0x89) = 0;
  self[0x23] = 0xFFF80000;
  self[0x27] = 0x110000;
  puVar10 = (u32 *)self[4];
  self[0x24] = 0;
  if (puVar10 != (u32 *)0x0) {
    uVar5 = func_080D3910(*(int **)*puVar10,*(u32 *)(**(int **)*puVar10 + 100));
    code_0803EE94_Sub_0805E850(puVar10 + 0x2d,uVar5,0x0000015F);
    *(u8 *)(puVar10 + 0x32) = 1;
    *(u8 *)((int)puVar10 + 0xca) = 0;
    *(u8 *)((int)puVar10 + 0xcb) = 1;
  }
  *(u8 *)(self + 0xf) = 0x2f;
  *(char *)((int)self + 0x3d) = 'x';
  uVar11 = 0x192;
  *(u16 *)(self + 0x1f) = (short)0x0000FFFF;
  uVar6 = (u32)*(u8 *)(self + 0xf);
  if (0x39 < uVar6) goto LAB_08026cc8;
  switch(*(u32 *)(uVar6 * 4 + 0x080268C0) & 0xfffffffe) {
  case 0x80269a8:
    cVar3 = held_item_VmHelper_0800F190(self[0xe] + 0x54);
    if (cVar3 != '\0') {
      bVar1 = *(u8 *)((int)self + 0x3e);
      if (bVar1 == 1) {
        uVar11 = 0x132;
        if (*(char *)((int)self + 0xb3) == '\0') {
          uVar11 = 0x1c6;
        }
        break;
      }
      if (1 < bVar1) {
        if ((bVar1 == 2) && (uVar11 = 0x132, *(char *)((int)self + 0xb3) == '\0')) {
          uVar11 = 0x15e;
        }
        break;
      }
      if (bVar1 != 0) break;
      goto case_08026B08;
    }
    bVar1 = *(u8 *)((int)self + 0x3e);
    if (bVar1 != 1) {
      if (1 < bVar1) {
        if (bVar1 == 2) {
          uVar11 = 0x14e;
        }
        break;
      }
      goto joined_r0x08026a7c;
    }
    goto LAB_08026cb4;
  case 0x8026a1c:
    cVar3 = held_item_VmHelper_0800F190(self[0xe] + 0x54);
    if (cVar3 == '\0') goto case_08026C92;
    if (5 < *(u8 *)((int)self + 0x3f)) goto case_08026B08;
    uVar11 = *(u16 *)
              (((u32)*(u8 *)((int)self + 0x3f) * 7 + (u32)*(u8 *)(self + 0x10)) * 2 +
              0x080F0FCC);
    iVar8 = self[0xe];
    uVar5 = ToolStack_GetTool(iVar8 + 0x5c);
    uStack_1c = farmer_Sub_0800E550(iVar8,uVar5);
    goto LAB_08026b8a;
  case 0x8026a6c:
    bVar1 = held_item_VmHelper_0800F190(self[0xe] + 0x54);
joined_r0x08026a7c:
    uVar11 = 0x192;
    if (bVar1 != 0) break;
  case 0x8026c92:
case_08026C92:
    uVar11 = 0x152;
    break;
  case 0x8026a82:
    cVar3 = held_item_VmHelper_0800F190(self[0xe] + 0x54);
    uVar11 = 0x192;
    if (cVar3 == '\0') {
      uVar11 = 0x152;
    }
    break;
  case 0x8026a9a:
    uVar11 = 0x136;
    break;
  case 0x8026aa0:
    uVar11 = 0x19e;
    break;
  case 0x8026aa6:
    uVar11 = 0x4e;
    break;
  case 0x8026aaa:
    uVar11 = 0x46;
    break;
  case 0x8026aae:
    uVar11 = 0x13e;
    break;
  case 0x8026ab4:
    uVar11 = 0x142;
    break;
  case 0x8026aba:
    uVar11 = *(u16 *)(self + 0x11);
    iVar8 = self[0xe];
    uVar5 = ToolStack_GetTool(iVar8 + 0x5c);
    uVar2 = farmer_Sub_0800E550(iVar8,uVar5);
    puVar7 = auStack_1b;
    goto LAB_08026b88;
  case 0x8026ada:
    uVar11 = 0x1ea;
    iVar8 = self[0xe];
    uVar5 = ToolStack_GetTool(iVar8 + 0x5c);
    uVar2 = farmer_Sub_0800E550(iVar8,uVar5);
    puVar7 = auStack_1b + 1;
    goto LAB_08026b88;
  case 0x8026af8:
    if (*(u8 *)((int)self + 0x4e) != *(u8 *)((int)self + 0x4f)) {
      uVar11 = 0x182;
      if ((u32)*(u8 *)((int)self + 0x4f) - (u32)*(u8 *)((int)self + 0x4e) == 1) {
        uVar11 = 0x186;
      }
      iVar8 = self[0xe];
      uVar5 = ToolStack_GetTool(iVar8 + 0x5c);
      uVar2 = farmer_Sub_0800E550(iVar8,uVar5);
      puVar7 = auStack_1b + 2;
      goto LAB_08026b88;
    }
  case 0x8026b08:
case_08026B08:
    uVar11 = 0x192;
    break;
  case 0x8026b38:
    uVar11 = 0x76;
    iVar8 = self[0xe];
    uVar5 = ToolStack_GetTool(iVar8 + 0x5c);
    uVar2 = farmer_Sub_0800E550(iVar8,uVar5);
    puVar7 = auStack_1b + 3;
    goto LAB_08026b88;
  case 0x8026b52:
    uVar11 = 0x6e;
    iVar8 = self[0xe];
    uVar5 = ToolStack_GetTool(iVar8 + 0x5c);
    uVar2 = farmer_Sub_0800E550(iVar8,uVar5);
    puVar7 = auStack_1b + 4;
    goto LAB_08026b88;
  case 0x8026b6e:
    uVar11 = 0x72;
    iVar8 = self[0xe];
    uVar5 = ToolStack_GetTool(iVar8 + 0x5c);
    uVar2 = farmer_Sub_0800E550(iVar8,uVar5);
    puVar7 = auStack_1b + 5;
LAB_08026b88:
    *puVar7 = uVar2;
LAB_08026b8a:
    uVar4 = Tool_GetIconId(puVar7);
    *(int *)(self + 0x1f) = uVar4;
    break;
  case 0x8026b92:
    uVar11 = (u8)0x1fa;
    break;
  case 0x8026b98:
    uVar11 = 0x196;
    break;
  case 0x8026b9e:
    uVar11 = 0x112;
    break;
  case 0x8026ba4:
    uVar11 = 0x116;
    break;
  case 0x8026baa:
    iVar8 = func_080D3914((int *)*self,0x2c,*(u32 *)(*(int *)*self + 0x40));
      uVar11 = 0xee;
    if (bVar1 == 1) {
    bVar1 = *(u8 *)((int)self + 0x3e);
      uVar6 = 0x0000077E;
    }
    else if (bVar1 < 2) {
      if (bVar1 != 0) break;
      uVar11 = 0xea;
      uVar6 = 0x0000077A;
    }
    else {
      if (bVar1 != 2) break;
      uVar11 = 0xe6;
      uVar6 = (u8)0x00000782;
    }
    goto LAB_08026c76;
  case 0x8026bf4:
    uVar11 = 0x15a;
    iVar8 = func_080D3914((int *)*self,0x2c,*(u32 *)(*(int *)*self + 0x40));
    uVar6 = 0x0000077A;
    goto LAB_08026c76;
  case 0x8026c10:
    uVar11 = 0x9a;
    iVar8 = func_080D3914((int *)*self,0x2c,*(u32 *)(*(int *)*self + 0x40));
    uVar6 = 0x0000077A;
    goto LAB_08026c76;
  case 0x8026c28:
    uVar11 = 0x106;
    break;
  case 0x8026c2e:
    uVar11 = 0x102;
    break;
  case 0x8026c34:
    uVar11 = 0xfe;
    break;
  case 0x8026c38:
    uVar11 = 0xfa;
    break;
  case 0x8026c3c:
    uVar11 = 0x122;
    break;
  case 0x8026c42:
    uVar11 = 0x11e;
    break;
  case 0x8026c48:
    uVar11 = 0x11a;
    break;
  case 0x8026c4e:
    cVar3 = held_item_VmHelper_0800F190(self[0xe] + 0x54);
    uVar11 = 0x14a;
    if (cVar3 != '\0') {
      uVar11 = 0x10a;
    }
    break;
  case 0x8026c64:
    uVar11 = 0xe2;
    iVar8 = func_080D3914((int *)*self,0x2c,*(u32 *)(*(int *)*self + 0x40));
    uVar6 = 0x00000792;
LAB_08026c76:
    if (*(u16 *)(iVar8 + 0x22) != uVar6) {
      AActorEntity_SetAnim(iVar8);
    }
    break;
  case 0x8026c88:
    uVar11 = 0x3e;
    break;
  case 0x8026c8c:
    uVar11 = 0x146;
    break;
  case 0x8026c98:
    uVar11 = 0x13a;
    break;
  case 0x8026c9e:
    uVar11 = 0x42;
    break;
  case 0x8026ca2:
    cVar3 = held_item_VmHelper_0800F190(self[0xe] + 0x54);
    uVar11 = 0x1c6;
    if (cVar3 != '\0') break;
LAB_08026cb4:
    uVar11 = (u8)0x156;
    break;
  case 0x8026cbe:
    uVar11 = 0xf6;
    if (*(char *)((int)self + 0x3d) != '\0') {
      uVar11 = 0xf2;
    }
  }
LAB_08026cc8:
  AActorEntity_SetAnim(self,uVar11);
  piVar9 = (int *)func_080D3910((int *)*self,*(u32 *)(*(int *)*self + 0x14c));
  puVar10 = (u32 *)*piVar9;
  puVar12 = (u32 *)piVar9[1];
  do {
    if (puVar10 == puVar12) {
      uVar5 = puVar12[-1];
LAB_08026d02:
      hardware_Wrap_m4aMPlayStart(uVar5,0xb6);
      *(u8 *)(self + 0x30) = 1;
    }
    cVar3 = hardware_GetField_0x00_8CD0(*puVar10);
    if (cVar3 == '\0') {
      uVar5 = *puVar10;
      goto LAB_08026d02;
    }
    puVar10 = puVar10 + 1;
  } while( true );
}

/* 0x0802907C (88B) | code_entities_vfunc_54 (orig: func_0802907C) | origin: pure | domain: code_entities | HIGH / vtable_algebra */
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
extern u32 func_0800DF54();
extern u32 farmer_Sub_0800ED2C();
extern u32 held_item_VmHelper_0800F190();
extern u32 held_item_VmHelper_0800F204();
extern u32 held_item_Func044();
extern u32 held_item_Sub_0800F390();
extern u32 code_entities_SetField_0x00();
void code_entities_vfunc_54(int arg0) {
  u8 auStack_10[4];
  int val = *(int *)(arg0 + 0x34) + 0x1C2C;
  if ((u8)held_item_VmHelper_0800F190(val) == 0) {
    if (held_item_VmHelper_0800F204(val) == 1) {
      auStack_10[0] = held_item_Func044(val);
      if (func_0800DF54(auStack_10) == 0x35) {
        farmer_Sub_0800ED2C(*(u32 *)(arg0 + 0x38));
      }
    }
    held_item_Sub_0800F390(*(int *)(arg0 + 0x38) + 0x54);
    code_entities_SetField_0x00(arg0);
  }
}

/* 0x080299D0 (28B) | code_entities_vfunc_6C (orig: func_080299D0) | origin: pure | domain: code_entities | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 AActorEntity_SetAnim();
void code_entities_vfunc_6C(int arg0) {
  *(u8 *)(arg0 + 0xa4) = 0;
  *(u8 *)(arg0 + 0x88) = 0;
  AActorEntity_SetAnim(arg0,0x192);
}

/* 0x0802A400 (192B) | code_entities_vfunc_58 (orig: func_0802A400) | origin: wip | domain: code_entities | HIGH / vtable_algebra */
void code_entities_vfunc_58(int self,u32 param_2) {
  u8 uVar1;
  u16 uVar2;
  u32 uVar3;
  u32 uVar4;
  u32 *puVar5;
  int iVar6;
  *(u8 *)(self + 0xa4) = 1;
  *(u8 *)(self + 0x88) = 1;
  *(u8 *)(self + 0x89) = 0;
  *(u32 *)(self + 0x8c) = 0;
  *(u32 *)(self + 0x90) = 0;
  *(u32 *)(self + 0x9c) = 0x150000;
  puVar5 = *(u32 **)(self + 0x10);
  if (puVar5 != (u32 *)0x0) {
    uVar2 = Food_GetIconId(param_2);
    uVar3 = func_080D3910(*(int **)*puVar5,*(u32 *)(**(int **)*puVar5 + 100));
    code_0803EE94_Sub_0805E850(puVar5 + 0x2d,uVar3,uVar2);
    *(u8 *)(puVar5 + 0x32) = 1;
    *(u8 *)((int)puVar5 + 0xca) = 0;
    *(u8 *)((int)puVar5 + 0xcb) = 1;
  }
  iVar6 = *(int *)(self + 0x14);
  uVar3 = Food_GetStaminaGain(param_2);
  uVar4 = Food_GetFatigueGain(param_2);
  func_080D3918(self,uVar3,uVar4,*(u32 *)(iVar6 + 100));
  iVar6 = Food_IsDrink(param_2);
  if (iVar6 == 0) {
    uVar1 = 0x36;
  }
  else {
    uVar1 = 0x37;
  }
  *(u8 *)(self + 0x3c) = uVar1;
  *(u8 *)(self + 0xc0) = 1;
  AActorEntity_SetAnim(self,0x146);
}

/* 0x0802A4C0 (80B) | code_entities_Sub_0802A4C0 (orig: func_0802A4C0) | origin: wip | domain: code_entities | HIGH / stanhash_map_tu */
void code_entities_Sub_0802A4C0(int param_1,u32 param_2,int param_3) {
  u32 uVar1;
  u32 *puVar2;
  *(u8 *)(param_1 + 0x88) = 1;
  if ((param_3 == 1) || (param_3 == 0)) {
    *(char *)(param_1 + 0x89) = (char)param_3;
  }
  puVar2 = *(u32 **)(param_1 + 0x10);
  if (puVar2 != (u32 *)0x0) {
    uVar1 = func_080D3910(*(int **)*puVar2,*(u32 *)(**(int **)*puVar2 + 100));
    code_0803EE94_Sub_0805E850(puVar2 + 0x2d,uVar1,param_2);
    *(u8 *)(puVar2 + 0x32) = 1;
    *(u8 *)((int)puVar2 + 0xca) = 0;
    *(u8 *)((int)puVar2 + 0xcb) = 1;
  }
}

/* 0x0802A510 (120B) | code_entities_Sub_0802A510 (orig: func_0802A510) | origin: wip | domain: code_entities | HIGH / stanhash_map_tu */
void code_entities_Sub_0802A510(int param_1) {
  u16 uVar1;
  u32 uVar2;
  int iVar3;
  u32 *puVar4;
  u8 auStack_18 [4];
  *(u8 *)(param_1 + 0x88) = 1;
  *(u32 *)(param_1 + 0x89) = 0;
  *(u32 *)(param_1 + 0x8c) = 0xFFF80000;
  *(u32 *)(param_1 + 0x90) = 0;
  *(u8 *)(param_1 + 0x9c) = 0x110000;
  puVar4 = *(u32 **)(param_1 + 0x10);
  if (puVar4 != (u32 *)0x0) {
    iVar3 = *(int *)(param_1 + 0x38);
    uVar2 = ToolStack_GetTool(iVar3 + 0x5c);
    auStack_18[0] = farmer_Sub_0800E550(iVar3,uVar2);
    uVar1 = Tool_GetIconId(auStack_18);
    uVar2 = func_080D3910(*(int **)*puVar4,*(u32 *)(**(int **)*puVar4 + 100));
    code_0803EE94_Sub_0805E850(puVar4 + 0x2d,uVar2,uVar1);
    *(u8 *)(puVar4 + 0x32) = 1;
    *(u8 *)((int)puVar4 + 0xca) = 0;
    *(u8 *)((int)puVar4 + 0xcb) = 1;
  }
}

/* 0x0802A7D8 (8B) | code_entities_SetField_0x00 (orig: func_0802A7D8) | origin: pure | domain: code_entities | HIGH / stanhash_map_tu */
void code_entities_SetField_0x00(u8 *arg0) {
    *(u8 *)(arg0 + 136) = 0;
}

/* 0x0802AA84 (276B) | code_entities_Sub_0802AA84 (orig: func_0802AA84) | origin: wip | domain: code_entities | HIGH / stanhash_map_tu */
u32 code_entities_Sub_0802AA84(int param_1) {
  char cVar1;
  u32 uVar2;
  u32 uVar3;
  int iVar4;
  int iVar5;
  u32 uVar6;
  int iVar7;
  u8 abStack_28 [8];
  u8 uStack_20;
  u8 uStack_1f;
  u8 uStack_1e;
  iVar7 = 0;
  iVar5 = *(int *)(param_1 + 0x34) + 0x00001C34;
  cVar1 = ToolStack_IsEmpty(iVar5);
  if (cVar1 == '\0') {
    iVar7 = *(u16 *)(param_1 + 0x34) + 0x00001BD8;
    uVar2 = ToolStack_GetTool(iVar5);
    uStack_20 = farmer_Sub_0800E550(iVar7,uVar2);
    iVar7 = code_entities_Sub_080246BC(0);
  }
  iVar5 = *(int *)(param_1 + 0x34) + 0x00001C38;
  for (uVar6 = 0; uVar3 = func_0800F5F8(iVar5), uVar6 < uVar3; uVar6 = uVar6 + 1) {
    uVar2 = func_0800F868(iVar5,uVar6);
    cVar1 = ToolStack_IsEmpty();
    if (cVar1 == '\0') {
      iVar4 = *(u16 *)(param_1 + 0x34) + 0x00001BD8;
      uVar2 = ToolStack_GetTool(uVar2);
      uStack_1f = farmer_Sub_0800E550(iVar4,uVar2);
      iVar7 = code_entities_Sub_080246BC(&uStack_1f);
    }
  }
  iVar5 = (u8)*(int *)(param_1 + 0x34);
  uVar6 = 0;
  do {
    uVar2 = func_0800B408(iVar5 + 0x380,uVar6);
    cVar1 = ToolStack_IsEmpty();
    if (cVar1 == '\0') {
      iVar4 = *(u8 *)(param_1 + 0x34) + 0x00001BD8;
      uVar2 = ToolStack_GetTool(uVar2);
      uStack_1e = farmer_Sub_0800E550(iVar4,uVar2);
      iVar7 = code_entities_Sub_080246BC(iVar7);
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 0x40);
  LibC_memcpy(abStack_28,0x080F11B4,7);
  return ((u32)abStack_28[iVar7]);
}

/* 0x0802AB98 (148B) | code_entities_Sub_0802AB98 (orig: func_0802AB98) | origin: wip | domain: code_entities | HIGH / stanhash_map_tu */
short * code_entities_Sub_0802AB98(short *param_1,int param_2,int param_3) {
  short sVar1;
  short sVar2;
  if (param_3 == 1) {
    sVar1 = *(short *)(param_2 + 10);
    sVar2 = *(short *)(param_2 + 0xe);
    *param_1 = sVar1 + -4;
    param_1[1] = sVar2 + -0x14;
    sVar1 = sVar1 + 4;
  }
  else {
    if (param_3 < 2) {
      if (param_3 == 0) {
        sVar1 = *(short *)(param_2 + 10);
        sVar2 = *(short *)(param_2 + 0xe);
        *param_1 = sVar1 + -4;
        param_1[1] = sVar2 + -6;
        param_1[2] = sVar1 + 4;
        param_1[3] = sVar2 + 0x12;
        return param_1;
      }
LAB_0802ac1a:
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      return param_1;
    }
    if (param_3 == 2) {
      sVar1 = *(short *)(param_2 + 10);
      sVar2 = *(short *)(param_2 + 0xe);
      *param_1 = sVar1 + -0x14;
      param_1[1] = sVar2 + -0xe;
      sVar1 = sVar1 + 4;
    }
    else {
      if (param_3 != 3) goto LAB_0802ac1a;
      sVar1 = *(short *)(param_2 + 10);
      sVar2 = *(short *)(param_2 + 0xe);
      *param_1 = sVar1 + -4;
      param_1[1] = sVar2 + -0xe;
      sVar1 = sVar1 + 0x14;
    }
  }
  param_1[2] = sVar1;
  param_1[3] = sVar2 + 2;
  return param_1;
}

/* 0x0802B3B4 (184B) | code_entities_vfunc_0C_B3B4 (orig: func_0802B3B4) | origin: wip | domain: code_entities | HIGH / vtable_algebra */
void code_entities_vfunc_0C_B3B4(int *self) {
  u16 uVar1;
  char cVar2;
  int *piVar3;
  u16 *puVar4;
  int iVar5;
  u8 *puVar6;
  u32 uVar7;
  code_entities_080320DC_6864_vfunc_0C();
  iVar5 = *self;
  puVar4 = (u16 *)(iVar5 + 0x7c);
  uVar1 = *puVar4;
  if ((uVar1 != 0x0000FFFF) && ((char)self[0x11] == '\0')) {
    *puVar4 = (u16)0x0000FFFF | uVar1;
  }
  if (*(char *)(iVar5 + 0x88) == '\x01') {
    piVar3 = (int *)((int)self + 0xcb);
    if (*(char *)piVar3 == '\0') {
      iVar5 = code_0803EE94_Sub_0805E8F0(self + 0x2d);
      if (-1 < iVar5 * 0x40000000) goto LAB_0802b414;
      piVar3 = self + 0x32;
      cVar2 = '\x01';
    }
    else {
      cVar2 = '\0';
    }
    *(char *)piVar3 = cVar2;
  }
LAB_0802b414:
  uVar7 = 0;
  piVar3 = self + 0x3f;
  puVar6 = (u8 *)((int)self + 0x00000113);
  self = self + 0x34;
  do {
    if ((char)*self != '\0') {
      if (*(char *)((int)piVar3 + 0x17) == '\0') {
        iVar5 = code_0803EE94_Sub_0805E8F0(piVar3);
        if (iVar5 * 0x40000000 < 0) {
          *(u8 *)(piVar3 + 5) = 1;
        }
      }
      else {
        *puVar6 = 0;
        iVar5 = 2;
      }
      if (iVar5 * 0x20000000 < 0) {
        *(char *)self = '\0';
      }
    }
    piVar3 = piVar3 + 0x12;
    puVar6 = puVar6 + 0x48;
    self = self + 0x12;
    uVar7 = uVar7 + 1;
  } while (uVar7 < 6);
}

/* 0x0802B46C (176B) | code_entities_Sub_0802B46C (orig: func_0802B46C) | origin: wip | domain: code_entities | HIGH / stanhash_map_tu */
void code_entities_Sub_0802B46C(int *param_1) {
  u8 bVar1;
  u16 uVar2;
  u16 uVar3;
  int iVar4;
  int *piVar5;
  u32 uVar6;
  u32 uVar7;
  u32 uStack_1c;
  iVar4 = *param_1;
  uVar7 = (u32)*(u8 *)(param_1 + 0xa0);
  uVar2 = *(u16 *)(iVar4 + 10);
  uVar3 = *(u16 *)(iVar4 + 0xe);
  bVar1 = *(u8 *)(iVar4 + 0x20);
  uVar6 = uVar7 & 1;
  piVar5 = param_1 + uVar7 * 0x12 + 0x34;
  *(u8 *)piVar5 = 1;
  uStack_1c = ((u16)(uVar2));
  piVar5[0x11] = uStack_1c;
  iVar4 = 0x00000652;
  if (bVar1 == 1) {
LAB_0802b4de:
    iVar4 = uVar6 + iVar4;
  }
  else {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        iVar4 = uVar6 + 0x00000654;
        goto LAB_0802b4e0;
      }
      iVar4 = 0x00000656;
      if (bVar1 == 3) goto LAB_0802b4de;
    }
    iVar4 = uVar6 + 0x650;
  }
LAB_0802b4e0:
  code_0803EE94_Sub_0805E860(piVar5 + 0xb,iVar4);
  *(u8 *)(piVar5 + 0x10) = 1;
  *(u8 *)((int)piVar5 + 0x42) = 0;
  *(u8 *)((int)piVar5 + 0x43) = 1;
  uVar6 = 0;
  if (uVar7 + 1 < 6) {
    uVar6 = uVar7 + 1;
  }
  *(char *)(param_1 + 0xa0) = (char)uVar6;
}

/* 0x0802B8EC (28B) | code_entities_Wrap_Ctor (orig: func_0802B8EC) | origin: pure | domain: code_entities | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 CppRuntime_builtin_new();
extern u32 code_entities_Ctor_4974();
u32 code_entities_Wrap_Ctor(u32 arg0,u32 arg1) {
  u32 val;
  val = CppRuntime_builtin_new(200);
  return code_entities_Ctor_4974(val,arg0,arg1);
}

/* 0x0802B908 (60B) | code_entities_Ctor_B908 (orig: func_0802B908) | origin: pure | domain: code_entities | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 farmer_Sub_0800E924();
extern u32 AActorEntity_Ctor();
u32 code_entities_Ctor_B908(int arg0,u32 arg1,int arg2) {
  u8 auStack_14 [8];
  farmer_Sub_0800E924(auStack_14,arg2 + 0x00001BD8);
  AActorEntity_Ctor(arg0,arg1,auStack_14,2,0x192);
  *(u32 *)(arg0 + 0x14) = 0x080E676C;
  return arg0;
}

/* 0x0802B944 (124B) | code_entities_Ctor_B944 (orig: func_0802B944) | origin: wip | domain: code_entities | HIGH / vtable_algebra */
u32 code_entities_Ctor_B944(int self,u32 param_2) {
  u16 uVar1;
  u8 auStack_28 [6];
  u8 uStack_22;
  u16 uStack_20;
  u16 uStack_1e;
  u16 uStack_1c;
  uVar1 = (u16)0xFFFFFC00;
  uStack_20 = uVar1 & uStack_20 & 0x3ff | 0x234;
  uStack_1e = uVar1 & uStack_1e & 0x3ff;
  uStack_1c = uVar1 & uStack_1c;
  LibC_memcpy(auStack_28,&uStack_20,6);
  uStack_22 = 0;
  AActorEntity_Ctor(self,param_2,auStack_28,2,0);
  *(u32 *)(self + 0x14) = 0x080E671C;
  return self;
}

/* 0x0802B9C0 (80B) | code_entities_Ctor_B9C0 (orig: func_0802B9C0) | origin: wip | domain: code_entities | HIGH / vtable_algebra */
u32 code_entities_Ctor_B9C0(int self) {
  code_entities_Ctor_B944();
  *(u32 *)(self + 0x14) = 0x080E65F4;
  *(u8 *)(self + 0x34) = 0;
  *(u8 *)(self + 0x35) = 0;
  *(u8 *)(self + 0x38) = 0;
  *(u8 *)(self + 0x39) = 0;
  *(u32 *)(self + 0x3c) = 0;
  *(u32 *)(self + 0x40) = 0;
  *(u32 *)(self + 0x44) = 0;
  *(u32 *)(self + 0x48) = 0;
  *(u32 *)(self + 0x4c) = 0;
  *(u32 *)(self + 0x50) = 0;
  *(u32 *)(self + 0x54) = 0;
  *(s8 *)(self + 0x56) = 0;
  *(u32 *)(self + 0x58) = 0;
  *(u8 *)(self + 0x59) = 0;
  AEntity_vfunc_10(self);
  return self;
}

/* 0x0802BE68 (148B) | code_entities_vfunc_48_BE68 (orig: func_0802BE68) | origin: wip | domain: code_entities | HIGH / vtable_algebra */
void code_entities_vfunc_48_BE68(void) {
}

/* 0x0802BEFC (48B) | code_entities_vfunc_4C_BEFC (orig: func_0802BEFC) | origin: pure | domain: code_entities | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_entities_Sub_0802BC48();
extern u32 AActorEntity_SetAnim();
void code_entities_vfunc_4C_BEFC(int arg0) {
  u16 val;
  *(u8 *)(arg0 + 0x34) = 2;
  *(u8 *)(arg0 + 0x58) = 1;
  val = code_entities_Sub_0802BC48(arg0);
  AActorEntity_SetAnim(arg0,val);
  *(u8 *)(arg0 + 0x54) = 1;
}

/* 0x0802BFA0 (68B) | code_entities_vfunc_0C_BFA0 (orig: func_0802BFA0) | origin: pure | domain: code_entities | HIGH / vtable_algebra */
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
extern u32 code_entities_080320DC_6864_vfunc_0C();
extern u32 code_0803EE94_Sub_0805E8F0();
void code_entities_vfunc_0C_BFA0(int *arg0) {
  u8 *p38;
  int cond;
  u8 *ptr;
  char val;
  code_entities_080320DC_6864_vfunc_0C();
  p38 = *(u8 **)arg0 + 0x38;
  cond = (*p38 == 1);
  if (cond) {
    ptr = (u8 *)arg0 + 0xcb;
    if (*ptr == 0) {
      if ((int)(code_0803EE94_Sub_0805E8F0(arg0 + 0x2d) << 30) >= 0)
        return;
      ptr = (u8 *)arg0 + 0xc8;
      val = 1;
    } else {
      val = 0;
    }
    *ptr = val;
  }
}

/* 0x0802BFE4 (556B) | code_entities_vfunc_10_BFE4 (orig: func_0802BFE4) | origin: wip | domain: code_entities | HIGH / vtable_algebra */
void code_entities_vfunc_10_BFE4(u32 *self,u32 *param_2) {
  short sVar1;
  u32 uVar2;
  int *piVar3;
  u32 uVar4;
  int *piVar5;
  u32 *puVar6;
  int iVar7;
  u32 *puVar8;
  int iVar9;
  u8 auStack_78 [8];
  u8 auStack_70 [8];
  u32 auStack_68 [4];
  u32 uStack_58;
  u32 uStack_54;
  u16 *apuStack_50 [2];
  u32 uStack_48;
  u32 uStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  u32 *puStack_2c;
  char *pcStack_28;
  int iStack_24;
  puVar6 = (u32 *)*self;
  uStack_48 = (u32)*(u16 *)(puVar6 + 1);
  piVar5 = (int *)*puVar6;
  uStack_44 = (u32)*(u8 *)(self + 0x11);
  iStack_24 = puVar6[2];
  iStack_40 = puVar6[3];
  uStack_58 = *param_2;
  uStack_54 = param_2[2];
  iStack_3c = code_entities_080320DC_Sub_08032900(uStack_48,iStack_24 >> 0x10,iStack_40 >> 0x10);
  *(u8 *)((int)self + 0x8b) = (u8)iStack_3c;
  if (*(char *)(puVar6 + 0xe) == '\x01') {
    iStack_38 = (iStack_24 + puVar6[0xf] >> 0x10) - (int)*(short *)(param_2 + 3);
    iVar7 = iStack_40 + puVar6[0x10];
    iVar9 = iVar7 >> 0x10;
    sVar1 = *(short *)((int)param_2 + 0xe);
    iStack_34 = 0x8000 - iVar9;
    if (*(char *)((int)puVar6 + 0x39) == '\x01') {
      uVar4 = func_080D3910(piVar5,*(u32 *)(*piVar5 + 0x58));
      hardware_Sub_0803AE58(uVar4,param_2[2],iStack_38,iVar9 - sVar1,0);
    }
    iStack_30 = (iVar7 - puVar6[0x13] >> 0x10) - (int)*(short *)((int)param_2 + 0xe);
    if ((int)uStack_48 < 9) {
      uVar2 = 1;
      if (iStack_3c != 1) {
        uVar2 = 2;
      }
    }
    else {
      uVar2 = 1;
    }
    puVar8 = self + 0x23;
    puStack_2c = &uStack_58;
    func_080D3918(auStack_78,(int *)self[0x2d],
                    *(u16 *)(self[0x2e] + (u32)*(u16 *)(self + 0x30) * 4),
                    *(u32 *)(*(int *)self[0x2d] + 0x10));
    if ((int)(-self[0x25] | self[0x25]) < 0) {
      iVar9 = func_080D391C(puStack_2c[1],iStack_38,iStack_30,
                              uVar2 << 2 | uVar2 | uVar2 << 4 | uVar2 << 6,iStack_34,auStack_78,
                              *puVar8,*(u16 *)(self + 0x26),self + 0x27);
    }
    else {
      iVar9 = 0;
    }
    if ((iVar9 != 0) && (pcStack_28 = (char *)(self + 0x32), *pcStack_28 != '\0')) {
      hardware_Sub_080A480C(puVar8,*puStack_2c,auStack_70);
      if (*(char *)((int)self + 0xc9) == '\0') {
        if (*(char *)((int)self + 0xca) == '\0') {
          code_809E804_Sub_080A4944(puVar8,auStack_68,1);
          *(char *)((int)self + 0xca) = '\x01';
        }
      }
      else {
        code_809E804_Sub_080A4944(puVar8,auStack_68,1);
      }
      *pcStack_28 = '\0';
    }
  }
  code_entities_080320DC_6864_vfunc_10(self,param_2);
  if (((uStack_44 != 0) && (*(char *)(puVar6 + 0xe) != '\x01')) &&
     (*(u16 *)(self + 0x33) != 0x0000FFFF)) {
    piVar3 = (int *)func_080D3910(piVar5,*(u32 *)(*piVar5 + 100));
    iVar9 = *piVar3;
    func_080D3918(apuStack_50,piVar3,*(u16 *)(self + 0x33),*(u32 *)(iVar9 + 0xc));
    func_080D3918(auStack_78,piVar3,*apuStack_50[0],*(u32 *)(iVar9 + 0x10));
    uVar4 = func_080D3914(piVar5,2,*(u32 *)(*piVar5 + 0x48));
    func_080D391C(piVar5,auStack_68[0],uVar4,1);
  }
}

/* 0x0802C210 (24B) | code_entities_Wrap_Ctor_C210 (orig: func_0802C210) | origin: pure | domain: code_entities | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 CppRuntime_builtin_new();
extern u32 code_entities_Ctor_B9C0();
u32 code_entities_Wrap_Ctor_C210(u32 arg0) {
  u32 val;
  val = CppRuntime_builtin_new(0x5c);
  return code_entities_Ctor_B9C0(val,arg0);
}

/* 0x0802C228 (60B) | code_entities_Sub_0802C228 (orig: func_0802C228) | origin: wip | domain: code_entities | MEDIUM / tu_interp */
void code_entities_Sub_0802C228(u32 *param_1,u32 param_2) {
  u32 uVar1;
  uVar1 = func_080D3910(*(int **)*param_1,*(u32 *)(**(int **)*param_1 + 100));
  code_0803EE94_Sub_0805E850(param_1 + 0x2d,uVar1,param_2);
  *(u8 *)(param_1 + 0x32) = 1;
  *(u8 *)((int)param_1 + 0xca) = 0;
  *(u8 *)((int)param_1 + 0xcb) = 1;
  *(short *)(param_1 + 0x33) = (short)param_2;
}

/* 0x0802C264 (56B) | code_entities_Sub_0802C264 (orig: func_0802C264) | origin: wip | domain: code_entities | MEDIUM / tu_interp */
void code_entities_Sub_0802C264(u32 *param_1,u32 param_2) {
  u32 uVar1;
  uVar1 = func_080D3910(*(int **)*param_1,*(u32 *)(**(int **)*param_1 + 0x68));
  code_0803EE94_Sub_0805E850(param_1 + 0x2d,uVar1,param_2);
  *(u8 *)(param_1 + 0x32) = 1;
  *(u8 *)((int)param_1 + 0xca) = 0;
  *(u8 *)((int)param_1 + 0xcb) = 1;
}

/* 0x0802C29C (56B) | code_entities_Sub_0802C29C (orig: func_0802C29C) | origin: wip | domain: code_entities | MEDIUM / tu_interp */
void code_entities_Sub_0802C29C(u32 *param_1,u32 param_2) {
  u32 uVar1;
  uVar1 = func_080D3910(*(int **)*param_1,*(u32 *)(**(int **)*param_1 + 100));
  code_0803EE94_Sub_0805E850(param_1 + 0x2d,uVar1,param_2);
  *(u8 *)(param_1 + 0x32) = 1;
  *(u8 *)((int)param_1 + 0xca) = 0;
  *(u8 *)((int)param_1 + 0xcb) = 1;
}

/* 0x0802C2DC (4B) | code_entities_NoOp (orig: func_0802C2DC) | origin: pure | domain: code_entities | HIGH / stanhash_map_tu */
void code_entities_NoOp(void) {
}

/* 0x0802C860 (168B) | code_entities_Sub_0802C860 (orig: func_0802C860) | origin: wip | domain: code_entities | HIGH / stanhash_map_tu */
void code_entities_Sub_0802C860(u32 *param_1) {
  char cVar1;
  int *piVar2;
  u32 uVar3;
  u32 *puVar4;
  int iVar5;
  u32 *puVar6;
  u8 auStack_14 [4];
  *(u8 *)(param_1 + 0xf) = 10;
  *(u8 *)((int)param_1 + 0x3d) = 0x14;
  code_entities_Sub_0802A510(param_1);
  piVar2 = (int *)func_080D3910((int *)*param_1,*(u32 *)(*(int *)*param_1 + 0x14c));
  puVar4 = (u32 *)*piVar2;
  puVar6 = (u32 *)piVar2[1];
  do {
    if (puVar4 == puVar6) {
      uVar3 = puVar6[-1];
LAB_0802c8a8:
      hardware_Wrap_m4aMPlayStart(uVar3,0xbc);
      iVar5 = param_1[0xe];
      uVar3 = ToolStack_GetTool(iVar5 + 0x5c);
      auStack_14[0] = farmer_Sub_0800E550(iVar5,uVar3);
      iVar5 = func_0800DB30(auStack_14);
      if (iVar5 == 0x4d) {
        iVar5 = param_1[5];
        uVar3 = code_entities_Sub_08025B10(param_1);
        func_080D3918(param_1,0xfffffffe,uVar3,*(u32 *)(iVar5 + 100));
      }
      else {
        iVar5 = param_1[5];
        uVar3 = code_entities_Sub_08025B10(param_1);
        func_080D3918(param_1,0,uVar3,*(u32 *)(iVar5 + 100));
      }
    }
    cVar1 = hardware_GetField_0x00_8CD0(*puVar4);
    if (cVar1 == '\0') {
      uVar3 = *puVar4;
      goto LAB_0802c8a8;
    }
    puVar4 = puVar4 + 1;
  } while( true );
}

/* 0x0802C908 (124B) | code_entities_Sub_0802C908 (orig: func_0802C908) | origin: pure | domain: code_entities | HIGH / stanhash_map_tu */
void code_entities_Sub_0802C908(u32 *param_1) {
  u8 bVar1;
  char cVar2;
  int *piVar3;
  u32 uVar4;
  char *pcVar5;
  u8 *pbVar6;
  u32 *puVar7;
  u32 *puVar8;
  if ((*(u8 *)((int)param_1 + 0x41) != 0) &&
     (pbVar6 = (u8 *)(param_1 + 0x10),
     (int)(u32)*pbVar6 < (int)(*(u8 *)((int)param_1 + 0x41) - 1))) {
    pcVar5 = (char *)((int)param_1 + 0x42);
    cVar2 = *pcVar5;
    *pcVar5 = cVar2 + '\x01';
    if ((char)(cVar2 + '\x01') == '\x14') {
      *pcVar5 = '\0';
      bVar1 = *pbVar6;
      *pbVar6 = bVar1 + 1;
      if ((u8)(bVar1 + 1) == 5) {
        piVar3 = (int *)func_080D3910((int *)*param_1,*(u32 *)(*(int *)*param_1 + 0x14c));
        puVar7 = (u32 *)*piVar3;
        puVar8 = (u32 *)piVar3[1];
        for (; puVar7 != puVar8; puVar7 = puVar7 + 1) {
          cVar2 = hardware_GetField_0x00_8CD0(*puVar7);
          if (cVar2 == '\0') {
            uVar4 = *puVar7;
            goto LAB_0802c978;
          }
        }
        uVar4 = puVar8[-1];
LAB_0802c978:
        hardware_Wrap_m4aMPlayStart(uVar4,0xb8);
      }
    }
  }
}

/* 0x0802D844 (164B) | code_entities_Sub_0802D844 (orig: func_0802D844) | origin: wip | domain: code_entities | HIGH / stanhash_map_tu */
void code_entities_Sub_0802D844(u32 param_1, u32 param_2, u32 param_3, u32 param_4) {
    register u32 r0 = param_1;
    register u32 r1 = param_2;
    register u32 r2 = param_3;
    register u32 r3 = param_4;
    register u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0;
    r4 = r0 + 0;
    r5 = 0;
    if (r1 == 0) goto loc_0802D850;
    r5 = *(u16 *)(r1 + 4);
loc_0802D850:
    r0 = r4 + 0;
    r0 += 0xc3;
    r0 = *(u8 *)(r0);
    if (r0 != 0) goto loc_0802D862;
    r0 = 0x000003F3;
    r0 &= r5;
    if (r0 == 0) goto loc_0802D8E2;
loc_0802D862:
    r0 = r4 + 0;
    r0 = entity_actor_Sub_080323C8(r0, r1, r2, r3);
    r1 = r4 + 0;
    r1 += 0x3c;
    r0 = 0x18;
    *(u16 *)(r1) = r0;
    r0 = 0x20;
    r0 &= r5;
    if (r0 == 0) goto loc_0802D890;
    r0 = r4 + 0;
    r0 += 0x20;
    r0 = *(u8 *)(r0);
    if (r0 == 2) goto loc_0802D8E2;
    r0 = r4 + 0;
    r1 = 2;
    r0 = AActorEntity_SetAnimFacing(r0, r1, r2, r3);
    goto loc_0802D8E2;
    r3 = r6 << 0xf;
    r0 = r0;
loc_0802D890:
    r0 = 0x10;
    r0 &= r5;
    if (r0 == 0) goto loc_0802D8AC;
    r0 = r4 + 0;
    r0 += 0x20;
    r0 = *(u8 *)(r0);
    if (r0 == 3) goto loc_0802D8E2;
    r0 = r4 + 0;
    r1 = 3;
    r0 = AActorEntity_SetAnimFacing(r0, r1, r2, r3);
    goto loc_0802D8E2;
loc_0802D8AC:
    r0 = 0x40;
    r0 &= r5;
    if (r0 == 0) goto loc_0802D8C8;
    r0 = r4 + 0;
    r0 += 0x20;
    r0 = *(u8 *)(r0);
    if (r0 == 1) goto loc_0802D8E2;
    r0 = r4 + 0;
    r1 = 1;
    r0 = AActorEntity_SetAnimFacing(r0, r1, r2, r3);
    goto loc_0802D8E2;
loc_0802D8C8:
    r0 = 0x80;
    r5 &= r0;
    if (r5 == 0) goto loc_0802D8E2;
    r0 = r4 + 0;
    r0 += 0x20;
    r0 = *(u16 *)(r0);
    if (r0 == 0) goto loc_0802D8E2;
    r0 = r4 + 0;
    r1 = 0;
    r0 = AActorEntity_SetAnimFacing(r0, r1, r2, r3);
loc_0802D8E2:
    return r0;
}

/* 0x0802D8E8 (196B) | code_entities_Sub_0802D8E8 (orig: func_0802D8E8) | origin: wip | domain: code_entities | HIGH / stanhash_map_tu */
void code_entities_Sub_0802D8E8(u32 *param_1,u16 *param_2) {
  u8 bVar1;
  u32 uVar2;
  u32 uVar3;
  u32 uStack_18;
  u32 uStack_14;
  u32 uStack_10;
  uVar2 = 0;
  uStack_10 = 0;
  uVar3 = 0;
  if (param_2 != (u16 *)0x0) {
    uVar2 = (u32)*param_2;
    uStack_10 = (u32)param_2[2];
    uVar3 = (u32)param_2[4];
  }
  if (*(char *)((int)param_1 + 0xc3) != '\0') {
    *(u8 *)(param_1 + 0xf) = 0;
  }
  uVar2 = (uVar2 & 3) >> 1 | (uVar2 & 0x3ff) >> 9;
  bVar1 = (u8)uVar2;
  if (uVar2 != 0) {
    if ((uVar3 & 0x7f) >> 6 != 0 || (uVar3 & 0x3f) >> 5 != 0) {
      code_entities_Sub_08025A40(param_1,1);
    }
    uStack_14 = (uStack_10 & 0x3ff) >> 9 |
                (uStack_10 & 3) >> 1 | (uVar3 & 0xff) >> 7 | (uVar3 & 0x1f) >> 4;
    if (uStack_14 != 0) {
      code_entities_Sub_08025A40(param_1,0);
    }
    bVar1 = (u8)uStack_10 & 1;
    if ((uStack_10 & 1) != 0) {
      uStack_18 = 0x000003CE;
      func_080D3918((int *)*param_1,&uStack_18,0,*(u32 *)(*(int *)*param_1 + 0x140));
      *(u8 *)(param_1 + 0xf) = 0;
    }
    if ((uStack_10 & 0x100) == 0) {
    }
  }
  *(u8 *)(param_1 + 0xf) = bVar1;
}

/* 0x08031F30 (56B) | code_entities_Sub_08031F30 (orig: func_08031F30) | origin: wip | domain: code_entities | MEDIUM / tu_interp */
void code_entities_Sub_08031F30(u32 *param_1,u32 param_2) {
  u32 uVar1;
  uVar1 = func_080D3910(*(int **)*param_1,*(u32 *)(**(int **)*param_1 + 0x68));
  code_0803EE94_Sub_0805E850(param_1 + 0x2d,uVar1,param_2);
  *(u8 *)(param_1 + 0x32) = 1;
  *(u8 *)((int)param_1 + 0xca) = 0;
  *(u8 *)((int)param_1 + 0xcb) = 1;
}

/* 0x08031F68 (56B) | code_entities_Sub_08031F68 (orig: func_08031F68) | origin: wip | domain: code_entities | MEDIUM / tu_interp */
void code_entities_Sub_08031F68(u32 *param_1,u32 param_2) {
  u32 uVar1;
  uVar1 = func_080D3910(*(int **)*param_1,*(u32 *)(**(int **)*param_1 + 100));
  code_0803EE94_Sub_0805E850(param_1 + 0x2d,uVar1,param_2);
  *(u8 *)(param_1 + 0x32) = 1;
  *(u8 *)((int)param_1 + 0xca) = 0;
  *(u8 *)((int)param_1 + 0xcb) = 1;
}

/* 0x08031FA0 (44B) | code_entities_Sub_08031FA0 (orig: func_08031FA0) | origin: wip | domain: code_entities | MEDIUM / tu_interp */
u32 code_entities_Sub_08031FA0(u32 *param_1) {
  u32 uVar1;
  if (*(u8 *)((int)param_1 + 0xb2) - 0x2b < 0x1b) {
    uVar1 = func_080D3914((int *)*param_1,(u32)*(u8 *)((int)param_1 + 0xb2),
                            *(u32 *)(*(int *)*param_1 + 0x40));
  }
  else {
    uVar1 = 0;
  }
  return (uVar1);
}

/* 0x08031FCC (16B) | code_entities_Sub_08031FCC (orig: func_08031FCC) | origin: pure | domain: code_entities | MEDIUM / tu_interp */
#define true 1
#define false 0
#define NULL ((void *)0)
u32 code_entities_Sub_08031FCC(u32 arg0,int arg1) {
  return ((u32)(arg1 - 0x2bU < 0x1b));
}

/* 0x08031FDC (56B) | code_entities_Sub_08031FDC (orig: func_08031FDC) | origin: wip | domain: code_entities | MEDIUM / tu_interp */
void code_entities_Sub_08031FDC(u32 param_1,int *param_2,int param_3) {
  int iVar1;
  if (param_3 == 1) {
    iVar1 = *param_2;
    *param_2 = -param_2[1];
    param_2[1] = -iVar1;
  }
  else if (param_3 < 2) {
    if (param_3 == 0) {
      iVar1 = *param_2;
      *param_2 = param_2[1];
      param_2[1] = iVar1;
    }
  }
  else if (param_3 == 2) {
    *param_2 = -*param_2;
  }
}

/* 0x0803205C (24B) | code_entities_vfunc_40_205C (orig: func_0803205C) | origin: pure | domain: code_entities | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
u32 code_entities_vfunc_40_205C(int arg0) {
  u32 val;
  val = 0;
  if ((*(char *)(arg0 + 0x3c) == '\a') || (*(char *)(arg0 + 0x3c) == '-')) {
    val = 1;
  }
  return val;
}

/* 0x08032090 (76B) | code_entities_Sub_08032090 (orig: func_08032090) | origin: wip | domain: code_entities | HIGH / stanhash_map_tu */
u32 code_entities_Sub_08032090(int *param_1,u32 param_2) {
  u32 uVar1;
  u32 uVar2;
  int iVar3;
  int iStack_18;
  u32 uStack_14;
  func_080D3918(&iStack_18,param_1,param_2,*(u32 *)(*param_1 + 0xc));
  iVar3 = 0;
  uVar2 = 0;
  uVar1 = 0;
  if (iStack_18 != 0) {
    uVar1 = uStack_14 & 0xffff;
  }
  if (uVar1 != 0) {
    do {
      iVar3 = iVar3 + (u32)*(u16 *)(iStack_18 + 2);
      iStack_18 = iStack_18 + 4;
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  return iVar3;
}

/* 0x08032A58 (12B) | code_entities_Sub_08032A58 (orig: func_08032A58) | origin: pure | domain: code_entities | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_entities_Sub_0805E894();
u32 code_entities_Sub_08032A58(int arg0) {
  return code_entities_Sub_0805E894(arg0 + 0x30);
}

/* 0x080370D8 (64B) | code_entities_Sub_080370D8 (orig: func_080370D8) | origin: wip | domain: code_entities | MEDIUM / graph_algebra */
u32 code_entities_Sub_080370D8(int param_1) {
  char cVar1;
  int iVar2;
  u32 uVar3;
  u32 uVar4;
    uVar4 = 1;
  if ((s8)iVar2 == 0) {
  iVar2 = *(int *)(param_1 + 0x10);
  }
  else {
    uVar4 = 0;
    uVar3 = 0;
    if (*(u16 *)(iVar2 + 0x3e) != 0) {
      uVar3 = (u32)(-(int)*(short *)(iVar2 + 0x40) | (int)*(short *)(iVar2 + 0x40)) >> 0x1f;
    }
    if ((uVar3 == 0) || (cVar1 = code_entities_Sub_0805E894(iVar2 + 0x30), cVar1 != '\0')) {
      uVar4 = 1;
    }
  }
  return uVar4;
}

/* 0x080380EC (28B) | code_entities_Sub_080380EC (orig: func_080380EC) | origin: pure | domain: code_entities | MEDIUM / graph_algebra */
void code_entities_Sub_080380EC(u8 *a, u8 b) { a[0x24] = b; *(u32 *)(a + 0x1c) = 0xa8 << 13; *(u32 *)(a + 0x20) = 0xc0 << 10; a[0x25] = 1; }

/* 0x08038108 (8B) | code_entities_Sub_08038108 (orig: func_08038108) | origin: pure | domain: code_entities | MEDIUM / graph_algebra */
u8 code_entities_Sub_08038108(u8 *arg0) {
    return *(u8 *)(arg0 + 37);
}

/* 0x08038374 (36B) | code_entities_Sub_08038374 (orig: func_08038374) | origin: pure | domain: code_entities | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_entities_Sub_08038398();
void code_entities_Sub_08038374(int arg0,u32 arg1,u32 arg2,u32 arg3,
             u32 arg4) {
  *(u8 *)(arg0 + 0x26) = 1;
  *(u32 *)(arg0 + 8) = arg1;
  *(u32 *)(arg0 + 0xc) = arg2;
  code_entities_Sub_08038398(arg0,arg3,arg4);
}

/* 0x080384FC (64B) | code_entities_Sub_080384FC (orig: func_080384FC) | origin: wip | domain: code_entities | MEDIUM / graph_algebra */
void code_entities_Sub_080384FC(int param_1) {
  int iVar1;
  if (*(short *)(param_1 + 0x28) != (u32)0x31) {
    iVar1 = *(int *)(param_1 + 0x10);
    if (iVar1 != 0) {
      code_0803EE94_Sub_0805E860(iVar1 + 0x30,0x31);
      *(u32 *)(iVar1 + 0x44) = 1;
      *(u8 *)(iVar1 + 0x46) = 0;
      *(u8 *)(iVar1 + 0x47) = 1;
    }
    *(u16 *)(param_1 + 0x28) = 0x31;
  }
  *(u8 *)(param_1 + 0x26) = 0;
}

/* 0x0803A814 (12B) | code_entities_Sub_0803A814 (orig: func_0803A814) | origin: pure | domain: code_entities | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_entities_Sub_0805E894();
u32 code_entities_Sub_0803A814(int arg0) {
  return code_entities_Sub_0805E894(arg0 + 0x30);
}

/* 0x0805E894 (92B) | code_entities_Sub_0805E894 (orig: func_0805E894) | origin: wip | domain: code_entities | MEDIUM / graph_algebra */
u32 code_entities_Sub_0805E894(int param_1) {
  u32 uVar1;
  u32 uVar2;
  u32 uVar3;
  int iVar4;
  int iVar5;
  u32 uVar6;
  iVar5 = (int)*(short *)(param_1 + 0x10);
  if ((iVar5 != 0) && (*(u16 *)(param_1 + 0xe) != 0)) {
    iVar4 = iVar5;
    if (iVar5 < 0) {
      iVar4 = -iVar5;
    }
    iVar4 = (u32)*(u16 *)(param_1 + 0xe) - iVar4;
    if (iVar4 < 1) {
      uVar3 = (u32)*(u16 *)(param_1 + 0xc);
      uVar6 = 0;
      if (*(int *)(param_1 + 4) != 0) {
        uVar6 = (u32)*(u16 *)(param_1 + 8);
      }
      do {
        if (iVar5 < 1) {
          if (uVar3 == 0) goto LAB_0805e8cc;
          uVar3 = uVar3 - 1;
        }
        else {
          uVar3 = uVar3 + 1;
          if (uVar6 <= uVar3) {
LAB_0805e8cc:
            uVar1 = 1;
            goto LAB_0805e8ea;
          }
        }
        uVar2 = (u32)*(u16 *)(*(int *)(param_1 + 4) + uVar3 * 4 + 2);
      } while ((uVar2 != 0) && (iVar4 = iVar4 + uVar2 * 0x100, iVar4 < 1));
    }
  }
  uVar1 = 0;
LAB_0805e8ea:
  return uVar1;
}

/* 0x0809C32C (96B) | code_entities_Sub_0809C32C (orig: func_0809C32C) | origin: wip | domain: code_entities | MEDIUM / graph_algebra */
void * code_entities_Sub_0809C32C(u8 *param_1) {
  u32 uVar1;
  
  uVar1 = 0;
  if (((((int)(-(u32)param_1[1] | -(u32)param_1[7]) < 0) &&
       ((int)(-(u32)*param_1 | -(u32)param_1[6]) < 0)) &&
      ((int)(-(u32)param_1[2] | -(u32)param_1[8]) < 0)) &&
     (((int)(-(u32)param_1[3] | -(u32)param_1[9]) < 0 &&
      ((int)(-(u32)param_1[4] | -(u32)param_1[10]) < 0)))) {
    uVar1 = (-(u32)param_1[5] | -(u32)param_1[0xb]) >> 0x1f;
  }
  return (void *)uVar1;
}

/* 0x0809CD98 (52B) | code_entities_Sub_0809CD98 (orig: func_0809CD98) | origin: wip | domain: code_entities | MEDIUM / graph_algebra */
u32 code_entities_Sub_0809CD98(int param_1,int param_2,u32 param_3) {
  u32 *puVar1;
  u32 uVar2;
  puVar1 = (u32 *)(param_1 + param_2 * 8);
  uVar2 = *puVar1;
  if (uVar2 <= 0x3B9AC9FF) {
    *puVar1 = uVar2 + 1;
  }
  puVar1 = (u32 *)(param_1 + 4 + param_2 * 8);
  uVar2 = *puVar1;
  if (uVar2 < param_3) {
    *puVar1 = param_3;
  }
  return ((u32)(uVar2 < param_3));
}

/* 0x0809DFAC (128B) | code_entities_Sub_0809DFAC (orig: func_0809DFAC) | origin: wip | domain: code_entities | MEDIUM / graph_algebra */
u32 code_entities_Sub_0809DFAC(int param_1) {
  u8 bVar1;
  u32 uVar2;
  u32 uVar3;
  bVar1 = *(u8 *)(param_1 + 0x00000625);
  uVar2 = -((int)((u32)bVar1 << 0x1a) >> 0x1f);
  if ((int)((u32)bVar1 * 0x2000000) < 0) {
    uVar2 = uVar2 + 1;
  }
  if ((char)bVar1 < '\0') {
    uVar2 = uVar2 + 1;
  }
  uVar3 = (u32)*(u8 *)(param_1 + 0x00000626);
  if ((*(u8 *)(param_1 + 0x00000626) & 1) != 0) {
    uVar2 = uVar2 + 1;
  }
  if ((int)(uVar3 * 0x40000000) < 0) {
    uVar2 = uVar2 + 1;
  }
  if ((int)(uVar3 * 0x20000000) < 0) {
    uVar2 = uVar2 + 1;
  }
  if ((int)(uVar3 * 0x10000000) < 0) {
    uVar2 = uVar2 + 1;
  }
  if ((int)(uVar3 * 0x8000000) < 0) {
    uVar2 = uVar2 + 1;
  }
  if ((int)(uVar3 * 0x4000000) < 0) {
    uVar2 = uVar2 + 1 & 0xff;
  }
  return uVar2;
}

/* 0x0809E02C (128B) | code_entities_Sub_0809E02C (orig: func_0809E02C) | origin: wip | domain: code_entities | MEDIUM / graph_algebra */
u32 code_entities_Sub_0809E02C(int param_1) {
  u32 uVar1;
  u32 uVar2;
  uVar2 = (u32)*(u8 *)(param_1 + 0x00000624);
  uVar1 = -((int)(uVar2 << 0x1e) >> 0x1f);
  if ((int)(uVar2 * 0x20000000) < 0) {
    uVar1 = uVar1 + 1;
  }
  if ((int)(uVar2 * 0x10000000) < 0) {
    uVar1 = uVar1 + 1;
  }
  if ((int)(uVar2 * 0x8000000) < 0) {
    uVar1 = uVar1 + 1;
  }
  if ((int)(uVar2 * 0x4000000) < 0) {
    uVar1 = uVar1 + 1;
  }
  if ((int)(uVar2 * 0x2000000) < 0) {
    uVar1 = uVar1 + 1;
  }
  if ((char)*(u8 *)(param_1 + 0x00000624) < '\0') {
    uVar1 = uVar1 + 1;
  }
  if ((*(u8 *)(param_1 + 0x00000625) & 1) != 0) {
    uVar1 = uVar1 + 1;
  }
  if ((int)((u32)*(u8 *)(param_1 + 0x00000625) * 0x40000000) < 0) {
    uVar1 = uVar1 + 1 & 0xff;
  }
  return uVar1;
}

/* 0x0809E118 (92B) | code_entities_Sub_0809E118 (orig: func_0809E118) | origin: wip | domain: code_entities | MEDIUM / tu_interp */
void code_entities_Sub_0809E118(int param_1,int param_2) {
  char *pcVar1;
  u32 uVar2;
  u32 uVar3;
  int iVar4;
  u32 uVar5;
  u32 uVar6;
  uVar3 = 0;
  while (uVar6 = uVar3, uVar3 = game_state_Sub_0809D8B8(param_1), uVar6 < uVar3) {
    for (uVar5 = 0; uVar2 = game_state_Sub_0809D8A4(param_1), uVar3 = uVar6 + 1, uVar5 < uVar2;
        uVar5 = uVar5 + 1) {
      iVar4 = param_1 + uVar5 * 2 + uVar6 * 0x38;
      pcVar1 = (char *)(param_2 + ((*(u16 *)(iVar4 + 4) & 0x3ff) >> 4));
      *pcVar1 = *pcVar1 + '\x01';
      pcVar1 = (char *)(param_2 + (u32)(*(u8 *)(iVar4 + 5) >> 2));
      *pcVar1 = *pcVar1 + '\x01';
    }
  }
}

/* 0x0809E174 (16B) | code_entities_Sub_0809E174 (orig: func_0809E174) | origin: pure | domain: code_entities | MEDIUM / graph_algebra */
u32 code_entities_Sub_0809E174(u8 *arg0) {
    return ((u32)arg0[0x624] << 31) >> 31;
}

/* 0x0809E184 (16B) | code_entities_Sub_0809E184 (orig: func_0809E184) | origin: pure | domain: code_entities | MEDIUM / graph_algebra */
u32 code_entities_Sub_0809E184(u8 *arg0) {
    return ((u32)arg0[0x625] << 29) >> 31;
}

/* 0x0809E194 (16B) | code_entities_Sub_0809E194 (orig: func_0809E194) | origin: pure | domain: code_entities | MEDIUM / graph_algebra */
u32 code_entities_Sub_0809E194(u8 *arg0) {
    return ((u32)arg0[0x625] << 28) >> 31;
}

/* 0x0809E1A4 (16B) | code_entities_Sub_0809E1A4 (orig: func_0809E1A4) | origin: pure | domain: code_entities | MEDIUM / graph_algebra */
u32 code_entities_Sub_0809E1A4(u8 *arg0) {
    return ((u32)arg0[0x625] << 27) >> 31;
}

/* 0x080AB85C (116B) | code_entities_Sub_080AB85C (orig: func_080AB85C) | origin: wip | domain: code_entities | MEDIUM / graph_algebra */
void code_entities_Sub_080AB85C(u32 *param_1) {
  u8 bVar1;
  u16 uStack_20;
  short sStack_1e;
  u16 uStack_1c;
  short sStack_1a;
  *param_1 = param_1[10];
  code_entities_Sub_080AC124(param_1 + 5,param_1 + 8,param_1,0,0,0);
  if (param_1[0xc] == 0) {
    bVar1 = 0;
  }
  else {
    sStack_1a = (short)*param_1 + (short)param_1[0xc];
    uStack_20 = *(u16 *)(param_1 + 8);
    uStack_1c = *(u16 *)(param_1 + 9);
    sStack_1e = sStack_1a + *(short *)((int)param_1 + 0x22);
    sStack_1a = sStack_1a + *(short *)((int)param_1 + 0x26);
    bVar1 = code_entities_Sub_080AC070(param_1 + 5,&uStack_20);
    bVar1 = bVar1 ^ 1;
  }
  *(u8 *)(param_1 + 4) = bVar1;
}

/* 0x080AB8D0 (120B) | code_entities_Sub_080AB8D0 (orig: func_080AB8D0) | origin: wip | domain: code_entities | MEDIUM / graph_algebra */
void code_entities_Sub_080AB8D0(int param_1) {
  u8 bVar1;
  u16 uStack_20;
  short sStack_1e;
  u16 uStack_1c;
  short sStack_1a;
  *(int *)(param_1 + 4) = -*(int *)(param_1 + 0x28);
  code_entities_Sub_080AC124(param_1 + 0x14,param_1 + 0x20,0,param_1 + 4,0,0);
  if (*(int *)(param_1 + 0x30) == 0) {
    bVar1 = 0;
  }
  else {
    sStack_1a = (short)*(u32 *)(param_1 + 4) - (short)*(int *)(param_1 + 0x30);
    uStack_20 = *(u16 *)(param_1 + 0x20);
    uStack_1c = *(u16 *)(param_1 + 0x24);
    sStack_1e = sStack_1a + *(short *)(param_1 + 0x22);
    sStack_1a = sStack_1a + *(short *)(param_1 + 0x26);
    bVar1 = code_entities_Sub_080AC070(param_1 + 0x14,&uStack_20);
    bVar1 = bVar1 ^ 1;
  }
  *(u8 *)(param_1 + 0x11) = bVar1;
}

/* 0x080AB948 (124B) | code_entities_Sub_080AB948 (orig: func_080AB948) | origin: wip | domain: code_entities | MEDIUM / graph_algebra */
void code_entities_Sub_080AB948(int param_1) {
  u8 bVar1;
  short sStack_20;
  u16 uStack_1e;
  short sStack_1c;
  u16 uStack_1a;
  *(int *)(param_1 + 8) = -*(int *)(param_1 + 0x28);
  code_entities_Sub_080AC124(param_1 + 0x14,param_1 + 0x20,0,0,param_1 + 8,0);
  if (*(int *)(param_1 + 0x2c) == 0) {
    bVar1 = 0;
  }
  else {
    sStack_1c = (short)*(u32 *)(param_1 + 8) - (short)*(int *)(param_1 + 0x2c);
    uStack_1e = *(u16 *)(param_1 + 0x22);
    uStack_1a = *(u16 *)(param_1 + 0x26);
    sStack_20 = sStack_1c + *(short *)(param_1 + 0x20);
    sStack_1c = sStack_1c + *(short *)(param_1 + 0x24);
    bVar1 = code_entities_Sub_080AC070(param_1 + 0x14,&sStack_20);
    bVar1 = bVar1 ^ 1;
  }
  *(u8 *)(param_1 + 0x12) = bVar1;
}

/* 0x080AB9C4 (120B) | code_entities_Sub_080AB9C4 (orig: func_080AB9C4) | origin: wip | domain: code_entities | MEDIUM / graph_algebra */
void code_entities_Sub_080AB9C4(int param_1) {
  u8 bVar1;
  short sStack_20;
  u16 uStack_1e;
  short sStack_1c;
  u16 uStack_1a;
  *(u32 *)(param_1 + 0xc) = *(u32 *)(param_1 + 0x28);
  code_entities_Sub_080AC124(param_1 + 0x14,param_1 + 0x20,0,0,0,param_1 + 0xc);
  if (*(int *)(param_1 + 0x2c) == 0) {
    bVar1 = 0;
  }
  else {
    sStack_1c = (short)*(u32 *)(param_1 + 0xc) + (short)*(int *)(param_1 + 0x2c);
    uStack_1e = *(u16 *)(param_1 + 0x22);
    uStack_1a = *(u16 *)(param_1 + 0x26);
    sStack_20 = sStack_1c + *(short *)(param_1 + 0x20);
    sStack_1c = sStack_1c + *(short *)(param_1 + 0x24);
    bVar1 = code_entities_Sub_080AC070(param_1 + 0x14,&sStack_20);
    bVar1 = bVar1 ^ 1;
  }
  *(u8 *)(param_1 + 0x13) = bVar1;
}

/* 0x080ABC40 (536B) | code_entities_Sub_080ABC40 (orig: func_080ABC40) | origin: wip | domain: code_entities | MEDIUM / graph_algebra */
code_entities_Sub_080ABC40(int param_1,int param_2,int param_3,int param_4,int *param_5,u32 param_6) {
  int iVar2;
  u32 uStack_34;
  u32 uStack_30;
  int iVar4;
  u32 uVar5;
  int iVar6;
  u32 uVar7;
  u32 uVar8;
  int aiStack_44 [4];
  char cVar1;
  s8 uVar3;
  int iStack_2c;
  u32 uStack_28;
  int iStack_24;
  uStack_34 = param_3 - param_1;
  uVar5 = param_4 - param_2;
  uVar7 = uStack_34;
  if ((int)uStack_34 < 0) {
    uVar7 = -uStack_34;
  }
  uVar8 = uVar5;
  if ((int)uVar5 < 0) {
    uVar8 = -uVar5;
  }
  uStack_30 = 0;
  if (uVar7 * 2 + uVar8 * -3 == 0 || (int)(uVar7 * 2) < (int)(uVar8 * 3)) {
    if ((int)(uVar7 * 3) < (int)(uVar8 * 2)) {
      uStack_30 = (u16)0xffffffff;
    }
  }
  else {
    uStack_30 = 1;
  }
  iStack_2c = 0x7FFFFFFF;
  uStack_28 = 0;
  iStack_24 = 0;
  do {
    iVar4 = iStack_24;
    iVar2 = code_809E804_Sub_080AB7A4(param_6,iStack_24);
    uVar7 = 1;
    uVar8 = 0;
      uVar7 = ~uVar5 >> 0x1f;
    if (iVar2 == 1) {
    uVar3 = 1;
      uVar8 = uStack_30 >> 0x1f;
      uVar3 = 0;
      iVar6 = param_5[1];
      if (iVar6 + param_5[10] < 0 != SCARRY4(iVar6,param_5[10])) {
        code_entities_Sub_080AB8D0(param_5);
        iVar6 = param_5[1];
      }
      if (iVar6 == 0) {
        if (param_5[1] + param_5[10] < 0 != SCARRY4(param_5[1],param_5[10])) {
          code_entities_Sub_080AB8D0(param_5);
        }
        cVar1 = *(char *)((int)param_5 + 0x11);
        goto LAB_080abdc0;
      }
    }
    else if (iVar2 < 2) {
      if (iVar2 == 0) {
        uVar7 = (u32)((int)uVar5 < 1);
        uVar8 = uStack_30 >> 0x1f;
        uVar3 = 0;
        iVar6 = *param_5;
        if (param_5[10] < iVar6) {
          code_entities_Sub_080AB85C(param_5);
          iVar6 = *param_5;
        }
        if (iVar6 == 0) {
          if (param_5[10] < *param_5) {
            code_entities_Sub_080AB85C(param_5);
          }
          cVar1 = (char)param_5[4];
          goto LAB_080abdc0;
        }
      }
    }
    else if (iVar2 == 2) {
      uVar7 = (u16)~uStack_34 >> 0x1f;
      uVar8 = (u32)(0 < (int)uStack_30);
      uVar3 = 0;
      iVar6 = param_5[2];
      if (iVar6 + param_5[10] < 0 != SCARRY4(iVar6,param_5[10])) {
        code_entities_Sub_080AB948(param_5);
        iVar6 = param_5[2];
      }
      if (iVar6 == 0) {
        if (param_5[2] + param_5[10] < 0 != SCARRY4(param_5[2],param_5[10])) {
          code_entities_Sub_080AB948(param_5);
        }
        cVar1 = *(char *)((int)param_5 + 0x12);
LAB_080abdc0:
        uVar3 = 0;
        if (cVar1 == '\0') {
          uVar3 = 1;
        }
      }
    }
    else if (iVar2 == 3) {
      uVar7 = (u32)((int)uStack_34 < 1);
      uVar8 = (u32)(0 < (int)uStack_30);
      uVar3 = 0;
      iVar6 = param_5[3];
      if (param_5[10] < iVar6) {
        code_entities_Sub_080AB9C4(param_5);
        iVar6 = param_5[3];
      }
      if (iVar6 == 0) {
        if (param_5[10] < param_5[3]) {
          code_entities_Sub_080AB9C4(param_5);
        }
        cVar1 = *(char *)((int)param_5 + 0x13);
        goto LAB_080abdc0;
      }
    }
    iVar6 = -1;
    if (uVar7 != 0) {
      iVar6 = 1;
    }
    if (iVar4 < 3) {
      if (iVar4 < 1) {
        if (iVar4 != 0) goto LAB_080abdf2;
        iVar4 = 0;
      }
      else {
        iVar4 = 1;
      }
    }
    else {
LAB_080abdf2:
      iVar4 = 2;
    }
    if (uVar8 != 0) {
      iVar6 = iVar6 * 2;
    }
      aiStack_44[uStack_28] = iVar2;
    if (iVar4 == iStack_2c) {
    iVar4 = ((int)(-uVar3 | uVar3) >> 0x1f & 8U) + iVar6 + iVar4;
      uStack_28 = uStack_28 + 1;
    }
    else if (iVar4 < iStack_2c) {
      aiStack_44[0] = iVar2;
      uStack_28 = 1;
      iStack_2c = iVar4;
    }
    iStack_24 = iStack_24 + 1;
    if (3 < iStack_24) {
      if (uStack_28 < 2) {
        iVar4 = 0;
      }
      else {
        iVar4 = code_809E804_Sub_080AB788();
        iVar4 = iVar4 << 2;
      }
      return (*(u32 *)((int)aiStack_44 + iVar4));
    }
  } while( true );
}

/* 0x080ABE58 (536B) | code_entities_Sub_080ABE58 (orig: func_080ABE58) | origin: wip | domain: code_entities | MEDIUM / graph_algebra */
code_entities_Sub_080ABE58(int param_1,int param_2,int param_3,int param_4,int *param_5,u32 param_6) {
  u32 uStack_34;
  u32 uStack_30;
  int iVar2;
  int iStack_2c;
  u32 uStack_28;
  int iVar6;
  u32 uVar7;
  u32 uVar8;
  int iStack_24;
  char cVar1;
  u32 uVar3;
  u32 iVar4;
  u32 uVar5;
  int aiStack_44 [4];
  uStack_34 = param_3 - param_1;
  uVar5 = param_4 - param_2;
  uVar7 = uStack_34;
  if ((int)uStack_34 < 0) {
  uVar8 = uVar5;
  }
    uVar7 = -uStack_34;
  if ((int)uVar5 < 0) {
    uVar8 = -uVar5;
  }
  uStack_30 = 0;
  if (uVar7 * 2 + uVar8 * -3 == 0 || (int)(uVar7 * 2) < (int)(uVar8 * 3)) {
    if ((int)(uVar7 * 3) < (int)(uVar8 * 2)) {
      uStack_30 = (u16)0xffffffff;
    }
  }
  else {
    uStack_30 = 1;
  }
  iStack_2c = (s16)0x7FFFFFFF;
  uStack_28 = 0;
  iStack_24 = 0;
  do {
    iVar4 = iStack_24;
    iVar2 = code_809E804_Sub_080AB7A4(param_6,iStack_24);
    uVar7 = 1;
    uVar8 = 0;
      uVar7 = (u8)~uVar5 >> 0x1f;
    if (iVar2 == 1) {
    uVar3 = 1;
      uVar8 = uStack_30 >> 0x1f;
      uVar3 = 0;
      iVar6 = param_5[1];
      if (iVar6 + param_5[10] < 0 != SCARRY4(iVar6,param_5[10])) {
        code_entities_Sub_080AB8D0(param_5);
        iVar6 = param_5[1];
      }
      if (iVar6 == 0) {
        if (param_5[1] + param_5[10] < 0 != SCARRY4(param_5[1],param_5[10])) {
          code_entities_Sub_080AB8D0(param_5);
        }
        cVar1 = *(char *)((int)param_5 + 0x11);
        goto LAB_080abfd8;
      }
    }
    else if (iVar2 < 2) {
      if (iVar2 == 0) {
        uVar7 = (u32)((int)uVar5 < 1);
        uVar8 = uStack_30 >> 0x1f;
        uVar3 = 0;
          code_entities_Sub_080AB85C(param_5);
        if (param_5[10] < iVar6) {
        iVar6 = *param_5;
          iVar6 = *param_5;
        }
        if (iVar6 == 0) {
          if (param_5[10] < *param_5) {
            code_entities_Sub_080AB85C(param_5);
          }
          cVar1 = (char)param_5[4];
          goto LAB_080abfd8;
        }
      }
    }
    else if (iVar2 == 2) {
      uVar7 = (u16)~uStack_34 >> 0x1f;
      uVar8 = (u32)(0 < (int)uStack_30);
      uVar3 = 0;
        code_entities_Sub_080AB948(param_5);
      if (iVar6 + param_5[10] < 0 != SCARRY4(iVar6,param_5[10])) {
      iVar6 = param_5[2];
        iVar6 = param_5[2];
      }
      if (iVar6 == 0) {
        if (param_5[2] + param_5[10] < 0 != SCARRY4(param_5[2],param_5[10])) {
          code_entities_Sub_080AB948(param_5);
        }
        cVar1 = *(char *)((int)param_5 + 0x12);
LAB_080abfd8:
        uVar3 = 0;
        if (cVar1 == '\0') {
          uVar3 = 1;
        }
      }
    }
    else if (iVar2 == 3) {
      uVar7 = (u32)((int)uStack_34 < 1);
      uVar8 = (u32)(0 < (int)uStack_30);
      uVar3 = 0;
      iVar6 = param_5[3];
      if (param_5[10] < iVar6) {
        code_entities_Sub_080AB9C4(param_5);
        iVar6 = param_5[3];
      }
      if (iVar6 == 0) {
        if (param_5[10] < param_5[3]) {
          code_entities_Sub_080AB9C4(param_5);
        }
        cVar1 = *(char *)((int)param_5 + 0x13);
        goto LAB_080abfd8;
      }
    }
    iVar6 = 1;
    if (uVar7 != 0) {
      iVar6 = -1;
    }
    if (iVar4 < 3) {
      if (iVar4 < 1) {
        if (iVar4 != 0) goto LAB_080ac008;
        iVar4 = 0;
      }
      else {
        iVar4 = 1;
      }
    }
    else {
LAB_080ac008:
      iVar4 = 2;
    }
    if (uVar8 != 0) {
      iVar6 = iVar6 * 2;
    }
      aiStack_44[uStack_28] = (s32)iVar2;
    if (iVar4 == iStack_2c) {
    iVar4 = ((int)(-uVar3 | uVar3) >> 0x1f & 8U) + iVar6 + iVar4;
      uStack_28 = uStack_28 + 1;
    }
    else if (iVar4 < iStack_2c) {
      aiStack_44[0] = iVar2;
      uStack_28 = 1;
      iStack_2c = iVar4;
    }
    iStack_24 = iStack_24 + 1;
    if (3 < iStack_24) {
      if (uStack_28 < 2) {
        iVar4 = 0;
      }
      else {
        iVar4 = (s16)code_809E804_Sub_080AB788();
        iVar4 = iVar4 << 2;
      }
      return (*(u32 *)((int)aiStack_44 + iVar4));
    }
  } while( true );
}

/* 0x080AC070 (180B) | code_entities_Sub_080AC070 (orig: func_080AC070) | origin: wip | domain: code_entities | MEDIUM / tu_interp */
u32 code_entities_Sub_080AC070(int *param_1,u16 *param_2) {
  int iVar1;
  int iVar2;
  u32 uVar3;
  int iVar4;
  u32 uVar5;
  u32 uVar6;
  u32 uVar7;
  int iVar8;
  int iVar9;
  u8 *pbVar10;
  int iVar11;
  int iVar12;
  iVar2 = (int)((u32)*param_2 << 0x10) >> 0x13;
  uVar3 = (short)param_2[2] + 7 >> 3;
  iVar9 = (int)((u32)param_2[1] << 0x10) >> 0x13;
  iVar4 = (short)param_2[3] + 7 >> 3;
  uVar5 = (u32)*(u16 *)(param_1 + 2);
  if ((((*param_1 == 0) || (iVar2 < 0)) || (uVar5 < uVar3)) ||
     ((iVar9 < 0 || ((int)(u32)*(u16 *)((int)param_1 + 10) < iVar4)))) {
LAB_080ac110:
    uVar6 = 1;
  }
  else {
    if (iVar9 < iVar4) {
      iVar12 = iVar9 * uVar5;
      do {
        if (iVar2 < (int)uVar3) {
          iVar11 = (iVar2 + iVar12) * 4;
          pbVar10 = (u8 *)(iVar2 + iVar12 + param_1[1]);
          iVar8 = iVar2;
          do {
            iVar1 = iVar11;
            if (param_1[1] != 0) {
              iVar1 = (u32)*pbVar10 * 4;
            }
            uVar7 = *(u32 *)(*param_1 + iVar1);
            if (((uVar7 & 1) != 0) || ((int)(uVar7 * 0x40000000) < 0)) goto LAB_080ac110;
            iVar11 = iVar11 + 4;
            pbVar10 = pbVar10 + 1;
            iVar8 = iVar8 + 1;
          } while (iVar8 < (int)uVar3);
        }
        iVar12 = iVar12 + uVar5;
        iVar9 = iVar9 + 1;
      } while (iVar9 < iVar4);
    }
    uVar6 = 0;
  }
  return uVar6;
}

/* 0x080DC67C (116B) | code_entities_Sub_080DC67C (orig: func_080DC67C) | origin: wip | domain: code_entities | MEDIUM / graph_algebra */
u32 code_entities_Sub_080DC67C(char *param_1,char *param_2,char *param_3) {
  char cVar1;
  char *pcVar2;
  int iVar3;
  iVar3 = (int)param_2 - (int)param_1 >> 2;
  if (0 < iVar3) {
    cVar1 = *param_3;
    do {
      pcVar2 = param_1;
      if ((((*param_1 == cVar1) || (pcVar2 = param_1 + 1, param_1[1] == cVar1)) ||
          (pcVar2 = param_1 + 2, param_1[2] == cVar1)) ||
         (pcVar2 = param_1 + 3, param_1[3] == cVar1)) goto LAB_080dc6e2;
      param_1 = param_1 + 4;
      iVar3 = iVar3 + -1;
    } while (0 < iVar3);
  }
  iVar3 = (int)param_2 - (int)param_1;
  if (iVar3 == 1) {
LAB_080dc6da:
    pcVar2 = param_1;
    if (*param_1 != *param_3) goto LAB_080dc6e8;
  }
  else {
    if (iVar3 < 2) goto LAB_080dc6e8;
    if (iVar3 == 2) {
LAB_080dc6d0:
      pcVar2 = param_1;
      if (*param_1 != *param_3) {
        param_1 = param_1 + 1;
        goto LAB_080dc6da;
      }
    }
    else {
      if (iVar3 != 3) goto LAB_080dc6e8;
      pcVar2 = param_1;
      if (*param_1 != *param_3) {
        param_1 = param_1 + 1;
        goto LAB_080dc6d0;
      }
    }
  }
LAB_080dc6e2:
  param_2 = pcVar2;
LAB_080dc6e8:
  return param_2;
}

