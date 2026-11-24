/* FIO-DECOMP-HMFOMT :: Port Readable Module: interrupt (6 functions) */
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

/* 0x080004C4 (48B) | interrupt_Sub_080004C4 (orig: func_080004C4) | origin: pure | domain: interrupt | HIGH / stanhash_map_tu */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 interrupt_Sub_08000528();
extern u32 code_809E804_Sub_080D100C();
void interrupt_Sub_080004C4(void) {
  u32 val;
  interrupt_Sub_08000528(0x0000FFFF);
  *(u32 *)0x03007FFC = 0x03000958;
  val = 0;
  do {
    code_809E804_Sub_080D100C(val,0);
    val = val + 1;
  } while (val < 0xe);
}

/* 0x080004F4 (24B) | interrupt_Sub_080004F4 (orig: func_080004F4) | origin: pure | domain: interrupt | HIGH / stanhash_map_tu */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D3910();
u16 interrupt_Sub_080004F4(int arg0) {
  u32 val;
  val = func_080D3910(arg0 << 0x10,0x03000A1C);
  return val;
}

/* 0x0800050C (28B) | interrupt_HW_IF (orig: func_0800050C) | origin: pure | domain: interrupt | HIGH / stanhash_map_tu */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 interrupt_Sub_080004F4();
u16 interrupt_HW_IF(u16 arg0) {
  u32 val;
  *(u16 *)0x04000202 = arg0;
  val = interrupt_Sub_080004F4(arg0);
  return val;
}

/* 0x08000528 (24B) | interrupt_Sub_08000528 (orig: func_08000528) | origin: pure | domain: interrupt | HIGH / stanhash_map_tu */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D3910();
u16 interrupt_Sub_08000528(u16 arg0) {
  u32 val;
  val = func_080D3910(arg0,0x03000A1C);
  return val;
}

/* 0x08000540 (20B) | interrupt_Sub_08000540 (orig: func_08000540) | origin: pure | domain: interrupt | HIGH / stanhash_map_tu */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 interrupt_Sub_080D101C();
u16 interrupt_Sub_08000540(u32 arg0,u16 arg1) {
  u32 val;
  val = interrupt_Sub_080D101C(arg0,arg1);
  return val;
}

/* 0x08000568 (20B) | interrupt_Wrap_IntrWait (orig: func_08000568) | origin: pure | domain: interrupt | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 Code_Lib_Syscall_IntrWait();
void interrupt_Wrap_IntrWait(u16 arg0) {
  Code_Lib_Syscall_IntrWait(1,arg0);
}

