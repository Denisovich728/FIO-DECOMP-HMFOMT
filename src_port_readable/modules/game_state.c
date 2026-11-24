/* FIO-DECOMP-HMFOMT :: Port Readable Module: game_state (273 functions) */
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

/* 0x08010348 (16B) | game_state_Sub_08010348 (orig: func_08010348) | origin: pure | domain: game_state | HIGH / stanhash_map_tu */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 LibC_rand();
u32 game_state_Sub_08010348(void) {
  int val;
  do {
    val = LibC_rand();
  } while (val == 0);
  return;
}

/* 0x08010E68 (156B) | game_state_Func0E7 (orig: func_08010E68) | origin: wip | domain: game_state | HIGH / fomt_studio_dispatch */
u32 game_state_Func0E7(s8 param_1) {
  u32 val;
  val = (s16)func_0809B228((param_1 + 0x00001C70), 0x00001C70);
  return val;
}

/* 0x08010F04 (8B) | game_state_GetField_0x00 (orig: func_08010F04) | origin: pure | domain: game_state | HIGH / stanhash_map_tu */
u32 game_state_GetField_0x00(u8 *arg0) {
    return ((u32)*arg0 << 27) >> 31;
}

/* 0x08010F0C (8B) | game_state_GetField_0x00_0F0C (orig: func_08010F0C) | origin: pure | domain: game_state | HIGH / stanhash_map_tu */
u32 game_state_GetField_0x00_0F0C(u8 *arg0) {
    return ((u32)*(u32 *)arg0 << 14) >> 27;
}

/* 0x08010F1C (8B) | game_state_GetField_0x03 (orig: func_08010F1C) | origin: pure | domain: game_state | HIGH / stanhash_map_tu */
u32 game_state_GetField_0x03(u8 *arg0) {
    return ((u32)*(arg0 + 3) << 25) >> 26;
}

/* 0x08010F24 (12B) | game_state_Proc0C5 (orig: func_08010F24) | origin: pure | domain: game_state | HIGH / fomt_studio_dispatch */
void game_state_Proc0C5(u8 *arg0) {
    *arg0 |= 1;
}

/* 0x08010F30 (12B) | game_state_GetField_0x00_0F30 (orig: func_08010F30) | origin: pure | domain: game_state | HIGH / stanhash_map_tu */
void game_state_GetField_0x00_0F30(u8 *arg0) {
    *arg0 |= 2;
}

/* 0x08010F3C (12B) | game_state_Init_Notice_Board_UI (orig: func_08010F3C) | origin: pure | domain: game_state | EXACT / fomt_studio_dispatch */
void game_state_Init_Notice_Board_UI(u8 *arg0) {
    *arg0 |= 4;
}

/* 0x08010F48 (12B) | game_state_GetField_0x00_0F48 (orig: func_08010F48) | origin: pure | domain: game_state | HIGH / stanhash_map_tu */
void game_state_GetField_0x00_0F48(u8 *arg0) {
    *arg0 |= 8;
}

/* 0x0801140C (76B) | game_state_Sub_0801140C (orig: func_0801140C) | origin: pure | domain: game_state | HIGH / stanhash_map_tu */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0800B120();
extern u32 func_0800B24C();
extern u32 ScriptVM_Take_Money();
u32 game_state_Sub_0801140C(int arg0) {
  u32 val;
  char *mem_ptr;
  int val2;
  val = func_0800B120(arg0 + 0x54);
  val2 = arg0 + 0x00001AA8;
  ScriptVM_Take_Money(val2,val);
  mem_ptr = (char *)(arg0 + 0x000034C5);
  if (*mem_ptr != '\0') {
    ScriptVM_Take_Money(val2,val);
    *mem_ptr = '\0';
  }
  func_0800B24C(arg0 + 0x54);
  return ((-val | val) >> 0x1f);
}

/* 0x08011458 (12B) | game_state_GetField_0x00_1458 (orig: func_08011458) | origin: pure | domain: game_state | HIGH / stanhash_map_tu */
void game_state_GetField_0x00_1458(u8 *arg0) {
    *arg0 |= 16;
}

/* 0x08011464 (52B) | game_state_Sub_08011464 (orig: func_08011464) | origin: wip | domain: game_state | HIGH / stanhash_map_tu */
u32 game_state_Sub_08011464(u32 *param_1,u32 param_2) {
  bool bVar1;
  if (99 < param_2) {
    param_2 = 99;
  }
  bVar1 = (*param_1 & 0x3ffff) >> 0xd < param_2;
  if (bVar1) {
    *param_1 = 0xFFFC1FFF & *param_1 | (param_2 & 0x1f) << 0xd;
  }
  return ((u32)bVar1);
}

/* 0x08011498 (48B) | game_state_Sub_08011498 (orig: func_08011498) | origin: wip | domain: game_state | HIGH / stanhash_map_tu */
u32 game_state_Sub_08011498(int param_1,u32 param_2) {
  bool bVar1;
  if (99 < param_2) {
    param_2 = 99;
  }
  bVar1 = (*(u16 *)(param_1 + 2) & 0x1ff) >> 2 < param_2;
  if (bVar1) {
    *(u16 *)(param_1 + 2) =
         (u16)0xFFFFFE03 & *(u16 *)(param_1 + 2) | (u16)((param_2 & 0x7f) << 2);
  }
  return ((u32)bVar1);
}

/* 0x080114C8 (48B) | game_state_Sub_080114C8 (orig: func_080114C8) | origin: wip | domain: game_state | HIGH / stanhash_map_tu */
u32 game_state_Sub_080114C8(int param_1,u32 param_2) {
  bool bVar1;
  if (99 < param_2) {
    param_2 = 99;
  }
  bVar1 = (*(u8 *)(param_1 + 3) & 0x7f) >> 1 < param_2;
  if (bVar1) {
    *(u8 *)(param_1 + 3) = *(u8 *)(param_1 + 3) & 0x81 | (u8)((param_2 & 0x3f) << 1);
  }
  return ((u32)bVar1);
}

/* 0x080114F8 (24B) | game_state_Sub_080114F8 (orig: func_080114F8) | origin: pure | domain: game_state | HIGH / stanhash_map_tu */
struct S { u8 b0:1; u8 b1:1; u8 b2:1; u8 b3:1; }; void game_state_Sub_080114F8(struct S *a) { a->b0 = 0; a->b1 = 1; a->b2 = 1; a->b3 = 1; }

/* 0x08011510 (12B) | game_state_SetField_0x00 (orig: func_08011510) | origin: pure | domain: game_state | HIGH / stanhash_map_tu */
struct S { u32 a, b; u8 c; }; void game_state_SetField_0x00(struct S *p) { p->a = 16; p->b = 16; p->c = 0; }

/* 0x0801151C (4B) | game_state_Chek_Envio (orig: func_0801151C) | origin: pure | domain: game_state | EXACT / fomt_studio_dispatch */
u32 game_state_Chek_Envio(u32 *arg0) {
    return *arg0;
}

/* 0x08011520 (4B) | game_state_Func0DF (orig: func_08011520) | origin: pure | domain: game_state | HIGH / fomt_studio_dispatch */
u32 game_state_Func0DF(u8 *arg0) {
    return *(u32 *)(arg0 + 4);
}

/* 0x08011524 (28B) | game_state_Register_TV_Shopping_Item (orig: func_08011524) | origin: pure | domain: game_state | EXACT / fomt_studio_dispatch */
#define true 1
#define false 0
#define NULL ((void *)0)
u32 game_state_Register_TV_Shopping_Item(int arg0) {
  u32 val;
  val = 0;
  if ((*(int *)(arg0 + 4) != 0x10) && (*(char *)(arg0 + 8) == '\0')) {
    val = 1;
  }
  return val;
}

/* 0x08011540 (4B) | game_state_Proc0E1 (orig: func_08011540) | origin: pure | domain: game_state | HIGH / fomt_studio_dispatch */
void game_state_Proc0E1(u32 *arg0, u32 arg1) {
    *arg0 = arg1;
}

/* 0x08011544 (12B) | game_state_Electrodomestic_initiation (orig: func_08011544) | origin: pure | domain: game_state | EXACT / fomt_studio_dispatch */
struct S { u32 a, b; u8 c; }; void game_state_Electrodomestic_initiation(struct S *p) { p->b = p->a; p->c = 2; }

/* 0x08011550 (24B) | game_state_Sub_08011550 (orig: func_08011550) | origin: pure | domain: game_state | HIGH / stanhash_map_tu */
#define true 1
#define false 0
#define NULL ((void *)0)
void game_state_Sub_08011550(int *arg0) {
  if (arg0[1] == *arg0) {
    *arg0 = 0x10;
  }
  arg0[1] = 0x10;
}

/* 0x08011568 (32B) | game_state_Sub_08011568 (orig: func_08011568) | origin: pure | domain: game_state | HIGH / stanhash_map_tu */
#define true 1
#define false 0
#define NULL ((void *)0)
void game_state_Sub_08011568(int *arg0) {
  if ((*arg0 != 0x10) && (arg0[1] != 0x10) && (*(u8 *)(arg0 + 2) != 0)) {
    *(u8 *)(arg0 + 2) = *(u8 *)(arg0 + 2) - 1;
  }
}

/* 0x08011588 (32B) | game_state_Sub_08011588 (orig: func_08011588) | origin: wip | domain: game_state | HIGH / stanhash_map_tu */
u32 game_state_Sub_08011588(u8 *param_1,int param_2) {
  int iVar1;
  iVar1 = (u8)0;
  if (param_1 != (u8 *)0x0) {
    for (; param_2 != 0; param_2 = param_2 + -1) {
      iVar1 = iVar1 + (u32)*param_1;
      param_1 = param_1 + 1;
    }
  }
  return iVar1;
}

/* 0x080115B0 (160B) | game_state_Sub_080115B0 (orig: func_080115B0) | origin: wip | domain: game_state | HIGH / stanhash_map_tu */
u32 game_state_Sub_080115B0(u32 param_1,u32 param_2,int param_3) {
  u32 _p_param_1 = param_1;
  int _p_param_3 = param_3;
  u32 _p_param_2 = param_2;

  u32 uVar1;
  char cVar2;
  u32 uVar3;
  u32 uVar4;
  u32 uStack_20;
  u32 uStack_1c;
  uVar1 = 0x000034F4;
  uStack_20 = 0x000034F4;
  cVar2 = sram_proxy_2_Sub_080006A4(_p_param_2,_p_param_3,&uStack_20,4);
  if (cVar2 == '\0') {
    uVar3 = (u32)*(u16 *)0x03000400;
    uVar4 = 0x10000;
  }
  else {
    cVar2 = sram_proxy_2_Sub_080006A4(_p_param_2,_p_param_3 + 4,_p_param_1,uVar1);
    if (cVar2 == '\0') {
      uVar3 = (u32)*(s16 *)0x03000400;
      uVar4 = 0x20000;
    }
    else {
      _p_param_3 = 0x000034F8 + _p_param_3;
      uStack_1c = game_state_Sub_08011588(_p_param_1,uVar1);
      cVar2 = sram_proxy_2_Sub_080006A4(_p_param_2,_p_param_3,&uStack_1c,4);
      if (cVar2 != '\0') {
        uVar3 = 0;
        goto LAB_0801163e;
      }
      uVar3 = (u32)*(u16 *)0x03000400;
      uVar4 = 0x30000;
    }
  }
  uVar3 = uVar3 | uVar4;
LAB_0801163e:
  return uVar3;
}

/* 0x08011934 (932B) | game_state_Sub_08011934 (orig: func_08011934) | origin: wip | domain: game_state | HIGH / stanhash_map_tu */
void game_state_Sub_08011934(int param_1,int param_2,int param_3) {
  int iVar1;
  int iVar2;
  u32 uVar3;
  u32 uVar4;
  int *piVar5;
  u32 uVar6;
  u32 uVar7;
  u8 auStack_4c [4];
  u8 auStack_48 [4];
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  u32 uStack_38;
  u32 uStack_34;
  u32 uStack_30;
  u32 uStack_2c;
  u32 uStack_28;
  int *piStack_24;
  iStack_44 = param_1;
  iStack_40 = param_2;
  LibC_memcpy(auStack_4c,0x080F0654,3);
  LibC_memcpy(auStack_48,0x080F0658,2);
  iStack_3c = 1;
  uVar7 = 0;
  uStack_38 = Coop_GetCapacity(*(int *)(iStack_44 + 0x8c) + 0x410);
  uStack_34 = 0;
  if (uStack_38 != 0) {
    do {
      iVar1 = Coop_GetChicken_C894(*(int *)(iStack_44 + 0x8c) + 0x410,uStack_34);
      if (iVar1 != 0) {
        iVar2 = func_0809B514();
        uVar3 = 0x080F0654;
        if (iVar2 == iStack_40) {
          if (iStack_3c == 0) {
            iVar2 = LibC_strlen(param_3);
            uVar6 = 0x00000383 - iVar2;
            if (uVar6 != 0) {
              uVar4 = LibC_strlen(uVar3);
              if (uVar6 < uVar4) {
                uVar4 = uVar6;
              }
              LibC_memcpy(param_3 + iVar2,uVar3,uVar4);
              *(u8 *)(param_3 + iVar2 + uVar4) = (u8)iStack_3c;
            }
          }
          else {
            iStack_3c = 0;
          }
          uVar3 = Animal_GetName(iVar1);
          iVar1 = LibC_strlen(param_3);
          uVar6 = 0x00000383 - iVar1;
          if (uVar6 != 0) {
            uVar4 = LibC_strlen(uVar3);
            if (uVar6 < uVar4) {
              uVar4 = uVar6;
            }
            LibC_memcpy(param_3 + iVar1,uVar3,uVar4);
            *(u8 *)(param_3 + iVar1 + uVar4) = 0;
          }
          uVar3 = 0x080F0658;
          uVar7 = uVar7 + 1;
          if (2 < uVar7) {
            iVar1 = LibC_strlen(param_3);
            uVar7 = 0x00000383 - iVar1;
            if (uVar7 != 0) {
              uVar6 = LibC_strlen(uVar3);
              if (uVar7 < uVar6) {
                uVar6 = uVar7;
              }
              LibC_memcpy(param_3 + iVar1,uVar3,uVar6);
              *(u8 *)(param_3 + iVar1 + uVar6) = 0;
            }
            uVar7 = 0;
          }
        }
      }
      uStack_34 = uStack_34 + 1;
    } while (uStack_34 < uStack_38);
  }
  piVar5 = (int *)(iStack_44 + 0x8c);
  uStack_30 = Barn_GetCapacity(*piVar5 + 0x5f0);
  uStack_2c = 0;
  piStack_24 = piVar5;
  if (uStack_30 != 0) {
    do {
      iVar1 = Barn_GetCow_D3D0(*piStack_24 + 0x5f0,uStack_2c);
      if ((iVar1 != 0) && (iVar2 = func_0809B514(), uVar3 = 0x080F0654, iVar2 == iStack_40)) {
        if (iStack_3c == 0) {
          iVar2 = LibC_strlen(param_3);
          uVar6 = 0x00000383 - iVar2;
          if (uVar6 != 0) {
            uVar4 = LibC_strlen(uVar3);
            if (uVar6 < uVar4) {
              uVar4 = uVar6;
            }
            LibC_memcpy(param_3 + iVar2,uVar3,uVar4);
            *(u8 *)(param_3 + iVar2 + uVar4) = (u8)iStack_3c;
          }
        }
        else {
          iStack_3c = 0;
        }
        uVar3 = Animal_GetName(iVar1);
        iVar1 = LibC_strlen(param_3);
        uVar6 = 0x00000383 - iVar1;
        if (uVar6 != 0) {
          uVar4 = LibC_strlen(uVar3);
          if (uVar6 < uVar4) {
            uVar4 = uVar6;
          }
          LibC_memcpy(param_3 + iVar1,uVar3,uVar4);
          *(u8 *)(param_3 + iVar1 + uVar4) = 0;
        }
        uVar3 = 0x080F0658;
        uVar7 = uVar7 + 1;
        if (2 < uVar7) {
          iVar1 = LibC_strlen(param_3);
          uVar7 = 0x00000383 - iVar1;
          if (uVar7 != 0) {
            uVar6 = LibC_strlen(uVar3);
            if (uVar7 < uVar6) {
              uVar6 = uVar7;
            }
            LibC_memcpy(param_3 + iVar1,uVar3,uVar6);
            *(u8 *)(param_3 + iVar1 + uVar6) = 0;
          }
          uVar7 = 0;
        }
      }
      uStack_2c = uStack_2c + 1;
    } while (uStack_2c < uStack_30);
  }
  uStack_28 = 0;
  if (uStack_30 != 0) {
    do {
      iVar1 = Barn_GetSheep_D3F8(*piStack_24 + 0x5f0,uStack_28);
      if ((iVar1 != 0) && (iVar2 = func_0809B514(), uVar3 = 0x080F0654, iVar2 == iStack_40)) {
        if (iStack_3c == 0) {
          iVar2 = LibC_strlen(param_3);
          uVar6 = 0x00000383 - iVar2;
          if (uVar6 != 0) {
            uVar4 = LibC_strlen(uVar3);
            if (uVar6 < uVar4) {
              uVar4 = uVar6;
            }
            LibC_memcpy(param_3 + iVar2,uVar3,uVar4);
            *(u8 *)(param_3 + iVar2 + uVar4) = (u8)iStack_3c;
          }
        }
        else {
          iStack_3c = 0;
        }
        uVar3 = Animal_GetName(iVar1);
        iVar1 = LibC_strlen(param_3);
        uVar6 = 0x00000383 - iVar1;
        if (uVar6 != 0) {
          uVar4 = LibC_strlen(uVar3);
          if (uVar6 < uVar4) {
            uVar4 = uVar6;
          }
          LibC_memcpy(param_3 + iVar1,uVar3,uVar4);
          *(u8 *)(param_3 + iVar1 + uVar4) = 0;
        }
        uVar3 = 0x080F0658;
        uVar7 = uVar7 + 1;
        if (2 < uVar7) {
          iVar1 = LibC_strlen(param_3);
          uVar7 = 0x00000383 - iVar1;
          if (uVar7 != 0) {
            uVar6 = LibC_strlen(uVar3);
            if (uVar7 < uVar6) {
              uVar6 = uVar7;
            }
            LibC_memcpy(param_3 + iVar1,uVar3,uVar6);
            *(u8 *)(param_3 + iVar1 + uVar6) = 0;
          }
          uVar7 = 0;
        }
      }
      uStack_28 = uStack_28 + 1;
    } while (uStack_28 < uStack_30);
  }
  uVar3 = 0x080F0658;
  if (uVar7 != 0) {
    iVar1 = LibC_strlen(param_3);
    uVar7 = 0x00000383 - iVar1;
    if (uVar7 != 0) {
      uVar6 = LibC_strlen(uVar3);
      if (uVar7 < uVar6) {
        uVar6 = uVar7;
      }
      LibC_memcpy(param_3 + iVar1,uVar3,uVar6);
      *(u8 *)(param_3 + iVar1 + uVar6) = 0;
    }
  }
}

/* 0x08011DC4 (276B) | game_state_Create (orig: func_08011DC4) | origin: wip | domain: game_state | HIGH / vtable_algebra */
u32 game_state_Create(int self) {
  *(u32 *)(self) = 0x080E5E64;
  CppRuntime_builtin_new(0xf8);
  *(u32 *)((CppRuntime_builtin_new(0xf8) + 0xf4)) = 0x080E5C08;
  *(u32 *)(CppRuntime_builtin_new(0xf8)) = 0;
  *(u32 *)(CppRuntime_builtin_new(0xf8) + 4) = 0;
  *(u32 *)((CppRuntime_builtin_new(0xf8) + 8) + 4) = 0;
  hardware_Wrap_CpuSet(((CppRuntime_builtin_new(0xf8) + 8) + 8), (CppRuntime_builtin_new(0xf8) + 0xf4));
  hardware_Create_8980((CppRuntime_builtin_new(0xf8) + 0x68), (CppRuntime_builtin_new(0xf8) + 0xf4));
  *(u32 *)(CppRuntime_builtin_new(0xf8) + 0x6c) = 0;
  *(u32 *)((CppRuntime_builtin_new(0xf8) + 0x6c) + 4) = 0;
  *(u32 *)((CppRuntime_builtin_new(0xf8) + 0x6c) + 8) = 0x080E5BB4;
  *(u32 *)((CppRuntime_builtin_new(0xf8) + 0x6c) + 0xc) = (CppRuntime_builtin_new(0xf8) + 0x7c);
  *(u32 *)(CppRuntime_builtin_new(0xf8) + 0x7c) = 0;
  *(u32 *)((CppRuntime_builtin_new(0xf8) + 0x7c) + 4) = 0;
  *(u32 *)((CppRuntime_builtin_new(0xf8) + 0x7c) + 8) = 0x080E5BD8;
  *(u32 *)((CppRuntime_builtin_new(0xf8) + 0x6c) + 0x10) = (CppRuntime_builtin_new(0xf8) + 0x78);
  *(u32 *)((CppRuntime_builtin_new(0xf8) + 0x6c) + 0x14) = (CppRuntime_builtin_new(0xf8) + 0x7c);
  *(u32 *)(((CppRuntime_builtin_new(0xf8) + 0x78) + 0x10)) = self;
  *(u32 *)((((CppRuntime_builtin_new(0xf8) + 0x78) + 0x10) + 4)) = (CppRuntime_builtin_new(0xf8) + 0x7c);
  *(u32 *)((CppRuntime_builtin_new(0xf8) + 0xa0)) = 0;
  *(u32 *)(((CppRuntime_builtin_new(0xf8) + 0xa0) + 4)) = 0;
  *(u32 *)((((CppRuntime_builtin_new(0xf8) + 0xa0) + 4) + 4)) = 0;
  *(u32 *)(((((CppRuntime_builtin_new(0xf8) + 0xa0) + 4) + 4) + 4)) = 0;
  *(u32 *)((((((CppRuntime_builtin_new(0xf8) + 0xa0) + 4) + 4) + 4) + 4)) = 0;
  *(u32 *)(((((((CppRuntime_builtin_new(0xf8) + 0xa0) + 4) + 4) + 4) + 4) + 4)) = 0;
  *(u32 *)((((((((CppRuntime_builtin_new(0xf8) + 0xa0) + 4) + 4) + 4) + 4) + 4) + 4)) = 0;
  hardware_Sub_08008B54(((((((((CppRuntime_builtin_new(0xf8) + 0xa0) + 4) + 4) + 4) + 4) + 4) + 4) + 4), 0, (CppRuntime_builtin_new(0xf8) + 0x6c));
  hardware_Sub_08008B54((CppRuntime_builtin_new(0xf8) + 0xc0), 1, (CppRuntime_builtin_new(0xf8) + 0x6c));
  hardware_Sub_08008B54((CppRuntime_builtin_new(0xf8) + 0xc4), 2, (CppRuntime_builtin_new(0xf8) + 0x6c));
  hardware_Sub_08008B54((CppRuntime_builtin_new(0xf8) + 0xc8), 3, (CppRuntime_builtin_new(0xf8) + 0x6c));
  hardware_Sub_08008B54((CppRuntime_builtin_new(0xf8) + 0xcc), 4, (CppRuntime_builtin_new(0xf8) + 0x6c));
  *(u32 *)((CppRuntime_builtin_new(0xf8) + 0xd0)) = 0;
  *(u32 *)((CppRuntime_builtin_new(0xf8) + 0xd0) + 4) = 0;
  *(u32 *)(((CppRuntime_builtin_new(0xf8) + 0xd0) + 8) + 4) = 0;
  *(u8 *)((((CppRuntime_builtin_new(0xf8) + 0xd0) + 8) + 0x10)) = 0;
  *(u8 *)(((((CppRuntime_builtin_new(0xf8) + 0xd0) + 8) + 0x10) + 2)) = 0;
  *(u32 *)((((((CppRuntime_builtin_new(0xf8) + 0xd0) + 8) + 0x10) + 2) + 6)) = 0;
  *(u16 *)(CppRuntime_builtin_new(0xf8) + 0x14) = *(u16 *)(CppRuntime_builtin_new(0xf8) + 0x14);
  *(u16 *)(0x04000004) = *(u16 *)(CppRuntime_builtin_new(0xf8) + 0x14);
  *(u32 *)(self + 4) = CppRuntime_builtin_new(0xf8);
  return func_0803F8A0((*(u32 *)(0x0300040C) + 8), self, (CppRuntime_builtin_new(0xf8) + 0x6c));
}

/* 0x08011FE8 (64B) | game_state_Ctor_1FE8 (orig: func_08011FE8) | origin: pure | domain: game_state | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 scene_Dtor();
extern u32 func_0803F8AC();
extern u32 func_080D3914();
/* paridad 97.1% preset agbcc_O2 */
void game_state_Ctor_1FE8(u32 *arg0,u32 arg1) {
  int val;
  *arg0 = 0x080E5E64;
  func_0803F8AC(*(u32 *)0x0300040C + 8);
  val = arg0[1];
  if (val != 0) {
    func_080D3914(val,3,*(u32 *)(*(int *)(val + 0xf4) + 8));
  }
  scene_Dtor(arg0,arg1);
}

/* 0x08012028 (60B) | game_state_vfunc_0C (orig: func_08012028) | origin: pure | domain: game_state | HIGH / vtable_algebra */
class V0 { public: virtual ~V0(); };
class V1 : public V0 {};
template <class T>
struct AutoPtr {
    T *_M_ptr;
    explicit AutoPtr(T *p = 0) : _M_ptr(p) {}
    AutoPtr(AutoPtr &a) : _M_ptr(a.release()) {}
    ~AutoPtr() { delete _M_ptr; }
    T *release() {
        T *tmp = _M_ptr;
        _M_ptr = 0;
        return tmp;
    }
    struct Ref {
        void *s;
        T *p;
        Ref(void *s, T *p) : s(s), p(p) {}
    };
    template <class U>
    AutoPtr(AutoPtr<U> const &a) {
        Ref r((void *)&a, a._M_ptr);
        *(U **)r.s = 0;
        _M_ptr = r.p;
    }
};
struct In { int f0; int f4; };
extern "C" AutoPtr<V1> func_080D8178(int);
extern "C" AutoPtr<V0> game_state_vfunc_0C(In *in) {
    return func_080D8178(in->f4);
}

/* 0x08012064 (64B) | game_state_GetEntityX (orig: func_08012064) | origin: pure | domain: game_state | HIGH / fomt_studio_dispatch */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D3910();
extern u32 game_state_Sub_080D7F9C();
void game_state_GetEntityX(int arg0,u32 arg1,u32 arg2,u32 arg3,
             u32 arg4) {
  int *mem_ptr;
  u32 val;
  int val2;
  val2 = *(int *)(arg0 + 4);
  mem_ptr = *(int **)(val2 + 0xa8);
  val = func_080D3910(mem_ptr,*(u32 *)(*mem_ptr + 0x14));
  game_state_Sub_080D7F9C(val2,arg1,val,arg2,arg3,arg4);
}

/* 0x080120A4 (32B) | game_state_GetEntityY (orig: func_080120A4) | origin: pure | domain: game_state | EXACT / fomt_studio_dispatch */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D3914();
u32 game_state_GetEntityY(int arg0,u32 arg1) {
  int *mem_ptr;
  int val;
  int val2;
  mem_ptr = *(int **)(*(int *)(arg0 + 4) + 0xa8);
  val = func_080D3914(mem_ptr,arg1,*(u32 *)(*mem_ptr + 0x40));
  val2 = 0;
  if (val != 0) {
    val2 = *(int *)(val + 8);
  }
  return val2 >> 0x10;
}

/* 0x080120C4 (32B) | game_state_SetEntityFacing (orig: func_080120C4) | origin: pure | domain: game_state | EXACT / fomt_studio_dispatch */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D3914();
u32 game_state_SetEntityFacing(int arg0,u32 arg1) {
  int *mem_ptr;
  int val;
  int val2;
  mem_ptr = *(int **)(*(int *)(arg0 + 4) + 0xa8);
  val = func_080D3914(mem_ptr,arg1,*(u32 *)(*mem_ptr + 0x40));
  val2 = 0;
  if (val != 0) {
    val2 = *(int *)(val + 0xc);
  }
  return val2 >> 0x10;
}

/* 0x080120E4 (48B) | game_state_GetEntityFacing (orig: func_080120E4) | origin: pure | domain: game_state | EXACT / fomt_studio_dispatch */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 AActorEntity_SetAnimFacing();
extern u32 func_080D3914();
void game_state_GetEntityFacing(int arg0,u32 arg1,u32 arg2) {
  int *mem_ptr;
  int val;
  mem_ptr = *(int **)(*(int *)(arg0 + 4) + 0xa8);
  val = func_080D3914(mem_ptr,arg1,*(u32 *)(*mem_ptr + 0x40));
  if ((val != 0) && (*(u8 *)(val + 0x20) != arg2)) {
    AActorEntity_SetAnimFacing(val,arg2);
  }
}

/* 0x08012114 (32B) | game_state_Force_Entity_Seat_State (orig: func_08012114) | origin: pure | domain: game_state | EXACT / fomt_studio_dispatch */
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
extern u32 func_080D3914();
u32 game_state_Force_Entity_Seat_State(int arg0,u32 arg1) {
  int *mem_ptr;
  int val;
  u32 val2;
  mem_ptr = *(int **)(*(int *)(arg0 + 4) + 0xa8);
  val = func_080D3914(mem_ptr,arg1,*(u32 *)(*mem_ptr + 0x40));
  val2 = (val == 0) ? (0) : ((u32)*(u8 *)(val + 0x20));
  return val2;
}

/* 0x08012134 (32B) | game_state_Entity_Action (orig: func_08012134) | origin: pure | domain: game_state | EXACT / fomt_studio_dispatch */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D3914();
u32 game_state_Entity_Action(int arg0,u32 arg1) {
  int *mem_ptr;
  int val;
  u32 val2;
  mem_ptr = *(int **)(*(int *)(arg0 + 4) + 0xa8);
  val = func_080D3914(mem_ptr,arg1,*(u32 *)(*mem_ptr + 0x40));
  val2 = 0x234;
  if (val != 0) {
    val2 = (u32)*(u16 *)(val + 4);
  }
  return val2;
}

/* 0x08012154 (32B) | game_state_Set_Vector_X (orig: func_08012154) | origin: pure | domain: game_state | EXACT / fomt_studio_dispatch */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D3914();
void game_state_Set_Vector_X(int arg0, u32 arg1, u32 arg2) {
  int *mem_ptr;
  int val;
  mem_ptr = *(int **)(*(int *)(arg0 + 4) + 0xa8);
  val = func_080D3914(mem_ptr,arg1,*(u32 *)(*mem_ptr + 0x40));
  if (val != 0) {
    *(u8 *)(val + 0x21) = arg2;
  }
}

/* 0x08012174 (40B) | game_state_Set_Camera_Position (orig: func_08012174) | origin: pure | domain: game_state | HIGH / fomt_studio_dispatch */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 entity_actor_Sub_08032308();
extern u32 func_080D3914();
void game_state_Set_Camera_Position(int arg0,u32 arg1,u32 arg2,u32 arg3) {
  int *mem_ptr;
  int val;
  mem_ptr = *(int **)(*(int *)(arg0 + 4) + 0xa8);
  val = func_080D3914(mem_ptr,arg1,*(u32 *)(*mem_ptr + 0x40));
  if (val != 0) {
    entity_actor_Sub_08032308(val,arg2,arg3);
  }
}

/* 0x0801219C (40B) | game_state_Execute_Movement (orig: func_0801219C) | origin: pure | domain: game_state | HIGH / fomt_studio_dispatch */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 entity_actor_Sub_0803233C();
extern u32 func_080D3914();
void game_state_Execute_Movement(int arg0,u32 arg1,u32 arg2,u32 arg3) {
  int *mem_ptr;
  int val;
  mem_ptr = *(int **)(*(int *)(arg0 + 4) + 0xa8);
  val = func_080D3914(mem_ptr,arg1,*(u32 *)(*mem_ptr + 0x40));
  if (val != 0) {
    entity_actor_Sub_0803233C(val,arg2,arg3);
  }
}

/* 0x080121C4 (40B) | game_state_SetEntityAnim (orig: func_080121C4) | origin: pure | domain: game_state | EXACT / fomt_studio_dispatch */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D3914();
void game_state_SetEntityAnim(int arg0,u32 arg1) {
  int val;
  int val2;
  val2 = *(int *)(arg0 + 4);
  val = func_080D3914(*(int **)(val2 + 0xa8),arg1,
                          *(u32 *)(**(int **)(val2 + 0xa8) + 0x40));
  *(int *)(val2 + 0xe4) = val;
  if (val != 0) {
    *(u32 *)(val2 + 0x9c) = 0x16;
  }
}

/* 0x080121EC (44B) | game_state_Sub_080121EC (orig: func_080121EC) | origin: pure | domain: game_state | HIGH / stanhash_map_tu */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 AActorEntity_SetAnim();
extern u32 func_080D3914();
void game_state_Sub_080121EC(int arg0,u32 arg1,u32 arg2) {
  int *mem_ptr;
  int val;
  mem_ptr = *(int **)(*(int *)(arg0 + 4) + 0xa8);
  val = func_080D3914(mem_ptr,arg1,*(u32 *)(*mem_ptr + 0x40));
  if ((val != 0) && (*(u16 *)(val + 0x22) != arg2)) {
    AActorEntity_SetAnim(val,arg2);
  }
}

/* 0x08012218 (4B) | game_state_Hide_Entity (orig: func_08012218) | origin: pure | domain: game_state | EXACT / fomt_studio_dispatch */
void game_state_Hide_Entity(void) {
}

/* 0x0801221C (32B) | game_state_Spawn_Event_Entity (orig: func_0801221C) | origin: pure | domain: game_state | EXACT / fomt_studio_dispatch */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 AEntity_SetMap();
extern u32 func_080D3914();
void game_state_Spawn_Event_Entity(int arg0,u32 arg1) {
  int *mem_ptr;
  int val;
  mem_ptr = *(int **)(*(int *)(arg0 + 4) + 0xa8);
  val = func_080D3914(mem_ptr,arg1,*(u32 *)(*mem_ptr + 0x40));
  if (val != 0) {
    AEntity_SetMap(val,0x234);
  }
}

/* 0x0801223C (56B) | game_state_Warp_Player (orig: func_0801223C) | origin: wip | domain: game_state | EXACT / fomt_studio_dispatch */
void game_state_Warp_Player(int param_1,u32 param_2,int param_3,int param_4) {
  int *piVar1;
  int iVar2;
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0xa8);
  iVar2 = func_080D3914(piVar1,param_2,*(u32 *)(*piVar1 + 0x40));
  if (iVar2 != 0) {
    game_state_Sub_08033B84(iVar2,*(s8 *)(iVar2 + 0x30),*(short *)(iVar2 + 10) + param_3,
                  *(short *)(iVar2 + 0xe) + param_4);
  }
}

