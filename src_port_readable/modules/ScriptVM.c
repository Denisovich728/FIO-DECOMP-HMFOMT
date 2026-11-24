/* FIO-DECOMP-HMFOMT :: Port Readable Module: ScriptVM (73 functions) */
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

/* 0x0803D52C (280B) | ScriptVM_Sub_0803D52C (orig: func_0803D52C) | origin: wip | domain: ScriptVM | MEDIUM / graph_algebra */
u32 ScriptVM_Sub_0803D52C(char *self,u32 *param_2) {
  u8 bVar1;
  u32 *puVar2;
  u32 uVar3;
  u32 uVar4;
  char cVar5;
  u8 bVar6;
  u32 uStack_2c;
  u32 uStack_28;
  u8 bStack_24;
  bStack_24 = *(u8 *)((int)param_2 + 1);
  uVar4 = ((bStack_24 & 0x7f) >> 2) + (bStack_24 & 3) * 0x1e + (((u8)*param_2 & 7) + 6) * 0x78;
  if (6 < uVar4) {
    uVar4 = LibGcc_umodsi3(uVar4,7);
  }
  bVar6 = (u8)(uVar4 & 7);
  uStack_2c = 200;
  uStack_28 = (u32)(u8)((u8)*param_2 >> 3) * 7 + ((u8)*param_2 & 7);
  puVar2 = &uStack_2c;
  if (uStack_28 < 200) {
    puVar2 = &uStack_28;
  }
  cVar5 = (char)*puVar2;
  if ((*param_2 & 0x1fffff) >> 0x10 < 6) {
    uVar3 = (bStack_24 & 0x7f) >> 2;
    if (uVar3 == 0) {
      bStack_24 = (bStack_24 & 3) - 1 & 3;
      uVar3 = 0x1d;
    }
    else {
      uVar3 = uVar3 - 1;
    }
    bStack_24 = bStack_24 & 0x83 | (u8)((uVar3 & 0x1f) << 2);
    if (((bStack_24 & 3) == 3) && ((bStack_24 & 0x7f) >> 2 == 0x1d)) {
      cVar5 = cVar5 + -1;
    }
    bVar1 = 6;
    if (1 < (uVar4 & 7)) {
      bVar1 = bVar6 - 1;
    }
    bVar6 = bVar1 & 7;
  }
  *self = cVar5;
  self[1] = bStack_24 & 3;
  self[2] = (char)((bStack_24 & 0x7f) >> 2) + '\x01';
  self[3] = bVar6;
  return (self);
}

/* 0x0803D644 (68B) | ScriptVM_Sub_0803D644 (orig: func_0803D644) | origin: wip | domain: ScriptVM | MEDIUM / graph_algebra */
u32 ScriptVM_Sub_0803D644(int self,int param_2) {
    u8 * pbVar3;
    u8 uStack_c;
  register u32 *pbVar1;
  register u32 uVar2;
  uStack_c = 0x1e * self + -1 + param_2;
  pbVar3 = (u8 *)(0x080F1A66 + 0xe);
  pbVar1 = (u8 *)ScriptVM_Sub_080E0E80(0x080F1A66,pbVar3,&uStack_c,0,0);
  uVar2 = 0;
  if ((pbVar1 != pbVar3) && (*pbVar1 <= uStack_c)) {
    uVar2 = 1;
  }
  return uVar2;
}

