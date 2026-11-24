/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_linkonce (10 functions) */
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

/* 0x080D3BC0 (40B) | code_linkonce_Sub_080D3BC0 (orig: func_080D3BC0) | origin: pure | domain: code_linkonce | HIGH / stanhash_map_tu */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 LibC_malloc();
extern u32 func_080D390C();
u32 code_linkonce_Sub_080D3BC0(u32 arg0) {
  int *mem_ptr;
  int val;
  mem_ptr = 0x03000CD4;
  do {
    if (*mem_ptr == 0) {
      do {
      } while( true );
    }
    func_080D390C();
    val = LibC_malloc(arg0);
  } while (val == 0);
  return;
}

/* 0x080D78E0 (24B) | code_linkonce_Sub_080D78E0 (orig: func_080D78E0) | origin: pure | domain: code_linkonce | HIGH / stanhash_map_tu */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D3910();
void code_linkonce_Sub_080D78E0(void) {
  func_080D3910(*(int *)*(u32 *)0x03000410,*(u32 *)(*(int *)(*(int *)*(u32 *)0x03000410 + 8) + 8));
}

/* 0x080DC294 (32B) | code_linkonce_Sub_080DC294 (orig: func_080DC294) | origin: pure | domain: code_linkonce | HIGH / stanhash_map_tu */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 ScriptEngine_LoadById();
extern u32 game_state_Sub_080D7F3C();
/* paridad 94.1% preset agbcc_O2 */
void code_linkonce_Sub_080DC294(u32 arg0) {
  ScriptEngine_LoadById(*(int *)0x0300040C + 8);
  game_state_Sub_080D7F3C(arg0);
}

/* 0x080E2B28 (52B) | code_linkonce_Sub_080E2B28 (orig: func_080E2B28) | origin: wip | domain: code_linkonce | HIGH / stanhash_map_tu */
u32 code_linkonce_Sub_080E2B28(int param_1) {
  int iVar1;
  int iVar2;
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 0) {
    do {
      iVar1 = param_1;
      param_1 = *(int *)(iVar1 + 4);
    } while (iVar1 == *(int *)(param_1 + 0xc));
    if (*(int *)(iVar1 + 0xc) != param_1) {
      iVar1 = param_1;
    }
  }
  else {
    iVar2 = *(int *)(iVar1 + 8);
    while (iVar2 != 0) {
      iVar1 = *(int *)(iVar1 + 8);
      iVar2 = *(int *)(iVar1 + 8);
    }
  }
  return iVar1;
}

/* 0x080E3774 (36B) | code_linkonce_Sub_080E3774 (orig: func_080E3774) | origin: pure | domain: code_linkonce | HIGH / stanhash_map_tu */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_0803EE94_78C0_Sub_08050D8C();
extern u32 PortraitEngine_Sub_08050E50();
void code_linkonce_Sub_080E3774(int arg0)

{
  
  code_0803EE94_78C0_Sub_08050D8C(arg0 + 0x1c8,0x81005d8);
  PortraitEngine_Sub_08050E50(arg0 + 0x1c8,0x38);
  return 0;
}

/* 0x080E379C (64B) | code_linkonce_Sub_080E379C (orig: func_080E379C) | origin: pure | domain: code_linkonce | HIGH / stanhash_map_tu */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_0803EE94_78C0_Sub_08050D8C();
extern u32 PortraitEngine_Sub_08050E50();
void code_linkonce_Sub_080E379C(int arg0)

{
  
  *(u32 *)(arg0 + 0x3d8) = 0;
  *(u32 *)(arg0 + 0x3dc) = 0;
  code_0803EE94_78C0_Sub_08050D8C(arg0 + 0x1c8,0x81005ec);
  PortraitEngine_Sub_08050E50(arg0 + 0x1c8,0x3a);
  *(u32 *)(arg0 + 0x1d4) = 4;
  return 0;
}

/* 0x080E37DC (124B) | code_linkonce_Sub_080E37DC (orig: func_080E37DC) | origin: wip | domain: code_linkonce | HIGH / stanhash_map_tu */
void * code_linkonce_Sub_080E37DC(int param_1) {
  int iVar1;
  u32 uVar2;
  uVar2 = 0;
  iVar1 = *(int *)(param_1 + 0x3dc);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x1d4) == 3) {
      *(int *)(param_1 + 0x3dc) = 1;
      code_0803EE94_Sub_08050E0C(param_1 + 0x1c8,0x810058c,0x8100590,0,0,0,0,0);
    }
  }
  else if ((iVar1 == 1) && (*(int *)(param_1 + 0x1d4) == 3)) {
    iVar1 = code_0803EE94_Sub_08050DF0(param_1 + 0x1c8);
    if (iVar1 == 1) {
      uVar2 = 2;
    }
    else if (iVar1 == 2) {
      uVar2 = 3;
    }
  }
  return (void *)uVar2;
}

/* 0x080E3858 (4B) | code_linkonce_NoOp (orig: func_080E3858) | origin: pure | domain: code_linkonce | HIGH / stanhash_map_tu */
void code_linkonce_NoOp(void) {
}

/* 0x080E5418 (20B) | code_linkonce_Sub_080E5418 (orig: func_080E5418) | origin: pure | domain: code_linkonce | HIGH / stanhash_map_tu */
void code_809E804_HW_VCOUNT(u32); void code_linkonce_Sub_080E5418(void) { code_809E804_HW_VCOUNT(**(u32 ***)0x03000414); }

/* 0x080E54C4 (44B) | code_linkonce_Sub_080E54C4 (orig: func_080E54C4) | origin: pure | domain: code_linkonce | HIGH / stanhash_map_tu */
extern void LibC_free();
void code_linkonce_Sub_080E54C4(u32 arg0, int arg1) {
    if (arg1 != 0) {
        do {
            int next;
            code_linkonce_Sub_080E54C4(arg0, *(u32 *)(arg1 + 0xc));
            next = *(int *)(arg1 + 8);
            if (arg1 != 0) {
                LibC_free(arg1);
            }
            arg1 = next;
        } while (arg1 != 0);
    }
}

