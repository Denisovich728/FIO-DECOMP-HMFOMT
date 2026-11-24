/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_809E804_82E4 (12 functions) */
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

/* 0x080A4B6C (128B) | code_809E804_82E4_Dtor (orig: func_080A4B6C) | origin: wip | domain: code_809E804_82E4 | HIGH / vtable_algebra */
void code_809E804_82E4_Dtor(int self,u32 param_2) {
  u8 uVar2;
  int *piVar3;
  register int *piVar1;
  *(u32 *)(self + 0x90) = 0x080E82E4;
  if (*(int *)(0x2c + self) != (u16)0) {
    CppRuntime_builtin_vec_delete(self);
  }
  uVar2 = 0;
  piVar3 = (u32)(int *)(self + 0x1c);
  piVar1 = (int *)(0x10 + self);
  do {
    if (*piVar1 != 0) {
      CppRuntime_builtin_vec_delete();
    }
    piVar1 = piVar1 + 1;
    uVar2 = uVar2 + 1;
  } while (uVar2 < 3);
  uVar2 = 0;
  do {
    if (*piVar3 != 0) {
    piVar3 = piVar3 + 1;
    }
      CppRuntime_builtin_vec_delete();
  hardware_Dtor_98AC(self + 0x5c,2);
  } while (3 > uVar2);
    uVar2 = 1 + uVar2;
  if ((1 & param_2) != (s16)0) {
    CppRuntime_builtin_delete(self);
  }
}

/* 0x080A5760 (396B) | code_809E804_82E4_vfunc_14 (orig: func_080A5760) | origin: wip | domain: code_809E804_82E4 | HIGH / vtable_algebra */
void code_809E804_82E4_vfunc_14(int self,u32 param_2,u32 param_3,u32 param_4) {
  u32 uVar1;
  int iVar2;
  u32 uVar3;
  int iVar4;
  u32 *puVar5;
  u32 *puVar6;
  u32 uVar7;
  u32 uVar8;
  u32 uVar9;
  u8 *puStack_44;
  u8 *puStack_40;
  u8 *puStack_3c;
  u8 *puStack_38;
  u8 *puStack_34;
  u8 *puStack_30;
  u8 *puStack_2c;
  u8 *puStack_28;
  u8 *puStack_24;
  uVar1 = func_080D3910(self,*(u32 *)(*(int *)(self + 0x90) + 0x18));
  *(u32 *)(self + 4) = uVar1;
  iVar2 = Code_809E804_GetMapData();
  if ((*(int *)(iVar2 + 0x1c) == 0) || (*(int *)(iVar2 + 0x18) == 0)) {
    puVar5 = *(u32 **)(self + 0x2c);
    puVar6 = puVar5 + 0x3c80;
    for (; puVar5 != puVar6; puVar5 = puVar5 + 1) {
      *puVar5 = 0;
    }
  }
  else {
    uVar8 = 0;
    if (*(short *)(iVar2 + 0x22) != 0) {
      do {
        uVar7 = 0;
        uVar3 = (u32)*(u16 *)(iVar2 + 0x20);
        uVar9 = uVar8 + 1;
        if (uVar3 != 0) {
          do {
            iVar4 = uVar7 + uVar3 * uVar8;
            *(u32 *)(iVar4 * 4 + *(int *)(self + 0x2c)) =
                 *(u32 *)
                  ((u32)*(u8 *)(*(int *)(iVar2 + 0x1c) + iVar4) * 4 + *(int *)(iVar2 + 0x18));
            uVar7 = uVar7 + 1;
            uVar3 = (u32)*(u16 *)(iVar2 + 0x20);
          } while (uVar7 < uVar3);
        }
        uVar8 = uVar9;
      } while (uVar9 < *(u16 *)(iVar2 + 0x22));
    }
  }
  puStack_24 = (u8 *)(self + 0x38);
  puStack_28 = (u8 *)(self + 0x34);
  puStack_2c = (u8 *)(self + 0x30);
  puStack_30 = (u8 *)(self + 0x28);
  puStack_34 = (u8 *)(self + 0x58);
  puStack_38 = (u8 *)(self + 0x54);
  puStack_3c = (u8 *)(self + 0x50);
  puStack_40 = (u8 *)(self + 0x4c);
  puStack_44 = (u8 *)(self + 0x48);
  func_080D3910(self,*(u32 *)(*(int *)(self + 0x90) + 0x20));
  code_809E804_82E4_Sub_080A5D14(self,param_2);
  code_809E804_82E4_Sub_080A5DFC(self,param_3,param_4);
  *puStack_30 = 1;
  *puStack_2c = 0;
  *(u8 *)(self + 0x31) = 0;
  *puStack_28 = 0;
  *(u8 *)(self + 0x35) = 0;
  *puStack_24 = 0;
  *(u8 *)(self + 0x39) = 0;
  *(u8 *)(self + 0x3c) = 0;
  *(u8 *)(self + 0x3d) = 0;
  *(u8 *)(self + 0x40) = 0;
  *(u8 *)(self + 0x41) = 0;
  *(u8 *)(self + 0x44) = 0;
  *(u8 *)(self + 0x45) = 0;
  *puStack_44 = 0;
  *(u8 *)(self + 0x49) = 0;
  *puStack_40 = 0;
  *(u8 *)(self + 0x4d) = 0;
  *puStack_3c = 0;
  *(u8 *)(self + 0x51) = 0;
  *puStack_38 = 0;
  *(u8 *)(self + 0x55) = 0;
  *puStack_34 = 0;
}

