/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_0803EE94 (33 functions) */
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

/* 0x0804E9F4 (100B) | code_0803EE94_Sub_0804E9F4 (orig: func_0804E9F4) | origin: wip | domain: code_0803EE94 | HIGH / stanhash_map_tu */
void code_0803EE94_Sub_0804E9F4(u16 *param_1,u16 param_2,u32 param_3,u32 param_4,short param_5,int param_6) {
  u32 uVar1;
  u32 uVar2;
  u16 *puVar3;
  u16 uVar4;
  uVar1 = 0;
  if (param_4 != 0) {
    do {
      uVar2 = 0;
      uVar1 = uVar1 + 1;
      if (param_3 != 0) {
        puVar3 = param_1;
        uVar4 = param_2;
        do {
          param_2 = uVar4 + 1;
          *puVar3 = uVar4 | param_5 << 0xc;
          puVar3 = puVar3 + 1;
          uVar2 = uVar2 + 1;
          uVar4 = param_2;
        } while (uVar2 < param_3);
      }
      param_1 = param_1 + param_6;
    } while (uVar1 < param_4);
  }
}

/* 0x0804EA94 (208B) | code_0803EE94_Sub_0804EA94 (orig: func_0804EA94) | origin: wip | domain: code_0803EE94 | HIGH / stanhash_map_tu */
u32 code_0803EE94_Sub_0804EA94(u32 *param_1,u32 param_2,u32 param_3,u32 param_4,u32 param_5,u32 param_6,
                  int param_7,u32 param_8) {
  u32 uVar1;
  u32 uVar2;
  uVar1 = 0xFFFFF3FF & (0xFFFF0FFF & param_4 & 0x3ff | (param_5 & 0xf) << 0xc);
  uVar2 = 0xFFFF3FFF &
          (0xFE00FFFF & (0xFFFFFF00 & 0x1000 | param_3 & 0xff) |
          (param_2 & 0x000001FF) << 0x10);
  *param_1 = 0x3FFFFFFF & (uVar2 | (param_8 & 3) << 0xe) |
             ((uVar2 >> 0x1e) + param_7) * 0x40000000;
  param_1[1] = uVar1 | (param_6 & 3) << 10;
  return;
}

/* 0x0804EC84 (164B) | code_0803EE94_Sub_0804EC84 (orig: func_0804EC84) | origin: wip | domain: code_0803EE94 | HIGH / stanhash_map_tu */
void code_0803EE94_Sub_0804EC84(int param_1,char *param_2,u32 param_3) {
  u32 uVar1;
  char cVar2;
  int iVar3;
  u32 uVar4;
  u32 uVar5;
  char acStack_29 [13];
  iVar3 = param_1;
  if (param_1 < 0) {
    iVar3 = -param_1;
  }
  uVar5 = 0;
  uVar1 = 1;
  do {
    uVar4 = uVar1;
    cVar2 = func_080D0ED0(iVar3,10);
    acStack_29[uVar5 + 1] = cVar2 + '0';
    iVar3 = func_080D0EC8(iVar3,10);
    if (iVar3 < 1) break;
    uVar5 = uVar4;
    uVar1 = uVar4 + 1;
  } while (uVar4 + 1 < 0xb);
  uVar5 = uVar4;
  if ((param_3 != 0) && (uVar5 = param_3, uVar4 <= param_3)) {
    for (; uVar5 = uVar4, uVar4 < param_3; uVar4 = uVar4 + 1) {
      acStack_29[uVar4 + 1] = ' ';
    }
  }
  if (param_1 < 0) {
    acStack_29[uVar5 + 1] = '-';
    uVar5 = uVar5 + 1;
  }
  while (uVar5 - 1 != 0xffffffff) {
    *param_2 = acStack_29[uVar5];
    param_2 = param_2 + 1;
    uVar5 = uVar5 - 1;
  }
  *param_2 = '\0';
}

