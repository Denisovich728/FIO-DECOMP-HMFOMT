/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_lib_sram (4 functions) */
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

/* 0x080D3778 (36B) | code_lib_sram_Sub_080D3778 (orig: func_080D3778) | origin: pure | domain: code_lib_sram | HIGH / stanhash_map_tu */
#define true 1
#define false 0
#define NULL ((void *)0)
void code_lib_sram_Sub_080D3778(u8 *arg0,u8 *arg1,int arg2) {
  int val;
  val = arg2 + -1;
  if (arg2 != 0) {
    do {
      *arg1 = *arg0;
      arg0 = arg0 + 1;
      arg1 = arg1 + 1;
      val = val + -1;
    } while (val != -1);
  }
}

/* 0x080D3800 (64B) | code_lib_sram_HW_WAITCNT_3800 (orig: func_080D3800) | origin: pure | domain: code_lib_sram | HIGH / stanhash_map_tu */
#define true 1
#define false 0
#define NULL ((void *)0)
void code_lib_sram_HW_WAITCNT_3800(u8 *arg0,u8 *arg1,int arg2) {
  *(u16 *)0x04000204 = *(u16 *)0x04000204 & (u16)0x0000FFFC | 3;
  while (arg2 = arg2 + -1, arg2 != -1) {
    *arg1 = *arg0;
    arg0 = arg0 + 1;
    arg1 = arg1 + 1;
  }
}

/* 0x080D3840 (48B) | code_lib_sram_Sub_080D3840 (orig: func_080D3840) | origin: wip | domain: code_lib_sram | HIGH / stanhash_map_tu */
u32 code_lib_sram_Sub_080D3840(char *param_1,char *param_2,int param_3) {
    BOOL iVar2;
  register u8 cVar1;
  iVar2 = param_3 + -1;
  if (param_3 != 0) {
    do {
      cVar1 = *param_1;
      param_1 += 1;
      if (cVar1 != *param_2) goto LAB_080d3868;
      param_2 = (u8)param_2 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != -1);
  }
  param_2 = (char *)0x0;
LAB_080d3868:
  return param_2;
}

/* 0x080D38D4 (56B) | code_lib_sram_Sub_080D38D4 (orig: func_080D38D4) | origin: pure | domain: code_lib_sram | HIGH / stanhash_map_tu */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_lib_sram_HW_WAITCNT_3800();
extern u32 code_lib_sram_HW_WAITCNT_3870();
u32 code_lib_sram_Sub_080D38D4(u32 arg0,u32 arg1,u32 arg2,int arg3) {
  u8 val;
  for (val = 0; val < 3; val = val + 1) {
    code_lib_sram_HW_WAITCNT_3800(arg0,arg1,arg2);
    arg3 = code_lib_sram_HW_WAITCNT_3870(arg0,arg1,arg2);
    if (arg3 == 0) break;
  }
  return arg3;
}

