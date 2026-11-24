/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_0803EE94_78C0 (22 functions) */
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

/* 0x0804EFAC (172B) | code_0803EE94_78C0_vfunc_0C (orig: func_0804EFAC) | origin: wip | domain: code_0803EE94_78C0 | HIGH / vtable_algebra */
u32 code_0803EE94_78C0_vfunc_0C(int self,int param_2) {
  u16 uVar1;
  u32 uVar2;
  u32 uVar3;
  int *piVar4;
  uVar1 = *(u16 *)(self + 0x14);
  uVar2 = (u32)*(u16 *)(self + 0x16) + (u32)*(u8 *)(self + 0x18);
  if (2 < uVar2) {
    uVar2 = uVar2 - 3;
  }
  piVar4 = (int *)(*(int *)(uVar2 * 4 + self + 8) + (u32)(uVar1 >> 2) * 0x10);
  uVar2 = uVar1 & 3;
  if (uVar2 < 4) {
    uVar2 = Code_Lib_Syscall_Sub_0804E4AC(0x20004,*piVar4 + 4,uVar2 << 3,0,param_2);
    if (uVar2 - 1 < 2) {
      *(u8 *)(piVar4 + 3) =
           (u8)((u8)((u32)-piVar4[2] >> 0x18) | (u8)((u32)piVar4[2] >> 0x18)) >> 7;
    }
  }
  else {
    uVar2 = 0;
  }
  if ((uVar2 == 0) || (2 < uVar2)) {
    uVar3 = 0;
  }
  else {
    uVar2 = uVar2 + uVar1;
    if (0x1b < uVar2) {
      uVar2 = LibGcc_umodsi3(uVar2,0x1c);
    }
    *(short *)(self + 0x14) = (short)uVar2;
    if ((param_2 != 0x20) && (param_2 != 0x00008140)) {
      *(u8 *)(self + 0x1b) = 1;
    }
    uVar3 = 1;
    *(u8 *)(self + 0x1a) = 1;
  }
  return uVar3;
}

