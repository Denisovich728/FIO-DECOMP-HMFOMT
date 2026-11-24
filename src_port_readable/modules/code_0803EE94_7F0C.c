/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_0803EE94_7F0C (5 functions) */
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

/* 0x080947BC (88B) | code_0803EE94_7F0C_Sub_080947BC (orig: func_080947BC) | origin: wip | domain: code_0803EE94_7F0C | MEDIUM / graph_algebra */
u32 code_0803EE94_7F0C_Sub_080947BC(int *param_1,int param_2) {
  BOOL iVar2;
  int iVar1;
  *param_1 = param_2;
  SpriteAnimEngine_5B80_Return_43();
  iVar1 = CppRuntime_builtin_vec_new();
  param_1[1] = iVar1;
  SpriteAnimEngine_5B80_Return_47(param_1);
  iVar1 = CppRuntime_builtin_vec_new();
  iVar1 = (u8)0;
  param_1[2] = iVar1;
  do {
    iVar2 = iVar1;
    if (0 > iVar1) {
      iVar2 = 7 + iVar1;
    }
    *(u8 *)((int)param_1 + iVar1 + 0x18) =
         (u8)((int)(u32)*(u8 *)(*param_1 + 0x000021D4 + (iVar2 >> 3)) >>
               (iVar1 + (iVar2 >> 3) * -8 & 0xffU)) & 1;
    iVar1 = iVar1 + 1;
  } while (0x31 > iVar1);
  return param_1;
}

/* 0x080D02CC (32B) | code_0803EE94_7F0C_Sub_080D02CC (orig: func_080D02CC) | origin: pure | domain: code_0803EE94_7F0C | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_0803EE94_7F0C_Sub_080D0B88();
/* paridad 94.4% preset agbcc_O2 */
void code_0803EE94_7F0C_Sub_080D02CC(u32 *arg0) {
  int *mem_ptr;
  int val;
  mem_ptr = 0x03000420;
  *mem_ptr = (int)arg0;
  *arg0 = 0;
  code_0803EE94_7F0C_Sub_080D0B88();
  val = *mem_ptr;
  *(u32 *)(val + 4) = 0;
  *(u32 *)(val + 8) = 0;
}

/* 0x080D0B88 (32B) | code_0803EE94_7F0C_Sub_080D0B88 (orig: func_080D0B88) | origin: pure | domain: code_0803EE94_7F0C | MEDIUM / graph_algebra */
void code_0803EE94_7F0C_Sub_080D0B88(void) { u32 *p = *(u32 **)0x03000420; p[13] = 0; p[14] = 0; *(u32 **)0x0300041C = &p[15]; p[15] = 0; }

/* 0x080E3A9C (196B) | code_0803EE94_7F0C_Sub_080E3A9C (orig: func_080E3A9C) | origin: wip | domain: code_0803EE94_7F0C | MEDIUM / graph_algebra */
void code_0803EE94_7F0C_Sub_080E3A9C(int param_1,u32 param_2) {
  int iVar1;

  if (4 < param_2) {
    return 0;
  }
  switch(*(u32 *)(((const u32 *)0x080e3ab0) + param_2 * 4) & 0xfffffffe) {
  case 0x80e3ab4:
    param_1 = param_1 + -0x48;
  case 0x80e3ac8:
    *(u8 *)(param_1 + 0x1b8) = 0;
    return 0;
  case 0x80e3ad4:
    *(u8 *)(param_1 + 0x1b8) = 1;
    iVar1 = 0x1B9;
    break;
  case 0x80e3ae8:
    *(u8 *)(param_1 + 0x1b8) = 1;
    iVar1 = 0x1B9;
    *(u8 *)(param_1 + 0x1B9) = 1;
    *(u8 *)(param_1 + iVar1 + 1) = 1;
    iVar1 = 0x1BB;
    break;
  case 0x80e3b10:
    *(u8 *)(param_1 + 0x1b8) = 1;
    iVar1 = 0x1B9;
    *(u8 *)(param_1 + 0x1B9) = 1;
    *(u8 *)(param_1 + iVar1 + 1) = 0;
    *(u8 *)(param_1 + 0x1BB) = 1;
    return 0;
  case 0x80e3b38:
    *(u8 *)(param_1 + 0x1b8) = 1;
    *(u8 *)(param_1 + 0x1b9) = 1;
    *(u8 *)(param_1 + 0x1ba) = 0;
    iVar1 = 0x1bb;
  }
  *(u8 *)(param_1 + iVar1) = 0;
  return 0;
}

/* 0x080E3B60 (32B) | code_0803EE94_7F0C_Ctor (orig: func_080E3B60) | origin: pure | domain: code_0803EE94_7F0C | HIGH / vtable_algebra */
void code_809E804_NoOp(void); void code_0803EE94_8028_Dtor(void *, void *); void code_0803EE94_7F0C_Ctor(u32 *a, void *b) { *a = 0x080E7F0C; code_809E804_NoOp(); code_0803EE94_8028_Dtor(a, b); }

