/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_0803EE94_7B88 (3 functions) */
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

/* 0x08076BFC (528B) | code_0803EE94_7B88_Create (orig: func_08076BFC) | origin: wip | domain: code_0803EE94_7B88 | HIGH / vtable_algebra */
u32 code_0803EE94_7B88_Create(u32 *self,u32 param_2,u32 param_3,u32 param_4,
             u32 param_5) {
  u32 uVar1;
  u32 uVar2;
  u32 uVar3;
  u32 uVar4;
  int *piVar5;
  int *piVar6;
  u32 *puVar7;
  int iVar8;
  int iVar9;
  u32 *puVar10;
  u32 uStack_4c;
  u32 uStack_48;
  u32 uStack_44;
  u32 uStack_40;
  u32 uStack_3c;
  u32 uStack_38;
  u32 uStack_34;
  int iStack_30;
  int iStack_2c;
  u32 *puStack_28;
  u32 *puStack_24;
  *(u32 *)(0x000005B4 + (int)self) = 0x080E7B88;
  *self = param_2;
  uVar1 = CppRuntime_builtin_new(0x4c);
  uVar2 = hardware_GetField_0x00_8940(param_2);
  uVar3 = hardware_GetField_0x00_8918(param_2);
  uVar1 = code_0803EE94_7B68_Ctor(uVar1,param_4,uVar2,uVar3,0x0600F000);
  self[1] = uVar1;
  *(u32 *)(0x0000058C + (int)self) = param_3;
  *(u16 *)(self + 0x164) = 0;
  puVar7 = (u32 *)(0x00000594 + (int)self);
  *puVar7 = 0;
  puVar7[1] = 0;
  *(u32 *)((int)self + 0x0000059C + 4) = 0;
  puVar7 = (u32 *)(0x000005A4 + (int)self);
  *puVar7 = 0;
  puVar7[1] = 0;
  *(u32 *)((int)self + 0x000005AC + 4) = 0;
  uStack_3c = 0x20016;
  puVar7 = self + 3;
  Code_Lib_Syscall_Wrap_CpuFastSet_E7A0(0x20016,puVar7,0);
  uVar4 = LibC_strlen(param_5);
  if ((uVar4 & 1) == 0) {
    uStack_38 = 0x20016;
    Code_Lib_Syscall_Sub_0804E8F0(0x20016,puVar7,(0x16 - uVar4) * 4,0,param_5);
  }
  else {
    uStack_34 = 0x20016;
    Code_Lib_Syscall_Sub_0804E8F0(0x20016,puVar7,(0x15 - uVar4) * 4,0,param_5);
  }
  piVar5 = (int *)hardware_GetField_0x00_8910(param_2);
  hardware_Sub_08008F0C(&uStack_4c,self + 3,0x06008020,0x580);
  puStack_28 = (u32 *)piVar5[1];
  if (puStack_28 == (u32 *)piVar5[3]) {
    iStack_2c = 1;
    iStack_30 = (int)puStack_28 - *piVar5 >> 4;
    piVar6 = &iStack_30;
    if (iStack_30 == 0) {
      piVar6 = &iStack_2c;
    }
    if (iStack_30 + *piVar6 == 0) {
      puStack_24 = (u32 *)0x0;
      iVar9 = 0;
    }
    else {
      iVar9 = (iStack_30 + *piVar6) * 0x10;
      puStack_24 = (u32 *)LibC_malloc(iVar9);
      if (puStack_24 == (u32 *)0x0) {
        puStack_24 = (u32 *)code_linkonce_Sub_080D3BC0(iVar9);
      }
    }
    puVar10 = puStack_24;
    for (puVar7 = (u32 *)*piVar5; puVar7 != puStack_28; puVar7 = puVar7 + 4) {
      if (puVar10 != (u32 *)0x0) {
        uVar1 = puVar7[1];
        uVar2 = puVar7[2];
        *puVar10 = *puVar7;
        puVar10[1] = uVar1;
        puVar10[2] = uVar2;
        puVar10[3] = puVar7[3];
      }
      puVar10 = puVar10 + 4;
    }
    iVar8 = iStack_2c;
    if (iStack_2c == 1) {
      if (puVar10 != (u32 *)0x0) {
        *puVar10 = uStack_4c;
        puVar10[1] = uStack_48;
        puVar10[2] = uStack_44;
        puVar10[3] = uStack_40;
      }
      puVar10 = puVar10 + 4;
    }
    else {
      for (; iVar8 != 0; iVar8 = iVar8 + -1) {
        if (puVar10 != (u32 *)0x0) {
          *puVar10 = uStack_4c;
          puVar10[1] = uStack_48;
          puVar10[2] = uStack_44;
          puVar10[3] = uStack_40;
        }
        puVar10 = puVar10 + 4;
      }
    }
    for (iVar8 = *piVar5; iVar8 != piVar5[1]; iVar8 = iVar8 + 0x10) {
    }
    if (*piVar5 != 0) {
      LibC_free();
    }
    *piVar5 = (int)puStack_24;
    piVar5[1] = (int)puVar10;
    piVar5[3] = (int)puStack_24 + iVar9;
  }
  else {
    if (puStack_28 != (u32 *)0x0) {
      *puStack_28 = uStack_4c;
      puStack_28[1] = uStack_48;
      puStack_28[2] = uStack_44;
      puStack_28[3] = uStack_40;
    }
    piVar5[1] = piVar5[1] + 0x10;
  }
  return (self);
}