/* 0x0804EDB4 (68B) | code_0803EE94_Sub_0804EDB4 (orig: func_0804EDB4) | origin: wip | domain: code_0803EE94 | HIGH / stanhash_map_tu */
void code_0803EE94_Sub_0804EDB4(int param_1,u16 *param_2,short param_3,short param_4,int param_5) {
  u16 uVar1;
  int iVar2;
  do {
    iVar2 = LibGcc_udivsi3(param_1,10);
    uVar1 = param_3 + ((short)param_1 + (short)iVar2 * -10) * 2;
    *param_2 = param_4 * 0x1000 | uVar1;
    param_2[param_5] = uVar1 + 1 | param_4 * 0x1000;
    param_2 = param_2 + -1;
    param_1 = iVar2;
  } while (iVar2 != 0);
}

/* 0x08050D34 (8B) | code_0803EE94_GetField_0x00 (orig: func_08050D34) | origin: pure | domain: code_0803EE94 | HIGH / stanhash_map_tu */
u32 code_0803EE94_GetField_0x00(u8 **arg0) {
    return *(u32 *)(*arg0 + 8);
}

/* 0x08050DD8 (12B) | code_0803EE94_GetField_0x00_0DD8 (orig: func_08050DD8) | origin: pure | domain: code_0803EE94 | HIGH / stanhash_map_tu */
u8 code_0803EE94_GetField_0x00_0DD8(u8 **arg0) {
    u8 *p = *arg0;
    u8 r = p[13];
    p[13] = 0;
    return r;
}

/* 0x08050DE4 (12B) | code_0803EE94_GetField_0x00_0DE4 (orig: func_08050DE4) | origin: pure | domain: code_0803EE94 | HIGH / stanhash_map_tu */
u8 code_0803EE94_GetField_0x00_0DE4(u8 **arg0) {
    u8 *p = *arg0;
    u8 r = p[13];
    p[13] = 1;
    return r;
}

/* 0x08050DF0 (28B) | code_0803EE94_Sub_08050DF0 (orig: func_08050DF0) | origin: pure | domain: code_0803EE94 | HIGH / stanhash_map_tu */
u32 code_0803EE94_Sub_08050DF0(u8 **a) { u8 *p = *a; if (*(u32 *)(p + 8) == 6) return 0; return *(u32 *)(p + (0xac << 1)); }

/* 0x08050E0C (36B) | code_0803EE94_Sub_08050E0C (orig: func_08050E0C) | origin: pure | domain: code_0803EE94 | HIGH / stanhash_map_tu */
void code_0803EE94_Sub_08050478(u32, u32, u32, u32, u32, u32, u32, u32); void code_0803EE94_Sub_08050E0C(u32 *a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g, u32 h) { code_0803EE94_Sub_08050478(*a, b, c, d, e, f, g, h); }

/* 0x08050E30 (32B) | code_0803EE94_Sub_08050E30 (orig: func_08050E30) | origin: pure | domain: code_0803EE94 | HIGH / stanhash_map_tu */
void code_0803EE94_Sub_08050664(u32, u32, u32, u32, u32, u32, u32); void code_0803EE94_Sub_08050E30(u32 *a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g) { code_0803EE94_Sub_08050664(*a, b, c, d, e, f, g); }

/* 0x08050E98 (36B) | code_0803EE94_Sub_08050E98 (orig: func_08050E98) | origin: wip | domain: code_0803EE94 | HIGH / stanhash_map_tu */
u32 code_0803EE94_Sub_08050E98(int *param_1,u8 param_2) {
  u8 bVar1;
  bVar1 = *(u8 *)(*param_1 + 0x550);
  *(u8 *)(*param_1 + 0x550) = bVar1 & 0xc0 | bVar1 & 0x3f & ~param_2;
  return;
}

