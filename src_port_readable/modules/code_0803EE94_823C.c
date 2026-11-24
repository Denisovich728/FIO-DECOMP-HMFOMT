/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_0803EE94_823C (1 functions) */
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

/* 0x080E3B80 (188B) | code_0803EE94_823C_vfunc_0C (orig: func_080E3B80) | origin: wip | domain: code_0803EE94_823C | HIGH / vtable_algebra */
u32 code_0803EE94_823C_vfunc_0C(u8 *self,int param_2,int param_3) {
  u32 uVar1;
  int iVar2;
  u8 auStack_38 [32];
  u8 auStack_18 [4];
  u8 auStack_14 [4];
  if (param_3 == 0xf1) {
    iVar2 = (u32)*(u8 *)(param_2 + 7) * 0x1d + 0x08100BD7;
LAB_080e3bf6:
    uVar1 = LibC_strlen(iVar2);
    if (0x1f < uVar1) {
      uVar1 = 0x1f;
    }
    LibC_memcpy(auStack_38,iVar2,uVar1);
    auStack_38[uVar1] = 0;
    *self = 1;
    LibC_strcpy(self + 4,auStack_38);
  }
  else {
    if (param_3 < 0xf2) {
      if (param_3 == 0xf0) {
        iVar2 = (u32)*(u8 *)(param_2 + 6) * 0x1d + 0x08100AD2;
        goto LAB_080e3bf6;
      }
    }
    else if (param_3 == 0xff) {
      if (*(u16 *)(param_2 + 4) < 0xac) {
        func_0800DCA8(auStack_18,*(u16 *)(param_2 + 4) - 1);
        iVar2 = Food_GetName(auStack_18);
      }
      else {
        func_0800DF50(auStack_14,*(u16 *)(param_2 + 4) - 0xac);
        iVar2 = Article_GetName(auStack_14);
      }
      goto LAB_080e3bf6;
    }
    auStack_38[0] = 0;
    *self = 0;
    LibC_strcpy(self + 4);
  }
  return self;
}

