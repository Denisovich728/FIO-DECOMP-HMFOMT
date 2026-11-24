/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_0803EE94_7DF4 (48 functions) */
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

/* 0x08094814 (48B) | code_0803EE94_7DF4_Sub_08094814 (orig: func_08094814) | origin: pure | domain: code_0803EE94_7DF4 | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 CppRuntime_builtin_delete();
extern u32 CppRuntime_builtin_vec_delete();
void code_0803EE94_7DF4_Sub_08094814(int arg0,u32 arg1) {
  if (*(int *)(arg0 + 4) != 0) {
    CppRuntime_builtin_vec_delete();
  }
  if (*(int *)(arg0 + 8) != 0) {
    CppRuntime_builtin_vec_delete();
  }
  if ((arg1 & 1) != 0) {
    CppRuntime_builtin_delete(arg0);
  }
}

/* 0x080D02F0 (80B) | code_0803EE94_7DF4_Sub_080D02F0 (orig: func_080D02F0) | origin: pure | domain: code_0803EE94_7DF4 | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_0803EE94_7DF4_HW_IME();
extern u32 code_0803EE94_7DF4_HW_IME_0B14();
extern u32 code_0803EE94_7DF4_Sub_080D0BA8();

void code_0803EE94_7DF4_Sub_080D02F0(void) {
  int *mem_ptr;
  int aiStack_24[8];
  mem_ptr = (int *)*(u32 *)0x03000420;
  if (*mem_ptr == 0) {
    *mem_ptr = 1;
    mem_ptr[5] = 0;
    mem_ptr[6] = 0;
    mem_ptr[7] = 0;
    mem_ptr[8] = 1;
    mem_ptr[0x60] = 0;
    mem_ptr[0x61] = 0;
    mem_ptr[0x5f] = 0;
    mem_ptr[3] = 0;
    mem_ptr[4] = 0;
    aiStack_24[0] = 0;
    code_0803EE94_7DF4_Sub_080D0BA8(aiStack_24);
    code_0803EE94_7DF4_HW_IME_0B14(0,0);
    code_0803EE94_7DF4_HW_IME();
  }
}

/* 0x080D0340 (28B) | code_0803EE94_7DF4_Sub_080D0340 (orig: func_080D0340) | origin: pure | domain: code_0803EE94_7DF4 | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_0803EE94_7DF4_HW_IME_0AE0();
void code_0803EE94_7DF4_Sub_080D0340(void) {
  if (*(int *)*(u32 *)0x03000420 != 0) {
    *(int *)*(u32 *)0x03000420 = 0;
    code_0803EE94_7DF4_HW_IME_0AE0();
  }
}

/* 0x080D035C (232B) | code_0803EE94_7DF4_Sub_080D035C (orig: func_080D035C) | origin: wip | domain: code_0803EE94_7DF4 | MEDIUM / graph_algebra */
void code_0803EE94_7DF4_Sub_080D035C(void) {
    s16 iVar2;
  register int *piVar3;
  register int *piVar1;
  piVar3 = (int *)(*(u32 *)0x03000420);
  piVar1 = 0x03000420;
  if (*piVar3 != 0) {
    piVar3[7] = piVar3[0x61];
    if (*(int *)*(int *)0x0300041C == 0) {
      iVar2 = code_0803EE94_7DF4_Sub_080D0C10();
      if ((iVar2 == 0) && (*(int *)(*piVar1 + 0x180) == 0)) {
        code_0803EE94_7DF4_Sub_080D0BE0();
        *(u32 *)(*piVar1 + 0x10) = 0;
      }
      else {
        iVar2 = (u8)(*piVar1);
        if (*(int *)(iVar2 + 0x14) != 0) {
          *(u32 *)(0x14 + iVar2) = 0;
          *(u32 *)(0x18 + iVar2) = *(u32 *)(iVar2 + 0x180);
          *(u32 *)(0x180 + iVar2) = 0;
          code_0803EE94_7DF4_Sub_080D0C2C();
        }
      }
    }
    iVar2 = (*(u8 *)0x03000420);
    *(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) + 1;
    if (10 < *(u32 *)(iVar2 + 0xc)) {
      *(u32 *)(iVar2 + 0xc) = 0;
      if (*(int *)(*(u32 *)0x0300041C) != 0) {
        if (*(int *)(*(u32 *)0x0300041C) == 1) {
          code_0803EE94_7DF4_HW_IME_0B14(1,0);
        }
        else {
          code_0803EE94_7DF4_HW_IME_0B14(1,1);
        }
      }
    }
    piVar1 = 0x03000420;
    iVar2 = (*(u8 *)0x03000420);
    *(s8 *)(iVar2 + 0x10) = (u8)*(int *)(iVar2 + 0x10) + 1;
    if ((1 < *(u32 *)(*(u32 *)0x0300041C)) && (0xb4 < *(u32 *)(iVar2 + 0x10))) {
      code_0803EE94_7DF4_Sub_080D0A94(0xb);
      iVar2 = (u8)*piVar1;
      *(u32 *)(iVar2 + 0x14) = 0;
      *(u32 *)(iVar2 + 0x18) = 10;
      *(u32 *)(iVar2 + 0x180) = 0;
      code_0803EE94_7DF4_Sub_080D0C2C();
    }
  }
}

