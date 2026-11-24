/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_entities_08034CEC_75CC (4 functions) */
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

/* 0x080DD4F0 (36B) | code_entities_08034CEC_75CC_vfunc_14 (orig: func_080DD4F0) | origin: pure | domain: code_entities_08034CEC_75CC | HIGH / vtable_algebra */
struct B { u8 f:4; u32 x; u16 y, z; };
void code_entities_08034CEC_75CC_vfunc_14(u8 *arg0, struct B *arg1) {
    arg1->f = 10;
    arg1->x = *(u32 *)(arg0 + 0x50);
    arg1->y = *(u16 *)(arg0 + 0x54);
    arg1->z = *(u16 *)(arg0 + 0x56);
}

/* 0x080DD514 (44B) | code_entities_08034CEC_75CC_vfunc_10 (orig: func_080DD514) | origin: pure | domain: code_entities_08034CEC_75CC | HIGH / vtable_algebra */
void hardware_Sub_08039F90(u8 *, u32, u32, u32, int, int, int, int);
void code_entities_08034CEC_75CC_vfunc_10(u8 *a, u32 b, u32 c, u32 d) {
    hardware_Sub_08039F90(a, b, c, d, *(s16 *)(a + 0x54), *(s16 *)(a + 0x56), 0, 2);
}

/* 0x080DD540 (72B) | code_entities_08034CEC_75CC_vfunc_0C (orig: func_080DD540) | origin: wip | domain: code_entities_08034CEC_75CC | HIGH / vtable_algebra */
void code_entities_08034CEC_75CC_vfunc_0C(int self) {
  int iVar1;
  u32 uVar2;
  iVar1 = code_entities_Sub_0803A180(self,self + 0x50,0x10000);
  if ((iVar1 != 0) &&
     (uVar2 = *(int *)(self + 0x50) + 0x000009A9, *(u16 *)(self + 4) != uVar2)) {
    code_0803EE94_Sub_0805E860(self + 0x30,uVar2);
    *(u32 *)(self + 0x44) = 1;
    *(u8 *)(self + 0x46) = 0;
    *(u8 *)(self + 0x47) = 1;
    *(short *)(self + 4) = (short)uVar2;
  }
}

/* 0x080DD588 (12B) | code_entities_08034CEC_75CC_vfunc_08 (orig: func_080DD588) | origin: pure | domain: code_entities_08034CEC_75CC | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_entities_08034CEC_76BC_Dtor();
void code_entities_08034CEC_75CC_vfunc_08(void) {
  code_entities_08034CEC_76BC_Dtor();
}

