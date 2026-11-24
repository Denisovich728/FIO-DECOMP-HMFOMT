/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_0803A8A4_77A4 (6 functions) */
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

/* 0x0803BF78 (80B) | code_0803A8A4_77A4_Create (orig: func_0803BF78) | origin: pure | domain: code_0803A8A4_77A4 | HIGH / vtable_algebra */
struct S { u32 p0, a, b; u8 c, d, e, f; };
extern void code_0803A8A4_7778_Create();
extern u32 CppRuntime_builtin_new();
extern u32 SpriteAnimEngine_77D0_Dtor();
struct S *code_0803A8A4_77A4_Create(struct S *p, u32 param_2, u32 param_3, u32 param_4, u32 param_5, u32 param_6) {
    register u8 z;
    code_0803A8A4_7778_Create(p, 0, 0x88, 0xf0, 0x18, param_2, param_3, param_4, param_5);
    p->a = 0x080E77A4;
    p->b = SpriteAnimEngine_77D0_Dtor(CppRuntime_builtin_new(0x41c));
    z = 0;
    
    p->c = param_6;
    p->d = z;
    p->e = 1;
    p->f = 1;
    return p;
}

/* 0x0803BFC8 (40B) | code_0803A8A4_77A4_Ctor (orig: func_0803BFC8) | origin: pure | domain: code_0803A8A4_77A4 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_0803A8A4_7778_Dtor();
extern u32 SpriteAnimEngine_5A28_Dtor_0C38();
void code_0803A8A4_77A4_Ctor(int arg0,u32 arg1) {
  *(u32 *)(arg0 + 4) = 0x080E77A4;
  if (*(int *)(arg0 + 8) != 0) {
    SpriteAnimEngine_5A28_Dtor_0C38(*(int *)(arg0 + 8),3);
  }
  code_0803A8A4_7778_Dtor(arg0,arg1);
}

/* 0x0803BFF0 (28B) | code_0803A8A4_77A4_Sub_0803BFF0 (orig: func_0803BFF0) | origin: pure | domain: code_0803A8A4_77A4 | MEDIUM / tu_interp */
u32 code_0803A8A4_77A4_Sub_0803C028(u32, u32, u32, u32, u32, u32, u32); u32 code_0803A8A4_77A4_Sub_0803BFF0(u32 a, u32 b, u32 c, u32 d, u32 e, u32 f) { return code_0803A8A4_77A4_Sub_0803C028(a, b, c, d, e, f, 0); }

/* 0x0803C00C (28B) | code_0803A8A4_77A4_Sub_0803C00C (orig: func_0803C00C) | origin: pure | domain: code_0803A8A4_77A4 | MEDIUM / tu_interp */
u32 code_0803A8A4_77A4_Sub_0803C028(u32, u32, u32, u32, u32, u32, u32); u32 code_0803A8A4_77A4_Sub_0803C00C(u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g) { return code_0803A8A4_77A4_Sub_0803C028(a, b, c, d, e, f, g); }

/* 0x0803C518 (20B) | code_0803A8A4_77A4_vfunc_0C (orig: func_0803C518) | origin: pure | domain: code_0803A8A4_77A4 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_0803A8A4_7778_vfunc_0C();
void code_0803A8A4_77A4_vfunc_0C(int arg0) {
  code_0803A8A4_7778_vfunc_0C();
  *(u8 *)(arg0 + 0xd) = 1;
  *(u8 *)(arg0 + 0xf) = 1;
}

/* 0x0803C52C (20B) | code_0803A8A4_77A4_vfunc_10 (orig: func_0803C52C) | origin: pure | domain: code_0803A8A4_77A4 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_0803A8A4_7778_vfunc_10();
void code_0803A8A4_77A4_vfunc_10(int arg0) {
  code_0803A8A4_7778_vfunc_10();
  *(u8 *)(arg0 + 0xd) = 1;
  *(u8 *)(arg0 + 0xf) = 1;
}