/* 0x080D0444 (16B) | code_0803EE94_7DF4_Sub_080D0444 (orig: func_080D0444) | origin: pure | domain: code_0803EE94_7DF4 | MEDIUM / graph_algebra */
void code_0803EE94_7DF4_Sub_080D0444(u32 a, u32 b) { u32 *p = *(u32 **)0x03000420; p[1] = a; p[2] = b; }

/* 0x080D0454 (60B) | code_0803EE94_7DF4_Sub_080D0454 (orig: func_080D0454) | origin: wip | domain: code_0803EE94_7DF4 | MEDIUM / graph_algebra */
void code_0803EE94_7DF4_Sub_080D0454(void) {
  int *piVar1;
  u32 auStack_28 [4];
  int iStack_18;
  u32 uStack_10;
  u16 uStack_c;
  piVar1 = 0x03000420;
  *(u32 *)(*(u16 *)0x03000420 + 0x14) = 1;
  auStack_28[0] = 1;
  code_0803EE94_7DF4_Sub_080D0BA8(auStack_28);
  auStack_28[0] = 3;
  iStack_18 = *piVar1 + 0x24;
  uStack_10 = 2;
  uStack_c = 0;
  code_0803EE94_7DF4_Sub_080D0BA8(auStack_28);
}

/* 0x080D0490 (100B) | code_0803EE94_7DF4_Sub_080D0490 (orig: func_080D0490) | origin: wip | domain: code_0803EE94_7DF4 | MEDIUM / tu_interp */
void code_0803EE94_7DF4_Sub_080D0490(u32 param_1,int param_2) {
  int *piVar1;
  int iVar2;
  piVar1 = 0x03000420;
  *(u32 *)(*(u16 *)0x03000420 + 0x14) = 2;
  code_0803EE94_7DF4_Sub_080D0BA8();
  code_0803EE94_7DF4_Sub_080D0BA8();
  iVar2 = *piVar1;
  *(u32 *)(iVar2 + 0x1c) = 0;
  *(u32 *)(iVar2 + 0x20) = param_2 + 1U >> 1;
  *(u32 *)(iVar2 + 0x184) = 0;
}

/* 0x080D04F4 (100B) | code_0803EE94_7DF4_Sub_080D04F4 (orig: func_080D04F4) | origin: wip | domain: code_0803EE94_7DF4 | MEDIUM / tu_interp */
void code_0803EE94_7DF4_Sub_080D04F4(u32 param_1,int param_2) {
  int *piVar1;
  int iVar2;
  piVar1 = 0x03000420;
  *(u32 *)(*(u16 *)0x03000420 + 0x14) = 3;
  code_0803EE94_7DF4_Sub_080D0BA8();
  code_0803EE94_7DF4_Sub_080D0BA8();
  iVar2 = *piVar1;
  *(u32 *)(iVar2 + 0x1c) = 0;
  *(u32 *)(iVar2 + 0x20) = param_2 + 1U >> 1;
  *(u32 *)(iVar2 + 0x184) = 0;
}

