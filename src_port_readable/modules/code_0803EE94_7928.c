/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_0803EE94_7928 (1 functions) */
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

/* 0x0805143C (200B) | code_0803EE94_7928_Ctor (orig: func_0805143C) | origin: wip | domain: code_0803EE94_7928 | HIGH / vtable_algebra */
u32 code_0803EE94_7928_Ctor(int self, int param_2, int param_3, int param_4) {
  *(u16 *)(self) = 0x1e;
  *(u16 *)(param_4 + 2) = 1;
  hardware_Create_84DC(self, 0x1e, 1);
  *(u32 *)(self + 4) = 0x080E7928;
  *(u32 *)(self + 8) = param_2;
  hardware_Sub_08008B54((self + 0xc), 2, 1);
  code_0803EE94_79C8_Ctor((self + 0x10), 0x08527094, 1);
  code_0803EE94_Sub_0805E824((self + 0x40), (self + 0x10), 0, (0x80 << 1));
  *(u16 *)((self + 0x54)) = 0;
  *(u16 *)((self + 0x54) + 2) = 0;
  *(u16 *)((self + 0x54) + 4) = 0;
  *(u16 *)((self + 0x54) + 6) = 0;
  *(u16 *)((self + 0x54) + 8) = 0;
  *(u32 *)((self + 0x54) + 0xc) = 0;
  *(u8 *)((self + 0x54) + 0x10) = 0;
  *(u8 *)((self + 0x54) + 0x11) = 0;
  *(u32 *)((self + 0x54) + 0x14) = 0;
  *(u8 *)((self + 0x54) + 0x18) = 0;
  code_0803EE94_Sub_0805E824(((self + 0x54) + 0x20), (self + 0x10), 1, (0x80 << 1));
  *(u16 *)((self + 0x88)) = 0;
  *(u16 *)((self + 0x88) + 2) = 0;
  *(u16 *)((self + 0x88) + 4) = 0;
  *(u16 *)((self + 0x88) + 6) = 0;
  *(u16 *)((self + 0x88) + 8) = 0;
  *(u32 *)((self + 0x88) + 0xc) = 0;
  *(u8 *)((self + 0x88) + 0x10) = 0;
  *(u8 *)((self + 0x88) + 0x11) = 0;
  *(u32 *)((self + 0x88) + 0x14) = 0;
  *(u8 *)((self + 0x88) + 0x18) = 0;
  hardware_Sub_08007874(((self + 0x10) + 0x98), (self + 0x10), 1, (0x80 << 1));
  hardware_Sub_08007B54(((self + 0x10) + 0x98), 4, 1, (0x80 << 1));
  *(u32 *)(((self + 0x10) + 0x98) + 4) = hardware_Sub_08007B54(((self + 0x10) + 0x98), 4, 1, (0x80 << 1));
  hardware_Sub_08007128((((self + 0x10) + 0x98) + 8), 4, 1, (0x80 << 1));
  hardware_Sub_0800736C((((self + 0x10) + 0x98) + 8), 4, 1, (0x80 << 1));
  *(u32 *)((((self + 0x10) + 0x98) + 8) + 4) = hardware_Sub_0800736C((((self + 0x10) + 0x98) + 8), 4, 1, (0x80 << 1));
  *(u16 *)((self + 0x000008B8)) = 0;
  return self;
}

