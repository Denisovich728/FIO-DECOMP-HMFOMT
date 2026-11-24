/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_entities_08034CEC_748C (1 functions) */
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

/* 0x08039708 (412B) | code_entities_08034CEC_748C_vfunc_08 (orig: func_08039708) | origin: wip | domain: code_entities_08034CEC_748C | HIGH / vtable_algebra */
void code_entities_08034CEC_748C_vfunc_08(u32 self,u32 *param_2,u32 param_3) {
  int iVar1;
  int iVar2;
  u32 uVar3;
  u32 uVar4;
  u32 uVar5;
  u8 bVar6;
  u32 uStack_30;
  u32 uStack_2c;
  u32 uStack_28;
  u32 uStack_24;
  iVar1 = param_2[0xd];
  uVar4 = (u32)*(u16 *)(iVar1 + 0x10);
  if (uVar4 != 0) {
    uVar4 = uVar4 - 1;
  }
  uVar5 = *(u32 *)(iVar1 + 0x10) & 0x7fffff;
  bVar6 = (u8)(uVar5 >> 0x10);
  if (uVar5 >> 0x10 != 0) {
    bVar6 = bVar6 - 1;
  }
  uVar5 = (u32)*(u8 *)(iVar1 + 0x13);
  if (uVar5 != 0) {
    uVar5 = uVar5 - 1;
  }
  if (uVar4 != 0) {
    uVar3 = 0;
    if ((int)(*(u32 *)(iVar1 + 0x10) * 0x100) < 0) {
      uVar3 = 0x2b;
    }
    iVar2 = func_080D3914((int *)*param_2,uVar3,*(u32 *)(*(int *)*param_2 + 0x40));
    if ((iVar2 != 0) && (*(short *)(iVar2 + 4) == *(short *)(param_2 + 1))) {
      if (uVar5 == 0) {
        uVar5 = code_entities_Sub_080ABE58((int)*(short *)((int)param_2 + 10),(int)*(short *)((int)param_2 + 0xe)
                              ,(int)*(short *)(iVar2 + 10),(int)*(short *)(iVar2 + 0xe),param_3,
                              *(u8 *)(param_2 + 8));
        if (*(u8 *)(param_2 + 8) != uVar5) {
          AActorEntity_SetAnimFacing(param_2);
        }
        iVar2 = code_809E804_Sub_080AB788(0x1e);
        uVar5 = iVar2 + 1;
      }
      *(short *)(iVar1 + 0x10) = (short)uVar4;
      *(u8 *)(iVar1 + 0x12) = *(u8 *)(iVar1 + 0x12) & 0x80 | bVar6 & 0x7f;
      *(char *)(iVar1 + 0x13) = (char)uVar5;
    }
  }
  entity_actor_Sub_080323C8(param_2);
  uVar3 = param_2[0xd];
  iVar2 = 100;
  iVar1 = code_actor_0809BFE8_Sub_0809C060(uVar3);
  if (iVar1 == 0) {
    code_entities_Sub_080200C4(param_2,0xaa);
  }
  else {
    iVar2 = code_entities_08034CEC_Sub_08039134(*param_2,*(u16 *)(param_2 + 1),(int)*(short *)((int)param_2 + 10),
                          (int)*(short *)((int)param_2 + 0xe));
  }
  if (iVar2 == 100) {
    uStack_24 = uStack_24 & 0xFFFF0000 | 0xb4;
    code_actor_0809BFE8_SetField_0x10(uVar3,&uStack_24);
  }
  else {
    uVar4 = code_809E804_Sub_080AB788(100);
    if (uVar4 < 0x46) {
      uStack_30 = uStack_30 & 0xFFFF0000;
      iVar1 = code_809E804_Sub_080AB788(8);
      uStack_2c = (uStack_2c & 0xFF00FFFF | (iVar1 + 3U & 0xff) << 0x10) & 0x00FFFFFF |
                  iVar2 << 0x18;
      code_actor_0809BFE8_SetField_0x10_C0AC(uVar3,&uStack_30);
    }
    else {
      iVar1 = code_809E804_Sub_080AB788(0x3c);
      uStack_28 = (uStack_28 & 0xFFFF0000 | iVar1 + 0x78U & 0xffff) & 0xFF00FFFF &
                  0x00FFFFFF | iVar2 << 0x18;
      code_actor_0809BFE8_SetField_0x10_C0BC(uVar3,&uStack_28);
    }
  }
}