/* 0x080D0558 (132B) | code_0803EE94_7DF4_Sub_080D0558 (orig: func_080D0558) | origin: wip | domain: code_0803EE94_7DF4 | MEDIUM / graph_algebra */
void code_0803EE94_7DF4_Sub_080D0558(u32 param_1,int param_2,u32 param_3,int param_4) {
  int *piVar1;
  int iVar2;
  piVar1 = 0x03000420;
  *(u32 *)(*(u16 *)0x03000420 + 0x14) = 4;
  code_0803EE94_7DF4_Sub_080D0BA8();
  code_0803EE94_7DF4_Sub_080D0BA8();
  code_0803EE94_7DF4_Sub_080D0BA8();
  iVar2 = *piVar1;
  *(u32 *)(iVar2 + 0x1c) = 0;
  *(u32 *)(iVar2 + 0x20) = (param_2 + 1U >> 1) + (param_4 + 1U >> 1);
  *(u32 *)(iVar2 + 0x184) = 0;
}

/* 0x080D05DC (104B) | code_0803EE94_7DF4_Sub_080D05DC (orig: func_080D05DC) | origin: wip | domain: code_0803EE94_7DF4 | MEDIUM / tu_interp */
void code_0803EE94_7DF4_Sub_080D05DC(void) {
  int *piVar1;
  int iVar2;
  u32 auStack_30 [4];
  int iStack_20;
  u32 uStack_18;
  u16 uStack_14;
  piVar1 = 0x03000420;
  iVar2 = *(u16 *)0x03000420;
  *(u32 *)(iVar2 + 0x14) = 5;
  if (*(int *)(iVar2 + 0x30) != 0) {
    auStack_30[0] = 1;
    code_0803EE94_7DF4_Sub_080D0BA8(auStack_30);
  }
  auStack_30[0] = 4;
  iStack_20 = *piVar1 + 0x24;
  uStack_18 = 2;
  uStack_14 = 0;
  code_0803EE94_7DF4_Sub_080D0BA8();
  auStack_30[0] = 3;
  iStack_20 = *piVar1 + 0x2c;
  uStack_18 = 2;
  uStack_14 = 0;
  code_0803EE94_7DF4_Sub_080D0BA8();
  auStack_30[0] = 2;
  iStack_20 = *piVar1 + 0x28;
  uStack_18 = 2;
  uStack_14 = 0;
  code_0803EE94_7DF4_Sub_080D0BA8();
}

/* 0x080D0644 (52B) | code_0803EE94_7DF4_Sub_080D0644 (orig: func_080D0644) | origin: pure | domain: code_0803EE94_7DF4 | MEDIUM / graph_algebra */
extern void code_0803EE94_7DF4_Sub_080D05DC();
void code_0803EE94_7DF4_Sub_080D0644(u32 param_1, u32 param_2) {
    u8 **pp = (u8 **)0x03000420;
    u8 *p;
    register u32 v1;
    register u32 v2;
    register u32 v3;
    (*pp)[0x28] = param_1;
    p = *pp;
    
    v1 = param_1 >> 8;
    
    p[0x29] = v1;
    p = *pp;
    
    v2 = param_1 >> 16;
    
    p[0x2a] = v2;
    p = *pp;
    
    v3 = param_1 >> 24;
    
    p[0x2b] = v3;
    *(u32 *)(*pp + 0x30) = param_2;
    code_0803EE94_7DF4_Sub_080D05DC();
}

/* 0x080D0678 (48B) | code_0803EE94_7DF4_Sub_080D0678 (orig: func_080D0678) | origin: pure | domain: code_0803EE94_7DF4 | MEDIUM / graph_algebra */
extern "C" u32 code_0803EE94_7DF4_Sub_080D0678(void) {
    u8 *p = *(u8 **)0x03000420;
    return p[0x2c] | (p[0x2d] << 8) | (p[0x2e] << 16) | (p[0x2f] << 24);
}

