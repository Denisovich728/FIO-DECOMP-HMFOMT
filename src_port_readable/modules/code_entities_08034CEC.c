/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_entities_08034CEC (6 functions) */
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

/* 0x08037098 (64B) | code_entities_08034CEC_Sub_08037098 (orig: func_08037098) | origin: wip | domain: code_entities_08034CEC | HIGH / stanhash_map_tu */
void code_entities_08034CEC_Sub_08037098(int param_1,int param_2) {
  u8 bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  iVar2 = 0;
  iVar4 = 0;
  bVar1 = *(u8 *)(param_1 + 0x20);
  iVar3 = iVar2;
  if (bVar1 == 1) {
    param_2 = -param_2;
  }
  else if (bVar1 < 2) {
    if (bVar1 != 0) {
      param_2 = iVar4;
    }
  }
  else if (bVar1 == 2) {
    iVar3 = -param_2;
    param_2 = iVar4;
  }
  else {
    iVar3 = param_2;
    param_2 = iVar4;
    if (bVar1 != 3) {
      iVar3 = iVar2;
    }
  }
  *(int *)(param_1 + 0x18) = iVar3;
  *(int *)(param_1 + 0x1c) = param_2;
}

/* 0x0803880C (20B) | code_entities_08034CEC_Sub_0803880C (orig: func_0803880C) | origin: pure | domain: code_entities_08034CEC | HIGH / stanhash_map_tu */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_entities_08034CEC_GetField_0x10();
u32 code_entities_08034CEC_Sub_0803880C(int arg0) {
  u32 val;
  if (*(int *)(arg0 + 0x10) == 0) {
    val = 0;
  }
  else {
    val = code_entities_08034CEC_GetField_0x10();
  }
  return val;
}

/* 0x080390D0 (12B) | code_entities_08034CEC_GetField_0x10 (orig: func_080390D0) | origin: pure | domain: code_entities_08034CEC | HIGH / stanhash_map_tu */
u32 code_entities_08034CEC_GetField_0x10(int *arg0) {
    int v = arg0[4];
    return ((u32)(-v | v)) >> 31;
}

/* 0x08039134 (140B) | code_entities_08034CEC_Sub_08039134 (orig: func_08039134) | origin: wip | domain: code_entities_08034CEC | HIGH / stanhash_map_tu */
u32 code_entities_08034CEC_Sub_08039134(int *param_1,u32 param_2,int param_3,int param_4) {
  int iVar3;
  int iVar2;
  u8 iVar6;
  char cVar1;
  int iVar5;
  int iVar4;
  iVar5 = 100;
  iVar6 = 0;
  iVar4 = 0x2e;
  do {
    iVar2 = func_080D3914(param_1,iVar4,*(u32 *)(*param_1 + 0x40));
    if ((((iVar2 != 0) && (*(u16 *)(iVar2 + 4) == param_2)) &&
        (cVar1 = func_080D3910(iVar2,*(u32 *)(*(int *)(iVar2 + 0x14) + 0x60)),
        cVar1 != (u32)'\0')) &&
       ((iVar3 = *(short *)(iVar2 + 10) - param_3, iVar2 = *(short *)(iVar2 + 0xe) - param_4,
        iVar2 = iVar3 * iVar3 + iVar2 * iVar2, iVar5 == 100 || (iVar6 > iVar2)))) {
      iVar5 = iVar4;
      iVar6 = iVar2;
    }
    iVar4 = 1 + iVar4;
  } while (0x46 > iVar4);
  return iVar5;
}

/* 0x080391C0 (60B) | code_entities_08034CEC_Sub_080391C0 (orig: func_080391C0) | origin: pure | domain: code_entities_08034CEC | HIGH / stanhash_map_tu */
#define true 1
#define false 0
#define NULL ((void *)0)
u32 code_entities_08034CEC_Sub_080391C0(int arg0,int arg1) {
  u32 val;
  if ((((arg1 < 0x39) && (0x00000143 < arg0)) && (arg0 <= 0x00000143 + 0x21)) ||
     (((0x0000027F < arg1 && (0xf7 < arg0)) && (arg0 < 0x119)))) {
    val = 1;
  }
  else {
    val = 0;
  }
  return val;
}

/* 0x0803A144 (60B) | code_entities_08034CEC_Sub_0803A144 (orig: func_0803A144) | origin: wip | domain: code_entities_08034CEC | HIGH / stanhash_map_tu */
u32 code_entities_08034CEC_Sub_0803A144(u32 param_1,int param_2,int param_3) {
  char cVar2;
  int iVar1;
  cVar2 = (char)param_3;
  if (param_3 * 0x1000000 < 0) {
    cVar2 = code_809E804_Sub_080AB788(3);
  }
  iVar1 = (s8)0x080F16C2;
  *(u16 *)(param_2 + 4) = (s8)*(u16 *)(cVar2 * 4 + 0x080F16C2);
  *(u32 *)(param_2 + 6) = *(u16 *)((cVar2 * 2 + 1) * 2 + iVar1);
  return;
}

