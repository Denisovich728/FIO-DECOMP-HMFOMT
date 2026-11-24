/* FIO-DECOMP-HMFOMT :: Port Readable Module: SpriteAnimEngine (54 functions) */
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

/* 0x0802B51C (976B) | SpriteAnimEngine_vfunc_10 (orig: func_0802B51C) | origin: wip | domain: SpriteAnimEngine | HIGH / vtable_algebra */
void SpriteAnimEngine_vfunc_10(int *self,u32 *param_2) {
  u16 uVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  u32 *puVar5;
  int iVar6;
  int iVar7;
  u32 uVar8;
  u32 uVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  u16 *puVar13;
  int iVar14;
  u8 auStack_84 [8];
  u8 auStack_7c [8];
  u32 auStack_74 [4];
  u32 uStack_64;
  u32 uStack_60;
  u16 *apuStack_5c [2];
  u16 *apuStack_54 [2];
  int *piStack_4c;
  u32 *puStack_48;
  u32 *puStack_44;
  u32 uStack_40;
  int iStack_3c;
  int iStack_38;
  u32 uStack_34;
  u32 *puStack_30;
  int *piStack_2c;
  int *piStack_28;
  int iStack_24;
  puStack_44 = (u32 *)*self;
  uVar1 = *(u16 *)(puStack_44 + 1);
  piVar11 = (int *)*puStack_44;
  uStack_40 = (u32)*(u8 *)(self + 0x11);
  iVar14 = puStack_44[2];
  iVar6 = puStack_44[3];
  uStack_64 = *param_2;
  uStack_60 = param_2[2];
  piStack_4c = self;
  puStack_48 = param_2;
  iVar7 = code_entities_080320DC_Sub_08032900(uVar1,iVar14 >> 0x10,iVar6 >> 0x10);
  puVar5 = puStack_44;
  *(char *)((int)piStack_4c + 0x8b) = (char)iVar7;
  if ((*(char *)(puStack_44 + 0x22) == '\x01') && (*(char *)(puStack_44 + 0x29) != '\0')) {
    iStack_3c = (iVar14 + puStack_44[0x23] >> 0x10) - (int)*(short *)(puStack_48 + 3);
    iVar6 = iVar6 + puStack_44[0x24];
    iVar14 = iVar6 >> 0x10;
    sVar2 = *(short *)((int)puStack_48 + 0xe);
    iStack_38 = 0x8000 - iVar14;
    if (*(char *)((int)puStack_44 + 0x89) == '\x01') {
      uVar9 = func_080D3910(piVar11,*(u32 *)(*piVar11 + 0x58));
      hardware_Sub_0803AE58(uVar9,puStack_48[2],iStack_3c,iVar14 - sVar2,0);
    }
    piVar10 = piStack_4c;
    iStack_24 = (iVar6 - puVar5[0x27] >> 0x10) - (int)*(short *)((int)puStack_48 + 0xe);
    uVar8 = 2;
    if ((0xf < (int)puVar5[0x27] >> 0x10) && ((8 < uVar1 || (iVar7 == 1)))) {
      uVar8 = 1;
    }
    piVar12 = piStack_4c + 0x23;
    func_080D3918(auStack_84,(int *)piStack_4c[0x2d],
                    *(u16 *)(piStack_4c[0x2e] + (u32)*(u16 *)(piStack_4c + 0x30) * 4),
                    *(u32 *)(*(int *)piStack_4c[0x2d] + 0x10));
    if ((-piStack_4c[0x25] | piStack_4c[0x25]) < 0) {
      iVar6 = func_080D391C(uStack_60,iStack_3c,iStack_24,
                              uVar8 << 2 | uVar8 | uVar8 << 4 | uVar8 << 6,iStack_38,auStack_84,
                              *piVar12,(short)piVar10[0x26],piStack_4c + 0x27);
    }
    else {
      iVar6 = 0;
    }
    if ((iVar6 != 0) && ((char)piVar10[0x32] != '\0')) {
      hardware_Sub_080A480C(piVar12,uStack_64,auStack_7c);
      if (*(char *)((int)piVar10 + 0xc9) == '\0') {
        if (*(char *)((int)piVar10 + 0xca) == '\0') {
          code_809E804_Sub_080A4944(piVar12,auStack_74,1);
          *(char *)((int)piVar10 + 0xca) = '\x01';
        }
      }
      else {
        code_809E804_Sub_080A4944(piVar12,auStack_74,1);
      }
      *(char *)(piVar10 + 0x32) = '\0';
    }
  }
  uStack_34 = 0;
  puStack_30 = &uStack_64;
  piStack_2c = piStack_4c + 0x39;
  piVar12 = piStack_4c + 0x36;
  piVar10 = piStack_4c + 0x35;
  piStack_28 = piStack_4c + 0x34;
  do {
    sVar2 = *(short *)(puStack_48 + 3);
    sVar3 = *(short *)((int)puStack_48 + 0xe);
    if ((char)*piStack_28 != '\0') {
      iVar6 = piVar12[0xf];
      sVar4 = *(short *)((int)piVar12 + 0x3e);
      func_080D3918(auStack_84,(int *)piVar12[9],
                      *(u16 *)(piVar12[10] + (u32)*(u16 *)(piVar12 + 0xc) * 4),
                      *(u32 *)(*(int *)piVar12[9] + 0x10));
      if ((-piVar12[1] | piVar12[1]) < 0) {
        iVar6 = func_080D391C(uStack_60,(int)(short)iVar6 - (int)sVar2,(int)sVar4 - (int)sVar3,
                                0xaa,0x8000,auStack_84,*piVar10,(short)piVar12[2],piStack_2c);
      }
      else {
        iVar6 = 0;
      }
      if ((iVar6 != 0) && ((char)piVar10[0xf] != '\0')) {
        hardware_Sub_080A480C(piVar10,*puStack_30,auStack_7c);
        if (*(char *)((int)piVar10 + 0x3d) == '\0') {
          if (*(char *)((int)piVar10 + 0x3e) == '\0') {
            code_809E804_Sub_080A4944(piVar10,auStack_74,1);
            *(char *)((int)piVar10 + 0x3e) = '\x01';
          }
        }
        else {
          code_809E804_Sub_080A4944(piVar10,auStack_74,1);
        }
        *(char *)(piVar10 + 0xf) = '\0';
      }
    }
    piStack_2c = piStack_2c + 0x12;
    piVar12 = piVar12 + 0x12;
    piVar10 = piVar10 + 0x12;
    piStack_28 = piStack_28 + 0x12;
    uStack_34 = uStack_34 + 1;
  } while (uStack_34 < 6);
  code_entities_080320DC_6864_vfunc_10(piStack_4c,puStack_48);
  if ((uStack_40 != 0) || (*(char *)((int)piStack_4c + 0x00000281) != '\0')) {
    uVar8 = farmer_Sub_0800E4FC(puStack_44[0xe]);
    if (uVar8 < 0x50) {
      if (*(char *)((int)piStack_4c + 0x00000281) != '\0') {
        piVar10 = (int *)func_080D3910(piVar11,*(u32 *)(*piVar11 + 0x68));
        iVar6 = *piVar10;
        func_080D3918(apuStack_5c,piVar10,
                        (u32)*(u16 *)((int)puStack_44 + 0x22) + (u32)*(u8 *)(puStack_44 + 8),
                        *(u32 *)(iVar6 + 0xc));
        func_080D3918(auStack_84,piVar10,*apuStack_5c[0],*(u32 *)(iVar6 + 0x10));
        uVar9 = func_080D3914(piVar11,0,*(u32 *)(*piVar11 + 0x48));
        func_080D391C(piVar11,auStack_74[0],uVar9,1);
      }
    }
    else {
      uVar9 = func_080D3914(piVar11,0,*(u32 *)(*piVar11 + 0x48));
      func_080D391C(piVar11,0x0858BA08,uVar9,1);
    }
    puVar13 = (u16 *)(puStack_44 + 0x1f);
    if (*puVar13 != 0x0000FFFF) {
      piVar10 = (int *)func_080D3910(piVar11,*(u32 *)(*piVar11 + 100));
      iVar6 = *piVar10;
      func_080D3918(apuStack_54,piVar10,*puVar13,*(u32 *)(iVar6 + 0xc));
      func_080D3918(auStack_84,piVar10,*apuStack_54[0],*(u32 *)(iVar6 + 0x10));
      uVar9 = func_080D3914(piVar11,2,*(u32 *)(*piVar11 + 0x48));
      func_080D391C(piVar11,auStack_74[0],uVar9,1);
    }
    *(u8 *)((int)piStack_4c + 0x00000281) = 0;
  }
}

/* 0x0803C5B0 (496B) | SpriteAnimEngine_Create (orig: func_0803C5B0) | origin: wip | domain: SpriteAnimEngine | HIGH / vtable_algebra */
u32 SpriteAnimEngine_Create(void) {
  CppRuntime_builtin_new((0xd7 << 2));
  code_0803EE94_79C8_Ctor(CppRuntime_builtin_new((0xd7 << 2)), 0x0875B444);
  code_0803EE94_79C8_Ctor((CppRuntime_builtin_new((0xd7 << 2)) + 0x30), 0x086678A0);
  hardware_Sub_08007128((CppRuntime_builtin_new((0xd7 << 2)) + 0x60), 0x086678A0);
  hardware_Sub_0800736C((CppRuntime_builtin_new((0xd7 << 2)) + 0x60), 0x086678A0);
  *(u32 *)((CppRuntime_builtin_new((0xd7 << 2)) + 0x60) + 4) = hardware_Sub_0800736C((CppRuntime_builtin_new((0xd7 << 2)) + 0x60), 0x086678A0);
  *(u32 *)(CppRuntime_builtin_new((0xd7 << 2)) + 0x68) = 0;
  *(u32 *)((CppRuntime_builtin_new((0xd7 << 2)) + 0x68) + 4) = 0;
  *(u32 *)((CppRuntime_builtin_new((0xd7 << 2)) + 0x68) + 8) = 0x080E77D0;
  *(u32 *)((CppRuntime_builtin_new((0xd7 << 2)) + 0x68) + 0xc) = 0;
  *(u32 *)((CppRuntime_builtin_new((0xd7 << 2)) + 0x68) + 0x10) = 0;
  *(u32 *)((CppRuntime_builtin_new((0xd7 << 2)) + 0x68) + 0x14) = 0;
  *(u8 *)(((CppRuntime_builtin_new((0xd7 << 2)) + 0x68) + 0x18)) = 1;
  hardware_Sub_08007874((CppRuntime_builtin_new((0xd7 << 2)) + (0xc2 << 1)), 0x080E77D0, (0xc2 << 1));
  hardware_Sub_08007B54((CppRuntime_builtin_new((0xd7 << 2)) + (0xc2 << 1)), 3, (0xc2 << 1));
  *(u32 *)((CppRuntime_builtin_new((0xd7 << 2)) + (0xc2 << 1)) + 4) = hardware_Sub_08007B54((CppRuntime_builtin_new((0xd7 << 2)) + (0xc2 << 1)), 3, (0xc2 << 1));
  *(u8 *)(((0xc6 << 1) + CppRuntime_builtin_new((0xd7 << 2)))) = 1;
  *(u32 *)((CppRuntime_builtin_new((0xd7 << 2)) + (0xc8 << 1))) = 0;
  *(u32 *)((CppRuntime_builtin_new((0xd7 << 2)) + (0xc8 << 1)) + 4) = 0;
  *(u32 *)((CppRuntime_builtin_new((0xd7 << 2)) + (0xc8 << 1)) + 8) = (0xc2 << 1);
  *(u32 *)((CppRuntime_builtin_new((0xd7 << 2)) + (0xc8 << 1)) + 0xc) = 0;
  *(u32 *)((CppRuntime_builtin_new((0xd7 << 2)) + (0xc8 << 1)) + 0x10) = 0;
  *(u32 *)((CppRuntime_builtin_new((0xd7 << 2)) + (0xc8 << 1)) + 0x14) = 0;
  hardware_Sub_08007874((CppRuntime_builtin_new((0xd7 << 2)) + (0xaa << 2)), (0xc8 << 1), (0xc2 << 1));
  hardware_Sub_08007B54((CppRuntime_builtin_new((0xd7 << 2)) + (0xaa << 2)), 3, (0xc2 << 1));
  *(u32 *)((CppRuntime_builtin_new((0xd7 << 2)) + (0xaa << 2)) + 4) = hardware_Sub_08007B54((CppRuntime_builtin_new((0xd7 << 2)) + (0xaa << 2)), 3, (0xc2 << 1));
  *(u8 *)(((0xac << 2) + CppRuntime_builtin_new((0xd7 << 2)))) = 1;
  *(u32 *)((CppRuntime_builtin_new((0xd7 << 2)) + (0xad << 2))) = 0;
  *(u32 *)((CppRuntime_builtin_new((0xd7 << 2)) + (0xad << 2)) + 4) = 0;
  *(u32 *)((CppRuntime_builtin_new((0xd7 << 2)) + (0xad << 2)) + 8) = ((0xac << 2) + CppRuntime_builtin_new((0xd7 << 2)));
  *(u32 *)((CppRuntime_builtin_new((0xd7 << 2)) + (0xad << 2)) + 0xc) = 0;
  *(u32 *)((CppRuntime_builtin_new((0xd7 << 2)) + (0xad << 2)) + 0x10) = 0;
  *(u32 *)((CppRuntime_builtin_new((0xd7 << 2)) + (0xad << 2)) + 0x14) = 0;
  *(u8 *)((CppRuntime_builtin_new((0xd7 << 2)) + ((0xad << 2) + 0x18))) = 0;
  hardware_Sub_08007874((CppRuntime_builtin_new((0xd7 << 2)) + (0xb4 << 2)), ((0xac << 2) + CppRuntime_builtin_new((0xd7 << 2))), ((0xad << 2) + 0x18));
  hardware_Sub_08007B54((CppRuntime_builtin_new((0xd7 << 2)) + (0xb4 << 2)), 2, ((0xad << 2) + 0x18));
  *(u32 *)((CppRuntime_builtin_new((0xd7 << 2)) + (0xb4 << 2)) + 4) = hardware_Sub_08007B54((CppRuntime_builtin_new((0xd7 << 2)) + (0xb4 << 2)), 2, ((0xad << 2) + 0x18));
  *(u32 *)((CppRuntime_builtin_new((0xd7 << 2)) + (0xb6 << 2))) = 0;
  *(u32 *)((CppRuntime_builtin_new((0xd7 << 2)) + (0xb6 << 2)) + 4) = 0;
  *(u32 *)((CppRuntime_builtin_new((0xd7 << 2)) + (0xb6 << 2)) + 8) = ((0xad << 2) + 0x18);
  *(u32 *)((CppRuntime_builtin_new((0xd7 << 2)) + (0xb6 << 2)) + 0xc) = 0;
  *(u32 *)((CppRuntime_builtin_new((0xd7 << 2)) + (0xb6 << 2)) + 0x10) = 0;
  *(u32 *)((CppRuntime_builtin_new((0xd7 << 2)) + (0xb6 << 2)) + 0x14) = 0;
  *(u8 *)((CppRuntime_builtin_new((0xd7 << 2)) + ((0xb6 << 2) + 0x18))) = 1;
  *(u8 *)((CppRuntime_builtin_new((0xd7 << 2)) + 0x000002F1)) = 0;
  hardware_Sub_08007128((CppRuntime_builtin_new((0xd7 << 2)) + (0xbd << 2)), ((0xb6 << 2) + 0x18), 0x000002F1);
  hardware_Sub_0800736C((CppRuntime_builtin_new((0xd7 << 2)) + (0xbd << 2)), ((0xb6 << 2) + 0x18), 0x000002F1);
  *(u32 *)((CppRuntime_builtin_new((0xd7 << 2)) + (0xbd << 2)) + 4) = hardware_Sub_0800736C((CppRuntime_builtin_new((0xd7 << 2)) + (0xbd << 2)), ((0xb6 << 2) + 0x18), 0x000002F1);
  *(u32 *)((CppRuntime_builtin_new((0xd7 << 2)) + (0xbf << 2))) = 0;
  *(u32 *)((CppRuntime_builtin_new((0xd7 << 2)) + (0xbf << 2)) + 4) = 0;
  *(u32 *)((CppRuntime_builtin_new((0xd7 << 2)) + (0xbf << 2)) + 8) = 0x000002F1;
  *(u32 *)((CppRuntime_builtin_new((0xd7 << 2)) + (0xbf << 2)) + 0xc) = 0;
  *(u32 *)((CppRuntime_builtin_new((0xd7 << 2)) + (0xbf << 2)) + 0x10) = 0;
  *(u32 *)((CppRuntime_builtin_new((0xd7 << 2)) + (0xbf << 2)) + 0x14) = 0;
  hardware_Sub_08007874((CppRuntime_builtin_new((0xd7 << 2)) + (0xc5 << 2)), (0xbf << 2), 0x000002F1);
  hardware_Sub_08007B54((CppRuntime_builtin_new((0xd7 << 2)) + (0xc5 << 2)), 2, 0x000002F1);
  *(u32 *)((CppRuntime_builtin_new((0xd7 << 2)) + (0xc5 << 2)) + 4) = hardware_Sub_08007B54((CppRuntime_builtin_new((0xd7 << 2)) + (0xc5 << 2)), 2, 0x000002F1);
  *(u32 *)((CppRuntime_builtin_new((0xd7 << 2)) + (0xc7 << 2))) = 0;
  *(u32 *)((CppRuntime_builtin_new((0xd7 << 2)) + (0xc7 << 2)) + 4) = 0;
  *(u32 *)((CppRuntime_builtin_new((0xd7 << 2)) + (0xc7 << 2)) + 8) = 0x000002F1;
  *(u32 *)((CppRuntime_builtin_new((0xd7 << 2)) + (0xc7 << 2)) + 0xc) = 0;
  *(u32 *)((CppRuntime_builtin_new((0xd7 << 2)) + (0xc7 << 2)) + 0x10) = 0;
  *(u32 *)((CppRuntime_builtin_new((0xd7 << 2)) + (0xc7 << 2)) + 0x14) = 0;
  *(u8 *)((CppRuntime_builtin_new((0xd7 << 2)) + ((0xc7 << 2) + 0x18))) = 1;
  hardware_Sub_08007874((CppRuntime_builtin_new((0xd7 << 2)) + (0xce << 2)), ((0xc7 << 2) + 0x18), (0xce << 2));
  hardware_Sub_08007B54((CppRuntime_builtin_new((0xd7 << 2)) + (0xce << 2)), 2, (0xce << 2));
  *(u32 *)((CppRuntime_builtin_new((0xd7 << 2)) + (0xce << 2)) + 4) = hardware_Sub_08007B54((CppRuntime_builtin_new((0xd7 << 2)) + (0xce << 2)), 2, (0xce << 2));
  *(u32 *)((CppRuntime_builtin_new((0xd7 << 2)) + (0xd0 << 2))) = 0;
  *(u32 *)((CppRuntime_builtin_new((0xd7 << 2)) + (0xd0 << 2)) + 4) = 0;
  *(u32 *)((CppRuntime_builtin_new((0xd7 << 2)) + (0xd0 << 2)) + 8) = (0xce << 2);
  *(u32 *)((CppRuntime_builtin_new((0xd7 << 2)) + (0xd0 << 2)) + 0xc) = 0;
  *(u32 *)((CppRuntime_builtin_new((0xd7 << 2)) + (0xd0 << 2)) + 0x10) = 0;
  *(u32 *)((CppRuntime_builtin_new((0xd7 << 2)) + (0xd0 << 2)) + 0x14) = 0;
  *(u8 *)((CppRuntime_builtin_new((0xd7 << 2)) + ((0xd0 << 2) + 0x18))) = 1;
  LibC_memcpy((CppRuntime_builtin_new((0xd7 << 2)) + (0x92 << 1)), (0x0875A440 + (0xe8 << 2)), 0x20);
  *(u8 *)(LibC_memcpy((CppRuntime_builtin_new((0xd7 << 2)) + (0x92 << 1)), (0x0875A440 + (0xe8 << 2)), 0x20)) = 1;
  LibC_memset(LibC_memcpy((CppRuntime_builtin_new((0xd7 << 2)) + (0x92 << 1)), (0x0875A440 + (0xe8 << 2)), 0x20), 0, 0x20);
  LibC_memcpy((CppRuntime_builtin_new((0xd7 << 2)) + (0xa2 << 2)), (0xa2 << 2), 0x20);
  *(u8 *)(0x20) = 1;
  LibC_memcpy((CppRuntime_builtin_new((0xd7 << 2)) + (0x82 << 2)), (0x82 << 2), 0x20);
  *(u8 *)(0x20) = 1;
  *(u32 *)(LibC_memcpy((CppRuntime_builtin_new((0xd7 << 2)) + (0x82 << 2)), (0x82 << 2), 0x20)) = CppRuntime_builtin_new((0xd7 << 2));
  return LibC_memcpy((CppRuntime_builtin_new((0xd7 << 2)) + (0x82 << 2)), (0x82 << 2), 0x20);
}