/* 0x080D06A8 (12B) | code_0803EE94_7DF4_Sub_080D06A8 (orig: func_080D06A8) | origin: pure | domain: code_0803EE94_7DF4 | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_0803EE94_7DF4_Sub_080D0A94();
void code_0803EE94_7DF4_Sub_080D06A8(void) {
  code_0803EE94_7DF4_Sub_080D0A94(0xb);
}

/* 0x080D06B4 (28B) | code_0803EE94_7DF4_Sub_080D06B4 (orig: func_080D06B4) | origin: pure | domain: code_0803EE94_7DF4 | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
u32 code_0803EE94_7DF4_Sub_080D06B4(void) {
  return ((u32)(*(int *)(*(u32 *)0x03000420 + 0x14) == 0));
}

/* 0x080D06D0 (12B) | code_0803EE94_7DF4_Sub_080D06D0 (orig: func_080D06D0) | origin: pure | domain: code_0803EE94_7DF4 | MEDIUM / graph_algebra */
u32 code_0803EE94_7DF4_Sub_080D06D0(void) { return (*(u32 **)0x03000420)[6]; }

/* 0x080D06DC (40B) | code_0803EE94_7DF4_Sub_080D06DC (orig: func_080D06DC) | origin: pure | domain: code_0803EE94_7DF4 | MEDIUM / tu_interp */
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
/* paridad 96.32% preset agbcc_O2 (rosetta-alg) */
u32 code_0803EE94_7DF4_Sub_080D06DC(void) {
  u32 val;
  int val2;
  val2 = *(int *)(*(int *)0x03000420 + 0x20);
  if (val2 == 0) return 0;
  return LibGcc_udivsi3(*(int *)(*(u32 *)0x03000420 + 0x1c) * 100, val2);
  return val;
}

/* 0x080D0704 (136B) | code_0803EE94_7DF4_HW_IO_0x140 (orig: func_080D0704) | origin: wip | domain: code_0803EE94_7DF4 | MEDIUM / graph_algebra */
void code_0803EE94_7DF4_HW_IO_0x140(void) {
    u32 uStack_10;
  u16 uVar1;
  register s8 iVar2;
  iVar2 = 0;
  uVar1 = *(u16 *)0x04000140;
  if (*(u32 *)((*(u32 *)0x03000420) + 0x17c) == 0) {
    if ((uVar1 & 2) != 0) {
      uStack_10 = *(int *)0x04000150;
      iVar2 = code_0803EE94_7DF4_HW_IO_0x158(&uStack_10);
    }
    if ((iVar2 == 0) && ((uVar1 & 4) != 0)) {
      iVar2 = (s16)code_0803EE94_7DF4_HW_IO_0x154();
    }
    if ((uVar1 & 1) != 0) {
      code_0803EE94_7DF4_HW_IO_0x150();
    }
  }
  if (iVar2 != 0) {
    *(u16 *)0x04000158 = 0;
    code_0803EE94_7DF4_Sub_080D0A54(iVar2);
  }
  *(u16 *)0x04000140 = uVar1;
  iVar2 = (*(u32 *)0x03000420);
  *(u32 *)(iVar2 + 0xc) = 0;
  *(u32 *)(iVar2 + 0x10) = 0;
}

/* 0x080D0A14 (64B) | code_0803EE94_7DF4_HW_IO_0x150 (orig: func_080D0A14) | origin: wip | domain: code_0803EE94_7DF4 | MEDIUM / tu_interp */
void code_0803EE94_7DF4_HW_IO_0x150(void) {
  u32 *puVar1;
  int *piVar2;
  puVar1 = 0x04000154;
  piVar2 = (int *)*(u16 *)0x0300041C;
  if ((*piVar2 == 1) && ((u32)piVar2[1] < 3)) {
    *(u16 *)0x04000154 = *(u32 *)(*(u16 *)0x03000420 + 4);
    *(u16 *)(puVar1 + 1) = 0x20;
    piVar2[1] = piVar2[1] + 1;
  }
}

/* 0x080D0A54 (32B) | code_0803EE94_7DF4_Sub_080D0A54 (orig: func_080D0A54) | origin: pure | domain: code_0803EE94_7DF4 | MEDIUM / tu_interp */
void code_0803EE94_7DF4_Sub_080D0A54(u32 a) { **(u32 **)0x0300041C = 0; *(u32 *)(*(u8 **)0x03000420 + (0xc0 << 1)) = a; }

