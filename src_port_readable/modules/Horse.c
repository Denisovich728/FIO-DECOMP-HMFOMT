/* FIO-DECOMP-HMFOMT :: Port Readable Module: Horse (4 functions) */
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

/* 0x0809BBD0 (32B) | Horse_Ctor (orig: func_0809BBD0) | origin: pure | domain: Horse | EXACT / stanhash_elf */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 Pet_Ctor();
u32 Horse_Ctor(int arg0) {
  Pet_Ctor();
  *(u32 *)(arg0 + 0x20) = 0;
  *(u16 *)(arg0 + 0x24) = 0;
  *(u8 *)(arg0 + 0x26) = 0;
  return arg0;
}

/* 0x0809BBF0 (32B) | Horse_Ctor_BBF0 (orig: func_0809BBF0) | origin: pure | domain: Horse | EXACT / stanhash_elf */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 Pet_Ctor_B350();
u32 Horse_Ctor_BBF0(int arg0) {
  Pet_Ctor_B350();
  *(u32 *)(arg0 + 0x20) = 0;
  *(u16 *)(arg0 + 0x24) = 0;
  *(u8 *)(arg0 + 0x26) = 0;
  return arg0;
}

/* 0x0809BC10 (20B) | Horse_GetGrowthStage (orig: func_0809BC10) | origin: pure | domain: Horse | EXACT / stanhash_elf */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0809B220();
u32 Horse_GetGrowthStage(void) {
  u32 val;
  val = func_0809B220();
  return ((u32)(0x77 < val));
}

/* 0x0809BC48 (28B) | Horse_DayUpdate (orig: func_0809BC48) | origin: pure | domain: Horse | EXACT / stanhash_elf */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 Pet_DayUpdate();
void Horse_DayUpdate(int arg0) {
  Pet_DayUpdate(arg0,0);
  *(u32 *)(arg0 + 0x20) = 0;
  *(u16 *)(arg0 + 0x24) = 0;
  *(u8 *)(arg0 + 0x26) = 0;
}

