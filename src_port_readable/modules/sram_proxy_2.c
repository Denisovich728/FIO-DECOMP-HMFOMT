/* FIO-DECOMP-HMFOMT :: Port Readable Module: sram_proxy_2 (8 functions) */
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

/* 0x0800042C (68B) | sram_proxy_2_Sub_0800042C (orig: func_0800042C) | origin: pure | domain: sram_proxy_2 | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 sram_proxy_2_Sub_080006A4();
extern u32 sram_proxy_2_Sub_080006E4();
/* paridad 91.2% preset agbcc_O2 */
void sram_proxy_2_Sub_0800042C(u32 arg0, u32 arg1) {
  u32 local_buf;
  local_buf = 0;
  sram_proxy_2_Sub_080006E4(arg0,&local_buf,0x20,4);
  if (*(u16 *)0x03000400 == 0) {
    local_buf = local_buf & ~(1 << arg1);
    sram_proxy_2_Sub_080006A4(arg0,0x20,&local_buf,4);
  }
}

/* 0x0800063C (4B) | sram_proxy_2_NoOp (orig: func_0800063C) | origin: pure | domain: sram_proxy_2 | HIGH / stanhash_map_tu */
void sram_proxy_2_NoOp(void) {
}

/* 0x08000640 (36B) | sram_proxy_2_Sub_08000640 (orig: func_08000640) | origin: pure | domain: sram_proxy_2 | HIGH / stanhash_map_tu */
#define true 1
#define false 0
#define NULL ((void *)0)
/* paridad 90.6% preset agbcc_O2 */
u32 sram_proxy_2_Sub_08000640(u32 arg0) {
  if (*(u8 *)0x03000402 == '\0') {
    *(u8 *)0x03000402 = '\x01';
    *(u16 *)0x03000400 = 0;
  }
  return arg0;
}

/* 0x08000664 (64B) | sram_proxy_2_Sub_08000664 (orig: func_08000664) | origin: wip | domain: sram_proxy_2 | MEDIUM / graph_algebra */
u32 sram_proxy_2_Sub_08000664(u32 param_1) {
  u32 uVar1;
  u8 auStack_18 [8];
  uVar1 = 0;
  do {
    *(auStack_18 + uVar1) = 0xff;
    uVar1 = uVar1 + 1 & 0xff;
  } while (uVar1 < 8);
  uVar1 = 0;
  do {
    sram_proxy_2_Sub_080006A4(param_1,uVar1,auStack_18,8);
    uVar1 = uVar1 + 8;
  } while (uVar1 < 0x8000);
  return 1;
}

/* 0x080006A4 (64B) | sram_proxy_2_Sub_080006A4 (orig: func_080006A4) | origin: wip | domain: sram_proxy_2 | HIGH / stanhash_map_tu */
u32 sram_proxy_2_Sub_080006A4(u32 param_1,u32 param_2,u32 param_3,int param_4) {
  u32 uVar1;
  int iVar2;
  uVar1 = 0;
  *(u16 *)0x03000400 = 0;
  if (param_4 != 0) {
    iVar2 = code_lib_sram_Sub_080D38D4(param_3,param_2 | 0xe000000);
    if (iVar2 != 0) {
      sram_proxy_2_Sub_08000728(param_1,0x100);
    }
    uVar1 = (u32)(iVar2 == 0);
  }
  return uVar1;
}

/* 0x080006E4 (48B) | sram_proxy_2_Sub_080006E4 (orig: func_080006E4) | origin: wip | domain: sram_proxy_2 | HIGH / stanhash_map_tu */
u32 sram_proxy_2_Sub_080006E4(u32 param_1, u32 param_2, u32 param_3, int param_4) {
  u16 *status_ptr = (u16 *)0x03000400;
  *status_ptr = 0;
  if (param_4 != 0) {
    code_lib_sram_HW_WAITCNT(param_3 | 0xe000000, param_2);
  }
  return (u32)(param_4 != 0);
}

/* 0x08000714 (20B) | sram_proxy_2_Sub_08000714 (orig: func_08000714) | origin: pure | domain: sram_proxy_2 | MEDIUM / tu_interp */
struct S { u32 a; u8 b; };
extern "C" u32 code_809E804_Sub_080D100C(u32, u32);
extern "C" u32 sram_proxy_2_Sub_08000714(S *s, u32 v) {
    return code_809E804_Sub_080D100C((s->b & 3) + 3, v);
}

/* 0x08000728 (196B) | sram_proxy_2_Sub_08000728 (orig: func_08000728) | origin: wip | domain: sram_proxy_2 | HIGH / stanhash_map_tu */
void sram_proxy_2_Sub_08000728(u32 param_1,u16 param_2) {
  u16 *puVar1;
  u16 uVar2;
  u16 uVar3;
  if (param_2 == 0x10) {
    uVar2 = *(u16 *)0x03000400;
    uVar3 = 0x10;
    puVar1 = 0x03000400;
  }
  else if (param_2 < 0x11) {
    if (param_2 == 2) {
      uVar2 = *(u16 *)0x03000400;
      uVar3 = 2;
      puVar1 = 0x03000400;
    }
    else if (param_2 < 3) {
      if (param_2 != 1) {
      }
      uVar2 = *(u16 *)0x03000400;
      uVar3 = 1;
      puVar1 = 0x03000400;
    }
    else if (param_2 == 4) {
      uVar2 = *(u16 *)0x03000400;
      uVar3 = 4;
      puVar1 = 0x03000400;
    }
    else {
      if (param_2 != 8) {
      }
      uVar2 = *(u16 *)0x03000400;
      uVar3 = 8;
      puVar1 = 0x03000400;
    }
  }
  else if (param_2 == 0x80) {
    uVar2 = *(u16 *)0x03000400;
    uVar3 = 0x80;
    puVar1 = 0x03000400;
  }
  else {
    if (0x80 < param_2) {
      if ((param_2 != 0x100) && (param_2 != 0x200)) {
      }
      *(u16 *)0x03000400 = param_2 | *(u16 *)0x03000400;
    }
    if (param_2 == 0x20) {
      uVar2 = *(u16 *)0x03000400;
      uVar3 = 0x20;
      puVar1 = 0x03000400;
    }
    else {
      if (param_2 != 0x40) {
      }
      uVar2 = *(u16 *)0x03000400;
      uVar3 = 0x40;
      puVar1 = 0x03000400;
    }
  }
  *puVar1 = uVar2 | uVar3;
}