/* 0x080D0A74 (32B) | code_0803EE94_7DF4_Sub_080D0A74 (orig: func_080D0A74) | origin: pure | domain: code_0803EE94_7DF4 | MEDIUM / tu_interp */
void code_0803EE94_7DF4_Sub_080D0A74(void) { **(u32 **)0x0300041C = 0; *(u32 *)(*(u8 **)0x03000420 + (0xc0 << 1)) = 0; }

/* 0x080D0A94 (40B) | code_0803EE94_7DF4_Sub_080D0A94 (orig: func_080D0A94) | origin: pure | domain: code_0803EE94_7DF4 | MEDIUM / graph_algebra */
void code_0803EE94_7DF4_Sub_080D0A54(u32); void code_0803EE94_7DF4_Sub_080D0A94(u32 a) { u8 **p = (u8 **)0x03000420; *(u32 *)(*p + (0xbe << 1)) = 1; code_0803EE94_7DF4_Sub_080D0A54(a); *(u32 *)(*p + (0xbe << 1)) = 0; }

/* 0x080D0ABC (36B) | code_0803EE94_7DF4_HW_IME (orig: func_080D0ABC) | origin: pure | domain: code_0803EE94_7DF4 | MEDIUM / graph_algebra */
void code_0803EE94_7DF4_HW_IME(void) { u16 v = *(volatile u16 *)0x04000208; *(volatile u16 *)0x04000208 = 0; *(volatile u16 *)0x04000200 |= 0x80; *(volatile u16 *)0x04000208 = v; }

/* 0x080D0AE0 (52B) | code_0803EE94_7DF4_HW_IME_0AE0 (orig: func_080D0AE0) | origin: pure | domain: code_0803EE94_7DF4 | MEDIUM / graph_algebra */
void code_0803EE94_7DF4_HW_IME_0AE0(void) {
    volatile u16 *ime_ptr = (volatile u16 *)0x04000208;
    u16 ime = *ime_ptr;
    *ime_ptr = 0;
    *(volatile u16 *)0x04000200 &= 0xFF7F;
    *(volatile u16 *)0x04000202 = 0x80;
    *ime_ptr = ime;
}

/* 0x080D0B14 (116B) | code_0803EE94_7DF4_HW_IME_0B14 (orig: func_080D0B14) | origin: wip | domain: code_0803EE94_7DF4 | MEDIUM / graph_algebra */
void code_0803EE94_7DF4_HW_IME_0B14(int param_1,int param_2) {
  u16 uVar1;
  u32 *puVar2;
  uVar1 = *(u16 *)0x04000208;
  *(u16 *)0x04000208 = 0;
  if ((s8)param_1 != 0) {
    *(u16 *)0x04000134 = 0x8000;
  }
  *(u16 *)0x04000134 = 0xc000;
  if (param_2 == 0) {
    *(u16 *)0x04000158 = 0;
  }
  else {
    *(u16 *)0x04000158 = 0x30;
  }
  puVar2 = (u16)0x04000154;
  *(u32 *)0x04000154 = 0;
  *(u16 *)(puVar2 + -5) = 0x47;
  *(u16 *)((int)0xae + puVar2) = 0x80;
  *(u16 *)0x04000208 = uVar1;
}

/* 0x080D0BA8 (56B) | code_0803EE94_7DF4_Sub_080D0BA8 (orig: func_080D0BA8) | origin: wip | domain: code_0803EE94_7DF4 | MEDIUM / graph_algebra */
void code_0803EE94_7DF4_Sub_080D0BA8(u32 *param_1) {
  u32 uVar1;
  u32 uVar2;
  int iVar3;
  iVar3 = *(u16 *)0x03000420;
  uVar1 = LibGcc_umodsi3(*(int *)(iVar3 + 0x38) + 1,10);
  *(u32 *)(iVar3 + 0x38) = uVar1;
  param_1[1] = 0;
  param_1[2] = 0;
  iVar3 = iVar3 + *(int *)(iVar3 + 0x38) * 0x20;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  *(u32 *)(iVar3 + 0x3c) = *param_1;
  *(u32 *)(iVar3 + 0x40) = uVar1;
  *(u32 *)(iVar3 + 0x44) = uVar2;
  uVar1 = param_1[4];
  uVar2 = param_1[5];
  *(u32 *)(iVar3 + 0x48) = param_1[3];
  *(u32 *)(iVar3 + 0x4c) = uVar1;
  *(u32 *)(iVar3 + 0x50) = uVar2;
  uVar1 = param_1[7];
  *(u32 *)(iVar3 + 0x54) = param_1[6];
  *(u32 *)(iVar3 + 0x58) = uVar1;
}