/* 0x0803DA24 (88B) | ScriptVM_Sub_0803DA24 (orig: func_0803DA24) | origin: wip | domain: ScriptVM | MEDIUM / graph_algebra */
u32 ScriptVM_Sub_0803DA24(int self) {
  char cVar1;
  u32 uVar2;
  u8 uStack_10;
  u8 uStack_f;
  u8 uStack_e;
  char cStack_d;
  if ((*(u8 *)(self + 0x000021CA) & 0xc) == 0) {
    ScriptVM_Sub_0803D52C(&uStack_10,self + 0x10);
    cVar1 = ScriptVM_Sub_0803D644(uStack_f,uStack_e);
    if (cVar1 == '\0') {
      if (*(int *)(self + 8) == 0) {
        if (cStack_d == '\x02') {
          uVar2 = 3;
        }
        else {
          uVar2 = 1;
        }
      }
      else {
        uVar2 = 2;
      }
    }
    else {
      uVar2 = 4;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

/* 0x0803DC64 (80B) | ScriptVM_Sub_0803DC64 (orig: func_0803DC64) | origin: wip | domain: ScriptVM | MEDIUM / tu_interp */
u32 ScriptVM_Sub_0803DC64(int self) {
  char cVar1;
  u32 uVar2;
  u8 uStack_c;
  u8 uStack_b;
  u8 uStack_a;
  char cStack_9;
  if ((*(u8 *)(self + 0x000021CA) & 0xc) == 0) {
    ScriptVM_Sub_0803D52C(&uStack_c,self + 0x10);
    cVar1 = ScriptVM_Sub_0803D644(uStack_b,uStack_a);
    if (cVar1 == '\0') {
      if (cStack_9 == '\0') {
        uVar2 = 2;
      }
      else {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = 3;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

/* 0x0803DDE8 (228B) | ScriptVM_Sub_0803DDE8 (orig: func_0803DDE8) | origin: wip | domain: ScriptVM | MEDIUM / tu_interp */
u32 ScriptVM_Sub_0803DDE8(int self) {
  char cVar1;
  u32 uVar2;
  u8 bStack_1c;
  char cStack_1b;
  u8 bStack_1a;
  char cStack_19;
  if (-1 < (int)((u32)*(u8 *)(self + 0x000021CA) * 0x2000000)) {
    ScriptVM_Sub_0803D52C(&bStack_1c,self + 0x10);
    if (((*(u8 *)(self + 0x00002181) & 0x3f) >> 4 != 2) &&
       (((int)((u32)*(u8 *)(self + 0x00002181 + -0xc) * 0x8000000) < 0 ||
        ((bStack_1c < 2 && (((bStack_1c != 1 || (cStack_1b != '\x03')) || (bStack_1a < 0x1d)))))))) {
      if ((*(u8 *)(self + 0x00002181) & 3) == 1) {
        uVar2 = 5;
      }
      else {
        cVar1 = ScriptVM_Sub_0803D644(cStack_1b,bStack_1a);
        if (cVar1 == '\0') {
          if (((bStack_1c != 1) || (cStack_1b != '\x02')) ||
             ((bStack_1a != 0xf ||
              (-1 < (int)((u32)*(u8 *)(self + 0x00002175) * 0x8000000))))) {
            if ((*(u32 *)(self + 0x00002174) & 0x61000) != 0x41000) {
              uVar2 = 1;
              goto LAB_0803debe;
            }
            if (cStack_19 == '\x06') {
              uVar2 = 3;
              goto LAB_0803debe;
            }
          }
          uVar2 = 2;
        }
        else {
          uVar2 = 4;
        }
      }
      goto LAB_0803debe;
    }
  }
  uVar2 = 0;
LAB_0803debe:
  return uVar2;
}

/* 0x0803DECC (44B) | ScriptVM_Sub_0803DECC (orig: func_0803DECC) | origin: wip | domain: ScriptVM | MEDIUM / tu_interp */
u32 ScriptVM_Sub_0803DECC(int self) {
    BOOL uVar2;
    s16 uStack_c;
  register char cVar1;
  register s32 uStack_a;
  register s8 uStack_b;
  ScriptVM_Sub_0803D52C(&uStack_c,self + 0x10);
  cVar1 = ScriptVM_Sub_0803D644(uStack_b,uStack_a);
  if (cVar1 == '\0') {
    uVar2 = (u8)1;
  }
  else {
    uVar2 = 2;
  }
  return uVar2;
}

/* 0x0803DEF8 (88B) | ScriptVM_Sub_0803DEF8 (orig: func_0803DEF8) | origin: wip | domain: ScriptVM | MEDIUM / tu_interp */
u32 ScriptVM_Sub_0803DEF8(int self) {
  char cVar1;
  u32 uVar2;
  u8 uStack_10;
  u8 uStack_f;
  u8 uStack_e;
  char cStack_d;
  if ((int)((u32)*(u8 *)(self + 0x000021CA) * 0x4000000) < 0) {
    uVar2 = 0;
  }
  else {
    ScriptVM_Sub_0803D52C(&uStack_10,self + 0x10);
    cVar1 = ScriptVM_Sub_0803D644(uStack_f,uStack_e);
    if (cVar1 == '\0') {
      if (cStack_d == '\x03') {
        if (*(int *)(self + 8) == 0) {
          uVar2 = 2;
        }
        else {
          uVar2 = 3;
        }
      }
      else {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = 4;
    }
  }
  return uVar2;
}

/* 0x0803DF50 (68B) | ScriptVM_Sub_0803DF50 (orig: func_0803DF50) | origin: wip | domain: ScriptVM | MEDIUM / tu_interp */
u32 ScriptVM_Sub_0803DF50(int self) {
  char cVar1;
  u32 uVar2;
  u8 uStack_c;
  u8 uStack_b;
  s8 uStack_a;
  if ((int)((u32)*(u8 *)(self + 0x000021CA) * 0x4000000) < 0) {
    uVar2 = 0;
  }
  else {
    ScriptVM_Sub_0803D52C(&uStack_c,self + 0x10);
    cVar1 = ScriptVM_Sub_0803D644(uStack_b,uStack_a);
    if (cVar1 == '\0') {
      uVar2 = 1;
    }
    else {
      uVar2 = (u32)2;
    }
  }
  return uVar2;
}

/* 0x0803DF94 (84B) | ScriptVM_Sub_0803DF94 (orig: func_0803DF94) | origin: wip | domain: ScriptVM | MEDIUM / tu_interp */
u32 ScriptVM_Sub_0803DF94(int self) {
  char cVar1;
  u32 uVar2;
  u8 uStack_c;
  u8 uStack_b;
  u8 uStack_a;
  char cStack_9;
  if ((int)((u32)*(u8 *)(self + 0x000021CA) * 0x20000000) < 0) {
    uVar2 = 0;
  }
  else {
    ScriptVM_Sub_0803D52C(&uStack_c,self + 0x10);
    cVar1 = ScriptVM_Sub_0803D644(uStack_b,uStack_a);
    if (cVar1 == '\0') {
      if (cStack_9 == '\x02') {
        uVar2 = 2;
      }
      else if (cStack_9 == '\0') {
        uVar2 = 3;
      }
      else {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = 4;
    }
  }
  return uVar2;
}

/* 0x0803E1A4 (88B) | ScriptVM_Sub_0803E1A4 (orig: func_0803E1A4) | origin: wip | domain: ScriptVM | MEDIUM / tu_interp */
u32 ScriptVM_Sub_0803E1A4(int self) {
  char cVar1;
  u32 uVar2;
  u8 uStack_10;
  u8 uStack_f;
  u8 uStack_e;
  char cStack_d;
  if ((int)((u32)*(u8 *)(self + 0x000021CA) * 0x20000000) < 0) {
    uVar2 = 0;
  }
  else {
    ScriptVM_Sub_0803D52C(&uStack_10,self + 0x10);
    cVar1 = ScriptVM_Sub_0803D644(uStack_f,uStack_e);
    if (cVar1 == '\0') {
      if (*(int *)(self + 8) == 0) {
        if (cStack_d == '\x02') {
          uVar2 = 3;
        }
        else {
          uVar2 = 1;
        }
      }
      else {
        uVar2 = 2;
      }
    }
    else {
      uVar2 = 4;
    }
  }
  return uVar2;
}

/* 0x0803E1FC (104B) | ScriptVM_Sub_0803E1FC (orig: func_0803E1FC) | origin: wip | domain: ScriptVM | MEDIUM / graph_algebra */
u32 ScriptVM_Sub_0803E1FC(int self) {
  char cVar1;
  u32 uVar2;
  int iVar3;
  u8 uStack_14;
  char cStack_13;
  s16 cStack_12;
  if ((int)((u32)*(u8 *)(self + 0x000021CA) * 0x2000000) < 0) {
    uVar2 = 0;
  }
  else {
    ScriptVM_Sub_0803D52C(&uStack_14,self + 0x10);
    cVar1 = ScriptVM_Sub_0803D644(cStack_13,cStack_12);
    if (cVar1 == '\0') {
      iVar3 = (u16)ScriptVM_Func120(self + 0x00001CD4);
      if (((cStack_13 == '\x02') && (cStack_12 == '\x05')) && (iVar3 != 0x19)) {
        uVar2 = 3;
      }
      else {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = 2;
    }
  }
  return uVar2;
}

/* 0x0803E40C (60B) | ScriptVM_Sub_0803E40C (orig: func_0803E40C) | origin: wip | domain: ScriptVM | MEDIUM / tu_interp */
u32 ScriptVM_Sub_0803E40C(int self) {
  u32 uVar1;
  u8 auStack_10 [3];
  char cStack_d;
  ScriptVM_Sub_0803D52C(auStack_10,self + 0x10);
  if (((((u32)(*(u8 *)(self + 0x00002187)) << 27) >> 27) >> 3 == 2) && (cStack_d == '\0')) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

/* 0x0803E448 (88B) | ScriptVM_Sub_0803E448 (orig: func_0803E448) | origin: wip | domain: ScriptVM | MEDIUM / tu_interp */
u32 ScriptVM_Sub_0803E448(int self) {
  char cVar1;
  u32 uVar2;
  u8 uStack_10;
  u8 uStack_f;
  u8 uStack_e;
  char cStack_d;
  if ((int)((u32)*(u8 *)(self + 0x000021CA) * 0x8000000) < 0) {
    uVar2 = 0;
  }
  else {
    ScriptVM_Sub_0803D52C(&uStack_10,self + 0x10);
    cVar1 = ScriptVM_Sub_0803D644(uStack_f,uStack_e);
    if (cVar1 == '\0') {
      if (cStack_d == '\x01') {
        if (*(int *)(self + 8) == 0) {
          uVar2 = 2;
        }
        else {
          uVar2 = 3;
        }
      }
      else {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = 4;
    }
  }
  return uVar2;
}

/* 0x0803E620 (100B) | ScriptVM_Sub_0803E620 (orig: func_0803E620) | origin: wip | domain: ScriptVM | MEDIUM / tu_interp */
u32 ScriptVM_Sub_0803E620(int self) {
  char cVar1;
  u32 uVar2;
  u8 uStack_10;
  u8 uStack_f;
  u8 uStack_e;
  char cStack_d;
  if ((int)((u32)*(u8 *)(self + 0x000021CA) * 0x8000000) < 0) {
    uVar2 = 0;
  }
  else {
    ScriptVM_Sub_0803D52C(&uStack_10,self + 0x10);
    cVar1 = ScriptVM_Sub_0803D644(uStack_f,uStack_e);
    if (cVar1 == '\0') {
      if (cStack_d == '\x01') {
        if (*(int *)(self + 8) == 0) {
          uVar2 = 3;
        }
        else {
          uVar2 = 4;
        }
      }
      else if (*(int *)(self + 8) == 0) {
        uVar2 = 1;
      }
      else {
        uVar2 = 2;
      }
    }
    else {
      uVar2 = 5;
    }
  }
  return uVar2;
}

/* 0x0803E684 (104B) | ScriptVM_Sub_0803E684 (orig: func_0803E684) | origin: wip | domain: ScriptVM | MEDIUM / tu_interp */
u32 ScriptVM_Sub_0803E684(int self) {
  char cVar1;
  u32 uVar2;
  u32 *puVar3;
  u8 uStack_1c;
  char cStack_1b;
  u8 bStack_1a;
  u32 uStack_18;
  u32 uStack_14;
  ScriptVM_Sub_0803D52C(&uStack_1c,self + 0x10);
  cVar1 = ScriptVM_Sub_0803D644(cStack_1b,bStack_1a);
  if (cVar1 == '\0') {
    uStack_18 = 200;
    uStack_14 = (u32)(*(u8 *)(self + 0x10) >> 3) * 7 + (*(u8 *)(self + 0x10) & 7);
    puVar3 = &uStack_18;
    if (uStack_14 < 200) {
      puVar3 = &uStack_14;
    }
    if (((*puVar3 < 2) && (cStack_1b == '\0')) && (bStack_1a < 3)) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 2;
  }
  return uVar2;
}

/* 0x0803E6EC (148B) | ScriptVM_Sub_0803E6EC (orig: func_0803E6EC) | origin: wip | domain: ScriptVM | MEDIUM / tu_interp */
u32 ScriptVM_Sub_0803E6EC(int self) {
  char cVar1;
  u32 uVar2;
  u8 uStack_10;
  char cStack_f;
  char cStack_e;
  char cStack_d;
  ScriptVM_Sub_0803D52C(&uStack_10,self + 0x10);
  if (((cStack_f == '\x03') && (cStack_e == '\x02')) &&
     ((*(u32 *)(self + 0x00002178) & 0x43000) == 0x2000)) {
    if ((*(u8 *)(self + 0x0000217A) & 0x1f) >> 3 == 2) {
      uVar2 = 0;
    }
    else {
      uVar2 = 7;
    }
  }
  else {
    cVar1 = ScriptVM_Sub_0803D644(cStack_f,cStack_e);
    if (cVar1 == '\0') {
      if (cStack_d == '\x06') {
        if (*(int *)(self + 8) == 0) {
          uVar2 = 2;
        }
        else {
          uVar2 = 3;
        }
      }
      else if (cStack_d == '\0') {
        if (*(int *)(self + 8) == 0) {
          uVar2 = 4;
        }
        else {
          uVar2 = 5;
        }
      }
      else {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = 6;
    }
  }
  return uVar2;
}

/* 0x0803E8E8 (136B) | ScriptVM_Sub_0803E8E8 (orig: func_0803E8E8) | origin: wip | domain: ScriptVM | MEDIUM / graph_algebra */
u32 ScriptVM_Sub_0803E8E8(int self) {
  char cVar1;
  u32 uVar2;
  u8 uStack_10;
  char cStack_f;
  char cStack_e;
  char cStack_d;
  if (-1 < (int)((u32)*(u8 *)(self + 0x000021CA) * 0x4000000)) {
    ScriptVM_Sub_0803D52C(&uStack_10,self + 0x10);
    if (((cStack_f == '\x02') && (cStack_e == '\x1e')) &&
       (*(u8 *)(self + 0x000021A2) >> 6 != 2)) {
      uVar2 = 5;
      goto LAB_0803e968;
    }
    cVar1 = ScriptVM_Sub_0803D644(cStack_f);
    if (cVar1 != '\0') {
      uVar2 = 4;
      goto LAB_0803e968;
    }
    if (-1 < (int)((u32)*(u8 *)(self + 0x0000215A) * 0x10000000)) {
      if ((cStack_d == '\x01') || (cStack_d == '\x03')) {
        uVar2 = 3;
      }
      else if (*(int *)(self + 8) == 0) {
        uVar2 = 1;
      }
      else {
        uVar2 = 2;
      }
      goto LAB_0803e968;
    }
  }
  uVar2 = 0;
LAB_0803e968:
  return uVar2;
}

/* 0x0803E970 (116B) | ScriptVM_Sub_0803E970 (orig: func_0803E970) | origin: wip | domain: ScriptVM | MEDIUM / graph_algebra */
u32 ScriptVM_Sub_0803E970(int self) {
  u8 cStack_11;
  unsigned int uVar2;
  u8 uStack_14;
  u8 uStack_13;
  u8 uStack_12;
  register BOOL cVar1;
  cVar1 = ScriptVM_Sub_0803D644(uStack_13,uStack_12);
  ScriptVM_Sub_0803D52C(&uStack_14,0x10 + self);
  if (cVar1 == '\0') {
    if ((int)((u32)*(u8 *)(0x000021CA + self) * 0x2000000) < 0) {
      uVar2 = 0;
    }
    else if ((*(u32 *)(self + 0x00002174) & 0x61000) == 0x41000) {
      if (cStack_11 == '\x06') {
        uVar2 = 4;
      }
      else {
        uVar2 = 3;
      }
    }
    else if (cStack_11 == '\x06') {
      uVar2 = 2;
    }
    else {
      uVar2 = (u32)1;
    }
  }
  else {
    uVar2 = 5;
  }
  return uVar2;
}

/* 0x0803E9E4 (120B) | ScriptVM_Sub_0803E9E4 (orig: func_0803E9E4) | origin: wip | domain: ScriptVM | MEDIUM / graph_algebra */
u32 ScriptVM_Sub_0803E9E4(int self) {
  char cVar1;
  u32 uVar2;
  u8 uStack_10;
  u8 uStack_f;
  u8 uStack_e;
  char cStack_d;
  ScriptVM_Sub_0803D52C(&uStack_10,self + 0x10);
  cVar1 = ScriptVM_Sub_0803D644(uStack_f,uStack_e);
  if (cVar1 == '\0') {
    if ((int)((u32)*(u8 *)(self + 0x000021CA) * 0x2000000) < 0) {
      uVar2 = 0;
    }
    else if (*(int *)(self + 8) == 0) {
      if (cStack_d == '\x06') {
        if ((*(u32 *)(self + 0x00002174) & 0x61000) == 0x41000) {
          uVar2 = 4;
        }
        else {
          uVar2 = 3;
        }
      }
      else {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = 2;
    }
  }
  else {
    uVar2 = 5;
  }
  return uVar2;
}

/* 0x0803EA5C (60B) | ScriptVM_Sub_0803EA5C (orig: func_0803EA5C) | origin: wip | domain: ScriptVM | MEDIUM / tu_interp */
u32 ScriptVM_Sub_0803EA5C(int self) {
  u32 uVar1;
  u8 auStack_10 [3];
  char cStack_d;
  ScriptVM_Sub_0803D52C(auStack_10,self + 0x10);
  if (((((u32)(*(u8 *)(self + 0x00002186)) << 25) >> 25) >> 5 == 2) && (cStack_d == '\x03')) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

/* 0x0803EA98 (68B) | ScriptVM_Sub_0803EA98 (orig: func_0803EA98) | origin: wip | domain: ScriptVM | MEDIUM / tu_interp */
u32 ScriptVM_Sub_0803EA98(int self) {
    char cVar1;
    s8 uStack_c;
    s32 uStack_b;
    s8 uStack_a;
  register s32 uVar2;
  if ((int)((u32)*(u8 *)(self + 0x000021CA) * 0x4000000) < 0) {
    uVar2 = 0;
  }
  else {
    ScriptVM_Sub_0803D52C(&uStack_c,self + 0x10);
    cVar1 = ScriptVM_Sub_0803D644(uStack_b,uStack_a);
    if (cVar1 == '\0') {
      uVar2 = (u32)1;
    }
    else {
      uVar2 = 2;
    }
  }
  return uVar2;
}

/* 0x0803EADC (100B) | ScriptVM_Sub_0803EADC (orig: func_0803EADC) | origin: wip | domain: ScriptVM | MEDIUM / tu_interp */
u32 ScriptVM_Sub_0803EADC(int self) {
  char cVar1;
  u32 uVar2;
  u8 uStack_10;
  char cStack_f;
  char cStack_e;
  char cStack_d;
  if ((*(u8 *)(self + 0x000021CA) & 0x7c) == 0) {
    ScriptVM_Sub_0803D52C(&uStack_10,self + 0x10);
    if ((cStack_f == '\x02') && (cStack_e == '\x03')) {
      uVar2 = 9;
    }
    else {
      cVar1 = ScriptVM_Sub_0803D644();
      if (cVar1 == '\0') {
        if (((cStack_d == '\x01') || (cStack_d == '\x03')) || (*(int *)(self + 8) != 0)) {
          uVar2 = 1;
        }
        else {
          uVar2 = 2;
        }
      }
      else {
        uVar2 = 8;
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

/* 0x0803EB40 (92B) | ScriptVM_Sub_0803EB40 (orig: func_0803EB40) | origin: wip | domain: ScriptVM | MEDIUM / tu_interp */
u32 ScriptVM_Sub_0803EB40(int self) {
  char cVar1;
  u32 uVar2;
  u8 uStack_10;
  char cStack_f;
  u8 uStack_e;
  char cStack_d;
  if (-1 < (int)((u32)*(u8 *)(self + 0x000021CA) * 0x10000000)) {
    ScriptVM_Sub_0803D52C(&uStack_10,self + 0x10);
    if (cStack_f == '\x01') {
      cVar1 = ScriptVM_Sub_0803D644(1,uStack_e);
      if (cVar1 == '\0') {
        if (cStack_d == '\0') {
          if (*(int *)(self + 8) == 0) {
            uVar2 = 2;
          }
          else {
            uVar2 = 3;
          }
        }
        else {
          uVar2 = 1;
        }
      }
      else {
        uVar2 = 4;
      }
      goto LAB_0803eb94;
    }
  }
  uVar2 = 0;
LAB_0803eb94:
  return uVar2;
}

/* 0x0803EB9C (168B) | ScriptVM_Sub_0803EB9C (orig: func_0803EB9C) | origin: wip | domain: ScriptVM | MEDIUM / tu_interp */
u32 ScriptVM_Sub_0803EB9C(int self) {
  char cVar1;
  u32 uVar2;
  u32 uVar3;
  u8 uStack_1c;
  u8 uStack_1b;
  u8 uStack_1a;
  char cStack_19;
  if ((int)((u32)*(u8 *)(self + 0x000021CA) * 0x8000000) < 0) {
    uVar2 = 0;
  }
  else {
    ScriptVM_Sub_0803D52C(&uStack_1c,self + 0x10);
    uVar3 = func_0809E4AC(self + 0x00001E28);
    if (uVar3 < 5) {
      cVar1 = ScriptVM_Sub_0803D644(uStack_1b,uStack_1a);
      if (cVar1 == '\0') {
        if (uVar3 == 0) {
          uVar2 = 1;
        }
        else if (cStack_19 == '\x01') {
          uVar2 = 3;
        }
        else if (cStack_19 == '\x04') {
          uVar2 = 4;
        }
        else {
          uVar2 = 2;
        }
      }
      else {
        uVar2 = 8;
      }
    }
    else {
      cVar1 = ScriptVM_Sub_0803D644(uStack_1b,uStack_1a);
      if (cVar1 == '\0') {
        if (cStack_19 == '\x04') {
          if (*(int *)(self + 8) == 0) {
            uVar2 = 6;
          }
          else {
            uVar2 = 7;
          }
        }
        else {
          uVar2 = 5;
        }
      }
      else {
        uVar2 = 9;
      }
    }
  }
  return uVar2;
}

/* 0x0803EC44 (124B) | ScriptVM_Sub_0803EC44 (orig: func_0803EC44) | origin: wip | domain: ScriptVM | MEDIUM / graph_algebra */
u32 ScriptVM_Sub_0803EC44(int self) {
  char cVar1;
  u32 uVar2;
  int iVar3;
  int iVar4;
  u8 uStack_14;
  u8 uStack_13;
  u8 uStack_12;
  char cStack_11;
  if ((int)((u32)*(u8 *)(self + 0x000021CA) * 0x8000000) < 0) {
    uVar2 = 0;
  }
  else {
    ScriptVM_Sub_0803D52C(&uStack_14,self + 0x10);
    cVar1 = ScriptVM_Sub_0803D644(uStack_13,uStack_12);
    if (cVar1 == '\0') {
      iVar4 = self + 0x00001DAC;
      iVar3 = ScriptVM_Func0F2(iVar4);
      if ((iVar3 == 0) || (cVar1 = ScriptVM_Func0F3(iVar4), cVar1 != '\0')) {
        if (cStack_11 == '\x04') {
          if (*(int *)(self + 8) == 0) {
            uVar2 = 2;
          }
          else {
            uVar2 = 3;
          }
        }
        else {
          uVar2 = 1;
        }
      }
      else {
        uVar2 = 5;
      }
    }
    else {
      uVar2 = 4;
    }
  }
  return uVar2;
}

/* 0x0803EDCC (132B) | ScriptVM_Sub_0803EDCC (orig: func_0803EDCC) | origin: wip | domain: ScriptVM | MEDIUM / graph_algebra */
u32 ScriptVM_Sub_0803EDCC(int self) {
  char cVar1;
  u32 uVar2;
  u8 uStack_18;
  char cStack_17;
  char cStack_16;
  char cStack_15;
  ScriptVM_Sub_0803D52C(&uStack_18,self + 0x10);
  cVar1 = ScriptVM_Sub_0803D644(cStack_17,cStack_16);
  if (cVar1 == '\0') {
    if (((cStack_17 == '\x02') && (cStack_16 == '\x1e')) &&
       ((*(u8 *)(self + 0x000021A2) & 0x3f) >> 4 != 2)) {
      uVar2 = 6;
    }
    else if ((int)((u32)*(u8 *)(self + 0x0000215A) * 0x10000000) < 0) {
      uVar2 = 0;
    }
    else if (*(int *)(self + 8) == 0) {
      if (cStack_15 == '\x01') {
        uVar2 = 1;
      }
      else if (cStack_15 == '\x03') {
        uVar2 = 2;
      }
      else {
        uVar2 = 3;
      }
    }
    else {
      uVar2 = 4;
    }
  }
  else {
    uVar2 = 5;
  }
  return uVar2;
}

/* 0x0803EE50 (68B) | ScriptVM_Sub_0803EE50 (orig: func_0803EE50) | origin: wip | domain: ScriptVM | MEDIUM / graph_algebra */
u32 ScriptVM_Sub_0803EE50(int self) {
  char cVar1;
  u32 uVar2;
  u8 uStack_10;
  u8 uStack_f;
  u8 uStack_e;
  char cStack_d;
  ScriptVM_Sub_0803D52C(&uStack_10,self + 0x10);
  cVar1 = ScriptVM_Sub_0803D644(uStack_f,uStack_e);
  if (cVar1 == '\0') {
    if (cStack_d == '\x01') {
      if (*(int *)(self + 8) == 0) {
        uVar2 = 2;
      }
      else {
        uVar2 = 3;
      }
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 4;
  }
  return uVar2;
}

/* 0x08045584 (84B) | ScriptVM_Sub_08045584 (orig: func_08045584) | origin: wip | domain: ScriptVM | MEDIUM / graph_algebra */
u32 ScriptVM_Sub_08045584(int self, u32 param_2, u32 param_3) {
  int uVar3;
  int iVar1;
  s8 iVar2;
  iVar1 = ScriptVM_Give_Love_Points(*(int *)(0x350 + self) + 0x00001CD4);
  if (0 != iVar1) {
    if (param_3 == '\0') {
      iVar2 = func_0809E49C(iVar1);
      if (iVar2 == 5) {
        uVar3 = func_0809E4A4(iVar1);
        goto LAB_080455d0;
      }
    }
    else {
      if (func_0809E4AC(iVar1) == 4) {
        uVar3 = func_0809E4B4(iVar1);
        goto LAB_080455d0;
      }
    }
  }
  uVar3 = 0;
LAB_080455d0:
  return uVar3;
}

/* 0x080455D8 (96B) | ScriptVM_Sub_080455D8 (orig: func_080455D8) | origin: wip | domain: ScriptVM | MEDIUM / graph_algebra */
u32 ScriptVM_Sub_080455D8(int self,u16 param_2,u32 param_3,u32 param_4,char param_5) {
  int uVar2;
  char cVar1;
  register int iVar3;
  register u32 uVar4;
  cVar1 = game_state_Sub_0809C694(*(int *)(0x350 + self) + 0x0000214C,param_2);
  if (cVar1 == '\0') {
    iVar3 = (u32)ScriptVM_Give_Love_Points(*(int *)(self + 0x350) + 0x00001CD4,param_3);
    if (iVar3 != 0) {
      if (param_5 == '\0') {
        uVar4 = func_0809E49C();
      }
      else {
        uVar4 = func_0809E4AC();
      }
      if (uVar4 >= param_4) {
        uVar2 = 2;
        goto LAB_08045632;
      }
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
LAB_08045632:
  return uVar2;
}

/* 0x08045638 (724B) | ScriptVM_Sub_08045638 (orig: func_08045638) | origin: wip | domain: ScriptVM | MEDIUM / tu_interp */
void ScriptVM_Sub_08045638(int self,u16 param_2,u32 param_3,int param_4,u32 param_5,
             char param_6) {
  bool bVar1;
  u8 bVar2;
  char cVar3;
  u8 bVar4;
  int iVar5;
  u32 uVar6;
  u8 bVar7;
  u32 uVar8;
  int iVar9;
  u8 bStack_3c;
  u8 bStack_3b;
  u8 abStack_3a [2];
  u8 abStack_38 [4];
  u32 uStack_34;
  u8 bStack_2c;
  u8 bStack_28;
  u8 *pbStack_24;
  iVar9 = *(int *)(self + 0x350) + 0x0000214C;
  uStack_34 = param_3;
  iVar5 = ScriptVM_Give_Love_Points(*(int *)(self + 0x350) + 0x00001CD4,param_3);
  if (iVar5 != 0) {
    if (param_4 == 1) {
      if (param_6 == '\0') {
        uVar6 = func_0809E49C(iVar5);
      }
      else {
        uVar6 = func_0809E4AC(iVar5);
      }
      if (uVar6 < param_5) {
        game_state_SetField_0x0C(iVar9,param_2);
      }
    }
    else if (param_4 < 2) {
      if ((param_4 == 0) && (cVar3 = game_state_Sub_0809C694(iVar9,param_2), cVar3 != '\0')) {
        game_state_SetField_0x0C_C6B0(iVar9,param_2);
      }
    }
    else if (param_4 == 2) {
      while( true ) {
        if (param_6 == '\0') {
          uVar6 = func_0809E49C(iVar5);
        }
        else {
          uVar6 = func_0809E4AC(iVar5);
        }
        if (param_5 <= uVar6) break;
        if (param_6 == '\0') {
          Bachelorette_PlayerEventUpdate(iVar5);
        }
        else {
          Bachelorette_RivalEventUpdate(iVar5);
        }
      }
      cVar3 = game_state_Sub_0809C694(iVar9,param_2);
      if (cVar3 != '\0') {
        game_state_SetField_0x0C_C6B0(iVar9,param_2);
      }
      if ((param_6 == '\0') && (iVar5 = func_0809E49C(iVar5), iVar5 == 5)) {
        bStack_3c = *(u8 *)(*(int *)(self + 0x350) + 0x10);
        bVar4 = *(u8 *)(*(int *)(self + 0x350) + 0x11);
        uVar6 = (bVar4 & 0x7f) >> 2;
        uVar8 = uVar6 + 7;
        bVar1 = 0x1d < uVar8;
        if (bVar1) {
          uVar8 = uVar6 - 0x17;
        }
        uVar6 = (bVar4 & 3) + (u32)bVar1;
        abStack_3a[0] = bVar4 & 0x80 | (u8)uVar6 & 3 | (u8)((uVar8 & 0x1f) << 2);
        if (((uVar6 & 3) == 0) && ((uVar8 & 0x1f) + 1 < 8)) {
          bVar4 = (bStack_3c & 7) + 1;
          if (6 < bVar4) {
            bVar4 = 0;
            if (bStack_3c >> 3 < 0x1d) {
              bStack_3c = ((bStack_3c >> 3) + 1) * '\b';
            }
          }
          bStack_3c = bStack_3c & 0xf8 | bVar4 & 7;
        }
        bStack_3b = farmer_Sub_0800E4E8(*(int *)(self + 0x350) + 0x00001BD8);
        bVar4 = ScriptVM_Chek_Friendship_Points(*(int *)(self + 0x350) + 0x00001CD4,uStack_34,&bStack_3b);
        bStack_2c = bStack_2c & 0x80;
        pbStack_24 = abStack_38;
        while( true ) {
          bVar1 = false;
          if ((((abStack_3a[0] & 0x7f) == (bVar4 & 0x7f)) ||
              ((abStack_3a[0] & 0x7f) == (bStack_3b & 0x7f))) ||
             (cVar3 = ScriptVM_Sub_080ADBB4(abStack_3a), cVar3 != '\0')) {
            bVar1 = true;
          }
          if (!bVar1) break;
          uVar6 = ((abStack_3a[0] & 0x7f) >> 2) + 1;
          if (uVar6 == 0x1e) {
            bVar7 = (abStack_3a[0] & 3) + 1 & 3;
            bStack_28 = bStack_28 & 0xfc | bVar7;
            abStack_3a[0] = abStack_3a[0] & 0xfc | bVar7;
            uVar6 = 0;
          }
          bVar7 = abStack_3a[0] & 0x83 | (u8)((uVar6 & 0x1f) << 2);
          bVar2 = abStack_3a[0] & 3;
          abStack_3a[0] = bVar7;
          if (bVar2 == 0 && (uVar6 & 0x1f) == 0) {
            bVar7 = (bStack_3c & 7) + 1;
            if (6 < bVar7) {
              bVar7 = 0;
              if (bStack_3c >> 3 < 0x1d) {
                bStack_3c = ((bStack_3c >> 3) + 1) * '\b';
              }
            }
            bStack_3c = bStack_3c & 0xf8 | bVar7 & 7;
          }
        }
        iVar5 = *(int *)(self + 0x350);
        abStack_38[0] = bStack_3c;
        pbStack_24[1] = abStack_3a[0];
        ScriptVM_SetField_0x2C(iVar5 + 0x00001CD4,pbStack_24);
      }
    }
  }
}

/* 0x0804E0F8 (132B) | ScriptVM_Func070 (orig: func_0804E0F8) | origin: wip | domain: ScriptVM | HIGH / fomt_studio_dispatch */
u32 ScriptVM_Func070(int self,int param_2) {
    int iVar3;
    u32 uVar4;
    int * piVar5;
    u32 uVar6;
    u8 auStack_18 [4];
    register int iVar2;
  register char cVar1;
  piVar5 = (int *)(self + 0x350);
  iVar2 = *piVar5 + 0x00001C34;
  cVar1 = ToolStack_IsEmpty();
  if (cVar1 == '\0') {
    uVar6 = 0;
    auStack_18[0] = ToolStack_GetTool(iVar2);
    iVar3 = func_0800DB30(auStack_18);
    if (iVar3 == param_2) {
      uVar6 = (-(uVar6 ^ 99) | uVar6 ^ 99) >> 0x1f;
      uVar6 = ToolStack_GetAmount(iVar2);
    }
    if (((uVar6 == 0) && (iVar2 = Rucksack_GetAvailableSpaceForTool(*piVar5 + 0x00001C38,param_2), iVar2 == 0)) &&
       (iVar2 = ToolChest_GetAvailableSpaceFor(*piVar5 + 0x380,param_2), iVar2 == 0)) {
      uVar4 = 0;
      goto LAB_0804e172;
    }
  }
  uVar4 = 1;
LAB_0804e172:
  return uVar4;
}

/* 0x0804E17C (88B) | ScriptVM_Sub_0804E17C (orig: func_0804E17C) | origin: pure | domain: ScriptVM | MEDIUM / graph_algebra */
extern u8 held_item_VmHelper_0800F190();
extern int Rucksack_GetEmptyItemSlotCount();
extern int FarmHouse_GetFridge_C048();
extern int Fridge_GetAvailableSpaceFor();
int ScriptVM_Sub_0804E17C(int self, u32 param_2) {
    int *p = (int *)(self + 0x350);
    int v;
    if (held_item_VmHelper_0800F190(*p + 0x1c2c) || Rucksack_GetEmptyItemSlotCount(*p + 0x1c38) != 0 || ((v = FarmHouse_GetFridge_C048(*p + 500)) != 0 && Fridge_GetAvailableSpaceFor(v, param_2) != 0)) {
        return 1;
    }
    return 0;
}

/* 0x0804E1D4 (88B) | ScriptVM_Proc072 (orig: func_0804E1D4) | origin: pure | domain: ScriptVM | HIGH / fomt_studio_dispatch */
extern u8 held_item_VmHelper_0800F190();
extern int Rucksack_GetEmptyItemSlotCount();
extern int FarmHouse_GetShelf_C060();
extern int Shelf_GetAvailableSpaceFor();
int ScriptVM_Proc072(int self, u32 param_2) {
    int *p = (int *)(self + 0x350);
    int v;
    if (held_item_VmHelper_0800F190(*p + 0x1c2c) || Rucksack_GetEmptyItemSlotCount(*p + 0x1c38) != 0 || ((v = FarmHouse_GetShelf_C060(*p + 500)) != 0 && Shelf_GetAvailableSpaceFor(v, param_2) != 0)) {
        return 1;
    }
    return 0;
}

/* 0x0804E22C (148B) | ScriptVM_Consume_Items_From_Inventory (orig: func_0804E22C) | origin: wip | domain: ScriptVM | EXACT / fomt_studio_dispatch */
u32 ScriptVM_Consume_Items_From_Inventory(int self,int param_2) {
    int iVar2;
    u32 uVar3;
    int iVar4;
    u8 auStack_14 [4];
  register char cVar1;
  iVar4 = *(int *)(self + 0x350) + 0x00001C2C;
  cVar1 = held_item_VmHelper_0800F190(iVar4);
  if ((cVar1 == '\0') && (iVar2 = held_item_VmHelper_0800F204(iVar4), iVar2 == 1)) {
    auStack_14[0] = held_item_Func044(iVar4);
    iVar4 = (u8)func_0800DF54(auStack_14);
    if (iVar4 != param_2) goto LAB_0804e272;
  }
  else {
LAB_0804e272:
    iVar4 = Rucksack_GetFirstSlotWithArticle(*(int *)(self + 0x350) + 0x00001C38,param_2);
    if ((iVar4 == -1) &&
       ((iVar4 = FarmHouse_GetShelf_C060(*(int *)(self + 0x350) + 500), iVar4 == 0 ||
        (iVar4 = Shelf_GetFirstSlotWith(iVar4,param_2), iVar4 == -1)))) {
      uVar3 = 0;
      goto LAB_0804e2b6;
    }
  }
  uVar3 = 1;
LAB_0804e2b6:
  return uVar3;
}

/* 0x0804E2C0 (148B) | ScriptVM_Func05F (orig: func_0804E2C0) | origin: wip | domain: ScriptVM | HIGH / fomt_studio_dispatch */
u32 ScriptVM_Func05F(int self,int param_2) {
    u8 auStack_14 [4];
    s16 iVar4;
    unsigned int cVar1;
    s16 iVar2;
    register u32 uVar3;
  iVar4 = *(int *)(self + 0x350) + 0x00001C2C;
  cVar1 = held_item_VmHelper_0800F190(iVar4);
  if ((cVar1 == '\0') && (iVar2 = held_item_VmHelper_0800F204(iVar4), iVar2 == 0)) {
    held_item_Search_Item_Gift_Address(auStack_14,iVar4);
    iVar4 = func_0800DCB4(auStack_14);
    if (iVar4 != (s16)param_2) goto LAB_0804e304;
  }
  else {
LAB_0804e304:
    iVar4 = Rucksack_GetFirstSlotWithFood(*(int *)(self + 0x350) + 0x00001C38,param_2);
    if ((iVar4 == -1) &&
       ((iVar4 = FarmHouse_GetFridge_C048(*(int *)(0x350 + self) + 500), iVar4 == 0 ||
        (iVar4 = Fridge_GetFirstSlotWith(iVar4,param_2), iVar4 == -1)))) {
      uVar3 = 0;
      goto LAB_0804e34a;
    }
  }
  uVar3 = 1;
LAB_0804e34a:
  return uVar3;
}

/* 0x0804E354 (132B) | ScriptVM_Set_Time (orig: func_0804E354) | origin: wip | domain: ScriptVM | EXACT / fomt_studio_dispatch */
u32 ScriptVM_Set_Time(int self,int param_2) {
  char cVar1;
  u32 uVar2;
  int iVar3;
  u8 auStack_14 [4];
  iVar3 = *(int *)(self + 0x350) + 0x00001C34;
  cVar1 = ToolStack_IsEmpty(iVar3);
  if (cVar1 == '\0') {
    auStack_14[0] = ToolStack_GetTool(iVar3);
    iVar3 = func_0800DB30(auStack_14);
    if (iVar3 != param_2) goto LAB_0804e390;
  }
  else {
LAB_0804e390:
    iVar3 = Rucksack_GetFirstSlotWithTool(*(int *)(self + 0x350) + 0x00001C38,param_2);
    if ((iVar3 == -1) &&
       (iVar3 = ToolChest_GetFirstSlotWith(*(int *)(self + 0x350) + 0x380,param_2), iVar3 == -1)) {
      uVar2 = 0;
      goto LAB_0804e3ce;
    }
  }
  uVar2 = 1;
LAB_0804e3ce:
  return uVar2;
}

/* 0x0804E3D8 (212B) | ScriptVM_VmHelper_0804E3D8 (orig: func_0804E3D8) | origin: wip | domain: ScriptVM | HIGH / fomt_studio_dispatch */
ScriptVM_VmHelper_0804E3D8(int self,u32 param_2,int *param_3,u32 param_4,u32 param_5,
             u32 param_6) {
  u8 uVar1;
  u32 uVar2;
  int iVar3;
  int iVar4;
  iVar4 = 0;
  if (!(param_2 < 5)) {
        uVar2 = 0;
      } else {
    switch(*(u32 *)(((const u32 *)0x0804e3f0) + param_2 * 4) & 0xfffffffe) {
    case 0x804e3f4:
      uVar1 = ToolStack_GetAmount(0);
      if ((((int)(-(uVar1 ^ 99) | uVar1 ^ 99) < 0) ||
          (iVar4 = Rucksack_GetAvailableSpaceForTool(*param_3 + 0x1C38,0), iVar4 != 0)) ||
         (iVar4 = ToolChest_GetAvailableSpaceFor(*param_3 + 0x380,0), iVar4 != 0)) {
        uVar2 = 1;
      }
      return (void *)uVar2;
    case 0x804e408:
      iVar4 = Farm_GetHorse_9C3C(*(int *)(self + 0x350) + 0x14);
      break;
    case 0x804e41a:
      iVar3 = Barn_GetCapacity(*(int *)(self + 0x350) + 0x5f0);
      if ((int)param_3 < iVar3) {
        iVar4 = Barn_GetCow_D3D0(*(int *)(self + 0x350) + 0x5f0,param_3);
      }
      break;
    case 0x804e442:
      iVar3 = Barn_GetCapacity(*(int *)(self + 0x350) + 0x5f0);
      if ((int)param_3 < iVar3) {
        iVar4 = Barn_GetSheep_D3F8(*(int *)(self + 0x350) + 0x5f0,param_3);
      }
      break;
    case 0x804e46a:
      iVar3 = Coop_GetCapacity(*(int *)(self + 0x350) + 0x410);
      if ((int)param_3 < iVar3) {
        iVar4 = Coop_GetChicken_C894(*(int *)(self + 0x350) + 0x410,param_3);
      }
      break;
    case 0x804e492:
      iVar4 = *(int *)(self + 0x350) + 0x1C70;
    }
  }
  return (void *)iVar4;
}

/* 0x08052230 (168B) | ScriptVM_Func0DD (orig: func_08052230) | origin: wip | domain: ScriptVM | HIGH / fomt_studio_dispatch */
void ScriptVM_Func0DD(char *self,int param_2) {
  char cVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  bool bVar7;
  int iVar8;
  short *psVar9;
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = LibGcc_udivsi3(param_2 + -1,0x19);
  }
  iVar8 = 0;
  do {
    iVar5 = iVar8 + 1;
    do {
      iVar4 = LibC_rand();
      cVar1 = func_080D0ED0(iVar4 >> 8,0x1e);
      self[iVar8 * 4] = cVar1 + '\x01';
      bVar7 = true;
      iVar4 = 0;
      pcVar6 = self;
      do {
        if ((iVar8 != iVar4) && (self[iVar8 * 4] == *pcVar6)) {
          bVar7 = false;
        }
        pcVar6 = pcVar6 + 4;
        iVar4 = iVar4 + 1;
      } while (iVar4 < 10);
    } while (!bVar7);
    iVar4 = LibC_rand();
    psVar9 = (short *)(iVar3 * 0x14 + iVar8 * 2 + 0x080FA174);
    sVar2 = func_080D0ED0(iVar4 >> 8,10);
    *(short *)(self + iVar8 * 4 + 2) = *psVar9 + sVar2;
    iVar8 = iVar5;
  } while (iVar5 < 10);
}

/* 0x08057E90 (148B) | ScriptVM_Open_Prize_Exchange_UI (orig: func_08057E90) | origin: wip | domain: ScriptVM | EXACT / fomt_studio_dispatch */
void ScriptVM_Open_Prize_Exchange_UI(u8 *self) {
  *(u8 *)((self + 0x2c)) = 4;
  *(s8 *)(((self + 0x2c) + 2)) = (1 - 0x22);
  *(u32 *)(self) = *(u8 *)(self);
}

/* 0x0809AA28 (48B) | ScriptVM_Proc134 (orig: func_0809AA28) | origin: wip | domain: ScriptVM | HIGH / fomt_studio_dispatch */
u32 ScriptVM_Proc134(int self) {
  u32 uVar1;
  int iVar2;
  iVar2 = 0;
  for (uVar1 = (u32)*(u8 *)(self + 0x00000A06); uVar1 != 0; uVar1 = uVar1 - 1) {
    if ((int)((u32)*(u16 *)(self + 0x13) * 0x8000000) < 0) {
      iVar2 = iVar2 + 1;
    }
    self = self + 0x14;
  }
  return iVar2;
}

/* 0x0809ABD8 (232B) | ScriptVM_Take_Money (orig: func_0809ABD8) | origin: wip | domain: ScriptVM | EXACT / fomt_studio_dispatch */
void ScriptVM_Take_Money(u32 *self,u32 param_2) {
  int iVar1;
  u32 uVar2;
  u32 uVar3;
  u32 uVar4;
  u32 *puVar5;
  u32 *puVar6;
  puVar5 = self + 0x3f;
  if (*puVar5 == 0) {
    if (self + 0x40 != (u32 *)0x0) {
      self[0x40] = 0;
      self[0x41] = 0;
    }
    *puVar5 = *puVar5 + 1;
  }
  if (self[2] == 0) {
    if (self + 3 != (u32 *)0x0) {
      self[3] = 0;
      self[4] = 0;
    }
    self[2] = self[2] + 1;
  }
  iVar1 = 0x3B9ACA00;
  uVar2 = 0x3B9ACA00 - *self;
  if (param_2 < uVar2) {
    uVar2 = param_2;
  }
  uVar2 = *self + uVar2;
  *self = uVar2;
  if (0x05F5E0FF < uVar2) {
    *(u8 *)(self + 1) = (u8)self[1] | 2;
  }
  puVar6 = self + (self[2] - 1) * 2 + 3;
  puVar5 = self + 0x3f;
  uVar3 = *puVar5;
  uVar2 = iVar1 - *puVar6;
  if (param_2 < uVar2) {
    uVar2 = param_2;
  }
  *puVar6 = *puVar6 + uVar2;
  uVar4 = puVar5[(uVar3 - 1) * 2 + 1];
  uVar2 = iVar1 - uVar4;
  if (param_2 < uVar2) {
    uVar2 = param_2;
  }
  puVar5[(uVar3 - 1) * 2 + 1] = uVar4 + uVar2;
  if (0x0001869F < *puVar6) {
    *(u8 *)(self + 1) = (u8)self[1] | 1;
  }
}

/* 0x0809ACC0 (232B) | ScriptVM_End_Cinematic_State (orig: func_0809ACC0) | origin: wip | domain: ScriptVM | EXACT / fomt_studio_dispatch */
u32 ScriptVM_End_Cinematic_State(u32 *self,u32 param_2) {
  int iVar1;
  u32 uVar2;
  u32 uVar3;
  int iVar4;
  u32 uVar5;
  u32 *puVar6;
  puVar6 = self + 0x3f;
  if (*puVar6 == 0) {
    if (self + 0x40 != (u32 *)0x0) {
      self[0x40] = 0;
      self[0x41] = 0;
    }
    *puVar6 = *puVar6 + 1;
  }
  if (self[2] == 0) {
    if (self + 3 != (u32 *)0x0) {
      self[3] = 0;
      self[4] = 0;
    }
    self[2] = self[2] + 1;
  }
  uVar2 = *self;
  if (uVar2 < param_2) {
    uVar3 = 0;
  }
  else {
    uVar5 = uVar2;
    if (param_2 < uVar2) {
      uVar5 = param_2;
    }
    *self = uVar2 - uVar5;
    iVar1 = 0x3B9ACA00;
    iVar4 = self[2] - 1;
    puVar6 = self + 0x3f;
    uVar5 = *puVar6;
    uVar2 = 0x3B9ACA00 - self[iVar4 * 2 + 4];
    if (param_2 < uVar2) {
      uVar2 = param_2;
    }
    self[iVar4 * 2 + 4] = self[iVar4 * 2 + 4] + uVar2;
    uVar2 = iVar1 - puVar6[(uVar5 - 1) * 2 + 2];
    if (param_2 < uVar2) {
      uVar2 = param_2;
    }
    puVar6[(uVar5 - 1) * 2 + 2] = puVar6[(uVar5 - 1) * 2 + 2] + uVar2;
    if (0x0001869F < self[iVar4 * 2 + 4]) {
      *(u8 *)(self + 1) = (u8)self[1] | 1;
    }
    uVar3 = 1;
  }
  return uVar3;
}

/* 0x0809C304 (20B) | ScriptVM_Func137 (orig: func_0809C304) | origin: pure | domain: ScriptVM | HIGH / fomt_studio_dispatch */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 ScriptVM_Sub_0809C22C();
u32 ScriptVM_Func137(int arg0) {
  int val;
  val = ScriptVM_Sub_0809C22C();
  return ((u32)*(u8 *)(arg0 + val));
}

/* 0x0809C318 (20B) | ScriptVM_Sub_0809C318 (orig: func_0809C318) | origin: pure | domain: ScriptVM | MEDIUM / graph_algebra */
struct Sub { u8 arr[1]; };
struct S { u8 pad[6]; Sub sub; } __attribute__((packed));
extern "C" u32 ScriptVM_Sub_0809C22C(void const *);
extern "C" u8 ScriptVM_Sub_0809C318(S const *s) {
    return s->sub.arr[ScriptVM_Sub_0809C22C(s)];
}

/* 0x0809C3BC (36B) | ScriptVM_Sub_0809C3BC (orig: func_0809C3BC) | origin: pure | domain: ScriptVM | MEDIUM / graph_algebra */
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
extern u32 ScriptVM_Sub_0809C22C();
void ScriptVM_Sub_0809C3BC(u32 arg0, u32 arg1, u32 arg2, u32 arg3)
{
    register u32 r0 = arg0;
    register u32 r1 = arg1;
    register u32 r2 = arg2;
    register u32 r3 = arg3;
    register u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0;
    r4 = r0 + 0;
    r0 = ScriptVM_Sub_0809C22C(r0, r1, r2, r3);
    r3 = r0 + 0;
    r1 = r4 + r3;
    r2 = *(u8 *)(r1);
    if (r2 != 0) goto loc_0809C3DA;
    r0 = 1;
    *(u8 *)(r1) = r0;
    r0 = r4 + 0;
    r0 += 0xc;
    r0 = r0 + r3;
    *(u8 *)(r0) = r2;
loc_0809C3DA:
    return r0;
}

/* 0x0809C3E0 (64B) | ScriptVM_Sub_0809C3E0 (orig: func_0809C3E0) | origin: wip | domain: ScriptVM | MEDIUM / graph_algebra */
u32 ScriptVM_Sub_0809C3E0(int self,int param_2) {
  u8 bVar1;
  u8 *pbVar2;
  u32 uVar3;
  uVar3 = 0;
  if (*(char *)(self + param_2) != '\0') {
    pbVar2 = (u8 *)(self + 0xc + param_2);
    bVar1 = *pbVar2;
    if (bVar1 < *(u8 *)(param_2 + 0x081036C0)) {
      *pbVar2 = bVar1 + 1;
    }
    else {
      *(u8 *)(self + 6 + param_2) = 1;
      *(char *)(self + param_2) = '\0';
      uVar3 = 1;
    }
  }
  return uVar3;
}

/* 0x0809C420 (36B) | ScriptVM_Sub_0809C420 (orig: func_0809C420) | origin: pure | domain: ScriptVM | MEDIUM / graph_algebra */
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
void ScriptVM_Sub_0809C420(u8 *ptr, u32 idx) {
    u8 *p = ptr;
    if (p[idx] != 0) {
        if (idx == 0 || idx == 3) {
            u8 *q = p + 0xc;
            q[idx] = 0;
        }
    }
}

/* 0x0809C444 (48B) | ScriptVM_Take_Tool (orig: func_0809C444) | origin: pure | domain: ScriptVM | EXACT / fomt_studio_dispatch */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 ScriptVM_Sub_0809C22C();
extern u32 ScriptVM_Sub_0809C3E0();
u32 ScriptVM_Take_Tool(int arg0) {
  u8 val2;
  u32 val;
  val2 = 0;
  val = ScriptVM_Sub_0809C22C(arg0);
  if ((*(char *)(arg0 + val) != '\0') && ((val == 0 || (val == 3)))) {
    val2 = val2 & 0xff;
    val2 = ScriptVM_Sub_0809C3E0(arg0);
  }
  return val2;
}

/* 0x0809C474 (64B) | ScriptVM_Spawn_Item_On_Grid (orig: func_0809C474) | origin: pure | domain: ScriptVM | EXACT / fomt_studio_dispatch */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 ScriptVM_Sub_0809C22C();
extern u32 ScriptVM_Sub_0809C3E0();
extern u32 ScriptVM_Sub_0809C420();
u8 ScriptVM_Spawn_Item_On_Grid(int arg0) {
  s8 val2;
  register BOOL val;
  val = ScriptVM_Sub_0809C22C();
  val2 = 0;
  if (*(char *)(arg0 + val) != '\0') {
    if ((val == 1) || (val == 4)) {
      val2 = val2 & 0xff;
      val2 = ScriptVM_Sub_0809C3E0(arg0,val);
    }
    if ((val == 0) || (val == 3)) {
      ScriptVM_Sub_0809C420(arg0,val);
    }
  }
  return val2;
}

/* 0x0809C4B4 (48B) | ScriptVM_Sub_0809C4B4 (orig: func_0809C4B4) | origin: pure | domain: ScriptVM | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 ScriptVM_Sub_0809C22C();
extern u32 ScriptVM_Sub_0809C3E0();
/* paridad 91.8% preset agbcc_O2 */
u32 ScriptVM_Sub_0809C4B4(int arg0) {
  register u8 val2;
  register u32 val;
  val = ScriptVM_Sub_0809C22C();
  val2 = 0;
  if ((*(char *)(arg0 + val) != '\0') && ((val == 5 || (val == 2)))) {
    val2 = 0xff & val2;
    val2 = ScriptVM_Sub_0809C3E0(arg0);
  }
  return val2;
}

/* 0x0809C5EC (8B) | ScriptVM_Pan_Camera_To (orig: func_0809C5EC) | origin: pure | domain: ScriptVM | EXACT / fomt_studio_dispatch */
void ScriptVM_Pan_Camera_To(u32 *arg0) {
    *arg0 = 0;
}

/* 0x0809CDCC (32B) | ScriptVM_Func0E9 (orig: func_0809CDCC) | origin: pure | domain: ScriptVM | HIGH / fomt_studio_dispatch */
#define true 1
#define false 0
#define NULL ((void *)0)
u32 ScriptVM_Func0E9(int arg0) {
  int *mem_ptr;
  u32 val;
  u32 val2;
  val2 = 1;
  val = 8;
  mem_ptr = (int *)(arg0 + 0x40);
  do {
    if (*mem_ptr == 0) {
      val2 = 0;
    }
    mem_ptr = mem_ptr + 2;
    val = val + 1;
  } while (val < 0x3b);
  return val2;
}

/* 0x0809CDEC (48B) | ScriptVM_Func0EA (orig: func_0809CDEC) | origin: pure | domain: ScriptVM | HIGH / fomt_studio_dispatch */
#define true 1
#define false 0
#define NULL ((void *)0)
u32 ScriptVM_Func0EA(int *arg0) {
  u32 val = 0;
  u32 val2;
  for (val2 = 8; val2 <= 0x3a; val2++) {
    val += arg0[val2 * 2];
    if (val > 0x3B9AC9FF) {
      val = 0x3B9ACA00;
    }
  }
  return val;
}

/* 0x0809EAD0 (8B) | ScriptVM_Sub_0809EAD0 (orig: func_0809EAD0) | origin: pure | domain: ScriptVM | MEDIUM / graph_algebra */
u8 ScriptVM_Sub_0809EAD0(u8 *arg0) {
    return *(u8 *)(arg0 + 36);
}

/* 0x0809ECD8 (8B) | ScriptVM_Func0F2 (orig: func_0809ECD8) | origin: pure | domain: ScriptVM | HIGH / fomt_studio_dispatch */
u32 ScriptVM_Func0F2(u8 *arg0) {
    return ((u32)*(arg0 + 20) << 26) >> 26;
}

/* 0x0809ECE0 (36B) | ScriptVM_Func0F3 (orig: func_0809ECE0) | origin: pure | domain: ScriptVM | HIGH / fomt_studio_dispatch */
struct S { u8 pad[0x14]; u16 a:6; u16 b:3; }; int ScriptVM_Func0F3(struct S *s) { return (s->a << 26) != 0 && s->b == 0; }

/* 0x0809ED64 (188B) | ScriptVM_Sub_0809ED64 (orig: func_0809ED64) | origin: pure | domain: ScriptVM | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
void ScriptVM_Sub_0809ED64(int arg0)

{
  u8 val;
  u8 val2;
  
  switch(((u32)*(u8 *)(arg0 + 0x14) << 26) >> 26) {
  case 4:
    val = *(u8 *)(arg0 + 0x15);
    val2 = 2;
    break;
  default:
    goto case_0809EE12;
  case 9:
    val = *(u8 *)(arg0 + 0x15);
    val2 = 4;
    break;
  case 0xe:
    val = *(u8 *)(arg0 + 0x15);
    val2 = 8;
    break;
  case 0x13:
    val = *(u8 *)(arg0 + 0x15);
    val2 = 0x10;
    break;
  case 0x18:
    val = *(u8 *)(arg0 + 0x15);
    val2 = 0x20;
    break;
  case 0x1d:
    val = *(u8 *)(arg0 + 0x15);
    val2 = 0x40;
  }
  *(u8 *)(arg0 + 0x15) = val | val2;
case_0809EE12:
  *(u8 *)(arg0 + 0x14) = *(s8 *)(arg0 + 0x14) & 0xc0;
  return 0;
}

/* 0x0809EEA4 (32B) | ScriptVM_Set_Spouse_Nickname (orig: func_0809EEA4) | origin: pure | domain: ScriptVM | EXACT / fomt_studio_dispatch */
int ScriptVM_Set_Spouse_Nickname(u8 *a, u32 b) { u32 m = 1 << b; if (b < a[0x16] && (*(u16 *)(a + 0x14) & m) == 0) return 1; return 0; }

/* 0x0809EED0 (24B) | ScriptVM_Func124 (orig: func_0809EED0) | origin: pure | domain: ScriptVM | HIGH / fomt_studio_dispatch */
int ScriptVM_Func124(u8 *a) { if (a[0x16] != 10) { a[0x16]++; return 1; } return 0; }

/* 0x080A01F8 (184B) | ScriptVM_Sub_080A01F8 (orig: func_080A01F8) | origin: wip | domain: ScriptVM | MEDIUM / graph_algebra */
void * ScriptVM_Sub_080A01F8(int self,int param_2) {
  int iVar1;

  if (0x1c < param_2 - 3U) goto case_080A0284;
  switch(*(u32 *)(((const u32 *)0x080a020c) + (param_2 - 3U) * 4) & 0xfffffffe) {
  case 0x80a0210:
  case 0x80a0284:
case_080A0284:
    self = 0;
    goto LAB_080a02ac;
  case 0x80a0288:
    self = self + 0x98;
    goto LAB_080a02ac;
  case 0x80a028e:
    iVar1 = 0x154;
    break;
  case 0x80a0294:
    iVar1 = 0x1e4;
    break;
  case 0x80a029a:
    iVar1 = 0x210;
    break;
  case 0x80a02a0:
    iVar1 = 0x264;
    break;
  case 0x80a02a6:
    iVar1 = 0x2e4;
  }
  self = self + iVar1;
LAB_080a02ac:
  return (void *)self;
}

/* 0x080A039C (8B) | ScriptVM_GetField_0x03 (orig: func_080A039C) | origin: pure | domain: ScriptVM | MEDIUM / graph_algebra */
u32 ScriptVM_GetField_0x03(u8 *arg0) {
    return ((u32)*(arg0 + 3) << 27) >> 29;
}

/* 0x080A03A4 (20B) | ScriptVM_Sub_080A03A4 (orig: func_080A03A4) | origin: pure | domain: ScriptVM | MEDIUM / graph_algebra */
struct S { u8 p[3]; u8 a:2; u8 b:3; }; void ScriptVM_Sub_080A03A4(struct S *p, u32 v) { p->b = v; }

/* 0x080A0490 (116B) | ScriptVM_Func120 (orig: func_080A0490) | origin: wip | domain: ScriptVM | HIGH / fomt_studio_dispatch */
u32 ScriptVM_Func120(int self) {
  u32 uVar1;
  u32 uVar2;
  uVar1 = func_0809E49C(self + 0x98);
  if (uVar1 < 6) {
    uVar1 = func_0809E49C(self + 0x154);
    if ((int)uVar1 < 6) {
      uVar1 = func_0809E49C(self + 0x1e4);
      if ((int)uVar1 < 6) {
        uVar1 = func_0809E49C(self + 0x210);
        if ((int)uVar1 < 6) {
          uVar1 = func_0809E49C(self + 0x264);
          if ((int)uVar1 < 6) {
            uVar1 = func_0809E49C(self + 0x2e4);
            if (uVar1 < 6) {
              uVar2 = 0;
            }
            else {
              uVar2 = 0x1f;
            }
          }
          else {
            uVar2 = 0x19;
          }
        }
        else {
          uVar2 = 0x15;
        }
      }
      else {
        uVar2 = 0x13;
      }
    }
    else {
      uVar2 = 0xc;
    }
  }
  else {
    uVar2 = 3;
  }
  return uVar2;
}

/* 0x080A0504 (20B) | ScriptVM_Wrap_Func120 (orig: func_080A0504) | origin: pure | domain: ScriptVM | MEDIUM / graph_algebra */
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
extern u32 ScriptVM_Func120();
u32 ScriptVM_Wrap_Func120(void) {
  u32 val;
  val = ScriptVM_Func120();
  return (((u32)(-val | val)) >> 0x1f);
}

/* 0x080A0518 (120B) | ScriptVM_Func0E5 (orig: func_080A0518) | origin: wip | domain: ScriptVM | HIGH / fomt_studio_dispatch */
void * ScriptVM_Func0E5(u32 self) {
  int iVar1;
  u32 uVar2;
  u32 uVar3;
  int iVar4;

  iVar4 = 1;
  uVar3 = 1;
  do {
    if (0xc < uVar3 - 0x17) goto case_080A056C;
    switch(*(u32 *)(((const u32 *)0x080a0534) + (uVar3 - 0x17) * 4) & 0xfffffffe) {
    case 0x80a0538:
      uVar3 = iVar4 << 0x15;
    case 0x80a056c:
case_080A056C:
      iVar1 = ScriptVM_Sub_080A0030(self,uVar3);
      if ((iVar1 != 0) && (uVar2 = func_0809E33C(), uVar2 < 0xfa)) {
        iVar4 = 0;
      }
    case 0x80a0582:
      uVar3 = uVar3 + 1;
      if (0x2a < uVar3) {
        return (void *)iVar4;
      }
    }
  } while( true );
}

/* 0x080A0878 (184B) | ScriptVM_Give_Love_Points (orig: func_080A0878) | origin: wip | domain: ScriptVM | HIGH / fomt_studio_dispatch */
void * ScriptVM_Give_Love_Points(int self,int param_2) {
  int iVar1;

  if (0x1c < param_2 - 3U) goto case_080A0904;
  switch(*(u32 *)(((const u32 *)0x080a088c) + (param_2 - 3U) * 4) & 0xfffffffe) {
  case 0x80a0890:
  case 0x80a0904:
case_080A0904:
    self = 0;
    goto LAB_080a092c;
  case 0x80a0908:
    self = self + 0x98;
    goto LAB_080a092c;
  case 0x80a090e:
    iVar1 = 0x154;
    break;
  case 0x80a0914:
    iVar1 = 0x1e4;
    break;
  case 0x80a091a:
    iVar1 = 0x210;
    break;
  case 0x80a0920:
    iVar1 = 0x264;
    break;
  case 0x80a0926:
    iVar1 = 0x2e4;
  }
  self = self + iVar1;
LAB_080a092c:
  return (void *)self;
}

/* 0x080A0930 (108B) | ScriptVM_Func0CC (orig: func_080A0930) | origin: wip | domain: ScriptVM | HIGH / fomt_studio_dispatch */
void * ScriptVM_Func0CC(int self,int param_2) {
  int iVar1;

  if (param_2 - 0x24U < 7) {
    switch(*(u32 *)(((const u32 *)0x080a0948) + (param_2 - 0x24U) * 4) & 0xfffffffe) {
    case 0x80a094c:
      goto LAB_080a0968;
    case 0x80a096c:
      iVar1 = 0x33c;
      break;
    case 0x80a0972:
      iVar1 = 0x360;
      break;
    case 0x80a0978:
      iVar1 = 900;
      break;
    case 0x80a097e:
      iVar1 = 0x3a8;
      break;
    case 0x80a0984:
      iVar1 = 0x3cc;
      break;
    case 0x80a098a:
      iVar1 = 0x3f0;
      break;
    case 0x80a0990:
      iVar1 = 0x414;
    }
    self = self + iVar1;
  }
  else {
LAB_080a0968:
    self = 0;
  }
  return (void *)self;
}

/* 0x080A1478 (8B) | ScriptVM_SetField_0x2C (orig: func_080A1478) | origin: pure | domain: ScriptVM | MEDIUM / graph_algebra */
void ScriptVM_SetField_0x2C(u32 *a, u32 *b) { a[11] = *b; }

/* 0x080AD724 (80B) | ScriptVM_Sub_080AD724 (orig: func_080AD724) | origin: wip | domain: ScriptVM | MEDIUM / graph_algebra */
u32 ScriptVM_Sub_080AD724(u32 *self) {
  u32 uVar1;
  u32 auStack_14 [3];
  CppRuntime_builtin_new(0x1e4);
  auStack_14[0] = code_809E804_85E8_Ctor();
  uVar1 = CppRuntime_builtin_new(0x00001038);
  uVar1 = code_809E804_8440_AutoPtrFactory(uVar1,auStack_14);
  *self = uVar1;
  return self;
}

/* 0x080ADBB4 (76B) | ScriptVM_Sub_080ADBB4 (orig: func_080ADBB4) | origin: wip | domain: ScriptVM | MEDIUM / graph_algebra */
u32 ScriptVM_Sub_080ADBB4(u32 *self) {
    u32 uVar2;
    u8 * pbVar3;
    u32 uStack_c;
  register u8 *pbVar1;
  uStack_c = (*self & 3) * 0x1e + ((*self & 0x7f) >> 2);
  pbVar3 = (u8 *)(0x081074F6 + 0x1b);
  pbVar1 = (u8 *)ScriptVM_Sub_080E0E80(0x081074F6,pbVar3,&uStack_c,0,0);
  uVar2 = 0;
  if ((pbVar1 != pbVar3) && (*pbVar1 <= uStack_c)) {
    uVar2 = 1;
  }
  return (uVar2);
}

/* 0x080E09E4 (36B) | ScriptVM_Sub_080E09E4 (orig: func_080E09E4) | origin: pure | domain: ScriptVM | MEDIUM / graph_algebra */
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
/* paridad 98.06% preset agbcc_O2 (rosetta-alg) */
void ScriptVM_Sub_080E09E4(u32 arg0, u32 arg1, u32 arg2, u32 arg3)
{
    register u32 r0 = arg0;
    register u32 r1 = arg1;
    register u32 r2 = arg2;
    register u32 r3 = arg3;
    register u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0;
    r4 = r1 + 0;
    r1 = r0 + 0;
    r1 += 0x30;
    r2 = 0xe0;
    r2 = r2 << 1;
    r3 = r0 + r2;
    r2 = *(u32 *)(r3);
    if (r2 > 0x63) goto loc_080E0A02;
    *(u32 *)(r1 + (r2 << 2)) = r4;
    r0 = r2 + 1;
    *(u32 *)(r3) = r0;
loc_080E0A02:
    return r0;
}

/* 0x080E0E80 (52B) | ScriptVM_Sub_080E0E80 (orig: func_080E0E80) | origin: wip | domain: ScriptVM | MEDIUM / graph_algebra */
u32 ScriptVM_Sub_080E0E80(u8 *self,int param_2,u32 *param_3) {
  int iVar1;
  int iVar2;
  iVar1 = param_2 - (int)self;
  while (iVar2 = iVar1, 0 < iVar2) {
    iVar1 = iVar2 >> 1;
    if ((u32)self[iVar1] < *param_3) {
      self = self + iVar1 + 1;
      iVar1 = (iVar2 - iVar1) + -1;
    }
  }
  return self;
}

/* 0x080E0EFC (76B) | ScriptVM_Sub_080E0EFC (orig: func_080E0EFC) | origin: pure | domain: ScriptVM | MEDIUM / graph_algebra */
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
extern u32 LibGcc_udivsi3();
void ScriptVM_Sub_080E0EFC(u32 val, u8 *buf)
{
    register u8 *ptr = buf + 1;
    register u32 max = 0x19999999;
    register u32 limit = 10;
    if (val < limit) goto skip;
    ptr++;
    do {
        limit *= 10;
        if (val < limit) goto skip;
        ptr++;
    } while (limit <= max);
skip:
    *ptr = 0;
    do {
        u32 q;
        ptr--;
        q = LibGcc_udivsi3(val, 10);
        *ptr = (val - q * 10) + '0';
        val = q;
    } while (val != 0);
}

