/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_0803EE94_7868 (9 functions) */
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

/* 0x0804EA58 (40B) | code_0803EE94_7868_Ctor (orig: func_0804EA58) | origin: pure | domain: code_0803EE94_7868 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
u32 code_0803EE94_7868_Ctor(u32 *arg0,u32 arg1,u16 arg2,u32 arg3,
                  u32 arg4,u16 arg5,u32 arg6) {
  *arg0 = 0;
  arg0[1] = 0;
  arg0[2] = 0x080E7868;
  arg0[3] = arg1;
  *(u16 *)((int)arg0 + 0x12) = arg2;
  arg0[5] = arg3;
  arg0[6] = arg4;
  *(u16 *)(arg0 + 4) = arg5;
  arg0[7] = arg6;
  return;
}

/* 0x0804EA80 (20B) | code_0803EE94_7868_Ctor_EA80 (orig: func_0804EA80) | origin: pure | domain: code_0803EE94_7868 | HIGH / vtable_algebra */
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
void code_0803EE94_7868_Ctor_EA80(u32 arg0, u32 arg1, u32 arg2, u32 arg3)
{
    register u32 r0 = arg0;
    register u32 r1 = arg1;
    register u32 r2 = arg2;
    register u32 r3 = arg3;
    r2 = 0x080E7868;
    *(u32 *)(r0 + 8) = r2;
    r0 = hardware_Dtor_98AC(r0, r1, r2, r3);
    return r0;
}

/* 0x0804EEFC (36B) | code_0803EE94_7868_vfunc_08 (orig: func_0804EEFC) | origin: pure | domain: code_0803EE94_7868 | HIGH / vtable_algebra */
struct S { u32 p0, p1, p2, a; u16 e, b; u32 c, d, f; }; void code_0803EE94_Sub_0804E9F4(u32, u16, u32, u32, u16, u32); int code_0803EE94_7868_vfunc_08(struct S *s) { code_0803EE94_Sub_0804E9F4(s->a, s->b, s->c, s->d, s->e, s->f); return 0; }

/* 0x080CADA8 (12B) | code_0803EE94_7868_SetField_0x00 (orig: func_080CADA8) | origin: pure | domain: code_0803EE94_7868 | MEDIUM / graph_algebra */
void code_0803EE94_7868_SetField_0x00(u32 *arg0) {
    arg0[0] = 0;
    arg0[1] = 0;
    arg0[2] = 0;
}

/* 0x080CAE60 (140B) | code_0803EE94_7868_Sub_080CAE60 (orig: func_080CAE60) | origin: wip | domain: code_0803EE94_7868 | MEDIUM / graph_algebra */
void code_0803EE94_7868_Sub_080CAE60(int *param_1,u32 param_2,u16 param_3,u32 param_4,
             u32 param_5,u16 param_6,u32 param_7) {
    u32 _sp_pad[2];
    u32 * puVar5;
  u16 uVar1;
  int iVar3;
  unsigned int iVar2;
  register int *piVar4;
  (void)_sp_pad;
  iVar3 = param_1[2];
  uVar1 = CppRuntime_builtin_new(0x20);
  iVar2 = code_0803EE94_7868_Ctor(uVar1,param_2,param_3,param_4,param_5,param_6,param_7);
  piVar4 = (int *)LibC_malloc(0xc);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)code_linkonce_Sub_080D3BC0(0xc);
  }
  if (piVar4 != (int *)0xfffffff8) {
    piVar4[2] = iVar2;
  }
  puVar5 = *(u32 **)(iVar3 + 4);
  *piVar4 = iVar3;
  piVar4[1] = (int)puVar5;
  *puVar5 = (s8)piVar4;
  *(int **)(iVar3 + 4) = piVar4;
  func_080D3914(*param_1,iVar2,*(u32 *)(*(int *)(*param_1 + 8) + 0x10));
}

/* 0x080CBA60 (144B) | code_0803EE94_7868_Sub_080CBA60 (orig: func_080CBA60) | origin: wip | domain: code_0803EE94_7868 | MEDIUM / graph_algebra */
void code_0803EE94_7868_Sub_080CBA60(s8 param_1, char param_2) {
  u32 tmp_all_a1;
  u32 tmp_all_a0;
  u32 _sp_pad[4];
  (void)_sp_pad;
  tmp_all_a1 = (0x86 << 2);
  code_0803EE94_7868_Sub_080CAE60();
  tmp_all_a0 = (((((param_2 << 1) + param_2) << 2) + param_1) + ((0x86 * 4)));
  code_0803EE94_7868_Sub_080CAE60();
  code_0803EE94_7868_SetField_0x00(tmp_all_a0, tmp_all_a1);
}

/* 0x080CC0B4 (128B) | code_0803EE94_7868_Sub_080CC0B4 (orig: func_080CC0B4) | origin: wip | domain: code_0803EE94_7868 | MEDIUM / graph_algebra */
void code_0803EE94_7868_Sub_080CC0B4(int param_1) {
  u32 uVar1;
  code_0803EE94_7868_SetField_0x00(param_1 + 0x280);
  uVar1 = *(u16 *)0x0811785C;
  code_0803EE94_7868_Sub_080CAE60(param_1,(uVar1 >> 8 & 0xff) * 0x40 + (uVar1 & 0xff) * 2 + 0x0600F000,0x54,2,2,0,
                0x20);
  code_0803EE94_7868_Sub_080CAE60(param_1,(uVar1 >> 8 & 0xff) * 0x40 + (uVar1 & 0xff) * 2 + 0x0600F080,0x54,2,1,0,
                0x20);
}

/* 0x080CCDEC (108B) | code_0803EE94_7868_Sub_080CCDEC (orig: func_080CCDEC) | origin: wip | domain: code_0803EE94_7868 | MEDIUM / graph_algebra */
void code_0803EE94_7868_Sub_080CCDEC(int param_1,int param_2) {
  u32 uVar2;
  register u32 uVar1;
  code_0803EE94_7868_SetField_0x00(param_2 * 0xc + param_1 + 0x218);
  uVar1 = *(u32 *)(param_2 * 4 + 0x08117860);
  uVar2 = (s16)uVar1 & 0xFFFFFF00;
  code_0803EE94_7868_Sub_080CAE60(param_1,((0xff00 & uVar2) >> 8) * 0x40 +
                        (uVar2 & 0xff | uVar1 + 0xf & 0xff) * 2 + 0x0600F080,0x54,2,1,0,0x20);
}

/* 0x080CD4D4 (96B) | code_0803EE94_7868_Sub_080CD4D4 (orig: func_080CD4D4) | origin: wip | domain: code_0803EE94_7868 | MEDIUM / graph_algebra */
void code_0803EE94_7868_Sub_080CD4D4(int param_1) {
  u32 uVar1;
  code_0803EE94_7868_SetField_0x00(param_1 + 0x280);
  uVar1 = (u16)*(u16 *)0x0811785C & 0xFFFFFF00;
  code_0803EE94_7868_Sub_080CAE60(param_1,((uVar1 & 0xff00) >> 8) * 0x40 +
                        (uVar1 & 0xff | *(u32 *)0x0811785C + 0xf & 0xff) * 2 + 0x0600F080,0x54,2,1,0,
                0x20);
}