/* 0x08051320 (284B) | code_0803EE94_Sub_08051320 (orig: func_08051320) | origin: wip | domain: code_0803EE94 | HIGH / stanhash_map_tu */
void code_0803EE94_Sub_08051320(int param_1,u32 param_2,u32 param_3,int param_4,int param_5,u16 param_6,
             short param_7) {
  u16 uVar1;
  short *psVar2;
  short *psVar3;
  int iVar4;
  u16 *puVar5;
  int iVar6;
  param_2 = param_2 & 0x1f;
  if (0x20 < param_2 + param_4) {
    param_4 = 0x20 - param_2;
  }
  param_3 = param_3 & 0x1f;
  if (0x20 < param_3 + param_5) {
    param_5 = 0x20 - param_3;
  }
  uVar1 = param_6 & (u16)0x000003FF | param_7 << 0xc;
  iVar6 = param_1 + param_3 * 0x40;
  iVar4 = param_2 * 2;
  *(u16 *)(iVar6 + iVar4) = uVar1;
  puVar5 = (u16 *)(iVar6 + iVar4) + 1;
  param_4 = param_2 + param_4;
  do {
    *puVar5 = uVar1 + 1;
    puVar5 = puVar5 + 1;
  } while (puVar5 != (u16 *)(iVar6 + param_4 * 2 + -2));
  *puVar5 = uVar1 + 4;
  iVar6 = iVar6 + 0x40;
  do {
    *(short *)(iVar6 + iVar4) = uVar1 + 2;
    psVar2 = (short *)(iVar6 + iVar4) + 1;
    psVar3 = (short *)(iVar6 + param_4 * 2 + -2);
    iVar6 = iVar6 + 0x40;
    do {
      *psVar2 = uVar1 + 3;
      psVar2 = psVar2 + 1;
    } while (psVar2 != psVar3);
    *psVar2 = uVar1 + 8;
  } while (iVar6 != param_1 + (param_3 + param_5) * 0x40 + -0x40);
  *(short *)(iVar6 + iVar4) = uVar1 + 5;
  psVar2 = (short *)(iVar6 + iVar4) + 1;
  do {
    *psVar2 = uVar1 + 7;
    psVar2 = psVar2 + 1;
  } while (psVar2 != (short *)(iVar6 + param_4 * 2 + -2));
  *psVar2 = uVar1 + 6;
}

/* 0x0805E824 (44B) | code_0803EE94_Sub_0805E824 (orig: func_0805E824) | origin: pure | domain: code_0803EE94 | HIGH / stanhash_map_tu */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D3918();
/* paridad 90.6% preset agbcc_O2 */
u32 code_0803EE94_Sub_0805E824(u32 *arg0, int *arg1, u32 arg2, s32 arg3) {
  *arg0 = arg1;
  func_080D3918(arg0 + 1,arg1,arg2,*(u32 *)(*arg1 + 0xc));
  *(u16 *)(arg0 + 3) = 0;
  *(short *)((int)arg0 + 0xe) = *(short *)(arg0[1] + 2) << 8;
  *(u16 *)(arg0 + 4) = arg3;
  *(u8 *)((int)arg0 + 0x12) = 1;
  return arg0;
}

/* 0x0805E850 (16B) | code_0803EE94_Sub_0805E850 (orig: func_0805E850) | origin: pure | domain: code_0803EE94 | HIGH / stanhash_map_tu */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_0803EE94_Sub_0805E860();
void code_0803EE94_Sub_0805E850(u32 *arg0,u32 arg1,u32 arg2) {
  *arg0 = arg1;
  code_0803EE94_Sub_0805E860(arg0,arg2);
}

/* 0x0805E860 (52B) | code_0803EE94_Sub_0805E860 (orig: func_0805E860) | origin: wip | domain: code_0803EE94 | HIGH / stanhash_map_tu */
void code_0803EE94_Sub_0805E860(s16 param_1) {
  func_080D3918();
  *(u32 *)(param_1 + 4) = func_080D3918();
  *(u32 *)(param_1 + 8) = *(u32 *)(param_1);
  *(u16 *)(param_1 + 0xc) = 0;
  *(u32 *)(param_1 + 0xe) = (*(u16 *)(*(u8 *)(param_1 + 4) + 2) << 8);
  *(u8 *)(param_1 + 0x12) = 1;
}

