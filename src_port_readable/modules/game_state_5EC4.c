/* FIO-DECOMP-HMFOMT :: Port Readable Module: game_state_5EC4 (11 functions) */
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

/* 0x0801CA1C (188B) | game_state_5EC4_vfunc_C4 (orig: func_0801CA1C) | origin: wip | domain: game_state_5EC4 | HIGH / vtable_algebra */
u32 game_state_5EC4_vfunc_C4(int self,u32 param_2,int param_3) {
  char cVar1;
  u32 uVar2;
  u32 uStack_34;
  u16 uStack_30;
  u16 uStack_2e;
  u16 uStack_2c;
  u16 uStack_2a;
  char acStack_28 [4];
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  u8 bStack_18;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2e = 0;
  uStack_2c = 0;
  uStack_2a = 0;
  cVar1 = game_state_Sub_0801C0F8(self,param_2,&uStack_34);
  if (cVar1 == '\0') {
    acStack_28[0] = '\0';
    bStack_18 = 1;
    game_state_Sub_0801D104(self,param_2,*(u8 *)(param_3 + 0x080F0800),1,acStack_28);
    if (acStack_28[0] != '\0') {
      if (iStack_24 == 6) {
        hardware_Sub_080AB68C(*(u32 *)(self + 0x00001028),iStack_20 + 0x10,iStack_1c + 0x20,6);
      }
      else {
        if (iStack_24 != 9) {
          uVar2 = 0;
          goto LAB_0801caca;
        }
        hardware_Sub_080AB68C(*(u32 *)(self + 0x00001028),iStack_20 + 0x18,iStack_1c + 0x20,9);
      }
    }
    uVar2 = bStack_18 ^ 1;
  }
  else {
    uVar2 = game_state_Sub_0801C874(self,uStack_2c,uStack_2a,*(u8 *)(param_3 + 0x080F0800));
    uVar2 = uVar2 & 0xff;
  }
LAB_0801caca:
  return uVar2;
}

/* 0x0801DD3C (12B) | game_state_5EC4_vfunc_90 (orig: func_0801DD3C) | origin: pure | domain: game_state_5EC4 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 MapEngine_Sub_080A6234();
void game_state_5EC4_vfunc_90(int arg0) {
  MapEngine_Sub_080A6234(*(u32 *)(arg0 + 4));
}

/* 0x0801DD48 (12B) | game_state_5EC4_vfunc_94 (orig: func_0801DD48) | origin: pure | domain: game_state_5EC4 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 MapEngine_Sub_080A6278();
void game_state_5EC4_vfunc_94(int arg0) {
  MapEngine_Sub_080A6278(*(u32 *)(arg0 + 4));
}

/* 0x0801DD54 (12B) | game_state_5EC4_vfunc_98 (orig: func_0801DD54) | origin: pure | domain: game_state_5EC4 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 MapEngine_Sub_080A62BC();
void game_state_5EC4_vfunc_98(int arg0) {
  MapEngine_Sub_080A62BC(*(u32 *)(arg0 + 4));
}

/* 0x0801DD60 (12B) | game_state_5EC4_vfunc_9C (orig: func_0801DD60) | origin: pure | domain: game_state_5EC4 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 MapEngine_Sub_080A607C();
void game_state_5EC4_vfunc_9C(int arg0) {
  MapEngine_Sub_080A607C(*(u32 *)(arg0 + 4));
}

/* 0x0801DD6C (12B) | game_state_5EC4_vfunc_A0 (orig: func_0801DD6C) | origin: pure | domain: game_state_5EC4 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 MapEngine_Sub_080A6024();
void game_state_5EC4_vfunc_A0(int arg0) {
  MapEngine_Sub_080A6024(*(u32 *)(arg0 + 4));
}

/* 0x0801DD84 (72B) | game_state_5EC4_vfunc_A4 (orig: func_0801DD84) | origin: pure | domain: game_state_5EC4 | HIGH / vtable_algebra */
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
extern u32 RecordPlayer_RemoveAlbum();
extern u32 FarmHouse_GetRecordPlayer_C07C();
extern u32 ArticleStack_GetArticle();
extern u32 game_state_Sub_0801DB58();
extern u32 MapEngine_Sub_080A6300();
u32 game_state_5EC4_vfunc_A4(int arg0) {
  u32 val;
  u8 auStack_14 [4];
  u8 local_buf;
  val = FarmHouse_GetRecordPlayer_C07C(*(int *)(arg0 + 0x00001038) + 500);
  MapEngine_Sub_080A6300(*(u32 *)(arg0 + 4));
  RecordPlayer_RemoveAlbum(auStack_14,val);
  game_state_Sub_0801DB58(arg0);
  local_buf = ArticleStack_GetArticle(auStack_14);
  return func_0800DF54(&local_buf);
}