/* 0x08012274 (44B) | game_state_Wait_For_Animation (orig: func_08012274) | origin: pure | domain: game_state | EXACT / fomt_studio_dispatch */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 entity_actor_Sub_08032384();
extern u32 func_080D3914();
void game_state_Wait_For_Animation(int arg0,u32 arg1,u32 arg2,u32 arg3) {
  int *mem_ptr;
  int val;
  mem_ptr = *(int **)(*(int *)(arg0 + 4) + 0xa8);
  val = func_080D3914(mem_ptr,arg1,*(u32 *)(*mem_ptr + 0x40));
  if (val != 0) {
    entity_actor_Sub_08032384(val,arg2,(-arg3 | arg3) >> 0x1f);
  }
}

/* 0x080122A0 (28B) | game_state_GetOppositeFacing (orig: func_080122A0) | origin: pure | domain: game_state | EXACT / fomt_studio_dispatch */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 entity_actor_Sub_080323C8();
extern u32 func_080D3914();
void game_state_GetOppositeFacing(int arg0,u32 arg1) {
  int *mem_ptr;
  int val;
  mem_ptr = *(int **)(*(int *)(arg0 + 4) + 0xa8);
  val = func_080D3914(mem_ptr,arg1,*(u32 *)(*mem_ptr + 0x40));
  if (val != 0) {
    entity_actor_Sub_080323C8();
  }
}

/* 0x080122BC (36B) | game_state_Show_Emote (orig: func_080122BC) | origin: pure | domain: game_state | EXACT / fomt_studio_dispatch */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 entity_actor_SetField_0x00();
extern u32 func_080D3914();
void game_state_Show_Emote(int arg0,u32 arg1,u32 arg2) {
  int *mem_ptr;
  int val;
  mem_ptr = *(int **)(*(int *)(arg0 + 4) + 0xa8);
  val = func_080D3914(mem_ptr,arg1,*(u32 *)(*mem_ptr + 0x40));
  if (val != 0) {
    entity_actor_SetField_0x00(val,arg2);
  }
}

/* 0x0801238C (24B) | game_state_Wait_Camera_Stop (orig: func_0801238C) | origin: pure | domain: game_state | EXACT / fomt_studio_dispatch */
void game_state_Wait_Camera_Stop(u8 **a, u32 b, u32 c, u32 d) { u32 *p = *(u32 **)(a[1] + 0xa8); (*(void (**)(u32 *, u32, u32, u32))(*p + 0x24))(p, b, c, d); }

/* 0x080123A4 (40B) | game_state_PlayBGM (orig: func_080123A4) | origin: pure | domain: game_state | EXACT / fomt_studio_dispatch */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D3910();
void game_state_PlayBGM(int arg0) {
  char val;
  int *mem_ptr;
  int val2;
  val2 = *(int *)(arg0 + 4);
  mem_ptr = *(int **)(val2 + 0xa8);
  val = func_080D3910(mem_ptr,*(u32 *)(*mem_ptr + 0x28));
  if (val == '\0') {
    *(u32 *)(val2 + 0x9c) = 0x17;
  }
}

/* 0x080123CC (136B) | game_state_StopBGM (orig: func_080123CC) | origin: wip | domain: game_state | EXACT / fomt_studio_dispatch */
void game_state_StopBGM(int param_1,int param_2,u16 param_3,u16 *param_4) {
  register int iVar1;
  register s8 iVar2;
  iVar2 = *(int *)(param_1 + 4);
  iVar1 = (u8)iVar2 + 0xbc;
  if (param_2 == 1) {
    hardware_Wrap_m4aMPlayStart_8B88(iVar1,param_3);
  }
  else if (param_2 < 2) {
    if (param_2 == 0) {
      hardware_Wrap_m4aMPlayStart(iVar1,param_3);
    }
  }
  else if (param_2 == 2) {
    hardware_Sub_08008BB0(iVar1,param_3);
  }
    hardware_Wrap_m4aMPlayImmInit(iVar2 + 0xbc);
  hardware_Wrap_m4aMPlayTempoControl(iVar2,*param_4);
  hardware_Wrap_m4aMPlayVolumeControl(iVar2,param_4[1],0x0000FFFF);
  hardware_Wrap_m4aMPlayPitchControl(iVar2,(int)(short)param_4[2],0x0000FFFF);
  hardware_Wrap_m4aMPlayPanpotControl(iVar2,(int)*(u16 *)(param_4 + 3),0x0000FFFF);
  hardware_Wrap_m4aMPlayModDepthSet(iVar2,*(u8 *)((int)param_4 + 7),0x0000FFFF);
  hardware_Wrap_m4aMPlayLFOSpeedSet(iVar2,*(u8 *)(param_4 + 4),0x0000FFFF);
}

/* 0x08012454 (16B) | game_state_PlaySong (orig: func_08012454) | origin: pure | domain: game_state | EXACT / fomt_studio_dispatch */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 hardware_Wrap_m4aMPlayStop();
void game_state_PlaySong(int arg0) {
  hardware_Wrap_m4aMPlayStop(*(int *)(arg0 + 4) + 0xbc);
}

/* 0x08012464 (96B) | game_state_StopAllSongs (orig: func_08012464) | origin: wip | domain: game_state | EXACT / fomt_studio_dispatch */
void game_state_StopAllSongs(int param_1,int param_2,u16 param_3) {
  char cVar1;
  u32 uVar2;
  u32 *puVar3;
  u32 *puVar4;
  puVar3 = *(u32 **)(*(int *)(param_1 + 4) + 0xd0);
  puVar4 = *(u32 **)(*(int *)(param_1 + 4) + 0xd4);
  do {
    if (puVar3 == puVar4) {
      uVar2 = puVar4[-1];
LAB_0801248c:
      if (param_2 == 1) {
        hardware_Wrap_m4aMPlayStart_8B88(uVar2,param_3);
      }
      else if (param_2 < 2) {
        if (param_2 == 0) {
          hardware_Wrap_m4aMPlayStart(uVar2);
        }
      }
      else if (param_2 == 2) {
        hardware_Sub_08008BB0(uVar2);
      }
    }
    cVar1 = hardware_GetField_0x00_8CD0(*puVar3);
    if (cVar1 == '\0') {
      uVar2 = *puVar3;
      goto LAB_0801248c;
    }
    puVar3 = puVar3 + 1;
  } while( true );
}

/* 0x080124C4 (12B) | game_state_FadeOutBGM (orig: func_080124C4) | origin: pure | domain: game_state | EXACT / fomt_studio_dispatch */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 hardware_Wrap_m4aMPlayAllStop();
void game_state_FadeOutBGM(void) {
  hardware_Wrap_m4aMPlayAllStop();
}

/* 0x080124D0 (284B) | game_state_TalkClose (orig: func_080124D0) | origin: wip | domain: game_state | EXACT / fomt_studio_dispatch */
void game_state_TalkClose(s8 param_1) {
  int *piVar1;
  u32 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  u8 auStack_1c [4];
  u8 auStack_18 [4];
  iVar5 = *(int *)(param_1 + 4);
  iVar4 = *(int *)(iVar5 + 0xb4);
  if ((iVar4 != 0) && (iVar4 != 0)) {
    func_080D3914(iVar4,3,*(u32 *)(*(int *)(iVar4 + 4) + 8));
  }
  *(u8 *)(iVar5 + 0xb4) = 0;
  iVar4 = *(int *)(iVar5 + 0xb8);
  if ((iVar4 != 0) && (iVar4 != 0)) {
    func_080D3914(iVar4,3,*(u32 *)(*(int *)(iVar4 + 4) + 8));
  }
  *(int *)(iVar5 + 0xb8) = 0;
  piVar1 = (int *)(iVar5 + 0xac);
  if (*piVar1 == 0) {
    if (*(char *)(iVar5 + 0xe8) == '\0') {
      uVar2 = CppRuntime_builtin_new(4);
      hardware_SetField_0x00_835C(auStack_1c);
      hardware_SetField_0x00(auStack_18);
      iVar4 = hardware_5BB4_Sub_08050CC0(uVar2,0,0x1f,0,1,auStack_1c,auStack_18);
      iVar3 = *piVar1;
      if ((iVar4 != iVar3) && (iVar3 != 0)) {
        SpriteAnimEngine_5A28_Wrap_Dtor_0D0C(iVar3,3);
      }
      *piVar1 = iVar4;
      hardware_Sub_08007714(auStack_18,2);
      hardware_Sub_08008364(auStack_1c,2);
    }
    else {
      uVar2 = CppRuntime_builtin_new(4);
      hardware_SetField_0x00_835C(auStack_1c);
      hardware_SetField_0x00(auStack_18);
      iVar4 = hardware_5BB4_Sub_08050CC0(uVar2,0,0x1f,0,0,auStack_1c,auStack_18);
      iVar3 = *piVar1;
      if ((iVar4 != iVar3) && (iVar3 != 0)) {
        SpriteAnimEngine_5A28_Wrap_Dtor_0D0C(iVar3,3);
      }
      *piVar1 = iVar4;
      hardware_Sub_08007714(auStack_18,2);
      hardware_Sub_08008364(auStack_1c,2);
    }
  }
  iVar4 = code_0803EE94_GetField_0x00(*piVar1);
  if (iVar4 != 3) {
    code_0803EE94_78C0_Sub_08050D5C(*piVar1);
    *(u32 *)(iVar5 + 0x9c) = 0xe;
  }
}

/* 0x080125EC (108B) | game_state_TalkOpen (orig: func_080125EC) | origin: wip | domain: game_state | EXACT / fomt_studio_dispatch */
void game_state_TalkOpen(int param_1) {
  int iVar1;
  int iVar2;
  iVar2 = *(int *)(param_1 + 4);
  iVar1 = *(int *)(iVar2 + 0xb4);
  if ((iVar1 != 0) && (iVar1 != 0)) {
    func_080D3914(iVar1,3,*(u32 *)(*(int *)(iVar1 + 4) + 8));
  }
  *(int *)(iVar2 + 0xb4) = 0;
  iVar1 = *(int *)(iVar2 + 0xb8);
  if ((iVar1 != 0) && (iVar1 != 0)) {
    func_080D3914(iVar1,3,*(u32 *)(*(int *)(iVar1 + 4) + 8));
  }
  *(int *)(iVar2 + 0xb8) = 0;
  iVar1 = *(int *)(iVar2 + 0xac);
  if ((iVar1 != 0) && (iVar1 != 0)) {
    SpriteAnimEngine_5A28_Wrap_Dtor_0D0C(iVar1,3);
  }
  *(int *)(iVar2 + 0xac) = 0;
  *(u16 *)(iVar2 + 0x10) = (u16)0x0000FEFF & *(u16 *)(iVar2 + 0x10);
}

/* 0x08012658 (52B) | game_state_TalkMessage (orig: func_08012658) | origin: pure | domain: game_state | EXACT / fomt_studio_dispatch */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_0803EE94_78C0_Sub_08050D74();
extern u32 game_state_Sub_080D7F60();
extern u32 PortraitEngine_Sub_080D7F74();
extern u32 Code_Lib_Syscall_Sub_080D7F88();
void game_state_TalkMessage(int arg0) {
  int val;
  val = *(int *)(arg0 + 4);
  if (*(int *)(val + 0xac) != 0) {
    code_0803EE94_78C0_Sub_08050D74();
    Code_Lib_Syscall_Sub_080D7F88(val);
    PortraitEngine_Sub_080D7F74(val);
    game_state_Sub_080D7F60(val);
    *(u32 *)(val + 0x9c) = 0xf;
  }
}

/* 0x0801268C (48B) | game_state_TalkMessageSlow (orig: func_0801268C) | origin: pure | domain: game_state | HIGH / fomt_studio_dispatch */
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
extern u32 code_0803EE94_78C0_Sub_08050DC8();
void game_state_TalkMessageSlow(int arg0, u32 arg1, u32 arg2) {
  int val;
  val = *(int *)(arg0 + 4);
  if (*(int *)(val + 0xac) != 0) {
    code_0803EE94_78C0_Sub_08050DC8(*(int *)(val + 0xac), arg1, (u16)arg2, *(u32 *)(val + 0xb0));
    *(u32 *)(val + 0x9c) = 0x10;
  }
}

/* 0x080126BC (40B) | game_state_Set_TV_Screen_Graphic (orig: func_080126BC) | origin: pure | domain: game_state | EXACT / fomt_studio_dispatch */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_0803EE94_78C0_Sub_08050DC8();
void game_state_Set_TV_Screen_Graphic(int arg0,u32 arg1) {
  int val;
  val = *(int *)(arg0 + 4);
  if (*(int *)(val + 0xac) != 0) {
    code_0803EE94_78C0_Sub_08050DC8(*(int *)(val + 0xac),arg1,0x40,*(u32 *)(val + 0xb0));
    *(u32 *)(val + 0x9c) = 0x11;
  }
}

/* 0x080126E4 (60B) | game_state_Create_Select_List (orig: func_080126E4) | origin: wip | domain: game_state | EXACT / fomt_studio_dispatch */
void game_state_Create_Select_List(int param_1) {
  u32 uVar1;
  int iVar2;
  int iVar3;
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0xac);
  if ((iVar3 != 0) &&
     (iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x8c),
     (int)((u32)*(u8 *)(iVar2 + 0x00002210) * 0x10000000) < 0)) {
    uVar1 = NpcSystem_Sub_0809FE3C(iVar2 + 0x00001CD4);
    Code_Lib_Syscall_Sub_08050E68(iVar3,uVar1);
  }
}

/* 0x08012720 (44B) | game_state_Make_Store_Error (orig: func_08012720) | origin: pure | domain: game_state | EXACT / fomt_studio_dispatch */
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
extern u32 Code_Lib_Syscall_Sub_08050E68();
void game_state_Make_Store_Error(u32 arg0, u32 arg1, u32 arg2, u32 arg3)
{
    register u32 r0 = arg0;
    register u32 r1 = arg1;
    register u32 r2 = arg2;
    register u32 r3 = arg3;
    r2 = *(u32 *)(r0 + 4);
    r0 = r2 + 0;
    r0 += 0xac;
    r3 = *(u32 *)(r0);
    if (r3 == 0) goto loc_08012744;
    r0 -= 0x20;
    r0 = *(u32 *)(r0);
    r2 = 0x00002210;
    r0 = r0 + r2;
    r0 = *(u8 *)(r0);
    r0 = r0 << 0x1c;
    if ((int)r0 >= 0) goto loc_08012744;
    r0 = r3 + 0;
    r0 = Code_Lib_Syscall_Sub_08050E68(r0, r1, r2, r3);
loc_08012744:
    return r0;
}

/* 0x0801274C (20B) | game_state_Set_Portrait (orig: func_0801274C) | origin: pure | domain: game_state | EXACT / fomt_studio_dispatch */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 Code_Lib_Syscall_Sub_08050E74();
void game_state_Set_Portrait(int arg0) {
  if (*(int *)(*(int *)(arg0 + 4) + 0xac) != 0) {
    Code_Lib_Syscall_Sub_08050E74();
  }
}

/* 0x08012760 (44B) | game_state_Talk_Mini_Close (orig: func_08012760) | origin: pure | domain: game_state | EXACT / fomt_studio_dispatch */
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
extern u32 PortraitEngine_Sub_08050E50();
void game_state_Talk_Mini_Close(u32 arg0, u32 arg1, u32 arg2, u32 arg3)
{
    register u32 r0 = arg0;
    register u32 r1 = arg1;
    register u32 r2 = arg2;
    register u32 r3 = arg3;
    r2 = *(u32 *)(r0 + 4);
    r0 = r2 + 0;
    r0 += 0xac;
    r3 = *(u32 *)(r0);
    if (r3 == 0) goto loc_08012784;
    r0 -= 0x20;
    r0 = *(u32 *)(r0);
    r2 = 0x00002210;
    r0 = r0 + r2;
    r0 = *(u8 *)(r0);
    r0 = r0 << 0x1d;
    if ((int)r0 >= 0) goto loc_08012784;
    r0 = r3 + 0;
    r0 = PortraitEngine_Sub_08050E50(r0, r1, r2, r3);
loc_08012784:
    return r0;
}

/* 0x0801278C (20B) | game_state_Set_Hearth_Anim (orig: func_0801278C) | origin: pure | domain: game_state | EXACT / fomt_studio_dispatch */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 PortraitEngine_Sub_08050E5C();
void game_state_Set_Hearth_Anim(int arg0) {
  if (*(int *)(*(int *)(arg0 + 4) + 0xac) != 0) {
    PortraitEngine_Sub_08050E5C();
  }
}

/* 0x080127A0 (172B) | game_state_Sub_080127A0 (orig: func_080127A0) | origin: wip | domain: game_state | HIGH / stanhash_map_tu */
void game_state_Sub_080127A0(int param_1, u8 param_2) {
  s8 iVar1;
  u32 uVar2;
  u32 uVar3;
  register int iVar4;
  iVar4 = *(int *)(param_1 + 4);
  if ((((*(int *)(iVar4 + 0xac) != 0) &&
       ((int)((u32)*(u8 *)(*(int *)(iVar4 + 0x8c) + 0x00002210) * 0x20000000) < 0)) &&
      (param_2 != 0x1f)) &&
     (iVar1 = ScriptVM_Give_Love_Points(*(int *)(iVar4 + 0x8c) + 0x00001CD4), 0 != iVar1)) {
    uVar2 = func_0809E498();
    if (uVar2 > 0x0000EA5F) {
      uVar3 = 6;
    }
    else if (0x0000C34F < uVar2) {
      uVar3 = 5;
    }
    else if (0x00009C3F < uVar2) {
      uVar3 = 4;
    }
    else if (0x0000752F < uVar2) {
      uVar3 = 3;
    }
    else if (uVar2 > 0x00004E1F) {
      uVar3 = 2;
    }
    else {
      uVar3 = 0;
      if (0x0000270F < uVar2) {
        uVar3 = 1;
      }
    }
    game_state_Sub_08050E80(*(u32 *)(iVar4 + 0xac),uVar3);
  }
}

/* 0x0801284C (20B) | game_state_Fade_Out (orig: func_0801284C) | origin: pure | domain: game_state | EXACT / fomt_studio_dispatch */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 game_state_Sub_08050E8C();
void game_state_Fade_Out(int arg0) {
  if (*(int *)(*(int *)(arg0 + 4) + 0xac) != 0) {
    game_state_Sub_08050E8C();
  }
}

/* 0x08012860 (112B) | game_state_Draw_Menu_With_Header (orig: func_08012860) | origin: wip | domain: game_state | EXACT / fomt_studio_dispatch */
void game_state_Draw_Menu_With_Header(int param_1,u32 param_2,int param_3,int param_4,int param_5,int param_6) {
  u32 uVar1;
  int iVar2;
  int iVar3;
  iVar3 = *(int *)(param_1 + 4);
  iVar2 = *(int *)(iVar3 + 0xac);
  if (iVar2 == 0) {
  }
  if (param_3 == 0) {
  }
  if (param_4 == 0) {
  }
  if (param_5 == 0) {
    uVar1 = *(u32 *)(iVar3 + 0xb0);
  }
  else {
    if (param_6 != 0) {
      code_0803EE94_Sub_08050E30(iVar2,param_2,param_3,param_4,param_5,param_6,*(u32 *)(iVar3 + 0xb0));
      goto LAB_080128c0;
    }
    uVar1 = *(u32 *)(iVar3 + 0xb0);
  }
  code_0803EE94_Sub_08050E30(iVar2,param_2,param_3,param_4,param_5,0,uVar1);
LAB_080128c0:
  *(u32 *)(iVar3 + 0x9c) = 0x14;
}

/* 0x080128D0 (172B) | game_state_TalkChoice3 (orig: func_080128D0) | origin: wip | domain: game_state | HIGH / fomt_studio_dispatch */
void game_state_TalkChoice3(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7) {
  u32 uVar1;
  int iVar2;
  int iVar3;
  iVar3 = *(int *)(param_1 + 4);
  iVar2 = *(int *)(iVar3 + 0xac);
  if (iVar2 == 0) {
  }
  if (param_2 == 0) {
  }
  if (param_3 == 0) {
  }
  if (param_4 == 0) {
    code_0803EE94_Sub_08050E0C(iVar2,param_2,param_3,0,0,0,0,*(u32 *)(iVar3 + 0xb0));
  }
  else {
    if (param_5 == 0) {
      uVar1 = *(u32 *)(iVar3 + 0xb0);
      param_6 = 0;
    }
    else if (param_6 == 0) {
      uVar1 = *(u32 *)(iVar3 + 0xb0);
    }
    else {
      if (param_7 != 0) {
        code_0803EE94_Sub_08050E0C(iVar2,param_2,param_3,param_4,param_5,param_6,param_7,
                      *(u32 *)(iVar3 + 0xb0));
        goto LAB_0801296c;
      }
      uVar1 = *(u32 *)(iVar3 + 0xb0);
    }
    code_0803EE94_Sub_08050E0C(iVar2,param_2,param_3,param_4,param_5,param_6,0,uVar1);
  }
LAB_0801296c:
  *(u32 *)(iVar3 + 0x9c) = 0x14;
}

/* 0x08012AA4 (40B) | game_state_Set_Text_Buffer_Int_Formatted (orig: func_08012AA4) | origin: pure | domain: game_state | EXACT / fomt_studio_dispatch */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 game_state_Sub_0803B6B8();
extern u32 code_0803EE94_Sub_0804EC84();
void game_state_Set_Text_Buffer_Int_Formatted(int arg0,u32 arg1,u32 arg2) {
  int val;
  u8 auStack_40 [52];
  val = *(int *)(arg0 + 4);
  code_0803EE94_Sub_0804EC84(arg2,auStack_40,0);
  game_state_Sub_0803B6B8(*(u32 *)(val + 0xb0),arg1,auStack_40);
}

/* 0x08012ACC (16B) | game_state_Func11C (orig: func_08012ACC) | origin: pure | domain: game_state | HIGH / fomt_studio_dispatch */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 game_state_Sub_0803B6B8();
void game_state_Func11C(int arg0) {
  game_state_Sub_0803B6B8(*(u32 *)(*(int *)(arg0 + 4) + 0xb0));
}

/* 0x08012ADC (40B) | game_state_Check_Date (orig: func_08012ADC) | origin: pure | domain: game_state | EXACT / fomt_studio_dispatch */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 game_state_Sub_0803B6B8();
extern u32 code_0803EE94_Sub_0804EC84();
void game_state_Check_Date(int arg0,u32 arg1,u32 arg2,u32 arg3) {
  int val;
  u8 auStack_40 [52];
  val = *(int *)(arg0 + 4);
  code_0803EE94_Sub_0804EC84(arg2,auStack_40,arg3);
  game_state_Sub_0803B6B8(*(u32 *)(val + 0xb0),arg1,auStack_40);
}

/* 0x08012B04 (32B) | game_state_Set_Text_Buffer_Int (orig: func_08012B04) | origin: pure | domain: game_state | EXACT / fomt_studio_dispatch */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 ScriptEngine_LoadById();
extern u32 game_state_Sub_080D7F3C();
/* paridad 94.1% preset agbcc_O2 */
void game_state_Set_Text_Buffer_Int(int arg0) {
  u32 val;
  val = *(u32 *)(arg0 + 4);
  ScriptEngine_LoadById(*(int *)0x0300040C + 8);
  game_state_Sub_080D7F3C(val);
}

/* 0x08012B24 (136B) | game_state_Sub_08012B24 (orig: func_08012B24) | origin: wip | domain: game_state | HIGH / stanhash_map_tu */
void game_state_Sub_08012B24(u32 param_1,u32 *param_2,int param_3) {
  u32 uVar1;
  int iVar2;
  u32 *puVar3;
  u32 *puVar4;
  iVar2 = *(u16 *)0x0300040C;
  puVar4 = (u32 *)(iVar2 + 0x378);
  if (param_3 == 1) {
    puVar4 = (u32 *)(iVar2 + 0x38c);
    if (0x27 < *puVar4) {
    }
    puVar3 = puVar4 + *puVar4 * 2 + 1;
  }
  else {
    if (param_3 < 2) {
      if (param_3 != 0) {
      }
      if (1 < *puVar4) {
      }
      puVar3 = puVar4 + *puVar4 * 2 + 1;
      if (puVar3 != (u32 *)0x0) {
        uVar1 = param_2[1];
        *puVar3 = *param_2;
        puVar3[1] = uVar1;
      }
      *puVar4 = *puVar4 + 1;
    }
    if (param_3 != 2) {
    }
    puVar4 = (u32 *)(iVar2 + 0x4d0);
    if (*puVar4 != 0) {
    }
    puVar3 = (u32 *)(iVar2 + 0x000004D4);
  }
  if (puVar3 != (u32 *)0x0) {
    uVar1 = param_2[1];
    *puVar3 = *param_2;
    puVar3[1] = uVar1;
  }
  *puVar4 = *puVar4 + 1;
}

/* 0x08012BAC (16B) | game_state_Execute_Script (orig: func_08012BAC) | origin: pure | domain: game_state | EXACT / fomt_studio_dispatch */
void game_state_Execute_Script(u8 **a, u16 b) { u8 *p = a[1]; *(u16 *)(p + 0xe0) = b; *(u32 *)(p + 0x9c) = 0x15; }

/* 0x080134A4 (160B) | game_state_Show_Profile_UI (orig: func_080134A4) | origin: wip | domain: game_state | EXACT / fomt_studio_dispatch */
void game_state_Show_Profile_UI(int param_1) {
  u32 *puVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  u32 uStack_2c;
  u32 uStack_28;
  iVar6 = *(int *)(param_1 + 4);
  puVar1 = (u32 *)CppRuntime_builtin_new(0x14);
  iVar3 = *(int *)(iVar6 + 0x8c);
  *puVar1 = 0x080E5E74;
  puVar1[1] = iVar3;
  puVar1[2] = 0x18;
  puVar1[3] = uStack_2c;
  puVar1[4] = uStack_28;
  piVar2 = (int *)CppRuntime_builtin_new(0x10,0,puVar1 + 5);
  iVar3 = 0x00001001;
  iVar5 = *(int *)(iVar6 + 0x8c);
  *piVar2 = 0x080E5D54;
  piVar2[1] = (int)puVar1;
  piVar2[2] = iVar5;
  piVar2[3] = iVar3;
  piVar4 = *(int **)(iVar6 + 0xa4);
  if ((piVar2 != piVar4) && (piVar4 != (int *)0x0)) {
    func_080D3914(piVar4,3,*(u32 *)(*piVar4 + 8));
  }
  *(int **)(iVar6 + 0xa4) = piVar2;
  *(u32 *)(iVar6 + 0x9c) = 0x18;
}

/* 0x08013EF8 (144B) | game_state_Proc0AA (orig: func_08013EF8) | origin: wip | domain: game_state | HIGH / fomt_studio_dispatch */
void game_state_Proc0AA(int param_1,u32 param_2) {
  int *piVar1;
  int *piVar2;
  u32 uVar3;
  int iVar4;
  u32 uStack_30;
  u32 uStack_2c;
  u32 *apuStack_24 [3];
  iVar4 = *(int *)(param_1 + 4);
  apuStack_24[0] = (u32 *)CppRuntime_builtin_new(0x14);
  uVar3 = *(u32 *)(iVar4 + 0x8c);
  *apuStack_24[0] = 0x080E5E74;
  apuStack_24[0][1] = uVar3;
  apuStack_24[0][2] = 0x2f;
  apuStack_24[0][3] = uStack_30;
  apuStack_24[0][4] = uStack_2c;
  uVar3 = CppRuntime_builtin_new(0xc,0,apuStack_24[0] + 5);
  piVar1 = (int *)code_0803A8A4_7748_Ctor(uVar3,apuStack_24,param_2);
  piVar2 = *(int **)(iVar4 + 0xa4);
  if ((piVar1 != piVar2) && (piVar2 != (int *)0x0)) {
    func_080D3914(piVar2,3,*(u32 *)(*piVar2 + 8));
  }
  *(int **)(iVar4 + 0xa4) = piVar1;
  *(u32 *)(iVar4 + 0x9c) = 0x18;
}

/* 0x08014034 (24B) | game_state_Proc0AB (orig: func_08014034) | origin: pure | domain: game_state | HIGH / fomt_studio_dispatch */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D3910();
void game_state_Proc0AB(int arg0) {
  int *mem_ptr;
  mem_ptr = *(int **)(*(int *)(arg0 + 4) + 0xa8);
  func_080D3910(mem_ptr,*(u32 *)(*mem_ptr + 0x84));
}

/* 0x0801404C (24B) | game_state_Proc0AC (orig: func_0801404C) | origin: pure | domain: game_state | HIGH / fomt_studio_dispatch */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D3910();
void game_state_Proc0AC(int arg0) {
  int *mem_ptr;
  mem_ptr = *(int **)(*(int *)(arg0 + 4) + 0xa8);
  func_080D3910(mem_ptr,*(u32 *)(*mem_ptr + 0x88));
}

/* 0x08014064 (24B) | game_state_Proc0AD (orig: func_08014064) | origin: pure | domain: game_state | HIGH / fomt_studio_dispatch */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D3910();
void game_state_Proc0AD(int arg0) {
  int *mem_ptr;
  mem_ptr = *(int **)(*(int *)(arg0 + 4) + 0xa8);
  func_080D3910(mem_ptr,*(u32 *)(*mem_ptr + 0x8c));
}

/* 0x0801407C (24B) | game_state_Proc0AE (orig: func_0801407C) | origin: pure | domain: game_state | HIGH / fomt_studio_dispatch */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D3910();
void game_state_Proc0AE(int arg0) {
  int *mem_ptr;
  mem_ptr = *(int **)(*(int *)(arg0 + 4) + 0xa8);
  func_080D3910(mem_ptr,*(u32 *)(*mem_ptr + 0x90));
}

/* 0x08014094 (24B) | game_state_Proc0AF (orig: func_08014094) | origin: pure | domain: game_state | HIGH / fomt_studio_dispatch */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D3910();
void game_state_Proc0AF(int arg0) {
  int *mem_ptr;
  mem_ptr = *(int **)(*(int *)(arg0 + 4) + 0xa8);
  func_080D3910(mem_ptr,*(u32 *)(*mem_ptr + 0x94));
}

/* 0x080140AC (24B) | game_state_Func0B0 (orig: func_080140AC) | origin: pure | domain: game_state | HIGH / fomt_studio_dispatch */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D3910();
void game_state_Func0B0(int arg0) {
  int *mem_ptr;
  mem_ptr = *(int **)(*(int *)(arg0 + 4) + 0xa8);
  func_080D3910(mem_ptr,*(u32 *)(*mem_ptr + 0x98));
}

/* 0x080140C4 (24B) | game_state_Ship_Item_From_Ground (orig: func_080140C4) | origin: pure | domain: game_state | EXACT / fomt_studio_dispatch */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D3914();
void game_state_Ship_Item_From_Ground(int arg0,u32 arg1) {
  int *mem_ptr;
  mem_ptr = *(int **)(*(int *)(arg0 + 4) + 0xa8);
  func_080D3914(mem_ptr,arg1,*(u32 *)(*mem_ptr + 0x9c));
}

/* 0x080140DC (24B) | game_state_Proc0B9 (orig: func_080140DC) | origin: pure | domain: game_state | HIGH / fomt_studio_dispatch */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D3914();
void game_state_Proc0B9(int arg0,u32 arg1) {
  int *mem_ptr;
  mem_ptr = *(int **)(*(int *)(arg0 + 4) + 0xa8);
  func_080D3914(mem_ptr,arg1,*(u32 *)(*mem_ptr + 0xa0));
}

/* 0x080140F4 (24B) | game_state_Func0C1 (orig: func_080140F4) | origin: pure | domain: game_state | HIGH / fomt_studio_dispatch */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D3910();
void game_state_Func0C1(int arg0) {
  int *mem_ptr;
  mem_ptr = *(int **)(*(int *)(arg0 + 4) + 0xa8);
  func_080D3910(mem_ptr,*(u32 *)(*mem_ptr + 0x80));
}

/* 0x0801410C (32B) | game_state_Activate_Hot_Spring_Healing (orig: func_0801410C) | origin: pure | domain: game_state | EXACT / fomt_studio_dispatch */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D3910();
extern u32 func_080D3914();
u32 game_state_Activate_Hot_Spring_Healing(int arg0) {
  int *mem_ptr;
  int val;
  mem_ptr = *(int **)(*(int *)(arg0 + 4) + 0xa8);
  val = func_080D3914(mem_ptr,0,*(u32 *)(*mem_ptr + 0x40));
  return func_080D3910(val,*(u32 *)(*(int *)(val + 0x14) + 0x40));
}

/* 0x0801412C (56B) | game_state_Trigger_Machine_Processing (orig: func_0801412C) | origin: wip | domain: game_state | EXACT / fomt_studio_dispatch */
u32 game_state_Trigger_Machine_Processing(int param_1) {
  u32 val;
  val = func_080D3914(*(u32 *)((*(s8 *)(param_1 + 4) + 0xa8)), 0, *(u32 *)(*(u32 *)(*(u32 *)((*(u32 *)(param_1 + 4) + 0xa8))) + 0x40));
  val = func_080D3910(val, *(u32 *)(*(u32 *)(val + 0x14) + 0x48), *(u32 *)(*(u32 *)(*(u32 *)((*(u32 *)(param_1 + 4) + 0xa8))) + 0x40));
  return (val << 0x18);
}

/* 0x08014164 (52B) | game_state_Give_Item (orig: func_08014164) | origin: pure | domain: game_state | HIGH / fomt_studio_dispatch */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D3914();
extern u32 func_080D3918();
u32 game_state_Give_Item(int arg0,u32 arg1,u8 arg2) {
  int *mem_ptr;
  int val;
  int val2;
  val2 = *(int *)(arg0 + 4);
  mem_ptr = *(int **)(val2 + 0xa8);
  val = func_080D3914(mem_ptr,0,*(u32 *)(*mem_ptr + 0x40));
  func_080D3918(val,arg1,arg2,*(u32 *)(*(int *)(val + 0x14) + 0x5c));
  *(u32 *)(val2 + 0x9c) = 0x19;
  return 1;
}

/* 0x08014198 (44B) | game_state_Func073 (orig: func_08014198) | origin: pure | domain: game_state | HIGH / fomt_studio_dispatch */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D3910();
extern u32 func_080D3914();
u32 game_state_Func073(int arg0) {
  int *mem_ptr;
  int val;
  int val2;
  val2 = *(int *)(arg0 + 4);
  mem_ptr = *(int **)(val2 + 0xa8);
  val = func_080D3914(mem_ptr,0,*(u32 *)(*mem_ptr + 0x40));
  func_080D3910(val,*(u32 *)(*(int *)(val + 0x14) + 0x60));
  *(u32 *)(val2 + 0x9c) = 0x19;
  return 1;
}

