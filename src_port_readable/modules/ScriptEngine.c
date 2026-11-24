/* FIO-DECOMP-HMFOMT :: Port Readable Module: ScriptEngine (5 functions) */
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

/* 0x0803F804 (56B) | ScriptEngine_Ctor (orig: func_0803F804) | origin: pure | domain: ScriptEngine | EXACT / stanhash_elf */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 AScriptEngine_Ctor();
u32 ScriptEngine_Ctor(int arg0,u32 arg1) {
  AScriptEngine_Ctor();
  *(u32 *)(arg0 + 0x34c) = 0x080E7824;
  *(u32 *)(arg0 + 0x350) = arg1;
  *(u32 *)(arg0 + 0x354) = 0;
  *(u32 *)(arg0 + 0x358) = 0;
  return arg0;
}

/* 0x0803F83C (60B) | ScriptEngine_Ctor_F83C (orig: func_0803F83C) | origin: pure | domain: ScriptEngine | EXACT / stanhash_elf */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 AScriptEngine_Ctor();
u32 ScriptEngine_Ctor_F83C(int arg0,u32 arg1,u32 arg2) {
  AScriptEngine_Ctor();
  *(u32 *)(arg0 + 0x34c) = 0x080E7824;
  *(u32 *)(arg0 + 0x350) = arg1;
  *(u32 *)(arg0 + 0x354) = arg2;
  *(u32 *)(arg0 + 0x358) = 0;
  return arg0;
}

/* 0x0803F878 (40B) | ScriptEngine_LoadById (orig: func_0803F878) | origin: pure | domain: ScriptEngine | EXACT / stanhash_elf */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 AScriptEngine_Load();
extern const u32 g_080F89D4[];
void ScriptEngine_LoadById(int arg0,int arg1,u32 arg2) {
  AScriptEngine_Load(arg0,g_080F89D4[arg1]);
  *(u32 *)(arg0 + 0x358) = arg2;
}

/* 0x0803F8B8 (36B) | ScriptEngine_Push (orig: func_0803F8B8) | origin: pure | domain: ScriptEngine | EXACT / stanhash_elf */
/* ScriptEngine_Push @ 0x0803F8B8 mode=THUMB size=0x24 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
(sin referencia de Ghidra en esta direccion)

/* 0x080E0EF0 (12B) | ScriptEngine_vfunc_08 (orig: func_080E0EF0) | origin: pure | domain: ScriptEngine | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 AScriptEngine_Dtor();
void ScriptEngine_vfunc_08(void) {
  AScriptEngine_Dtor();
}

