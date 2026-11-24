/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_0803EE94_7AEC (6 functions) */
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

/* 0x0806EC28 (108B) | code_0803EE94_7AEC_Sub_0806EC28 (orig: func_0806EC28) | origin: wip | domain: code_0803EE94_7AEC | MEDIUM / graph_algebra */
void code_0803EE94_7AEC_Sub_0806EC28(u32 param_1,int param_2,u32 param_3,u32 param_4,int param_5,int param_6,
             u16 *param_7) {
  u32 uVar1;
  u32 uVar2;
  u32 uVar3;
  uVar2 = param_4;
  while (uVar1 = uVar2, uVar1 < param_6 + param_4) {
    uVar2 = uVar1 + 1;
    if (param_3 < param_3 + param_5) {
      uVar3 = param_3;
      do {
        *(u16 *)
         (((uVar1 >> 5) * 2 + (uVar3 >> 5) + param_2) * 0x800 + (uVar1 & 0x1f) * 0x40 + 0x6000000 +
         (uVar3 & 0x1f) * 2) = *param_7;
        param_7 = param_7 + 1;
        uVar3 = uVar3 + 1;
      } while (uVar3 < param_3 + param_5);
    }
  }
}

/* 0x0806EC94 (812B) | code_0803EE94_7AEC_Sub_0806EC94 (orig: func_0806EC94) | origin: wip | domain: code_0803EE94_7AEC | MEDIUM / graph_algebra */
void code_0803EE94_7AEC_Sub_0806EC94(int param_1) {
  int iVar1;
  u32 uVar2;
  u32 uVar3;
  u32 uVar4;
  u16 *puVar5;
  u32 uVar6;
  int iVar7;
  u32 uVar8;
  u32 *puVar9;
  int iVar10;
  int iVar11;
  u32 uVar12;
  u32 uVar13;
  iVar1 = code_0800E2E4_Sub_0800E324(*(int *)(param_1 + 8) + 0x10);
  uVar4 = (u32)(iVar1 == 3);
  uVar2 = 0x085275D0;
  if (uVar4 != 0) {
    uVar2 = 0x0852AA6C;
  }
  System_UnpackData(uVar2,0x6000000);
  uVar2 = 0x08529794;
  if (uVar4 != 0) {
    uVar2 = 0x0852CA40;
  }
  hardware_HW_DMA3SAD(uVar2,0x5000000,0x200);
  uVar2 = 0x08527238;
  if (uVar4 != 0) {
    uVar2 = 0x0852A6D8;
  }
  code_0803EE94_7AEC_Sub_0806EB70(param_1,0x1c,uVar2);
  uVar2 = 0x08527348;
  if (uVar4 != 0) {
    uVar2 = 0x0852A7EC;
  }
  code_0803EE94_7AEC_Sub_0806EB70(param_1,0x18,uVar2);
  uVar2 = 0x08527520;
  if (uVar4 != 0) {
    uVar2 = 0x0852A9BC;
  }
  code_0803EE94_7AEC_Sub_0806EB70(param_1,0x14,uVar2);
  iVar1 = uVar4 * 4;
  iVar7 = *(int *)(param_1 + 8) + 0x000009DC;
  uVar3 = 0;
  do {
    uVar13 = 0;
    uVar12 = uVar3 + 0xb;
    uVar8 = uVar3 + 1;
    iVar10 = (uVar12 >> 5) * 2;
    iVar11 = (uVar12 & 0x1f) * 0x40 + 0x6000000;
    puVar9 = (u32 *)(uVar3 * 0xac + iVar7);
    do {
      uVar6 = uVar13 + 0x11;
      uVar3 = *puVar9 & 3;
      if (uVar3 == 1) {
        *(short *)(((uVar6 >> 5) + iVar10 + 0x1c) * 0x800 + (uVar12 & 0x1f) * 0x40 + 0x6000000 +
                  (uVar6 & 0x1f) * 2) = (short)0x00009186;
      }
      else if ((1 < uVar3) && (uVar3 == 2)) {
        *(short *)((iVar10 + (uVar6 >> 5) + 0x1c) * 0x800 + iVar11 + (uVar6 & 0x1f) * 2) =
             (short)0x00009187;
      }
      uVar3 = (*puVar9 & 0xfff) >> 8;
      if (((uVar3 < 9) && (uVar3 != 0)) && (uVar3 = (*puVar9 & 0xff) >> 2, uVar3 < 0x27)) {
        *(u16 *)((iVar10 + (uVar6 >> 5) + 0x18) * 0x800 + iVar11 + (uVar6 & 0x1f) * 2) =
             *(u16 *)(uVar3 * 2 + 0x080FBDA4);
      }
      puVar9 = puVar9 + 1;
      uVar13 = uVar13 + 1;
    } while (uVar13 < 0x2b);
    uVar3 = uVar8;
  } while (uVar8 < 0x19);
  iVar7 = func_0800BF14(*(int *)(param_1 + 8) + 500);
  iVar7 = iVar7 * 0x10 + 0x080FBDF4;
  code_0803EE94_7AEC_Sub_0806EC28(param_1,0x18,*(u16 *)(iVar7 + 8),*(u16 *)(iVar7 + 10),
                *(u8 *)(iVar7 + 0xc),*(u8 *)(iVar7 + 0xd),
                *(u32 *)(iVar7 + iVar1));
  iVar7 = func_0800C560(*(int *)(param_1 + 8) + 0x410);
  iVar7 = iVar7 * 0x10 + 0x080FBE24;
  code_0803EE94_7AEC_Sub_0806EC28(param_1,0x18,*(u16 *)(iVar7 + 8),*(u16 *)(iVar7 + 10),
                *(u8 *)(iVar7 + 0xc),*(u8 *)(iVar7 + 0xd),
                *(u32 *)(iVar7 + iVar1));
  iVar7 = func_0800CE64(*(int *)(param_1 + 8) + 0x5f0);
  iVar7 = iVar7 * 0x10 + 0x080FBE44;
  code_0803EE94_7AEC_Sub_0806EC28(param_1,0x18,*(u16 *)(iVar7 + 8),*(u16 *)(iVar7 + 10),
                *(u8 *)(iVar7 + 0xc),*(u8 *)(iVar7 + 0xd),
                *(u32 *)(iVar7 + iVar1));
  iVar1 = func_0800BF7C(*(int *)(param_1 + 8) + 500);
  puVar5 = 0x08529994;
  if (uVar4 != 0) {
    puVar5 = 0x0852CC40;
  }
  hardware_HW_DMA3SAD(puVar5 + iVar1 * (u32)*puVar5 * 0x10 + 2,0x060002C0,(u32)*puVar5 << 5);
  code_0803EE94_7AEC_Sub_080700B8(param_1,0x14,0x18,3,2,2,*(u8 *)(iVar1 + 0x080FBE64));
  iVar1 = func_0800BF74(*(int *)(param_1 + 8) + 500);
  puVar5 = 0x08529BA8;
  if (uVar4 != 0) {
    puVar5 = 0x0852CE54;
  }
  hardware_HW_DMA3SAD(puVar5 + iVar1 * (u32)*puVar5 * 0x10 + 2,0x06000340,(u32)*puVar5 << 5);
  code_0803EE94_7AEC_Sub_080700B8(param_1,0x14,0x11,3,1,2,*(u8 *)(iVar1 + uVar4 * 3 + 0x080FBE67));
  puVar5 = 0x08529DA4;
  if (uVar4 != 0) {
    puVar5 = 0x0852D050;
  }
  iVar1 = func_0800BF6C(*(int *)(param_1 + 8) + 500);
  hardware_HW_DMA3SAD(puVar5 + (u32)*puVar5 * iVar1 * 0x10 + 2,0x6000000,(u32)*puVar5 << 5);
}

