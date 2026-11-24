/* FIO-DECOMP-HMFOMT :: Port Readable Module: SpriteAnimEngine_5B80 (73 functions) */
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

/* 0x08009548 (36B) | SpriteAnimEngine_5B80_Ctor (orig: func_08009548) | origin: pure | domain: SpriteAnimEngine_5B80 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 hardware_Sub_08009300();
u32 SpriteAnimEngine_5B80_Ctor(u32 *arg0) {
  *arg0 = 0;
  arg0[1] = 0;
  arg0[2] = 0x080E5B80;
  hardware_Sub_08009300(arg0 + 3);
  return arg0;
}

/* 0x08050D80 (12B) | SpriteAnimEngine_5B80_Sub_08050D80 (orig: func_08050D80) | origin: pure | domain: SpriteAnimEngine_5B80 | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_0803EE94_78C0_Sub_08050410();
void SpriteAnimEngine_5B80_Sub_08050D80(u32 *arg0) {
  code_0803EE94_78C0_Sub_08050410(*arg0);
}

/* 0x08051504 (492B) | SpriteAnimEngine_5B80_AutoPtrFactory (orig: func_08051504) | origin: wip | domain: SpriteAnimEngine_5B80 | HIGH / vtable_algebra */
u32 SpriteAnimEngine_5B80_AutoPtrFactory(u32 *self,int param_2) {
  short sVar1;
  u16 uVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  u32 *puVar6;
  u32 uVar7;
  u32 uVar8;
  short *psVar9;
  u16 *puVar10;
  int *piVar11;
  u32 uStack_2c;
  u32 *puStack_28;
  u32 uStack_24;
  hardware_Ctor(param_2);
  iVar5 = hardware_GetField_0x00_8918(param_2);
  *(u16 *)(iVar5 + 0x50) = 0x3f;
  puVar6 = (u32 *)CppRuntime_builtin_new(0x10);
  uVar7 = hardware_GetField_0x00_8918(param_2);
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar6[2] = 0x080E5B80;
  hardware_Sub_08009300(puVar6 + 3,uVar7);
  SpriteAnimEngine_5B80_Sub_080516F0(param_2);
  hardware_Sub_0800934C(puVar6 + 3,0x00000889,1,1);
  iVar5 = hardware_GetField_0x00_8940(param_2);
  func_080D3914(iVar5,puVar6,*(u32 *)(*(int *)(iVar5 + 8) + 0x10));
  iVar5 = 0x000008BC;
  *(u32 *)(param_2 + 0x000008BC) = 0;
  bVar4 = false;
  piVar11 = (int *)(param_2 + iVar5);
  do {
    hardware_Ctor_87C8(param_2);
    hardware_Sub_080088B8(param_2);
    iVar5 = *piVar11;
    if (iVar5 == 1) {
      uVar8 = hardware_GetField_0x00(param_2);
      if ((uVar8 & 0x80) == 0) {
        uVar8 = hardware_GetField_0x00(param_2);
        if ((uVar8 & 0x40) != 0) {
          puVar10 = (u16 *)(param_2 + 0x000008B8);
          uVar2 = *puVar10;
          *puVar10 = (u16)(uVar2 - 4);
          if ((int)((uVar2 - 4) * 0x10000) < 0) {
            *puVar10 = 0;
          }
        }
      }
      else {
        psVar9 = (short *)(param_2 + 0x000008B8);
        sVar1 = *psVar9;
        *psVar9 = sVar1 + 4;
        if (0x20 < (short)(sVar1 + 4)) {
          *psVar9 = 0x20;
        }
      }
      bVar3 = false;
      uVar8 = hardware_GetField_0x00_88CC(param_2);
      if (((uVar8 & 2) != 0) || (uVar8 = hardware_GetField_0x00_88CC(param_2), (uVar8 & 8) != 0)) {
        bVar3 = true;
      }
      if (bVar3) {
        hardware_Wrap_m4aMPlayStart(param_2 + 0xc,0xc6);
        *piVar11 = 2;
      }
      iVar5 = hardware_GetField_0x00_8918(param_2);
      *(u16 *)(iVar5 + 0x16) = *(u16 *)(param_2 + 0x000008B8);
    }
    else if (iVar5 < 2) {
      if ((iVar5 == 0) && (-1 < (int)(-*puVar6 | *puVar6))) {
        *piVar11 = 1;
      }
    }
    else if (iVar5 == 2) {
      hardware_Sub_08009378(puVar6 + 3,0x00000889,1,1);
      iVar5 = hardware_GetField_0x00_8940(param_2);
      func_080D3914(iVar5,puVar6,*(u32 *)(*(int *)(iVar5 + 8) + 0x10));
      *piVar11 = 3;
    }
    else if ((iVar5 == 3) && (-1 < (int)(-*puVar6 | *puVar6))) {
      bVar4 = true;
    }
    hardware_Sub_08051D70(param_2);
  } while (!bVar4);
  *self = 0;
  uStack_24 = 0;
  uStack_2c = 0;
  if (puVar6 != (u32 *)0x0) {
    puStack_28 = &uStack_2c;
    func_080D3914(puVar6,3,*(u32 *)(puVar6[2] + 0xc));
  }
  return (self);
}

/* 0x08051D30 (64B) | SpriteAnimEngine_5B80_Sub_08051D30 (orig: func_08051D30) | origin: wip | domain: SpriteAnimEngine_5B80 | MEDIUM / graph_algebra */
void SpriteAnimEngine_5B80_Sub_08051D30(int param_1,int param_2,int param_3,int param_4) {
  short *psVar1;
  int iVar2;
  u16 *puVar3;
  int iVar4;
  iVar4 = 0;
  iVar2 = param_4 * 2 + 0x000020C1;
  puVar3 = (u16 *)(param_2 * 2 + param_3 * 0x40 + 0xf8 + param_1);
  psVar1 = (short *)(param_2 * 2 + param_3 * 0x40 + 0xb8 + param_1);
  do {
    *psVar1 = (short)(param_4 * 2) + 0x20c0 + (short)iVar4;
    *puVar3 = (short)iVar2;
    iVar2 = iVar2 + 1;
    puVar3 = puVar3 + 1;
    psVar1 = psVar1 + 1;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 1);
}

/* 0x080522D8 (16B) | SpriteAnimEngine_5B80_Sub_080522D8 (orig: func_080522D8) | origin: pure | domain: SpriteAnimEngine_5B80 | MEDIUM / graph_algebra */
struct S { u8 a; u16 b; }; void SpriteAnimEngine_5B80_Sub_080522D8(struct S *p, struct S *q, int i) { struct S *s = &p[i]; q->a = s->a; q->b = s->b; }

/* 0x080522E8 (16B) | SpriteAnimEngine_5B80_SetField_0x00 (orig: func_080522E8) | origin: pure | domain: SpriteAnimEngine_5B80 | MEDIUM / graph_algebra */
struct S { u8 a; u16 b; }; void SpriteAnimEngine_5B80_SetField_0x00(struct S *p, struct S *q, int i) { struct S *s = &p[i]; s->a = q->a; s->b = q->b; }

/* 0x08055264 (1632B) | SpriteAnimEngine_5B80_Sub_08055264 (orig: func_08055264) | origin: wip | domain: SpriteAnimEngine_5B80 | MEDIUM / graph_algebra */
void SpriteAnimEngine_5B80_Sub_08055264(int param_1) {
  short sVar1;
  u16 extraout_var;
  int iVar2;
  int iVar3;
  int iVar4;
  u16 extraout_var_00;
  u32 uVar5;
  int *piVar6;
  u16 uVar7;
  u32 uVar8;
  short *psVar9;
  int iVar10;
  short sVar11;
  int iVar12;
  u32 *puVar13;
  u32 in_stack_ffffff80;
  int iStack_7c;
  u32 uStack_78;
  int iStack_74;
  u32 uStack_70;
  u32 uStack_6c;
  u32 uStack_68;
  u32 uStack_64;
  u32 uStack_60;
  int iStack_5c;
  u32 uStack_58;
  int iStack_54;
  u32 uStack_50;
  u32 uStack_4c;
  u32 uStack_48;
  int *piStack_44;
  int *piStack_40;
  int *piStack_3c;
  int *piStack_38;
  int *piStack_34;
  int iStack_30;
  int *piStack_2c;
  int *piStack_28;
  int *piStack_24;
  iStack_7c = 0;
  uStack_78 = uStack_78 & 0xffff0000;
  iStack_74 = 0;
  uStack_70 = uStack_70 & 0xffff0000;
  uStack_6c = 0;
  uStack_68 = uStack_68 & 0xffff0000;
  func_080D3918(&uStack_64,*(int **)(param_1 + 0x238),
                  *(u16 *)
                   (*(int *)(param_1 + 0x23c) + (u32)*(u16 *)(param_1 + 0x244) * 4),
                  *(u32 *)(**(int **)(param_1 + 0x238) + 0x10),0,
                  in_stack_ffffff80 & 0xffff0000);
  LibC_memcpy(&uStack_64,&uStack_64,0x20);
  iVar12 = iStack_54;
  iStack_7c = iStack_5c;
  uStack_78 = uStack_58;
  iStack_74 = iStack_54;
  uStack_70 = uStack_50;
  uStack_6c = uStack_4c;
  uStack_68 = uStack_48;
  iVar2 = hardware_Sub_080074C0(param_1 + 0x470,*(u32 *)(param_1 + 0x474),uStack_4c,iStack_54,
                        uStack_64,uStack_60);
  iVar10 = 0x05000200;
  uVar8 = 0;
  if (iStack_74 != 0) {
    uVar8 = uStack_70 & 0xffff;
  }
  hardware_HW_DMA3SAD(iVar12,iVar2 * 0x20 + 0x05000200,uVar8);
  func_080D3918(&uStack_64,*(int **)(param_1 + 0x270),
                  *(u16 *)
                   (*(int *)(param_1 + 0x274) + (u32)*(u16 *)(param_1 + 0x27c) * 4),
                  *(u32 *)(**(int **)(param_1 + 0x270) + 0x10));
  LibC_memcpy(&uStack_64,&uStack_64,0x20);
  iVar12 = iStack_54;
  iStack_7c = iStack_5c;
  uStack_78 = uStack_58;
  iStack_74 = iStack_54;
  uStack_70 = uStack_50;
  uStack_6c = uStack_4c;
  uStack_68 = uStack_48;
  iVar2 = hardware_Sub_080074C0(param_1 + 0x480,*(u32 *)(param_1 + 0x484),uStack_58,uStack_4c,
                        uStack_64,uStack_60);
  uVar8 = 0;
  if (iStack_74 != 0) {
    uVar8 = uStack_70 & 0xffff;
  }
  piStack_24 = (int *)(param_1 + 0x274);
  hardware_HW_DMA3SAD(iVar12,iVar2 * 0x20 + iVar10,uVar8);
  iVar12 = 0;
  iVar10 = 0;
  piStack_3c = (int *)(param_1 + 0x2ac);
  iStack_30 = param_1 + 0x80;
  piStack_38 = (int *)(param_1 + 0x2e4);
  piStack_34 = (int *)(param_1 + 0x31c);
  piStack_2c = (int *)(param_1 + 0x354);
  do {
    code_0803EE94_Sub_0805E860((u32 *)(param_1 + 0x270),iVar10);
    piVar6 = *(int **)(param_1 + 0x270);
    func_080D3918(&uStack_64,piVar6,
                    *(u16 *)(*piStack_24 + (u32)*(u16 *)(param_1 + 0x27c) * 4),
                    *(u32 *)(*piVar6 + 0x10));
    LibC_memcpy(&uStack_64,&uStack_64,0x20);
    iVar2 = iStack_5c;
    iStack_7c = iStack_5c;
    uStack_78 = uStack_58;
    iStack_74 = iStack_54;
    uStack_70 = uStack_50;
    uStack_6c = uStack_4c;
    uStack_68 = uStack_48;
    *(int *)(param_1 + 0x00002334 + iVar10 * 4) = iVar12;
    iVar3 = hardware_Sub_08007D4C(param_1 + 0x478,*(u32 *)(param_1 + 0x47c),uStack_4c,uStack_48,
                          uStack_64,uStack_60);
    uVar8 = 0;
    if (iStack_7c != 0) {
      uVar8 = uStack_78 & 0xffff;
    }
    hardware_HW_DMA3SAD(iVar2,(iVar3 + iVar12) * 0x20 + 0x06010000,uVar8);
    uVar8 = 0;
    if (iStack_7c != 0) {
      uVar8 = uStack_78 & 0xffff;
    }
    iVar12 = iVar12 + (uVar8 >> 5);
    iVar10 = iVar10 + 1;
  } while (iVar10 < 0x1b);
  func_080D3918(&uStack_64,*(int **)(param_1 + 0x2a8),
                  *(u16 *)(*piStack_3c + (u32)*(u16 *)(param_1 + 0x2b4) * 4),
                  *(u32 *)(**(int **)(param_1 + 0x2a8) + 0x10));
  LibC_memcpy(&uStack_64,&uStack_64,0x20);
  iVar10 = iStack_54;
  iStack_7c = iStack_5c;
  uStack_78 = uStack_58;
  iStack_74 = iStack_54;
  uStack_70 = uStack_50;
  uStack_6c = uStack_4c;
  uStack_68 = uStack_48;
  iVar12 = hardware_Sub_080074C0(param_1 + 0x490,*(u32 *)(param_1 + 0x494),uStack_58,uStack_4c,
                         uStack_64,uStack_60);
  uVar8 = 0;
  if (iStack_74 != 0) {
    uVar8 = uStack_70 & 0xffff;
  }
  hardware_HW_DMA3SAD(iVar10,iVar12 * 0x20 + 0x05000200,uVar8);
  iVar12 = 0;
  iVar10 = 0;
  piStack_44 = &iStack_7c;
  do {
    code_0803EE94_79C8_vfunc_10(&uStack_64,iStack_30,iVar10);
    iVar2 = iStack_5c;
    iStack_7c = iStack_5c;
    uStack_78 = uStack_58;
    iStack_74 = iStack_54;
    uStack_70 = uStack_50;
    uStack_6c = uStack_4c;
    uStack_68 = uStack_48;
    iVar3 = hardware_Sub_08007D4C(param_1 + 0x488,*(u32 *)(param_1 + 0x48c),uStack_58,uStack_4c,
                          uStack_64,uStack_60);
    uVar8 = 0;
    if (iStack_7c != 0) {
      uVar8 = uStack_78 & 0xffff;
    }
    hardware_HW_DMA3SAD(iVar2,(iVar3 + iVar12) * 0x20 + 0x06010000,uVar8);
    uVar8 = 0;
    if (iStack_7c != 0) {
      uVar8 = (u32)*(u16 *)(piStack_44 + 1);
    }
    iVar12 = iVar12 + (uVar8 >> 5);
    iVar10 = iVar10 + 1;
  } while (iVar10 < 3);
  puVar13 = (u32 *)(param_1 + 0x2e0);
  code_0803EE94_Sub_0805E860(puVar13,0x0000091A);
  func_080D3918(&uStack_64,(int *)*puVar13,
                  *(u16 *)(*piStack_38 + (u32)*(u16 *)(param_1 + 0x2ec) * 4),
                  *(u32 *)(*(int *)*puVar13 + 0x10));
  LibC_memcpy(&uStack_64,&uStack_64,0x20);
  iVar10 = iStack_54;
  iStack_7c = iStack_5c;
  uStack_78 = uStack_58;
  iStack_74 = iStack_54;
  uStack_70 = uStack_50;
  uStack_6c = uStack_4c;
  uStack_68 = uStack_48;
  piStack_40 = &iStack_74;
  iVar12 = hardware_Sub_080074C0(param_1 + 0x4b0,*(u32 *)(param_1 + 0x4b4),uStack_4c,piStack_40,
                         uStack_64,uStack_60);
  uVar7 = 0;
  if (iStack_74 != 0) {
    uVar7 = (u16)piStack_40[1];
  }
  hardware_HW_DMA3SAD(iVar10,iVar12 * 0x20 + 0x05000200,uVar7);
  iVar10 = iStack_7c;
  iVar12 = hardware_Sub_08007D4C(param_1 + 0x4a8,*(u32 *)(param_1 + 0x4ac));
  uVar8 = 0;
  if (iStack_7c != 0) {
    uVar8 = uStack_78 & 0xffff;
  }
  hardware_HW_DMA3SAD(iVar10,iVar12 * 0x20 + 0x06010000,uVar8);
  code_0803EE94_Sub_0805E860(puVar13,0x0000091B);
  func_080D3918(&uStack_64,(int *)*puVar13,
                  *(u16 *)(*piStack_38 + (u32)*(u16 *)(param_1 + 0x2ec) * 4),
                  *(u32 *)(*(int *)*puVar13 + 0x10));
  LibC_memcpy(&uStack_64,&uStack_64,0x20);
  iVar10 = iStack_5c;
  iStack_7c = iStack_5c;
  uStack_78 = uStack_58;
  iStack_74 = iStack_54;
  uStack_70 = uStack_50;
  uStack_6c = uStack_4c;
  uStack_68 = uStack_48;
  iVar12 = hardware_Sub_08007D4C(param_1 + 0x4a8,*(u32 *)(param_1 + 0x4ac),uStack_4c,uStack_48,
                         uStack_64,uStack_60);
  uVar8 = 0;
  if (iStack_7c != 0) {
    uVar8 = uStack_78 & 0xffff;
  }
  hardware_HW_DMA3SAD(iVar10,iVar12 * 0x20 + 0x06010040,uVar8);
  func_080D3918(&uStack_64,*(int **)(param_1 + 0x318),
                  *(u16 *)(*piStack_34 + (u32)*(u16 *)(param_1 + 0x324) * 4),
                  *(u32 *)(**(int **)(param_1 + 0x318) + 0x10));
  LibC_memcpy(&uStack_64,&uStack_64,0x20);
  iVar10 = iStack_54;
  iStack_7c = iStack_5c;
  uStack_78 = uStack_58;
  iStack_74 = iStack_54;
  uStack_70 = uStack_50;
  uStack_6c = uStack_4c;
  uStack_68 = uStack_48;
  iVar12 = hardware_Sub_080074C0(param_1 + 0x4c0,*(u32 *)(param_1 + 0x4c4),uStack_58,uStack_4c,
                         uStack_64,uStack_60);
  uVar7 = 0;
  if (iStack_74 != 0) {
    uVar7 = (u16)piStack_40[1];
  }
  hardware_HW_DMA3SAD(iVar10,iVar12 * 0x20 + 0x05000200,uVar7);
  *(u8 *)(param_1 + 0x34c) = 0;
  func_080D3918(&uStack_64,*(int **)(param_1 + 0x350),
                  *(u16 *)(*piStack_2c + (u32)*(u16 *)(param_1 + 0x35c) * 4),
                  *(u32 *)(**(int **)(param_1 + 0x350) + 0x10));
  LibC_memcpy(&uStack_64,&uStack_64,0x20);
  iVar10 = iStack_54;
  iStack_7c = iStack_5c;
  uStack_78 = uStack_58;
  iStack_74 = iStack_54;
  uStack_70 = uStack_50;
  uStack_6c = uStack_4c;
  uStack_68 = uStack_48;
  iVar12 = hardware_Sub_080074C0(param_1 + 0x4d8,*(u32 *)(param_1 + 0x4dc),uStack_58,iStack_54,
                         uStack_64,uStack_60);
  uVar7 = 0;
  if (iStack_74 != 0) {
    uVar7 = (u16)piStack_40[1];
  }
  hardware_HW_DMA3SAD(iVar10,iVar12 * 0x20 + 0x05000200,uVar7);
  if (*(char *)(param_1 + 0x00002324) == '\x01') {
    iVar2 = 0;
    piStack_28 = (int *)(param_1 + 0x3c4);
    iVar10 = param_1 + 0x500;
    iVar12 = param_1 + 0x508;
    do {
      hardware_Sub_080073E0(iVar12,*(u32 *)(iVar10 + 0xc));
      uVar5 = hardware_Sub_0800736C(iVar12);
      *(u32 *)(iVar10 + 0xc) = uVar5;
      code_0803EE94_Sub_0805E860((u32 *)(param_1 + 0x3c0),*(u16 *)(iVar2 * 2 + 0x080FA36C));
      piVar6 = *(int **)(param_1 + 0x3c0);
      func_080D3918(&uStack_64,piVar6,
                      *(u16 *)(*piStack_28 + (u32)*(u16 *)(param_1 + 0x3cc) * 4),
                      *(u32 *)(*piVar6 + 0x10));
      LibC_memcpy(&uStack_64,&uStack_64,0x20);
      iVar3 = iStack_54;
      iStack_7c = iStack_5c;
      uStack_78 = uStack_58;
      iStack_74 = iStack_54;
      uStack_70 = uStack_50;
      uStack_6c = uStack_4c;
      uStack_68 = uStack_48;
      iVar4 = hardware_Sub_080074C0(iVar12,*(u32 *)(iVar10 + 0xc),uStack_4c,uStack_48,uStack_64,
                            uStack_60);
      uVar8 = 0;
      if (iStack_74 != 0) {
        uVar8 = uStack_70 & 0xffff;
      }
      hardware_HW_DMA3SAD(iVar3,iVar4 * 0x20 + 0x05000200,uVar8);
      iVar3 = iStack_7c;
      iVar4 = hardware_Sub_08007D4C(iVar10,*(u32 *)(iVar10 + 4));
      uVar8 = 0;
      if (iStack_7c != 0) {
        uVar8 = uStack_78 & 0xffff;
      }
      hardware_HW_DMA3SAD(iVar3,iVar4 * 0x20 + 0x06010000,uVar8);
      iVar10 = iVar10 + 0x10;
      iVar12 = iVar12 + 0x10;
      iVar2 = iVar2 + 1;
    } while (iVar2 < 3);
    sVar11 = 0x28;
    uVar8 = 0;
    psVar9 = (short *)(param_1 + 0x000022E0);
    do {
      if ((uVar8 & 1) == 0) {
        LibC_rand();
        sVar1 = (extraout_var_00 & 3) + 4;
      }
      else {
        LibC_rand();
        sVar1 = (extraout_var & 1) + 1;
      }
      *psVar9 = sVar11 + sVar1 * 0x18;
      sVar11 = *psVar9;
      sVar1 = func_080D0ED0(uVar8,3);
      psVar9[1] = sVar1;
      psVar9 = psVar9 + 2;
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < 0x10);
  }
  else {
    iVar10 = param_1 + 0x4e8;
    hardware_Sub_080073E0(iVar10,*(u32 *)(param_1 + 0x4ec));
    uVar5 = hardware_Sub_0800736C(iVar10);
    *(u32 *)(param_1 + 0x4ec) = uVar5;
    func_080D3918(&uStack_64,*(int **)(param_1 + 0x3f8),
                    *(u16 *)
                     (*(int *)(param_1 + 0x3fc) + (u32)*(u16 *)(param_1 + 0x404) * 4),
                    *(u32 *)(**(int **)(param_1 + 0x3f8) + 0x10));
    LibC_memcpy(&uStack_64,&uStack_64,0x20);
    iStack_7c = iStack_5c;
    uStack_78 = uStack_58;
    iStack_74 = iStack_54;
    uStack_70 = uStack_50;
    uStack_6c = uStack_4c;
    uStack_68 = uStack_48;
    iVar10 = hardware_Sub_080074C0(iVar10,*(u32 *)(param_1 + 0x4ec),uStack_4c,uStack_48,uStack_64,
                           uStack_60);
    uVar8 = 0;
    if (iStack_74 != 0) {
      uVar8 = uStack_70 & 0xffff;
    }
    hardware_HW_DMA3SAD(iStack_54,iVar10 * 0x20 + 0x05000200,uVar8);
    iVar10 = iStack_7c;
    iVar12 = hardware_Sub_08007D4C(param_1 + 0x4e0,*(u32 *)(param_1 + 0x4e4));
    uVar8 = 0;
    if (iStack_7c != 0) {
      uVar8 = uStack_78 & 0xffff;
    }
    hardware_HW_DMA3SAD(iVar10,iVar12 * 0x20 + 0x06010000,uVar8);
    *(u8 *)(param_1 + 0x0000042C) = 0;
    hardware_Sub_080073E0(param_1 + 0x4f8,*(u32 *)(param_1 + 0x4fc));
    uVar5 = hardware_Sub_0800736C(param_1 + 0x4f8);
    *(u32 *)(param_1 + 0x4fc) = uVar5;
    *(u8 *)(param_1 + 0x00000464) = 0;
  }
}