/* 0x0804F060 (128B) | code_0803EE94_78C0_vfunc_14 (orig: func_0804F060) | origin: wip | domain: code_0803EE94_78C0 | HIGH / vtable_algebra */
void code_0803EE94_78C0_vfunc_14(int self) {
    int * piVar3;
    int iVar4;
  u8 bVar1;
  register int uVar2;
  if (*(u16 *)(self + 0x16) < 2) {
    *(u16 *)(self + 0x16) = *(u16 *)(self + 0x16) + 1;
  }
  else {
    bVar1 = *(char *)(self + 0x18) + 1;
    *(u8 *)(self + 0x18) = bVar1;
    if (2 < bVar1) {
      *(u8 *)(self + 0x18) = 0;
    }
    uVar2 = *(u8 *)(self + 0x18) + 2;
    if (2 < uVar2) {
      uVar2 = *(u8 *)(self + 0x18) - 1;
    }
    piVar3 = *(int **)(uVar2 * 4 + self + 8);
    iVar4 = 6;
    do {
      Code_Lib_Syscall_Wrap_CpuFastSet_E7A0(0x20004,*piVar3 + 4,0);
      *(u8 *)(piVar3 + 3) =
           (u8)((u8)((u32)-piVar3[2] >> 0x18) | (u8)((u32)piVar3[2] >> 0x18)) >> 7;
      piVar3 = piVar3 + 4;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    *(u8 *)(self + 0x19) = 1;
    *(u32 *)(self + 0x1a) = 1;
  }
}

/* 0x0804F0E0 (124B) | code_0803EE94_78C0_vfunc_18 (orig: func_0804F0E0) | origin: wip | domain: code_0803EE94_78C0 | HIGH / vtable_algebra */
void code_0803EE94_78C0_vfunc_18(int self) {
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  iVar2 = 0;
  do {
    iVar4 = 0;
    iVar1 = iVar2 * 4;
    iVar2 = iVar2 + 1;
    do {
      piVar3 = (int *)(*(int *)(iVar1 + self + 8) + iVar4 * 0x10);
      Code_Lib_Syscall_Wrap_CpuFastSet_E7A0(0x20004,*piVar3 + 4,0);
      *(u8 *)(piVar3 + 3) =
           (u8)((u8)((u32)-piVar3[2] >> 0x18) | (u8)((u32)piVar3[2] >> 0x18)) >> 7;
      iVar4 = iVar4 + 1;
    } while (iVar4 < 7);
  } while (iVar2 < 3);
  *(u16 *)(self + 0x16) = 0;
  *(u16 *)(self + 0x14) = 0;
  *(u8 *)(self + 0x19) = 1;
  *(u8 *)(self + 0x1a) = 1;
  *(u8 *)(self + 0x1b) = 0;
}

/* 0x0804F15C (4B) | code_0803EE94_78C0_vfunc_1C (orig: func_0804F15C) | origin: pure | domain: code_0803EE94_78C0 | HIGH / vtable_algebra */
u8 code_0803EE94_78C0_vfunc_1C(u8 *arg0) {
    return *(u8 *)(arg0 + 25);
}

/* 0x0805039C (72B) | code_0803EE94_78C0_Sub_0805039C (orig: func_0805039C) | origin: pure | domain: code_0803EE94_78C0 | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 hardware_vfunc_10_9940();
extern u32 code_0803EE94_78C0_vfunc_18();

void code_0803EE94_78C0_Sub_0805039C(int arg0) {
  if (*(int *)(arg0 + 8) == 0) {
    code_0803EE94_78C0_vfunc_18(arg0 + 0xd0);
    if (*(int *)(arg0 + 4) != 1) {
      hardware_vfunc_10_9940(arg0 + 0x20,arg0 + 0x130);
    }
    hardware_vfunc_10_9940(arg0 + 0x20,arg0 + 0x148);
    *(u8 *)(arg0 + 0xc) = 0;
  }
  if (*(int *)(arg0 + 8) >= 0) {
    if (*(int *)(arg0 + 8) <= 2) {
      *(u32 *)(arg0 + 8) = 1;
    }
  }
}

/* 0x080503E4 (24B) | code_0803EE94_78C0_Sub_080503E4 (orig: func_080503E4) | origin: pure | domain: code_0803EE94_78C0 | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_0803EE94_78C0_Sub_0805039C();
void code_0803EE94_78C0_Sub_080503E4(int arg0) {
  code_0803EE94_78C0_Sub_0805039C();
  *(u32 *)(arg0 + 8) = 3;
  *(u8 *)(arg0 + 0xc) = 9;
}

/* 0x080503FC (20B) | code_0803EE94_78C0_Sub_080503FC (orig: func_080503FC) | origin: pure | domain: code_0803EE94_78C0 | MEDIUM / tu_interp */
#define true 1
#define false 0
#define NULL ((void *)0)
void code_0803EE94_78C0_Sub_080503FC(int arg0) {
  if (*(int *)(arg0 + 8) != 0) {
    *(u32 *)(arg0 + 8) = 2;
  }
}

/* 0x08050410 (20B) | code_0803EE94_78C0_Sub_08050410 (orig: func_08050410) | origin: pure | domain: code_0803EE94_78C0 | MEDIUM / tu_interp */
#define true 1
#define false 0
#define NULL ((void *)0)
void code_0803EE94_78C0_Sub_08050410(int arg0) {
  if (*(int *)(arg0 + 8) != 0) {
    *(u32 *)(arg0 + 8) = 0;
  }
}

/* 0x08050424 (84B) | code_0803EE94_78C0_Sub_08050424 (orig: func_08050424) | origin: pure | domain: code_0803EE94_78C0 | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_0803EE94_78C0_vfunc_18();
extern u32 code_0803EE94_78C0_Sub_080503E4();
extern u32 code_809E804_Sub_080ADD5C();
extern u32 code_0803EE94_78C0_SetField_0x04();
void code_0803EE94_78C0_Sub_08050424(int arg0,u32 arg1,u16 arg2,u32 arg3) {
  int val;
  val = *(int *)(arg0 + 8);
  if (-1 < val) {
    if (val < 3) {
      code_0803EE94_78C0_Sub_080503E4(arg0);
    }
    else if (val < 7) {
      code_0803EE94_78C0_vfunc_18(arg0 + 0xd0);
    }
  }
  code_809E804_Sub_080ADD5C(arg0 + 0xec,arg1,arg3);
  code_0803EE94_78C0_SetField_0x04(arg0 + 0xec,arg2);
  *(u32 *)(arg0 + 8) = 4;
}

/* 0x08050D5C (12B) | code_0803EE94_78C0_Sub_08050D5C (orig: func_08050D5C) | origin: pure | domain: code_0803EE94_78C0 | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_0803EE94_78C0_Sub_0805039C();
void code_0803EE94_78C0_Sub_08050D5C(u32 *arg0) {
  code_0803EE94_78C0_Sub_0805039C(*arg0);
}

/* 0x08050D68 (12B) | code_0803EE94_78C0_Sub_08050D68 (orig: func_08050D68) | origin: pure | domain: code_0803EE94_78C0 | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_0803EE94_78C0_Sub_080503E4();
void code_0803EE94_78C0_Sub_08050D68(u32 *arg0) {
  code_0803EE94_78C0_Sub_080503E4(*arg0);
}

/* 0x08050D74 (12B) | code_0803EE94_78C0_Sub_08050D74 (orig: func_08050D74) | origin: pure | domain: code_0803EE94_78C0 | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_0803EE94_78C0_Sub_080503FC();
void code_0803EE94_78C0_Sub_08050D74(u32 *arg0) {
  code_0803EE94_78C0_Sub_080503FC(*arg0);
}

/* 0x08050D8C (20B) | code_0803EE94_78C0_Sub_08050D8C (orig: func_08050D8C) | origin: pure | domain: code_0803EE94_78C0 | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_0803EE94_78C0_Sub_08050424();
void code_0803EE94_78C0_Sub_08050D8C(u32 *arg0,u32 arg1) {
  code_0803EE94_78C0_Sub_08050424(*arg0,arg1,0x100,0);
}

/* 0x08050DA0 (20B) | code_0803EE94_78C0_Sub_08050DA0 (orig: func_08050DA0) | origin: pure | domain: code_0803EE94_78C0 | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_0803EE94_78C0_Sub_08050424();
void code_0803EE94_78C0_Sub_08050DA0(u32 *arg0,u32 arg1,u32 arg2) {
  code_0803EE94_78C0_Sub_08050424(*arg0,arg1,0x100,arg2);
}

/* 0x08050DB4 (20B) | code_0803EE94_78C0_Sub_08050DB4 (orig: func_08050DB4) | origin: pure | domain: code_0803EE94_78C0 | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_0803EE94_78C0_Sub_08050424();
void code_0803EE94_78C0_Sub_08050DB4(u32 *arg0,u32 arg1,u16 arg2) {
  code_0803EE94_78C0_Sub_08050424(*arg0,arg1,arg2,0);
}

/* 0x08050DC8 (16B) | code_0803EE94_78C0_Sub_08050DC8 (orig: func_08050DC8) | origin: pure | domain: code_0803EE94_78C0 | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_0803EE94_78C0_Sub_08050424();
void code_0803EE94_78C0_Sub_08050DC8(u32 *arg0,u32 arg1,u16 arg2) {
  code_0803EE94_78C0_Sub_08050424(*arg0,arg1,arg2);
}

/* 0x08050EBC (40B) | code_0803EE94_78C0_Sub_08050EBC (orig: func_08050EBC) | origin: wip | domain: code_0803EE94_78C0 | MEDIUM / graph_algebra */
u32 code_0803EE94_78C0_Sub_08050EBC(int *param_1,u8 param_2) {
  u8 bVar1;
  bVar1 = *(u8 *)(*param_1 + 0x550);
  *(u8 *)(*param_1 + 0x550) = bVar1 & 0xc0 | param_2 & 0x3f | bVar1 & 0x3f;
  return;
}

/* 0x0805116C (332B) | code_0803EE94_78C0_Dtor (orig: func_0805116C) | origin: wip | domain: code_0803EE94_78C0 | HIGH / vtable_algebra */
u32 code_0803EE94_78C0_Dtor(u32 *self,u32 param_2,u32 param_3) {
  u32 *puVar1;
  u8 uVar2;
  int iVar3;
  u32 *puVar4;
  u32 uVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  u32 *puVar10;
  int iStack_34;
  u32 uStack_30;
  u32 uStack_2c;
  u32 uStack_28;
  int iStack_24;
  *self = 0x080E78C0;
  self[1] = param_2;
  puVar10 = self + 2;
  iVar3 = 2;
  do {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != -1);
  *(u16 *)(self + 5) = 0;
  *(u16 *)((int)self + 0x16) = 0;
  *(u8 *)(self + 6) = 0;
  *(u8 *)((int)self + 0x19) = 0;
  *(u8 *)((int)self + 0x1a) = 0;
  *(u8 *)((int)self + 0x1b) = 0;
  iVar3 = 0;
  uStack_28 = param_3;
  do {
    puVar4 = (u32 *)CppRuntime_builtin_new(0x70);
    iVar9 = 6;
    iStack_24 = iVar3 + 1;
    puVar10 = puVar4;
    do {
      uVar5 = CppRuntime_builtin_new(0x104);
      *puVar10 = uVar5;
      hardware_Sub_08007874(puVar10 + 1);
      puVar10[2] = 0;
      *(u8 *)(puVar10 + 3) = 0;
      puVar10 = puVar10 + 4;
      iVar9 = iVar9 + -1;
    } while (iVar9 != -1);
    puVar10 = (u32 *)self[iVar3 + 2];
    if ((puVar4 != puVar10) && (puVar10 != (u32 *)0x0)) {
      puVar1 = puVar10 + 0x1c;
      while (puVar10 != puVar1) {
        hardware_Sub_08007C28(puVar1 + -3,puVar1[-2]);
        hardware_Sub_080079E8(puVar1 + -3,2);
        CppRuntime_builtin_delete(puVar1[-4]);
        puVar1 = puVar1 + -4;
      }
      CppRuntime_builtin_delete(puVar10);
    }
    self[iVar3 + 2] = puVar4;
    iVar9 = 0;
    do {
      piVar8 = (int *)(self[iVar3 + 2] + iVar9 * 0x10);
      hardware_Sub_080083D0(&iStack_34,uStack_28,3);
      piVar7 = piVar8 + 1;
      if (&iStack_34 != piVar7) {
        hardware_Sub_08007C28(piVar7,piVar8[2]);
        iVar6 = hardware_Sub_08007CD8(piVar7,uStack_30);
        piVar8[2] = iVar6;
      }
      hardware_Sub_08007C28(&iStack_34,uStack_30);
      hardware_Sub_080079E8(&iStack_34,2);
      iVar6 = -((-piVar8[2] | piVar8[2]) >> 0x1f);
      uVar2 = (u8)iVar6;
      if (iVar6 != 0) {
        uStack_2c = 0x20004;
        Code_Lib_Syscall_Wrap_CpuFastSet_E7A0(0x20004,*piVar8 + 4,0);
        uVar2 = 1;
      }
      *(u8 *)(piVar8 + 3) = uVar2;
      iVar9 = iVar9 + 1;
    } while (iVar9 < 7);
    iVar3 = iStack_24;
  } while (iStack_24 < 3);
  *(u8 *)((int)self + 0x1a) = 1;
  return (self);
}

/* 0x080ADD74 (4B) | code_0803EE94_78C0_SetField_0x04 (orig: func_080ADD74) | origin: pure | domain: code_0803EE94_78C0 | MEDIUM / graph_algebra */
void code_0803EE94_78C0_SetField_0x04(u8 *arg0, u16 arg1) {
    *(u16 *)(arg0 + 4) = arg1;
}

/* 0x080BA574 (148B) | code_0803EE94_78C0_Sub_080BA574 (orig: func_080BA574) | origin: wip | domain: code_0803EE94_78C0 | MEDIUM / graph_algebra */
void code_0803EE94_78C0_Sub_080BA574(int param_1,int param_2,u32 param_3,u32 param_4) {

  if (param_2 - 1U < 5) {
    switch(*(u32 *)(((const u32 *)0x080ba588) + (param_2 - 1U) * 4) & 0xfffffffe) {
    case 0x80ba58c:
      code_0803EE94_78C0_Sub_08050D8C(*(u32 *)(param_1 + 0x718),((const u32 *)0x08107B28),param_1,param_4);
    case 0x80ba5a0:
      param_4 = 0;
      break;
    case 0x80ba5b4:
      code_0803EE94_78C0_Sub_08050D8C(*(u32 *)(param_1 + 0x718),((const u32 *)0x08107B5C));
      break;
    case 0x80ba5c8:
      code_0803EE94_78C0_Sub_08050D8C(*(u32 *)(param_1 + 0x718),((const u32 *)0x08107C18));
      break;
    case 0x80ba5dc:
      code_0803EE94_78C0_Sub_08050D8C(*(u32 *)(param_1 + 0x718),((const u32 *)0x08107CB0));
      break;
    case 0x80ba5f0:
      code_0803EE94_78C0_Sub_08050D8C(*(u32 *)(param_1 + 0x718),((const u32 *)0x08107CE0));
    }
  }
  return 0;
}

/* 0x080CABA0 (76B) | code_0803EE94_78C0_Sub_080CABA0 (orig: func_080CABA0) | origin: pure | domain: code_0803EE94_78C0 | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_0803EE94_78C0_Sub_08050D8C();
extern u32 code_0803EE94_78C0_Sub_08050EBC();
void code_0803EE94_78C0_Sub_080CABA0(int arg0,u32 arg1) {
  arg0 = arg0 + 0x348;
  code_0803EE94_78C0_Sub_08050EBC(arg0,4);
  code_0803EE94_78C0_Sub_08050EBC(arg0,8);
  code_0803EE94_78C0_Sub_08050EBC(arg0,1);
  code_0803EE94_78C0_Sub_08050EBC(arg0,2);
  code_0803EE94_78C0_Sub_08050EBC(arg0,0x10);
  code_0803EE94_78C0_Sub_08050EBC(arg0,0x20);
  code_0803EE94_78C0_Sub_08050D8C(arg0,arg1);
}

/* 0x080CABEC (80B) | code_0803EE94_78C0_Sub_080CABEC (orig: func_080CABEC) | origin: pure | domain: code_0803EE94_78C0 | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_0803EE94_78C0_Sub_08050DC8();
extern u32 code_0803EE94_Sub_08050E98();
void code_0803EE94_78C0_Sub_080CABEC(int arg0,u32 arg1) {
  arg0 = arg0 + 0x348;
  code_0803EE94_Sub_08050E98(arg0,4);
  code_0803EE94_Sub_08050E98(arg0,8);
  code_0803EE94_Sub_08050E98(arg0,1);
  code_0803EE94_Sub_08050E98(arg0,2);
  code_0803EE94_Sub_08050E98(arg0,0x10);
  code_0803EE94_Sub_08050E98(arg0,0x20);
  code_0803EE94_78C0_Sub_08050DC8(arg0,arg1,0,0);
}

