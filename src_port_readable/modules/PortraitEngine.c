/* FIO-DECOMP-HMFOMT :: Port Readable Module: PortraitEngine (6 functions) */
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

/* 0x08050AD8 (100B) | PortraitEngine_Sub_08050AD8 (orig: func_08050AD8) | origin: wip | domain: PortraitEngine | MEDIUM / graph_algebra */
void PortraitEngine_Sub_08050AD8(int param_1,u32 param_2) {
  u8 bVar1;
  u16 uVar2;
  s16 arg_hoist_0;
  uVar2 = PortraitEngine_Ctor_DD20();
  if (param_2 < uVar2) {
    bVar1 = *(u8 *)(param_1 + 0x1dc);
    if ((((u32)(bVar1) << 31) >> 31) == 0) {
      *(u8 *)(param_1 + 0x1dc) = bVar1 | 1;
    }
    else if (*(u32 *)(param_1 + 0x1e0) == param_2) {
    }
    arg_hoist_0 = (u8)param_1 + 0x1e4;
  PortraitEngine_Ctor(arg_hoist_0, param_2);
    *(u32 *)(param_1 + 0x1e0) = (u8)param_2;
    *(u8 *)(param_1 + 0x1dc) = *(u16 *)(param_1 + 0x1dc) | 2;
  }
  else {
    PortraitEngine_Sub_08050B3C(param_1);
  }
}

/* 0x08050B3C (20B) | PortraitEngine_Sub_08050B3C (orig: func_08050B3C) | origin: pure | domain: PortraitEngine | MEDIUM / graph_algebra */
struct S { u8 pad[0x1dc]; u8 b0:1; }; void PortraitEngine_Sub_08050B3C(struct S *a) { a->b0 = 0; }

/* 0x08050E50 (12B) | PortraitEngine_Sub_08050E50 (orig: func_08050E50) | origin: pure | domain: PortraitEngine | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 PortraitEngine_Sub_08050AD8();
void PortraitEngine_Sub_08050E50(u32 *arg0) {
  PortraitEngine_Sub_08050AD8(*arg0);
}

/* 0x08050E5C (12B) | PortraitEngine_Sub_08050E5C (orig: func_08050E5C) | origin: pure | domain: PortraitEngine | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 PortraitEngine_Sub_08050B3C();
void PortraitEngine_Sub_08050E5C(u32 *arg0) {
  PortraitEngine_Sub_08050B3C(*arg0);
}

/* 0x080ADD20 (36B) | PortraitEngine_Ctor_DD20 (orig: func_080ADD20) | origin: pure | domain: PortraitEngine | HIGH / vtable_algebra */
struct D_0805E6CC {
    u32 vtbl;
    u8 pad[0x1c];
    u16 f20;
    u8 pad2[0xe];
};
extern "C" void code_0803EE94_79C8_Ctor(D_0805E6CC *, u32);
extern "C" u16 PortraitEngine_Ctor_DD20(void) {
    D_0805E6CC s;
    code_0803EE94_79C8_Ctor(&s, 0x0852D984);
    u16 r = s.f20;
    s.vtbl = 0x080E5A28;
    return r;
}

/* 0x080D7F74 (20B) | PortraitEngine_Sub_080D7F74 (orig: func_080D7F74) | origin: pure | domain: PortraitEngine | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 PortraitEngine_Sub_08050E5C();
void PortraitEngine_Sub_080D7F74(int arg0) {
  if (*(int *)(arg0 + 0xac) != 0) {
    PortraitEngine_Sub_08050E5C();
  }
}