/* 0x080D0BE0 (48B) | code_0803EE94_7DF4_Sub_080D0BE0 (orig: func_080D0BE0) | origin: pure | domain: code_0803EE94_7DF4 | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 LibGcc_umodsi3();
struct Item { u8 data[0x20]; };
struct Container {
  u8 pad[0x34];
  int a;
  int b;
  struct Item items[1];
};
void code_0803EE94_7DF4_Sub_080D0BE0(void) {
  int val;
  struct Container *c = *(struct Container **)0x03000420;
  if (c->a != c->b) {
    val = LibGcc_umodsi3(c->a + 1, 10);
    c->a = val;
    *(struct Item **)0x0300041C = &c->items[val];
  }
}

/* 0x080D0C10 (28B) | code_0803EE94_7DF4_Sub_080D0C10 (orig: func_080D0C10) | origin: pure | domain: code_0803EE94_7DF4 | MEDIUM / graph_algebra */
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
u32 code_0803EE94_7DF4_Sub_080D0C10(void) {
  return ((u32)(*(int *)((*(int *)0x03000420) + 0x34) == *(int *)((*(int *)0x03000420) + 0x38)));
}

/* 0x080D0C2C (60B) | code_0803EE94_7DF4_Sub_080D0C2C (orig: func_080D0C2C) | origin: pure | domain: code_0803EE94_7DF4 | MEDIUM / graph_algebra */
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
extern u32 LibGcc_umodsi3();
void code_0803EE94_7DF4_Sub_080D0C2C(u32 arg0, u32 arg1, u32 arg2, u32 arg3)
{
    register u32 r0 = arg0;
    register u32 r1 = arg1;
    register u32 r2 = arg2;
    register u32 r3 = arg3;
    register u32 r4;
    r0 = 0x03000420;
    r4 = *(u32 *)(r0);
    r0 = *(u32 *)(r4 + 0x34);
    r0 += 1;
    r1 = 0xa;
    r0 = LibGcc_umodsi3(r0, r1, r2, r3);
    *(u32 *)(r4 + 0x38) = r0;
    r0 = r0 << 5;
    r1 = r4 + 0;
    r1 += 0x3c;
    r1 = r1 + r0;
    r0 = 0;
    *(u32 *)(r1) = r0;
    r0 = *(u32 *)(r4 + 0x38);
    *(u32 *)(r4 + 0x34) = r0;
    r1 = 0x0300041C;
    r0 = r0 << 5;
    r0 += 0x3c;
    r4 = r4 + r0;
    *(u32 *)(r1) = r4;
    return r0;
}

/* 0x080E35DC (12B) | code_0803EE94_7DF4_vfunc_60 (orig: func_080E35DC) | origin: pure | domain: code_0803EE94_7DF4 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_0803EE94_7DF4_Ctor();
void code_0803EE94_7DF4_vfunc_60(int arg0)

{
  
  code_0803EE94_7DF4_Ctor(arg0 + -8);
  return 0;
}

/* 0x080E35E8 (40B) | code_0803EE94_7DF4_vfunc_6C (orig: func_080E35E8) | origin: pure | domain: code_0803EE94_7DF4 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_0803EE94_78C0_Sub_08050DC8();
extern u32 PortraitEngine_Sub_08050E50();
void code_0803EE94_7DF4_vfunc_6C(int arg0)

{
  
  code_0803EE94_78C0_Sub_08050DC8(arg0 + 0x1c8,0x81004e0,0,0);
  PortraitEngine_Sub_08050E50(arg0 + 0x1c8,0x39);
  return 0;
}

/* 0x080E3610 (24B) | code_0803EE94_7DF4_vfunc_70 (orig: func_080E3610) | origin: pure | domain: code_0803EE94_7DF4 | HIGH / vtable_algebra */
u8 hardware_GetField_0x00_88CC(void *); int code_0803EE94_7DF4_vfunc_70(u8 *a) { u8 v = hardware_GetField_0x00_88CC(a - 8) & 2; return ((u32)-v) >> 31; }