/* 0x08057B84 (300B) | SpriteAnimEngine_5B80_Sub_08057B84 (orig: func_08057B84) | origin: pure | domain: SpriteAnimEngine_5B80 | MEDIUM / graph_algebra */
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
extern u32 SpriteAnimEngine_5B80_Sub_08057CB0();
extern u32 SpriteAnimEngine_5B80_Sub_08057D34();
void SpriteAnimEngine_5B80_Sub_08057B84(int arg0) {
  u32 val;
  u8 *mem_ptr;
  SpriteAnimEngine_5B80_Sub_08057CB0(arg0,8,0xc,(int)*(short *)(arg0 + 0x000022C4),0);
  SpriteAnimEngine_5B80_Sub_08057D34(arg0,0x40,0x14,0xb);
  if (*(char *)(arg0 + 0x00002324) == '\0') {
    if ((*(u8 *)(arg0 + 0x00002324 + -0x58) & 1) != 0) {
      SpriteAnimEngine_5B80_Sub_08057D34(arg0,0xa0,0x10,0x1a);
      SpriteAnimEngine_5B80_Sub_08057CB0(arg0,0xc0,0x10,(int)*(short *)(arg0 + 0x000022C6),1);
      SpriteAnimEngine_5B80_Sub_08057D34(arg0,0xe0,0x10,0x17);
    }
  }
  else {
    mem_ptr = (u8 *)(arg0 + 0x000022CC);
    if ((*mem_ptr & 2) != 0) {
      SpriteAnimEngine_5B80_Sub_08057D34(arg0,0xa0,8,0x18);
      SpriteAnimEngine_5B80_Sub_08057CB0(arg0,0xc0,8,(int)*(short *)(arg0 + 0x000022C8),1);
      SpriteAnimEngine_5B80_Sub_08057D34(arg0,0xe0,8,0x17);
    }
    if ((*mem_ptr & 4) != 0) {
      SpriteAnimEngine_5B80_Sub_08057D34(arg0,0xa0,0x18,0x19);
      SpriteAnimEngine_5B80_Sub_08057CB0(arg0,0xc0,0x16,(int)*(short *)(arg0 + 0x000022CA),1);
      SpriteAnimEngine_5B80_Sub_08057D34(arg0,0xe0,0x16,0x17);
    }
  }
  val = *(u8 *)(arg0 + 0x000022CE) + 1;
  *(u8 *)(arg0 + 0x000022CE) = val;
  if ((val & 0xf) == 0) {
    *(u8 *)(arg0 + 0x000022CC) =
         *(u8 *)(arg0 + 0x000022CC) ^ *(u8 *)(arg0 + 0x000022CC + 1);
  }
}

/* 0x08057CB0 (132B) | SpriteAnimEngine_5B80_Sub_08057CB0 (orig: func_08057CB0) | origin: pure | domain: SpriteAnimEngine_5B80 | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 SpriteAnimEngine_5B80_Sub_08057D34();
extern u32 func_080D0EC8();
/* paridad 95.7% preset agbcc_O2 */
void SpriteAnimEngine_5B80_Sub_08057CB0(u32 arg0,int arg1,int arg2,int arg3,int arg4) {
  s16 val;
  register s16 val3;
  int val2;
  int val4;
  val4 = 100;
  val3 = (u8)0;
  if (0 != arg4) {
    val3 = 0xc;
  }
  val = 8;
  if (0 == arg4) {
    val = 0x10;
  }
  do {
    val2 = func_080D0EC8(arg3,val4);
    SpriteAnimEngine_5B80_Sub_08057D34(arg0,arg1,arg2,val2 + val3);
    arg1 = arg1 + val;
    arg3 = arg3 - val2 * val4;
    val4 = func_080D0EC8(val4,10);
    if (val4 == 1) {
      SpriteAnimEngine_5B80_Sub_08057D34(arg0,arg1,arg2 + val,val3 + 10);
      arg1 = arg1 + 8;
    }
  } while (0 < val4);
}

/* 0x08057D34 (164B) | SpriteAnimEngine_5B80_Sub_08057D34 (orig: func_08057D34) | origin: wip | domain: SpriteAnimEngine_5B80 | MEDIUM / graph_algebra */
void SpriteAnimEngine_5B80_Sub_08057D34(int param_1,u16 param_2,u16 param_3,int param_4) {
  u32 uVar1;
  u16 uVar2;
  u16 uStack_54;
  u16 uStack_52;
  u16 uStack_50;
  short sStack_4e;
  u16 uStack_4c;
  u32 uStack_48;
  u8 uStack_44;
  u8 uStack_43;
  u32 uStack_40;
  u8 uStack_3c;
  int iStack_38;
  u16 uStack_34;
  uStack_54 = 0;
  uStack_52 = 0;
  uStack_50 = 0;
  sStack_4e = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_43 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  code_0803EE94_79C8_vfunc_10(&iStack_38,param_1 + 0x50,param_4);
  uStack_54 = param_2;
  uStack_52 = param_3;
  uStack_50 = hardware_Sub_080074C0(param_1 + 0x480,*(u32 *)(param_1 + 0x484));
  sStack_4e = hardware_Sub_08007D4C(param_1 + 0x478,*(u32 *)(param_1 + 0x47c));
  sStack_4e = (short)*(u32 *)(param_1 + 0x00002334 + param_4 * 4) + sStack_4e;
  uStack_4c = 1;
  uStack_3c = 1;
  uVar1 = hardware_GetField_0x00_8920(param_1);
  uVar2 = 0;
  if (iStack_38 != 0) {
    uVar2 = uStack_34;
  }
  code_0803EE94_Sub_0805E99C(uVar1,iStack_38,uVar2,&uStack_54);
}

/* 0x08057F24 (40B) | SpriteAnimEngine_5B80_Sub_08057F24 (orig: func_08057F24) | origin: wip | domain: SpriteAnimEngine_5B80 | MEDIUM / graph_algebra */
void SpriteAnimEngine_5B80_Sub_08057F24(int param_1) {
  u8 bVar1;
  bVar1 = *(u8 *)(param_1 + 0x2c);
  *(u8 *)(param_1 + 0x2c) = bVar1 & 0xfc | (bVar1 & 3) + 1 & 3;
  SpriteAnimEngine_Sub_08057F64();
}

/* 0x08059C94 (844B) | SpriteAnimEngine_5B80_Sub_08059C94 (orig: func_08059C94) | origin: wip | domain: SpriteAnimEngine_5B80 | MEDIUM / graph_algebra */
void SpriteAnimEngine_5B80_Sub_08059C94(int param_1) {
  u16 uVar1;
  u32 uVar2;
  u32 uVar3;
  int iVar4;
  int iVar5;
  u16 *puVar6;
  int *piVar7;
  u32 uVar8;
  u32 uVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  u32 uStack_94;
  int iStack_8c;
  u32 uStack_88;
  int iStack_84;
  u32 uStack_80;
  u8 auStack_70 [64];
  u32 uStack_30;
  u32 *puStack_2c;
  int *piStack_28;
  u8 *puStack_24;
  piVar7 = *(int **)(param_1 + 0x358);
  piVar10 = (int *)(param_1 + 0x35c);
  func_080D3918(&uStack_94,piVar7,
                  *(u16 *)(*piVar10 + (u32)*(u16 *)(param_1 + 0x364) * 4),
                  *(u32 *)(*piVar7 + 0x10));
  LibC_memcpy(&uStack_94,&uStack_94,0x20);
  piVar7 = *(int **)(param_1 + 0x358);
  func_080D3918(&uStack_94,piVar7,
                  *(u16 *)(*piVar10 + (u32)*(u16 *)(param_1 + 0x364) * 4),
                  *(u32 *)(*piVar7 + 0x10));
  LibC_memcpy(&uStack_94,&uStack_94,0x20);
  iVar4 = hardware_Sub_080074C0(param_1 + 0x608,*(u32 *)(param_1 + 0x60c));
  uVar8 = 0;
  if (iStack_84 != 0) {
    uVar8 = uStack_80 & 0xffff;
  }
  hardware_HW_DMA3SAD(iStack_84,iVar4 * 0x20 + 0x05000200,uVar8);
  iVar12 = 0;
  iVar4 = 0;
  puStack_2c = &uStack_30;
  puStack_24 = auStack_70;
  piStack_28 = piVar10;
  do {
    code_0803EE94_Sub_0805E860((u32 *)(param_1 + 0x358),iVar4);
    piVar7 = *(int **)(param_1 + 0x358);
    func_080D3918(&uStack_94,piVar7,
                    *(u16 *)(*piStack_28 + (u32)*(u16 *)(param_1 + 0x364) * 4),
                    *(u32 *)(*piVar7 + 0x10));
    LibC_memcpy(&uStack_94,&uStack_94,0x20);
    uVar8 = uStack_88;
    iVar11 = iStack_8c;
    iVar5 = hardware_Sub_08007D4C(param_1 + 0x600,*(u32 *)(param_1 + 0x604));
    uVar9 = 0;
    if (iVar11 != 0) {
      uVar9 = uVar8 & 0xffff;
    }
    hardware_HW_DMA3SAD(iVar11,(iVar5 + iVar12) * 0x20 + 0x06010000,uVar9);
    uVar9 = 0;
    if (iVar11 != 0) {
      uVar9 = uVar8 & 0xffff;
    }
    iVar12 = iVar12 + (uVar9 >> 5);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 4);
  hardware_HW_DMA3SAD_8EB8(0,0x06007FE0,0x20);
  uVar2 = 0x0600E000;
  hardware_HW_DMA3SAD_8EB8(0xffffffff,0x0600E000,0x800);
  uVar3 = 0x0600E800;
  hardware_HW_DMA3SAD_8EB8(0xffffffff,0x0600E800,0x800);
  hardware_HW_DMA3SAD_8EB8(0xffffffff,0x0600F000,0x800);
  puVar6 = (u16 *)hardware_GetField_0x00_8918(param_1);
  (*(u16 *)&uStack_94) = 0x1e40;
  iVar11 = 0;
  *puVar6 = 0x1e40;
  iVar4 = hardware_GetField_0x00_8918(param_1);
  (*(u16 *)&uStack_94) = (u16)0x00005C43;
  *(u16 *)(iVar4 + 0xe) = (u16)uStack_94;
  iVar4 = hardware_GetField_0x00_8918(param_1);
  (*(u16 *)&uStack_94) = (u16)0x00001D41;
  *(u16 *)(iVar4 + 0xc) = (u16)uStack_94;
  iVar4 = hardware_GetField_0x00_8918(param_1);
  (*(u16 *)&uStack_94) = (u16)0x00005E42;
  *(u16 *)(iVar4 + 10) = (u16)uStack_94;
  hardware_HW_DMA3SAD(*(u16 *)0x080F9F70,0x6000000,*(u16 *)0x080F9F74);
  hardware_HW_DMA3SAD_8EB8(0x00030003,uVar2,0x800);
  iVar4 = hardware_GetField_0x00_8918(param_1);
  (*(u16 *)&uStack_94) = 0;
  *(u16 *)(iVar4 + 0x1c) = 0;
  iVar4 = hardware_GetField_0x00_8918(param_1);
  (*(u16 *)&uStack_94) = 0;
  *(u16 *)(iVar4 + 0x1e) = 0;
  code_0803EE94_Sub_08051320(uVar3,0,0,0x20,3,0,0);
  iVar4 = hardware_GetField_0x00_8918(param_1);
  (*(u16 *)&uStack_94) = 0;
  *(u16 *)(iVar4 + 0x18) = 0;
  iVar4 = hardware_GetField_0x00_8918(param_1);
  (*(u16 *)&uStack_94) = 0;
  *(u16 *)(iVar4 + 0x1a) = 0;
  iVar4 = hardware_GetField_0x00_8918(param_1);
  (*(u16 *)&uStack_94) = 0;
  *(u16 *)(iVar4 + 0x14) = 0;
  iVar4 = hardware_GetField_0x00_8918(param_1);
  uStack_94 = (u32)(*(u16 *)((u8 *)&uStack_94 + 2)) << 0x10;
  *(u16 *)(iVar4 + 0x16) = 0;
  hardware_HW_DMA3SAD(*(u16 *)0x080F9F78,0x5000000,0x20);
  puVar6 = 0x05000040;
  *(u16 *)0x05000040 = 0x3e0;
  puVar6[1] = 0;
  uVar1 = (u16)0x00004218;
  puVar6[2] = uVar1;
  iVar12 = param_1 + 0x618;
  iVar4 = hardware_Sub_080074C0(iVar12,*(u32 *)(param_1 + 0x61c));
  *(u16 *)(iVar4 * 0x20 + 0x05000200) = 0x3e0;
  iVar4 = hardware_Sub_080074C0(iVar12,*(u32 *)(param_1 + 0x61c));
  *(u16 *)(iVar4 * 0x20 + 0x05000202) = 0;
  iVar4 = hardware_Sub_080074C0(iVar12,*(u32 *)(param_1 + 0x61c));
  *(u16 *)(iVar4 * 0x20 + 0x05000204) = uVar1;
  do {
    uVar1 = *(u16 *)(iVar11 * 2 + 0x080FAE6A);
    uStack_30 = ((u16)(1));
    *(u16 *)((int)puStack_2c + 2) = 2;
    SpriteAnimEngine_Sub_0804E5AC(uStack_30,auStack_70,0,0,uVar1,0,1);
    iVar4 = hardware_Sub_08007D4C(param_1 + 0x610,*(u32 *)(param_1 + 0x614));
    hardware_HW_DMA3SAD(puStack_24,(iVar4 + iVar11 * 2) * 0x20 + 0x06010000,0x40);
    iVar11 = iVar11 + 1;
  } while (iVar11 < 0x18);
}

/* 0x08059FE0 (1040B) | SpriteAnimEngine_5B80_Sub_08059FE0 (orig: func_08059FE0) | origin: wip | domain: SpriteAnimEngine_5B80 | MEDIUM / graph_algebra */
void SpriteAnimEngine_5B80_Sub_08059FE0(int param_1,int param_2) {
  u16 uVar1;
  int iVar2;
  int iVar3;
  u32 uVar4;
  short *psVar5;
  u16 uVar6;
  short *psVar7;
  short sVar8;
  u32 uVar9;
  int iVar10;
  short sVar11;
  u32 *puVar12;
  u32 *puVar13;
  int iVar14;
  int iVar15;
  int *piVar16;
  int iStack_4;
  u32 *puVar17;
  u32 *puVar18;
  u32 *puVar19;
  u32 *puVar20;
  uVar9 = 0x0875196C;
  iVar2 = 0xFFFFF490;
  piVar16 = (int *)(0 + 0xFFFFF490);
  puVar17 = (u32 *)(0 + 0xFFFFF490);
  puVar18 = (u32 *)(0 + 0xFFFFF490);
  puVar19 = (u32 *)(0 + 0xFFFFF490);
  puVar20 = (u32 *)(0 + 0xFFFFF490);
  *(int *)(0 + 0x00000B54 + 0xFFFFF490) = param_2;
  if (param_2 == 0) {
    code_0803EE94_79C8_vfunc_10(0 + 0xFFFFF490,param_1 + 0x170,0);
    uVar9 = *(u32 *)((int)&iStack_4 + iVar2);
    iVar3 = hardware_Sub_080074C0(param_1 + 0x648,*(u32 *)(param_1 + 0x64c));
    iVar15 = 0x05000200;
    uVar6 = 0;
    if (*(int *)((int)&iStack_4 + iVar2) != 0) {
      uVar6 = *(u16 *)(0 + iVar2);
    }
    hardware_HW_DMA3SAD(uVar9,iVar3 * 0x20 + 0x05000200,uVar6);
    uVar9 = *(u32 *)(0 + iVar2);
    iVar3 = hardware_Sub_08007D4C(param_1 + 0x640,*(u32 *)(param_1 + 0x644));
    uVar6 = 0;
    if (*(int *)(0 + iVar2) != 0) {
      uVar6 = *(u16 *)(0 + iVar2);
    }
    hardware_HW_DMA3SAD(uVar9,iVar3 * 0x20 + 0x06010000,uVar6);
    uVar9 = 0x08752F8C;
    iVar3 = hardware_Sub_08007D4C(param_1 + 0x610,*(u32 *)(param_1 + 0x614));
    hardware_HW_DMA3SAD(uVar9,iVar3 * 0x20 + 0x06010600,0x80);
    uVar9 = 0x0875300C;
    iVar3 = hardware_Sub_080074C0(param_1 + 0x620,*(u32 *)(param_1 + 0x624));
    hardware_HW_DMA3SAD(uVar9,iVar3 * 0x20 + iVar15,0x20);
  }
  else {
    iVar15 = hardware_Sub_08007D4C(param_1 + 0x610,*(u32 *)(param_1 + 0x614));
    hardware_HW_DMA3SAD(uVar9,iVar15 * 0x20 + 0x06010600,0x80);
    uVar9 = 0x087519EC;
    iVar15 = hardware_Sub_080074C0(param_1 + 0x620,*(u32 *)(param_1 + 0x624));
    hardware_HW_DMA3SAD(uVar9,iVar15 * 0x20 + 0x05000200,0x20);
  }
  iVar3 = 0x0000142C + param_1;
  *(u8 **)(0 + 0x00000B6C + iVar2) =
       0 + 0x00000B34 + iVar2;
  *(u8 **)(0 + 0x00000B68 + iVar2) = 0 + iVar2;
  *(u8 **)(0 + 0x00000B5C + iVar2) = 0 + iVar2;
  *(u8 **)(0 + iVar2) = 0 + 0x00000B44 + iVar2;
  *(u8 **)(0 + 0x00000B58 + iVar2) = 0 + iVar2;
  *(u8 **)(0 + 0x00000B64 + iVar2) =
       0 + 0x00000B48 + iVar2;
  puVar13 = (u32 *)(0 + 0x00000B38 + iVar2);
  puVar12 = (u32 *)(0 + 0x00000B3C + iVar2);
  iVar14 = 3;
  iVar15 = 0x06002800;
  do {
    iVar10 = 0x00000B34 + iVar2;
    *(u16 *)(0 + iVar10) = 0xc;
    *(u16 *)(*(int *)(0 + 0x00000B6C + iVar2) + 2) = 2;
    Code_Lib_Syscall_Wrap_CpuFastSet_E7A0(*(u32 *)(0 + iVar10),0 + iVar2,0);
    uVar1 = *(u16 *)(iVar3 + 0x20);
    if (uVar1 < 0x28) {
      *(u16 *)puVar13 = 0xc;
      *(u16 *)((int)puVar13 + 2) = 2;
      uVar9 = *puVar13;
      *piVar16 = (u32)uVar1 * 0xd + 0x080FA796;
      *(u32 *)(0 + iVar2) = 0;
      *(u32 *)(0 + iVar2) = 1;
      SpriteAnimEngine_Sub_0804E958(uVar9,0 + iVar2,0,0);
    }
    else {
      uVar9 = Animal_GetName(*(u32 *)(0x000014DC + param_1));
      *(u16 *)puVar12 = 0xc;
      *(u16 *)((int)puVar12 + 2) = 2;
      uVar4 = *puVar12;
      *puVar17 = uVar9;
      *(u32 *)(0 + iVar2) = 0;
      *(u32 *)(0 + iVar2) = 1;
      SpriteAnimEngine_Sub_0804E958(uVar4,0 + iVar2,0,0);
    }
    hardware_HW_DMA3SAD(*(u32 *)(0 + 0x00000B68 + iVar2),iVar15,0x300);
    iVar15 = iVar15 + 0x300;
    iVar14 = iVar14 + -1;
    iVar3 = iVar3 + 0x2c;
  } while (-1 < iVar14);
  *(u16 *)(0 + iVar2) = 0x20;
  *(u16 *)(*(int *)(0 + 0x00000B5C + iVar2) + 2) = 2;
  Code_Lib_Syscall_Wrap_CpuFastSet_E7A0(*(u32 *)(0 + iVar2),0 + iVar2,0);
  uVar9 = 0x080FAE9C;
  iVar15 = 0x00000B44 + iVar2;
  *(u16 *)(0 + iVar15) = 0x20;
  *(u16 *)(*(int *)(0 + iVar2) + 2) = 2;
  uVar4 = *(u32 *)(0 + iVar15);
  *puVar18 = uVar9;
  *(u32 *)(0 + iVar2) = 0;
  *(u32 *)(0 + iVar2) = 1;
  SpriteAnimEngine_Sub_0804E958(uVar4,0 + iVar2,0,0);
  hardware_HW_DMA3SAD(*(u32 *)(0 + 0x00000B58 + iVar2),0x06004000,0x800);
  iVar15 = 0x00000B48 + iVar2;
  *(u16 *)(0 + iVar15) = 0x20;
  *(u16 *)(*(int *)(0 + 0x00000B64 + iVar2) + 2) = 2;
  Code_Lib_Syscall_Wrap_CpuFastSet_E7A0(*(u32 *)(0 + iVar15),
                *(u32 *)(0 + 0x00000B58 + iVar2),0);
  if (*(int *)(0 + 0x00000B54 + iVar2) == 0) {
    *(u16 *)(0 + 0x00000B4C + iVar2) = 0x20;
    *(u16 *)(0 + 0x00000B4C + iVar2) = 2;
    uVar9 = *(u32 *)(0 + 0x00000B4C + iVar2);
    *puVar19 = 0x080FAEB8;
    *(u32 *)(0 + iVar2) = 0;
    *(u32 *)(0 + iVar2) = 1;
    SpriteAnimEngine_Sub_0804E958(uVar9,*(u32 *)(0 + 0x00000B58 + iVar2),0,0);
  }
  else {
    *(u16 *)(0 + iVar2) = 0x20;
    *(u16 *)(0 + iVar2) = 2;
    uVar9 = *(u32 *)(0 + iVar2);
    *puVar20 = 0x080FAEC4;
    *(u32 *)(0 + iVar2) = 0;
    *(u32 *)(0 + iVar2) = 1;
    SpriteAnimEngine_Sub_0804E958(uVar9,*(u32 *)(0 + 0x00000B58 + iVar2),0,0);
  }
  hardware_HW_DMA3SAD(*(u32 *)(0 + 0x00000B58 + iVar2),0x06004800,0x800);
  hardware_HW_DMA3SAD_8EB8(0xffffffff,0x00000BEA + param_1,0x800);
  iVar15 = 0;
  iVar3 = 0x00000BF2 + param_1;
  sVar11 = 0x2140;
  do {
    iVar10 = 0;
    iVar14 = iVar15 * 2;
    iVar15 = iVar15 + 1;
    sVar8 = sVar11 + 0xc;
    psVar7 = (short *)((iVar14 + 7) * 0x40 + iVar3);
    psVar5 = (short *)((iVar14 + 6) * 0x40 + iVar3);
    do {
      *psVar5 = sVar11 + (short)iVar10;
      *psVar7 = sVar8;
      sVar8 = sVar8 + 1;
      psVar7 = psVar7 + 1;
      psVar5 = psVar5 + 1;
      iVar10 = iVar10 + 1;
    } while (iVar10 < 0xc);
    sVar11 = sVar11 + 0x18;
  } while (iVar15 < 4);
  iVar15 = 0;
  iVar3 = 0x00000BEA + param_1;
  do {
    iVar14 = iVar15;
    if (iVar15 < 0) {
      iVar14 = iVar15 + 0x1f;
    }
    iVar14 = iVar14 >> 5;
    iVar10 = (iVar15 + iVar14 * -0x20) * 2;
    *(short *)(iVar3 + iVar10 + (iVar14 + 4) * 0x40) = (short)iVar15 + 0x2200;
    *(short *)(iVar3 + iVar10 + (iVar14 + 0xf) * 0x40) = (short)iVar15 + 0x2240;
    iVar15 = iVar15 + 1;
  } while (iVar15 < 0x40);
  hardware_HW_DMA3SAD(0x00000BEA + param_1,0x0600F000,0x800);
  return *(u32 *)(0 + iVar2);
}

/* 0x0805A4DC (352B) | SpriteAnimEngine_5B80_Sub_0805A4DC (orig: func_0805A4DC) | origin: wip | domain: SpriteAnimEngine_5B80 | MEDIUM / graph_algebra */
void SpriteAnimEngine_5B80_Sub_0805A4DC(int param_1,int param_2) {
    int iVar2;
    int iVar3;
  register int iVar1;
  *(u16 *)(param_1 + 0x00000BD8) = 0;
  if (param_2 == 0) {
    SpriteAnimEngine_5B80_Sub_0805A6E4(param_1,0x10,4,0x18,1);
    SpriteAnimEngine_5B80_Sub_0805A63C(param_1,0x28,4,1,*(u32 *)(param_1 + 0x00001414),10,0xc);
  }
  else {
    iVar2 = 8;
    iVar1 = 0;
    do {
      SpriteAnimEngine_5B80_Sub_0805A6E4(param_1,iVar2,4,iVar1 + 0xd,1);
      iVar2 = iVar2 + 8;
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0xb);
    SpriteAnimEngine_5B80_Sub_0805A63C(param_1,0x88,4,1,*(u32 *)(param_1 + 0x00001418),5,10);
    SpriteAnimEngine_5B80_Sub_0805A63C(param_1,0xa0,0x78,2,(int)*(short *)(param_1 + 0x0000141E),4,10);
    SpriteAnimEngine_5B80_Sub_0805A6E4(param_1,0,*(short *)(param_1 + 0x000013FE) * 0x10 + 0x30,0x18,2);
  }
  iVar2 = 0x30;
  iVar3 = 3;
  SpriteAnimEngine_5B80_Sub_0805A63C(param_1,0x20,0x20,2,*(short *)(param_1 + 0x0000141C) + 1,1,0);
  iVar1 = param_1 + 0x0000142C;
  do {
    SpriteAnimEngine_5B80_Sub_0805A6E4(param_1,0x88,iVar2,0xb,2);
    SpriteAnimEngine_5B80_Sub_0805A63C(param_1,0x90,iVar2,2,(int)*(short *)(iVar1 + 0x28),2,10);
    SpriteAnimEngine_5B80_Sub_0805A63C(param_1,0xc0,iVar2,2,(int)*(short *)(iVar1 + 0x2a),2,10);
    iVar2 = iVar2 + 0x10;
    iVar3 = (s8)iVar3 + -1;
    iVar1 = iVar1 + 0x2c;
  } while (-1 < iVar3);
}

