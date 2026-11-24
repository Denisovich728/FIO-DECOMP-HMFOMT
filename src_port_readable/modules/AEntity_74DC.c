/* FIO-DECOMP-HMFOMT :: Port Readable Module: AEntity_74DC (8 functions) */
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

/* 0x080398A4 (284B) | AEntity_74DC_Dtor (orig: func_080398A4) | origin: pure | domain: AEntity_74DC | HIGH / vtable_algebra */
extern void Actor_Ctor_B114();
extern void code_entity_08020018_Ctor();
extern u32 *CppRuntime_builtin_new();
extern void CppRuntime_builtin_delete();
extern u32 func_080D3914();
extern u32 AEntity_74DC_Sub_08039D5C();
extern void code_entities_Sub_08020080();
extern u32 func_08039D4C();
extern void AActorEntity_SetAnim();
u32 AEntity_74DC_Dtor(int self, u32 param_2, u32 param_3) {
    int iVar1;
    int *piVar2;
    u32 uVar3;
    u32 uVar4;
    u32 uVar5;
    u32 *puVar6;
    u32 *p;
    u8 auStack_18[8];
    Actor_Ctor_B114(auStack_18, param_3);
    code_entity_08020018_Ctor(self, param_2, auStack_18, 0x000009C7);
    *(u32 *)(self + 0x14) = 0x080E74DC;
    *(u32 *)(self + 0x34) = param_3;
    p = (u32 *)(self + 0x38);
    iVar1 = 4;
    do {
        *p = 0;
        p = p + 1;
        iVar1 = iVar1 - 1;
    } while (iVar1 != -1);
    puVar6 = CppRuntime_builtin_new(4);
    *puVar6 = 0x080E74CC;
    if (puVar6 != *(u32 **)(self + 0x38)) {
        CppRuntime_builtin_delete();
    }
    *(u32 **)(self + 0x38) = puVar6;
    puVar6 = CppRuntime_builtin_new(4);
    *puVar6 = 0x080E74BC;
    if (puVar6 != *(u32 **)(self + 0x3c)) {
        CppRuntime_builtin_delete();
    }
    *(u32 **)(self + 0x3c) = puVar6;
    puVar6 = CppRuntime_builtin_new(4);
    *puVar6 = 0x080E74AC;
    if (puVar6 != *(u32 **)(self + 0x40)) {
        CppRuntime_builtin_delete();
    }
    *(u32 **)(self + 0x40) = puVar6;
    puVar6 = CppRuntime_builtin_new(4);
    *puVar6 = 0x080E749C;
    if (puVar6 != *(u32 **)(self + 0x44)) {
        CppRuntime_builtin_delete();
    }
    *(u32 **)(self + 0x44) = puVar6;
    puVar6 = CppRuntime_builtin_new(4);
    *puVar6 = 0x080E748C;
    if (puVar6 != *(u32 **)(self + 0x48)) {
        CppRuntime_builtin_delete();
    }
    *(u32 **)(self + 0x48) = puVar6;
    piVar2 = *(int **)(*(int *)(*(int *)(self + 0x34) + 0xc) * 4 + self + 0x38);
    uVar3 = func_080D3914(piVar2, self, *(u32 *)(*piVar2 + 0xc));
    uVar4 = AEntity_74DC_Sub_08039D5C(self, uVar3);
    code_entities_Sub_08020080(self, uVar4);
    uVar5 = func_08039D4C(self, uVar3);
    if (*(u16 *)(self + 0x22) != uVar5) {
        AActorEntity_SetAnim(self, uVar5);
    }
    *(u32 *)(self + 0x4c) = uVar3;
    *(u32 *)(self + 0x50) = *(u8 *)(self + 0x20);
    return self;
}

/* 0x08039A30 (44B) | AEntity_74DC_vfunc_30 (orig: func_08039A30) | origin: pure | domain: AEntity_74DC | HIGH / vtable_algebra */
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
extern u32 CppRuntime_builtin_new();
struct __attribute__((packed)) _s1 { u8 a; };
u32 code_entities_080320DC_68B4_Ctor(u32, u32, u32, u32, u32, u32, u32, struct _s1);
/* paridad 90.3% preset agbcc_O2 */
u32 AEntity_74DC_vfunc_30(u32 arg0) {
  u32 val;
  val = CppRuntime_builtin_new(0x8c);
  return code_entities_080320DC_68B4_Ctor(val, arg0, 2, 0x1b, 0, 8, 0, (struct _s1){0});
}

