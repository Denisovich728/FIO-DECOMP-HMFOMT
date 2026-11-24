/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_entities_08034CEC_736C (2 functions) */
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

/* 0x08038820 (264B) | code_entities_08034CEC_736C_Dtor (orig: func_08038820) | origin: wip | domain: code_entities_08034CEC_736C | HIGH / vtable_algebra */
u32 code_entities_08034CEC_736C_Dtor(u32 *self,u32 *param_2) {
  int iVar1;
  int *piVar2;
  u32 uVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  u16 *apuStack_28 [2];
  *self = param_2;
  self[1] = 0x080E736C;
  if ((((u32)(*(u8 *)(param_2[6] + 0x54)) << 25) >> 25) >> 5 == 1) {
    iVar1 = CppRuntime_builtin_new(0x4c);
    piVar4 = (int *)*param_2;
    piVar2 = (int *)func_080D3910(piVar4,*(u32 *)(*piVar4 + 0x74));
    code_809E804_82D8_Ctor_4740(iVar1,piVar4,6,0x1b);
    *(u32 *)(iVar1 + 0x24) = 0x080E602C;
    iVar5 = *piVar2;
    func_080D3918(apuStack_28,piVar2,0,*(u32 *)(iVar5 + 0xc));
    func_080D3918(iVar1 + 0x28,piVar2,*apuStack_28[0],*(u32 *)(iVar5 + 0x10));
    *(u8 *)(iVar1 + 0x48) = 1;
  }
  else {
    iVar1 = 0;
  }
  self[2] = iVar1;
  self[3] = 0;
  self[4] = 0;
  self[5] = 0;
  uVar3 = CppRuntime_builtin_new(0x194);
  piVar2 = (int *)code_entities_08034CEC_736C_Sub_080DCB7C(uVar3,*(u32 *)*self,
                                (((u32)(*(u8 *)(param_2[6] + 0x5d)) << 28) >> 28) >> 2 == 1);
  piVar4 = (int *)self[5];
  if ((piVar2 != piVar4) && (piVar4 != (int *)0x0)) {
    iVar1 = *piVar4;
    for (piVar6 = piVar4 + 1; piVar6 != piVar4 + iVar1 * 0x14 + 1; piVar6 = piVar6 + 0x14) {
      code_809E804_82D8_Dtor(piVar6,2);
    }
    CppRuntime_builtin_delete(piVar4);
  }
  self[5] = piVar2;
  return (self);
}