/* 0x08076E0C (156B) | code_0803EE94_7B88_Dtor (orig: func_08076E0C) | origin: wip | domain: code_0803EE94_7B88 | HIGH / vtable_algebra */
void code_0803EE94_7B88_Dtor(int self,u32 param_2) {
  int *piVar1;
  int iVar2;
  int iVar3;
  *(u32 *)(self + 0x000005B4) = 0x080E7B88;
  piVar1 = (int *)(self + 0x000005A4);
  for (iVar2 = *piVar1; iVar2 != piVar1[1]; iVar2 = iVar2 + 0x10) {
  }
  if (*piVar1 != 0) {
    LibC_free();
  }
  piVar1 = (int *)(self + 0x00000594);
  for (iVar2 = *piVar1; iVar2 != piVar1[1]; iVar2 = iVar2 + 0x10) {
  }
  if (*piVar1 != 0) {
    LibC_free();
  }
  iVar2 = *(int *)(self + 4);
  if ((u8)iVar2 != 0) {
    code_0803EE94_7B68_Ctor_5DEC(iVar2 + 0x28,2);
    for (iVar3 = (s16)*(int *)(iVar2 + 0x18); iVar3 != *(int *)(iVar2 + 0x1c); iVar3 = iVar3 + 0x40) {
    }
    if (*(int *)(iVar2 + 0x18) != 0) {
      LibC_free();
    }
    CppRuntime_builtin_delete(iVar2);
  }
  if ((param_2 & 1) != 0) {
    CppRuntime_builtin_delete(self);
  }
}