/* 0x080A5CC0 (84B) | code_809E804_82E4_vfunc_20 (orig: func_080A5CC0) | origin: wip | domain: code_809E804_82E4 | HIGH / vtable_algebra */
void code_809E804_82E4_vfunc_20(int self) {
  int iVar1;
  int iVar2;
  u32 *puVar3;
  u32 uVar4;
  iVar1 = Code_809E804_GetMapData(*(u32 *)(self + 4));
  uVar4 = 0;
  puVar3 = (u32 *)(self + 0x10);
  do {
    iVar2 = *(int *)(iVar1 + 0xc + uVar4 * 4);
    if ((u8)iVar2 == 0) {
      hardware_HW_DMA3SAD_8EB8(0x03FF03FF,*puVar3,
                    (u32)*(u16 *)(iVar1 + 0x22) * 2 * (u32)*(u16 *)(iVar1 + 0x20));
    }
    else {
      System_UnpackData(iVar2,*puVar3);
    }
    puVar3 = puVar3 + 1;
    uVar4 = uVar4 + 1;
  } while (uVar4 < 3);
  *(u8 *)(self + 0x29) = 1;
}

/* 0x080A5D14 (164B) | code_809E804_82E4_Sub_080A5D14 (orig: func_080A5D14) | origin: pure | domain: code_809E804_82E4 | MEDIUM / tu_interp */
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
extern u32 func_080D3918();
void code_809E804_82E4_Sub_080A5D14(u32 arg0, u32 arg1, u32 arg2, u32 arg3)
{
    register u32 r0 = arg0;
    register u32 r1 = arg1;
    register u32 r2 = arg2;
    register u32 r3 = arg3;
    register u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0;
    r5 = r0 + 0;
    if (r1 == 1) goto loc_080A5D66;
    if ((int)r1 > 1) goto loc_080A5D26;
    if (r1 == 0) goto loc_080A5D4A;
    goto loc_080A5DA8;
loc_080A5D26:
    if (r1 == 2) goto loc_080A5D88;
    if (r1 != 3) goto loc_080A5DA8;
    r4 = r5 + 0;
    r4 += 0x90;
    r0 = *(u32 *)(r4);
    r3 = *(u32 *)(r0 + 0x24);
    r0 = r5 + 0;
    r1 = 3;
    r2 = 0;
    r0 = func_080D3918(r0, r1, r2, r3);
    r0 = *(u32 *)(r4);
    r3 = *(u32 *)(r0 + 0x24);
    r0 = r5 + 0;
    r1 = 0;
    goto loc_080A5D80;
loc_080A5D4A:
    r4 = r5 + 0;
    r4 += 0x90;
    r0 = *(u32 *)(r4);
    r3 = *(u32 *)(r0 + 0x24);
    r0 = r5 + 0;
    r1 = 0;
    r2 = 0;
    r0 = func_080D3918(r0, r1, r2, r3);
    r0 = *(u32 *)(r4);
    r3 = *(u32 *)(r0 + 0x24);
    r0 = r5 + 0;
    r1 = 1;
    goto loc_080A5D80;
loc_080A5D66:
    r4 = r5 + 0;
    r4 += 0x90;
    r0 = *(u32 *)(r4);
    r3 = *(u32 *)(r0 + 0x24);
    r0 = r5 + 0;
    r1 = 1;
    r2 = 0;
    r0 = func_080D3918(r0, r1, r2, r3);
    r0 = *(u32 *)(r4);
    r3 = *(u32 *)(r0 + 0x24);
    r0 = r5 + 0;
    r1 = 2;
loc_080A5D80:
    r2 = 1;
    r0 = func_080D3918(r0, r1, r2, r3);
    goto loc_080A5DA8;
loc_080A5D88:
    r4 = r5 + 0;
    r4 += 0x90;
    r0 = *(u32 *)(r4);
    r3 = *(u32 *)(r0 + 0x24);
    r0 = r5 + 0;
    r1 = 2;
    r2 = 0;
    r0 = func_080D3918(r0, r1, r2, r3);
    r0 = *(u32 *)(r4);
    r3 = *(u32 *)(r0 + 0x24);
    r0 = r5 + 0;
    r1 = 3;
    r2 = 1;
    r0 = func_080D3918(r0, r1, r2, r3);
loc_080A5DA8:
    r1 = r5 + 0;
    r1 += 0x2a;
    r0 = 1;
    *(u8 *)(r1) = r0;
    return r0;
    r0 = r0;
    return r0;
}

