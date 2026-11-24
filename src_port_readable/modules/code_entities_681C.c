/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_entities_681C (5 functions) */
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

/* 0x080387FC (16B) | code_entities_681C_Wrap_Dtor (orig: func_080387FC) | origin: pure | domain: code_entities_681C | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_entities_681C_Dtor();
void code_entities_681C_Wrap_Dtor(int arg0) {
  if (*(int *)(arg0 + 0x10) != 0) {
    code_entities_681C_Dtor();
  }
}

/* 0x080A49A0 (96B) | code_entities_681C_Ctor (orig: func_080A49A0) | origin: wip | domain: code_entities_681C | HIGH / vtable_algebra */
u32 code_entities_681C_Ctor(int self,u32 param_2,u32 param_3,u32 param_4,
             u32 param_5,u32 param_6,u32 param_7,u8 param_8) {
  s16 tmp_a0;
  code_809E804_82D8_Ctor(self,param_4,param_5,param_6,param_7);
  *(u32 *)(self + 0x24) = 0x080E681C;
  *(char *)(self + 0x3e) = 0;
  code_0803EE94_Sub_0805E824(tmp_a0, param_2, param_3, 0x100);
  *(u8 *)(0x3c + self) = 1;
  *(u8 *)(self + 0x3d) = param_8;
  tmp_a0 = self + 0x28;
  return self;
}

/* 0x080A4A00 (76B) | code_entities_681C_Ctor_4A00 (orig: func_080A4A00) | origin: wip | domain: code_entities_681C | HIGH / vtable_algebra */
u32 code_entities_681C_Ctor_4A00(int self,u32 param_2,u32 param_3,u32 param_4,
             u32 param_5,u32 param_6,u8 param_7) {
  code_809E804_82D8_Ctor_4740(self,param_4,param_5,param_6);
  *(u32 *)(self + 0x24) = 0x080E681C;
  code_0803EE94_Sub_0805E824(self + 0x28,param_2,param_3,0x100);
  *(u8 *)(self + 0x3c) = 1;
  *(u8 *)(self + 0x3d) = param_7;
  *(u8 *)(self + 0x3e) = 0;
  return self;
}

/* 0x080DC834 (12B) | code_entities_681C_vfunc_08 (orig: func_080DC834) | origin: pure | domain: code_entities_681C | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_809E804_82D8_Dtor();
void code_entities_681C_vfunc_08(void) {
  code_809E804_82D8_Dtor();
}

/* 0x080DCD2C (132B) | code_entities_681C_Ctor_CD2C (orig: func_080DCD2C) | origin: wip | domain: code_entities_681C | HIGH / vtable_algebra */
u32 code_entities_681C_Ctor_CD2C(int self,int param_2) {
  u32 uVar1;
  u8 uVar2;
  code_809E804_82D8_Ctor_C840();
  *(u32 *)(self + 0x24) = 0x080E681C;
  uVar1 = *(u32 *)(param_2 + 0x2c);
  uVar2 = *(u8 *)(param_2 + 0x30);
  *(u32 *)(self + 0x28) = *(u32 *)(param_2 + 0x28);
  *(u32 *)(self + 0x2c) = uVar1;
  *(u32 *)(self + 0x30) = uVar2;
  uVar1 = *(u32 *)(param_2 + 0x38);
  *(u32 *)(self + 0x34) = *(u32 *)(param_2 + 0x34);
  *(u32 *)(self + 0x38) = uVar1;
  *(u8 *)(self + 0x3c) = *(u8 *)(param_2 + 0x3c);
  *(u8 *)(self + 0x3d) = *(u8 *)(param_2 + 0x3d);
  *(u8 *)(self + 0x3e) = *(u8 *)(param_2 + 0x3e);
  *(u8 *)(self + 0x3f) = *(u8 *)(param_2 + 0x3f);
  *(u32 *)(self + 0x40) = *(u32 *)(param_2 + 0x40);
  *(u16 *)(self + 0x44) = *(u16 *)(param_2 + 0x44);
  *(u32 *)(self + 0x48) = *(u32 *)(param_2 + 0x48);
  *(u8 *)(self + 0x4c) = *(u8 *)(param_2 + 0x4c);
  *(u8 *)(self + 0x4d) = *(u8 *)(param_2 + 0x4d);
  return self;
}

