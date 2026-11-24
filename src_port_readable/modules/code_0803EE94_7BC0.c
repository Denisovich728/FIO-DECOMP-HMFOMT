/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_0803EE94_7BC0 (12 functions) */
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

/* 0x0803D404 (60B) | code_0803EE94_7BC0_Sub_0803D404 (orig: func_0803D404) | origin: pure | domain: code_0803EE94_7BC0 | MEDIUM / tu_interp */
#define true 1
#define false 0
#define NULL ((void *)0)
void code_0803EE94_7BC0_Sub_0803D404(int *arg0,u32 arg1) {
  int val;
  val = *arg0;
  if ((*(char *)(val + 0x000002F1) == '\0') || (arg1 != *(u16 *)(val + 0x000002F2))) {
    *(char *)(val + 0x000002F1) = '\x01';
    *(short *)(val + 0x000002F2) = (short)arg1;
    *(u8 *)(val + 0x334) = 1;
  }
}

/* 0x0803D440 (36B) | code_0803EE94_7BC0_Sub_0803D440 (orig: func_0803D440) | origin: pure | domain: code_0803EE94_7BC0 | MEDIUM / tu_interp */
#define true 1
#define false 0
#define NULL ((void *)0)
void code_0803EE94_7BC0_Sub_0803D440(int *arg0) {
  int val;
  char *mem_ptr;
  val = *arg0;
  mem_ptr = (char *)(val + 0x000002F1);
  if (*mem_ptr != '\0') {
    *mem_ptr = '\0';
    *(u8 *)(val + 0x334) = 1;
  }
}

/* 0x0803D464 (12B) | code_0803EE94_7BC0_Sub_0803D464 (orig: func_0803D464) | origin: pure | domain: code_0803EE94_7BC0 | MEDIUM / tu_interp */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_0803EE94_7BC0_Sub_0803D440();
void code_0803EE94_7BC0_Sub_0803D464(int arg0) {
  code_0803EE94_7BC0_Sub_0803D440(arg0 + 8);
}

/* 0x0803D470 (12B) | code_0803EE94_7BC0_Sub_0803D470 (orig: func_0803D470) | origin: pure | domain: code_0803EE94_7BC0 | MEDIUM / tu_interp */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_0803EE94_7BC0_Sub_0803D404();
void code_0803EE94_7BC0_Sub_0803D470(int arg0) {
  code_0803EE94_7BC0_Sub_0803D404(arg0 + 8);
}

/* 0x0803D47C (12B) | code_0803EE94_7BC0_Sub_0803D47C (orig: func_0803D47C) | origin: pure | domain: code_0803EE94_7BC0 | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_0803EE94_7BC0_Sub_0803D3A0();
void code_0803EE94_7BC0_Sub_0803D47C(int arg0) {
  code_0803EE94_7BC0_Sub_0803D3A0(arg0 + 8);
}

/* 0x08077DD8 (92B) | code_0803EE94_7BC0_Sub_08077DD8 (orig: func_08077DD8) | origin: wip | domain: code_0803EE94_7BC0 | MEDIUM / graph_algebra */
void code_0803EE94_7BC0_Sub_08077DD8(int param_1) {
    u32 uVar2;
    u8 auStack_3c [36];
  register u32 uVar1;
  register s16 uVar3;
  register u32 uVar4;
  hardware_Sub_080091E8(auStack_3c,0);
  uVar1 = (s32)hardware_GetField_0x00_8920(param_1);
  uVar2 = (u16)hardware_GetField_0x00_8918(param_1);
  uVar4 = hardware_Sub_0800894C(param_1);
  uVar3 = hardware_GetField_0x00_8940(param_1);
  code_0803EE94_78A8_Wrap_Ctor(param_1 + 0x18,auStack_3c,uVar1,uVar2,uVar3,uVar4,0);
}