/* 0x080141C4 (40B) | game_state_Check_Equped_Tool (orig: func_080141C4) | origin: pure | domain: game_state | EXACT / fomt_studio_dispatch */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D3910();
extern u32 func_080D3914();
void game_state_Check_Equped_Tool(int arg0) {
  int *mem_ptr;
  int val;
  int val2;
  val2 = *(int *)(arg0 + 4);
  mem_ptr = *(int **)(val2 + 0xa8);
  val = func_080D3914(mem_ptr,0,*(u32 *)(*mem_ptr + 0x40));
  func_080D3910(val,*(u32 *)(*(int *)(val + 0x14) + 0x4c));
  *(u32 *)(val2 + 0x9c) = 0x19;
}

/* 0x080141EC (40B) | game_state_Remove_Held_Item (orig: func_080141EC) | origin: pure | domain: game_state | EXACT / fomt_studio_dispatch */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D3910();
extern u32 func_080D3914();
void game_state_Remove_Held_Item(int arg0) {
  int *mem_ptr;
  int val;
  int val2;
  val2 = *(int *)(arg0 + 4);
  mem_ptr = *(int **)(val2 + 0xa8);
  val = func_080D3914(mem_ptr,0,*(u32 *)(*mem_ptr + 0x40));
  func_080D3910(val,*(u32 *)(*(int *)(val + 0x14) + 0x50));
  *(u32 *)(val2 + 0x9c) = 0x19;
}

/* 0x08014214 (32B) | game_state_Give_Food (orig: func_08014214) | origin: pure | domain: game_state | EXACT / fomt_studio_dispatch */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D3910();
extern u32 func_080D3914();
void game_state_Give_Food(int arg0) {
  int *mem_ptr;
  int val;
  mem_ptr = *(int **)(*(int *)(arg0 + 4) + 0xa8);
  val = func_080D3914(mem_ptr,0,*(u32 *)(*mem_ptr + 0x40));
  func_080D3910(val,*(u32 *)(*(int *)(val + 0x14) + 0x54));
}

/* 0x08014234 (24B) | game_state_Proc0B3 (orig: func_08014234) | origin: pure | domain: game_state | HIGH / fomt_studio_dispatch */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D3910();
u32 game_state_Proc0B3(int arg0) {
  int *mem_ptr;
  mem_ptr = *(int **)(*(int *)(arg0 + 4) + 0xa8);
  return func_080D3910(mem_ptr,*(u32 *)(*mem_ptr + 0xa4));
}

/* 0x0801424C (24B) | game_state_Func0B2 (orig: func_0801424C) | origin: pure | domain: game_state | HIGH / fomt_studio_dispatch */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D3914();
u32 game_state_Func0B2(int arg0,u32 arg1) {
  int *mem_ptr;
  mem_ptr = *(int **)(*(int *)(arg0 + 4) + 0xa8);
  return func_080D3914(mem_ptr,arg1,*(u32 *)(*mem_ptr + 0xa8));
}

/* 0x08014264 (44B) | game_state_Add_Festival_Friendship_Bonus (orig: func_08014264) | origin: pure | domain: game_state | EXACT / fomt_studio_dispatch */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D3914();
void game_state_Add_Festival_Friendship_Bonus(int arg0,u32 arg1,u32 arg2) {
  int *mem_ptr;
  int val;
  mem_ptr = *(int **)(*(int *)(arg0 + 4) + 0xa8);
  val = func_080D3914(mem_ptr,arg1,*(u32 *)(*mem_ptr + 0x40));
  if (val != 0) {
    func_080D3914(val,arg2,*(u32 *)(*(int *)(val + 0x14) + 0x38));
  }
}

/* 0x08014290 (40B) | game_state_Open_Shop_Buy_UI (orig: func_08014290) | origin: pure | domain: game_state | EXACT / fomt_studio_dispatch */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D3914();
void game_state_Open_Shop_Buy_UI(int arg0,u32 arg1) {
  int *mem_ptr;
  int val;
  mem_ptr = *(int **)(*(int *)(arg0 + 4) + 0xa8);
  val = func_080D3914(mem_ptr,arg1,*(u32 *)(*mem_ptr + 0x40));
  if (val != 0) {
    func_080D3914(val,0,*(u32 *)(*(int *)(val + 0x14) + 0x38));
  }
}

/* 0x080142B8 (28B) | game_state_Close_TV_Interface (orig: func_080142B8) | origin: pure | domain: game_state | EXACT / fomt_studio_dispatch */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D3914();
void game_state_Close_TV_Interface(int arg0,u32 arg1) {
  int *mem_ptr;
  mem_ptr = *(int **)(*(int *)(arg0 + 4) + 0xa8);
  func_080D3914(mem_ptr,arg1,*(u32 *)(*mem_ptr + 0x118));
}

/* 0x080142D4 (28B) | game_state_Finalize_Event (orig: func_080142D4) | origin: pure | domain: game_state | EXACT / fomt_studio_dispatch */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D3910();
void game_state_Finalize_Event(int arg0) {
  int *mem_ptr;
  mem_ptr = *(int **)(*(int *)(arg0 + 4) + 0xa8);
  func_080D3910(mem_ptr,*(u32 *)(*mem_ptr + 0x11c));
}

/* 0x080142F0 (20B) | game_state_Refresh_Map_Entities (orig: func_080142F0) | origin: pure | domain: game_state | EXACT / fomt_studio_dispatch */
void game_state_Refresh_Map_Entities(u8 **a) { (*(u8 **)(a[1] + 0x8c))[0x34C4] = 1; }

/* 0x08014304 (20B) | game_state_Func0F1 (orig: func_08014304) | origin: pure | domain: game_state | HIGH / fomt_studio_dispatch */
void game_state_Func0F1(u8 **a) { (*(u8 **)(a[1] + 0x8c))[0x34C4] = 0; }

/* 0x08014318 (100B) | game_state_Func0F5 (orig: func_08014318) | origin: wip | domain: game_state | HIGH / fomt_studio_dispatch */
void game_state_Func0F5(int param_1,u32 param_2) {
    int iVar3;
    int iVar4;
    u32 uVar5;
  char cVar1;
  int *piVar2;
    u32 tmp_a1;
  iVar4 = *(u32 *)(param_1 + 4);
  piVar2 = *(int **)(iVar4 + 0xa8);
  func_080D3914(piVar2,param_2,*(u32 *)(*piVar2 + 0xbc));
  iVar3 = *(int *)(iVar4 + 0xb4);
  if (iVar3 != 0) {
    uVar5 = 0;
    piVar2 = *(int **)(iVar4 + 0xa8);
    cVar1 = func_080D3910(piVar2,*(u32 *)(*piVar2 + 0xb0));
    if ((cVar1 != '\0') || (((*(u8 *)(*(int *)(iVar4 + 0x8c) + 0x12) & 0x7ff) >> 5 & 1) != 0)) {
      uVar5 = 1;
    }
    tmp_a1 = *(int *)(iVar4 + 0x8c) + 0x10;
    code_0803A8A4_Sub_0803CD4C(iVar3 + 8, tmp_a1, uVar5);
  }
  game_state_Sub_080D7F08(iVar4);
}

/* 0x0801468C (8B) | game_state_GetField_0x04 (orig: func_0801468C) | origin: pure | domain: game_state | HIGH / stanhash_map_tu */
u8 *game_state_GetField_0x04(u8 *arg0) {
    return *(u8 **)(arg0 + 4) + 208;
}

/* 0x08014694 (28B) | game_state_Func0B4 (orig: func_08014694) | origin: pure | domain: game_state | HIGH / fomt_studio_dispatch */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D3914();
void game_state_Func0B4(int arg0,u32 arg1) {
  int *mem_ptr;
  mem_ptr = *(int **)(*(int *)(arg0 + 4) + 0xa8);
  func_080D3914(mem_ptr,arg1,*(u32 *)(*mem_ptr + 0x150));
}

/* 0x080146B0 (28B) | game_state_Func0B6 (orig: func_080146B0) | origin: pure | domain: game_state | HIGH / fomt_studio_dispatch */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D3914();
void game_state_Func0B6(int arg0,u32 arg1) {
  int *mem_ptr;
  mem_ptr = *(int **)(*(int *)(arg0 + 4) + 0xa8);
  func_080D3914(mem_ptr,arg1,*(u32 *)(*mem_ptr + 0x154));
}

/* 0x080146CC (48B) | game_state_Func0BA (orig: func_080146CC) | origin: pure | domain: game_state | HIGH / fomt_studio_dispatch */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 Coop_BeginIncubation();
extern u32 func_080D3914();
void game_state_Func0BA(int arg0,u32 arg1) {
  int *mem_ptr;
  int val;
  val = *(int *)(arg0 + 4);
  Coop_BeginIncubation(*(int *)(val + 0x8c) + 0x410,arg1);
  mem_ptr = *(int **)(val + 0xa8);
  func_080D3914(mem_ptr,arg1,*(u32 *)(*mem_ptr + 0xac));
}

/* 0x080146FC (1020B) | game_state_Proc128 (orig: func_080146FC) | origin: wip | domain: game_state | HIGH / fomt_studio_dispatch */
void game_state_Proc128(int param_1,u16 param_2) {
  int *piVar1;
  u32 *puVar2;
  u32 *puVar3;
  u32 uVar4;
  int iVar5;
  u32 *puVar6;
  int iVar7;
  u32 *puVar8;
  int *piVar9;
  u32 uVar10;
  u32 uStack_74;
  u32 uStack_70;
  u32 uStack_6c;
  u32 uStack_68;
  u32 uStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int *piStack_48;
  u8 *puStack_44;
  u8 *puStack_40;
  int iStack_3c;
  u32 uStack_38;
  int iStack_34;
  int *piStack_30;
  u16 *puStack_2c;
  u32 *puStack_28;
  u32 *puStack_24;
  piVar9 = *(int **)(param_1 + 4);
  *(u8 *)((int)piVar9 + 0xea) = 1;
  *(u16 *)(piVar9 + 0x3b) = param_2;
  *(u16 *)(piVar9 + 4) = *(u16 *)(piVar9 + 4) | 0x100;
  *(short *)(piVar9 + 6) = (short)0x00001F0C;
  *(u16 *)(piVar9 + 8) = 0;
  uStack_74 = uStack_74 & 0xffff0000;
  *(u16 *)((int)piVar9 + 0x22) = 0;
  hardware_Sub_08008F60(&uStack_70,(short)piVar9[0x3b],0x05000002,2);
  puVar3 = (u32 *)piVar9[1];
  if (puVar3 == (u32 *)piVar9[3]) {
    iStack_5c = 1;
    iStack_60 = (int)puVar3 - *piVar9 >> 4;
    piVar1 = &iStack_60;
    if (iStack_60 == 0) {
      piVar1 = &iStack_5c;
    }
    puStack_28 = puVar3;
    if (iStack_60 + *piVar1 == 0) {
      puStack_24 = (u32 *)0x0;
      iVar7 = 0;
    }
    else {
      iVar7 = (iStack_60 + *piVar1) * 0x10;
      puStack_24 = (u32 *)LibC_malloc(iVar7);
      if (puStack_24 == (u32 *)0x0) {
        puStack_24 = (u32 *)code_linkonce_Sub_080D3BC0(iVar7);
      }
    }
    puVar2 = (u32 *)*piVar9;
    iStack_3c = 0x600;
    uStack_38 = 0;
    iStack_34 = 0xf800;
    piStack_30 = piVar9 + 0x18;
    puStack_44 = (u8 *)((int)piVar9 + 0xee);
    puStack_2c = (u16 *)((int)piVar9 + 0x62);
    puStack_40 = (u8 *)((int)piVar9 + 0xef);
    piStack_48 = piVar9 + 0x27;
    puVar3 = puStack_24;
    for (; puVar2 != puStack_28; puVar2 = puVar2 + 4) {
      if (puVar3 != (u32 *)0x0) {
        uVar4 = puVar2[1];
        uVar10 = puVar2[2];
        *puVar3 = *puVar2;
        puVar3[1] = uVar4;
        puVar3[2] = uVar10;
        puVar3[3] = puVar2[3];
      }
      puVar3 = puVar3 + 4;
    }
    iVar5 = iStack_5c;
    if (iStack_5c == 1) {
      if (puVar3 != (u32 *)0x0) {
        *puVar3 = uStack_70;
        puVar3[1] = uStack_6c;
        puVar3[2] = uStack_68;
        puVar3[3] = uStack_64;
      }
      puVar3 = puVar3 + 4;
    }
    else {
      for (; iVar5 != 0; iVar5 = iVar5 + -1) {
        if (puVar3 != (u32 *)0x0) {
          *puVar3 = uStack_70;
          puVar3[1] = uStack_6c;
          puVar3[2] = uStack_68;
          puVar3[3] = uStack_64;
        }
        puVar3 = puVar3 + 4;
      }
    }
    for (iVar5 = *piVar9; iVar5 != piVar9[1]; iVar5 = iVar5 + 0x10) {
    }
    if (*piVar9 != 0) {
      LibC_free();
    }
    *piVar9 = (int)puStack_24;
    piVar9[1] = (int)puVar3;
    piVar9[3] = (int)puStack_24 + iVar7;
  }
  else {
    if (puVar3 != (u32 *)0x0) {
      *puVar3 = uStack_70;
      puVar3[1] = uStack_6c;
      puVar3[2] = uStack_68;
      puVar3[3] = uStack_64;
    }
    piVar9[1] = piVar9[1] + 0x10;
    iStack_3c = 0x600;
    uStack_38 = 0;
    iStack_34 = 0xf800;
    piStack_30 = piVar9 + 0x18;
    puStack_44 = (u8 *)((int)piVar9 + 0xee);
    puStack_2c = (u16 *)((int)piVar9 + 0x62);
    puStack_40 = (u8 *)((int)piVar9 + 0xef);
    piStack_48 = piVar9 + 0x27;
  }
  hardware_Sub_08008F60(&uStack_74,0x11111111,(iStack_3c + 0x1e8) * 0x20 + 0x6000000,0x20);
  puVar3 = (u32 *)piVar9[1];
  if (puVar3 == (u32 *)piVar9[3]) {
    iStack_54 = 1;
    iStack_58 = (int)puVar3 - *piVar9 >> 4;
    piVar1 = &iStack_58;
    if (iStack_58 == 0) {
      piVar1 = &iStack_54;
    }
    puStack_28 = puVar3;
    if (iStack_58 + *piVar1 == 0) {
      puVar3 = (u32 *)0x0;
      iVar7 = 0;
    }
    else {
      iVar7 = (iStack_58 + *piVar1) * 0x10;
      puVar3 = (u32 *)LibC_malloc(iVar7);
      if (puVar3 == (u32 *)0x0) {
        puVar3 = (u32 *)code_linkonce_Sub_080D3BC0(iVar7);
      }
    }
    puVar6 = puVar3;
    for (puVar2 = (u32 *)*piVar9; puVar2 != puStack_28; puVar2 = puVar2 + 4) {
      if (puVar6 != (u32 *)0x0) {
        uVar4 = puVar2[1];
        uVar10 = puVar2[2];
        *puVar6 = *puVar2;
        puVar6[1] = uVar4;
        puVar6[2] = uVar10;
        puVar6[3] = puVar2[3];
      }
      puVar6 = puVar6 + 4;
    }
    iVar5 = iStack_54;
    if (iStack_54 == 1) {
      if (puVar6 != (u32 *)0x0) {
        *puVar6 = uStack_74;
        puVar6[1] = uStack_70;
        puVar6[2] = uStack_6c;
        puVar6[3] = uStack_68;
      }
      puVar6 = puVar6 + 4;
    }
    else {
      for (; iVar5 != 0; iVar5 = iVar5 + -1) {
        if (puVar6 != (u32 *)0x0) {
          *puVar6 = uStack_74;
          puVar6[1] = uStack_70;
          puVar6[2] = uStack_6c;
          puVar6[3] = uStack_68;
        }
        puVar6 = puVar6 + 4;
      }
    }
    for (iVar5 = *piVar9; iVar5 != piVar9[1]; iVar5 = iVar5 + 0x10) {
    }
    puStack_24 = puVar3;
    if (*piVar9 != 0) {
      LibC_free();
    }
    *piVar9 = (int)puStack_24;
    piVar9[1] = (int)puVar6;
    piVar9[3] = (int)puStack_24 + iVar7;
  }
  else {
    if (puVar3 != (u32 *)0x0) {
      *puVar3 = uStack_74;
      puVar3[1] = uStack_70;
      puVar3[2] = uStack_6c;
      puVar3[3] = uStack_68;
    }
    piVar9[1] = piVar9[1] + 0x10;
  }
  uVar4 = uStack_38 & 0xf000 | 0x1e8;
  hardware_Sub_08008F60(&uStack_74,uVar4 | uVar4 << 0x10,iStack_34 + 0x6000000,0x500);
  puVar3 = (u32 *)piVar9[1];
  if (puVar3 == (u32 *)piVar9[3]) {
    iStack_4c = 1;
    iStack_50 = (int)puVar3 - *piVar9 >> 4;
    piVar1 = &iStack_50;
    if (iStack_50 == 0) {
      piVar1 = &iStack_4c;
    }
    if (iStack_50 + *piVar1 == 0) {
      puVar2 = (u32 *)0x0;
      iVar7 = 0;
    }
    else {
      iVar7 = (iStack_50 + *piVar1) * 0x10;
      puVar2 = (u32 *)LibC_malloc(iVar7);
      if (puVar2 == (u32 *)0x0) {
        puVar2 = (u32 *)code_linkonce_Sub_080D3BC0(iVar7);
      }
    }
    puVar8 = puVar2;
    for (puVar6 = (u32 *)*piVar9; puVar6 != puVar3; puVar6 = puVar6 + 4) {
      if (puVar8 != (u32 *)0x0) {
        uVar4 = puVar6[1];
        uVar10 = puVar6[2];
        *puVar8 = *puVar6;
        puVar8[1] = uVar4;
        puVar8[2] = uVar10;
        puVar8[3] = puVar6[3];
      }
      puVar8 = puVar8 + 4;
    }
    iVar5 = iStack_4c;
    if (iStack_4c == 1) {
      if (puVar8 != (u32 *)0x0) {
        *puVar8 = uStack_74;
        puVar8[1] = uStack_70;
        puVar8[2] = uStack_6c;
        puVar8[3] = uStack_68;
      }
      puVar8 = puVar8 + 4;
    }
    else {
      for (; iVar5 != 0; iVar5 = iVar5 + -1) {
        if (puVar8 != (u32 *)0x0) {
          *puVar8 = uStack_74;
          puVar8[1] = uStack_70;
          puVar8[2] = uStack_6c;
          puVar8[3] = uStack_68;
        }
        puVar8 = puVar8 + 4;
      }
    }
    for (iVar5 = *piVar9; iVar5 != piVar9[1]; iVar5 = iVar5 + 0x10) {
    }
    puStack_24 = puVar2;
    if (*piVar9 != 0) {
      LibC_free();
    }
    *piVar9 = (int)puStack_24;
    piVar9[1] = (int)puVar8;
    piVar9[3] = (int)puStack_24 + iVar7;
  }
  else {
    if (puVar3 != (u32 *)0x0) {
      *puVar3 = uStack_74;
      puVar3[1] = uStack_70;
      puVar3[2] = uStack_6c;
      puVar3[3] = uStack_68;
    }
    piVar9[1] = piVar9[1] + 0x10;
  }
  *(short *)piStack_30 = (short)0x00003E41;
  *puStack_44 = 0x10;
  *puStack_2c = (short)0x00001010;
  *puStack_40 = 0;
  *piStack_48 = 0x1a;
}

/* 0x08014AF8 (224B) | game_state_Set_Spouse_Nickname (orig: func_08014AF8) | origin: wip | domain: game_state | EXACT / fomt_studio_dispatch */
void game_state_Set_Spouse_Nickname(int param_1) {
  int iVar1;
  int *piVar2;
  int *piVar3;
  u32 uVar4;
  int iVar5;
  u32 *puVar6;
  int *piStack_1c;
  u8 *puStack_18;
  int *piStack_14;
  iVar5 = *(int *)(param_1 + 4);
  piVar2 = *(int **)(iVar5 + 0xa8);
  if ((piVar2 != (int *)0x0) && (piVar2 != (int *)0x0)) {
    func_080D3914(piVar2,3,*(u32 *)(*piVar2 + 8));
  }
  *(u32 *)(iVar5 + 0xa8) = 0;
  game_state_Sub_08010F54(*(u32 *)(iVar5 + 0x8c));
  puVar6 = (u32 *)(iVar5 + 0xa8);
  game_state_Sub_0801FB7C(&piStack_1c,*(u32 *)(iVar5 + 0x8c),*(u32 *)(iVar5 + 0x88),0);
  piVar2 = piStack_1c;
  piStack_14 = piStack_1c;
  piStack_1c = (int *)0x0;
  piVar3 = (int *)*puVar6;
  puStack_18 = (u8 *)&piStack_1c;
  if ((piVar2 != piVar3) && (puStack_18 = (u8 *)&piStack_1c, piVar3 != (int *)0x0)) {
    puStack_18 = (u8 *)&piStack_1c;
    func_080D3914(piVar3,3,*(u32 *)(*piVar3 + 8));
  }
  *puVar6 = piVar2;
  if (piStack_1c != (int *)0x0) {
    func_080D3914(piStack_1c,3,*(u32 *)(*piStack_1c + 8));
  }
  func_080D3910((int *)*puVar6,*(u32 *)(*(int *)*puVar6 + 0x138));
  iVar5 = func_080D3914((int *)*puVar6,0,*(u32 *)(*(int *)*puVar6 + 0x40));
  if (*(char *)((*(int *)0x0300040C) + 0x36c) != '\0') {
    uVar4 = *(u16 *)((*(int *)0x0300040C) + 0x374) & 0x1f;
    if (uVar4 < 6) {
      iVar1 = 6;
    }
    else {
      iVar1 = 0x1e;
    }
    iVar1 = iVar1 - uVar4;
    func_080D3918(iVar5,iVar1 * 7,iVar1 * -2,*(u32 *)(*(int *)(iVar5 + 0x14) + 100));
  }
}

/* 0x08014BD8 (52B) | game_state_Func0FF (orig: func_08014BD8) | origin: pure | domain: game_state | HIGH / fomt_studio_dispatch */
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
extern u32 func_080D3914();
void game_state_Func0FF(int arg0) {
  int i = *(int *)(arg0 + 4);
  u32 val2 = 1;
  int *p = (int *)(i + 0xa8);
  do {
    int *mem_ptr = *(int **)p;
    int val = func_080D3914(mem_ptr, val2, *(u32 *)(*mem_ptr + 0x40));
    if (val != 0) {
      func_080D3914(val, 3, *(u32 *)(*(int *)(val + 0x14) + 0x3c));
    }
    val2 = val2 + 1;
  } while (val2 < 0x24);
}

/* 0x08014C0C (40B) | game_state_Func05C (orig: func_08014C0C) | origin: pure | domain: game_state | HIGH / fomt_studio_dispatch */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D3914();
extern u32 func_080D3918();
void game_state_Func05C(int arg0,u32 arg1,u32 arg2) {
  int *mem_ptr;
  int val;
  mem_ptr = *(int **)(*(int *)(arg0 + 4) + 0xa8);
  val = func_080D3914(mem_ptr,0,*(u32 *)(*mem_ptr + 0x40));
  func_080D3918(val,arg1,arg2,*(u32 *)(*(int *)(val + 0x14) + 100));
}

/* 0x08014D30 (44B) | game_state_GetAnimalName (orig: func_08014D30) | origin: pure | domain: game_state | EXACT / fomt_studio_dispatch */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08009C54();
extern u32 func_080D3914();
void game_state_GetAnimalName(int arg0,int arg1) {
  int *mem_ptr;
  int val;
  val = *(int *)(arg0 + 4);
  if (arg1 == 0) {
    mem_ptr = *(int **)(val + 0xa8);
    func_080D3914(mem_ptr,0x2c,*(u32 *)(*mem_ptr + 0x3c));
    func_08009C54(*(int *)(val + 0x8c) + 0x14);
  }
}

/* 0x08014D5C (32B) | game_state_HasAnimalBeenTalkedTo (orig: func_08014D5C) | origin: pure | domain: game_state | EXACT / fomt_studio_dispatch */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D3910();
extern u32 func_080D3914();
u32 game_state_HasAnimalBeenTalkedTo(int arg0) {
  int *mem_ptr;
  int val;
  mem_ptr = *(int **)(*(int *)(arg0 + 4) + 0xa8);
  val = func_080D3914(mem_ptr,0,*(u32 *)(*mem_ptr + 0x40));
  return func_080D3910(val,*(u32 *)(*(int *)(val + 0x14) + 0x78));
}

/* 0x08014D7C (32B) | game_state_Func05D (orig: func_08014D7C) | origin: pure | domain: game_state | HIGH / fomt_studio_dispatch */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D3910();
extern u32 func_080D3914();
u32 game_state_Func05D(int arg0) {
  int *mem_ptr;
  int val;
  mem_ptr = *(int **)(*(int *)(arg0 + 4) + 0xa8);
  val = func_080D3914(mem_ptr,0,*(u32 *)(*mem_ptr + 0x40));
  return func_080D3910(val,*(u32 *)(*(int *)(val + 0x14) + 0x44));
}

