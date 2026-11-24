/* FIO-DECOMP-HMFOMT :: Port Readable Module: AnimEntity (4 functions) */
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

/* 0x080A02B0 (108B) | AnimEntity_Sub_080A02B0 (orig: func_080A02B0) | origin: wip | domain: AnimEntity | HEURISTIC / semantic_bank */
void * AnimEntity_Sub_080A02B0(int param_1,int param_2) {
  int iVar1;

  if (param_2 - 0x24U < 7) {
    switch(*(u32 *)(((const u32 *)0x080a02c8) + (param_2 - 0x24U) * 4) & 0xfffffffe) {
    case 0x80a02cc:
      goto LAB_080a02e8;
    case 0x80a02ec:
      iVar1 = 0x33c;
      break;
    case 0x80a02f2:
      iVar1 = 0x360;
      break;
    case 0x80a02f8:
      iVar1 = 900;
      break;
    case 0x80a02fe:
      iVar1 = 0x3a8;
      break;
    case 0x80a0304:
      iVar1 = 0x3cc;
      break;
    case 0x80a030a:
      iVar1 = 0x3f0;
      break;
    case 0x80a0310:
      iVar1 = 0x414;
    }
    param_1 = param_1 + iVar1;
  }
  else {
LAB_080a02e8:
    param_1 = 0;
  }
  return (void *)param_1;
}

/* 0x080A05A8 (28B) | AnimEntity_Sub_080A05A8 (orig: func_080A05A8) | origin: pure | domain: AnimEntity | HEURISTIC / semantic_bank */
u8 *AnimEntity_Sub_080A05A8(u8 *arg0, u32 arg1) {
    switch (arg1) {
    default:
    case 0: return arg0 + 48;
    case 1: return arg0 + 56;
    case 2: return arg0 + 64;
    }
}

/* 0x080A05C4 (28B) | AnimEntity_Sub_080A05C4 (orig: func_080A05C4) | origin: pure | domain: AnimEntity | HEURISTIC / semantic_bank */
u8 *AnimEntity_Sub_080A05C4(u8 *arg0, u32 arg1) {
    switch (arg1) {
    default:
    case 0: return arg0 + 72;
    case 1: return arg0 + 80;
    case 2: return arg0 + 88;
    }
}

/* 0x080A4A4C (72B) | AnimEntity_Sub_080A4A4C (orig: func_080A4A4C) | origin: wip | domain: AnimEntity | HEURISTIC / semantic_bank */
u32 AnimEntity_Sub_080A4A4C(int param_1,u32 param_2,u32 param_3,u32 param_4,
             u32 param_5,u32 param_6,u32 param_7,u32 param_8) {
  u32 uVar1;
  if ((int)(-*(u32 *)(param_1 + 8) | *(u32 *)(param_1 + 8)) < 0) {
    uVar1 = func_080D391C(param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                            *(u16 *)(param_1 + 0xc),param_1 + 0x10);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