/* 0x08077E34 (48B) | code_0803EE94_7BC0_Sub_08077E34 (orig: func_08077E34) | origin: pure | domain: code_0803EE94_7BC0 | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
#define CONCAT11(a, b) ((u16)(((u16)(u8)(a) << 8) | (u8)(b)))
#define CONCAT12(a, b) ((u32)(((u32)(u8)(a) << 16) | (u16)(b)))
#define CONCAT13(a, b) ((u32)(((u32)(u8)(a) << 24) | ((u32)(b) & 0xFFFFFFu)))
#define CONCAT21(a, b) ((u32)(((u32)(u16)(a) << 8) | (u8)(b)))
#define CONCAT22(a, b) ((u32)(((u32)(u16)(a) << 16) | (u16)(b)))
#define CONCAT31(a, b) ((u32)(((u32)(a) << 8) | (u8)(b)))
#define CONCAT44(a, b) ((u32)(b))
#define SUB41(a, b) ((u8)((u32)(a) >> ((b) * 8)))
#define SUB42(a, b) ((u16)((u32)(a) >> ((b) * 8)))
#define SUB84(a, b) ((u32)(a))
#define ZEXT14(a) ((u32)(u8)(a))
#define ZEXT24(a) ((u32)(u16)(a))
#define ZEXT48(a) ((u32)(a))
#define SEXT14(a) ((s32)(s8)(a))
#define SEXT24(a) ((s32)(s16)(a))
#define SEXT48(a) ((s32)(a))
#define CARRY4(a, b) ((u32)(a) > (0xFFFFFFFFu - (u32)(b)))
#define SCARRY4(a, b) (((s32)((u32)(a) + (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) == ((s32)(b) < 0))
#define SBORROW4(a, b) (((s32)((u32)(a) - (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) != ((s32)(b) < 0))
#define BADSPACEBASE 0
void code_0803EE94_7BC0_Sub_08077E34(u32 arg0, u32 arg1, u32 arg2, u32 arg3)
{
    register u32 r0 = arg0;
    register u32 r1 = arg1;
    register u32 r2 = arg2;
    register u32 r3 = arg3;
    register u32 r4, r5, r6;
    r3 = 0;
    r5 = r1 << 0xb;
    r6 = 0xc0;
    r6 = r6 << 0x13;
loc_08077E3E:
    r1 = 0;
    r0 = r3 << 6;
    r4 = r3 + 1;
    r0 = r0 + r6;
    r3 = r5 + r0;
loc_08077E48:
    r0 = *(u16 *)(r2);
    *(u16 *)(r3) = r0;
    r2 += 2;
    r3 += 2;
    r1 += 1;
    if (r1 <= 0x1d) goto loc_08077E48;
    r3 = r4 + 0;
    if (r3 <= 0xc) goto loc_08077E3E;
    return r0;
}

/* 0x08077E64 (92B) | code_0803EE94_7BC0_Sub_08077E64 (orig: func_08077E64) | origin: wip | domain: code_0803EE94_7BC0 | MEDIUM / graph_algebra */
void code_0803EE94_7BC0_Sub_08077E64(u32 param_1,int param_2,u32 param_3,u32 param_4,int param_5,int param_6,
             u16 *param_7) {
  u32 uVar1;
  u16 *puVar2;
  u32 uVar3;
  if (param_4 < param_6 + param_4) {
    uVar1 = param_4;
    do {
      uVar3 = uVar1 + 1;
      if (param_3 < param_3 + param_5) {
        puVar2 = (u16 *)(param_3 * 2 + uVar1 * 0x40 + 0x6000000 + param_2 * 0x800);
        uVar1 = param_3;
        do {
          *puVar2 = *param_7;
          param_7 = param_7 + 1;
          puVar2 = puVar2 + 1;
          uVar1 = uVar1 + 1;
        } while (uVar1 < param_3 + param_5);
      }
      uVar1 = uVar3;
    } while (uVar3 < param_6 + param_4);
  }
}

