/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_0803EE94_7838 (5 functions) */
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

/* 0x0804EE30 (52B) | code_0803EE94_7838_Sub_0804EE30 (orig: func_0804EE30) | origin: wip | domain: code_0803EE94_7838 | MEDIUM / graph_algebra */
void code_0803EE94_7838_Sub_0804EE30(int param_1, int param_2, u16 param_3) {
  LibGcc_udivsi3();
  *(u16 *)(param_2) = (u8)(param_3 + (((LibGcc_udivsi3() << 2) + LibGcc_udivsi3()) << 1));
}

/* 0x0804EE64 (36B) | code_0803EE94_7838_Ctor (orig: func_0804EE64) | origin: pure | domain: code_0803EE94_7838 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
u32 code_0803EE94_7838_Ctor(u32 *arg0,u32 arg1,u32 arg2,u16 arg3,
                  u16 arg4,u32 arg5) {
  *arg0 = 0;
  arg0[1] = 0;
  arg0[2] = 0x080E7838;
  arg0[3] = arg1;
  arg0[4] = arg2;
  *(u16 *)(arg0 + 5) = arg3;
  *(u16 *)((int)arg0 + 0x16) = arg4;
  arg0[6] = arg5;
  return;
}

/* 0x0804EE88 (20B) | code_0803EE94_7838_Ctor_EE88 (orig: func_0804EE88) | origin: pure | domain: code_0803EE94_7838 | HIGH / vtable_algebra */
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
extern u32 hardware_Dtor_98AC();
void code_0803EE94_7838_Ctor_EE88(u32 arg0, u32 arg1, u32 arg2, u32 arg3) {
    register u32 r0 = arg0;
    register u32 r1 = arg1;
    register u32 r2 = arg2;
    register u32 r3 = arg3;
    r2 = 0x080E7838;
    *(u32 *)(r0 + 8) = r2;
    r0 = hardware_Dtor_98AC(r0, r1, r2, r3);
    return r0;
}

/* 0x0804EE9C (32B) | code_0803EE94_7838_vfunc_08 (orig: func_0804EE9C) | origin: pure | domain: code_0803EE94_7838 | HIGH / vtable_algebra */
struct S { u32 p0, p1, p2, a, b; u16 c, d; u32 e; }; void code_0803EE94_7838_Sub_0804EE30(u32, u32, u16, u16, u32); int code_0803EE94_7838_vfunc_08(struct S *s) { code_0803EE94_7838_Sub_0804EE30(s->a, s->b, s->c, s->d, s->e); return 0; }

/* 0x080CAEEC (128B) | code_0803EE94_7838_Sub_080CAEEC (orig: func_080CAEEC) | origin: wip | domain: code_0803EE94_7838 | MEDIUM / graph_algebra */
void code_0803EE94_7838_Sub_080CAEEC(int *param_1,u32 param_2,u32 param_3,u16 param_4,
             u16 param_5,u32 param_6) {
    int * piVar4;
    s8 iVar3;
  BOOL uVar1;
  register u32 iVar2;
  register u32 *puVar5;
  uVar1 = CppRuntime_builtin_new(0x1c);
  iVar2 = (u8)code_0803EE94_7838_Ctor(uVar1,param_2,param_3,param_4,param_5,param_6);
  iVar3 = param_1[2];
  piVar4 = (int *)LibC_malloc(0xc);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)code_linkonce_Sub_080D3BC0(0xc);
  }
  if (piVar4 != (int *)0xfffffff8) {
    piVar4[2] = (u8)iVar2;
  }
  puVar5 = *(u32 **)(iVar3 + 4);
  *piVar4 = iVar3;
  *(int **)(iVar3 + 4) = piVar4;
  piVar4[1] = (int)puVar5;
  *puVar5 = (s32)piVar4;
  func_080D3914(*param_1,iVar2,*(u32 *)(*(int *)(*param_1 + 8) + 0x10));
}

