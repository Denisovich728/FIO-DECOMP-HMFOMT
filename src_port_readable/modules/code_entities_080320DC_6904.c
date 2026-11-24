/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_entities_080320DC_6904 (2 functions) */
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

/* 0x08034AA0 (72B) | code_entities_080320DC_6904_vfunc_0C (orig: func_08034AA0) | origin: pure | domain: code_entities_080320DC_6904 | HIGH / vtable_algebra */
struct Sub { s32 flg:2; };
extern void code_entities_080320DC_6864_vfunc_0C();
extern struct Sub code_0803EE94_Sub_0805E8F0();
void code_entities_080320DC_6904_vfunc_0C(int self) {
    code_entities_080320DC_6864_vfunc_0C(self);
    if (*(u16 *)(self + 0xd0) != 0) {
        if (*(u8 *)(self + 0xcb) == 0) {
            if (code_0803EE94_Sub_0805E8F0(self + 0xb4).flg < 0) {
                *(u8 *)(self + 0xc8) = 1;
            }
        } else {
            *(u8 *)(self + 0xcb) = 0;
        }
        *(u16 *)(self + 0xd0) -= 1;
    }
}

/* 0x08034AE8 (276B) | code_entities_080320DC_6904_vfunc_10 (orig: func_08034AE8) | origin: wip | domain: code_entities_080320DC_6904 | HIGH / vtable_algebra */
void code_entities_080320DC_6904_vfunc_10(int self,u32 *param_2) {
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  u32 *puVar6;
  u8 auStack_48 [8];
  u8 auStack_40 [8];
  u8 auStack_38 [16];
  u32 uStack_28;
  u32 uStack_24;
  code_entities_080320DC_6864_vfunc_10();
  if (*(short *)(self + 0xd0) != 0) {
    uStack_28 = *param_2;
    uStack_24 = param_2[2];
    sVar1 = *(short *)(self + 0xcc);
    sVar2 = *(short *)(self + 0xce);
    sVar3 = *(short *)(param_2 + 3);
    sVar4 = *(short *)((int)param_2 + 0xe);
    puVar6 = (u32 *)(self + 0x8c);
    func_080D3918(auStack_48,*(int **)(self + 0xb4),
                    *(u16 *)
                     (*(int *)(self + 0xb8) + (u32)*(u16 *)(self + 0xc0) * 4),
                    *(u32 *)(**(int **)(self + 0xb4) + 0x10));
    if ((int)(-*(u32 *)(self + 0x94) | *(u32 *)(self + 0x94)) < 0) {
      iVar5 = func_080D391C(uStack_24,(int)sVar1 - (int)sVar3,(int)sVar2 - (int)sVar4,0x55,
                              0x8000 - sVar2,auStack_48,*puVar6,*(u16 *)(self + 0x98),
                              self + 0x9c);
    }
    else {
      iVar5 = 0;
    }
    if ((iVar5 != 0) && (*(char *)(self + 200) != '\0')) {
      hardware_Sub_080A480C(puVar6,uStack_28,auStack_40);
      if (*(char *)(self + 0xc9) == '\0') {
        if (*(char *)(self + 0xca) == '\0') {
          code_809E804_Sub_080A4944(puVar6,auStack_38,1);
          *(char *)(self + 0xca) = '\x01';
        }
      }
      else {
        code_809E804_Sub_080A4944(puVar6,auStack_38,1);
      }
      *(char *)(self + 200) = '\0';
    }
  }
}