/* 0x08077EC0 (388B) | code_0803EE94_7BC0_Sub_08077EC0 (orig: func_08077EC0) | origin: wip | domain: code_0803EE94_7BC0 | MEDIUM / graph_algebra */
void code_0803EE94_7BC0_Sub_08077EC0(int param_1) {
  char cVar1;
  int iVar2;
  u32 uVar3;
  bool bVar4;
  iVar2 = code_0800E2E4_Sub_0800E324(*(int *)(param_1 + 8) + 0x10);
  bVar4 = iVar2 == 3;
  uVar3 = 0x08755848;
  if (bVar4) {
    uVar3 = 0x0875822C;
  }
  System_UnpackData(uVar3,0x6000000);
  uVar3 = 0x08757AE0;
  if (bVar4) {
    uVar3 = 0x0875A358;
  }
  hardware_HW_DMA3SAD(uVar3,0x05000020,0xc0);
  uVar3 = 0x08755230;
  if (bVar4) {
    uVar3 = (s8)0x08757C14;
  }
  code_0803EE94_7BC0_Sub_08077E34(param_1,0x1e,uVar3);
  uVar3 = 0x0875553C;
  if (bVar4) {
    uVar3 = 0x08757F20;
  }
  code_0803EE94_7BC0_Sub_08077E34(param_1,0x1d,uVar3);
  if (iVar2 == 0) {
    code_0803EE94_7BC0_Sub_08077E64(param_1,0x1e,10,10,5,3,0x08757BD8);
  }
  else if (iVar2 == 2) {
    code_0803EE94_7BC0_Sub_08077E64(param_1,0x1e,10,10,5,3,0x08757BAC);
  }
  if (iVar2 == 1) {
    code_0803EE94_7BC0_Sub_08077E64(param_1,0x1d,0x18,7,3,2,0x08757BCC);
  }
  cVar1 = func_08010E48(*(u32 *)(param_1 + 8));
  if (cVar1 != '\0') {
    uVar3 = 0x08757BA0;
    if (bVar4) {
      uVar3 = 0x0875A418;
    }
    code_0803EE94_7BC0_Sub_08077E64(param_1,0x1d,0,5,3,2,uVar3);
  }
  cVar1 = func_08010E50(*(u32 *)(param_1 + 8));
  if (cVar1 != '\0') {
    uVar3 = 0x08757C0C;
    if (bVar4) {
      uVar3 = 0x0875A438;
    }
    code_0803EE94_7BC0_Sub_08077E64(param_1,0x1d,0xe,5,2,2,uVar3);
  }
  cVar1 = func_08010E58(*(u32 *)(param_1 + 8));
  if (cVar1 != '\0') {
    uVar3 = 0x08757BF8;
    if (bVar4) {
      uVar3 = 0x0875A424;
    }
    code_0803EE94_7BC0_Sub_08077E64(param_1,0x1d,0x1b,6,3,3,uVar3);
  }
}

/* 0x080782C4 (40B) | code_0803EE94_7BC0_Sub_080782C4 (orig: func_080782C4) | origin: pure | domain: code_0803EE94_7BC0 | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
u32 code_0803EE94_7BC0_Sub_080782C4(u32 arg0,u32 arg1,u32 arg2,int arg3) {
  u32 val;
  val = 0;
  if ((((*(u8 *)(arg3 + 0x10) <= arg1) && (arg1 <= *(u8 *)(arg3 + 0x12))) &&
      (*(u8 *)(arg3 + 0x11) <= arg2)) && (arg2 <= *(u8 *)(arg3 + 0x13))) {
    val = 1;
  }
  return val;
}

/* 0x080785C8 (148B) | code_0803EE94_7BC0_Sub_080785C8 (orig: func_080785C8) | origin: wip | domain: code_0803EE94_7BC0 | MEDIUM / tu_interp */
void code_0803EE94_7BC0_Sub_080785C8(int param_1) {
  u32 uVar1;
  u32 uVar2;
  u32 *puVar3;
  u32 *puVar4;
  u8 auStack_34 [32];
  code_0803EE94_7BC0_Sub_08077DD8();
  puVar4 = *(u32 **)(param_1 + 0x1d0);
  for (puVar3 = *(u32 **)(param_1 + 0x1cc); puVar3 != puVar4; puVar3 = puVar3 + 7) {
    uVar1 = hardware_GetField_0x00_8920(param_1);
    func_080D3918(auStack_34,(int *)puVar3[2],
                    *(u16 *)(puVar3[3] + (u32)*(u16 *)(puVar3 + 5) * 4),
                    *(u32 *)(*(int *)puVar3[2] + 0x10));
    LibC_memcpy(auStack_34,auStack_34,0x20);
    hardware_Sub_08075AE8(param_1 + 0x20,uVar1,auStack_34,*puVar3,puVar3[1]);
  }
  if ((int)((u32)*(u8 *)(*(int *)(param_1 + 8) + 0x00002210) * 0x40000000) < 0) {
    uVar1 = hardware_GetField_0x00_8920(param_1);
    uVar2 = hardware_GetField_0x00_8940(param_1);
    code_0803A8A4_77E0_Sub_0803C7C8(param_1 + 0x1c,0x98,0x50,uVar1,uVar2);
  }
}

/* 0x08078AE8 (48B) | code_0803EE94_7BC0_Ctor (orig: func_08078AE8) | origin: pure | domain: code_0803EE94_7BC0 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 scene_Dtor();
extern u32 func_080D3914();
void code_0803EE94_7BC0_Ctor(u32 *arg0,u32 arg1) {
  int val;
  *arg0 = 0x080E7BC0;
  val = arg0[1];
  if (val != 0) {
    func_080D3914(val,3,*(u32 *)(*(int *)(val + 4) + 8));
  }
  scene_Dtor(arg0,arg1);
}