/* 0x080A5DB8 (68B) | code_809E804_82E4_vfunc_24 (orig: func_080A5DB8) | origin: wip | domain: code_809E804_82E4 | HIGH / vtable_algebra */
void code_809E804_82E4_vfunc_24(int self,int param_2,int param_3) {
  int iVar1;
  u32 *puVar2;
  iVar1 = Code_809E804_GetMapData(*(u32 *)(self + 4));
  puVar2 = (u32 *)(self + 0x1c + param_3 * 4);
  System_UnpackData(*(short *)(iVar1 + 4),*puVar2);
  if (-1 < param_2) {
    if (param_2 < 3) {
      System_UnpackData(*(u32 *)(iVar1 + 4),*puVar2);
    }
    else if (param_2 == 3) {
      System_UnpackData(*(u32 *)(iVar1 + 8),*puVar2);
    }
  }
}

/* 0x080A5DFC (164B) | code_809E804_82E4_Sub_080A5DFC (orig: func_080A5DFC) | origin: wip | domain: code_809E804_82E4 | MEDIUM / tu_interp */
void code_809E804_82E4_Sub_080A5DFC(int param_1,u32 param_2,u32 param_3) {
  int iVar1;
  u32 uVar2;
  int iVar3;
  int iVar4;
  u32 unaff_r8;
  u32 uStack_28;
  uStack_28 = 0;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar4 = *(int *)(param_1 + 0x1c);
  iVar3 = *(int *)(param_1 + 0x24);
  do {
    uVar2 = unaff_r8 & 0xFFFFFF00 | unaff_r8 & 0xe0 | param_2 & 0x1f;
    unaff_r8 = uVar2 & 0xFFFF0000 | uVar2 & 0xFFFFFC1F & 0xffff | (param_3 & 0x1f) << 5;
    func_080D391C(iVar3,iVar4,iVar1,unaff_r8);
    iVar1 = iVar1 + 0x20;
    iVar4 = iVar4 + 0x20;
    iVar3 = iVar3 + 0x20;
    uStack_28 = uStack_28 + 1;
  } while (uStack_28 < 0xf);
  *(u8 *)(param_1 + 0x2a) = 1;
}

/* 0x080A5EA0 (24B) | code_809E804_82E4_vfunc_1C (orig: func_080A5EA0) | origin: pure | domain: code_809E804_82E4 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 Code_809E804_GetMapData();
extern u32 System_UnpackData();
void code_809E804_82E4_vfunc_1C(int arg0) {
  u32 *mem_ptr;
  mem_ptr = (u32 *)Code_809E804_GetMapData(*(u32 *)(arg0 + 4));
  System_UnpackData(*mem_ptr,0x6000000);
}

/* 0x080A6420 (28B) | code_809E804_82E4_vfunc_18 (orig: func_080A6420) | origin: pure | domain: code_809E804_82E4 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_0803A8A4_Sub_0803A8A4();
u32 code_809E804_82E4_vfunc_18(u32 *arg0) {
  return code_0803A8A4_Sub_0803A8A4(*arg0,1,0,0,0);
}

/* 0x080A64B8 (108B) | code_809E804_82E4_Sub_080A64B8 (orig: func_080A64B8) | origin: wip | domain: code_809E804_82E4 | MEDIUM / graph_algebra */
void code_809E804_82E4_Sub_080A64B8(int *param_1) {
  int iVar1;
  u8 bVar2;
  code_809E804_82E4_vfunc_0C();
  iVar1 = 0x08107338;
  if ((*param_1 == 6) && ((*(u8 *)(param_1[0x25] + 0x000021A0) & 3) == 1)) {
    bVar2 = *(char *)((int)param_1 + 0xb6) + 1;
    *(u8 *)((int)param_1 + 0xb6) = bVar2;
    if (*(u16 *)(iVar1 + 8) <= (u16)bVar2) {
      *(u8 *)((int)param_1 + 0xb6) = 0;
      *(u8 *)((int)param_1 + 0xb5) = 1;
    }
    iVar1 = 0x08107344;
    bVar2 = *(char *)((int)param_1 + 0xba) + 1;
    *(u8 *)((int)param_1 + 0xba) = bVar2;
    if (*(u16 *)(iVar1 + 8) <= (u16)bVar2) {
      *(u8 *)((int)param_1 + 0xba) = 0;
      *(u8 *)((int)param_1 + 0xb9) = 1;
    }
  }
}