/* 0x08038A70 (896B) | code_entities_08034CEC_736C_vfunc_10 (orig: func_08038A70) | origin: wip | domain: code_entities_08034CEC_736C | HIGH / vtable_algebra */
void code_entities_08034CEC_736C_vfunc_10(int self,u32 *param_2) {
  u32 uVar1;
  char cVar2;
  u32 *puVar3;
  u32 *puVar4;
  int iVar5;
  int iVar6;
  u32 *puVar7;
  u8 auStack_98 [8];
  u8 auStack_90 [8];
  u8 auStack_88 [16];
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
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  u32 *puStack_44;
  u32 uStack_40;
  u32 uStack_3c;
  u32 uStack_38;
  int iStack_34;
  u32 uStack_30;
  int iStack_2c;
  u16 *puStack_28;
  u32 *puStack_24;
  iStack_4c = (int)*(short *)(param_2 + 3);
  iStack_48 = (int)*(short *)((int)param_2 + 0xe);
  uStack_78 = *param_2;
  uStack_74 = param_2[2];
  puVar3 = *(u32 **)(self + 0x14);
  iStack_50 = self;
  if ((puVar3 != (u32 *)0x0) &&
     (uStack_38 = 0, puStack_44 = puVar3, uStack_40 = uStack_78, uStack_3c = uStack_74, *puVar3 != 0
     )) {
    puVar7 = puVar3 + 0x10;
    puStack_24 = puVar3 + 5;
    puVar3 = puVar3 + 1;
    do {
      uVar1 = 0x00007FFF;
      uStack_70 = uStack_40;
      uStack_6c = uStack_3c;
      if (*(char *)((int)puVar7 + 0x11) == '\0') {
        cVar2 = '\x01';
      }
      else {
        iVar5 = *(short *)((int)puVar7 + 6) - iStack_4c;
        iVar6 = (short)puVar7[2] - iStack_48;
        func_080D3918(auStack_98,(int *)puVar3[10],
                        *(u16 *)(puVar3[0xb] + (u32)(u16)puVar3[0xd] * 4),
                        *(u32 *)(*(int *)puVar3[10] + 0x10));
        if ((int)(-puVar3[2] | puVar3[2]) < 0) {
          iVar5 = func_080D391C(uStack_6c,iVar5,iVar6,0xff,uVar1,auStack_98,*puVar3,
                                  (short)puVar3[3],puStack_24);
        }
        else {
          iVar5 = 0;
        }
        if ((iVar5 != 0) && ((char)*puVar7 != '\0')) {
          hardware_Sub_080A480C(puVar3,uStack_70,auStack_90);
          if (*(char *)((int)puVar7 + 1) == '\0') {
            if (*(char *)((int)puVar7 + 2) == '\0') {
              code_809E804_Sub_080A4944(puVar3,auStack_88,1);
              *(char *)((int)puVar7 + 2) = '\x01';
            }
          }
          else {
            code_809E804_Sub_080A4944(puVar3,auStack_88,1);
          }
          *(char *)puVar7 = '\0';
        }
        cVar2 = '\0';
      }
      *(char *)((int)puVar7 + 0x11) = cVar2;
      puVar7 = puVar7 + 0x14;
      puStack_24 = puStack_24 + 0x14;
      puVar3 = puVar3 + 0x14;
      uStack_38 = uStack_38 + 1;
    } while (uStack_38 < *puStack_44);
  }
  puVar4 = *(u32 **)(iStack_50 + 8);
  if (puVar4 != (u32 *)0x0) {
    uStack_68 = uStack_78;
    uStack_64 = uStack_74;
    if ((int)(-puVar4[2] | puVar4[2]) < 0) {
      iVar5 = func_080D391C(uStack_74,300 - iStack_4c,100 - iStack_48,0xff,0x8000,puVar4 + 10,
                              *puVar4,*(u16 *)(puVar4 + 3),puVar4 + 4);
    }
    else {
      iVar5 = 0;
    }
    if ((iVar5 != 0) && (*(char *)(puVar4 + 0x12) != '\0')) {
      hardware_Sub_080A480C(puVar4,uStack_68,puVar4 + 0xc);
      code_809E804_Sub_080A4944(puVar4,puVar4 + 0xe,1);
      *(char *)(puVar4 + 0x12) = '\0';
    }
  }
  puVar4 = *(u32 **)(iStack_50 + 0xc);
  if (puVar4 != (u32 *)0x0) {
    uStack_60 = uStack_78;
    uStack_5c = uStack_74;
    if ((int)(-puVar4[2] | puVar4[2]) < 0) {
      iVar5 = func_080D391C(uStack_74,
                              (u32)*(u8 *)((int)puVar4 + 0x51) * 8 - (iStack_4c + -0xf0),
                              ((int)puVar4[0x13] >> 0x10) - iStack_48,0xff,0x8000,puVar4 + 10,
                              *puVar4,*(u16 *)(puVar4 + 3),puVar4 + 4);
    }
    else {
      iVar5 = 0;
    }
    if ((iVar5 != 0) && (*(char *)(puVar4 + 0x12) != '\0')) {
      hardware_Sub_080A480C(puVar4,uStack_60,puVar4 + 0xc);
      code_809E804_Sub_080A4944(puVar4,puVar4 + 0xe,0);
      *(char *)(puVar4 + 0x12) = '\0';
    }
  }
  iStack_34 = *(int *)(iStack_50 + 0x10);
  if (iStack_34 != 0) {
    uStack_58 = uStack_78;
    uStack_54 = uStack_74;
    uStack_30 = 0;
    iStack_2c = iStack_34 + 0x14;
    puStack_28 = 0x080F165E;
    puVar4 = (u32 *)(iStack_34 + 4);
    do {
      if (*(char *)(iStack_34 + 0x144 + uStack_30) == '\0') {
        iVar5 = (u32)*puStack_28 - iStack_4c;
        iVar6 = (u32)puStack_28[1] - iStack_48;
        func_080D3918(auStack_98,(int *)puVar4[10],
                        *(u16 *)(puVar4[0xb] + (u32)*(u16 *)(puVar4 + 0xd) * 4),
                        *(u32 *)(*(int *)puVar4[10] + 0x10));
        if ((int)(-puVar4[2] | puVar4[2]) < 0) {
          iVar5 = func_080D391C(uStack_54,iVar5,iVar6,0xff,0x8000,auStack_98,*puVar4,
                                  *(u16 *)(puVar4 + 3),iStack_2c);
        }
        else {
          iVar5 = 0;
        }
        if ((iVar5 != 0) && (*(char *)(puVar4 + 0xf) != '\0')) {
          hardware_Sub_080A480C(puVar4,uStack_58,auStack_90);
          if (*(char *)((int)puVar4 + 0x3d) == '\0') {
            if (*(char *)((int)puVar4 + 0x3e) == '\0') {
              code_809E804_Sub_080A4944(puVar4,auStack_88,1);
              *(char *)((int)puVar4 + 0x3e) = '\x01';
            }
          }
          else {
            code_809E804_Sub_080A4944(puVar4,auStack_88,1);
          }
          *(char *)(puVar4 + 0xf) = '\0';
        }
      }
      iStack_2c = iStack_2c + 0x40;
      puStack_28 = puStack_28 + 2;
      puVar4 = puVar4 + 0x10;
      uStack_30 = uStack_30 + 1;
    } while (uStack_30 < 5);
  }
}

