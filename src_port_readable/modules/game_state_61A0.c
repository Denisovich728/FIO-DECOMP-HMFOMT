/* FIO-DECOMP-HMFOMT :: Port Readable Module: game_state_61A0 (4 functions) */
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

/* 0x080DC5B4 (32B) | game_state_61A0_Dtor (orig: func_080DC5B4) | origin: pure | domain: game_state_61A0 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 CppRuntime_builtin_delete();
void game_state_61A0_Dtor(u32 *arg0,u32 arg1) {
  *arg0 = 0x080E61A0;
  if ((arg1 & 1) != 0) {
    CppRuntime_builtin_delete(arg0);
  }
}

/* 0x080DC5D4 (32B) | game_state_61A0_Dtor_C5D4 (orig: func_080DC5D4) | origin: pure | domain: game_state_61A0 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 CppRuntime_builtin_delete();
void game_state_61A0_Dtor_C5D4(u32 *arg0,u32 arg1) {
  *arg0 = 0x080E61A0;
  if ((arg1 & 1) != 0) {
    CppRuntime_builtin_delete(arg0);
  }
}

/* 0x080E44B8 (44B) | game_state_61A0_Dtor_44B8 (orig: func_080E44B8) | origin: pure | domain: game_state_61A0 | HIGH / vtable_algebra */
void SpriteAnimEngine_5A28_Dtor_C85C(void *, int); void CppRuntime_builtin_delete(void *); void game_state_61A0_Dtor_44B8(u32 *a, int b) { SpriteAnimEngine_5A28_Dtor_C85C(a + 1, 2); *a = 0x080E61A0; if (b & 1) CppRuntime_builtin_delete(a); }

/* 0x080E4544 (32B) | game_state_61A0_Dtor_4544 (orig: func_080E4544) | origin: pure | domain: game_state_61A0 | HIGH / vtable_algebra */
void CppRuntime_builtin_delete(void *); void game_state_61A0_Dtor_4544(u32 *a, int b) { *a = 0x080E61A0; if (b & 1) CppRuntime_builtin_delete(a); }

