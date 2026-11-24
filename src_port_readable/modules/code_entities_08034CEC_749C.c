/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_entities_08034CEC_749C (2 functions) */
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

/* 0x0803955C (408B) | code_entities_08034CEC_749C_vfunc_08 (orig: func_0803955C) | origin: wip | domain: code_entities_08034CEC_749C | HIGH / vtable_algebra */
void code_entities_08034CEC_749C_vfunc_08(u32 self,u32 *param_2) {
  short sVar1;
  short sVar2;
  short sVar3;
  char cVar4;
  int iVar5;
  u32 uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  u32 uVar10;
  u32 uStack_30;
  u32 uStack_2c;
  u32 uStack_28;
  u32 uStack_24;
  iVar5 = param_2[0xd];
  if ((*(u16 *)(iVar5 + 0x10) == 0) || (iVar8 = *(u16 *)(iVar5 + 0x10) - 1, iVar8 == 0)) {
    if (*(char *)(iVar5 + 0x12) != '\0') {
      piVar9 = (int *)*param_2;
      sVar1 = *(short *)(param_2 + 1);
      sVar2 = *(short *)((int)param_2 + 10);
      sVar3 = *(short *)((int)param_2 + 0xe);
      uVar6 = code_entities_08034CEC_Sub_08039134(piVar9,sVar1,(int)sVar2,(int)sVar3);
      if (uVar6 == 100) {
        uVar6 = (u32)*(u8 *)(iVar5 + 0x13);
      }
      iVar8 = func_080D3914(piVar9,uVar6,*(u32 *)(*piVar9 + 0x40));
      if (((iVar8 != 0) && (*(short *)(iVar8 + 4) == sVar1)) &&
         (cVar4 = func_080D3910(iVar8,*(u32 *)(*(int *)(iVar8 + 0x14) + 0x60)),
         cVar4 != '\0')) {
        iVar7 = (int)*(short *)(iVar8 + 10) - (int)sVar2;
        if (iVar7 < 0) {
          iVar7 = -iVar7;
        }
        if (iVar7 < 0x10) {
          iVar7 = (int)*(short *)(iVar8 + 0xe) - (int)sVar3;
          if (iVar7 < 0) {
            iVar7 = -iVar7;
          }
          if (iVar7 < 0x10) {
            func_080D3910(iVar8,*(u32 *)(*(int *)(iVar8 + 0x14) + 0x80));
          }
        }
      }
      code_actor_0809BFE8_Sub_0809C068(iVar5,4);
      uVar10 = param_2[0xd];
      iVar8 = 100;
      iVar5 = code_actor_0809BFE8_Sub_0809C060(uVar10);
      if (iVar5 == 0) {
        code_entities_Sub_080200C4(param_2,0xaa);
      }
      else {
        iVar8 = code_entities_08034CEC_Sub_08039134(*param_2,*(u16 *)(param_2 + 1),
                              (int)*(short *)((int)param_2 + 10),(int)*(short *)((int)param_2 + 0xe)
                             );
      }
      if (iVar8 != 100) {
        uVar6 = code_809E804_Sub_080AB788(100);
        if (uVar6 < 0x46) {
          uStack_30 = uStack_30 & 0xFFFF0000;
          iVar5 = code_809E804_Sub_080AB788(8);
          uStack_2c = (uStack_2c & 0xFF00FFFF | (iVar5 + 3U & 0xff) << 0x10) & 0x00FFFFFF |
                      iVar8 << 0x18;
          code_actor_0809BFE8_SetField_0x10_C0AC(uVar10,&uStack_30);
        }
        iVar5 = code_809E804_Sub_080AB788(0x3c);
        uStack_28 = (uStack_28 & 0xFFFF0000 | iVar5 + 0x78U & 0xffff) & 0xFF00FFFF &
                    0x00FFFFFF | iVar8 << 0x18;
        code_actor_0809BFE8_SetField_0x10_C0BC(uVar10,&uStack_28);
      }
      uStack_24 = uStack_24 & 0xFFFF0000 | 0xb4;
      code_actor_0809BFE8_SetField_0x10(uVar10,&uStack_24);
    }
    iVar8 = 0x24;
    *(u8 *)(iVar5 + 0x12) = 1;
    code_entities_Sub_080200C4(param_2,0xab);
  }
  *(short *)(iVar5 + 0x10) = (short)iVar8;
}

/* 0x080396F4 (20B) | code_entities_08034CEC_749C_vfunc_0C (orig: func_080396F4) | origin: pure | domain: code_entities_08034CEC_749C | HIGH / vtable_algebra */
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
u32 code_entities_08034CEC_749C_vfunc_0C(u32 arg0, u32 arg1, u32 arg2, u32 arg3)
{
    register u32 r0 = arg0;
    register u32 r1 = arg1;
    register u32 r2 = arg2;
    register u32 r3 = arg3;
    r0 = *(u32 *)(r1 + 0x34);
    r0 = *(u8 *)(r0 + 0x12);
    r1 = 0;
    if (r0 == 0) goto loc_08039702;
    r1 = 3;
loc_08039702:
    r0 = r1 + 0;
    return r1;
}

