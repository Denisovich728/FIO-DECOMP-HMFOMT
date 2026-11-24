/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_0803A8A4_7778 (14 functions) */
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

/* 0x0803BD88 (48B) | code_0803A8A4_7778_Sub_0803BD88 (orig: func_0803BD88) | origin: wip | domain: code_0803A8A4_7778 | MEDIUM / graph_algebra */
void code_0803A8A4_7778_Sub_0803BD88(int param_1) {
  if ((*(u8 *)(param_1 + 0xc) & 0x7f) != 0 || (char)*(u8 *)(param_1 + 0xb) < '\0') {
    *(s32 *)(param_1 + 0xb) = *(u8 *)(param_1 + 0xb) & 0x7f;
    *(u8 *)(param_1 + 0xc) = *(s8 *)(param_1 + 0xc) & 0x80 | 1;
  }
}

/* 0x0803BDB8 (44B) | code_0803A8A4_7778_Sub_0803BDB8 (orig: func_0803BDB8) | origin: wip | domain: code_0803A8A4_7778 | MEDIUM / graph_algebra */
void code_0803A8A4_7778_Sub_0803BDB8(int param_1) {
  if ((*(u8 *)(param_1 + 0xc) & 0x7f) != 0 || (char)*(u8 *)(param_1 + 0xb) < '\0') {
    *(u8 *)(param_1 + 0xb) = *(u8 *)(param_1 + 0xb) & 0x7f;
    *(u8 *)(param_1 + 0xc) = *(u8 *)(param_1 + 0xc) & 0x80;
  }
}

/* 0x0803BDE4 (8B) | code_0803A8A4_7778_SetField_0x00 (orig: func_0803BDE4) | origin: pure | domain: code_0803A8A4_7778 | MEDIUM / graph_algebra */
void code_0803A8A4_7778_SetField_0x00(u16 *a, u16 b, u16 c) { a[0] = b; a[1] = c; }

/* 0x0803BDEC (16B) | code_0803A8A4_7778_GetField_0x00 (orig: func_0803BDEC) | origin: pure | domain: code_0803A8A4_7778 | MEDIUM / graph_algebra */
void code_0803A8A4_7778_GetField_0x00(u16 *a, int b, int c) { a[0] += b; a[1] += c; }

/* 0x0803BDFC (84B) | code_0803A8A4_7778_Create (orig: func_0803BDFC) | origin: pure | domain: code_0803A8A4_7778 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 CppRuntime_builtin_new();
extern u32 hardware_5BB4_Ctor();
u32 code_0803A8A4_7778_Create(u32 *arg0,u32 arg1,u32 arg2,u32 arg3,
             u32 arg4,u32 arg5,u32 arg6,u32 arg7,
             u32 arg8) {
  u32 val;
  arg0[1] = 0x080E7778;
  val = CppRuntime_builtin_new(100);
  val = hardware_5BB4_Ctor(val,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8);
  *arg0 = val;
  return arg0;
}

/* 0x0803BE50 (76B) | code_0803A8A4_7778_Dtor (orig: func_0803BE50) | origin: pure | domain: code_0803A8A4_7778 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 CppRuntime_builtin_delete();
extern u32 hardware_Dtor_98AC();
extern u32 hardware_Ctor_98DC();
void code_0803A8A4_7778_Dtor(int *arg0,u32 arg1) {
  int val;
  arg0[1] = 0x080E7778;
  val = *arg0;
  if (val != 0) {
    hardware_Dtor_98AC(val + 0x44,2);
    hardware_Dtor_98AC(val + 0x2c,2);
    hardware_Ctor_98DC(val + 0x10,2);
    CppRuntime_builtin_delete(val);
  }
  if ((arg1 & 1) != 0) {
    CppRuntime_builtin_delete(arg0);
  }
}

/* 0x0803BEBC (12B) | code_0803A8A4_7778_vfunc_0C (orig: func_0803BEBC) | origin: pure | domain: code_0803A8A4_7778 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 hardware_Sub_0803BCF8();
void code_0803A8A4_7778_vfunc_0C(u32 *arg0) {
  hardware_Sub_0803BCF8(*arg0);
}

/* 0x0803BEC8 (12B) | code_0803A8A4_7778_vfunc_10 (orig: func_0803BEC8) | origin: pure | domain: code_0803A8A4_7778 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 hardware_Sub_0803BD60();
void code_0803A8A4_7778_vfunc_10(u32 *arg0) {
  hardware_Sub_0803BD60(*arg0);
}

/* 0x0803BED4 (12B) | code_0803A8A4_7778_vfunc_14 (orig: func_0803BED4) | origin: pure | domain: code_0803A8A4_7778 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_0803A8A4_7778_Sub_0803BD88();
void code_0803A8A4_7778_vfunc_14(u32 *arg0) {
  code_0803A8A4_7778_Sub_0803BD88(*arg0);
}

/* 0x0803BEE0 (12B) | code_0803A8A4_7778_vfunc_18 (orig: func_0803BEE0) | origin: pure | domain: code_0803A8A4_7778 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_0803A8A4_7778_Sub_0803BDB8();
void code_0803A8A4_7778_vfunc_18(u32 *arg0) {
  code_0803A8A4_7778_Sub_0803BDB8(*arg0);
}

/* 0x0803BEEC (8B) | code_0803A8A4_7778_vfunc_1C (orig: func_0803BEEC) | origin: pure | domain: code_0803A8A4_7778 | HIGH / vtable_algebra */
s16 code_0803A8A4_7778_vfunc_1C(s16 **a) { return (*a)[0]; }

/* 0x0803BEF4 (8B) | code_0803A8A4_7778_vfunc_20 (orig: func_0803BEF4) | origin: pure | domain: code_0803A8A4_7778 | HIGH / vtable_algebra */
s16 code_0803A8A4_7778_vfunc_20(s16 **a) { return (*a)[1]; }

/* 0x0803BEFC (12B) | code_0803A8A4_7778_vfunc_24 (orig: func_0803BEFC) | origin: pure | domain: code_0803A8A4_7778 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_0803A8A4_7778_SetField_0x00();
void code_0803A8A4_7778_vfunc_24(u32 *arg0) {
  code_0803A8A4_7778_SetField_0x00(*arg0);
}

/* 0x0803BF08 (12B) | code_0803A8A4_7778_vfunc_28 (orig: func_0803BF08) | origin: pure | domain: code_0803A8A4_7778 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_0803A8A4_7778_GetField_0x00();
void code_0803A8A4_7778_vfunc_28(u32 *arg0) {
  code_0803A8A4_7778_GetField_0x00(*arg0);
}