/* 0x080700B8 (136B) | code_0803EE94_7AEC_Sub_080700B8 (orig: func_080700B8) | origin: wip | domain: code_0803EE94_7AEC | MEDIUM / graph_algebra */
void code_0803EE94_7AEC_Sub_080700B8(u32 param_1,int param_2,u32 param_3,u32 param_4,int param_5,int param_6,
             short param_7) {
  u32 uVar1;
  u16 *puVar2;
  u32 uVar3;
  u32 uVar4;
  u32 uVar5;
  if (param_4 < param_6 + param_4) {
    uVar4 = param_4;
    do {
      uVar1 = 0x00000FFF;
      uVar5 = uVar4 + 1;
      if (param_3 < param_3 + param_5) {
        uVar3 = param_3;
        do {
          puVar2 = (u16 *)
                   ((param_2 + (uVar4 >> 5) * 2 + (uVar3 >> 5)) * 0x800 +
                    (uVar4 & 0x1f) * 0x40 + 0x6000000 + (uVar3 & 0x1f) * 2);
          *puVar2 = *puVar2 & (u16)uVar1 | param_7 << 0xc;
          uVar3 = uVar3 + 1;
        } while (uVar3 < param_3 + param_5);
      }
      uVar4 = uVar5;
    } while (uVar5 < param_6 + param_4);
  }
}

