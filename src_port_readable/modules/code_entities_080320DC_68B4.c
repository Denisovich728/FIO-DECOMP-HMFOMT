/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_entities_080320DC_68B4 (3 functions) */
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

/* 0x080324BC (164B) | code_entities_080320DC_68B4_Ctor (orig: func_080324BC) | origin: wip | domain: code_entities_080320DC_68B4 | HIGH / vtable_algebra */
u32 code_entities_080320DC_68B4_Ctor(u32 *self,u32 *param_2,u32 param_3,u32 param_4,
             u8 param_5,char param_6,u8 param_7,u8 param_8) {
  u32 uVar1;
  *self = param_2;
  self[1] = 0x080E68B4;
  uVar1 = func_080D3910((int *)*param_2,*(u32 *)(*(int *)*param_2 + 0x68));
  code_entities_681C_Ctor_4A00(self + 2,uVar1,
                (u32)*(u16 *)((int)param_2 + 0x22) + (u32)*(u8 *)(param_2 + 8),*param_2,
                param_3,param_4,param_8);
  uVar1 = func_080D3910((int *)*param_2,*(u32 *)(*(int *)*param_2 + 0x6c));
  code_entities_681C_Ctor_4A00(self + 0x12,uVar1,0,*param_2,2,0xe,0);
  *(u8 *)(self + 0x22) = param_5;
  *(u8 *)((int)self + 0x89) = 0;
  *(char *)((int)self + 0x8a) = param_6 << 2;
  *(u8 *)((int)self + 0x8b) = param_7;
  return self;
}

/* 0x08032560 (172B) | code_entities_080320DC_68B4_Ctor_2560 (orig: func_08032560) | origin: wip | domain: code_entities_080320DC_68B4 | HIGH / vtable_algebra */
u32 code_entities_080320DC_68B4_Ctor_2560(u32 *self,u32 *param_2,u32 param_3,u32 param_4,
             u32 param_5,u8 param_6,char param_7,u8 param_8,u8 param_9) {
  u32 uVar1;
  *self = param_2;
  self[1] = 0x080E68B4;
  uVar1 = func_080D3910((int *)*param_2,*(u32 *)(*(int *)*param_2 + 0x68));
  code_entities_681C_Ctor(self + 2,uVar1,
                (u32)*(u16 *)((int)param_2 + 0x22) + (u32)*(u8 *)(param_2 + 8),*param_2,
                param_3,param_4,param_5,param_9);
  uVar1 = func_080D3910((int *)*param_2,*(u32 *)(*(int *)*param_2 + 0x6c));
  code_entities_681C_Ctor_4A00(self + 0x12,uVar1,0,*param_2,2,0xe,param_5 & 0xffffff00);
  *(u8 *)(self + 0x22) = param_6;
  *(u8 *)((int)self + 0x89) = 0;
  *(char *)((int)self + 0x8a) = param_7 << 2;
  *(u8 *)((int)self + 0x8b) = param_8;
  return self;
}

/* 0x080E44E4 (44B) | code_entities_080320DC_68B4_Wrap_Ctor (orig: func_080E44E4) | origin: pure | domain: code_entities_080320DC_68B4 | MEDIUM / graph_algebra */
extern u32 CppRuntime_builtin_new();
struct __attribute__((packed)) _s1 { u8 a; };
extern u32 code_entities_080320DC_68B4_Ctor(u32, u32, u32, u32, u32, u32, u32, struct _s1);
u32 code_entities_080320DC_68B4_Wrap_Ctor(u32 arg0) {
    u32 val = CppRuntime_builtin_new(0x8c);
    return code_entities_080320DC_68B4_Ctor(val, arg0, 5, 0x1b, 1, 0, 0, (struct _s1){0});
}