/* 0x0805E8F0 (172B) | code_0803EE94_Sub_0805E8F0 (orig: func_0805E8F0) | origin: wip | domain: code_0803EE94 | HIGH / stanhash_map_tu */
u32 code_0803EE94_Sub_0805E8F0(int param_1) {
  int iVar1;
  int iVar2;
  u32 uVar3;
  u32 uVar4;
  int iVar5;
  u32 uVar6;
  int iVar7;
  u32 uVar8;
  uVar8 = 0;
  if (*(char *)(param_1 + 0x12) != '\0') {
    uVar8 = 2;
    *(u8 *)(param_1 + 0x12) = 0;
  }
  iVar1 = (int)*(short *)(param_1 + 0x10);
  if ((iVar1 != 0) && (*(u16 *)(param_1 + 0xe) != 0)) {
    iVar7 = iVar1;
    if (iVar1 < 0) {
      iVar7 = -iVar1;
    }
    iVar7 = (u32)*(u16 *)(param_1 + 0xe) - iVar7;
    if (iVar7 < 1) {
      uVar6 = (u32)*(u16 *)(param_1 + 0xc);
      iVar2 = uVar6 * 4;
      iVar5 = *(int *)(param_1 + 4);
      uVar8 = uVar8 | 1;
      uVar3 = 0;
      if (iVar5 != 0) {
        uVar3 = (u32)*(u16 *)(param_1 + 8);
      }
      do {
        if (iVar1 < 1) {
          if (uVar6 == 0) {
            uVar8 = uVar8 | 4;
            uVar6 = uVar3;
          }
          uVar6 = uVar6 - 1;
        }
        else {
          uVar6 = uVar6 + 1;
          if (uVar3 <= uVar6) {
            uVar6 = 0;
            uVar8 = uVar8 | 4;
          }
        }
        uVar4 = (u32)*(u16 *)(iVar5 + uVar6 * 4 + 2);
        if (uVar4 == 0) {
          iVar7 = 0;
          break;
        }
        iVar7 = iVar7 + uVar4 * 0x100;
      } while (iVar7 < 1);
      if (*(short *)(iVar5 + uVar6 * 4) != *(short *)(iVar5 + iVar2)) {
        uVar8 = uVar8 | 2;
      }
      *(short *)(param_1 + 0xc) = (short)uVar6;
    }
    *(short *)(param_1 + 0xe) = (short)iVar7;
  }
  return uVar8;
}

/* 0x0805EC24 (296B) | code_0803EE94_Sub_0805EC24 (orig: func_0805EC24) | origin: wip | domain: code_0803EE94 | HIGH / stanhash_map_tu */
void code_0803EE94_Sub_0805EC24(int *param_1,int *param_2,u32 param_3,u32 param_4,short *param_5) {
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  iVar1 = *param_1 + (param_3 >> 1);
  iVar9 = iVar1 * 0x100;
  iVar2 = *param_2 + (param_4 >> 1);
  iVar3 = iVar2 * 0x100;
  iVar4 = *param_5 * 0x110;
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  iVar5 = param_5[1] * 0x110;
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0xff;
  }
  iVar6 = param_5[2] * 0x110;
  if (iVar6 < 0) {
    iVar6 = iVar6 + 0xff;
  }
  iVar7 = param_5[3] * 0x110;
  if (iVar7 < 0) {
    iVar7 = iVar7 + 0xff;
  }
  iVar8 = (int)(short)((u32)iVar4 >> 8);
  iVar7 = (iVar7 << 8) >> 0x10;
  iVar5 = (int)(short)((u32)iVar5 >> 8);
  iVar6 = (int)(short)((u32)iVar6 >> 8);
  iVar4 = iVar7 * iVar8 - iVar6 * iVar5;
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  iVar4 = iVar4 >> 8;
  if (iVar4 != 0) {
    iVar5 = iVar9 * iVar7 - iVar5 * iVar3;
    iVar3 = iVar8 * iVar3 - iVar9 * iVar6;
    if (iVar4 == 0x100) {
      if (iVar5 < 0) {
        iVar5 = iVar5 + 0xff;
      }
      iVar5 = iVar5 >> 8;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0xff;
      }
      iVar3 = iVar3 >> 8;
    }
    else if (iVar4 == 0xFFFFFF00) {
      if (iVar5 < 0) {
        iVar5 = iVar5 + 0xff;
      }
      iVar5 = -(iVar5 >> 8);
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0xff;
      }
      iVar3 = -(iVar3 >> 8);
    }
    else {
      iVar5 = func_080D0EC8(iVar5,iVar4);
      iVar3 = func_080D0EC8(iVar3,iVar4);
    }
    *param_1 = *param_1 + (iVar5 + iVar1 * -0x100 >> 8);
    *param_2 = *param_2 + (iVar3 + iVar2 * -0x100 >> 8);
  }
}