/* 0x080709D8 (48B) | code_0803EE94_7AEC_Ctor (orig: func_080709D8) | origin: pure | domain: code_0803EE94_7AEC | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 scene_Dtor();
extern u32 func_080D3914();
void code_0803EE94_7AEC_Ctor(u32 *arg0,u32 arg1) {
  int val;
  *arg0 = 0x080E7AEC;
  val = arg0[1];
  if (val != 0) {
    func_080D3914(val,3,*(u32 *)(*(int *)(val + 4) + 8));
  }
  scene_Dtor(arg0,arg1);
}

/* 0x08070A08 (360B) | code_0803EE94_7AEC_vfunc_0C (orig: func_08070A08) | origin: wip | domain: code_0803EE94_7AEC | HIGH / vtable_algebra */
u32 code_0803EE94_7AEC_vfunc_0C(u32 *self,int param_2) {
  u16 *puVar1;
  u32 uVar2;
  u32 uVar3;
  int iVar4;
  u32 uVar5;
  u32 uVar6;
  int iVar7;
  int iVar8;
  iVar8 = *(int *)(param_2 + 4);
  puVar1 = (u16 *)hardware_GetField_0x00_8918(iVar8);
  *puVar1 = 0x1e40;
  puVar1[7] = (short)0x0000DC40;
  puVar1[6] = (short)0x0000D840;
  puVar1[5] = (short)0x0000D440;
  code_0803EE94_7AEC_Sub_0806EC94(iVar8);
  SpriteAnimEngine_5B80_Ctor_EA78(iVar8);
  while( true ) {
    hardware_Sub_080088B8(iVar8);
    uVar2 = hardware_GetField_0x00_88CC(iVar8);
    if ((uVar2 & 2) != 0) break;
    uVar2 = hardware_GetField_0x00(iVar8);
    iVar4 = 0;
    uVar5 = 0;
    if ((uVar2 & 0xff) >> 7 != (uVar2 & 0x7f) >> 6) {
      uVar5 = (uVar2 & 0x3f) >> 5 ^ (uVar2 & 0x1f) >> 4;
    }
    uVar6 = 0x400;
    if (uVar5 != 0) {
      uVar6 = 0x2d4;
    }
    if ((uVar2 & 0x100) != 0) {
      uVar6 = uVar6 << 1;
    }
    if ((uVar2 & 0x200) != 0) {
      uVar6 = uVar6 / 2;
    }
    uVar5 = 0;
    if ((uVar2 & 0x80) != 0) {
      uVar5 = uVar6;
    }
    if ((uVar2 & 0x40) != 0) {
      uVar5 = uVar5 - uVar6;
    }
    if ((uVar2 & 0x20) != 0) {
      iVar4 = -uVar6;
    }
    if ((uVar2 & 0x10) != 0) {
      iVar4 = iVar4 + uVar6;
    }
    hardware_Sub_0806EFC0(iVar8,iVar4,uVar5);
    iVar7 = *(int *)(iVar8 + 0xd4);
    for (iVar4 = *(int *)(iVar8 + 0xd0); iVar4 != iVar7; iVar4 = iVar4 + 0x1c) {
      code_0803EE94_Sub_0805E8F0(iVar4 + 8);
    }
    if ((uVar2 & 1) == 0) {
      hardware_Sub_08070140(iVar8);
    }
    hardware_Ctor_87C8(iVar8);
  }
  SpriteAnimEngine_5B80_Ctor_EAF4(iVar8);
  uVar3 = *(u32 *)(iVar8 + 0xc);
  *(u32 *)(iVar8 + 0xc) = 0;
  *self = uVar3;
  return (self);
}

/* 0x080DC42C (72B) | code_0803EE94_7AEC_Sub_080DC42C (orig: func_080DC42C) | origin: wip | domain: code_0803EE94_7AEC | MEDIUM / graph_algebra */
u32 code_0803EE94_7AEC_Sub_080DC42C(u32 *param_1,int param_2) {
  u32 uVar1;
  u32 auStack_1c [3];
  auStack_1c[0] = *(u32 *)(param_2 + 8);
  *(u32 *)(param_2 + 8) = 0;
  uVar1 = (s8)CppRuntime_builtin_new(8);
  uVar1 = code_0803EE94_7AEC_AutoPtrFactory(uVar1,*(u32 *)(param_2 + 4),auStack_1c);
  *param_1 = uVar1;
  return param_1;
}

