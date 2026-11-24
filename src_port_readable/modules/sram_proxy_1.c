/* FIO-DECOMP-HMFOMT :: Port Readable Module: sram_proxy_1 (7 functions) */
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

/* 0x080002E0 (120B) | sram_proxy_1_Ctor (orig: func_080002E0) | origin: wip | domain: sram_proxy_1 | HIGH / vtable_algebra */
u32 sram_proxy_1_Ctor(void) {
  u32 val;
  val = sram_proxy_2_Sub_080006E4();
  return *(s8 *)(0x03000400);
}

/* 0x08000358 (72B) | sram_proxy_1_Ctor_0358 (orig: func_08000358) | origin: pure | domain: sram_proxy_1 | HIGH / vtable_algebra */
/* sram_proxy_1_Ctor_0358 @ 0x08000358 — MATCH 100% (agbcc_O2) */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long long u64;
typedef signed char s8;
typedef short s16;
typedef int s32;
typedef long long s64;
typedef u8 undefined;
typedef u8 undefined1;
typedef u16 undefined2;
typedef u32 undefined3;
typedef u32 undefined4;
typedef u64 undefined5;
typedef u64 undefined6;
typedef u64 undefined7;
typedef u64 undefined8;
typedef u8 byte;
typedef u16 ushort;
typedef u32 uint;
typedef u32 uint3;
typedef s32 int3;
typedef u32 bool;
typedef int (*code)();
#define true 1
#define false 0
int sram_proxy_2_Sub_080006A4();
void sram_proxy_1_Ctor_0358(u32 self) {
  volatile u16 *puVar1;
  u32 uStack_10;
  sram_proxy_2_Sub_080006A4(self, 0, 0x080E862C, 0x20);
  puVar1 = (volatile u16 *)0x03000400;
  if (*puVar1 == 0) {
    uStack_10 = 0;
    sram_proxy_2_Sub_080006A4(self, 0x20, &uStack_10, 4);
    if (*puVar1 == 0) {
      sram_proxy_2_Sub_080006A4(self, 0x24, &uStack_10, 4);
    }
  }
}

/* 0x080003A0 (60B) | sram_proxy_1_Sub_080003A0 (orig: func_080003A0) | origin: wip | domain: sram_proxy_1 | HIGH / stanhash_map_tu */
u32 sram_proxy_1_Sub_080003A0(u32 param_1) {
    s16 uStack_c;
  register char cVar1;
  cVar1 = sram_proxy_1_Ctor();
  if (cVar1 != '\0') {
    uStack_c = 0;
    sram_proxy_2_Sub_080006E4(param_1,&uStack_c,0x20,4);
    if (*(u16 *)0 == 0x03000400) goto LAB_080003d2;
  }
  uStack_c = (s16)0;
LAB_080003d2:
  return (uStack_c);
}

/* 0x080003DC (12B) | sram_proxy_1_Sub_080003DC (orig: func_080003DC) | origin: pure | domain: sram_proxy_1 | HIGH / stanhash_map_tu */
u32 sram_proxy_1_Sub_080003DC(u32 arg0, u32 arg1) {
    u32 c;
    c = 0x3FEC;
    return arg1 * c + 40;
}

/* 0x080003E8 (68B) | sram_proxy_1_Sub_080003E8 (orig: func_080003E8) | origin: pure | domain: sram_proxy_1 | HIGH / stanhash_map_tu */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 sram_proxy_2_Sub_080006A4();
extern u32 sram_proxy_2_Sub_080006E4();
/* paridad 91.2% preset agbcc_O2 */
void sram_proxy_1_Sub_080003E8(u32 arg0, int arg1) {
  u32 local_buf;
  local_buf = 0;
  sram_proxy_2_Sub_080006E4(arg0,&local_buf,0x20,4);
  if (*(u16 *)0x03000400 == 0) {
    local_buf = local_buf | 1 << arg1;
    sram_proxy_2_Sub_080006A4(arg0,0x20,&local_buf,4);
  }
}

/* 0x08000470 (24B) | sram_proxy_1_Sub_08000470 (orig: func_08000470) | origin: pure | domain: sram_proxy_1 | HIGH / stanhash_map_tu */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 sram_proxy_2_Sub_080006A4();
void sram_proxy_1_Sub_08000470(u32 arg0,u32 arg1) {
  u32 local_buf;
  local_buf = arg1;
  sram_proxy_2_Sub_080006A4(arg0,0x24,&local_buf,4);
}

/* 0x08000488 (60B) | sram_proxy_1_Sub_08000488 (orig: func_08000488) | origin: wip | domain: sram_proxy_1 | HIGH / stanhash_map_tu */
u32 sram_proxy_1_Sub_08000488(void) {
  u32 val;
  val = sram_proxy_1_Ctor();
  return (val << 0x18);
}

