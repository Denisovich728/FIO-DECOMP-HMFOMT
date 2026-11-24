/* FIO-DECOMP-HMFOMT :: Port Readable Module: LibC (7 functions) */
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

/* 0x080D01F8 (104B) | LibC_malloc (orig: func_080D01F8) | origin: wip | domain: LibC | EXACT / runtime_bios */
u32 LibC_malloc(int param_1) {
  u32 uVar1;
  u32 *puVar2;
  u32 uVar3;
  u32 uVar4;
  uVar4 = param_1 + 3U & 0xfffffffc;
  puVar2 = (u32 *)*(u16 *)0x03000418;
  if (puVar2 != (u32 *)0x0) {
    do {
      if ((puVar2[1] == 0) && (uVar1 = *puVar2, uVar4 <= uVar1)) {
        if (uVar4 + 0x20 <= uVar1) {
          uVar3 = (int)puVar2 + uVar4 + 0x10;
          *(u32 *)((int)puVar2 + uVar4 + 0x10) = (uVar1 - 0x10) - uVar4;
          *(u32 *)((int)puVar2 + uVar4 + 0x14) = 0;
          *(u32 **)((int)puVar2 + uVar4 + 0x18) = puVar2;
          *(u32 *)((int)puVar2 + uVar4 + 0x1c) = puVar2[3];
          if (puVar2[3] != 0) {
            *(u32 *)(puVar2[3] + 8) = uVar3;
          }
          *puVar2 = uVar4;
          puVar2[3] = uVar3;
        }
        puVar2[1] = 1;
        break;
      }
      puVar2 = (u32 *)puVar2[3];
    } while (puVar2 != (u32 *)0x0);
    if (puVar2 != (u32 *)0x0) {
      puVar2 = puVar2 + 4;
      goto LAB_080d025a;
    }
  }
  puVar2 = (u32 *)0x0;
LAB_080d025a:
  return puVar2;
}

/* 0x080D0260 (88B) | LibC_free (orig: func_080D0260) | origin: wip | domain: LibC | EXACT / runtime_bios */
void LibC_free(int param_1) {
  int *piVar1;
  int *piVar2;
  if (param_1 != 0) {
    piVar2 = (int *)(param_1 + -0x10);
    piVar1 = *(int **)(param_1 + -8);
    if ((piVar1 != (int *)0x0) && (piVar1[1] == 0)) {
      *piVar1 = *piVar1 + 0x10 + *piVar2;
      piVar1[3] = *(int *)(param_1 + -4);
      piVar2 = piVar1;
      if (*(int *)(param_1 + -4) != 0) {
        *(int **)(*(int *)(param_1 + -4) + 8) = piVar1;
      }
    }
    piVar1 = (int *)piVar2[3];
    if ((piVar1 != (int *)0x0) && (piVar1[1] == 0)) {
      *piVar2 = *piVar2 + 0x10 + *piVar1;
      piVar2[3] = piVar1[3];
      if (piVar1[3] != 0) {
        *(int **)(piVar1[3] + 8) = piVar2;
      }
    }
    piVar2[1] = 0;
  }
}

/* 0x080D3948 (76B) | LibC_memcmp (orig: func_080D3948) | origin: wip | domain: LibC | EXACT / runtime_bios */
u32 LibC_memcmp(u8 *param_1,u8 *param_2,u32 param_3) {
  int iVar1;
  if ((3 < param_3) && ((((u32)param_1 | (u32)param_2) & 3) == 0)) {
    do {
      if (*(int *)param_1 != *(int *)param_2) break;
      param_1 = param_1 + 4;
      param_2 = param_2 + 4;
      param_3 = param_3 - 4;
    } while (3 < param_3);
  }
  do {
    if (param_3 == 0) {
      iVar1 = 0;
LAB_080d398e:
      return iVar1;
    }
    if ((u32)*param_1 != (u32)*param_2) {
      iVar1 = (u32)*param_1 - (u32)*param_2;
      goto LAB_080d398e;
    }
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    param_3 = param_3 - 1;
  } while( true );
}

/* 0x080D3994 (100B) | LibC_memcpy (orig: func_080D3994) | origin: wip | domain: LibC | EXACT / runtime_bios */
u32 LibC_memcpy(u32 *param_1,u32 *param_2,u32 param_3) {
    u32 * puVar3;
  u32 uVar1;
  register u32 *puVar2;
  puVar2 = param_1;
  if ((0xf < param_3) && ((((u32)param_2 | (u32)param_1) & 3) == 0)) {
    do {
      *puVar2 = *param_2;
      puVar2[1] = param_2[1];
      puVar3 = param_2 + 3;
      puVar2[2] = param_2[2];
      puVar2 = puVar2 + 4;
      puVar2[3] = *puVar3;
      param_2 = param_2 + 4;
      param_3 = param_3 - 0x10;
    } while (0xf < param_3);
    for (; 3 < param_3; param_3 = param_3 - 4) {
      uVar1 = *param_2;
      param_2 = param_2 + 1;
      *puVar2 = uVar1;
      puVar2 = puVar2 + 1;
    }
  }
  while (param_3 = param_3 - 1, param_3 != 0xffffffff) {
    *(u8 *)puVar2 = *(u8 *)param_2;
    param_2 = (u32 *)((int)param_2 + 1);
    puVar2 = (u32 *)((int)puVar2 + 1);
  }
  return param_1;
}