/* 0x080A6524 (284B) | code_809E804_82E4_Sub_080A6524 (orig: func_080A6524) | origin: wip | domain: code_809E804_82E4 | MEDIUM / tu_interp */
void code_809E804_82E4_Sub_080A6524(int *param_1,u32 param_2) {
  u8 bVar1;
  u16 uVar2;
  char cVar3;
  int iVar4;
  u32 uVar5;
  u32 uVar6;
  int *piVar7;
  u8 *pbVar8;
  code_809E804_82E4_vfunc_10();
  iVar4 = 0x08107338;
  piVar7 = param_1 + 0x25;
  if (*param_1 == 6) {
    if ((*(u8 *)(*piVar7 + 0x000021A0) & 3) == 1) {
      pbVar8 = (u8 *)(param_1 + 0x2d);
      if (*(char *)((int)param_1 + 0xb5) != '\0') {
        *(u8 *)((int)param_1 + 0xb5) = 0;
        hardware_Sub_080A5AB0(param_1,iVar4,*pbVar8,param_2);
        uVar2 = *(u16 *)(*(int *)(iVar4 + 4) + 2);
        bVar1 = *pbVar8;
        *pbVar8 = bVar1 + 1;
        if ((u8)(bVar1 + 1) == uVar2) {
          *pbVar8 = 0;
        }
      }
      iVar4 = 0x08107344;
      pbVar8 = (u8 *)(param_1 + 0x2e);
      if (*(char *)((int)param_1 + 0xb9) != '\0') {
        *(u8 *)((int)param_1 + 0xb9) = 0;
        hardware_Sub_080A5AB0(param_1,iVar4,*pbVar8,param_2);
        uVar2 = *(u16 *)(*(int *)(iVar4 + 4) + 2);
        bVar1 = *pbVar8;
        *pbVar8 = bVar1 + 1;
        if ((u8)(bVar1 + 1) == uVar2) {
          *pbVar8 = 0;
        }
      }
    }
  }
  else if ((*param_1 == 0x1d) && ((char)param_1[0x26] != '\0')) {
    *(char *)(param_1 + 0x26) = '\0';
    cVar3 = func_0800BFBC(*piVar7 + 500);
    if (cVar3 == '\0') {
      uVar6 = 0;
      uVar5 = 0x0810710C;
    }
    else {
      iVar4 = func_0800C014(*piVar7 + 500);
      if (iVar4 == 0x5f) {
        uVar6 = 1;
        uVar5 = 0x0810710C;
      }
      else {
        uVar6 = 2;
        uVar5 = 0x0810710C;
      }
    }
    hardware_Sub_080A5AB0(param_1,uVar5,uVar6,param_2);
  }
}

/* 0x080A6640 (32B) | code_809E804_82E4_Wrap_vfunc_14 (orig: func_080A6640) | origin: wip | domain: code_809E804_82E4 | MEDIUM / graph_algebra */
void code_809E804_82E4_Wrap_vfunc_14(int param_1) {
  code_809E804_82E4_vfunc_14();
  *(u8 *)(param_1 + 0xb4) = 0;
  *(u8 *)(param_1 + 0xb5) = 0;
  *(u8 *)(param_1 + 0xb8) = 0;
  *(u8 *)(param_1 + 0xb9) = 0;
}

/* 0x080E59C0 (12B) | code_809E804_82E4_Wrap_Dtor (orig: func_080E59C0) | origin: pure | domain: code_809E804_82E4 | MEDIUM / graph_algebra */
void code_809E804_82E4_Dtor(void);
void code_809E804_82E4_Wrap_Dtor(void) {
    code_809E804_82E4_Dtor();
}