/* 0x0801DE54 (96B) | game_state_5EC4_vfunc_A8 (orig: func_0801DE54) | origin: pure | domain: game_state_5EC4 | HIGH / vtable_algebra */
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
extern u32 RecordPlayer_SetAlbum();
extern u32 FarmHouse_GetRecordPlayer_C07C();
extern u32 func_0800DF50();
extern u32 ArticleStack_GetArticle();
extern u32 game_state_Sub_0801DB58();
extern u32 MapEngine_Sub_080A635C();
u32 game_state_5EC4_vfunc_A8(int arg0, u32 arg1) {
  u32 val;
  u8 auStack_1c[4];
  u8 local_buf2;
  u8 local_buf;
  val = FarmHouse_GetRecordPlayer_C07C(*(int *)(arg0 + 0x1038) + 500);
  MapEngine_Sub_080A635C(*(u32 *)(arg0 + 4));
  func_0800DF50(&local_buf2, arg1);
  RecordPlayer_SetAlbum(auStack_1c, val, &local_buf2);
  game_state_Sub_0801DB58(arg0);
  local_buf = ArticleStack_GetArticle(auStack_1c);
  return func_0800DF54(&local_buf);
}

/* 0x0801FCB4 (40B) | game_state_5EC4_vfunc_50 (orig: func_0801FCB4) | origin: wip | domain: game_state_5EC4 | HIGH / vtable_algebra */
u32 game_state_5EC4_vfunc_50(int self,int param_2) {
  unsigned int _p_param_1 = self;
  int _p_param_2;

  u8 *pbVar2;
  int iVar1;
  _p_param_2 = param_2;
  iVar1 = *pbVar2 - 0x10;
  pbVar2 = (u16)(u8 *)(_p_param_1 + 0x19c + _p_param_2);
  if (iVar1 < 0) {
    iVar1 = game_state_5EC4_Sub_080AC96C(_p_param_1 + 0x19c);
    *pbVar2 = (char)iVar1 + 0x10;
  }
  return (iVar1);
}

/* 0x080AC96C (128B) | game_state_5EC4_Sub_080AC96C (orig: func_080AC96C) | origin: wip | domain: game_state_5EC4 | MEDIUM / graph_algebra */
u32 game_state_5EC4_Sub_080AC96C(int param_1,int param_2) {
  u8 bVar1;
  u32 uVar2;
  int iVar3;
  u8 *pbVar4;
  pbVar4 = (u8 *)(param_1 + param_2 * 0x84 + 0xa0);
  if ((~(u32)*pbVar4 & 0xff) >> 7 == 0) {
    bVar1 = *(u8 *)(param_1 + 0x00000C14);
    uVar2 = (u32)bVar1;
    if (0xc < uVar2) {
      uVar2 = 0xffffffff;
      goto LAB_080ac9e4;
    }
    *(u8 *)(param_1 + 0x00000C14) = bVar1 + 1;
    iVar3 = param_1 + 0x00000B78 + uVar2 * 0xc;
    if (*(char *)(iVar3 + 9) != param_2) {
      *(char *)(iVar3 + 9) = (char)param_2;
      *(u8 *)(iVar3 + 10) = 0;
    }
    if ((int)(char)*pbVar4 != uVar2) {
      *pbVar4 = bVar1;
    }
  }
  else {
    iVar3 = param_1 + 0x00000B78 + (char)*pbVar4 * 0xc;
  }
  uVar2 = (u32)*(u8 *)(iVar3 + 8);
LAB_080ac9e4:
  return uVar2;
}

/* 0x080ADAFC (40B) | game_state_5EC4_Sub_080ADAFC (orig: func_080ADAFC) | origin: wip | domain: game_state_5EC4 | MEDIUM / graph_algebra */
u32 game_state_5EC4_Sub_080ADAFC(int param_1,int param_2) {
    s8 * pbVar2;
  register int iVar1;
  iVar1 = *pbVar2 - 0x10;
  pbVar2 = (u8 *)(param_1 + 0x19c + param_2);
  if (iVar1 < 0) {
    iVar1 = game_state_5EC4_Sub_080AC96C(param_1 + 0x19c);
    *pbVar2 = (char)iVar1 + 0x10;
  }
  return iVar1;
}

