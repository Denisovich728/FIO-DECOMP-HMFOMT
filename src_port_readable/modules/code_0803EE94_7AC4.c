/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_0803EE94_7AC4 (1 functions) */
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

/* 0x080E1FAC (108B) | code_0803EE94_7AC4_vfunc_08 (orig: func_080E1FAC) | origin: pure | domain: code_0803EE94_7AC4 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 hardware_Sub_08007184();
extern u32 hardware_Sub_080073E0();
extern u32 hardware_Sub_080079E8();
extern u32 hardware_Sub_08007C28();
extern u32 hardware_Dtor();
extern u32 SpriteAnimEngine_5A28_Wrap_Dtor_0D0C();
void code_0803EE94_7AC4_vfunc_08(int arg0,u32 arg1) {
  u32 *sub;
  sub = (u32 *)(arg0 + 0x30);
  hardware_Sub_080073E0(sub, sub[1]);
  hardware_Sub_08007184(sub,2);
  sub = (u32 *)(arg0 + 0x28);
  hardware_Sub_08007C28(sub, sub[1]);
  hardware_Sub_080079E8(sub,2);
  sub = (u32 *)(arg0 + 0x20);
  hardware_Sub_080073E0(sub, sub[1]);
  hardware_Sub_08007184(sub,2);
  sub = (u32 *)(arg0 + 0x18);
  hardware_Sub_08007C28(sub, sub[1]);
  hardware_Sub_080079E8(sub,2);
  if (*(int *)(arg0 + 0xc) != 0) {
    SpriteAnimEngine_5A28_Wrap_Dtor_0D0C(*(int *)(arg0 + 0xc),3);
  }
  hardware_Dtor(arg0,arg1);
}

