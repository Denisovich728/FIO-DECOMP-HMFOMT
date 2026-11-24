/* FIO-DECOMP-HMFOMT :: Port Readable Module: SpriteRender (6 functions) */
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

/* 0x08093B18 (124B) | SpriteRender_Sub_08093B18 (orig: func_08093B18) | origin: wip | domain: SpriteRender | HEURISTIC / semantic_bank */
u32 SpriteRender_Sub_08093B18(int param_1) {
  int iVar1;
  u32 uVar2;
  uVar2 = 0;
  iVar1 = *(int *)(param_1 + 0x3e4);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x1dc) == 3) {
      *(int *)(param_1 + 0x3e4) = 1;
      code_0803EE94_Sub_08050E0C(param_1 + 0x1d0,0x0810058C,0x08100590,0,0,0,0,0);
    }
  }
  else if ((iVar1 == 1) && (*(int *)(param_1 + 0x1dc) == 3)) {
    iVar1 = code_0803EE94_Sub_08050DF0(param_1 + 0x1d0);
    if (iVar1 == 1) {
      uVar2 = 2;
    }
    else if (iVar1 == 2) {
      uVar2 = 3;
    }
  }
  return uVar2;
}

/* 0x08093B94 (64B) | SpriteRender_Sub_08093B94 (orig: func_08093B94) | origin: pure | domain: SpriteRender | HEURISTIC / semantic_bank */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_0803EE94_78C0_Sub_08050D8C();
extern u32 PortraitEngine_Sub_08050E50();
void SpriteRender_Sub_08093B94(int arg0) {
  *(u32 *)(arg0 + 0x3e0) = 0;
  *(u32 *)(arg0 + 0x3e4) = 0;
  code_0803EE94_78C0_Sub_08050D8C(arg0 + 0x1d0,0x081005EC);
  PortraitEngine_Sub_08050E50(arg0 + 0x1d0,0x3a);
  *(u32 *)(arg0 + 0x1dc) = 4;
}

/* 0x08093BD8 (36B) | SpriteRender_Sub_08093BD8 (orig: func_08093BD8) | origin: pure | domain: SpriteRender | HEURISTIC / semantic_bank */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_0803EE94_78C0_Sub_08050D8C();
extern u32 PortraitEngine_Sub_08050E50();
void SpriteRender_Sub_08093BD8(int arg0) {
  code_0803EE94_78C0_Sub_08050D8C(arg0 + 0x1d0,0x081005D8);
  PortraitEngine_Sub_08050E50(arg0 + 0x1d0,0x38);
}

/* 0x08094208 (20B) | SpriteRender_Sub_08094208 (orig: func_08094208) | origin: pure | domain: SpriteRender | HEURISTIC / semantic_bank */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D3910();
void SpriteRender_Sub_08094208(int arg0) {
  *(u8 *)(arg0 + 0xd) = 1;
  func_080D3910(arg0, *(u32 *)(*(u32 *)(arg0) + 0x2c));
}

/* 0x08094224 (40B) | SpriteRender_Sub_08094224 (orig: func_08094224) | origin: pure | domain: SpriteRender | HEURISTIC / semantic_bank */
struct S { u32 f0, f4, f8, fc, f10; };
extern "C" void SpriteRender_Sub_08094224(S *s, int x) {
    switch (x) {
    case 2:
        s->f8 = 0x081007AC;
        break;
    case 3:
        s->f10 = 1;
        s->f8 = 0x0810089C;
        break;
    }
}

/* 0x0809C160 (204B) | SpriteRender_Sub_0809C160 (orig: func_0809C160) | origin: wip | domain: SpriteRender | HEURISTIC / semantic_bank */
void * SpriteRender_Sub_0809C160(u32 param_1,u32 param_2,u32 *param_3) {
  int iVar1;
  u32 uVar2;

  u32 *puVar3;
  
  iVar1 = func_0800DB30(param_2);
  if (iVar1 - 5U < 0x29) {
    switch(*(u32 *)(((const u32 *)0x0809c178) + (iVar1 - 5U) * 4) & 0xfffffffe) {
    case 0x809c17c:
      *param_3 = 0;
      puVar3 = param_3 + 1;
      *puVar3 = puVar3;
      param_3[2] = 0;
      *puVar3 = puVar3;
      param_3[2] = 0;
      *puVar3 = puVar3;
      param_3[2] = 0;
      *puVar3 = puVar3;
      param_3[2] = 0;
      *puVar3 = puVar3;
      param_3[2] = 0;
      *puVar3 = puVar3;
      param_3[2] = 0;
      *puVar3 = puVar3;
      param_3[2] = 0;
      *puVar3 = 0;
      puVar3 = param_3 + 2;
      *puVar3 = puVar3;
      param_3[3] = 0;
      *puVar3 = puVar3;
      param_3[3] = 0;
      *puVar3 = puVar3;
      param_3[3] = 0;
      *puVar3 = puVar3;
      param_3[3] = 0;
      *puVar3 = puVar3;
      param_3[3] = 0;
      *puVar3 = puVar3;
      param_3[3] = 0;
      *puVar3 = puVar3;
      param_3[3] = 0;
      *puVar3 = 0;
      puVar3 = param_3 + 3;
      *puVar3 = puVar3;
      param_3[4] = 0;
      *puVar3 = puVar3;
      param_3[4] = 0;
      *puVar3 = puVar3;
      param_3[4] = 0;
      *puVar3 = puVar3;
      param_3[4] = 0;
      *puVar3 = puVar3;
      param_3[4] = 0;
      *puVar3 = puVar3;
      param_3[4] = 0;
      *puVar3 = puVar3;
      param_3[4] = 0;
      *puVar3 = 0;
      puVar3 = param_3 + 4;
      *puVar3 = puVar3;
      param_3[5] = 0;
      *puVar3 = puVar3;
      param_3[5] = 0;
      *puVar3 = puVar3;
      param_3[5] = 0;
      *puVar3 = puVar3;
      param_3[5] = 0;
      *puVar3 = puVar3;
      param_3[5] = 0;
      *puVar3 = puVar3;
      param_3[5] = 0;
      *puVar3 = puVar3;
      param_3[5] = 0;
      *puVar3 = 0;
      puVar3 = param_3 + 5;
      *puVar3 = puVar3;
      param_3[6] = 0;
      *puVar3 = puVar3;
      param_3[6] = 0;
      *puVar3 = puVar3;
      param_3[6] = 0;
      *puVar3 = puVar3;
      param_3[6] = 0;
      *puVar3 = puVar3;
      param_3[6] = 0;
      *puVar3 = puVar3;
      param_3[6] = 0;
      *puVar3 = puVar3;
      param_3[6] = 0;
      *puVar3 = 0;
    case 0x809c220:
      uVar2 = 1;
      goto LAB_0809c226;
    }
  }
  uVar2 = 0;
LAB_0809c226:
  return (void *)uVar2;
}