/* 0x08039A5C (4B) | AEntity_74DC_vfunc_88 (orig: func_08039A5C) | origin: pure | domain: AEntity_74DC | HIGH / vtable_algebra */
void AEntity_74DC_vfunc_88(void) {
}

/* 0x08039D5C (60B) | AEntity_74DC_Sub_08039D5C (orig: func_08039D5C) | origin: wip | domain: AEntity_74DC | MEDIUM / graph_algebra */
void * AEntity_74DC_Sub_08039D5C(u32 param_1,u32 param_2) {
  u32 uVar1;

  if (param_2 < 5) {
    switch(*(u32 *)(((const u32 *)0x08039d6c) + param_2 * 4) & 0xfffffffe) {
    case 0x8039d70:
    case 0x8039d84:
      uVar1 = 0x8000;
      break;
    case 0x8039d8a:
      uVar1 = 0x10000;
      break;
    case 0x8039d90:
      goto case_08039D90;
    }
  }
  else {
case_08039D90:
    uVar1 = 0;
  }
  return (void *)uVar1;
}

/* 0x08039D98 (16B) | AEntity_74DC_vfunc_44 (orig: func_08039D98) | origin: pure | domain: AEntity_74DC | HIGH / vtable_algebra */
int AEntity_74DC_vfunc_44(u8 *a) { return *(u32 *)(*(u32 *)(a + 0x34) + 0xC) != 4; }

/* 0x08039DA8 (112B) | AEntity_74DC_vfunc_64 (orig: func_08039DA8) | origin: pure | domain: AEntity_74DC | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_entities_Sub_080200C4();
extern u32 entity_actor_Sub_08032384();
extern u32 code_actor_0809BFE8_Sub_0809C068();
extern u32 AEntity_74DC_SetField_0x10();
extern u32 code_809E804_Sub_080AB788();
struct bf_func_08039DA8 {
  u32 f0 : 16;
  u32 f1 : 7;
  u32 f2 : 1;
  u32 f3 : 8;
};
void AEntity_74DC_vfunc_64(int arg0) {
  struct bf_func_08039DA8 local_buf;
  if (*(int *)(*(int *)(arg0 + 0x34) + 0xc) != 1) {
    local_buf.f0 = code_809E804_Sub_080AB788(0x78) + 0xf0;
    local_buf.f1 = 0x3c;
    local_buf.f2 = 0;
    local_buf.f3 = 0;
    AEntity_74DC_SetField_0x10(*(u32 *)(arg0 + 0x34),&local_buf);
    code_actor_0809BFE8_Sub_0809C068(*(u32 *)(arg0 + 0x34),0xf);
    entity_actor_Sub_08032384(arg0,2,0);
    code_entities_Sub_080200C4(arg0,0xaa);
  }
}

/* 0x08039E18 (112B) | AEntity_74DC_vfunc_80 (orig: func_08039E18) | origin: wip | domain: AEntity_74DC | HIGH / vtable_algebra */
void AEntity_74DC_vfunc_80(int self) {
    BOOL uStack_c;
  register u32 iVar1;
  if (*(int *)(*(int *)(self + 0x34) + 0xc) != 1) {
    iVar1 = (u16)code_809E804_Sub_080AB788(0x78);
    uStack_c = ((0xFFFF0000 & uStack_c | 0xf0U + iVar1 & 0xffff) & 0xbc0000 | 0xFF80FFFF) &
               0x00FFFFFF;
    AEntity_74DC_SetField_0x10(*(s16 *)(self + 0x34),&uStack_c);
    code_actor_0809BFE8_Sub_0809C068(*(u8 *)(self + 0x34),4);
    entity_actor_Sub_08032384(self,2,0);
    code_entities_Sub_080200C4(self,0xaa);
  }
}

/* 0x0809C0C8 (12B) | AEntity_74DC_SetField_0x10 (orig: func_0809C0C8) | origin: pure | domain: AEntity_74DC | MEDIUM / graph_algebra */
void AEntity_74DC_SetField_0x10(u32 *arg0, u32 *arg1) {
    arg0[4] = arg1[0];
    arg0[3] = 4;
}