/* 0x08075DD4 (24B) | code_0803EE94_Sub_08075DD4 (orig: func_08075DD4) | origin: pure | domain: code_0803EE94 | HIGH / stanhash_map_tu */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 LibC_memset();
void code_0803EE94_Sub_08075DD4(int arg0) {
  LibC_memset(*(int *)(arg0 + 0x18),0xff,
                (*(int *)(arg0 + 0x1c) - *(int *)(arg0 + 0x18) >> 6) << 6);
}

/* 0x08075E24 (44B) | code_0803EE94_Sub_08075E24 (orig: func_08075E24) | origin: wip | domain: code_0803EE94 | HIGH / stanhash_map_tu */
void code_0803EE94_Sub_08075E24(int param_1, s16 param_2) {
  if (*(short *)(param_1 + 4) < param_2) {
    *(u8 *)(param_1 + 0xe) = *(u16 *)(param_1 + 4);
  }
  else {
    *(u16 *)(param_1 + 0xe) = (u8)param_2;
  }
  if (*(short *)(0xe + param_1) < 0xa0) {
    *(u16 *)(param_1 + 0xe) = (u32)0xa0;
  }
}

/* 0x08076B64 (48B) | code_0803EE94_Sub_08076B64 (orig: func_08076B64) | origin: wip | domain: code_0803EE94 | HIGH / stanhash_map_tu */
void code_0803EE94_Sub_08076B64(u32 param_1, u32 param_2, u32 param_3, u32 param_4) {
    register u32 r0 = param_1;
    register u32 r1 = param_2;
    register u32 r2 = param_3;
    register u32 r3 = param_4;
    register u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0;
    r4 = r0 + 0;
    r4 += 8;
    r5 = 0;
    r1 = *(u32 *)(r0 + 8);
    if (r5 == r1) goto loc_08076B86;
    if (r1 == 0) goto loc_08076B86;
    r2 = 0x000005B4;
    r0 = r1 + r2;
    r0 = *(u32 *)(r0);
    r2 = *(u32 *)(r0 + 8);
    r0 = r1 + 0;
    r1 = 3;
    r0 = func_080D3914(r0, r1, r2, r3);
loc_08076B86:
    *(u32 *)(r4) = r5;
    return r0;
    r0 = r0;
    r4 = r6 << 0x16;
    r0 = r0;
    return r0;
}

/* 0x08076B94 (76B) | code_0803EE94_Sub_08076B94 (orig: func_08076B94) | origin: wip | domain: code_0803EE94 | HIGH / stanhash_map_tu */
void code_0803EE94_Sub_08076B94(s8 param_1, int *param_2) {
  int iVar1;
  int iVar2;
  iVar2 = *param_2;
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 8);
  if ((iVar2 != iVar1) && (iVar1 != 0)) {
    func_080D3914(iVar1,3,*(u32 *)(*(int *)(iVar1 + 0x000005B4) + 8));
  }
  *(int *)(param_1 + 8) = iVar2;
  iVar1 = *param_2;
  if (iVar1 != 0) {
    func_080D3914(iVar1,3,*(u32 *)(*(int *)(iVar1 + 0x000005B4) + 8));
  }
}

/* 0x08076BE0 (12B) | code_0803EE94_GetField_0x08 (orig: func_08076BE0) | origin: pure | domain: code_0803EE94 | HIGH / stanhash_map_tu */
void code_0803EE94_GetField_0x08(u8 **arg0, u16 arg1) {
    *(u16 *)(arg0[2] + (178 << 3)) = arg1;
}

/* 0x08076BEC (16B) | code_0803EE94_GetField_0x08_6BEC (orig: func_08076BEC) | origin: pure | domain: code_0803EE94 | HIGH / stanhash_map_tu */
s16 code_0803EE94_GetField_0x08_6BEC(u8 **arg0) {
    return *(s16 *)(arg0[2] + (178 << 3));
}