/* 0x08076EA8 (1308B) | code_0803EE94_7B88_vfunc_0C (orig: func_08076EA8) | origin: wip | domain: code_0803EE94_7B88 | HIGH / vtable_algebra */
u32 code_0803EE94_7B88_vfunc_0C(u32 *self) {
  u8 bVar1;
  short sVar2;
  int *piVar3;
  u8 *pbVar4;
  int *piVar5;
  int iVar6;
  u32 *puVar7;
  int iVar8;
  short *psVar9;
  u32 *puVar10;
  u32 *puVar11;
  u32 uVar12;
  int iVar13;
  u32 uVar14;
  u32 uVar15;
  u32 uVar16;
  u32 uStack_84;
  u32 uStack_80;
  u32 uStack_7c;
  u32 uStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  u32 auStack_64 [2];
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int *piStack_50;
  int iStack_4c;
  int iStack_48;
  u32 *puStack_44;
  int *piStack_40;
  u32 *puStack_3c;
  u32 uStack_38;
  int iStack_34;
  u32 *puStack_30;
  int iStack_2c;
  u32 *puStack_28;
  u32 *puStack_24;
  uVar16 = 0;
  psVar9 = *(short **)(0x00000594 + (int)self);
  iVar13 = ((u32 *)(0x00000594 + (int)self))[1] - (int)psVar9 >> 4;
  if (iVar13 != 0) {
    sVar2 = *psVar9;
    while (sVar2 + 0x30 < (int)*(short *)(self + 0x164)) {
      psVar9 = psVar9 + 8;
      uVar16 = uVar16 + 1;
      if (iVar13 == 0) break;
      sVar2 = *psVar9;
    }
  }
  iStack_54 = 0;
  if (uVar16 < (u32)(((int *)(0x00000594 + (int)self))[1] -
                      *(int *)(0x00000594 + (int)self) >> 4)) {
    piStack_50 = (int *)(0x00000594 + (int)self);
    do {
      iStack_34 = uVar16 * 0x10;
      uStack_38 = uVar16 + 1;
      if ((int)*(short *)(*piStack_50 + iStack_34) <= *(short *)(self + 0x164) + 0xa0) {
        iStack_4c = iStack_54 * 4 + 0x20;
        iStack_48 = iStack_54 + 2;
        piVar3 = (int *)hardware_GetField_0x00_8910(*self);
        hardware_Sub_08008F0C(&uStack_84,*(u32 *)(*piStack_50 + iStack_34 + 8),
                      iStack_4c * 0x20 + 0x06010000,0x80);
        puStack_44 = &uStack_84;
        puVar7 = (u32 *)piVar3[1];
        if (puVar7 == (u32 *)piVar3[3]) {
          iStack_70 = 1;
          iStack_74 = (int)puVar7 - *piVar3 >> 4;
          piVar5 = &iStack_74;
          if (iStack_74 == 0) {
            piVar5 = &iStack_70;
          }
          puStack_28 = puVar7;
          if (iStack_74 + *piVar5 == 0) {
            puVar7 = (u32 *)0x0;
            iVar13 = 0;
          }
          else {
            iVar13 = (iStack_74 + *piVar5) * 0x10;
            puVar7 = (u32 *)LibC_malloc(iVar13);
            if (puVar7 == (u32 *)0x0) {
              puVar7 = (u32 *)code_linkonce_Sub_080D3BC0(iVar13);
            }
          }
          iVar8 = iStack_48;
          uStack_38 = uVar16 + 1;
          puStack_30 = auStack_64;
          iStack_2c = iStack_54 + 1;
          puVar11 = puVar7;
          for (puVar10 = (u32 *)*piVar3; puVar10 != puStack_28; puVar10 = puVar10 + 4) {
            if (puVar11 != (u32 *)0x0) {
              uVar12 = puVar10[1];
              uVar15 = puVar10[2];
              *puVar11 = *puVar10;
              puVar11[1] = uVar12;
              puVar11[2] = uVar15;
              puVar11[3] = puVar10[3];
            }
            puVar11 = puVar11 + 4;
          }
          iVar6 = iStack_70;
          if (iStack_70 == 1) {
            if (puVar11 != (u32 *)0x0) {
              uVar12 = puStack_44[1];
              uVar15 = puStack_44[2];
              *puVar11 = *puStack_44;
              puVar11[1] = uVar12;
              puVar11[2] = uVar15;
              puVar11[3] = puStack_44[3];
            }
            puVar11 = puVar11 + 4;
          }
          else {
            for (; iVar6 != 0; iVar6 = iVar6 + -1) {
              if (puVar11 != (u32 *)0x0) {
                uVar12 = puStack_44[1];
                uVar15 = puStack_44[2];
                *puVar11 = *puStack_44;
                puVar11[1] = uVar12;
                puVar11[2] = uVar15;
                puVar11[3] = puStack_44[3];
              }
              puVar11 = puVar11 + 4;
            }
          }
          for (iVar6 = *piVar3; iVar6 != piVar3[1]; iVar6 = iVar6 + 0x10) {
          }
          puStack_24 = puVar7;
          if (*piVar3 != 0) {
            LibC_free();
          }
          *piVar3 = (int)puStack_24;
          piVar3[1] = (int)puVar11;
          piVar3[3] = (int)puStack_24 + iVar13;
        }
        else {
          if (puVar7 != (u32 *)0x0) {
            *puVar7 = uStack_84;
            puVar7[1] = uStack_80;
            puVar7[2] = uStack_7c;
            puVar7[3] = uStack_78;
          }
          piVar3[1] = piVar3[1] + 0x10;
          puStack_30 = auStack_64;
          iStack_2c = iStack_54 + 1;
          iVar8 = iStack_48;
        }
        piVar3 = (int *)hardware_GetField_0x00_8910(*self);
        hardware_Sub_08008F0C(&uStack_84,*(u32 *)(*piStack_50 + iStack_34 + 0xc),
                      0x05000200 + iVar8 * 0x20,0x20);
        puVar7 = (u32 *)piVar3[1];
        if (puVar7 == (u32 *)piVar3[3]) {
          iStack_68 = 1;
          iStack_6c = (int)puVar7 - *piVar3 >> 4;
          piVar5 = &iStack_6c;
          if (iStack_6c == 0) {
            piVar5 = &iStack_68;
          }
          puStack_28 = puVar7;
          if (iStack_6c + *piVar5 == 0) {
            puVar7 = (u32 *)0x0;
            iVar13 = 0;
          }
          else {
            iVar13 = (iStack_6c + *piVar5) * 0x10;
            puVar7 = (u32 *)LibC_malloc(iVar13);
            if (puVar7 == (u32 *)0x0) {
              puVar7 = (u32 *)code_linkonce_Sub_080D3BC0(iVar13);
            }
          }
          puVar11 = puVar7;
          for (puVar10 = (u32 *)*piVar3; puVar10 != puStack_28; puVar10 = puVar10 + 4) {
            if (puVar11 != (u32 *)0x0) {
              uVar12 = puVar10[1];
              uVar15 = puVar10[2];
              *puVar11 = *puVar10;
              puVar11[1] = uVar12;
              puVar11[2] = uVar15;
              puVar11[3] = puVar10[3];
            }
            puVar11 = puVar11 + 4;
          }
          iVar8 = iStack_68;
          if (iStack_68 == 1) {
            if (puVar11 != (u32 *)0x0) {
              *puVar11 = uStack_84;
              puVar11[1] = uStack_80;
              puVar11[2] = uStack_7c;
              puVar11[3] = uStack_78;
            }
            puVar11 = puVar11 + 4;
          }
          else {
            for (; iVar8 != 0; iVar8 = iVar8 + -1) {
              if (puVar11 != (u32 *)0x0) {
                *puVar11 = uStack_84;
                puVar11[1] = uStack_80;
                puVar11[2] = uStack_7c;
                puVar11[3] = uStack_78;
              }
              puVar11 = puVar11 + 4;
            }
          }
          for (iVar8 = *piVar3; iVar8 != piVar3[1]; iVar8 = iVar8 + 0x10) {
          }
          puStack_24 = puVar7;
          if (*piVar3 != 0) {
            LibC_free();
          }
          *piVar3 = (int)puStack_24;
          piVar3[1] = (int)puVar11;
          piVar3[3] = (int)puStack_24 + iVar13;
        }
        else {
          if (puVar7 != (u32 *)0x0) {
            *puVar7 = uStack_84;
            puVar7[1] = uStack_80;
            puVar7[2] = uStack_7c;
            puVar7[3] = uStack_78;
          }
          piVar3[1] = piVar3[1] + 0x10;
        }
        pbVar4 = (u8 *)hardware_GetField_0x00_8920(*self);
        code_0803EE94_Sub_0804EA94(puStack_30,*(u32 *)((short *)(*piStack_50 + iStack_34) + 2),
                      (int)*(short *)(*piStack_50 + iStack_34) - (int)*(short *)(self + 0x164),
                      iStack_4c,iStack_48,1,1,0);
        bVar1 = *pbVar4;
        if (bVar1 < 0x80) {
          *(u32 *)(pbVar4 + (u32)bVar1 * 8 + 4) = auStack_64[0];
          *(u16 *)(pbVar4 + (u32)bVar1 * 8 + 4 + 4) = *(u16 *)(puStack_30 + 1);
          *pbVar4 = bVar1 + 1;
        }
        iStack_54 = iStack_2c;
      }
      uVar16 = uStack_38;
    } while (uStack_38 < (u32)(piStack_50[1] - *piStack_50 >> 4));
  }
  uVar16 = 0;
  psVar9 = *(short **)(0x000005A4 + (int)self);
  uVar14 = ((u32 *)(0x000005A4 + (int)self))[1] - (int)psVar9 >> 4;
  if (uVar14 != 0) {
    sVar2 = *psVar9;
    while (sVar2 + 0x30 < (int)*(short *)(self + 0x164)) {
      psVar9 = psVar9 + 8;
      uVar16 = uVar16 + 1;
      if (uVar14 <= uVar16) break;
      sVar2 = *psVar9;
    }
    if (uVar16 < (u32)(((int *)(0x000005A4 + (int)self))[1] -
                        *(int *)(0x000005A4 + (int)self) >> 4)) {
      piStack_40 = (int *)(0x000005A4 + (int)self);
      do {
        piVar3 = piStack_40;
        uStack_38 = uVar16 + 1;
        if ((int)*(short *)(*piStack_40 + uVar16 * 0x10) <= *(short *)(self + 0x164) + 0xa0) {
          piVar5 = (int *)hardware_GetField_0x00_8910(*self);
          iVar13 = *piVar3 + uVar16 * 0x10;
          hardware_Sub_08008F0C(&uStack_84,*(u32 *)(iVar13 + 4),*(u32 *)(iVar13 + 8),
                        *(u32 *)(iVar13 + 0xc));
          puStack_3c = &uStack_84;
          puVar7 = (u32 *)piVar5[1];
          if (puVar7 == (u32 *)piVar5[3]) {
            iStack_58 = 1;
            iStack_5c = (int)puVar7 - *piVar5 >> 4;
            piVar3 = &iStack_5c;
            if (iStack_5c == 0) {
              piVar3 = &iStack_58;
            }
            puStack_28 = puVar7;
            if (iStack_5c + *piVar3 == 0) {
              puVar7 = (u32 *)0x0;
              iVar13 = 0;
            }
            else {
              iVar13 = (iStack_5c + *piVar3) * 0x10;
              puVar7 = (u32 *)LibC_malloc(iVar13);
              if (puVar7 == (u32 *)0x0) {
                puVar7 = (u32 *)code_linkonce_Sub_080D3BC0(iVar13);
              }
            }
            uStack_38 = uVar16 + 1;
            puVar10 = puVar7;
            for (puVar11 = (u32 *)*piVar5; puVar11 != puStack_28; puVar11 = puVar11 + 4) {
              if (puVar10 != (u32 *)0x0) {
                uVar12 = puVar11[1];
                uVar15 = puVar11[2];
                *puVar10 = *puVar11;
                puVar10[1] = uVar12;
                puVar10[2] = uVar15;
                puVar10[3] = puVar11[3];
              }
              puVar10 = puVar10 + 4;
            }
            iVar8 = iStack_58;
            if (iStack_58 == 1) {
              if (puVar10 != (u32 *)0x0) {
                uVar12 = puStack_3c[1];
                uVar15 = puStack_3c[2];
                *puVar10 = *puStack_3c;
                puVar10[1] = uVar12;
                puVar10[2] = uVar15;
                puVar10[3] = puStack_3c[3];
              }
              puVar10 = puVar10 + 4;
            }
            else {
              for (; iVar8 != 0; iVar8 = iVar8 + -1) {
                if (puVar10 != (u32 *)0x0) {
                  uVar12 = puStack_3c[1];
                  uVar15 = puStack_3c[2];
                  *puVar10 = *puStack_3c;
                  puVar10[1] = uVar12;
                  puVar10[2] = uVar15;
                  puVar10[3] = puStack_3c[3];
                }
                puVar10 = puVar10 + 4;
              }
            }
            for (iVar8 = *piVar5; iVar8 != piVar5[1]; iVar8 = iVar8 + 0x10) {
            }
            puStack_24 = puVar7;
            if (*piVar5 != 0) {
              LibC_free();
            }
            *piVar5 = (int)puStack_24;
            piVar5[1] = (int)puVar10;
            piVar5[3] = (int)puStack_24 + iVar13;
          }
          else {
            if (puVar7 != (u32 *)0x0) {
              *puVar7 = uStack_84;
              puVar7[1] = uStack_80;
              puVar7[2] = uStack_7c;
              puVar7[3] = uStack_78;
            }
            piVar5[1] = piVar5[1] + 0x10;
          }
        }
        uVar16 = uStack_38;
      } while (uStack_38 < (u32)(piStack_40[1] - *piStack_40 >> 4));
    }
  }
  SpriteAnimEngine_5B80_HW_IO_0x016(self[1],(int)*(short *)(self + 0x164));
  return (1);
}