/* 0x080E3628 (40B) | code_0803EE94_7DF4_vfunc_80 (orig: func_080E3628) | origin: pure | domain: code_0803EE94_7DF4 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_0803EE94_78C0_Sub_08050DC8();
extern u32 PortraitEngine_Sub_08050E50();
void code_0803EE94_7DF4_vfunc_80(int arg0)

{
  
  code_0803EE94_78C0_Sub_08050DC8(arg0 + 0x1c8,0x8100524,0,0);
  PortraitEngine_Sub_08050E50(arg0 + 0x1c8,0x38);
  return 0;
}

/* 0x080E3650 (40B) | code_0803EE94_7DF4_vfunc_94 (orig: func_080E3650) | origin: pure | domain: code_0803EE94_7DF4 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_0803EE94_78C0_Sub_08050DC8();
extern u32 PortraitEngine_Sub_08050E50();
void code_0803EE94_7DF4_vfunc_94(int arg0)

{
  
  code_0803EE94_78C0_Sub_08050DC8(arg0 + 0x1c8,0x8100540,0,0);
  PortraitEngine_Sub_08050E50(arg0 + 0x1c8,0x38);
  return 0;
}

/* 0x080E3678 (60B) | code_0803EE94_7DF4_vfunc_A8 (orig: func_080E3678) | origin: pure | domain: code_0803EE94_7DF4 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_0803EE94_78C0_Sub_08050DC8();
extern u32 PortraitEngine_Sub_08050E50();
void code_0803EE94_7DF4_vfunc_A8(int arg0)

{
  
  *(u32 *)(arg0 + 0x3d8) = 0;
  *(u32 *)(arg0 + 0x3dc) = 0;
  code_0803EE94_78C0_Sub_08050DC8(arg0 + 0x1c8,0x8100558,0,0);
  PortraitEngine_Sub_08050E50(arg0 + 0x1c8,0x3a);
  return 0;
}

/* 0x080E3730 (4B) | code_0803EE94_7DF4_vfunc_B0 (orig: func_080E3730) | origin: pure | domain: code_0803EE94_7DF4 | HIGH / vtable_algebra */
void code_0803EE94_7DF4_vfunc_B0(void) {
}

/* 0x080E3734 (40B) | code_0803EE94_7DF4_vfunc_BC (orig: func_080E3734) | origin: pure | domain: code_0803EE94_7DF4 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_0803EE94_78C0_Sub_08050DC8();
extern u32 PortraitEngine_Sub_08050E50();
void code_0803EE94_7DF4_vfunc_BC(int arg0)

{
  
  code_0803EE94_78C0_Sub_08050DC8(arg0 + 0x1c8,0x8100594,0,0);
  PortraitEngine_Sub_08050E50(arg0 + 0x1c8,0x38);
  return 0;
}

/* 0x080E375C (24B) | code_0803EE94_7DF4_vfunc_C0 (orig: func_080E375C) | origin: pure | domain: code_0803EE94_7DF4 | HIGH / vtable_algebra */
u8 hardware_GetField_0x00_88CC(void *); int code_0803EE94_7DF4_vfunc_C0(u8 *a) { u8 v = hardware_GetField_0x00_88CC(a - 8) & 2; return ((u32)-v) >> 31; }

/* 0x080E38B0 (48B) | code_0803EE94_7DF4_vfunc_58 (orig: func_080E38B0) | origin: wip | domain: code_0803EE94_7DF4 | HIGH / vtable_algebra */
void * code_0803EE94_7DF4_vfunc_58(int self) {
    int iVar2;
  register u32 uVar1;
  if (*(char *)(self + 0x1b8) == '\0') {
    iVar2 = *(int *)(*(int *)(self + 0x14) + 4);
    if ((iVar2 == 0) || (iVar2 == *(int *)(self + 0x18))) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = (u32)*(s16 *)(self + 0x1ba);
  }
  return (void *)uVar1;
}