/* 0x0805A63C (168B) | SpriteAnimEngine_5B80_Sub_0805A63C (orig: func_0805A63C) | origin: wip | domain: SpriteAnimEngine_5B80 | MEDIUM / graph_algebra */
void SpriteAnimEngine_5B80_Sub_0805A63C(u32 param_1,int param_2,u32 param_3,u32 param_4,int param_5,
             int param_6,int param_7) {
  bool bVar1;
  int iVar2;
  int iVar3;
  if ((u8)param_6 < 2) {
    iVar3 = 1;
  }
  else {
    iVar3 = 10;
    while (param_6 = (s16)param_6 + -1, 1 < param_6) {
      iVar3 = iVar3 * 10;
    }
  }
  bVar1 = false;
  for (; 0 < iVar3; iVar3 = func_080D0EC8(iVar3,10)) {
    if (iVar3 == 1) {
      bVar1 = true;
    }
    iVar2 = func_080D0EC8(param_5,iVar3);
    if ((iVar2 != 0) || (bVar1)) {
      SpriteAnimEngine_5B80_Sub_0805A6E4(param_1,param_2,param_3,iVar2,param_4);
      bVar1 = true;
    }
    param_2 = param_2 + 8;
    param_5 = param_5 - iVar3 * iVar2;
  }
  if (param_7 != 0) {
    SpriteAnimEngine_5B80_Sub_0805A6E4(param_1,param_2,param_3,param_7,param_4);
  }
}

/* 0x0805A6E4 (96B) | SpriteAnimEngine_5B80_Sub_0805A6E4 (orig: func_0805A6E4) | origin: wip | domain: SpriteAnimEngine_5B80 | MEDIUM / graph_algebra */
void SpriteAnimEngine_5B80_Sub_0805A6E4(int param_1,u16 param_2,u16 param_3,u16 param_4,
             u16 param_5) {
  short *psVar1;
  psVar1 = (short *)(param_1 + 0x00000BD8);
  *(u16 *)(param_1 + 0x738 + *psVar1 * 8) = param_2;
  *(u16 *)(param_1 + 0x0000073A + *psVar1 * 8) = param_3;
  *(u16 *)(param_1 + 0x0000073C + *psVar1 * 8) = param_4;
  *(u16 *)(param_1 + 0x0000073E + *psVar1 * 8) = param_5;
  *psVar1 = *psVar1 + 1;
}

/* 0x0805B38C (2216B) | SpriteAnimEngine_5B80_Sub_0805B38C (orig: func_0805B38C) | origin: wip | domain: SpriteAnimEngine_5B80 | MEDIUM / graph_algebra */
void SpriteAnimEngine_5B80_Sub_0805B38C(int param_1) {
  u32 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  u32 uVar7;
  u16 *puVar8;
  int iVar9;
  u32 in_stack_ffffff54;
  int iStack_a8;
  u32 uStack_a4;
  int iStack_a0;
  u32 uStack_9c;
  u32 uStack_98;
  u32 uStack_94;
  u32 uStack_90;
  u32 uStack_8c;
  int iStack_88;
  u32 uStack_84;
  int iStack_80;
  u32 uStack_7c;
  u32 uStack_78;
  u32 uStack_74;
  int aiStack_70 [2];
  int aiStack_68 [2];
  int aiStack_60 [2];
  int *piStack_58;
  int *piStack_54;
  int *piStack_50;
  int *piStack_4c;
  int *piStack_48;
  int iStack_44;
  int *piStack_40;
  int iStack_3c;
  int *piStack_38;
  int *piStack_34;
  int *piStack_30;
  int iStack_2c;
  int *piStack_28;
  int *piStack_24;
  iStack_a8 = 0;
  uStack_a4 = uStack_a4 & 0xffff0000;
  iStack_a0 = 0;
  uStack_9c = uStack_9c & 0xffff0000;
  uStack_98 = 0;
  uStack_94 = uStack_94 & 0xffff0000;
  func_080D3918(&uStack_90,*(int **)(param_1 + 0x1d0),
                  *(u16 *)
                   (*(int *)(param_1 + 0x1d4) + (u32)*(u16 *)(param_1 + 0x1dc) * 4),
                  *(u32 *)(**(int **)(param_1 + 0x1d0) + 0x10),0,
                  in_stack_ffffff54 & 0xffff0000);
  LibC_memcpy(&uStack_90,&uStack_90,0x20);
  iVar9 = iStack_80;
  iStack_a8 = iStack_88;
  uStack_a4 = uStack_84;
  iStack_a0 = iStack_80;
  uStack_9c = uStack_7c;
  uStack_98 = uStack_78;
  uStack_94 = uStack_74;
  iVar2 = hardware_Sub_080074C0(param_1 + 0x5c8,*(u32 *)(param_1 + 0x5cc),uStack_78,uStack_74,
                        uStack_90,uStack_8c);
  uVar7 = 0;
  if (iStack_a0 != 0) {
    uVar7 = uStack_9c & 0xffff;
  }
  hardware_HW_DMA3SAD(iVar9,iVar2 * 0x20 + 0x05000200,uVar7);
  iVar2 = 0;
  iVar9 = 0;
  piStack_54 = (int *)(param_1 + 0x20c);
  piStack_40 = (int *)(param_1 + 0x244);
  piStack_30 = (int *)(param_1 + 0x2b4);
  iStack_44 = param_1 + 0x50;
  piStack_28 = (int *)(param_1 + 0x324);
  piStack_38 = (int *)(param_1 + 0x80);
  piStack_50 = aiStack_70;
  iStack_2c = param_1 + 0xe0;
  piStack_4c = aiStack_68;
  piStack_34 = (int *)(0x00000474 + param_1);
  piStack_48 = aiStack_60;
  piStack_24 = (int *)(0x0000058C + param_1);
  do {
    code_0803EE94_Sub_0805E860((u32 *)(param_1 + 0x1d0),iVar9);
    piVar6 = *(int **)(param_1 + 0x1d0);
    func_080D3918(&uStack_90,piVar6,
                    *(u16 *)
                     (*(int *)(param_1 + 0x1d4) + (u32)*(u16 *)(param_1 + 0x1dc) * 4),
                    *(u32 *)(*piVar6 + 0x10));
    LibC_memcpy(&uStack_90,&uStack_90,0x20);
    iVar4 = iStack_88;
    iStack_a8 = iStack_88;
    uStack_a4 = uStack_84;
    iStack_a0 = iStack_80;
    uStack_9c = uStack_7c;
    uStack_98 = uStack_78;
    uStack_94 = uStack_74;
    iVar3 = hardware_Sub_08007D4C(param_1 + 0x5c0,*(u32 *)(param_1 + 0x5c4),uStack_78,uStack_74,
                          uStack_90,uStack_8c);
    uVar7 = 0;
    if (iStack_a8 != 0) {
      uVar7 = uStack_a4 & 0xffff;
    }
    hardware_HW_DMA3SAD(iVar4,(iVar3 + iVar2) * 0x20 + 0x06010000,uVar7);
    uVar7 = 0;
    if (iStack_a8 != 0) {
      uVar7 = uStack_a4 & 0xffff;
    }
    iVar2 = iVar2 + (uVar7 >> 5);
    iVar9 = iVar9 + 1;
  } while (iVar9 < 4);
  func_080D3918(&uStack_90,*(int **)(param_1 + 0x208),
                  *(u16 *)(*piStack_54 + (u32)*(u16 *)(param_1 + 0x214) * 4),
                  *(u32 *)(**(int **)(param_1 + 0x208) + 0x10));
  LibC_memcpy(&uStack_90,&uStack_90,0x20);
  iVar2 = iStack_80;
  iStack_a8 = iStack_88;
  uStack_a4 = uStack_84;
  iStack_a0 = iStack_80;
  uStack_9c = uStack_7c;
  uStack_98 = uStack_78;
  uStack_94 = uStack_74;
  iVar4 = hardware_Sub_080074C0(param_1 + 0x660,*(u32 *)(param_1 + 0x664),uStack_78,uStack_74,
                        uStack_90,uStack_8c);
  iVar9 = 0x05000200;
  uVar7 = 0;
  if (iStack_a0 != 0) {
    uVar7 = uStack_9c & 0xffff;
  }
  hardware_HW_DMA3SAD(iVar2,iVar4 * 0x20 + 0x05000200,uVar7 >> 1);
  uVar7 = 0;
  if (iStack_a0 != 0) {
    uVar7 = uStack_9c & 0xffff;
  }
  iVar4 = iStack_a0 + (uVar7 >> 1);
  iVar2 = hardware_Sub_080074C0(param_1 + 0x668,*(u32 *)(param_1 + 0x66c));
  uVar7 = 0;
  if (iStack_a0 != 0) {
    uVar7 = uStack_9c & 0xffff;
  }
  hardware_HW_DMA3SAD(iVar4,iVar2 * 0x20 + iVar9,uVar7 >> 1);
  func_080D3918(&uStack_90,*(int **)(param_1 + 0x240),
                  *(u16 *)(*piStack_40 + (u32)*(u16 *)(param_1 + 0x24c) * 4),
                  *(u32 *)(**(int **)(param_1 + 0x240) + 0x10));
  LibC_memcpy(&uStack_90,&uStack_90,0x20);
  iVar2 = iStack_80;
  iStack_a8 = iStack_88;
  uStack_a4 = uStack_84;
  iStack_a0 = iStack_80;
  uStack_9c = uStack_7c;
  uStack_98 = uStack_78;
  uStack_94 = uStack_74;
  iVar4 = hardware_Sub_080074C0(param_1 + 0x678,*(u32 *)(param_1 + 0x67c),uStack_84,uStack_78,
                        uStack_90,uStack_8c);
  uVar7 = 0;
  if (iStack_a0 != 0) {
    uVar7 = uStack_9c & 0xffff;
  }
  hardware_HW_DMA3SAD(iVar2,iVar4 * 0x20 + iVar9,uVar7 >> 1);
  uVar7 = 0;
  if (iStack_a0 != 0) {
    uVar7 = uStack_9c & 0xffff;
  }
  iVar4 = iStack_a0 + (uVar7 >> 1);
  iVar2 = hardware_Sub_080074C0(param_1 + 0x680,*(u32 *)(param_1 + 0x684));
  uVar7 = 0;
  if (iStack_a0 != 0) {
    uVar7 = uStack_9c & 0xffff;
  }
  hardware_HW_DMA3SAD(iVar4,iVar2 * 0x20 + iVar9,uVar7 >> 1);
  if (*(char *)(0x0000140E + param_1) == '\0') {
    func_080D3918(&uStack_90,*(int **)(param_1 + 0x278),
                    *(u16 *)
                     (*(int *)(param_1 + 0x27c) + (u32)*(u16 *)(param_1 + 0x284) * 4),
                    *(u32 *)(**(int **)(param_1 + 0x278) + 0x10));
    LibC_memcpy(&uStack_90,&uStack_90,0x20);
    iVar2 = iStack_80;
    iStack_a8 = iStack_88;
    uStack_a4 = uStack_84;
    iStack_a0 = iStack_80;
    uStack_9c = uStack_7c;
    uStack_98 = uStack_78;
    uStack_94 = uStack_74;
    iVar4 = hardware_Sub_080074C0(param_1 + 0x690,*(u32 *)(param_1 + 0x694),uStack_78,uStack_74,
                          uStack_90,uStack_8c);
    uVar7 = 0;
    if (iStack_a0 != 0) {
      uVar7 = uStack_9c & 0xffff;
    }
    hardware_HW_DMA3SAD(iVar2,iVar4 * 0x20 + iVar9,uVar7 >> 1);
    uVar7 = 0;
    if (iStack_a0 != 0) {
      uVar7 = uStack_9c & 0xffff;
    }
    iVar4 = iStack_a0 + (uVar7 >> 1);
    iVar2 = hardware_Sub_080074C0(param_1 + 0x698,*(u32 *)(param_1 + 0x69c));
    uVar7 = 0;
    if (iStack_a0 != 0) {
      uVar7 = uStack_9c & 0xffff;
    }
    hardware_HW_DMA3SAD(iVar4,iVar2 * 0x20 + iVar9,uVar7 >> 1);
  }
  else {
    func_080D3918(&uStack_90,*(int **)(param_1 + 0x2e8),
                    *(u16 *)
                     (*(int *)(param_1 + 0x2ec) + (u32)*(u16 *)(param_1 + 0x2f4) * 4),
                    *(u32 *)(**(int **)(param_1 + 0x2e8) + 0x10));
    LibC_memcpy(&uStack_90,&uStack_90,0x20);
    iVar2 = iStack_80;
    iStack_a8 = iStack_88;
    uStack_a4 = uStack_84;
    iStack_a0 = iStack_80;
    uStack_9c = uStack_7c;
    uStack_98 = uStack_78;
    uStack_94 = uStack_74;
    iVar4 = hardware_Sub_080074C0(param_1 + 0x690,*(u32 *)(param_1 + 0x694),uStack_78,uStack_74,
                          uStack_90,uStack_8c);
    uVar7 = 0;
    if (iStack_a0 != 0) {
      uVar7 = uStack_9c & 0xffff;
    }
    hardware_HW_DMA3SAD(iVar2,iVar4 * 0x20 + iVar9,uVar7 >> 1);
    uVar7 = 0;
    if (iStack_a0 != 0) {
      uVar7 = uStack_9c & 0xffff;
    }
    iVar4 = iStack_a0 + (uVar7 >> 1);
    iVar2 = hardware_Sub_080074C0(param_1 + 0x698,*(u32 *)(param_1 + 0x69c));
    uVar7 = 0;
    if (iStack_a0 != 0) {
      uVar7 = uStack_9c & 0xffff;
    }
    hardware_HW_DMA3SAD(iVar4,iVar2 * 0x20 + iVar9,uVar7 >> 1);
  }
  func_080D3918(&uStack_90,*(int **)(param_1 + 0x2b0),
                  *(u16 *)(*piStack_30 + (u32)*(u16 *)(param_1 + 700) * 4),
                  *(u32 *)(**(int **)(param_1 + 0x2b0) + 0x10));
  LibC_memcpy(&uStack_90,&uStack_90,0x20);
  iVar2 = iStack_80;
  iStack_a8 = iStack_88;
  uStack_a4 = uStack_84;
  iStack_a0 = iStack_80;
  uStack_9c = uStack_7c;
  uStack_98 = uStack_78;
  uStack_94 = uStack_74;
  iVar4 = hardware_Sub_080074C0(param_1 + 0x6a8,*(u32 *)(param_1 + 0x6ac),uStack_78,uStack_84,
                        uStack_90,uStack_8c);
  iVar9 = 0x05000200;
  uVar7 = 0;
  if (iStack_a0 != 0) {
    uVar7 = uStack_9c & 0xffff;
  }
  hardware_HW_DMA3SAD(iVar2,iVar4 * 0x20 + 0x05000200,uVar7 >> 1);
  uVar7 = 0;
  if (iStack_a0 != 0) {
    uVar7 = uStack_9c & 0xffff;
  }
  iVar4 = iStack_a0 + (uVar7 >> 1);
  iVar2 = hardware_Sub_080074C0(param_1 + 0x6b0,*(u32 *)(param_1 + 0x6b4));
  uVar7 = 0;
  if (iStack_a0 != 0) {
    uVar7 = uStack_9c & 0xffff;
  }
  hardware_HW_DMA3SAD(iVar4,iVar2 * 0x20 + iVar9,uVar7 >> 1);
  code_0803EE94_79C8_vfunc_10(&uStack_90,iStack_44,0);
  iVar2 = iStack_80;
  iStack_a8 = iStack_88;
  uStack_a4 = uStack_84;
  iStack_a0 = iStack_80;
  uStack_9c = uStack_7c;
  uStack_98 = uStack_78;
  uStack_94 = uStack_74;
  iVar4 = hardware_Sub_080074C0(param_1 + 0x5d8,*(u32 *)(param_1 + 0x5dc),uStack_84,iStack_80,
                        uStack_90,uStack_8c);
  uVar7 = 0;
  if (iStack_a0 != 0) {
    uVar7 = uStack_9c & 0xffff;
  }
  hardware_HW_DMA3SAD(iVar2,iVar4 * 0x20 + iVar9,uVar7);
  iVar9 = iStack_a8;
  iVar2 = hardware_Sub_08007D4C(param_1 + 0x5d0,*(u32 *)(param_1 + 0x5d4));
  uVar7 = 0;
  if (iStack_a8 != 0) {
    uVar7 = uStack_a4 & 0xffff;
  }
  hardware_HW_DMA3SAD(iVar9,iVar2 * 0x20 + 0x06010000,uVar7);
  code_0803EE94_79C8_vfunc_10(&uStack_90,iStack_44,1);
  iVar9 = iStack_88;
  iStack_a8 = iStack_88;
  uStack_a4 = uStack_84;
  iStack_a0 = iStack_80;
  uStack_9c = uStack_7c;
  uStack_98 = uStack_78;
  uStack_94 = uStack_74;
  iVar2 = hardware_Sub_08007D4C(param_1 + 0x5d0,*(u32 *)(param_1 + 0x5d4),uStack_78,uStack_74,
                        uStack_90,uStack_8c);
  uVar7 = 0;
  if (iStack_a8 != 0) {
    uVar7 = uStack_a4 & 0xffff;
  }
  hardware_HW_DMA3SAD(iVar9,iVar2 * 0x20 + 0x06010100,uVar7);
  uVar1 = 0x0000FFFF;
  iVar9 = 0;
  puVar8 = (u16 *)(param_1 + 0x6b8);
  do {
    *puVar8 = *puVar8 | (u16)uVar1;
    puVar8[1] = (short)(iVar9 >> 3) * 0x18 + 0x40;
    puVar8 = puVar8 + 2;
    iVar9 = iVar9 + 1;
  } while (iVar9 < 0x20);
  func_080D3918(&uStack_90,*(int **)(param_1 + 800),
                  *(u16 *)(*piStack_28 + (u32)*(u16 *)(param_1 + 0x32c) * 4),
                  *(u32 *)(**(int **)(param_1 + 800) + 0x10));
  LibC_memcpy(&uStack_90,&uStack_90,0x20);
  iVar9 = iStack_80;
  iStack_a8 = iStack_88;
  uStack_a4 = uStack_84;
  iStack_a0 = iStack_80;
  uStack_9c = uStack_7c;
  uStack_98 = uStack_78;
  uStack_94 = uStack_74;
  iVar2 = hardware_Sub_080074C0(param_1 + 0x5e8,*(u32 *)(param_1 + 0x5ec),uStack_78,uStack_84,
                        uStack_90,uStack_8c);
  uVar7 = 0;
  if (iStack_a0 != 0) {
    uVar7 = uStack_9c & 0xffff;
  }
  hardware_HW_DMA3SAD(iVar9,iVar2 * 0x20 + 0x05000200,uVar7);
  piVar6 = piStack_38;
  iVar2 = 0;
  piStack_58 = &iStack_a8;
  iVar9 = 0;
  do {
    iVar4 = 0;
    iStack_3c = iVar9 + 1;
    do {
      iVar3 = *piVar6;
      func_080D3918(piStack_50,piVar6,iVar9,*(u32 *)(iVar3 + 0xc));
      func_080D3918(&uStack_90,piVar6,*(u16 *)(aiStack_70[0] + iVar4 * 4),
                      *(u32 *)(iVar3 + 0x10));
      LibC_memcpy(&uStack_90,&uStack_90,0x20);
      iVar3 = iStack_88;
      iStack_a8 = iStack_88;
      uStack_a4 = uStack_84;
      iStack_a0 = iStack_80;
      uStack_9c = uStack_7c;
      uStack_98 = uStack_78;
      uStack_94 = uStack_74;
      iVar5 = hardware_Sub_08007D4C(param_1 + 0x5e0,*(u32 *)(param_1 + 0x5e4),uStack_78,uStack_74,
                            uStack_90,uStack_8c);
      uVar7 = 0;
      if (iStack_a8 != 0) {
        uVar7 = uStack_a4 & 0xffff;
      }
      hardware_HW_DMA3SAD(iVar3,(iVar5 + iVar2) * 0x20 + 0x06010000,uVar7);
      uVar7 = 0;
      if (iStack_a8 != 0) {
        uVar7 = (u32)*(u16 *)(piStack_58 + 1);
      }
      iVar2 = iVar2 + (uVar7 >> 5);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 2);
    iVar9 = iStack_3c;
  } while (iStack_3c < 3);
  code_0803EE94_79C8_vfunc_10(&uStack_90,iStack_2c,0);
  iVar9 = iStack_80;
  iStack_a8 = iStack_88;
  uStack_a4 = uStack_84;
  iStack_a0 = iStack_80;
  uStack_9c = uStack_7c;
  uStack_98 = uStack_78;
  uStack_94 = uStack_74;
  iVar2 = hardware_Sub_080074C0(param_1 + 0x5f8,*(u32 *)(param_1 + 0x5fc),uStack_84,uStack_78,
                        uStack_90,uStack_8c);
  uVar7 = 0;
  if (iStack_a0 != 0) {
    uVar7 = uStack_9c & 0xffff;
  }
  hardware_HW_DMA3SAD(iVar9,iVar2 * 0x20 + 0x05000200,uVar7);
  iVar9 = iStack_a8;
  iVar2 = hardware_Sub_08007D4C(param_1 + 0x5f0,*(u32 *)(param_1 + 0x5f4));
  uVar7 = 0;
  if (iStack_a8 != 0) {
    uVar7 = uStack_a4 & 0xffff;
  }
  hardware_HW_DMA3SAD(iVar9,iVar2 * 0x20 + 0x06010000,uVar7);
  iVar2 = 0;
  iVar9 = 0;
  piVar6 = (int *)(param_1 + 0x110);
  do {
    *(short *)(0x00000BDA + param_1 + iVar9 * 2) = (short)iVar2;
    iVar4 = *piVar6;
    func_080D3918(piStack_4c,piVar6,0,*(u32 *)(iVar4 + 0xc));
    func_080D3918(&uStack_90,piVar6,*(u16 *)(aiStack_68[0] + iVar9 * 4),
                    *(u32 *)(iVar4 + 0x10));
    LibC_memcpy(&uStack_90,&uStack_90,0x20);
    iVar4 = iStack_88;
    iStack_a8 = iStack_88;
    uStack_a4 = uStack_84;
    iStack_a0 = iStack_80;
    uStack_9c = uStack_7c;
    uStack_98 = uStack_78;
    uStack_94 = uStack_74;
    iVar3 = hardware_Sub_08007D4C(param_1 + 0x628,*(u32 *)(param_1 + 0x62c),uStack_78,uStack_74,
                          uStack_90,uStack_8c);
    uVar7 = 0;
    if (iStack_a8 != 0) {
      uVar7 = uStack_a4 & 0xffff;
    }
    hardware_HW_DMA3SAD(iVar4,(iVar3 + iVar2) * 0x20 + 0x06010000,uVar7);
    uVar7 = 0;
    if (iStack_a8 != 0) {
      uVar7 = uStack_a4 & 0xffff;
    }
    iVar2 = iVar2 + (uVar7 >> 5);
    iVar9 = iVar9 + 1;
  } while (iVar9 < 4);
  func_080D3918(&uStack_90,*(int **)(param_1 + 0x470),
                  *(u16 *)(*piStack_34 + (u32)*(u16 *)(param_1 + 0x47c) * 4),
                  *(u32 *)(**(int **)(param_1 + 0x470) + 0x10));
  LibC_memcpy(&uStack_90,&uStack_90,0x20);
  iVar9 = iStack_80;
  iStack_a8 = iStack_88;
  uStack_a4 = uStack_84;
  iStack_a0 = iStack_80;
  uStack_9c = uStack_7c;
  uStack_98 = uStack_78;
  uStack_94 = uStack_74;
  iVar2 = hardware_Sub_080074C0(param_1 + 0x638,*(u32 *)(param_1 + 0x63c),uStack_78,uStack_74,
                        uStack_90,uStack_8c);
  uVar7 = 0;
  if (iStack_a0 != 0) {
    uVar7 = uStack_9c & 0xffff;
  }
  hardware_HW_DMA3SAD(iVar9,iVar2 * 0x20 + 0x05000200,uVar7);
  iVar2 = 0;
  iVar9 = 0;
  piVar6 = (int *)(param_1 + 0x140);
  do {
    *(short *)(0x00000BE2 + param_1 + iVar9 * 2) = (short)iVar2;
    iVar4 = *piVar6;
    func_080D3918(piStack_48,piVar6,0,*(u32 *)(iVar4 + 0xc));
    func_080D3918(&uStack_90,piVar6,*(u16 *)(aiStack_60[0] + iVar9 * 4),
                    *(u32 *)(iVar4 + 0x10));
    LibC_memcpy(&uStack_90,&uStack_90,0x20);
    iVar4 = iStack_88;
    iStack_a8 = iStack_88;
    uStack_a4 = uStack_84;
    iStack_a0 = iStack_80;
    uStack_9c = uStack_7c;
    uStack_98 = uStack_78;
    uStack_94 = uStack_74;
    iVar3 = hardware_Sub_08007D4C(param_1 + 0x630,*(u32 *)(param_1 + 0x634),uStack_84,uStack_78,
                          uStack_90,uStack_8c);
    uVar7 = 0;
    if (iStack_a8 != 0) {
      uVar7 = uStack_a4 & 0xffff;
    }
    hardware_HW_DMA3SAD(iVar4,(iVar3 + iVar2) * 0x20 + 0x06010000,uVar7);
    uVar7 = 0;
    if (iStack_a8 != 0) {
      uVar7 = uStack_a4 & 0xffff;
    }
    iVar2 = iVar2 + (uVar7 >> 5);
    iVar9 = iVar9 + 1;
  } while (iVar9 < 4);
  func_080D3918(&uStack_90,*(int **)(param_1 + 0x588),
                  *(u16 *)(*piStack_24 + (u32)*(u16 *)(param_1 + 0x594) * 4),
                  *(u32 *)(**(int **)(param_1 + 0x588) + 0x10));
  LibC_memcpy(&uStack_90,&uStack_90,0x20);
  iStack_a8 = iStack_88;
  uStack_a4 = uStack_84;
  iStack_a0 = iStack_80;
  uStack_9c = uStack_7c;
  uStack_98 = uStack_78;
  uStack_94 = uStack_74;
  iVar9 = hardware_Sub_08007D4C(param_1 + 0x650,*(u32 *)(param_1 + 0x654),uStack_78,uStack_74,
                        uStack_90,uStack_8c);
  uVar7 = 0;
  if (iStack_a8 != 0) {
    uVar7 = uStack_a4 & 0xffff;
  }
  hardware_HW_DMA3SAD(iStack_88,iVar9 * 0x20 + 0x06010000,uVar7);
}