/* 0x08015210 (268B) | game_state_Proc112 (orig: func_08015210) | origin: wip | domain: game_state | HIGH / fomt_studio_dispatch */
void game_state_Proc112(int param_1) {
  char cVar1;
  int iVar2;
  u32 uVar3;
  int iVar4;
  int iVar5;
  u32 uVar6;
  u32 uVar7;
  int *piVar8;
  iVar2 = *(int *)(param_1 + 4);
  piVar8 = (int *)(iVar2 + 0x8c);
  uVar3 = Coop_GetCapacity(*piVar8 + 0x410);
  uVar7 = 0;
  if (uVar3 != 0) {
    do {
      iVar4 = Coop_GetChicken_C894(*piVar8 + 0x410,uVar7);
      if ((iVar4 != 0) && (iVar4 = func_0809B514(), iVar4 == 2)) {
        func_080D3914(*(int **)(iVar2 + 0xa8),uVar7 + 0x2e,
                        *(u32 *)(**(int **)(iVar2 + 0xa8) + 0x3c));
        Coop_RemoveAndRememberUnk(*piVar8 + 0x410,uVar7);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar3);
  }
  piVar8 = (int *)(iVar2 + 0x8c);
  iVar4 = *piVar8 + 0x00001C2C;
  cVar1 = held_item_VmHelper_0800F190(iVar4);
  if ((cVar1 == '\0') && (iVar5 = held_item_VmHelper_0800F204(iVar4), iVar5 == 3)) {
    iVar5 = *piVar8;
    uVar6 = held_item_Drop_Held_Item(iVar4);
    iVar4 = Coop_GetChicken_C894(iVar5 + 0x410,uVar6);
    if (iVar4 == 0) {
      held_item_Sub_0800F390(*piVar8 + 0x00001C2C);
    }
  }
  uVar3 = Barn_GetCapacity(*piVar8 + 0x5f0);
  uVar7 = 0;
  if (uVar3 != 0) {
    do {
      iVar4 = Barn_GetBarnAnimal_D420(*piVar8 + 0x5f0,uVar7);
      if ((iVar4 != 0) && (iVar4 = func_0809B514(), iVar4 == 2)) {
        func_080D3914(*(int **)(iVar2 + 0xa8),uVar7 + 0x36,
                        *(u32 *)(**(int **)(iVar2 + 0xa8) + 0x3c));
        Barn_RemoveAndRememberUnk(*piVar8 + 0x5f0,uVar7);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar3);
  }
}

/* 0x08015790 (268B) | game_state_Func114 (orig: func_08015790) | origin: wip | domain: game_state | HIGH / fomt_studio_dispatch */
void game_state_Func114(int param_1) {
  char cVar1;
  int iVar2;
  u32 uVar3;
  int iVar4;
  int iVar5;
  u32 uVar6;
  u32 uVar7;
  int *piVar8;
  iVar2 = *(int *)(param_1 + 4);
  piVar8 = (int *)(iVar2 + 0x8c);
  uVar3 = Coop_GetCapacity(*piVar8 + 0x410);
  uVar7 = 0;
  if (uVar3 != 0) {
    do {
      iVar4 = Coop_GetChicken_C894(*piVar8 + 0x410,uVar7);
      if ((iVar4 != 0) && (iVar4 = func_0809B514(), iVar4 == 1)) {
        func_080D3914(*(int **)(iVar2 + 0xa8),uVar7 + 0x2e,
                        *(u32 *)(**(int **)(iVar2 + 0xa8) + 0x3c));
        Coop_RemoveAndRememberUnk(*piVar8 + 0x410,uVar7);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar3);
  }
  piVar8 = (int *)(iVar2 + 0x8c);
  iVar4 = *piVar8 + 0x00001C2C;
  cVar1 = held_item_VmHelper_0800F190(iVar4);
  if ((cVar1 == '\0') && (iVar5 = held_item_VmHelper_0800F204(iVar4), iVar5 == 3)) {
    iVar5 = *piVar8;
    uVar6 = held_item_Drop_Held_Item(iVar4);
    iVar4 = Coop_GetChicken_C894(iVar5 + 0x410,uVar6);
    if (iVar4 == 0) {
      held_item_Sub_0800F390(*piVar8 + 0x00001C2C);
    }
  }
  uVar3 = Barn_GetCapacity(*piVar8 + 0x5f0);
  uVar7 = 0;
  if (uVar3 != 0) {
    do {
      iVar4 = Barn_GetBarnAnimal_D420(*piVar8 + 0x5f0,uVar7);
      if ((iVar4 != 0) && (iVar4 = func_0809B514(), iVar4 == 1)) {
        func_080D3914(*(int **)(iVar2 + 0xa8),uVar7 + 0x36,
                        *(u32 *)(**(int **)(iVar2 + 0xa8) + 0x3c));
        Barn_RemoveAndRememberUnk(*piVar8 + 0x5f0,uVar7);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar3);
  }
}

/* 0x0801589C (48B) | game_state_EventMask (orig: func_0801589C) | origin: pure | domain: game_state | EXACT / fomt_studio_dispatch */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D3914();
void game_state_EventMask(int arg0,u16 arg1) {
  int *mem_ptr;
  int val;
  int val2;
  val2 = *(int *)(arg0 + 4);
  mem_ptr = *(int **)(val2 + 0xa8);
  val = func_080D3914(mem_ptr,0,*(u32 *)(*mem_ptr + 0x40));
  func_080D3914(val,arg1,*(u32 *)(*(int *)(val + 0x14) + 0x68));
  *(u32 *)(val2 + 0x9c) = 0x19;
}

/* 0x080158CC (44B) | game_state_Proc062 (orig: func_080158CC) | origin: pure | domain: game_state | HIGH / fomt_studio_dispatch */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D3910();
extern u32 func_080D3914();
void game_state_Proc062(int arg0) {
  int *mem_ptr;
  int val;
  int val2;
  val2 = *(int *)(arg0 + 4);
  mem_ptr = *(int **)(val2 + 0xa8);
  val = func_080D3914(mem_ptr,0,*(u32 *)(*mem_ptr + 0x40));
  func_080D3910(val,*(u32 *)(*(int *)(val + 0x14) + 0x80));
  *(u32 *)(val2 + 0x9c) = 0x19;
}

/* 0x080158F8 (40B) | game_state_Func063 (orig: func_080158F8) | origin: pure | domain: game_state | HIGH / fomt_studio_dispatch */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D3910();
extern u32 func_080D3914();
void game_state_Func063(int arg0) {
  int *mem_ptr;
  int val;
  int val2;
  val2 = *(int *)(arg0 + 4);
  mem_ptr = *(int **)(val2 + 0xa8);
  val = func_080D3914(mem_ptr,0,*(u32 *)(*mem_ptr + 0x40));
  func_080D3910(val,*(u32 *)(*(int *)(val + 0x14) + 0x7c));
  *(u32 *)(val2 + 0x9c) = 0x19;
}

/* 0x08015920 (48B) | game_state_Func0D3 (orig: func_08015920) | origin: pure | domain: game_state | HIGH / fomt_studio_dispatch */
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
extern u32 func_080D3914();
u32 game_state_Func0D3(int arg0, u32 arg1) {
  int sub = *(int *)(arg0 + 4);
  if (arg1 - 0x24 < 7) {
    int *mem_ptr = *(int **)(sub + 0xa8);
    if (func_080D3914(mem_ptr, arg1, *(u32 *)(*mem_ptr + 0x40)) != 0) {
      return AEntity_Sub_08033B24();
    }
  }
  return 0;
}

/* 0x08015950 (32B) | game_state_Func06D (orig: func_08015950) | origin: pure | domain: game_state | HIGH / fomt_studio_dispatch */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D3910();
extern u32 func_080D3914();
u32 game_state_Func06D(int arg0) {
  int *mem_ptr;
  int val;
  mem_ptr = *(int **)(*(int *)(arg0 + 4) + 0xa8);
  val = func_080D3914(mem_ptr,0,*(u32 *)(*mem_ptr + 0x40));
  return func_080D3910(val,*(u32 *)(*(int *)(val + 0x14) + 0x84));
}

/* 0x08015970 (32B) | game_state_Func06E (orig: func_08015970) | origin: pure | domain: game_state | HIGH / fomt_studio_dispatch */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D3910();
extern u32 func_080D3914();
u32 game_state_Func06E(int arg0) {
  int *mem_ptr;
  int val;
  mem_ptr = *(int **)(*(int *)(arg0 + 4) + 0xa8);
  val = func_080D3914(mem_ptr,0,*(u32 *)(*mem_ptr + 0x40));
  return func_080D3910(val,*(u32 *)(*(int *)(val + 0x14) + 0x88));
}

/* 0x08015990 (32B) | game_state_Sub_08015990 (orig: func_08015990) | origin: pure | domain: game_state | HIGH / stanhash_map_tu */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D3910();
extern u32 func_080D3914();
u32 game_state_Sub_08015990(int arg0) {
  int *mem_ptr;
  int val;
  mem_ptr = *(int **)(*(int *)(arg0 + 4) + 0xa8);
  val = func_080D3914(mem_ptr,0,*(u32 *)(*mem_ptr + 0x40));
  return func_080D3910(val,*(u32 *)(*(int *)(val + 0x14) + 0x8c));
}

/* 0x08016784 (40B) | game_state_Sub_08016784 (orig: func_08016784) | origin: pure | domain: game_state | HIGH / stanhash_map_tu */
extern "C" bool hardware_GetField_0x00_8CD0(void *);
extern "C" void hardware_Wrap_m4aMPlayFadeOut(void *, int);
extern "C" bool game_state_Sub_08016784(u8 **a) {
    u8 *p = a[1] + 0xbc;
    if (!hardware_GetField_0x00_8CD0(p))
        return false;
    hardware_Wrap_m4aMPlayFadeOut(p, 5);
    return true;
}

/* 0x080167AC (32B) | game_state_Func11D (orig: func_080167AC) | origin: pure | domain: game_state | HIGH / fomt_studio_dispatch */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D3910();
extern u32 func_080D3914();
u32 game_state_Func11D(int arg0) {
  int *mem_ptr;
  int val;
  mem_ptr = *(int **)(*(int *)(arg0 + 4) + 0xa8);
  val = func_080D3914(mem_ptr,0,*(u32 *)(*mem_ptr + 0x40));
  return func_080D3910(val,*(u32 *)(*(int *)(val + 0x14) + 0x90));
}

/* 0x080167CC (16B) | game_state_Sub_080167CC (orig: func_080167CC) | origin: pure | domain: game_state | HIGH / stanhash_map_tu */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 hardware_GetField_0x00_8CD0();
u32 game_state_Sub_080167CC(int arg0) {
  return hardware_GetField_0x00_8CD0(*(int *)(arg0 + 4) + 0xbc);
}

/* 0x080167DC (88B) | game_state_Force_Entity_Move_To (orig: func_080167DC) | origin: wip | domain: game_state | EXACT / fomt_studio_dispatch */
void game_state_Force_Entity_Move_To(int param_1) {
    int * piVar2;
    u8 iVar3;
    int iVar4;
    u32 * puVar5;
  register char cVar1;
  iVar4 = *(int *)(param_1 + 4);
  NpcSystem_Sub_080A05E8(iVar3 + 0x00001CD4,iVar3 + 0x11);
  iVar3 = (u16)*(char *)(iVar4 + 0x8c);
  puVar5 = (u32 *)(iVar4 + 0xa8);
  piVar2 = (int *)*puVar5;
  func_080D3914(piVar2,0x23,*(u32 *)(*piVar2 + 0x38));
  iVar3 = func_080D3914(piVar2,0x23,*(u32 *)(*piVar2 + 0x40));
  piVar2 = (int *)*puVar5;
  if ((iVar3 != 0) &&
     (cVar1 = func_080D3910(iVar3,*(s16 *)(*(int *)(iVar3 + 0x14) + 0x28)), cVar1 == '\0')) {
    func_080D3910(iVar3,*(u32 *)(*(int *)(iVar3 + 0x14) + 0x20));
  }
}

/* 0x08016834 (160B) | game_state_Recalculate_Global_Schedules (orig: func_08016834) | origin: wip | domain: game_state | EXACT / fomt_studio_dispatch */
void game_state_Recalculate_Global_Schedules(int param_1,u32 param_2,int param_3) {
  int iVar1;
  iVar1 = *(int *)(param_1 + 4);
  if (param_2 < 5) {
    switch(*(u32 *)(0x0801684C + param_2 * 4) & 0xfffffffe) {
    case 0x801684c:
      iVar1 = *(int *)(*(u32 *)(iVar1 + 4) + 8);
    case 0x8016860:
      func_080D3914(*(int **)(iVar1 + 0xa8),0x2c,*(u32 *)(**(int **)(iVar1 + 0xa8) + 0x3c))
      ;
      break;
    case 0x8016872:
      func_080D3914(*(int **)(iVar1 + 0xa8),0x2b,*(u32 *)(**(int **)(iVar1 + 0xa8) + 0x3c))
      ;
      break;
    case 0x8016884:
      Barn_Sub_0800D80C(*(int *)(iVar1 + 0x8c) + 0x5f0,param_3);
      func_080D3914(*(int **)(iVar1 + 0xa8),param_3 + 0x36,
                      *(u32 *)(**(int **)(iVar1 + 0xa8) + 0x3c));
      break;
    case 0x80168aa:
      Coop_Sub_0800CB7C(*(int *)(iVar1 + 0x8c) + 0x410,param_3);
      func_080D3914(*(int **)(iVar1 + 0xa8),param_3 + 0x2e,
                      *(u32 *)(**(int **)(iVar1 + 0xa8) + 0x3c));
    }
  }
}

/* 0x08016AFC (168B) | game_state_Proc11B (orig: func_08016AFC) | origin: wip | domain: game_state | HIGH / fomt_studio_dispatch */
void * game_state_Proc11B(int param_1,u32 param_2) {
  register u32 uVar1;
  register int iVar2;
  iVar2 = *(int *)(param_1 + 4);
  if (4 < param_2) goto LAB_08016b4a;
  switch(*(u32 *)(((const u32 *)0x08016b10) + param_2 * 4) & 0xfffffffe) {
  case 0x8016b14:
    iVar2 = 0;
  case 0x8016b28:
    if (((*(u8 *)(*(int *)(iVar2 + 0x8c) + 0x219A) & 2) == 0) &&
       ((*(u8 *)(*(int *)(iVar2 + 0x8c) + 0x21A1) & 4) == 0)) {
LAB_08016b4a:
      uVar1 = (s8)0xffffffff;
    }
    else {
LAB_08016b70:
      uVar1 = 0;
    }
    break;
  case 0x8016b58:
    uVar1 = (u8)0xffffffff;
    if ((*(u8 *)(*(int *)(iVar2 + 0x8c) + 0x219C) & 0x10) == 0) break;
    goto LAB_08016b70;
  case 0x8016b78:
    uVar1 = Barn_Sub_0800D058(*(int *)(iVar2 + 0x8c) + 0x5f0);
    break;
  case 0x8016b8a:
    uVar1 = Coop_GetUnkEnt(*(int *)(iVar2 + 0x8c) + 0x410);
  }
  return (void *)uVar1;
}

/* 0x08016BA4 (28B) | game_state_Anim_Door_Exit (orig: func_08016BA4) | origin: pure | domain: game_state | EXACT / fomt_studio_dispatch */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D3914();
void game_state_Anim_Door_Exit(int arg0,u32 arg1) {
  int *mem_ptr;
  mem_ptr = *(int **)(*(int *)(arg0 + 4) + 0xa8);
  func_080D3914(mem_ptr,arg1,*(u32 *)(*mem_ptr + 0x10c));
}

/* 0x08016BC0 (28B) | game_state_Proc0C9 (orig: func_08016BC0) | origin: pure | domain: game_state | HIGH / fomt_studio_dispatch */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D3914();
void game_state_Proc0C9(int arg0,u32 arg1) {
  int *mem_ptr;
  mem_ptr = *(int **)(*(int *)(arg0 + 4) + 0xa8);
  func_080D3914(mem_ptr,arg1,*(u32 *)(*mem_ptr + 0x110));
}

/* 0x08016BDC (24B) | game_state_Anim_Door_Open (orig: func_08016BDC) | origin: pure | domain: game_state | EXACT / fomt_studio_dispatch */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D3910();
void game_state_Anim_Door_Open(int arg0) {
  int *mem_ptr;
  mem_ptr = *(int **)(*(int *)(arg0 + 4) + 0xa8);
  func_080D3910(mem_ptr,*(u32 *)(*mem_ptr + 0xfc));
}

/* 0x08016BF4 (28B) | game_state_Func0CB (orig: func_08016BF4) | origin: pure | domain: game_state | HIGH / fomt_studio_dispatch */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D3910();
void game_state_Func0CB(int arg0) {
  int *mem_ptr;
  mem_ptr = *(int **)(*(int *)(arg0 + 4) + 0xa8);
  func_080D3910(mem_ptr,*(u32 *)(*mem_ptr + 0x100));
}

/* 0x08016C10 (28B) | game_state_Sub_08016C10 (orig: func_08016C10) | origin: pure | domain: game_state | HIGH / stanhash_map_tu */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D3910();
void game_state_Sub_08016C10(int arg0) {
  int *mem_ptr;
  mem_ptr = *(int **)(*(int *)(arg0 + 4) + 0xa8);
  func_080D3910(mem_ptr,*(u32 *)(*mem_ptr + 0x104));
}

/* 0x08016C2C (28B) | game_state_Proc130 (orig: func_08016C2C) | origin: pure | domain: game_state | HIGH / fomt_studio_dispatch */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 game_state_602C_Wrap_Dtor();
extern u32 func_080D3914();
void game_state_Proc130(int arg0) {
  int *mem_ptr;
  mem_ptr = *(int **)(*(int *)(arg0 + 4) + 0xa8);
  func_080D3914(mem_ptr,0x5d,*(u32 *)(*mem_ptr + 0x40));
  game_state_602C_Wrap_Dtor();
}

/* 0x08016C48 (36B) | game_state_Proc131 (orig: func_08016C48) | origin: pure | domain: game_state | HIGH / fomt_studio_dispatch */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 game_state_Sub_080387C8();
extern u32 func_080D3914();
void game_state_Proc131(int arg0) {
  int *mem_ptr;
  int val;
  val = *(int *)(arg0 + 4);
  mem_ptr = *(int **)(val + 0xa8);
  func_080D3914(mem_ptr,0x5d,*(u32 *)(*mem_ptr + 0x40));
  game_state_Sub_080387C8();
  *(u32 *)(val + 0x9c) = 0x1c;
}

/* 0x08016C6C (28B) | game_state_Trigger_Screen_Flash (orig: func_08016C6C) | origin: pure | domain: game_state | EXACT / fomt_studio_dispatch */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 game_state_Wrap_Wrap_Dtor();
extern u32 func_080D3914();
void game_state_Trigger_Screen_Flash(int arg0) {
  int *mem_ptr;
  mem_ptr = *(int **)(*(int *)(arg0 + 4) + 0xa8);
  func_080D3914(mem_ptr,0x5d,*(u32 *)(*mem_ptr + 0x40));
  game_state_Wrap_Wrap_Dtor();
}

/* 0x08016C88 (36B) | game_state_Func133 (orig: func_08016C88) | origin: pure | domain: game_state | HIGH / fomt_studio_dispatch */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_entities_681C_Wrap_Dtor();
extern u32 func_080D3914();
void game_state_Func133(int arg0) {
  int *mem_ptr;
  int val;
  val = *(int *)(arg0 + 4);
  mem_ptr = *(int **)(val + 0xa8);
  func_080D3914(mem_ptr,0x5d,*(u32 *)(*mem_ptr + 0x40));
  code_entities_681C_Wrap_Dtor();
  *(u32 *)(val + 0x9c) = 0x1b;
}

/* 0x08016CAC (32B) | game_state_Kill_NPC (orig: func_08016CAC) | origin: pure | domain: game_state | EXACT / fomt_studio_dispatch */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D3910();
extern u32 func_080D3914();
void game_state_Kill_NPC(int arg0) {
  int *mem_ptr;
  int val;
  mem_ptr = *(int **)(*(int *)(arg0 + 4) + 0xa8);
  val = func_080D3914(mem_ptr,0,*(u32 *)(*mem_ptr + 0x40));
  func_080D3910(val,*(u32 *)(*(int *)(val + 0x14) + 0xa8));
}

/* 0x08016CCC (32B) | game_state_Proc066 (orig: func_08016CCC) | origin: pure | domain: game_state | HIGH / fomt_studio_dispatch */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D3910();
extern u32 func_080D3914();
void game_state_Proc066(int arg0) {
  int *mem_ptr;
  int val;
  mem_ptr = *(int **)(*(int *)(arg0 + 4) + 0xa8);
  val = func_080D3914(mem_ptr,0,*(u32 *)(*mem_ptr + 0x40));
  func_080D3910(val,*(u32 *)(*(int *)(val + 0x14) + 0xac));
}

/* 0x08016CEC (72B) | game_state_Unlock_Mountain_Cottage (orig: func_08016CEC) | origin: pure | domain: game_state | HIGH / fomt_studio_dispatch */
extern int func_080D3914();
extern u8 func_080D3910();
void game_state_Unlock_Mountain_Cottage(int param_1, u32 param_2) {
    int **pp = (int **)(*(int *)(param_1 + 4) + 0xa8);
    int res;
    func_080D3914(*pp, param_2, *(u32 *)(**pp + 0x38));
    res = func_080D3914(*pp, param_2, *(u32 *)(**pp + 0x40));
    if (res != 0 && !func_080D3910(res, *(u32 *)(*(int *)(res + 0x14) + 0x28))) {
        func_080D3910(res, *(u32 *)(*(int *)(res + 0x14) + 0x20));
    }
}

/* 0x08016D34 (20B) | game_state_Sub_08016D34 (orig: func_08016D34) | origin: pure | domain: game_state | MEDIUM / tu_interp */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D3914();
void game_state_Sub_08016D34(int arg0,u32 arg1) {
  int *mem_ptr;
  mem_ptr = *(int **)(*(int *)(arg0 + 4) + 0xa8);
  func_080D3914(mem_ptr,arg1,*(u32 *)(*mem_ptr + 0x3c));
}

/* 0x08016D48 (56B) | game_state_Proc067 (orig: func_08016D48) | origin: wip | domain: game_state | HIGH / fomt_studio_dispatch */
void game_state_Proc067(int param_1) {
  u16 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  iVar5 = *(int *)(param_1 + 4);
  piVar2 = *(int **)(iVar5 + 0xa8);
  iVar3 = func_080D3914(piVar2,0,*(u32 *)(*piVar2 + 0x40));
  iVar4 = *(u16 *)0x0300040C;
  uVar1 = *(u16 *)(iVar3 + 4);
  iVar3 = *(int *)(iVar5 + 0x8c);
  *(u8 *)(iVar4 + 0x36c) = 1;
  *(u32 *)(iVar4 + 0x370) = (u32)uVar1;
  *(u16 *)(iVar4 + 0x374) = *(u16 *)(iVar3 + 0x12);
}

/* 0x08016D80 (28B) | game_state_Last_Sleep_Location_Check (orig: func_08016D80) | origin: pure | domain: game_state | EXACT / fomt_studio_dispatch */
struct S { u8 a; u32 b; }; void game_state_Last_Sleep_Location_Check(void) { struct S *p = (struct S *)(*(u8 **)0x0300040C + (0xdb << 2)); p->a = 0; p->b = 0x8d << 2; }

/* 0x08016D9C (20B) | game_state_Unlock_Player_Input (orig: func_08016D9C) | origin: pure | domain: game_state | EXACT / fomt_studio_dispatch */
u32 game_state_Unlock_Player_Input(void) { u32 *p = (u32 *)(*(u8 **)0x0300040C + (0xdb << 2)); return p[1]; }

/* 0x08016DB0 (204B) | game_state_Lock_Player_Input (orig: func_08016DB0) | origin: wip | domain: game_state | EXACT / fomt_studio_dispatch */
void game_state_Lock_Player_Input(int param_1) {
  int iVar1;
  int iVar2;
  int iVar3;
  u32 uVar4;
  int iVar5;
  u8 auStack_34 [4];
  u16 uStack_30;
  char cStack_2e;
  char cStack_2c;
  u8 auStack_1c [4];
  iVar5 = *(int *)(param_1 + 4);
  iVar1 = func_080D3914(*(int **)(iVar5 + 0xa8),0,*(u32 *)(**(int **)(iVar5 + 0xa8) + 0x40)
                         );
  iVar2 = *(int *)(iVar1 + 0x14);
  iVar3 = game_state_Sub_0809AAD4(*(int *)(iVar5 + 0x8c) + 0x00002214);
  uVar4 = LibC_rand();
  iVar3 = LibGcc_umodsi3(uVar4,iVar3 + 2);
  if (iVar3 == 0) {
    func_0800DCA8(auStack_34,0x3f);
  }
  else if (iVar3 == 1) {
    func_0800DCA8(auStack_34,0x40);
  }
  else {
    SpriteAnimEngine_5B80_Sub_0809AB08(&uStack_30,*(int *)(iVar5 + 0x8c) + 0x00002214,iVar3 + -2);
    if (uStack_30 == 0) {
      func_0800DCA8(auStack_34,0x40);
    }
    else {
      func_0800DCA8(auStack_1c,uStack_30 - 1);
      Food_AddBonuses(auStack_1c,(int)cStack_2e,(int)cStack_2c);
      LibC_memcpy(auStack_34,auStack_1c,3);
    }
  }
  LibC_memcpy(auStack_34,auStack_34,3);
  func_080D3914(iVar1,auStack_34,*(u32 *)(iVar2 + 0x58));
  *(u32 *)(iVar5 + 0x9c) = 0x19;
}

/* 0x08016E7C (32B) | game_state_Resume_Tick_Engine (orig: func_08016E7C) | origin: pure | domain: game_state | EXACT / fomt_studio_dispatch */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D3910();
extern u32 func_080D3914();
void game_state_Resume_Tick_Engine(int arg0) {
  int *mem_ptr;
  int val;
  mem_ptr = *(int **)(*(int *)(arg0 + 4) + 0xa8);
  val = func_080D3914(mem_ptr,0,*(u32 *)(*mem_ptr + 0x40));
  func_080D3910(val,*(u32 *)(*(int *)(val + 0x14) + 0x6c));
}

/* 0x08016E9C (40B) | game_state_Func06C (orig: func_08016E9C) | origin: pure | domain: game_state | HIGH / fomt_studio_dispatch */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D3910();
extern u32 func_080D3914();
void game_state_Func06C(int arg0) {
  int *mem_ptr;
  int val;
  int val2;
  val2 = *(int *)(arg0 + 4);
  mem_ptr = *(int **)(val2 + 0xa8);
  val = func_080D3914(mem_ptr,0,*(u32 *)(*mem_ptr + 0x40));
  func_080D3910(val,*(u32 *)(*(int *)(val + 0x14) + 0x70));
  *(u32 *)(val2 + 0x9c) = 0x19;
}

/* 0x08016EC4 (44B) | game_state_Despawn_Map_Item (orig: func_08016EC4) | origin: pure | domain: game_state | EXACT / fomt_studio_dispatch */
void game_state_Despawn_Map_Item(u8 **a, u32 b, u32 c, u32 d, u32 e, u16 f) { u32 *p = *(u32 **)(a[1] + 0xa8); (*(void (**)(u32 *, u32, u32, u32, u32, u16))(*p + (0xb0 << 1)))(p, b, c, d, e, f); }

/* 0x08016EF0 (28B) | game_state_Get_Item_Sprite_ID (orig: func_08016EF0) | origin: pure | domain: game_state | EXACT / fomt_studio_dispatch */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D3914();
void game_state_Get_Item_Sprite_ID(int arg0,u32 arg1) {
  int *mem_ptr;
  mem_ptr = *(int **)(*(int *)(arg0 + 4) + 0xa8);
  func_080D3914(mem_ptr,arg1,*(u32 *)(*mem_ptr + 0x164));
}

/* 0x08016F0C (40B) | game_state_Func077 (orig: func_08016F0C) | origin: pure | domain: game_state | HIGH / fomt_studio_dispatch */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D3914();
void game_state_Func077(int arg0,u8 arg1) {
  int *mem_ptr;
  int val;
  mem_ptr = *(int **)(*(int *)(arg0 + 4) + 0xa8);
  val = func_080D3914(mem_ptr,0,*(u32 *)(*mem_ptr + 0x40));
  func_080D3914(val,arg1,*(u32 *)(*(int *)(val + 0x14) + 0x9c));
}

/* 0x08016F34 (44B) | game_state_Set_Global_RNG_Modifier (orig: func_08016F34) | origin: pure | domain: game_state | EXACT / fomt_studio_dispatch */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D3914();
void game_state_Set_Global_RNG_Modifier(int arg0,u32 arg1) {
  int *mem_ptr;
  int val;
  int val2;
  val2 = *(int *)(arg0 + 4);
  mem_ptr = *(int **)(val2 + 0xa8);
  val = func_080D3914(mem_ptr,0,*(u32 *)(*mem_ptr + 0x40));
  func_080D3914(val,arg1,*(u32 *)(*(int *)(val + 0x14) + 0x74));
  *(u32 *)(val2 + 0x9c) = 0x19;
}

/* 0x08016F60 (68B) | game_state_Proc12A (orig: func_08016F60) | origin: pure | domain: game_state | HIGH / fomt_studio_dispatch */
extern int func_080D3914();
extern u8 func_080D3910();
void game_state_Proc12A(int param_1) {
    int p = *(int *)(param_1 + 4);
    u32 i = 0x2e;
    int **pp = (int **)(p + 0xa8);
    do {
        int res = func_080D3914(*pp, i, *(u32 *)(**pp + 0x40));
        if (res != 0 && func_080D3910(res, *(u32 *)(*(int *)(res + 0x14) + 0x5c))) {
            func_080D3910(res, *(u32 *)(*(int *)(res + 0x14) + 0x7c));
        }
        i++;
    } while (i <= 0x45);
}

/* 0x08017180 (120B) | game_state_Sub_08017180 (orig: func_08017180) | origin: wip | domain: game_state | HIGH / stanhash_map_tu */
void game_state_Sub_08017180(int param_1,u32 param_2,u8 *param_3,int param_4,int param_5) {
  u8 bVar1;
  int iVar2;
  u32 uVar3;
  u32 uVar4;
  u8 *pbVar5;
  u32 *puVar6;
  u32 *puVar7;
  u32 uVar8;
  if ((((param_1 != 0) && (param_2 != 0)) &&
      (pbVar5 = *(u8 **)(param_3 + 0x14), pbVar5 != (u8 *)0x0)) &&
     ((iVar2 = *(int *)(param_3 + 0x10), iVar2 != 0 &&
      (uVar8 = (u32)*param_3, param_4 + uVar8 <= param_2)))) {
    puVar7 = (u32 *)(param_1 + param_4 * 4 + param_2 * param_5 * 4);
    bVar1 = param_3[1];
    uVar3 = 0;
    if (bVar1 != 0) {
      do {
        uVar4 = 0;
        uVar3 = uVar3 + 1;
        puVar6 = puVar7;
        if (uVar8 != 0) {
          do {
            *puVar6 = *(u32 *)((u32)*pbVar5 * 4 + iVar2);
            pbVar5 = pbVar5 + 1;
            uVar4 = uVar4 + 1;
            puVar6 = puVar6 + 1;
          } while (uVar4 < uVar8);
        }
        puVar7 = puVar7 + param_2;
      } while (uVar3 < bVar1);
    }
  }
}

/* 0x0801740C (96B) | game_state_Sub_0801740C (orig: func_0801740C) | origin: wip | domain: game_state | HIGH / stanhash_map_tu */
void * game_state_Sub_0801740C(u32 *param_1,u32 param_2,u32 param_3,int param_4) {
  u8 uVar1;
  u8 uVar2;
  u32 uVar3;
  u32 uVar4;

  uVar3 = ((*param_1 & 0xff) >> 2) - 0x1b;
  if (0xb < uVar3) goto case_08017458;
  switch(*(u32 *)(((const u32 *)0x08017424) + uVar3 * 4) & 0xfffffffe) {
  case 0x8017428:
    uVar1 = (u8)*(u32 *)(((const u32 *)0x08017424) + uVar3 * 4);
    *(u8 *)(param_4 + 0x11) = uVar1;
    uVar2 = (u8)0;
    *(u8 *)(param_4 + 0x11) = uVar2;
    *(u8 *)(0 + 0x11) = uVar1;
    *(u8 *)(0 + 0x11) = uVar2;
    *(u8 *)(param_4 + 0x11) = uVar1;
    *(u8 *)(param_4 + 0x11) = uVar2;
    *(u8 *)(0 + 0x11) = uVar1;
    *(u8 *)(0 + 0x11) = uVar2;
    *(u8 *)(param_4 + 0x11) = uVar1;
    *(u8 *)(param_4 + 0x11) = uVar2;
    *(u8 *)(0 + 0x11) = uVar1;
    *(u8 *)(0 + 0x11) = uVar2;
  case 0x8017458:
case_08017458:
    uVar4 = 0;
    break;
  case 0x801745c:
    uVar4 = 1;
    break;
  case 0x8017460:
    uVar4 = 2;
    break;
  case 0x8017464:
    uVar4 = 3;
  }
  return (void *)uVar4;
}

/* 0x0801746C (92B) | game_state_Sub_0801746C (orig: func_0801746C) | origin: wip | domain: game_state | MEDIUM / tu_interp */
void * game_state_Sub_0801746C(u32 *param_1) {
  u8 uVar1;
  u32 uVar2;
  u32 uVar3;

  uVar2 = ((*param_1 & 0xff) >> 2) - 0x1b;
  if (0xb < uVar2) goto case_080174B8;
  uVar2 = *(u32 *)(((const u32 *)0x08017484) + uVar2 * 4);
  switch(uVar2 & 0xfffffffe) {
  case 0x8017488:
    uVar1 = (u8)uVar2;
    *(u8 *)(0 + 0x12) = uVar1;
    *(u8 *)(0 + 0x12) = uVar1;
    *(u8 *)(0 + 0x12) = uVar1;
    *(u8 *)(0 + 0x12) = uVar1;
    *(u8 *)(0 + 0x12) = 0;
    *(u8 *)(0 + 0x12) = 0;
    *(u8 *)(0 + 0x12) = 0;
    *(u8 *)(0 + 0x12) = 0;
    *(u8 *)(uVar2 + 0x13) = uVar1;
    *(u8 *)(uVar2 + 0x13) = uVar1;
    *(u8 *)(uVar2 + 0x13) = uVar1;
    *(u8 *)(uVar2 + 0x13) = uVar1;
  case 0x80174b8:
case_080174B8:
    uVar3 = 0;
    break;
  case 0x80174bc:
    uVar3 = 1;
    break;
  case 0x80174c0:
    uVar3 = 2;
  }
  return (void *)uVar3;
}

/* 0x080174C8 (236B) | game_state_Sub_080174C8 (orig: func_080174C8) | origin: wip | domain: game_state | HIGH / stanhash_map_tu */
u32 game_state_Sub_080174C8(u32 param_1,u32 param_2,u32 param_3,u32 param_4,
             int param_5,char param_6,u8 *param_7) {
  u32 uVar1;
  int iVar2;
  int aiStack_30 [2];
  short sStack_28;
  short sStack_26;
  NpcSystem_Sub_080A1CBC(aiStack_30,param_2);
  iVar2 = 0;
  if (param_6 == '\0') {
    if (aiStack_30[0] != 0x12) {
      if (aiStack_30[0] != 0x15) goto LAB_080175a0;
      iVar2 = 1;
    }
LAB_08017514:
    param_7[0x10] = 0;
    if ((0 < param_5 - iVar2) &&
       (((aiStack_30[0] == 0x12 || (game_state_Sub_080A1FC4(param_2,param_3), aiStack_30[0] == 0x12)) ||
        (iVar2 = game_state_Sub_080A1EF4(param_2,param_3), iVar2 == 0)))) {
      NpcSystem_Sub_080A1C94(param_2,param_3,param_4);
      *param_7 = 1;
      *(int *)(param_7 + 8) = (int)sStack_28;
      *(int *)(param_7 + 0xc) = (int)sStack_26;
      if (aiStack_30[0] == 0x13) {
        uVar1 = 6;
LAB_08017598:
        *(u32 *)(param_7 + 4) = uVar1;
      }
      else {
        if (0x13 < aiStack_30[0]) {
          if (aiStack_30[0] == 0x14) {
            uVar1 = 9;
          }
          else {
            if (aiStack_30[0] != 0x15) goto LAB_0801759c;
            Farm_Sub_08009B68(param_1,6);
            uVar1 = 7;
          }
          goto LAB_08017598;
        }
        if (aiStack_30[0] == 0x12) {
          Farm_Sub_08009B68(param_1,1);
          uVar1 = 4;
          goto LAB_08017598;
        }
      }
LAB_0801759c:
      uVar1 = 1;
      goto LAB_080175a2;
    }
  }
  else {
    if (aiStack_30[0] == 0x13) {
      iVar2 = 2;
      goto LAB_08017514;
    }
    if (aiStack_30[0] == 0x14) {
      iVar2 = 7;
      goto LAB_08017514;
    }
  }
LAB_080175a0:
  uVar1 = 0;
LAB_080175a2:
  return uVar1;
}

/* 0x08017C00 (48B) | game_state_vfunc_B0 (orig: func_08017C00) | origin: wip | domain: game_state | HIGH / vtable_algebra */
u32 game_state_vfunc_B0(int self) {
  int iVar1;
  u32 uVar2;
  if ((*(char *)(self + 0x0000103C) == '\0') &&
     (iVar1 = Code_809E804_GetMapData(*(u32 *)(*(int *)(self + 4) + 4)),
     *(char *)(iVar1 + 0x24) == '\0')) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

/* 0x08019F38 (68B) | game_state_Sub_08019F38 (orig: func_08019F38) | origin: wip | domain: game_state | HIGH / stanhash_map_tu */
u32 game_state_Sub_08019F38(s16 param_1) {
  u32 val;
  val = (s8)Code_809E804_GetMapData(*(s16 *)(*(s8 *)(param_1 + 4) + 4));
  return *(s8 *)((val + 0x24));
}

/* 0x08019F7C (108B) | game_state_vfunc_2C (orig: func_08019F7C) | origin: pure | domain: game_state | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0800BF14();
extern u32 func_0800C560();
extern u32 func_0800CE64();
extern u32 code_0800E2E4_Sub_0800E324();
extern u32 code_0803A8A4_Sub_0803A8A4();
extern u32 Code_809E804_GetMapData();
u32 game_state_vfunc_2C(int arg0,u32 arg1) {
  u32 val;
  u32 val2;
  u32 val3;
  u32 val4;
  int val5;
  int *mem_ptr;
  mem_ptr = (int *)(arg0 + 0x00001038);
  val = code_0800E2E4_Sub_0800E324(*mem_ptr + 0x10);
  val2 = func_0800BF14(*mem_ptr + 500);
  val3 = func_0800C560(*mem_ptr + 0x410);
  val4 = func_0800CE64(*mem_ptr + 0x5f0);
  code_0803A8A4_Sub_0803A8A4(arg1,val,val2,val3,val4);
  val5 = Code_809E804_GetMapData();
  return ((u32)*(u16 *)(val5 + 0x20) << 3);
}

/* 0x08019FE8 (108B) | game_state_vfunc_30 (orig: func_08019FE8) | origin: pure | domain: game_state | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0800BF14();
extern u32 func_0800C560();
extern u32 func_0800CE64();
extern u32 code_0800E2E4_Sub_0800E324();
extern u32 code_0803A8A4_Sub_0803A8A4();
extern u32 Code_809E804_GetMapData();
u32 game_state_vfunc_30(int arg0,u32 arg1) {
  u32 val;
  u32 val2;
  u32 val3;
  u32 val4;
  int val5;
  int *mem_ptr;
  mem_ptr = (int *)(arg0 + 0x00001038);
  val = code_0800E2E4_Sub_0800E324(*mem_ptr + 0x10);
  val2 = func_0800BF14(*mem_ptr + 500);
  val3 = func_0800C560(*mem_ptr + 0x410);
  val4 = func_0800CE64(*mem_ptr + 0x5f0);
  code_0803A8A4_Sub_0803A8A4(arg1,val,val2,val3,val4);
  val5 = Code_809E804_GetMapData();
  return ((u32)*(u16 *)(val5 + 0x22) << 3);
}

/* 0x0801A054 (232B) | game_state_vfunc_34 (orig: func_0801A054) | origin: wip | domain: game_state | HIGH / vtable_algebra */
u32 game_state_vfunc_34(u32 *self,int param_2,u32 param_3) {
    int * piVar10;
    BOOL uVar1;
    u32 uVar7;
    BOOL uVar3;
    u32 uVar8;
    register s16 iVar6;
    register s32 uVar9;
  register u16 uVar4;
  register s16 uVar2;
  register u32 uVar5;
  if (param_3 > 0x00000233) {
    *self = 0;
    self[1] = 0;
    *(u16 *)(self + 2) = 0;
    *(u16 *)((int)self + 10) = 0;
  }
  else {
    uVar8 = **(u32 **)(param_2 + 4);
    if ((param_3 == 2) && (uVar8 != 2)) {
      *self = *(u32 *)(0x00001050 + param_2);
      self[1] = 0;
      *(u16 *)(self + 2) = 0x80;
      *(u16 *)((int)self + 10) = 0x58;
    }
    else {
      if (uVar8 == param_3) {
        uVar3 = (*(u32 **)(param_2 + 4))[1];
      }
      else {
        piVar10 = (u16)(int *)(param_2 + 0x00001038);
        uVar7 = (s16)code_0800E2E4_Sub_0800E324(*piVar10 + 0x10);
        uVar9 = func_0800BF14(*piVar10 + 500);
        uVar4 = func_0800C560(*piVar10 + 0x410);
        uVar5 = func_0800CE64(*piVar10 + 0x5f0);
        uVar3 = code_0803A8A4_Sub_0803A8A4(param_3,uVar7,uVar9,uVar4,uVar5);
      }
      iVar6 = Code_809E804_GetMapData(uVar3);
      uVar1 = *(u16 *)(iVar6 + 0x20);
      uVar2 = *(u16 *)(iVar6 + 0x22);
      if (uVar8 == param_3) {
        iVar6 = *(int *)(param_2 + 4);
        Code_809E804_GetMapData(*(u32 *)(iVar6 + 4));
        uVar7 = *(u8 *)(iVar6 + 0x2c);
        uVar9 = 0;
      }
      else {
        uVar9 = *(u32 *)(iVar6 + 0x1c);
        uVar7 = *(u32 *)(iVar6 + 0x18);
      }
      self[1] = uVar9;
      *self = uVar7;
      *(u16 *)(self + 2) = uVar1;
      *(u16 *)((int)self + 10) = uVar2;
    }
  }
  return self;
}

/* 0x0801A8C0 (32B) | game_state_Sub_0801A8C0 (orig: func_0801A8C0) | origin: pure | domain: game_state | HIGH / stanhash_map_tu */
int game_state_Sub_0801A8C0(void *a, u32 b) { if (b <= 5) return 3; if (b <= 11) return 0; if (b > 17) return 2; return 1; }

/* 0x0801C0F8 (160B) | game_state_Sub_0801C0F8 (orig: func_0801C0F8) | origin: wip | domain: game_state | HIGH / stanhash_map_tu */
u32 game_state_Sub_0801C0F8(int param_1,u16 *param_2,int *param_3) {
  short sVar1;
  short sVar2;
  int iVar3;
  u32 uVar4;
  u32 uVar5;
  u32 uVar6;
  u32 uVar7;
  uVar7 = 0;
  if ((*param_2 & 0x3ff) == 2) {
    iVar3 = (int)(short)((u16)((param_2[1] & 0x000003FF) << 6) |
                        (u16)(*(u8 *)((int)param_2 + 1) >> 2));
    if (iVar3 < 0) {
      iVar3 = iVar3 + 7;
    }
    uVar5 = iVar3 >> 3;
    iVar3 = (int)(short)((u16)((param_2[2] & 0x000003FF) << 6) |
                        (u16)(*(u8 *)((int)param_2 + 3) >> 2));
    if (iVar3 < 0) {
      iVar3 = iVar3 + 7;
    }
    uVar4 = iVar3 >> 3;
    if ((((0x21 < uVar5) && (0x15 < uVar4)) && (uVar5 < 0x78)) && (uVar4 < 0x48)) {
      uVar6 = uVar5 - 0x22 >> 1;
      uVar5 = uVar4 - 0x16 >> 1;
      *param_3 = *(int *)(param_1 + 0x00001038) + 0x000009DC + (uVar6 + uVar5 * 0x2b) * 4;
      sVar1 = (short)uVar6;
      *(short *)(param_3 + 1) = sVar1 * 2 + 0x22;
      sVar2 = (short)uVar5;
      *(short *)((int)param_3 + 6) = sVar2 * 2 + 0x16;
      *(short *)(param_3 + 2) = sVar1;
      *(short *)((int)param_3 + 10) = sVar2;
      uVar7 = 1;
    }
  }
  return uVar7;
}

/* 0x0801C29C (320B) | game_state_vfunc_C0 (orig: func_0801C29C) | origin: wip | domain: game_state | HIGH / vtable_algebra */
u32 game_state_vfunc_C0(int *self,u16 *param_2) {
  bool bVar1;
  char cVar2;
  u32 uVar3;
  u32 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  u8 *pbVar8;
  u32 uVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  u32 uStack_24;
  u16 uStack_20;
  u16 uStack_1e;
  u16 uStack_1c;
  u16 uStack_1a;
  iVar12 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1e = 0;
  uStack_1c = 0;
  uStack_1a = 0;
  cVar2 = game_state_Sub_0801C0F8(self,param_2,&uStack_24);
  if (cVar2 != '\0') {
    piVar10 = (int *)((int)self + 0x00001038);
    iVar12 = FieldPlot_Sub_0800A190(uStack_24,*(int *)(*piVar10 + 8) == 0);
    uVar3 = func_080D3910(self,*(u32 *)(*self + 0x14));
    if (uVar3 == (*param_2 & 0x3ff)) {
      iVar6 = self[1];
      iVar11 = *piVar10 + 0x000009DC;
      uVar9 = (u32)uStack_1c;
      uVar3 = (u32)uStack_1a;
      bVar1 = false;
      if ((uVar9 < 0x2b) && (uVar3 + 1 < 0x19)) {
        bVar1 = true;
      }
      if (bVar1) {
        iVar5 = iVar11 + (uVar9 + (uVar3 + 1) * 0x2b) * 4;
      }
      else {
        iVar5 = 0;
      }
      iVar7 = uVar3 - 1;
      bVar1 = false;
      if (((-1 < iVar7) && (uVar9 < 0x2b)) && (iVar7 < 0x19)) {
        bVar1 = true;
      }
      if (bVar1) {
        iVar7 = iVar11 + (uVar9 + iVar7 * 0x2b) * 4;
      }
      else {
        iVar7 = 0;
      }
      uVar4 = FieldPlot_Ctor_AF5C(iVar11 + (uVar9 + uVar3 * 0x2b) * 4,iVar5,iVar7);
      code_809E804_Sub_080AA6D0(iVar6,uStack_20,uStack_1e,uStack_24,uVar4);
    }
    if (iVar12 == 3) {
      uVar3 = 0;
      pbVar8 = (u8 *)((int)self + 0x00001081);
      do {
        if ((*pbVar8 & 3) == 0) {
          *pbVar8 = *pbVar8 & 0xfc | 2;
          iVar6 = 0x00001084;
          *(u16 *)((int)self + 0x00001084) = uStack_20;
          *(u16 *)((int)self + iVar6 + 2) = uStack_1e;
          break;
        }
        pbVar8 = pbVar8 + 0xc;
        self = self + 3;
        uVar3 = uVar3 + 1;
      } while (uVar3 < 4);
    }
  }
  return (iVar12);
}

/* 0x0801C3E0 (188B) | game_state_Sub_0801C3E0 (orig: func_0801C3E0) | origin: wip | domain: game_state | MEDIUM / tu_interp */
void game_state_Sub_0801C3E0(int *param_1) {
    s16 uVar3;
    u32 uVar8;
    BOOL iVar6;
    int * piVar2;
  bool bVar1;
  register u32 uVar4;
  register int iVar5;
  register u8 *pbVar7;
  uVar8 = 0;
  bVar1 = false;
  piVar2 = (int *)(0x00001088 + (int)param_1);
  pbVar7 = (u8 *)((int)param_1 + 0x00001081);
  do {
    if ((*pbVar7 & 3) == 2) {
      *pbVar7 = *pbVar7 & 0xf0 | 1;
      uVar3 = CppRuntime_builtin_new(0x40);
      uVar4 = func_080D3910(param_1,*(u32 *)(*param_1 + 0x68));
      iVar5 = code_entities_681C_Ctor_4A00(uVar3,uVar4,0x0000086F,param_1,3,0x1a,0);
      iVar6 = *piVar2;
      if ((iVar5 != (u8)iVar6) && (iVar6 != 0)) {
        func_080D3914(iVar6,3,*(s16 *)(*(int *)(iVar6 + 0x24) + 8));
      }
      *piVar2 = iVar5;
      bVar1 = true;
    }
    piVar2 = 3 + piVar2;
    uVar8 = 1 + uVar8;
    pbVar7 = 0xc + pbVar7;
  } while (4 > uVar8);
  if (bVar1) {
    entity_actor_Sub_08032384(param_1[2],2,0);
  }
}

/* 0x0801C49C (180B) | game_state_Sub_0801C49C (orig: func_0801C49C) | origin: wip | domain: game_state | MEDIUM / graph_algebra */
u32 game_state_Sub_0801C49C(int *param_1,u16 *param_2,u32 *param_3) {
  char cVar1;
  int iVar2;
  int iVar3;
  u32 uVar4;
  u32 uVar5;
  u32 uVar6;
  u32 uVar7;
  int *piVar8;
  u16 uStack_28;
  u16 uStack_26;
  u16 uStack_24;
  u16 uStack_22;
  *param_3 = 0;
  cVar1 = game_state_Sub_0801C198(param_1,param_2,&uStack_28);
  if (cVar1 == '\0') {
    uVar7 = 0;
  }
  else {
    piVar8 = (int *)((int)param_1 + 0x00001038);
    iVar2 = *piVar8 + 0x00002E58;
    iVar3 = game_state_Sub_0809D8D4(iVar2,uStack_24,uStack_22);
    uVar7 = (u32)(iVar3 == 0);
    uVar4 = game_state_Sub_0809D8E8(iVar2,uStack_24,uStack_22,*piVar8);
    *param_3 = uVar4;
    uVar5 = func_080D3910(param_1,*(u32 *)(*param_1 + 0x14));
    if (uVar5 == (*param_2 & 0x3ff)) {
      iVar3 = param_1[1];
      uVar4 = game_state_Sub_0809D8D4(iVar2,uStack_24,uStack_22);
      uVar6 = code_entities_Sub_0809E0AC(iVar2,uStack_24,uStack_22);
      Code_809E804_Sub_080AA540(iVar3,uStack_28,uStack_26,uVar4,uVar6);
    }
  }
  return uVar7;
}

/* 0x0801CAD8 (216B) | game_state_Sub_0801CAD8 (orig: func_0801CAD8) | origin: wip | domain: game_state | MEDIUM / graph_algebra */
u32 game_state_Sub_0801CAD8(int *param_1,u16 *param_2,u32 *param_3) {
  char cVar1;
  int iVar2;
  int iVar3;
  u32 uVar4;
  u32 uVar5;
  u32 uVar6;
  u32 uVar7;
  int *piVar8;
  u16 uStack_28;
  u16 uStack_26;
  u16 uStack_24;
  u16 uStack_22;
  *param_3 = 0;
  cVar1 = game_state_Sub_0801C198(param_1,param_2,&uStack_28);
  if (cVar1 == '\0') {
    uVar7 = 0;
  }
  else {
    piVar8 = (int *)(0x00001038 + (int)param_1);
    iVar2 = *piVar8 + 0x00002E58;
    iVar3 = game_state_Sub_0809D8D4(iVar2,uStack_24,uStack_22);
    uVar7 = (u32)(iVar3 == 4);
    uVar4 = game_state_Sub_0809D9B4(iVar2,uStack_24,uStack_22,*piVar8);
    *param_3 = uVar4;
    uVar5 = func_080D3910(param_1,*(u32 *)(*param_1 + 0x14));
    if (uVar5 == (*param_2 & 0x3ff)) {
      iVar3 = param_1[1];
      uVar4 = game_state_Sub_0809D8D4(iVar2,uStack_24,uStack_22);
      uVar6 = code_entities_Sub_0809E0AC(iVar2,uStack_24,uStack_22);
      Code_809E804_Sub_080AA540(iVar3,uStack_28,uStack_26,uVar4,uVar6);
      if (uVar7 != 0) {
        hardware_Sub_080AB68C(*(u32 *)(0x00001028 + (int)param_1),(u32)uStack_28 * 8 + 8,
                      (u32)uStack_26 * 8 + 0x10,5);
      }
    }
  }
  return uVar7;
}

/* 0x0801CBB0 (308B) | game_state_Sub_0801CBB0 (orig: func_0801CBB0) | origin: wip | domain: game_state | MEDIUM / tu_interp */
u32 game_state_Sub_0801CBB0(int *param_1,int param_2,int param_3) {
  char cVar1;
  u8 *puVar2;
  int iVar3;
  u32 uVar4;
  int iVar5;
  int *piVar6;
  u32 uVar7;
  u32 uVar8;
  u32 uVar9;
  u32 uVar10;
  u8 auStack_50 [4];
  int iStack_4c;
  u8 auStack_40 [16];
  u8 bStack_30;
  u32 uStack_2c;
  u32 uStack_28;
  int iStack_24;
  uVar9 = 0;
  iStack_24 = param_2;
  if (param_2 == 2) {
    puVar2 = (u8 *)(0x080F0800 + param_3);
    uVar8 = 0;
    do {
      uVar7 = 0;
      uVar10 = uVar8 + 1;
      iVar5 = uVar8 * 0xac;
      do {
        iVar3 = FieldPlot_Sub_0800A238(*(int *)(0x00001038 + (int)param_1) + 0x000009DC + iVar5,*puVar2
                             );
        if (iVar3 != 0) {
          uVar9 = 1;
        }
        uVar9 = (u32)(uVar9 != 0);
        iVar5 = iVar5 + 4;
        uVar7 = uVar7 + 1;
      } while (uVar7 < 0x2b);
      uVar8 = uVar10;
    } while (uVar10 < 0x19);
  }
  else {
    piVar6 = (int *)(0x00001038 + (int)param_1);
    uVar4 = code_0800E2E4_Sub_0800E324(*piVar6 + 0x10);
    iVar5 = *piVar6 + 0x000034C8;
    uVar8 = 0x60;
    puVar2 = (u8 *)(param_3 + 0x080F0800);
    do {
      cVar1 = NpcSystem_Sub_080A1ED4(iVar5,uVar8,uVar4);
      if ((cVar1 != '\0') && (NpcSystem_Sub_080A1CBC(auStack_50,iVar5,uVar8), iStack_4c == iStack_24)) {
        auStack_40[0] = 0;
        bStack_30 = 1;
        game_state_Sub_080174C8(*(int *)(0x00001038 + (int)param_1) + 0x14,
                      *(int *)(0x00001038 + (int)param_1) + 0x000034C8,uVar8,uVar4,*puVar2,1,
                      auStack_40);
        uVar9 = -uVar9 >> 0x1f | bStack_30 ^ 1;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < 0x74);
  }
  if (uVar9 != 0) {
    uStack_2c = 0x000003DD;
    uStack_28 = 0;
    func_080D3918(param_1,&uStack_2c,0,*(u32 *)(*param_1 + 0x140));
  }
  return (uVar9);
}

/* 0x0801CCE4 (216B) | game_state_Sub_0801CCE4 (orig: func_0801CCE4) | origin: wip | domain: game_state | HIGH / stanhash_map_tu */
u32 game_state_Sub_0801CCE4(int *param_1,int param_2,int param_3,u32 param_4) {
  bool bVar1;
  u32 uVar2;
  int iVar3;
  u32 uVar4;
  int iVar5;
  int iVar6;
  u8 iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  piVar10 = (int *)((int)param_1 + 0x00001038);
  iVar9 = (param_2 + param_3 * 0x2b) * 4;
  iVar5 = *piVar10 + 0x000009DC + iVar9;
  uVar2 = FieldPlot_Sub_0800A33C(iVar5,param_4);
  if (func_080D3910(param_1,*(u32 *)(*param_1 + 0x14)) == 2) {
    iVar8 = param_1[1];
    iVar6 = *piVar10 + 0x000009DC;
    iVar3 = param_3 + 1;
    bVar1 = false;
    if ((((-param_2 > 1) && (-1 < iVar3)) && (param_2 < 0x2b)) && (iVar3 < 0x19)) {
      bVar1 = true;
    }
    if (bVar1) {
      iVar3 = iVar6 + (param_2 + iVar3 * 0x2b) * 4;
    }
    else {
      iVar3 = 0;
    }
    iVar7 = param_3 + -1;
    bVar1 = false;
    if (((-1 < param_2) && (-1 < iVar7)) && ((param_2 < 0x2b && (iVar7 < 0x19)))) {
      bVar1 = true;
    }
    if (bVar1) {
      iVar7 = iVar6 + (param_2 + iVar7 * 0x2b) * 4;
    }
    else {
      iVar7 = 0;
    }
    uVar4 = FieldPlot_Ctor_AF5C(iVar6 + iVar9,iVar3,iVar7);
    code_809E804_Sub_080AA6D0(iVar8,(param_2 << 1) + 0x22,(param_3 << 1) + 0x16,iVar5,uVar4);
  }
  return (uVar2);
}

/* 0x0801CEFC (188B) | game_state_Sub_0801CEFC (orig: func_0801CEFC) | origin: wip | domain: game_state | MEDIUM / graph_algebra */
u32 game_state_Sub_0801CEFC(int param_1,u32 param_2,int param_3) {
  char cVar1;
  u32 uVar2;
  u32 uStack_34;
  u16 uStack_30;
  u16 uStack_2e;
  u16 uStack_2c;
  u16 uStack_2a;
  char acStack_28 [4];
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  u8 bStack_18;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2e = 0;
  uStack_2c = 0;
  uStack_2a = 0;
  cVar1 = game_state_Sub_0801C0F8(param_1,param_2,&uStack_34);
  if (cVar1 == '\0') {
    acStack_28[0] = '\0';
    bStack_18 = 1;
    game_state_Sub_0801D104(param_1,param_2,*(u8 *)(param_3 + 0x080F0807),0,acStack_28);
    if (acStack_28[0] != '\0') {
      if (iStack_24 == 4) {
        hardware_Sub_080AB68C(*(u32 *)(param_1 + 0x00001028),iStack_20 + 8,iStack_1c + 0xb,4);
      }
      else {
        if (iStack_24 != 7) {
          uVar2 = 0;
          goto LAB_0801cfaa;
        }
        hardware_Sub_080AB68C(*(u32 *)(param_1 + 0x00001028),iStack_20 + 0x10,iStack_1c + 0x20,7);
      }
    }
    uVar2 = bStack_18 ^ 1;
  }
  else {
    uVar2 = game_state_Sub_0801CDBC(param_1,uStack_2c,uStack_2a,*(u8 *)(param_3 + 0x080F0807));
    uVar2 = uVar2 & 0xff;
  }
LAB_0801cfaa:
  return uVar2;
}

/* 0x0801CFB8 (332B) | game_state_Sub_0801CFB8 (orig: func_0801CFB8) | origin: wip | domain: game_state | MEDIUM / tu_interp */
u32 game_state_Sub_0801CFB8(int *param_1,int param_2,int param_3) {
  char cVar1;
  int iVar2;
  u32 uVar3;
  u32 uVar4;
  u32 uVar5;
  u32 uVar6;
  u32 uVar7;
  u8 *puVar8;
  u8 auStack_50 [4];
  int iStack_4c;
  u8 auStack_40 [16];
  u8 bStack_30;
  u32 uStack_2c;
  u32 uStack_28;
  int *piStack_24;
  uVar7 = 0;
  piStack_24 = param_1;
  if (param_2 == 2) {
    param_1 = (int *)((int)param_1 + 0x00001038);
    puVar8 = (u8 *)(param_3 + 0x080F0807);
    uVar6 = 0;
    do {
      uVar5 = 0;
      uVar4 = uVar6 + 1;
      do {
        iVar2 = FieldPlot_Sub_0800A33C(*param_1 + 0x000009DC + (uVar5 + uVar6 * 0x2b) * 4,*puVar8);
        if (iVar2 - 1U < 2) {
          Farm_Sub_08009B68(*param_1 + 0x14,1);
        }
        if (iVar2 != 0) {
          uVar7 = 1;
        }
        uVar7 = (u32)(uVar7 != 0);
        uVar5 = uVar5 + 1;
      } while (uVar5 < 0x2b);
      uVar6 = uVar4;
    } while (uVar4 < 0x19);
  }
  else {
    param_1 = (int *)((int)param_1 + 0x00001038);
    uVar3 = code_0800E2E4_Sub_0800E324(*param_1 + 0x10);
    iVar2 = *param_1 + 0x000034C8;
    uVar6 = 0x60;
    puVar8 = (u8 *)(param_3 + 0x080F0807);
    do {
      cVar1 = NpcSystem_Sub_080A1ED4(iVar2,uVar6,uVar3);
      if ((cVar1 != '\0') && (NpcSystem_Sub_080A1CBC(auStack_50,iVar2,uVar6), iStack_4c == param_2)) {
        auStack_40[0] = 0;
        bStack_30 = 1;
        game_state_Sub_080174C8(*(int *)((int)piStack_24 + 0x00001038) + 0x14,
                      *(int *)((int)piStack_24 + 0x00001038) + 0x000034C8,uVar6,uVar3,*puVar8,
                      0,auStack_40);
        uVar7 = -uVar7 >> 0x1f | bStack_30 ^ 1;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < 0x74);
  }
  if (uVar7 != 0) {
    uStack_2c = 0x000003CF;
    uStack_28 = 0;
    func_080D3918(piStack_24,&uStack_2c,0,*(u32 *)(*piStack_24 + 0x140));
  }
  return (uVar7);
}

/* 0x0801D3FC (228B) | game_state_Sub_0801D3FC (orig: func_0801D3FC) | origin: wip | domain: game_state | MEDIUM / tu_interp */
u32 game_state_Sub_0801D3FC(int *param_1,u16 *param_2) {
  bool bVar1;
  char cVar2;
  int iVar3;
  u32 uVar4;
  u32 uVar5;
  int iVar6;
  int iVar7;
  u32 uVar8;
  int iVar9;
  int iVar10;
  u32 uStack_20;
  u16 uStack_1c;
  u16 uStack_1a;
  u16 uStack_18;
  u16 uStack_16;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_1a = 0;
  uStack_18 = 0;
  uStack_16 = 0;
  cVar2 = game_state_Sub_0801C0F8(param_1,param_2,&uStack_20);
  if (cVar2 != '\0') {
    iVar3 = FieldPlot_Sub_0800A438(uStack_20);
    uVar4 = func_080D3910(param_1,*(u32 *)(*param_1 + 0x14));
    if (uVar4 == (*param_2 & 0x3ff)) {
      iVar10 = param_1[1];
      iVar9 = *(int *)((int)param_1 + 0x00001038) + 0x000009DC;
      uVar8 = (u32)uStack_18;
      uVar4 = (u32)uStack_16;
      bVar1 = false;
      if ((uVar8 < 0x2b) && (uVar4 + 1 < 0x19)) {
        bVar1 = true;
      }
      if (bVar1) {
        iVar6 = iVar9 + (uVar8 + (uVar4 + 1) * 0x2b) * 4;
      }
      else {
        iVar6 = 0;
      }
      iVar7 = uVar4 - 1;
      bVar1 = false;
      if (((-1 < iVar7) && (uVar8 < 0x2b)) && (iVar7 < 0x19)) {
        bVar1 = true;
      }
      if (bVar1) {
        iVar7 = iVar9 + (uVar8 + iVar7 * 0x2b) * 4;
      }
      else {
        iVar7 = 0;
      }
      uVar5 = FieldPlot_Ctor_AF5C(iVar9 + (uVar8 + uVar4 * 0x2b) * 4,iVar6,iVar7);
      code_809E804_Sub_080AA6D0(iVar10,uStack_1c,uStack_1a,uStack_20,uVar5);
    }
    if (iVar3 == 1) {
      uVar5 = 1;
      goto LAB_0801d4d8;
    }
  }
  uVar5 = 0;
LAB_0801d4d8:
  return uVar5;
}

/* 0x0801D4E0 (220B) | game_state_Sub_0801D4E0 (orig: func_0801D4E0) | origin: wip | domain: game_state | MEDIUM / tu_interp */
void game_state_Sub_0801D4E0(int *param_1,u16 *param_2,u32 param_3) {
  bool bVar1;
  char cVar2;
  u32 uVar3;
  u32 uVar4;
  int iVar5;
  int iVar6;
  u32 uVar7;
  int iVar8;
  int iVar9;
  u32 uStack_1c;
  u16 uStack_18;
  u16 uStack_16;
  u16 uStack_14;
  u16 uStack_12;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_16 = 0;
  uStack_14 = 0;
  uStack_12 = 0;
  cVar2 = game_state_Sub_0801C0F8(param_1,param_2,&uStack_1c);
  if (cVar2 != '\0') {
    FieldPlot_Sub_0800A460(uStack_1c,param_3);
    if (func_080D3910(param_1,*(u32 *)(*param_1 + 0x14)) == (*param_2 & 0x3ff)) {
      iVar9 = param_1[1];
      iVar8 = *(int *)((int)param_1 + 0x00001038) + 0x000009DC;
      uVar7 = (u32)uStack_14;
      uVar3 = (u32)uStack_12;
      bVar1 = false;
      if ((uVar7 < 0x2b) && (uVar3 + 1 < 0x19)) {
        bVar1 = true;
      }
      if (bVar1) {
        iVar5 = iVar8 + (uVar7 + (uVar3 + 1) * 0x2b) * 4;
      }
      else {
        iVar5 = 0;
      }
      iVar6 = uVar3 - 1;
      bVar1 = false;
      if (((-iVar6 > 1) && (uVar7 < 0x2b)) && (iVar6 < 0x19)) {
        bVar1 = true;
      }
      if (bVar1) {
        iVar6 = iVar8 + (uVar7 + iVar6 * 0x2b) * 4;
      }
      else {
        iVar6 = 0;
      }
      uVar4 = FieldPlot_Ctor_AF5C(iVar8 + (uVar7 + uVar3 * 0x2b) * 4,iVar5,iVar6);
      code_809E804_Sub_080AA6D0(iVar9,uStack_18,uStack_16,uStack_1c,uVar4);
    }
  }
}

/* 0x0801D5BC (240B) | game_state_Sub_0801D5BC (orig: func_0801D5BC) | origin: wip | domain: game_state | MEDIUM / tu_interp */
void game_state_Sub_0801D5BC(int *param_1,u16 *param_2,u32 *param_3) {
  bool bVar1;
  char cVar2;
  u32 uVar3;
  u32 uVar4;
  int iVar5;
  int iVar6;
  u32 uVar7;
  int iVar8;
  int iVar9;
  u32 uStack_20;
  u16 uStack_1c;
  u16 uStack_1a;
  u16 uStack_18;
  u16 uStack_16;
  u32 uStack_14;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_1a = 0;
  uStack_18 = 0;
  uStack_16 = 0;
  cVar2 = game_state_Sub_0801C0F8(param_1,param_2,&uStack_20);
  if (cVar2 == '\0') {
    game_state_Sub_0801D6AC(&uStack_14,param_1,param_2);
    *param_3 = uStack_14;
  }
  else {
    FieldPlot_Ctor_A4A4(&uStack_14,uStack_20);
    *param_3 = uStack_14;
    uVar3 = func_080D3910(param_1,*(u32 *)(*param_1 + 0x14));
    if (uVar3 == (*param_2 & 0x3ff)) {
      iVar9 = param_1[1];
      iVar8 = *(int *)((int)param_1 + 0x00001038) + 0x000009DC;
      uVar7 = (u32)uStack_18;
      uVar3 = (u32)uStack_16;
      bVar1 = false;
      if ((uVar7 < 0x2b) && (uVar3 + 1 < 0x19)) {
        bVar1 = true;
      }
      if (bVar1) {
        iVar5 = iVar8 + (uVar7 + (uVar3 + 1) * 0x2b) * 4;
      }
      else {
        iVar5 = 0;
      }
      iVar6 = uVar3 - 1;
      bVar1 = false;
      if (((-1 < iVar6) && (uVar7 < 0x2b)) && (iVar6 < 0x19)) {
        bVar1 = true;
      }
      if (bVar1) {
        iVar6 = iVar8 + (uVar7 + iVar6 * 0x2b) * 4;
      }
      else {
        iVar6 = 0;
      }
      uVar4 = FieldPlot_Ctor_AF5C(iVar8 + (uVar7 + uVar3 * 0x2b) * 4,iVar5,iVar6);
      code_809E804_Sub_080AA6D0(iVar9,uStack_1c,uStack_1a,uStack_20,uVar4);
    }
  }
}

/* 0x0801D6AC (260B) | game_state_Sub_0801D6AC (orig: func_0801D6AC) | origin: wip | domain: game_state | HIGH / stanhash_map_tu */
u32 game_state_Sub_0801D6AC(u32 *param_1,int param_2,u16 *param_3) {
  char cVar1;
  u32 uVar2;
  int iVar3;
  int iVar4;
  u32 uStack_44;
  u32 uStack_40;
  u8 auStack_3c [8];
  short sStack_34;
  short sStack_32;
  u16 uStack_2c;
  u16 uStack_2a;
  short sStack_28;
  short sStack_26;
  u16 uStack_24;
  u16 uStack_22;
  iVar4 = *(int *)(param_2 + 0x00001038) + 0x000034C8;
  uVar2 = code_0800E2E4_Sub_0800E324(*(int *)(param_2 + 0x00001038) + 0x10);
  uStack_2c = (u16)((param_3[1] & 0x000003FF) << 6) |
              (u16)(*(u8 *)((int)param_3 + 1) >> 2);
  uStack_2a = (u16)((param_3[2] & 0x000003FF) << 6) |
              (u16)(*(u8 *)((int)param_3 + 3) >> 2);
  sStack_28 = uStack_2c + 1;
  sStack_26 = uStack_2a + 1;
  iVar3 = NpcSystem_Sub_080A1D20(iVar4,*param_3 & 0x3ff,&uStack_2c,uVar2);
  func_0800EFEC(&uStack_44);
  if (iVar3 != -1) {
    NpcSystem_Sub_080A1B38(&uStack_40,iVar4,*param_3 & 0x3ff,&uStack_2c,uVar2);
    uStack_44 = uStack_40;
    cVar1 = RucksackItem_IsEmpty(&uStack_44);
    if ((cVar1 == '\0') && ((*param_3 & 0x3ff) == **(u32 **)(param_2 + 4))) {
      NpcSystem_Sub_080A1CBC(auStack_3c,iVar4,iVar3);
      iVar3 = (int)sStack_34;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 7;
      }
      iVar4 = (int)sStack_32;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 7;
      }
      uStack_24 = (u16)(iVar3 >> 3);
      uStack_22 = (u16)(iVar4 >> 3);
      Code_809E804_Sub_080A5F78(*(u32 *)(param_2 + 4),1,&uStack_24,2,2);
    }
  }
  *param_1 = uStack_44;
  return (param_1);
}

/* 0x0801D7B0 (220B) | game_state_Sub_0801D7B0 (orig: func_0801D7B0) | origin: wip | domain: game_state | MEDIUM / tu_interp */
void game_state_Sub_0801D7B0(int *param_1,u16 *param_2,u32 param_3) {
  bool bVar1;
  char cVar2;
  s8 uVar3;
  u32 uVar4;
  int iVar5;
  int iVar6;
  u32 uVar7;
  int iVar8;
  int iVar9;
  u32 uStack_1c;
  u16 uStack_18;
  u16 uStack_16;
  u16 uStack_14;
  u16 uStack_12;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_16 = 0;
  uStack_14 = 0;
  uStack_12 = 0;
  cVar2 = game_state_Sub_0801C0F8(param_1,param_2,&uStack_1c);
  if (cVar2 != '\0') {
    FieldPlot_Sub_0800A6F4(uStack_1c,param_3);
    if (func_080D3910(param_1,*(u32 *)(*param_1 + 0x14)) == (*param_2 & 0x3ff)) {
      iVar9 = param_1[1];
      iVar8 = *(int *)((int)param_1 + 0x00001038) + 0x000009DC;
      uVar7 = (u32)uStack_14;
      uVar3 = (u32)uStack_12;
      bVar1 = false;
      if ((uVar7 < 0x2b) && (uVar3 + 1 < 0x19)) {
        bVar1 = true;
      }
      if (bVar1) {
        iVar5 = iVar8 + (uVar7 + (uVar3 + 1) * 0x2b) * 4;
      }
      else {
        iVar5 = 0;
      }
      iVar6 = uVar3 - 1;
      bVar1 = false;
      if (((-1 < iVar6) && (uVar7 < 0x2b)) && (iVar6 < 0x19)) {
        bVar1 = true;
      }
      if (bVar1) {
        iVar6 = (s16)iVar8 + (uVar7 + iVar6 * 0x2b) * 4;
      }
      else {
        iVar6 = 0;
      }
      uVar4 = FieldPlot_Ctor_AF5C(iVar8 + (uVar7 + uVar3 * 0x2b) * 4,iVar5,iVar6);
      code_809E804_Sub_080AA6D0(iVar9,uStack_18,uStack_16,uStack_1c,uVar4);
    }
  }
}

/* 0x0801D88C (64B) | game_state_Sub_0801D88C (orig: func_0801D88C) | origin: wip | domain: game_state | MEDIUM / tu_interp */
u32 game_state_Sub_0801D88C(u32 param_1,u32 param_2,u32 param_3) {
  char cVar1;
  u32 uVar2;
  u32 uStack_14;
  u16 uStack_10;
  u16 uStack_e;
  u16 uStack_c;
  u16 uStack_a;
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_e = 0;
  uStack_c = 0;
  uStack_a = 0;
  cVar1 = game_state_Sub_0801C0F8(param_1,param_2,&uStack_14);
  if (cVar1 == '\0') {
    uVar2 = 2;
  }
  else {
    cVar1 = FieldPlot_Sub_0800A6C8(uStack_14,param_3);
    if (cVar1 == '\0') {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

/* 0x0801D8CC (124B) | game_state_Sub_0801D8CC (orig: func_0801D8CC) | origin: wip | domain: game_state | HIGH / stanhash_map_tu */
void game_state_Sub_0801D8CC(int param_1) {
    int * piVar2;
  register int iVar1;
  *(u8 *)(param_1 + 0x0000103C) = 1;
  if (*(char *)(*(int *)(param_1 + 0x00001038) + 0x000034C4) == '\0') {
    for (piVar2 = (int *)(param_1 + 8); piVar2 != (int *)(param_1 + 0x198); piVar2 = piVar2 + 1) {
      iVar1 = *piVar2;
      if (iVar1 != 0) {
        func_080D3910(iVar1,*(u32 *)(*(int *)(iVar1 + 0x14) + 0x20));
      }
    }
  }
  else {
    for (piVar2 = (int *)(param_1 + 8); piVar2 != (int *)(param_1 + 0x198); piVar2 = piVar2 + 1) {
      iVar1 = *piVar2;
      if (iVar1 != 0) {
        func_080D3910(iVar1,*(u32 *)(*(s16 *)(iVar1 + 0x14) + 0x20));
      }
    }
  }
}

/* 0x0801D948 (96B) | game_state_Sub_0801D948 (orig: func_0801D948) | origin: wip | domain: game_state | HIGH / stanhash_map_tu */
void game_state_Sub_0801D948(int param_1) {
  int iVar1;
  int *piVar2;
  *(u8 *)(param_1 + 0x0000103C) = 0;
  if (*(char *)(*(int *)(param_1 + 0x00001038) + 0x000034C4) == '\0') {
    for (piVar2 = (int *)(param_1 + 8); piVar2 != (int *)(param_1 + 0x198); piVar2 = piVar2 + 1) {
      iVar1 = *piVar2;
      if (iVar1 != 0) {
        func_080D3910(iVar1,*(u32 *)(*(int *)(iVar1 + 0x14) + 0x24));
      }
    }
  }
  else {
    func_080D3910(*(int *)(param_1 + 8),
                    *(char *)(*(int *)(*(int *)(param_1 + 8) + 0x14) + 0x24));
  }
}

/* 0x0801D9A8 (20B) | game_state_Sub_0801D9A8 (orig: func_0801D9A8) | origin: pure | domain: game_state | HIGH / stanhash_map_tu */
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
extern u32 game_state_Sub_08012B24();
void game_state_Sub_0801D9A8(u32 arg0, u32 arg1, u32 arg2, u32 arg3)
{
    register u32 r0 = arg0;
    register u32 r1 = arg1;
    register u32 r2 = arg2;
    register u32 r3 = arg3;
    r3 = 0x00001054;
    r0 = r0 + r3;
    r0 = *(u32 *)(r0);
    r0 = game_state_Sub_08012B24(r0, r1, r2, r3);
    return r0;
}

/* 0x0801DB44 (20B) | game_state_Sub_0801DB44 (orig: func_0801DB44) | origin: pure | domain: game_state | HIGH / stanhash_map_tu */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 game_state_GetField_0x04();
u32 game_state_Sub_0801DB44(int arg0) {
  return game_state_GetField_0x04(*(u32 *)(arg0 + 0x00001054));
}

/* 0x0801DB58 (204B) | game_state_Sub_0801DB58 (orig: func_0801DB58) | origin: wip | domain: game_state | HIGH / stanhash_map_tu */
void game_state_Sub_0801DB58(int *param_1) {
  int iVar1;
  u32 uVar2;
  u32 uVar3;
  u32 uVar4;
  u16 uStack_18;
  u16 uStack_16;
  short sStack_14;
  u8 uStack_12;
  char cStack_11;
  u8 uStack_10;
  uStack_18 = 0x100;
  uStack_16 = 0x100;
  sStack_14 = 0;
  uStack_12 = 0;
  cStack_11 = '\0';
  uStack_10 = 0;
  iVar1 = func_080D3910(param_1,*(u32 *)(*param_1 + 0x14));
  uVar3 = iVar1 - 0x34;
  if ((uVar3 <= 0x000001FF) || (iVar1 == 0x2b)) {
    if (iVar1 == 0x2b) {
      uVar3 = 9;
    }
    else if (0x00000133 < iVar1) {
      uVar3 = iVar1 + 0xFFFFFECC;
    }
    iVar1 = (uVar3 + 1) * (0xFFFFF600 - sStack_14);
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0xff;
    }
    sStack_14 = sStack_14 + (short)((u32)iVar1 >> 8);
  }
  iVar1 = farmer_Sub_0800E4FC(*(int *)((int)param_1 + 0x00001038) + 0x00001BD8);
  if (0x4f < iVar1) {
    cStack_11 = (char)iVar1 + -0x4f;
    uStack_10 = 3;
  }
  uVar4 = *(u32 *)((int)param_1 + 0x00001054);
  uVar2 = func_080D3910(param_1,*(u32 *)(*param_1 + 0x148));
  game_state_StopBGM(uVar4,1,uVar2,&uStack_18);
}

/* 0x0801DC24 (132B) | game_state_Sub_0801DC24 (orig: func_0801DC24) | origin: wip | domain: game_state | HIGH / stanhash_map_tu */
void game_state_Sub_0801DC24(int *param_1,u32 param_2) {
    int iVar3;
    int iVar4;
    int * piVar5;
  u32 uVar1;
  register u32 uVar2;
  piVar5 = (int *)((int)param_1 + 0x00001058);
  iVar4 = *piVar5;
  if (iVar4 == 0) {
    uVar1 = CppRuntime_builtin_new(0x40);
    uVar2 = func_080D3910(param_1,*(u32 *)(*param_1 + 0x5c));
    iVar4 = code_entities_681C_Ctor_4A00(uVar1,uVar2,param_2,param_1,3,0x1b,1);
    iVar3 = *piVar5;
    if ((iVar4 != iVar3) && (iVar3 != 0)) {
      func_080D3914(iVar3,3,*(u32 *)(*(int *)(iVar3 + 0x24) + 8));
    }
    *piVar5 = iVar4;
  }
  else {
    code_0803EE94_Sub_0805E860(iVar4 + 0x28);
    *(u16 *)(iVar4 + 0x3c) = 1;
    *(u8 *)(iVar4 + 0x3f) = 1;
    *(u8 *)(iVar4 + 0x3e) = 0;
  }
}

/* 0x0801DCA8 (44B) | game_state_Sub_0801DCA8 (orig: func_0801DCA8) | origin: pure | domain: game_state | HIGH / stanhash_map_tu */
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
extern u32 func_080D3914();
void game_state_Sub_0801DCA8(u32 arg0, u32 arg1, u32 arg2, u32 arg3)
{
    register u32 r0 = arg0;
    register u32 r1 = arg1;
    register u32 r2 = arg2;
    register u32 r3 = arg3;
    register u32 r4, r5;
    r1 = 0x00001058;
    r4 = r0 + r1;
    r5 = 0;
    r1 = *(u32 *)(r4);
    if (r5 == r1) goto loc_0801DCC6;
    if (r1 == 0) goto loc_0801DCC6;
    r0 = *(u32 *)(r1 + 0x24);
    r2 = *(u32 *)(r0 + 8);
    r0 = r1 + 0;
    r1 = 3;
    r0 = func_080D3914(r0, r1, r2, r3);
loc_0801DCC6:
    *(u32 *)(r4) = r5;
    return r0;
}

/* 0x0801DCD4 (68B) | game_state_Sub_0801DCD4 (orig: func_0801DCD4) | origin: wip | domain: game_state | HIGH / stanhash_map_tu */
void game_state_Sub_0801DCD4(s16 param_1) {
  func_080D3918();
  game_state_Sub_0801140C(*(s16 *)((param_1 + 0x00001038)));
  func_0800B120((*(u32 *)((param_1 + 0x00001038)) + 0x54));
}

/* 0x0801DD18 (12B) | game_state_vfunc_84 (orig: func_0801DD18) | origin: pure | domain: game_state | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 MapEngine_Sub_080A6138();
void game_state_vfunc_84(int arg0) {
  MapEngine_Sub_080A6138(*(u32 *)(arg0 + 4));
}

/* 0x0801DD24 (12B) | game_state_vfunc_88 (orig: func_0801DD24) | origin: pure | domain: game_state | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 MapEngine_Sub_080A6194();
void game_state_vfunc_88(int arg0) {
  MapEngine_Sub_080A6194(*(u32 *)(arg0 + 4));
}

/* 0x0801DD30 (12B) | game_state_vfunc_8C (orig: func_0801DD30) | origin: pure | domain: game_state | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 MapEngine_Sub_080A61F0();
void game_state_vfunc_8C(int arg0) {
  MapEngine_Sub_080A61F0(*(u32 *)(arg0 + 4));
}

/* 0x0801DD78 (12B) | game_state_vfunc_80 (orig: func_0801DD78) | origin: pure | domain: game_state | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 game_state_SetField_0x00_601C();
void game_state_vfunc_80(int arg0) {
  game_state_SetField_0x00_601C(*(u32 *)(arg0 + 4));
}

/* 0x0801DDCC (44B) | game_state_Sub_0801DDCC (orig: func_0801DDCC) | origin: pure | domain: game_state | HIGH / stanhash_map_tu */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 game_state_Sub_0809C5B4();
extern u32 code_809E804_Sub_080AA850();
void game_state_Sub_0801DDCC(int arg0,u32 arg1) {
  game_state_Sub_0809C5B4(*(int *)(arg0 + 0x00001038) + 0x000034D8,arg1);
  code_809E804_Sub_080AA850(*(u32 *)(arg0 + 4),arg1);
}

/* 0x0801DDF8 (44B) | game_state_Sub_0801DDF8 (orig: func_0801DDF8) | origin: pure | domain: game_state | HIGH / stanhash_map_tu */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 game_state_Sub_0809C5D0();
extern u32 code_809E804_Sub_080AA850();
void game_state_Sub_0801DDF8(int arg0,u32 arg1) {
  game_state_Sub_0809C5D0(*(int *)(arg0 + 0x00001038) + 0x000034D8,arg1);
  code_809E804_Sub_080AA850(*(u32 *)(arg0 + 4),arg1);
}

/* 0x0801DE24 (12B) | game_state_vfunc_AC (orig: func_0801DE24) | origin: pure | domain: game_state | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 Code_809E804_Sub_080A63B8();
void game_state_vfunc_AC(int arg0) {
  Code_809E804_Sub_080A63B8(*(u32 *)(arg0 + 4));
}

/* 0x0801DE3C (12B) | game_state_Sub_0801DE3C (orig: func_0801DE3C) | origin: pure | domain: game_state | HIGH / stanhash_map_tu */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 MapEngine_Sub_080AA8BC();
void game_state_Sub_0801DE3C(int arg0) {
  MapEngine_Sub_080AA8BC(*(u32 *)(arg0 + 4));
}

/* 0x0801DE48 (12B) | game_state_Sub_0801DE48 (orig: func_0801DE48) | origin: pure | domain: game_state | HIGH / stanhash_map_tu */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 game_state_Sub_080AA8DC();
void game_state_Sub_0801DE48(int arg0) {
  game_state_Sub_080AA8DC(*(u32 *)(arg0 + 4));
}

/* 0x0801DEB4 (464B) | game_state_Sub_0801DEB4 (orig: func_0801DEB4) | origin: wip | domain: game_state | HIGH / stanhash_map_tu */
u32 game_state_Sub_0801DEB4(int *param_1,short *param_2) {
  int iVar1;
  int iVar2;
  int iVar3;
  u32 uVar4;
  u32 *puVar5;
  int iVar6;
  int iVar7;
  u32 uVar8;
  int iVar9;
  u32 uVar10;
  int iVar11;
  int iVar12;
  u32 uVar13;
  u32 uVar14;
  bool bVar15;
  int iStack_3c;
  u32 uStack_38;
  int iStack_2c;
  iStack_3c = 0;
  uVar14 = 0;
  uStack_38 = 0;
  bVar15 = false;
  uVar10 = 0;
  do {
    uVar8 = 0;
    uVar13 = uVar10 + 1;
    iVar12 = 0x118;
    puVar5 = (u32 *)(uVar10 * 0xac + *(int *)(0x00001038 + (int)param_1) + 0x000009DC);
    do {
      if ((((*puVar5 & 0xff) >> 2 == 0x14) && ((*puVar5 & 0xfff) >> 8 == 5)) &&
         ((iVar1 = (uVar10 * 0x10 + 0xb8) - (int)param_2[1],
          iVar1 = (iVar12 - *param_2) * (iVar12 - *param_2) + iVar1 * iVar1, !bVar15 ||
          (iVar1 < iStack_3c)))) {
        bVar15 = true;
        uVar14 = uVar8;
        iStack_3c = iVar1;
        uStack_38 = uVar10;
      }
      iVar12 = iVar12 + 0x10;
      puVar5 = puVar5 + 1;
      uVar8 = uVar8 + 1;
    } while (uVar8 < 0x2b);
    uVar10 = uVar13;
  } while (uVar13 < 0x19);
  if (bVar15) {
    iVar1 = uVar14 + uStack_38 * 0x2b;
    func_0800A3C8(*(int *)(0x00001038 + (int)param_1) + 0x000009DC + iVar1 * 4);
    iVar12 = func_080D3910(param_1,*(u32 *)(*param_1 + 0x14));
    if (iVar12 == 2) {
      iVar6 = param_1[1];
      iVar12 = uStack_38 * 2 + 0x14;
      iVar1 = iVar1 + -0x2b;
      iVar11 = uStack_38 - 1;
      iStack_2c = 2;
      do {
        bVar15 = false;
        if ((((-1 < (int)uVar14) && (-1 < iVar11)) && ((int)uVar14 < 0x2b)) && (iVar11 < 0x19)) {
          bVar15 = true;
        }
        if (bVar15) {
          iVar9 = *(int *)(0x00001038 + (int)param_1) + 0x000009DC + iVar1 * 4;
        }
        else {
          iVar9 = 0;
        }
        if (iVar9 != 0) {
          iVar7 = *(int *)(0x00001038 + (int)param_1) + 0x000009DC;
          iVar2 = iVar11 + 1;
          bVar15 = false;
          if (((-1 < (int)uVar14) && (-1 < iVar2)) && (((int)uVar14 < 0x2b && (iVar2 < 0x19)))) {
            bVar15 = true;
          }
          if (bVar15) {
            iVar2 = iVar7 + (iVar2 * 0x2b + uVar14) * 4;
          }
          else {
            iVar2 = 0;
          }
          iVar3 = iVar11 + -1;
          bVar15 = false;
          if (((-1 < (int)uVar14) && (-1 < iVar3)) && (((int)uVar14 < 0x2b && (iVar3 < 0x19)))) {
            bVar15 = true;
          }
          if (bVar15) {
            iVar3 = iVar7 + (iVar3 * 0x2b + uVar14) * 4;
          }
          else {
            iVar3 = 0;
          }
          uVar4 = FieldPlot_Ctor_AF5C(iVar1 * 4 + iVar7,iVar2,iVar3);
          code_809E804_Sub_080AA6D0(iVar6,uVar14 * 2 + 0x22,iVar12,iVar9,uVar4);
        }
        iVar12 = iVar12 + 2;
        iVar1 = iVar1 + 0x2b;
        iVar11 = iVar11 + 1;
        iStack_2c = iStack_2c + -1;
      } while (-1 < iStack_2c);
    }
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  return (uVar4);
}

/* 0x0801E90C (404B) | game_state_Sub_0801E90C (orig: func_0801E90C) | origin: wip | domain: game_state | HIGH / stanhash_map_tu */
void game_state_Sub_0801E90C(int *param_1) {
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  u32 uVar9;
  int iVar10;
  int iVar11;
  u8 auStack_60 [4];
  int iStack_5c;
  u32 uStack_58;
  int iStack_54;
  u32 uStack_50;
  int iStack_4c;
  int aiStack_48 [3];
  int iStack_3c;
  int aiStack_38 [3];
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  iStack_2c = 0;
  iVar6 = 0;
  do {
    iVar1 = func_080D3914(param_1,iVar6,*(u32 *)(*param_1 + 0x40));
    iVar6 = iVar6 + 1;
    if ((iVar1 != 0) && (*(short *)(iVar1 + 4) == 2)) {
      func_080D3914(&iStack_5c,iVar1,*(u32 *)(*(int *)(iVar1 + 0x14) + 0xc));
      iStack_54 = iStack_5c;
      uStack_50 = uStack_58;
      uVar9 = uStack_50;
      iStack_4c = 0;
      aiStack_48[0] = ((iStack_5c << 0x10) >> 0x13) + -0x22 >> 1;
      piVar2 = &iStack_4c;
      if (0 < aiStack_48[0]) {
        piVar2 = aiStack_48;
      }
      iVar1 = *piVar2;
      aiStack_48[1] = 0x2a;
      (*(u16 *)&uStack_50) = (short)uStack_58;
      aiStack_48[2] = ((short)uStack_50 + -1 >> 3) + -0x22 >> 1;
      piVar2 = aiStack_48 + 1;
      if (aiStack_48[2] < 0x2a) {
        piVar2 = aiStack_48 + 2;
      }
      iVar11 = *piVar2;
      iStack_3c = 0;
      aiStack_38[0] = (iStack_5c >> 0x13) + -0x16 >> 1;
      piVar2 = &iStack_3c;
      if (0 < aiStack_38[0]) {
        piVar2 = aiStack_38;
      }
      aiStack_38[1] = 0x18;
      (*(u16 *)((u8 *)&uStack_50 + 2)) = (short)((u32)uStack_58 >> 0x10);
      aiStack_38[2] = ((*(u16 *)((u8 *)&uStack_50 + 2)) + -1 >> 3) + -0x16 >> 1;
      piVar4 = aiStack_38 + 1;
      if (aiStack_38[2] < 0x18) {
        piVar4 = aiStack_38 + 2;
      }
      iVar3 = *piVar4;
      uStack_50 = uVar9;
      if (*piVar2 <= iVar3) {
        iVar5 = iVar1 << 2;
        iVar7 = *piVar2;
        do {
          iVar10 = iVar7 + 1;
          if (iVar1 <= iVar11) {
            iVar8 = iVar5 + iVar7 * 0xac;
            iVar7 = iVar1;
            do {
              if ((*(u32 *)(*(int *)(0x00001038 + (int)param_1) + 0x000009DC + iVar8) & 0xff)
                  >> 2 == 0x15) {
                iStack_28 = iVar3;
                iStack_24 = iVar5;
                FieldPlot_Ctor_A4A4(auStack_60);
                iStack_2c = 1;
                iVar3 = iStack_28;
                iVar5 = iStack_24;
              }
              iVar8 = iVar8 + 4;
              iVar7 = iVar7 + 1;
            } while (iVar7 <= iVar11);
          }
          iVar7 = iVar10;
        } while (iVar10 <= iVar3);
      }
    }
  } while (iVar6 < 100);
  if (iStack_2c != 0) {
    if (*(int *)param_1[1] == 2) {
      func_080D391C((int *)param_1[1],*(u32 *)(0x00001048 + (int)param_1),
                      (u32)*(u8 *)(0x0000104C + (int)param_1),
                      0x1e - (u32)*(u8 *)(0x0000104C + (int)param_1));
    }
    else {
      uVar9 = *(u32 *)(0x00001050 + (int)param_1);
      iVar6 = *(int *)(0x00001038 + (int)param_1);
      iVar1 = code_0800E2E4_Sub_0800E324(iVar6 + 0x10);
      game_state_Sub_080171F8(uVar9,iVar6 + 0x14,iVar1 == 3);
    }
  }
}

/* 0x0801F14C (400B) | game_state_Sub_0801F14C (orig: func_0801F14C) | origin: wip | domain: game_state | HIGH / stanhash_map_tu */
void game_state_Sub_0801F14C(int *param_1) {
  u32 uVar1;
  u32 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  u32 uVar6;
  *(u8 *)(param_1 + 0x418) = 0;
  piVar5 = (int *)((int)param_1 + 0x0000105C);
  iVar3 = *piVar5;
  if ((iVar3 != 0) && (iVar3 != 0)) {
    func_080D3914(iVar3,3,*(u32 *)(*(int *)(iVar3 + 0x24) + 8));
  }
  *piVar5 = 0;
  iVar3 = func_080D3910(param_1,*(u32 *)(*param_1 + 0x14));
  if (iVar3 - 10U < 0x1e) {
    switch(*(u32 *)((iVar3 - 10U) * 4 + 0x0801F1A0) & 0xfffffffe) {
    case 0x801f218:
      piVar5 = (int *)((int)param_1 + 0x00001038);
      iVar3 = func_0800BF14(*piVar5 + 500);
      if (iVar3 != 2) {
      }
      uVar6 = func_0800BFC4(*piVar5 + 500);
      uVar6 = -(uVar6 & 0xff) >> 0x1f;
      break;
    case 0x801f248:
      uVar6 = (u32)(*(u8 *)(*(int *)((int)param_1 + 0x00001038) + 3) >> 7);
      break;
    case 0x801f258:
      uVar6 = *(u8 *)(*(int *)((int)param_1 + 0x00001038) + 4) & 1;
      break;
    case 0x801f26c:
      iVar3 = code_0800E2E4_Sub_0800E324(*(int *)((int)param_1 + 0x00001038) + 0x10);
      uVar6 = 0;
      if (iVar3 == 3) {
        uVar6 = 1;
      }
      break;
    case 0x801f2ca:
      goto case_0801F2CA;
    }
    uVar1 = CppRuntime_builtin_new(0x40);
    uVar2 = func_080D3910(param_1,*(u32 *)(*param_1 + 0x60));
    iVar3 = code_entities_681C_Ctor_4A00(uVar1,uVar2,uVar6,param_1,2,0x1b,0);
    param_1 = (int *)((int)param_1 + 0x0000105C);
    iVar4 = *param_1;
    if ((iVar3 != iVar4) && (iVar4 != 0)) {
      func_080D3914(iVar4,3,*(u32 *)(*(int *)(iVar4 + 0x24) + 8));
    }
    *param_1 = iVar3;
  }
case_0801F2CA: ;
}

/* 0x0801F3E4 (308B) | game_state_AutoPtrFactory_F3E4 (orig: func_0801F3E4) | origin: wip | domain: game_state | HIGH / vtable_algebra */
void game_state_AutoPtrFactory_F3E4(int *self) {
  u16 uVar1;
  int iVar2;
  u32 uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  u32 uStack_5c;
  u32 uStack_58;
  u32 uStack_54;
  u32 uStack_50;
  u32 uStack_4c;
  u32 uStack_48;
  u32 uStack_44;
  u32 uStack_40;
  int *piStack_3c;
  int iStack_38;
  u16 uStack_30;
  u8 auStack_28 [4];
  u16 *apuStack_24 [2];
  iVar2 = func_080D3910(self,*(u32 *)(*self + 0x14));
  if (iVar2 == 0x1d) {
    iVar2 = func_0800BFA4(*(int *)((int)self + 0x00001038) + 500);
    if (iVar2 == 0x5f) {
    }
    func_0800DF50(auStack_28);
    uVar1 = Article_GetIconId(auStack_28);
    piVar5 = (int *)(0x00001068 + (int)self);
    iVar2 = *piVar5;
    if (iVar2 != 0) {
      uVar3 = func_080D3910(self,*(u32 *)(*self + 100));
      code_0803EE94_Sub_0805E824(&piStack_3c,uVar3,uVar1,0x100);
      func_080D3918(&uStack_5c,piStack_3c,*(u16 *)(iStack_38 + (u32)uStack_30 * 4),
                      *(u32 *)(*piStack_3c + 0x10));
      LibC_memcpy(&uStack_5c,&uStack_5c,0x20);
      *(u32 *)(iVar2 + 0x28) = uStack_5c;
      *(u32 *)(iVar2 + 0x2c) = uStack_58;
      *(u32 *)(iVar2 + 0x30) = uStack_54;
      *(u32 *)(iVar2 + 0x34) = uStack_50;
      *(u32 *)(iVar2 + 0x38) = uStack_4c;
      *(u32 *)(iVar2 + 0x3c) = uStack_48;
      *(u32 *)(iVar2 + 0x40) = uStack_44;
      *(u32 *)(iVar2 + 0x44) = uStack_40;
      *(u8 *)(iVar2 + 0x48) = 1;
    }
    iVar2 = CppRuntime_builtin_new(0x4c);
    piVar4 = (int *)func_080D3910(self,*(u32 *)(*self + 100));
    code_809E804_82D8_Ctor_4740(iVar2,self,2,0x1b);
    *(u32 *)(iVar2 + 0x24) = 0x080E602C;
    iVar6 = *piVar4;
    func_080D3918(apuStack_24,piVar4,uVar1,*(u32 *)(iVar6 + 0xc));
    func_080D3918(iVar2 + 0x28,piVar4,*apuStack_24[0],*(u32 *)(iVar6 + 0x10));
    *(u8 *)(iVar2 + 0x48) = 1;
  }
  else {
    piVar5 = (int *)((int)self + 0x00001068);
    iVar2 = 0;
  }
  iVar6 = *piVar5;
  if ((iVar2 != iVar6) && (iVar6 != 0)) {
    func_080D3914(iVar6,3,*(u32 *)(*(int *)(iVar6 + 0x24) + 8));
  }
  *piVar5 = iVar2;
}

/* 0x0801F518 (216B) | game_state_Sub_0801F518 (orig: func_0801F518) | origin: wip | domain: game_state | MEDIUM / tu_interp */
void game_state_Sub_0801F518(int *param_1,int param_2) {
  char cVar1;
  unsigned int iVar2;
  s8 uVar3;
  int iVar5;
  int *piVar6;
  u32 uVar4;
  if (param_2 == 0x1d) {
    piVar6 = (int *)((int)param_1 + 0x00001038);
    cVar1 = func_0800BFC4(*piVar6 + 500);
    if (cVar1 == '\0') {
      FarmHouse_LightFireplace(*piVar6 + 500);
    }
  }
  else if (param_2 < 0x1e) {
    if (param_2 != 0x12) {
    }
    *(u8 *)(*(int *)((int)param_1 + 0x00001038) + 3) =
         *(u8 *)(*(int *)((int)param_1 + 0x00001038) + 3) | 0x80;
  }
  else {
    if (param_2 != 0x27) {
    }
    *(u8 *)(*(int *)((int)param_1 + 0x00001038) + 4) =
         *(u8 *)(*(int *)((int)param_1 + 0x00001038) + 4) | 1;
  }
  iVar2 = func_080D3910(param_1,*(u32 *)(*param_1 + 0x14));
  if (iVar2 == param_2) {
    *(u8 *)(param_1 + 0x418) = 1;
    uVar3 = CppRuntime_builtin_new(0x40);
    uVar4 = func_080D3910(param_1,*(u32 *)(*param_1 + 0x60));
    iVar2 = code_entities_681C_Ctor_4A00(uVar3,uVar4,2,param_1,2,0x1b,0);
    param_1 = (s16)(int *)((int)param_1 + 0x0000105C);
    iVar5 = (u32)*param_1;
    if ((iVar2 != iVar5) && (0 != iVar5)) {
      func_080D3914(iVar5,3,*(u32 *)(*(int *)(iVar5 + 0x24) + 8));
    }
    *param_1 = iVar2;
  }
}

/* 0x0801F5F0 (36B) | game_state_Sub_0801F5F0 (orig: func_0801F5F0) | origin: pure | domain: game_state | HIGH / stanhash_map_tu */
extern void func_0800C1A0();
extern void game_state_AutoPtrFactory_F3E4();
void game_state_Sub_0801F5F0(int param_1, u32 param_2) {
    func_0800C1A0(*(int *)(param_1 + 0x1038) + 500, param_2);
    game_state_AutoPtrFactory_F3E4(param_1);
}

/* 0x0801F614 (360B) | game_state_Sub_0801F614 (orig: func_0801F614) | origin: wip | domain: game_state | HIGH / stanhash_map_tu */
void game_state_Sub_0801F614(int *param_1) {
  u32 uVar1;
  int iVar2;
  int iVar3;
  u32 uVar4;
  int *piVar5;
  int iVar6;
  piVar5 = (int *)((int)param_1 + 0x0000106C);
  iVar2 = *piVar5;
  if ((iVar2 != 0) && (iVar2 != 0)) {
    func_080D3914(iVar2,3,*(u32 *)(*(int *)(iVar2 + 0x24) + 8));
  }
  *piVar5 = 0;
  piVar5 = (int *)((int)param_1 + 0x00001070);
  iVar2 = *piVar5;
  if ((iVar2 != 0) && (iVar2 != 0)) {
    func_080D3914(iVar2,3,*(u32 *)(*(int *)(iVar2 + 0x24) + 8));
  }
  *piVar5 = 0;
  iVar2 = func_080D3910(param_1,*(u32 *)(*param_1 + 0x14));
  if (iVar2 == 0) {
    iVar2 = code_0800E2E4_Sub_0800E324(*(int *)((int)param_1 + 0x00001038) + 0x10);
    if (iVar2 == 3) {
      uVar1 = CppRuntime_builtin_new(0x40);
      iVar6 = (int)param_1 + 0x00000F04;
      iVar2 = code_entities_681C_Ctor_4A00(uVar1,iVar6,1,param_1,3,0x1e,0);
      piVar5 = (int *)(0x0000106C + (int)param_1);
      iVar3 = *piVar5;
      if ((iVar2 != iVar3) && (iVar3 != 0)) {
        func_080D3914(iVar3,3,*(u32 *)(*(int *)(iVar3 + 0x24) + 8));
      }
      *piVar5 = iVar2;
      uVar1 = CppRuntime_builtin_new(0x40);
      uVar4 = 1;
    }
    else {
      uVar1 = CppRuntime_builtin_new(0x40);
      iVar6 = (int)param_1 + 0x00000F04;
      iVar2 = code_entities_681C_Ctor_4A00(uVar1,iVar6,0,param_1,3,0x1e,0);
      piVar5 = (int *)(0x0000106C + (int)param_1);
      iVar3 = *piVar5;
      if ((iVar2 != iVar3) && (iVar3 != 0)) {
        func_080D3914(iVar3,3,*(u32 *)(*(int *)(iVar3 + 0x24) + 8));
      }
      *piVar5 = iVar2;
      uVar1 = CppRuntime_builtin_new(0x40);
      uVar4 = 0;
    }
    iVar2 = code_entities_681C_Ctor_4A00(uVar1,iVar6,uVar4,param_1,3,0x1e,0);
    param_1 = (int *)((int)param_1 + 0x00001070);
    iVar3 = *param_1;
    if ((iVar2 != iVar3) && (iVar3 != 0)) {
      func_080D3914(iVar3,3,*(u32 *)(*(int *)(iVar3 + 0x24) + 8));
    }
    *param_1 = iVar2;
  }
}

/* 0x0801F77C (424B) | game_state_Sub_0801F77C (orig: func_0801F77C) | origin: wip | domain: game_state | HIGH / stanhash_map_tu */
void game_state_Sub_0801F77C(int *param_1) {
  char cVar1;
  u32 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  piVar5 = (int *)((int)param_1 + 0x00001074);
  iVar3 = *piVar5;
  if ((iVar3 != 0) && (iVar3 != 0)) {
    func_080D3914(iVar3,3,*(u32 *)(*(int *)(iVar3 + 0x24) + 8));
  }
  *piVar5 = 0;
  piVar5 = (int *)((int)param_1 + 0x00001078);
  iVar3 = *piVar5;
  if ((iVar3 != 0) && (iVar3 != 0)) {
    func_080D3914(iVar3,3,*(u32 *)(*(int *)(iVar3 + 0x24) + 8));
  }
  *piVar5 = 0;
  iVar3 = func_080D3910(param_1,*(u32 *)(*param_1 + 0x14));
  if (iVar3 == 2) {
    cVar1 = func_0800BFC4(*(int *)((int)param_1 + 0x00001038) + 500);
    if (cVar1 == '\0') {
    }
    uVar2 = CppRuntime_builtin_new(0x40);
    iVar3 = (int)param_1 + 0x00000F04;
  }
  else if (iVar3 < 3) {
    if (iVar3 != 0) {
    }
    if (-1 < *(char *)(*(int *)((int)param_1 + 0x00001038) + 3)) {
    }
    uVar2 = CppRuntime_builtin_new(0x40);
    iVar3 = (int)param_1 + 0x00000F04;
  }
  else if (iVar3 == 3) {
    iVar3 = code_0800E2E4_Sub_0800E324(*(int *)((int)param_1 + 0x00001038) + 0x10);
    if (iVar3 != 3) {
    }
    uVar2 = CppRuntime_builtin_new(0x40);
    iVar3 = (int)param_1 + 0x00000F04;
  }
  else {
    if (iVar3 != 7) {
    }
    if ((*(u8 *)(*(int *)((int)param_1 + 0x00001038) + 4) & 1) != 0) {
      uVar2 = CppRuntime_builtin_new(0x40);
      iVar3 = code_entities_681C_Ctor_4A00(uVar2,(int)param_1 + 0x00000F04,2,param_1,2,0x1f,0);
      piVar5 = (int *)((int)param_1 + 0x00001078);
      iVar4 = *piVar5;
      if ((iVar3 != iVar4) && (iVar4 != 0)) {
        func_080D3914(iVar4,3,*(u32 *)(*(int *)(iVar4 + 0x24) + 8));
      }
      *piVar5 = iVar3;
    }
    iVar3 = code_0800E2E4_Sub_0800E324(*(int *)((int)param_1 + 0x00001038) + 0x10);
    if (iVar3 != 3) {
    }
    uVar2 = CppRuntime_builtin_new(0x40);
    iVar3 = (int)param_1 + 0x00000F04;
  }
  iVar3 = code_entities_681C_Ctor_4A00(uVar2,iVar3,2,param_1,2,0x1f,0);
  param_1 = (int *)((int)param_1 + 0x00001074);
  iVar4 = *param_1;
  if ((iVar3 != iVar4) && (iVar4 != 0)) {
    func_080D3914(iVar4,3,*(u32 *)(*(int *)(iVar4 + 0x24) + 8));
  }
  *param_1 = iVar3;
}

/* 0x0801FAA8 (16B) | game_state_Sub_0801FAA8 (orig: func_0801FAA8) | origin: pure | domain: game_state | HIGH / stanhash_map_tu */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D3914();
u32 game_state_Sub_0801FAA8(int *arg0,u32 arg1) {
  return func_080D3914(arg0,arg1,*(u32 *)(*arg0 + 0x40));
}

/* 0x0801FAB8 (16B) | game_state_Sub_0801FAB8 (orig: func_0801FAB8) | origin: pure | domain: game_state | HIGH / stanhash_map_tu */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D3914();
u32 game_state_Sub_0801FAB8(int *arg0,u32 arg1) {
  return func_080D3914(arg0,arg1,*(u32 *)(*arg0 + 0x44));
}

/* 0x0801FAC8 (180B) | game_state_Sub_0801FAC8 (orig: func_0801FAC8) | origin: wip | domain: game_state | HIGH / stanhash_map_tu */
void game_state_Sub_0801FAC8(int param_1,int param_2) {
  u32 uVar1;
  int *piVar2;
  u32 uVar3;
  int iVar4;
  int iVar5;
  iVar5 = 0;
  if (param_2 == 0) {
    iVar5 = 0x00000EA4 + param_1;
  }
  else if (param_2 == 1) {
    iVar5 = 0x00000ED4 + param_1;
  }
  if (iVar5 != 0) {
    iVar4 = 0x20;
    if (**(int **)(param_1 + 4) == 2) {
      uVar3 = 0;
      for (piVar2 = (int *)(param_1 + 8); piVar2 != (int *)(param_1 + 0x198); piVar2 = piVar2 + 1) {
        if ((*piVar2 != 0) && (*(short *)(*piVar2 + 4) == 2)) {
          uVar3 = uVar3 + 1;
        }
      }
      if (10 < uVar3 + 10) {
        if (uVar3 < 0x16) {
          iVar4 = 0x20 - uVar3;
        }
        else {
          iVar4 = 10;
        }
      }
    }
    uVar1 = CppRuntime_builtin_new(0x0000046C);
    iVar5 = hardware_Sub_0803AEA0(uVar1,param_1,iVar5,param_2,iVar4);
    piVar2 = (int *)(param_1 + 0x0000107C);
    iVar4 = *piVar2;
    if ((iVar5 != iVar4) && (iVar4 != 0)) {
      hardware_Sub_0803B0A8(iVar4,3);
    }
    *piVar2 = iVar5;
  }
}

/* 0x0801FB7C (96B) | game_state_Sub_0801FB7C (orig: func_0801FB7C) | origin: wip | domain: game_state | HIGH / stanhash_map_tu */
u32 game_state_Sub_0801FB7C(u32 *param_1,u32 param_2,u32 param_3,u8 param_4) {
  u32 uVar1;
  u32 auStack_20 [3];
  uVar1 = CppRuntime_builtin_new(0xbc);
  auStack_20[0] = code_809E804_831C_Ctor(uVar1,param_2);
  uVar1 = CppRuntime_builtin_new(0x000010CC);
  uVar1 = game_state_AutoPtrFactory_75B4(uVar1,param_2,param_3,auStack_20,param_4);
  *param_1 = uVar1;
  return param_1;
}

/* 0x0801FD0C (36B) | game_state_vfunc_3C (orig: func_0801FD0C) | origin: pure | domain: game_state | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D3914();
void game_state_vfunc_3C(int arg0,int arg1) {
  int val;
  int *mem_ptr;
  arg0 += 8;
  mem_ptr = (int *)(arg0 + arg1 * 4);
  val = *mem_ptr;
  if (val != 0) {
    func_080D3914(val,3,*(u32 *)(*(int *)(val + 0x14) + 8));
    *mem_ptr = 0;
  }
}

/* 0x0801FD3C (12B) | game_state_vfunc_28 (orig: func_0801FD3C) | origin: pure | domain: game_state | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 game_state_Sub_080A5A9C();
u32 game_state_vfunc_28(int arg0) {
  return game_state_Sub_080A5A9C(*(u32 *)(arg0 + 4));
}

/* 0x0801FD60 (12B) | game_state_vfunc_24 (orig: func_0801FD60) | origin: pure | domain: game_state | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 game_state_Sub_080A59BC();
void game_state_vfunc_24(int arg0) {
  game_state_Sub_080A59BC(*(u32 *)(arg0 + 4));
}

/* 0x0801FD6C (12B) | game_state_vfunc_20 (orig: func_0801FD6C) | origin: pure | domain: game_state | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 Code_809E804_Sub_080A5960();
void game_state_vfunc_20(int arg0) {
  Code_809E804_Sub_080A5960(*(u32 *)(arg0 + 4));
}

/* 0x08033B84 (16B) | game_state_Sub_08033B84 (orig: func_08033B84) | origin: pure | domain: game_state | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_entities_080320DC_Sub_08034BFC();
void game_state_Sub_08033B84(int arg0) {
  if (*(int *)(arg0 + 0x10) != 0) {
    code_entities_080320DC_Sub_08034BFC();
  }
}

/* 0x08034C4C (24B) | game_state_Sub_08034C4C (orig: func_08034C4C) | origin: pure | domain: game_state | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 game_state_Sub_08033B84();
void game_state_Sub_08034C4C(int arg0,u32 arg1,u32 arg2) {
  game_state_Sub_08033B84(arg0,*(u8 *)(arg0 + 0x30),arg1,arg2);
}

/* 0x080387C8 (16B) | game_state_Sub_080387C8 (orig: func_080387C8) | origin: pure | domain: game_state | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 game_state_GetField_0x0C();
void game_state_Sub_080387C8(int arg0) {
  if (*(int *)(arg0 + 0x10) != 0) {
    game_state_GetField_0x0C();
  }
}

/* 0x080387D8 (20B) | game_state_Sub_080387D8 (orig: func_080387D8) | origin: pure | domain: game_state | MEDIUM / tu_interp */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 game_state_Sub_08038EA0();
u32 game_state_Sub_080387D8(int arg0) {
  u32 val;
  if (*(int *)(arg0 + 0x10) == 0) {
    val = 1;
  }
  else {
    val = game_state_Sub_08038EA0();
  }
  return val;
}

/* 0x080387EC (16B) | game_state_Wrap_Wrap_Dtor (orig: func_080387EC) | origin: pure | domain: game_state | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_809E804_82D8_Wrap_Dtor();
void game_state_Wrap_Wrap_Dtor(int arg0) {
  if (*(int *)(arg0 + 0x10) != 0) {
    code_809E804_82D8_Wrap_Dtor();
  }
}

/* 0x08038E90 (16B) | game_state_GetField_0x0C (orig: func_08038E90) | origin: pure | domain: game_state | MEDIUM / graph_algebra */
void game_state_GetField_0x0C(u8 **a) { u8 *p = a[3]; *(u32 *)(p + 0x4c) = 0x90 << 17; p[0x50] = 1; }

/* 0x08038EA0 (24B) | game_state_Sub_08038EA0 (orig: func_08038EA0) | origin: pure | domain: game_state | MEDIUM / graph_algebra */
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
u32 game_state_Sub_08038EA0(int arg0) {
  int p = *(int *)(arg0 + 0xc);
  return *(u8 *)(p + 0x50) == 0;
}

/* 0x0803B2A8 (192B) | game_state_Sub_0803B2A8 (orig: func_0803B2A8) | origin: wip | domain: game_state | MEDIUM / graph_algebra */
void game_state_Sub_0803B2A8(u32 *param_1) {
    int * piVar4;
    int * piVar6;
    u32 uVar8;
    u32 uStack_2c;
    u32 uVar2;
  BOOL uVar1;
  int iVar3;
  register u32 uVar5;
  register u32 uVar9;
  register u32 uVar7;
  uVar5 = (u32)*(u8 *)(param_1 + 0x39);
  piVar4 = (int *)(uVar5 * 0x10 + 0x080F1948);
  uVar8 = (s16)0;
    uStack_2c = 2;
  if ((uVar5 == 0) || (uVar5 != 1)) {
  uVar9 = (s16)0;
  }
  else {
    uStack_2c = 3;
  }
  uVar1 = func_080D3910((int *)*param_1,*(u32 *)(*(int *)*param_1 + 0x18));
  uVar2 = func_080D3910((int *)*param_1,*(u32 *)(*(int *)*param_1 + 0x1c));
  uVar5 = (s16)param_1[0x3a];
  uVar7 = 0;
  if (0 != uVar5) {
    param_1 = 0x3b + param_1;
    piVar6 = piVar4;
    do {
      iVar3 = code_0803EE94_Sub_0805E8F0(param_1);
      if (iVar3 * 0x20000000 < 0) {
        code_0803A8A4_Sub_0803B474(param_1,uVar1,uVar2);
      }
      uVar9 += 1;
      if (uStack_2c <= (u32)uVar9) {
        uVar8 = uVar8 + 1;
        piVar6 = piVar6 + 2;
        if ((u16)uVar8 > 1) {
          piVar6 = piVar4;
          uVar8 = 0;
        }
        uVar9 = 0;
      }
      *(param_1 + 5) = param_1[5] + *piVar6;
      param_1[6] = param_1[6] + piVar6[1];
      param_1 = param_1 + 7;
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar5);
  }
}

/* 0x0803B6B8 (68B) | game_state_Sub_0803B6B8 (orig: func_0803B6B8) | origin: pure | domain: game_state | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 LibC_memcpy();
extern u32 LibC_strcpy();
extern u32 LibC_strlen();
void game_state_Sub_0803B6B8(int arg0,int arg1,u32 arg2) {
  u32 val;
  u8 auStack_2c [24];
  val = LibC_strlen(arg2);
  if (0x16 < val) {
    val = 0x16;
  }
  LibC_memcpy(auStack_2c,arg2,val);
  auStack_2c[val] = 0;
  LibC_strcpy(arg1 * 0x18 + arg0 + 8,auStack_2c);
}

/* 0x08050C2C (56B) | game_state_Sub_08050C2C (orig: func_08050C2C) | origin: wip | domain: game_state | MEDIUM / graph_algebra */
void game_state_Sub_08050C2C(int param_1,u32 param_2) {
  if (param_2 < *(short *)(param_1 + 0x00000504 + 0x20)) {
    *(u8 *)(param_1 + 0x500) = 1;
    code_0803EE94_Sub_0805E860(param_1 + 0x00000534,param_2);
  }
  else {
    game_state_SetField_0x00_0C64(param_1);
  }
}

/* 0x08050C64 (12B) | game_state_SetField_0x00_0C64 (orig: func_08050C64) | origin: pure | domain: game_state | MEDIUM / graph_algebra */
void game_state_SetField_0x00_0C64(u8 *a) { a[0x500] = 0; }

/* 0x08050E80 (12B) | game_state_Sub_08050E80 (orig: func_08050E80) | origin: pure | domain: game_state | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 game_state_Sub_08050C2C();
void game_state_Sub_08050E80(u32 *arg0) {
  game_state_Sub_08050C2C(*arg0);
}

/* 0x08050E8C (12B) | game_state_Sub_08050E8C (orig: func_08050E8C) | origin: pure | domain: game_state | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 game_state_SetField_0x00_0C64();
void game_state_Sub_08050E8C(u32 *arg0) {
  game_state_SetField_0x00_0C64(*arg0);
}

/* 0x08094A3C (132B) | game_state_Sub_08094A3C (orig: func_08094A3C) | origin: wip | domain: game_state | MEDIUM / graph_algebra */
void game_state_Sub_08094A3C(u8 *param_1,u8 *param_2) {
  u8 bVar1;
  int iVar2;
  int iVar3;
  u32 uVar4;
  int *piVar5;
  u32 *puVar6;
  u32 uVar7;
  iVar2 = 0x00000814;
  uVar7 = 0;
  do {
    piVar5 = (int *)(param_1 + uVar7 * 0x204 + 4);
    puVar6 = (u32 *)(piVar5 + 1);
    iVar3 = *piVar5;
    func_080D3914(puVar6,piVar5 + iVar3 + 1,0x03000C08);
    uVar7 = uVar7 + 1;
    for (; puVar6 != (u32 *)(piVar5 + iVar3 + 1); puVar6 = puVar6 + 1) {
      uVar4 = *puVar6;
      bVar1 = *param_2;
      if (bVar1 < 0x80) {
        *(u32 *)(param_2 + (u32)bVar1 * 8 + 4) =
             *(u32 *)(param_1 + (uVar4 & 0x7f) * 8 + iVar2);
        *(u16 *)(param_2 + (u32)bVar1 * 8 + 4 + 4) =
             *(u16 *)((int)(param_1 + (uVar4 & 0x7f) * 8 + iVar2) + 4);
        *param_2 = bVar1 + 1;
      }
    }
  } while (uVar7 < 4);
  *param_1 = 0;
}

/* 0x0809A8AC (196B) | game_state_Sub_0809A8AC (orig: func_0809A8AC) | origin: wip | domain: game_state | MEDIUM / graph_algebra */
u32 game_state_Sub_0809A8AC(u16 *param_1) {
  short sVar1;
  u32 uVar2;
  short sVar3;
  u16 *puVar4;
  int iVar5;
  u16 *puVar6;
  short *psVar7;
  u32 uVar8;
  int iVar9;
  uVar2 = 0xFFFFF000;
  psVar7 = 0x0810110C;
  iVar9 = 0x7f;
  puVar6 = param_1;
  do {
    *puVar6 = 0;
    puVar6[9] = (u16)uVar2 & puVar6[9];
    *(u8 *)((int)puVar6 + 0x13) = *(u8 *)((int)puVar6 + 0x13) & 0xef;
    iVar9 = iVar9 + -1;
    iVar5 = 7;
    puVar4 = puVar6 + 8;
    do {
      *puVar4 = 0;
      puVar4 = puVar4 + -1;
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
    puVar6 = puVar6 + 10;
  } while (iVar9 != -1);
  *(u8 *)(param_1 + 0x500) = 0;
  iVar9 = 0x00000A01;
  *(u8 *)((int)param_1 + 0x00000A01) = 0;
  *(u8 *)((int)param_1 + iVar9 + 1) = 0;
  *(u8 *)((int)param_1 + iVar9 + 2) = 0;
  *(u8 *)((int)param_1 + iVar9 + 3) = 0;
  *(u8 *)((int)param_1 + iVar9 + 4) = 0;
  sVar3 = 0;
  uVar8 = 0;
  while( true ) {
    sVar1 = *psVar7;
    if (sVar1 == 0) break;
    if (sVar1 != sVar3) {
      param_1[uVar8 * 10] = sVar1;
      uVar8 = uVar8 + 1 & 0xffff;
      sVar3 = *psVar7;
    }
    psVar7 = psVar7 + 10;
  }
  *(char *)((int)param_1 + 0x00000A06) = (char)uVar8;
  return param_1;
}

/* 0x0809AAD4 (52B) | game_state_Sub_0809AAD4 (orig: func_0809AAD4) | origin: pure | domain: game_state | MEDIUM / graph_algebra */
struct Entry9AAD4 {
    u16 id;
    u8 pad[0x11];
    u8 b0:4;
    s8 flg:1;
};
int game_state_Sub_0809AAD4(int param_1) {
    struct Entry9AAD4 *e = (struct Entry9AAD4 *)param_1;
    int base;
    int res = 0;
    int i;
    
    base = (int)e;
    for (i = 0; i < *(u8 *)(base + 0xa06); i++) {
        if (e->id <= 0xab && e->flg < 0) {
            res++;
        }
        e++;
    }
    return res;
}

/* 0x0809AB8C (76B) | game_state_Sub_0809AB8C (orig: func_0809AB8C) | origin: pure | domain: game_state | MEDIUM / graph_algebra */
struct S {
    u32 a;
    u8 b0:1;
    u8 b1:1;
    u32 c;
    u8 pad1[0xfc - 0xc];
    u32 d;
    u8 pad2[0x120 - 0x100];
    u32 e0, e1, e2, e3;
};
extern void game_state_Sub_0809AE6C();
struct S *game_state_Sub_0809AB8C(struct S *p) {
    p->a = 500;
    p->b0 = 0;
    p->b1 = 0;
    p->c = 0;
    p->d = 0;
    p->e0 = 0;
    p->e1 = 0;
    p->e2 = 0;
    p->e3 = 0;
    game_state_Sub_0809AE6C(p);
    return p;
}

/* 0x0809ADA8 (196B) | game_state_Sub_0809ADA8 (orig: func_0809ADA8) | origin: wip | domain: game_state | MEDIUM / graph_algebra */
void game_state_Sub_0809ADA8(int param_1) {
  u32 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  if (*(int *)(param_1 + 8) != 0) {
    uVar1 = *(u32 *)(param_1 + 8 + (*(int *)(param_1 + 8) + -1) * 8 + 4);
    if (*(u32 *)(param_1 + 0x120) < uVar1) {
      *(u32 *)(param_1 + 0x120) = uVar1;
    }
    uVar1 = *(u32 *)(param_1 + 8 + (*(int *)(param_1 + 8) + -1) * 8 + 8);
    if (*(u32 *)(param_1 + 0x124) < uVar1) {
      *(u32 *)(param_1 + 0x124) = uVar1;
    }
  }
  piVar6 = (int *)(param_1 + 8);
  uVar1 = *(u32 *)(param_1 + 8);
  if (0x1d < uVar1) {
    do {
      if (uVar1 != 0) {
        piVar3 = (int *)(param_1 + 0x14);
        if (piVar3 != piVar6 + uVar1 * 2 + 1) {
          piVar7 = (int *)(param_1 + 0xc);
          for (iVar5 = (int)(piVar6 + uVar1 * 2 + 1) - (int)piVar3 >> 3; 0 < iVar5;
              iVar5 = iVar5 + -1) {
            iVar2 = *piVar3;
            iVar4 = piVar3[1];
            piVar3 = piVar3 + 2;
            *piVar7 = iVar2;
            piVar7[1] = iVar4;
            piVar7 = piVar7 + 2;
          }
        }
        *piVar6 = *piVar6 + -1;
      }
      uVar1 = *(u32 *)(param_1 + 8);
    } while (0x1d < uVar1);
  }
  if (uVar1 < 0x1e) {
    piVar6 = piVar6 + uVar1 * 2 + 1;
    if (piVar6 != (int *)0x0) {
      *piVar6 = 0;
      piVar6[1] = 0;
    }
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  }
}

/* 0x0809AE6C (428B) | game_state_Sub_0809AE6C (orig: func_0809AE6C) | origin: wip | domain: game_state | MEDIUM / graph_algebra */
void game_state_Sub_0809AE6C(int param_1) {
  u32 uVar1;
  u32 *puVar2;
  int *piVar3;
  u32 *puVar4;
  u32 uVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  u32 *puVar9;
  if (*(int *)(param_1 + 8) != 0) {
    uVar1 = *(u32 *)(param_1 + 8 + (*(int *)(param_1 + 8) + -1) * 8 + 4);
    if (*(u32 *)(param_1 + 0x120) < uVar1) {
      *(u32 *)(param_1 + 0x120) = uVar1;
    }
    uVar1 = *(u32 *)(param_1 + 8 + (*(int *)(param_1 + 8) + -1) * 8 + 8);
    if (*(u32 *)(param_1 + 0x124) < uVar1) {
      *(u32 *)(param_1 + 0x124) = uVar1;
    }
  }
  puVar2 = (u32 *)(param_1 + 0xfc);
  if (*puVar2 != 0) {
    if (*(u32 *)(param_1 + 0x128) < puVar2[(*puVar2 - 1) * 2 + 1]) {
      *(u32 *)(param_1 + 0x128) = puVar2[(*puVar2 - 1) * 2 + 1];
    }
    if (*(u32 *)(param_1 + 300) < puVar2[(*puVar2 - 1) * 2 + 2]) {
      *(u32 *)(param_1 + 300) = puVar2[(*puVar2 - 1) * 2 + 2];
    }
  }
  piVar3 = (int *)(param_1 + 8);
  piVar8 = (int *)(param_1 + 0xc);
  if (3 < *puVar2) {
    do {
      if (*puVar2 != 0) {
        puVar4 = (u32 *)(param_1 + 0x108);
        if (puVar4 != puVar2 + *puVar2 * 2 + 1) {
          puVar9 = (u32 *)(param_1 + 0x100);
          for (iVar7 = (int)(puVar2 + *puVar2 * 2 + 1) - (int)puVar4 >> 3; 0 < iVar7;
              iVar7 = iVar7 + -1) {
            uVar1 = *puVar4;
            uVar5 = puVar4[1];
            puVar4 = puVar4 + 2;
            *puVar9 = uVar1;
            puVar9[1] = uVar5;
            puVar9 = puVar9 + 2;
          }
        }
        *puVar2 = *puVar2 - 1;
      }
    } while (3 < *puVar2);
  }
  if (*puVar2 < 4) {
    puVar4 = puVar2 + *puVar2 * 2 + 1;
    if (puVar4 != (u32 *)0x0) {
      *puVar4 = 0;
      puVar4[1] = 0;
    }
    *puVar2 = *puVar2 + 1;
  }
  if (*(int *)(param_1 + 8) == 0) {
    piVar8 = piVar3 + *piVar3 * 2 + 1;
    for (iVar7 = 1 - *piVar3; iVar7 != 0; iVar7 = iVar7 + -1) {
      if (piVar8 != (int *)0x0) {
        *piVar8 = 0;
        piVar8[1] = 0;
      }
      piVar8 = piVar8 + 2;
    }
    *piVar3 = 1;
  }
  else {
    iVar7 = 1;
    do {
      *piVar8 = 0;
      piVar8[1] = 0;
      piVar8 = piVar8 + 2;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    for (piVar6 = piVar8; piVar6 != piVar3 + *piVar3 * 2 + 1; piVar6 = piVar6 + 2) {
    }
    *piVar3 = *piVar3 - ((int)(piVar3 + *piVar3 * 2 + 1) - (int)piVar8 >> 3);
  }
}

/* 0x0809C144 (28B) | game_state_Sub_0809C144 (orig: func_0809C144) | origin: pure | domain: game_state | MEDIUM / graph_algebra */
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
u8 *game_state_Sub_0809C144(u8 *arg0) {
  u32 i = 0;
  u8 val = 0;
  u8 *p = arg0;
  do {
    *p = val;
    p[0xc] = val;
    p[6] = val;
    p++;
    i++;
  } while (i <= 5);
  return arg0;
}

/* 0x0809C4E4 (8B) | game_state_SetField_0x00_C4E4 (orig: func_0809C4E4) | origin: pure | domain: game_state | MEDIUM / graph_algebra */
void game_state_SetField_0x00_C4E4(u32 *arg0) {
    *arg0 = 0;
}

/* 0x0809C4EC (36B) | game_state_Sub_0809C4EC (orig: func_0809C4EC) | origin: wip | domain: game_state | MEDIUM / tu_interp */
u32 game_state_Sub_0809C4EC(u32 *param_1,u32 param_2) {
  u32 uVar1;
  uVar1 = 0;
  if (param_2 < 0xe) {
    uVar1 = *param_1 & 1 << (param_2 & 0x1f);
    uVar1 = (-uVar1 | uVar1) >> 0x1f;
  }
  return uVar1 ^ 1;
}

/* 0x0809C510 (164B) | game_state_Sub_0809C510 (orig: func_0809C510) | origin: wip | domain: game_state | MEDIUM / tu_interp */
u32 game_state_Sub_0809C510(u32 *param_1,u32 *param_2,u32 param_3,char param_4) {
  u8 bVar1;
  u8 bVar2;
  u32 uVar3;
  int iVar4;
  u32 *puVar5;
  u32 uVar6;
  u32 uVar7;
  uVar3 = 0;
  if (param_3 < 0xe) {
    uVar3 = *param_2 & 1 << (param_3 & 0x1f);
    uVar3 = (-uVar3 | uVar3) >> 0x1f;
  }
  if (uVar3 == 0) {
    if ((param_3 == 0xd) && (param_4 != '\0')) {
      uVar3 = (u32)*(u8 *)(0x081036D4 + 0xa4);
      uVar7 = (u32)*(u8 *)(0x081036D4 + 0xa5);
      uVar6 = 0x08107094;
    }
    else {
      puVar5 = (u32 *)(param_3 * 0xc + 0x081036D4);
      uVar3 = (u32)*(u8 *)(puVar5 + 2);
      uVar7 = (u32)*(u8 *)((int)puVar5 + 9);
      uVar6 = *puVar5;
    }
  }
  else {
    if ((param_3 != 0xd) || (param_4 == '\0')) {
      iVar4 = param_3 * 0xc + 0x081036D4;
      bVar1 = *(u8 *)(iVar4 + 8);
      bVar2 = *(u8 *)(iVar4 + 9);
      *param_1 = *(u32 *)(param_3 * 0xc + 0x081036D4 + 4);
      param_1[1] = (u32)bVar1;
      param_1[2] = (u32)bVar2;
      goto LAB_0809c5a6;
    }
    uVar3 = (u32)*(u8 *)(0x081036D4 + 0xa4);
    uVar7 = (u32)*(u8 *)(0x081036D4 + 0xa5);
    uVar6 = 0x081070AC;
  }
  *param_1 = uVar6;
  param_1[1] = uVar3;
  param_1[2] = uVar7;
LAB_0809c5a6:
  return param_1;
}

/* 0x0809C5B4 (28B) | game_state_Sub_0809C5B4 (orig: func_0809C5B4) | origin: pure | domain: game_state | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
void game_state_Sub_0809C5B4(u32 *arg0,u32 arg1) {
  if (arg1 < 0xe) {
    *arg0 = *arg0 | 1 << (arg1 & 0x1f);
  }
}

/* 0x0809C5D0 (28B) | game_state_Sub_0809C5D0 (orig: func_0809C5D0) | origin: pure | domain: game_state | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
void game_state_Sub_0809C5D0(u32 *arg0,u32 arg1) {
  if (arg1 < 0xe) {
    *arg0 = *arg0 & ~(1 << (arg1 & 0x1f));
  }
}

/* 0x0809C5F4 (12B) | game_state_GetField_0x00_C5F4 (orig: func_0809C5F4) | origin: pure | domain: game_state | MEDIUM / graph_algebra */
u32 game_state_GetField_0x00_C5F4(int *arg0) {
    int v = arg0[0];
    return ((u32)(-v | v)) >> 31;
}

/* 0x0809C600 (68B) | game_state_Sub_0809C600 (orig: func_0809C600) | origin: wip | domain: game_state | MEDIUM / tu_interp */
void game_state_Sub_0809C600(u32 *param_1,u16 param_2) {
  int iVar1;
  u32 uVar2;
  u16 *puVar3;
  int iVar4;
  u16 auStack_10 [2];
  auStack_10[0] = param_2;
  iVar4 = (int)param_1 + *param_1 * 2 + 4;
  iVar1 = code_linkonce_76F8_Sub_080E3DB4(param_1 + 1,iVar4,auStack_10);
  if ((iVar1 == iVar4) & (uVar2 = *param_1, uVar2 < 3)) {
    puVar3 = (u16 *)((int)param_1 + uVar2 * 2 + 4);
    if (puVar3 != (u16 *)0x0) {
      *puVar3 = auStack_10[0];
    }
    *param_1 = uVar2 + 1;
  }
}

/* 0x0809C644 (80B) | game_state_Sub_0809C644 (orig: func_0809C644) | origin: wip | domain: game_state | MEDIUM / tu_interp */
void game_state_Sub_0809C644(int *param_1,u16 param_2) {
    s32 iVar1;
    unsigned int iVar3;
    u16 auStack_10 [2];
  register u16 iVar2;
  auStack_10[0] = param_2;
  iVar3 = (int)param_1 + *param_1 * 2 + 4;
  iVar1 = code_linkonce_76F8_Sub_080E3E28(param_1 + 1,iVar3,auStack_10);
  if ((iVar1 != iVar3) && (*param_1 != 0)) {
    iVar3 = (int)param_1 + *param_1 * 2 + 4;
    iVar2 = iVar1 + 2;
    if ((iVar2 != iVar3) && (iVar2 != iVar3)) {
      LibC_memmove(iVar1,iVar2,iVar3 - iVar2);
    }
    *param_1 = *param_1 + -1;
  }
}

/* 0x0809C694 (24B) | game_state_Sub_0809C694 (orig: func_0809C694) | origin: pure | domain: game_state | MEDIUM / tu_interp */
int game_state_Sub_0809C694(u16 *a, u16 b) { return a[6] == b; }

/* 0x0809C6AC (4B) | game_state_SetField_0x0C (orig: func_0809C6AC) | origin: pure | domain: game_state | MEDIUM / tu_interp */
void game_state_SetField_0x0C(u8 *arg0, u16 arg1) {
    *(u16 *)(arg0 + 12) = arg1;
}

/* 0x0809C6B0 (12B) | game_state_SetField_0x0C_C6B0 (orig: func_0809C6B0) | origin: pure | domain: game_state | MEDIUM / tu_interp */
void game_state_SetField_0x0C_C6B0(u16 *a) { u32 v; v = 0xFFFF; a[6] = v; }

/* 0x0809C6BC (1724B) | game_state_Sub_0809C6BC (orig: func_0809C6BC) | origin: wip | domain: game_state | MEDIUM / graph_algebra */
u32 game_state_Sub_0809C6BC(u32 *param_1) {
  u16 uVar1;
  u32 uVar2;
  u32 uVar3;
  u16 *puVar4;
  *param_1 = 0;
  *(short *)(param_1 + 3) = (short)0x0000FFFF;
  *(u8 *)((int)param_1 + 0xe) = 0;
  *(u8 *)((int)param_1 + 0xf) = 0;
  *(u8 *)(param_1 + 4) = 0;
  *(u8 *)((int)param_1 + 0x11) = *(u8 *)((int)param_1 + 0x11) & 0x80;
  uVar2 = 0xFFFE7FFF;
  param_1[4] = param_1[4] & 0xFFFE7FFF;
  *(u8 *)((int)param_1 + 0x12) = *(u8 *)((int)param_1 + 0x12) & 0x81;
  uVar1 = (u16)0xFFFFFE7F;
  *(u16 *)((int)param_1 + 0x12) = uVar1 & *(u16 *)((int)param_1 + 0x12);
  *(u8 *)((int)param_1 + 0x13) = *(u8 *)((int)param_1 + 0x13) & 1;
  *(u8 *)(param_1 + 5) = *(u8 *)(param_1 + 5) & 0x80;
  *(u16 *)(param_1 + 5) = uVar1 & *(u16 *)(param_1 + 5);
  *(u8 *)((int)param_1 + 0x15) = *(u8 *)((int)param_1 + 0x15) & 0x81;
  param_1[5] = param_1[5] & uVar2;
  *(u8 *)((int)param_1 + 0x16) = *(u8 *)((int)param_1 + 0x16) & 0x81;
  *(u16 *)((int)param_1 + 0x16) = uVar1 & *(u16 *)((int)param_1 + 0x16);
  *(u8 *)((int)param_1 + 0x17) = *(u8 *)((int)param_1 + 0x17) & 1;
  *(u8 *)(param_1 + 6) = *(u8 *)(param_1 + 6) & 0x80;
  *(u16 *)(param_1 + 6) = uVar1 & *(u16 *)(param_1 + 6);
  *(u8 *)((int)param_1 + 0x19) = *(u8 *)((int)param_1 + 0x19) & 0x81;
  param_1[6] = param_1[6] & uVar2;
  *(u8 *)((int)param_1 + 0x1a) = *(u8 *)((int)param_1 + 0x1a) & 0x81;
  *(u16 *)((int)param_1 + 0x1a) = uVar1 & *(u16 *)((int)param_1 + 0x1a);
  *(u8 *)((int)param_1 + 0x1b) = *(u8 *)((int)param_1 + 0x1b) & 1;
  *(u8 *)(param_1 + 7) = *(u8 *)(param_1 + 7) & 0x80;
  *(u16 *)(param_1 + 7) = uVar1 & *(u16 *)(param_1 + 7);
  *(u8 *)((int)param_1 + 0x1d) = *(u8 *)((int)param_1 + 0x1d) & 0x81;
  param_1[7] = param_1[7] & uVar2;
  *(u8 *)((int)param_1 + 0x1e) = *(u8 *)((int)param_1 + 0x1e) & 0x81;
  *(u16 *)((int)param_1 + 0x1e) = uVar1 & *(u16 *)((int)param_1 + 0x1e);
  *(u8 *)((int)param_1 + 0x1f) = *(u8 *)((int)param_1 + 0x1f) & 1;
  *(u8 *)(param_1 + 8) = *(u8 *)(param_1 + 8) & 0x80;
  *(u16 *)(param_1 + 8) = uVar1 & *(u16 *)(param_1 + 8);
  *(u8 *)((int)param_1 + 0x21) = *(u8 *)((int)param_1 + 0x21) & 0x81;
  param_1[8] = param_1[8] & uVar2;
  *(u8 *)((int)param_1 + 0x22) = *(u8 *)((int)param_1 + 0x22) & 0x81;
  *(u8 *)((int)param_1 + 0x23) = *(u8 *)((int)param_1 + 0x23) & 0xf;
  *(u8 *)(param_1 + 9) = *(u8 *)(param_1 + 9) & 0x80;
  *(u16 *)(param_1 + 9) = uVar1 & *(u16 *)(param_1 + 9);
  *(u8 *)((int)param_1 + 0x25) = *(u8 *)((int)param_1 + 0x25) & 1;
  *(u8 *)((int)param_1 + 0x26) = 0;
  *(u8 *)((int)param_1 + 0x27) = 0;
  *(u8 *)(param_1 + 10) = 0;
  *(u8 *)((int)param_1 + 0x29) = 0;
  *(u8 *)((int)param_1 + 0x2a) = *(u8 *)((int)param_1 + 0x2a) & 0x81;
  *(u16 *)((int)param_1 + 0x2a) = uVar1 & *(u16 *)((int)param_1 + 0x2a);
  *(u8 *)((int)param_1 + 0x2b) = *(u8 *)((int)param_1 + 0x2b) & 1;
  *(u8 *)(param_1 + 0xb) = 0;
  *(u8 *)((int)param_1 + 0x2d) = *(u8 *)((int)param_1 + 0x2d) & 0xc0;
  uVar3 = 0xFFFC3FFF;
  param_1[0xb] = param_1[0xb] & 0xFFFC3FFF;
  *(u8 *)((int)param_1 + 0x2e) = *(u8 *)((int)param_1 + 0x2e) & 3;
  *(u8 *)((int)param_1 + 0x2f) = 0;
  *(u8 *)(param_1 + 0xc) = 0;
  *(u8 *)((int)param_1 + 0x31) = 0;
  *(u8 *)((int)param_1 + 0x32) = 0;
  *(u8 *)((int)param_1 + 0x33) = 0;
  *(u8 *)(param_1 + 0xd) = 0;
  *(u8 *)((int)param_1 + 0x35) = 0;
  *(u8 *)((int)param_1 + 0x36) = *(u8 *)((int)param_1 + 0x36) & 0x80;
  *(u16 *)((int)param_1 + 0x36) = uVar1 & *(u16 *)((int)param_1 + 0x36);
  *(u8 *)((int)param_1 + 0x37) = *(u8 *)((int)param_1 + 0x37) & 1;
  *(u8 *)(param_1 + 0xe) = 0;
  *(u8 *)((int)param_1 + 0x39) = 0;
  *(u8 *)((int)param_1 + 0x3a) = *(u8 *)((int)param_1 + 0x3a) & 0x80;
  *(u16 *)((int)param_1 + 0x3a) = uVar1 & *(u16 *)((int)param_1 + 0x3a);
  *(u8 *)((int)param_1 + 0x3b) = *(u8 *)((int)param_1 + 0x3b) & 1;
  *(u8 *)(param_1 + 0xf) = *(u8 *)(param_1 + 0xf) & 0x80;
  *(u16 *)(param_1 + 0xf) = (u16)0xFFFFFC7F & *(u16 *)(param_1 + 0xf);
  *(u8 *)((int)param_1 + 0x3d) = *(u8 *)((int)param_1 + 0x3d) & 0xc3;
  param_1[0xf] = param_1[0xf] & uVar3;
  *(u8 *)((int)param_1 + 0x3e) = *(u8 *)((int)param_1 + 0x3e) & 3;
  *(u8 *)((int)param_1 + 0x3f) = 0;
  puVar4 = (u16 *)(param_1 + 0x10);
  *(u8 *)puVar4 = (u8)*puVar4 & 0x80;
  *puVar4 = uVar1 & *puVar4;
  *(u8 *)((int)param_1 + 0x41) = *(u8 *)((int)param_1 + 0x41) & 0xe1;
  param_1[0x10] = param_1[0x10] & 0xFFFE1FFF;
  *(u8 *)((int)param_1 + 0x42) = *(u8 *)((int)param_1 + 0x42) & 1;
  *(u8 *)((int)param_1 + 0x43) = 0;
  *(u8 *)(param_1 + 0x11) = 0;
  *(u8 *)((int)param_1 + 0x45) = 0;
  *(u8 *)((int)param_1 + 0x46) = 0;
  *(u8 *)((int)param_1 + 0x47) = 0;
  *(u8 *)(param_1 + 0x12) = 0;
  *(u8 *)((int)param_1 + 0x49) = 0;
  *(u8 *)((int)param_1 + 0x4a) = 0;
  *(u8 *)((int)param_1 + 0x4b) = 0;
  *(u8 *)(param_1 + 0x13) = 0;
  *(u8 *)((int)param_1 + 0x4d) = *(u8 *)((int)param_1 + 0x4d) & 0x80;
  param_1[0x13] = param_1[0x13] & uVar2;
  puVar4 = (u16 *)((int)param_1 + 0x4e);
  *(u8 *)puVar4 = *(u8 *)puVar4 & 0x81;
  *puVar4 = uVar1 & *puVar4;
  *(u8 *)((int)param_1 + 0x4f) = *(u8 *)((int)param_1 + 0x4f) & 1;
  *(u8 *)(param_1 + 0x14) = 0;
  *(u8 *)((int)param_1 + 0x51) = 0;
  puVar4 = (u16 *)((int)param_1 + 0x52);
  *(u8 *)puVar4 = *(u8 *)puVar4 & 0xc0;
  *puVar4 = (u16)0xFFFFFE3F & *puVar4;
  *(u8 *)((int)param_1 + 0x53) = *(u8 *)((int)param_1 + 0x53) & 1;
  *(u8 *)(param_1 + 0x15) = 0;
  *(u8 *)((int)param_1 + 0x55) = 0;
  *(u8 *)((int)param_1 + 0x56) = 0;
  *(u8 *)((int)param_1 + 0x57) = 0;
  *(u8 *)(param_1 + 0x16) = 0;
  *(u8 *)((int)param_1 + 0x59) = *(u8 *)((int)param_1 + 0x59) & 0x80;
  param_1[0x16] = param_1[0x16] & 0xFFFC7FFF;
  *(u16 *)((int)param_1 + 0x5a) = uVar1 & *(u16 *)((int)param_1 + 0x5a);
  *(u8 *)((int)param_1 + 0x5b) = *(u8 *)((int)param_1 + 0x5b) & 1;
  *(u8 *)(param_1 + 0x17) = 0;
  *(u8 *)((int)param_1 + 0x5d) = 0;
  *(u8 *)((int)param_1 + 0x5e) = 0;
  *(u8 *)((int)param_1 + 0x5f) = 0;
  *(u8 *)(param_1 + 0x18) = 0;
  *(u8 *)((int)param_1 + 0x61) = 0;
  *(u8 *)((int)param_1 + 0x62) = 0;
  *(u8 *)((int)param_1 + 99) = 0;
  *(u8 *)(param_1 + 0x19) = 0;
  *(u8 *)((int)param_1 + 0x65) = 0;
  *(u8 *)((int)param_1 + 0x66) = 0;
  *(u8 *)((int)param_1 + 0x67) = 0;
  puVar4 = (u16 *)(param_1 + 0x1a);
  *(u8 *)puVar4 = (u8)*puVar4 & 0xc0;
  uVar1 = (u16)0xFFFFC03F;
  *puVar4 = uVar1 & *puVar4;
  uVar2 = 0xFFC03FFF;
  param_1[0x1a] = param_1[0x1a] & 0xFFC03FFF;
  *(u16 *)((int)param_1 + 0x6a) = uVar1 & *(u16 *)((int)param_1 + 0x6a);
  *(u8 *)((int)param_1 + 0x6b) = *(u8 *)((int)param_1 + 0x6b) & 0x3f;
  puVar4 = (u16 *)(param_1 + 0x1b);
  *(u8 *)puVar4 = (u8)*puVar4 & 0xc0;
  *puVar4 = uVar1 & *puVar4;
  param_1[0x1b] = param_1[0x1b] & uVar2;
  *(u16 *)((int)param_1 + 0x6e) = uVar1 & *(u16 *)((int)param_1 + 0x6e);
  *(u8 *)((int)param_1 + 0x6f) = *(u8 *)((int)param_1 + 0x6f) & 0x3f;
  puVar4 = (u16 *)(param_1 + 0x1c);
  *(u8 *)puVar4 = (u8)*puVar4 & 0xc0;
  *puVar4 = uVar1 & *puVar4;
  param_1[0x1c] = param_1[0x1c] & uVar2;
  *(u16 *)((int)param_1 + 0x72) = uVar1 & *(u16 *)((int)param_1 + 0x72);
  *(u8 *)((int)param_1 + 0x73) = *(u8 *)((int)param_1 + 0x73) & 0x3f;
  puVar4 = (u16 *)(param_1 + 0x1d);
  *(u8 *)puVar4 = (u8)*puVar4 & 0xc0;
  *puVar4 = (u16)0xFFFFFE3F & *puVar4;
  *(u8 *)((int)param_1 + 0x75) = *(u8 *)((int)param_1 + 0x75) & 1;
  puVar4 = (u16 *)((int)param_1 + 0x76);
  *(u8 *)puVar4 = *(u8 *)puVar4 & 0x80;
  *puVar4 = (u16)0xFFFFF87F & *puVar4;
  *(u8 *)((int)param_1 + 0x77) = *(u8 *)((int)param_1 + 0x77) & 7;
  *(u8 *)(param_1 + 0x1e) = 0;
  *(u8 *)((int)param_1 + 0x79) = 0;
  puVar4 = (u16 *)((int)param_1 + 0x7a);
  *(u8 *)puVar4 = *(u8 *)puVar4 & 0xfe;
  *puVar4 = (u16)0xFFFFFE01 & *puVar4;
  *(u8 *)((int)param_1 + 0x7b) = *(u8 *)((int)param_1 + 0x7b) & 1;
  *(u8 *)(param_1 + 0x1f) = 0;
  *(u8 *)((int)param_1 + 0x7d) = 0;
  puVar4 = (u16 *)((int)param_1 + 0x7e);
  *(u8 *)puVar4 = *(u8 *)puVar4 & 0x80;
  *puVar4 = (u16)0xFFFFFC7F & *puVar4;
  *(u8 *)((int)param_1 + 0x7f) = *(u8 *)((int)param_1 + 0x7f) & 3;
  return (param_1);
}

/* 0x0809CD78 (32B) | game_state_Sub_0809CD78 (orig: func_0809CD78) | origin: pure | domain: game_state | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
u32 game_state_Sub_0809CD78(u32 *arg0) {
  int val;
  val = 0x3a;
  do {
    *arg0 = 0;
    arg0[1] = 0;
    arg0 = arg0 + 2;
    val = val + -1;
  } while (val != -1);
  return;
}

/* 0x0809CE8C (168B) | game_state_Sub_0809CE8C (orig: func_0809CE8C) | origin: wip | domain: game_state | MEDIUM / graph_algebra */
u32 game_state_Sub_0809CE8C(u32 *param_1) {
  u32 uVar1;
  u32 uVar2;
  u16 *puVar3;
  u32 uVar4;
  u32 uVar5;
  *param_1 = 0;
  *(u8 *)((int)param_1 + 0x00000624) = 0;
  *(u8 *)((int)param_1 + 0x00000625) = 0;
  *(u8 *)((int)param_1 + 0x00000626) = *(u8 *)((int)param_1 + 0x00000626) & 0xc0;
  uVar1 = 0xFFFFFC0F;
  uVar2 = 0;
  do {
    uVar4 = 0;
    uVar5 = uVar2 + 1;
    puVar3 = (u16 *)(param_1 + uVar2 * 0xe + 1);
    do {
      *(u8 *)puVar3 = (u8)*puVar3 & 0xf0;
      *puVar3 = (u16)uVar1 & *puVar3;
      *(u8 *)((int)puVar3 + 1) = *(u8 *)((int)puVar3 + 1) & 3;
      puVar3 = puVar3 + 1;
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x1c);
    uVar2 = uVar5;
  } while (uVar5 < 0x1c);
  return param_1;
}

/* 0x0809D418 (88B) | game_state_Sub_0809D418 (orig: func_0809D418) | origin: pure | domain: game_state | MEDIUM / graph_algebra */
u32 game_state_Sub_0809D418(u32 param_1, u32 param_2) {
    u32 res = 0;
    u32 v;
    if (param_2 != 0) {
        if (param_2 <= 9) {
            res = 1;
        } else if (param_2 <= 99) {
            res = 2;
            for (v = 20; v <= 99 && param_2 >= v; v += 20) {
                res++;
            }
        } else if (param_2 == 100) {
            res = 7;
        } else if (param_2 <= 249) {
            res = 8;
            for (v = 130; v <= 249 && param_2 >= v; v += 30) {
                res++;
            }
        } else {
            res = 14;
            if (param_2 <= 254) {
                res = 13;
            }
        }
    }
    return res;
}

/* 0x0809D470 (144B) | game_state_Sub_0809D470 (orig: func_0809D470) | origin: wip | domain: game_state | MEDIUM / graph_algebra */
void * game_state_Sub_0809D470(u32 param_1,u32 param_2) {
  u32 uVar1;
  
  if (param_2 != 0x98) {
    if (param_2 < 0x99) {
      if (param_2 == 0x28) {
        uVar1 = 0x10;
        goto LAB_0809d4fa;
      }
      if (param_2 < 0x29) {
        if (param_2 == 0x14) {
          uVar1 = 0xc;
          goto LAB_0809d4fa;
        }
        if (param_2 == 0x1e) {
          uVar1 = 0xe;
          goto LAB_0809d4fa;
        }
        goto LAB_0809d4da;
      }
      if (param_2 != 0x66) {
        if (param_2 < 0x67) {
          if (param_2 != 0x3c) goto LAB_0809d4da;
        }
        else if (param_2 != 0x7b) goto LAB_0809d4da;
      }
    }
    else if (param_2 != 0xbe) {
      if (param_2 < 0xbf) {
        if ((param_2 != 0x9b) && (param_2 != 0xab)) goto LAB_0809d4da;
      }
      else if (param_2 != 0xde) {
        if (param_2 < 0xdf) {
          if (param_2 == 0xca) goto LAB_0809d4d2;
        }
        else if (param_2 == 0xff) {
          uVar1 = 0x14;
          goto LAB_0809d4fa;
        }
LAB_0809d4da:
        uVar1 = param_2;
        if ((((10 < param_2) && (uVar1 = 0xb, 0x13 < param_2)) && (uVar1 = 0xd, 0x1d < param_2)) &&
           ((uVar1 = 0xf, 0x27 < param_2 && (uVar1 = 0x13, param_2 < 0xe7)))) {
          uVar1 = 0x11;
        }
        goto LAB_0809d4fa;
      }
    }
  }
LAB_0809d4d2:
  uVar1 = 0x12;
LAB_0809d4fa:
  return (void *)uVar1;
}

/* 0x0809D79C (60B) | game_state_Sub_0809D79C (orig: func_0809D79C) | origin: wip | domain: game_state | MEDIUM / graph_algebra */
u32 game_state_Sub_0809D79C(u32 param_1,u32 param_2) {
    u32 uVar3;
  register u32 uVar1;
  register u32 uVar2;
  uVar1 = param_2;
  if (((param_2 > 9) && (uVar1 = 0x19, param_2 != 0xff)) && (uVar1 = 0x18, param_2 < 0x50)) {
    uVar1 = 10;
    uVar3 = 0x13;
    if (0x12 < param_2) {
      if (param_2 == 0x13) {
        uVar1 = (u32)0xb;
      }
      else {
        do {
          uVar1 = uVar2 + 2;
          uVar2 = uVar1;
          uVar3 = uVar3 + 10;
          if ((0x4f < uVar3) || (param_2 < uVar3)) goto LAB_0809d7d2;
        } while (param_2 != uVar3);
        uVar1 = uVar2 + 3;
      }
    }
  }
LAB_0809d7d2:
  return (uVar1);
}

/* 0x0809D8A0 (4B) | game_state_GetField_0x00_D8A0 (orig: func_0809D8A0) | origin: pure | domain: game_state | MEDIUM / graph_algebra */
u32 game_state_GetField_0x00_D8A0(u32 *arg0) {
    return *arg0;
}

/* 0x0809D8A4 (20B) | game_state_Sub_0809D8A4 (orig: func_0809D8A4) | origin: pure | domain: game_state | MEDIUM / tu_interp */
#define true 1
#define false 0
#define NULL ((void *)0)
u32 game_state_Sub_0809D8A4(int *arg0) {
  u32 val;
  val = 0xd;
  if (*arg0 == 1) {
    val = 0x1c;
  }
  return val;
}

/* 0x0809D8B8 (28B) | game_state_Sub_0809D8B8 (orig: func_0809D8B8) | origin: pure | domain: game_state | MEDIUM / tu_interp */
#define true 1
#define false 0
#define NULL ((void *)0)
u32 game_state_Sub_0809D8B8(int *arg0) {
  u32 val;
  val = 6;
  if (*arg0 == 1) {
    val = 0x1c;
  }
  else if (*arg0 == 2) {
    val = 0xe;
  }
  return val;
}

/* 0x0809D8E8 (204B) | game_state_Sub_0809D8E8 (orig: func_0809D8E8) | origin: wip | domain: game_state | MEDIUM / graph_algebra */
u32 game_state_Sub_0809D8E8(int param_1,int param_2,int param_3,u32 param_4) {
    int iVar3;
    int iVar4;
    int iVar5;
    u32 uStack_28;
  u8 bVar1;
  register int iVar2;
  uStack_28 = 0;
  iVar3 = param_1 + param_2 * 2 + param_3 * 0x38;
  if ((((u32)(*(u8 *)(iVar3 + 4)) << 28) >> 28) == 0) {
    uStack_28 = BIOS_SoundDriverMain(param_1,*(u8 *)(iVar3 + 5) >> 2,param_4);
    if (uStack_28 == 1) {
      *(u8 *)(iVar3 + 4) = *(u8 *)(iVar3 + 4) & 0xf0 | 2;
      uStack_28 = 0;
      iVar3 = 0;
      while (iVar5 = iVar3, iVar3 = game_state_Sub_0809D8B8(param_1), iVar5 < iVar3) {
        for (iVar4 = 0; iVar2 = game_state_Sub_0809D8A4(param_1), iVar3 = iVar5 + 1, iVar4 < iVar2;
            iVar4 = iVar4 + 1) {
          iVar3 = param_1 + iVar4 * 2 + iVar5 * 0x38;
          bVar1 = *(u8 *)(iVar3 + 5);
          if (bVar1 >> 2 == 1) {
            *(u8 *)(iVar3 + 5) = bVar1 & 3;
          }
        }
      }
    }
    else {
      *(u8 *)(iVar3 + 4) = *(u8 *)(iVar3 + 4) & 0xf0 | 1;
    }
    param_1 = param_3 + param_1 * 0x38 + param_2 * 2;
    *(u8 *)(param_1 + 5) = *(u8 *)(param_1 + 5) & 3;
  }
  return uStack_28;
}

/* 0x0809D9B4 (76B) | game_state_Sub_0809D9B4 (orig: func_0809D9B4) | origin: wip | domain: game_state | MEDIUM / graph_algebra */
u32 game_state_Sub_0809D9B4(int param_1,int param_2,int param_3,u32 param_4) {
  int iVar1;
  u32 uVar2;
  uVar2 = 0;
  iVar1 = param_1 + param_2 * 2 + param_3 * 0x38;
  if ((((u32)(*(u8 *)(iVar1 + 4)) << 28) >> 28) == 4) {
    uVar2 = BIOS_SoundDriverMain(param_1,(((u32)(*(u16 *)(iVar1 + 4)) << 22) >> 22) >> 4,param_4);
    *(u8 *)(iVar1 + 4) = *(u8 *)(iVar1 + 4) & 0xf0;
    *(u16 *)(iVar1 + 4) = (u16)0xFFFFFC0F & *(s8 *)(iVar1 + 4);
  }
  return (uVar2);
}

/* 0x0809EB70 (28B) | game_state_Sub_0809EB70 (orig: func_0809EB70) | origin: pure | domain: game_state | MEDIUM / graph_algebra */
struct S { u8 pad[0x14]; u8 a:4; u8 b:3; }; int game_state_Sub_0809EB70(struct S *s) { return (s->a << 28) != 0 && s->b == 0; }

/* 0x0809EB8C (28B) | game_state_Sub_0809EB8C (orig: func_0809EB8C) | origin: pure | domain: game_state | MEDIUM / tu_interp */
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
u32 game_state_Sub_0809EB8C(int arg0) {
  u8 val;
  u32 val2;
  val2 = 0;
  val = *(u8 *)(arg0 + 0x14);
  if (((((s32)(val) << 28) >> 28) != 0) && ((val & 0x70) != 0)) {
    val2 = (u32)(val >> 7);
  }
  return val2;
}

/* 0x0809EBD4 (24B) | game_state_Sub_0809EBD4 (orig: func_0809EBD4) | origin: pure | domain: game_state | MEDIUM / graph_algebra */
struct S { u8 pad[0x14]; u8 a:4; u8 b:4; u8 c:1; u8 d:1; }; void game_state_Sub_0809EBD4(struct S *s) { s->a = 0; s->c = 0; }

/* 0x080A0A90 (72B) | game_state_Sub_080A0A90 (orig: func_080A0A90) | origin: wip | domain: game_state | MEDIUM / graph_algebra */
void game_state_Sub_080A0A90(u32 *param_1) {
  u32 *puVar1;
  u32 auStack_14 [2];
  if (-1 < (int)((u32)*(u8 *)((int)param_1 + 2) * 0x4000000)) {
    auStack_14[0] = ((*param_1 & 0x1fffff) >> 0xd) + 1;
    auStack_14[1] = 0xff;
    puVar1 = auStack_14;
    if (0xff < auStack_14[0]) {
      puVar1 = auStack_14 + 1;
    }
    *param_1 = 0xFFE01FFF & *param_1 | (*puVar1 & 0xff) << 0xd;
    *(u8 *)((int)param_1 + 2) = *(u8 *)((int)param_1 + 2) | 0x20;
  }
}

/* 0x080A17A0 (240B) | game_state_Sub_080A17A0 (orig: func_080A17A0) | origin: wip | domain: game_state | MEDIUM / tu_interp */
u32 game_state_Sub_080A17A0(int param_1,int param_2) {
  u16 uVar1;
  u16 uVar2;
  u32 uVar3;
  u16 uStack_18;
  u16 uStack_16;
  u16 uStack_14;
  if (param_2 == 1) {
    uVar1 = (u16)0xFFFFFC00;
    uStack_18 = uVar1 & uStack_18 & 0x3ff | 0xe007;
    uStack_16 = uVar1 & uStack_16 & 0x3ff | 0xa005;
    uStack_14 = uVar1 & uStack_14 | 4;
  }
  else {
    if ((param_2 == 0) || (param_2 != 2)) {
      uVar1 = (u16)0xFFFFFC00;
      uStack_16 = uVar1 & uStack_16 & 0x3ff | 0x6006;
      uVar2 = 5;
      uVar3 = 0xFFFFFC00;
    }
    else {
      uVar1 = (u16)0xFFFFFC00;
      uStack_16 = uVar1 & uStack_16 & 0x3ff | 0xe006;
      uVar2 = 3;
      uVar3 = 0xFFFFFC00;
    }
    uStack_18 = uVar1 & uStack_18 & 0x3ff | 0x2007;
    uStack_14 = (u16)uVar3 & uStack_14 | uVar2;
  }
  LibC_memcpy(param_1,&uStack_18,6);
  *(u8 *)(param_1 + 6) = 0;
  return param_1;
}

/* 0x080A1890 (252B) | game_state_Sub_080A1890 (orig: func_080A1890) | origin: wip | domain: game_state | MEDIUM / tu_interp */
u32 game_state_Sub_080A1890(int param_1,int param_2) {
  u16 uVar1;
  u16 uStack_1c;
  u16 uStack_1a;
  u16 uStack_18;
  if (param_2 == 1) {
    uVar1 = (u16)0xFFFFFC00;
    uStack_1c = uVar1 & uStack_1c & 0x3ff | 0x2007;
    uStack_1a = uVar1 & uStack_1a & 0x3ff | 0x8011;
    uStack_18 = uVar1 & uStack_18 | 6;
  }
  else {
    if ((param_2 == 0) || (param_2 != 2)) {
      uVar1 = (u16)0xFFFFFC00;
      uStack_1c = uVar1 & uStack_1c & 0x3ff | 7;
      uStack_1a = uVar1 & uStack_1a & 0x3ff | 0x600f;
      uStack_18 = uVar1 & uStack_18 | 6;
      LibC_memcpy(param_1,&uStack_1c,6);
      *(u8 *)(param_1 + 6) = 0;
      goto LAB_080a197e;
    }
    uVar1 = (u16)0xFFFFFC00;
    uStack_1c = uVar1 & uStack_1c & 0x3ff | 0x6007;
    uStack_1a = uVar1 & uStack_1a & 0x3ff | 0x6012;
    uStack_18 = uVar1 & uStack_18 | 5;
  }
  LibC_memcpy(param_1,&uStack_1c,6);
  *(u8 *)(param_1 + 6) = 0;
LAB_080a197e:
  return param_1;
}

/* 0x080A198C (96B) | game_state_Sub_080A198C (orig: func_080A198C) | origin: wip | domain: game_state | MEDIUM / tu_interp */
u32 game_state_Sub_080A198C(int param_1) {
  u16 uVar1;
  u16 uStack_18;
  u16 uStack_16;
  u16 uStack_14;
  uVar1 = (u16)0xFFFFFC00;
  uStack_18 = uVar1 & uStack_18 & 0x3ff | 0xe029;
  uStack_16 = uVar1 & uStack_16 & 0x3ff | 0x2002;
  uStack_14 = uVar1 & uStack_14 | 1;
  LibC_memcpy(param_1,&uStack_18,6);
  *(u8 *)(param_1 + 6) = 0;
  return param_1;
}

/* 0x080A19EC (92B) | game_state_Sub_080A19EC (orig: func_080A19EC) | origin: wip | domain: game_state | MEDIUM / tu_interp */
u32 game_state_Sub_080A19EC(int param_1) {
  u16 uVar1;
  u16 uStack_18;
  u16 uStack_16;
  u16 uStack_14;
  uVar1 = (u16)0xFFFFFC00;
  uStack_18 = uVar1 & uStack_18 & 0x3ff | 0xc017;
  uStack_16 = uVar1 & uStack_16 & 0x3ff | 3;
  uStack_14 = uVar1 & uStack_14 | 4;
  LibC_memcpy(param_1,&uStack_18,6);
  *(u8 *)(param_1 + 6) = 0;
  return param_1;
}

/* 0x080A1A48 (4B) | game_state_NoOp (orig: func_080A1A48) | origin: pure | domain: game_state | MEDIUM / graph_algebra */
void game_state_NoOp(void) {
}

/* 0x080A1A4C (236B) | game_state_Sub_080A1A4C (orig: func_080A1A4C) | origin: wip | domain: game_state | MEDIUM / graph_algebra */
void game_state_Sub_080A1A4C(int param_1) {
  int iVar1;
  iVar1 = 0;
  do {
    *(u8 *)(param_1 + iVar1) = 0xff;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 7);
  *(u8 *)(param_1 + 7) = 0xb6;
  *(u8 *)(param_1 + 8) = *(u8 *)(param_1 + 8) & 0x81 | 0x6d;
  *(u16 *)(param_1 + 8) = (u16)0xFFFFFC7F & *(u16 *)(param_1 + 8) | 0x300;
  *(u8 *)(param_1 + 9) = *(u8 *)(param_1 + 9) & 3 | 0xd8;
  *(u8 *)(param_1 + 10) = *(u8 *)(param_1 + 10) & 0xc0 | 0x36;
  *(u16 *)(param_1 + 10) = (u16)0xFFFFFE3F & *(u16 *)(param_1 + 10) | 0x180;
  *(u8 *)(param_1 + 0xb) = *(u8 *)(param_1 + 0xb) & 0x81 | 0xec;
  *(u8 *)(param_1 + 0xc) = *(u8 *)(param_1 + 0xc) & 0xe0 | 4;
}

/* 0x080A1EF4 (208B) | game_state_Sub_080A1EF4 (orig: func_080A1EF4) | origin: wip | domain: game_state | MEDIUM / graph_algebra */
void * game_state_Sub_080A1EF4(int param_1,u32 param_2) {
  u8 bVar1;
  u32 uVar2;

  uVar2 = 0;
  if ((param_2 < 0x60) || (0xe < param_2 - 0x60)) goto LAB_080a1fbc;
  switch(*(u32 *)(((const u32 *)0x080a1f10) + (param_2 - 0x60) * 4) & 0xfffffffe) {
  case 0x80a1f14:
    param_1 = 0;
  case 0x80a1f50:
    uVar2 = (u32)*(u8 *)(param_1 + 7) << 0x1d;
    break;
  case 0x80a1f56:
    uVar2 = (u32)*(u8 *)(param_1 + 7) << 0x1a;
    break;
  case 0x80a1f5c:
    uVar2 = (*(u8 *)(param_1 + 8) & 1) << 2 | (u32)(*(u8 *)(param_1 + 7) >> 6);
    goto LAB_080a1fbc;
  case 0x80a1f6c:
    uVar2 = (u32)*(u8 *)(param_1 + 8) << 0x1c;
    break;
  case 0x80a1f72:
    uVar2 = (u32)*(u8 *)(param_1 + 8) << 0x19;
    break;
  case 0x80a1f78:
    uVar2 = (u32)*(u16 *)(param_1 + 8) << 0x16;
    break;
  case 0x80a1f7e:
    bVar1 = *(u8 *)(param_1 + 9);
    goto LAB_080a1fb8;
  case 0x80a1f82:
    uVar2 = (u32)(*(u8 *)(param_1 + 9) >> 5);
    goto LAB_080a1fbc;
  case 0x80a1f88:
    uVar2 = (u32)*(u8 *)(param_1 + 10) << 0x1d;
    break;
  case 0x80a1f8e:
    uVar2 = (u32)*(u8 *)(param_1 + 10) << 0x1a;
    break;
  case 0x80a1f94:
    uVar2 = (u32)*(u16 *)(param_1 + 10) << 0x17;
    break;
  case 0x80a1f9a:
    uVar2 = (u32)*(u8 *)(param_1 + 0xb) << 0x1c;
    break;
  case 0x80a1fa0:
    uVar2 = (u32)*(u8 *)(param_1 + 0xb) << 0x19;
    break;
  case 0x80a1fa6:
    uVar2 = (*(u8 *)(param_1 + 0xc) & 3) << 1 | (u32)(*(u8 *)(param_1 + 0xb) >> 7);
    goto LAB_080a1fbc;
  case 0x80a1fb6:
    bVar1 = *(u8 *)(param_1 + 0xc);
LAB_080a1fb8:
    uVar2 = (u32)bVar1 << 0x1b;
  }
  uVar2 = uVar2 >> 0x1d;
LAB_080a1fbc:
  return (void *)uVar2;
}

/* 0x080A3E90 (188B) | game_state_Sub_080A3E90 (orig: func_080A3E90) | origin: wip | domain: game_state | MEDIUM / graph_algebra */
u32 * game_state_Sub_080A3E90(u32 *param_1,u32 param_2,u16 *param_3) {
  u16 uVar1;
  u32 uVar2;
  u32 uVar3;
  int iVar4;
  int iVar5;
  u32 uStack_14;
  uVar2 = game_state_Sub_080A45A8(param_2);
  if (uVar2 == 7) {
    uStack_14 = 0;
  }
  else {
    iVar4 = 3;
    uVar3 = (u32)*param_3;
    if ((uVar3 & 0x1f) * 0x1000000 + 0xfa000000 >> 0x18 < 3) {
      iVar4 = 0;
    }
    else if ((uVar3 & 0x1f) * 0x1000000 + 0xf7000000 >> 0x18 < 8) {
      iVar4 = 1;
    }
    else if ((uVar3 & 0x1f) * 0x1000000 + 0xef000000 >> 0x18 < 3) {
      iVar4 = 2;
    }
    uVar1 = *(u16 *)(iVar4 * 2 + uVar2 * 8 + 0x08104E74);
    uVar3 = uStack_14 & 0xFFFF0000;
    iVar5 = 0;
    iVar4 = LibC_rand();
    if (((int)uVar2 < 7) && (-1 < (int)uVar2)) {
      iVar5 = func_080D0ED0(iVar4 >> 8,6);
      iVar5 = iVar5 + 5;
    }
    uStack_14 = (uVar3 | (u32)uVar1 * 0x3c0000 >> 0x10) & 0x0000FFFF | iVar5 * 0x60000;
  }
  *param_1 = uStack_14;
  param_1[1] = uVar2;
  return param_1;
}

/* 0x080A45A8 (168B) | game_state_Sub_080A45A8 (orig: func_080A45A8) | origin: wip | domain: game_state | MEDIUM / graph_algebra */
u32 game_state_Sub_080A45A8(u16 *param_1) {
  int iVar1;
  int iVar2;
  int iVar3;
  u32 *puVar4;
  int iVar5;
  u32 uVar6;
  uVar6 = 7;
  iVar1 = (int)(short)((u16)((param_1[1] & 0x000003FF) << 6) |
                      (u16)(*(u8 *)((int)param_1 + 1) >> 2));
  if (iVar1 < 0) {
    iVar1 = iVar1 + 7;
  }
  iVar2 = (int)(short)((u16)((param_1[2] & 0x000003FF) << 6) |
                      (u16)(*(u8 *)((int)param_1 + 3) >> 2));
  if (iVar2 < 0) {
    iVar2 = iVar2 + 7;
  }
  iVar5 = 0;
  iVar3 = 0;
  puVar4 = 0x0810563C;
  while (((((*param_1 & 0x3ff) != *puVar4 || (iVar1 >> 3 < *(int *)((int)0x0810563C + iVar3 + 4))
           ) || (*(int *)((int)0x0810563C + iVar3 + 0xc) < iVar1 >> 3)) ||
         ((iVar2 >> 3 < *(int *)((int)0x0810563C + iVar3 + 8) ||
          (*(int *)((int)0x0810563C + iVar3 + 0x10) < iVar2 >> 3))))) {
    puVar4 = puVar4 + 6;
    iVar3 = iVar3 + 0x18;
    iVar5 = iVar5 + 1;
    if (7 < iVar5) {
LAB_080a4642:
      return uVar6;
    }
  }
  uVar6 = puVar4[5];
  goto LAB_080a4642;
}

/* 0x080A59BC (224B) | game_state_Sub_080A59BC (orig: func_080A59BC) | origin: wip | domain: game_state | MEDIUM / graph_algebra */
u32 game_state_Sub_080A59BC(int param_1,u32 param_2,u32 param_3,int param_4) {
  u32 uVar1;
  u32 uVar2;
  int iVar3;
  u32 uVar4;
  int iVar5;
  u32 uVar6;

  u32 uStack_28;
  u32 uStack_24;
  
  Code_809E804_Sub_080A58EC(&uStack_28,param_1,param_2,param_3);
  uStack_24 = uStack_28;
  uVar2 = uStack_24;
  if (param_4 == 0) {
    param_4 = 1;
  }
  uStack_24 = (short)uStack_28;
  iVar5 = (int)(short)uStack_24 - (int)*(short *)(param_1 + 10);
  uStack_24 = (short)((u32)uStack_28 >> 0x10);
  iVar3 = (int)uStack_24 - (int)*(short *)(param_1 + 0xe);
  if ((iVar5 == 0) && (iVar3 == 0)) {
    *(u32 *)(param_1 + 0x8c) = 0;
  }
  else {
    uVar6 = 0;
    uVar4 = iVar5 * iVar5 + iVar3 * iVar3;
    uVar1 = uVar4;
    while (uVar1 <= 0x3FFFFFFF) {
      uVar6 = uVar6 + 1;
      uVar1 = uVar4 << (uVar6 * 2 & 0xff);
    }
    uStack_24 = uVar2;
    uVar1 = Code_Lib_Syscall_Sqrt(uVar4 << ((uVar6 & 0x7f) << 1));
    iVar3 = LibGcc_udivsi3((int)(uVar1 & 0xffff) >> (uVar6 & 0xff),param_4);
    if (iVar3 == 0) {
      iVar3 = 1;
    }
    uVar2 = func_080D0EC8((short)uStack_24 * 0x10000 - *(int *)(param_1 + 8),iVar3);
    *(u32 *)(param_1 + 0x84) = uVar2;
    uVar2 = func_080D0EC8(uStack_24 * 0x10000 - *(int *)(param_1 + 0xc),iVar3);
    *(u32 *)(param_1 + 0x88) = uVar2;
    *(int *)(param_1 + 0x8c) = iVar3;
  }
  return 0;
}

/* 0x080A5A9C (20B) | game_state_Sub_080A5A9C (orig: func_080A5A9C) | origin: pure | domain: game_state | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
u32 game_state_Sub_080A5A9C(int arg0) {
  return ((u32)(*(int *)(arg0 + 0x8c) == 0));
}

/* 0x080A601C (8B) | game_state_SetField_0x00_601C (orig: func_080A601C) | origin: pure | domain: game_state | MEDIUM / graph_algebra */
void game_state_SetField_0x00_601C(u8 *arg0) {
    *(u8 *)(arg0 + 88) = 20;
}

/* 0x080AA8DC (20B) | game_state_Sub_080AA8DC (orig: func_080AA8DC) | origin: pure | domain: game_state | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
void game_state_Sub_080AA8DC(int *arg0) {
  if (*arg0 == 0x1d) {
    *(u8 *)(arg0 + 0x26) = 1;
  }
}

/* 0x080AD9D0 (12B) | game_state_Sub_080AD9D0 (orig: func_080AD9D0) | origin: pure | domain: game_state | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 game_state_SetField_0x00_601C();
void game_state_Sub_080AD9D0(int arg0) {
  game_state_SetField_0x00_601C(*(u32 *)(arg0 + 4));
}

/* 0x080ADB78 (12B) | game_state_Sub_080ADB78 (orig: func_080ADB78) | origin: pure | domain: game_state | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 game_state_Sub_080A5A9C();
u32 game_state_Sub_080ADB78(int arg0) {
  return game_state_Sub_080A5A9C(*(u32 *)(arg0 + 4));
}

/* 0x080ADB9C (12B) | game_state_Sub_080ADB9C (orig: func_080ADB9C) | origin: pure | domain: game_state | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 game_state_Sub_080A59BC();
void game_state_Sub_080ADB9C(int arg0) {
  game_state_Sub_080A59BC(*(u32 *)(arg0 + 4));
}

/* 0x080D7F08 (52B) | game_state_Sub_080D7F08 (orig: func_080D7F08) | origin: pure | domain: game_state | MEDIUM / graph_algebra */
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
extern u32 func_080D3914();
void game_state_Sub_080D7F08(int arg0) {
  int val;
  u32 val2;
  int **p;
  val2 = 1;
  p = (int **)(arg0 + 0xa8);
  do {
    val = func_080D3914(*p, val2, *(u32 *)(**p + 0x40));
    if (val != 0) {
      func_080D3914(val, 3, *(u32 *)(*(int *)(val + 0x14) + 0x3c));
    }
    val2 = val2 + 1;
  } while (val2 < 0x24);
}

/* 0x080D7F3C (36B) | game_state_Sub_080D7F3C (orig: func_080D7F3C) | origin: pure | domain: game_state | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D3910();
void game_state_Sub_080D7F3C(int arg0) {
  func_080D3910(*(int **)(arg0 + 0xa8),*(u32 *)(**(int **)(arg0 + 0xa8) + 0x124));
  *(u32 *)(arg0 + 0x9c) = 2;
}

/* 0x080D7F60 (20B) | game_state_Sub_080D7F60 (orig: func_080D7F60) | origin: pure | domain: game_state | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 game_state_Sub_08050E8C();
void game_state_Sub_080D7F60(int arg0) {
  if (*(int *)(arg0 + 0xac) != 0) {
    game_state_Sub_08050E8C();
  }
}

/* 0x080DC360 (64B) | game_state_Sub_080DC360 (orig: func_080DC360) | origin: wip | domain: game_state | MEDIUM / graph_algebra */
void game_state_Sub_080DC360(int param_1,u32 param_2,u32 param_3,u32 param_4,
             u32 param_5) {
  u32 uVar1;
  uVar1 = func_080D3910(*(int **)(param_1 + 0xa8),
                          *(u32 *)(**(int **)(param_1 + 0xa8) + 0x14));
  game_state_Sub_080D7F9C(param_1,param_2,uVar1,param_3,param_4,param_5);
}