/* 0x080E3910 (4B) | code_0803EE94_7DF4_vfunc_50 (orig: func_080E3910) | origin: pure | domain: code_0803EE94_7DF4 | HIGH / vtable_algebra */
u32 code_0803EE94_7DF4_vfunc_50(void) {
    return 1;
}

/* 0x080E3914 (12B) | code_0803EE94_7DF4_vfunc_2C (orig: func_080E3914) | origin: pure | domain: code_0803EE94_7DF4 | HIGH / vtable_algebra */
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
extern u32 code_0803EE94_7DF4_Sub_080D0340();
void code_0803EE94_7DF4_vfunc_2C(void) {
  code_0803EE94_7DF4_Sub_080D0340();
  return 0;
}

/* 0x080E3920 (12B) | code_0803EE94_7DF4_vfunc_28 (orig: func_080E3920) | origin: pure | domain: code_0803EE94_7DF4 | HIGH / vtable_algebra */
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
extern u32 code_0803EE94_7DF4_Sub_080D02F0();
void code_0803EE94_7DF4_vfunc_28(void) {
  code_0803EE94_7DF4_Sub_080D02F0();
  return 0;
}

/* 0x080E392C (12B) | code_0803EE94_7DF4_vfunc_24 (orig: func_080E392C) | origin: pure | domain: code_0803EE94_7DF4 | HIGH / vtable_algebra */
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
extern u32 code_0803EE94_7DF4_Sub_080D035C();
void code_0803EE94_7DF4_vfunc_24(void) {
  code_0803EE94_7DF4_Sub_080D035C();
  return 0;
}

/* 0x080E3A44 (12B) | code_0803EE94_7DF4_vfunc_3C (orig: func_080E3A44) | origin: pure | domain: code_0803EE94_7DF4 | HIGH / vtable_algebra */
void code_0803EE94_7DF4_Sub_080D06A8(void);
void code_0803EE94_7DF4_vfunc_3C(void) {
    code_0803EE94_7DF4_Sub_080D06A8();
}

/* 0x080E3A50 (12B) | code_0803EE94_7DF4_vfunc_4C (orig: func_080E3A50) | origin: pure | domain: code_0803EE94_7DF4 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_0803EE94_7DF4_Sub_080D0678();
u32 code_0803EE94_7DF4_vfunc_4C(void) {
  return code_0803EE94_7DF4_Sub_080D0678();
}

/* 0x080E3A5C (16B) | code_0803EE94_7DF4_vfunc_38 (orig: func_080E3A5C) | origin: pure | domain: code_0803EE94_7DF4 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_0803EE94_7DF4_Sub_080D0644();
void code_0803EE94_7DF4_vfunc_38(u32 arg0,u32 arg1,u8 arg2)

{
  
  code_0803EE94_7DF4_Sub_080D0644(arg1,arg2);
  return 0;
}

/* 0x080E3A6C (20B) | code_0803EE94_7DF4_vfunc_34 (orig: func_080E3A6C) | origin: pure | domain: code_0803EE94_7DF4 | HIGH / vtable_algebra */
void code_0803EE94_7DF4_Sub_080D0558(u32, u32, u32, u32); void code_0803EE94_7DF4_vfunc_34(void *a, u32 b, u32 c, u32 d, u32 e) { code_0803EE94_7DF4_Sub_080D0558(b, c, d, e); }

/* 0x080E3A80 (12B) | code_0803EE94_7DF4_vfunc_30 (orig: func_080E3A80) | origin: pure | domain: code_0803EE94_7DF4 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_0803EE94_7DF4_Sub_080D0454();
void code_0803EE94_7DF4_vfunc_30(void)

{
  
  code_0803EE94_7DF4_Sub_080D0454(0);
  return 0;
}

/* 0x080E3A8C (16B) | code_0803EE94_7DF4_vfunc_20 (orig: func_080E3A8C) | origin: pure | domain: code_0803EE94_7DF4 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_0803EE94_7DF4_Sub_080D0444();
void code_0803EE94_7DF4_vfunc_20(int arg0, int arg1, int arg2) {
  code_0803EE94_7DF4_Sub_080D0444(arg1, arg2);
}