/* 0x0805D9C0 (612B) | SpriteAnimEngine_5B80_Sub_0805D9C0 (orig: func_0805D9C0) | origin: wip | domain: SpriteAnimEngine_5B80 | MEDIUM / graph_algebra */
void SpriteAnimEngine_5B80_Sub_0805D9C0(int param_1) {
  u16 uVar1;
  u32 uVar2;
  u32 uVar3;
  int iVar4;
  u16 *puVar5;
  int iVar6;
  int iVar7;
  u8 auStack_64 [64];
  u32 uStack_24;
  iVar4 = hardware_GetField_0x00_8918();
  *(u16 *)(iVar4 + 0x14) = 0;
  iVar4 = hardware_GetField_0x00_8918(param_1);
  *(u16 *)(iVar4 + 0x16) = *(u16 *)(param_1 + 0x14c);
  iVar4 = hardware_GetField_0x00_8918(param_1);
  *(u16 *)(iVar4 + 0x18) = 0;
  iVar4 = hardware_GetField_0x00_8918(param_1);
  *(u16 *)(iVar4 + 0x1a) = 0;
  iVar4 = hardware_GetField_0x00_8918(param_1);
  *(u16 *)(iVar4 + 0x1c) = 0;
  iVar4 = hardware_GetField_0x00_8918(param_1);
  *(u16 *)(iVar4 + 0x1e) = 0;
  hardware_HW_DMA3SAD_8EB8(0,0x06007FE0,0x20);
  uVar2 = 0x0600E000;
  hardware_HW_DMA3SAD_8EB8(0xffffffff,0x0600E000,0x800);
  uVar3 = 0x0600E800;
  hardware_HW_DMA3SAD_8EB8(0xffffffff,0x0600E800,0x800);
  hardware_HW_DMA3SAD_8EB8(0xffffffff,0x0600F000,0x800);
  puVar5 = (u16 *)hardware_GetField_0x00_8918(param_1);
  iVar7 = 0;
  *puVar5 = 0x1e40;
  iVar4 = hardware_GetField_0x00_8918(param_1);
  *(short *)(iVar4 + 0xe) = (short)0x00005C43;
  iVar4 = hardware_GetField_0x00_8918(param_1);
  *(short *)(iVar4 + 0xc) = (short)0x00001D41;
  iVar4 = hardware_GetField_0x00_8918(param_1);
  *(short *)(iVar4 + 10) = (short)0x00005E42;
  hardware_HW_DMA3SAD(*(u16 *)0x080F9F70,0x6000000,*(u16 *)0x080F9F74);
  hardware_HW_DMA3SAD_8EB8(0x00030003,uVar2,0x800);
  iVar4 = hardware_GetField_0x00_8918(param_1);
  *(u16 *)(iVar4 + 0x1c) = 0;
  iVar4 = hardware_GetField_0x00_8918(param_1);
  *(u16 *)(iVar4 + 0x1e) = 0;
  code_0803EE94_Sub_08051320(uVar3,0,0,0x20,3,0,0);
  iVar4 = hardware_GetField_0x00_8918(param_1);
  *(u16 *)(iVar4 + 0x18) = 0;
  iVar4 = hardware_GetField_0x00_8918(param_1);
  *(u16 *)(iVar4 + 0x1a) = 0;
  iVar4 = hardware_GetField_0x00_8918(param_1);
  *(u16 *)(iVar4 + 0x14) = 0;
  iVar4 = hardware_GetField_0x00_8918(param_1);
  *(u16 *)(iVar4 + 0x16) = 0;
  hardware_HW_DMA3SAD(*(u16 *)0x080F9F78,0x5000000,0x20);
  puVar5 = 0x05000040;
  *(u16 *)0x05000040 = 0x3e0;
  puVar5[1] = 0;
  uVar1 = (u16)0x00004218;
  puVar5[2] = uVar1;
  iVar6 = param_1 + 0x124;
  iVar4 = hardware_Sub_080074C0(iVar6,*(u32 *)(param_1 + 0x128));
  *(u16 *)(iVar4 * 0x20 + 0x05000200) = 0x3e0;
  iVar4 = hardware_Sub_080074C0(iVar6,*(u32 *)(param_1 + 0x128));
  *(u16 *)(iVar4 * 0x20 + 0x05000202) = 0;
  iVar4 = hardware_Sub_080074C0(iVar6,*(u32 *)(param_1 + 0x128));
  *(u16 *)(iVar4 * 0x20 + 0x05000204) = uVar1;
  do {
    uStack_24 = 0x20001;
    SpriteAnimEngine_Sub_0804E5AC(0x20001,auStack_64,0,0,*(u16 *)(iVar7 * 2 + 0x080FB1A6),0,1);
    iVar4 = hardware_Sub_08007D4C(param_1 + 0x11c,*(u32 *)(param_1 + 0x120));
    hardware_HW_DMA3SAD(auStack_64,(iVar4 + iVar7 * 2) * 0x20 + 0x06010000,0x40);
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x18);
}

/* 0x0805DC24 (512B) | SpriteAnimEngine_5B80_Sub_0805DC24 (orig: func_0805DC24) | origin: wip | domain: SpriteAnimEngine_5B80 | MEDIUM / graph_algebra */
void SpriteAnimEngine_5B80_Sub_0805DC24(int param_1) {
  u32 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  u16 uVar7;
  short *psVar8;
  short sVar9;
  short sVar10;
  u32 uVar11;
  int *piVar12;
  int iStack_4;
  iVar2 = 0xFFFFFC20;
  piVar12 = (int *)(0 + 0xFFFFFC20);
  *(u32 *)(0 + 0xFFFFFC20) = 0;
  *(u16 *)(0 + 0xFFFFFC20) = 0;
  *(u32 *)(0 + 0xFFFFFC20) = 0;
  *(u16 *)(0 + 0xFFFFFC20) = 0;
  *(u32 *)((int)&iStack_4 + 0xFFFFFC20) = 0;
  *(u16 *)(0 + 0xFFFFFC20) = 0;
  *(u32 *)(0 + 0xFFFFFC20) = 0;
  *(u16 *)(0 + 0xFFFFFC20) = 0;
  func_080D3918(0 + 0xFFFFFC20,*(int **)(param_1 + 0x80),
                  *(u16 *)(*(int *)(param_1 + 0x84) + (u32)*(u16 *)(param_1 + 0x8c) * 4),
                  *(u32 *)(**(int **)(param_1 + 0x80) + 0x10));
  puVar1 = (u32 *)(0 + iVar2);
  LibC_memcpy(puVar1,puVar1,0x20);
  *(u32 *)(0 + iVar2) = *puVar1;
  *(u32 *)(0 + iVar2) = *(u32 *)(0 + iVar2);
  *(u32 *)(0 + iVar2) = *(u32 *)(0 + iVar2);
  *(u32 *)(0 + iVar2) = *(u32 *)(0 + iVar2);
  *(u32 *)((int)&iStack_4 + iVar2) = *(u32 *)(0 + iVar2);
  *(u32 *)(0 + iVar2) = *(u32 *)(0 + iVar2);
  *(u32 *)(0 + iVar2) = *(u32 *)(0 + iVar2);
  *(u32 *)(0 + iVar2) = *(u32 *)(0 + iVar2);
  uVar11 = *(u32 *)((int)&iStack_4 + iVar2);
  iVar3 = hardware_Sub_080074C0(param_1 + 0x134,*(u32 *)(param_1 + 0x138));
  iVar4 = 0x05000200;
  uVar7 = 0;
  if (*(int *)((int)&iStack_4 + iVar2) != 0) {
    uVar7 = *(u16 *)(0 + iVar2);
  }
  hardware_HW_DMA3SAD(uVar11,iVar3 * 0x20 + 0x05000200,uVar7);
  code_0803EE94_79C8_vfunc_10(puVar1,param_1 + 0x50,0);
  *(u32 *)(0 + iVar2) = *puVar1;
  *(u32 *)(0 + iVar2) = *(u32 *)(0 + iVar2);
  *(u32 *)(0 + iVar2) = *(u32 *)(0 + iVar2);
  *(u32 *)(0 + iVar2) = *(u32 *)(0 + iVar2);
  *(u32 *)((int)&iStack_4 + iVar2) = *(u32 *)(0 + iVar2);
  *(u32 *)(0 + iVar2) = *(u32 *)(0 + iVar2);
  *(u32 *)(0 + iVar2) = *(u32 *)(0 + iVar2);
  *(u32 *)(0 + iVar2) = *(u32 *)(0 + iVar2);
  uVar11 = *(u32 *)((int)&iStack_4 + iVar2);
  iVar3 = hardware_Sub_080074C0(param_1 + 0x144,*(u32 *)(param_1 + 0x148));
  uVar7 = 0;
  if (*(int *)((int)&iStack_4 + iVar2) != 0) {
    uVar7 = *(u16 *)(0 + iVar2);
  }
  hardware_HW_DMA3SAD(uVar11,iVar3 * 0x20 + iVar4,uVar7);
  uVar11 = *(u32 *)(0 + iVar2);
  iVar4 = hardware_Sub_08007D4C(param_1 + 0x13c,*(u32 *)(param_1 + 0x140));
  uVar7 = 0;
  if (*(int *)(0 + iVar2) != 0) {
    uVar7 = *(u16 *)(0 + iVar2);
  }
  hardware_HW_DMA3SAD(uVar11,iVar4 * 0x20 + 0x06010000,uVar7);
  iVar3 = 0;
  *(u8 **)(0 + iVar2) = 0 + iVar2;
  *(u8 **)(0 + iVar2) = 0 + iVar2;
  iVar4 = 0x06002800;
  do {
    *(u16 *)(0 + iVar2) = 0xe;
    *(u16 *)(0 + iVar2) = 2;
    Code_Lib_Syscall_Wrap_CpuFastSet_E7A0(*(u32 *)(0 + iVar2),0 + iVar2,0);
    iVar5 = (u32)*(u8 *)(param_1 + 0xae0 + iVar3) * 0x14 + 0x080FB000;
    *(u16 *)(0 + iVar2) = 0xe;
    *(u16 *)(*(int *)(0 + iVar2) + 2) = 2;
    uVar11 = *(u32 *)(0 + iVar2);
    *piVar12 = iVar5;
    *(u32 *)(0 + iVar2) = 0;
    *(u32 *)(0 + iVar2) = 1;
    SpriteAnimEngine_Sub_0804E958(uVar11,0 + iVar2,0);
    hardware_HW_DMA3SAD(*(u32 *)(0 + iVar2),iVar4,0x380);
    iVar4 = iVar4 + 0x380;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 10);
  hardware_HW_DMA3SAD_8EB8(0xffffffff,param_1 + 0x2d0,0x800);
  iVar4 = 0;
  sVar10 = 0x2140;
  do {
    iVar5 = 0;
    iVar3 = iVar4 * 2;
    iVar4 = iVar4 + 1;
    sVar9 = sVar10 + 0xe;
    psVar8 = (short *)((iVar3 + 5) * 0x40 + param_1 + 0x2d4);
    psVar6 = (short *)((iVar3 + 4) * 0x40 + param_1 + 0x2d4);
    do {
      *psVar6 = sVar10 + (short)iVar5;
      *psVar8 = sVar9;
      sVar9 = sVar9 + 1;
      psVar8 = psVar8 + 1;
      psVar6 = psVar6 + 1;
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0xe);
    sVar10 = sVar10 + 0x1c;
  } while (iVar4 < 10);
  hardware_HW_DMA3SAD(param_1 + 0x2d0,0x0600F000,0x800);
  return *(u32 *)(0 + iVar2);
}

/* 0x0805DE24 (156B) | SpriteAnimEngine_5B80_Sub_0805DE24 (orig: func_0805DE24) | origin: wip | domain: SpriteAnimEngine_5B80 | MEDIUM / graph_algebra */
void SpriteAnimEngine_5B80_Sub_0805DE24(int param_1) {
  int iVar1;
  int iVar2;
  *(u16 *)(param_1 + 0x000002CE) = 0;
  iVar1 = 0;
  iVar2 = 0x080FB000;
  do {
    SpriteAnimEngine_5B80_Sub_0805DEC0(param_1,0x90,iVar1 * 0x10 - (*(u16 *)(param_1 + 0x14c) - 0x20),3,
                  (int)*(short *)((u32)*(u8 *)(param_1 + 0xae0 + iVar1) * 0x14 + iVar2 + 0x10),4,
                  10);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 10);
  iVar2 = 0;
  iVar1 = 8;
  do {
    SpriteAnimEngine_5B80_Sub_0805DF68(param_1,iVar1,4,iVar2 + 0xd,1);
    iVar1 = iVar1 + 8;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0xb);
  SpriteAnimEngine_5B80_Sub_0805DEC0(param_1,0x88,4,1,*(u32 *)(param_1 + 0xad0),5,10);
}

/* 0x0805DEC0 (168B) | SpriteAnimEngine_5B80_Sub_0805DEC0 (orig: func_0805DEC0) | origin: wip | domain: SpriteAnimEngine_5B80 | MEDIUM / graph_algebra */
void SpriteAnimEngine_5B80_Sub_0805DEC0(u32 param_1,int param_2,u32 param_3,u32 param_4,int param_5,
             int param_6,int param_7) {
  bool bVar1;
  int iVar2;
  int iVar3;
  if ((int)param_6 < 2) {
    iVar3 = 1;
  }
  else {
    iVar3 = 10;
    while (param_6 = (s16)param_6 + -1, 1 < param_6) {
      iVar3 = (u32)iVar3 * 10;
    }
  }
  bVar1 = false;
  for (; 0 < iVar3; iVar3 = func_080D0EC8(iVar3,10)) {
    if ((s8)iVar3 == 1) {
      bVar1 = true;
    }
    iVar2 = func_080D0EC8(param_5,iVar3);
    if ((iVar2 != 0) || (bVar1)) {
      SpriteAnimEngine_5B80_Sub_0805DF68(param_1,param_2,param_3,iVar2,param_4);
      bVar1 = true;
    }
    param_2 = param_2 + 8;
    param_5 = param_5 - iVar3 * iVar2;
  }
  if (param_7 != 0) {
    SpriteAnimEngine_5B80_Sub_0805DF68(param_1,param_2,param_3,param_7,param_4);
  }
}

/* 0x0805DF68 (92B) | SpriteAnimEngine_5B80_Sub_0805DF68 (orig: func_0805DF68) | origin: wip | domain: SpriteAnimEngine_5B80 | MEDIUM / graph_algebra */
void SpriteAnimEngine_5B80_Sub_0805DF68(int param_1,u16 param_2,u16 param_3,u16 param_4,
             u16 param_5) {
  short *psVar1;
  psVar1 = (short *)(0x000002CE + param_1);
  *(u16 *)(param_1 + 0x14e + *psVar1 * 8) = param_2;
  *(u16 *)(param_1 + 0x150 + *psVar1 * 8) = param_3;
  *(u16 *)(param_1 + 0x152 + *psVar1 * 8) = param_4;
  *(u16 *)(param_1 + 0x154 + *psVar1 * 8) = param_5;
  *psVar1 = *psVar1 + 1;
}

/* 0x0806E02C (312B) | SpriteAnimEngine_5B80_Sub_0806E02C (orig: func_0806E02C) | origin: wip | domain: SpriteAnimEngine_5B80 | MEDIUM / graph_algebra */
void SpriteAnimEngine_5B80_Sub_0806E02C(int param_1) {
  char cVar1;
  char cVar2;
  char *pcVar3;
  short *psVar4;
  short sVar5;
  int iVar6;
  *(u16 *)(param_1 + 0x3e) =
       (u16)0xFFFFFE00 & *(u16 *)(param_1 + 0x3e) |
       (short)*(char *)(param_1 + 0x38) << 4 & (u16)0x000001FF;
  if (*(char *)(param_1 + 0x39) < '\x01') {
    *(u8 *)(param_1 + 0x3c) = 0x28;
  }
  else {
    *(char *)(param_1 + 0x3c) = (*(char *)(param_1 + 0x39) + -1) * '\x12' + '@';
  }
  if (*(char *)(param_1 + 0x39) == '\0') {
    pcVar3 = (char *)(param_1 + 0x00000449);
    *pcVar3 = *(char *)(param_1 + 0x38);
    cVar1 = *pcVar3;
    if (cVar1 == '\x04') {
      sVar5 = 0x15;
      psVar4 = (short *)(param_1 + 0x72);
      do {
        *psVar4 = sVar5;
        sVar5 = sVar5 + -1;
        psVar4 = psVar4 + -4;
      } while (param_1 + 0x4a <= (int)psVar4);
    }
    else {
      if (cVar1 < '\x05') {
        if (cVar1 == '\0') {
          sVar5 = 0xf;
          psVar4 = (short *)(param_1 + 0x72);
          do {
            *psVar4 = sVar5;
            sVar5 = sVar5 + -1;
            psVar4 = psVar4 + -4;
          } while (param_1 + 0x4a <= (int)psVar4);
        }
      }
      else if (cVar1 == '\b') {
        sVar5 = 0x1b;
        psVar4 = (short *)(param_1 + 0x72);
        do {
          *psVar4 = sVar5;
          sVar5 = sVar5 + -1;
          psVar4 = psVar4 + -4;
        } while (param_1 + 0x4a <= (int)psVar4);
      }
      sVar5 = 0x21;
      psVar4 = (short *)(param_1 + 0x72);
      do {
        *psVar4 = sVar5;
        sVar5 = sVar5 + -1;
        psVar4 = psVar4 + -4;
      } while (param_1 + 0x4a <= (int)psVar4);
    }
  }
  else {
    pcVar3 = (char *)(param_1 + 0x0000044A);
    *pcVar3 = *(char *)(param_1 + 0x38) / '\x02' + (*(char *)(param_1 + 0x39) + -1) * '\a' + '\x01';
    iVar6 = (int)*pcVar3;
    cVar1 = func_080D0ED0(iVar6,10);
    cVar2 = func_080D0EC8(iVar6,10);
    iVar6 = 0x1a;
    if (cVar2 != 0) {
      iVar6 = (int)cVar2;
    }
    *(short *)(param_1 + 0x7a) = (short)iVar6;
    *(short *)(param_1 + 0x82) = (short)cVar1;
  }
}

/* 0x0806E234 (520B) | SpriteAnimEngine_5B80_Sub_0806E234 (orig: func_0806E234) | origin: wip | domain: SpriteAnimEngine_5B80 | MEDIUM / graph_algebra */
void SpriteAnimEngine_5B80_Sub_0806E234(int param_1) {
  u16 uVar1;
  u32 uVar2;
  u32 uVar3;
  int iVar4;
  u16 *puVar5;
  int iVar6;
  int iVar7;
  u8 auStack_64 [64];
  u32 uStack_24;
  iVar4 = hardware_GetField_0x00_8918();
  *(u16 *)(iVar4 + 0x18) = 0;
  iVar4 = hardware_GetField_0x00_8918(param_1);
  *(u16 *)(iVar4 + 0x1a) = 0;
  iVar4 = hardware_GetField_0x00_8918(param_1);
  *(u16 *)(iVar4 + 0x1c) = 0;
  iVar4 = hardware_GetField_0x00_8918(param_1);
  *(u16 *)(iVar4 + 0x1e) = 0;
  hardware_HW_DMA3SAD_8EB8(0,0x06007FE0,0x20);
  uVar2 = 0x0600E000;
  hardware_HW_DMA3SAD_8EB8(0xffffffff,0x0600E000,0x800);
  uVar3 = 0x0600E800;
  hardware_HW_DMA3SAD_8EB8(0xffffffff,0x0600E800,0x800);
  puVar5 = (u16 *)hardware_GetField_0x00_8918(param_1);
  iVar7 = 0;
  *puVar5 = 0x1840;
  iVar4 = hardware_GetField_0x00_8918(param_1);
  *(short *)(iVar4 + 0xe) = (short)0x00001C03;
  hardware_HW_DMA3SAD(*(u16 *)0x080F9F70,0x6000000,*(u16 *)0x080F9F74);
  hardware_HW_DMA3SAD_8EB8(0x00030003,uVar2,0x800);
  iVar4 = hardware_GetField_0x00_8918(param_1);
  *(u16 *)(iVar4 + 0x1c) = 0;
  iVar4 = hardware_GetField_0x00_8918(param_1);
  *(u16 *)(iVar4 + 0x1e) = 0;
  code_0803EE94_Sub_08051320(uVar3,0,0,0x20,3,0,0);
  iVar4 = hardware_GetField_0x00_8918(param_1);
  *(u16 *)(iVar4 + 0x18) = 0;
  iVar4 = hardware_GetField_0x00_8918(param_1);
  *(u16 *)(iVar4 + 0x1a) = 0;
  iVar4 = hardware_GetField_0x00_8918(param_1);
  *(u16 *)(iVar4 + 0x14) = 0;
  iVar4 = hardware_GetField_0x00_8918(param_1);
  *(u16 *)(iVar4 + 0x16) = 0;
  hardware_HW_DMA3SAD(*(u16 *)0x080F9F78,0x5000000,0x20);
  puVar5 = 0x05000040;
  *(u16 *)0x05000040 = 0x3e0;
  puVar5[1] = 0;
  uVar1 = (u16)0x00004218;
  puVar5[2] = uVar1;
  iVar6 = param_1 + 0x20;
  iVar4 = hardware_Sub_080074C0(iVar6,*(u32 *)(param_1 + 0x24));
  *(u16 *)(iVar4 * 0x20 + 0x05000200) = 0x3e0;
  iVar4 = hardware_Sub_080074C0(iVar6,*(u32 *)(param_1 + 0x24));
  *(u16 *)(iVar4 * 0x20 + 0x05000202) = 0;
  iVar4 = hardware_Sub_080074C0(iVar6,*(u32 *)(param_1 + 0x24));
  *(u16 *)(iVar4 * 0x20 + 0x05000204) = uVar1;
  do {
    uStack_24 = 0x20001;
    SpriteAnimEngine_Sub_0804E5AC(0x20001,auStack_64,0,0,*(u16 *)(iVar7 * 2 + 0x080FBD30),0,1);
    iVar4 = hardware_Sub_08007D4C(param_1 + 0x18,*(u32 *)(param_1 + 0x1c));
    hardware_HW_DMA3SAD(auStack_64,(iVar4 + iVar7 * 2) * 0x20 + 0x06010000,0x40);
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x2b);
}

/* 0x0806E78C (84B) | SpriteAnimEngine_5B80_Sub_0806E78C (orig: func_0806E78C) | origin: wip | domain: SpriteAnimEngine_5B80 | MEDIUM / graph_algebra */
void SpriteAnimEngine_5B80_Sub_0806E78C(int param_1,u16 param_2,u16 param_3,u16 param_4,
             u16 param_5) {
  short *psVar1;
  psVar1 = (short *)(0x00000446 + param_1);
  *(u16 *)(param_1 + 0x46 + *psVar1 * 8) = param_2;
  *(u16 *)(param_1 + 0x48 + *psVar1 * 8) = param_3;
  *(u16 *)(param_1 + 0x4a + *psVar1 * 8) = param_4;
  *(u16 *)(param_1 + 0x4c + *psVar1 * 8) = param_5;
  *psVar1 = *psVar1 + 1;
}

/* 0x0806EA78 (124B) | SpriteAnimEngine_5B80_Ctor_EA78 (orig: func_0806EA78) | origin: wip | domain: SpriteAnimEngine_5B80 | HIGH / vtable_algebra */
void SpriteAnimEngine_5B80_Ctor_EA78(u32 self) {
  u8 auStack_10 [4];
  u16 iVar1;
    u32 auStack_1c [3];
  register BOOL uVar2;
  iVar1 = hardware_GetField_0x00_8918();
  *(u16 *)(iVar1 + 0x50) = 0x3f;
  uVar2 = hardware_GetField_0x00_8918(self);
  auStack_1c[0] = 0;
  auStack_1c[1] = 0;
  *(auStack_1c + 2) = (s8)0x080E5B80;
  hardware_Sub_08009300(auStack_10,uVar2);
  hardware_Sub_0800934C(auStack_10,0x00000889,1,1);
  iVar1 = hardware_GetField_0x00_8940(self);
  func_080D3914(iVar1,auStack_1c,*(u32 *)(*(int *)(iVar1 + 8) + 0x10));
  while ((int)(-auStack_1c[0] | auStack_1c[0]) < 0) {
    hardware_Sub_08070140(self);
    hardware_Ctor_87C8(self);
  }
  hardware_Ctor_94B8(auStack_1c,2);
}