/* 0x0807EF00 (20B) | code_0803EE94_SetField_0x00 (orig: func_0807EF00) | origin: pure | domain: code_0803EE94 | HIGH / stanhash_map_tu */
void code_0803EE94_SetField_0x00(u32 *arg0, u8 *arg1) {
    u32 *p = (u32 *)(arg1 + 0x6AC);
    u32 v = *p;
    *p = 0;
    *arg0 = v;
}

/* 0x08081B2C (20B) | code_0803EE94_SetField_0x00_1B2C (orig: func_08081B2C) | origin: pure | domain: code_0803EE94 | HIGH / stanhash_map_tu */
void code_0803EE94_SetField_0x00_1B2C(u32 *arg0, u8 *arg1) {
    u32 *p = (u32 *)(arg1 + 0x6AC);
    u32 v = *p;
    *p = 0;
    *arg0 = v;
}

/* 0x080941A8 (32B) | code_0803EE94_Sub_080941A8 (orig: func_080941A8) | origin: pure | domain: code_0803EE94 | HIGH / stanhash_map_tu */
void code_0803EE94_Sub_080941A8(u32 *a) { (*(void (**)(u32 *, u32, u32, u32, u32))(*a + 0x34))(a, a[6], a[7], a[8], a[9]); }

/* 0x08094648 (32B) | code_0803EE94_Sub_08094648 (orig: func_08094648) | origin: pure | domain: code_0803EE94 | HIGH / stanhash_map_tu */
void code_0803EE94_Sub_08094648(u32 *a) { (*(void (**)(u32 *, u32, u32, u32, u32))(*a + 0x34))(a, a[8], a[9], a[10], a[11]); }

/* 0x080946A8 (20B) | code_0803EE94_Sub_080946A8 (orig: func_080946A8) | origin: pure | domain: code_0803EE94 | HIGH / stanhash_map_tu */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D3910();
void code_0803EE94_Sub_080946A8(int arg0) {
  *(u8 *)(arg0 + 0xd) = 1;
  func_080D3910(arg0, *(u32 *)(*(u32 *)(arg0) + 0x2c));
}

/* 0x080946BC (4B) | code_0803EE94_NoOp (orig: func_080946BC) | origin: pure | domain: code_0803EE94 | HIGH / stanhash_map_tu */
void code_0803EE94_NoOp(void) {
}

/* 0x080946C0 (4B) | code_0803EE94_NoOp_46C0 (orig: func_080946C0) | origin: pure | domain: code_0803EE94 | HIGH / stanhash_map_tu */
void code_0803EE94_NoOp_46C0(void) {
}

/* 0x080946C4 (40B) | code_0803EE94_Sub_080946C4 (orig: func_080946C4) | origin: pure | domain: code_0803EE94 | HIGH / stanhash_map_tu */
struct S { u32 f0, f4, f8, fc, f10; };
extern "C" void code_0803EE94_Sub_080946C4(S *s, int x) {
    switch (x) {
    case 2:
        s->f8 = 0x081008EC;
        break;
    case 3:
        s->f10 = 1;
        s->f8 = 0x081009DC;
        break;
    }
}

/* 0x0809B018 (32B) | code_0803EE94_Sub_0809B018 (orig: func_0809B018) | origin: wip | domain: code_0803EE94 | HIGH / stanhash_map_tu */
u32 code_0803EE94_Sub_0809B018(int param_1,u32 param_2) {
  if (param_2 < *(u32 *)(param_1 + 8)) {
    param_1 = param_1 + (*(u32 *)(param_1 + 8) - (param_2 + 1)) * 8 + 0xc;
  }
  else {
    param_1 = param_1 + 0xc;
  }
  return param_1;
}

/* 0x0809B038 (36B) | code_0803EE94_Sub_0809B038 (orig: func_0809B038) | origin: wip | domain: code_0803EE94 | HIGH / stanhash_map_tu */
u32 code_0803EE94_Sub_0809B038(int param_1,u32 param_2) {
  u32 *puVar1;
  u32 uVar2;
  uVar2 = *(u32 *)(param_1 + 0xfc);
  if (param_2 < uVar2) {
    puVar1 = (u32 *)(param_1 + 0xfc) + (uVar2 - (param_2 + 1)) * 2 + 1;
  }
  else {
    puVar1 = (u32 *)(param_1 + 0x100);
  }
  return puVar1;
}

