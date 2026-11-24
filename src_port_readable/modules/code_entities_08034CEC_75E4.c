/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_entities_08034CEC_75E4 (4 functions) */
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

/* 0x080DD594 (36B) | code_entities_08034CEC_75E4_vfunc_14 (orig: func_080DD594) | origin: pure | domain: code_entities_08034CEC_75E4 | HIGH / vtable_algebra */
struct B { u8 f:4; u32 x; u16 y, z; };
void code_entities_08034CEC_75E4_vfunc_14(u8 *arg0, struct B *arg1) {
    arg1->f = 9;
    arg1->x = *(u32 *)(arg0 + 0x50);
    arg1->y = *(u16 *)(arg0 + 0x54);
    arg1->z = *(u16 *)(arg0 + 0x56);
}

/* 0x080DD5B8 (44B) | code_entities_08034CEC_75E4_vfunc_10 (orig: func_080DD5B8) | origin: pure | domain: code_entities_08034CEC_75E4 | HIGH / vtable_algebra */
void hardware_Sub_08039F90(u8 *, u32, u32, u32, int, int, int, int);
void code_entities_08034CEC_75E4_vfunc_10(u8 *a, u32 b, u32 c, u32 d) {
    hardware_Sub_08039F90(a, b, c, d, *(s16 *)(a + 0x54), *(s16 *)(a + 0x56), 0, 2);
}

/* 0x080DD5E4 (420B) | code_entities_08034CEC_75E4_vfunc_0C (orig: func_080DD5E4) | origin: wip | domain: code_entities_08034CEC_75E4 | HIGH / vtable_algebra */
void code_entities_08034CEC_75E4_vfunc_0C(u32 *self) {
  short sVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  int *piVar5;
  int iVar6;
  u32 uVar7;
  short *psVar8;
  u32 uStack_68;
  u32 uStack_64;
  u32 uStack_60;
  u32 uStack_5c;
  u32 uStack_58;
  u32 uStack_54;
  u32 uStack_50;
  u32 uStack_48;
  u32 uStack_44;
  u32 uStack_40;
  u32 uStack_3c;
  u32 uStack_38;
  u32 uStack_34;
  u32 uStack_30;
  u32 uStack_2c;
  u32 uStack_28;
  u32 uStack_24;
  piVar5 = (int *)*self;
  iVar3 = func_080D3914(piVar5,0,*(u32 *)(*piVar5 + 0x40));
  if (iVar3 != 0) {
    sVar1 = *(short *)(iVar3 + 10);
    sVar2 = *(short *)(iVar3 + 0xe);
    psVar4 = (short *)(self + 0x15);
    iVar3 = (int)sVar1 - (int)*psVar4;
    if (iVar3 < 0) {
      iVar3 = -iVar3;
    }
    if (iVar3 < 0x10) {
      psVar8 = (short *)((int)self + 0x56);
      iVar3 = (int)sVar2 - (int)*psVar8;
      if (iVar3 < 0) {
        iVar3 = -iVar3;
      }
      if (iVar3 < 0x10) {
        func_080D3918(&uStack_68,piVar5,0,*(u32 *)(*piVar5 + 0x34));
        uStack_28 = ((u16)(*psVar4 + -8));
        uStack_24 = ((u16)(*psVar4 + 8));
        uStack_5c = 0x21;
        uStack_58 = 0xffffffdf;
        uStack_54 = 0xffffffdf;
        uStack_50 = 0x21;
        uStack_48 = uStack_68;
        uStack_44 = uStack_64;
        uStack_40 = uStack_60;
        uStack_3c = uStack_28;
        uStack_38 = uStack_24;
        uStack_34 = 0x20;
        uStack_30 = 0;
        uStack_2c = 0;
        iVar6 = self[0x14];
        iVar3 = code_entities_Sub_080ABE58((int)*psVar4,(int)*psVar8,(int)sVar1,(int)sVar2,&uStack_5c,iVar6);
        self[0x14] = iVar3;
        if (((iVar6 != iVar3) || (*(char *)((int)self + 0x62) == '\0')) &&
           (uVar7 = iVar3 + 0x000008F9, *(u16 *)(self + 1) != uVar7)) {
          code_0803EE94_Sub_0805E860(self + 0xc,uVar7);
          *(u8 *)(self + 0x11) = 1;
          *(u8 *)((int)self + 0x46) = 0;
          *(u8 *)((int)self + 0x47) = 1;
          *(short *)(self + 1) = (short)uVar7;
        }
        *(char *)((int)self + 0x62) = '\x01';
        *(u16 *)(self + 0x18) = 0x3c;
      }
    }
  }
  iVar3 = code_entities_Sub_0803A180(self,self + 0x14,0x8000);
  if (iVar3 != 0) {
    if (*(char *)((int)self + 0x62) == '\0') {
      uVar7 = self[0x14] + 0x000008F5;
      if (*(u16 *)(self + 1) == uVar7) {
      }
      code_0803EE94_Sub_0805E860(self + 0xc,uVar7);
      *(u8 *)(self + 0x11) = 1;
      *(u8 *)((int)self + 0x46) = 0;
    }
    else {
      uVar7 = self[0x14] + 0x000008F9;
      if (*(u16 *)(self + 1) == uVar7) {
      }
      code_0803EE94_Sub_0805E860(self + 0xc,uVar7);
      *(u8 *)(self + 0x11) = 1;
      *(u8 *)((int)self + 0x46) = 0;
    }
    *(u8 *)((int)self + 0x47) = 1;
    *(short *)(self + 1) = (short)uVar7;
  }
}

/* 0x080DD788 (12B) | code_entities_08034CEC_75E4_vfunc_08 (orig: func_080DD788) | origin: pure | domain: code_entities_08034CEC_75E4 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_entities_08034CEC_76BC_Dtor();
void code_entities_08034CEC_75E4_vfunc_08(void) {
  code_entities_08034CEC_76BC_Dtor();
}