/* 0x0806EAF4 (124B) | SpriteAnimEngine_5B80_Ctor_EAF4 (orig: func_0806EAF4) | origin: wip | domain: SpriteAnimEngine_5B80 | HIGH / vtable_algebra */
void SpriteAnimEngine_5B80_Ctor_EAF4(u32 self) {
  u32 uVar2;
  u8 auStack_10 [4];
  u32 auStack_1c [3];
  s16 iVar1;
  iVar1 = (u8)hardware_GetField_0x00_8918();
  *(u16 *)(0x50 + iVar1) = 0x3f;
  uVar2 = hardware_GetField_0x00_8918(self);
  auStack_1c[0] = (s16)0;
  auStack_1c[1] = (u16)0;
  *(auStack_1c + 2) = (u8)0x080E5B80;
  hardware_Sub_08009300(auStack_10,uVar2);
  hardware_Sub_08009378(auStack_10,0x00000889,1,1);
  iVar1 = hardware_GetField_0x00_8940(self);
  func_080D3914(iVar1,auStack_1c,*(u32 *)(*(int *)(8 + iVar1) + 0x10));
  while ((int)(-auStack_1c[0] | auStack_1c[0]) < 0) {
    hardware_Sub_08070140(self);
    hardware_Ctor_87C8(self);
  }
  hardware_Ctor_94B8(auStack_1c,2);
}

/* 0x08075BC8 (192B) | SpriteAnimEngine_5B80_Sub_08075BC8 (orig: func_08075BC8) | origin: wip | domain: SpriteAnimEngine_5B80 | MEDIUM / graph_algebra */
void SpriteAnimEngine_5B80_Sub_08075BC8(int *param_1,u32 param_2,u32 param_3) {
  u32 uVar1;
  int iVar2;
  if ((-1 < (-param_1[10] | param_1[10])) && ((param_2 != 0 || (param_3 != 0)))) {
    if (0x20 < (int)(param_3 - param_2)) {
      param_2 = param_3 + 0x20;
    }
    uVar1 = param_3 & 0x1f;
    param_3 = param_3 - param_2;
    if ((uVar1 < param_3) && (uVar1 != 0)) {
      iVar2 = param_3 - uVar1;
      param_1[0xd] = param_1[6] + param_2 * 0x40;
      param_1[0xe] = (0x20 - iVar2) * 0x40 + param_1[4];
      param_1[0xf] = iVar2 * 0x40;
      param_1[0x10] = param_1[6] + (param_2 + iVar2) * 0x40;
      param_1[0x11] = param_1[4];
      param_1[0x12] = uVar1 << 6;
      func_080D3914(*param_1,param_1 + 10,*(u32 *)(*(int *)(*param_1 + 8) + 0x10));
    }
    else {
      param_1[0xd] = param_1[6] + param_2 * 0x40;
      param_1[0xe] = (param_2 & 0x1f) * 0x40 + param_1[4];
      param_1[0xf] = param_3 * 0x40;
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      param_1[0x12] = 0;
      func_080D3914(*param_1,param_1 + 10,*(u32 *)(*(int *)(*param_1 + 8) + 0x10));
    }
    iVar2 = (int)(short)param_1[3];
    if (iVar2 < 0) {
      iVar2 = iVar2 + 7;
    }
    *(short *)((int)param_1 + 10) =
         (short)param_1[3] - ((short)param_1[3] + (short)(iVar2 >> 3) * -8);
  }
}

/* 0x08075DB8 (28B) | SpriteAnimEngine_5B80_Sub_08075DB8 (orig: func_08075DB8) | origin: pure | domain: SpriteAnimEngine_5B80 | MEDIUM / graph_algebra */
struct S { u16 f0, f2, f4; u16 f6; u16 f8; s16 fa; };
extern "C" void SpriteAnimEngine_5B80_HW_IO_0x016(void *, s16);
extern "C" void SpriteAnimEngine_5B80_Sub_08075DB8(S *a, s16 b) {
    a->f6 = 0xFFFF;
    a->fa = -1;
    SpriteAnimEngine_5B80_HW_IO_0x016(a, b);
}

/* 0x08077490 (896B) | SpriteAnimEngine_5B80_AutoPtrFactory_7490 (orig: func_08077490) | origin: wip | domain: SpriteAnimEngine_5B80 | HIGH / vtable_algebra */
u32 SpriteAnimEngine_5B80_AutoPtrFactory_7490(u32 *self,int param_2) {
  bool bVar1;
  u32 uVar2;
  u32 uVar3;
  int iVar4;
  u32 *puVar5;
  u32 uVar6;
  u16 *puVar7;
  u16 *puVar8;
  int *piVar9;
  u32 uStack_2c;
  u32 *puStack_28;
  u32 uStack_24;
  hardware_Ctor(param_2);
  iVar4 = hardware_GetField_0x00_8918(param_2);
  *(u16 *)(iVar4 + 0x50) = 0x3f;
  puVar5 = (u32 *)CppRuntime_builtin_new(0x10);
  uVar6 = hardware_GetField_0x00_8918(param_2);
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[2] = 0x080E5B80;
  hardware_Sub_08009300(puVar5 + 3,uVar6);
  hardware_Sub_08077810(param_2);
  SpriteAnimEngine_5B80_Sub_080779B4(param_2);
  hardware_Wrap_m4aMPlayStart(param_2 + 8,0x24);
  hardware_Sub_0800934C(puVar5 + 3,0x00000889,1,0);
  iVar4 = hardware_GetField_0x00_8940(param_2);
  func_080D3914(iVar4,puVar5,*(u32 *)(*(int *)(iVar4 + 8) + 0x10));
  bVar1 = false;
  do {
    hardware_Ctor_87C8(param_2);
    hardware_Sub_080088B8(param_2);
    uVar3 = 0x0000FFF0;
    iVar4 = 0x00000716;
    uVar2 = 0x0000FFF0;
    if ((u32)(int)*(short *)(param_2 + 0x0000072A) < 9) {
      switch(*(u32 *)(*(short *)(param_2 + 0x0000072A) * 4 + 0x0807754C) & 0xfffffffe) {
      case 0x8077570:
        puVar8 = (u16 *)(param_2 + 0x00000716);
        *puVar8 = 0;
        *(u16 *)(param_2 + 0x718) = 0;
        *(u32 *)(param_2 + 0x720) = (u32)*puVar8 << 0x10;
        *(u16 *)(param_2 + 0x0000072A) = 1;
        break;
      case 0x80775a0:
        if (-1 < (int)(-*puVar5 | *puVar5)) {
          *(u16 *)(param_2 + 0x0000072A) = 2;
        }
        break;
      case 0x80775bc:
        puVar8 = (u16 *)(param_2 + 0x00000716);
        *(u16 *)(param_2 + 0x718) = (u16)0x0000FFF0 & *puVar8;
        iVar4 = *(int *)(param_2 + 0x720) + 0x8000;
        *(int *)(param_2 + 0x720) = iVar4;
        *puVar8 = (u16)((u32)iVar4 >> 0x10);
        if ((u32)*(u16 *)(param_2 + 0x718) != (iVar4 >> 0x10 & uVar2)) {
          SpriteAnimEngine_5B80_Sub_08077A1C(param_2);
        }
        if (0x8a < *(int *)(param_2 + 0x0000071C)) {
          *(u32 *)(param_2 + 0x00000724) = (u32)*(u16 *)(param_2 + 0x00000714) << 0x10;
          hardware_Sub_08009378(puVar5 + 3,0x00000889,1,0);
          iVar4 = hardware_GetField_0x00_8940(param_2);
          func_080D3914(iVar4,puVar5,*(u32 *)(*(int *)(iVar4 + 8) + 0x10));
          *(u16 *)(param_2 + 0x0000072A) = 7;
        }
        break;
      case 0x8077650:
        if (-1 < (int)(-*puVar5 | *puVar5)) {
          *(u16 *)(param_2 + 0x0000072A) = 8;
          SpriteAnimEngine_5B80_Sub_08077A1C(param_2);
          puVar7 = (u16 *)hardware_GetField_0x00_8918(param_2);
          *puVar7 = 0x640;
          hardware_Sub_0800934C(puVar5 + 3,0x00000889,1,0);
          iVar4 = hardware_GetField_0x00_8940(param_2);
          func_080D3914(iVar4,puVar5,*(u32 *)(*(int *)(iVar4 + 8) + 0x10));
        }
        break;
      case 0x80776a8:
        if (-1 < (int)(-*puVar5 | *puVar5)) {
          *(u16 *)(param_2 + 0x0000072A) = 3;
        }
        break;
      case 0x80776c4:
        puVar8 = (u16 *)(param_2 + 0x00000716);
        *(u16 *)(param_2 + 0x718) = (u16)0x0000FFF0 & *puVar8;
        piVar9 = (int *)(param_2 + iVar4 + 10);
        iVar4 = *piVar9 + 0x8000;
        *piVar9 = iVar4;
        *puVar8 = (u16)((u32)iVar4 >> 0x10);
        if ((u32)*(u16 *)(param_2 + 0x718) != (iVar4 >> 0x10 & uVar3)) {
          SpriteAnimEngine_5B80_Sub_08077A1C(param_2);
        }
        iVar4 = *(int *)(param_2 + 0x00000724) + 0x8000;
        *(int *)(param_2 + 0x00000724) = iVar4;
        *(short *)(param_2 + 0x00000714) = (short)((u32)iVar4 >> 0x10);
        if ((iVar4 >> 0x10 & 0xffffU) == 0x200) {
          *piVar9 = 300;
          *(u16 *)(param_2 + 0x0000072A) = 4;
        }
        break;
      case 0x8077738:
        iVar4 = *(int *)(param_2 + 0x720) + -1;
        *(int *)(param_2 + 0x720) = iVar4;
        if (iVar4 < 0) {
          *(u16 *)(param_2 + 0x0000072A) = 5;
        }
        break;
      case 0x8077758:
        hardware_Sub_08009378(puVar5 + 3,0x00000889,1,0);
        iVar4 = hardware_GetField_0x00_8940(param_2);
        func_080D3914(iVar4,puVar5,*(u32 *)(*(int *)(iVar4 + 8) + 0x10));
        *(u16 *)(param_2 + 0x0000072A) = 6;
        break;
      case 0x8077788:
        if (-1 < (int)(-*puVar5 | *puVar5)) {
          bVar1 = true;
        }
      }
    }
    iVar4 = hardware_GetField_0x00_8918(param_2);
    *(u16 *)(iVar4 + 0x16) = *(u16 *)(param_2 + 0x00000716);
    iVar4 = hardware_GetField_0x00_8918(param_2);
    *(u16 *)(iVar4 + 0x1a) = *(u16 *)(param_2 + 0x00000714);
  } while (!bVar1);
  *self = 0;
  uStack_24 = 0;
  uStack_2c = 0;
  if (puVar5 != (u32 *)0x0) {
    puStack_28 = &uStack_2c;
    func_080D3914(puVar5,3,*(u32 *)(puVar5[2] + 0xc));
  }
  return (self);
}

