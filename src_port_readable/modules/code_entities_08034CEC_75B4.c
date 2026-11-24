/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_entities_08034CEC_75B4 (4 functions) */
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

/* 0x080DD410 (36B) | code_entities_08034CEC_75B4_vfunc_14 (orig: func_080DD410) | origin: pure | domain: code_entities_08034CEC_75B4 | HIGH / vtable_algebra */
struct B { u8 f:4; u32 x; u16 y, z; };
void code_entities_08034CEC_75B4_vfunc_14(u8 *arg0, struct B *arg1) {
    arg1->f = 11;
    arg1->x = *(u32 *)(arg0 + 0x50);
    arg1->y = *(u16 *)(arg0 + 0x54);
    arg1->z = *(u16 *)(arg0 + 0x56);
}

/* 0x080DD434 (44B) | code_entities_08034CEC_75B4_vfunc_10 (orig: func_080DD434) | origin: pure | domain: code_entities_08034CEC_75B4 | HIGH / vtable_algebra */
void hardware_Sub_08039F90(u8 *, u32, u32, u32, int, int, int, int);
void code_entities_08034CEC_75B4_vfunc_10(u8 *a, u32 b, u32 c, u32 d) {
    hardware_Sub_08039F90(a, b, c, d, *(s16 *)(a + 0x54), *(s16 *)(a + 0x56), 0, 2);
}

/* 0x080DD460 (132B) | code_entities_08034CEC_75B4_vfunc_0C (orig: func_080DD460) | origin: wip | domain: code_entities_08034CEC_75B4 | HIGH / vtable_algebra */
void code_entities_08034CEC_75B4_vfunc_0C(int self) {
  char cVar1;
  short sVar2;
  int iVar3;
  char *pcVar4;
  cVar1 = *(char *)(self + 0x62);
  if (cVar1 == '\0') {
    iVar3 = LibC_rand(self);
    if ((iVar3 >> 4 & 3U) != 0) {
      hardware_Sub_0803A350(self,0xcf);
    }
    sVar2 = code_809E804_Sub_080AB788(2);
    *(short *)(self + 0x60) = (sVar2 + 6) * 0x3c;
    cVar1 = '\x01';
  }
  else {
    if ((cVar1 != '\x01') ||
       (iVar3 = *(u16 *)(self + 0x60) - 1, *(u16 *)(self + 0x60) = (u16)iVar3,
       -iVar3 > 1 * 0x10000)) goto LAB_080dd4b8;
    cVar1 = '\0';
  }
  *(char *)(self + 0x62) = cVar1;
LAB_080dd4b8:
  pcVar4 = (char *)(self + 0x47);
  if (*pcVar4 == '\0') {
    iVar3 = code_0803EE94_Sub_0805E8F0(self + 0x30);
    if (-1 < iVar3 * 0x40000000) {
    }
    pcVar4 = (char *)(self + 0x44);
    cVar1 = '\x01';
  }
  else {
    cVar1 = '\0';
  }
  *pcVar4 = cVar1;
}

/* 0x080DD4E4 (12B) | code_entities_08034CEC_75B4_vfunc_08 (orig: func_080DD4E4) | origin: pure | domain: code_entities_08034CEC_75B4 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_entities_08034CEC_76BC_Dtor();
void code_entities_08034CEC_75B4_vfunc_08(void) {
  code_entities_08034CEC_76BC_Dtor();
}