/* 0x080D39F8 (140B) | LibC_memmove (orig: func_080D39F8) | origin: wip | domain: LibC | EXACT / runtime_bios */
u32 LibC_memmove(u32 *param_1,u32 *param_2,u32 param_3) {
  u32 *puVar1;
  u32 uVar2;
  u8 *puVar3;
  u32 *puVar4;
  if ((param_2 < param_1) && (puVar1 = (u32 *)((int)param_2 + param_3), param_1 < puVar1)) {
    puVar3 = (u8 *)((int)param_1 + param_3);
    while (param_3 = param_3 - 1, param_3 != 0xffffffff) {
      puVar3 = puVar3 + -1;
      puVar1 = (u32 *)((int)puVar1 + -1);
      *puVar3 = *(u8 *)puVar1;
    }
  }
  else {
    puVar1 = param_1;
    if ((0xf < param_3) && ((((u32)param_2 | (u32)param_1) & 3) == 0)) {
      do {
        *puVar1 = *param_2;
        puVar1[1] = param_2[1];
        puVar4 = param_2 + 3;
        puVar1[2] = param_2[2];
        param_2 = param_2 + 4;
        puVar1[3] = *puVar4;
        puVar1 = puVar1 + 4;
        param_3 = param_3 - 0x10;
      } while (0xf < param_3);
      for (; 3 < param_3; param_3 = param_3 - 4) {
        uVar2 = *param_2;
        param_2 = param_2 + 1;
        *puVar1 = uVar2;
        puVar1 = puVar1 + 1;
      }
    }
    while (param_3 = param_3 - 1, param_3 != 0xffffffff) {
      *(u8 *)puVar1 = *(u8 *)param_2;
      param_2 = (u32 *)((int)param_2 + 1);
      puVar1 = (u32 *)((int)puVar1 + 1);
    }
  }
  return param_1;
}

/* 0x080D3A84 (88B) | LibC_memset (orig: func_080D3A84) | origin: wip | domain: LibC | EXACT / runtime_bios */
u32 LibC_memset(u32 *param_1,u32 param_2,u32 param_3) {
  u32 uVar1;
  u32 *puVar2;
  puVar2 = param_1;
  if ((3 < param_3) && (((u32)param_1 & 3) == 0)) {
    param_2 = param_2 & 0xff;
    uVar1 = param_2 << param_2 | 8;
    uVar1 = uVar1 | uVar1 << 0x10;
    for (; 0xf < param_3; param_3 = param_3 - 0x10) {
      *puVar2 = uVar1;
      puVar2[1] = uVar1;
      puVar2[2] = uVar1;
      puVar2[3] = uVar1;
      puVar2 = puVar2 + 4;
    }
    for (; 3 < param_3; param_3 = param_3 - 4) {
      *puVar2 = uVar1;
      puVar2 = puVar2 + 1;
    }
  }
  while (param_3 != 0) {
    *(char *)puVar2 = (char)param_2;
    puVar2 = (u32 *)((int)puVar2 + 1);
    param_3 = param_3 - 1;
  }
  return param_1;
}

/* 0x080D3B28 (80B) | LibC_strcpy (orig: func_080D3B28) | origin: wip | domain: LibC | EXACT / runtime_bios */
void * LibC_strcpy(u32 *param_1,u32 *param_2) {
  u32 uVar1;
  u32 *puVar2;
  puVar2 = param_1;
  if ((((u32)param_2 | (u32)param_1) & 3) == 0) {
    uVar1 = *param_2 + 0xfefefeff & ~*param_2;
    while ((uVar1 & 0x80808080) == 0) {
      uVar1 = *param_2;
      param_2 = param_2 + 1;
      *puVar2 = uVar1;
      puVar2 = puVar2 + 1;
      uVar1 = *param_2 + 0xfefefeff & ~*param_2;
    }
  }
  do {
    uVar1 = *param_2;
    *(char *)puVar2 = (char)uVar1;
    param_2 = (u32 *)((int)param_2 + 1);
    puVar2 = (u32 *)((int)puVar2 + 1);
  } while ((char)uVar1 != '\0');
  return (void *)param_1;
}