/* 0x080779B4 (104B) | SpriteAnimEngine_5B80_Sub_080779B4 (orig: func_080779B4) | origin: wip | domain: SpriteAnimEngine_5B80 | MEDIUM / graph_algebra */
void SpriteAnimEngine_5B80_Sub_080779B4(int param_1) {
  int iVar1;
  int iVar2;
  hardware_HW_DMA3SAD_8EB8(0,0x06000C00,0xe00);
  iVar1 = 8;
  iVar2 = 0x06001A00;
  do {
    Code_Lib_Syscall_Wrap_CpuFastSet_E7A0(0x2001c,param_1 + 0x14,0);
    hardware_HW_DMA3SAD(param_1 + 0x14,iVar2,0x700);
    iVar2 = iVar2 + 0x700;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
}

/* 0x08077A1C (548B) | SpriteAnimEngine_5B80_Sub_08077A1C (orig: func_08077A1C) | origin: wip | domain: SpriteAnimEngine_5B80 | MEDIUM / graph_algebra */
void SpriteAnimEngine_5B80_Sub_08077A1C(int param_1) {
  char cVar1;
  int iVar2;
  u8 *puVar3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  int iVar7;
  u32 *puVar8;
  int iVar9;
  u32 *puVar10;
  int iVar11;
  int *piVar12;
  u32 *puVar13;
  u32 uVar14;
  u32 uVar15;
  u8 auStack_68 [32];
  u8 uStack_48;
  u32 uStack_44;
  u32 uStack_40;
  u32 uStack_3c;
  u32 uStack_38;
  u32 uStack_34;
  u32 uStack_30;
  int iStack_2c;
  int iStack_28;
  u32 *puStack_24;
  piVar12 = (int *)(param_1 + 0x0000071C);
  iVar2 = *piVar12;
  uStack_34 = 0x2001c;
  Code_Lib_Syscall_Wrap_CpuFastSet_E7A0(0x2001c,param_1 + 0x14,0);
  if (*(char *)(param_1 + 0x728) != '\0') {
    if (*(int *)(*piVar12 * 4 + *(int *)(param_1 + 0x0000072C)) == 0) {
      *(char *)(param_1 + 0x728) = '\0';
    }
    else {
      puVar3 = auStack_68 + 0x1e;
      do {
        *puVar3 = 0x20;
        puVar3 = puVar3 + -1;
      } while ((int)auStack_68 <= (int)puVar3);
      uStack_48 = 0;
      iVar11 = 0;
      pcVar6 = *(char **)(*(int *)(param_1 + 0x0000071C) * 4 + *(int *)(param_1 + 0x0000072C))
      ;
      cVar1 = *pcVar6;
      while (cVar1 != '\0') {
        iVar11 = iVar11 + 1;
        cVar1 = pcVar6[iVar11];
      }
      if (0 < iVar11) {
        iVar9 = 0;
        if (0 < iVar11) {
          iVar4 = *(int *)(param_1 + 0x0000071C);
          iVar7 = *(int *)(param_1 + 0x0000072C);
          puVar3 = auStack_68 + (0x1c - iVar11 >> 1);
          do {
            *puVar3 = *(u8 *)(*(int *)(iVar4 * 4 + iVar7) + iVar9);
            puVar3 = puVar3 + 1;
            iVar9 = iVar9 + 1;
          } while (iVar9 < iVar11);
        }
      }
      uStack_30 = 0x2001c;
      SpriteAnimEngine_Sub_0804E958(0x2001c,param_1 + 0x14,0,0,auStack_68,0,1);
    }
  }
  *(int *)(param_1 + 0x0000071C) = *(int *)(param_1 + 0x0000071C) + 1;
  piVar12 = (int *)hardware_GetField_0x00_8910(param_1);
  hardware_Sub_08008F0C(&uStack_44,param_1 + 0x14,(iVar2 + 0xbU & 0xf) * 0x700 + 0x06000C00,0x700);
  puVar8 = (u32 *)piVar12[1];
  if (puVar8 == (u32 *)piVar12[3]) {
    iStack_28 = 1;
    iStack_2c = (int)puVar8 - *piVar12 >> 4;
    piVar5 = &iStack_2c;
    if (iStack_2c == 0) {
      piVar5 = &iStack_28;
    }
    if (iStack_2c + *piVar5 == 0) {
      puStack_24 = (u32 *)0x0;
      iVar2 = 0;
    }
    else {
      iVar2 = (iStack_2c + *piVar5) * 0x10;
      puStack_24 = (u32 *)LibC_malloc(iVar2);
      if (puStack_24 == (u32 *)0x0) {
        puStack_24 = (u32 *)code_linkonce_Sub_080D3BC0(iVar2);
      }
    }
    puVar13 = puStack_24;
    for (puVar10 = (u32 *)*piVar12; puVar10 != puVar8; puVar10 = puVar10 + 4) {
      if (puVar13 != (u32 *)0x0) {
        uVar14 = puVar10[1];
        uVar15 = puVar10[2];
        *puVar13 = *puVar10;
        puVar13[1] = uVar14;
        puVar13[2] = uVar15;
        puVar13[3] = puVar10[3];
      }
      puVar13 = puVar13 + 4;
    }
    iVar11 = iStack_28;
    if (iStack_28 == 1) {
      if (puVar13 != (u32 *)0x0) {
        *puVar13 = uStack_44;
        puVar13[1] = uStack_40;
        puVar13[2] = uStack_3c;
        puVar13[3] = uStack_38;
      }
      puVar13 = puVar13 + 4;
    }
    else {
      for (; iVar11 != 0; iVar11 = iVar11 + -1) {
        if (puVar13 != (u32 *)0x0) {
          *puVar13 = uStack_44;
          puVar13[1] = uStack_40;
          puVar13[2] = uStack_3c;
          puVar13[3] = uStack_38;
        }
        puVar13 = puVar13 + 4;
      }
    }
    for (iVar11 = *piVar12; iVar11 != piVar12[1]; iVar11 = iVar11 + 0x10) {
    }
    if (*piVar12 != 0) {
      LibC_free();
    }
    *piVar12 = (int)puStack_24;
    piVar12[1] = (int)puVar13;
    piVar12[3] = (int)puStack_24 + iVar2;
  }
  else {
    if (puVar8 != (u32 *)0x0) {
      *puVar8 = uStack_44;
      puVar8[1] = uStack_40;
      puVar8[2] = uStack_3c;
      puVar8[3] = uStack_38;
    }
    piVar12[1] = piVar12[1] + 0x10;
  }
}

/* 0x08077CE0 (124B) | SpriteAnimEngine_5B80_Ctor_7CE0 (orig: func_08077CE0) | origin: wip | domain: SpriteAnimEngine_5B80 | HIGH / vtable_algebra */
void SpriteAnimEngine_5B80_Ctor_7CE0(u32 self) {
    u8 auStack_10 [4];
    u32 auStack_1c [3];
  register u16 iVar1;
  register BOOL uVar2;
  iVar1 = (u16)hardware_GetField_0x00_8918();
  *(u16 *)(iVar1 + 0x50) = 0x3f;
  uVar2 = hardware_GetField_0x00_8918(self);
  auStack_1c[0] = (u8)0;
  auStack_1c[1] = 0;
  *(auStack_1c + 2) = (u8)0x080E5B80;
  hardware_Sub_08009300(auStack_10,uVar2);
  hardware_Sub_0800934C(auStack_10,0x00000889,1,1);
  iVar1 = hardware_GetField_0x00_8940(self);
  func_080D3914(iVar1,auStack_1c,*(u32 *)(*(int *)(iVar1 + 8) + 0x10));
  while ((int)(-auStack_1c[0] | auStack_1c[0]) < 0) {
    code_0803EE94_7BC0_Sub_080785C8(self);
    hardware_Ctor_87C8(self);
  }
  hardware_Ctor_94B8(auStack_1c,2);
}

/* 0x08077D5C (124B) | SpriteAnimEngine_5B80_Ctor_7D5C (orig: func_08077D5C) | origin: wip | domain: SpriteAnimEngine_5B80 | HIGH / vtable_algebra */
void SpriteAnimEngine_5B80_Ctor_7D5C(u32 self) {
    s8 iVar1;
    u8 auStack_10 [4];
    u32 auStack_1c [3];
  register u32 uVar2;
  iVar1 = hardware_GetField_0x00_8918();
  *(u16 *)(iVar1 + 0x50) = 0x3f;
  uVar2 = hardware_GetField_0x00_8918(self);
  auStack_1c[0] = (u32)0;
  auStack_1c[1] = 0;
  *(auStack_1c + 2) = (u8)0x080E5B80;
  hardware_Sub_08009300(auStack_10,uVar2);
  hardware_Sub_08009378(auStack_10,0x00000889,1,1);
  iVar1 = hardware_GetField_0x00_8940(self);
  func_080D3914(iVar1,auStack_1c,*(u32 *)(*(int *)(iVar1 + 8) + 0x10));
  while ((int)(-auStack_1c[0] | auStack_1c[0]) < 0) {
    code_0803EE94_7BC0_Sub_080785C8(self);
    hardware_Ctor_87C8(self);
  }
  hardware_Ctor_94B8(auStack_1c,2);
}

/* 0x08079A64 (860B) | SpriteAnimEngine_5B80_Sub_08079A64 (orig: func_08079A64) | origin: wip | domain: SpriteAnimEngine_5B80 | MEDIUM / graph_algebra */
void SpriteAnimEngine_5B80_Sub_08079A64(int param_1) {
  char cVar1;
  int iVar2;
  int *piVar3;
  u16 *puVar4;
  short *psVar5;
  u32 uVar6;
  u32 *puVar7;
  u32 uVar8;
  int iVar9;
  int iVar10;
  u8 auStack_9c [36];
  u8 auStack_78 [64];
  u32 uStack_38;
  u32 uStack_34;
  u32 uStack_30;
  u32 uStack_2c;
  u8 *puStack_28;
  u32 *puStack_24;
  psVar5 = (short *)(param_1 + 0x850);
  *psVar5 = 0;
  if (*(char *)(param_1 + 0x00000A57) == '\0') {
    uVar8 = 0;
    puStack_24 = &uStack_38;
    iVar10 = param_1 + 0x00000858;
    puVar7 = 0x080FD920;
    do {
      uVar6 = *puVar7;
      puVar7 = puVar7 + 1;
      *(short *)(iVar10 + *psVar5 * 2) = (short)uVar6;
      *psVar5 = *psVar5 + 1;
      uVar8 = uVar8 + 1;
    } while (uVar8 < 8);
    cVar1 = func_0800BF9C(*(int *)(param_1 + 8) + 500);
    if (cVar1 != '\0') {
      psVar5 = (short *)(param_1 + 0x850);
      *(u16 *)(param_1 + 0x858 + *psVar5 * 2) = 0x4a;
      *psVar5 = *psVar5 + 1;
    }
    iVar10 = FarmHouse_GetFridge_C048(*(int *)(param_1 + 8) + 500);
    if (iVar10 != 0) {
      psVar5 = (short *)(param_1 + 0x850);
      *(u16 *)(param_1 + 0x00000858 + *psVar5 * 2) = 0x4b;
      *psVar5 = *psVar5 + 1;
    }
    iVar10 = FarmHouse_GetShelf_C060(*(int *)(param_1 + 8) + 500);
    if (iVar10 != 0) {
      psVar5 = (short *)(param_1 + 0x850);
      *(u16 *)(param_1 + 0x00000858 + *psVar5 * 2) = 0x4c;
      *psVar5 = *psVar5 + 1;
    }
    cVar1 = func_0800BFCC(*(int *)(param_1 + 8) + 500);
    if (cVar1 != '\0') {
      psVar5 = (short *)(param_1 + 0x850);
      *(u16 *)(param_1 + 0x00000858 + *psVar5 * 2) = 0xc;
      *psVar5 = *psVar5 + 1;
    }
    cVar1 = func_0800BF84(*(int *)(param_1 + 8) + 500);
    if (cVar1 != '\0') {
      psVar5 = (short *)(param_1 + 0x850);
      *(u16 *)(param_1 + 0x00000858 + *psVar5 * 2) = 0x49;
      *psVar5 = *psVar5 + 1;
    }
    iVar10 = FarmHouse_GetRecordPlayer_C07C(*(int *)(param_1 + 8) + 500);
    if (iVar10 != 0) {
      psVar5 = (short *)(param_1 + 0x850);
      *(u16 *)(param_1 + 0x00000858 + *psVar5 * 2) = 0x48;
      *psVar5 = *psVar5 + 1;
    }
  }
  else {
    iVar10 = 0x4d;
    puStack_24 = &uStack_38;
    psVar5 = (short *)(param_1 + 0x850);
    do {
      cVar1 = Unk_0800BC58_Schedule_Next_Event(*(int *)(param_1 + 8) + 0x400,iVar10);
      if (cVar1 != '\0') {
        *(short *)(param_1 + 0x00000858 + *psVar5 * 2) = (short)iVar10;
        *psVar5 = *psVar5 + 1;
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < 0x89);
  }
  iVar10 = param_1 + 0x14;
  if (*(short *)(param_1 + 0x850) + 2 < 0xb) {
    iVar2 = 0;
    iVar9 = 0x00000848;
  }
  else {
    iVar2 = (*(short *)(param_1 + 0x850) + -8) * 0x100000;
    iVar9 = 0x848;
  }
  *(int *)(param_1 + iVar9) = iVar2;
  iVar9 = 0;
  puVar7 = (u32 *)(0x00000A5C + param_1);
  do {
    uStack_38 = ((u16)(0x1c));
    *(u16 *)((int)puStack_24 + 2) = 2;
    Code_Lib_Syscall_Wrap_CpuFastSet_E7A0(uStack_38,iVar10,0);
    iVar2 = *(short *)(param_1 + 0x0000084E) + iVar9;
    if ((1 < iVar2) && (iVar2 < *(short *)(param_1 + 0x850) + 2)) {
      piVar3 = *(int **)(*(short *)(param_1 + 0x858 + (iVar2 + -2) * 2) * 4 + 0x0810828C);
      *puVar7 = piVar3;
      iVar2 = *piVar3;
      if (iVar2 != 0) {
        farmer_Sub_0807A708(param_1,iVar2,auStack_9c);
        uStack_34 = 0x2001c;
        SpriteAnimEngine_Sub_0804E958(0x2001c,iVar10,0,0,auStack_9c,0,1);
      }
    }
    hardware_HW_DMA3SAD(iVar10,((u32)(*(u16 *)(param_1 + 0x840) >> 4) + iVar9 & 0xf) * 0x700 +
                         0x06000C00,0x700);
    iVar9 = iVar9 + 1;
  } while (iVar9 < 0xb);
  iVar10 = hardware_Sub_08007D4C(param_1 + 0x820,*(u32 *)(param_1 + 0x824));
  hardware_HW_DMA3SAD_8EB8(0,iVar10 * 0x20 + 0x06010000,0x700);
  iVar10 = 0;
  puStack_28 = auStack_78;
  do {
    cVar1 = *(char *)(iVar10 + (*(u8 *)(param_1 + 0x00000A57) & 1) * 0xc + 0x080FD940);
    if (cVar1 == '\0') break;
    uStack_30 = 0x20001;
    Code_Lib_Syscall_Wrap_CpuFastSet_E7A0(0x20001,auStack_78,0);
    uStack_2c = 0x20001;
    SpriteAnimEngine_Sub_0804E5AC(0x20001,auStack_78,0,0,cVar1,0,1);
    iVar9 = hardware_Sub_08007D4C(param_1 + 0x820,*(u32 *)(param_1 + 0x824));
    hardware_HW_DMA3SAD(puStack_28,(iVar9 + iVar10 * 2) * 0x20 + 0x06010000,0x40);
    iVar10 = iVar10 + 1;
  } while (iVar10 < 0xc);
  puVar4 = (u16 *)hardware_GetField_0x00_8918(param_1);
  *puVar4 = 0x1e40;
}

/* 0x08079DC0 (460B) | SpriteAnimEngine_5B80_Sub_08079DC0 (orig: func_08079DC0) | origin: wip | domain: SpriteAnimEngine_5B80 | MEDIUM / graph_algebra */
void SpriteAnimEngine_5B80_Sub_08079DC0(int param_1) {
  u16 uVar1;
  u32 uVar2;
  int *piVar3;
  int *piVar4;
  u32 *puVar5;
  u32 *puVar6;
  int iVar7;
  u32 *puVar8;
  u32 uVar9;
  u32 uVar10;
  int iVar11;
  u32 uVar12;
  u32 uStack_54;
  u32 uStack_50;
  u32 uStack_4c;
  u32 uStack_48;
  u32 uStack_34;
  u32 uStack_30;
  int iStack_2c;
  int iStack_28;
  u32 *puStack_24;
  uVar1 = *(u16 *)(param_1 + 0x840);
  if (*(u16 *)(param_1 + 0x00000842) < uVar1) {
    iVar11 = (uVar1 >> 4) + 8;
    uVar9 = (uVar1 >> 4) + 10;
    uVar2 = 0xf;
  }
  else {
    uVar2 = (u32)(uVar1 >> 4);
    iVar11 = uVar2 - 2;
    uVar9 = 0xf;
  }
  uStack_34 = 0x2001c;
  iVar7 = param_1 + 0x14;
  Code_Lib_Syscall_Wrap_CpuFastSet_E7A0(0x2001c,iVar7,0);
  if (-1 < iVar11) {
    piVar3 = *(int **)(*(short *)(param_1 + 0x00000858 + iVar11 * 2) * 4 + 0x0810828C);
    *(int **)(param_1 + 0x00000A5C) = piVar3;
    iVar11 = *piVar3;
    if (iVar11 != 0) {
      farmer_Sub_0807A708(param_1,iVar11,&uStack_54);
      uStack_30 = 0x2001c;
      SpriteAnimEngine_Sub_0804E958(0x2001c,iVar7,0,0,&uStack_54,0,1);
    }
  }
  piVar3 = (int *)hardware_GetField_0x00_8910(param_1);
  hardware_Sub_08008F0C(&uStack_54,iVar7,(uVar9 & uVar2) * 0x700 + 0x06000C00,0x700);
  puVar5 = (u32 *)piVar3[1];
  if (puVar5 == (u32 *)piVar3[3]) {
    iStack_28 = 1;
    iStack_2c = (int)puVar5 - *piVar3 >> 4;
    piVar4 = &iStack_2c;
    if (iStack_2c == 0) {
      piVar4 = &iStack_28;
    }
    if (iStack_2c + *piVar4 == 0) {
      puStack_24 = (u32 *)0x0;
      iVar11 = 0;
    }
    else {
      iVar11 = (iStack_2c + *piVar4) * 0x10;
      puStack_24 = (u32 *)LibC_malloc(iVar11);
      if (puStack_24 == (u32 *)0x0) {
        puStack_24 = (u32 *)code_linkonce_Sub_080D3BC0(iVar11);
      }
    }
    puVar8 = puStack_24;
    for (puVar6 = (u32 *)*piVar3; puVar6 != puVar5; puVar6 = puVar6 + 4) {
      if (puVar8 != (u32 *)0x0) {
        uVar10 = puVar6[1];
        uVar12 = puVar6[2];
        *puVar8 = *puVar6;
        puVar8[1] = uVar10;
        puVar8[2] = uVar12;
        puVar8[3] = puVar6[3];
      }
      puVar8 = puVar8 + 4;
    }
    iVar7 = iStack_28;
    if (iStack_28 == 1) {
      if (puVar8 != (u32 *)0x0) {
        *puVar8 = uStack_54;
        puVar8[1] = uStack_50;
        puVar8[2] = uStack_4c;
        puVar8[3] = uStack_48;
      }
      puVar8 = puVar8 + 4;
    }
    else {
      for (; iVar7 != 0; iVar7 = iVar7 + -1) {
        if (puVar8 != (u32 *)0x0) {
          *puVar8 = uStack_54;
          puVar8[1] = uStack_50;
          puVar8[2] = uStack_4c;
          puVar8[3] = uStack_48;
        }
        puVar8 = puVar8 + 4;
      }
    }
    for (iVar7 = *piVar3; iVar7 != piVar3[1]; iVar7 = iVar7 + 0x10) {
    }
    if (*piVar3 != 0) {
      LibC_free();
    }
    *piVar3 = (int)puStack_24;
    piVar3[1] = (int)puVar8;
    piVar3[3] = (int)puStack_24 + iVar11;
  }
  else {
    if (puVar5 != (u32 *)0x0) {
      *puVar5 = uStack_54;
      puVar5[1] = uStack_50;
      puVar5[2] = uStack_4c;
      puVar5[3] = uStack_48;
    }
    piVar3[1] = piVar3[1] + 0x10;
  }
}

/* 0x08079F8C (800B) | SpriteAnimEngine_5B80_Sub_08079F8C (orig: func_08079F8C) | origin: wip | domain: SpriteAnimEngine_5B80 | MEDIUM / graph_algebra */
void SpriteAnimEngine_5B80_Sub_08079F8C(int param_1) {
  char cVar1;
  int iVar2;
  u32 uVar3;
  int iVar4;
  u8 *puVar5;
  int *piVar6;
  int *piVar7;
  u16 *puVar8;
  char *pcVar9;
  int *piVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  u32 uVar14;
  int *piVar15;
  u16 uStack_b8;
  u8 bStack_b6;
  u16 auStack_b4 [18];
  u8 auStack_90 [64];
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  u32 uStack_44;
  u32 uStack_40;
  u32 uStack_3c;
  u32 uStack_38;
  u8 *puStack_34;
  int iStack_30;
  u32 uStack_2c;
  u32 *puStack_28;
  int iStack_24;
  uVar14 = 0;
  puStack_28 = &uStack_44;
  iVar2 = **(int **)(param_1 + 0x00000A5C);
  while (iVar2 != 0) {
    pcVar9 = *(char **)(((int)(uVar14 << 0x10) >> 0xe) + *(int *)(param_1 + 0x00000A5C));
    if ((*pcVar9 == '<') && ((u8)(pcVar9[1] - 0x30U) < 10)) {
      iVar2 = 0;
      do {
        *(char *)((int)&uStack_b8 + iVar2) = pcVar9[iVar2 + 1] + -0x30;
        iVar2 = iVar2 + 1;
      } while (iVar2 < 3);
      iVar2 = SpriteAnimEngine_5B80_Sub_0807A2AC(param_1,(u32)(u8)uStack_b8 * 100 + (u32)(*(u8 *)((u8 *)&uStack_b8 + 1)) * 10 +
                                    (u32)bStack_b6);
      if (iVar2 == 1) break;
    }
    uVar3 = uVar14 * 0x10000 + 0x10000;
    uVar14 = uVar3 >> 0x10;
    iVar2 = *(int *)(((int)uVar3 >> 0xe) + *(int *)(param_1 + 0x00000A5C));
  }
  uStack_2c = uVar14 * 0x10000 + 0xFFFF0000;
  iVar2 = (int)uStack_2c >> 0x10;
  if (iVar2 + 2 < 0xb) {
    iVar4 = 0;
    iVar2 = 0x00000848;
  }
  else {
    iVar4 = (iVar2 + -8) * 0x100000;
    iVar2 = 0x00000848;
  }
  *(int *)(iVar2 + param_1) = iVar4;
  *(u32 *)(param_1 + 0xa64) = *(u32 *)(param_1 + 0xa60);
  uStack_2c = uStack_2c & 0xffff0000;
  iVar2 = 0;
  iStack_30 = param_1 + 0x14;
  if (0 < (int)uStack_2c) {
    do {
      puVar5 = *(u8 **)(iVar2 * 4 + *(int *)(0x00000A5C + param_1) + 4);
      iVar4 = iVar2 + 1;
      if (((u8)(puVar5[1])) == 0x0000819A) {
        piVar15 = (int *)(param_1 + 0xa60);
        piVar12 = *(int **)(param_1 + 0xa64);
        iStack_50 = iVar2;
        if (piVar12 == *(int **)(param_1 + 0xa6c)) {
          iStack_48 = 1;
          iStack_4c = (int)piVar12 - *piVar15 >> 2;
          piVar6 = &iStack_4c;
          if (iStack_4c == 0) {
            piVar6 = &iStack_48;
          }
          if (iStack_4c + *piVar6 == 0) {
            piVar6 = (int *)0x0;
            iVar4 = 0;
          }
          else {
            iVar4 = (iStack_4c + *piVar6) * 4;
            iStack_24 = iVar2;
            piVar6 = (int *)LibC_malloc(iVar4);
            iVar2 = iStack_24;
            if (piVar6 == (int *)0x0) {
              piVar6 = (int *)code_linkonce_Sub_080D3BC0(iVar4);
              iVar2 = iStack_24;
            }
          }
          piVar10 = (int *)*piVar15;
          piVar7 = piVar6;
          if (piVar12 != piVar10) {
            iStack_24 = iVar2;
            iVar2 = LibC_memmove(piVar6,piVar10,(int)piVar12 - (int)piVar10);
            piVar7 = (int *)(iVar2 + ((int)piVar12 - (int)piVar10));
            iVar2 = iStack_24;
          }
          iVar11 = *piVar15;
          for (iVar13 = iStack_48; iVar13 != 0; iVar13 = iVar13 + -1) {
            *piVar7 = iStack_50;
            piVar7 = piVar7 + 1;
          }
          if (iVar11 != 0) {
            LibC_free(iVar11);
          }
          *piVar15 = (int)piVar6;
          *(int **)(param_1 + 0xa64) = piVar7;
          *(int *)(param_1 + 0xa6c) = iVar4 + (int)piVar6;
          iVar4 = iVar2 + 1;
        }
        else {
          if (piVar12 != (int *)0x0) {
            *piVar12 = iVar2;
          }
          *(int *)(param_1 + 0xa64) = *(int *)(param_1 + 0xa64) + 4;
        }
      }
      iVar2 = iVar4;
    } while (iVar2 < (int)uStack_2c >> 0x10);
  }
  hardware_HW_DMA3SAD_8EB8(0,0x06000C00,0xe00);
  iVar2 = iStack_30;
  iVar13 = 0;
  iVar4 = 0x06001A00;
  do {
    uStack_44 = ((u16)(0x1c));
    *(u16 *)((int)puStack_28 + 2) = 2;
    Code_Lib_Syscall_Wrap_CpuFastSet_E7A0(uStack_44,iVar2,0);
    if ((iVar13 < (int)uStack_2c >> 0x10) &&
       (iVar11 = *(int *)(iVar13 * 4 + *(int *)(0x00000A5C + param_1) + 4), iVar11 != 0)) {
      farmer_Sub_0807A708(param_1,iVar11,auStack_b4);
      uStack_40 = 0x2001c;
      SpriteAnimEngine_Sub_0804E958(0x2001c,iVar2,0,0,auStack_b4,0,1);
    }
    hardware_HW_DMA3SAD(iStack_30,iVar4,0x700);
    iVar4 = iVar4 + 0x700;
    iVar13 = iVar13 + 1;
  } while (iVar13 < 9);
  iVar2 = hardware_Sub_08007D4C(param_1 + 0x820,*(u32 *)(param_1 + 0x824));
  hardware_HW_DMA3SAD_8EB8(0,iVar2 * 0x20 + 0x06010000,0x700);
  if (**(int **)(0x00000A5C + param_1) != 0) {
    farmer_Sub_0807A708(param_1,**(int **)(0x00000A5C + param_1),&uStack_b8);
    iVar2 = 0;
    puStack_34 = auStack_90;
    do {
      cVar1 = *(char *)((int)&uStack_b8 + iVar2);
      if (cVar1 == '\0') break;
      uStack_3c = 0x20001;
      Code_Lib_Syscall_Wrap_CpuFastSet_E7A0(0x20001,auStack_90,0);
      uStack_38 = 0x20001;
      SpriteAnimEngine_Sub_0804E5AC(0x20001,auStack_90,0,0,cVar1,0,1);
      iVar4 = hardware_Sub_08007D4C(param_1 + 0x820,*(u32 *)(param_1 + 0x824));
      hardware_HW_DMA3SAD(puStack_34,(iVar4 + iVar2 * 2) * 0x20 + 0x06010000,0x40);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x1c);
  }
  puVar8 = (u16 *)hardware_GetField_0x00_8918(param_1);
  *puVar8 = 0x1e40;
}

/* 0x0807A554 (436B) | SpriteAnimEngine_5B80_Sub_0807A554 (orig: func_0807A554) | origin: wip | domain: SpriteAnimEngine_5B80 | MEDIUM / graph_algebra */
void SpriteAnimEngine_5B80_Sub_0807A554(int param_1) {
  u16 uVar1;
  u32 uVar2;
  int *piVar3;
  int *piVar4;
  u32 *puVar5;
  u32 *puVar6;
  int iVar7;
  u32 *puVar8;
  u32 uVar9;
  u32 uVar10;
  int iVar11;
  u32 uVar12;
  u32 uStack_54;
  u32 uStack_50;
  u32 uStack_4c;
  u32 uStack_48;
  u32 uStack_34;
  u32 uStack_30;
  int iStack_2c;
  int iStack_28;
  u32 *puStack_24;
  uVar1 = *(u16 *)(param_1 + 0x840);
  if (*(u16 *)(param_1 + 0x00000842) < uVar1) {
    iVar11 = (uVar1 >> 4) + 8;
    uVar9 = (uVar1 >> 4) + 10;
    uVar2 = 0xf;
  }
  else {
    uVar2 = (u32)(uVar1 >> 4);
    iVar11 = uVar2 - 2;
    uVar9 = 0xf;
  }
  uStack_34 = 0x2001c;
  iVar7 = param_1 + 0x14;
  Code_Lib_Syscall_Wrap_CpuFastSet_E7A0(0x2001c,iVar7,0);
  if ((-1 < iVar11) &&
     (iVar11 = *(int *)(iVar11 * 4 + *(int *)(param_1 + 0x00000A5C) + 4), iVar11 != 0)) {
    farmer_Sub_0807A708(param_1,iVar11,&uStack_54);
    uStack_30 = 0x2001c;
    SpriteAnimEngine_Sub_0804E958(0x2001c,iVar7,0,0,&uStack_54,0,1);
  }
  piVar3 = (int *)hardware_GetField_0x00_8910(param_1);
  hardware_Sub_08008F0C(&uStack_54,iVar7,(uVar9 & uVar2) * 0x700 + 0x06000C00,0x700);
  puVar5 = (u32 *)piVar3[1];
  if (puVar5 == (u32 *)piVar3[3]) {
    iStack_28 = 1;
    iStack_2c = (int)puVar5 - *piVar3 >> 4;
    piVar4 = &iStack_2c;
    if (iStack_2c == 0) {
      piVar4 = &iStack_28;
    }
    if (iStack_2c + *piVar4 == 0) {
      puStack_24 = (u32 *)0x0;
      iVar11 = 0;
    }
    else {
      iVar11 = (iStack_2c + *piVar4) * 0x10;
      puStack_24 = (u32 *)LibC_malloc(iVar11);
      if (puStack_24 == (u32 *)0x0) {
        puStack_24 = (u32 *)code_linkonce_Sub_080D3BC0(iVar11);
      }
    }
    puVar8 = puStack_24;
    for (puVar6 = (u32 *)*piVar3; puVar6 != puVar5; puVar6 = puVar6 + 4) {
      if (puVar8 != (u32 *)0x0) {
        uVar10 = puVar6[1];
        uVar12 = puVar6[2];
        *puVar8 = *puVar6;
        puVar8[1] = uVar10;
        puVar8[2] = uVar12;
        puVar8[3] = puVar6[3];
      }
      puVar8 = puVar8 + 4;
    }
    iVar7 = iStack_28;
    if (iStack_28 == 1) {
      if (puVar8 != (u32 *)0x0) {
        *puVar8 = uStack_54;
        puVar8[1] = uStack_50;
        puVar8[2] = uStack_4c;
        puVar8[3] = uStack_48;
      }
      puVar8 = puVar8 + 4;
    }
    else {
      for (; iVar7 != 0; iVar7 = iVar7 + -1) {
        if (puVar8 != (u32 *)0x0) {
          *puVar8 = uStack_54;
          puVar8[1] = uStack_50;
          puVar8[2] = uStack_4c;
          puVar8[3] = uStack_48;
        }
        puVar8 = puVar8 + 4;
      }
    }
    for (iVar7 = *piVar3; iVar7 != piVar3[1]; iVar7 = iVar7 + 0x10) {
    }
    if (*piVar3 != 0) {
      LibC_free();
    }
    *piVar3 = (int)puStack_24;
    piVar3[1] = (int)puVar8;
    piVar3[3] = (int)puStack_24 + iVar11;
  }
  else {
    if (puVar5 != (u32 *)0x0) {
      *puVar5 = uStack_54;
      puVar5[1] = uStack_50;
      puVar5[2] = uStack_4c;
      puVar5[3] = uStack_48;
    }
    piVar3[1] = piVar3[1] + 0x10;
  }
}

/* 0x0807A878 (276B) | SpriteAnimEngine_5B80_Sub_0807A878 (orig: func_0807A878) | origin: wip | domain: SpriteAnimEngine_5B80 | MEDIUM / graph_algebra */
void SpriteAnimEngine_5B80_Sub_0807A878(int param_1) {
  int iVar1;
  int iVar2;
  int *piVar3;
  u32 uVar4;
  u32 uVar5;
  u32 in_stack_ffffffa8;
  int iVar6;
  int iVar7;
  u32 in_stack_ffffffb0;
  u32 in_stack_ffffffb8;
  u32 in_stack_ffffffc0;
  u32 uStack_3c;
  u32 uStack_38;
  int iStack_34;
  u32 uStack_30;
  int iStack_2c;
  u32 uStack_28;
  u32 uStack_24;
  u32 uStack_20;
  piVar3 = *(int **)(param_1 + 0x00000774);
  func_080D3918(&uStack_3c,piVar3,
                  *(u16 *)
                   (*(int *)(param_1 + 0x778) +
                   (u32)*(u16 *)((u32 *)(param_1 + 0x00000774) + 3) * 4),
                  *(u32 *)(*piVar3 + 0x10),0,in_stack_ffffffa8 & 0xffff0000,0,
                  in_stack_ffffffb0 & 0xffff0000,0,in_stack_ffffffb8 & 0xffff0000,0,
                  in_stack_ffffffc0 & 0xffff0000);
  LibC_memcpy(&uStack_3c,&uStack_3c,0x20);
  iVar6 = iStack_2c;
  iVar2 = iStack_2c;
  uVar5 = uStack_28;
  iVar1 = hardware_Sub_080074C0(param_1 + 0x00000818,*(u32 *)(param_1 + 0x00000818 + 4),
                        uStack_24,0x00000818,uStack_3c,uStack_38,iStack_34,uStack_30,iStack_2c,
                        uStack_28,uStack_24,uStack_20);
  iVar7 = 0x05000200;
  uVar4 = 0;
  if (iVar2 != 0) {
    uVar4 = uVar5 & 0xffff;
  }
  hardware_HW_DMA3SAD(iVar6,iVar1 * 0x20 + 0x05000200,uVar4);
  code_0803EE94_79C8_vfunc_10(&uStack_3c,param_1 + 0x00000744,0);
  iVar6 = iStack_2c;
  iVar2 = hardware_Sub_080074C0(param_1 + 0x00000838,*(u32 *)(param_1 + 0x00000838 + 4),
                        uStack_24,0x00000838,uStack_3c,uStack_38);
  uVar5 = 0;
  if (iVar6 != 0) {
    uVar5 = uStack_28 & 0xffff;
  }
  iVar6 = iStack_34;
  hardware_HW_DMA3SAD(iStack_2c,iVar2 * 0x20 + iVar7,uVar5);
  iVar7 = iVar6;
  iVar2 = hardware_Sub_08007D4C(param_1 + 0x830,*(u32 *)(param_1 + 0x834));
  uVar5 = 0;
  if (iVar7 != 0) {
    uVar5 = uStack_30 & 0xffff;
  }
  hardware_HW_DMA3SAD(iVar6,iVar2 * 0x20 + 0x06010000,uVar5);
}

/* 0x0807AF78 (124B) | SpriteAnimEngine_5B80_Sub_0807AF78 (orig: func_0807AF78) | origin: wip | domain: SpriteAnimEngine_5B80 | MEDIUM / graph_algebra */
void SpriteAnimEngine_5B80_Sub_0807AF78(int param_1,int param_2) {
  int iVar1;
  int *piVar2;
  
  *(u16 *)(param_1 + 0x842) = *(u16 *)(param_1 + 0x840) & 0xfff0;
  piVar2 = (int *)(param_1 + 0x844);
  param_2 = *piVar2 + param_2;
  *piVar2 = param_2;
  if (param_2 < 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x848);
    if (param_2 <= iVar1) goto LAB_0807afb8;
  }
  *piVar2 = iVar1;
LAB_0807afb8:
  *(u16 *)(param_1 + 0x840) = *(u16 *)(param_1 + 0x846);
  if (*(u16 *)(param_1 + 0x842) != (*(u16 *)(param_1 + 0x846) & 0xfff0)) {
    SpriteAnimEngine_5B80_Sub_0807A554(param_1);
  }
  return 0;
}

/* 0x0807AFF4 (68B) | SpriteAnimEngine_5B80_Sub_0807AFF4 (orig: func_0807AFF4) | origin: wip | domain: SpriteAnimEngine_5B80 | MEDIUM / graph_algebra */
u32 SpriteAnimEngine_5B80_Sub_0807AFF4(int param_1) {
  u32 *puVar1;
  u32 uVar2;
  u32 *puVar3;
  u32 uStack_c;
  puVar3 = *(u32 **)(param_1 + 0xa64);
  uStack_c = (u32)(*(u16 *)(param_1 + 0x840) >> 4);
  puVar1 = (u32 *)SpriteAnimEngine_5B80_Sub_080E3398(*(u16 *)(param_1 + 0xa60),puVar3,&uStack_c,0,0);
  uVar2 = 0;
  if ((puVar1 != puVar3) && (*puVar1 <= uStack_c)) {
    uVar2 = 1;
  }
  return (uVar2);
}

/* 0x0807B8F4 (44B) | SpriteAnimEngine_5B80_Sub_0807B8F4 (orig: func_0807B8F4) | origin: pure | domain: SpriteAnimEngine_5B80 | MEDIUM / graph_algebra */
template <class T> inline const T& min_ref(const T& a, const T& b) { return b < a ? b : a; }
extern "C" u32 func_0809B228(void *);
extern "C" u32 SpriteAnimEngine_5B80_Sub_0807B8F4(void *a, void *s) {
    return min_ref<u32>(10, func_0809B228(s) / 25);
}

/* 0x0807BE74 (84B) | SpriteAnimEngine_5B80_Sub_0807BE74 (orig: func_0807BE74) | origin: wip | domain: SpriteAnimEngine_5B80 | MEDIUM / graph_algebra */
void * SpriteAnimEngine_5B80_Sub_0807BE74(int param_1) {
  u32 uVar1;
  u32 uVar2;
  
  Coop_GetChicken_C894(*(int *)(param_1 + 8) + 0x410);
  uVar2 = 500;
  uVar1 = Livestock_GetProductRank();
  if (uVar1 < 5) {
    switch(*(u32 *)(((const u32 *)0x0807be98) + uVar1 * 4) & 0xfffffffe) {
    case 0x807be9c:
    case 0x807beb0:
      uVar2 = 500;
      break;
    case 0x807beb6:
      uVar2 = 1000;
      break;
    case 0x807bebc:
      uVar2 = 2000;
    }
  }
  return (void *)uVar2;
}

/* 0x0807F684 (100B) | SpriteAnimEngine_5B80_Sub_0807F684 (orig: func_0807F684) | origin: wip | domain: SpriteAnimEngine_5B80 | MEDIUM / graph_algebra */
struct s_080FE484 { u32 a; u32 b; };
    u8 auStack_f [3];
    s8 uStack_10;
extern const struct s_080FE484 g_080FE484[];
void SpriteAnimEngine_5B80_Sub_0807F684(int param_1,int param_2) {
  register s8 iVar2;
  register u32 uVar1;
  iVar2 = (u32)*(int *)(4 * param_2 + param_1 + 0x2a8);
  if (iVar2 < 3) {
    func_0800DF50(auStack_f,g_080FE484[iVar2].a);
    uVar1 = Article_GetDesc(auStack_f);
  }
  else {
    func_0800DB2C(&uStack_10,*(u32 *)(8 * iVar2 + 0x080FE484));
    uVar1 = (u32)Tool_GetDesc(&uStack_10);
  }
  code_0803EE94_78C0_Sub_080CABEC(param_1,uVar1);
}

/* 0x08084050 (164B) | SpriteAnimEngine_5B80_Sub_08084050 (orig: func_08084050) | origin: wip | domain: SpriteAnimEngine_5B80 | MEDIUM / graph_algebra */
u32 SpriteAnimEngine_5B80_Sub_08084050(int param_1,int param_2) {
  int *piVar1;
  short sVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  sVar2 = 0xb;
  iVar5 = 4;
  piVar3 = (int *)(param_1 + 0x20);
  for (piVar1 = (int *)(param_1 + 0x24); piVar1 != piVar3 + *(int *)(param_1 + 0x20) * 4 + 1;
      piVar1 = piVar1 + 4) {
  }
  *piVar3 = *piVar3 - ((int)(piVar3 + *(int *)(param_1 + 0x20) * 4 + 1) - (param_1 + 0x24) >> 4);
  if (param_2 == 9) {
    sVar2 = 0xe;
  }
  else if (param_2 < 10) {
    if (param_2 == 8) {
      sVar2 = 0xb;
    }
  }
  else if (param_2 == 10) {
    sVar2 = 0x11;
  }
  sVar2 = sVar2 * 0x24 + 0xd0;
  iVar4 = 2;
  do {
    code_0803EE94_Sub_0804E9F4(*(int *)(*(int *)(param_1 + 0x1c) + 0x18) + iVar5 * 0x40 + 4,sVar2,0x12,2,0,0x20);
    iVar5 = iVar5 + 2;
    sVar2 = sVar2 + 0x24;
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  return iVar5;
}

/* 0x08085EC4 (40B) | SpriteAnimEngine_5B80_Sub_08085EC4 (orig: func_08085EC4) | origin: pure | domain: SpriteAnimEngine_5B80 | MEDIUM / graph_algebra */
template <class T> inline const T& min_ref(const T& a, const T& b) { return b < a ? b : a; }
extern "C" u32 SpriteAnimEngine_5B80_Sub_08085EC4(void *a, u32 v) {
    return min_ref<u32>(10, v / 25);
}

/* 0x080868E4 (188B) | SpriteAnimEngine_5B80_Sub_080868E4 (orig: func_080868E4) | origin: wip | domain: SpriteAnimEngine_5B80 | MEDIUM / graph_algebra */
void * SpriteAnimEngine_5B80_Sub_080868E4(int param_1,u32 param_2,int param_3) {
  u32 uVar1;
  u32 uVar2;

  uVar2 = 0xBB8;
  if (param_3 == 0) {
    Barn_GetCow_D3D0(*(int *)(param_1 + 8) + 0x5f0);
    uVar1 = Livestock_GetProductRank();
    if (4 < uVar1) goto LAB_08086994;
    switch(*(u32 *)(uVar1 * 4 + ((const u32 *)0x08086914)) & 0xfffffffe) {
    case 0x8086928:
      uVar2 = 0x1770;
      break;
    case 0x8086930:
      uVar2 = 0x1B58;
      break;
    case 0x8086984:
case_08086984:
      uVar2 = 0xBB8;
      break;
    case 0x808698c:
case_0808698C:
      uVar2 = 4000;
      break;
    case 0x8086992:
case_08086992:
      uVar2 = 0x1388;
    }
  }
  else {
    if (param_3 != 1) goto LAB_08086994;
    Barn_GetSheep_D3F8(*(int *)(param_1 + 8) + 0x5f0);
    uVar1 = Livestock_GetProductRank();
    if (4 < uVar1) goto LAB_08086994;
    switch(*(u32 *)(((const u32 *)0x0808695c) + uVar1 * 4) & 0xfffffffe) {
    case 0x8086960:
    case 0x8086974:
      uVar2 = 2000;
      break;
    case 0x808697a:
      uVar2 = 0x9C4;
      break;
    case 0x8086984:
      goto case_08086984;
    case 0x808698c:
      goto case_0808698C;
    case 0x8086992:
      goto case_08086992;
    }
  }
LAB_08086994:
  return (void *)uVar2;
}

/* 0x080948E0 (12B) | SpriteAnimEngine_5B80_Sub_080948E0 (orig: func_080948E0) | origin: pure | domain: SpriteAnimEngine_5B80 | MEDIUM / graph_algebra */
u32 SpriteAnimEngine_5B80_Sub_080948E0(void) {
    return *(u32 *)0x08100A98;
}

/* 0x080948EC (12B) | SpriteAnimEngine_5B80_Sub_080948EC (orig: func_080948EC) | origin: pure | domain: SpriteAnimEngine_5B80 | MEDIUM / graph_algebra */
u32 SpriteAnimEngine_5B80_Sub_080948EC(void) {
    return *(u32 *)0x08100AA0;
}

/* 0x080948FC (4B) | SpriteAnimEngine_5B80_Sub_080948FC (orig: func_080948FC) | origin: pure | domain: SpriteAnimEngine_5B80 | MEDIUM / graph_algebra */
u8 *SpriteAnimEngine_5B80_Sub_080948FC(u8 *arg0) {
    return arg0 + 12;
}

/* 0x08094900 (4B) | SpriteAnimEngine_5B80_GetField_0x04 (orig: func_08094900) | origin: pure | domain: SpriteAnimEngine_5B80 | MEDIUM / graph_algebra */
u32 SpriteAnimEngine_5B80_GetField_0x04(u8 *arg0) {
    return *(u32 *)(arg0 + 4);
}

/* 0x08094904 (4B) | SpriteAnimEngine_5B80_Return_43 (orig: func_08094904) | origin: pure | domain: SpriteAnimEngine_5B80 | MEDIUM / tu_interp */
u32 SpriteAnimEngine_5B80_Return_43(void) {
    return 43;
}

/* 0x08094908 (4B) | SpriteAnimEngine_5B80_GetField_0x08 (orig: func_08094908) | origin: pure | domain: SpriteAnimEngine_5B80 | MEDIUM / graph_algebra */
u32 SpriteAnimEngine_5B80_GetField_0x08(u8 *arg0) {
    return *(u32 *)(arg0 + 8);
}

/* 0x0809490C (4B) | SpriteAnimEngine_5B80_Return_47 (orig: func_0809490C) | origin: pure | domain: SpriteAnimEngine_5B80 | MEDIUM / tu_interp */
u32 SpriteAnimEngine_5B80_Return_47(void) {
    return 47;
}

/* 0x08094910 (4B) | SpriteAnimEngine_5B80_GetField_0x14 (orig: func_08094910) | origin: pure | domain: SpriteAnimEngine_5B80 | MEDIUM / graph_algebra */
u32 SpriteAnimEngine_5B80_GetField_0x14(u8 *arg0) {
    return *(u32 *)(arg0 + 20);
}

/* 0x08094914 (12B) | SpriteAnimEngine_5B80_Sub_08094914 (orig: func_08094914) | origin: pure | domain: SpriteAnimEngine_5B80 | MEDIUM / tu_interp */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 SpriteAnimEngine_5B80_Sub_08094A00();
void SpriteAnimEngine_5B80_Sub_08094914(int arg0,u32 arg1) {
  SpriteAnimEngine_5B80_Sub_08094A00(arg0,arg1,*(u32 *)(arg0 + 8));
}

/* 0x08094920 (16B) | SpriteAnimEngine_5B80_Sub_08094920 (orig: func_08094920) | origin: pure | domain: SpriteAnimEngine_5B80 | MEDIUM / tu_interp */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 SpriteAnimEngine_5B80_Sub_08094A00();
void SpriteAnimEngine_5B80_Sub_08094920(int arg0,u32 arg1) {
  SpriteAnimEngine_5B80_Sub_08094A00(arg0,arg1,*(int *)(arg0 + 8) + 0xd);
}

/* 0x08094930 (16B) | SpriteAnimEngine_5B80_Sub_08094930 (orig: func_08094930) | origin: pure | domain: SpriteAnimEngine_5B80 | MEDIUM / tu_interp */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 SpriteAnimEngine_5B80_Sub_08094A00();
void SpriteAnimEngine_5B80_Sub_08094930(int arg0,u32 arg1) {
  SpriteAnimEngine_5B80_Sub_08094A00(arg0,arg1,*(int *)(arg0 + 8) + 0x1a);
}

/* 0x08094940 (12B) | SpriteAnimEngine_5B80_Sub_08094940 (orig: func_08094940) | origin: pure | domain: SpriteAnimEngine_5B80 | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 SpriteAnimEngine_5B80_Sub_08094A00();
void SpriteAnimEngine_5B80_Sub_08094940(int arg0,u32 arg1) {
  SpriteAnimEngine_5B80_Sub_08094A00(arg0,arg1,*(u32 *)(arg0 + 8));
}

/* 0x0809494C (16B) | SpriteAnimEngine_5B80_Sub_0809494C (orig: func_0809494C) | origin: pure | domain: SpriteAnimEngine_5B80 | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 SpriteAnimEngine_5B80_Sub_08094A00();
void SpriteAnimEngine_5B80_Sub_0809494C(int arg0,u32 arg1) {
  SpriteAnimEngine_5B80_Sub_08094A00(arg0,arg1,*(int *)(arg0 + 8) + 0xd);
}

/* 0x0809495C (16B) | SpriteAnimEngine_5B80_Sub_0809495C (orig: func_0809495C) | origin: pure | domain: SpriteAnimEngine_5B80 | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 SpriteAnimEngine_5B80_Sub_08094A00();
void SpriteAnimEngine_5B80_Sub_0809495C(int arg0,u32 arg1) {
  SpriteAnimEngine_5B80_Sub_08094A00(arg0,arg1,*(int *)(arg0 + 8) + 0x1a);
}

/* 0x0809496C (8B) | SpriteAnimEngine_5B80_GetField_0x08_496C (orig: func_0809496C) | origin: pure | domain: SpriteAnimEngine_5B80 | MEDIUM / graph_algebra */
u8 *SpriteAnimEngine_5B80_GetField_0x08_496C(u8 *arg0) {
    return *(u8 **)(arg0 + 8) + 39;
}

/* 0x08094A00 (60B) | SpriteAnimEngine_5B80_Sub_08094A00 (orig: func_08094A00) | origin: pure | domain: SpriteAnimEngine_5B80 | MEDIUM / graph_algebra */
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
void SpriteAnimEngine_5B80_Sub_08094A00(u32 arg0, u8 *arg1, u8 *arg2) {
  register u32 val;
  register int val2;
  val2 = 0;
  if ((*arg2 != 0) && (val = *arg2 - 1, val < 0x61)) {
    while (1) {
      *arg1 = *(u8 *)(val + 0x08100A36);
      arg1 = arg1 + 1;
      val2 = val2 + 1;
      if (0xb < val2) break;
      if ((arg2[val2] == 0) || (val = arg2[val2] - 1, 0x60 < val)) break;
    }
  }
  *arg1 = 0;
}

/* 0x08095580 (832B) | SpriteAnimEngine_5B80_Sub_08095580 (orig: func_08095580) | origin: wip | domain: SpriteAnimEngine_5B80 | MEDIUM / graph_algebra */
void SpriteAnimEngine_5B80_Sub_08095580(int param_1) {
  char cVar1;
  u8 bVar2;
  u32 *puVar3;
  u8 uVar4;
  u16 *puVar5;
  char *pcVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  u32 *puVar10;
  int iVar11;
  u8 bVar12;
  u32 *puVar13;
  u32 uVar14;
  u32 *puVar15;
  u8 *pbVar16;
  u32 uVar17;
  u16 auStack_84 [8];
  u16 auStack_74 [2];
  u32 uStack_70;
  u8 auStack_6c [28];
  u32 uStack_50;
  u8 auStack_4c [4];
  u32 uStack_48;
  u32 uStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  u32 *puStack_34;
  u32 *puStack_30;
  int iStack_2c;
  u32 *puStack_28;
  u32 *puStack_24;
  auStack_84[0] = 0;
  auStack_74[1] = (u16)0xFFFFF000 & auStack_74[1] & 0xefff;
  puStack_30 = &uStack_50;
  puStack_34 = &uStack_70;
  iVar9 = 7;
  puVar5 = auStack_74;
  do {
    *puVar5 = 0;
    puVar5 = puVar5 + -1;
    iVar9 = iVar9 + -1;
  } while (-1 < iVar9);
  iStack_38 = (u32)*(u8 *)(0x00000366 + param_1) << 3;
  *(u8 *)(0x00000365 + param_1) = 0;
  iVar9 = 0;
  do {
    uStack_50 = ((u16)(0x14));
    *(u16 *)((int)puStack_30 + 2) = 2;
    Code_Lib_Syscall_Wrap_CpuFastSet_E7A0(uStack_50,iVar9 * 0x504 + param_1 + 0x374,0);
    iStack_2c = iVar9 + 1;
    if (iStack_38 + iVar9 < (int)(u32)*(u8 *)(param_1 + 0x368)) {
      SpriteAnimEngine_5B80_Sub_0809A970(*(int *)(param_1 + 0x8c) + 0x00002214,auStack_84);
      if (auStack_84[0] < 0xac) {
        func_0800DCA8(puStack_34,auStack_84[0] - 1);
        pcVar6 = (char *)Food_GetName(puStack_34);
      }
      else {
        func_0800DF50(auStack_4c,auStack_84[0] - 0xac);
        pcVar6 = (char *)Article_GetName(auStack_4c);
      }
      if ((auStack_74[1] & 0x1000) == 0) {
        iVar11 = 0;
        iStack_2c = iVar9 + 1;
        cVar1 = *pcVar6;
        while (cVar1 != '\0') {
          auStack_6c[iVar11] = 0x3f;
          pcVar6 = pcVar6 + 1;
          iVar11 = iVar11 + 1;
          cVar1 = *pcVar6;
        }
        auStack_6c[iVar11] = 0;
        uStack_44 = 0x20014;
        SpriteAnimEngine_Sub_0804E958(0x20014,iVar9 * 0x504 + param_1 + 0x374,0,0,auStack_6c,0,1);
      }
      else {
        uStack_48 = 0x20014;
        SpriteAnimEngine_Sub_0804E958(0x20014,iVar9 * 0x504 + param_1 + 0x374,0,0,pcVar6,0,1);
        iStack_2c = iVar9 + 1;
      }
      *(char *)(0x00000365 + param_1) = *(char *)(0x00000365 + param_1) + '\x01';
    }
    piVar7 = (int *)hardware_GetField_0x00_8910(param_1);
    hardware_Sub_08008F0C(&uStack_70,iVar9 * 0x504 + param_1 + 0x374,iVar9 * 0x500 + 0x06002000,0x500);
    puVar3 = puStack_34;
    puVar10 = (u32 *)piVar7[1];
    if (puVar10 == (u32 *)piVar7[3]) {
      puStack_28 = puVar10;
      iStack_3c = 1;
      iStack_40 = (int)puVar10 - *piVar7 >> 4;
      piVar8 = &iStack_40;
      if (iStack_40 == 0) {
        piVar8 = &iStack_3c;
      }
      if (iStack_40 + *piVar8 == 0) {
        puVar10 = (u32 *)0x0;
        iVar9 = 0;
      }
      else {
        iVar9 = (iStack_40 + *piVar8) * 0x10;
        puVar10 = (u32 *)LibC_malloc(iVar9);
        if (puVar10 == (u32 *)0x0) {
          puVar10 = (u32 *)code_linkonce_Sub_080D3BC0(iVar9);
        }
      }
      puVar15 = puVar10;
      for (puVar13 = (u32 *)*piVar7; puVar13 != puStack_28; puVar13 = puVar13 + 4) {
        if (puVar15 != (u32 *)0x0) {
          uVar14 = puVar13[1];
          uVar17 = puVar13[2];
          *puVar15 = *puVar13;
          puVar15[1] = uVar14;
          puVar15[2] = uVar17;
          puVar15[3] = puVar13[3];
        }
        puVar15 = puVar15 + 4;
      }
      iVar11 = iStack_3c;
      if (iStack_3c == 1) {
        if (puVar15 != (u32 *)0x0) {
          uVar14 = puVar3[1];
          uVar17 = puVar3[2];
          *puVar15 = *puVar3;
          puVar15[1] = uVar14;
          puVar15[2] = uVar17;
          puVar15[3] = puVar3[3];
        }
        puVar15 = puVar15 + 4;
      }
      else {
        for (; iVar11 != 0; iVar11 = iVar11 + -1) {
          if (puVar15 != (u32 *)0x0) {
            uVar14 = puVar3[1];
            uVar17 = puVar3[2];
            *puVar15 = *puVar3;
            puVar15[1] = uVar14;
            puVar15[2] = uVar17;
            puVar15[3] = puVar3[3];
          }
          puVar15 = puVar15 + 4;
        }
      }
      for (iVar11 = *piVar7; iVar11 != piVar7[1]; iVar11 = iVar11 + 0x10) {
      }
      puStack_24 = puVar10;
      if (*piVar7 != 0) {
        LibC_free();
      }
      *piVar7 = (int)puStack_24;
      piVar7[1] = (int)puVar15;
      piVar7[3] = (int)puStack_24 + iVar9;
    }
    else {
      if (puVar10 != (u32 *)0x0) {
        uVar14 = puStack_34[1];
        uVar17 = puStack_34[2];
        *puVar10 = *puStack_34;
        puVar10[1] = uVar14;
        puVar10[2] = uVar17;
        puVar10[3] = puStack_34[3];
      }
      piVar7[1] = piVar7[1] + 0x10;
    }
    iVar9 = iStack_2c;
  } while (iStack_2c < 8);
  bVar2 = *(u8 *)(0x00000365 + param_1);
  bVar12 = bVar2 - 1;
  *(u8 *)(0x00000365 + param_1) = bVar12;
  if ((u8)(bVar2 - 1) < *(u8 *)(param_1 + 0x364)) {
    *(u8 *)(param_1 + 0x364) = bVar12;
  }
  pbVar16 = (u8 *)(0x00000366 + param_1);
  uVar4 = func_080D0EC8(*pbVar16 + 1,10);
  *(u8 *)(0x00000369 + param_1) = uVar4;
  uVar4 = func_080D0ED0(*pbVar16 + 1,10);
  *(u8 *)(0x0000036A + param_1) = uVar4;
  *(u8 *)(0x0000036B + param_1) = 0xd;
  pbVar16 = (u8 *)(0x00000367 + param_1);
  uVar4 = func_080D0EC8(*pbVar16 + 1,10);
  *(u8 *)(param_1 + 0x36c) = uVar4;
  uVar4 = func_080D0ED0(*pbVar16 + 1,10);
  *(u8 *)(0x0000036D + param_1) = uVar4;
}

/* 0x080977A0 (96B) | SpriteAnimEngine_5B80_Sub_080977A0 (orig: func_080977A0) | origin: wip | domain: SpriteAnimEngine_5B80 | MEDIUM / graph_algebra */
u32 SpriteAnimEngine_5B80_Sub_080977A0(u32 param_1,u32 param_2,u16 *param_3) {
  u16 *puVar1;
  u16 *puVar2;
  u16 *puVar3;
  int iVar4;
  u32 uStack_24;
  u32 uStack_20;
  u32 uStack_1c;
  u32 uStack_18;
  u32 uStack_14;
  SpriteAnimEngine_5B80_Sub_0809A58C(&uStack_24);
  *(u32 *)param_3 = uStack_24;
  *(u32 *)(param_3 + 2) = uStack_20;
  *(u32 *)(param_3 + 4) = uStack_1c;
  *(u32 *)(param_3 + 6) = uStack_18;
  *(u32 *)(param_3 + 8) = uStack_14;
  if (*param_3 == 0) {
    param_3[1] = 0;
    param_3[2] = 0;
    puVar1 = 0x081010E8;
    iVar4 = 0;
    puVar3 = 0x081010E8 + 1;
    puVar2 = 0x081010E8;
    do {
      if ((*puVar2 & param_3[3]) != 0) {
        *param_3 = *puVar3;
        break;
      }
      puVar3 = puVar3 + 2;
      puVar2 = puVar2 + 2;
      iVar4 = iVar4 + 1;
    } while (iVar4 < 8);
    if (*param_3 == 0) {
      *param_3 = puVar1[0x11];
    }
  }
  return ((u32)*param_3);
}

/* 0x08097AE4 (596B) | SpriteAnimEngine_5B80_AutoPtrFactory_7AE4 (orig: func_08097AE4) | origin: wip | domain: SpriteAnimEngine_5B80 | HIGH / vtable_algebra */
u32 SpriteAnimEngine_5B80_AutoPtrFactory_7AE4(int self,int param_2) {
  char cVar1;
  bool bVar2;
  u16 uVar3;
  u32 uVar4;
  int iVar5;
  u32 *puVar6;
  u32 uVar7;
  u32 uVar8;
  uVar8 = 0;
  uVar7 = 0;
  hardware_Ctor(self);
  hardware_Sub_080073E0(self + 800,*(u32 *)(self + 0x324));
  uVar4 = hardware_Sub_0800736C(self + 800);
  *(u32 *)(self + 0x324) = uVar4;
  if (param_2 == 0) {
    SpriteAnimEngine_Sub_080989DC(self,self + 0x348);
  }
  else {
    SpriteAnimEngine_Sub_080989DC(self,self + 0x334);
  }
  iVar5 = hardware_GetField_0x00_8918(self);
  *(u16 *)(iVar5 + 0x50) = 0x3f;
  puVar6 = (u32 *)CppRuntime_builtin_new(0x10);
  uVar4 = hardware_GetField_0x00_8918(self);
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar6[2] = 0x080E5B80;
  hardware_Sub_08009300(puVar6 + 3,uVar4);
  hardware_Sub_0800934C(puVar6 + 3,0x00000889,1,1);
  iVar5 = hardware_GetField_0x00_8940(self);
  func_080D3914(iVar5,puVar6,*(u32 *)(*(int *)(iVar5 + 8) + 0x10));
  *(u8 *)(self + 0x000033D2) = 2;
  bVar2 = false;
  do {
    hardware_Ctor_87C8(self);
    hardware_Sub_080088B8(self);
    if (uVar7 == 1) {
      if (*(char *)(self + 0x000033D2) == '\x02') {
        cVar1 = *(char *)(self + 0x000033D3);
        if (cVar1 == '\x01') {
          uVar8 = 0xffffffff;
          uVar7 = 2;
        }
        else if (cVar1 < '\x02') {
          if (cVar1 == '\0') {
            SpriteAnimEngine_5B80_Sub_0809A9C0(*(int *)(self + 0x8c) + 0x00002214,self + 0x348);
            uVar8 = 0xffffffff;
            uVar7 = 2;
          }
        }
        else if (cVar1 == '\x02') {
          uVar8 = 1;
          uVar7 = 2;
        }
      }
    }
    else if (uVar7 < 2) {
      if ((uVar7 == 0) && (-1 < (int)(-*puVar6 | *puVar6))) {
        if (param_2 == 0) {
          uVar3 = 8;
          iVar5 = 0x000033D4;
        }
        else {
          uVar3 = 9;
          iVar5 = 0x000033D4;
        }
        *(u16 *)(self + iVar5) = uVar3;
        *(u8 *)(self + 0x000033D2) = 0;
        uVar7 = 1;
      }
    }
    else if (uVar7 == 2) {
      code_0803EE94_78C0_Sub_08050D8C(self + 0x80,0x08100AC0);
      hardware_Sub_08009378(puVar6 + 3,0x00000889,1,1);
      iVar5 = hardware_GetField_0x00_8940(self);
      func_080D3914(iVar5,puVar6,*(u32 *)(*(int *)(iVar5 + 8) + 0x10));
      uVar7 = 3;
    }
    else if ((uVar7 == 3) && (-1 < (int)(-*puVar6 | *puVar6))) {
      bVar2 = true;
    }
    if (param_2 == 0) {
      hardware_Sub_08099144(self,*(u16 *)(self + 0x0000035A) & 0xfff,
                    *(u8 *)(self + 0x35c),0);
    }
    else {
      hardware_Sub_08099144(self,*(u16 *)(self + 0x00000346) & 0xfff,
                    *(u8 *)(self + 0x35c),0);
    }
    code_809E804_Sub_080CD8A0(self);
    code_0803EE94_78C0_Sub_08097D38(self);
  } while (!bVar2);
  hardware_Sub_080073E0(self + 800,*(u32 *)(self + 0x324));
  *(u32 *)(self + 0x324) = 0;
  if (puVar6 != (u32 *)0x0) {
    func_080D3914(puVar6,3,*(u32 *)(puVar6[2] + 0xc));
  }
  return (uVar8);
}

/* 0x0809800C (988B) | SpriteAnimEngine_5B80_Sub_0809800C (orig: func_0809800C) | origin: wip | domain: SpriteAnimEngine_5B80 | MEDIUM / graph_algebra */
void SpriteAnimEngine_5B80_Sub_0809800C(int param_1) {
  char cVar1;
  u32 uVar2;
  u32 uVar3;
  u32 *puVar4;
  int *piVar5;
  int iVar6;
  u16 *puVar7;
  int iVar8;
  short *psVar9;
  u16 uVar10;
  short *psVar11;
  short sVar12;
  int iVar13;
  short sVar14;
  int iVar15;
  u32 auStack_c8 [2];
  int aiStack_c0 [2];
  int aiStack_b8 [2];
  u32 auStack_b0 [2];
  u32 uStack_a8;
  u32 uStack_a4;
  u32 uStack_a0;
  u32 uStack_9c;
  u32 uStack_98;
  u32 uStack_94;
  u32 uStack_90;
  u32 uStack_8c;
  u8 auStack_84 [64];
  u32 uStack_44;
  u32 uStack_40;
  u8 *puStack_3c;
  int *piStack_38;
  u32 *puStack_34;
  int *piStack_30;
  int iStack_2c;
  int *piStack_28;
  u32 *puStack_24;
  iVar6 = hardware_GetField_0x00_8918();
  *(u16 *)(iVar6 + 0x14) = 0;
  iVar6 = hardware_GetField_0x00_8918(param_1);
  *(u16 *)(iVar6 + 0x16) = 0;
  iVar6 = hardware_GetField_0x00_8918(param_1);
  *(u16 *)(iVar6 + 0x18) = 0;
  iVar6 = hardware_GetField_0x00_8918(param_1);
  *(u16 *)(iVar6 + 0x1a) = 0;
  iVar6 = hardware_GetField_0x00_8918(param_1);
  *(u16 *)(iVar6 + 0x1c) = 0;
  iVar6 = hardware_GetField_0x00_8918(param_1);
  *(u16 *)(iVar6 + 0x1e) = 0;
  hardware_HW_DMA3SAD_8EB8(0,0x6000000,0x8000);
  uVar2 = 0x0600E000;
  hardware_HW_DMA3SAD_8EB8(0xffffffff,0x0600E000,0x800);
  uVar3 = 0x0600F800;
  hardware_HW_DMA3SAD_8EB8(0xffffffff,0x0600F800,0x800);
  hardware_HW_DMA3SAD_8EB8(0xffffffff,0x0600F000,0x800);
  puVar7 = (u16 *)hardware_GetField_0x00_8918(param_1);
  *puVar7 = 0x1e40;
  iVar6 = hardware_GetField_0x00_8918(param_1);
  *(short *)(iVar6 + 0xe) = (short)0x00001C43;
  iVar6 = hardware_GetField_0x00_8918(param_1);
  *(short *)(iVar6 + 0xc) = (short)0x00001F41;
  iVar6 = hardware_GetField_0x00_8918(param_1);
  *(short *)(iVar6 + 10) = (short)0x00001E42;
  hardware_HW_DMA3SAD(*(u16 *)0x080F9F70,0x6000000,*(u16 *)0x080F9F74);
  hardware_HW_DMA3SAD_8EB8(0x00030003,uVar2,0x800);
  code_0803EE94_Sub_08051320(uVar3,0,0,0x20,3,0,0);
  hardware_HW_DMA3SAD(*(u16 *)0x080F9F78,0x5000000,0x20);
  puVar7 = 0x05000040;
  *(u16 *)0x05000040 = 0x3e0;
  *(u16 *)0x05000042 = 0;
  puVar7[2] = (short)0x00004218;
  hardware_HW_DMA3SAD_8EB8(0xffffffff,0x00002BD0 + param_1,0x800);
  iVar6 = 0;
  puStack_34 = auStack_c8;
  piStack_30 = aiStack_c0;
  piStack_28 = aiStack_b8;
  puStack_24 = auStack_b0;
  piStack_38 = (int *)(param_1 + 0x15c);
  iStack_2c = param_1 + 200;
  iVar15 = 0x00002BD4 + param_1;
  sVar14 = 0x2100;
  do {
    iVar13 = 0;
    iVar8 = iVar6 * 2;
    iVar6 = iVar6 + 1;
    sVar12 = sVar14 + 0x14;
    psVar11 = (short *)((iVar8 + 5) * 0x40 + iVar15);
    psVar9 = (short *)((iVar8 + 4) * 0x40 + iVar15);
    do {
      *psVar9 = sVar14 + (short)iVar13;
      *psVar11 = sVar12;
      sVar12 = sVar12 + 1;
      psVar11 = psVar11 + 1;
      psVar9 = psVar9 + 1;
      iVar13 = iVar13 + 1;
    } while (iVar13 < 0x14);
    sVar14 = sVar14 + 0x28;
  } while (iVar6 < 8);
  hardware_HW_DMA3SAD(0x00002BD0 + param_1,0x0600F000,0x800);
  uVar2 = 0x08750C8C;
  iVar15 = hardware_Sub_08007D4C(param_1 + 0x310,*(u32 *)(param_1 + 0x314));
  iVar6 = 0x06010000;
  hardware_HW_DMA3SAD(uVar2,iVar15 * 0x20 + 0x06010000,0x1c0);
  puVar4 = puStack_34;
  auStack_c8[0] = 0;
  *(u16 *)(puStack_34 + 1) = 0;
  aiStack_c0[0] = 0;
  *(u16 *)(piStack_30 + 1) = 0;
  piVar5 = piStack_28;
  aiStack_b8[0] = 0;
  *(u16 *)(piStack_28 + 1) = 0;
  auStack_b0[0] = 0;
  *(u16 *)(puStack_24 + 1) = 0;
  func_080D3918(&uStack_a8,*(int **)(param_1 + 0x158),
                  *(u16 *)(*piStack_38 + (u32)*(u16 *)(param_1 + 0x164) * 4),
                  *(u32 *)(**(int **)(param_1 + 0x158) + 0x10));
  LibC_memcpy(&uStack_a8,&uStack_a8,0x20);
  uVar3 = uStack_a0;
  uVar2 = uStack_a4;
  *puVar4 = uStack_a8;
  puVar4[1] = uVar2;
  puVar4[2] = uVar3;
  uVar3 = uStack_94;
  uVar2 = uStack_98;
  puVar4[3] = uStack_9c;
  puVar4[4] = uVar2;
  puVar4[5] = uVar3;
  uVar2 = uStack_8c;
  puVar4[6] = uStack_90;
  puVar4[7] = uVar2;
  iVar8 = aiStack_b8[0];
  iVar13 = hardware_Sub_080074C0(param_1 + 0x2e8,*(u32 *)(param_1 + 0x2ec));
  iVar15 = 0x05000200;
  uVar10 = 0;
  if (aiStack_b8[0] != 0) {
    uVar10 = (u16)piVar5[1];
  }
  hardware_HW_DMA3SAD(iVar8,iVar13 * 0x20 + 0x05000200,uVar10);
  code_0803EE94_79C8_vfunc_10(&uStack_a8,iStack_2c,0);
  puVar4 = puStack_34;
  *puStack_34 = uStack_a8;
  puVar4[1] = uStack_a4;
  puVar4[2] = uStack_a0;
  puVar4[3] = uStack_9c;
  puVar4[4] = uStack_98;
  puVar4[5] = uStack_94;
  puVar4[6] = uStack_90;
  puVar4[7] = uStack_8c;
  iVar8 = aiStack_b8[0];
  iVar13 = hardware_Sub_080074C0(param_1 + 0x2f8,*(u32 *)(param_1 + 0x2fc));
  uVar10 = 0;
  if (aiStack_b8[0] != 0) {
    uVar10 = (u16)piStack_28[1];
  }
  hardware_HW_DMA3SAD(iVar8,iVar13 * 0x20 + iVar15,uVar10);
  iVar15 = aiStack_c0[0];
  iVar8 = hardware_Sub_08007D4C(param_1 + 0x2f0,*(u32 *)(param_1 + 0x2f4));
  uVar10 = 0;
  if (aiStack_c0[0] != 0) {
    uVar10 = (u16)piStack_30[1];
  }
  hardware_HW_DMA3SAD(iVar15,iVar8 * 0x20 + iVar6,uVar10);
  iVar15 = hardware_Sub_08007D4C(param_1 + 0x300,*(u32 *)(param_1 + 0x304));
  hardware_HW_DMA3SAD_8EB8(0,iVar15 * 0x20 + iVar6,0x700);
  iVar6 = 0;
  puStack_3c = auStack_84;
  do {
    cVar1 = *(char *)(iVar6 + 0x08101008);
    if (cVar1 != '\0') {
      uStack_44 = 0x20001;
      Code_Lib_Syscall_Wrap_CpuFastSet_E7A0(0x20001,auStack_84,0);
      uStack_40 = 0x20001;
      SpriteAnimEngine_Sub_0804E5AC(0x20001,auStack_84,0,0,cVar1,0,1);
      iVar15 = hardware_Sub_08007D4C(param_1 + 0x300,*(u32 *)(param_1 + 0x304));
      hardware_HW_DMA3SAD(puStack_3c,(iVar15 + iVar6 * 2) * 0x20 + 0x06010000,0x40);
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0x16);
  iVar15 = param_1 + 0x308;
  iVar6 = hardware_Sub_080074C0(iVar15,*(u32 *)(param_1 + 0x30c));
  *(u16 *)(iVar6 * 0x20 + 0x05000200) = 0x3e0;
  iVar6 = hardware_Sub_080074C0(iVar15,*(u32 *)(param_1 + 0x30c));
  *(u16 *)(iVar6 * 0x20 + 0x05000202) = 0;
  iVar6 = hardware_Sub_080074C0(iVar15,*(u32 *)(param_1 + 0x30c));
  *(short *)(iVar6 * 0x20 + 0x05000204) = (short)0x00004218;
}

/* 0x0809A970 (80B) | SpriteAnimEngine_5B80_Sub_0809A970 (orig: func_0809A970) | origin: wip | domain: SpriteAnimEngine_5B80 | MEDIUM / graph_algebra */
void SpriteAnimEngine_5B80_Sub_0809A970(int param_1,u16 *param_2,int param_3) {
  u16 *puVar1;
  int iVar2;
  puVar1 = (u16 *)(param_1 + param_3 * 0x14);
  *param_2 = *puVar1;
  param_2[9] = (u16)0xFFFFF000 & param_2[9] | puVar1[9] & 0xfff;
  *(u8 *)((int)param_2 + 0x13) =
       *(u8 *)((int)param_2 + 0x13) & 0xef | *(u8 *)((int)puVar1 + 0x13) & 0x10;
  iVar2 = 7;
  do {
    puVar1 = puVar1 + 1;
    param_2 = param_2 + 1;
    *param_2 = *puVar1;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
}

/* 0x0809A9C0 (104B) | SpriteAnimEngine_5B80_Sub_0809A9C0 (orig: func_0809A9C0) | origin: wip | domain: SpriteAnimEngine_5B80 | MEDIUM / graph_algebra */
void SpriteAnimEngine_5B80_Sub_0809A9C0(short *param_1,short *param_2) {
  u32 uVar1;
  u8 *pbVar2;
  int iVar3;
  uVar1 = 0xFFFFF000;
  iVar3 = 0;
  pbVar2 = (u8 *)((int)param_1 + 0x00000A06);
  if (*pbVar2 != 0) {
    do {
      if (*param_1 == *param_2) {
        *(u8 *)((int)param_1 + 0x13) = *(u8 *)((int)param_1 + 0x13) | 0x10;
        param_1[9] = (u16)uVar1 & param_1[9] | param_2[9] & 0xfffU;
        iVar3 = 7;
        do {
          param_2 = param_2 + 1;
          param_1 = param_1 + 1;
          *param_1 = *param_2;
          iVar3 = iVar3 + -1;
        } while (-1 < iVar3);
      }
      param_1 = param_1 + 10;
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)(u32)*pbVar2);
  }
}

/* 0x0809AB08 (132B) | SpriteAnimEngine_5B80_Sub_0809AB08 (orig: func_0809AB08) | origin: wip | domain: SpriteAnimEngine_5B80 | MEDIUM / graph_algebra */
u32 SpriteAnimEngine_5B80_Sub_0809AB08(u32 *param_1,u16 *param_2,int param_3) {
  u16 *puVar1;
  int iVar2;
  u16 *puVar3;
  int iVar4;
  u32 uStack_40;
  u32 uStack_3c;
  u32 uStack_38;
  u32 uStack_34;
  u32 uStack_30;
  u32 uStack_2c;
  u32 uStack_28;
  u32 uStack_24;
  u32 uStack_20;
  u32 uStack_1c;
  uStack_40 = uStack_40 & 0xffff0000;
  iVar4 = 0;
  iVar2 = 0;
  if (*(char *)((int)param_2 + 0x00000A06) != '\0') {
    puVar1 = param_2;
    puVar3 = param_2;
    do {
      if ((*puVar3 < 0xac) && ((int)((u32)*(u8 *)((int)puVar3 + 0x13) * 0x8000000) < 0)) {
        if (iVar4 == param_3) {
          SpriteAnimEngine_5B80_Sub_0809A58C(&uStack_2c,puVar1);
          uStack_40 = uStack_2c;
          uStack_3c = uStack_28;
          uStack_38 = uStack_24;
          uStack_34 = uStack_20;
          uStack_30 = uStack_1c;
          break;
        }
        iVar4 = iVar4 + 1;
      }
      puVar3 = puVar3 + 10;
      puVar1 = puVar1 + 10;
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)(u32)*(u8 *)((int)param_2 + 0x00000A06));
  }
  *param_1 = uStack_40;
  param_1[1] = uStack_3c;
  param_1[2] = uStack_38;
  param_1[3] = uStack_34;
  param_1[4] = uStack_30;
  return param_1;
}

/* 0x080A2BA4 (1176B) | SpriteAnimEngine_5B80_Sub_080A2BA4 (orig: func_080A2BA4) | origin: wip | domain: SpriteAnimEngine_5B80 | MEDIUM / graph_algebra */
void SpriteAnimEngine_5B80_Sub_080A2BA4(int param_1) {
  u32 uVar1;
  u32 uVar2;
  u32 uVar3;
  int iVar4;
  int iVar5;
  u16 *puVar6;
  int iVar7;
  int iVar8;
  u32 *puVar9;
  u32 uVar10;
  int iStack_68;
  u32 uStack_64;
  int iStack_60;
  u32 uStack_5c;
  u32 uStack_58;
  u32 uStack_54;
  u8 auStack_50 [8];
  int iStack_48;
  u32 uStack_44;
  int iStack_40;
  u32 uStack_3c;
  u32 uStack_38;
  u32 uStack_34;
  int *piStack_30;
  int *piStack_2c;
  u32 *puStack_28;
  int *piStack_24;
  iVar5 = hardware_GetField_0x00_8918();
  *(u16 *)(iVar5 + 0x14) = 0;
  iVar5 = hardware_GetField_0x00_8918(param_1);
  *(u16 *)(iVar5 + 0x16) = 0;
  iVar5 = hardware_GetField_0x00_8918(param_1);
  *(u16 *)(iVar5 + 0x18) = 0;
  iVar5 = hardware_GetField_0x00_8918(param_1);
  *(u16 *)(iVar5 + 0x1a) = 0;
  iVar5 = hardware_GetField_0x00_8918(param_1);
  *(u16 *)(iVar5 + 0x1c) = 0;
  iVar5 = hardware_GetField_0x00_8918(param_1);
  *(u16 *)(iVar5 + 0x1e) = 0;
  hardware_HW_DMA3SAD_8EB8(0,0x06007FE0,0x20);
  uVar1 = 0x0600E000;
  hardware_HW_DMA3SAD_8EB8(0xffffffff,0x0600E000,0x800);
  uVar2 = 0x0600E800;
  hardware_HW_DMA3SAD_8EB8(0xffffffff,0x0600E800,0x800);
  uVar3 = 0x0600F000;
  hardware_HW_DMA3SAD_8EB8(0xffffffff,0x0600F000,0x800);
  System_UnpackData(0x0874EF14,uVar1);
  System_UnpackData(0x0874EF3C,uVar2);
  System_UnpackData(0x0874EFEC,uVar3);
  System_UnpackData(0x0874F050,0x6000000);
  hardware_HW_DMA3SAD(0x0874F2EC,0x5000000,0x200);
  puVar6 = (u16 *)hardware_GetField_0x00_8918(param_1);
  *puVar6 = 0x1e40;
  iVar5 = hardware_GetField_0x00_8918(param_1);
  *(short *)(iVar5 + 0xe) = (short)0x00001C43;
  iVar5 = hardware_GetField_0x00_8918(param_1);
  *(short *)(iVar5 + 0xc) = (short)0x00001D41;
  iVar5 = hardware_GetField_0x00_8918(param_1);
  *(short *)(iVar5 + 10) = (short)0x00001E42;
  iStack_68 = 0;
  uStack_64 = (u32)(*(u16 *)((u8 *)&uStack_64 + 2)) << 0x10;
  iStack_60 = 0;
  uStack_5c = (u32)(*(u16 *)((u8 *)&uStack_5c + 2)) << 0x10;
  uStack_58 = 0;
  uStack_54 = (u32)(*(u16 *)((u8 *)&uStack_54 + 2)) << 0x10;
  code_0803EE94_79C8_vfunc_10(auStack_50,param_1 + 0x80,0);
  iVar5 = iStack_40;
  iStack_68 = iStack_48;
  uStack_64 = uStack_44;
  iStack_60 = iStack_40;
  uStack_5c = uStack_3c;
  uStack_58 = uStack_38;
  uStack_54 = uStack_34;
  iVar7 = hardware_Sub_080074C0(param_1 + 0x1ac,*(u32 *)(param_1 + 0x1b0));
  uVar10 = 0;
  if (iStack_60 != 0) {
    uVar10 = uStack_5c & 0xffff;
  }
  hardware_HW_DMA3SAD(iVar5,iVar7 * 0x20 + 0x05000200,uVar10);
  iVar5 = iStack_68;
  iVar7 = hardware_Sub_08007D4C(param_1 + 0x1a4,*(u32 *)(param_1 + 0x1a8));
  uVar10 = 0;
  if (iStack_68 != 0) {
    uVar10 = uStack_64 & 0xffff;
  }
  hardware_HW_DMA3SAD(iVar5,iVar7 * 0x20 + 0x06010000,uVar10);
  puVar9 = (u32 *)(param_1 + 0xb0);
  code_0803EE94_Sub_0805E860(puVar9,0);
  func_080D3918(auStack_50,(int *)*puVar9,
                  *(u16 *)(*(int *)(param_1 + 0xb4) + (u32)*(u16 *)(param_1 + 0xbc) * 4),
                  *(u32 *)(*(int *)*puVar9 + 0x10));
  LibC_memcpy(auStack_50,auStack_50,0x20);
  iVar5 = iStack_40;
  iStack_68 = iStack_48;
  uStack_64 = uStack_44;
  iStack_60 = iStack_40;
  uStack_5c = uStack_3c;
  uStack_58 = uStack_38;
  uStack_54 = uStack_34;
  iVar7 = hardware_Sub_080074C0(param_1 + 0x17c,*(u32 *)(param_1 + 0x180));
  uVar10 = 0;
  if (iStack_60 != 0) {
    uVar10 = uStack_5c & 0xffff;
  }
  piStack_2c = (int *)(param_1 + 0xb4);
  hardware_HW_DMA3SAD(iVar5,iVar7 * 0x20 + 0x05000200,uVar10);
  code_0803EE94_Sub_0805E860(puVar9,0xf);
  func_080D3918(auStack_50,(int *)*puVar9,
                  *(u16 *)(*piStack_2c + (u32)*(u16 *)(param_1 + 0xbc) * 4),
                  *(u32 *)(*(int *)*puVar9 + 0x10));
  LibC_memcpy(auStack_50,auStack_50,0x20);
  iVar5 = iStack_40;
  iStack_68 = iStack_48;
  uStack_64 = uStack_44;
  iStack_60 = iStack_40;
  uStack_5c = uStack_3c;
  uStack_58 = uStack_38;
  uStack_54 = uStack_34;
  iVar7 = hardware_Sub_080074C0(param_1 + 0x184,*(u32 *)(param_1 + 0x188));
  uVar10 = 0;
  if (iStack_60 != 0) {
    uVar10 = uStack_5c & 0xffff;
  }
  hardware_HW_DMA3SAD(iVar5,iVar7 * 0x20 + 0x05000200,uVar10);
  code_0803EE94_Sub_0805E860(puVar9,0x15);
  func_080D3918(auStack_50,(int *)*puVar9,
                  *(u16 *)(*piStack_2c + (u32)*(u16 *)(param_1 + 0xbc) * 4),
                  *(u32 *)(*(int *)*puVar9 + 0x10));
  LibC_memcpy(auStack_50,auStack_50,0x20);
  iVar5 = iStack_40;
  iStack_68 = iStack_48;
  uStack_64 = uStack_44;
  iStack_60 = iStack_40;
  uStack_5c = uStack_3c;
  uStack_58 = uStack_38;
  uStack_54 = uStack_34;
  iVar7 = hardware_Sub_080074C0(param_1 + 0x18c,*(u32 *)(param_1 + 400));
  uVar10 = 0;
  if (iStack_60 != 0) {
    uVar10 = uStack_5c & 0xffff;
  }
  hardware_HW_DMA3SAD(iVar5,iVar7 * 0x20 + 0x05000200,uVar10);
  iVar5 = 0;
  iVar7 = 0;
  puStack_28 = (u32 *)(param_1 + 0xe0);
  piStack_24 = (int *)(param_1 + 0xe4);
  do {
    code_0803EE94_Sub_0805E860(puVar9,iVar7);
    func_080D3918(auStack_50,(int *)*puVar9,
                    *(u16 *)(*piStack_2c + (u32)*(u16 *)(param_1 + 0xbc) * 4),
                    *(u32 *)(*(int *)*puVar9 + 0x10));
    LibC_memcpy(auStack_50,auStack_50,0x20);
    iVar4 = iStack_48;
    iStack_68 = iStack_48;
    uStack_64 = uStack_44;
    iStack_60 = iStack_40;
    uStack_5c = uStack_3c;
    uStack_58 = uStack_38;
    uStack_54 = uStack_34;
    *(short *)(param_1 + 0x140 + iVar7 * 2) = (short)iVar5;
    iVar8 = hardware_Sub_08007D4C(param_1 + 0x174,*(u32 *)(param_1 + 0x178));
    uVar10 = 0;
    if (iStack_68 != 0) {
      uVar10 = uStack_64 & 0xffff;
    }
    hardware_HW_DMA3SAD(iVar4,(iVar8 + iVar5) * 0x20 + 0x06010000,uVar10);
    uVar10 = 0;
    if (iStack_68 != 0) {
      uVar10 = uStack_64 & 0xffff;
    }
    iVar5 = iVar5 + (uVar10 >> 5);
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x16);
  code_0803EE94_Sub_0805E860(puStack_28,0);
  func_080D3918(auStack_50,(int *)*puStack_28,
                  *(u16 *)(*piStack_24 + (u32)*(u16 *)(puStack_28 + 3) * 4),
                  *(u32 *)(*(int *)*puStack_28 + 0x10));
  LibC_memcpy(auStack_50,auStack_50,0x20);
  iVar5 = iStack_40;
  iStack_68 = iStack_48;
  uStack_64 = uStack_44;
  iStack_60 = iStack_40;
  uStack_5c = uStack_3c;
  uStack_58 = uStack_38;
  uStack_54 = uStack_34;
  iVar7 = hardware_Sub_080074C0(param_1 + 0x19c,*(u32 *)(param_1 + 0x1a0));
  uVar10 = 0;
  if (iStack_60 != 0) {
    uVar10 = uStack_5c & 0xffff;
  }
  hardware_HW_DMA3SAD(iVar5,iVar7 * 0x20 + 0x05000200,uVar10);
  puVar9 = puStack_28;
  iVar7 = 0;
  iVar5 = 0;
  piStack_30 = &iStack_68;
  do {
    code_0803EE94_Sub_0805E860(puVar9,iVar5);
    func_080D3918(auStack_50,(int *)*puVar9,
                    *(u16 *)(*piStack_24 + (u32)*(u16 *)(puVar9 + 3) * 4),
                    *(u32 *)(*(int *)*puVar9 + 0x10));
    LibC_memcpy(auStack_50,auStack_50,0x20);
    iVar4 = iStack_48;
    iStack_68 = iStack_48;
    uStack_64 = uStack_44;
    iStack_60 = iStack_40;
    uStack_5c = uStack_3c;
    uStack_58 = uStack_38;
    uStack_54 = uStack_34;
    *(short *)(param_1 + 0x16c + iVar5 * 2) = (short)iVar7;
    iVar8 = hardware_Sub_08007D4C(param_1 + 0x194,*(u32 *)(param_1 + 0x198));
    uVar10 = 0;
    if (iStack_68 != 0) {
      uVar10 = uStack_64 & 0xffff;
    }
    hardware_HW_DMA3SAD(iVar4,(iVar8 + iVar7) * 0x20 + 0x06010000,uVar10);
    uVar10 = 0;
    if (iStack_68 != 0) {
      uVar10 = (u32)*(u16 *)(piStack_30 + 1);
    }
    iVar7 = iVar7 + (uVar10 >> 5);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 4);
}

/* 0x080A3774 (52B) | SpriteAnimEngine_5B80_Sub_080A3774 (orig: func_080A3774) | origin: pure | domain: SpriteAnimEngine_5B80 | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 SpriteAnimEngine_5B80_AutoPtrFactory_25B0();
extern u32 func_080D3914();
u32 SpriteAnimEngine_5B80_Sub_080A3774(u32 *arg0,int arg1) {
  u32 val;
  int *piStack_10;
  SpriteAnimEngine_5B80_AutoPtrFactory_25B0(&piStack_10,*(u32 *)(arg1 + 4));
  if (piStack_10 != (int *)0x0) {
    func_080D3914(piStack_10,3,*(u32 *)(*piStack_10 + 8));
  }
  val = *(u32 *)(arg1 + 8);
  *(u32 *)(arg1 + 8) = 0;
  *arg0 = val;
  return arg0;
}

/* 0x080E3398 (56B) | SpriteAnimEngine_5B80_Sub_080E3398 (orig: func_080E3398) | origin: wip | domain: SpriteAnimEngine_5B80 | MEDIUM / graph_algebra */
u32 SpriteAnimEngine_5B80_Sub_080E3398(u32 *param_1,int param_2,u32 *param_3) {
  int iVar1;
  int iVar2;
  iVar1 = param_2 - (int)param_1 >> 2;
  while (iVar2 = iVar1, 0 < iVar2) {
    iVar1 = iVar2 >> 1;
    if (param_1[iVar1] < *param_3) {
      param_1 = param_1 + iVar1 + 1;
      iVar1 = (iVar2 - iVar1) + -1;
    }
  }
  return param_1;
}