/* 0x0804E958 (112B) | SpriteAnimEngine_Sub_0804E958 (orig: func_0804E958) | origin: wip | domain: SpriteAnimEngine | MEDIUM / graph_algebra */
void SpriteAnimEngine_Sub_0804E958(u32 param_1,u32 param_2,u32 param_3,u32 param_4,u8 *param_5,
             u32 param_6,u32 param_7) {
  u8 bVar1;
  int iVar2;
  u32 uVar3;
  uVar3 = 0;
  bVar1 = *param_5;
  while ((bVar1 != 0 && (param_3 < (param_1 & 0xffff) << 3))) {
    uVar3 = uVar3 | bVar1;
    iVar2 = SpriteAnimEngine_Sub_0804E5AC(param_1,param_2,param_3,param_4,uVar3,param_6,param_7);
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

/* 0x0804E9CC (4B) | SpriteAnimEngine_Return_0 (orig: func_0804E9CC) | origin: pure | domain: SpriteAnimEngine | MEDIUM / graph_algebra */
u32 SpriteAnimEngine_Return_0(void) {
    return 0;
}

/* 0x080522F8 (1676B) | SpriteAnimEngine_Create_22F8 (orig: func_080522F8) | origin: wip | domain: SpriteAnimEngine | HIGH / vtable_algebra */
u32 SpriteAnimEngine_Create_22F8(int self,u32 param_2,u32 param_3) {
  u16 uVar1;
  u32 uVar2;
  u16 *puVar3;
  int iVar4;
  int iVar5;
  u32 *puVar6;
  int iVar7;
  u32 uVar8;
  u8 auStack_38 [4];
  u8 auStack_34 [4];
  u16 uStack_30;
  u16 uStack_2e;
  u32 uStack_2c;
  int iStack_28;
  int iStack_24;
  uStack_2c = param_3 & 0xff;
  uStack_30 = 0x1e;
  uStack_2e = 1;
  hardware_Create_84DC(self);
  *(u32 *)(self + 4) = 0x080E7944;
  *(u32 *)(self + 8) = param_2;
  *(u32 *)(self + 0xc) = 0;
  uVar2 = CppRuntime_builtin_new(4);
  hardware_SetField_0x00_835C(auStack_38);
  hardware_SetField_0x00(auStack_34);
  uVar2 = hardware_5BB4_Sub_08050CC0(uVar2,0,0x1f,0,*(u32 *)(self + 0xc),auStack_38,auStack_34);
  *(u32 *)(self + 0x10) = uVar2;
  hardware_Sub_08007714(auStack_34,2);
  hardware_Sub_08008364(auStack_38,2);
  hardware_Sub_08008B54(self + 0x14,1);
  hardware_Sub_08008B54(self + 0x18,0);
  hardware_Sub_08008B54(self + 0x1c,2);
  iVar7 = self + 0x20;
  code_0803EE94_79C8_Ctor(iVar7,0x0858BA28);
  code_0803EE94_79C8_Ctor(self + 0x50,0x0872DE44);
  iStack_28 = self + 0x80;
  code_0803EE94_79C8_Ctor(iStack_28,0x08740454);
  code_0803EE94_79C8_Ctor(self + 0xb0,0x0873E5B0);
  code_0803EE94_79C8_Ctor(self + 0xe0,0x0873DE44);
  code_0803EE94_79C8_Ctor(self + 0x110,0x0873D6D8);
  iVar4 = self + 0x140;
  code_0803EE94_79C8_Ctor(iVar4,0x086678A0);
  code_0803EE94_79C8_Ctor(self + 0x170,0x0873A6E8);
  iVar5 = self + 0x1a0;
  code_0803EE94_79C8_Ctor(iVar5,0x0873ED1C);
  iStack_24 = self + 0x1d0;
  code_0803EE94_79C8_Ctor(iStack_24,0x0871D51C);
  code_0803EE94_Sub_0805E824(self + 0x200,iVar7,0x8e,0x100);
  *(u16 *)(self + 0x214) = 0;
  *(u16 *)(self + 0x216) = 0;
  *(u16 *)(self + 0x218) = 0;
  *(u16 *)(self + 0x21a) = 0;
  *(u16 *)(self + 0x21c) = 0;
  *(u32 *)(self + 0x220) = 0;
  *(u8 *)(self + 0x224) = 0;
  *(u8 *)(self + 0x225) = 0;
  *(u32 *)(self + 0x228) = 0;
  *(u8 *)(self + 0x22c) = 0;
  *(u8 *)(self + 0x234) = 0;
  code_0803EE94_Sub_0805E824(self + 0x238,iVar7,0x0000033B,0x100);
  *(u16 *)(self + 0x24c) = 0;
  *(u16 *)(self + 0x24e) = 0;
  *(u16 *)(self + 0x250) = 0;
  *(u16 *)(self + 0x252) = 0;
  *(u16 *)(self + 0x254) = 0;
  *(u32 *)(self + 600) = 0;
  *(u8 *)(self + 0x25c) = 0;
  *(u8 *)(self + 0x25d) = 0;
  *(u32 *)(self + 0x260) = 0;
  *(u8 *)(self + 0x264) = 0;
  *(u8 *)(self + 0x26c) = 0;
  code_0803EE94_Sub_0805E824(self + 0x270,self + 0x50,0,0x100);
  *(u16 *)(self + 0x284) = 0;
  *(u16 *)(self + 0x286) = 0;
  *(u16 *)(self + 0x288) = 0;
  *(u16 *)(self + 0x28a) = 0;
  *(u16 *)(self + 0x28c) = 0;
  *(u32 *)(self + 0x290) = 0;
  *(u8 *)(self + 0x294) = 0;
  *(u8 *)(self + 0x295) = 0;
  *(u32 *)(self + 0x298) = 0;
  *(u8 *)(self + 0x29c) = 0;
  *(u8 *)(self + 0x2a4) = 0;
  code_0803EE94_Sub_0805E824(self + 0x2a8,iStack_28,0,0x100);
  *(u16 *)(self + 700) = 0;
  *(u16 *)(self + 0x2be) = 0;
  *(u16 *)(self + 0x2c0) = 0;
  *(u16 *)(self + 0x2c2) = 0;
  *(u16 *)(self + 0x2c4) = 0;
  *(u32 *)(self + 0x2c8) = 0;
  *(u8 *)(self + 0x2cc) = 0;
  *(u8 *)(self + 0x2cd) = 0;
  *(u32 *)(self + 0x2d0) = 0;
  *(u8 *)(self + 0x2d4) = 0;
  *(u8 *)(self + 0x2dc) = 0;
  code_0803EE94_Sub_0805E824(self + 0x2e0,iVar7,0x0000091A,0x100);
  *(u16 *)(self + 0x2f4) = 0;
  *(u16 *)(self + 0x2f6) = 0;
  *(u16 *)(self + 0x2f8) = 0;
  *(u16 *)(self + 0x2fa) = 0;
  *(u16 *)(self + 0x2fc) = 0;
  *(u32 *)(self + 0x300) = 0;
  *(u8 *)(self + 0x304) = 0;
  *(u8 *)(self + 0x305) = 0;
  *(u32 *)(self + 0x308) = 0;
  *(u8 *)(self + 0x30c) = 0;
  *(u8 *)(self + 0x314) = 0;
  code_0803EE94_Sub_0805E824(self + 0x318,iVar4,0xc9,0x100);
  *(u16 *)(self + 0x32c) = 0;
  *(u16 *)(self + 0x32e) = 0;
  *(u16 *)(self + 0x330) = 0;
  *(u16 *)(self + 0x332) = 0;
  *(u16 *)(self + 0x334) = 0;
  *(u32 *)(self + 0x338) = 0;
  *(u8 *)(self + 0x33c) = 0;
  *(u8 *)(self + 0x33d) = 0;
  *(u32 *)(self + 0x340) = 0;
  *(u8 *)(self + 0x344) = 0;
  *(u8 *)(self + 0x34c) = 0;
  code_0803EE94_Sub_0805E824(self + 0x350,iVar5,1,0x100);
  *(u16 *)(self + 0x364) = 0;
  *(u16 *)(self + 0x366) = 0;
  *(u16 *)(self + 0x368) = 0;
  *(u16 *)(self + 0x36a) = 0;
  *(u16 *)(self + 0x36c) = 0;
  *(u32 *)(self + 0x370) = 0;
  *(u8 *)(self + 0x374) = 0;
  *(u8 *)(self + 0x375) = 0;
  *(u32 *)(self + 0x378) = 0;
  *(u8 *)(self + 0x37c) = 0;
  *(u8 *)(self + 900) = 0;
  code_0803EE94_Sub_0805E824(self + 0x388,iVar5,2,0x100);
  *(u16 *)(self + 0x39c) = 0;
  *(u16 *)(self + 0x39e) = 0;
  *(u16 *)(self + 0x3a0) = 0;
  *(u16 *)(self + 0x3a2) = 0;
  *(u16 *)(self + 0x3a4) = 0;
  *(u32 *)(self + 0x3a8) = 0;
  *(u8 *)(self + 0x3ac) = 0;
  *(u8 *)(self + 0x3ad) = 0;
  *(u32 *)(self + 0x3b0) = 0;
  *(u8 *)(self + 0x3b4) = 0;
  *(u8 *)(self + 0x3bc) = 0;
  code_0803EE94_Sub_0805E824(self + 0x3c0,iVar7,0x00000641,0x100);
  *(u16 *)(self + 0x3d4) = 0;
  *(u16 *)(self + 0x3d6) = 0;
  *(u16 *)(self + 0x3d8) = 0;
  *(u16 *)(self + 0x3da) = 0;
  *(u16 *)(self + 0x3dc) = 0;
  *(u32 *)(self + 0x3e0) = 0;
  *(u8 *)(self + 0x3e4) = 0;
  *(u8 *)(self + 0x3e5) = 0;
  *(u32 *)(self + 1000) = 0;
  *(u8 *)(self + 0x3ec) = 0;
  *(u8 *)(self + 0x3f4) = 0;
  code_0803EE94_Sub_0805E824(self + 0x3f8,iStack_24,2,0x100);
  iVar5 = 0x0000040C;
  puVar3 = (u16 *)(self + 0x0000040C);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  *(u32 *)(puVar3 + 6) = 0;
  *(u8 *)(puVar3 + 8) = 0;
  *(u8 *)((int)puVar3 + 0x11) = 0;
  *(u32 *)(puVar3 + 10) = 0;
  *(u8 *)(puVar3 + 0xc) = 0;
  *(u8 *)(self + 0x0000042C) = 0;
  code_0803EE94_Sub_0805E824(self + iVar5 + 0x24,iVar4,0xa7,0x100);
  iVar5 = 0x00000444;
  puVar3 = (u16 *)(self + 0x00000444);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  *(u32 *)(puVar3 + 6) = 0;
  *(u8 *)(puVar3 + 8) = 0;
  *(u8 *)((int)puVar3 + 0x11) = 0;
  *(u32 *)(puVar3 + 10) = 0;
  *(u8 *)(puVar3 + 0xc) = 0;
  *(u8 *)(self + 0x00000464) = 0;
  iVar5 = self + iVar5 + 0x24;
  hardware_Sub_08007874(iVar5);
  uVar2 = hardware_Sub_08007B54(iVar5,4);
  *(u32 *)(iVar5 + 4) = uVar2;
  hardware_Sub_08007128(self + 0x470);
  uVar2 = hardware_Sub_0800736C(self + 0x470);
  *(u32 *)(self + 0x474) = uVar2;
  hardware_Sub_08007874(self + 0x478);
  uVar2 = hardware_Sub_08007B54(self + 0x478,7);
  *(u32 *)(self + 0x47c) = uVar2;
  hardware_Sub_08007128(self + 0x480);
  uVar2 = hardware_Sub_0800736C(self + 0x480);
  *(u32 *)(self + 0x484) = uVar2;
  hardware_Sub_08007874(self + 0x488);
  uVar2 = hardware_Sub_08007B54(self + 0x488,3);
  *(u32 *)(self + 0x48c) = uVar2;
  hardware_Sub_08007128(self + 0x490);
  uVar2 = hardware_Sub_0800736C(self + 0x490);
  *(u32 *)(self + 0x494) = uVar2;
  hardware_Sub_08007874(self + 0x498);
  uVar2 = hardware_Sub_08007B54(self + 0x498,6);
  *(u32 *)(self + 0x49c) = uVar2;
  hardware_Sub_08007128(self + 0x4a0);
  uVar2 = hardware_Sub_0800736C(self + 0x4a0);
  *(u32 *)(self + 0x4a4) = uVar2;
  hardware_Sub_08007874(self + 0x4a8);
  uVar2 = hardware_Sub_08007B54(self + 0x4a8,2);
  *(u32 *)(self + 0x4ac) = uVar2;
  hardware_Sub_08007128(self + 0x4b0);
  uVar2 = hardware_Sub_0800736C(self + 0x4b0);
  *(u32 *)(self + 0x4b4) = uVar2;
  hardware_Sub_08007874(self + 0x4b8);
  uVar2 = hardware_Sub_08007B54(self + 0x4b8,2);
  *(u32 *)(self + 0x4bc) = uVar2;
  hardware_Sub_08007128(self + 0x4c0);
  uVar2 = hardware_Sub_0800736C(self + 0x4c0);
  *(u32 *)(self + 0x4c4) = uVar2;
  hardware_Sub_08007874(self + 0x4c8);
  uVar2 = hardware_Sub_08007B54(self + 0x4c8,3);
  *(u32 *)(self + 0x4cc) = uVar2;
  hardware_Sub_08007874(self + 0x4d0);
  uVar2 = hardware_Sub_08007B54(self + 0x4d0,3);
  *(u32 *)(self + 0x4d4) = uVar2;
  hardware_Sub_08007128(self + 0x4d8);
  uVar2 = hardware_Sub_0800736C(self + 0x4d8);
  *(u32 *)(self + 0x4dc) = uVar2;
  hardware_Sub_08007874(self + 0x4e0);
  uVar2 = hardware_Sub_08007B54(self + 0x4e0,3);
  *(u32 *)(self + 0x4e4) = uVar2;
  hardware_Sub_08007128(self + 0x4e8);
  *(u32 *)(self + 0x4ec) = 0;
  hardware_Sub_08007874(self + 0x4f0);
  uVar2 = hardware_Sub_08007B54(self + 0x4f0,3);
  *(u32 *)(self + 0x4f4) = uVar2;
  hardware_Sub_08007128(self + 0x4f8);
  *(u32 *)(self + 0x4fc) = 0;
  iVar5 = self + 0x500;
  iVar4 = 3;
  do {
    hardware_Sub_08007874(iVar5);
    uVar2 = hardware_Sub_08007B54(iVar5,4);
    *(u32 *)(iVar5 + 4) = uVar2;
    hardware_Sub_08007128(iVar5 + 8);
    *(u32 *)(iVar5 + 0xc) = 0;
    iVar5 = iVar5 + 0x10;
    iVar4 = iVar4 + -1;
  } while (iVar4 != -1);
  iVar5 = self + 0x540;
  hardware_Sub_08007874(iVar5);
  uVar2 = hardware_Sub_08007B54(iVar5,4);
  *(u32 *)(self + 0x544) = uVar2;
  iVar4 = self + 0x548;
  iVar7 = 1;
  do {
    hardware_Sub_08007128(iVar4);
    *(u32 *)(iVar4 + 4) = 0;
    iVar4 = iVar4 + 8;
    iVar7 = iVar7 + -1;
  } while (iVar7 != -1);
  uVar8 = 0;
  puVar6 = (u32 *)(self + 0x54c);
  do {
    iVar4 = uVar8 * 8 + iVar5 + 8;
    hardware_Sub_080073E0(iVar4,*puVar6);
    uVar2 = hardware_Sub_0800736C(iVar4);
    *puVar6 = uVar2;
    puVar6 = puVar6 + 2;
    uVar8 = uVar8 + 1;
  } while (uVar8 < 2);
  *(u8 *)(self + 0x00002324) = (u8)uStack_2c;
  puVar6 = (u32 *)(self + 0x000023A0);
  *puVar6 = 0x080E7950;
  *(u16 *)(puVar6 + 1) = 0;
  iVar5 = 0x00001C9C;
  *(short *)(self + 0x00002264) =
       (short)((*(u32 *)(*(int *)(self + 8) + 0x00001C9C) & 0x1fffff) >> 0xd);
  uVar1 = func_0809B228(*(int *)(self + 8) + 0x00001C70);
  iVar4 = 0x00002266;
  *(u16 *)(self + 0x00002266) = uVar1;
  *(u32 *)(self + 0x0000225C) = 0;
  *(u32 *)(self + iVar4 + -6) = 0;
  *(u8 *)(self + 0x00001D58) = 0;
  *(u8 *)(self + 0x00001D59) = 0;
  *(u16 *)(self + 0x000022C8) = 0;
  iVar4 = 0x000022CA;
  *(u16 *)(self + 0x000022CA) = 0;
  *(u16 *)(self + iVar4 + -4) = *(u16 *)(*(int *)(self + 8) + iVar5) & 0x3ff;
  *(u8 *)(self + 0x000022CC) = 7;
  iVar5 = 0x000022CD;
  *(u8 *)(self + 0x000022CD) = 0;
  *(u8 *)(self + iVar4 + 4) = 0;
  *(u8 *)(self + iVar5 + 0x58) = 0;
  iVar5 = 0x00002326;
  *(char *)(self + 0x00002326) =
       (char)((*(u8 *)(*(int *)(self + 8) + 0x00001C9D) & 0x1f) >> 2);
  *(u8 *)(self + 0x00002321) = 0;
  *(u16 *)(self + iVar5 + 6) = 2;
  return (self);
}

/* 0x08057F4C (24B) | SpriteAnimEngine_Sub_08057F4C (orig: func_08057F4C) | origin: pure | domain: SpriteAnimEngine | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
u32 SpriteAnimEngine_Sub_08057F4C(int arg0) {
  return ((u32)((*(u8 *)(arg0 + 0x2c) & 3) == 3));
}

/* 0x08075220 (264B) | SpriteAnimEngine_Sub_08075220 (orig: func_08075220) | origin: wip | domain: SpriteAnimEngine | MEDIUM / graph_algebra */
void SpriteAnimEngine_Sub_08075220(int param_1,int param_2,int param_3) {
  int iVar1;
  int iVar2;
  u32 uVar3;
  int iVar4;
  iVar4 = 0x1a;
  iVar1 = *(int *)(param_1 + 4);
  if (param_2 != 0) {
    iVar2 = LibGcc_umodsi3(param_2,0x1e);
    if (iVar2 != 0) {
      code_0803EE94_Sub_0804E9F4(*(u8 *)(iVar1 + 0x18) + param_3 * 0x40 + 0x34,0x88,2,2,0,0x20);
      code_0803EE94_Sub_0804EDB4(iVar2,*(int *)(iVar1 + 0x18) + param_3 * 0x40 + 0x32,0x120,0,0x20);
      iVar4 = 0x16;
    }
    uVar3 = LibGcc_udivsi3(param_2,0x1e);
    uVar3 = uVar3 && 3;
    if (uVar3 != 0) {
      code_0803EE94_Sub_0804E9F4(*(int *)(iVar1 + 0x18) + param_3 * 0x40 + (iVar4 + -4) * 2,0x84,2,2,0,0x20);
      code_0803EE94_Sub_0804EDB4(uVar3,*(int *)(iVar1 + 0x18) + param_3 * 0x40 + (iVar4 + -5) * 2,0x120,0,0x20);
      iVar4 = iVar4 + -10;
    }
    iVar2 = LibGcc_udivsi3(param_2,0x78);
    if ((u8)iVar2 != 0) {
      code_0803EE94_Sub_0804E9F4(*(u16 *)(iVar1 + 0x18) + param_3 * 0x40 + (iVar4 + -6) * 2,0x78,6,2,0,0x20);
      code_0803EE94_Sub_0804EDB4(uVar3,*(int *)(iVar1 + 0x18) + param_3 * 0x40 + (iVar4 + -7) * 2,0x120,0,0x20);
    }
  }
}

/* 0x08075334 (284B) | SpriteAnimEngine_Sub_08075334 (orig: func_08075334) | origin: wip | domain: SpriteAnimEngine | MEDIUM / graph_algebra */
void SpriteAnimEngine_Sub_08075334(int param_1,u32 param_2,u16 param_3,u32 param_4,
             u32 param_5) {
  int *piVar1;
  u32 *puVar2;
  int iVar3;
  u32 *puVar4;
  u32 *puVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  u32 uVar9;
  u32 uVar10;
  u32 uStack_3c;
  int iStack_2c;
  int iStack_28;
  u32 *puStack_24;
  uStack_3c = ((u16)(param_3));
  piVar8 = (int *)(param_1 + 0x00000594);
  puVar4 = (u32 *)piVar8[1];
  if (puVar4 == (u32 *)piVar8[3]) {
    iStack_28 = 1;
    puVar5 = (u32 *)*piVar8;
    iStack_2c = (int)puVar4 - (int)puVar5 >> 4;
    piVar1 = &iStack_2c;
    if (iStack_2c == 0) {
      piVar1 = &iStack_28;
    }
    if (iStack_2c + *piVar1 == 0) {
      puVar2 = (u32 *)0x0;
      iVar7 = 0;
      puStack_24 = puVar2;
    }
    else {
      iVar7 = (iStack_2c + *piVar1) * 0x10;
      puVar2 = (u32 *)LibC_malloc(iVar7);
      if (puVar2 == (u32 *)0x0) {
        puVar2 = (u32 *)code_linkonce_Sub_080D3BC0(iVar7);
      }
      puVar5 = (u32 *)*piVar8;
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
        puVar2[1] = param_2;
        puVar2[2] = param_4;
        puVar2[3] = param_5;
      }
      puVar2 = puVar2 + 4;
    }
    else {
      for (; iVar3 != 0; iVar3 = iVar3 + -1) {
        if (puVar2 != (u32 *)0x0) {
          *puVar2 = uStack_3c;
          puVar2[1] = param_2;
          puVar2[2] = param_4;
          puVar2[3] = param_5;
        }
        puVar2 = puVar2 + 4;
      }
    }
    iVar6 = *piVar8;
    for (iVar3 = iVar6; iVar3 != piVar8[1]; iVar3 = iVar3 + 0x10) {
    }
    if (iVar6 != 0) {
      LibC_free(iVar6);
    }
    *piVar8 = (int)puStack_24;
    piVar8[1] = (int)puVar2;
    piVar8[3] = (int)puStack_24 + iVar7;
  }
  else {
    if (puVar4 != (u32 *)0x0) {
      *puVar4 = uStack_3c;
      puVar4[1] = param_2;
      puVar4[2] = param_4;
      puVar4[3] = param_5;
    }
    piVar8[1] = piVar8[1] + 0x10;
  }
}

/* 0x0807549C (192B) | SpriteAnimEngine_Sub_0807549C (orig: func_0807549C) | origin: wip | domain: SpriteAnimEngine | MEDIUM / graph_algebra */
void SpriteAnimEngine_Sub_0807549C(int param_1,int param_2) {
  u32 uVar1;
  int iStack_18;
  int iStack_14;
  iStack_18 = 0;
  if (param_2 == 1) {
    uVar1 = CppRuntime_builtin_new(0x00004B94);
    iStack_18 = SpriteAnimEngine_Ctor_13B8(uVar1,param_1,*(u32 *)(param_1 + 0x120));
  }
  else if (param_2 < 2) {
    if (param_2 == 0) {
      uVar1 = CppRuntime_builtin_new(0x000042FC);
      iStack_18 = SpriteAnimEngine_Ctor_0DE4(uVar1,param_1,*(u32 *)(param_1 + 0x120));
    }
  }
  else if (param_2 == 2) {
    uVar1 = CppRuntime_builtin_new(0x00008E6C);
    iStack_18 = SpriteAnimEngine_Ctor_22DC(uVar1,param_1,*(u32 *)(param_1 + 0x120));
  }
  iStack_14 = iStack_18;
  code_0803EE94_Sub_08076B94(param_1,&iStack_14);
}

/* 0x08075678 (24B) | SpriteAnimEngine_Sub_08075678 (orig: func_08075678) | origin: pure | domain: SpriteAnimEngine | MEDIUM / graph_algebra */
void SpriteAnimEngine_Sub_08075334(u32, u32, u32, u32, u32); void SpriteAnimEngine_Sub_08075678(u32 a, u32 b, u32 c, u32 *d) { SpriteAnimEngine_Sub_08075334(a, b, c, d[2], d[4]); }

/* 0x08075690 (32B) | SpriteAnimEngine_Sub_08075690 (orig: func_08075690) | origin: pure | domain: SpriteAnimEngine | MEDIUM / graph_algebra */
struct S { u32 x, y; }; extern struct S g_080FC024[]; void SpriteAnimEngine_Sub_08075334(u32, u32, u32, u32, u32); void SpriteAnimEngine_Sub_08075690(u32 a, u32 b, u32 c, int d) { struct S *p = &g_080FC024[d]; SpriteAnimEngine_Sub_08075334(a, b, c, p->x, p->y); }

/* 0x0807B188 (552B) | SpriteAnimEngine_Ctor_B188 (orig: func_0807B188) | origin: wip | domain: SpriteAnimEngine | HIGH / vtable_algebra */
u32 SpriteAnimEngine_Ctor_B188(int self) {
  u16 uVar1;
  u32 *puVar2;
  int *piVar3;
  u32 *puVar4;
  u32 uVar5;
  u32 uVar6;
  int *piVar7;
  int iVar8;
  u32 uVar9;
  u32 uVar10;
  u32 uVar11;
  u32 uStack_f0;
  u32 uStack_ec;
  u32 uStack_e8;
  u32 uStack_e4;
  u32 auStack_e0 [12];
  u16 uStack_b0;
  u16 uStack_ae;
  int *piStack_ac;
  int iStack_a8;
  u16 uStack_a0;
  u16 uStack_98;
  u16 uStack_96;
  u16 uStack_94;
  u16 uStack_92;
  u16 uStack_90;
  u32 uStack_8c;
  u8 uStack_88;
  u8 uStack_87;
  u32 uStack_84;
  u8 uStack_80;
  u8 uStack_7c;
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
  u32 uStack_40;
  u32 uStack_3c;
  u8 uStack_38;
  u8 auStack_37 [3];
  int iStack_34;
  u32 uStack_30;
  u32 uStack_2c;
  u32 *puStack_28;
  int iStack_24;
  iStack_34 = 4;
  piVar7 = (int *)(self + 0x20);
  for (piVar3 = (int *)(self + 0x24); piVar3 != piVar7 + *(int *)(self + 0x20) * 4 + 1;
      piVar3 = piVar3 + 4) {
  }
  *piVar7 = *piVar7 - ((int)(piVar7 + *(int *)(self + 0x20) * 4 + 1) - (self + 0x24) >> 4);
  uStack_30 = 0;
  if (*(int *)(self + 0x2a4) != 0) {
    puStack_28 = &uStack_f0;
    iStack_24 = 4;
    do {
      puVar2 = puStack_28;
      iVar8 = *(int *)(self + 0x2a4 + iStack_24);
      puVar4 = (u32 *)(iVar8 * 0x14 + 0x080FD988);
      uVar5 = *puVar4;
      uVar9 = puVar4[1];
      uVar11 = puVar4[2];
      uVar6 = puVar4[3];
      uVar10 = puVar4[4];
      uStack_2c = iVar8 * 0x18 + 0xd0;
      if (uVar10 < 2) {
        puStack_28[1] = 0x10;
        code_0803EE94_79C8_Ctor(auStack_e0,0x086678A0);
        uStack_b0 = 0;
        uStack_ae = 0;
        code_0803EE94_Sub_0805E824(&piStack_ac,auStack_e0,0,0x100);
        uStack_98 = 0;
        uStack_96 = 0;
        uStack_94 = 0;
        uStack_92 = 0;
        uStack_90 = 0;
        uStack_8c = 0;
        uStack_88 = 0;
        uStack_87 = 0;
        uStack_84 = 0;
        uStack_80 = 0;
        uStack_7c = 0;
        uStack_78 = 0;
        uStack_74 = uStack_74 & 0xffff0000;
        uStack_70 = 0;
        uStack_6c = uStack_6c & 0xffff0000;
        uStack_68 = 0;
        uStack_64 = uStack_64 & 0xffff0000;
        uStack_60 = 0;
        uStack_5c = uStack_5c & 0xffff0000;
        *(short *)puVar2 = (short)(iStack_34 << 3);
        if (uVar10 == 0) {
          func_0800DF50(&uStack_38,uVar5);
          uVar1 = Article_GetIconId(&uStack_38);
        }
        else {
          func_0800DB2C(auStack_37,uVar5);
          uVar1 = Tool_GetIconId(auStack_37);
        }
        code_0803EE94_Sub_0805E860(&piStack_ac,uVar1);
        func_080D3918(&uStack_58,piStack_ac,*(u16 *)(iStack_a8 + (u32)uStack_a0 * 4),
                        *(u32 *)(*piStack_ac + 0x10));
        LibC_memcpy(&uStack_58,&uStack_58,0x20);
        uStack_78 = uStack_58;
        uStack_74 = uStack_54;
        uStack_70 = uStack_50;
        uStack_6c = uStack_4c;
        uStack_68 = uStack_48;
        uStack_64 = uStack_44;
        uStack_60 = uStack_40;
        uStack_5c = uStack_3c;
        uStack_e8 = uStack_50;
        uStack_e4 = uStack_48;
        if (*(u32 *)(self + 0x20) < 0x28) {
          puVar2 = (u32 *)(self + *(u32 *)(self + 0x20) * 0x10 + 0x24);
          if (puVar2 != (u32 *)0x0) {
            *puVar2 = uStack_f0;
            puVar2[1] = uStack_ec;
            puVar2[2] = uStack_50;
            puVar2[3] = uStack_48;
          }
          *(int *)(self + 0x20) = *(int *)(self + 0x20) + 1;
        }
        auStack_e0[0] = 0x080E5A28;
      }
      iVar8 = iStack_34 * 0x40;
      code_0803EE94_Sub_0804E9F4(*(int *)(*(int *)(self + 0x1c) + 0x18) + iVar8 + 4,uStack_2c & 0xffff,0xc,2,0
                    ,0x20,uVar5,uVar9,uVar11,uVar6);
      if (*(u32 *)(iStack_24 + self + 0x2a4) < 3) {
        code_0803EE94_Sub_0804EDB4(uVar11,*(int *)(*(int *)(self + 0x1c) + 0x18) + iVar8 + 0x32,0xa0,0,0x20);
        code_0803EE94_Sub_0804E9F4(*(int *)(*(int *)(self + 0x1c) + 0x18) + iVar8 + 0x34,0x20,2,2,0,0x20,uVar5
                      ,uVar9,uVar11,uVar6);
      }
      iStack_34 = iStack_34 + 2;
      iStack_24 = iStack_24 + 4;
      uStack_30 = uStack_30 + 1;
    } while (uStack_30 < *(u32 *)(self + 0x2a4));
  }
  return (iStack_34);
}

/* 0x0808234C (832B) | SpriteAnimEngine_Ctor_234C (orig: func_0808234C) | origin: wip | domain: SpriteAnimEngine | HIGH / vtable_algebra */
void SpriteAnimEngine_Ctor_234C(int self,u32 param_2,u32 param_3,int param_4) {
  u16 uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  u32 *puVar5;
  int iVar6;
  u32 *puVar7;
  u32 uVar8;
  u32 *puVar9;
  u32 uVar10;
  u8 auStack_f8 [48];
  u16 uStack_c8;
  u16 uStack_c6;
  int *piStack_c4;
  int iStack_c0;
  u16 uStack_b8;
  u16 uStack_b0;
  u16 uStack_ae;
  u16 uStack_ac;
  u16 uStack_aa;
  u16 uStack_a8;
  u32 uStack_a4;
  u8 uStack_a0;
  u8 uStack_9f;
  u32 uStack_9c;
  u8 uStack_98;
  u8 uStack_94;
  u32 uStack_90;
  u32 uStack_8c;
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
  u8 auStack_50 [4];
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  u32 uStack_34;
  int iStack_30;
  int iStack_2c;
  u32 *puStack_28;
  u32 *puStack_24;
  iStack_3c = self;
  iStack_38 = param_4;
  code_0803EE94_79C8_Ctor(auStack_f8,0x086678A0);
  uStack_c8 = 0;
  uStack_c6 = 0;
  code_0803EE94_Sub_0805E824(&piStack_c4,auStack_f8,0,0x100);
  uStack_b0 = 0;
  uStack_ae = 0;
  uStack_ac = 0;
  uStack_aa = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_9f = 0;
  uStack_9c = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_8c = (u32)(*(u16 *)((u8 *)&uStack_8c + 2)) << 0x10;
  uStack_88 = 0;
  uStack_84 = (u32)(*(u16 *)((u8 *)&uStack_84 + 2)) << 0x10;
  uStack_80 = 0;
  uStack_7c = (u32)(*(u16 *)((u8 *)&uStack_7c + 2)) << 0x10;
  uStack_78 = 0;
  uStack_74 = (u32)(*(u16 *)((u8 *)&uStack_74 + 2)) << 0x10;
  func_0800DB2C(auStack_50,param_2);
  uVar1 = Tool_GetIconId(auStack_50);
  code_0803EE94_Sub_0805E860(&piStack_c4,uVar1);
  func_080D3918(&uStack_70,piStack_c4,*(u16 *)(iStack_c0 + (u32)uStack_b8 * 4),
                  *(u32 *)(*piStack_c4 + 0x10));
  LibC_memcpy(&uStack_70,&uStack_70,0x20);
  uStack_90 = uStack_70;
  uStack_8c = uStack_6c;
  uStack_88 = uStack_68;
  uStack_84 = uStack_64;
  uStack_80 = uStack_60;
  uStack_7c = uStack_5c;
  uStack_78 = uStack_58;
  uStack_74 = uStack_54;
  iVar4 = param_3 * 2 + 0x30c;
  piVar2 = (int *)hardware_GetField_0x00_8910(iStack_3c);
  hardware_Sub_08008F0C(&uStack_70,uStack_88,iVar4 * 0x20 + 0x6000000,0x80);
  puVar5 = (u32 *)piVar2[1];
  if (puVar5 == (u32 *)piVar2[3]) {
    iStack_48 = 1;
    iStack_4c = (int)puVar5 - *piVar2 >> 4;
    piVar3 = &iStack_4c;
    if (iStack_4c == 0) {
      piVar3 = &iStack_48;
    }
    puStack_28 = puVar5;
    if (iStack_4c + *piVar3 == 0) {
      puStack_24 = (u32 *)0x0;
      iVar6 = 0;
    }
    else {
      iVar6 = (iStack_4c + *piVar3) * 0x10;
      puStack_24 = (u32 *)LibC_malloc(iVar6);
      if (puStack_24 == (u32 *)0x0) {
        puStack_24 = (u32 *)code_linkonce_Sub_080D3BC0(iVar6);
      }
    }
    iStack_30 = param_3 << 1;
    iStack_2c = iStack_38 << 6;
    uStack_34 = iVar4 * 0x10000;
    puVar7 = puStack_24;
    for (puVar5 = (u32 *)*piVar2; puVar5 != puStack_28; puVar5 = puVar5 + 4) {
      if (puVar7 != (u32 *)0x0) {
        uVar8 = puVar5[1];
        uVar10 = puVar5[2];
        *puVar7 = *puVar5;
        puVar7[1] = uVar8;
        puVar7[2] = uVar10;
        puVar7[3] = puVar5[3];
      }
      puVar7 = puVar7 + 4;
    }
    iVar4 = iStack_48;
    if (iStack_48 == 1) {
      if (puVar7 != (u32 *)0x0) {
        *puVar7 = uStack_70;
        puVar7[1] = uStack_6c;
        puVar7[2] = uStack_68;
        puVar7[3] = uStack_64;
      }
      puVar7 = puVar7 + 4;
    }
    else {
      for (; iVar4 != 0; iVar4 = iVar4 + -1) {
        if (puVar7 != (u32 *)0x0) {
          *puVar7 = uStack_70;
          puVar7[1] = uStack_6c;
          puVar7[2] = uStack_68;
          puVar7[3] = uStack_64;
        }
        puVar7 = puVar7 + 4;
      }
    }
    for (iVar4 = *piVar2; iVar4 != piVar2[1]; iVar4 = iVar4 + 0x10) {
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
      *puVar5 = uStack_70;
      puVar5[1] = uStack_6c;
      puVar5[2] = uStack_68;
      puVar5[3] = uStack_64;
    }
    piVar2[1] = piVar2[1] + 0x10;
    iStack_2c = iStack_38 << 6;
    uStack_34 = iVar4 * 0x10000;
    iStack_30 = param_3 * 2;
  }
  piVar2 = (int *)hardware_GetField_0x00_8910(iStack_3c);
  hardware_Sub_08008F0C(&uStack_70,uStack_80,(param_3 >> 1) * 0x20 + 0x05000020,0x20);
  puVar5 = (u32 *)piVar2[1];
  if (puVar5 == (u32 *)piVar2[3]) {
    iStack_40 = 1;
    iStack_44 = (int)puVar5 - *piVar2 >> 4;
    piVar3 = &iStack_44;
    if (iStack_44 == 0) {
      piVar3 = &iStack_40;
    }
    puStack_28 = puVar5;
    if (iStack_44 + *piVar3 == 0) {
      puVar5 = (u32 *)0x0;
      iVar4 = 0;
    }
    else {
      iVar4 = (iStack_44 + *piVar3) * 0x10;
      puVar5 = (u32 *)LibC_malloc(iVar4);
      if (puVar5 == (u32 *)0x0) {
        puVar5 = (u32 *)code_linkonce_Sub_080D3BC0(iVar4);
      }
    }
    puVar9 = puVar5;
    for (puVar7 = (u32 *)*piVar2; puVar7 != puStack_28; puVar7 = puVar7 + 4) {
      if (puVar9 != (u32 *)0x0) {
        uVar8 = puVar7[1];
        uVar10 = puVar7[2];
        *puVar9 = *puVar7;
        puVar9[1] = uVar8;
        puVar9[2] = uVar10;
        puVar9[3] = puVar7[3];
      }
      puVar9 = puVar9 + 4;
    }
    iVar6 = iStack_40;
    if (iStack_40 == 1) {
      if (puVar9 != (u32 *)0x0) {
        *puVar9 = uStack_70;
        puVar9[1] = uStack_6c;
        puVar9[2] = uStack_68;
        puVar9[3] = uStack_64;
      }
      puVar9 = puVar9 + 4;
    }
    else {
      for (; iVar6 != 0; iVar6 = iVar6 + -1) {
        if (puVar9 != (u32 *)0x0) {
          *puVar9 = uStack_70;
          puVar9[1] = uStack_6c;
          puVar9[2] = uStack_68;
          puVar9[3] = uStack_64;
        }
        puVar9 = puVar9 + 4;
      }
    }
    for (iVar6 = *piVar2; iVar6 != piVar2[1]; iVar6 = iVar6 + 0x10) {
    }
    puStack_24 = puVar5;
    if (*piVar2 != 0) {
      LibC_free();
    }
    *piVar2 = (int)puStack_24;
    piVar2[1] = (int)puVar9;
    piVar2[3] = (int)puStack_24 + iVar4;
  }
  else {
    if (puVar5 != (u32 *)0x0) {
      *puVar5 = uStack_70;
      puVar5[1] = uStack_6c;
      puVar5[2] = uStack_68;
      puVar5[3] = uStack_64;
    }
    piVar2[1] = piVar2[1] + 0x10;
  }
  code_0803EE94_Sub_0804E9F4(*(int *)(*(int *)(iStack_3c + 0x1c) + 0x18) + iStack_2c + iStack_30,
                uStack_34 >> 0x10,2,2,(param_3 >> 1) + 1 & 0xffff,0x20);
}

/* 0x08085640 (556B) | SpriteAnimEngine_Ctor_5640 (orig: func_08085640) | origin: wip | domain: SpriteAnimEngine | HIGH / vtable_algebra */
u32 SpriteAnimEngine_Ctor_5640(int self) {
  u16 uVar1;
  u32 *puVar2;
  int *piVar3;
  u32 *puVar4;
  u32 uVar5;
  u32 uVar6;
  int *piVar7;
  int iVar8;
  u32 uVar9;
  int iVar10;
  u32 uVar11;
  u32 uStack_f0;
  u32 uStack_ec;
  u32 uStack_e8;
  u32 uStack_e4;
  u32 auStack_e0 [12];
  u16 uStack_b0;
  u16 uStack_ae;
  int *piStack_ac;
  int iStack_a8;
  u16 uStack_a0;
  u16 uStack_98;
  u16 uStack_96;
  u16 uStack_94;
  u16 uStack_92;
  u16 uStack_90;
  u32 uStack_8c;
  u8 uStack_88;
  u8 uStack_87;
  u32 uStack_84;
  u8 uStack_80;
  u8 uStack_7c;
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
  u32 uStack_40;
  u32 uStack_3c;
  u8 uStack_38;
  u8 auStack_37 [3];
  int iStack_34;
  u32 uStack_30;
  u32 uStack_2c;
  u32 *puStack_28;
  int iStack_24;
  iStack_34 = 4;
  piVar7 = (int *)(self + 0x20);
  for (piVar3 = (int *)(self + 0x24); piVar3 != piVar7 + *(int *)(self + 0x20) * 4 + 1;
      piVar3 = piVar3 + 4) {
  }
  *piVar7 = *piVar7 - ((int)(piVar7 + *(int *)(self + 0x20) * 4 + 1) - (self + 0x24) >> 4);
  uStack_30 = 0;
  if (*(int *)(self + 0x2a4) != 0) {
    puStack_28 = &uStack_f0;
    iStack_24 = 4;
    do {
      puVar2 = puStack_28;
      iVar8 = *(int *)(self + 0x2a4 + iStack_24);
      puVar4 = (u32 *)(iVar8 * 0x14 + 0x080FFB90);
      uVar5 = *puVar4;
      uVar9 = puVar4[1];
      uVar11 = puVar4[2];
      uVar6 = puVar4[3];
      iVar10 = puVar4[4];
      uStack_2c = iVar8 * 0x18 + 0xd0;
      if ((iVar10 == 0) || (iVar10 == 2)) {
        puStack_28[1] = 0x10;
        code_0803EE94_79C8_Ctor(auStack_e0,0x086678A0);
        uStack_b0 = 0;
        uStack_ae = 0;
        code_0803EE94_Sub_0805E824(&piStack_ac,auStack_e0,0,0x100);
        uStack_98 = 0;
        uStack_96 = 0;
        uStack_94 = 0;
        uStack_92 = 0;
        uStack_90 = 0;
        uStack_8c = 0;
        uStack_88 = 0;
        uStack_87 = 0;
        uStack_84 = 0;
        uStack_80 = 0;
        uStack_7c = 0;
        uStack_78 = 0;
        uStack_74 = uStack_74 & 0xffff0000;
        uStack_70 = 0;
        uStack_6c = uStack_6c & 0xffff0000;
        uStack_68 = 0;
        uStack_64 = uStack_64 & 0xffff0000;
        uStack_60 = 0;
        uStack_5c = uStack_5c & 0xffff0000;
        *(short *)puVar2 = (short)(iStack_34 << 3);
        if (iVar10 == 0) {
          func_0800DF50(&uStack_38,uVar5);
          uVar1 = Article_GetIconId(&uStack_38);
        }
        else {
          func_0800DB2C(auStack_37,uVar5);
          uVar1 = Tool_GetIconId(auStack_37);
        }
        code_0803EE94_Sub_0805E860(&piStack_ac,uVar1);
        func_080D3918(&uStack_58,piStack_ac,*(u16 *)(iStack_a8 + (u32)uStack_a0 * 4),
                        *(u32 *)(*piStack_ac + 0x10));
        LibC_memcpy(&uStack_58,&uStack_58,0x20);
        uStack_78 = uStack_58;
        uStack_74 = uStack_54;
        uStack_70 = uStack_50;
        uStack_6c = uStack_4c;
        uStack_68 = uStack_48;
        uStack_64 = uStack_44;
        uStack_60 = uStack_40;
        uStack_5c = uStack_3c;
        uStack_e8 = uStack_50;
        uStack_e4 = uStack_48;
        if (*(u32 *)(self + 0x20) < 0x28) {
          puVar2 = (u32 *)(self + *(u32 *)(self + 0x20) * 0x10 + 0x24);
          if (puVar2 != (u32 *)0x0) {
            *puVar2 = uStack_f0;
            puVar2[1] = uStack_ec;
            puVar2[2] = uStack_50;
            puVar2[3] = uStack_48;
          }
          *(int *)(self + 0x20) = *(int *)(self + 0x20) + 1;
        }
        auStack_e0[0] = 0x080E5A28;
      }
      iVar8 = iStack_34 * 0x40;
      code_0803EE94_Sub_0804E9F4(*(int *)(*(int *)(self + 0x1c) + 0x18) + iVar8 + 4,uStack_2c & 0xffff,0xc,2,0
                    ,0x20,uVar5,uVar9,uVar11,uVar6);
      if (*(u32 *)(iStack_24 + self + 0x2a4) < 7) {
        code_0803EE94_Sub_0804EDB4(uVar11,*(int *)(*(int *)(self + 0x1c) + 0x18) + iVar8 + 0x32,0xa0,0,0x20);
        code_0803EE94_Sub_0804E9F4(*(int *)(*(int *)(self + 0x1c) + 0x18) + iVar8 + 0x34,0x20,2,2,0,0x20,uVar5
                      ,uVar9,uVar11,uVar6);
      }
      iStack_34 = iStack_34 + 2;
      iStack_24 = iStack_24 + 4;
      uStack_30 = uStack_30 + 1;
    } while (uStack_30 < *(u32 *)(self + 0x2a4));
  }
  return (iStack_34);
}

/* 0x080884F4 (128B) | SpriteAnimEngine_Sub_080884F4 (orig: func_080884F4) | origin: wip | domain: SpriteAnimEngine | HIGH / fomt_studio_table */
void SpriteAnimEngine_Sub_080884F4(int param_1,int param_2) {
  char cVar1;
  u16 uVar2;
  u32 *puVar3;
  u32 uVar4;
  u32 uVar5;
  u32 uStack_20;
  u8 auStack_1c [4];
  uVar5 = 0;
  do {
    puVar3 = (u32 *)func_0800B80C(*(u32 *)(param_1 + 0x104),param_2 * 8 + uVar5);
    uStack_20 = *puVar3;
    cVar1 = FoodStack_IsEmpty(&uStack_20);
    if (cVar1 == '\0') {
      FoodStack_GetFood(auStack_1c,&uStack_20);
      uVar2 = Food_GetIconId(auStack_1c);
      uVar4 = FoodStack_GetAmount(&uStack_20);
      SpriteAnimEngine_Sub_080CC728(*(u32 *)(param_1 + 0x7c),uVar5,0x086678A0,uVar2,uVar4);
    }
    else {
      code_0803EE94_7868_Sub_080CCDEC(*(u32 *)(param_1 + 0x7c),uVar5);
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 8);
}

/* 0x08088574 (28B) | SpriteAnimEngine_Sub_08088574 (orig: func_08088574) | origin: pure | domain: SpriteAnimEngine | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 SpriteAnimEngine_Sub_080884F4();
extern u32 SpriteAnimEngine_Sub_080CEB80();
void SpriteAnimEngine_Sub_08088574(int arg0) {
  u32 val;
  val = SpriteAnimEngine_Sub_080CEB80(*(u32 *)(arg0 + 0x94));
  SpriteAnimEngine_Sub_080884F4(arg0,val);
}

/* 0x08088590 (28B) | SpriteAnimEngine_Sub_08088590 (orig: func_08088590) | origin: pure | domain: SpriteAnimEngine | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 SpriteAnimEngine_Sub_080884F4();
extern u32 SpriteAnimEngine_Sub_080CEBC0();
void SpriteAnimEngine_Sub_08088590(int arg0) {
  u32 val;
  val = SpriteAnimEngine_Sub_080CEBC0(*(u32 *)(arg0 + 0x94));
  SpriteAnimEngine_Sub_080884F4(arg0,val);
}

/* 0x0808BCD0 (208B) | SpriteAnimEngine_Sub_0808BCD0 (orig: func_0808BCD0) | origin: wip | domain: SpriteAnimEngine | HIGH / fomt_studio_table */
void SpriteAnimEngine_Sub_0808BCD0(int param_1,u32 param_2) {
  char cVar1;
  u16 uVar2;
  u32 uVar3;
  u32 uVar4;
  u32 uVar5;
  u32 uVar6;
  u32 *puVar7;
  u8 auStack_20 [4];
  u8 uStack_1c;
  u8 uStack_1b;
  uVar6 = 0;
  if (param_2 != 0) {
    do {
      uVar3 = func_0800FE18(*(u32 *)(param_1 + 0x104),uVar6);
      LibC_memcpy(auStack_20,uVar3,2);
      cVar1 = ToolStack_IsEmpty(auStack_20);
      if (cVar1 == '\0') {
        uVar3 = ToolStack_GetTool(auStack_20);
        uStack_1c = farmer_Sub_0800E550(*(int *)(param_1 + 8) + 0x00001BD8,uVar3);
        uVar2 = Tool_GetIconId(&uStack_1c);
        uVar4 = *(u32 *)(param_1 + 0x78);
        uVar3 = ToolStack_GetAmount(auStack_20);
        SpriteAnimEngine_Sub_080CB304(uVar4,uVar6,0x086678A0,uVar2,uVar3);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < param_2);
  }
  puVar7 = (u32 *)(param_1 + 0xfc);
  cVar1 = ToolStack_IsEmpty(*puVar7);
  if (cVar1 == '\0') {
    uVar3 = ToolStack_GetTool(*puVar7);
    uStack_1b = farmer_Sub_0800E550(*(int *)(param_1 + 8) + 0x00001BD8,uVar3);
    uVar2 = Tool_GetIconId(&uStack_1b);
    uVar3 = 0x086678A0;
    uVar5 = *(u32 *)(param_1 + 0x78);
    uVar4 = ToolStack_GetAmount(*puVar7);
    SpriteAnimEngine_Sub_080CBAF0(uVar5,uVar3,uVar2,uVar4);
  }
}

/* 0x0808C840 (124B) | SpriteAnimEngine_Sub_0808C840 (orig: func_0808C840) | origin: wip | domain: SpriteAnimEngine | HIGH / fomt_studio_table */
void SpriteAnimEngine_Sub_0808C840(int param_1,int param_2) {
  u16 uVar2;
  u32 uVar3;
  u32 uVar4;
  u8 auStack_1c [4];
  s32 uStack_18;
  uVar4 = 0;
  do {
    uVar3 = func_0800BAA0(*(u32 *)(param_1 + 0x104),param_2 * 8 + uVar4);
    LibC_memcpy(auStack_1c,uVar3,2);
    if (ArticleStack_IsEmpty(auStack_1c) == '\0') {
      uStack_18 = ArticleStack_GetArticle(auStack_1c);
      uVar2 = Article_GetIconId(&uStack_18);
      uVar3 = ArticleStack_GetAmount(auStack_1c);
      SpriteAnimEngine_Sub_080CC728(*(u8 *)(param_1 + 0x7c),uVar4,0x086678A0,uVar2,uVar3);
    }
    else {
      code_0803EE94_7868_Sub_080CCDEC(*(u32 *)(param_1 + 0x7c),uVar4);
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 8);
}

/* 0x0808C8BC (28B) | SpriteAnimEngine_Sub_0808C8BC (orig: func_0808C8BC) | origin: pure | domain: SpriteAnimEngine | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 SpriteAnimEngine_Sub_0808C840();
extern u32 SpriteAnimEngine_Sub_080CEB80();
void SpriteAnimEngine_Sub_0808C8BC(int arg0) {
  u32 val;
  val = SpriteAnimEngine_Sub_080CEB80(*(u32 *)(arg0 + 0x94));
  SpriteAnimEngine_Sub_0808C840(arg0,val);
}

/* 0x0808C8D8 (28B) | SpriteAnimEngine_Sub_0808C8D8 (orig: func_0808C8D8) | origin: pure | domain: SpriteAnimEngine | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 SpriteAnimEngine_Sub_0808C840();
extern u32 SpriteAnimEngine_Sub_080CEBC0();
void SpriteAnimEngine_Sub_0808C8D8(int arg0) {
  u32 val;
  val = SpriteAnimEngine_Sub_080CEBC0(*(u32 *)(arg0 + 0x94));
  SpriteAnimEngine_Sub_0808C840(arg0,val);
}

/* 0x0808EDCC (208B) | SpriteAnimEngine_Sub_0808EDCC (orig: func_0808EDCC) | origin: wip | domain: SpriteAnimEngine | HIGH / fomt_studio_table */
void SpriteAnimEngine_Sub_0808EDCC(int param_1,u32 param_2) {
  u32 uVar6;
  u16 uVar2;
  s32 uVar3;
  u32 uVar4;
  u32 uVar5;
  char cVar1;
  u32 *puVar7;
  u8 auStack_20 [4];
  u8 uStack_1c;
  u8 uStack_1b;
  uVar6 = 0;
  if (param_2 != 0) {
    do {
      uVar3 = func_0800FE18(*(u32 *)(param_1 + 0x100),uVar6);
      LibC_memcpy(auStack_20,uVar3,2);
      if (ToolStack_IsEmpty(auStack_20) == '\0') {
        uVar3 = ToolStack_GetTool(auStack_20);
        uStack_1c = farmer_Sub_0800E550(*(int *)(param_1 + 8) + 0x00001BD8,uVar3);
        uVar2 = Tool_GetIconId(&uStack_1c);
        uVar4 = *(u32 *)(param_1 + 0x78);
        uVar3 = ToolStack_GetAmount(auStack_20);
        SpriteAnimEngine_Sub_080CB304(uVar4,uVar6,0x086678A0,uVar2,uVar3);
      }
      uVar6++;
    } while (uVar6 < param_2);
  }
  puVar7 = (u32 *)(param_1 + 0xfc);
  cVar1 = ToolStack_IsEmpty(*puVar7);
  if (cVar1 == '\0') {
    uVar3 = ToolStack_GetTool(*puVar7);
    uStack_1b = farmer_Sub_0800E550(*(int *)(param_1 + 8) + 0x00001BD8,uVar3);
    uVar2 = Tool_GetIconId(&uStack_1b);
    uVar3 = (u8)0x086678A0;
    uVar5 = *(u32 *)(param_1 + 0x78);
    uVar4 = ToolStack_GetAmount(*puVar7);
    SpriteAnimEngine_Sub_080CBAF0(uVar5,uVar3,uVar2,uVar4);
  }
}

/* 0x0808EE9C (148B) | SpriteAnimEngine_Sub_0808EE9C (orig: func_0808EE9C) | origin: pure | domain: SpriteAnimEngine | HIGH / fomt_studio_table */
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
extern u32 func_0800B5A0();
extern u32 Tool_GetIconId();
extern u32 ToolStack_GetTool();
extern u32 ToolStack_IsEmpty();
extern u32 ToolStack_GetAmount();
extern u32 farmer_Sub_0800E550();
extern u32 SpriteAnimEngine_Sub_080CC728();
extern u32 code_0803EE94_7868_Sub_080CCDEC();
extern u32 LibC_memcpy();
void SpriteAnimEngine_Sub_0808EE9C(int arg0, int arg1) {
  s32 val4;
  u32 val3;
  u8 auStack_20[4];
  u8 local_buf[4];
  s8 val;
  register u16 val2;
  register u32 val5;
  val5 = 0;
  do {
    val3 = func_0800B5A0(*(u32 *)(arg0 + 0x104), 8 * arg1 + val5);
    LibC_memcpy(auStack_20, val3, 2);
    val = ToolStack_IsEmpty(auStack_20);
    if (val == 0) {
      val3 = ToolStack_GetTool(auStack_20);
      local_buf[0] = farmer_Sub_0800E550(*(u32 *)(arg0 + 8) + 0x1BD8, val3);
      val2 = Tool_GetIconId(local_buf);
      val4 = *(u32 *)(arg0 + 0x7c);
      SpriteAnimEngine_Sub_080CC728(val4, val5, 0x086678A0, val2, ToolStack_GetAmount(auStack_20));
    } else {
      code_0803EE94_7868_Sub_080CCDEC(*(u32 *)(arg0 + 0x7c), val5);
    }
    val5 = val5 + 1;
  } while (val5 < 8);
}

/* 0x0808EF30 (28B) | SpriteAnimEngine_Sub_0808EF30 (orig: func_0808EF30) | origin: pure | domain: SpriteAnimEngine | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 SpriteAnimEngine_Sub_0808EE9C();
extern u32 SpriteAnimEngine_Sub_080CEB80();
void SpriteAnimEngine_Sub_0808EF30(int arg0) {
  u32 val;
  val = SpriteAnimEngine_Sub_080CEB80(*(u32 *)(arg0 + 0x94));
  SpriteAnimEngine_Sub_0808EE9C(arg0,val);
}

/* 0x0808EF4C (28B) | SpriteAnimEngine_Sub_0808EF4C (orig: func_0808EF4C) | origin: pure | domain: SpriteAnimEngine | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 SpriteAnimEngine_Sub_0808EE9C();
extern u32 SpriteAnimEngine_Sub_080CEBC0();
void SpriteAnimEngine_Sub_0808EF4C(int arg0) {
  u32 val;
  val = SpriteAnimEngine_Sub_080CEBC0(*(u32 *)(arg0 + 0x94));
  SpriteAnimEngine_Sub_0808EE9C(arg0,val);
}

/* 0x08090FCC (200B) | SpriteAnimEngine_Sub_08090FCC (orig: func_08090FCC) | origin: wip | domain: SpriteAnimEngine | HIGH / fomt_studio_table */
void SpriteAnimEngine_Sub_08090FCC(int param_1,u32 param_2) {
  char cVar1;
  u16 uVar2;
  u32 uVar3;
  u32 uVar4;
  u32 uVar5;
  u32 uVar6;
  u32 *puVar7;
  u8 auStack_1c [4];
  u8 uStack_18;
  u8 uStack_17;
  uVar6 = 0;
  if (param_2 != 0) {
    do {
      uVar3 = func_0800FE18(*(u32 *)(param_1 + 0x104),uVar6);
      LibC_memcpy(auStack_1c,uVar3,2);
      if (ToolStack_IsEmpty(auStack_1c) == '\0') {
        uVar3 = ToolStack_GetTool(auStack_1c);
        uStack_18 = farmer_Sub_0800E550(*(int *)(param_1 + 8) + 0x00001BD8,uVar3);
        uVar2 = Tool_GetIconId(&uStack_18);
        uVar3 = ToolStack_GetAmount(auStack_1c);
        SpriteAnimEngine_Sub_080CB304(*(u32 *)(param_1 + 0x78),uVar6,0x086678A0,uVar2,uVar3);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < param_2);
  }
  puVar7 = (u32 *)(param_1 + 0xfc);
  cVar1 = ToolStack_IsEmpty(*puVar7);
  if (cVar1 == '\0') {
    uVar3 = ToolStack_GetTool(*puVar7);
    uStack_17 = farmer_Sub_0800E550(*(u8 *)(param_1 + 8) + 0x00001BD8,uVar3);
    uVar2 = Tool_GetIconId();
    uVar3 = 0x086678A0;
    uVar5 = *(u32 *)(param_1 + 0x78);
    uVar4 = ToolStack_GetAmount(*puVar7);
    SpriteAnimEngine_Sub_080CBAF0(uVar5,uVar3,uVar2,uVar4);
  }
}

/* 0x080926A4 (176B) | SpriteAnimEngine_Sub_080926A4 (orig: func_080926A4) | origin: wip | domain: SpriteAnimEngine | HIGH / fomt_studio_table */
void SpriteAnimEngine_Sub_080926A4(int param_1,u32 param_2) {
  u16 uVar2;
  char cVar1;
  u32 uVar3;
  u32 uVar4;
  u32 uVar5;
  u32 uVar6;
  u32 *puVar7;
  u8 auStack_1c [4];
  u8 uStack_18;
  u8 uStack_17;
  uVar5 = 0;
  if (uVar5 < param_2) {
    do {
      uVar3 = func_0800FE18(*(u32 *)(param_1 + 0x104),uVar5);
      LibC_memcpy(auStack_1c,uVar3,2);
      cVar1 = ToolStack_IsEmpty(auStack_1c);
      if (cVar1 == '\0') {
        uStack_18 = ToolStack_GetTool(auStack_1c);
        uVar2 = Tool_GetIconId(&uStack_18);
        uVar3 = (u8)ToolStack_GetAmount(auStack_1c);
        SpriteAnimEngine_Sub_080CB304(*(u32 *)(param_1 + 0x78),uVar5,0x086678A0,uVar2,uVar3);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < param_2);
  }
  puVar7 = (u32 *)(param_1 + 0xfc);
  cVar1 = ToolStack_IsEmpty(*puVar7);
  if (cVar1 == '\0') {
    uStack_17 = ToolStack_GetTool(*puVar7);
    uVar2 = Tool_GetIconId(&uStack_17);
    uVar3 = (u8)0x086678A0;
    uVar6 = *(u16 *)(param_1 + 0x78);
    uVar4 = ToolStack_GetAmount(*puVar7);
    SpriteAnimEngine_Sub_080CBAF0(uVar6,uVar3,uVar2,uVar4);
  }
}

/* 0x08092CD0 (148B) | SpriteAnimEngine_Sub_08092CD0 (orig: func_08092CD0) | origin: pure | domain: SpriteAnimEngine | HIGH / fomt_studio_table */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 RucksackItem_TryWrap();
extern u32 held_item_Sub_0800F528();
extern u32 func_0800FCDC();
extern u32 ScriptVM_End_Cinematic_State();
extern u32 SpriteAnimEngine_Sub_080A0A54();
extern u32 SpriteAnimEngine_Sub_080CC728();
extern u32 SpriteAnimEngine_Sub_080CCE58();
extern u32 code_809E804_Sub_080CE184();
void SpriteAnimEngine_Sub_08092CD0(int arg0,int arg1) {
  u32 val;
  u32 val2;
  u32 val3;
  if (9 == arg1) {
    held_item_Sub_0800F528(*(u32 *)(arg0 + 0x100));
    SpriteAnimEngine_Sub_080CCE58(*(u32 *)(arg0 + 0x7c),0x086678A0,0x160,1);
  }
  else {
    val2 = *(u32 *)(arg0 + 0x104);
    val = code_809E804_Sub_080CE184(arg0,arg1,0);
    func_0800FCDC(val2,val);
    RucksackItem_TryWrap();
    val3 = *(u32 *)(arg0 + 0x7c);
    val = code_809E804_Sub_080CE184(arg0,arg1,0);
    SpriteAnimEngine_Sub_080CC728(val3,val,0x086678A0,0x160,1);
  }
  ScriptVM_End_Cinematic_State(*(int *)(arg0 + 8) + 0x00001AA8,100);
  SpriteAnimEngine_Sub_080A0A54(*(int *)(8 + arg0) + 0x00001CD4,1);
}

/* 0x08096EE8 (204B) | SpriteAnimEngine_Sub_08096EE8 (orig: func_08096EE8) | origin: wip | domain: SpriteAnimEngine | MEDIUM / graph_algebra */
void * SpriteAnimEngine_Sub_08096EE8(int param_1,u32 *param_2,int param_3,int param_4) {
  char cVar1;
  u32 *puVar2;
  u32 uVar3;
  u8 uVar4;
  u32 uStack_24;
  u32 uStack_20;
  u32 uStack_1c;
      s8 tmp_all_a1;
      u32 tmp_all_a0;
  uVar4 = 0;
  if ((u32)param_3 == 0) {
    if (param_4 < *(int *)(param_1 + 0x2BA0)) {
      puVar2 = (u32 *)func_0800FCDC(*(int *)(param_1 + 0x8c) + 0x1C38,param_4);
      *param_2 = *puVar2;
      uVar4 = 1;
      goto LAB_08096fa4;
    }
    func_0800EFEC(&uStack_24);
  }
  else {
    uVar3 = (s32)FarmHouse_GetFridge_C048(*(s16 *)(param_1 + 0x8c) + 500);
    puVar2 = (u32 *)func_0800B80C(uVar3,(param_3 + -1) * 8 + param_4);
    uStack_24 = *puVar2;
    cVar1 = FoodStack_IsEmpty(&uStack_24);
    if (cVar1 == '\0') {
      tmp_all_a0 = &uStack_20;
      tmp_all_a1 = (u32)uStack_1c;
      FoodStack_GetFood(&uStack_1c,&uStack_24);
      RucksackItem_Ctor(tmp_all_a0, tmp_all_a1);
      *param_2 = uStack_20;
      uVar4 = FoodStack_GetAmount(&uStack_24);
      uVar4 = uVar4 & 0xff;
      goto LAB_08096fa4;
    }
    func_0800EFEC(&uStack_20);
    uStack_24 = (u8)uStack_20;
  }
  *param_2 = (s32)uStack_24;
LAB_08096fa4:
  return (void *)uVar4;
}

/* 0x08097114 (408B) | SpriteAnimEngine_Sub_08097114 (orig: func_08097114) | origin: wip | domain: SpriteAnimEngine | MEDIUM / graph_algebra */
void SpriteAnimEngine_Sub_08097114(int param_1,u32 param_2) {
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  u32 uVar7;
  u32 *puVar8;
  u8 *pbVar9;
  u32 uStack_30;
  u8 auStack_2c [4];
  u32 uStack_28;
  u8 uStack_24;
  u8 uStack_23;
  u8 uStack_22;
  func_0800EFEC(&uStack_30);
  iVar2 = func_0800F09C(param_2);
  if (iVar2 == 0) {
    RucksackItem_GetFood(auStack_2c,param_2);
    iVar3 = func_0800DCB4(auStack_2c);
  }
  else {
    uStack_24 = RucksackItem_GetArticle(param_2);
    iVar3 = func_0800DF54();
  }
  uVar7 = 0;
  pbVar9 = (u8 *)(0x00002BA7 + param_1);
  do {
    SpriteAnimEngine_Sub_08096EE8(param_1,&uStack_30,0,uVar7);
    cVar1 = RucksackItem_IsEmpty(&uStack_30);
    if ((cVar1 == '\0') && (iVar4 = func_0800F09C(&uStack_30), iVar4 == iVar2)) {
      if (iVar2 == 0) {
        RucksackItem_GetFood(auStack_2c,&uStack_30);
        iVar4 = func_0800DCB4(auStack_2c);
      }
      else {
        uStack_23 = RucksackItem_GetArticle(&uStack_30);
        iVar4 = func_0800DF54();
      }
      if (iVar4 == iVar3) {
        *pbVar9 = *pbVar9 & ~(u8)(1 << (uVar7 & 0xff));
      }
    }
    uVar7 = uVar7 + 1;
  } while ((int)uVar7 < 8);
  if (iVar2 == 0) {
    iVar4 = 8;
    do {
      iVar5 = iVar4;
      if (iVar4 < 0) {
        iVar5 = iVar4 + 7;
      }
      iVar5 = iVar5 >> 3;
      uVar7 = iVar4 + iVar5 * -8;
      SpriteAnimEngine_Sub_08096EE8(param_1,&uStack_30,iVar5,uVar7);
      cVar1 = RucksackItem_IsEmpty(&uStack_30);
      if (cVar1 == '\0') {
        RucksackItem_GetFood(auStack_2c,&uStack_30);
        iVar6 = func_0800DCB4(auStack_2c);
        if (iVar3 == iVar6) {
          pbVar9 = (u8 *)(0x00002BA7 + param_1 + iVar5);
          *pbVar9 = *pbVar9 & ~(u8)(1 << (uVar7 & 0xff));
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x48);
  }
  iVar4 = 0;
  puVar8 = (u32 *)(0x00002BB0 + param_1);
  do {
    uStack_30 = *puVar8;
    cVar1 = RucksackItem_IsEmpty(&uStack_30);
    if ((cVar1 == '\0') && (iVar5 = func_0800F09C(&uStack_30), iVar5 == iVar2)) {
      if (iVar2 == 0) {
        RucksackItem_GetFood(auStack_2c,&uStack_30);
        iVar5 = func_0800DCB4(auStack_2c);
      }
      else {
        uStack_22 = RucksackItem_GetArticle(&uStack_30);
        iVar5 = func_0800DF54();
      }
      if (iVar5 == iVar3) {
        func_0800EFEC(&uStack_28);
        *puVar8 = uStack_28;
        code_0803EE94_7868_Sub_080CBA60(*(u32 *)(param_1 + 0x78),iVar4);
      }
    }
    puVar8 = puVar8 + 1;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 8);
}

/* 0x080989DC (780B) | SpriteAnimEngine_Sub_080989DC (orig: func_080989DC) | origin: wip | domain: SpriteAnimEngine | HIGH / fomt_studio_table */
void SpriteAnimEngine_Sub_080989DC(int param_1,int param_2) {
  u32 *puVar1;
  u16 uVar2;
  short sVar3;
  u32 uVar4;
  u32 uVar5;
  u32 uVar6;
  u32 uVar7;
  int iVar8;
  int iVar9;
  u32 uVar10;
  u16 *puVar11;
  u16 *puVar12;
  u32 *puVar13;
  u32 *puVar14;
  u8 auStack_a0 [4];
  u32 uStack_9c;
  u32 uStack_98;
  u32 uStack_94;
  u32 auStack_90 [2];
  u32 auStack_88 [2];
  int aiStack_80 [2];
  u32 auStack_78 [2];
  u32 auStack_70 [8];
  u8 uStack_50;
  u8 auStack_4f [3];
  u16 *apuStack_4c [2];
  u16 **ppuStack_44;
  int *piStack_40;
  u8 *puStack_3c;
  u32 *puStack_38;
  u16 *puStack_34;
  u32 *puStack_30;
  int *piStack_2c;
  u32 *puStack_28;
  u32 *puStack_24;
  hardware_Sub_080CD620();
  iVar8 = *(int *)(param_1 + 0x78);
  if ((iVar8 != 0) && (iVar8 != 0)) {
    func_080D3914(iVar8,3,*(u32 *)(*(int *)(iVar8 + 0x210) + 8));
  }
  *(u32 *)(param_1 + 0x78) = 0;
  uVar4 = CppRuntime_builtin_new(0x29c);
  uVar5 = hardware_GetField_0x00_8910(param_1);
  uVar6 = hardware_GetField_0x00_8940(param_1);
  auStack_a0[0] = 0;
  iVar8 = code_809E804_85BC_Ctor(uVar4,uVar5,uVar6,8,0x08101020);
  iVar9 = *(int *)(param_1 + 0x78);
  puStack_3c = auStack_a0;
  if ((iVar8 != iVar9) && (iVar9 != 0)) {
    func_080D3914(iVar9,3,*(u32 *)(*(int *)(iVar9 + 0x210) + 8));
  }
  *(int *)(param_1 + 0x78) = iVar8;
  code_809E804_Sub_080CB090(*(u32 *)(param_1 + 0x78));
  uVar10 = 0;
  puStack_34 = (u16 *)(param_2 + 2);
  puStack_38 = auStack_90;
  puStack_30 = auStack_88;
  piStack_2c = aiStack_80;
  puStack_28 = auStack_78;
  piStack_40 = (int *)(param_1 + 0xf8);
  ppuStack_44 = apuStack_4c;
  puStack_24 = auStack_70;
  puVar11 = 0x08100AC2;
  do {
    if (((int)(u32)*(u16 *)(param_1 + 0x330) >> (uVar10 & 0xff) & 1U) != 0) {
      SpriteAnimEngine_Sub_080CB304(*(u32 *)(param_1 + 0x78),uVar10,0x086678A0,*puVar11,1);
    }
    puVar11 = puVar11 + 1;
    uVar10 = uVar10 + 1;
  } while ((int)uVar10 < 8);
  iVar8 = *(int *)(param_1 + 0x7c);
  if ((iVar8 != 0) && (iVar8 != 0)) {
    func_080D3914(iVar8,3,*(u32 *)(*(int *)(iVar8 + 0x210) + 8));
  }
  *(int *)(param_1 + 0x7c) = 0;
  uVar4 = CppRuntime_builtin_new(0x32c);
  uVar5 = hardware_GetField_0x00_8910(param_1);
  uVar6 = hardware_GetField_0x00_8940(param_1);
  *puStack_3c = 0;
  iVar8 = code_809E804_85AC_Ctor(uVar4,uVar5,uVar6,8,0x0810102C);
  iVar9 = *(int *)(param_1 + 0x7c);
  if ((iVar8 != iVar9) && (iVar9 != 0)) {
    func_080D3914(iVar9,3,*(u32 *)(*(int *)(iVar9 + 0x210) + 8));
  }
  *(int *)(param_1 + 0x7c) = iVar8;
  code_809E804_Sub_080CC310(*(u32 *)(param_1 + 0x7c));
  func_0800EFEC(&uStack_9c);
  *(u8 *)(param_1 + 0x0000035D) = 0;
  *(u8 *)(param_1 + 0x35c) = 0;
  uVar10 = 0;
  puVar13 = (u32 *)(param_1 + 0x00002BB0);
  puVar12 = puStack_34;
  do {
    uVar7 = (u32)*puVar12;
    if (uVar7 == 0) {
      func_0800EFEC(&uStack_98);
      *puVar13 = uStack_98;
    }
    else {
      if (uVar7 < 0xac) {
        func_0800DCA8(&uStack_94,uVar7 - 1);
        RucksackItem_Ctor(&uStack_98,(u32)uStack_94);
        uStack_9c = uStack_98;
        func_0800DCA8(&uStack_98,*puVar12 - 1);
        uVar2 = Food_GetIconId(&uStack_98);
      }
      else {
        func_0800DF50(&uStack_50,*puVar12 - 0xac);
        RucksackItem_Ctor_F040(&uStack_98,uStack_50);
        uStack_9c = uStack_98;
        func_0800DF50(auStack_4f,*puVar12 - 0xac);
        uVar2 = Article_GetIconId(auStack_4f);
      }
      SpriteAnimEngine_Sub_080CC728(*(u32 *)(param_1 + 0x7c),uVar10,0x086678A0,uVar2,1);
      *puVar13 = uStack_9c;
      sVar3 = SpriteAnimEngine_Sub_08096FB4(param_1,&uStack_9c);
      if (sVar3 == -1) {
        *(u8 *)(param_1 + 0x0000035D) = 1;
      }
      else {
        *(u8 *)(param_1 + 0x35c) = (u8)(1 << (uVar10 & 0xff)) | *(u8 *)(param_1 + 0x35c);
      }
    }
    puVar13 = puVar13 + 1;
    puVar12 = puVar12 + 1;
    uVar10 = uVar10 + 1;
  } while ((int)uVar10 < 8);
  auStack_90[0] = 0;
  *(u16 *)(puStack_38 + 1) = 0;
  auStack_88[0] = 0;
  *(u16 *)(puStack_30 + 1) = 0;
  aiStack_80[0] = 0;
  *(u16 *)(piStack_2c + 1) = 0;
  auStack_78[0] = 0;
  *(u16 *)(puStack_28 + 1) = 0;
  iVar8 = *piStack_40;
  func_080D3918(ppuStack_44,piStack_40,1,*(u32 *)(iVar8 + 0xc));
  func_080D3918(auStack_70,piStack_40,*apuStack_4c[0],*(u32 *)(iVar8 + 0x10));
  LibC_memcpy(puStack_24,puStack_24,0x20);
  puVar1 = puStack_24;
  puVar13 = puStack_38;
  uVar4 = puStack_24[1];
  uVar5 = puStack_24[2];
  puVar14 = puStack_24 + 3;
  *puStack_38 = *puStack_24;
  puVar13[1] = uVar4;
  puVar13[2] = uVar5;
  uVar4 = puVar1[4];
  uVar5 = puVar1[5];
  puVar13[3] = *puVar14;
  puVar13[4] = uVar4;
  iVar8 = aiStack_80[0];
  puVar13[5] = uVar5;
  uVar4 = puVar1[7];
  puVar13[6] = puVar1[6];
  puVar13[7] = uVar4;
  iVar9 = hardware_Sub_080074C0(param_1 + 800,*(u32 *)(param_1 + 0x324));
  uVar2 = 0;
  if (aiStack_80[0] != 0) {
    uVar2 = (u16)piStack_2c[1];
  }
  hardware_HW_DMA3SAD(iVar8,iVar9 * 0x20 + 0x05000200,uVar2);
}

/* 0x0809B05C (40B) | SpriteAnimEngine_Sub_0809B05C (orig: func_0809B05C) | origin: wip | domain: SpriteAnimEngine | MEDIUM / graph_algebra */
u32 SpriteAnimEngine_Sub_0809B05C(int param_1) {
  u32 *puVar1;
  puVar1 = (u32 *)(param_1 + (*(int *)(param_1 + 8) + -1) * 8 + 0xc);
  if (*puVar1 <= *(u32 *)(param_1 + 0x120)) {
    puVar1 = (u32 *)(param_1 + 0x120);
  }
  return *puVar1;
}

/* 0x0809B084 (44B) | SpriteAnimEngine_Sub_0809B084 (orig: func_0809B084) | origin: wip | domain: SpriteAnimEngine | MEDIUM / graph_algebra */
u32 SpriteAnimEngine_Sub_0809B084(int param_1) {
  int iVar1;
  u32 *puVar2;
  iVar1 = param_1 + (*(int *)(param_1 + 8) + -1) * 8 + 0xc;
  puVar2 = (u32 *)(iVar1 + 4);
  if (*(u32 *)(iVar1 + 4) <= *(u32 *)(param_1 + 0x124)) {
    puVar2 = (u32 *)(param_1 + 0x124);
  }
  return *puVar2;
}

/* 0x0809B0B0 (40B) | SpriteAnimEngine_Sub_0809B0B0 (orig: func_0809B0B0) | origin: wip | domain: SpriteAnimEngine | MEDIUM / graph_algebra */
u32 SpriteAnimEngine_Sub_0809B0B0(int param_1) {
  u32 *puVar1;
  puVar1 = (u32 *)((int *)(param_1 + 0xfc) + (*(int *)(param_1 + 0xfc) + -1) * 2 + 1);
  if (*puVar1 <= *(u32 *)(param_1 + 0x128)) {
    puVar1 = (u32 *)(param_1 + 0x128);
  }
  return *puVar1;
}

/* 0x0809B0D8 (44B) | SpriteAnimEngine_Sub_0809B0D8 (orig: func_0809B0D8) | origin: wip | domain: SpriteAnimEngine | MEDIUM / graph_algebra */
u32 SpriteAnimEngine_Sub_0809B0D8(int param_1) {
  int *piVar1;
  u32 *puVar2;
  piVar1 = (int *)(param_1 + 0xfc);
  puVar2 = (u32 *)(piVar1 + (*piVar1 + -1) * 2 + 2);
  if ((u32)piVar1[(*piVar1 + -1) * 2 + 2] <= *(u32 *)(param_1 + 300)) {
    puVar2 = (u32 *)(param_1 + 300);
  }
  return *puVar2;
}

/* 0x0809CE1C (8B) | SpriteAnimEngine_Sub_0809CE1C (orig: func_0809CE1C) | origin: pure | domain: SpriteAnimEngine | MEDIUM / graph_algebra */
u32 SpriteAnimEngine_Sub_0809CE1C(u8 *a, int b) { return *(u32 *)(a + (b << 3)); }

/* 0x0809CE24 (12B) | SpriteAnimEngine_Sub_0809CE24 (orig: func_0809CE24) | origin: pure | domain: SpriteAnimEngine | MEDIUM / graph_algebra */
u32 SpriteAnimEngine_Sub_0809CE24(u8 *a, int b) { b <<= 3; a += 4; return *(u32 *)(a + b); }

/* 0x0809CE30 (76B) | SpriteAnimEngine_Sub_0809CE30 (orig: func_0809CE30) | origin: wip | domain: SpriteAnimEngine | MEDIUM / graph_algebra */
void * SpriteAnimEngine_Sub_0809CE30(u32 param_1,int param_2) {
  u32 uVar1;

  if (5 < param_2 - 0x35U) goto case_0809CE60;
  switch(*(u32 *)(((const u32 *)0x0809ce44) + (param_2 - 0x35U) * 4) & 0xfffffffe) {
  case 0x809ce48:
  case 0x809ce60:
case_0809CE60:
    uVar1 = 0xfc;
    break;
  case 0x809ce64:
    uVar1 = 0xf9;
    break;
  case 0x809ce68:
    uVar1 = 0xfe;
    break;
  case 0x809ce6c:
    uVar1 = 0xfd;
    break;
  case 0x809ce70:
    uVar1 = 0xfa;
    break;
  case 0x809ce74:
    uVar1 = 0xfb;
  }
  return (void *)uVar1;
}

/* 0x0809CE7C (16B) | SpriteAnimEngine_Sub_0809CE7C (orig: func_0809CE7C) | origin: pure | domain: SpriteAnimEngine | MEDIUM / graph_algebra */
extern const u32 g_08103A18[];
u32 SpriteAnimEngine_Sub_0809CE7C(void *arg0, u32 arg1) {
    return g_08103A18[arg1];
}

/* 0x080A0A1C (56B) | SpriteAnimEngine_Sub_080A0A1C (orig: func_080A0A1C) | origin: wip | domain: SpriteAnimEngine | MEDIUM / graph_algebra */
void SpriteAnimEngine_Sub_080A0A1C(u8 *param_1,int param_2) {
  u32 *puVar1;
  u32 auStack_10 [2];
  auStack_10[0] = (*param_1 & 0x3f) + param_2;
  auStack_10[1] = 0x3f;
  puVar1 = auStack_10;
  if (0x3f < auStack_10[0]) {
    puVar1 = auStack_10 + 1;
  }
  *param_1 = *param_1 & 0xc0 | (u8)*puVar1 & 0x3f;
}

/* 0x080A0A54 (60B) | SpriteAnimEngine_Sub_080A0A54 (orig: func_080A0A54) | origin: wip | domain: SpriteAnimEngine | MEDIUM / graph_algebra */
void SpriteAnimEngine_Sub_080A0A54(u16 *param_1,int param_2) {
  u32 *puVar1;
  u32 auStack_10 [2];
  auStack_10[0] = ((*param_1 & 0x1fff) >> 6) + param_2;
  auStack_10[1] = 0x7f;
  puVar1 = auStack_10;
  if (0x7f < auStack_10[0]) {
    puVar1 = auStack_10 + 1;
  }
  *param_1 = (u16)0xFFFFE03F & *param_1 | (u16)((*puVar1 & 0x7f) << 6);
}

/* 0x080AC674 (488B) | SpriteAnimEngine_Sub_080AC674 (orig: func_080AC674) | origin: wip | domain: SpriteAnimEngine | HIGH / fomt_studio_table */
u32 SpriteAnimEngine_Sub_080AC674(int *param_1,int *param_2) {
  int iVar1;
  u8 uVar2;
  int iVar3;
  u32 uVar4;
  int *piVar5;
  u16 *puVar6;
  u32 *puVar7;
  int iVar8;
  int iVar9;
  iVar3 = *param_2;
  *param_2 = 0;
  *param_1 = iVar3;
  param_1[0x65] = 0;
  iVar3 = 0x15;
  piVar5 = param_1 + 0x8e;
  do {
    *(u8 *)piVar5 = 0xff;
    *(u8 *)((int)piVar5 + 1) = 0;
    *(u8 *)((int)piVar5 + 2) = 0;
    *(u8 *)((int)piVar5 + 3) = 1;
    piVar5 = piVar5 + 0x21;
    iVar3 = iVar3 + -1;
  } while (iVar3 != -1);
  iVar8 = (int)param_1 + 0x00000B78 + 0x198;
  iVar9 = 0xc;
  iVar3 = 0x00000C14 + 0x198;
  iVar1 = 0x00000C15 + 0x198;
  puVar6 = (u16 *)((int)param_1 + 0x0000102C);
  do {
    hardware_Sub_08007128(iVar8);
    uVar4 = hardware_Sub_0800736C(iVar8);
    *(u32 *)(iVar8 + 4) = uVar4;
    uVar2 = hardware_Sub_080074C0(iVar8);
    *(u8 *)(iVar8 + 8) = uVar2;
    *(u8 *)(iVar8 + 9) = 0xff;
    *(u8 *)(iVar8 + 10) = 0;
    iVar8 = iVar8 + 0xc;
    iVar9 = iVar9 + -1;
  } while (iVar9 != -1);
  *(u8 *)((int)param_1 + iVar3) = 0;
  *(u8 *)((int)param_1 + iVar1) = 0;
  code_0803EE94_79C8_Ctor(param_1 + 0x36c,0x0858BA28);
  code_0803EE94_79C8_Ctor(param_1 + 0x378,0x086678A0);
  code_0803EE94_79C8_Ctor(param_1 + 900,0x0871EF00);
  code_0803EE94_79C8_Ctor(param_1 + 0x390,0x086FAA80);
  code_0803EE94_79C8_Ctor(param_1 + 0x39c,0x0871D51C);
  code_0803EE94_79C8_Ctor(param_1 + 0x3a8,0x0871EDD4);
  code_0803EE94_79C8_Ctor(param_1 + 0x3b4,0x0871ECAC);
  code_0803EE94_79C8_Ctor(param_1 + 0x3c0,0x08667060);
  code_0803EE94_79C8_Ctor(param_1 + 0x3cc,0x08727A74);
  code_0803EE94_79C8_Ctor(param_1 + 0x3d8,0x08726CCC);
  code_0803EE94_79C8_Ctor(param_1 + 0x3e4,0x08727368);
  code_0803EE94_79C8_Ctor(param_1 + 0x3f0,0x08725DA0);
  code_0803EE94_79C8_Ctor(param_1 + 0x3fc,0x086F2FAC);
  param_1[0x408] = 0;
  param_1[0x409] = 0;
  puVar7 = (u32 *)((int)param_1 + 0x00001028);
  *puVar7 = 0;
  *puVar6 = 0;
  puVar6[1] = 0;
  *(u8 *)((int)puVar7 + 9) = 0;
  piVar5 = param_1;
  while (piVar5 = piVar5 + 1, piVar5 != param_1 + 0x65) {
    *piVar5 = 0;
  }
  iVar3 = *param_2;
  if (iVar3 != 0) {
    func_080D3914(iVar3,3,*(u32 *)(*(int *)(iVar3 + 0x90) + 8));
  }
  return (param_1);
}

/* 0x080ADF6C (1388B) | SpriteAnimEngine_Create_DF6C (orig: func_080ADF6C) | origin: wip | domain: SpriteAnimEngine | HIGH / vtable_algebra */
u32 SpriteAnimEngine_Create_DF6C(int self,u32 *param_2) {
  int iVar1;
  int iVar2;
  u32 uVar3;
  u32 *puVar4;
  u32 *puVar5;
  u32 *puVar6;
  u32 *puVar7;
  u32 *puVar8;
  u32 *puVar9;
  u32 *puVar10;
  u8 auStack_54 [4];
  u8 auStack_50 [4];
  u32 *puStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  puStack_4c = param_2;
  hardware_Create();
  *(u32 *)(self + 4) = 0x080E8500;
  iVar2 = 2;
  do {
    iVar2 = iVar2 + -1;
  } while (iVar2 != -1);
  uVar3 = CppRuntime_builtin_new(4);
  hardware_SetField_0x00_835C(auStack_54);
  hardware_SetField_0x00(auStack_50);
  uVar3 = hardware_5BB4_Sub_08050CC0(uVar3,0,0x18,0,0,auStack_54,auStack_50);
  *(u32 *)(self + 0x418) = uVar3;
  hardware_Sub_08007714(auStack_50,2);
  hardware_Sub_08008364(auStack_54,2);
  uVar3 = CppRuntime_builtin_new(0x30);
  uVar3 = code_0803EE94_79C8_Ctor(uVar3,0x0873E5B0);
  *(u32 *)(self + 0x0000041C) = uVar3;
  uVar3 = CppRuntime_builtin_new(0x30);
  uVar3 = code_0803EE94_79C8_Ctor(uVar3,0x0873DE44);
  *(u32 *)(self + 0x420) = uVar3;
  uVar3 = CppRuntime_builtin_new(0x30);
  uVar3 = code_0803EE94_79C8_Ctor(uVar3,0x087405A0);
  *(u32 *)(self + 0x00000424) = uVar3;
  uVar3 = CppRuntime_builtin_new(0x30);
  uVar3 = code_0803EE94_79C8_Ctor(uVar3,0x0858BA28);
  *(u32 *)(self + 0x428) = uVar3;
  uVar3 = CppRuntime_builtin_new(0x30);
  uVar3 = code_0803EE94_79C8_Ctor(uVar3,0x0873AE54);
  *(u32 *)(self + 0x0000042C) = uVar3;
  uVar3 = CppRuntime_builtin_new(0x30);
  uVar3 = code_0803EE94_79C8_Ctor(uVar3,0x0871D51C);
  *(u32 *)(self + 0x430) = uVar3;
  uVar3 = CppRuntime_builtin_new(0x30);
  uVar3 = code_0803EE94_79C8_Ctor(uVar3,0x0872BE64);
  *(u32 *)(self + 0x00000434) = uVar3;
  uVar3 = CppRuntime_builtin_new(0x30);
  uVar3 = code_0803EE94_79C8_Ctor(uVar3,0x0873D6D8);
  *(u32 *)(self + 0x438) = uVar3;
  puVar4 = (u32 *)CppRuntime_builtin_new(0x10);
  uVar3 = hardware_GetField_0x00_8918(self);
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0x080E5B80;
  hardware_Sub_08009300(puVar4 + 3,uVar3);
  iVar2 = 0x0000043C;
  *(u32 **)(self + 0x0000043C) = puVar4;
  *(u32 *)(self + 0x460) = 0;
  *(u32 *)(self + iVar2 + 0x28) = 0;
  *(u32 *)(self + 0x468) = 0;
  *(u16 *)(self + 0x46c) = 0;
  puVar4 = (u32 *)(self + iVar2 + 0x34);
  *puVar4 = 0;
  *(u16 *)(puVar4 + 1) = 0;
  *(u32 *)(self + 0x478) = 0;
  *(u16 *)(self + 0x47c) = 0;
  puVar4 = (u32 *)(self + iVar2 + 0x44);
  *puVar4 = 0;
  *(u16 *)(puVar4 + 1) = 0;
  *(u32 *)(self + 0x488) = 0;
  *(u32 *)(self + iVar2 + 0x50) = 0;
  *(u32 *)(self + 0x490) = 0;
  *(u16 *)(self + 0x494) = 0;
  puVar4 = (u32 *)(self + iVar2 + 0x5c);
  *puVar4 = 0;
  *(u16 *)(puVar4 + 1) = 0;
  *(u32 *)(self + 0x4a0) = 0;
  *(u16 *)(self + 0x4a4) = 0;
  puVar4 = (u32 *)(self + iVar2 + 0x6c);
  *puVar4 = 0;
  *(u16 *)(puVar4 + 1) = 0;
  *(u32 *)(self + 0x4b0) = 0;
  *(u32 *)(self + iVar2 + 0x78) = 0;
  *(u32 *)(self + 0x4b8) = 0;
  *(u16 *)(self + 0x4bc) = 0;
  puVar4 = (u32 *)(self + iVar2 + 0x84);
  *puVar4 = 0;
  *(u16 *)(puVar4 + 1) = 0;
  *(u32 *)(self + 0x4c8) = 0;
  *(u16 *)(self + 0x4cc) = 0;
  puVar4 = (u32 *)(self + iVar2 + 0x94);
  *puVar4 = 0;
  *(u16 *)(puVar4 + 1) = 0;
  *(u32 *)(self + 0x4d8) = 0;
  *(u32 *)(self + iVar2 + 0xa0) = 0;
  *(u32 *)(self + 0x4e0) = 0;
  *(u16 *)(self + 0x4e4) = 0;
  puVar4 = (u32 *)(self + iVar2 + 0xac);
  *puVar4 = 0;
  *(u16 *)(puVar4 + 1) = 0;
  *(u32 *)(self + 0x4f0) = 0;
  *(u16 *)(self + 0x4f4) = 0;
  puVar4 = (u32 *)(self + iVar2 + 0xbc);
  *puVar4 = 0;
  *(u16 *)(puVar4 + 1) = 0;
  *(u32 *)(self + 0x500) = 0;
  *(u32 *)(self + iVar2 + 200) = 0;
  *(u32 *)(self + 0x508) = 0;
  *(u16 *)(self + 0x50c) = 0;
  puVar4 = (u32 *)(self + iVar2 + 0xd4);
  *puVar4 = 0;
  *(u16 *)(puVar4 + 1) = 0;
  *(u32 *)(self + 0x518) = 0;
  *(u16 *)(self + 0x51c) = 0;
  puVar4 = (u32 *)(self + iVar2 + 0xe4);
  *puVar4 = 0;
  *(u16 *)(puVar4 + 1) = 0;
  *(u32 *)(self + 0x528) = 0;
  *(u32 *)(self + iVar2 + 0xf0) = 0;
  *(u32 *)(self + 0x530) = 0;
  *(u16 *)(self + 0x534) = 0;
  puVar4 = (u32 *)(self + iVar2 + 0xfc);
  *puVar4 = 0;
  *(u16 *)(puVar4 + 1) = 0;
  *(u32 *)(self + 0x540) = 0;
  *(u16 *)(self + 0x544) = 0;
  puVar4 = (u32 *)(self + iVar2 + 0x10c);
  *puVar4 = 0;
  *(u16 *)(puVar4 + 1) = 0;
  puVar7 = (u32 *)(self + 0x550);
  iVar2 = 4;
  puVar9 = (u32 *)(self + 0x000007CC);
  puVar10 = (u32 *)(self + 0x000007D4);
  puVar5 = (u32 *)(0x000007DC + self);
  puVar8 = (u32 *)(0x000007CC + 0x28 + self);
  puVar4 = (u32 *)(0x000007D4 + 0x28 + self);
  puVar6 = (u32 *)(0x00000804 + self);
  iStack_48 = self + 0x890;
  iStack_44 = self + 0x00000898;
  iStack_40 = self + 0x8a0;
  iStack_3c = self + 0x000008A8;
  iStack_38 = self + 0x8b0;
  iStack_34 = self + 0x000008B8;
  iStack_30 = self + 0x8c0;
  iStack_2c = self + 0x000008C8;
  iStack_28 = self + 0x8d0;
  iStack_24 = self + 0x000008D8;
  do {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != -1);
  puVar7 = (u32 *)(self + 0x00000564);
  iVar2 = 4;
  do {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != -1);
  iVar2 = 4;
  puVar7 = (u32 *)(self + 0x578);
  do {
    *puVar7 = 0;
    *(u16 *)(puVar7 + 1) = 0;
    puVar7[2] = 0;
    *(u16 *)(puVar7 + 3) = 0;
    puVar7[4] = 0;
    *(u16 *)(puVar7 + 5) = 0;
    puVar7[6] = 0;
    *(u16 *)(puVar7 + 7) = 0;
    puVar7 = puVar7 + 8;
    iVar2 = iVar2 + -1;
  } while (iVar2 != -1);
  puVar7 = (u32 *)(self + 0x618);
  iVar2 = 4;
  do {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != -1);
  puVar7 = (u32 *)(self + 0x0000062C);
  iVar2 = 4;
  do {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != -1);
  iVar2 = 4;
  puVar7 = (u32 *)(self + 0x640);
  do {
    *puVar7 = 0;
    *(u16 *)(puVar7 + 1) = 0;
    puVar7[2] = 0;
    *(u16 *)(puVar7 + 3) = 0;
    puVar7[4] = 0;
    *(u16 *)(puVar7 + 5) = 0;
    puVar7[6] = 0;
    *(u16 *)(puVar7 + 7) = 0;
    puVar7 = puVar7 + 8;
    iVar2 = iVar2 + -1;
  } while (iVar2 != -1);
  puVar7 = (u32 *)(self + 0x6e0);
  iVar2 = 4;
  do {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != -1);
  puVar7 = (u32 *)(self + 0x000006F4);
  iVar2 = 4;
  do {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != -1);
  puVar7 = (u32 *)(self + 0x708);
  iVar2 = 4;
  do {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != -1);
  iVar2 = 4;
  puVar7 = (u32 *)(self + 0x0000071C);
  do {
    *puVar7 = 0;
    *(u16 *)(puVar7 + 1) = 0;
    puVar7[2] = 0;
    *(u16 *)(puVar7 + 3) = 0;
    puVar7[4] = 0;
    *(u16 *)(puVar7 + 5) = 0;
    puVar7[6] = 0;
    *(u16 *)(puVar7 + 7) = 0;
    iVar1 = 0x000007BC;
    puVar7 = puVar7 + 8;
    iVar2 = iVar2 + -1;
  } while (iVar2 != -1);
  *(u32 *)(self + 0x000007BC) = 0;
  *(u32 *)(self + 0x7c0) = 0;
  puVar7 = (u32 *)(self + iVar1 + 8);
  *puVar7 = 0;
  *(u16 *)(puVar7 + 1) = 0;
  *puVar9 = 0;
  *(u16 *)(puVar9 + 1) = 0;
  *puVar10 = 0;
  *(u16 *)(puVar10 + 1) = 0;
  *puVar5 = 0;
  *(u16 *)(puVar5 + 1) = 0;
  *(u32 *)(self + iVar1 + 0x28) = 0;
  *(u32 *)(self + 0x7e8) = 0;
  puVar5 = (u32 *)(self + iVar1 + 0x30);
  *puVar5 = 0;
  *(u16 *)(puVar5 + 1) = 0;
  *puVar8 = 0;
  *(u16 *)(puVar8 + 1) = 0;
  *puVar4 = 0;
  *(u16 *)(puVar4 + 1) = 0;
  *puVar6 = 0;
  *(u16 *)(puVar6 + 1) = 0;
  hardware_Sub_08008B54(self + 0x0000080C,0);
  hardware_Sub_08008B54(self + 0x810,1);
  hardware_Sub_08008B54(self + 0x00000814,2);
  hardware_Sub_08008B54(self + 0x00000818,3);
  hardware_Sub_08008B54(self + 0x0000081C,4);
  *(u32 *)(self + 0x820) = 0;
  *(u32 *)(self + 0x824) = 0;
  *(u32 *)(self + 0x828) = 0x080E5B70;
  puVar4 = (u32 *)(self + 0x0000082C);
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0x080E5B60;
  iVar2 = self + 0x00000888;
  hardware_Sub_08007874(iVar2);
  *(u32 *)(iVar2 + 4) = 0;
  hardware_Sub_08007874(iStack_48);
  *(u32 *)(iStack_48 + 4) = 0;
  hardware_Sub_08007874(iStack_44);
  *(u32 *)(iStack_44 + 4) = 0;
  hardware_Sub_08007874(iStack_40);
  *(u32 *)(iStack_40 + 4) = 0;
  hardware_Sub_08007874(iStack_3c);
  *(u32 *)(iStack_3c + 4) = 0;
  hardware_Sub_08007874(iStack_38);
  *(u32 *)(iStack_38 + 4) = 0;
  hardware_Sub_08007874(iStack_34);
  *(u32 *)(iStack_34 + 4) = 0;
  hardware_Sub_08007874(iStack_30);
  *(u32 *)(iStack_30 + 4) = 0;
  hardware_Sub_08007874(iStack_2c);
  *(u32 *)(iStack_2c + 4) = 0;
  hardware_Sub_08007874(iStack_28);
  *(u32 *)(iStack_28 + 4) = 0;
  hardware_Sub_08007874(iStack_24);
  *(u32 *)(iStack_24 + 4) = 0;
  *(u32 *)(self + 0x910) = 0;
  *(u32 *)(self + 0x930) = *puStack_4c;
  *(u8 *)(self + 0x938) = *(u8 *)(puStack_4c + 1);
  return (self);
}

/* 0x080B3C90 (56B) | SpriteAnimEngine_Sub_080B3C90 (orig: func_080B3C90) | origin: pure | domain: SpriteAnimEngine | MEDIUM / graph_algebra */
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
extern u32 LibC_memcpy();
extern u32 LibC_strlen();
u32 SpriteAnimEngine_Sub_080B3C90(int arg0) {
  u32 val;
  u32 val2;
  u32 z_pair;
  val = 0x081078BC;
  val2 = LibC_strlen(0x081078BC);
  if (0xc < val2) {
    val2 = 0xc;
  }
  LibC_memcpy(arg0,val,val2);
  *(u8 *)(arg0 + val2) = 0;
  *(u8 *)(arg0 + 0x10) = (z_pair = 0);
  *(u8 *)(arg0 + 0x11) = z_pair;
  return arg0;
}

/* 0x080B3CC8 (2072B) | SpriteAnimEngine_Create_3CC8 (orig: func_080B3CC8) | origin: wip | domain: SpriteAnimEngine | HIGH / vtable_algebra */
u32 SpriteAnimEngine_Create_3CC8(int self,int param_2) {
  u16 uVar1;
  int iVar2;
  u32 uVar3;
  u32 *puVar4;
  u32 *puVar5;
  u16 *puVar6;
  int iVar7;
  u8 auStack_84 [4];
  u8 auStack_80 [4];
  u32 *puStack_7c;
  u32 *puStack_78;
  u32 *puStack_74;
  u32 *puStack_70;
  u32 *puStack_6c;
  u32 *puStack_68;
  u32 *puStack_64;
  u32 *puStack_60;
  u32 *puStack_5c;
  u32 *puStack_58;
  u32 *puStack_54;
  u32 *puStack_50;
  u32 *puStack_4c;
  u32 *puStack_48;
  u32 *puStack_44;
  u32 *puStack_40;
  u32 *puStack_3c;
  u32 *puStack_38;
  u32 *puStack_34;
  u32 *puStack_30;
  u32 *puStack_2c;
  u32 *puStack_28;
  u32 *puStack_24;
  hardware_Create();
  *(u32 *)(self + 4) = 0x080E851C;
  *(u8 *)(self + 8) = 0;
  iVar2 = 5;
  do {
    iVar2 = iVar2 + -1;
  } while (iVar2 != -1);
  hardware_Sub_08008B54(self + 0x00000704,0);
  hardware_Sub_08008B54(self + 0x708,1);
  hardware_Sub_08008B54(self + 0x0000070C,2);
  hardware_Sub_08008B54(self + 0x710,3);
  hardware_Sub_08008B54(self + 0x00000714,4);
  uVar3 = CppRuntime_builtin_new(4);
  hardware_SetField_0x00_835C(auStack_84);
  hardware_SetField_0x00(auStack_80);
  uVar3 = hardware_5BB4_Sub_08050CC0(uVar3,0,0xf,0,0,auStack_84,auStack_80);
  *(u32 *)(self + 0x718) = uVar3;
  hardware_Sub_08007714(auStack_80,2);
  hardware_Sub_08008364(auStack_84,2);
  iVar2 = self + 0x0000071C;
  hardware_Sub_08007128(iVar2);
  *(u32 *)(iVar2 + 4) = 0;
  iVar2 = self + 0x00000724;
  hardware_Sub_08007128(iVar2);
  *(u32 *)(iVar2 + 4) = 0;
  iVar2 = self + 0x0000072C;
  iVar7 = 1;
  puVar5 = (u32 *)(0x000008DC + self);
  puStack_7c = (u32 *)(self + 0x000008E4);
  puStack_78 = (u32 *)(self + 0x000008EC);
  puStack_74 = (u32 *)(self + 0x00000904);
  puStack_6c = (u32 *)(self + 0x0000090C);
  puStack_64 = (u32 *)(self + 0x00000914);
  puStack_44 = (u32 *)(self + 0x0000097C);
  puStack_40 = (u32 *)(self + 0x00000984);
  puStack_3c = (u32 *)(self + 0x0000098C);
  puStack_38 = (u32 *)(self + 0x000009A4);
  puStack_34 = (u32 *)(self + 0x000009AC);
  puStack_30 = (u32 *)(self + 0x000009B4);
  puStack_2c = (u32 *)(self + 0x000009CC);
  puStack_28 = (u32 *)(self + 0x000009D4);
  puStack_24 = (u32 *)(self + 0x000009DC);
  puStack_70 = (u32 *)(self + 0x00000A8C);
  puStack_68 = (u32 *)(self + 0x00000A94);
  puStack_60 = (u32 *)(self + 0x00000A9C);
  puStack_5c = (u32 *)(self + 0xab0);
  puStack_58 = (u32 *)(self + 0x00000AB8);
  puStack_54 = (u32 *)(self + 0xac0);
  puStack_50 = (u32 *)(self + 0x00000AD4);
  puStack_4c = (u32 *)(self + 0x00000ADC);
  puStack_48 = (u32 *)(self + 0x00000AE4);
  do {
    hardware_Sub_08007128(iVar2);
    *(u32 *)(iVar2 + 4) = 0;
    iVar2 = iVar2 + 8;
    iVar7 = iVar7 + -1;
  } while (iVar7 != -1);
  iVar2 = self + 0x0000073C;
  iVar7 = 7;
  do {
    hardware_Sub_08007128(iVar2);
    *(u32 *)(iVar2 + 4) = 0;
    iVar2 = iVar2 + 8;
    iVar7 = iVar7 + -1;
  } while (iVar7 != -1);
  uVar3 = CppRuntime_builtin_new(0x30);
  uVar3 = code_0803EE94_79C8_Ctor(uVar3,0x0858BA28);
  iVar2 = 0x0000077C;
  *(u32 *)(self + 0x0000077C) = uVar3;
  uVar3 = CppRuntime_builtin_new(0x30);
  uVar3 = code_0803EE94_79C8_Ctor(uVar3,0x0873DE44);
  *(u32 *)(self + 0x780) = uVar3;
  uVar3 = CppRuntime_builtin_new(0x30);
  uVar3 = code_0803EE94_79C8_Ctor(uVar3,0x0871D51C);
  *(u32 *)(self + 0x00000784) = uVar3;
  uVar3 = CppRuntime_builtin_new(0x30);
  uVar3 = code_0803EE94_79C8_Ctor(uVar3,0x08738144);
  *(u32 *)(self + iVar2 + 0xc) = uVar3;
  uVar3 = CppRuntime_builtin_new(0x30);
  uVar3 = code_0803EE94_79C8_Ctor(uVar3,0x0873AFC8);
  *(u32 *)(self + 0x0000078C) = uVar3;
  uVar3 = CppRuntime_builtin_new(0x30);
  uVar3 = code_0803EE94_79C8_Ctor(uVar3,0x08731B40);
  *(u32 *)(self + 0x790) = uVar3;
  uVar3 = CppRuntime_builtin_new(0x30);
  uVar3 = code_0803EE94_79C8_Ctor(uVar3,0x0873CEAC);
  *(u32 *)(self + iVar2 + 0x18) = uVar3;
  uVar3 = CppRuntime_builtin_new(0x30);
  uVar3 = code_0803EE94_79C8_Ctor(uVar3,0x08729460);
  *(u32 *)(self + 0x798) = uVar3;
  uVar3 = CppRuntime_builtin_new(0x30);
  uVar3 = code_0803EE94_79C8_Ctor(uVar3,0x087409E4);
  *(u32 *)(self + 0x0000079C) = uVar3;
  puVar4 = (u32 *)CppRuntime_builtin_new(0x10);
  uVar3 = hardware_GetField_0x00_8918(self);
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0x080E5B80;
  hardware_Sub_08009300(puVar4 + 3,uVar3);
  *(u32 **)(self + 0x7a0) = puVar4;
  puVar4 = (u32 *)(self + 0x000007A4);
  iVar2 = 1;
  do {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != -1);
  puVar4 = (u32 *)(self + 0x000007AC);
  iVar2 = 1;
  do {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != -1);
  puVar4 = (u32 *)(self + 0x000007B4);
  iVar2 = 4;
  do {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != -1);
  puVar4 = (u32 *)(self + 0x7c8);
  iVar2 = 4;
  do {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != -1);
  iVar2 = 4;
  puVar4 = (u32 *)(self + 0x000007DC);
  do {
    *puVar4 = 0;
    *(u16 *)(puVar4 + 1) = 0;
    puVar4[2] = 0;
    *(u16 *)(puVar4 + 3) = 0;
    puVar4[4] = 0;
    *(u16 *)(puVar4 + 5) = 0;
    puVar4[6] = 0;
    *(u16 *)(puVar4 + 7) = 0;
    puVar4 = puVar4 + 8;
    iVar2 = iVar2 + -1;
  } while (iVar2 != -1);
  puVar4 = (u32 *)(self + 0x0000087C);
  iVar2 = 1;
  do {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != -1);
  puVar4 = (u32 *)(self + 0x00000884);
  iVar2 = 1;
  do {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != -1);
  iVar2 = 1;
  puVar4 = (u32 *)(self + 0x0000088C);
  do {
    *puVar4 = 0;
    *(u16 *)(puVar4 + 1) = 0;
    puVar4[2] = 0;
    *(u16 *)(puVar4 + 3) = 0;
    puVar4[4] = 0;
    *(u16 *)(puVar4 + 5) = 0;
    puVar4[6] = 0;
    *(u16 *)(puVar4 + 7) = 0;
    puVar4 = puVar4 + 8;
    iVar2 = iVar2 + -1;
  } while (iVar2 != -1);
  *(u32 *)(self + 0x000008CC) = 0;
  *(u32 *)(self + 0x8d0) = 0;
  iVar2 = 0x000008D4;
  puVar4 = (u32 *)(self + 0x000008D4);
  *puVar4 = 0;
  *(u16 *)(puVar4 + 1) = 0;
  *puVar5 = 0;
  *(u16 *)(puVar5 + 1) = 0;
  *puStack_7c = 0;
  *(u16 *)(puStack_7c + 1) = 0;
  *puStack_78 = 0;
  *(u16 *)(puStack_78 + 1) = 0;
  *(u32 *)(self + iVar2 + 0x20) = 0;
  *(u32 *)(self + 0x000008F8) = 0;
  iVar2 = 0x000008FC;
  puVar5 = (u32 *)(self + 0x000008FC);
  *puVar5 = 0;
  *(u16 *)(puVar5 + 1) = 0;
  *puStack_74 = 0;
  *(u16 *)(puStack_74 + 1) = 0;
  *puStack_6c = 0;
  *(u16 *)(puStack_6c + 1) = 0;
  *puStack_64 = 0;
  *(u16 *)(puStack_64 + 1) = 0;
  puVar5 = (u32 *)(self + iVar2 + 0x20);
  iVar2 = 1;
  do {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != -1);
  puVar5 = (u32 *)(self + 0x00000924);
  iVar2 = 1;
  do {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != -1);
  iVar2 = 1;
  puVar5 = (u32 *)(self + 0x0000092C);
  do {
    *puVar5 = 0;
    *(u16 *)(puVar5 + 1) = 0;
    puVar5[2] = 0;
    *(u16 *)(puVar5 + 3) = 0;
    puVar5[4] = 0;
    *(u16 *)(puVar5 + 5) = 0;
    puVar5[6] = 0;
    *(u16 *)(puVar5 + 7) = 0;
    puVar5 = puVar5 + 8;
    iVar2 = iVar2 + -1;
  } while (iVar2 != -1);
  *(u32 *)(self + 0x0000096C) = 0;
  *(u32 *)(self + 0x970) = 0;
  iVar2 = 0x00000974;
  puVar5 = (u32 *)(self + 0x00000974);
  *puVar5 = 0;
  *(u16 *)(puVar5 + 1) = 0;
  *puStack_44 = 0;
  *(u16 *)(puStack_44 + 1) = 0;
  *puStack_40 = 0;
  *(u16 *)(puStack_40 + 1) = 0;
  *puStack_3c = 0;
  *(u16 *)(puStack_3c + 1) = 0;
  *(u32 *)(self + iVar2 + 0x20) = 0;
  *(u32 *)(self + 0x00000998) = 0;
  iVar2 = 0x0000099C;
  puVar5 = (u32 *)(self + 0x0000099C);
  *puVar5 = 0;
  *(u16 *)(puVar5 + 1) = 0;
  *puStack_38 = 0;
  *(u16 *)(puStack_38 + 1) = 0;
  *puStack_34 = 0;
  *(u16 *)(puStack_34 + 1) = 0;
  *puStack_30 = 0;
  *(u16 *)(puStack_30 + 1) = 0;
  *(u32 *)(self + iVar2 + 0x20) = 0;
  *(u32 *)(self + 0x9c0) = 0;
  iVar2 = 0x000009C4;
  puVar5 = (u32 *)(self + 0x000009C4);
  *puVar5 = 0;
  *(u16 *)(puVar5 + 1) = 0;
  *puStack_2c = 0;
  *(u16 *)(puStack_2c + 1) = 0;
  *puStack_28 = 0;
  *(u16 *)(puStack_28 + 1) = 0;
  *puStack_24 = 0;
  *(u16 *)(puStack_24 + 1) = 0;
  *(u32 *)(self + iVar2 + 0x20) = 0;
  puVar5 = (u32 *)(self + 0x000009E8);
  iVar2 = 1;
  do {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != -1);
  iVar2 = 1;
  puVar5 = (u32 *)(self + 0x9f0);
  do {
    *puVar5 = 0;
    *(u16 *)(puVar5 + 1) = 0;
    puVar5[2] = 0;
    *(u16 *)(puVar5 + 3) = 0;
    puVar5[4] = 0;
    *(u16 *)(puVar5 + 5) = 0;
    puVar5[6] = 0;
    *(u16 *)(puVar5 + 7) = 0;
    puVar5 = puVar5 + 8;
    iVar2 = iVar2 + -1;
  } while (iVar2 != -1);
  *(u32 *)(self + 0xa30) = 0;
  puVar5 = (u32 *)(self + 0x00000A34);
  iVar2 = 1;
  do {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != -1);
  iVar2 = 1;
  puVar5 = (u32 *)(self + 0x00000A3C);
  do {
    *puVar5 = 0;
    *(u16 *)(puVar5 + 1) = 0;
    puVar5[2] = 0;
    *(u16 *)(puVar5 + 3) = 0;
    puVar5[4] = 0;
    *(u16 *)(puVar5 + 5) = 0;
    puVar5[6] = 0;
    *(u16 *)(puVar5 + 7) = 0;
    puVar5 = puVar5 + 8;
    iVar2 = iVar2 + -1;
  } while (iVar2 != -1);
  *(u32 *)(self + 0x00000A7C) = 0;
  *(u32 *)(self + 0xa80) = 0;
  iVar2 = 0x00000A84;
  puVar5 = (u32 *)(self + 0x00000A84);
  *puVar5 = 0;
  *(u16 *)(puVar5 + 1) = 0;
  *puStack_70 = 0;
  *(u16 *)(puStack_70 + 1) = 0;
  *puStack_68 = 0;
  *(u16 *)(puStack_68 + 1) = 0;
  *puStack_60 = 0;
  *(u16 *)(puStack_60 + 1) = 0;
  *(u32 *)(self + iVar2 + 0x20) = 0;
  iVar2 = 0x00000AA8;
  puVar5 = (u32 *)(self + 0x00000AA8);
  *puVar5 = 0;
  *(u16 *)(puVar5 + 1) = 0;
  *puStack_5c = 0;
  *(u16 *)(puStack_5c + 1) = 0;
  *puStack_58 = 0;
  *(u16 *)(puStack_58 + 1) = 0;
  *puStack_54 = 0;
  *(u16 *)(puStack_54 + 1) = 0;
  *(u32 *)(self + iVar2 + 0x20) = 0;
  iVar2 = 0x00000ACC;
  puVar5 = (u32 *)(self + 0x00000ACC);
  *puVar5 = 0;
  *(u16 *)(puVar5 + 1) = 0;
  *puStack_50 = 0;
  *(u16 *)(puStack_50 + 1) = 0;
  *puStack_4c = 0;
  *(u16 *)(puStack_4c + 1) = 0;
  *puStack_48 = 0;
  *(u16 *)(puStack_48 + 1) = 0;
  puVar5 = (u32 *)(self + iVar2 + 0x20);
  iVar2 = 9;
  do {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != -1);
  iVar7 = self + 0x00000B1C;
  SpriteAnimEngine_Sub_080B3C90(iVar7);
  *(u8 *)(self + 0xb30) = 0;
  *(u8 *)(self + 0x00000B58) = 0;
  iVar2 = 0x00000B59;
  *(u8 *)(self + 0x00000B59) = 0x5a;
  *(u8 *)(self + 0xb5a) = 0x19;
  *(u8 *)(self + 0x00000B5B) = 0x19;
  *(u8 *)(self + iVar2 + 3) = 2;
  *(u8 *)(self + 0xb5d) = 0x10;
  *(u8 *)(self + 0x00000B5E) = 0x19;
  *(u16 *)(self + iVar2 + 7) = 0x19;
  *(u16 *)(self + 0xb62) = 0x19;
  *(u16 *)(self + 0x00000B64) = 0x22;
  *(u16 *)(self + 0x00000B66) = 0x19;
  *(u16 *)(self + 0x00000B68) = 0x24;
  *(u8 *)(self + iVar2 + 0x11) = 0x46;
  *(u8 *)(self + 0xb6b) = 0x14;
  *(u8 *)(self + 0x00000B6C) = 0x3c;
  *(u8 *)(self + iVar2 + 0x14) = 0x73;
  *(u8 *)(self + 0xb6e) = 0x3c;
  *(u8 *)(self + iVar2 + 0x16) = 0x73;
  *(u8 *)(self + 0xb70) = 0x3c;
  *(u8 *)(self + 0x00000B71) = 0x73;
  puVar6 = (u16 *)(self + iVar2 + 0x19);
  *puVar6 = 0x2d;
  *(u8 *)(self + 0x00000B74) = 0xb4;
  *(u8 *)(self + iVar2 + 0x1c) = 0x78;
  *(u8 *)(self + 0x00000B76) = 0xb4;
  *(u8 *)(self + iVar2 + 0x1e) = 0xb4;
  LibC_strcpy(iVar7,param_2);
  iVar2 = 0x00000B2C;
  *(u8 *)(self + 0x00000B2C) = *(u8 *)(param_2 + 0x10);
  *(u8 *)(self + iVar2 + 1) = *(u8 *)(param_2 + 0x11);
  uVar1 = func_080D0EC8((u32)*puVar6 << 0x10,0x168);
  *puVar6 = uVar1;
  iVar2 = self + 0x0000071C;
  hardware_Sub_080073E0(iVar2,*(u32 *)(iVar2 + 4));
  uVar3 = hardware_Sub_0800736C(iVar2);
  *(u32 *)(iVar2 + 4) = uVar3;
  iVar2 = self + 0x00000724;
  hardware_Sub_080073E0(iVar2,*(u32 *)(iVar2 + 4));
  uVar3 = hardware_Sub_0800736C(iVar2);
  *(u32 *)(iVar2 + 4) = uVar3;
  iVar2 = 0;
  puVar5 = (u32 *)(self + 0x730);
  do {
    iVar7 = iVar2 * 8 + self + 0x0000072C;
    hardware_Sub_080073E0(iVar7,*puVar5);
    uVar3 = hardware_Sub_0800736C(iVar7);
    *puVar5 = uVar3;
    puVar5 = puVar5 + 2;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  iVar2 = 0;
  puVar5 = (u32 *)(self + 0x740);
  do {
    iVar7 = iVar2 * 8 + self + 0x0000073C;
    hardware_Sub_080073E0(iVar7,*puVar5);
    uVar3 = hardware_Sub_0800736C(iVar7);
    *puVar5 = uVar3;
    puVar5 = puVar5 + 2;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 8);
  PortraitEngine_Sub_08050E50(*(u32 *)(self + 0x718),0);
  return (self);
}

/* 0x080C0DCC (1260B) | SpriteAnimEngine_Create_0DCC (orig: func_080C0DCC) | origin: wip | domain: SpriteAnimEngine | HIGH / vtable_algebra */
u32 SpriteAnimEngine_Create_0DCC(int self,u32 *param_2) {
  int iVar1;
  u32 uVar2;
  u32 *puVar3;
  u32 *puVar4;
  u32 *puVar5;
  u8 auStack_64 [4];
  u8 auStack_60 [4];
  u32 *puStack_5c;
  u32 *puStack_58;
  u32 *puStack_54;
  u32 *puStack_50;
  u32 *puStack_4c;
  u32 *puStack_48;
  u32 *puStack_44;
  u32 *puStack_40;
  u32 *puStack_3c;
  u32 *puStack_38;
  u32 *puStack_34;
  u32 *puStack_30;
  u32 *puStack_2c;
  u32 *puStack_28;
  u32 *puStack_24;
  puStack_5c = param_2;
  hardware_Create();
  *(u32 *)(self + 4) = 0x080E8554;
  iVar1 = 3;
  do {
    iVar1 = iVar1 + -1;
  } while (iVar1 != -1);
  uVar2 = CppRuntime_builtin_new(4);
  hardware_SetField_0x00_835C(auStack_64);
  hardware_SetField_0x00(auStack_60);
  uVar2 = hardware_5BB4_Sub_08050CC0(uVar2,0,0x18,0,0,auStack_64,auStack_60);
  *(u32 *)(self + 0x0000051C) = uVar2;
  hardware_Sub_08007714(auStack_60,2);
  hardware_Sub_08008364(auStack_64,2);
  uVar2 = CppRuntime_builtin_new(0x30);
  uVar2 = code_0803EE94_79C8_Ctor(uVar2,0x0873E5B0);
  *(u32 *)(self + 0x520) = uVar2;
  uVar2 = CppRuntime_builtin_new(0x30);
  uVar2 = code_0803EE94_79C8_Ctor(uVar2,0x0873DE44);
  *(u32 *)(self + 0x00000524) = uVar2;
  uVar2 = CppRuntime_builtin_new(0x30);
  uVar2 = code_0803EE94_79C8_Ctor(uVar2,0x087405A0);
  *(u32 *)(self + 0x528) = uVar2;
  uVar2 = CppRuntime_builtin_new(0x30);
  uVar2 = code_0803EE94_79C8_Ctor(uVar2,0x0858BA28);
  *(u32 *)(self + 0x0000052C) = uVar2;
  uVar2 = CppRuntime_builtin_new(0x30);
  uVar2 = code_0803EE94_79C8_Ctor(uVar2,0x0873D5FC);
  *(u32 *)(self + 0x530) = uVar2;
  uVar2 = CppRuntime_builtin_new(0x30);
  uVar2 = code_0803EE94_79C8_Ctor(uVar2,0x08740908);
  *(u32 *)(self + 0x00000534) = uVar2;
  uVar2 = CppRuntime_builtin_new(0x30);
  uVar2 = code_0803EE94_79C8_Ctor(uVar2,0x0871D51C);
  *(u32 *)(self + 0x538) = uVar2;
  uVar2 = CppRuntime_builtin_new(0x30);
  uVar2 = code_0803EE94_79C8_Ctor(uVar2,0x0872BE64);
  *(u32 *)(self + 0x0000053C) = uVar2;
  uVar2 = CppRuntime_builtin_new(0x30);
  uVar2 = code_0803EE94_79C8_Ctor(uVar2,0x0873D6D8);
  *(u32 *)(self + 0x540) = uVar2;
  puVar3 = (u32 *)CppRuntime_builtin_new(0x10);
  uVar2 = hardware_GetField_0x00_8918(self);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0x080E5B80;
  hardware_Sub_08009300(puVar3 + 3,uVar2);
  iVar1 = 0x00000544;
  *(u32 **)(self + 0x00000544) = puVar3;
  *(u32 *)(self + 0x550) = 0;
  *(u32 *)(self + iVar1 + 0x10) = 0;
  *(u32 *)(self + 0x558) = 0;
  *(u16 *)(self + 0x55c) = 0;
  puVar3 = (u32 *)(self + iVar1 + 0x1c);
  *puVar3 = 0;
  *(u16 *)(puVar3 + 1) = 0;
  *(u32 *)(self + 0x568) = 0;
  *(u16 *)(self + 0x56c) = 0;
  puVar3 = (u32 *)(self + iVar1 + 0x2c);
  *puVar3 = 0;
  *(u16 *)(puVar3 + 1) = 0;
  *(u32 *)(self + 0x578) = 0;
  *(u32 *)(self + iVar1 + 0x38) = 0;
  *(u32 *)(self + 0x580) = 0;
  *(u16 *)(self + 0x584) = 0;
  puVar3 = (u32 *)(self + iVar1 + 0x44);
  *puVar3 = 0;
  *(u16 *)(puVar3 + 1) = 0;
  *(u32 *)(self + 0x590) = 0;
  *(u16 *)(self + 0x594) = 0;
  puVar3 = (u32 *)(self + iVar1 + 0x54);
  *puVar3 = 0;
  *(u16 *)(puVar3 + 1) = 0;
  *(u32 *)(self + 0x5a0) = 0;
  *(u32 *)(self + iVar1 + 0x60) = 0;
  *(u32 *)(self + 0x5a8) = 0;
  *(u16 *)(self + 0x5ac) = 0;
  puVar3 = (u32 *)(self + iVar1 + 0x6c);
  *puVar3 = 0;
  *(u16 *)(puVar3 + 1) = 0;
  *(u32 *)(self + 0x5b8) = 0;
  *(u16 *)(self + 0x5bc) = 0;
  puVar3 = (u32 *)(self + iVar1 + 0x7c);
  *puVar3 = 0;
  *(u16 *)(puVar3 + 1) = 0;
  *(u32 *)(self + 0x5c8) = 0;
  *(u32 *)(self + iVar1 + 0x88) = 0;
  *(u32 *)(self + 0x5d0) = 0;
  *(u16 *)(self + 0x5d4) = 0;
  puVar3 = (u32 *)(self + iVar1 + 0x94);
  *puVar3 = 0;
  *(u16 *)(puVar3 + 1) = 0;
  *(u32 *)(self + 0x5e0) = 0;
  *(u16 *)(self + 0x5e4) = 0;
  puVar3 = (u32 *)(self + iVar1 + 0xa4);
  *puVar3 = 0;
  *(u16 *)(puVar3 + 1) = 0;
  *(u32 *)(self + 0x5f0) = 0;
  *(u32 *)(self + iVar1 + 0xb0) = 0;
  *(u32 *)(self + 0x5f8) = 0;
  *(u16 *)(self + 0x5fc) = 0;
  puVar3 = (u32 *)(self + iVar1 + 0xbc);
  *puVar3 = 0;
  *(u16 *)(puVar3 + 1) = 0;
  *(u32 *)(self + 0x608) = 0;
  *(u16 *)(self + 0x60c) = 0;
  puVar3 = (u32 *)(self + iVar1 + 0xcc);
  *puVar3 = 0;
  *(u16 *)(puVar3 + 1) = 0;
  *(u32 *)(self + 0x618) = 0;
  puVar4 = (u32 *)(self + 0x0000061C);
  iVar1 = 0x18;
  puVar5 = (u32 *)(self + 0x0000061C + 0x74);
  puVar3 = (u32 *)(0x0000061C + 0xf4 + self);
  puStack_34 = (u32 *)(self + 0x740);
  puStack_30 = (u32 *)(self + 0x748);
  puStack_2c = (u32 *)(self + 0x760);
  puStack_28 = (u32 *)(self + 0x768);
  puStack_24 = (u32 *)(self + 0x770);
  puStack_58 = (u32 *)(self + 0x7a8);
  puStack_54 = (u32 *)(self + 0x7b0);
  puStack_50 = (u32 *)(self + 0x7b8);
  puStack_4c = (u32 *)(self + 2000);
  puStack_48 = (u32 *)(self + 0x7d8);
  puStack_44 = (u32 *)(self + 0x7e0);
  puStack_40 = (u32 *)(self + 0x7f8);
  puStack_3c = (u32 *)(self + 0x800);
  puStack_38 = (u32 *)(self + 0x00000808);
  do {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != -1);
  *(u32 *)(self + 0x680) = 0;
  *(u16 *)(self + 0x684) = 0;
  *(u32 *)(self + 0x688) = 0;
  *(u16 *)(self + 0x68c) = 0;
  *puVar5 = 0;
  *(u16 *)(puVar5 + 1) = 0;
  *(u32 *)(self + 0x698) = 0;
  *(u16 *)(self + 0x69c) = 0;
  *(u32 *)(self + 0x6a0) = 0;
  puVar4 = (u32 *)(self + 0x000006A4);
  iVar1 = 0x18;
  do {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != -1);
  *(u32 *)(self + 0x708) = 0;
  *(u16 *)(self + 0x70c) = 0;
  *puVar3 = 0;
  *(u16 *)(puVar3 + 1) = 0;
  *(u32 *)(self + 0x718) = 0;
  *(u16 *)(self + 0x71c) = 0;
  *(u32 *)(self + 0x720) = 0;
  *(u16 *)(self + 0x724) = 0;
  *(u32 *)(self + 0x728) = 0;
  *(u32 *)(self + 0x0000072C) = 0;
  *(u32 *)(self + 0x730) = 0;
  *(u16 *)(self + 0x734) = 0;
  *(u32 *)(self + 0x738) = 0;
  *(u16 *)(self + 0x73c) = 0;
  *puStack_34 = 0;
  *(u16 *)(self + 0x744) = 0;
  *puStack_30 = 0;
  *(u16 *)(self + 0x74c) = 0;
  *(u32 *)(self + 0x750) = 0;
  *(u32 *)(self + 0x00000754) = 0;
  *(u32 *)(self + 0x758) = 0;
  *(u16 *)(self + 0x75c) = 0;
  *puStack_2c = 0;
  *(u16 *)(self + 0x764) = 0;
  *puStack_28 = 0;
  *(u16 *)(self + 0x76c) = 0;
  *puStack_24 = 0;
  *(u16 *)(self + 0x774) = 0;
  *(u32 *)(self + 0x798) = 0;
  *(u32 *)(self + 0x0000079C) = 0;
  *(u32 *)(self + 0x7a0) = 0;
  *(u16 *)(self + 0x7a4) = 0;
  *puStack_58 = 0;
  *(u16 *)(self + 0x7ac) = 0;
  *puStack_54 = 0;
  *(u16 *)(self + 0x7b4) = 0;
  *puStack_50 = 0;
  *(u16 *)(self + 0x7bc) = 0;
  *(u32 *)(self + 0x7c0) = 0;
  *(u32 *)(self + 0x000007C4) = 0;
  *(u32 *)(self + 0x7c8) = 0;
  *(u16 *)(self + 0x7cc) = 0;
  *puStack_4c = 0;
  *(u16 *)(self + 0x7d4) = 0;
  *puStack_48 = 0;
  *(u16 *)(self + 0x7dc) = 0;
  *puStack_44 = 0;
  *(u16 *)(self + 0x7e4) = 0;
  *(u32 *)(self + 0x7e8) = 0;
  *(u32 *)(self + 0x000007EC) = 0;
  *(u32 *)(self + 0x7f0) = 0;
  *(u16 *)(self + 0x7f4) = 0;
  *puStack_40 = 0;
  *(u16 *)(self + 0x7fc) = 0;
  *puStack_3c = 0;
  *(u16 *)(self + 0x804) = 0;
  *puStack_38 = 0;
  *(u16 *)(puStack_38 + 1) = 0;
  hardware_Sub_08008B54(self + 0x810,0);
  hardware_Sub_08008B54(self + 0x00000814,1);
  hardware_Sub_08008B54(self + 0x00000818,2);
  hardware_Sub_08008B54(self + 0x0000081C,3);
  hardware_Sub_08008B54(self + 0x820,4);
  iVar1 = 0x00000824;
  puVar3 = (u32 *)(self + 0x00000824);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0x080E5B70;
  *(u32 *)(self + 0x830) = 0;
  *(u32 *)(self + 0x834) = 0;
  *(u32 *)(self + 0x838) = 0x080E5B60;
  hardware_Sub_080E52A0(self + iVar1 + 0x18);
  *(u32 *)(self + 0x00000974) = 0;
  *(u32 *)(self + 0x980) = *puStack_5c;
  *(u8 *)(self + 0x00000988) = *(u8 *)(puStack_5c + 1);
  return (self);
}

/* 0x080CB304 (824B) | SpriteAnimEngine_Sub_080CB304 (orig: func_080CB304) | origin: wip | domain: SpriteAnimEngine | MEDIUM / graph_algebra */
void SpriteAnimEngine_Sub_080CB304(int param_1,int param_2,u32 param_3,u16 param_4,u32 param_5) {
  u32 *puVar1;
  int *piVar2;
  u32 *puVar3;
  int iVar4;
  u32 *puVar5;
  u32 *puVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  u32 uVar10;
  u32 uVar11;
  u32 uStack_64;
  u32 uStack_60;
  u32 uStack_5c;
  u32 uStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  u32 uStack_44;
  int iStack_40;
  u32 uStack_3c;
  int iStack_38;
  int iStack_34;
  u32 *puStack_30;
  int iStack_2c;
  int iStack_28;
  u32 *puStack_24;
  iVar8 = param_2 * 0xc + param_1;
  iStack_40 = param_1;
  iStack_28 = param_2;
  SpriteAnimEngine_5A28_Ctor_AD18(iVar8 + 0x218,param_3,param_4,param_5);
  piVar9 = *(int **)(iStack_40 + 0x278);
  hardware_Sub_08008F0C(&uStack_64,*(u32 *)(iVar8 + 0x21c),iStack_28 * 0x80 + 0x06000680,0x80);
  puVar5 = (u32 *)piVar9[1];
  if (puVar5 == (u32 *)piVar9[3]) {
    iStack_50 = 1;
    puVar6 = (u32 *)*piVar9;
    iStack_54 = (int)puVar5 - (int)puVar6 >> 4;
    piVar2 = &iStack_54;
    if (iStack_54 == 0) {
      piVar2 = &iStack_50;
    }
    puStack_24 = puVar5;
    if (iStack_54 + *piVar2 == 0) {
      puVar5 = (u32 *)0x0;
      iVar8 = 0;
    }
    else {
      iVar8 = (iStack_54 + *piVar2) * 0x10;
      puVar5 = (u32 *)LibC_malloc(iVar8);
      if (puVar5 == (u32 *)0x0) {
        puVar5 = (u32 *)code_linkonce_Sub_080D3BC0(iVar8);
      }
      puVar6 = (u32 *)*piVar9;
    }
    iStack_38 = iStack_28 << 1;
    iStack_2c = iStack_28 << 5;
    iStack_34 = iStack_28 << 2;
    puStack_30 = &uStack_44;
    uStack_3c = iStack_28 + 3;
    puVar3 = puVar5;
    for (; puVar6 != puStack_24; puVar6 = puVar6 + 4) {
      if (puVar3 != (u32 *)0x0) {
        uVar10 = puVar6[1];
        uVar11 = puVar6[2];
        *puVar3 = *puVar6;
        puVar3[1] = uVar10;
        puVar3[2] = uVar11;
        puVar3[3] = puVar6[3];
      }
      puVar3 = puVar3 + 4;
    }
    iVar4 = iStack_50;
    if (iStack_50 == 1) {
      if (puVar3 != (u32 *)0x0) {
        *puVar3 = uStack_64;
        puVar3[1] = uStack_60;
        puVar3[2] = uStack_5c;
        puVar3[3] = uStack_58;
      }
      puVar3 = puVar3 + 4;
    }
    else {
      for (; iVar4 != 0; iVar4 = iVar4 + -1) {
        if (puVar3 != (u32 *)0x0) {
          *puVar3 = uStack_64;
          puVar3[1] = uStack_60;
          puVar3[2] = uStack_5c;
          puVar3[3] = uStack_58;
        }
        puVar3 = puVar3 + 4;
      }
    }
    iVar7 = *piVar9;
    for (iVar4 = iVar7; iVar4 != piVar9[1]; iVar4 = iVar4 + 0x10) {
    }
    if (iVar7 != 0) {
      LibC_free(iVar7);
    }
    *piVar9 = (int)puVar5;
    piVar9[1] = (int)puVar3;
    piVar9[3] = iVar8 + (int)puVar5;
  }
  else {
    if (puVar5 != (u32 *)0x0) {
      *puVar5 = uStack_64;
      puVar5[1] = uStack_60;
      puVar5[2] = uStack_5c;
      puVar5[3] = uStack_58;
    }
    piVar9[1] = piVar9[1] + 0x10;
    iStack_2c = iStack_28 << 5;
    iStack_34 = iStack_28 << 2;
    puStack_30 = &uStack_44;
    uStack_3c = iStack_28 + 3;
    iStack_38 = param_2 * 2;
  }
  piVar9 = *(int **)(iStack_40 + 0x278);
  hardware_Sub_08008F0C(&uStack_64,*(u32 *)((iStack_38 + iStack_28) * 4 + iStack_40 + 0x220),
                iStack_2c + 0x05000060,0x20);
  puVar5 = (u32 *)piVar9[1];
  if (puVar5 == (u32 *)piVar9[3]) {
    iStack_48 = 1;
    puVar6 = (u32 *)*piVar9;
    iStack_4c = (int)puVar5 - (int)puVar6 >> 4;
    piVar2 = &iStack_4c;
    if (iStack_4c == 0) {
      piVar2 = &iStack_48;
    }
    if (iStack_4c + *piVar2 == 0) {
      puVar3 = (u32 *)0x0;
      iVar8 = 0;
      puStack_24 = puVar3;
    }
    else {
      iVar8 = (iStack_4c + *piVar2) * 0x10;
      puVar3 = (u32 *)LibC_malloc(iVar8);
      if (puVar3 == (u32 *)0x0) {
        puVar3 = (u32 *)code_linkonce_Sub_080D3BC0(iVar8);
      }
      puVar6 = (u32 *)*piVar9;
      puStack_24 = puVar3;
    }
    for (; puVar6 != puVar5; puVar6 = puVar6 + 4) {
      if (puVar3 != (u32 *)0x0) {
        uVar10 = puVar6[1];
        uVar11 = puVar6[2];
        *puVar3 = *puVar6;
        puVar3[1] = uVar10;
        puVar3[2] = uVar11;
        puVar3[3] = puVar6[3];
      }
      puVar3 = puVar3 + 4;
    }
    iVar4 = iStack_48;
    if (iStack_48 == 1) {
      if (puVar3 != (u32 *)0x0) {
        *puVar3 = uStack_64;
        puVar3[1] = uStack_60;
        puVar3[2] = uStack_5c;
        puVar3[3] = uStack_58;
      }
      puVar3 = puVar3 + 4;
    }
    else {
      for (; iVar4 != 0; iVar4 = iVar4 + -1) {
        if (puVar3 != (u32 *)0x0) {
          *puVar3 = uStack_64;
          puVar3[1] = uStack_60;
          puVar3[2] = uStack_5c;
          puVar3[3] = uStack_58;
        }
        puVar3 = puVar3 + 4;
      }
    }
    iVar7 = *piVar9;
    for (iVar4 = iVar7; iVar4 != piVar9[1]; iVar4 = iVar4 + 0x10) {
    }
    if (iVar7 != 0) {
      LibC_free(iVar7);
    }
    *piVar9 = (int)puStack_24;
    piVar9[1] = (int)puVar3;
    piVar9[3] = (int)puStack_24 + iVar8;
  }
  else {
    if (puVar5 != (u32 *)0x0) {
      *puVar5 = uStack_64;
      puVar5[1] = uStack_60;
      puVar5[2] = uStack_5c;
      puVar5[3] = uStack_58;
    }
    piVar9[1] = piVar9[1] + 0x10;
  }
  uStack_44 = *(u32 *)(iStack_34 + 0x08117860);
  code_0803EE94_7868_Sub_080CAE60(iStack_40,
                (u32)*(u8 *)((int)puStack_30 + 1) * 0x40 + (uStack_44 & 0xff) * 2 + 0x0600F000
                ,iStack_34 + 0x34U & 0xffff,2,2,uStack_3c & 0xffff,0x20);
  puVar1 = puStack_30;
  code_0803EE94_7868_Sub_080CAE60(iStack_40,
                (u32)*(u8 *)((int)puStack_30 + 1) * 0x40 + (uStack_44 & 0xff) * 2 + 0x0600F080
                ,0x54,2,1,0,0x20);
  if (1 < param_5) {
    code_0803EE94_7838_Sub_080CAEEC(iStack_40,param_5,
                  (u32)*(u8 *)((int)puVar1 + 1) * 0x40 + (u32)(u8)*puVar1 * 2 + 0x0600F082,
                  0x20,0,0x20);
  }
}

/* 0x080CBAF0 (740B) | SpriteAnimEngine_Sub_080CBAF0 (orig: func_080CBAF0) | origin: wip | domain: SpriteAnimEngine | MEDIUM / graph_algebra */
void SpriteAnimEngine_Sub_080CBAF0(int param_1,u32 param_2,u16 param_3) {
  int *piVar1;
  int iVar2;
  u32 uVar3;
  u32 uVar4;
  u32 *puVar5;
  u32 *puVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  u32 uVar10;
  u32 uStack_50;
  u32 uStack_4c;
  u32 uStack_48;
  u32 uStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  u32 uStack_30;
  u32 *puStack_2c;
  u32 *puStack_28;
  u32 *puStack_24;
  SpriteAnimEngine_5A28_Ctor_AD18(param_1 + 0x280,param_2,param_3);
  piVar9 = *(int **)(param_1 + 0x278);
  hardware_Sub_08008F0C(&uStack_50,*(u32 *)(param_1 + 0x284),0x06000600,0x80);
  puVar5 = (u32 *)piVar9[1];
  if (puVar5 == (u32 *)piVar9[3]) {
    iStack_3c = 1;
    puVar6 = (u32 *)*piVar9;
    iStack_40 = (int)puVar5 - (int)puVar6 >> 4;
    piVar1 = &iStack_40;
    if (iStack_40 == 0) {
      piVar1 = &iStack_3c;
    }
    puStack_28 = puVar5;
    if (iStack_40 + *piVar1 == 0) {
      puStack_24 = (u32 *)0x0;
      iVar8 = 0;
    }
    else {
      iVar8 = (iStack_40 + *piVar1) * 0x10;
      puStack_24 = (u32 *)LibC_malloc(iVar8);
      if (puStack_24 == (u32 *)0x0) {
        puStack_24 = (u32 *)code_linkonce_Sub_080D3BC0(iVar8);
      }
      puVar6 = (u32 *)*piVar9;
    }
    puStack_2c = &uStack_30;
    puVar5 = puStack_24;
    for (; puVar6 != puStack_28; puVar6 = puVar6 + 4) {
      if (puVar5 != (u32 *)0x0) {
        uVar4 = puVar6[1];
        uVar10 = puVar6[2];
        *puVar5 = *puVar6;
        puVar5[1] = uVar4;
        puVar5[2] = uVar10;
        puVar5[3] = puVar6[3];
      }
      puVar5 = puVar5 + 4;
    }
    iVar2 = iStack_3c;
    if (iStack_3c == 1) {
      if (puVar5 != (u32 *)0x0) {
        *puVar5 = uStack_50;
        puVar5[1] = uStack_4c;
        puVar5[2] = uStack_48;
        puVar5[3] = uStack_44;
      }
      puVar5 = puVar5 + 4;
    }
    else {
      for (; iVar2 != 0; iVar2 = iVar2 + -1) {
        if (puVar5 != (u32 *)0x0) {
          *puVar5 = uStack_50;
          puVar5[1] = uStack_4c;
          puVar5[2] = uStack_48;
          puVar5[3] = uStack_44;
        }
        puVar5 = puVar5 + 4;
      }
    }
    iVar7 = *piVar9;
    for (iVar2 = iVar7; iVar2 != piVar9[1]; iVar2 = iVar2 + 0x10) {
    }
    if (iVar7 != 0) {
      LibC_free(iVar7);
    }
    *piVar9 = (int)puStack_24;
    piVar9[1] = (int)puVar5;
    piVar9[3] = (int)puStack_24 + iVar8;
  }
  else {
    if (puVar5 != (u32 *)0x0) {
      *puVar5 = uStack_50;
      puVar5[1] = uStack_4c;
      puVar5[2] = uStack_48;
      puVar5[3] = uStack_44;
    }
    piVar9[1] = piVar9[1] + 0x10;
    puStack_2c = &uStack_30;
  }
  piVar9 = *(int **)(param_1 + 0x278);
  hardware_Sub_08008F0C(&uStack_50,*(u32 *)(param_1 + 0x288),0x05000040,0x20);
  puVar5 = (u32 *)piVar9[1];
  if (puVar5 == (u32 *)piVar9[3]) {
    iStack_34 = 1;
    puVar6 = (u32 *)*piVar9;
    iStack_38 = (int)puVar5 - (int)puVar6 >> 4;
    piVar1 = &iStack_38;
    if (iStack_38 == 0) {
      piVar1 = &iStack_34;
    }
    puStack_28 = puVar5;
    if (iStack_38 + *piVar1 == 0) {
      puVar5 = (u32 *)0x0;
      iVar8 = 0;
      puStack_24 = puVar5;
    }
    else {
      iVar8 = (iStack_38 + *piVar1) * 0x10;
      puVar5 = (u32 *)LibC_malloc(iVar8);
      if (puVar5 == (u32 *)0x0) {
        puVar5 = (u32 *)code_linkonce_Sub_080D3BC0(iVar8);
      }
      puVar6 = (u32 *)*piVar9;
      puStack_24 = puVar5;
    }
    for (; puVar6 != puStack_28; puVar6 = puVar6 + 4) {
      if (puVar5 != (u32 *)0x0) {
        uVar4 = puVar6[1];
        uVar10 = puVar6[2];
        *puVar5 = *puVar6;
        puVar5[1] = uVar4;
        puVar5[2] = uVar10;
        puVar5[3] = puVar6[3];
      }
      puVar5 = puVar5 + 4;
    }
    iVar2 = iStack_34;
    if (iStack_34 == 1) {
      if (puVar5 != (u32 *)0x0) {
        *puVar5 = uStack_50;
        puVar5[1] = uStack_4c;
        puVar5[2] = uStack_48;
        puVar5[3] = uStack_44;
      }
      puVar5 = puVar5 + 4;
    }
    else {
      for (; iVar2 != 0; iVar2 = iVar2 + -1) {
        if (puVar5 != (u32 *)0x0) {
          *puVar5 = uStack_50;
          puVar5[1] = uStack_4c;
          puVar5[2] = uStack_48;
          puVar5[3] = uStack_44;
        }
        puVar5 = puVar5 + 4;
      }
    }
    iVar7 = *piVar9;
    for (iVar2 = iVar7; iVar2 != piVar9[1]; iVar2 = iVar2 + 0x10) {
    }
    if (iVar7 != 0) {
      LibC_free(iVar7);
    }
    *piVar9 = (int)puStack_24;
    piVar9[1] = (int)puVar5;
    piVar9[3] = (int)puStack_24 + iVar8;
  }
  else {
    if (puVar5 != (u32 *)0x0) {
      *puVar5 = uStack_50;
      puVar5[1] = uStack_4c;
      puVar5[2] = uStack_48;
      puVar5[3] = uStack_44;
    }
    piVar9[1] = piVar9[1] + 0x10;
  }
  uStack_30 = *(u16 *)0x0811785C;
  code_0803EE94_7868_Sub_080CAE60(param_1,(u32)*(u8 *)((int)puStack_2c + 1) * 0x40 +
                        (uStack_30 & 0xff) * 2 + 0x0600F000,0x30,2,2,2,0x20);
  code_0803EE94_7868_Sub_080CAE60(param_1,(u32)*(u8 *)((int)puStack_2c + 1) * 0x40 +
                        (uStack_30 & 0xff) * 2 + 0x0600F080,0x54,2,1,0,0x20);
  uVar3 = SpriteAnimEngine_5A28_GetField_0x00(param_1 + 0x280);
  if (1 < uVar3) {
    uVar4 = SpriteAnimEngine_5A28_GetField_0x00(param_1 + 0x280);
    code_0803EE94_7838_Sub_080CAEEC(param_1,uVar4,
                  (u32)*(u8 *)((int)puStack_2c + 1) * 0x40 +
                  (u32)(u8)*puStack_2c * 2 + 0x0600F082,0x20,0,0x20);
  }
}

/* 0x080CC728 (792B) | SpriteAnimEngine_Sub_080CC728 (orig: func_080CC728) | origin: wip | domain: SpriteAnimEngine | MEDIUM / graph_algebra */
void SpriteAnimEngine_Sub_080CC728(int param_1,int param_2,u32 param_3,u16 param_4,u32 param_5) {
  int iVar1;
  int *piVar2;
  u32 uVar3;
  u32 *puVar4;
  u32 *puVar5;
  int iVar6;
  int iVar7;
  u32 uVar8;
  int *piVar9;
  u32 uVar10;
  u8 auStack_68 [4];
  u32 uStack_64;
  u32 uStack_60;
  u32 uStack_5c;
  u32 uStack_58;
  u32 uStack_54;
  u32 uStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  u32 uStack_3c;
  int iStack_38;
  u32 *puStack_34;
  int iStack_30;
  u32 *puStack_2c;
  u32 *puStack_28;
  u32 *puStack_24;
  SpriteAnimEngine_5A28_Ctor_AC7C(auStack_68,param_3,param_4,param_5);
  SpriteAnimEngine_5A28_Ctor_AD18(param_2 * 0xc + param_1 + 0x218,param_3,param_4,param_5);
  iVar1 = param_2 * 8 + param_1;
  iVar1 = hardware_Sub_08007D4C(iVar1 + 0x2ac,*(u32 *)(iVar1 + 0x2b0));
  iVar7 = param_2 * 8 + param_1;
  iStack_38 = hardware_Sub_080074C0(iVar7 + 0x2ec,*(u32 *)(iVar7 + 0x2f0));
  uVar3 = *(u32 *)(param_2 * 4 + 0x08117860);
  uStack_3c = uVar3 & 0xFFFFFF00 | uVar3 + 0xf & 0xff;
  piVar9 = *(int **)(param_1 + 0x278);
  hardware_Sub_08008F0C(&uStack_5c,uStack_64,iVar1 * 0x20 + 0x06010000,0x80);
  puVar4 = (u32 *)piVar9[1];
  if (puVar4 == (u32 *)piVar9[3]) {
    iStack_48 = 1;
    puVar5 = (u32 *)*piVar9;
    iStack_4c = (int)puVar4 - (int)puVar5 >> 4;
    piVar2 = &iStack_4c;
    if (iStack_4c == 0) {
      piVar2 = &iStack_48;
    }
    puStack_2c = puVar4;
    if (iStack_4c + *piVar2 == 0) {
      puStack_28 = (u32 *)0x0;
      iVar1 = 0;
    }
    else {
      iVar1 = (iStack_4c + *piVar2) * 0x10;
      puStack_28 = (u32 *)LibC_malloc(iVar1);
      if (puStack_28 == (u32 *)0x0) {
        puStack_28 = (u32 *)code_linkonce_Sub_080D3BC0(iVar1);
      }
      puVar5 = (u32 *)*piVar9;
    }
    iStack_30 = iStack_38 << 5;
    puStack_34 = &uStack_3c;
    puVar4 = puStack_28;
    for (; puVar5 != puStack_2c; puVar5 = puVar5 + 4) {
      if (puVar4 != (u32 *)0x0) {
        uVar8 = puVar5[1];
        uVar10 = puVar5[2];
        *puVar4 = *puVar5;
        puVar4[1] = uVar8;
        puVar4[2] = uVar10;
        puVar4[3] = puVar5[3];
      }
      puVar4 = puVar4 + 4;
    }
    iVar7 = iStack_48;
    if (iStack_48 == 1) {
      if (puVar4 != (u32 *)0x0) {
        *puVar4 = uStack_5c;
        puVar4[1] = uStack_58;
        puVar4[2] = uStack_54;
        puVar4[3] = uStack_50;
      }
      puVar4 = puVar4 + 4;
    }
    else {
      for (; iVar7 != 0; iVar7 = iVar7 + -1) {
        if (puVar4 != (u32 *)0x0) {
          *puVar4 = uStack_5c;
          puVar4[1] = uStack_58;
          puVar4[2] = uStack_54;
          puVar4[3] = uStack_50;
        }
        puVar4 = puVar4 + 4;
      }
    }
    iVar6 = *piVar9;
    for (iVar7 = iVar6; iVar7 != piVar9[1]; iVar7 = iVar7 + 0x10) {
    }
    if (iVar6 != 0) {
      LibC_free(iVar6);
    }
    *piVar9 = (int)puStack_28;
    piVar9[1] = (int)puVar4;
    piVar9[3] = (int)puStack_28 + iVar1;
  }
  else {
    if (puVar4 != (u32 *)0x0) {
      *puVar4 = uStack_5c;
      puVar4[1] = uStack_58;
      puVar4[2] = uStack_54;
      puVar4[3] = uStack_50;
    }
    piVar9[1] = piVar9[1] + 0x10;
    iStack_30 = iStack_38 << 5;
    puStack_34 = &uStack_3c;
  }
  piVar9 = *(int **)(param_1 + 0x278);
  hardware_Sub_08008F0C(&uStack_5c,uStack_60,iStack_30 + 0x05000200,0x20);
  puVar4 = (u32 *)piVar9[1];
  if (puVar4 == (u32 *)piVar9[3]) {
    iStack_40 = 1;
    puVar5 = (u32 *)*piVar9;
    iStack_44 = (int)puVar4 - (int)puVar5 >> 4;
    piVar2 = &iStack_44;
    if (iStack_44 == 0) {
      piVar2 = &iStack_40;
    }
    puStack_24 = puVar4;
    if (iStack_44 + *piVar2 == 0) {
      puVar4 = (u32 *)0x0;
      iVar1 = 0;
      puStack_28 = puVar4;
    }
    else {
      iVar1 = (iStack_44 + *piVar2) * 0x10;
      puVar4 = (u32 *)LibC_malloc(iVar1);
      if (puVar4 == (u32 *)0x0) {
        puVar4 = (u32 *)code_linkonce_Sub_080D3BC0(iVar1);
      }
      puVar5 = (u32 *)*piVar9;
      puStack_28 = puVar4;
    }
    for (; puVar5 != puStack_24; puVar5 = puVar5 + 4) {
      if (puVar4 != (u32 *)0x0) {
        uVar8 = puVar5[1];
        uVar10 = puVar5[2];
        *puVar4 = *puVar5;
        puVar4[1] = uVar8;
        puVar4[2] = uVar10;
        puVar4[3] = puVar5[3];
      }
      puVar4 = puVar4 + 4;
    }
    iVar7 = iStack_40;
    if (iStack_40 == 1) {
      if (puVar4 != (u32 *)0x0) {
        *puVar4 = uStack_5c;
        puVar4[1] = uStack_58;
        puVar4[2] = uStack_54;
        puVar4[3] = uStack_50;
      }
      puVar4 = puVar4 + 4;
    }
    else {
      for (; iVar7 != 0; iVar7 = iVar7 + -1) {
        if (puVar4 != (u32 *)0x0) {
          *puVar4 = uStack_5c;
          puVar4[1] = uStack_58;
          puVar4[2] = uStack_54;
          puVar4[3] = uStack_50;
        }
        puVar4 = puVar4 + 4;
      }
    }
    iVar6 = *piVar9;
    for (iVar7 = iVar6; iVar7 != piVar9[1]; iVar7 = iVar7 + 0x10) {
    }
    if (iVar6 != 0) {
      LibC_free(iVar6);
    }
    *piVar9 = (int)puStack_28;
    piVar9[1] = (int)puVar4;
    piVar9[3] = (int)puStack_28 + iVar1;
  }
  else {
    if (puVar4 != (u32 *)0x0) {
      *puVar4 = uStack_5c;
      puVar4[1] = uStack_58;
      puVar4[2] = uStack_54;
      puVar4[3] = uStack_50;
    }
    piVar9[1] = piVar9[1] + 0x10;
  }
  code_0803EE94_7868_Sub_080CAE60(param_1,(u32)*(u8 *)((int)puStack_34 + 1) * 0x40 +
                        (uStack_3c & 0xff) * 2 + 0x0600F080,0x54,2,1,0,0x20);
  if (1 < param_5) {
    code_0803EE94_7838_Sub_080CAEEC(param_1,param_5,
                  (u32)*(u8 *)((int)puStack_34 + 1) * 0x40 +
                  (u32)(u8)*puStack_34 * 2 + 0x0600F082,0x20,0,0x20);
  }
}

/* 0x080CCA40 (776B) | SpriteAnimEngine_Sub_080CCA40 (orig: func_080CCA40) | origin: wip | domain: SpriteAnimEngine | MEDIUM / tu_interp */
void SpriteAnimEngine_Sub_080CCA40(int param_1,int param_2,u32 param_3,u32 param_4,u32 param_5) {
  int iVar1;
  int *piVar2;
  u32 uVar3;
  u32 *puVar4;
  u32 *puVar5;
  int iVar6;
  int iVar7;
  u32 uVar8;
  int *piVar9;
  u32 uVar10;
  u32 uStack_60;
  u32 uStack_5c;
  u32 uStack_58;
  u32 uStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  u32 uStack_40;
  u32 uStack_3c;
  int iStack_38;
  u32 *puStack_34;
  int iStack_30;
  u32 *puStack_2c;
  u32 *puStack_28;
  u32 *puStack_24;
  uStack_3c = param_4;
  code_809E804_SetField_0x04(param_2 * 0xc + param_1 + 0x218,param_3,param_4,param_5);
  iVar1 = param_2 * 8 + param_1;
  iVar1 = hardware_Sub_08007D4C(iVar1 + 0x2ac,*(u32 *)(iVar1 + 0x2b0));
  iVar7 = param_2 * 8 + param_1;
  iStack_38 = hardware_Sub_080074C0(iVar7 + 0x2ec,*(u32 *)(iVar7 + 0x2f0));
  uVar3 = *(u32 *)(param_2 * 4 + 0x08117860);
  uStack_40 = uVar3 & 0xFFFFFF00 | uVar3 + 0xf & 0xff;
  piVar9 = *(int **)(param_1 + 0x278);
  hardware_Sub_08008F0C(&uStack_60,param_3,iVar1 * 0x20 + 0x06010000,0x80);
  puVar4 = (u32 *)piVar9[1];
  if (puVar4 == (u32 *)piVar9[3]) {
    iStack_4c = 1;
    puVar5 = (u32 *)*piVar9;
    iStack_50 = (int)puVar4 - (int)puVar5 >> 4;
    piVar2 = &iStack_50;
    if (iStack_50 == 0) {
      piVar2 = &iStack_4c;
    }
    puStack_2c = puVar4;
    if (iStack_50 + *piVar2 == 0) {
      puStack_28 = (u32 *)0x0;
      iVar1 = 0;
    }
    else {
      iVar1 = (iStack_50 + *piVar2) * 0x10;
      puStack_28 = (u32 *)LibC_malloc(iVar1);
      if (puStack_28 == (u32 *)0x0) {
        puStack_28 = (u32 *)code_linkonce_Sub_080D3BC0(iVar1);
      }
      puVar5 = (u32 *)*piVar9;
    }
    iStack_30 = iStack_38 << 5;
    puStack_34 = &uStack_40;
    puVar4 = puStack_28;
    for (; puVar5 != puStack_2c; puVar5 = puVar5 + 4) {
      if (puVar4 != (u32 *)0x0) {
        uVar8 = puVar5[1];
        uVar10 = puVar5[2];
        *puVar4 = *puVar5;
        puVar4[1] = uVar8;
        puVar4[2] = uVar10;
        puVar4[3] = puVar5[3];
      }
      puVar4 = puVar4 + 4;
    }
    iVar7 = iStack_4c;
    if (iStack_4c == 1) {
      if (puVar4 != (u32 *)0x0) {
        *puVar4 = uStack_60;
        puVar4[1] = uStack_5c;
        puVar4[2] = uStack_58;
        puVar4[3] = uStack_54;
      }
      puVar4 = puVar4 + 4;
    }
    else {
      for (; iVar7 != 0; iVar7 = iVar7 + -1) {
        if (puVar4 != (u32 *)0x0) {
          *puVar4 = uStack_60;
          puVar4[1] = uStack_5c;
          puVar4[2] = uStack_58;
          puVar4[3] = uStack_54;
        }
        puVar4 = puVar4 + 4;
      }
    }
    iVar6 = *piVar9;
    for (iVar7 = iVar6; iVar7 != piVar9[1]; iVar7 = iVar7 + 0x10) {
    }
    if (iVar6 != 0) {
      LibC_free(iVar6);
    }
    *piVar9 = (int)puStack_28;
    piVar9[1] = (int)puVar4;
    piVar9[3] = (int)puStack_28 + iVar1;
  }
  else {
    if (puVar4 != (u32 *)0x0) {
      *puVar4 = uStack_60;
      puVar4[1] = uStack_5c;
      puVar4[2] = uStack_58;
      puVar4[3] = uStack_54;
    }
    piVar9[1] = piVar9[1] + 0x10;
    iStack_30 = iStack_38 << 5;
    puStack_34 = &uStack_40;
  }
  piVar9 = *(int **)(param_1 + 0x278);
  hardware_Sub_08008F0C(&uStack_60,uStack_3c,iStack_30 + 0x05000200,0x20);
  puVar4 = (u32 *)piVar9[1];
  if (puVar4 == (u32 *)piVar9[3]) {
    iStack_44 = 1;
    puVar5 = (u32 *)*piVar9;
    iStack_48 = (int)puVar4 - (int)puVar5 >> 4;
    piVar2 = &iStack_48;
    if (iStack_48 == 0) {
      piVar2 = &iStack_44;
    }
    puStack_24 = puVar4;
    if (iStack_48 + *piVar2 == 0) {
      puVar4 = (u32 *)0x0;
      iVar1 = 0;
      puStack_28 = puVar4;
    }
    else {
      iVar1 = (iStack_48 + *piVar2) * 0x10;
      puVar4 = (u32 *)LibC_malloc(iVar1);
      if (puVar4 == (u32 *)0x0) {
        puVar4 = (u32 *)code_linkonce_Sub_080D3BC0(iVar1);
      }
      puVar5 = (u32 *)*piVar9;
      puStack_28 = puVar4;
    }
    for (; puVar5 != puStack_24; puVar5 = puVar5 + 4) {
      if (puVar4 != (u32 *)0x0) {
        uVar8 = puVar5[1];
        uVar10 = puVar5[2];
        *puVar4 = *puVar5;
        puVar4[1] = uVar8;
        puVar4[2] = uVar10;
        puVar4[3] = puVar5[3];
      }
      puVar4 = puVar4 + 4;
    }
    iVar7 = iStack_44;
    if (iStack_44 == 1) {
      if (puVar4 != (u32 *)0x0) {
        *puVar4 = uStack_60;
        puVar4[1] = uStack_5c;
        puVar4[2] = uStack_58;
        puVar4[3] = uStack_54;
      }
      puVar4 = puVar4 + 4;
    }
    else {
      for (; iVar7 != 0; iVar7 = iVar7 + -1) {
        if (puVar4 != (u32 *)0x0) {
          *puVar4 = uStack_60;
          puVar4[1] = uStack_5c;
          puVar4[2] = uStack_58;
          puVar4[3] = uStack_54;
        }
        puVar4 = puVar4 + 4;
      }
    }
    iVar6 = *piVar9;
    for (iVar7 = iVar6; iVar7 != piVar9[1]; iVar7 = iVar7 + 0x10) {
    }
    if (iVar6 != 0) {
      LibC_free(iVar6);
    }
    *piVar9 = (int)puStack_28;
    piVar9[1] = (int)puVar4;
    piVar9[3] = (int)puStack_28 + iVar1;
  }
  else {
    if (puVar4 != (u32 *)0x0) {
      *puVar4 = uStack_60;
      puVar4[1] = uStack_5c;
      puVar4[2] = uStack_58;
      puVar4[3] = uStack_54;
    }
    piVar9[1] = piVar9[1] + 0x10;
  }
  code_0803EE94_7868_Sub_080CAE60(param_1,(u32)*(u8 *)((int)puStack_34 + 1) * 0x40 +
                        (uStack_40 & 0xff) * 2 + 0x0600F080,0x54,2,1,0,0x20);
  if (1 < param_5) {
    code_0803EE94_7838_Sub_080CAEEC(param_1,param_5,
                  (u32)*(u8 *)((int)puStack_34 + 1) * 0x40 +
                  (u32)(u8)*puStack_34 * 2 + 0x0600F082,0x20,0,0x20);
  }
}

/* 0x080CCD48 (164B) | SpriteAnimEngine_Sub_080CCD48 (orig: func_080CCD48) | origin: wip | domain: SpriteAnimEngine | MEDIUM / graph_algebra */
void SpriteAnimEngine_Sub_080CCD48(int param_1,int param_2,u32 param_3) {
  u32 uVar1;
  u32 uVar2;
  SpriteAnimEngine_5A28_SetField_0x00(param_2 * 0xc + param_1 + 0x218,param_3);
  uVar2 = (u16)*(short *)(param_2 * 4 + 0x08117860);
  uVar1 = uVar2 + 0xf & 0xff;
  uVar2 = uVar2 & 0xFFFFFF00;
  code_0803EE94_7868_Sub_080CAE60(param_1,((uVar2 & 0xff00) >> 8) * 0x40 + (uVar2 & 0xff | uVar1) * 2 + 0x0600F080,
                0x54,2,1,0,0x20);
  if (1 < param_3) {
    code_0803EE94_7838_Sub_080CAEEC(param_1,param_3,
                  ((uVar2 & 0xff00) >> 8) * 0x40 + (uVar2 & 0xff | uVar1) * 2 + 0x0600F082,0x20,0
                  ,0x20);
  }
}

/* 0x080CCE58 (756B) | SpriteAnimEngine_Sub_080CCE58 (orig: func_080CCE58) | origin: wip | domain: SpriteAnimEngine | MEDIUM / graph_algebra */
void SpriteAnimEngine_Sub_080CCE58(int param_1,u32 param_2,u16 param_3,u32 param_4) {
  int iVar1;
  int *piVar2;
  int iVar3;
  u32 uVar4;
  u32 *puVar5;
  u32 *puVar6;
  int iVar7;
  u32 uVar8;
  u32 uVar9;
  int *piVar10;
  u32 uVar11;
  u32 uStack_5c;
  u32 uStack_58;
  u32 uStack_54;
  u32 uStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  u32 uStack_3c;
  u32 uStack_38;
  int iStack_34;
  int iStack_30;
  u32 *puStack_2c;
  u32 *puStack_28;
  u32 *puStack_24;
  uStack_38 = param_4;
  SpriteAnimEngine_5A28_Ctor_AD18(param_1 + 0x280,param_2,param_3);
  iVar1 = hardware_Sub_08007D4C(param_1 + 0x29c,*(u32 *)(param_1 + 0x2a0));
  iStack_34 = hardware_Sub_080074C0(param_1 + 0x2a4,*(u32 *)(param_1 + 0x2a8));
  piVar10 = *(int **)(param_1 + 0x278);
  hardware_Sub_08008F0C(&uStack_5c,*(u32 *)(param_1 + 0x284),iVar1 * 0x20 + 0x06010000,0x80);
  puVar5 = (u32 *)piVar10[1];
  if (puVar5 == (u32 *)piVar10[3]) {
    iStack_48 = 1;
    puVar6 = (u32 *)*piVar10;
    iStack_4c = (int)puVar5 - (int)puVar6 >> 4;
    piVar2 = &iStack_4c;
    if (iStack_4c == 0) {
      piVar2 = &iStack_48;
    }
    puStack_28 = puVar5;
    if (iStack_4c + *piVar2 == 0) {
      puStack_24 = (u32 *)0x0;
      iVar1 = 0;
    }
    else {
      iVar1 = (iStack_4c + *piVar2) * 0x10;
      puStack_24 = (u32 *)LibC_malloc(iVar1);
      if (puStack_24 == (u32 *)0x0) {
        puStack_24 = (u32 *)code_linkonce_Sub_080D3BC0(iVar1);
      }
      puVar6 = (u32 *)*piVar10;
    }
    iStack_30 = iStack_34 << 5;
    puStack_2c = &uStack_3c;
    puVar5 = puStack_24;
    for (; puVar6 != puStack_28; puVar6 = puVar6 + 4) {
      if (puVar5 != (u32 *)0x0) {
        uVar9 = puVar6[1];
        uVar11 = puVar6[2];
        *puVar5 = *puVar6;
        puVar5[1] = uVar9;
        puVar5[2] = uVar11;
        puVar5[3] = puVar6[3];
      }
      puVar5 = puVar5 + 4;
    }
    iVar3 = iStack_48;
    if (iStack_48 == 1) {
      if (puVar5 != (u32 *)0x0) {
        *puVar5 = uStack_5c;
        puVar5[1] = uStack_58;
        puVar5[2] = uStack_54;
        puVar5[3] = uStack_50;
      }
      puVar5 = puVar5 + 4;
    }
    else {
      for (; iVar3 != 0; iVar3 = iVar3 + -1) {
        if (puVar5 != (u32 *)0x0) {
          *puVar5 = uStack_5c;
          puVar5[1] = uStack_58;
          puVar5[2] = uStack_54;
          puVar5[3] = uStack_50;
        }
        puVar5 = puVar5 + 4;
      }
    }
    iVar7 = *piVar10;
    for (iVar3 = iVar7; iVar3 != piVar10[1]; iVar3 = iVar3 + 0x10) {
    }
    if (iVar7 != 0) {
      LibC_free(iVar7);
    }
    *piVar10 = (int)puStack_24;
    piVar10[1] = (int)puVar5;
    piVar10[3] = (int)puStack_24 + iVar1;
  }
  else {
    if (puVar5 != (u32 *)0x0) {
      *puVar5 = uStack_5c;
      puVar5[1] = uStack_58;
      puVar5[2] = uStack_54;
      puVar5[3] = uStack_50;
    }
    piVar10[1] = piVar10[1] + 0x10;
    iStack_30 = iStack_34 << 5;
    puStack_2c = &uStack_3c;
  }
  piVar10 = *(int **)(param_1 + 0x278);
  hardware_Sub_08008F0C(&uStack_5c,*(u32 *)(param_1 + 0x288),iStack_30 + 0x05000200,0x20);
  puVar5 = (u32 *)piVar10[1];
  if (puVar5 == (u32 *)piVar10[3]) {
    iStack_40 = 1;
    puVar6 = (u32 *)*piVar10;
    iStack_44 = (int)puVar5 - (int)puVar6 >> 4;
    piVar2 = &iStack_44;
    if (iStack_44 == 0) {
      piVar2 = &iStack_40;
    }
    puStack_28 = puVar5;
    if (iStack_44 + *piVar2 == 0) {
      puVar5 = (u32 *)0x0;
      iVar1 = 0;
      puStack_24 = puVar5;
    }
    else {
      iVar1 = (iStack_44 + *piVar2) * 0x10;
      puVar5 = (u32 *)LibC_malloc(iVar1);
      if (puVar5 == (u32 *)0x0) {
        puVar5 = (u32 *)code_linkonce_Sub_080D3BC0(iVar1);
      }
      puVar6 = (u32 *)*piVar10;
      puStack_24 = puVar5;
    }
    for (; puVar6 != puStack_28; puVar6 = puVar6 + 4) {
      if (puVar5 != (u32 *)0x0) {
        uVar9 = puVar6[1];
        uVar11 = puVar6[2];
        *puVar5 = *puVar6;
        puVar5[1] = uVar9;
        puVar5[2] = uVar11;
        puVar5[3] = puVar6[3];
      }
      puVar5 = puVar5 + 4;
    }
    iVar3 = iStack_40;
    if (iStack_40 == 1) {
      if (puVar5 != (u32 *)0x0) {
        *puVar5 = uStack_5c;
        puVar5[1] = uStack_58;
        puVar5[2] = uStack_54;
        puVar5[3] = uStack_50;
      }
      puVar5 = puVar5 + 4;
    }
    else {
      for (; iVar3 != 0; iVar3 = iVar3 + -1) {
        if (puVar5 != (u32 *)0x0) {
          *puVar5 = uStack_5c;
          puVar5[1] = uStack_58;
          puVar5[2] = uStack_54;
          puVar5[3] = uStack_50;
        }
        puVar5 = puVar5 + 4;
      }
    }
    iVar7 = *piVar10;
    for (iVar3 = iVar7; iVar3 != piVar10[1]; iVar3 = iVar3 + 0x10) {
    }
    if (iVar7 != 0) {
      LibC_free(iVar7);
    }
    *piVar10 = (int)puStack_24;
    piVar10[1] = (int)puVar5;
    piVar10[3] = (int)puStack_24 + iVar1;
  }
  else {
    if (puVar5 != (u32 *)0x0) {
      *puVar5 = uStack_5c;
      puVar5[1] = uStack_58;
      puVar5[2] = uStack_54;
      puVar5[3] = uStack_50;
    }
    piVar10[1] = piVar10[1] + 0x10;
  }
  uVar4 = *(u16 *)0x0811785C + 0xf & 0xff;
  uVar8 = *(u16 *)0x0811785C & 0xFFFFFF00;
  uStack_3c = uVar8 | uVar4;
  code_0803EE94_7868_Sub_080CAE60(param_1,(u32)*(u8 *)((int)puStack_2c + 1) * 0x40 +
                        (uVar8 & 0xff | uVar4) * 2 + 0x0600F080,0x54,2,1,0,0x20);
  if (1 < uStack_38) {
    code_0803EE94_7838_Sub_080CAEEC(param_1,uStack_38,
                  (u32)*(u8 *)((int)puStack_2c + 1) * 0x40 +
                  (u32)(u8)*puStack_2c * 2 + 0x0600F082,0x20,0,0x20);
  }
}

/* 0x080CEB80 (64B) | SpriteAnimEngine_Sub_080CEB80 (orig: func_080CEB80) | origin: wip | domain: SpriteAnimEngine | MEDIUM / graph_algebra */
u32 SpriteAnimEngine_Sub_080CEB80(int param_1) {
  register s8 uVar1;
  uVar1 = *(u32 *)(param_1 + 0xbc);
  if ((u16)uVar1 < 7) {
    uVar1 = uVar1 + 1;
  }
  else {
  *(u32 *)(param_1 + 0xbc) = (u16)uVar1;
  }
    uVar1 = 0;
  hardware_Sub_080CE510(param_1,*(int *)(param_1 + 0xbc) + 1,0x0600F0F6,0x20,0,0x20);
  return (*(int *)(param_1 + 0xbc));
}

/* 0x080CEBC0 (64B) | SpriteAnimEngine_Sub_080CEBC0 (orig: func_080CEBC0) | origin: pure | domain: SpriteAnimEngine | MEDIUM / graph_algebra */
extern void hardware_Sub_080CE510();
int SpriteAnimEngine_Sub_080CEBC0(int param_1) {
    int *p = (int *)(param_1 + 0xbc);
    if (*p != 0) {
        (*p)--;
    } else {
        *p = 7;
    }
    hardware_Sub_080CE510(param_1, *(int *)(param_1 + 0xbc) + 1, 0x0600F0F6, 0x20, 0, 0x20);
    return *(int *)(param_1 + 0xbc);
}

