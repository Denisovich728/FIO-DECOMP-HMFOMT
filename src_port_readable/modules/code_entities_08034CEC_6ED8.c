/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_entities_08034CEC_6ED8 (5 functions) */
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

/* 0x08036048 (60B) | code_entities_08034CEC_6ED8_Ctor (orig: func_08036048) | origin: wip | domain: code_entities_08034CEC_6ED8 | HIGH / vtable_algebra */
u32 code_entities_08034CEC_6ED8_Ctor(u32 self, u32 param_2, u8 param_3, s8 param_4) {
    register u32 r0 = self;
    register u32 r1 = param_2;
    register u32 r2 = param_3;
    register u32 r3 = param_4;
    register u32 r4;
    r4 = r0 + 0;
    r0 = 0x080F4D74;
    r0 = 0x00000813;
    r0 += 4;
    r0 = 0x000003F6;
    r0 = (s16)r4 + 0;
    r0 = func_08034CEC(r0, r1, r2, r3);
    r0 = 0x080E6ED8;
    *(u32 *)(r4 + 0x14) = r0;
    r0 = r4 + 0;
    return r1;
}

/* 0x08036084 (180B) | code_entities_08034CEC_6ED8_Sub_08036084 (orig: func_08036084) | origin: wip | domain: code_entities_08034CEC_6ED8 | MEDIUM / graph_algebra */
void code_entities_08034CEC_6ED8_Sub_08036084(u32 *param_1) {
  u32 uVar1;
  char cVar2;
  int iVar3;
  u32 uVar4;
  int iVar5;
  int iVar6;
  u32 uVar7;
  u32 uVar8;
  uVar1 = (u8)0x00000813;
  uVar8 = 0x00000817;
  iVar5 = param_1[0xd];
  iVar6 = iVar5 + 0x00001CD4;
  iVar3 = ScriptVM_Func120(iVar6);
  uVar7 = uVar1;
  if ((((iVar3 == 0xc) && (*(u32 *)(param_1 + 1) == 0x1d)) &&
      (cVar2 = code_entities_08034CEC_6918_Sub_08035AE0(param_1), uVar7 = 0x00000827, cVar2 == '\0')) &&
     ((((((u32)(*(u8 *)(iVar5 + 0x0000216C)) << 25) >> 25) >> 5 != 1 &&
       (iVar3 = code_809E804_Sub_080A0384(iVar6), uVar7 = uVar1, iVar3 != 0)) &&
      (uVar4 = code_809E804_Sub_0809EAD8(), uVar4 < 0x3c)))) {
    iVar3 = func_080D3910((int *)*param_1,*(u32 *)(*(int *)*param_1 + 0x144));
    cVar2 = npc_entity_Sub_08034C64(iVar5,iVar3 + 10);
    if (cVar2 != '\0') {
      uVar7 = 0x0000082F;
      uVar8 = 0x00000833;
    }
  }
  AActorEntity_Sub_08035908(param_1,uVar7);
  AActorEntity_Sub_08035940(param_1,uVar8);
}

/* 0x08036138 (28B) | code_entities_08034CEC_6ED8_vfunc_3C (orig: func_08036138) | origin: pure | domain: code_entities_08034CEC_6ED8 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 npc_entity_vfunc_3C();
extern u32 code_entities_08034CEC_6ED8_Sub_08036084();
void code_entities_08034CEC_6ED8_vfunc_3C(u32 arg0,int arg1) {
  npc_entity_vfunc_3C();
  if (1 < arg1) {
    code_entities_08034CEC_6ED8_Sub_08036084(arg0);
  }
}

/* 0x08036154 (48B) | code_entities_08034CEC_6ED8_vfunc_30 (orig: func_08036154) | origin: pure | domain: code_entities_08034CEC_6ED8 | HIGH / vtable_algebra */
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
extern u32 code_entities_08034CEC_6ED8_Sub_08036084();
struct __attribute__((packed)) _s1 { u8 a; };
u32 code_entities_080320DC_68B4_Ctor(u32, u32, u32, u32, u32, u32, u32, struct _s1);
u32 code_entities_08034CEC_6ED8_vfunc_30(u32 arg0) {
  u32 val;
  code_entities_08034CEC_6ED8_Sub_08036084();
  val = CppRuntime_builtin_new(0x8c);
  return code_entities_080320DC_68B4_Ctor(val, arg0, 5, 0x1b, 1, 0, 0, (struct _s1){0});
}

/* 0x080DCABC (12B) | code_entities_08034CEC_6ED8_vfunc_08 (orig: func_080DCABC) | origin: pure | domain: code_entities_08034CEC_6ED8 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 ANpcEntity_Dtor();
void code_entities_08034CEC_6ED8_vfunc_08(void) {
  ANpcEntity_Dtor();
}

