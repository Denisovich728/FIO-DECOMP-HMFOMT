// =============================================================================
// Harvest Moon: Friends of Mineral Town (GBA) - Decompiled Source
// Module: SCRIPT_ENGINE (151 functions)
// Description: Harvest Moon virtual script bytecode engine, dialogue flow and cutscenes
// =============================================================================

#include "../../include/events/script_engine.h"

// =============================================================================
// Function: ScriptEngine_Construct @ 0x0803AB30
// =============================================================================
u32 ScriptEngine_Construct(undefined4 *ctx,int *opcode)

{
  undefined2 u_val1;
  int *p_int2;
  undefined4 u_val3;
  undefined4 *p_uint4;
  undefined4 *p_uint5;
  int i_val6;
  uint loop_i;
  undefined4 stack_val_50;
  undefined4 stack_val_4c;
  undefined4 stack_val_48;
  undefined4 stack_val_44;
  undefined4 stack_val_40;
  undefined4 stack_val_3c;
  undefined4 stack_val_38;
  undefined4 stack_val_34;
  undefined1 stack_val_30;
  undefined2 *apuStack_2c [2];
  undefined2 **ppuStack_24;
  
  *ctx = opcode;
  p_uint4 = ctx + 1;
  i_val6 = 2;
  ppuStack_24 = apuStack_2c;
  p_uint5 = p_uint4;
  do {
    *p_uint4 = 0;
    *(undefined2 *)(p_uint4 + 1) = 0;
    p_uint4[2] = 0;
    *(undefined2 *)(p_uint4 + 3) = 0;
    p_uint4[4] = 0;
    *(undefined2 *)(p_uint4 + 5) = 0;
    p_uint4[6] = 0;
    *(undefined2 *)(p_uint4 + 7) = 0;
    GBA_ObjAttr_Init(p_uint5 + 8);
    p_uint4[9] = 0;
    p_uint4 = p_uint4 + 0xb;
    p_uint5 = p_uint5 + 0xb;
    i_val6 = i_val6 + -1;
  } while (i_val6 != -1);
  p_int2 = ctx + 0x22;
  *p_int2 = 0;
  *(undefined1 *)(ctx + 0x27) = 1;
  stack_val_30 = _call_via_r2(opcode,0xf,*(undefined4 *)(*opcode + 0x48));
  if (*p_int2 == 0) {
    gba_memset(ctx + 0x23,stack_val_30,(int)ctx + (0x8c - (int)(ctx + 0x23)));
    gba_memset((int)p_int2 + *p_int2 + 4,stack_val_30,1 - *p_int2);
    *p_int2 = 1;
  }
  else {
    gba_memset(ctx + 0x23,stack_val_30,((int)ctx + 0x8d) - (int)(ctx + 0x23));
    *p_int2 = *p_int2 - ((int)p_int2 + ((*p_int2 + 4) - ((int)ctx + 0x8d)));
  }
  p_int2 = (int *)_call_via_r1(opcode,*(undefined4 *)(*opcode + 0x68));
  loop_i = 0;
  do {
    i_val6 = *p_int2;
    _call_via_r3(ppuStack_24,p_int2,loop_i + 0x91A,*(undefined4 *)(i_val6 + 0xc));
    _call_via_r3(&stack_val_50,p_int2,*apuStack_2c[0],*(undefined4 *)(i_val6 + 0x10));
    gba_memcpy(&stack_val_50,&stack_val_50,0x20);
    ctx[loop_i * 0xb + 1] = stack_val_50;
    ctx[loop_i * 0xb + 2] = stack_val_4c;
    ctx[loop_i * 0xb + 3] = stack_val_48;
    ctx[loop_i * 0xb + 4] = stack_val_44;
    ctx[loop_i * 0xb + 5] = stack_val_40;
    ctx[loop_i * 0xb + 6] = stack_val_3c;
    ctx[loop_i * 0xb + 7] = stack_val_38;
    ctx[loop_i * 0xb + 8] = stack_val_34;
    p_uint5 = ctx + loop_i * 0xb + 9;
    HW_Routine_08007C28(p_uint5,ctx[loop_i * 0xb + 10]);
    u_val3 = GBA_ObjAttr_AllocateSprite(p_uint5,2);
    ctx[loop_i * 0xb + 10] = u_val3;
    u_val1 = GBA_Vram_AllocateTileBlock(p_uint5);
    *(undefined2 *)(ctx + loop_i * 0xb + 0xb) = u_val1;
    loop_i = loop_i + 1;
  } while (loop_i < 3);
  return ctx;
}

// =============================================================================
// Function: ScriptEngine_Destruct @ 0x0803AC78
// =============================================================================
void ScriptEngine_Destruct(undefined4 *ctx,uint opcode)

{
  undefined4 *p_uint1;
  
  p_uint1 = ctx + 0x22;
  _call_via_r2((int *)*ctx,*(undefined1 *)(ctx + 0x23),
                  *(undefined4 *)(*(int *)*ctx + 0x4c));
  if (ctx != (undefined4 *)0xfffffffc) {
    for (; ctx + 1 != p_uint1; p_uint1 = p_uint1 + -0xb) {
      HW_Routine_08007C28(p_uint1 + -3,p_uint1[-2]);
      HW_Routine_080079E8(p_uint1 + -3,2);
    }
  }
  if ((opcode & 1) != 0) {
    CppRuntime_FreeMemory(ctx);
  }
  return;
}

// =============================================================================
// Function: ScriptEngine_ClearVM @ 0x0803ACD8
// =============================================================================
void ScriptEngine_ClearVM(undefined4 *ctx,int *opcode)

{
  int i_val1;
  int *p_int2;
  int i_val3;
  undefined4 *p_uint4;
  undefined4 *p_uint5;
  int i_val6;
  undefined2 u_val7;
  undefined4 *p_uint8;
  undefined4 u_val9;
  undefined4 u_val10;
  uint loop_i;
  undefined4 stack_val_48;
  undefined4 stack_val_44;
  undefined4 stack_val_40;
  undefined4 stack_val_3c;
  int stack_val_38;
  int stack_val_34;
  undefined4 *puStack_30;
  undefined4 *puStack_2c;
  undefined4 *puStack_28;
  undefined4 *puStack_24;
  
  loop_i = 0;
  do {
    u_val9 = ctx[loop_i * 0xb + 3];
    i_val1 = GBA_Vram_AllocateTileBlock(ctx + loop_i * 0xb + 9,ctx[loop_i * 0xb + 10]);
    u_val7 = 0;
    if (ctx[loop_i * 0xb + 3] != 0) {
      u_val7 = *(undefined2 *)(ctx + loop_i * 0xb + 4);
    }
    HW_Routine_08008F0C(&stack_val_48,u_val9,i_val1 * 0x20 + 0x06010000,u_val7);
    p_uint4 = (undefined4 *)opcode[1];
    if (p_uint4 == (undefined4 *)opcode[3]) {
      stack_val_34 = 1;
      p_uint5 = (undefined4 *)*opcode;
      stack_val_38 = (int)p_uint4 - (int)p_uint5 >> 4;
      p_int2 = &stack_val_38;
      if (stack_val_38 == 0) {
        p_int2 = &stack_val_34;
      }
      puStack_28 = p_uint4;
      if (stack_val_38 + *p_int2 == 0) {
        p_uint4 = (undefined4 *)0x0;
        i_val1 = 0;
        puStack_30 = &stack_val_48;
      }
      else {
        i_val1 = (stack_val_38 + *p_int2) * 0x10;
        puStack_30 = &stack_val_48;
        p_uint4 = (undefined4 *)runtime_malloc_aligned(i_val1);
        if (p_uint4 == (undefined4 *)0x0) {
          p_uint4 = (undefined4 *)VTable_Routine_080D3BC0(i_val1);
        }
        p_uint5 = (undefined4 *)*opcode;
      }
      puStack_2c = ctx + 0x23;
      p_uint8 = p_uint4;
      for (; p_uint5 != puStack_28; p_uint5 = p_uint5 + 4) {
        if (p_uint8 != (undefined4 *)0x0) {
          u_val9 = p_uint5[1];
          u_val10 = p_uint5[2];
          *p_uint8 = *p_uint5;
          p_uint8[1] = u_val9;
          p_uint8[2] = u_val10;
          p_uint8[3] = p_uint5[3];
        }
        p_uint8 = p_uint8 + 4;
      }
      i_val3 = stack_val_34;
      if (stack_val_34 == 1) {
        if (p_uint8 != (undefined4 *)0x0) {
          u_val9 = puStack_30[1];
          u_val10 = puStack_30[2];
          *p_uint8 = *puStack_30;
          p_uint8[1] = u_val9;
          p_uint8[2] = u_val10;
          p_uint8[3] = puStack_30[3];
        }
        p_uint8 = p_uint8 + 4;
      }
      else {
        for (; i_val3 != 0; i_val3 = i_val3 + -1) {
          if (p_uint8 != (undefined4 *)0x0) {
            u_val9 = puStack_30[1];
            u_val10 = puStack_30[2];
            *p_uint8 = *puStack_30;
            p_uint8[1] = u_val9;
            p_uint8[2] = u_val10;
            p_uint8[3] = puStack_30[3];
          }
          p_uint8 = p_uint8 + 4;
        }
      }
      i_val6 = *opcode;
      for (i_val3 = i_val6; i_val3 != opcode[1]; i_val3 = i_val3 + 0x10) {
      }
      puStack_24 = p_uint4;
      if (i_val6 != 0) {
        cpp_operator_delete(i_val6);
      }
      *opcode = (int)puStack_24;
      opcode[1] = (int)p_uint8;
      opcode[3] = (int)puStack_24 + i_val1;
    }
    else {
      if (p_uint4 != (undefined4 *)0x0) {
        *p_uint4 = stack_val_48;
        p_uint4[1] = stack_val_44;
        p_uint4[2] = stack_val_40;
        p_uint4[3] = stack_val_3c;
      }
      opcode[1] = opcode[1] + 0x10;
      puStack_2c = ctx + 0x23;
      puStack_30 = &stack_val_48;
    }
    loop_i = loop_i + 1;
  } while (loop_i < 3);
  _call_via_r4(*ctx,ctx[5],*(undefined1 *)puStack_2c,1);
  return;
}

// =============================================================================
// Function: ScriptEngine_SetVariable @ 0x0803AE58
// =============================================================================
undefined4
ScriptEngine_SetVariable(undefined4 *ctx,undefined4 opcode,undefined4 arg1,undefined4 arg2,
             int arg_5)

{
  
  _call_via_r4(opcode,arg1,arg2,0xaa,0x8000,ctx + arg_5 * 0xb + 1,*ctx,
                  *(undefined2 *)(ctx + arg_5 * 0xb + 1 + 10),ctx + 0x22);
  return;
}

// =============================================================================
// Function: ScriptEngine_GetVariable @ 0x0803AEA0
// =============================================================================
void ScriptEngine_GetVariable(undefined4 *ctx,int *opcode,int *arg1,int arg2,uint arg_5)

{
  undefined2 u_val1;
  undefined1 u_val2;
  uint loop_i;
  undefined1 *p_uint4;
  undefined4 u_val5;
  int i_val6;
  uint *p_uint7;
  undefined4 u_val8;
  uint *p_uint9;
  int i_val10;
  uint stack_val_88;
  uint stack_val_84;
  uint stack_val_80;
  uint stack_val_7c;
  uint stack_val_78;
  uint stack_val_74;
  uint stack_val_70;
  uint stack_val_6c;
  uint stack_val_68;
  uint stack_val_64;
  uint stack_val_60;
  uint stack_val_5c;
  uint stack_val_58;
  uint stack_val_54;
  uint stack_val_50;
  uint stack_val_4c;
  uint stack_val_48;
  uint stack_val_44;
  int stack_val_40;
  ushort stack_val_3c;
  int stack_val_38;
  uint stack_val_34;
  undefined4 *puStack_30;
  undefined4 stack_val_2c;
  uint *puStack_28;
  uint stack_val_24;
  
  *ctx = opcode;
  ctx[1] = 0;
  p_uint9 = ctx + 0x34;
  *p_uint9 = 0;
  stack_val_38._0_1_ = (undefined1)arg2;
  *(undefined1 *)(ctx + 0x39) = (undefined1)stack_val_38;
  *(undefined1 *)((int)ctx + 0xe5) = 1;
  *(undefined1 *)((int)ctx + 0xe6) = 0;
  ctx[0x3a] = 0;
  stack_val_38 = arg2;
  _call_via_r3(&stack_val_40,arg1,0,*(undefined4 *)(*arg1 + 0xc));
  stack_val_34 = 0;
  if (stack_val_40 != 0) {
    stack_val_34 = (uint)stack_val_3c;
  }
  stack_val_24 = 0;
  puStack_28 = p_uint9;
  if (stack_val_34 != 0) {
    puStack_30 = ctx + 1;
    do {
      _call_via_r3(&stack_val_60,arg1,*(undefined2 *)(stack_val_40 + stack_val_24 * 4),
                      *(undefined4 *)(*arg1 + 0x10));
      stack_val_88 = stack_val_60;
      stack_val_84 = stack_val_5c;
      stack_val_80 = stack_val_58;
      stack_val_7c = stack_val_54;
      stack_val_78 = stack_val_50;
      stack_val_74 = stack_val_4c;
      stack_val_70 = stack_val_48;
      stack_val_6c = stack_val_44;
      GBA_ObjAttr_Init(&stack_val_68,&stack_val_68);
      stack_val_64 = GBA_ObjAttr_AllocateSprite(&stack_val_68,0);
      if ((uint)ctx[1] < 5) {
        p_uint9 = puStack_30 + ctx[1] * 10 + 1;
        if (p_uint9 != (uint *)0x0) {
          *p_uint9 = stack_val_88;
          p_uint9[1] = stack_val_84;
          p_uint9[2] = stack_val_80;
          p_uint9[3] = stack_val_7c;
          p_uint9[4] = stack_val_78;
          p_uint9[5] = stack_val_74;
          p_uint9[6] = stack_val_70;
          p_uint9[7] = stack_val_6c;
          GBA_ObjAttr_Init(p_uint9 + 8,p_uint9 + 8);
          loop_i = HW_Routine_08007CD8(p_uint9 + 8,stack_val_64);
          p_uint9[9] = loop_i;
        }
        ctx[1] = ctx[1] + 1;
      }
      HW_Routine_08007C28(&stack_val_68,stack_val_64);
      HW_Routine_080079E8(&stack_val_68,2);
      stack_val_24 = stack_val_24 + 1;
    } while (stack_val_24 < stack_val_34);
  }
  if ((stack_val_38 == 0) || (stack_val_38 != 1)) {
    u_val8 = 0x10;
  }
  else {
    u_val8 = 0x11;
  }
  u_val2 = _call_via_r2(opcode,u_val8,*(undefined4 *)(*opcode + 0x48));
  if (*puStack_28 < 0x10) {
    p_uint4 = (undefined1 *)((int)puStack_28 + *puStack_28 + 4);
    if (p_uint4 != (undefined1 *)0x0) {
      *p_uint4 = u_val2;
    }
    *puStack_28 = *puStack_28 + 1;
  }
  i_val10 = 0;
  loop_i = 0;
  if (stack_val_34 != 0) {
    do {
      i_val10 = i_val10 + (uint)*(ushort *)(stack_val_40 + 2);
      stack_val_40 = stack_val_40 + 4;
      loop_i = loop_i + 1;
    } while (loop_i < stack_val_34);
  }
  stack_val_2c = _call_via_r1(opcode,*(undefined4 *)(*opcode + 0x18));
  u_val8 = _call_via_r1(opcode,*(undefined4 *)(*opcode + 0x1c));
  stack_val_24 = 0;
  if (arg_5 != 0) {
    do {
      Animal_Routine_0805E824(&stack_val_88,arg1,0,0x100);
      if (i_val10 == 0) {
        i_val6 = 0;
      }
      else {
        u_val5 = math_rand();
        i_val6 = math_modsi3(u_val5,i_val10);
      }
      if (i_val6 != 0) {
        u_val1 = (undefined2)stack_val_78;
        stack_val_78._0_2_ = (short)(i_val6 << 8);
        Animal_Routine_0805E8F0(&stack_val_88);
        stack_val_78 = CONCAT22(stack_val_78._2_2_,u_val1);
      }
      ScriptEngine_StackPush(&stack_val_74,&stack_val_88,stack_val_2c,u_val8);
      p_uint9 = ctx + 0x3a;
      if (*p_uint9 < 0x20) {
        p_uint7 = p_uint9 + *p_uint9 * 7 + 1;
        if (p_uint7 != (uint *)0x0) {
          *p_uint7 = stack_val_74;
          p_uint7[1] = stack_val_70;
          p_uint7[2] = stack_val_6c;
          p_uint7[3] = stack_val_68;
          p_uint7[4] = stack_val_64;
          p_uint7[5] = stack_val_60;
          p_uint7[6] = stack_val_5c;
        }
        *p_uint9 = *p_uint9 + 1;
      }
      stack_val_24 = stack_val_24 + 1;
    } while (stack_val_24 < arg_5);
  }
  return ctx;
}

// =============================================================================
// Function: ScriptEngine_ParseHeaderChunks @ 0x0803B128
// =============================================================================
void ScriptEngine_ParseHeaderChunks(undefined4 *ctx,int *opcode)

{
  int i_val1;
  int *p_int2;
  undefined4 *p_uint3;
  undefined4 *p_uint4;
  int i_val5;
  undefined4 *p_uint6;
  int i_val7;
  undefined4 u_val8;
  short s_val9;
  undefined4 u_val10;
  undefined4 stack_val_48;
  undefined4 stack_val_44;
  undefined4 stack_val_40;
  undefined4 stack_val_3c;
  int stack_val_38;
  int stack_val_34;
  undefined4 *puStack_30;
  undefined4 *puStack_2c;
  undefined4 *puStack_28;
  undefined4 *puStack_24;
  
  puStack_2c = ctx + ctx[1] * 10 + 2;
  p_uint6 = ctx + 2;
  puStack_30 = ctx;
  if (ctx + 2 != puStack_2c) {
    do {
      i_val7 = p_uint6[2];
      s_val9 = 0;
      if (i_val7 != 0) {
        s_val9 = *(short *)(p_uint6 + 3);
      }
      puStack_28 = p_uint6 + 10;
      if (s_val9 != 0) {
        i_val1 = GBA_Vram_AllocateTileBlock(p_uint6 + 8,p_uint6[9]);
        HW_Routine_08008F0C(&stack_val_48,i_val7,i_val1 * 0x20 + 0x06010000,s_val9);
        p_uint3 = (undefined4 *)opcode[1];
        if (p_uint3 == (undefined4 *)opcode[3]) {
          stack_val_34 = 1;
          p_uint4 = (undefined4 *)*opcode;
          stack_val_38 = (int)p_uint3 - (int)p_uint4 >> 4;
          p_int2 = &stack_val_38;
          if (stack_val_38 == 0) {
            p_int2 = &stack_val_34;
          }
          puStack_24 = p_uint3;
          if (stack_val_38 + *p_int2 == 0) {
            p_uint3 = (undefined4 *)0x0;
            i_val7 = 0;
          }
          else {
            i_val7 = (stack_val_38 + *p_int2) * 0x10;
            p_uint3 = (undefined4 *)runtime_malloc_aligned(i_val7);
            if (p_uint3 == (undefined4 *)0x0) {
              p_uint3 = (undefined4 *)VTable_Routine_080D3BC0(i_val7);
            }
            p_uint4 = (undefined4 *)*opcode;
          }
          puStack_28 = p_uint6 + 10;
          p_uint6 = p_uint3;
          for (; p_uint4 != puStack_24; p_uint4 = p_uint4 + 4) {
            if (p_uint6 != (undefined4 *)0x0) {
              u_val8 = p_uint4[1];
              u_val10 = p_uint4[2];
              *p_uint6 = *p_uint4;
              p_uint6[1] = u_val8;
              p_uint6[2] = u_val10;
              p_uint6[3] = p_uint4[3];
            }
            p_uint6 = p_uint6 + 4;
          }
          i_val1 = stack_val_34;
          if (stack_val_34 == 1) {
            if (p_uint6 != (undefined4 *)0x0) {
              *p_uint6 = stack_val_48;
              p_uint6[1] = stack_val_44;
              p_uint6[2] = stack_val_40;
              p_uint6[3] = stack_val_3c;
            }
            p_uint6 = p_uint6 + 4;
          }
          else {
            for (; i_val1 != 0; i_val1 = i_val1 + -1) {
              if (p_uint6 != (undefined4 *)0x0) {
                *p_uint6 = stack_val_48;
                p_uint6[1] = stack_val_44;
                p_uint6[2] = stack_val_40;
                p_uint6[3] = stack_val_3c;
              }
              p_uint6 = p_uint6 + 4;
            }
          }
          i_val5 = *opcode;
          for (i_val1 = i_val5; i_val1 != opcode[1]; i_val1 = i_val1 + 0x10) {
          }
          if (i_val5 != 0) {
            cpp_operator_delete(i_val5);
          }
          *opcode = (int)p_uint3;
          opcode[1] = (int)p_uint6;
          opcode[3] = i_val7 + (int)p_uint3;
        }
        else {
          if (p_uint3 != (undefined4 *)0x0) {
            *p_uint3 = stack_val_48;
            p_uint3[1] = stack_val_44;
            p_uint3[2] = stack_val_40;
            p_uint3[3] = stack_val_3c;
          }
          opcode[1] = opcode[1] + 0x10;
        }
      }
      p_uint6 = puStack_28;
    } while (puStack_28 != puStack_2c);
  }
  _call_via_r4(*puStack_30,puStack_30[6],*(undefined1 *)(puStack_30 + 0x35),1);
  return;
}

// =============================================================================
// Function: ScriptEngine_AllocateStack @ 0x0803B2A8
// =============================================================================
void ScriptEngine_AllocateStack(undefined4 *ctx)

{
  undefined4 u_val1;
  undefined4 u_val2;
  int i_val3;
  int *p_int4;
  uint u_val5;
  int *p_int6;
  uint loop_i;
  uint u_val8;
  uint u_val9;
  uint stack_val_2c;
  
  u_val5 = (uint)*(byte *)(ctx + 0x39);
  p_int4 = (int *)(u_val5 * 0x10 + gRomData_080F1948);
  u_val8 = 0;
  u_val9 = 0;
  if ((u_val5 == 0) || (u_val5 != 1)) {
    stack_val_2c = 2;
  }
  else {
    stack_val_2c = 3;
  }
  u_val1 = _call_via_r1((int *)*ctx,*(undefined4 *)(*(int *)*ctx + 0x18));
  u_val2 = _call_via_r1((int *)*ctx,*(undefined4 *)(*(int *)*ctx + 0x1c));
  u_val5 = ctx[0x3a];
  loop_i = 0;
  if (u_val5 != 0) {
    ctx = ctx + 0x3b;
    p_int6 = p_int4;
    do {
      i_val3 = Animal_Routine_0805E8F0(ctx);
      if (i_val3 * 0x20000000 < 0) {
        ScriptEngine_StackPop(ctx,u_val1,u_val2);
      }
      u_val9 = u_val9 + 1;
      if (stack_val_2c <= u_val9) {
        u_val8 = u_val8 + 1;
        p_int6 = p_int6 + 2;
        if (1 < u_val8) {
          u_val8 = 0;
          p_int6 = p_int4;
        }
        u_val9 = 0;
      }
      ctx[5] = ctx[5] + *p_int6;
      ctx[6] = ctx[6] + p_int6[1];
      ctx = ctx + 7;
      loop_i = loop_i + 1;
    } while (loop_i < u_val5);
  }
  return;
}

// =============================================================================
// Function: ScriptEngine_FreeStack @ 0x0803B368
// =============================================================================
void ScriptEngine_FreeStack(undefined4 *ctx,undefined4 opcode)

{
  short s_val1;
  short s_val2;
  char c_char3;
  uint u_val4;
  int i_val5;
  int i_val6;
  undefined4 u_val7;
  undefined4 *p_uint8;
  int *p_int9;
  uint loop_i;
  
  u_val4 = ctx[0x3a];
  c_char3 = *(char *)((int)ctx + 0xe6);
  if ((c_char3 == '\0') || (c_char3 != '\x01')) {
    c_char3 = '\x01';
    loop_i = 0;
    u_val4 = u_val4 >> 1;
  }
  else {
    c_char3 = '\0';
    loop_i = u_val4 >> 1;
  }
  *(char *)((int)ctx + 0xe6) = c_char3;
  i_val5 = _call_via_r1((int *)*ctx,*(undefined4 *)(*(int *)*ctx + 0x18));
  i_val6 = _call_via_r1((int *)*ctx,*(undefined4 *)(*(int *)*ctx + 0x1c));
  if (loop_i < u_val4) {
    p_int9 = ctx + loop_i * 7 + 0x3c;
    do {
      s_val1 = *(short *)((int)p_int9 + 0x12);
      s_val2 = *(short *)((int)p_int9 + 0x16);
      p_uint8 = ctx + (uint)*(ushort *)(*p_int9 + (uint)*(ushort *)(p_int9 + 2) * 4) * 10 + 2;
      u_val7 = GBA_Vram_AllocateTileBlock(p_uint8 + 8,p_uint8[9]);
      _call_via_r4(opcode,((s_val1 - i_val5) + 8U & 0xff) - 8,((s_val2 - i_val6) + 8U & 0xff) - 8,
                      0x55,0,p_uint8,*ctx,u_val7,ctx + 0x34);
      p_int9 = p_int9 + 7;
      loop_i = loop_i + 1;
    } while (loop_i < u_val4);
  }
  return;
}

// =============================================================================
// Function: ScriptEngine_StackPush @ 0x0803B454
// =============================================================================
undefined8
ScriptEngine_StackPush(undefined4 *ctx,undefined4 *opcode,undefined4 arg1,undefined4 arg2)

{
  undefined4 u_val1;
  undefined4 u_val2;
  
  u_val1 = opcode[1];
  u_val2 = opcode[2];
  *ctx = *opcode;
  ctx[1] = u_val1;
  ctx[2] = u_val2;
  u_val1 = opcode[4];
  ctx[3] = opcode[3];
  ctx[4] = u_val1;
  ScriptEngine_StackPop(ctx,arg1,arg2);
  return ctx;
}

// =============================================================================
// Function: ScriptEngine_StackPop @ 0x0803B474
// =============================================================================
void ScriptEngine_StackPop(int ctx,int opcode,int arg1)

{
  ushort u_val1;
  undefined4 u_val2;
  int i_val3;
  
  u_val2 = math_rand();
  i_val3 = math_umodsi3(u_val2,0xf0);
  *(int *)(ctx + 0x14) = (opcode + i_val3) * 0x10000;
  u_val2 = math_rand();
  i_val3 = math_umodsi3(u_val2,0xa0);
  *(int *)(ctx + 0x18) = (arg1 + i_val3) * 0x10000;
  u_val1 = math_rand();
  *(ushort *)(ctx + 0x10) = (u_val1 & 0x90) + 0x60;
  return;
}

// =============================================================================
// Function: ScriptEngine_StackTop @ 0x0803B4B0
// =============================================================================
u32 ScriptEngine_StackTop(undefined4 *ctx,undefined4 opcode)

{
  undefined4 *p_uint1;
  int i_val2;
  
  *ctx = gRomData_080E76E8;
  ctx[1] = opcode;
  p_uint1 = ctx + 2;
  i_val2 = 3;
  do {
    *(undefined1 *)p_uint1 = 0;
    p_uint1 = p_uint1 + 6;
    i_val2 = i_val2 + -1;
  } while (i_val2 != -1);
  return ctx;
}

// =============================================================================
// Function: ScriptEngine_SetPC @ 0x0803B4DC
// =============================================================================
u32 ScriptEngine_SetPC(undefined1 *ctx,int opcode,int arg1)

{
  char c_char1;
  undefined4 u_val2;
  undefined *p_uint3;
  int i_val4;
  uint u_val5;
  undefined1 stack_buf_34 [32];
  
  if (0xc < (uint)(arg1 + 0xFFFF00DF)) {
    stack_buf_34[0] = 0;
    *ctx = 0;
    gba_strcpy(ctx + 4);
    goto LAB_0803b6ac;
  }
  switch(*(uint *)((arg1 + 0xFFFF00DF) * 4 + _func_0803B4FC) & 0xfffffffe) {
  case 0x803b534:
    c_char1 = Farm_HasPlantedCrop(*(int *)(opcode + 4) + 0x14);
    if ((c_char1 == '\0') ||
       (p_uint3 = gRomData_080F1974,
       -1 < (int)((uint)*(byte *)(*(int *)(opcode + 4) + 0x21C8) * 0x20000000))) {
      p_uint3 = (undefined *)Farmer_GetName(*(int *)(opcode + 4) + 0x1BD8);
    }
    break;
  case 0x803b570:
    i_val4 = Farm_GetFieldState(*(int *)(opcode + 4) + 0x14);
    u_val2 = gRomData_080F1980;
    if (i_val4 != 0) {
      u_val2 = Animal_Routine_0809B1F4();
    }
    u_val5 = gba_strlen(u_val2);
    if (0x1f < u_val5) {
      u_val5 = 0x1f;
    }
    gba_memcpy(stack_buf_34,u_val2,u_val5);
    goto LAB_0803b68c;
  case 0x803b5a8:
    p_uint3 = (undefined *)Animal_Routine_0809B1F4(*(int *)(opcode + 4) + 0x1C70);
    break;
  case 0x803b5bc:
    p_uint3 = (undefined *)Farmer_GetFarmName(*(int *)(opcode + 4) + 0x1BD8);
    break;
  case 0x803b5d0:
    i_val4 = NPC_Routine_080A0384(*(int *)(opcode + 4) + 0x1CD4);
    u_val2 = gRomData_080F1984;
    if (i_val4 == 0) {
      u_val5 = gba_strlen(gRomData_080F1984);
      if (0x1f < u_val5) {
        u_val5 = 0x1f;
      }
      gba_memcpy(stack_buf_34,u_val2,u_val5);
      stack_buf_34[u_val5] = 0;
      *ctx = 1;
      gba_strcpy(ctx + 4);
      goto LAB_0803b6ac;
    }
    NPC_Routine_080A0384(*(int *)(opcode + 4) + 0x1CD4);
    p_uint3 = (undefined *)NPC_Routine_0809EACC();
    break;
  case 0x803b628:
    p_uint3 = (undefined *)Farm_NoOp(*(int *)(opcode + 4) + 0x14);
    break;
  case 0x803b634:
    gba_strcpy(stack_buf_34,arg1 * 0x18 + opcode + 0xFFE81490);
    *ctx = 1;
    goto LAB_0803b694;
  case 0x803b650:
    i_val4 = *(int *)(opcode + 4);
    p_uint3 = 0x21E0;
    goto LAB_0803b66e;
  case 0x803b65c:
    i_val4 = *(int *)(opcode + 4);
    p_uint3 = 0x21F0;
    goto LAB_0803b66e;
  case 0x803b668:
    i_val4 = *(int *)(opcode + 4);
    p_uint3 = 0x2200;
LAB_0803b66e:
    p_uint3 = p_uint3 + i_val4;
  }
  u_val5 = gba_strlen(p_uint3);
  if (0x1f < u_val5) {
    u_val5 = 0x1f;
  }
  gba_memcpy(stack_buf_34,p_uint3,u_val5);
LAB_0803b68c:
  stack_buf_34[u_val5] = 0;
  *ctx = 1;
LAB_0803b694:
  gba_strcpy(ctx + 4,stack_buf_34);
LAB_0803b6ac:
  return ctx;
}

// =============================================================================
// Function: ScriptEngine_GetPC @ 0x0803B6B8
// =============================================================================
void ScriptEngine_GetPC(int ctx,int opcode,undefined4 arg1)

{
  uint u_val1;
  undefined1 stack_buf_2c [24];
  
  u_val1 = gba_strlen(arg1);
  if (0x16 < u_val1) {
    u_val1 = 0x16;
  }
  gba_memcpy(stack_buf_2c,arg1,u_val1);
  stack_buf_2c[u_val1] = 0;
  gba_strcpy(opcode * 0x18 + ctx + 8,stack_buf_2c);
  return;
}

// =============================================================================
// Function: ScriptEngine_ResolveStringPointer @ 0x0803B6FC
// =============================================================================
void ScriptEngine_ResolveStringPointer(undefined4 *ctx,undefined4 *opcode,undefined4 arg1)

{
  undefined4 u_val1;
  
  *ctx = gRomData_080E7748;
  u_val1 = *opcode;
  *opcode = 0;
  ctx[1] = u_val1;
  ctx[2] = arg1;
  return;
}

// =============================================================================
// Function: ScriptEngine_ResolveJumpTarget @ 0x0803B840
// =============================================================================
longlong ScriptEngine_ResolveJumpTarget(int ctx)

{
  uint stack_val_10;
  
  stack_val_10 = ((*(ushort *)(ctx + 0x1c) & 0x7fff) >> 5) + 3 & 0x3FF |
              ((*(uint *)(ctx + 0x1c) & 0x7ffff) >> 0xf) << 0xc;
  stack_val_10 = stack_val_10 | stack_val_10 << 0x10;
  CpuFastSet(&stack_val_10,(*(byte *)(ctx + 0x1c) & 0x1f) * 0x800 + 0x6000000,0x010000A0);
  Animal_Routine_08051320((*(byte *)(ctx + 0x1c) & 0x1f) * 0x800 + 0x6000000,
                *(undefined4 *)(ctx + 0xc),0,*(undefined4 *)(ctx + 0x14),
                *(undefined4 *)(ctx + 0x18),(*(ushort *)(ctx + 0x1c) & 0x7fff) >> 5,
                (*(uint *)(ctx + 0x1c) & 0x7ffff) >> 0xf);
  CpuFastSet(*gRomData_080F9F78,((*(uint *)(ctx + 0x1c) & 0x7ffff) >> 0xf) * 0x20 + 0x5000000,8
                 );
  return 0;
}

// =============================================================================
// Function: ScriptEngine_LookupJumpTable @ 0x0803B8CC
// =============================================================================
undefined8
ScriptEngine_LookupJumpTable(short *ctx,short opcode,short arg1,short arg2,short arg_5,byte arg_6,
             uint arg_7,uint arg_8,uint arg_9)

{
  uint u_val1;
  int i_val2;
  uint u_val3;
  uint u_val4;
  undefined4 u_val5;
  uint u_val6;
  uint u_val7;
  int i_val8;
  
  *ctx = opcode;
  ctx[1] = arg1;
  ctx[2] = arg2;
  ctx[3] = arg_5;
  *(byte *)(ctx + 4) =
       *(byte *)(ctx + 4) & 0x80 | arg_6 & 3 | (byte)((arg_7 & 0x1f) << 2);
  u_val3 = (arg_7 >> 3 & 3) << 7;
  u_val4 = 0xFFFFFE7F & (ushort)ctx[4];
  ctx[4] = (ushort)u_val4 | (ushort)u_val3;
  u_val1 = 0x3FF;
  u_val6 = ((arg_7 & 7) * 0x40 + 0x14) * 0x200;
  u_val7 = *(uint *)(ctx + 4) & 0xFFF801FF;
  *(uint *)(ctx + 4) = u_val7 | u_val6;
  *(byte *)(ctx + 5) = *(byte *)(ctx + 5) & 0x87 | (byte)((arg_8 & 0xf) << 3);
  ctx[5] = (ushort)0xFFFF807F & ctx[5] | (ushort)((arg_9 & 0xff) << 7);
  *(byte *)((int)ctx + 0xb) = *(byte *)((int)ctx + 0xb) & 0x7f;
  *(byte *)(ctx + 6) = *(byte *)(ctx + 6) & 0x80;
  *(undefined1 *)((int)ctx + 0xd) = 0;
  ctx[8] = 0;
  ctx[9] = 0;
  ctx[10] = 0;
  ctx[0xb] = 0;
  *(undefined4 *)(ctx + 0xc) = gRomData_080E5BB4;
  *(short **)(ctx + 0xe) = ctx + 0x10;
  ctx[0x12] = 0;
  ctx[0x13] = 0;
  *(undefined4 *)(ctx + 0x14) = gRomData_080E5BD8;
  *(short **)(ctx + 0x10) = ctx + 0xe;
  *(short **)(ctx + 0x12) = ctx + 0x10;
  u_val7 = (u_val7 & 0x7ffff | u_val6) >> 9;
  u_val6 = *gRomData_080F9F74;
  u_val5 = *gRomData_080F9F70;
  ctx[0x16] = 0;
  ctx[0x17] = 0;
  ctx[0x18] = 0;
  ctx[0x19] = 0;
  *(undefined4 *)(ctx + 0x1a) = gRomData_080E7768;
  *(undefined4 *)(ctx + 0x1c) = u_val5;
  *(uint *)(ctx + 0x1e) = (((u_val4 & 0x1ff | u_val3) >> 7) * 0x200 + u_val7) * 0x20 + 0x6000000;
  *(char *)(ctx + 0x20) = (char)(u_val6 >> 5);
  *(bool *)((int)ctx + 0x41) = arg_9 == 1;
  *(undefined1 *)(ctx + 0x21) = 0;
  i_val2 = (int)*ctx;
  if (i_val2 < 0) {
    i_val2 = i_val2 + 7;
  }
  i_val8 = (int)ctx[1];
  if (i_val8 < 0) {
    i_val8 = i_val8 + 7;
  }
  ctx[0x22] = 0;
  ctx[0x23] = 0;
  ctx[0x24] = 0;
  ctx[0x25] = 0;
  *(undefined4 *)(ctx + 0x26) = gRomData_080E7758;
  *(int *)(ctx + 0x28) = i_val2 >> 3;
  *(int *)(ctx + 0x2a) = i_val8 >> 3;
  *(uint *)(ctx + 0x2c) = (uint)((ushort)ctx[2] >> 3);
  *(uint *)(ctx + 0x2e) = (uint)((ushort)ctx[3] >> 3);
  *(byte *)(ctx + 0x30) = *(byte *)(ctx + 0x30) & 0xe0 | (byte)(arg_7 & 0x1f);
  ctx[0x30] = (ushort)0xFFFF801F & ctx[0x30] | (ushort)((u_val7 & u_val1) << 5);
  *(uint *)(ctx + 0x30) = *(uint *)(ctx + 0x30) & 0xFFF87FFF | (arg_8 & 0xf) << 0xf;
  return ctx;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803BAAC @ 0x0803BAAC
// =============================================================================
u32 ScriptEngine_Routine_0803BAAC(short *ctx,ushort *opcode,int arg1,int arg2)

{
  byte b_flag1;
  short s_val2;
  ushort u_val3;
  short s_val4;
  byte b_flag5;
  char c_char6;
  int div_result;
  int i_val8;
  uint u_val9;
  ushort *p_uint10;
  uint u_val11;
  
  b_flag1 = *(byte *)((int)ctx + 0xb);
  b_flag5 = (char)ctx[6] << 1 | b_flag1 >> 7;
  if (b_flag5 == 1) {
    if (8 < *(byte *)((int)ctx + 0xd)) {
      *(byte *)((int)ctx + 0xb) = b_flag1 | 0x80;
      *(byte *)(ctx + 6) = *(byte *)(ctx + 6) & 0x80 | 1;
      goto LAB_0803bb18;
    }
    c_char6 = *(byte *)((int)ctx + 0xd) + 1;
  }
  else {
    if ((b_flag5 < 2) || (b_flag5 != 2)) goto LAB_0803bb18;
    if (*(char *)((int)ctx + 0xd) == '\0') {
      *(byte *)((int)ctx + 0xb) = b_flag1 & 0x7f;
      *(byte *)(ctx + 6) = *(byte *)(ctx + 6) & 0x80;
      goto LAB_0803bb18;
    }
    c_char6 = *(char *)((int)ctx + 0xd) + -1;
  }
  *(char *)((int)ctx + 0xd) = c_char6;
LAB_0803bb18:
  if (*(short **)(ctx + 0xe) != ctx + 0x10) {
    _call_via_r2(arg1,ctx + 8,*(undefined4 *)(*(int *)(arg1 + 8) + 0x1c));
  }
  if ((*(byte *)(ctx + 6) & 0x7f) == 0 && -1 < *(char *)((int)ctx + 0xb)) {
    *opcode = *opcode & ~(ushort)(0x100 << (*(byte *)(ctx + 4) & 3));
    if ((int)(-*(uint *)(ctx + 0x16) | *(uint *)(ctx + 0x16)) < 0) {
      _call_via_r2(arg2,ctx + 0x16,*(undefined4 *)(*(int *)(arg2 + 8) + 0x14));
    }
  }
  else {
    b_flag1 = *(byte *)(ctx + 4);
    u_val9 = b_flag1 & 3;
    *opcode = (ushort)(0x100 << u_val9) | 0x2000 | *opcode;
    opcode[u_val9 + 4] =
         (ushort)((((ushort)ctx[4] & 0x1ff) >> 7) << 2) | (ushort)(((b_flag1 & 0x7f) >> 2) << 8) |
         0x40;
    opcode[u_val9 * 2 + 8] = 0;
    s_val2 = ctx[1];
    opcode[u_val9 * 2 + 9] = -s_val2;
    u_val11 = (uint)*(byte *)((int)ctx + 0xd);
    if (u_val11 < 9) {
      u_val3 = ctx[3];
      div_result = math_divsi3(u_val11 * u_val3,9,opcode + u_val9 * 2 + 9,opcode + u_val9 + 4,-s_val2);
      s_val4 = (short)((int)(ctx[1] * 2 + (uint)u_val3) / 2) - (short)(div_result / 2);
      u_val3 = ctx[2];
      i_val8 = math_divsi3(u_val11 * u_val3,9);
      s_val2 = (short)((int)(*ctx * 2 + (uint)u_val3) / 2) - (short)(i_val8 / 2);
      opcode[0x20] = s_val2 * 0x100 | s_val2 + (short)i_val8;
      opcode[0x22] = s_val4 * 0x100 | s_val4 + (short)div_result;
    }
    else {
      opcode[0x20] = *ctx << 8 | *ctx + ctx[2];
      opcode[0x22] = s_val2 << 8 | s_val2 + ctx[3];
    }
    p_uint10 = opcode + 0x24;
    *p_uint10 = 0x3f;
    u_val11 = 1 << (b_flag1 & 3);
    u_val3 = ~(ushort)u_val11 & 0x3f;
    opcode[0x25] = u_val3;
    u_val9 = ((ushort)ctx[5] & 0x7fff) >> 7;
    if (u_val9 == 2) {
      *p_uint10 = *p_uint10 | 0x20;
      *(uint *)(opcode + 0x28) = u_val11 | gRomTable_08083F40;
    }
    if ((u_val9 == 1) && (-1 < (int)(-*(uint *)(ctx + 0x16) | *(uint *)(ctx + 0x16)))) {
      _call_via_r2(arg2,ctx + 0x16,*(undefined4 *)(*(int *)(arg2 + 8) + 0x10),
                      ctx + 0x16,u_val3);
    }
  }
  return (*(byte *)(ctx + 6) & 0x7f) << 1 |
                        (uint)(*(byte *)((int)ctx + 0xb) >> 7);
}

// =============================================================================
// Function: ScriptEngine_Routine_0803BCF8 @ 0x0803BCF8
// =============================================================================
void ScriptEngine_Routine_0803BCF8(int ctx)

{
  
  if ((*(byte *)(ctx + 0xc) & 0x7f) == 0 && -1 < *(char *)(ctx + 0xb)) {
    if ((*(ushort *)(ctx + 10) & 0x7fff) >> 7 != 1) {
      Farm_Routine_08009940(ctx + 0x10,ctx + 0x2c);
    }
    Farm_Routine_08009940(ctx + 0x10,ctx + 0x44);
    *(undefined1 *)(ctx + 0xd) = 0;
  }
  if ((byte)(*(char *)(ctx + 0xc) << 1 | *(byte *)(ctx + 0xb) >> 7) < 3) {
    *(byte *)(ctx + 0xb) = *(byte *)(ctx + 0xb) | 0x80;
    *(byte *)(ctx + 0xc) = *(byte *)(ctx + 0xc) & 0x80;
  }
  return;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803BD60 @ 0x0803BD60
// =============================================================================
void ScriptEngine_Routine_0803BD60(int ctx)

{
  
  ScriptEngine_Routine_0803BCF8();
  *(byte *)(ctx + 0xb) = *(byte *)(ctx + 0xb) | 0x80;
  *(byte *)(ctx + 0xc) = *(byte *)(ctx + 0xc) & 0x80 | 1;
  *(undefined1 *)(ctx + 0xd) = 9;
  return;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803BD88 @ 0x0803BD88
// =============================================================================
void ScriptEngine_Routine_0803BD88(int ctx)

{
  
  if ((*(byte *)(ctx + 0xc) & 0x7f) != 0 || (char)*(byte *)(ctx + 0xb) < '\0') {
    *(byte *)(ctx + 0xb) = *(byte *)(ctx + 0xb) & 0x7f;
    *(byte *)(ctx + 0xc) = *(byte *)(ctx + 0xc) & 0x80 | 1;
  }
  return;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803BDB8 @ 0x0803BDB8
// =============================================================================
void ScriptEngine_Routine_0803BDB8(int ctx)

{
  
  if ((*(byte *)(ctx + 0xc) & 0x7f) != 0 || (char)*(byte *)(ctx + 0xb) < '\0') {
    *(byte *)(ctx + 0xb) = *(byte *)(ctx + 0xb) & 0x7f;
    *(byte *)(ctx + 0xc) = *(byte *)(ctx + 0xc) & 0x80;
  }
  return;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803BDFC @ 0x0803BDFC
// =============================================================================
void ScriptEngine_Routine_0803BDFC(undefined4 *ctx,undefined4 opcode,undefined4 arg1,undefined4 arg2,
                  undefined4 arg_5,undefined4 arg_6,undefined4 arg_7,undefined4 arg_8,
                  undefined4 arg_9)

{
  undefined4 u_val1;
  
  ctx[1] = gRomData_080E7778;
  u_val1 = CppRuntime_OperatorNewArray(100);
  u_val1 = ScriptEngine_LookupJumpTable(u_val1,opcode,arg1,arg2,arg_5,arg_6,arg_7,arg_8,arg_9);
  *ctx = u_val1;
  return ctx;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803BE50 @ 0x0803BE50
// =============================================================================
void ScriptEngine_Routine_0803BE50(int *ctx,uint opcode)

{
  int i_val1;
  
  ctx[1] = gRomData_080E7778;
  i_val1 = *ctx;
  if (i_val1 != 0) {
    Farm_Routine_080098AC(i_val1 + 0x44,2);
    Farm_Routine_080098AC(i_val1 + 0x2c,2);
    Farm_Routine_080098DC(i_val1 + 0x10,2);
    CppRuntime_FreeMemory(i_val1);
  }
  if ((opcode & 1) != 0) {
    CppRuntime_FreeMemory(ctx);
  }
  return;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803BEB0 @ 0x0803BEB0
// =============================================================================
void ScriptEngine_Routine_0803BEB0(undefined4 *ctx)

{
  ScriptEngine_Routine_0803BAAC(*ctx);
  return;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803BEBC @ 0x0803BEBC
// =============================================================================
void ScriptEngine_Routine_0803BEBC(undefined4 *ctx)

{
  
  ScriptEngine_Routine_0803BCF8(*ctx);
  return;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803BEC8 @ 0x0803BEC8
// =============================================================================
void ScriptEngine_Routine_0803BEC8(undefined4 *ctx)

{
  
  ScriptEngine_Routine_0803BD60(*ctx);
  return;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803BED4 @ 0x0803BED4
// =============================================================================
void ScriptEngine_Routine_0803BED4(undefined4 *ctx)

{
  
  ScriptEngine_Routine_0803BD88(*ctx);
  return;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803BEE0 @ 0x0803BEE0
// =============================================================================
void ScriptEngine_Routine_0803BEE0(undefined4 *ctx)

{
  
  ScriptEngine_Routine_0803BDB8(*ctx);
  return;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803BEFC @ 0x0803BEFC
// =============================================================================
void ScriptEngine_Routine_0803BEFC(undefined4 *ctx)

{
  
  ScriptEngine_Routine_0803BDE4(*ctx);
  return;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803BF08 @ 0x0803BF08
// =============================================================================
void ScriptEngine_Routine_0803BF08(undefined4 *ctx)

{
  
  ScriptEngine_Routine_0803BDEC(*ctx);
  return;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803BF14 @ 0x0803BF14
// =============================================================================
void ScriptEngine_Routine_0803BF14(undefined4 *ctx,undefined4 opcode,undefined4 arg1,undefined4 arg2,
                  undefined4 arg_5,byte arg_6,uint arg_7,uint arg_8)

{
  
  ctx[6] = arg_5;
  *ctx = 0;
  ctx[1] = 0;
  ctx[2] = gRomData_080E7758;
  ctx[3] = opcode;
  ctx[4] = arg1;
  ctx[5] = arg2;
  *(byte *)(ctx + 7) = *(byte *)(ctx + 7) & 0xe0 | arg_6 & 0x1f;
  *(ushort *)(ctx + 7) =
       (ushort)0xFFFF801F & *(ushort *)(ctx + 7) | (ushort)((arg_7 & 0x3FF) << 5);
  ctx[7] = ctx[7] & 0xFFF87FFF | (arg_8 & 0xf) << 0xf;
  return;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803BF78 @ 0x0803BF78
// =============================================================================
undefined8
ScriptEngine_Routine_0803BF78(int ctx,undefined4 opcode,undefined4 arg1,undefined4 arg2,
             undefined4 arg_5,undefined1 arg_6)

{
  undefined4 u_val1;
  
  ScriptEngine_Routine_0803BDFC(ctx,0,0x88,0xf0,0x18,opcode,arg1,arg2,arg_5);
  *(undefined4 *)(ctx + 4) = gRomData_080E77A4;
  CppRuntime_OperatorNewArray(0x41C);
  u_val1 = VTable_Routine_080E0A94();
  *(undefined4 *)(ctx + 8) = u_val1;
  *(undefined1 *)(ctx + 0xc) = arg_6;
  *(undefined1 *)(ctx + 0xd) = 0;
  *(undefined1 *)(ctx + 0xe) = 1;
  *(undefined1 *)(ctx + 0xf) = 1;
  return ctx;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803BFC8 @ 0x0803BFC8
// =============================================================================
void ScriptEngine_Routine_0803BFC8(int ctx,undefined4 opcode)

{
  
  *(undefined4 *)(ctx + 4) = gRomData_080E77A4;
  if (*(int *)(ctx + 8) != 0) {
    VTable_Routine_080E0C38(*(int *)(ctx + 8),3);
  }
  ScriptEngine_Routine_0803BE50(ctx,opcode);
  return;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803BFF0 @ 0x0803BFF0
// =============================================================================
void ScriptEngine_Routine_0803BFF0(void)

{
  ScriptEngine_Routine_0803C028();
  return;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803C00C @ 0x0803C00C
// =============================================================================
void ScriptEngine_Routine_0803C00C(void)

{
  ScriptEngine_Routine_0803C028();
  return;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803C028 @ 0x0803C028
// =============================================================================
undefined8
ScriptEngine_Routine_0803C028(int ctx,int opcode,byte *arg1,undefined4 arg2,int arg_5,
             undefined4 arg_6,int arg_7)

{
  byte b_flag1;
  ushort u_val2;
  uint *p_uint3;
  char c_char4;
  int i_val5;
  int i_val6;
  uint u_val7;
  uint u_val8;
  int i_val9;
  uint loop_i;
  int pos_x;
  int *p_int12;
  uint *apuStack_90 [2];
  int stack_val_88;
  ushort stack_val_84;
  int stack_val_80;
  ushort stack_val_7c;
  uint stack_val_70;
  uint stack_val_6c;
  uint stack_val_68;
  uint stack_val_64;
  undefined4 stack_val_60;
  undefined4 stack_val_5c;
  uint stack_buf_58 [2];
  byte *pbStack_50;
  int stack_val_4c;
  uint stack_val_48;
  int stack_val_44;
  uint stack_val_40;
  int stack_val_3c;
  uint stack_val_38;
  uint *puStack_34;
  uint *puStack_30;
  uint stack_val_2c;
  int stack_val_28;
  uint stack_val_24;
  
  pbStack_50 = arg1;
  stack_val_4c = ScriptEngine_Routine_0803BEB0(ctx,arg2,arg_5,arg_6);
  if (((stack_val_4c < 0) || (stack_val_4c < 3)) || (stack_val_4c != 3)) goto LAB_0803c506;
  stack_val_48 = 0;
  if (*(char *)(ctx + 0xf) != '\0') {
    u_val2 = *(ushort *)(opcode + 8);
    if ((u_val2 & 0x3f) >> 5 == 0 && (u_val2 & 0x1f) >> 4 == 0) {
      if (((u_val2 & 1) != 0) && (arg_7 != 0)) {
        HW_Routine_08008B6C(arg_7,0xc5);
      }
    }
    else {
      if ((u_val2 & 0x20) == 0) {
        if ((u_val2 & 0x10) != 0) {
          if (*(char *)(ctx + 0xc) != '\x06') {
            c_char4 = *(char *)(ctx + 0xc) + '\x01';
            goto LAB_0803c0a4;
          }
          *(undefined1 *)(ctx + 0xc) = 0;
        }
      }
      else {
        if (*(char *)(ctx + 0xc) == '\0') {
          c_char4 = '\x06';
        }
        else {
          c_char4 = *(char *)(ctx + 0xc) + -1;
        }
LAB_0803c0a4:
        *(char *)(ctx + 0xc) = c_char4;
      }
      if (arg_7 != 0) {
        HW_Routine_08008B6C(arg_7,0xcb);
      }
      stack_val_48 = *(uint *)((uint)*(byte *)(ctx + 0xc) * 4 + gRomData_080F1A34);
      *(undefined1 *)(ctx + 0xe) = 0x14;
    }
  }
  if (*(char *)(ctx + 0xd) != '\0') {
    pos_x = *(int *)(ctx + 8);
    i_val5 = *(int *)(pos_x + 0x50);
    _call_via_r3(apuStack_90,*(int **)(i_val5 + 0x20),
                    *(undefined2 *)(*(int *)(i_val5 + 0x24) + (uint)*(ushort *)(i_val5 + 0x2c) * 4),
                    *(undefined4 *)(**(int **)(i_val5 + 0x20) + 0x10));
    i_val5 = stack_val_80;
    i_val6 = HW_Routine_080074C0(pos_x + 0x30,*(undefined4 *)(pos_x + 0x34));
    loop_i = 0;
    if (stack_val_80 != 0) {
      loop_i = (uint)stack_val_7c;
    }
    i_val6 = i_val6 * 0x20 + 0x05000200;
    *(int *)(pos_x + 0x44) = i_val5;
    *(int *)(pos_x + 0x48) = i_val6;
    *(uint *)(pos_x + 0x4c) = loop_i;
    _call_via_r2(arg_5,pos_x + 0x38,*(undefined4 *)(*(int *)(arg_5 + 8) + 0x10));
    stack_val_48 = *(uint *)((uint)*(byte *)(ctx + 0xc) * 4 + gRomData_080F1A34);
    *(undefined1 *)(ctx + 0xd) = 0;
  }
  c_char4 = *(char *)(ctx + 0xe) + -1;
  *(char *)(ctx + 0xe) = c_char4;
  if (c_char4 == '\0') {
    *(undefined1 *)(ctx + 0xe) = 0x28;
  }
  if (*(byte *)(ctx + 0xe) < 0x14) {
    i_val5 = *(int *)(ctx + 8);
    b_flag1 = *(byte *)(ctx + 0xc);
    i_val6 = *(int *)(i_val5 + 0x50);
    loop_i = HW_Routine_080074C0(i_val5 + 0x30,*(undefined4 *)(i_val5 + 0x34));
    u_val7 = Animal_Routine_0805E8F0(i_val6 + 0x20);
    _call_via_r3(apuStack_90,*(int **)(i_val6 + 0x20),
                    *(undefined2 *)(*(int *)(i_val6 + 0x24) + (uint)*(ushort *)(i_val6 + 0x2c) * 4),
                    *(undefined4 *)(**(int **)(i_val6 + 0x20) + 0x10));
    i_val5 = stack_val_88;
    if ((u_val7 & 3) >> 1 != 0) {
      pos_x = GBA_Vram_AllocateTileBlock(i_val6,*(undefined4 *)(i_val6 + 4));
      u_val7 = 0;
      if (stack_val_88 != 0) {
        u_val7 = (uint)stack_val_84;
      }
      pos_x = pos_x * 0x20 + 0x06010000;
      *(int *)(i_val6 + 0x14) = i_val5;
      *(int *)(i_val6 + 0x18) = pos_x;
      *(uint *)(i_val6 + 0x1c) = u_val7;
      _call_via_r2(arg_5,i_val6 + 8,*(undefined4 *)(*(int *)(arg_5 + 8) + 0x10));
    }
    u_val7 = 0xFE00FFFF & *apuStack_90[0];
    stack_val_70 = 0xFFFFFF00 &
                (u_val7 | (((*apuStack_90[0] & 0x1ffffff) >> 0x10) + (uint)b_flag1 * 0x10 + 0x10 &
                         0x1FF) << 0x10) | (u_val7 & 0xff) + 0x96 & 0xff;
    stack_val_6c = apuStack_90[0][1] & 0xFFFF0FFF | (loop_i & 0xf) << 0xc;
    loop_i = GBA_Vram_AllocateTileBlock(i_val6,*(undefined4 *)(i_val6 + 4));
    stack_val_6c = stack_val_6c & 0xFFFFFC00 | loop_i & 0x3ff;
    stack_val_70 = stack_val_70 | 0x1000;
    b_flag1 = *pbStack_50;
    if (b_flag1 < 0x80) {
      *(uint *)(pbStack_50 + (uint)b_flag1 * 8 + 4) = stack_val_70;
      *(undefined2 *)((int)(pbStack_50 + (uint)b_flag1 * 8 + 4) + 4) = (undefined2)stack_val_6c;
      *pbStack_50 = b_flag1 + 1;
    }
  }
  i_val5 = *(int *)(ctx + 8);
  loop_i = 0;
  puStack_34 = &stack_val_68;
  stack_val_2c = -stack_val_48;
  puStack_30 = stack_buf_58;
  stack_val_28 = 0x10;
  do {
    pos_x = *(int *)(loop_i * 4 + i_val5 + 0x54);
    u_val7 = HW_Routine_080074C0(i_val5 + 0x30,*(undefined4 *)(i_val5 + 0x34));
    u_val8 = Animal_Routine_0805E8F0(pos_x + 0x20);
    _call_via_r3(apuStack_90,*(int **)(pos_x + 0x20),
                    *(undefined2 *)(*(int *)(pos_x + 0x24) + (uint)*(ushort *)(pos_x + 0x2c) * 4),
                    *(undefined4 *)(**(int **)(pos_x + 0x20) + 0x10));
    i_val6 = stack_val_88;
    if ((u_val8 & 3) >> 1 != 0) {
      i_val9 = GBA_Vram_AllocateTileBlock(pos_x,*(undefined4 *)(pos_x + 4));
      u_val8 = 0;
      if (stack_val_88 != 0) {
        u_val8 = (uint)stack_val_84;
      }
      i_val9 = i_val9 * 0x20 + 0x06010000;
      *(int *)(pos_x + 0x14) = i_val6;
      *(int *)(pos_x + 0x18) = i_val9;
      *(uint *)(pos_x + 0x1c) = u_val8;
      _call_via_r2(arg_5,pos_x + 8,*(undefined4 *)(*(int *)(arg_5 + 8) + 0x10));
    }
    stack_val_68 = 0xFFFFFF00 &
                (0xFE00FFFF & *apuStack_90[0] |
                (((*apuStack_90[0] & 0x1ffffff) >> 0x10) + stack_val_28 & 0x1FF) << 0x10) |
                (byte)*puStack_34 + 0x96 & 0xff;
    stack_val_64 = apuStack_90[0][1] & 0xFFFF0FFF | (u_val7 & 0xf) << 0xc;
    u_val7 = GBA_Vram_AllocateTileBlock(pos_x,*(undefined4 *)(pos_x + 4));
    stack_val_64 = stack_val_64 & 0xFFFFFC00 | u_val7 & 0x3ff;
    stack_val_68 = stack_val_68 | 0x1000;
    b_flag1 = *pbStack_50;
    if (b_flag1 < 0x80) {
      *(uint *)(pbStack_50 + (uint)b_flag1 * 8 + 4) = stack_val_68;
      *(undefined2 *)((int)(pbStack_50 + (uint)b_flag1 * 8 + 4) + 4) = (undefined2)stack_val_64;
      *pbStack_50 = b_flag1 + 1;
    }
    stack_val_28 = stack_val_28 + 0x10;
    loop_i = loop_i + 1;
  } while (loop_i < 7);
  i_val5 = *(int *)(ctx + 8);
  if (stack_val_48 != 0) {
    stack_val_60 = 0x2000c;
    ScriptEngine_Routine_0804E7A0(0x2000c,i_val5 + 0x74,0);
    stack_val_5c = 0x2000c;
    ScriptEngine_Routine_0804E8F0(0x2000c,i_val5 + 0x74,0,0,stack_val_48);
  }
  loop_i = HW_Routine_080074C0(i_val5 + 0x30,*(undefined4 *)(i_val5 + 0x34));
  stack_val_44 = i_val5 + 0x70;
  stack_val_40 = (stack_val_2c | stack_val_48) >> 0x1f;
  stack_buf_58[1] = 0;
  puStack_30[1] = puStack_30[1] & 0xFFFF0FFF | (loop_i & 0xf) << 0xc;
  stack_buf_58[0] = (0xFFFF3FFF & 0x80000000 | 0x4000) & 0xFFFFFF00 | 0x108e;
  stack_val_3c = i_val5 + 0x74;
  loop_i = 0;
  do {
    i_val5 = loop_i * 8 + stack_val_44;
    u_val7 = GBA_Vram_AllocateTileBlock(i_val5 + 0x304,*(undefined4 *)(i_val5 + 0x308));
    stack_val_38 = loop_i + 1;
    if (stack_val_40 != 0) {
      u_val8 = 0;
      p_int12 = (int *)(loop_i * 0x30 + stack_val_44 + 0x328);
      pos_x = u_val7 * 0x20 + 0x06010000;
      i_val6 = loop_i * 0x80 + stack_val_3c;
      i_val5 = loop_i * 0x30 + stack_val_44 + 0x31c;
      do {
        *p_int12 = i_val6;
        p_int12[1] = pos_x;
        p_int12[2] = 0x80;
        stack_val_24 = u_val8;
        _call_via_r2(arg_5,i_val5,*(undefined4 *)(*(int *)(arg_5 + 8) + 0x10));
        p_int12 = p_int12 + 6;
        pos_x = pos_x + 0x80;
        i_val6 = i_val6 + 0x180;
        i_val5 = i_val5 + 0x18;
        u_val8 = stack_val_24 + 1;
      } while (u_val8 < 2);
    }
    p_uint3 = puStack_30;
    puStack_30[1] = puStack_30[1] & 0xFFFFFC00 | u_val7 & 0x3ff;
    stack_buf_58[0] = stack_buf_58[0] & 0xFE00FFFF | (loop_i * 0x20 + 0x88 & 0x1FF) << 0x10;
    b_flag1 = *pbStack_50;
    if (b_flag1 < 0x80) {
      *(uint *)(pbStack_50 + (uint)b_flag1 * 8 + 4) = stack_buf_58[0];
      *(short *)((int)(pbStack_50 + (uint)b_flag1 * 8 + 4) + 4) = (short)p_uint3[1];
      *pbStack_50 = b_flag1 + 1;
    }
    loop_i = stack_val_38;
  } while (stack_val_38 < 3);
LAB_0803c506:
  return stack_val_4c;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803C518 @ 0x0803C518
// =============================================================================
void ScriptEngine_Routine_0803C518(int ctx)

{
  
  ScriptEngine_Routine_0803BEBC();
  *(undefined1 *)(ctx + 0xd) = 1;
  *(undefined1 *)(ctx + 0xf) = 1;
  return;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803C52C @ 0x0803C52C
// =============================================================================
void ScriptEngine_Routine_0803C52C(int ctx)

{
  
  ScriptEngine_Routine_0803BEC8();
  *(undefined1 *)(ctx + 0xd) = 1;
  *(undefined1 *)(ctx + 0xf) = 1;
  return;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803C54C @ 0x0803C54C
// =============================================================================
undefined8
ScriptEngine_Routine_0803C54C(int ctx,undefined4 opcode,undefined4 arg1,undefined4 arg2,
             undefined4 arg_5)

{
  
  ScriptEngine_Routine_0803BDFC(ctx,0x80,0x88,0x70,0x18,opcode,arg1,arg2,arg_5);
  *(undefined4 *)(ctx + 4) = gRomData_080E77E0;
  ScriptEngine_Routine_0803C5B0(ctx + 8);
  return ctx;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803C588 @ 0x0803C588
// =============================================================================
void ScriptEngine_Routine_0803C588(int ctx,undefined4 opcode)

{
  
  *(undefined4 *)(ctx + 4) = gRomData_080E77E0;
  ScriptEngine_Routine_0803C7A0(ctx + 8,2);
  ScriptEngine_Routine_0803BE50(ctx,opcode);
  return;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803C7A0 @ 0x0803C7A0
// =============================================================================
void ScriptEngine_Routine_0803C7A0(int *ctx,uint opcode)

{
  
  if (*ctx != 0) {
    VTable_Routine_080E0D70(*ctx,3);
  }
  if ((opcode & 1) != 0) {
    CppRuntime_FreeMemory(ctx);
  }
  return;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803C7C8 @ 0x0803C7C8
// =============================================================================
void ScriptEngine_Routine_0803C7C8(undefined4 *ctx,int opcode,int arg1,byte *arg2,int arg_5)

{
  byte b_flag1;
  ushort u_val2;
  uint u_val3;
  int i_val4;
  uint u_val5;
  uint u_val6;
  int i_val7;
  int *p_int8;
  undefined1 stack_buf_8c [8];
  int stack_val_84;
  int stack_val_7c;
  uint stack_val_6c;
  uint stack_val_68;
  uint stack_val_64;
  uint stack_val_60;
  undefined2 *apuStack_5c [2];
  uint stack_val_54;
  uint stack_val_50;
  undefined2 *apuStack_4c [2];
  uint stack_val_44;
  undefined4 stack_val_40;
  undefined2 *apuStack_3c [2];
  uint stack_val_34;
  uint stack_val_30;
  uint stack_val_2c;
  uint stack_val_28;
  uint stack_val_24;
  
  p_int8 = (int *)*ctx;
  if ((-p_int8[0x19] | p_int8[0x19]) < 0) {
    stack_val_34 = HW_Routine_080074C0(p_int8 + 0x18);
    if (*(byte *)(p_int8 + 0x20) != 0) {
      u_val3 = -p_int8[0x1a] | p_int8[0x1a];
      if (-1 < (int)u_val3) {
        Animal_Routine_0805E790(stack_buf_8c,p_int8,0);
        i_val4 = stack_val_34 * 0x20 + 0x05000200;
        p_int8[0x1d] = stack_val_7c;
        p_int8[0x1e] = i_val4;
        p_int8[0x1f] = 0x20;
        _call_via_r2(arg_5,p_int8 + 0x1a,*(undefined4 *)(*(int *)(arg_5 + 8) + 0x10));
        *(byte *)(p_int8 + 0x20) = (byte)(u_val3 >> 0x1f);
      }
    }
    stack_val_30 = opcode + 4;
    stack_val_2c = arg1 + 4;
    if ((-p_int8[0x62] | p_int8[0x62]) < 0) {
      u_val3 = GBA_Vram_AllocateTileBlock(p_int8 + 0x61);
      if (*(byte *)(p_int8 + 99) != 0) {
        u_val5 = p_int8[100];
        u_val5 = -u_val5 | u_val5;
        if (-1 < (int)u_val5) {
          i_val4 = u_val3 * 0x20 + 0x06010000;
          p_int8[0x67] = (int)(p_int8 + 0x21);
          p_int8[0x68] = i_val4;
          p_int8[0x69] = 0x100;
          _call_via_r2(arg_5,p_int8 + 100,*(undefined4 *)(*(int *)(arg_5 + 8) + 0x10));
          *(byte *)(p_int8 + 99) = (byte)(u_val5 >> 0x1f);
        }
      }
      stack_val_6c = (((0xFFFF3FFF & 0x1000 | 0x4000) & 0x3FFFFFFF | 0x80000000) & 0xFFFFFF00
                  | stack_val_2c & 0xff) & 0xFE00FFFF | (0x1FF & stack_val_30) << 0x10;
      stack_val_68 = u_val3 & 0x3ff & 0xFFFF0FFF | (stack_val_34 & 0xf) << 0xc;
      b_flag1 = *arg2;
      if (b_flag1 < 0x80) {
        *(uint *)(arg2 + (uint)b_flag1 * 8 + 4) = stack_val_6c;
        *(undefined2 *)((int)(arg2 + (uint)b_flag1 * 8 + 4) + 4) = (undefined2)stack_val_68;
        *arg2 = b_flag1 + 1;
      }
    }
    u_val3 = stack_val_30 + 0x20;
    if ((-p_int8[0xab] | p_int8[0xab]) < 0) {
      u_val5 = GBA_Vram_AllocateTileBlock(p_int8 + 0xaa);
      if (*(byte *)(p_int8 + 0xac) != 0) {
        u_val6 = p_int8[0xad];
        u_val6 = -u_val6 | u_val6;
        if (-1 < (int)u_val6) {
          i_val4 = u_val5 * 0x20 + 0x06010000;
          p_int8[0xb0] = (int)(p_int8 + 0x6a);
          p_int8[0xb1] = i_val4;
          p_int8[0xb2] = 0x100;
          _call_via_r2(arg_5,p_int8 + 0xad,*(undefined4 *)(*(int *)(arg_5 + 8) + 0x10));
          *(byte *)(p_int8 + 0xac) = (byte)(u_val6 >> 0x1f);
        }
      }
      stack_val_64 = (((0xFFFF3FFF & 0x1000 | 0x4000) & 0x3FFFFFFF | 0x80000000) & 0xFFFFFF00
                  | stack_val_2c & 0xff) & 0xFE00FFFF | (u_val3 & 0x1FF) << 0x10;
      stack_val_60 = u_val5 & 0x3ff & 0xFFFF0FFF | (stack_val_34 & 0xf) << 0xc;
      b_flag1 = *arg2;
      if (b_flag1 < 0x80) {
        *(uint *)(arg2 + (uint)b_flag1 * 8 + 4) = stack_val_64;
        *(undefined2 *)((int)(arg2 + (uint)b_flag1 * 8 + 4) + 4) = (undefined2)stack_val_60;
        *arg2 = b_flag1 + 1;
      }
    }
    stack_val_24 = 0;
    stack_val_28 = 0x40001000;
    if ((-p_int8[0xb5] | p_int8[0xb5]) < 0) {
      u_val3 = GBA_Vram_AllocateTileBlock(p_int8 + 0xb4);
      if (*(byte *)(p_int8 + 0xbc) != 0) {
        u_val5 = p_int8[0xb6];
        u_val5 = -u_val5 | u_val5;
        if (-1 < (int)u_val5) {
          i_val4 = *p_int8;
          _call_via_r3(apuStack_5c,p_int8,(char)p_int8[0xb3],*(undefined4 *)(i_val4 + 0xc));
          _call_via_r3(stack_buf_8c,p_int8,*apuStack_5c[0],*(undefined4 *)(i_val4 + 0x10));
          i_val4 = u_val3 * 0x20 + 0x06010000;
          p_int8[0xb9] = stack_val_84;
          p_int8[0xba] = i_val4;
          p_int8[0xbb] = 0x80;
          _call_via_r2(arg_5,p_int8 + 0xb6,*(undefined4 *)(*(int *)(arg_5 + 8) + 0x10));
          *(byte *)(p_int8 + 0xbc) = (byte)(u_val5 >> 0x1f);
        }
      }
      stack_val_54 = (stack_val_28 & 0xFFFFFF00 | stack_val_2c & 0xff) & 0xFE00FFFF |
                  (stack_val_30 + 0x40 & 0x1FF) << 0x10;
      stack_val_50 = (stack_val_24 & 0xFFFFFC00 | u_val3 & 0x3ff) & 0xFFFF0FFF |
                  (stack_val_34 & 0xf) << 0xc;
      b_flag1 = *arg2;
      if (b_flag1 < 0x80) {
        *(uint *)(arg2 + (uint)b_flag1 * 8 + 4) = stack_val_54;
        *(undefined2 *)((int)(arg2 + (uint)b_flag1 * 8 + 4) + 4) = (undefined2)stack_val_50;
        *arg2 = b_flag1 + 1;
      }
    }
    if (((-p_int8[0xc6] | p_int8[0xc6]) < 0) && ((-p_int8[0xbe] | p_int8[0xbe]) < 0)) {
      stack_val_40 = stack_val_24;
      stack_val_44 = (stack_val_28 & 0xFFFFFF00 | stack_val_2c & 0xff) & 0xFE00FFFF |
                  (stack_val_30 + 0x58 & 0x1FF) << 0x10;
      if (*(char *)((int)p_int8 + 0x2F1) != '\0') {
        u_val3 = GBA_Vram_AllocateTileBlock(p_int8 + 0xc5,p_int8[0xc6]);
        u_val5 = HW_Routine_080074C0(p_int8 + 0xbd,p_int8[0xbe]);
        if ((char)p_int8[0xcd] != '\0') {
          i_val4 = p_int8[0xc];
          _call_via_r3(apuStack_4c,p_int8 + 0xc,*(undefined2 *)((int)p_int8 + 0x2F2),
                          *(undefined4 *)(i_val4 + 0xc));
          _call_via_r3(stack_buf_8c,p_int8 + 0xc,*apuStack_4c[0],*(undefined4 *)(i_val4 + 0x10));
          u_val6 = p_int8[199];
          if (-1 < (int)(-u_val6 | u_val6)) {
            i_val4 = u_val3 * 0x20 + 0x06010000;
            p_int8[0xca] = stack_val_84;
            p_int8[0xcb] = i_val4;
            p_int8[0xcc] = 0x80;
            _call_via_r2(arg_5,p_int8 + 199,*(undefined4 *)(*(int *)(arg_5 + 8) + 0x10));
          }
          u_val6 = p_int8[0xbf];
          if (-1 < (int)(-u_val6 | u_val6)) {
            i_val4 = u_val5 * 0x20 + 0x05000200;
            p_int8[0xc2] = stack_val_7c;
            p_int8[0xc3] = i_val4;
            p_int8[0xc4] = 0x20;
            _call_via_r2(arg_5,p_int8 + 0xbf,*(undefined4 *)(*(int *)(arg_5 + 8) + 0x10));
          }
          *(char *)(p_int8 + 0xcd) = '\0';
        }
        stack_val_40 = (stack_val_40 & 0xFFFFFC00 | u_val3 & 0x3ff) & 0xFFFF0FFF |
                    (u_val5 & 0xf) << 0xc;
        b_flag1 = *arg2;
        if (b_flag1 < 0x80) {
          *(uint *)(arg2 + (uint)b_flag1 * 8 + 4) = stack_val_44;
          *(ushort *)((int)(arg2 + (uint)b_flag1 * 8 + 4) + 4) = (ushort)stack_val_40;
          *arg2 = b_flag1 + 1;
        }
      }
      if ((-p_int8[0xcf] | p_int8[0xcf]) < 0) {
        i_val4 = GBA_Vram_AllocateTileBlock(p_int8 + 0xce);
        if (*(byte *)(p_int8 + 0xd6) != 0) {
          u_val3 = p_int8[0xd0];
          u_val3 = -u_val3 | u_val3;
          if (-1 < (int)u_val3) {
            i_val7 = *p_int8;
            _call_via_r3(apuStack_3c,p_int8,5,*(undefined4 *)(i_val7 + 0xc));
            _call_via_r3(stack_buf_8c,p_int8,*apuStack_3c[0],*(undefined4 *)(i_val7 + 0x10));
            i_val7 = i_val4 * 0x20 + 0x06010000;
            p_int8[0xd3] = stack_val_84;
            p_int8[0xd4] = i_val7;
            p_int8[0xd5] = 0x80;
            _call_via_r2(arg_5,p_int8 + 0xd0,*(undefined4 *)(*(int *)(arg_5 + 8) + 0x10));
            *(byte *)(p_int8 + 0xd6) = (byte)(u_val3 >> 0x1f);
          }
        }
        u_val2 = (ushort)0xFFFFFC00 & (ushort)stack_val_40 | (ushort)i_val4 & (ushort)0x3FF;
        stack_val_40._1_1_ = (byte)(u_val2 >> 8);
        stack_val_40._0_2_ = CONCAT11(stack_val_40._1_1_ & 0xf | (byte)(stack_val_34 << 4),(char)u_val2);
        b_flag1 = *arg2;
        if (b_flag1 < 0x80) {
          *(uint *)(arg2 + (uint)b_flag1 * 8 + 4) = stack_val_44;
          *(ushort *)((int)(arg2 + (uint)b_flag1 * 8 + 4) + 4) = (ushort)stack_val_40;
          *arg2 = b_flag1 + 1;
        }
      }
    }
  }
  return;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803D080 @ 0x0803D080
// =============================================================================
void ScriptEngine_Routine_0803D080(int *ctx,int opcode)

{
  int i_val1;
  int i_val2;
  int i_val3;
  undefined4 stack_val_1c;
  
  i_val1 = gRomGfx_0875A440;
  i_val3 = *ctx;
  if (opcode == 1) {
    stack_val_1c = 0xd;
    i_val2 = 0xe;
    goto LAB_0803d0b4;
  }
  if (1 < opcode) {
    if (opcode == 2) {
      stack_val_1c = 0xf;
      i_val2 = 0x10;
      goto LAB_0803d0b4;
    }
    if (opcode == 3) {
      stack_val_1c = 0x11;
      i_val2 = 0x12;
      goto LAB_0803d0b4;
    }
  }
  stack_val_1c = 0xb;
  i_val2 = 0xc;
LAB_0803d0b4:
  gba_memcpy(i_val3 + 0x84,stack_val_1c * 0x20 + gRomGfx_0875A440,0x20);
  *(undefined1 *)(i_val3 + 0x18c) = 1;
  gba_memcpy(i_val3 + 0xa4,i_val2 * 0x20 + i_val1,0x20);
  *(undefined1 *)(i_val3 + 0x18c) = 1;
  return;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803D240 @ 0x0803D240
// =============================================================================
void ScriptEngine_Routine_0803D240(int *ctx,uint opcode)

{
  int i_val1;
  int div_result;
  undefined1 *p_uint3;
  undefined1 *p_uint4;
  uint u_val5;
  int i_val6;
  undefined1 stack_buf_34 [32];
  
  p_uint4 = stack_buf_34;
  i_val6 = *ctx;
  div_result = 0x1e;
  if (opcode < 0xc) {
    div_result = 0x1c;
  }
  gba_memcpy(i_val6 + 0x104,div_result * 0x20 + gRomGfx_0875A440,0x20);
  p_uint3 = (undefined1 *)(i_val6 + 0x18c);
  *p_uint3 = 1;
  u_val5 = 0xc;
  if ((opcode != 0xc) && (u_val5 = opcode, 0xb < opcode)) {
    u_val5 = opcode - 0xc;
  }
  div_result = math_divsi3(u_val5,10);
  i_val1 = math_modsi3(u_val5,10);
  if (div_result < 1) {
    gba_memset(stack_buf_34,0,0x20);
  }
  else {
    p_uint4 = (undefined1 *)(div_result * 0x20 + gRomGfx_0875A440);
  }
  gba_memcpy(i_val6 + 0x144,p_uint4,0x20);
  *p_uint3 = 1;
  gba_memcpy(i_val6 + 0x164,i_val1 * 0x20 + gRomGfx_0875A440,0x20);
  *p_uint3 = 1;
  return;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803D2E8 @ 0x0803D2E8
// =============================================================================
void ScriptEngine_Routine_0803D2E8(int *ctx,char opcode)

{
  int i_val1;
  undefined1 temp_buf_28 [32];
  
  i_val1 = *ctx;
  if (opcode == '\0') {
    gba_memset(temp_buf_28,0,0x20);
    gba_memcpy(i_val1 + 0x228,temp_buf_28,0x20);
  }
  else {
    gba_memcpy(i_val1 + 0x228,gRomGfx_0875A440 + 0x140,0x20);
  }
  *(undefined1 *)(i_val1 + 0x2b0) = 1;
  return;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803D340 @ 0x0803D340
// =============================================================================
void ScriptEngine_Routine_0803D340(int *ctx,undefined4 opcode)

{
  int i_val1;
  int div_result;
  int i_val3;
  int i_val4;
  
  i_val4 = *ctx;
  div_result = math_divsi3(opcode,10);
  i_val3 = math_modsi3(opcode,10);
  i_val1 = _LAB_0803d39c;
  gba_memcpy(i_val4 + 0x248,div_result * 0x20 + _LAB_0803d39c,0x20);
  *(undefined1 *)(i_val4 + 0x2b0) = 1;
  gba_memcpy(i_val4 + 0x268,i_val3 * 0x20 + i_val1,0x20);
  *(undefined1 *)(i_val4 + 0x2b0) = 1;
  return;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803D3A0 @ 0x0803D3A0
// =============================================================================
u32 ScriptEngine_Routine_0803D3A0(int *ctx,undefined *opcode)

{
  char c_char1;
  undefined *p_uint2;
  int i_val3;
  undefined4 saved_r4;
  uint saved_r5;
  undefined *saved_r6;
  int saved_r7;
  int saved_r8;
  undefined4 *p_uint4;
  
  while( true ) {
    p_uint4 = (undefined4 *)((int)register0x00000054 + -4);
    *p_uint4 = caller_pc;
    i_val3 = *ctx;
    c_char1 = *(char *)(i_val3 + 0x2cc);
    if (&UndefinedInstruction < opcode) break;
    ctx = *(int **)(PTR_case_0803D3C0_0803d3bc + (int)opcode * 4);
    switch((uint)ctx & 0xfffffffe) {
    case 0x803d3c0:
      if (!CARRY4((int)opcode * 4,(uint)PTR_case_0803D3C0_0803d3bc)) {
        gba_memcpy(ctx,saved_r4,0x20);
        ctx = (int *)0x02b0;
code_r0x0803d378:
        saved_r6 = (undefined *)(saved_r7 + (int)ctx);
        saved_r4 = 1;
        *saved_r6 = 1;
        saved_r5 = saved_r5 * 0x20 + saved_r8;
        p_uint2 = 0x009a;
code_r0x0803d384:
        gba_memcpy(saved_r7 + (int)p_uint2 * 4,saved_r5,0x20);
code_r0x0803d390:
        *saved_r6 = (char)saved_r4;
        return *(undefined4 *)((int)register0x00000054 + 0x10);
      }
      if (-1 < (int)ctx) goto code_r0x0803d378;
      p_uint2 = PTR_case_0803D3C0_0803d3bc;
      if (-1 < (int)ctx) goto code_r0x0803d384;
      if (-1 < (int)ctx) goto code_r0x0803d390;
      if ((int)ctx < 0) goto case_0803D3D4;
      saved_r4 = 0x803d4a0;
      saved_r5 = (uint)saved_r6 >> 1;
      opcode = PTR_case_0803D3C0_0803d3bc;
      register0x00000054 = (BADSPACEBASE *)p_uint4;
      break;
    case 0x803d3d4:
case_0803D3D4:
      c_char1 = '\0';
      goto LAB_0803d3e6;
    case 0x803d3d8:
      c_char1 = '\x01';
      goto LAB_0803d3e6;
    case 0x803d3dc:
      c_char1 = '\x02';
      goto LAB_0803d3e6;
    case 0x803d3e0:
      c_char1 = '\x03';
      goto LAB_0803d3e6;
    case 0x803d3e4:
      c_char1 = '\x04';
      goto LAB_0803d3e6;
    }
  }
LAB_0803d3e6:
  if (c_char1 != *(char *)(i_val3 + 0x2cc)) {
    *(char *)(i_val3 + 0x2cc) = c_char1;
    *(undefined1 *)(i_val3 + 0x2f0) = 1;
  }
  return *p_uint4;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803D404 @ 0x0803D404
// =============================================================================
void ScriptEngine_Routine_0803D404(int *ctx,uint opcode)

{
  int i_val1;
  
  i_val1 = *ctx;
  if ((*(char *)(i_val1 + 0x2F1) == '\0') || (opcode != *(ushort *)(i_val1 + 0x2F2)))
  {
    *(char *)(i_val1 + 0x2F1) = '\x01';
    *(short *)(i_val1 + 0x2F2) = (short)opcode;
    *(undefined1 *)(i_val1 + 0x334) = 1;
  }
  return;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803D440 @ 0x0803D440
// =============================================================================
void ScriptEngine_Routine_0803D440(int *ctx)

{
  int i_val1;
  char *p_char2;
  
  i_val1 = *ctx;
  p_char2 = (char *)(i_val1 + 0x2F1);
  if (*p_char2 != '\0') {
    *p_char2 = '\0';
    *(undefined1 *)(i_val1 + 0x334) = 1;
  }
  return;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803D464 @ 0x0803D464
// =============================================================================
void ScriptEngine_Routine_0803D464(int ctx)

{
  
  ScriptEngine_Routine_0803D440(ctx + 8);
  return;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803D470 @ 0x0803D470
// =============================================================================
void ScriptEngine_Routine_0803D470(int ctx)

{
  
  ScriptEngine_Routine_0803D404(ctx + 8);
  return;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803D47C @ 0x0803D47C
// =============================================================================
void ScriptEngine_Routine_0803D47C(int ctx)

{
  
  ScriptEngine_Routine_0803D3A0(ctx + 8);
  return;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803D488 @ 0x0803D488
// =============================================================================
void ScriptEngine_Routine_0803D488(int ctx)

{
  
  ScriptEngine_Routine_0803D340(ctx + 8);
  return;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803D494 @ 0x0803D494
// =============================================================================
void ScriptEngine_Routine_0803D494(int ctx,undefined1 opcode)

{
  
  ScriptEngine_Routine_0803D2E8(ctx + 8,opcode);
  return;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803D4A4 @ 0x0803D4A4
// =============================================================================
void ScriptEngine_Routine_0803D4A4(int ctx)

{
  
  ScriptEngine_Routine_0803D240(ctx + 8);
  return;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803D4B0 @ 0x0803D4B0
// =============================================================================
void ScriptEngine_Routine_0803D4B0(int ctx)

{
  
  ScriptEngine_Routine_0803D0F0(ctx + 8);
  return;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803D4BC @ 0x0803D4BC
// =============================================================================
void ScriptEngine_Routine_0803D4BC(int ctx)

{
  
  ScriptEngine_Routine_0803D080(ctx + 8);
  return;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803D4C8 @ 0x0803D4C8
// =============================================================================
void ScriptEngine_Routine_0803D4C8(int ctx,undefined4 opcode,undefined1 arg1)

{
  
  ScriptEngine_Routine_0803CD4C(ctx + 8,opcode,arg1);
  return;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803D4D8 @ 0x0803D4D8
// =============================================================================
undefined8
ScriptEngine_Routine_0803D4D8(int ctx,undefined4 opcode,undefined4 arg1,undefined4 arg2,
             undefined4 arg_5)

{
  int i_val1;
  undefined4 u_val2;
  undefined4 u_val3;
  
  i_val1 = ScriptEngine_Routine_0803BEB0(ctx,arg1,arg2,arg_5);
  if (i_val1 == 3) {
    u_val2 = _call_via_r1(ctx,*(undefined4 *)(*(int *)(ctx + 4) + 0x1c));
    u_val3 = _call_via_r1(ctx,*(undefined4 *)(*(int *)(ctx + 4) + 0x20));
    ScriptEngine_Routine_0803C7C8(ctx + 8,u_val2,u_val3,opcode,arg2);
  }
  return i_val1;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803D52C @ 0x0803D52C
// =============================================================================
u32 ScriptEngine_Routine_0803D52C(char *ctx,uint *opcode)

{
  byte b_flag1;
  uint *p_uint2;
  uint u_val3;
  uint u_val4;
  char c_char5;
  byte b_flag6;
  uint stack_val_2c;
  uint stack_val_28;
  byte stack_val_24;
  
  stack_val_24 = *(byte *)((int)opcode + 1);
  u_val4 = ((stack_val_24 & 0x7f) >> 2) + (stack_val_24 & 3) * 0x1e + (((byte)*opcode & 7) + 6) * 0x78;
  if (6 < u_val4) {
    u_val4 = math_modsi3(u_val4,7);
  }
  b_flag6 = (byte)(u_val4 & 7);
  stack_val_2c = 200;
  stack_val_28 = (uint)(byte)((byte)*opcode >> 3) * 7 + ((byte)*opcode & 7);
  p_uint2 = &stack_val_2c;
  if (stack_val_28 < 200) {
    p_uint2 = &stack_val_28;
  }
  c_char5 = (char)*p_uint2;
  if ((*opcode & 0x1fffff) >> 0x10 < 6) {
    u_val3 = (stack_val_24 & 0x7f) >> 2;
    if (u_val3 == 0) {
      stack_val_24 = (stack_val_24 & 3) - 1 & 3;
      u_val3 = 0x1d;
    }
    else {
      u_val3 = u_val3 - 1;
    }
    stack_val_24 = stack_val_24 & 0x83 | (byte)((u_val3 & 0x1f) << 2);
    if (((stack_val_24 & 3) == 3) && ((stack_val_24 & 0x7f) >> 2 == 0x1d)) {
      c_char5 = c_char5 + -1;
    }
    b_flag1 = 6;
    if (1 < (u_val4 & 7)) {
      b_flag1 = b_flag6 - 1;
    }
    b_flag6 = b_flag1 & 7;
  }
  *ctx = c_char5;
  ctx[1] = stack_val_24 & 3;
  ctx[2] = (char)((stack_val_24 & 0x7f) >> 2) + '\x01';
  ctx[3] = b_flag6;
  return ctx;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803D644 @ 0x0803D644
// =============================================================================
u32 ScriptEngine_Routine_0803D644(int ctx,int opcode)

{
  byte *pbVar1;
  undefined4 u_val2;
  byte *pbVar3;
  uint stack_val_c;
  
  stack_val_c = ctx * 0x1e + -1 + opcode;
  pbVar3 = (byte *)(gRomData_080F1A66 + 0xe);
  pbVar1 = (byte *)VTable_Routine_080E0E80(gRomData_080F1A66,pbVar3,&stack_val_c,0,0);
  u_val2 = 0;
  if ((pbVar1 != pbVar3) && (*pbVar1 <= stack_val_c)) {
    u_val2 = 1;
  }
  return u_val2;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803D688 @ 0x0803D688
// =============================================================================
void ScriptEngine_Routine_0803D688(int ctx,undefined4 *opcode,undefined4 arg1)

{
  byte b_flag1;
  ushort u_val2;
  ushort u_val3;
  int i_val4;
  short *psVar5;
  int i_val6;
  undefined1 stack_buf_38 [6];
  undefined1 stack_val_32;
  undefined2 stack_val_30;
  undefined2 stack_val_2e;
  ushort stack_val_2c;
  ushort stack_val_28;
  ushort stack_val_26;
  ushort stack_val_24;
  
  i_val4 = _call_via_r1(arg1,*opcode);
  i_val6 = 0;
  if ((((opcode[2] != 0) && (psVar5 = *(short **)(i_val4 * 4 + opcode[2]), psVar5 != (short *)0x0))
      && (*psVar5 != 0)) && (*(int *)(psVar5 + 2) != 0)) {
    i_val6 = *(int *)(*(int *)(psVar5 + 2) + 4);
  }
  if (i_val6 == 0) {
    u_val2 = (ushort)0xFFFFFC00;
    stack_val_28 = u_val2 & stack_val_28 & 0x3ff | 0x234;
    stack_val_26 = u_val2 & stack_val_26 & 0x3ff;
    stack_val_24 = u_val2 & stack_val_24;
    gba_memcpy(stack_buf_38,&stack_val_28,6);
    stack_val_32 = 0;
  }
  else {
    u_val3 = (ushort)0xFFFFFC00;
    u_val2 = u_val3 & stack_val_30 | *(ushort *)(i_val6 + 10) & 0x3ff;
    stack_val_30._1_1_ = (byte)(u_val2 >> 8);
    stack_val_30 = CONCAT11(stack_val_30._1_1_ & 3 | (byte)((*(ushort *)(i_val6 + 6) & 0x3f) << 2),
                         (char)u_val2);
    u_val2 = u_val3 & stack_val_2e | *(ushort *)(i_val6 + 6) >> 6;
    stack_val_2e._1_1_ = (byte)(u_val2 >> 8);
    stack_val_2e = CONCAT11(stack_val_2e._1_1_ & 3 | (byte)((*(ushort *)(i_val6 + 8) & 0x3f) << 2),
                         (char)u_val2);
    stack_val_2c = u_val3 & stack_val_2c | *(ushort *)(i_val6 + 8) >> 6;
    b_flag1 = *(byte *)(i_val6 + 0xb);
    gba_memcpy(stack_buf_38,&stack_val_30,6);
    stack_val_32 = (undefined1)((b_flag1 & 0xf) >> 2);
  }
  NPC_Routine_0809E368(ctx,stack_buf_38);
  *(byte *)(ctx + 0xc) = *(byte *)(ctx + 0xc) & 0xe0 | (byte)i_val4 & 0x1f;
  *(ushort *)(ctx + 0xc) = (ushort)0xFFFFFC1F & *(ushort *)(ctx + 0xc);
  *(byte *)(ctx + 0xd) = *(byte *)(ctx + 0xd) & 0x83;
  *(uint *)(ctx + 0xc) = *(uint *)(ctx + 0xc) & 0xFE007FFF;
  return;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803DA24 @ 0x0803DA24
// =============================================================================
u32 ScriptEngine_Routine_0803DA24(int ctx)

{
  char c_char1;
  undefined4 u_val2;
  undefined1 stack_val_10;
  undefined1 stack_val_f;
  undefined1 stack_val_e;
  char cStack_d;
  
  if ((*(byte *)(ctx + 0x21CA) & 0xc) == 0) {
    ScriptEngine_Routine_0803D52C(&stack_val_10,ctx + 0x10);
    c_char1 = ScriptEngine_Routine_0803D644(stack_val_f,stack_val_e);
    if (c_char1 == '\0') {
      if (*(int *)(ctx + 8) == 0) {
        if (cStack_d == '\x02') {
          u_val2 = 3;
        }
        else {
          u_val2 = 1;
        }
      }
      else {
        u_val2 = 2;
      }
    }
    else {
      u_val2 = 4;
    }
  }
  else {
    u_val2 = 0;
  }
  return u_val2;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803DA7C @ 0x0803DA7C
// =============================================================================
u32 ScriptEngine_Routine_0803DA7C(int ctx)

{
  char c_char1;
  char c_char2;
  int i_val3;
  uint u_val4;
  int i_val5;
  undefined4 u_val6;
  undefined1 stack_val_20;
  char cStack_1f;
  char cStack_1e;
  char cStack_1d;
  
  if (-1 < (int)((uint)*(byte *)(ctx + 0x21CA) * 0x10000000)) {
    ScriptEngine_Routine_0803D52C(&stack_val_20,ctx + 0x10);
    i_val3 = NPC_Routine_080A0490(ctx + 0x1CD4);
    if (i_val3 == 3) {
      if ((cStack_1f == '\x02') && (cStack_1e == '\r')) {
        u_val6 = 0x16;
      }
      else if ((*(byte *)(ctx + 0x216B) & 0x7f) >> 5 == 1) {
        u_val6 = 0x17;
      }
      else {
        c_char2 = *(char *)(ctx + 0x2148);
        u_val4 = NPC_Routine_080A0384(ctx + 0x1CD4);
        u_val4 = -u_val4 | u_val4;
        c_char1 = ScriptEngine_Routine_0803D644(cStack_1f,cStack_1e);
        if (((c_char1 == '\0') && (*(int *)(ctx + 8) != 3)) && (*(int *)(ctx + 8) != 4)) {
          if ((c_char2 == '\0') || (cStack_1d != '\0')) {
            if ((int)u_val4 < 0) {
              if (c_char2 == '\0') {
                u_val6 = 6;
              }
              else {
                u_val6 = 7;
              }
            }
            else if (c_char2 == '\0') {
              u_val6 = 9;
            }
            else {
              u_val6 = 10;
            }
          }
          else if ((int)u_val4 < 0) {
            u_val6 = 8;
          }
          else {
            u_val6 = 0xb;
          }
        }
        else if ((int)u_val4 < 0) {
          if (c_char2 == '\0') {
            u_val6 = 0xc;
          }
          else {
            u_val6 = 0xd;
          }
        }
        else if (c_char2 == '\0') {
          u_val6 = 0xe;
        }
        else {
          u_val6 = 0xf;
        }
      }
      goto LAB_0803dc54;
    }
    u_val4 = NPC_Routine_0809E4AC(ctx + 0x1D6C);
    if (u_val4 < 5) {
      if (((cStack_1f == '\x02') && (cStack_1e == '\x1e')) &&
         ((*(byte *)(ctx + 0x21A3) & 3) != 2)) {
        u_val6 = 0x11;
        goto LAB_0803dc54;
      }
      i_val5 = NPC_Routine_080A01F8(ctx + 0x1CD4,3);
      if (((((cStack_1f == '\x03') && (cStack_1e == '\x0e')) && (i_val3 == 0)) &&
          ((i_val5 != 0 && (u_val4 = NPC_Routine_0809E498(), 0x270F < u_val4)))) &&
         ((*(byte *)(ctx + 0x21A3) & 0x3f) >> 4 != 2)) {
        u_val6 = 0x12;
        goto LAB_0803dc54;
      }
      c_char2 = ScriptEngine_Routine_0803D644(cStack_1f,cStack_1e);
      if (c_char2 != '\0') {
        u_val6 = 0x10;
        goto LAB_0803dc54;
      }
      if (-1 < (int)((uint)*(byte *)(ctx + 0x215A) * 0x10000000)) {
        if (cStack_1d == '\0') {
          if (*(int *)(ctx + 8) == 0) {
            if (cStack_1f == '\x01') {
              u_val6 = 5;
            }
            else {
              u_val6 = 3;
            }
          }
          else {
            u_val6 = 4;
          }
        }
        else if (*(int *)(ctx + 8) == 0) {
          u_val6 = 1;
        }
        else {
          u_val6 = 2;
        }
        goto LAB_0803dc54;
      }
    }
    else if (cStack_1f == '\x01') {
      c_char2 = ScriptEngine_Routine_0803D644(1,cStack_1e);
      if (c_char2 == '\0') {
        if (*(int *)(ctx + 8) == 0) {
          u_val6 = 0x14;
        }
        else {
          u_val6 = 0x15;
        }
      }
      else {
        u_val6 = 0x13;
      }
      goto LAB_0803dc54;
    }
  }
  u_val6 = 0;
LAB_0803dc54:
  return u_val6;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803DC64 @ 0x0803DC64
// =============================================================================
u32 ScriptEngine_Routine_0803DC64(int ctx)

{
  char c_char1;
  undefined4 u_val2;
  undefined1 stack_val_c;
  undefined1 stack_val_b;
  undefined1 stack_val_a;
  char cStack_9;
  
  if ((*(byte *)(ctx + 0x21CA) & 0xc) == 0) {
    ScriptEngine_Routine_0803D52C(&stack_val_c,ctx + 0x10);
    c_char1 = ScriptEngine_Routine_0803D644(stack_val_b,stack_val_a);
    if (c_char1 == '\0') {
      if (cStack_9 == '\0') {
        u_val2 = 2;
      }
      else {
        u_val2 = 1;
      }
    }
    else {
      u_val2 = 3;
    }
  }
  else {
    u_val2 = 0;
  }
  return u_val2;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803DCB4 @ 0x0803DCB4
// =============================================================================
u32 ScriptEngine_Routine_0803DCB4(int ctx)

{
  char c_char1;
  int i_val2;
  uint u_val3;
  undefined4 u_val4;
  int i_val5;
  undefined1 stack_val_14;
  char cStack_13;
  char cStack_12;
  char cStack_11;
  
  i_val5 = ctx + 0x1CD4;
  i_val2 = NPC_Routine_080A0384(i_val5);
  if (i_val2 == 0) {
    u_val4 = 0;
    goto LAB_0803dde0;
  }
  u_val3 = NPC_Routine_0809EAD8();
  if (0x3b < u_val3) {
    u_val4 = 4;
    goto LAB_0803dde0;
  }
  i_val2 = NPC_Routine_080A0490(i_val5);
  if (i_val2 == 0x1f) {
    u_val4 = 3;
    goto LAB_0803dde0;
  }
  ScriptEngine_Routine_0803D52C(&stack_val_14,ctx + 0x10);
  if ((cStack_13 == '\x02') && (cStack_12 == '\r')) {
    u_val4 = 5;
    goto LAB_0803dde0;
  }
  c_char1 = ScriptEngine_Routine_0803D644();
  if (((c_char1 != '\0') || (*(int *)(ctx + 8) == 3)) || (*(int *)(ctx + 8) == 4))
  goto LAB_0803ddb0;
  c_char1 = *(char *)(ctx + 0x2148);
  if (0x1c < i_val2 - 3U) goto case_0803DDD6;
  switch(*(uint *)((i_val2 - 3U) * 4 + gInlineTable_0803DD38) & 0xfffffffe) {
  case 0x803ddac:
    if (cStack_11 != '\x01') goto case_0803DDD6;
    goto LAB_0803ddb0;
  case 0x803ddb4:
    if (c_char1 == '\0') goto LAB_0803ddb0;
    break;
  case 0x803ddbe:
    if ((c_char1 == '\0') || (cStack_11 == '\x02')) goto LAB_0803ddb0;
    break;
  case 0x803ddcc:
    if (cStack_11 == '\x03') goto LAB_0803ddb0;
    goto case_0803DDD6;
  case 0x803ddd2:
    cStack_11 = c_char1;
    break;
  case 0x803ddd6:
    goto case_0803DDD6;
  }
  if (cStack_11 == '\0') {
LAB_0803ddb0:
    u_val4 = 2;
  }
  else {
case_0803DDD6:
    u_val4 = 1;
  }
LAB_0803dde0:
  return u_val4;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803DDE8 @ 0x0803DDE8
// =============================================================================
u32 ScriptEngine_Routine_0803DDE8(int ctx)

{
  char c_char1;
  undefined4 u_val2;
  byte stack_val_1c;
  char cStack_1b;
  byte stack_val_1a;
  char cStack_19;
  
  if (-1 < (int)((uint)*(byte *)(ctx + 0x21CA) * 0x2000000)) {
    ScriptEngine_Routine_0803D52C(&stack_val_1c,ctx + 0x10);
    if (((*(byte *)(ctx + 0x2181) & 0x3f) >> 4 != 2) &&
       (((int)((uint)*(byte *)(ctx + 0x2181 + -0xc) * 0x8000000) < 0 ||
        ((stack_val_1c < 2 && (((stack_val_1c != 1 || (cStack_1b != '\x03')) || (stack_val_1a < 0x1d))))))))
    {
      if ((*(byte *)(ctx + 0x2181) & 3) == 1) {
        u_val2 = 5;
      }
      else {
        c_char1 = ScriptEngine_Routine_0803D644(cStack_1b,stack_val_1a);
        if (c_char1 == '\0') {
          if (((stack_val_1c != 1) || (cStack_1b != '\x02')) ||
             ((stack_val_1a != 0xf ||
              (-1 < (int)((uint)*(byte *)(ctx + 0x2175) * 0x8000000))))) {
            if ((*(uint *)(ctx + 0x2174) & 0x61000) != 0x41000) {
              u_val2 = 1;
              goto LAB_0803debe;
            }
            if (cStack_19 == '\x06') {
              u_val2 = 3;
              goto LAB_0803debe;
            }
          }
          u_val2 = 2;
        }
        else {
          u_val2 = 4;
        }
      }
      goto LAB_0803debe;
    }
  }
  u_val2 = 0;
LAB_0803debe:
  return u_val2;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803DECC @ 0x0803DECC
// =============================================================================
u32 ScriptEngine_Routine_0803DECC(int ctx)

{
  char c_char1;
  undefined4 u_val2;
  undefined1 stack_val_c;
  undefined1 stack_val_b;
  undefined1 stack_val_a;
  
  ScriptEngine_Routine_0803D52C(&stack_val_c,ctx + 0x10);
  c_char1 = ScriptEngine_Routine_0803D644(stack_val_b,stack_val_a);
  if (c_char1 == '\0') {
    u_val2 = 1;
  }
  else {
    u_val2 = 2;
  }
  return u_val2;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803DEF8 @ 0x0803DEF8
// =============================================================================
u32 ScriptEngine_Routine_0803DEF8(int ctx)

{
  char c_char1;
  undefined4 u_val2;
  undefined1 stack_val_10;
  undefined1 stack_val_f;
  undefined1 stack_val_e;
  char cStack_d;
  
  if ((int)((uint)*(byte *)(ctx + 0x21CA) * 0x4000000) < 0) {
    u_val2 = 0;
  }
  else {
    ScriptEngine_Routine_0803D52C(&stack_val_10,ctx + 0x10);
    c_char1 = ScriptEngine_Routine_0803D644(stack_val_f,stack_val_e);
    if (c_char1 == '\0') {
      if (cStack_d == '\x03') {
        if (*(int *)(ctx + 8) == 0) {
          u_val2 = 2;
        }
        else {
          u_val2 = 3;
        }
      }
      else {
        u_val2 = 1;
      }
    }
    else {
      u_val2 = 4;
    }
  }
  return u_val2;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803DF50 @ 0x0803DF50
// =============================================================================
u32 ScriptEngine_Routine_0803DF50(int ctx)

{
  char c_char1;
  undefined4 u_val2;
  undefined1 stack_val_c;
  undefined1 stack_val_b;
  undefined1 stack_val_a;
  
  if ((int)((uint)*(byte *)(ctx + 0x21CA) * 0x4000000) < 0) {
    u_val2 = 0;
  }
  else {
    ScriptEngine_Routine_0803D52C(&stack_val_c,ctx + 0x10);
    c_char1 = ScriptEngine_Routine_0803D644(stack_val_b,stack_val_a);
    if (c_char1 == '\0') {
      u_val2 = 1;
    }
    else {
      u_val2 = 2;
    }
  }
  return u_val2;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803DF94 @ 0x0803DF94
// =============================================================================
u32 ScriptEngine_Routine_0803DF94(int ctx)

{
  char c_char1;
  undefined4 u_val2;
  undefined1 stack_val_c;
  undefined1 stack_val_b;
  undefined1 stack_val_a;
  char cStack_9;
  
  if ((int)((uint)*(byte *)(ctx + 0x21CA) * 0x20000000) < 0) {
    u_val2 = 0;
  }
  else {
    ScriptEngine_Routine_0803D52C(&stack_val_c,ctx + 0x10);
    c_char1 = ScriptEngine_Routine_0803D644(stack_val_b,stack_val_a);
    if (c_char1 == '\0') {
      if (cStack_9 == '\x02') {
        u_val2 = 2;
      }
      else if (cStack_9 == '\0') {
        u_val2 = 3;
      }
      else {
        u_val2 = 1;
      }
    }
    else {
      u_val2 = 4;
    }
  }
  return u_val2;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803DFE8 @ 0x0803DFE8
// =============================================================================
u32 ScriptEngine_Routine_0803DFE8(int ctx)

{
  char c_char1;
  char c_char2;
  undefined4 u_val3;
  int i_val4;
  uint u_val5;
  int i_val6;
  undefined1 stack_val_20;
  char cStack_1f;
  char cStack_1e;
  char cStack_1d;
  
  if ((*(byte *)(ctx + 0x21CA) & 0xc) == 0) {
    ScriptEngine_Routine_0803D52C(&stack_val_20,ctx + 0x10);
    i_val6 = ctx + 0x1CD4;
    i_val4 = NPC_Routine_080A0490(i_val6);
    if (i_val4 == 0x13) {
      if (cStack_1f == '\x02') {
        if (cStack_1e == '\t') {
          u_val3 = 0x15;
          goto LAB_0803e194;
        }
        if (cStack_1e == '\r') {
          u_val3 = 0x16;
          goto LAB_0803e194;
        }
      }
      if ((*(byte *)(ctx + 0x216C) & 0x1f) >> 3 == 1) {
        u_val3 = 0x17;
      }
      else {
        c_char2 = *(char *)(ctx + 0x2148);
        u_val5 = NPC_Routine_080A0384(ctx + 0x1CD4);
        u_val5 = -u_val5 | u_val5;
        c_char1 = ScriptEngine_Routine_0803D644(cStack_1f,cStack_1e);
        if (((c_char1 == '\0') && (*(int *)(ctx + 8) != 3)) && (*(int *)(ctx + 8) != 4)) {
          if ((c_char2 == '\0') || ((cStack_1d != '\0' && (cStack_1d != '\x02')))) {
            if ((int)u_val5 < 0) {
              if (c_char2 == '\0') {
                u_val3 = 0xb;
              }
              else {
                u_val3 = 0xc;
              }
            }
            else if (c_char2 == '\0') {
              u_val3 = 0xe;
            }
            else {
              u_val3 = 0xf;
            }
          }
          else if ((int)u_val5 < 0) {
            u_val3 = 0xd;
          }
          else {
            u_val3 = 0x10;
          }
        }
        else if ((int)u_val5 < 0) {
          if (c_char2 == '\0') {
            u_val3 = 0x11;
          }
          else {
            u_val3 = 0x12;
          }
        }
        else if (c_char2 == '\0') {
          u_val3 = 0x13;
        }
        else {
          u_val3 = 0x14;
        }
      }
    }
    else {
      u_val5 = NPC_Routine_0809E4AC(ctx + 0x1EB8);
      if (u_val5 < 5) {
        i_val6 = NPC_Routine_080A01F8(i_val6,0x13);
        if (((((cStack_1f == '\x03') && (cStack_1e == '\x0e')) && (i_val4 == 0)) &&
            ((i_val6 != 0 && (u_val5 = NPC_Routine_0809E498(), 0x270F < u_val5)))) &&
           ((*(byte *)(ctx + 0x21A4) & 0x7f) >> 5 != 2)) {
          u_val3 = 9;
        }
        else {
          c_char2 = ScriptEngine_Routine_0803D644(cStack_1f,cStack_1e);
          if (c_char2 == '\0') {
            if (cStack_1d == '\0') {
              u_val3 = 3;
            }
            else if (cStack_1d == '\x02') {
              if (*(int *)(ctx + 8) == 0) {
                u_val3 = 4;
              }
              else {
                u_val3 = 5;
              }
            }
            else if (*(int *)(ctx + 8) == 0) {
              u_val3 = 1;
            }
            else {
              u_val3 = 2;
            }
          }
          else {
            u_val3 = 8;
          }
        }
      }
      else {
        c_char2 = ScriptEngine_Routine_0803D644(cStack_1f,cStack_1e);
        if (c_char2 == '\0') {
          if (cStack_1d == '\0') {
            u_val3 = 7;
          }
          else {
            u_val3 = 6;
          }
        }
        else {
          u_val3 = 10;
        }
      }
    }
  }
  else {
    u_val3 = 0;
  }
LAB_0803e194:
  return u_val3;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803E1A4 @ 0x0803E1A4
// =============================================================================
u32 ScriptEngine_Routine_0803E1A4(int ctx)

{
  char c_char1;
  undefined4 u_val2;
  undefined1 stack_val_10;
  undefined1 stack_val_f;
  undefined1 stack_val_e;
  char cStack_d;
  
  if ((int)((uint)*(byte *)(ctx + 0x21CA) * 0x20000000) < 0) {
    u_val2 = 0;
  }
  else {
    ScriptEngine_Routine_0803D52C(&stack_val_10,ctx + 0x10);
    c_char1 = ScriptEngine_Routine_0803D644(stack_val_f,stack_val_e);
    if (c_char1 == '\0') {
      if (*(int *)(ctx + 8) == 0) {
        if (cStack_d == '\x02') {
          u_val2 = 3;
        }
        else {
          u_val2 = 1;
        }
      }
      else {
        u_val2 = 2;
      }
    }
    else {
      u_val2 = 4;
    }
  }
  return u_val2;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803E1FC @ 0x0803E1FC
// =============================================================================
u32 ScriptEngine_Routine_0803E1FC(int ctx)

{
  char c_char1;
  undefined4 u_val2;
  int i_val3;
  undefined1 stack_val_14;
  char cStack_13;
  char cStack_12;
  
  if ((int)((uint)*(byte *)(ctx + 0x21CA) * 0x2000000) < 0) {
    u_val2 = 0;
  }
  else {
    ScriptEngine_Routine_0803D52C(&stack_val_14,ctx + 0x10);
    c_char1 = ScriptEngine_Routine_0803D644(cStack_13,cStack_12);
    if (c_char1 == '\0') {
      i_val3 = NPC_Routine_080A0490(ctx + 0x1CD4);
      if (((cStack_13 == '\x02') && (cStack_12 == '\x05')) && (i_val3 != 0x19)) {
        u_val2 = 3;
      }
      else {
        u_val2 = 1;
      }
    }
    else {
      u_val2 = 2;
    }
  }
  return u_val2;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803E264 @ 0x0803E264
// =============================================================================
u32 ScriptEngine_Routine_0803E264(int ctx)

{
  char c_char1;
  char c_char2;
  undefined4 u_val3;
  int i_val4;
  uint u_val5;
  int i_val6;
  undefined1 stack_val_20;
  char cStack_1f;
  char cStack_1e;
  
  if ((int)((uint)*(byte *)(ctx + 0x21CA) * 0x2000000) < 0) {
    u_val3 = 0;
    goto LAB_0803e3fe;
  }
  ScriptEngine_Routine_0803D52C(&stack_val_20,ctx + 0x10);
  i_val4 = NPC_Routine_080A0490(ctx + 0x1CD4);
  if ((cStack_1f == '\x02') && (cStack_1e == '\x05')) {
    if (i_val4 != 0x19) {
      u_val3 = 5;
      goto LAB_0803e3fe;
    }
  }
  else if (i_val4 != 0x19) {
    u_val5 = NPC_Routine_0809E4AC(ctx + 0x1F38);
    if (u_val5 < 5) {
      i_val6 = NPC_Routine_080A01F8(ctx + 0x1CD4,0x19);
      if (((((cStack_1f == '\x03') && (cStack_1e == '\x0e')) && (i_val4 == 0)) &&
          ((i_val6 != 0 && (u_val5 = NPC_Routine_0809E498(), 0x270F < u_val5)))) &&
         ((byte)((*(byte *)(ctx + 0x21A3 + 1) & 1) << 1 |
                *(byte *)(ctx + 0x21A3) >> 7) != 2)) {
        u_val3 = 7;
        goto LAB_0803e3fe;
      }
      c_char2 = ScriptEngine_Routine_0803D644(cStack_1f,cStack_1e);
      if (c_char2 == '\0') {
        if (*(int *)(ctx + 8) == 0) {
          u_val3 = 1;
        }
        else {
          u_val3 = 2;
        }
        goto LAB_0803e3fe;
      }
    }
    else {
      c_char2 = ScriptEngine_Routine_0803D644(cStack_1f,cStack_1e);
      if (c_char2 == '\0') {
        if (*(int *)(ctx + 8) == 0) {
          u_val3 = 3;
        }
        else {
          u_val3 = 4;
        }
        goto LAB_0803e3fe;
      }
    }
    u_val3 = 6;
    goto LAB_0803e3fe;
  }
  if (cStack_1f == '\x02') {
    if (cStack_1e == '\t') {
      u_val3 = 0x10;
      goto LAB_0803e3fe;
    }
    if (cStack_1e == '\r') {
      u_val3 = 0x11;
      goto LAB_0803e3fe;
    }
  }
  if ((byte)((*(byte *)(ctx + 0x216B + 1) & 1) << 1 |
            *(byte *)(ctx + 0x216B) >> 7) == 1) {
    u_val3 = 0x12;
  }
  else {
    c_char2 = *(char *)(ctx + 0x2148);
    u_val5 = NPC_Routine_080A0384(ctx + 0x1CD4);
    c_char1 = ScriptEngine_Routine_0803D644(cStack_1f,cStack_1e);
    if (((c_char1 == '\0') && (*(int *)(ctx + 8) != 3)) && (*(int *)(ctx + 8) != 4)) {
      if ((int)(-u_val5 | u_val5) < 0) {
        if (c_char2 == '\0') {
          u_val3 = 8;
        }
        else {
          u_val3 = 9;
        }
      }
      else if (c_char2 == '\0') {
        u_val3 = 10;
      }
      else {
        u_val3 = 0xb;
      }
    }
    else if ((int)(-u_val5 | u_val5) < 0) {
      if (c_char2 == '\0') {
        u_val3 = 0xc;
      }
      else {
        u_val3 = 0xd;
      }
    }
    else if (c_char2 == '\0') {
      u_val3 = 0xe;
    }
    else {
      u_val3 = 0xf;
    }
  }
LAB_0803e3fe:
  return u_val3;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803E40C @ 0x0803E40C
// =============================================================================
u32 ScriptEngine_Routine_0803E40C(int ctx)

{
  undefined4 u_val1;
  undefined1 temp_coords [3];
  char cStack_d;
  
  ScriptEngine_Routine_0803D52C(temp_coords,ctx + 0x10);
  if (((*(byte *)(ctx + 0x2187) & 0x1f) >> 3 == 2) && (cStack_d == '\0')) {
    u_val1 = 1;
  }
  else {
    u_val1 = 0;
  }
  return u_val1;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803E448 @ 0x0803E448
// =============================================================================
u32 ScriptEngine_Routine_0803E448(int ctx)

{
  char c_char1;
  undefined4 u_val2;
  undefined1 stack_val_10;
  undefined1 stack_val_f;
  undefined1 stack_val_e;
  char cStack_d;
  
  if ((int)((uint)*(byte *)(ctx + 0x21CA) * 0x8000000) < 0) {
    u_val2 = 0;
  }
  else {
    ScriptEngine_Routine_0803D52C(&stack_val_10,ctx + 0x10);
    c_char1 = ScriptEngine_Routine_0803D644(stack_val_f,stack_val_e);
    if (c_char1 == '\0') {
      if (cStack_d == '\x01') {
        if (*(int *)(ctx + 8) == 0) {
          u_val2 = 2;
        }
        else {
          u_val2 = 3;
        }
      }
      else {
        u_val2 = 1;
      }
    }
    else {
      u_val2 = 4;
    }
  }
  return u_val2;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803E4A0 @ 0x0803E4A0
// =============================================================================
u32 ScriptEngine_Routine_0803E4A0(int ctx)

{
  char c_char1;
  undefined4 u_val2;
  int i_val3;
  uint u_val4;
  int i_val5;
  undefined1 stack_val_20;
  char cStack_1f;
  char cStack_1e;
  char cStack_1d;
  
  if ((int)((uint)*(byte *)(ctx + 0x21CA) * 0x8000000) < 0) {
    u_val2 = 0;
  }
  else {
    ScriptEngine_Routine_0803D52C(&stack_val_20,ctx + 0x10);
    i_val5 = ctx + 0x1CD4;
    i_val3 = NPC_Routine_080A0490(i_val5);
    if (i_val3 == 0xc) {
      if (cStack_1f == '\x02') {
        if (cStack_1e == '\t') {
          u_val2 = 0x10;
          goto LAB_0803e610;
        }
        if (cStack_1e == '\r') {
          u_val2 = 0x11;
          goto LAB_0803e610;
        }
      }
      if ((*(byte *)(ctx + 0x216C) & 0x7f) >> 5 == 1) {
        u_val2 = 0x12;
      }
      else {
        u_val4 = NPC_Routine_080A0384(ctx + 0x1CD4);
        u_val4 = -u_val4 | u_val4;
        c_char1 = ScriptEngine_Routine_0803D644(cStack_1f,cStack_1e);
        if (((c_char1 == '\0') && (*(int *)(ctx + 8) != 3)) && (*(int *)(ctx + 8) != 4)) {
          if (cStack_1d == '\x01') {
            if ((int)u_val4 < 0) {
              u_val2 = 0xb;
            }
            else {
              u_val2 = 0xd;
            }
          }
          else if ((int)u_val4 < 0) {
            u_val2 = 10;
          }
          else {
            u_val2 = 0xc;
          }
        }
        else if ((int)u_val4 < 0) {
          u_val2 = 0xe;
        }
        else {
          u_val2 = 0xf;
        }
      }
    }
    else {
      u_val4 = NPC_Routine_0809E4AC(ctx + 0x1E28);
      if (u_val4 < 5) {
        i_val5 = NPC_Routine_080A01F8(i_val5,0xc);
        if (((((cStack_1f == '\x03') && (cStack_1e == '\x0e')) && (i_val3 == 0)) &&
            ((i_val5 != 0 && (u_val4 = NPC_Routine_0809E498(), 0x270F < u_val4)))) &&
           ((*(byte *)(ctx + 0x21A5) & 3) != 2)) {
          u_val2 = 7;
        }
        else {
          c_char1 = ScriptEngine_Routine_0803D644(cStack_1f,cStack_1e);
          if (c_char1 == '\0') {
            if (cStack_1d == '\x01') {
              if (*(int *)(ctx + 8) == 0) {
                u_val2 = 2;
              }
              else {
                u_val2 = 3;
              }
            }
            else {
              u_val2 = 1;
            }
          }
          else {
            u_val2 = 8;
          }
        }
      }
      else {
        c_char1 = ScriptEngine_Routine_0803D644(cStack_1f,cStack_1e);
        if (c_char1 == '\0') {
          if (cStack_1d == '\x04') {
            if (*(int *)(ctx + 8) == 0) {
              u_val2 = 5;
            }
            else {
              u_val2 = 6;
            }
          }
          else {
            u_val2 = 4;
          }
        }
        else {
          u_val2 = 9;
        }
      }
    }
  }
LAB_0803e610:
  return u_val2;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803E620 @ 0x0803E620
// =============================================================================
u32 ScriptEngine_Routine_0803E620(int ctx)

{
  char c_char1;
  undefined4 u_val2;
  undefined1 stack_val_10;
  undefined1 stack_val_f;
  undefined1 stack_val_e;
  char cStack_d;
  
  if ((int)((uint)*(byte *)(ctx + 0x21CA) * 0x8000000) < 0) {
    u_val2 = 0;
  }
  else {
    ScriptEngine_Routine_0803D52C(&stack_val_10,ctx + 0x10);
    c_char1 = ScriptEngine_Routine_0803D644(stack_val_f,stack_val_e);
    if (c_char1 == '\0') {
      if (cStack_d == '\x01') {
        if (*(int *)(ctx + 8) == 0) {
          u_val2 = 3;
        }
        else {
          u_val2 = 4;
        }
      }
      else if (*(int *)(ctx + 8) == 0) {
        u_val2 = 1;
      }
      else {
        u_val2 = 2;
      }
    }
    else {
      u_val2 = 5;
    }
  }
  return u_val2;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803E684 @ 0x0803E684
// =============================================================================
u32 ScriptEngine_Routine_0803E684(int ctx)

{
  char c_char1;
  undefined4 u_val2;
  uint *p_uint3;
  undefined1 stack_val_1c;
  char cStack_1b;
  byte stack_val_1a;
  uint stack_val_18;
  uint stack_val_14;
  
  ScriptEngine_Routine_0803D52C(&stack_val_1c,ctx + 0x10);
  c_char1 = ScriptEngine_Routine_0803D644(cStack_1b,stack_val_1a);
  if (c_char1 == '\0') {
    stack_val_18 = 200;
    stack_val_14 = (uint)(*(byte *)(ctx + 0x10) >> 3) * 7 + (*(byte *)(ctx + 0x10) & 7);
    p_uint3 = &stack_val_18;
    if (stack_val_14 < 200) {
      p_uint3 = &stack_val_14;
    }
    if (((*p_uint3 < 2) && (cStack_1b == '\0')) && (stack_val_1a < 3)) {
      u_val2 = 0;
    }
    else {
      u_val2 = 1;
    }
  }
  else {
    u_val2 = 2;
  }
  return u_val2;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803E6EC @ 0x0803E6EC
// =============================================================================
u32 ScriptEngine_Routine_0803E6EC(int ctx)

{
  char c_char1;
  undefined4 u_val2;
  undefined1 stack_val_10;
  char cStack_f;
  char cStack_e;
  char cStack_d;
  
  ScriptEngine_Routine_0803D52C(&stack_val_10,ctx + 0x10);
  if (((cStack_f == '\x03') && (cStack_e == '\x02')) &&
     ((*(uint *)(ctx + 0x2178) & 0x43000) == 0x2000)) {
    if ((*(byte *)(ctx + 0x217A) & 0x1f) >> 3 == 2) {
      u_val2 = 0;
    }
    else {
      u_val2 = 7;
    }
  }
  else {
    c_char1 = ScriptEngine_Routine_0803D644(cStack_f,cStack_e);
    if (c_char1 == '\0') {
      if (cStack_d == '\x06') {
        if (*(int *)(ctx + 8) == 0) {
          u_val2 = 2;
        }
        else {
          u_val2 = 3;
        }
      }
      else if (cStack_d == '\0') {
        if (*(int *)(ctx + 8) == 0) {
          u_val2 = 4;
        }
        else {
          u_val2 = 5;
        }
      }
      else {
        u_val2 = 1;
      }
    }
    else {
      u_val2 = 6;
    }
  }
  return u_val2;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803E780 @ 0x0803E780
// =============================================================================
u32 ScriptEngine_Routine_0803E780(int ctx)

{
  char c_char1;
  undefined4 u_val2;
  int i_val3;
  uint u_val4;
  int i_val5;
  undefined1 stack_val_20;
  char cStack_1f;
  char cStack_1e;
  char cStack_1d;
  
  if ((int)((uint)*(byte *)(ctx + 0x21CA) * 0x4000000) < 0) {
    u_val2 = 0;
  }
  else {
    ScriptEngine_Routine_0803D52C(&stack_val_20,ctx + 0x10);
    i_val5 = ctx + 0x1CD4;
    i_val3 = NPC_Routine_080A0490(i_val5);
    if (i_val3 == 0x15) {
      if (cStack_1f == '\x02') {
        if (cStack_1e == '\t') {
          u_val2 = 0xe;
          goto LAB_0803e8da;
        }
        if (cStack_1e == '\r') {
          u_val2 = 0xf;
          goto LAB_0803e8da;
        }
      }
      if ((*(byte *)(ctx + 0x216C) & 7) >> 1 == 1) {
        u_val2 = 0x10;
      }
      else {
        u_val4 = NPC_Routine_080A0384(ctx + 0x1CD4);
        u_val4 = -u_val4 | u_val4;
        c_char1 = ScriptEngine_Routine_0803D644(cStack_1f,cStack_1e);
        if (((c_char1 == '\0') && (*(int *)(ctx + 8) != 3)) && (*(int *)(ctx + 8) != 4)) {
          if (cStack_1d == '\x03') {
            if ((int)u_val4 < 0) {
              u_val2 = 9;
            }
            else {
              u_val2 = 0xb;
            }
          }
          else if ((int)u_val4 < 0) {
            u_val2 = 8;
          }
          else {
            u_val2 = 10;
          }
        }
        else if ((int)u_val4 < 0) {
          u_val2 = 0xc;
        }
        else {
          u_val2 = 0xd;
        }
      }
    }
    else {
      u_val4 = NPC_Routine_0809E4AC(ctx + 0x1EE4);
      if (u_val4 < 5) {
        i_val5 = NPC_Routine_080A01F8(i_val5,0x15);
        if (((((cStack_1f == '\x03') && (cStack_1e == '\x0e')) && (i_val3 == 0)) &&
            ((i_val5 != 0 && (u_val4 = NPC_Routine_0809E498(), 0x270F < u_val4)))) &&
           ((*(byte *)(ctx + 0x21A4) & 0xf) >> 2 != 2)) {
          u_val2 = 6;
        }
        else {
          c_char1 = ScriptEngine_Routine_0803D644(cStack_1f,cStack_1e);
          if (c_char1 == '\0') {
            if (cStack_1d == '\x03') {
              u_val2 = 2;
            }
            else {
              u_val2 = 1;
            }
          }
          else {
            u_val2 = 5;
          }
        }
      }
      else {
        c_char1 = ScriptEngine_Routine_0803D644(cStack_1f,cStack_1e);
        if (c_char1 == '\0') {
          if (cStack_1d == '\x03') {
            u_val2 = 4;
          }
          else {
            u_val2 = 3;
          }
        }
        else {
          u_val2 = 7;
        }
      }
    }
  }
LAB_0803e8da:
  return u_val2;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803E8E8 @ 0x0803E8E8
// =============================================================================
u32 ScriptEngine_Routine_0803E8E8(int ctx)

{
  char c_char1;
  undefined4 u_val2;
  undefined1 stack_val_10;
  char cStack_f;
  char cStack_e;
  char cStack_d;
  
  if (-1 < (int)((uint)*(byte *)(ctx + 0x21CA) * 0x4000000)) {
    ScriptEngine_Routine_0803D52C(&stack_val_10,ctx + 0x10);
    if (((cStack_f == '\x02') && (cStack_e == '\x1e')) &&
       (*(byte *)(ctx + 0x21A2) >> 6 != 2)) {
      u_val2 = 5;
      goto LAB_0803e968;
    }
    c_char1 = ScriptEngine_Routine_0803D644(cStack_f);
    if (c_char1 != '\0') {
      u_val2 = 4;
      goto LAB_0803e968;
    }
    if (-1 < (int)((uint)*(byte *)(ctx + 0x215A) * 0x10000000)) {
      if ((cStack_d == '\x01') || (cStack_d == '\x03')) {
        u_val2 = 3;
      }
      else if (*(int *)(ctx + 8) == 0) {
        u_val2 = 1;
      }
      else {
        u_val2 = 2;
      }
      goto LAB_0803e968;
    }
  }
  u_val2 = 0;
LAB_0803e968:
  return u_val2;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803E970 @ 0x0803E970
// =============================================================================
u32 ScriptEngine_Routine_0803E970(int ctx)

{
  char c_char1;
  undefined4 u_val2;
  undefined1 stack_val_14;
  undefined1 stack_val_13;
  undefined1 stack_val_12;
  char cStack_11;
  
  ScriptEngine_Routine_0803D52C(&stack_val_14,ctx + 0x10);
  c_char1 = ScriptEngine_Routine_0803D644(stack_val_13,stack_val_12);
  if (c_char1 == '\0') {
    if ((int)((uint)*(byte *)(ctx + 0x21CA) * 0x2000000) < 0) {
      u_val2 = 0;
    }
    else if ((*(uint *)(ctx + 0x2174) & 0x61000) == 0x41000) {
      if (cStack_11 == '\x06') {
        u_val2 = 4;
      }
      else {
        u_val2 = 3;
      }
    }
    else if (cStack_11 == '\x06') {
      u_val2 = 2;
    }
    else {
      u_val2 = 1;
    }
  }
  else {
    u_val2 = 5;
  }
  return u_val2;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803E9E4 @ 0x0803E9E4
// =============================================================================
u32 ScriptEngine_Routine_0803E9E4(int ctx)

{
  char c_char1;
  undefined4 u_val2;
  undefined1 stack_val_10;
  undefined1 stack_val_f;
  undefined1 stack_val_e;
  char cStack_d;
  
  ScriptEngine_Routine_0803D52C(&stack_val_10,ctx + 0x10);
  c_char1 = ScriptEngine_Routine_0803D644(stack_val_f,stack_val_e);
  if (c_char1 == '\0') {
    if ((int)((uint)*(byte *)(ctx + 0x21CA) * 0x2000000) < 0) {
      u_val2 = 0;
    }
    else if (*(int *)(ctx + 8) == 0) {
      if (cStack_d == '\x06') {
        if ((*(uint *)(ctx + 0x2174) & 0x61000) == 0x41000) {
          u_val2 = 4;
        }
        else {
          u_val2 = 3;
        }
      }
      else {
        u_val2 = 1;
      }
    }
    else {
      u_val2 = 2;
    }
  }
  else {
    u_val2 = 5;
  }
  return u_val2;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803EA5C @ 0x0803EA5C
// =============================================================================
u32 ScriptEngine_Routine_0803EA5C(int ctx)

{
  undefined4 u_val1;
  undefined1 temp_coords [3];
  char cStack_d;
  
  ScriptEngine_Routine_0803D52C(temp_coords,ctx + 0x10);
  if (((*(byte *)(ctx + 0x2186) & 0x7f) >> 5 == 2) && (cStack_d == '\x03')) {
    u_val1 = 1;
  }
  else {
    u_val1 = 0;
  }
  return u_val1;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803EA98 @ 0x0803EA98
// =============================================================================
u32 ScriptEngine_Routine_0803EA98(int ctx)

{
  char c_char1;
  undefined4 u_val2;
  undefined1 stack_val_c;
  undefined1 stack_val_b;
  undefined1 stack_val_a;
  
  if ((int)((uint)*(byte *)(ctx + 0x21CA) * 0x4000000) < 0) {
    u_val2 = 0;
  }
  else {
    ScriptEngine_Routine_0803D52C(&stack_val_c,ctx + 0x10);
    c_char1 = ScriptEngine_Routine_0803D644(stack_val_b,stack_val_a);
    if (c_char1 == '\0') {
      u_val2 = 1;
    }
    else {
      u_val2 = 2;
    }
  }
  return u_val2;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803EADC @ 0x0803EADC
// =============================================================================
u32 ScriptEngine_Routine_0803EADC(int ctx)

{
  char c_char1;
  undefined4 u_val2;
  undefined1 stack_val_10;
  char cStack_f;
  char cStack_e;
  char cStack_d;
  
  if ((*(byte *)(ctx + 0x21CA) & 0x7c) == 0) {
    ScriptEngine_Routine_0803D52C(&stack_val_10,ctx + 0x10);
    if ((cStack_f == '\x02') && (cStack_e == '\x03')) {
      u_val2 = 9;
    }
    else {
      c_char1 = ScriptEngine_Routine_0803D644();
      if (c_char1 == '\0') {
        if (((cStack_d == '\x01') || (cStack_d == '\x03')) || (*(int *)(ctx + 8) != 0)) {
          u_val2 = 1;
        }
        else {
          u_val2 = 2;
        }
      }
      else {
        u_val2 = 8;
      }
    }
  }
  else {
    u_val2 = 0;
  }
  return u_val2;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803EB40 @ 0x0803EB40
// =============================================================================
u32 ScriptEngine_Routine_0803EB40(int ctx)

{
  char c_char1;
  undefined4 u_val2;
  undefined1 stack_val_10;
  char cStack_f;
  undefined1 stack_val_e;
  char cStack_d;
  
  if (-1 < (int)((uint)*(byte *)(ctx + 0x21CA) * 0x10000000)) {
    ScriptEngine_Routine_0803D52C(&stack_val_10,ctx + 0x10);
    if (cStack_f == '\x01') {
      c_char1 = ScriptEngine_Routine_0803D644(1,stack_val_e);
      if (c_char1 == '\0') {
        if (cStack_d == '\0') {
          if (*(int *)(ctx + 8) == 0) {
            u_val2 = 2;
          }
          else {
            u_val2 = 3;
          }
        }
        else {
          u_val2 = 1;
        }
      }
      else {
        u_val2 = 4;
      }
      goto LAB_0803eb94;
    }
  }
  u_val2 = 0;
LAB_0803eb94:
  return u_val2;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803EB9C @ 0x0803EB9C
// =============================================================================
u32 ScriptEngine_Routine_0803EB9C(int ctx)

{
  char c_char1;
  undefined4 u_val2;
  uint u_val3;
  undefined1 stack_val_1c;
  undefined1 stack_val_1b;
  undefined1 stack_val_1a;
  char cStack_19;
  
  if ((int)((uint)*(byte *)(ctx + 0x21CA) * 0x8000000) < 0) {
    u_val2 = 0;
  }
  else {
    ScriptEngine_Routine_0803D52C(&stack_val_1c,ctx + 0x10);
    u_val3 = NPC_Routine_0809E4AC(ctx + 0x1E28);
    if (u_val3 < 5) {
      c_char1 = ScriptEngine_Routine_0803D644(stack_val_1b,stack_val_1a);
      if (c_char1 == '\0') {
        if (u_val3 == 0) {
          u_val2 = 1;
        }
        else if (cStack_19 == '\x01') {
          u_val2 = 3;
        }
        else if (cStack_19 == '\x04') {
          u_val2 = 4;
        }
        else {
          u_val2 = 2;
        }
      }
      else {
        u_val2 = 8;
      }
    }
    else {
      c_char1 = ScriptEngine_Routine_0803D644(stack_val_1b,stack_val_1a);
      if (c_char1 == '\0') {
        if (cStack_19 == '\x04') {
          if (*(int *)(ctx + 8) == 0) {
            u_val2 = 6;
          }
          else {
            u_val2 = 7;
          }
        }
        else {
          u_val2 = 5;
        }
      }
      else {
        u_val2 = 9;
      }
    }
  }
  return u_val2;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803EC44 @ 0x0803EC44
// =============================================================================
u32 ScriptEngine_Routine_0803EC44(int ctx)

{
  char c_char1;
  undefined4 u_val2;
  int i_val3;
  int i_val4;
  undefined1 stack_val_14;
  undefined1 stack_val_13;
  undefined1 stack_val_12;
  char cStack_11;
  
  if ((int)((uint)*(byte *)(ctx + 0x21CA) * 0x8000000) < 0) {
    u_val2 = 0;
  }
  else {
    ScriptEngine_Routine_0803D52C(&stack_val_14,ctx + 0x10);
    c_char1 = ScriptEngine_Routine_0803D644(stack_val_13,stack_val_12);
    if (c_char1 == '\0') {
      i_val4 = ctx + 0x1DAC;
      i_val3 = NPC_Routine_0809ECD8(i_val4);
      if ((i_val3 == 0) || (c_char1 = NPC_Routine_0809ECE0(i_val4), c_char1 != '\0')) {
        if (cStack_11 == '\x04') {
          if (*(int *)(ctx + 8) == 0) {
            u_val2 = 2;
          }
          else {
            u_val2 = 3;
          }
        }
        else {
          u_val2 = 1;
        }
      }
      else {
        u_val2 = 5;
      }
    }
    else {
      u_val2 = 4;
    }
  }
  return u_val2;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803ECC0 @ 0x0803ECC0
// =============================================================================
u32 ScriptEngine_Routine_0803ECC0(int ctx)

{
  char c_char1;
  undefined4 u_val2;
  int i_val3;
  uint u_val4;
  int i_val5;
  int pos_x;
  undefined1 stack_val_18;
  undefined1 stack_val_17;
  undefined1 stack_val_16;
  byte stack_val_15;
  
  ScriptEngine_Routine_0803D52C(&stack_val_18,ctx + 0x10);
  c_char1 = ScriptEngine_Routine_0803D644(stack_val_17,stack_val_16);
  if (c_char1 != '\0') {
    u_val2 = 5;
    goto LAB_0803edc4;
  }
  pos_x = *(int *)(ctx + 8);
  i_val5 = ctx + 0x1F64;
  i_val3 = NPC_Routine_0809EB68(i_val5);
  if ((((i_val3 == 0) || (c_char1 = NPC_Routine_0809EB70(i_val5), c_char1 != '\0')) ||
      (c_char1 = NPC_Routine_0809EB8C(i_val5), c_char1 != '\0')) ||
     ((pos_x - 3U < 2 || (u_val4 = NPC_Routine_0809EB68(i_val5), 0xd < u_val4)))) goto case_0803EDA4;
  switch(*(uint *)(u_val4 * 4 + gInlineTable_0803ED30) & 0xfffffffe) {
  case 0x803ed68:
    i_val3 = Building_Routine_0800BF14(ctx + 500);
    if (i_val3 == 1) {
      u_val2 = 7;
      break;
    }
    if (i_val3 == 0) {
      u_val2 = 6;
      break;
    }
    if (i_val3 == 2) {
      u_val2 = 0xd;
      break;
    }
  case 0x803eda4:
case_0803EDA4:
    if (stack_val_15 < 6) {
      if (3 < stack_val_15) {
        u_val2 = 2;
        break;
      }
      if (stack_val_15 == 0) {
        u_val2 = 4;
        break;
      }
    }
    else if (stack_val_15 == 6) {
      u_val2 = 3;
      break;
    }
    u_val2 = 1;
    break;
  case 0x803ed8c:
    u_val2 = 8;
    break;
  case 0x803ed90:
    u_val2 = 9;
    break;
  case 0x803ed94:
    u_val2 = 0xe;
    break;
  case 0x803ed98:
    u_val2 = 10;
    break;
  case 0x803ed9c:
    u_val2 = 0xb;
    break;
  case 0x803eda0:
    u_val2 = 0xc;
  }
LAB_0803edc4:
  return u_val2;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803EDCC @ 0x0803EDCC
// =============================================================================
u32 ScriptEngine_Routine_0803EDCC(int ctx)

{
  char c_char1;
  undefined4 u_val2;
  undefined1 stack_val_18;
  char cStack_17;
  char cStack_16;
  char cStack_15;
  
  ScriptEngine_Routine_0803D52C(&stack_val_18,ctx + 0x10);
  c_char1 = ScriptEngine_Routine_0803D644(cStack_17,cStack_16);
  if (c_char1 == '\0') {
    if (((cStack_17 == '\x02') && (cStack_16 == '\x1e')) &&
       ((*(byte *)(ctx + 0x21A2) & 0x3f) >> 4 != 2)) {
      u_val2 = 6;
    }
    else if ((int)((uint)*(byte *)(ctx + 0x215A) * 0x10000000) < 0) {
      u_val2 = 0;
    }
    else if (*(int *)(ctx + 8) == 0) {
      if (cStack_15 == '\x01') {
        u_val2 = 1;
      }
      else if (cStack_15 == '\x03') {
        u_val2 = 2;
      }
      else {
        u_val2 = 3;
      }
    }
    else {
      u_val2 = 4;
    }
  }
  else {
    u_val2 = 5;
  }
  return u_val2;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803EE50 @ 0x0803EE50
// =============================================================================
u32 ScriptEngine_Routine_0803EE50(int ctx)

{
  char c_char1;
  undefined4 u_val2;
  undefined1 stack_val_10;
  undefined1 stack_val_f;
  undefined1 stack_val_e;
  char cStack_d;
  
  ScriptEngine_Routine_0803D52C(&stack_val_10,ctx + 0x10);
  c_char1 = ScriptEngine_Routine_0803D644(stack_val_f,stack_val_e);
  if (c_char1 == '\0') {
    if (cStack_d == '\x01') {
      if (*(int *)(ctx + 8) == 0) {
        u_val2 = 2;
      }
      else {
        u_val2 = 3;
      }
    }
    else {
      u_val2 = 1;
    }
  }
  else {
    u_val2 = 4;
  }
  return u_val2;
}

// =============================================================================
// Function: ScriptEngine_HandleDialogTrigger @ 0x0803EE94
// =============================================================================
u32 ScriptEngine_HandleDialogTrigger(undefined4 *ctx)

{
  
  ctx[0xd3] = gRomData_080E7810;
  *ctx = 0;
  ctx[0x6d] = 0;
  gba_memset(ctx + 9,0,400);
  return ctx;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803EEC8 @ 0x0803EEC8
// =============================================================================
void ScriptEngine_Routine_0803EEC8(int ctx,uint opcode)

{
  
  *(undefined4 *)(ctx + 0x34c) = gRomData_080E7810;
  if ((opcode & 1) != 0) {
    CppRuntime_FreeMemory(ctx);
  }
  return;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803EEEC @ 0x0803EEEC
// =============================================================================
u32 ScriptEngine_Routine_0803EEEC(undefined4 *ctx,int opcode)

{
  int i_val1;
  undefined4 u_val2;
  int i_val3;
  uint u_val4;
  int i_val5;
  int stack_val_2c;
  uint stack_val_28;
  int stack_val_24;
  int stack_val_20;
  int stack_val_1c;
  
  if (opcode != 0) {
    gba_memcpy(&stack_val_2c,opcode,0xc);
    u_val4 = 0xc;
    if ((stack_val_2c == 0x46464952) && (stack_val_24 == 0x20524353)) {
      ctx[1] = 0;
      if (0xb < stack_val_28) {
        do {
          gba_memcpy(&stack_val_20,opcode + u_val4,8);
          i_val5 = u_val4 + 8;
          if (stack_val_20 == 0x45444F43) {
            ctx[2] = 0;
            ctx[3] = *(undefined4 *)(opcode + i_val5);
            ctx[1] = (undefined4 *)(opcode + i_val5) + 1;
          }
          else if (stack_val_20 == 0x20525453) {
            i_val3 = *(int *)(opcode + i_val5);
            ctx[4] = i_val3;
            i_val1 = opcode + u_val4 + 0xc;
            ctx[5] = i_val1;
            ctx[6] = i_val1 + i_val3 * 4;
          }
          else if (stack_val_20 == 0x504D554A) {
            ctx[7] = *(undefined4 *)(opcode + i_val5);
            ctx[8] = (undefined4 *)(opcode + i_val5) + 1;
          }
          u_val4 = i_val5 + stack_val_1c;
        } while (u_val4 <= stack_val_28);
      }
      if (ctx[1] != 0) {
        ctx[0x6d] = 0;
        gba_memset(ctx + 9,0,400);
        ctx[0xd2] = 0;
        gba_memset(ctx + 0x6e,0,400);
        u_val2 = 1;
        *ctx = 1;
        goto LAB_0803efca;
      }
    }
  }
  u_val2 = 0;
LAB_0803efca:
  return u_val2;
}

// =============================================================================
// Function: AScriptEngine_Execute @ 0x0803EFD8
// =============================================================================
u32 AScriptEngine_Execute(int *arg_1)

{
  int i_val1;
  
  if ((*arg_1 != 0) && (*arg_1 == 1)) {
    do {
      i_val1 = ScriptEngine_Routine_0803F0E0(arg_1);
      if (i_val1 + 3U < 6) {
        switch(*(uint *)(PTR_case_0803F004_0803f000 + (i_val1 + 3U) * 4) & 0xfffffffe) {
        case 0x803f004:
        case 0x803f01c:
          *arg_1 = 0;
        }
      }
    } while (i_val1 == 0);
  }
  return *arg_1;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803F084 @ 0x0803F084
// =============================================================================
u32 ScriptEngine_Routine_0803F084(int ctx,int opcode)

{
  char c_char1;
  int i_val2;
  
  c_char1 = ScriptEngine_Routine_0803F03C();
  opcode = opcode + *(int *)(ctx + 4);
  i_val2 = (uint)*(byte *)(opcode + 1) + (uint)*(byte *)(opcode + 2) * 0x100;
  if (c_char1 != '\0') {
    i_val2 = i_val2 + *(int *)(ctx + 0x348);
  }
  return i_val2;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803F0B4 @ 0x0803F0B4
// =============================================================================
void ScriptEngine_Routine_0803F0B4(int ctx,int opcode)

{
  char c_char1;
  uint u_val2;
  
  c_char1 = ScriptEngine_Routine_0803F03C();
  u_val2 = (uint)*(byte *)(opcode + *(int *)(ctx + 4) + 1);
  if (c_char1 != '\0') {
    u_val2 = u_val2 + *(int *)(ctx + 0x348);
  }
  return u_val2;
}

// =============================================================================
// Function: ScriptEngine_GetStringById @ 0x0803F7E0
// =============================================================================
u32 ScriptEngine_GetStringById(int ctx,uint opcode)

{
  int vel_x;
  
  vel_x = gRomData_080F9EA4;
  if (opcode <= *(uint *)(ctx + 0x10)) {
    vel_x = *(int *)(ctx + 0x18) + *(int *)(opcode * 4 + *(int *)(ctx + 0x14));
  }
  return vel_x;
}

// =============================================================================
// Function: ScriptEngine_StartEventScript @ 0x0803F804
// =============================================================================
void ScriptEngine_StartEventScript(int ctx,undefined4 opcode)

{
  
  ScriptEngine_HandleDialogTrigger();
  *(undefined4 *)(ctx + 0x34c) = gRomData_080E7824;
  *(undefined4 *)(ctx + 0x350) = opcode;
  *(undefined4 *)(ctx + 0x354) = 0;
  *(undefined4 *)(ctx + 0x358) = 0;
  return ctx;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803F83C @ 0x0803F83C
// =============================================================================
u32 ScriptEngine_Routine_0803F83C(int ctx,undefined4 opcode,undefined4 arg1)

{
  
  ScriptEngine_HandleDialogTrigger();
  *(undefined4 *)(ctx + 0x34c) = gRomData_080E7824;
  *(undefined4 *)(ctx + 0x350) = opcode;
  *(undefined4 *)(ctx + 0x354) = arg1;
  *(undefined4 *)(ctx + 0x358) = 0;
  return ctx;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803F878 @ 0x0803F878
// =============================================================================
void ScriptEngine_Routine_0803F878(int ctx,int opcode,undefined4 arg1)

{
  
  ScriptEngine_Routine_0803EEEC(ctx,*(undefined4 *)(opcode * 4 + gRomData_080F89D4));
  *(undefined4 *)(ctx + 0x358) = arg1;
  return;
}

// =============================================================================
// Function: ScriptEngine_PushStack32 @ 0x0803F8B8
// =============================================================================
void ScriptEngine_PushStack32(int ctx,undefined4 opcode)

{
  uint u_val1;
  
  u_val1 = *(uint *)(ctx + 0x1b4);
  if (u_val1 < 100) {
    *(undefined4 *)(ctx + 0x24 + u_val1 * 4) = opcode;
    *(uint *)(ctx + 0x1b4) = u_val1 + 1;
  }
  return;
}

// =============================================================================
// Function: ScriptEngine_Routine_08045584 @ 0x08045584
// =============================================================================
u32 ScriptEngine_Routine_08045584(int ctx,undefined4 opcode,char arg1)

{
  int i_val1;
  int i_val2;
  undefined4 u_val3;
  
  i_val1 = NPC_Routine_080A0878(*(int *)(ctx + 0x350) + 0x1CD4);
  if (i_val1 != 0) {
    if (arg1 == '\0') {
      i_val2 = NPC_Routine_0809E49C(i_val1);
      if (i_val2 == 5) {
        u_val3 = NPC_Routine_0809E4A4(i_val1);
        goto LAB_080455d0;
      }
    }
    else {
      i_val2 = NPC_Routine_0809E4AC(i_val1);
      if (i_val2 == 4) {
        u_val3 = NPC_Routine_0809E4B4(i_val1);
        goto LAB_080455d0;
      }
    }
  }
  u_val3 = 0;
LAB_080455d0:
  return u_val3;
}

// =============================================================================
// Function: ScriptEngine_Routine_080455D8 @ 0x080455D8
// =============================================================================
undefined8
ScriptEngine_Routine_080455D8(int ctx,undefined2 opcode,undefined4 arg1,uint arg2,char arg_5)

{
  char c_char1;
  undefined4 u_val2;
  int i_val3;
  uint u_val4;
  
  c_char1 = NPC_Routine_0809C694(*(int *)(ctx + 0x350) + 0x214C,opcode);
  if (c_char1 == '\0') {
    i_val3 = NPC_Routine_080A0878(*(int *)(ctx + 0x350) + 0x1CD4,arg1);
    if (i_val3 != 0) {
      if (arg_5 == '\0') {
        u_val4 = NPC_Routine_0809E49C();
      }
      else {
        u_val4 = NPC_Routine_0809E4AC();
      }
      if (arg2 <= u_val4) {
        u_val2 = 2;
        goto LAB_08045632;
      }
    }
    u_val2 = 0;
  }
  else {
    u_val2 = 1;
  }
LAB_08045632:
  return u_val2;
}

// =============================================================================
// Function: ScriptEngine_Routine_08045638 @ 0x08045638
// =============================================================================
undefined4
ScriptEngine_Routine_08045638(int ctx,undefined2 opcode,undefined4 arg1,int arg2,uint arg_5,
             char arg_6)

{
  bool b_flag1;
  byte b_flag2;
  char c_char3;
  byte b_flag4;
  int i_val5;
  uint u_val6;
  byte b_flag7;
  uint u_val8;
  int i_val9;
  byte stack_val_3c;
  byte stack_val_3b;
  byte stack_bytes_3a [2];
  byte stack_bytes_38 [4];
  undefined4 stack_val_34;
  byte stack_val_2c;
  byte stack_val_28;
  byte *pbStack_24;
  
  i_val9 = *(int *)(ctx + 0x350) + 0x214C;
  stack_val_34 = arg1;
  i_val5 = NPC_Routine_080A0878(*(int *)(ctx + 0x350) + 0x1CD4,arg1);
  if (i_val5 != 0) {
    if (arg2 == 1) {
      if (arg_6 == '\0') {
        u_val6 = NPC_Routine_0809E49C(i_val5);
      }
      else {
        u_val6 = NPC_Routine_0809E4AC(i_val5);
      }
      if (u_val6 < arg_5) {
        NPC_Routine_0809C6AC(i_val9,opcode);
      }
    }
    else if (arg2 < 2) {
      if ((arg2 == 0) && (c_char3 = NPC_Routine_0809C694(i_val9,opcode), c_char3 != '\0')) {
        NPC_Routine_0809C6B0(i_val9,opcode);
      }
    }
    else if (arg2 == 2) {
      while( true ) {
        if (arg_6 == '\0') {
          u_val6 = NPC_Routine_0809E49C(i_val5);
        }
        else {
          u_val6 = NPC_Routine_0809E4AC(i_val5);
        }
        if (arg_5 <= u_val6) break;
        if (arg_6 == '\0') {
          Bachelorette_IncrementTalkCount(i_val5);
        }
        else {
          Bachelorette_IncrementGiftCount(i_val5);
        }
      }
      c_char3 = NPC_Routine_0809C694(i_val9,opcode);
      if (c_char3 != '\0') {
        NPC_Routine_0809C6B0(i_val9,opcode);
      }
      if ((arg_6 == '\0') && (i_val5 = NPC_Routine_0809E49C(i_val5), i_val5 == 5)) {
        stack_val_3c = *(byte *)(*(int *)(ctx + 0x350) + 0x10);
        b_flag4 = *(byte *)(*(int *)(ctx + 0x350) + 0x11);
        u_val6 = (b_flag4 & 0x7f) >> 2;
        u_val8 = u_val6 + 7;
        b_flag1 = 0x1d < u_val8;
        if (b_flag1) {
          u_val8 = u_val6 - 0x17;
        }
        u_val6 = (b_flag4 & 3) + (uint)b_flag1;
        stack_bytes_3a[0] = b_flag4 & 0x80 | (byte)u_val6 & 3 | (byte)((u_val8 & 0x1f) << 2);
        if (((u_val6 & 3) == 0) && ((u_val8 & 0x1f) + 1 < 8)) {
          b_flag4 = (stack_val_3c & 7) + 1;
          if (6 < b_flag4) {
            b_flag4 = 0;
            if (stack_val_3c >> 3 < 0x1d) {
              stack_val_3c = ((stack_val_3c >> 3) + 1) * '\b';
            }
          }
          stack_val_3c = stack_val_3c & 0xf8 | b_flag4 & 7;
        }
        stack_val_3b = Farmer_GetBirthday(*(int *)(ctx + 0x350) + 0x1BD8);
        b_flag4 = NPC_Routine_0809FE74(*(int *)(ctx + 0x350) + 0x1CD4,stack_val_34,&stack_val_3b);
        stack_val_2c = stack_val_2c & 0x80;
        pbStack_24 = stack_bytes_38;
        while( true ) {
          b_flag1 = false;
          if ((((stack_bytes_3a[0] & 0x7f) == (b_flag4 & 0x7f)) ||
              ((stack_bytes_3a[0] & 0x7f) == (stack_val_3b & 0x7f))) ||
             (c_char3 = NPC_Routine_080ADBB4(stack_bytes_3a), c_char3 != '\0')) {
            b_flag1 = true;
          }
          if (!b_flag1) break;
          u_val6 = ((stack_bytes_3a[0] & 0x7f) >> 2) + 1;
          if (u_val6 == 0x1e) {
            b_flag7 = (stack_bytes_3a[0] & 3) + 1 & 3;
            stack_val_28 = stack_val_28 & 0xfc | b_flag7;
            stack_bytes_3a[0] = stack_bytes_3a[0] & 0xfc | b_flag7;
            u_val6 = 0;
          }
          b_flag7 = stack_bytes_3a[0] & 0x83 | (byte)((u_val6 & 0x1f) << 2);
          b_flag2 = stack_bytes_3a[0] & 3;
          stack_bytes_3a[0] = b_flag7;
          if (b_flag2 == 0 && (u_val6 & 0x1f) == 0) {
            b_flag7 = (stack_val_3c & 7) + 1;
            if (6 < b_flag7) {
              b_flag7 = 0;
              if (stack_val_3c >> 3 < 0x1d) {
                stack_val_3c = ((stack_val_3c >> 3) + 1) * '\b';
              }
            }
            stack_val_3c = stack_val_3c & 0xf8 | b_flag7 & 7;
          }
        }
        i_val5 = *(int *)(ctx + 0x350);
        stack_bytes_38[0] = stack_val_3c;
        pbStack_24[1] = stack_bytes_3a[0];
        NPC_Routine_080A1478(i_val5 + 0x1CD4,pbStack_24);
      }
    }
  }
  return;
}

// =============================================================================
// Function: ScriptEngine_Routine_0804590C @ 0x0804590C
// =============================================================================
u32 ScriptEngine_Routine_0804590C(uint *ctx,uint opcode)

{
  byte b_flag1;
  int i_val2;
  uint *p_uint3;
  uint u_val4;
  uint u_val5;
  uint sub_ret_val;
  undefined4 u_val6;
  uint u_val7;
  undefined4 u_val8;
  undefined *p_uint9;
  undefined1 u_val10;
  uint stack_val_18;
  uint stack_val_14;
  
  if (0x24D < opcode) {
    ScriptEngine_Routine_08048FEC();
    opcode = sub_ret_val;
  }
  switch(*(uint *)(opcode * 4 + gInlineTable_08045934) & 0xfffffffe) {
  case 0x804626c:
    stack_val_18 = 200;
    stack_val_14 = (uint)(*(byte *)(ctx[0xd4] + 0x10) >> 3) * 7 +
                (*(byte *)(ctx[0xd4] + 0x10) & 7);
    ctx = &stack_val_14;
    p_uint3 = ctx;
    if (199 < stack_val_14) {
      p_uint3 = &stack_val_18;
    }
    goto LAB_0804688e;
  case 0x8046296:
    ScriptEngine_Routine_08048F32(*(undefined1 *)(ctx[0xd4] + 0x11));
  case 0x80462a4:
    u_val5 = (uint)*(byte *)(ctx[0xd4] + 0x11);
    goto LAB_08046812;
  case 0x80462b0:
    b_flag1 = *(byte *)(ctx[0xd4] + 0x12);
    goto ScriptEngine_Routine_08047766;
  case 0x80462be:
    ScriptEngine_Routine_08048FEE((*(ushort *)(ctx[0xd4] + 0x12) & 0x7ff) >> 5);
  case 0x80462d0:
    u_val5 = (uint)*(byte *)(ctx[0xd4] + 0x11);
    u_val5 = ((u_val5 & 0x7f) >> 2) +
            (u_val5 & 3) * 0x1e + ((*(byte *)(ctx[0xd4] + 0x10) & 7) + 6) * 0x78;
    if (6 < u_val5) {
      u_val5 = math_modsi3(u_val5,7);
    }
    u_val5 = u_val5 & 7;
    break;
  case 0x8046312:
    u_val5 = *(uint *)(ctx[0xd4] + 8);
    break;
  case 0x8046320:
    ScriptEngine_Routine_08048FEE(*(undefined4 *)(ctx[0xd4] + 0xc));
  case 0x804632e:
    u_val5 = Farmer_GetBirthday(ctx[0xd4] + _LAB_08046344);
    goto ScriptEngine_Routine_08048F32;
  case 0x8046348:
    u_val5 = Farmer_GetBirthday(ctx[0xd4] + 0x1BD8);
    goto LAB_08046812;
  case 0x8046360:
    u_val5 = Farmer_GetStamina(ctx[0xd4] + _LAB_08046374);
    break;
  case 0x8046378:
    u_val5 = Farmer_GetMaxStamina(ctx[0xd4] + _LAB_0804638c);
    break;
  case 0x8046390:
    u_val5 = Farmer_GetFatigue(ctx[0xd4] + _LAB_080463a4);
    break;
  case 0x80463a8:
    u_val5 = Farmer_AteMysteryBerry(ctx[0xd4] + 0x1BD8);
    goto LAB_080466d4;
  case 0x80463c0:
    u_val5 = Farm_Routine_08009AF8(ctx[0xd4] + 0x14);
    break;
  case 0x80463d2:
    u_val5 = Building_Routine_0800CE6C(ctx[0xd4] + 0x5f0);
    break;
  case 0x80463e8:
    u_val5 = Building_Routine_0800C568(ctx[0xd4] + 0x410);
    break;
  case 0x80463fe:
    u_val5 = Farm_Routine_08009B18(ctx[0xd4] + 0x14);
    goto LAB_080466d4;
  case 0x804640e:
    u_val5 = Building_Routine_0800BF14(ctx[0xd4] + 500);
    break;
  case 0x8046424:
    u_val5 = Building_Routine_0800C560(ctx[0xd4] + 0x410);
    break;
  case 0x804643a:
    u_val5 = Building_Routine_0800CE64(ctx[0xd4] + 0x5f0);
    break;
  case 0x8046450:
    u_val5 = Farmer_Routine_08010E48(ctx[0xd4]);
    goto LAB_080466d4;
  case 0x804645e:
    u_val5 = Farmer_Routine_08010E50(ctx[0xd4]);
    goto LAB_080466d4;
  case 0x804646c:
    u_val5 = Farmer_Routine_08010E58(ctx[0xd4]);
    goto LAB_080466d4;
  case 0x804647a:
    u_val5 = Building_Routine_0800BF84(ctx[0xd4] + 500);
    goto LAB_080466d4;
  case 0x804648e:
    p_uint3 = ctx + 0xd4;
    ctx = (uint *)0x01f4;
    i_val2 = Building_Routine_0800C048(*p_uint3 + 500);
    goto LAB_080464a0;
  case 0x80464ae:
    goto case_080464AE;
  case 0x80464c2:
    u_val5 = Building_Routine_0800BF94(ctx[0xd4] + 500);
    goto LAB_080466d4;
  case 0x80464d6:
    u_val5 = Building_Routine_0800BF8C(ctx[0xd4] + 500);
    goto LAB_080466d4;
  case 0x80464ea:
    u_val5 = Building_Routine_0800BFAC(ctx[0xd4] + 500);
    goto LAB_080466d4;
  case 0x80464fe:
    u_val5 = Building_Routine_0800BFB4(ctx[0xd4] + 500);
    goto LAB_080466d4;
  case 0x8046512:
    u_val5 = Building_Routine_0800BF9C(ctx[0xd4] + 500);
    goto LAB_080466d4;
  case 0x8046526:
    p_uint3 = ctx + 0xd4;
    ctx = (uint *)0x01f4;
    i_val2 = Building_Routine_0800C07C(*p_uint3 + 500);
    goto LAB_080464a0;
  case 0x804653a:
    u_val5 = Building_Routine_0800BFCC(ctx[0xd4] + 500);
    goto LAB_080466d4;
  case 0x804654e:
    u_val5 = Building_Routine_0800BFD4(ctx[0xd4] + 500);
    goto LAB_080466d4;
  case 0x8046562:
    u_val5 = Building_Routine_0800BFDC(ctx[0xd4] + 500);
    goto LAB_080466d4;
  case 0x8046576:
    u_val5 = Building_Routine_0800BFE4(ctx[0xd4] + 500);
    goto LAB_080466d4;
  case 0x804658a:
    u_val5 = Building_Routine_0800BFEC(ctx[0xd4] + 500);
    goto LAB_080466d4;
  case 0x804659e:
    u_val5 = Building_Routine_0800BFF4(ctx[0xd4] + 500);
    goto LAB_080466d4;
  case 0x80465b2:
    u_val5 = Building_Routine_0800BFFC(ctx[0xd4] + 500);
    goto LAB_080466d4;
  case 0x80465c6:
    u_val5 = Building_Routine_0800C004(ctx[0xd4] + 500);
    goto LAB_080466d4;
  case 0x80465da:
    u_val5 = Building_Routine_0800C00C(ctx[0xd4] + 500);
    goto LAB_080466d4;
  case 0x80465ee:
    u_val5 = Building_Routine_0800BFBC(ctx[0xd4] + 500);
    goto LAB_080466d4;
  case 0x8046602:
    u_val5 = Farmer_Routine_0800F5D8(ctx[0xd4] + _LAB_08046618);
    break;
  case 0x804661c:
    u_val5 = Animal_Routine_0809BB34(ctx[0xd4] + _LAB_08046630);
    break;
  case 0x8046634:
    u_val5 = Animal_Routine_0809B228(ctx[0xd4] + _LAB_08046648);
    break;
  case 0x804664c:
    u_val5 = Farmer_GetStepCount(ctx[0xd4] + _LAB_08046660);
    break;
  case 0x8046664:
    u_val5 = Building_Routine_0800C014(ctx[0xd4] + 500);
    break;
  case 0x804667a:
    u_val5 = NPC_Routine_080A039C(ctx[0xd4] + _LAB_08046690);
    break;
  case 0x8046694:
    i_val2 = NPC_Routine_080A0A04(ctx[0xd4] + _LAB_080466b4);
    if (i_val2 == 0) {
      ScriptEngine_Routine_08048FEC();
    }
    u_val5 = NPC_Routine_0809EAD8();
    break;
  case 0x80466b8:
    i_val2 = NPC_Routine_080A0A04(ctx[0xd4] + _LAB_080466dc);
    if (i_val2 == 0) {
      ScriptEngine_Routine_08048FEC();
    }
    u_val5 = NPC_Routine_0809EAE0();
LAB_080466d4:
    u_val5 = u_val5 & 0xff;
    break;
  case 0x80466e0:
    i_val2 = NPC_Routine_080A0A04(ctx[0xd4] + _LAB_08046700);
    if (i_val2 == 0) {
      ScriptEngine_Routine_08048FEC();
    }
    u_val5 = NPC_Routine_0809EAD0();
    goto ScriptEngine_Routine_08048F32;
  case 0x8046704:
    i_val2 = NPC_Routine_080A0A04(ctx[0xd4] + 0x1CD4);
    if (i_val2 == 0) {
      ScriptEngine_Routine_08048FEC();
    }
    u_val5 = NPC_Routine_0809EAD0();
    goto LAB_08046812;
  case 0x8046728:
    u_val6 = 0x13;
    goto LAB_0804674a;
  case 0x804672e:
    u_val6 = 3;
    goto LAB_0804674a;
  case 0x8046734:
    u_val6 = 0xc;
    goto LAB_0804674a;
  case 0x804673a:
    u_val6 = 0x15;
    goto LAB_0804674a;
  case 0x8046740:
    u_val6 = 0x19;
    goto LAB_0804674a;
  case 0x8046746:
    u_val6 = 0x1f;
LAB_0804674a:
    u_val5 = ScriptEngine_Routine_08045584(ctx,u_val6,0);
    break;
  case 0x8046754:
    u_val6 = 0x13;
    goto LAB_08046770;
  case 0x804675a:
    u_val6 = 3;
    goto LAB_08046770;
  case 0x8046760:
    u_val6 = 0xc;
    goto LAB_08046770;
  case 0x8046766:
    u_val6 = 0x15;
    goto LAB_08046770;
  case 0x804676c:
    u_val6 = 0x19;
LAB_08046770:
    u_val5 = ScriptEngine_Routine_08045584(ctx,u_val6,1);
    break;
  case 0x804677a:
    i_val2 = ctx[0xd4] + 0x214C;
    u_val5 = (uint)*(byte *)(i_val2 + 0x1c);
    if ((((((u_val5 & 1) << 1 | (uint)(*(byte *)(i_val2 + 0x1b) >> 7)) != 2) &&
         ((u_val5 & 7) >> 1 != 2)) && ((u_val5 & 0x1f) >> 3 != 2)) &&
       ((((u_val5 & 0x7f) >> 5 != 2 && ((*(ushort *)(i_val2 + 0x1c) & 0x1ff) >> 7 != 2)) &&
        ((*(byte *)(ctx[0xd4] + 0x2197) & 3) != 2)))) {
      ScriptEngine_Routine_08048FEC();
    }
    u_val5 = ctx[0xd4];
    ctx = 0x2144;
    goto LAB_0804688c;
  case 0x80467e4:
    i_val2 = NPC_Routine_080A1480(ctx[0xd4] + _LAB_080467fc);
    u_val5 = (uint)*(byte *)(i_val2 + 1);
    goto ScriptEngine_Routine_08048F32;
  case 0x8046800:
    i_val2 = NPC_Routine_080A1480(ctx[0xd4] + _LAB_0804681c);
    u_val5 = (uint)*(byte *)(i_val2 + 1);
LAB_08046812:
    u_val5 = ((u_val5 & 0x7f) >> 2) + 1;
    break;
  case 0x8046820:
    u_val5 = (uint)*(byte *)(ctx[0xd4] + _LAB_08046834);
    break;
  case 0x8046838:
    i_val2 = Farm_Routine_08009C3C(ctx[0xd4] + 0x14);
LAB_080464a0:
    while (i_val2 != 0) {
      ScriptEngine_Routine_08048FEE(1);
case_080464AE:
      p_uint3 = ctx + 0xd4;
      ctx = (uint *)0x01f4;
      i_val2 = Building_Routine_0800C060(*p_uint3 + 500);
    }
    u_val5 = 0;
    break;
  case 0x8046848:
    i_val2 = Farm_Routine_08009C3C(ctx[0xd4] + 0x14);
    if (i_val2 == 0) {
      ScriptEngine_Routine_08048FEC();
    }
    u_val5 = Animal_Routine_0809BC10();
    break;
  case 0x8046866:
    i_val2 = Farm_Routine_08009C3C(ctx[0xd4] + 0x14);
    if (i_val2 == 0) {
      ScriptEngine_Routine_08048FEC();
    }
    u_val5 = Animal_Routine_0809B228();
    break;
  case 0x8046884:
    u_val5 = *_LAB_08046894;
    ctx = (uint *)0x0368;
LAB_0804688c:
    p_uint3 = (uint *)(u_val5 + (int)ctx);
LAB_0804688e:
    ScriptEngine_Routine_08048FEE(*p_uint3);
case_08046898:
    u_val10 = 0;
    u_val6 = 0x46;
    u_val8 = 0x13;
    goto LAB_08046bc6;
  case 0x8046898:
    goto case_08046898;
  case 0x80468a6:
    u_val10 = 0;
    u_val6 = 0x47;
    u_val8 = 0x13;
    goto LAB_08046bdc;
  case 0x80468b4:
    u_val10 = 0;
    u_val6 = 0x49;
    u_val8 = 0x13;
    goto LAB_08046bf2;
  case 0x80468c2:
    u_val10 = 0;
    u_val6 = 0x4a;
    u_val8 = 0x13;
    goto LAB_08046c08;
  case 0x80468d0:
    u_val10 = 0;
    u_val6 = 0x4b;
    u_val8 = 0x13;
    goto LAB_08046c2a;
  case 0x80468de:
    u_val6 = 0x4c;
    u_val8 = 0x13;
    goto LAB_08046a4e;
  case 0x80468ec:
    u_val10 = 0;
    u_val6 = 0x4e;
    u_val8 = 3;
    goto LAB_08046bc6;
  case 0x80468fa:
    u_val10 = 0;
    u_val6 = 0x4f;
    u_val8 = 3;
    goto LAB_08046bdc;
  case 0x8046908:
    u_val10 = 0;
    u_val6 = 0x50;
    u_val8 = 3;
    goto LAB_08046bf2;
  case 0x8046916:
    u_val10 = 0;
    u_val6 = 0x52;
    u_val8 = 3;
    goto LAB_08046c08;
  case 0x8046924:
    u_val10 = 0;
    u_val6 = 0x54;
    u_val8 = 3;
    goto LAB_08046c2a;
  case 0x8046932:
    u_val6 = 0x55;
    u_val8 = 3;
    goto LAB_08046a4e;
  case 0x8046940:
    u_val10 = 0;
    u_val6 = 0x57;
    u_val8 = 0x19;
    goto LAB_08046bc6;
  case 0x804694e:
    u_val10 = 0;
    u_val6 = 0x58;
    u_val8 = 0x19;
    goto LAB_08046bdc;
  case 0x804695c:
    u_val10 = 0;
    u_val6 = 0x5a;
    u_val8 = 0x19;
    goto LAB_08046bf2;
  case 0x804696a:
    u_val10 = 0;
    u_val6 = 0x5c;
    u_val8 = 0x19;
    goto LAB_08046c08;
  case 0x8046978:
    u_val10 = 0;
    u_val6 = 0x5e;
    u_val8 = 0x19;
    goto LAB_08046c2a;
  case 0x8046986:
    u_val6 = 0x5f;
    u_val8 = 0x19;
    goto LAB_08046a4e;
  case 0x8046994:
    u_val10 = 0;
    u_val6 = 0x61;
    u_val8 = 0xc;
    goto LAB_08046bc6;
  case 0x80469a2:
    u_val10 = 0;
    u_val6 = 0x62;
    u_val8 = 0xc;
    goto LAB_08046bdc;
  case 0x80469b0:
    u_val10 = 0;
    u_val6 = 100;
    u_val8 = 0xc;
    goto LAB_08046bf2;
  case 0x80469be:
    u_val10 = 0;
    u_val6 = 0x65;
    u_val8 = 0xc;
    goto LAB_08046c08;
  case 0x80469cc:
    u_val10 = 0;
    u_val6 = 0x66;
    u_val8 = 0xc;
    goto LAB_08046c2a;
  case 0x80469da:
    u_val6 = 0x67;
    u_val8 = 0xc;
    goto LAB_08046a4e;
  case 0x80469e8:
    u_val10 = 0;
    u_val6 = 0x69;
    goto LAB_08046bc4;
  case 0x80469f4:
    u_val10 = 0;
    u_val6 = 0x6a;
    goto LAB_08046bda;
  case 0x8046a00:
    u_val10 = 0;
    u_val6 = 0x6b;
    goto LAB_08046bf0;
  case 0x8046a0c:
    u_val10 = 0;
    u_val6 = 0x6d;
    goto LAB_08046c06;
  case 0x8046a18:
    u_val10 = 0;
    u_val6 = 0x6e;
    goto LAB_08046c28;
  case 0x8046a24:
    u_val6 = 0x6f;
    u_val8 = 0x15;
    goto LAB_08046a4e;
  case 0x8046a32:
    u_val6 = 0x172;
    u_val10 = 0;
    u_val8 = 0x1f;
    goto LAB_08046c2a;
  case 0x8046a42:
    u_val8 = 0x1f;
    u_val6 = _LAB_08046a58;
LAB_08046a4e:
    u_val5 = ScriptEngine_Routine_080455D8(ctx,u_val6,u_val8,6,0);
    break;
  case 0x8046a5c:
    u_val10 = 1;
    u_val6 = 0x71;
    u_val8 = 0x13;
    goto LAB_08046bc6;
  case 0x8046a6a:
    u_val10 = 1;
    u_val6 = 0x72;
    u_val8 = 0x13;
    goto LAB_08046bdc;
  case 0x8046a78:
    u_val10 = 1;
    u_val6 = 0x73;
    u_val8 = 0x13;
    goto LAB_08046bf2;
  case 0x8046a86:
    u_val10 = 1;
    u_val6 = 0x74;
    u_val8 = 0x13;
    goto LAB_08046c08;
  case 0x8046a94:
    u_val10 = 1;
    u_val6 = 0x75;
    u_val8 = 0x13;
    goto LAB_08046c2a;
  case 0x8046aa2:
    u_val10 = 1;
    u_val6 = 0x76;
    u_val8 = 0x13;
    goto LAB_08046c2a;
  case 0x8046ab0:
    u_val10 = 1;
    u_val6 = 0x77;
    u_val8 = 0x13;
    goto LAB_08046c2a;
  case 0x8046abe:
    u_val10 = 1;
    u_val6 = 0x7a;
    u_val8 = 3;
    goto LAB_08046bc6;
  case 0x8046acc:
    u_val10 = 1;
    u_val6 = 0x7b;
    u_val8 = 3;
    goto LAB_08046bdc;
  case 0x8046ada:
    u_val10 = 1;
    u_val6 = 0x7c;
    u_val8 = 3;
    goto LAB_08046bf2;
  case 0x8046ae8:
    u_val10 = 1;
    u_val6 = 0x7d;
    u_val8 = 3;
    goto LAB_08046c08;
  case 0x8046af6:
    u_val10 = 1;
    u_val6 = 0x7e;
    u_val8 = 3;
    goto LAB_08046c2a;
  case 0x8046b04:
    u_val10 = 1;
    u_val6 = 0x7f;
    u_val8 = 3;
    goto LAB_08046c2a;
  case 0x8046b12:
    u_val10 = 1;
    u_val6 = 0x82;
    u_val8 = 0x19;
    goto LAB_08046bc6;
  case 0x8046b20:
    u_val10 = 1;
    u_val6 = 0x83;
    u_val8 = 0x19;
    goto LAB_08046bdc;
  case 0x8046b2e:
    u_val10 = 1;
    u_val6 = 0x84;
    u_val8 = 0x19;
    goto LAB_08046bf2;
  case 0x8046b3c:
    u_val10 = 1;
    u_val6 = 0x85;
    u_val8 = 0x19;
    goto LAB_08046c08;
  case 0x8046b4a:
    u_val10 = 1;
    u_val6 = 0x86;
    u_val8 = 0x19;
    goto LAB_08046c2a;
  case 0x8046b58:
    u_val10 = 1;
    u_val6 = 0x87;
    u_val8 = 0x19;
    goto LAB_08046c2a;
  case 0x8046b66:
    u_val10 = 1;
    u_val6 = 0x8a;
    u_val8 = 0xc;
    goto LAB_08046bc6;
  case 0x8046b74:
    u_val10 = 1;
    u_val6 = 0x8b;
    u_val8 = 0xc;
    goto LAB_08046bdc;
  case 0x8046b82:
    u_val10 = 1;
    u_val6 = 0x8c;
    u_val8 = 0xc;
    goto LAB_08046bf2;
  case 0x8046b90:
    u_val10 = 1;
    u_val6 = 0x8d;
    u_val8 = 0xc;
    goto LAB_08046c08;
  case 0x8046b9e:
    u_val10 = 1;
    u_val6 = 0x8e;
    u_val8 = 0xc;
    goto LAB_08046c2a;
  case 0x8046bac:
    u_val10 = 1;
    u_val6 = 0x8f;
    u_val8 = 0xc;
    goto LAB_08046c2a;
  case 0x8046bba:
    u_val10 = 1;
    u_val6 = 0x92;
LAB_08046bc4:
    u_val8 = 0x15;
LAB_08046bc6:
    u_val5 = ScriptEngine_Routine_080455D8(ctx,u_val6,u_val8,1,u_val10);
    break;
  case 0x8046bd0:
    u_val10 = 1;
    u_val6 = 0x93;
LAB_08046bda:
    u_val8 = 0x15;
LAB_08046bdc:
    u_val5 = ScriptEngine_Routine_080455D8(ctx,u_val6,u_val8,2,u_val10);
    break;
  case 0x8046be6:
    u_val10 = 1;
    u_val6 = 0x94;
LAB_08046bf0:
    u_val8 = 0x15;
LAB_08046bf2:
    u_val5 = ScriptEngine_Routine_080455D8(ctx,u_val6,u_val8,3,u_val10);
    break;
  case 0x8046bfc:
    u_val10 = 1;
    u_val6 = 0x95;
LAB_08046c06:
    u_val8 = 0x15;
LAB_08046c08:
    u_val5 = ScriptEngine_Routine_080455D8(ctx,u_val6,u_val8,4,u_val10);
    break;
  case 0x8046c12:
    u_val10 = 1;
    u_val6 = 0x96;
    goto LAB_08046c28;
  case 0x8046c1e:
    u_val10 = 1;
    u_val6 = 0x97;
LAB_08046c28:
    u_val8 = 0x15;
LAB_08046c2a:
    u_val5 = ScriptEngine_Routine_080455D8(ctx,u_val6,u_val8,5,u_val10);
    break;
  case 0x8046c34:
    u_val5 = ctx[0xd4];
    i_val2 = _LAB_08046c44;
    goto ScriptEngine_Routine_08048966;
  case 0x8046c48:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08046c58;
    ScriptEngine_Routine_08048E36(*p_uint3);
  case 0x8046c5c:
    u_val5 = ctx[0xd4];
    ctx = _LAB_08046c6c;
    goto ScriptEngine_Routine_080486B2;
  case 0x8046c70:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08046c80;
    ScriptEngine_Routine_08048E36(*p_uint3);
  case 0x8046c84:
    u_val5 = ctx[0xd4];
    i_val2 = _LAB_08046c94;
    goto ScriptEngine_Routine_08048966;
  case 0x8046c98:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08046ca8;
    ScriptEngine_Routine_08048EC6(*p_uint3);
  case 0x8046cac:
    u_val5 = ctx[0xd4];
    i_val2 = _LAB_08046cbc;
    goto ScriptEngine_Routine_08048F5E;
  case 0x8046cc0:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08046cd0;
    ScriptEngine_Routine_08048E76(*p_uint3);
  case 0x8046cd4:
    u_val5 = ctx[0xd4];
    i_val2 = _LAB_08046ce4;
    goto ScriptEngine_Routine_08048EC6;
  case 0x8046ce8:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08046cf8;
    ScriptEngine_Routine_08048C0E(*p_uint3);
  case 0x8046cfc:
    u_val5 = ctx[0xd4];
    i_val2 = _LAB_08046d0c;
    goto ScriptEngine_Routine_08048F46;
  case 0x8046d10:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08046d20;
    ScriptEngine_Routine_08048FC6(*p_uint3);
  case 0x8046d24:
    u_val5 = ctx[0xd4];
    i_val2 = _LAB_08046d34;
    goto ScriptEngine_Routine_08048EC6;
  case 0x8046d38:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08046d48;
    ScriptEngine_Routine_08048F5E(*p_uint3);
  case 0x8046d4c:
    u_val5 = ctx[0xd4];
    i_val2 = _LAB_08046d5c;
    goto ScriptEngine_Routine_08048FC6;
  case 0x8046d60:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08046d70;
    ScriptEngine_Routine_08048F16(*p_uint3);
  case 0x8046d74:
    u_val5 = ctx[0xd4];
    i_val2 = _LAB_08046d84;
    goto ScriptEngine_Routine_08048C0E;
  case 0x8046d88:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08046d98;
    ScriptEngine_Routine_08048F5E(*p_uint3);
  case 0x8046d9c:
    u_val5 = ctx[0xd4];
    i_val2 = _LAB_08046dac;
    goto ScriptEngine_Routine_08048F76;
  case 0x8046db0:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08046dc0;
    ScriptEngine_Routine_08048FDE(*p_uint3);
  case 0x8046dc4:
    u_val5 = ctx[0xd4];
    i_val2 = _LAB_08046dd4;
    goto ScriptEngine_Routine_08048EC6;
  case 0x8046dd8:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08046de8;
    ScriptEngine_Routine_08048F46(*p_uint3);
  case 0x8046dec:
    u_val5 = ctx[0xd4];
    i_val2 = _LAB_08046dfc;
    goto ScriptEngine_Routine_08048F76;
  case 0x8046e00:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08046e10;
    ScriptEngine_Routine_08048662(*p_uint3);
  case 0x8046e14:
    u_val5 = ctx[0xd4];
    ctx = _LAB_08046e24;
    goto ScriptEngine_Routine_0804811A;
  case 0x8046e28:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08046e38;
    ScriptEngine_Routine_08048966(*p_uint3);
  case 0x8046e3c:
    u_val5 = ctx[0xd4];
    ctx = _LAB_08046e4c;
    goto ScriptEngine_Routine_080486B2;
  case 0x8046e50:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08046e60;
    ScriptEngine_Routine_08048662(*p_uint3);
  case 0x8046e64:
    u_val5 = ctx[0xd4];
    ctx = _LAB_08046e74;
    goto ScriptEngine_Routine_08048626;
  case 0x8046e78:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08046e88;
    ScriptEngine_Routine_08048966(*p_uint3);
  case 0x8046e8c:
    u_val5 = ctx[0xd4];
    ctx = _LAB_08046e9c;
    goto ScriptEngine_Routine_080486B2;
  case 0x8046ea0:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08046eb0;
    ScriptEngine_Routine_08048662(*p_uint3);
  case 0x8046eb4:
    u_val5 = (uint)(*(byte *)(ctx[0xd4] + _LAB_08046ed0) >> 7);
    u_val4 = (uint)*(byte *)(ctx[0xd4] + _LAB_08046ed4);
    u_val7 = 1;
    goto ScriptEngine_Routine_08048A7C;
  case 0x8046ed8:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08046ee8;
    ScriptEngine_Routine_08048966(*p_uint3);
  case 0x8046eec:
    u_val5 = ctx[0xd4];
    ctx = _LAB_08046efc;
    goto ScriptEngine_Routine_080486B2;
  case 0x8046f00:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08046f10;
    ScriptEngine_Routine_08048662(*p_uint3);
  case 0x8046f14:
    u_val5 = ctx[0xd4];
    ctx = _LAB_08046f24;
    goto ScriptEngine_Routine_08048626;
  case 0x8046f28:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08046f38;
    ScriptEngine_Routine_08048966(*p_uint3);
  case 0x8046f3c:
    u_val5 = ctx[0xd4];
    ctx = _LAB_08046f4c;
    goto ScriptEngine_Routine_080486B2;
  case 0x8046f50:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08046f60;
    ScriptEngine_Routine_08048662(*p_uint3);
  case 0x8046f64:
    u_val5 = ctx[0xd4];
    ctx = _LAB_08046f74;
    goto ScriptEngine_Routine_0804811A;
  case 0x8046f78:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08046f88;
    ScriptEngine_Routine_08048966(*p_uint3);
  case 0x8046f8c:
    u_val5 = ctx[0xd4];
    ctx = _LAB_08046f9c;
    goto ScriptEngine_Routine_080486B2;
  case 0x8046fa0:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08046fb0;
    ScriptEngine_Routine_08048662(*p_uint3);
  case 0x8046fb4:
    u_val5 = ctx[0xd4];
    ctx = _LAB_08046fc4;
    goto ScriptEngine_Routine_08048626;
  case 0x8046fc8:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08046fd8;
    ScriptEngine_Routine_08048966(*p_uint3);
  case 0x8046fdc:
    u_val5 = ctx[0xd4];
    ctx = _LAB_08046fec;
    goto ScriptEngine_Routine_080486B2;
  case 0x8046ff0:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08047000;
    ScriptEngine_Routine_08048662(*p_uint3);
  case 0x8047004:
    u_val5 = (uint)(*(byte *)(ctx[0xd4] + _LAB_08047020) >> 7);
    u_val4 = (uint)*(byte *)(ctx[0xd4] + _LAB_08047024);
    u_val7 = 1;
    goto ScriptEngine_Routine_08048A7C;
  case 0x8047028:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08047038;
    ScriptEngine_Routine_08048966(*p_uint3);
  case 0x804703c:
    u_val5 = ctx[0xd4];
    ctx = _LAB_0804704c;
    goto ScriptEngine_Routine_080486B2;
  case 0x8047050:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08047060;
    ScriptEngine_Routine_08048662(*p_uint3);
  case 0x8047064:
    u_val5 = ctx[0xd4];
    ctx = _LAB_08047074;
    goto ScriptEngine_Routine_08048626;
  case 0x8047078:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08047088;
    ScriptEngine_Routine_08048966(*p_uint3);
  case 0x804708c:
    u_val5 = ctx[0xd4];
    ctx = _LAB_0804709c;
    goto ScriptEngine_Routine_080486B2;
  case 0x80470a0:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_080470b0;
    ScriptEngine_Routine_08048662(*p_uint3);
  case 0x80470b4:
    u_val5 = ctx[0xd4];
    ctx = _LAB_080470c4;
    goto ScriptEngine_Routine_0804811A;
  case 0x80470c8:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_080470d8;
    ScriptEngine_Routine_08048966(*p_uint3);
  case 0x80470dc:
    u_val5 = ctx[0xd4];
    ctx = _LAB_080470ec;
    goto ScriptEngine_Routine_080486B2;
  case 0x80470f0:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08047100;
    ScriptEngine_Routine_08048662(*p_uint3);
  case 0x8047104:
    u_val5 = ctx[0xd4];
    ctx = _LAB_08047114;
    goto ScriptEngine_Routine_08048626;
  case 0x8047118:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08047128;
    ScriptEngine_Routine_08048966(*p_uint3);
  case 0x804712c:
    u_val5 = ctx[0xd4];
    ctx = _LAB_0804713c;
    goto ScriptEngine_Routine_080486B2;
  case 0x8047140:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08047150;
    ScriptEngine_Routine_08048662(*p_uint3);
  case 0x8047154:
    u_val5 = (uint)(*(byte *)(ctx[0xd4] + _LAB_08047170) >> 7);
    u_val4 = (uint)*(byte *)(ctx[0xd4] + _LAB_08047174);
    u_val7 = 1;
    goto ScriptEngine_Routine_08048A7C;
  case 0x8047178:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08047188;
    ScriptEngine_Routine_08048966(*p_uint3);
  case 0x804718c:
    u_val5 = ctx[0xd4];
    ctx = _LAB_0804719c;
    goto ScriptEngine_Routine_080486B2;
  case 0x80471a0:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_080471b0;
    ScriptEngine_Routine_08048662(*p_uint3);
  case 0x80471b4:
    u_val5 = ctx[0xd4];
    ctx = _LAB_080471c4;
    goto ScriptEngine_Routine_08048626;
  case 0x80471c8:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_080471d8;
    ScriptEngine_Routine_08048966(*p_uint3);
  case 0x80471dc:
    u_val5 = ctx[0xd4];
    ctx = _LAB_080471ec;
    goto ScriptEngine_Routine_080486B2;
  case 0x80471f0:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08047200;
    ScriptEngine_Routine_08048662(*p_uint3);
  case 0x8047204:
    u_val5 = ctx[0xd4];
    ctx = _LAB_08047214;
    goto ScriptEngine_Routine_0804811A;
  case 0x8047218:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08047228;
    ScriptEngine_Routine_08048966(*p_uint3);
  case 0x804722c:
    u_val5 = ctx[0xd4];
    ctx = _LAB_0804723c;
    goto ScriptEngine_Routine_080486B2;
  case 0x8047240:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08047250;
    ScriptEngine_Routine_08048662(*p_uint3);
  case 0x8047254:
    u_val5 = ctx[0xd4];
    ctx = _LAB_08047264;
    goto ScriptEngine_Routine_08048626;
  case 0x8047268:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08047278;
    ScriptEngine_Routine_08048966(*p_uint3);
  case 0x804727c:
    u_val5 = ctx[0xd4];
    ctx = _LAB_0804728c;
    goto ScriptEngine_Routine_080486B2;
  case 0x8047290:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_080472a0;
    ScriptEngine_Routine_08048662(*p_uint3);
  case 0x80472a4:
    u_val5 = (uint)(*(byte *)(ctx[0xd4] + _LAB_080472c0) >> 7);
    u_val4 = (uint)*(byte *)(ctx[0xd4] + _LAB_080472c4);
    u_val7 = 1;
    goto ScriptEngine_Routine_08048A7C;
  case 0x80472c8:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_080472d8;
    ScriptEngine_Routine_08048966(*p_uint3);
  case 0x80472dc:
    u_val5 = ctx[0xd4];
    ctx = _LAB_080472ec;
    goto ScriptEngine_Routine_080486B2;
  case 0x80472f0:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08047300;
    ScriptEngine_Routine_08048662(*p_uint3);
  case 0x8047304:
    u_val5 = ctx[0xd4];
    ctx = _LAB_08047314;
    goto ScriptEngine_Routine_08048626;
  case 0x8047318:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08047328;
    ScriptEngine_Routine_08048966(*p_uint3);
  case 0x804732c:
    u_val5 = ctx[0xd4];
    ctx = _LAB_0804733c;
    goto ScriptEngine_Routine_080486B2;
  case 0x8047340:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08047350;
    ScriptEngine_Routine_08048662(*p_uint3);
  case 0x8047354:
    u_val5 = ctx[0xd4];
    ctx = _LAB_08047364;
    goto ScriptEngine_Routine_0804811A;
  case 0x8047368:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08047378;
    ScriptEngine_Routine_08048966(*p_uint3);
  case 0x804737c:
    u_val5 = ctx[0xd4];
    ctx = _LAB_0804738c;
    goto ScriptEngine_Routine_080486B2;
  case 0x8047390:
    p_uint3 = ctx + 0xd4;
    ctx = (uint *)(uint)(*(byte *)(*p_uint3 + _LAB_080473b4) >> 4);
    ScriptEngine_Routine_08048FEE((*(byte *)(*p_uint3 + _LAB_080473b8) & 7) << 4 | (uint)ctx);
  case 0x80473bc:
    u_val5 = ctx[0xd4];
    ctx = _LAB_080473cc;
    goto ScriptEngine_Routine_080486B2;
  case 0x80473d0:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_080473e0;
    ScriptEngine_Routine_08048662(*p_uint3);
  case 0x80473e4:
    u_val5 = ctx[0xd4];
    ctx = _LAB_080473f4;
    goto ScriptEngine_Routine_08048626;
  case 0x80473f8:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08047408;
    ScriptEngine_Routine_08048966(*p_uint3);
  case 0x804740c:
    u_val5 = ctx[0xd4];
    ctx = _LAB_0804741c;
    goto ScriptEngine_Routine_080486B2;
  case 0x8047420:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08047430;
    ScriptEngine_Routine_08048662(*p_uint3);
  case 0x8047434:
    u_val5 = ctx[0xd4];
    i_val2 = _LAB_08047444;
    goto ScriptEngine_Routine_08048F16;
  case 0x8047448:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08047458;
    ScriptEngine_Routine_08048F2E(*p_uint3);
  case 0x804745c:
    u_val5 = ctx[0xd4];
    i_val2 = _LAB_0804746c;
    goto ScriptEngine_Routine_08048E5E;
  case 0x8047470:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08047480;
    ScriptEngine_Routine_08048E76(*p_uint3);
  case 0x8047484:
    u_val5 = ctx[0xd4];
    i_val2 = _LAB_08047494;
    goto ScriptEngine_Routine_08048E36;
  case 0x8047498:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_080474a8;
    ScriptEngine_Routine_08048F2E(*p_uint3);
  case 0x80474ac:
    u_val5 = ctx[0xd4];
    i_val2 = _LAB_080474bc;
    goto ScriptEngine_Routine_08048E5E;
  case 0x80474c0:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_080474d0;
    ScriptEngine_Routine_08048E76(*p_uint3);
  case 0x80474d4:
    u_val5 = ctx[0xd4];
    i_val2 = _LAB_080474e4;
    goto ScriptEngine_Routine_08048E36;
  case 0x80474e8:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_080474f8;
    ScriptEngine_Routine_08048F2E(*p_uint3);
  case 0x80474fc:
    u_val5 = ctx[0xd4];
    i_val2 = _LAB_0804750c;
    goto ScriptEngine_Routine_08048E5E;
  case 0x8047510:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08047520;
    ScriptEngine_Routine_08048E76(*p_uint3);
  case 0x8047524:
    u_val5 = ctx[0xd4];
    i_val2 = _LAB_08047534;
    goto ScriptEngine_Routine_08048E36;
  case 0x8047538:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08047548;
    ScriptEngine_Routine_08048F2E(*p_uint3);
  case 0x804754c:
    u_val5 = ctx[0xd4];
    i_val2 = _LAB_0804755c;
    goto ScriptEngine_Routine_08048E5E;
  case 0x8047560:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08047570;
    ScriptEngine_Routine_08048F76(*p_uint3);
  case 0x8047574:
    u_val5 = ctx[0xd4];
    i_val2 = _LAB_08047584;
    goto ScriptEngine_Routine_08048FC6;
  case 0x8047588:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08047598;
    ScriptEngine_Routine_08048FDE(*p_uint3);
  case 0x804759c:
    u_val5 = ctx[0xd4];
    i_val2 = _LAB_080475ac;
    goto ScriptEngine_Routine_08048F16;
  case 0x80475b0:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_080475c0;
    ScriptEngine_Routine_08048EC6(*p_uint3);
  case 0x80475c4:
    u_val5 = ctx[0xd4];
    i_val2 = _LAB_080475d4;
    goto ScriptEngine_Routine_08048966;
  case 0x80475d8:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_080475e8;
    ScriptEngine_Routine_080486B2(*p_uint3);
  case 0x80475ec:
    u_val5 = ctx[0xd4];
    i_val2 = _LAB_080475fc;
    goto ScriptEngine_Routine_08048662;
  case 0x8047600:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08047610;
    ScriptEngine_Routine_08048626(*p_uint3);
  case 0x8047614:
    u_val5 = ctx[0xd4];
    i_val2 = _LAB_08047624;
    goto ScriptEngine_Routine_08048966;
  case 0x8047628:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08047638;
    ScriptEngine_Routine_08048F5E(*p_uint3);
  case 0x804763c:
    u_val5 = ctx[0xd4];
    p_uint9 = _LAB_0804764c;
    goto ScriptEngine_Routine_08048E76;
  case 0x8047650:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08047660;
    ScriptEngine_Routine_08048E36(*p_uint3);
  case 0x8047664:
    u_val5 = ctx[0xd4];
    i_val2 = _LAB_08047674;
    goto ScriptEngine_Routine_08048EC6;
  case 0x8047678:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08047688;
    ScriptEngine_Routine_08048966(*p_uint3);
  case 0x804768c:
    u_val5 = (*(byte *)(ctx[0xd4] + _LAB_080476a4) & 0x3f) >> 3;
    break;
  case 0x80476a8:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_080476b8;
    ScriptEngine_Routine_08048E36(*p_uint3);
  case 0x80476bc:
    u_val5 = ctx[0xd4];
    p_uint9 = _LAB_080476cc;
    goto ScriptEngine_Routine_08048F2E;
  case 0x80476d0:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_080476e0;
    ScriptEngine_Routine_08048E5E(*p_uint3);
  case 0x80476e4:
    u_val5 = ctx[0xd4];
    p_uint9 = _LAB_080476f4;
    goto ScriptEngine_Routine_08048E76;
  case 0x80476f8:
    u_val5 = ctx[0xd4];
    ctx = 0x2178;
    goto LAB_08047c1a;
  case 0x8047708:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08047718;
    ScriptEngine_Routine_08048F46(*p_uint3);
  case 0x804771c:
    u_val5 = ctx[0xd4];
    ctx = _LAB_0804772c;
    goto ScriptEngine_Routine_080486B2;
  case 0x8047730:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08047740;
    ScriptEngine_Routine_08048662(*p_uint3);
  case 0x8047744:
    u_val5 = ctx[0xd4];
    i_val2 = _LAB_08047754;
    goto ScriptEngine_Routine_08048F16;
  case 0x8047758:
    b_flag1 = *(byte *)(ctx[0xd4] + (int)_LAB_08047770);
    ctx = _LAB_08047770;
ScriptEngine_Routine_08047766:
    ScriptEngine_Routine_08048FEE(b_flag1 & 0x1f);
case_08047774:
    u_val5 = ctx[0xd4];
    i_val2 = _LAB_08047784;
    goto ScriptEngine_Routine_08048662;
  case 0x8047774:
    goto case_08047774;
  case 0x8047788:
    p_uint3 = ctx + 0xd4;
    ctx = (uint *)(uint)(*(byte *)(*p_uint3 + _LAB_080477a4) >> 7);
    ScriptEngine_Routine_08048A7C(*(undefined1 *)(*p_uint3 + _LAB_080477a8),1);
  case 0x80477ac:
    u_val5 = ctx[0xd4];
    i_val2 = _LAB_080477bc;
    goto ScriptEngine_Routine_08048966;
  case 0x80477c0:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_080477d0;
    ScriptEngine_Routine_080486B2(*p_uint3);
  case 0x80477d4:
    u_val5 = ctx[0xd4];
    i_val2 = _LAB_080477e4;
    goto ScriptEngine_Routine_08048662;
  case 0x80477e8:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_080477f8;
    ScriptEngine_Routine_08048F16(*p_uint3);
  case 0x80477fc:
    u_val5 = ctx[0xd4];
    p_uint9 = _LAB_0804780c;
    goto ScriptEngine_Routine_08048F2E;
  case 0x8047810:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08047820;
    ScriptEngine_Routine_08048E5E(*p_uint3);
  case 0x8047824:
    u_val5 = ctx[0xd4];
    p_uint9 = _LAB_08047834;
    goto ScriptEngine_Routine_08048E76;
  case 0x8047838:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08047848;
    ScriptEngine_Routine_08048E36(*p_uint3);
  case 0x804784c:
    u_val5 = ctx[0xd4];
    p_uint9 = _LAB_0804785c;
    goto ScriptEngine_Routine_08048F2E;
  case 0x8047860:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08047870;
    ScriptEngine_Routine_08048E5E(*p_uint3);
  case 0x8047874:
    u_val5 = ctx[0xd4];
    p_uint9 = _LAB_08047884;
    goto ScriptEngine_Routine_08048E76;
  case 0x8047888:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08047898;
    ScriptEngine_Routine_08048E36(*p_uint3);
  case 0x804789c:
    u_val5 = ctx[0xd4];
    p_uint9 = _LAB_080478ac;
    goto ScriptEngine_Routine_08048F2E;
  case 0x80478b0:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_080478c0;
    ScriptEngine_Routine_08048E5E(*p_uint3);
  case 0x80478c4:
    u_val5 = ctx[0xd4];
    p_uint9 = _LAB_080478d4;
    goto ScriptEngine_Routine_08048E76;
  case 0x80478d8:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_080478e8;
    ScriptEngine_Routine_08048E36(*p_uint3);
  case 0x80478ec:
    u_val5 = ctx[0xd4];
    p_uint9 = 0x2180;
    goto ScriptEngine_Routine_08048F2E;
  case 0x80478fc:
    p_uint3 = ctx + 0xd4;
    ctx = (uint *)0x2180;
    ScriptEngine_Routine_08048E5E(*p_uint3);
  case 0x804790c:
    u_val5 = ctx[0xd4];
    p_uint9 = 0x2180;
    goto ScriptEngine_Routine_08048E76;
  case 0x804791c:
    p_uint3 = ctx + 0xd4;
    ctx = (uint *)0x2180;
    ScriptEngine_Routine_08048E36(*p_uint3);
  case 0x804792c:
    u_val5 = ctx[0xd4];
    p_uint9 = _LAB_0804793c;
    goto ScriptEngine_Routine_08048F2E;
  case 0x8047940:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08047950;
    ScriptEngine_Routine_08048E5E(*p_uint3);
  case 0x8047954:
    u_val5 = ctx[0xd4];
    p_uint9 = _LAB_08047964;
    goto ScriptEngine_Routine_08048E76;
  case 0x8047968:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08047978;
    ScriptEngine_Routine_08048E36(*p_uint3);
  case 0x804797c:
    u_val5 = ctx[0xd4];
    p_uint9 = _LAB_0804798c;
    goto ScriptEngine_Routine_08048F2E;
  case 0x8047990:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_080479a0;
    ScriptEngine_Routine_08048F46(*p_uint3);
  case 0x80479a4:
    u_val5 = ctx[0xd4];
    ctx = _LAB_080479b4;
    goto ScriptEngine_Routine_080486B2;
  case 0x80479b8:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_080479c8;
    ScriptEngine_Routine_08048662(*p_uint3);
  case 0x80479cc:
    u_val5 = ctx[0xd4];
    ctx = _LAB_080479dc;
    goto ScriptEngine_Routine_08048626;
  case 0x80479e0:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_080479f0;
    ScriptEngine_Routine_08048966(*p_uint3);
  case 0x80479f4:
    u_val5 = ctx[0xd4];
    ctx = _LAB_08047a04;
    goto ScriptEngine_Routine_080486B2;
  case 0x8047a08:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08047a18;
    ScriptEngine_Routine_08048662(*p_uint3);
  case 0x8047a1c:
    u_val5 = (uint)(*(byte *)(ctx[0xd4] + _LAB_08047a38) >> 7);
    u_val4 = (uint)*(byte *)(ctx[0xd4] + _LAB_08047a3c);
    u_val7 = 1;
    goto ScriptEngine_Routine_08048A7C;
  case 0x8047a40:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08047a50;
    ScriptEngine_Routine_08048C0E(*p_uint3);
  case 0x8047a54:
    u_val5 = ctx[0xd4];
    i_val2 = _LAB_08047a64;
    goto ScriptEngine_Routine_08048E5E;
  case 0x8047a68:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08047a78;
    ScriptEngine_Routine_08048E76(*p_uint3);
  case 0x8047a7c:
    u_val5 = ctx[0xd4];
    i_val2 = _LAB_08047a8c;
    goto ScriptEngine_Routine_08048E36;
  case 0x8047a90:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08047aa0;
    ScriptEngine_Routine_08048F2E(*p_uint3);
  case 0x8047aa4:
    u_val5 = ctx[0xd4];
    i_val2 = _LAB_08047ab4;
    goto ScriptEngine_Routine_08048E5E;
  case 0x8047ab8:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08047ac8;
    ScriptEngine_Routine_08048E76(*p_uint3);
  case 0x8047acc:
    u_val5 = ctx[0xd4];
    i_val2 = _LAB_08047adc;
    goto ScriptEngine_Routine_08048E36;
  case 0x8047ae0:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08047af0;
    ScriptEngine_Routine_08048F2E(*p_uint3);
  case 0x8047af4:
    u_val5 = (*(byte *)(ctx[0xd4] + _LAB_08047b0c) & 0x1f) >> 2;
    break;
  case 0x8047b10:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08047b20;
    ScriptEngine_Routine_08048662(*p_uint3);
  case 0x8047b24:
    u_val5 = ctx[0xd4];
    ctx = _LAB_08047b34;
    goto ScriptEngine_Routine_08048626;
  case 0x8047b38:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08047b48;
    ScriptEngine_Routine_08048966(*p_uint3);
  case 0x8047b4c:
    u_val5 = ctx[0xd4];
    ctx = _LAB_08047b5c;
    goto ScriptEngine_Routine_080486B2;
  case 0x8047b60:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08047b70;
    ScriptEngine_Routine_08048662(*p_uint3);
  case 0x8047b74:
    u_val5 = (uint)(*(byte *)(ctx[0xd4] + _LAB_08047b90) >> 7);
    u_val4 = (uint)*(byte *)(ctx[0xd4] + _LAB_08047b94);
    u_val7 = 1;
    goto ScriptEngine_Routine_08048A7C;
  case 0x8047b98:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08047ba8;
    ScriptEngine_Routine_08048966(*p_uint3);
  case 0x8047bac:
    u_val5 = ctx[0xd4];
    ctx = _LAB_08047bbc;
    goto ScriptEngine_Routine_080486B2;
  case 0x8047bc0:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08047bd0;
    ScriptEngine_Routine_08048662(*p_uint3);
  case 0x8047bd4:
    u_val5 = ctx[0xd4];
    i_val2 = _LAB_08047be4;
    goto ScriptEngine_Routine_080483AE;
  case 0x8047be8:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08047bf8;
    ScriptEngine_Routine_08048E5E(*p_uint3);
  case 0x8047bfc:
    u_val5 = ctx[0xd4];
    p_uint9 = _LAB_08047c0c;
    goto ScriptEngine_Routine_08048E76;
  case 0x8047c10:
    u_val5 = ctx[0xd4];
    ctx = _LAB_08047c28;
LAB_08047c1a:
    ScriptEngine_Routine_08048FEE((*(uint *)(u_val5 + (int)ctx) & 0x3ffff) >> 0xe);
case_08047C2C:
    u_val5 = ctx[0xd4];
    i_val2 = _LAB_08047c3c;
    goto ScriptEngine_Routine_08048E5E;
  case 0x8047c2c:
    goto case_08047C2C;
  case 0x8047c40:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08047c50;
    ScriptEngine_Routine_08048E76(*p_uint3);
  case 0x8047c54:
    u_val5 = ctx[0xd4];
    i_val2 = _LAB_08047c64;
    goto ScriptEngine_Routine_08048E36;
  case 0x8047c68:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08047c78;
    ScriptEngine_Routine_08048F2E(*p_uint3);
  case 0x8047c7c:
    u_val5 = ctx[0xd4];
    ctx = _LAB_08047c8c;
    goto ScriptEngine_Routine_080486B2;
  case 0x8047c90:
    p_uint3 = ctx + 0xd4;
    ctx = (uint *)(uint)(*(byte *)(*p_uint3 + _LAB_08047cb4) >> 5);
    ScriptEngine_Routine_08048FEE((*(byte *)(*p_uint3 + _LAB_08047cb8) & 1) << 3 | (uint)ctx);
  case 0x8047cbc:
    u_val5 = ctx[0xd4];
    i_val2 = _LAB_08047ccc;
    goto ScriptEngine_Routine_08048966;
  case 0x8047cd0:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08047ce0;
    ScriptEngine_Routine_080486B2(*p_uint3);
  case 0x8047ce4:
    u_val5 = ctx[0xd4];
    i_val2 = _LAB_08047cf4;
    goto ScriptEngine_Routine_08048662;
  case 0x8047cf8:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08047d08;
    ScriptEngine_Routine_08048626(*p_uint3);
  case 0x8047d0c:
    u_val5 = ctx[0xd4];
    i_val2 = _LAB_08047d1c;
    goto ScriptEngine_Routine_08048966;
  case 0x8047d20:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08047d30;
    ScriptEngine_Routine_080486B2(*p_uint3);
  case 0x8047d34:
    u_val5 = (*(uint *)(ctx[0xd4] + _LAB_08047d4c) & 0x1ffff) >> 0xd;
    break;
  case 0x8047d50:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08047d60;
    ScriptEngine_Routine_08048966(*p_uint3);
  case 0x8047d64:
    u_val5 = ctx[0xd4];
    ctx = _LAB_08047d74;
    goto ScriptEngine_Routine_080486B2;
  case 0x8047d78:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08047d88;
    ScriptEngine_Routine_08048FC6(*p_uint3);
  case 0x8047d8c:
    u_val5 = ctx[0xd4];
    i_val2 = _LAB_08047d9c;
    goto ScriptEngine_Routine_08048E36;
  case 0x8047da0:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08047db0;
    ScriptEngine_Routine_08048F2E(*p_uint3);
  case 0x8047db4:
    u_val5 = ctx[0xd4];
    i_val2 = _LAB_08047dc4;
    goto ScriptEngine_Routine_08048E5E;
  case 0x8047dc8:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08047dd8;
    ScriptEngine_Routine_08048E76(*p_uint3);
  case 0x8047ddc:
    u_val5 = ctx[0xd4];
    i_val2 = _LAB_08047dec;
    goto ScriptEngine_Routine_08048E36;
  case 0x8047df0:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08047e00;
    ScriptEngine_Routine_08048F2E(*p_uint3);
  case 0x8047e04:
    u_val5 = ctx[0xd4];
    i_val2 = _LAB_08047e14;
    goto ScriptEngine_Routine_08048E5E;
  case 0x8047e18:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08047e28;
    ScriptEngine_Routine_08048E76(*p_uint3);
  case 0x8047e2c:
    u_val5 = ctx[0xd4];
    i_val2 = _LAB_08047e3c;
    goto ScriptEngine_Routine_08048E36;
  case 0x8047e40:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08047e50;
    ScriptEngine_Routine_08048F2E(*p_uint3);
  case 0x8047e54:
    u_val5 = ctx[0xd4];
    i_val2 = _LAB_08047e64;
    goto ScriptEngine_Routine_08048E5E;
  case 0x8047e68:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08047e78;
    ScriptEngine_Routine_08048E76(*p_uint3);
  case 0x8047e7c:
    u_val5 = ctx[0xd4];
    i_val2 = _LAB_08047e8c;
    goto ScriptEngine_Routine_08048E36;
  case 0x8047e90:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08047ea0;
    ScriptEngine_Routine_08048F2E(*p_uint3);
  case 0x8047ea4:
    u_val5 = ctx[0xd4];
    i_val2 = _LAB_08047eb4;
    goto ScriptEngine_Routine_08048E5E;
  case 0x8047eb8:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08047ec8;
    ScriptEngine_Routine_08048E76(*p_uint3);
  case 0x8047ecc:
    u_val5 = ctx[0xd4];
    i_val2 = _LAB_08047edc;
    goto ScriptEngine_Routine_08048E36;
  case 0x8047ee0:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08047ef0;
    ScriptEngine_Routine_08048F2E(*p_uint3);
  case 0x8047ef4:
    u_val5 = ctx[0xd4];
    i_val2 = _LAB_08047f04;
    goto ScriptEngine_Routine_08048E5E;
  case 0x8047f08:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08047f18;
    ScriptEngine_Routine_08048E76(*p_uint3);
  case 0x8047f1c:
    u_val5 = ctx[0xd4];
    i_val2 = _LAB_08047f2c;
    goto ScriptEngine_Routine_08048E36;
  case 0x8047f30:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08047f40;
    ScriptEngine_Routine_08048F2E(*p_uint3);
  case 0x8047f44:
    u_val5 = ctx[0xd4];
    i_val2 = _LAB_08047f54;
    goto ScriptEngine_Routine_08048E5E;
  case 0x8047f58:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08047f68;
    ScriptEngine_Routine_08048E76(*p_uint3);
  case 0x8047f6c:
    u_val5 = ctx[0xd4];
    i_val2 = _LAB_08047f7c;
    goto ScriptEngine_Routine_08048E36;
  case 0x8047f80:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08047f90;
    ScriptEngine_Routine_08048F2E(*p_uint3);
  case 0x8047f94:
    u_val5 = ctx[0xd4];
    i_val2 = _LAB_08047fa4;
    goto ScriptEngine_Routine_08048E36;
  case 0x8047fa8:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08047fb8;
    ScriptEngine_Routine_08048F2E(*p_uint3);
  case 0x8047fbc:
    u_val5 = ctx[0xd4];
    i_val2 = _LAB_08047fcc;
    goto ScriptEngine_Routine_08048E5E;
  case 0x8047fd0:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08047fe0;
    ScriptEngine_Routine_08048E76(*p_uint3);
  case 0x8047fe4:
    u_val5 = ctx[0xd4];
    i_val2 = _LAB_08047ff4;
    goto ScriptEngine_Routine_08048E36;
  case 0x8047ff8:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08048008;
    ScriptEngine_Routine_08048F2E(*p_uint3);
  case 0x804800c:
    u_val5 = ctx[0xd4];
    i_val2 = _LAB_0804801c;
    goto ScriptEngine_Routine_08048E5E;
  case 0x8048020:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08048030;
    ScriptEngine_Routine_08048E76(*p_uint3);
  case 0x8048034:
    u_val5 = ctx[0xd4];
    i_val2 = _LAB_08048044;
    goto ScriptEngine_Routine_08048E36;
  case 0x8048048:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08048058;
    ScriptEngine_Routine_08048F2E(*p_uint3);
  case 0x804805c:
    u_val5 = ctx[0xd4];
    i_val2 = _LAB_0804806c;
    goto ScriptEngine_Routine_08048E5E;
  case 0x8048070:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08048080;
    ScriptEngine_Routine_08048E76(*p_uint3);
  case 0x8048084:
    u_val5 = ctx[0xd4];
    i_val2 = _LAB_08048094;
    goto ScriptEngine_Routine_08048E36;
  case 0x8048098:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_080480a8;
    ScriptEngine_Routine_08048F2E(*p_uint3);
  case 0x80480ac:
    u_val5 = ctx[0xd4];
    i_val2 = _LAB_080480bc;
    goto ScriptEngine_Routine_08048F46;
  case 0x80480c0:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_080480d0;
    ScriptEngine_Routine_08048F5E(*p_uint3);
  case 0x80480d4:
    u_val5 = ctx[0xd4];
    i_val2 = _LAB_080480e4;
    goto ScriptEngine_Routine_08048F76;
  case 0x80480e8:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_080480f8;
    ScriptEngine_Routine_08048FC6(*p_uint3);
  case 0x80480fc:
    u_val5 = ctx[0xd4];
    i_val2 = _LAB_0804810c;
    goto ScriptEngine_Routine_08048FDE;
  case 0x8048110:
    u_val5 = ctx[0xd4];
    ctx = _LAB_08048128;
ScriptEngine_Routine_0804811A:
    ScriptEngine_Routine_08048FEE((*(uint *)(u_val5 + (int)ctx) & 0x1ffff) >> 0xf);
case_0804812C:
    u_val5 = ctx[0xd4];
    i_val2 = _LAB_0804813c;
    goto ScriptEngine_Routine_08048C0E;
  case 0x804812c:
    goto case_0804812C;
  case 0x8048140:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08048150;
    ScriptEngine_Routine_08048E5E(*p_uint3);
  case 0x8048154:
    u_val5 = ctx[0xd4];
    i_val2 = _LAB_08048164;
    goto ScriptEngine_Routine_08048F76;
  case 0x8048168:
    u_val5 = ctx[0xd4];
    i_val2 = 0x219A;
    goto ScriptEngine_Routine_08048662;
  case 0x8048178:
    u_val5 = ctx[0xd4];
    ctx = 0x219A;
    goto ScriptEngine_Routine_08048626;
  case 0x8048188:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_080481a0;
    ScriptEngine_Routine_08048FEE((*(byte *)(*p_uint3 + (int)_LAB_080481a0) & 0xf) >> 1);
  case 0x80481a4:
    u_val5 = ctx[0xd4];
    p_uint9 = _LAB_080481b4;
    goto ScriptEngine_Routine_08048E76;
  case 0x80481b8:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_080481c8;
    ScriptEngine_Routine_08048FDE(*p_uint3);
  case 0x80481cc:
    u_val5 = (uint)(*(byte *)(ctx[0xd4] + _LAB_080481e8) >> 7);
    u_val4 = (uint)*(byte *)(ctx[0xd4] + _LAB_080481ec);
    u_val7 = 3;
    goto ScriptEngine_Routine_08048A7C;
  case 0x80481f0:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08048200;
    ScriptEngine_Routine_08048E5E(*p_uint3);
  case 0x8048204:
    u_val5 = ctx[0xd4];
    i_val2 = _LAB_08048214;
    goto ScriptEngine_Routine_08048F76;
  case 0x8048218:
    u_val5 = ctx[0xd4];
    i_val2 = 0x219C;
    goto ScriptEngine_Routine_08048662;
  case 0x8048228:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08048238;
    ScriptEngine_Routine_08048F16(*p_uint3);
  case 0x804823c:
    u_val5 = ctx[0xd4];
    p_uint9 = _LAB_0804824c;
    goto ScriptEngine_Routine_08048F2E;
  case 0x8048250:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08048260;
    ScriptEngine_Routine_08048F46(*p_uint3);
  case 0x8048264:
    u_val5 = ctx[0xd4];
    ctx = 0x219D;
    goto ScriptEngine_Routine_080486B2;
  case 0x8048274:
    u_val5 = ctx[0xd4];
    i_val2 = _LAB_08048284;
    goto ScriptEngine_Routine_08048FC6;
  case 0x8048288:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08048298;
    ScriptEngine_Routine_08048E36(*p_uint3);
  case 0x804829c:
    u_val5 = ctx[0xd4];
    i_val2 = _LAB_080482ac;
    goto ScriptEngine_Routine_08048EC6;
  case 0x80482b0:
    u_val5 = ctx[0xd4];
    i_val2 = 0x219E;
    goto ScriptEngine_Routine_08048966;
  case 0x80482c0:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_080482d0;
    ScriptEngine_Routine_08048F5E(*p_uint3);
  case 0x80482d4:
    u_val5 = ctx[0xd4];
    p_uint9 = _LAB_080482e4;
    goto ScriptEngine_Routine_08048E76;
  case 0x80482e8:
    u_val5 = ctx[0xd4];
    p_uint9 = 0x219E;
    goto LAB_08048950;
  case 0x80482f8:
    u_val5 = ctx[0xd4];
    i_val2 = 0x219F;
    goto ScriptEngine_Routine_08048966;
  case 0x8048308:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08048318;
    ScriptEngine_Routine_08048F5E(*p_uint3);
  case 0x804831c:
    u_val5 = ctx[0xd4];
    p_uint9 = _LAB_0804832c;
    goto ScriptEngine_Routine_08048E76;
  case 0x8048330:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08048340;
    ScriptEngine_Routine_08048E36(*p_uint3);
  case 0x8048344:
    u_val5 = ctx[0xd4];
    p_uint9 = _LAB_08048354;
    goto ScriptEngine_Routine_08048F2E;
  case 0x8048358:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08048368;
    ScriptEngine_Routine_08048F46(*p_uint3);
  case 0x804836c:
    u_val5 = ctx[0xd4];
    i_val2 = _LAB_0804837c;
    goto ScriptEngine_Routine_08048F5E;
  case 0x8048380:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08048390;
    ScriptEngine_Routine_08048F76(*p_uint3);
  case 0x8048394:
    u_val5 = ctx[0xd4];
    i_val2 = 0x21A0;
    goto ScriptEngine_Routine_08048662;
  case 0x80483a4:
    u_val5 = ctx[0xd4];
    i_val2 = _LAB_080483bc;
ScriptEngine_Routine_080483AE:
    u_val5 = (*(ushort *)(u_val5 + i_val2) & 0x3ff) >> 7;
    break;
  case 0x80483c0:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_080483d0;
    ScriptEngine_Routine_08048F2E(*p_uint3);
  case 0x80483d4:
    u_val5 = ctx[0xd4];
    i_val2 = _LAB_080483e4;
    goto ScriptEngine_Routine_08048F46;
  case 0x80483e8:
    u_val5 = ctx[0xd4];
    ctx = 0x21A1;
    goto ScriptEngine_Routine_080486B2;
  case 0x80483f8:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08048408;
    ScriptEngine_Routine_08048FC6(*p_uint3);
  case 0x804840c:
    u_val5 = ctx[0xd4];
    i_val2 = _LAB_0804841c;
    goto ScriptEngine_Routine_08048E36;
  case 0x8048420:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08048430;
    ScriptEngine_Routine_08048EC6(*p_uint3);
  case 0x8048434:
    u_val5 = ctx[0xd4];
    i_val2 = 0x21A2;
    goto ScriptEngine_Routine_08048966;
  case 0x8048444:
    u_val5 = ctx[0xd4];
    i_val2 = _LAB_08048454;
    goto ScriptEngine_Routine_08048F5E;
  case 0x8048458:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08048468;
    ScriptEngine_Routine_08048E76(*p_uint3);
  case 0x804846c:
    u_val5 = ctx[0xd4];
    i_val2 = _LAB_0804847c;
    goto ScriptEngine_Routine_08048E36;
  case 0x8048480:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08048490;
    ScriptEngine_Routine_08048F2E(*p_uint3);
  case 0x8048494:
    u_val5 = ctx[0xd4];
    i_val2 = _LAB_080484a4;
    goto ScriptEngine_Routine_08048E5E;
  case 0x80484a8:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_080484b8;
    ScriptEngine_Routine_08048E76(*p_uint3);
  case 0x80484bc:
    u_val5 = ctx[0xd4];
    i_val2 = _LAB_080484cc;
    goto ScriptEngine_Routine_08048FDE;
  case 0x80484d0:
    u_val5 = (uint)(*(byte *)(ctx[0xd4] + 0x21A3) >> 7);
    u_val4 = (uint)*(byte *)(ctx[0xd4] + 0x21A4);
    u_val7 = 1;
    goto ScriptEngine_Routine_08048A7C;
  case 0x80484f4:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08048504;
    ScriptEngine_Routine_08048C0E(*p_uint3);
  case 0x8048508:
    u_val5 = ctx[0xd4];
    i_val2 = _LAB_08048518;
    goto ScriptEngine_Routine_08048E5E;
  case 0x804851c:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_0804852c;
    ScriptEngine_Routine_08048F76(*p_uint3);
  case 0x8048530:
    u_val5 = ctx[0xd4];
    i_val2 = 0x21A4;
    goto ScriptEngine_Routine_08048662;
  case 0x8048540:
    u_val5 = ctx[0xd4];
    i_val2 = _LAB_08048550;
    goto ScriptEngine_Routine_08048F16;
  case 0x8048554:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08048564;
    ScriptEngine_Routine_08048F2E(*p_uint3);
  case 0x8048568:
    u_val5 = ctx[0xd4];
    i_val2 = _LAB_08048578;
    goto ScriptEngine_Routine_08048F46;
  case 0x804857c:
    u_val5 = ctx[0xd4];
    ctx = 0x21A5;
    goto ScriptEngine_Routine_080486B2;
  case 0x804858c:
    u_val5 = ctx[0xd4];
    i_val2 = 0x21A5;
    goto ScriptEngine_Routine_08048662;
  case 0x804859c:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_080485b4;
    ScriptEngine_Routine_08048FEE((*(uint *)(*p_uint3 + (int)_LAB_080485b4) & 0x3ffff) >> 0xf);
  case 0x80485b8:
    u_val5 = ctx[0xd4];
    i_val2 = _LAB_080485c8;
    goto ScriptEngine_Routine_08048F46;
  case 0x80485cc:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_080485dc;
    ScriptEngine_Routine_08048F5E(*p_uint3);
  case 0x80485e0:
    u_val5 = ctx[0xd4];
    i_val2 = _LAB_080485f0;
    goto ScriptEngine_Routine_08048F76;
  case 0x80485f4:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08048604;
    ScriptEngine_Routine_08048FC6(*p_uint3);
  case 0x8048608:
    u_val5 = ctx[0xd4];
    i_val2 = _LAB_08048618;
    goto ScriptEngine_Routine_08048FDE;
  case 0x804861c:
    u_val5 = ctx[0xd4];
    ctx = _LAB_08048634;
ScriptEngine_Routine_08048626:
    ScriptEngine_Routine_08048FEE((*(ushort *)(u_val5 + (int)ctx) & 0x1ff) >> 7);
case_08048638:
    u_val5 = ctx[0xd4];
    i_val2 = 0x21A7;
ScriptEngine_Routine_08048966:
    u_val5 = (*(byte *)(u_val5 + i_val2) & 7) >> 1;
    break;
  case 0x8048638:
    goto case_08048638;
  case 0x8048648:
    u_val5 = ctx[0xd4];
    ctx = 0x21A7;
    goto ScriptEngine_Routine_080486B2;
  case 0x8048658:
    u_val5 = ctx[0xd4];
    i_val2 = _LAB_08048670;
ScriptEngine_Routine_08048662:
    u_val5 = (*(byte *)(u_val5 + i_val2) & 0x7f) >> 5;
    break;
  case 0x8048674:
    u_val5 = (uint)(*(byte *)(ctx[0xd4] + 0x21A7) >> 7);
    u_val4 = (uint)*(byte *)(ctx[0xd4] + 0x21A8);
    u_val7 = 1;
    goto ScriptEngine_Routine_08048A7C;
  case 0x8048698:
    u_val5 = ctx[0xd4];
    i_val2 = 0x21A8;
    goto ScriptEngine_Routine_08048966;
  case 0x80486a8:
    u_val5 = ctx[0xd4];
    ctx = _LAB_080486c0;
ScriptEngine_Routine_080486B2:
    ScriptEngine_Routine_08048FEE((*(byte *)(u_val5 + (int)ctx) & 0x1f) >> 3);
case_080486C4:
    u_val5 = (uint)(*(byte *)(ctx[0xd4] + _LAB_080486d8) >> 5);
    break;
  case 0x80486c4:
    goto case_080486C4;
  case 0x80486dc:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_080486ec;
    ScriptEngine_Routine_08048F2E(*p_uint3);
  case 0x80486f0:
    u_val5 = ctx[0xd4];
    i_val2 = _LAB_08048700;
    goto ScriptEngine_Routine_08048E5E;
  case 0x8048704:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08048714;
    ScriptEngine_Routine_08048F76(*p_uint3);
  case 0x8048718:
    u_val5 = ctx[0xd4];
    i_val2 = _LAB_08048728;
    goto ScriptEngine_Routine_08048FC6;
  case 0x804872c:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_0804873c;
    ScriptEngine_Routine_08048FDE(*p_uint3);
  case 0x8048740:
    u_val5 = ctx[0xd4];
    i_val2 = _LAB_08048750;
    goto ScriptEngine_Routine_08048F16;
  case 0x8048754:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08048764;
    ScriptEngine_Routine_08048EC6(*p_uint3);
  case 0x8048768:
    u_val5 = ctx[0xd4];
    i_val2 = 0x21AA;
    goto ScriptEngine_Routine_08048C0E;
  case 0x8048778:
    u_val5 = ctx[0xd4];
    i_val2 = _LAB_08048788;
    goto ScriptEngine_Routine_08048F46;
  case 0x804878c:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_0804879c;
    ScriptEngine_Routine_08048F5E(*p_uint3);
  case 0x80487a0:
    u_val5 = ctx[0xd4];
    i_val2 = _LAB_080487b0;
    goto ScriptEngine_Routine_08048F76;
  case 0x80487b4:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_080487c4;
    ScriptEngine_Routine_08048FC6(*p_uint3);
  case 0x80487c8:
    u_val5 = ctx[0xd4];
    i_val2 = _LAB_080487d8;
    goto ScriptEngine_Routine_08048FDE;
  case 0x80487dc:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_080487ec;
    ScriptEngine_Routine_08048F16(*p_uint3);
  case 0x80487f0:
    u_val5 = ctx[0xd4];
    i_val2 = _LAB_08048800;
    goto ScriptEngine_Routine_08048EC6;
  case 0x8048804:
    u_val5 = ctx[0xd4];
    i_val2 = 0x21AB;
    goto ScriptEngine_Routine_08048C0E;
  case 0x8048814:
    p_uint3 = ctx + 0xd4;
    ctx = _LAB_08048824;
    ScriptEngine_Routine_08048F46(*p_uint3);
  case 0x8048828:
    u_val5 = ctx[0xd4];
    i_val2 = _LAB_08048838;
    goto ScriptEngine_Routine_08048F5E;
  case 0x804883c:
    u_val5 = ctx[0xd4];
    i_val2 = 0x21B4;
    goto LAB_0804890a;
  case 0x804884c:
    u_val5 = ctx[0xd4];
    ctx = 0x21B4;
    goto LAB_080488ee;
  case 0x804885c:
    u_val5 = ctx[0xd4];
    i_val2 = 0x21B6;
    goto LAB_0804890a;
  case 0x804886c:
    u_val5 = ctx[0xd4];
    ctx = (uint *)(uint)(*(byte *)(u_val5 + 0x21B7) >> 6);
    p_uint9 = 0x21B8;
    goto LAB_08048930;
  case 0x8048888:
    u_val5 = ctx[0xd4];
    i_val2 = 0x21B8;
    goto LAB_0804890a;
  case 0x8048898:
    u_val5 = ctx[0xd4];
    ctx = 0x21B8;
    goto LAB_080488ee;
  case 0x80488a8:
    u_val5 = ctx[0xd4];
    i_val2 = 0x21BA;
    goto LAB_0804890a;
  case 0x80488b8:
    u_val5 = ctx[0xd4];
    ctx = (uint *)(uint)(*(byte *)(u_val5 + 0x21BB) >> 6);
    p_uint9 = 0x21BC;
    goto LAB_08048930;
  case 0x80488d4:
    u_val5 = ctx[0xd4];
    i_val2 = 0x21BC;
    goto LAB_0804890a;
  case 0x80488e4:
    u_val5 = ctx[0xd4];
    ctx = _LAB_080488fc;
LAB_080488ee:
    ScriptEngine_Routine_08048FEE((*(uint *)(u_val5 + (int)ctx) & 0x3fffff) >> 0xe);
case_08048900:
    u_val5 = ctx[0xd4];
    i_val2 = _LAB_08048918;
LAB_0804890a:
    u_val5 = (*(ushort *)(u_val5 + i_val2) & 0x3fff) >> 6;
    break;
  case 0x8048900:
    goto case_08048900;
  case 0x804891c:
    u_val5 = ctx[0xd4];
    ctx = (uint *)(uint)(*(byte *)(u_val5 + _LAB_08048940) >> 6);
    p_uint9 = 0x21c0;
LAB_08048930:
    ScriptEngine_Routine_08048FEE(((byte)p_uint9[u_val5] & 0x3f) << 2 | (uint)ctx);
case_08048944:
    u_val5 = ctx[0xd4];
    p_uint9 = 0x21c0;
LAB_08048950:
    u_val5 = (*(ushort *)(p_uint9 + u_val5) & 0x1ff) >> 6;
    break;
  case 0x8048944:
    goto case_08048944;
  case 0x804895c:
    u_val5 = ctx[0xd4];
    i_val2 = 0x21C1;
    goto ScriptEngine_Routine_08048966;
  case 0x8048974:
    u_val5 = ctx[0xd4];
    i_val2 = 0x21C1;
    goto ScriptEngine_Routine_08048F5E;
  case 0x8048984:
    u_val5 = ctx[0xd4];
    i_val2 = 0x21C1;
    goto ScriptEngine_Routine_08048F76;
  case 0x8048994:
    u_val5 = ctx[0xd4];
    i_val2 = 0x21C1;
    goto ScriptEngine_Routine_08048FC6;
  case 0x80489a4:
    u_val5 = ctx[0xd4];
    i_val2 = 0x21C1;
    goto ScriptEngine_Routine_08048FDE;
  case 0x80489b4:
    u_val5 = ctx[0xd4];
    i_val2 = 0x21C1;
    goto ScriptEngine_Routine_08048F16;
  case 0x80489c4:
    u_val5 = ctx[0xd4];
    i_val2 = 0x21C2;
    goto ScriptEngine_Routine_08048EC6;
  case 0x80489d4:
    u_val5 = ctx[0xd4];
    i_val2 = 0x21C2;
    goto ScriptEngine_Routine_08048C0E;
  case 0x80489e4:
    u_val5 = ctx[0xd4];
    i_val2 = 0x21C2;
    goto ScriptEngine_Routine_08048F46;
  case 0x80489f4:
    u_val5 = ctx[0xd4];
    i_val2 = 0x21C2;
    goto ScriptEngine_Routine_08048F5E;
  case 0x8048a04:
    u_val5 = ctx[0xd4];
    i_val2 = 0x21C2;
    goto ScriptEngine_Routine_08048F76;
  case 0x8048a14:
    u_val5 = ctx[0xd4];
    i_val2 = 0x21C2;
    goto ScriptEngine_Routine_08048FC6;
  case 0x8048a24:
    u_val5 = ctx[0xd4];
    i_val2 = 0x21C2;
    goto ScriptEngine_Routine_08048FDE;
  case 0x8048a34:
    u_val5 = (*(ushort *)(ctx[0xd4] + 0x21C2) & 0x7ff) >> 7;
    break;
  case 0x8048a4c:
    u_val5 = (*(byte *)(ctx[0xd4] + _ASSET_BLOCK_08048A60) & 0x7f) >> 3;
    break;
  case 0x8048a64:
    u_val5 = (uint)(*(byte *)(ctx[0xd4] + 0x21C3) >> 7);
    u_val4 = (uint)*(byte *)(ctx[0xd4] + 0x21C4);
    u_val7 = 7;
ScriptEngine_Routine_08048A7C:
    u_val5 = (u_val4 & u_val7) << 1 | u_val5;
    break;
  case 0x8048a8c:
    u_val5 = ctx[0xd4];
    i_val2 = 0x21C4;
    goto ScriptEngine_Routine_08048F5E;
  case 0x8048a9c:
    u_val5 = ctx[0xd4];
    i_val2 = 0x21C4;
    goto ScriptEngine_Routine_08048F76;
  case 0x8048aac:
    u_val5 = ctx[0xd4];
    i_val2 = 0x21C4;
    goto ScriptEngine_Routine_08048FC6;
  case 0x8048abc:
    u_val5 = ctx[0xd4];
    i_val2 = 0x21C4;
    goto ScriptEngine_Routine_08048FDE;
  case 0x8048acc:
    u_val5 = ctx[0xd4];
    i_val2 = 0x21C4;
    goto ScriptEngine_Routine_08048F16;
  case 0x8048adc:
    u_val5 = ctx[0xd4];
    i_val2 = 0x21C5;
    goto ScriptEngine_Routine_08048EC6;
  case 0x8048aec:
    u_val5 = ctx[0xd4];
    i_val2 = 0x21C5;
    goto ScriptEngine_Routine_08048C0E;
  case 0x8048afc:
    u_val5 = ctx[0xd4];
    i_val2 = 0x21C5;
    goto ScriptEngine_Routine_08048F46;
  case 0x8048b0c:
    u_val5 = ctx[0xd4];
    i_val2 = 0x21C5;
    goto ScriptEngine_Routine_08048F5E;
  case 0x8048b1c:
    u_val5 = ctx[0xd4];
    i_val2 = 0x21C5;
    goto ScriptEngine_Routine_08048F76;
  case 0x8048b2c:
    u_val5 = ctx[0xd4];
    i_val2 = 0x21C5;
    goto ScriptEngine_Routine_08048FC6;
  case 0x8048b3c:
    u_val5 = ctx[0xd4];
    i_val2 = 0x21C5;
    goto ScriptEngine_Routine_08048FDE;
  case 0x8048b4c:
    u_val5 = ctx[0xd4];
    i_val2 = 0x21C5;
    goto ScriptEngine_Routine_08048F16;
  case 0x8048b5c:
    u_val5 = ctx[0xd4];
    i_val2 = 0x21C6;
    goto ScriptEngine_Routine_08048EC6;
  case 0x8048b6c:
    u_val5 = (*(ushort *)(ctx[0xd4] + 0x21C6) & 0x1ff) >> 1;
    break;
  case 0x8048b84:
    u_val5 = ctx[0xd4];
    i_val2 = 0x21C7;
    goto ScriptEngine_Routine_08048C0E;
  case 0x8048b94:
    u_val5 = ctx[0xd4];
    i_val2 = 0x21C7;
    goto ScriptEngine_Routine_08048F46;
  case 0x8048ba4:
    u_val5 = ctx[0xd4];
    i_val2 = 0x21C7;
    goto ScriptEngine_Routine_08048F5E;
  case 0x8048bb4:
    u_val5 = ctx[0xd4];
    i_val2 = 0x21C7;
    goto ScriptEngine_Routine_08048F76;
  case 0x8048bc4:
    u_val5 = ctx[0xd4];
    i_val2 = 0x21C7;
    goto ScriptEngine_Routine_08048FC6;
  case 0x8048bd4:
    u_val5 = ctx[0xd4];
    i_val2 = 0x21C7;
    goto ScriptEngine_Routine_08048FDE;
  case 0x8048be4:
    u_val5 = ctx[0xd4];
    i_val2 = 0x21C7;
    goto ScriptEngine_Routine_08048F16;
  case 0x8048bf4:
    u_val5 = ctx[0xd4];
    i_val2 = 0x21C8;
    goto ScriptEngine_Routine_08048EC6;
  case 0x8048c04:
    u_val5 = ctx[0xd4];
    i_val2 = 0x21C8;
ScriptEngine_Routine_08048C0E:
    u_val5 = (*(byte *)(u_val5 + i_val2) & 3) >> 1;
    break;
  case 0x8048c1c:
    u_val5 = ctx[0xd4];
    p_uint9 = 0x21AB;
    goto ScriptEngine_Routine_08048E76;
  case 0x8048c2c:
    u_val5 = ctx[0xd4];
    i_val2 = 0x21AB;
    goto ScriptEngine_Routine_08048E36;
  case 0x8048c3c:
    u_val5 = ctx[0xd4];
    p_uint9 = 0x21AC;
    goto ScriptEngine_Routine_08048F2E;
  case 0x8048c4c:
    u_val5 = ctx[0xd4];
    i_val2 = 0x21AC;
    goto ScriptEngine_Routine_08048E5E;
  case 0x8048c5c:
    u_val5 = ctx[0xd4];
    p_uint9 = 0x21AC;
    goto ScriptEngine_Routine_08048E76;
  case 0x8048c6c:
    u_val5 = ctx[0xd4];
    i_val2 = 0x21AC;
    goto ScriptEngine_Routine_08048E36;
  case 0x8048c7c:
    u_val5 = ctx[0xd4];
    p_uint9 = 0x21AD;
    goto ScriptEngine_Routine_08048F2E;
  case 0x8048c8c:
    u_val5 = ctx[0xd4];
    i_val2 = 0x21AD;
    goto ScriptEngine_Routine_08048E5E;
  case 0x8048c9c:
    u_val5 = ctx[0xd4];
    p_uint9 = 0x21AD;
    goto ScriptEngine_Routine_08048E76;
  case 0x8048cac:
    u_val5 = ctx[0xd4];
    i_val2 = 0x21AD;
    goto ScriptEngine_Routine_08048E36;
  case 0x8048cbc:
    u_val5 = ctx[0xd4];
    p_uint9 = 0x21AE;
    goto ScriptEngine_Routine_08048F2E;
  case 0x8048ccc:
    u_val5 = ctx[0xd4];
    i_val2 = 0x21AE;
    goto ScriptEngine_Routine_08048E5E;
  case 0x8048cdc:
    u_val5 = ctx[0xd4];
    p_uint9 = 0x21AE;
    goto ScriptEngine_Routine_08048E76;
  case 0x8048cec:
    u_val5 = ctx[0xd4];
    i_val2 = 0x21AE;
    goto ScriptEngine_Routine_08048E36;
  case 0x8048cfc:
    u_val5 = ctx[0xd4];
    p_uint9 = 0x21AF;
    goto ScriptEngine_Routine_08048F2E;
  case 0x8048d0c:
    u_val5 = ctx[0xd4];
    i_val2 = 0x21AF;
    goto ScriptEngine_Routine_08048E5E;
  case 0x8048d1c:
    u_val5 = ctx[0xd4];
    p_uint9 = 0x21AF;
    goto ScriptEngine_Routine_08048E76;
  case 0x8048d2c:
    u_val5 = ctx[0xd4];
    i_val2 = 0x21AF;
    goto ScriptEngine_Routine_08048E36;
  case 0x8048d3c:
    u_val5 = ctx[0xd4];
    p_uint9 = 0x21B0;
    goto ScriptEngine_Routine_08048F2E;
  case 0x8048d4c:
    u_val5 = ctx[0xd4];
    i_val2 = 0x21B0;
    goto ScriptEngine_Routine_08048E5E;
  case 0x8048d5c:
    u_val5 = ctx[0xd4];
    p_uint9 = 0x21B0;
    goto ScriptEngine_Routine_08048E76;
  case 0x8048d6c:
    u_val5 = ctx[0xd4];
    i_val2 = 0x21B0;
    goto ScriptEngine_Routine_08048E36;
  case 0x8048d7c:
    u_val5 = ctx[0xd4];
    p_uint9 = 0x21B1;
    goto ScriptEngine_Routine_08048F2E;
  case 0x8048d8c:
    u_val5 = ctx[0xd4];
    i_val2 = 0x21B1;
    goto ScriptEngine_Routine_08048E5E;
  case 0x8048d9c:
    u_val5 = ctx[0xd4];
    p_uint9 = 0x21B1;
    goto ScriptEngine_Routine_08048E76;
  case 0x8048dac:
    u_val5 = ctx[0xd4];
    i_val2 = 0x21B1;
    goto ScriptEngine_Routine_08048E36;
  case 0x8048dbc:
    u_val5 = ctx[0xd4];
    p_uint9 = 0x21B2;
    goto ScriptEngine_Routine_08048F2E;
  case 0x8048dcc:
    u_val5 = ctx[0xd4];
    i_val2 = 0x21B2;
    goto ScriptEngine_Routine_08048E5E;
  case 0x8048ddc:
    u_val5 = ctx[0xd4];
    p_uint9 = 0x21B2;
    goto ScriptEngine_Routine_08048E76;
  case 0x8048dec:
    u_val5 = ctx[0xd4];
    i_val2 = 0x21B2;
    goto ScriptEngine_Routine_08048E36;
  case 0x8048dfc:
    u_val5 = ctx[0xd4];
    p_uint9 = 0x21B3;
    goto ScriptEngine_Routine_08048F2E;
  case 0x8048e0c:
    u_val5 = ctx[0xd4];
    i_val2 = 0x21B3;
    goto ScriptEngine_Routine_08048E5E;
  case 0x8048e1c:
    u_val5 = ctx[0xd4];
    p_uint9 = 0x21B3;
    goto ScriptEngine_Routine_08048E76;
  case 0x8048e2c:
    u_val5 = ctx[0xd4];
    i_val2 = 0x21B3;
ScriptEngine_Routine_08048E36:
    u_val5 = (uint)(*(byte *)(u_val5 + i_val2) >> 6);
    break;
  case 0x8048e44:
    u_val5 = ctx[0xd4];
    p_uint9 = 0x21B4;
    goto ScriptEngine_Routine_08048F2E;
  case 0x8048e54:
    u_val5 = ctx[0xd4];
    i_val2 = 0x21B4;
ScriptEngine_Routine_08048E5E:
    u_val5 = (*(byte *)(u_val5 + i_val2) & 0xf) >> 2;
    break;
  case 0x8048e6c:
    u_val5 = ctx[0xd4];
    p_uint9 = 0x21B4;
ScriptEngine_Routine_08048E76:
    u_val5 = ((byte)p_uint9[u_val5] & 0x3f) >> 4;
    break;
  case 0x8048e84:
    u_val5 = ctx[0xd4];
    i_val2 = 0x21C8;
    goto ScriptEngine_Routine_08048F46;
  case 0x8048e94:
    u_val5 = ctx[0xd4];
    i_val2 = 0x21C8;
    goto ScriptEngine_Routine_08048F5E;
  case 0x8048ea4:
    u_val5 = (uint)(*(byte *)(ctx[0xd4] + 0x21C8) >> 4);
    break;
  case 0x8048ebc:
    u_val5 = ctx[0xd4];
    i_val2 = 0x21C9;
ScriptEngine_Routine_08048EC6:
    u_val5 = *(byte *)(u_val5 + i_val2) & 1;
    break;
  case 0x8048ed4:
    u_val5 = (*(byte *)(ctx[0xd4] + 0x21C9) & 0x1f) >> 1;
    break;
  case 0x8048eec:
    u_val5 = ctx[0xd4];
    i_val2 = 0x21C9;
    goto ScriptEngine_Routine_08048FC6;
  case 0x8048efc:
    u_val5 = ctx[0xd4];
    i_val2 = 0x21C9;
    goto ScriptEngine_Routine_08048FDE;
  case 0x8048f0c:
    u_val5 = ctx[0xd4];
    i_val2 = 0x21C9;
ScriptEngine_Routine_08048F16:
    u_val5 = (uint)(*(byte *)(u_val5 + i_val2) >> 7);
    break;
  case 0x8048f24:
    u_val5 = ctx[0xd4];
    p_uint9 = 0x21CA;
ScriptEngine_Routine_08048F2E:
    u_val5 = (uint)(byte)p_uint9[u_val5];
ScriptEngine_Routine_08048F32:
    u_val5 = u_val5 & 3;
    break;
  case 0x8048f3c:
    u_val5 = ctx[0xd4];
    i_val2 = 0x21CA;
ScriptEngine_Routine_08048F46:
    u_val5 = (*(byte *)(u_val5 + i_val2) & 7) >> 2;
    break;
  case 0x8048f54:
    u_val5 = ctx[0xd4];
    i_val2 = 0x21CA;
ScriptEngine_Routine_08048F5E:
    u_val5 = (*(byte *)(u_val5 + i_val2) & 0xf) >> 3;
    break;
  case 0x8048f6c:
    u_val5 = ctx[0xd4];
    i_val2 = 0x21CA;
ScriptEngine_Routine_08048F76:
    u_val5 = (*(byte *)(u_val5 + i_val2) & 0x1f) >> 4;
    break;
  case 0x8048f84:
    u_val5 = ctx[0xd4];
    i_val2 = 0x21CA;
    goto ScriptEngine_Routine_08048FC6;
  case 0x8048f94:
    u_val5 = ctx[0xd4];
    i_val2 = 0x21CA;
    goto ScriptEngine_Routine_08048FDE;
  case 0x8048fa4:
    u_val5 = (uint)(*(byte *)(ctx[0xd4] + 0x21CB) >> 2);
    break;
  case 0x8048fbc:
    u_val5 = ctx[0xd4];
    i_val2 = 0x216E;
ScriptEngine_Routine_08048FC6:
    u_val5 = (*(byte *)(u_val5 + i_val2) & 0x3f) >> 5;
    break;
  case 0x8048fd4:
    u_val5 = ctx[0xd4];
    i_val2 = 0x216E;
ScriptEngine_Routine_08048FDE:
    u_val5 = (*(byte *)(u_val5 + i_val2) & 0x7f) >> 6;
  }
  return u_val5;
}

// =============================================================================
// Function: ScriptEngine_Routine_08048FFC @ 0x08048FFC
// =============================================================================
u32 ScriptEngine_Routine_08048FFC(uint ctx,int opcode,uint arg1)

{
  char c_char1;
  byte b_flag2;
  ushort u_val3;
  uint u_val4;
  undefined4 u_val5;
  byte b_flag6;
  undefined2 *p_uint7;
  uint u_val8;
  undefined1 *p_uint9;
  ushort *p_uint10;
  int i_val11;
  byte *pbVar12;
  byte b_flag13;
  ushort u_val14;
  undefined4 u_val15;
  uint u_val16;
  ushort u_val17;
  uint *p_uint18;
  int i_val19;
  int *p_int20;
  undefined4 u_val21;
  undefined1 u_val22;
  
  ScriptEngine_Routine_0804590C();
  if (0x231 < opcode - 0x1cU) goto case_0804DA2E;
  b_flag6 = (byte)arg1;
  switch(*(uint *)((opcode - 0x1cU) * 4 + gInlineTable_08049034) & 0xfffffffe) {
  case 0x80498fc:
    if (arg1 != 0) {
      ScriptEngine_Routine_0804DA2E();
    }
    c_char1 = Farm_Routine_08009B18(*(int *)(ctx + 0x350) + 0x14);
    if (c_char1 != '\0') {
      Farm_ClearDailyFlag(*(int *)(ctx + 0x350) + 0x14);
    }
    goto case_0804DA2E;
  case 0x8049928:
    p_int20 = (int *)(ctx + 0x350);
    i_val19 = Farm_Routine_08009AF8(*p_int20 + 0x14);
    if ((int)(arg1 - i_val19) < 0) {
      Farm_TakeLumber(*p_int20 + 0x14,-(arg1 - i_val19));
    }
    else {
      Farm_AddLumber(*p_int20 + 0x14);
    }
    goto case_0804DA2E;
  case 0x8049956:
    p_int20 = (int *)(ctx + 0x350);
    i_val19 = Building_Routine_0800CE6C(*p_int20 + 0x5f0);
    if ((int)(arg1 - i_val19) < 0) {
      ToolStack_GetAmount(*p_int20 + 0x5f0,-(arg1 - i_val19));
    }
    else {
      ToolStack_IsEmpty(*p_int20 + 0x5f0);
    }
    goto case_0804DA2E;
  case 0x8049990:
    p_int20 = (int *)(ctx + 0x350);
    i_val19 = Building_Routine_0800C568(*p_int20 + 0x410);
    if ((int)(arg1 - i_val19) < 0) {
      Building_Routine_0800C7D8(*p_int20 + 0x410,-(arg1 - i_val19));
    }
    else {
      Building_Routine_0800C794(*p_int20 + 0x410);
    }
    goto case_0804DA2E;
  case 0x80499ca:
    ScriptEngine_Routine_0804DA2C((-arg1 | arg1) >> 0x1f,*(int *)(ctx + 0x350) + _LAB_080499e0);
  case 0x80499e4:
    i_val19 = NPC_Routine_080A0A04(*(int *)(ctx + 0x350) + _LAB_08049a20);
    if (i_val19 != 0) {
      if (arg1 == 0) {
        ScriptEngine_Routine_0804DA2E();
      }
      c_char1 = NPC_Routine_0809EAE0();
      if (c_char1 == '\0') {
        NPC_Routine_0809EAEC(i_val19);
      }
    }
    goto case_0804DA2E;
  case 0x8049a24:
    c_char1 = Building_Routine_0800BF9C(*(int *)(ctx + 0x350) + 500);
    if (c_char1 == '\0') {
      if (arg1 == 0) {
        ScriptEngine_Routine_0804DA2E();
      }
      Building_Routine_0800C194(*(int *)(ctx + 0x350) + 500);
    }
    goto case_0804DA2E;
  case 0x8049a54:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + 0x219C);
    *pbVar12 = *pbVar12 & 0xef | (byte)((arg1 & 1) << 4);
    if (arg1 == 0) {
      if (*(int *)(ctx + 0x354) != 0) {
        Farmer_Routine_080168D4(*(int *)(ctx + 0x354),4);
      }
      goto case_0804DA2E;
    }
    i_val19 = *(int *)(ctx + 0x354);
    if (i_val19 == 0) {
      i_val19 = ScriptEngine_Routine_0804DA2E();
    }
    u_val5 = 4;
    goto LAB_08049b0a;
  case 0x8049aaa:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + 0x219A);
    *pbVar12 = *pbVar12 & 0xfd | (byte)((arg1 & 1) << 1);
    goto joined_r0x08049af6;
  case 0x8049ad4:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_08049b14);
    *pbVar12 = *pbVar12 & 0xfb | (byte)((arg1 & 1) << 2);
joined_r0x08049af6:
    if (arg1 == 0) {
      i_val19 = *(int *)(ctx + 0x354);
      if (i_val19 == 0) {
        i_val19 = ScriptEngine_Routine_0804DA2E();
      }
      Farmer_Routine_080168D4(i_val19,0);
    }
    else {
      i_val19 = *(int *)(ctx + 0x354);
      if (i_val19 != 0) {
        u_val5 = 0;
LAB_08049b0a:
        Farmer_Routine_08016834(i_val19,u_val5,0);
      }
    }
    goto case_0804DA2E;
  case 0x8049b32:
    Building_Routine_0800C244(*(int *)(ctx + 0x350) + 500);
    goto LAB_08049b66;
  case 0x8049b4c:
    Building_Routine_0800C364(*(int *)(ctx + 0x350) + 500,arg1);
LAB_08049b66:
    if (*(int *)(ctx + 0x354) != 0) {
      Farmer_Routine_08016C10();
    }
    goto case_0804DA2E;
  case 0x8049b78:
    NPC_Routine_080A03A4(*(int *)(ctx + 0x350) + _LAB_08049b90,arg1);
    goto case_0804DA2E;
  case 0x8049b94:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + 0x219A);
    *pbVar12 = *pbVar12 & 0xef | (byte)((arg1 & 1) << 4);
    if (arg1 == 0) goto case_0804DA2E;
    i_val19 = *(int *)(ctx + 0x354);
    if (i_val19 == 0) {
      i_val19 = ScriptEngine_Routine_0804DA2E();
    }
    u_val5 = Farmer_Routine_08016AFC(i_val19,0);
    u_val21 = 0;
    goto LAB_08049d4c;
  case 0x8049be0:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + 0x219C);
    *pbVar12 = *pbVar12 & 0x7f | (byte)(arg1 << 7);
    if (arg1 == 0) goto case_0804DA2E;
    i_val19 = *(int *)(ctx + 0x354);
    if (i_val19 == 0) {
      i_val19 = ScriptEngine_Routine_0804DA2E();
    }
    u_val5 = Farmer_Routine_08016AFC(i_val19,4);
    u_val21 = 4;
    goto LAB_08049d4c;
  case 0x8049c24:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + 0x219D);
    *pbVar12 = *pbVar12 & 0xdf | (byte)((arg1 & 1) << 5);
    if (arg1 == 0) goto case_0804DA2E;
    i_val19 = *(int *)(ctx + 0x354);
    if (i_val19 == 0) {
      i_val19 = ScriptEngine_Routine_0804DA2E();
    }
    u_val5 = Farmer_Routine_08016AFC(i_val19,3);
    u_val21 = 3;
    goto LAB_08049d4c;
  case 0x8049c70:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + 0x219E);
    *pbVar12 = *pbVar12 & 0xf7 | (byte)((arg1 & 1) << 3);
    if (arg1 == 0) goto case_0804DA2E;
    i_val19 = *(int *)(ctx + 0x354);
    if (i_val19 == 0) {
      i_val19 = ScriptEngine_Routine_0804DA2E();
    }
    u_val5 = Farmer_Routine_08016AFC(i_val19,1);
    u_val21 = 1;
    goto LAB_08049d4c;
  case 0x8049cbc:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + 0x21A1);
    *pbVar12 = *pbVar12 & 0xdf | (byte)((arg1 & 1) << 5);
    if (arg1 == 0) {
      ScriptEngine_Routine_0804DA2E();
    }
    if (*(int *)(ctx + 0x354) == 0) goto case_0804DA2E;
    u_val5 = Farmer_Routine_08016AFC(*(int *)(ctx + 0x354),0);
    u_val21 = 0;
    goto LAB_08049d4c;
  case 0x8049d08:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_08049d60);
    *pbVar12 = *pbVar12 & 0xf7 | (byte)((arg1 & 1) << 3);
    if (arg1 == 0) {
      ScriptEngine_Routine_0804DA2E();
    }
    if (*(int *)(ctx + 0x354) == 0) goto case_0804DA2E;
    u_val5 = Farmer_Routine_08016AFC(*(int *)(ctx + 0x354),2);
    u_val21 = 2;
LAB_08049d4c:
    i_val19 = ScriptEngine_Routine_0804E3D8(ctx,u_val21,u_val5);
    if (i_val19 != 0) {
      Animal_Routine_0809B26C();
    }
    goto case_0804DA2E;
  case 0x8049d64:
    u_val21 = 1;
    u_val22 = 0;
    u_val5 = 0x46;
    u_val15 = 0x13;
    goto LAB_0804a1b8;
  case 0x8049d76:
    u_val21 = 2;
    u_val22 = 0;
    u_val5 = 0x47;
    u_val15 = 0x13;
    goto LAB_0804a1b8;
  case 0x8049d88:
    u_val21 = 3;
    u_val22 = 0;
    u_val5 = 0x49;
    u_val15 = 0x13;
    goto LAB_0804a1b8;
  case 0x8049d9a:
    u_val21 = 4;
    u_val22 = 0;
    u_val5 = 0x4a;
    u_val15 = 0x13;
    goto LAB_0804a1b8;
  case 0x8049dac:
    u_val21 = 5;
    u_val22 = 0;
    u_val5 = 0x4b;
    u_val15 = 0x13;
    goto LAB_0804a1b8;
  case 0x8049dbe:
    u_val21 = 6;
    u_val22 = 0;
    u_val5 = 0x4c;
    u_val15 = 0x13;
    goto LAB_0804a1b8;
  case 0x8049dd0:
    u_val21 = 1;
    u_val22 = 0;
    u_val5 = 0x4e;
    u_val15 = 3;
    goto LAB_0804a1b8;
  case 0x8049de2:
    u_val21 = 2;
    u_val22 = 0;
    u_val5 = 0x4f;
    u_val15 = 3;
    goto LAB_0804a1b8;
  case 0x8049df4:
    u_val21 = 3;
    u_val22 = 0;
    u_val5 = 0x50;
    u_val15 = 3;
    goto LAB_0804a1b8;
  case 0x8049e06:
    u_val21 = 4;
    u_val22 = 0;
    u_val5 = 0x52;
    u_val15 = 3;
    goto LAB_0804a1b8;
  case 0x8049e18:
    u_val21 = 5;
    u_val22 = 0;
    u_val5 = 0x54;
    u_val15 = 3;
    goto LAB_0804a1b8;
  case 0x8049e2a:
    u_val21 = 6;
    u_val22 = 0;
    u_val5 = 0x55;
    u_val15 = 3;
    goto LAB_0804a1b8;
  case 0x8049e3c:
    u_val21 = 1;
    u_val22 = 0;
    u_val5 = 0x57;
    u_val15 = 0x19;
    goto LAB_0804a1b8;
  case 0x8049e4e:
    u_val21 = 2;
    u_val22 = 0;
    u_val5 = 0x58;
    u_val15 = 0x19;
    goto LAB_0804a1b8;
  case 0x8049e60:
    u_val21 = 3;
    u_val22 = 0;
    u_val5 = 0x5a;
    u_val15 = 0x19;
    goto LAB_0804a1b8;
  case 0x8049e72:
    u_val21 = 4;
    u_val22 = 0;
    u_val5 = 0x5c;
    u_val15 = 0x19;
    goto LAB_0804a1b8;
  case 0x8049e84:
    u_val21 = 5;
    u_val22 = 0;
    u_val5 = 0x5e;
    u_val15 = 0x19;
    goto LAB_0804a1b8;
  case 0x8049e96:
    u_val21 = 6;
    u_val22 = 0;
    u_val5 = 0x5f;
    u_val15 = 0x19;
    goto LAB_0804a1b8;
  case 0x8049ea8:
    u_val21 = 1;
    u_val22 = 0;
    u_val5 = 0x61;
    u_val15 = 0xc;
    goto LAB_0804a1b8;
  case 0x8049eba:
    u_val21 = 2;
    u_val22 = 0;
    u_val5 = 0x62;
    u_val15 = 0xc;
    goto LAB_0804a1b8;
  case 0x8049ecc:
    u_val21 = 3;
    u_val22 = 0;
    u_val5 = 100;
    u_val15 = 0xc;
    goto LAB_0804a1b8;
  case 0x8049ede:
    u_val21 = 4;
    u_val22 = 0;
    u_val5 = 0x65;
    u_val15 = 0xc;
    goto LAB_0804a1b8;
  case 0x8049ef0:
    u_val21 = 5;
    u_val22 = 0;
    u_val5 = 0x66;
    u_val15 = 0xc;
    goto LAB_0804a1b8;
  case 0x8049f02:
    u_val21 = 6;
    u_val22 = 0;
    u_val5 = 0x67;
    u_val15 = 0xc;
    goto LAB_0804a1b8;
  case 0x8049f14:
    u_val21 = 1;
    u_val22 = 0;
    u_val5 = 0x69;
    goto LAB_0804a1b6;
  case 0x8049f24:
    u_val21 = 2;
    u_val22 = 0;
    u_val5 = 0x6a;
    goto LAB_0804a1b6;
  case 0x8049f34:
    u_val21 = 3;
    u_val22 = 0;
    u_val5 = 0x6b;
    goto LAB_0804a1b6;
  case 0x8049f44:
    u_val21 = 4;
    u_val22 = 0;
    u_val5 = 0x6d;
    goto LAB_0804a1b6;
  case 0x8049f54:
    u_val21 = 5;
    u_val22 = 0;
    u_val5 = 0x6e;
    goto LAB_0804a1b6;
  case 0x8049f64:
    u_val21 = 6;
    u_val22 = 0;
    u_val5 = 0x6f;
    goto LAB_0804a1b6;
  case 0x8049f74:
    u_val5 = 0x172;
    u_val21 = 5;
    u_val22 = 0;
    u_val15 = 0x1f;
    goto LAB_0804a1b8;
  case 0x8049f88:
    u_val21 = 6;
    u_val22 = 0;
    u_val15 = 0x1f;
    u_val5 = 0x173;
    goto LAB_0804a1b8;
  case 0x8049fa0:
    u_val21 = 1;
    u_val22 = 1;
    u_val15 = 0x13;
    u_val5 = 0x71;
    goto LAB_0804a1b8;
  case 0x8049fb0:
    u_val21 = 2;
    u_val22 = 1;
    u_val15 = 0x13;
    u_val5 = 0x72;
    goto LAB_0804a1b8;
  case 0x8049fc2:
    u_val21 = 3;
    u_val22 = 1;
    u_val15 = 0x13;
    u_val5 = 0x73;
    goto LAB_0804a1b8;
  case 0x8049fd4:
    u_val21 = 4;
    u_val22 = 1;
    u_val15 = 0x13;
    u_val5 = 0x74;
    goto LAB_0804a1b8;
  case 0x8049fe6:
    u_val21 = 5;
    u_val22 = 1;
    u_val15 = 0x13;
    u_val5 = 0x75;
    goto LAB_0804a1b8;
  case 0x8049ff8:
    u_val21 = 5;
    u_val22 = 1;
    u_val15 = 0x13;
    u_val5 = 0x76;
    goto LAB_0804a1b8;
  case 0x804a00a:
    u_val21 = 5;
    u_val22 = 1;
    u_val15 = 0x13;
    u_val5 = 0x77;
    goto LAB_0804a1b8;
  case 0x804a01c:
    u_val21 = 1;
    u_val22 = 1;
    u_val15 = 3;
    u_val5 = 0x7a;
    goto LAB_0804a1b8;
  case 0x804a02c:
    u_val21 = 2;
    u_val22 = 1;
    u_val15 = 3;
    u_val5 = 0x7b;
    goto LAB_0804a1b8;
  case 0x804a03e:
    u_val21 = 3;
    u_val22 = 1;
    u_val15 = 3;
    u_val5 = 0x7c;
    goto LAB_0804a1b8;
  case 0x804a050:
    u_val21 = 4;
    u_val22 = 1;
    u_val15 = 3;
    u_val5 = 0x7d;
    goto LAB_0804a1b8;
  case 0x804a062:
    u_val21 = 5;
    u_val22 = 1;
    u_val15 = 3;
    u_val5 = 0x7e;
    goto LAB_0804a1b8;
  case 0x804a074:
    u_val21 = 5;
    u_val22 = 1;
    u_val15 = 3;
    u_val5 = 0x7f;
    goto LAB_0804a1b8;
  case 0x804a086:
    u_val21 = 1;
    u_val22 = 1;
    u_val15 = 0x19;
    u_val5 = 0x82;
    goto LAB_0804a1b8;
  case 0x804a096:
    u_val21 = 2;
    u_val22 = 1;
    u_val15 = 0x19;
    u_val5 = 0x83;
    goto LAB_0804a1b8;
  case 0x804a0a8:
    u_val21 = 3;
    u_val22 = 1;
    u_val15 = 0x19;
    u_val5 = 0x84;
    goto LAB_0804a1b8;
  case 0x804a0ba:
    u_val21 = 4;
    u_val22 = 1;
    u_val15 = 0x19;
    u_val5 = 0x85;
    goto LAB_0804a1b8;
  case 0x804a0cc:
    u_val21 = 5;
    u_val22 = 1;
    u_val15 = 0x19;
    u_val5 = 0x86;
    goto LAB_0804a1b8;
  case 0x804a0de:
    u_val21 = 5;
    u_val22 = 1;
    u_val15 = 0x19;
    u_val5 = 0x87;
    goto LAB_0804a1b8;
  case 0x804a0f0:
    u_val21 = 1;
    u_val22 = 1;
    u_val15 = 0xc;
    u_val5 = 0x8a;
    goto LAB_0804a1b8;
  case 0x804a100:
    u_val21 = 2;
    u_val22 = 1;
    u_val15 = 0xc;
    u_val5 = 0x8b;
    goto LAB_0804a1b8;
  case 0x804a112:
    u_val21 = 3;
    u_val22 = 1;
    u_val15 = 0xc;
    u_val5 = 0x8c;
    goto LAB_0804a1b8;
  case 0x804a124:
    u_val21 = 4;
    u_val22 = 1;
    u_val15 = 0xc;
    u_val5 = 0x8d;
    goto LAB_0804a1b8;
  case 0x804a136:
    u_val21 = 5;
    u_val22 = 1;
    u_val15 = 0xc;
    u_val5 = 0x8e;
    goto LAB_0804a1b8;
  case 0x804a148:
    u_val21 = 5;
    u_val22 = 1;
    u_val15 = 0xc;
    u_val5 = 0x8f;
    goto LAB_0804a1b8;
  case 0x804a15a:
    u_val21 = 1;
    u_val22 = 1;
    u_val5 = 0x92;
    goto LAB_0804a1b6;
  case 0x804a168:
    u_val21 = 2;
    u_val22 = 1;
    u_val5 = 0x93;
    goto LAB_0804a1b6;
  case 0x804a178:
    u_val21 = 3;
    u_val22 = 1;
    u_val5 = 0x94;
    goto LAB_0804a1b6;
  case 0x804a188:
    u_val21 = 4;
    u_val22 = 1;
    u_val5 = 0x95;
    goto LAB_0804a1b6;
  case 0x804a198:
    u_val21 = 5;
    u_val22 = 1;
    u_val5 = 0x96;
    goto LAB_0804a1b6;
  case 0x804a1a8:
    u_val21 = 5;
    u_val22 = 1;
    u_val5 = 0x97;
LAB_0804a1b6:
    u_val15 = 0x15;
LAB_0804a1b8:
    ScriptEngine_Routine_08045638(ctx,u_val5,u_val15,arg1,u_val21,u_val22);
    goto case_0804DA2E;
  case 0x804a1c2:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804a1e0);
    arg1 = arg1 & 3;
    ScriptEngine_SetFlagBit(0xfffffff9,p_uint9,*p_uint9,arg1 << 1);
  case 0x804a1e4:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804a1fc);
    b_flag2 = (byte)(arg1 << 6);
    b_flag6 = *pbVar12;
    b_flag13 = 0x3f;
    break;
  case 0x804a200:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804a21c);
    arg1 = arg1 & 3;
    ScriptEngine_SetFlagBit(0xffffffe7,p_uint9,*p_uint9,arg1 << 3);
  case 0x804a220:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804a238);
    b_flag2 = (byte)(arg1 << 6);
    b_flag6 = *pbVar12;
    b_flag13 = 0x3f;
    break;
  case 0x804a23c:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804a258);
    arg1 = arg1 & 3;
    ScriptEngine_SetFlagBit(0xfffffff9,p_uint9,*p_uint9,arg1 << 1);
  case 0x804a25c:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804a27c);
    b_flag2 = *pbVar12 & 0xfe | (byte)arg1 & 1;
    goto ScriptEngine_Routine_0804DA2C;
  case 0x804a280:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804a29c);
    arg1 = arg1 & 1;
    ScriptEngine_SetFlagBit(0xfffffff7,p_uint9,*p_uint9,arg1 << 3);
  case 0x804a2a0:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804a2bc);
    b_flag2 = (byte)((arg1 & 3) << 4);
    b_flag6 = *pbVar12;
    b_flag13 = 0xcf;
    break;
  case 0x804a2c0:
    arg1 = arg1 & 1;
    ScriptEngine_Routine_0804DA2C(*(byte *)(*(int *)(ctx + 0x350) + _LAB_0804a2e0) & 0xfffffffe | arg1);
  case 0x804a2e4:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804a300);
    b_flag2 = (byte)((arg1 & 1) << 1);
    b_flag6 = *pbVar12;
    b_flag13 = 0xfd;
    break;
  case 0x804a304:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804a320);
    arg1 = arg1 & 1;
    ScriptEngine_SetFlagBit(0xfffffffb,p_uint9,*p_uint9,arg1 << 2);
  case 0x804a324:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804a340);
    b_flag2 = (byte)((arg1 & 1) << 5);
    b_flag6 = *pbVar12;
    b_flag13 = 0xdf;
    break;
  case 0x804a344:
    arg1 = arg1 & 1;
    ScriptEngine_Routine_0804DA2C(*(byte *)(*(int *)(ctx + 0x350) + _LAB_0804a364) & 0xfffffffe | arg1);
  case 0x804a368:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804a384);
    b_flag2 = (byte)((arg1 & 1) << 3);
    b_flag6 = *pbVar12;
    b_flag13 = 0xf7;
    break;
  case 0x804a388:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804a3a4);
    arg1 = arg1 & 1;
    ScriptEngine_SetFlagBit(0xffffffdf,p_uint9,*p_uint9,arg1 << 5);
  case 0x804a3a8:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804a3c0);
    b_flag2 = (byte)(arg1 << 7);
    b_flag6 = *pbVar12;
    b_flag13 = 0x7f;
    break;
  case 0x804a3c4:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804a3e0);
    arg1 = arg1 & 1;
    ScriptEngine_SetFlagBit(0xfffffffd,p_uint9,*p_uint9,arg1 << 1);
  case 0x804a3e4:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804a400);
    b_flag2 = (byte)((arg1 & 1) << 3);
    b_flag6 = *pbVar12;
    b_flag13 = 0xf7;
    break;
  case 0x804a404:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804a420);
    arg1 = arg1 & 1;
    ScriptEngine_SetFlagBit(0xffffffef,p_uint9,*p_uint9,arg1 << 4);
  case 0x804a424:
    i_val11 = *(int *)(ctx + 0x350);
    i_val19 = _LAB_0804a434;
    goto ScriptEngine_Routine_0804DA1A;
  case 0x804a438:
    arg1 = arg1 & 1;
    ScriptEngine_Routine_0804DA2C(*(byte *)(*(int *)(ctx + 0x350) + _LAB_0804a458) & 0xfffffffe | arg1);
  case 0x804a45c:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804a478);
    b_flag2 = (byte)((arg1 & 1) << 2);
    b_flag6 = *pbVar12;
    b_flag13 = 0xfb;
    break;
  case 0x804a47c:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804a498);
    arg1 = arg1 & 1;
    ScriptEngine_SetFlagBit(0xffffffef,p_uint9,*p_uint9,arg1 << 4);
  case 0x804a49c:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804a4b8);
    b_flag2 = (byte)((arg1 & 3) << 5);
    b_flag6 = *pbVar12;
    b_flag13 = 0x9f;
    break;
  case 0x804a4bc:
    i_val19 = 0x804a4d7;
    u_val5 = ScriptEngine_Routine_0804CE8E(*(undefined4 *)(*(int *)(ctx + 0x350) + _LAB_0804a4d8),
                            (arg1 & 3) << 0xf,_LAB_0804a4dc);
    ctx = (uint)*(byte *)(ctx + 0x1f);
    (*(code *)(i_val19 + 0xffc))(u_val5,0x5c);
  case 0x804a4e0:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804a4fc);
    b_flag2 = (byte)((arg1 & 3) << 1);
    b_flag6 = *pbVar12;
    b_flag13 = 0xf9;
    break;
  case 0x804a500:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804a51c);
    arg1 = arg1 & 3;
    ScriptEngine_SetFlagBit(0xffffffe7,p_uint9,*p_uint9,arg1 << 3);
  case 0x804a520:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804a53c);
    b_flag2 = (byte)((arg1 & 3) << 5);
    b_flag6 = *pbVar12;
    b_flag13 = 0x9f;
    break;
  case 0x804a540:
    p_uint7 = (undefined2 *)(*(int *)(ctx + 0x350) + _LAB_0804a55c);
    arg1 = arg1 & 3;
    i_val19 = 0x804a55b;
    u_val5 = ScriptEngine_Routine_0804D2D6(_LAB_0804a560,p_uint7,*p_uint7,arg1 << 7);
    i_val11 = 0x804a563;
    (*(code *)(i_val19 + 0xcfe))(u_val5,0x5e);
    (*(code *)(i_val11 + 0xffe))();
  case 0x804a564:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804a580);
    b_flag2 = (byte)((arg1 & 3) << 1);
    b_flag6 = *pbVar12;
    b_flag13 = 0xf9;
    break;
  case 0x804a584:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804a5a0);
    arg1 = arg1 & 3;
    ScriptEngine_SetFlagBit(0xffffffe7,p_uint9,*p_uint9,arg1 << 3);
  case 0x804a5a4:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _ASSET_BLOCK_0804A5C0);
    b_flag2 = (byte)((arg1 & 3) << 5);
    b_flag6 = *pbVar12;
    b_flag13 = 0x9f;
    break;
  case 0x804a5c4:
    i_val19 = *(int *)(ctx + 0x350);
    pbVar12 = (byte *)(i_val19 + _ASSET_BLOCK_0804A5F4);
    *pbVar12 = *pbVar12 & 0x7f | (byte)((arg1 & 1) << 7);
    ScriptEngine_Routine_0804D106(0xfffffffe,arg1 >> 1 & 1,*(undefined1 *)(i_val19 + _LAB_0804a5f8));
  case 0x804a5fc:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804a618);
    b_flag2 = (byte)((arg1 & 3) << 1);
    b_flag6 = *pbVar12;
    b_flag13 = 0xf9;
    break;
  case 0x804a61c:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804a638);
    arg1 = arg1 & 3;
    ScriptEngine_SetFlagBit(0xffffffe7,p_uint9,*p_uint9,arg1 << 3);
  case 0x804a63c:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804a658);
    b_flag2 = (byte)((arg1 & 3) << 5);
    b_flag6 = *pbVar12;
    b_flag13 = 0x9f;
    break;
  case 0x804a65c:
    p_uint7 = (undefined2 *)(*(int *)(ctx + 0x350) + _LAB_0804a678);
    arg1 = arg1 & 3;
    i_val19 = 0x804a677;
    u_val5 = ScriptEngine_Routine_0804D2D6(_LAB_0804a67c,p_uint7,*p_uint7,arg1 << 7);
    i_val11 = 0x804a67f;
    (*(code *)(i_val19 + 0xcfe))(u_val5,0x60);
    (*(code *)(i_val11 + 0xffe))();
  case 0x804a680:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804a69c);
    b_flag2 = (byte)((arg1 & 3) << 1);
    b_flag6 = *pbVar12;
    b_flag13 = 0xf9;
    break;
  case 0x804a6a0:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804a6bc);
    arg1 = arg1 & 3;
    ScriptEngine_SetFlagBit(0xffffffe7,p_uint9,*p_uint9,arg1 << 3);
  case 0x804a6c0:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804a6dc);
    b_flag2 = (byte)((arg1 & 3) << 5);
    b_flag6 = *pbVar12;
    b_flag13 = 0x9f;
    break;
  case 0x804a6e0:
    i_val19 = 0x804a6fb;
    u_val5 = ScriptEngine_Routine_0804CE8E(*(undefined4 *)(*(int *)(ctx + 0x350) + _LAB_0804a6fc),
                            (arg1 & 3) << 0xf,_LAB_0804a700);
    ctx = (uint)*(byte *)(ctx + 0x1f);
    (*(code *)(i_val19 + 0xffc))(u_val5,0x60);
  case 0x804a704:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804a720);
    b_flag2 = (byte)((arg1 & 3) << 1);
    b_flag6 = *pbVar12;
    b_flag13 = 0xf9;
    break;
  case 0x804a724:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804a740);
    arg1 = arg1 & 3;
    ScriptEngine_SetFlagBit(0xffffffe7,p_uint9,*p_uint9,arg1 << 3);
  case 0x804a744:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804a760);
    b_flag2 = (byte)((arg1 & 3) << 5);
    b_flag6 = *pbVar12;
    b_flag13 = 0x9f;
    break;
  case 0x804a764:
    p_uint7 = (undefined2 *)(*(int *)(ctx + 0x350) + _LAB_0804a780);
    arg1 = arg1 & 3;
    i_val19 = 0x804a77f;
    u_val5 = ScriptEngine_Routine_0804D2D6(_LAB_0804a784,p_uint7,*p_uint7,arg1 << 7);
    i_val11 = 0x804a787;
    (*(code *)(i_val19 + 0xcfe))(u_val5,0x62);
    (*(code *)(i_val11 + 0xffe))();
  case 0x804a788:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804a7a4);
    b_flag2 = (byte)((arg1 & 3) << 1);
    b_flag6 = *pbVar12;
    b_flag13 = 0xf9;
    break;
  case 0x804a7a8:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804a7c4);
    arg1 = arg1 & 3;
    ScriptEngine_SetFlagBit(0xffffffe7,p_uint9,*p_uint9,arg1 << 3);
  case 0x804a7c8:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _ASSET_BLOCK_0804A7E4);
    b_flag2 = (byte)((arg1 & 3) << 5);
    b_flag6 = *pbVar12;
    b_flag13 = 0x9f;
    break;
  case 0x804a7e8:
    i_val19 = *(int *)(ctx + 0x350);
    pbVar12 = (byte *)(i_val19 + _ASSET_BLOCK_0804A818);
    *pbVar12 = *pbVar12 & 0x7f | (byte)((arg1 & 1) << 7);
    ScriptEngine_Routine_0804D106(0xfffffffe,arg1 >> 1 & 1,*(undefined1 *)(i_val19 + _LAB_0804a81c));
  case 0x804a820:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804a83c);
    b_flag2 = (byte)((arg1 & 3) << 1);
    b_flag6 = *pbVar12;
    b_flag13 = 0xf9;
    break;
  case 0x804a840:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804a85c);
    arg1 = arg1 & 3;
    ScriptEngine_SetFlagBit(0xffffffe7,p_uint9,*p_uint9,arg1 << 3);
  case 0x804a860:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804a87c);
    b_flag2 = (byte)((arg1 & 3) << 5);
    b_flag6 = *pbVar12;
    b_flag13 = 0x9f;
    break;
  case 0x804a880:
    p_uint7 = (undefined2 *)(*(int *)(ctx + 0x350) + _LAB_0804a89c);
    arg1 = arg1 & 3;
    i_val19 = 0x804a89b;
    u_val5 = ScriptEngine_Routine_0804D2D6(_LAB_0804a8a0,p_uint7,*p_uint7,arg1 << 7);
    i_val11 = 0x804a8a3;
    (*(code *)(i_val19 + 0xcfe))(u_val5,100);
    (*(code *)(i_val11 + 0xffe))();
  case 0x804a8a4:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804a8c0);
    b_flag2 = (byte)((arg1 & 3) << 1);
    b_flag6 = *pbVar12;
    b_flag13 = 0xf9;
    break;
  case 0x804a8c4:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804a8e0);
    arg1 = arg1 & 3;
    ScriptEngine_SetFlagBit(0xffffffe7,p_uint9,*p_uint9,arg1 << 3);
  case 0x804a8e4:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804a900);
    b_flag2 = (byte)((arg1 & 3) << 5);
    b_flag6 = *pbVar12;
    b_flag13 = 0x9f;
    break;
  case 0x804a904:
    i_val19 = 0x804a91f;
    u_val5 = ScriptEngine_Routine_0804CE8E(*(undefined4 *)(*(int *)(ctx + 0x350) + _LAB_0804a920),
                            (arg1 & 3) << 0xf,_LAB_0804a924);
    ctx = (uint)*(byte *)(ctx + 0x1f);
    (*(code *)(i_val19 + 0xffc))(u_val5,100);
  case 0x804a928:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804a944);
    b_flag2 = (byte)((arg1 & 3) << 1);
    b_flag6 = *pbVar12;
    b_flag13 = 0xf9;
    break;
  case 0x804a948:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804a964);
    arg1 = arg1 & 3;
    ScriptEngine_SetFlagBit(0xffffffe7,p_uint9,*p_uint9,arg1 << 3);
  case 0x804a968:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804a984);
    b_flag2 = (byte)((arg1 & 3) << 5);
    b_flag6 = *pbVar12;
    b_flag13 = 0x9f;
    break;
  case 0x804a988:
    p_uint7 = (undefined2 *)(*(int *)(ctx + 0x350) + _LAB_0804a9a4);
    arg1 = arg1 & 3;
    i_val19 = 0x804a9a3;
    u_val5 = ScriptEngine_Routine_0804D2D6(_LAB_0804a9a8,p_uint7,*p_uint7,arg1 << 7);
    i_val11 = 0x804a9ab;
    (*(code *)(i_val19 + 0xcfe))(u_val5,0x66);
    (*(code *)(i_val11 + 0xffe))();
  case 0x804a9ac:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804a9c8);
    b_flag2 = (byte)((arg1 & 3) << 1);
    b_flag6 = *pbVar12;
    b_flag13 = 0xf9;
    break;
  case 0x804a9cc:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804a9e8);
    arg1 = arg1 & 3;
    ScriptEngine_SetFlagBit(0xffffffe7,p_uint9,*p_uint9,arg1 << 3);
  case 0x804a9ec:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _ASSET_BLOCK_0804AA08);
    b_flag2 = (byte)((arg1 & 3) << 5);
    b_flag6 = *pbVar12;
    b_flag13 = 0x9f;
    break;
  case 0x804aa0c:
    i_val19 = *(int *)(ctx + 0x350);
    pbVar12 = (byte *)(i_val19 + _ASSET_BLOCK_0804AA3C);
    *pbVar12 = *pbVar12 & 0x7f | (byte)((arg1 & 1) << 7);
    ScriptEngine_Routine_0804D106(0xfffffffe,arg1 >> 1 & 1,*(undefined1 *)(i_val19 + _LAB_0804aa40));
  case 0x804aa44:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804aa60);
    b_flag2 = (byte)((arg1 & 3) << 1);
    b_flag6 = *pbVar12;
    b_flag13 = 0xf9;
    break;
  case 0x804aa64:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804aa80);
    arg1 = arg1 & 3;
    ScriptEngine_SetFlagBit(0xffffffe7,p_uint9,*p_uint9,arg1 << 3);
  case 0x804aa84:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804aaa0);
    b_flag2 = (byte)((arg1 & 3) << 5);
    b_flag6 = *pbVar12;
    b_flag13 = 0x9f;
    break;
  case 0x804aaa4:
    p_uint10 = (ushort *)(*(int *)(ctx + 0x350) + _LAB_0804aac0);
    u_val17 = (ushort)((arg1 & 3) << 7);
    u_val14 = *p_uint10;
    u_val3 = (ushort)_LAB_0804aac4;
    goto ScriptEngine_Routine_0804D2D6;
  case 0x804aac8:
    arg1 = arg1 & 3;
    ScriptEngine_Routine_0804DA2C(*(byte *)(*(int *)(ctx + 0x350) + _LAB_0804aae8) & 0xfffffffc | arg1);
  case 0x804aaec:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804ab08);
    b_flag2 = (byte)((arg1 & 3) << 1);
    b_flag6 = *pbVar12;
    b_flag13 = 0xf9;
    break;
  case 0x804ab0c:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804ab28);
    arg1 = arg1 & 3;
    ScriptEngine_SetFlagBit(0xffffffe7,p_uint9,*p_uint9,arg1 << 3);
  case 0x804ab2c:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804ab48);
    b_flag2 = (byte)((arg1 & 3) << 5);
    b_flag6 = *pbVar12;
    b_flag13 = 0x9f;
    break;
  case 0x804ab4c:
    i_val19 = 0x804ab67;
    u_val5 = ScriptEngine_Routine_0804CE8E(*(undefined4 *)(*(int *)(ctx + 0x350) + _LAB_0804ab68),
                            (arg1 & 3) << 0xf,_LAB_0804ab6c);
    ctx = (uint)*(byte *)(ctx + 0x1f);
    (*(code *)(i_val19 + 0xffc))(u_val5,0x68);
  case 0x804ab70:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804ab8c);
    b_flag2 = (byte)((arg1 & 3) << 1);
    b_flag6 = *pbVar12;
    b_flag13 = 0xf9;
    break;
  case 0x804ab90:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804abac);
    arg1 = arg1 & 3;
    ScriptEngine_SetFlagBit(0xffffffe7,p_uint9,*p_uint9,arg1 << 3);
  case 0x804abb0:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804abcc);
    b_flag2 = (byte)((arg1 & 3) << 5);
    b_flag6 = *pbVar12;
    b_flag13 = 0x9f;
    break;
  case 0x804abd0:
    p_uint7 = (undefined2 *)(*(int *)(ctx + 0x350) + _LAB_0804abec);
    arg1 = arg1 & 3;
    i_val19 = 0x804abeb;
    u_val5 = ScriptEngine_Routine_0804D2D6(_LAB_0804abf0,p_uint7,*p_uint7,arg1 << 7);
    i_val11 = 0x804abf3;
    (*(code *)(i_val19 + 0xcfe))(u_val5,0x6a);
    (*(code *)(i_val11 + 0xffe))();
  case 0x804abf4:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804ac10);
    b_flag2 = (byte)((arg1 & 3) << 1);
    b_flag6 = *pbVar12;
    b_flag13 = 0xf9;
    break;
  case 0x804ac14:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804ac30);
    arg1 = arg1 & 3;
    ScriptEngine_SetFlagBit(0xffffffe7,p_uint9,*p_uint9,arg1 << 3);
  case 0x804ac34:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _ASSET_BLOCK_0804AC50);
    b_flag2 = (byte)((arg1 & 3) << 5);
    b_flag6 = *pbVar12;
    b_flag13 = 0x9f;
    break;
  case 0x804ac54:
    i_val19 = *(int *)(ctx + 0x350);
    pbVar12 = (byte *)(i_val19 + _ASSET_BLOCK_0804AC84);
    *pbVar12 = *pbVar12 & 0x7f | (byte)((arg1 & 1) << 7);
    ScriptEngine_Routine_0804D106(0xfffffffe,arg1 >> 1 & 1,*(undefined1 *)(i_val19 + _LAB_0804ac88));
  case 0x804ac8c:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804aca8);
    b_flag2 = (byte)((arg1 & 3) << 1);
    b_flag6 = *pbVar12;
    b_flag13 = 0xf9;
    break;
  case 0x804acac:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804acc8);
    arg1 = arg1 & 3;
    ScriptEngine_SetFlagBit(0xffffffe7,p_uint9,*p_uint9,arg1 << 3);
  case 0x804accc:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804ace8);
    b_flag2 = (byte)((arg1 & 3) << 5);
    b_flag6 = *pbVar12;
    b_flag13 = 0x9f;
    break;
  case 0x804acec:
    p_uint7 = (undefined2 *)(*(int *)(ctx + 0x350) + _LAB_0804ad08);
    arg1 = arg1 & 3;
    i_val19 = 0x804ad07;
    u_val5 = ScriptEngine_Routine_0804D2D6(_LAB_0804ad0c,p_uint7,*p_uint7,arg1 << 7);
    i_val11 = 0x804ad0f;
    (*(code *)(i_val19 + 0xcfe))(u_val5,0x6c);
    (*(code *)(i_val11 + 0xffe))();
  case 0x804ad10:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804ad2c);
    b_flag2 = (byte)((arg1 & 3) << 1);
    b_flag6 = *pbVar12;
    b_flag13 = 0xf9;
    break;
  case 0x804ad30:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804ad4c);
    arg1 = arg1 & 3;
    ScriptEngine_SetFlagBit(0xffffffe7,p_uint9,*p_uint9,arg1 << 3);
  case 0x804ad50:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804ad6c);
    b_flag2 = (byte)((arg1 & 3) << 5);
    b_flag6 = *pbVar12;
    b_flag13 = 0x9f;
    break;
  case 0x804ad70:
    i_val19 = 0x804ad8b;
    u_val5 = ScriptEngine_Routine_0804CE8E(*(undefined4 *)(*(int *)(ctx + 0x350) + _LAB_0804ad8c),
                            (arg1 & 3) << 0xf,_LAB_0804ad90);
    ctx = (uint)*(byte *)(ctx + 0x1f);
    (*(code *)(i_val19 + 0xffc))(u_val5,0x6c);
  case 0x804ad94:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804adb0);
    b_flag2 = (byte)((arg1 & 3) << 1);
    b_flag6 = *pbVar12;
    b_flag13 = 0xf9;
    break;
  case 0x804adb4:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _ASSET_BLOCK_0804ADD0);
    arg1 = arg1 & 3;
    ScriptEngine_SetFlagBit(0xffffffe7,p_uint9,*p_uint9,arg1 << 3);
  case 0x804add4:
    i_val11 = *(int *)(ctx + 0x350);
    *(byte *)(i_val11 + _LAB_0804adfc) =
         *(byte *)(i_val11 + _LAB_0804adfc) & 0xf | (byte)((arg1 & 0xf) << 4);
    b_flag6 = (byte)(arg1 >> 4);
    i_val19 = _LAB_0804ae00;
ScriptEngine_Routine_0804D0FE:
    pbVar12 = (byte *)(i_val11 + i_val19);
    b_flag6 = b_flag6 & 7;
    b_flag13 = *pbVar12;
    b_flag2 = 0xf8;
    goto ScriptEngine_Routine_0804D106;
  case 0x804ae04:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804ae20);
    arg1 = arg1 & 3;
    ScriptEngine_SetFlagBit(0xffffffe7,p_uint9,*p_uint9,arg1 << 3);
  case 0x804ae24:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804ae40);
    b_flag2 = (byte)((arg1 & 3) << 5);
    b_flag6 = *pbVar12;
    b_flag13 = 0x9f;
    break;
  case 0x804ae44:
    p_uint10 = (ushort *)(*(int *)(ctx + 0x350) + _LAB_0804ae60);
    u_val17 = (ushort)((arg1 & 3) << 7);
    u_val14 = *p_uint10;
    u_val3 = (ushort)_LAB_0804ae64;
    goto ScriptEngine_Routine_0804D2D6;
  case 0x804ae68:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804ae84);
    arg1 = arg1 & 3;
    ScriptEngine_SetFlagBit(0xfffffff9,p_uint9,*p_uint9,arg1 << 1);
  case 0x804ae88:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804aea4);
    b_flag2 = (byte)((arg1 & 3) << 3);
    b_flag6 = *pbVar12;
    b_flag13 = 0xe7;
    break;
  case 0x804aea8:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804aec4);
    arg1 = arg1 & 3;
    ScriptEngine_SetFlagBit(0xffffff9f,p_uint9,*p_uint9,arg1 << 5);
  case 0x804aec8:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804aee0);
    b_flag2 = (byte)(arg1 << 7);
    b_flag6 = *pbVar12;
    b_flag13 = 0x7f;
    break;
  case 0x804aee4:
    arg1 = arg1 & 3;
    ScriptEngine_Routine_0804DA2C(*(byte *)(*(int *)(ctx + 0x350) + _LAB_0804af04) & 0xfffffffc | arg1);
  case 0x804af08:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804af24);
    b_flag2 = (byte)((arg1 & 3) << 2);
    b_flag6 = *pbVar12;
    b_flag13 = 0xf3;
    break;
  case 0x804af28:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804af44);
    arg1 = arg1 & 3;
    ScriptEngine_SetFlagBit(0xffffffcf,p_uint9,*p_uint9,arg1 << 4);
  case 0x804af48:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804af60);
    b_flag2 = (byte)(arg1 << 6);
    b_flag6 = *pbVar12;
    b_flag13 = 0x3f;
    break;
  case 0x804af64:
    arg1 = arg1 & 3;
    ScriptEngine_Routine_0804DA2C(*(byte *)(*(int *)(ctx + 0x350) + _LAB_0804af84) & 0xfffffffc | arg1);
  case 0x804af88:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804afa4);
    b_flag2 = (byte)((arg1 & 3) << 2);
    b_flag6 = *pbVar12;
    b_flag13 = 0xf3;
    break;
  case 0x804afa8:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804afc4);
    arg1 = arg1 & 3;
    ScriptEngine_SetFlagBit(0xffffffcf,p_uint9,*p_uint9,arg1 << 4);
  case 0x804afc8:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804afe0);
    b_flag2 = (byte)(arg1 << 6);
    b_flag6 = *pbVar12;
    b_flag13 = 0x3f;
    break;
  case 0x804afe4:
    arg1 = arg1 & 3;
    ScriptEngine_Routine_0804DA2C(*(byte *)(*(int *)(ctx + 0x350) + _LAB_0804b004) & 0xfffffffc | arg1);
  case 0x804b008:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804b024);
    b_flag2 = (byte)((arg1 & 3) << 2);
    b_flag6 = *pbVar12;
    b_flag13 = 0xf3;
    break;
  case 0x804b028:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804b044);
    arg1 = arg1 & 3;
    ScriptEngine_SetFlagBit(0xffffffcf,p_uint9,*p_uint9,arg1 << 4);
  case 0x804b048:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804b060);
    b_flag2 = (byte)(arg1 << 6);
    b_flag6 = *pbVar12;
    b_flag13 = 0x3f;
    break;
  case 0x804b064:
    arg1 = arg1 & 3;
    ScriptEngine_Routine_0804DA2C(*(byte *)(*(int *)(ctx + 0x350) + _LAB_0804b084) & 0xfffffffc | arg1);
  case 0x804b088:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804b0a4);
    b_flag2 = (byte)((arg1 & 3) << 2);
    b_flag6 = *pbVar12;
    b_flag13 = 0xf3;
    break;
  case 0x804b0a8:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804b0c4);
    arg1 = arg1 & 1;
    ScriptEngine_SetFlagBit(0xffffffef,p_uint9,*p_uint9,arg1 << 4);
  case 0x804b0c8:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804b0e4);
    b_flag2 = (byte)((arg1 & 1) << 5);
    b_flag6 = *pbVar12;
    b_flag13 = 0xdf;
    break;
  case 0x804b0e8:
    ScriptEngine_Routine_0804DA1A((undefined4 *)(ctx + 0x350),*(undefined4 *)(ctx + 0x350),_LAB_0804b0f8);
  case 0x804b0fc:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804b114);
    b_flag2 = (byte)(arg1 << 7);
    b_flag6 = *pbVar12;
    b_flag13 = 0x7f;
    break;
  case 0x804b118:
    arg1 = arg1 & 1;
    ScriptEngine_Routine_0804DA2C(*(byte *)(*(int *)(ctx + 0x350) + _LAB_0804b138) & 0xfffffffe | arg1);
  case 0x804b13c:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804b158);
    b_flag2 = (byte)((arg1 & 3) << 1);
    b_flag6 = *pbVar12;
    b_flag13 = 0xf9;
    break;
  case 0x804b15c:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804b178);
    arg1 = arg1 & 3;
    ScriptEngine_SetFlagBit(0xffffffe7,p_uint9,*p_uint9,arg1 << 3);
  case 0x804b17c:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804b198);
    b_flag2 = (byte)((arg1 & 3) << 5);
    b_flag6 = *pbVar12;
    b_flag13 = 0x9f;
    break;
  case 0x804b19c:
    p_uint7 = (undefined2 *)(*(int *)(ctx + 0x350) + _LAB_0804b1b8);
    arg1 = arg1 & 3;
    i_val19 = 0x804b1b7;
    u_val5 = ScriptEngine_Routine_0804D2D6(_LAB_0804b1bc,p_uint7,*p_uint7,arg1 << 7);
    i_val11 = 0x804b1bf;
    (*(code *)(i_val19 + 0xcfe))(u_val5,0x76);
    (*(code *)(i_val11 + 0xffe))();
  case 0x804b1c0:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804b1dc);
    b_flag2 = (byte)((arg1 & 3) << 1);
    b_flag6 = *pbVar12;
    b_flag13 = 0xf9;
    break;
  case 0x804b1e0:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804b1fc);
    arg1 = arg1 & 1;
    ScriptEngine_SetFlagBit(0xfffffff7,p_uint9,*p_uint9,arg1 << 3);
  case 0x804b200:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804b21c);
    b_flag2 = (byte)((arg1 & 3) << 4);
    b_flag6 = *pbVar12;
    b_flag13 = 0xcf;
    break;
  case 0x804b220:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804b238);
    ScriptEngine_SetFlagBit(0x3f,p_uint9,*p_uint9,arg1 << 6);
  case 0x804b23c:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804b25c);
    b_flag2 = *pbVar12 & 0xfe | b_flag6 & 1;
    goto ScriptEngine_Routine_0804DA2C;
  case 0x804b260:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804b27c);
    arg1 = arg1 & 3;
    ScriptEngine_SetFlagBit(0xfffffff9,p_uint9,*p_uint9,arg1 << 1);
  case 0x804b280:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804b29c);
    b_flag2 = (byte)((arg1 & 7) << 3);
    b_flag6 = *pbVar12;
    b_flag13 = 199;
    break;
  case 0x804b2a0:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804b2b8);
    ScriptEngine_SetFlagBit(0x3f,p_uint9,*p_uint9,arg1 << 6);
  case 0x804b2bc:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804b2dc);
    b_flag2 = *pbVar12 & 0xfc | b_flag6 & 3;
    goto ScriptEngine_Routine_0804DA2C;
  case 0x804b2e0:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804b2fc);
    arg1 = arg1 & 3;
    ScriptEngine_SetFlagBit(0xfffffff3,p_uint9,*p_uint9,arg1 << 2);
  case 0x804b300:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804b31c);
    b_flag2 = (byte)((arg1 & 3) << 4);
    b_flag6 = *pbVar12;
    b_flag13 = 0xcf;
    break;
  case 0x804b320:
    i_val19 = 0x804b33b;
    u_val5 = ScriptEngine_Routine_0804CE8E(*(undefined4 *)(*(int *)(ctx + 0x350) + _LAB_0804b33c),
                            (arg1 & 0xf) << 0xe,_LAB_0804b340);
    ctx = ctx - 0xff;
    (*(code *)(i_val19 + 0xff8))(u_val5,0x78);
  case 0x804b344:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804b360);
    b_flag2 = (byte)((arg1 & 1) << 2);
    b_flag6 = *pbVar12;
    b_flag13 = 0xfb;
    break;
  case 0x804b364:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804b380);
    arg1 = arg1 & 3;
    ScriptEngine_SetFlagBit(0xffffffe7,p_uint9,*p_uint9,arg1 << 3);
  case 0x804b384:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804b3a0);
    b_flag2 = (byte)((arg1 & 3) << 5);
    b_flag6 = *pbVar12;
    b_flag13 = 0x9f;
    break;
  case 0x804b3a4:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804b3bc);
    ScriptEngine_SetFlagBit(0x7f,p_uint9,*p_uint9,arg1 << 7);
  case 0x804b3c0:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804b3e0);
    b_flag2 = *pbVar12 & 0xe0 | b_flag6 & 0x1f;
    goto ScriptEngine_Routine_0804DA2C;
  case 0x804b3e4:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _ASSET_BLOCK_0804B400);
    arg1 = arg1 & 3;
    ScriptEngine_SetFlagBit(0xffffff9f,p_uint9,*p_uint9,arg1 << 5);
  case 0x804b404:
    i_val19 = *(int *)(ctx + 0x350);
    pbVar12 = (byte *)(i_val19 + _ASSET_BLOCK_0804B434);
    *pbVar12 = *pbVar12 & 0x7f | (byte)((arg1 & 1) << 7);
    pbVar12 = (byte *)(i_val19 + _LAB_0804b438);
    b_flag6 = (byte)(arg1 >> 1) & 1;
    b_flag13 = *pbVar12;
    b_flag2 = 0xfe;
    goto ScriptEngine_Routine_0804D106;
  case 0x804b43c:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804b458);
    arg1 = arg1 & 3;
    ScriptEngine_SetFlagBit(0xfffffff9,p_uint9,*p_uint9,arg1 << 1);
  case 0x804b45c:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804b478);
    b_flag2 = (byte)((arg1 & 3) << 3);
    b_flag6 = *pbVar12;
    b_flag13 = 0xe7;
    break;
  case 0x804b47c:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804b498);
    arg1 = arg1 & 3;
    ScriptEngine_SetFlagBit(0xffffff9f,p_uint9,*p_uint9,arg1 << 5);
  case 0x804b49c:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804b4b4);
    b_flag2 = (byte)(arg1 << 7);
    b_flag6 = *pbVar12;
    b_flag13 = 0x7f;
    break;
  case 0x804b4b8:
    arg1 = arg1 & 3;
    ScriptEngine_Routine_0804DA2C(*(byte *)(*(int *)(ctx + 0x350) + _LAB_0804b4d8) & 0xfffffffc | arg1);
  case 0x804b4dc:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804b4f8);
    b_flag2 = (byte)((arg1 & 3) << 2);
    b_flag6 = *pbVar12;
    b_flag13 = 0xf3;
    break;
  case 0x804b4fc:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804b518);
    arg1 = arg1 & 3;
    ScriptEngine_SetFlagBit(0xffffffcf,p_uint9,*p_uint9,arg1 << 4);
  case 0x804b51c:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804b534);
    b_flag2 = (byte)(arg1 << 6);
    b_flag6 = *pbVar12;
    b_flag13 = 0x3f;
    break;
  case 0x804b538:
    arg1 = arg1 & 3;
    ScriptEngine_Routine_0804DA2C(*(byte *)(*(int *)(ctx + 0x350) + _LAB_0804b558) & 0xfffffffc | arg1);
  case 0x804b55c:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804b578);
    b_flag2 = (byte)((arg1 & 3) << 2);
    b_flag6 = *pbVar12;
    b_flag13 = 0xf3;
    break;
  case 0x804b57c:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804b598);
    arg1 = arg1 & 3;
    ScriptEngine_SetFlagBit(0xffffffcf,p_uint9,*p_uint9,arg1 << 4);
  case 0x804b59c:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804b5b4);
    b_flag2 = (byte)(arg1 << 6);
    b_flag6 = *pbVar12;
    b_flag13 = 0x3f;
    break;
  case 0x804b5b8:
    arg1 = arg1 & 3;
    ScriptEngine_Routine_0804DA2C(*(byte *)(*(int *)(ctx + 0x350) + _LAB_0804b5d8) & 0xfffffffc | arg1);
  case 0x804b5dc:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804b5f8);
    b_flag2 = (byte)((arg1 & 3) << 2);
    b_flag6 = *pbVar12;
    b_flag13 = 0xf3;
    break;
  case 0x804b5fc:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804b618);
    arg1 = arg1 & 3;
    ScriptEngine_SetFlagBit(0xffffffcf,p_uint9,*p_uint9,arg1 << 4);
  case 0x804b61c:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804b634);
    b_flag2 = (byte)(arg1 << 6);
    b_flag6 = *pbVar12;
    b_flag13 = 0x3f;
    break;
  case 0x804b638:
    arg1 = arg1 & 3;
    ScriptEngine_Routine_0804DA2C((byte)(0x2180)[*(int *)(ctx + 0x350)] & 0xfffffffc | arg1);
  case 0x804b658:
    pbVar12 = 0x2180 + *(int *)(ctx + 0x350);
    b_flag2 = (byte)((arg1 & 3) << 2);
    b_flag6 = *pbVar12;
    b_flag13 = 0xf3;
    break;
  case 0x804b676:
    arg1 = arg1 & 3;
    ScriptEngine_SetFlagBit(0xffffffcf,0x2180 + *(int *)(ctx + 0x350),
                    (0x2180)[*(int *)(ctx + 0x350)],arg1 << 4);
  case 0x804b694:
    pbVar12 = 0x2180 + *(int *)(ctx + 0x350);
    b_flag2 = (byte)(arg1 << 6);
    b_flag6 = *pbVar12;
    b_flag13 = 0x3f;
    break;
  case 0x804b6ac:
    arg1 = arg1 & 3;
    ScriptEngine_Routine_0804DA2C(*(byte *)(*(int *)(ctx + 0x350) + _LAB_0804b6cc) & 0xfffffffc | arg1);
  case 0x804b6d0:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804b6ec);
    b_flag2 = (byte)((arg1 & 3) << 2);
    b_flag6 = *pbVar12;
    b_flag13 = 0xf3;
    break;
  case 0x804b6f0:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804b70c);
    arg1 = arg1 & 3;
    ScriptEngine_SetFlagBit(0xffffffcf,p_uint9,*p_uint9,arg1 << 4);
  case 0x804b710:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804b728);
    b_flag2 = (byte)(arg1 << 6);
    b_flag6 = *pbVar12;
    b_flag13 = 0x3f;
    break;
  case 0x804b72c:
    arg1 = arg1 & 3;
    ScriptEngine_Routine_0804DA2C(*(byte *)(*(int *)(ctx + 0x350) + _LAB_0804b74c) & 0xfffffffc | arg1);
  case 0x804b750:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804b76c);
    b_flag2 = (byte)((arg1 & 1) << 2);
    b_flag6 = *pbVar12;
    b_flag13 = 0xfb;
    break;
  case 0x804b770:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804b78c);
    arg1 = arg1 & 3;
    ScriptEngine_SetFlagBit(0xffffffe7,p_uint9,*p_uint9,arg1 << 3);
  case 0x804b790:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804b7ac);
    b_flag2 = (byte)((arg1 & 3) << 5);
    b_flag6 = *pbVar12;
    b_flag13 = 0x9f;
    break;
  case 0x804b7b0:
    p_uint7 = (undefined2 *)(*(int *)(ctx + 0x350) + _LAB_0804b7cc);
    arg1 = arg1 & 3;
    i_val19 = 0x804b7cb;
    u_val5 = ScriptEngine_Routine_0804D2D6(_LAB_0804b7d0,p_uint7,*p_uint7,arg1 << 7);
    i_val11 = 0x804b7d3;
    (*(code *)(i_val19 + 0xcfe))(u_val5,0x82);
    (*(code *)(i_val11 + 0xffe))();
  case 0x804b7d4:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804b7f0);
    b_flag2 = (byte)((arg1 & 3) << 1);
    b_flag6 = *pbVar12;
    b_flag13 = 0xf9;
    break;
  case 0x804b7f4:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804b810);
    arg1 = arg1 & 3;
    ScriptEngine_SetFlagBit(0xffffffe7,p_uint9,*p_uint9,arg1 << 3);
  case 0x804b814:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _ASSET_BLOCK_0804B830);
    b_flag2 = (byte)((arg1 & 3) << 5);
    b_flag6 = *pbVar12;
    b_flag13 = 0x9f;
    break;
  case 0x804b834:
    i_val19 = *(int *)(ctx + 0x350);
    pbVar12 = (byte *)(i_val19 + _ASSET_BLOCK_0804B864);
    *pbVar12 = *pbVar12 & 0x7f | (byte)((arg1 & 1) << 7);
    ScriptEngine_Routine_0804D106(0xfffffffe,arg1 >> 1 & 1,*(undefined1 *)(i_val19 + _LAB_0804b868));
  case 0x804b86c:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804b888);
    b_flag2 = (byte)((arg1 & 1) << 1);
    b_flag6 = *pbVar12;
    b_flag13 = 0xfd;
    break;
  case 0x804b88c:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804b8a8);
    arg1 = arg1 & 3;
    ScriptEngine_SetFlagBit(0xfffffff3,p_uint9,*p_uint9,arg1 << 2);
  case 0x804b8ac:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804b8c8);
    b_flag2 = (byte)((arg1 & 3) << 4);
    b_flag6 = *pbVar12;
    b_flag13 = 0xcf;
    break;
  case 0x804b8cc:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804b8e4);
    ScriptEngine_SetFlagBit(0x3f,p_uint9,*p_uint9,arg1 << 6);
  case 0x804b8e8:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804b908);
    b_flag2 = *pbVar12 & 0xfc | b_flag6 & 3;
    goto ScriptEngine_Routine_0804DA2C;
  case 0x804b90c:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804b928);
    arg1 = arg1 & 3;
    ScriptEngine_SetFlagBit(0xfffffff3,p_uint9,*p_uint9,arg1 << 2);
  case 0x804b92c:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804b948);
    b_flag2 = (byte)((arg1 & 3) << 4);
    b_flag6 = *pbVar12;
    b_flag13 = 0xcf;
    break;
  case 0x804b94c:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804b964);
    ScriptEngine_SetFlagBit(0x3f,p_uint9,*p_uint9,arg1 << 6);
  case 0x804b968:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804b988);
    b_flag2 = *pbVar12 & 0xfc | b_flag6 & 3;
    goto ScriptEngine_Routine_0804DA2C;
  case 0x804b98c:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804b9a8);
    arg1 = arg1 & 7;
    ScriptEngine_SetFlagBit(0xffffffe3,p_uint9,*p_uint9,arg1 << 2);
  case 0x804b9ac:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804b9c8);
    b_flag2 = (byte)((arg1 & 3) << 5);
    b_flag6 = *pbVar12;
    b_flag13 = 0x9f;
    break;
  case 0x804b9cc:
    p_uint7 = (undefined2 *)(*(int *)(ctx + 0x350) + _LAB_0804b9e8);
    arg1 = arg1 & 3;
    i_val19 = 0x804b9e7;
    u_val5 = ScriptEngine_Routine_0804D2D6(_LAB_0804b9ec,p_uint7,*p_uint7,arg1 << 7);
    i_val11 = 0x804b9ef;
    (*(code *)(i_val19 + 0xcfe))(u_val5,0x86);
    (*(code *)(i_val11 + 0xffe))();
  case 0x804b9f0:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804ba0c);
    b_flag2 = (byte)((arg1 & 3) << 1);
    b_flag6 = *pbVar12;
    b_flag13 = 0xf9;
    break;
  case 0x804ba10:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804ba2c);
    arg1 = arg1 & 3;
    ScriptEngine_SetFlagBit(0xffffffe7,p_uint9,*p_uint9,arg1 << 3);
  case 0x804ba30:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _ASSET_BLOCK_0804BA4C);
    b_flag2 = (byte)((arg1 & 3) << 5);
    b_flag6 = *pbVar12;
    b_flag13 = 0x9f;
    break;
  case 0x804ba50:
    i_val19 = *(int *)(ctx + 0x350);
    pbVar12 = (byte *)(i_val19 + _ASSET_BLOCK_0804BA80);
    *pbVar12 = *pbVar12 & 0x7f | (byte)((arg1 & 1) << 7);
    ScriptEngine_Routine_0804D106(0xfffffffe,arg1 >> 1 & 1,*(undefined1 *)(i_val19 + _LAB_0804ba84));
  case 0x804ba88:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804baa4);
    b_flag2 = (byte)((arg1 & 3) << 1);
    b_flag6 = *pbVar12;
    b_flag13 = 0xf9;
    break;
  case 0x804baa8:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804bac4);
    arg1 = arg1 & 3;
    ScriptEngine_SetFlagBit(0xffffffe7,p_uint9,*p_uint9,arg1 << 3);
  case 0x804bac8:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804bae4);
    b_flag2 = (byte)((arg1 & 3) << 5);
    b_flag6 = *pbVar12;
    b_flag13 = 0x9f;
    break;
  case 0x804bae8:
    p_uint10 = (ushort *)(*(int *)(ctx + 0x350) + _LAB_0804bb04);
    u_val17 = (ushort)((arg1 & 7) << 7);
    u_val14 = *p_uint10;
    u_val3 = (ushort)_LAB_0804bb08;
    goto ScriptEngine_Routine_0804D2D6;
  case 0x804bb0c:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804bb28);
    arg1 = arg1 & 3;
    ScriptEngine_SetFlagBit(0xfffffff3,p_uint9,*p_uint9,arg1 << 2);
  case 0x804bb2c:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804bb48);
    b_flag2 = (byte)((arg1 & 3) << 4);
    b_flag6 = *pbVar12;
    b_flag13 = 0xcf;
    break;
  case 0x804bb4c:
    i_val19 = 0x804bb67;
    u_val5 = ScriptEngine_Routine_0804CE8E(*(undefined4 *)(*(int *)(ctx + 0x350) + _LAB_0804bb68),
                            (arg1 & 0xf) << 0xe,_LAB_0804bb6c);
    ctx = ctx - 0xff;
    (*(code *)(i_val19 + 0xff8))(u_val5,0x88);
  case 0x804bb70:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804bb8c);
    b_flag2 = (byte)((arg1 & 3) << 2);
    b_flag6 = *pbVar12;
    b_flag13 = 0xf3;
    break;
  case 0x804bb90:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804bbac);
    arg1 = arg1 & 3;
    ScriptEngine_SetFlagBit(0xffffffcf,p_uint9,*p_uint9,arg1 << 4);
  case 0x804bbb0:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804bbc8);
    b_flag2 = (byte)(arg1 << 6);
    b_flag6 = *pbVar12;
    b_flag13 = 0x3f;
    break;
  case 0x804bbcc:
    arg1 = arg1 & 3;
    ScriptEngine_Routine_0804DA2C(*(byte *)(*(int *)(ctx + 0x350) + _LAB_0804bbec) & 0xfffffffc | arg1);
  case 0x804bbf0:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _ASSET_BLOCK_0804BC0C);
    b_flag2 = (byte)((arg1 & 3) << 3);
    b_flag6 = *pbVar12;
    b_flag13 = 0xe7;
    break;
  case 0x804bc10:
    i_val19 = *(int *)(ctx + 0x350);
    pbVar12 = (byte *)(i_val19 + _LAB_0804bc40);
    *pbVar12 = *pbVar12 & 0x1f | (byte)((arg1 & 7) << 5);
    ScriptEngine_Routine_0804D106(0xfffffffe,arg1 >> 3 & 1,*(undefined1 *)(i_val19 + _LAB_0804bc44));
  case 0x804bc48:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804bc64);
    b_flag2 = (byte)((arg1 & 3) << 1);
    b_flag6 = *pbVar12;
    b_flag13 = 0xf9;
    break;
  case 0x804bc68:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804bc84);
    arg1 = arg1 & 3;
    ScriptEngine_SetFlagBit(0xffffffe7,p_uint9,*p_uint9,arg1 << 3);
  case 0x804bc88:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804bca4);
    b_flag2 = (byte)((arg1 & 3) << 5);
    b_flag6 = *pbVar12;
    b_flag13 = 0x9f;
    break;
  case 0x804bca8:
    p_uint10 = (ushort *)(*(int *)(ctx + 0x350) + _LAB_0804bcc4);
    u_val17 = (ushort)((arg1 & 3) << 7);
    u_val14 = *p_uint10;
    u_val3 = (ushort)_LAB_0804bcc8;
    goto ScriptEngine_Routine_0804D2D6;
  case 0x804bccc:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804bce8);
    arg1 = arg1 & 3;
    ScriptEngine_SetFlagBit(0xfffffff9,p_uint9,*p_uint9,arg1 << 1);
  case 0x804bcec:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804bd08);
    b_flag2 = (byte)((arg1 & 3) << 3);
    b_flag6 = *pbVar12;
    b_flag13 = 0xe7;
    break;
  case 0x804bd0c:
    i_val19 = 0x804bd27;
    u_val5 = ScriptEngine_Routine_0804CE8E(*(undefined4 *)(*(int *)(ctx + 0x350) + _LAB_0804bd28),
                            (arg1 & 0xf) << 0xd,_LAB_0804bd2c);
    ctx = ctx - 7;
    (*(code *)(i_val19 + 0xffc))(u_val5,0x8c);
  case 0x804bd30:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804bd4c);
    b_flag2 = (byte)((arg1 & 3) << 1);
    b_flag6 = *pbVar12;
    b_flag13 = 0xf9;
    break;
  case 0x804bd50:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804bd6c);
    arg1 = arg1 & 3;
    ScriptEngine_SetFlagBit(0xffffffe7,p_uint9,*p_uint9,arg1 << 3);
  case 0x804bd70:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804bd8c);
    b_flag2 = (byte)((arg1 & 1) << 5);
    b_flag6 = *pbVar12;
    b_flag13 = 0xdf;
    break;
  case 0x804bd90:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804bda8);
    ScriptEngine_SetFlagBit(0x3f,p_uint9,*p_uint9,arg1 << 6);
  case 0x804bdac:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804bdcc);
    b_flag2 = *pbVar12 & 0xfc | b_flag6 & 3;
    goto ScriptEngine_Routine_0804DA2C;
  case 0x804bdd0:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804bdec);
    arg1 = arg1 & 3;
    ScriptEngine_SetFlagBit(0xfffffff3,p_uint9,*p_uint9,arg1 << 2);
  case 0x804bdf0:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804be0c);
    b_flag2 = (byte)((arg1 & 3) << 4);
    b_flag6 = *pbVar12;
    b_flag13 = 0xcf;
    break;
  case 0x804be10:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804be28);
    ScriptEngine_SetFlagBit(0x3f,p_uint9,*p_uint9,arg1 << 6);
  case 0x804be2c:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804be4c);
    b_flag2 = *pbVar12 & 0xfc | b_flag6 & 3;
    goto ScriptEngine_Routine_0804DA2C;
  case 0x804be50:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804be6c);
    arg1 = arg1 & 3;
    ScriptEngine_SetFlagBit(0xfffffff3,p_uint9,*p_uint9,arg1 << 2);
  case 0x804be70:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804be8c);
    b_flag2 = (byte)((arg1 & 3) << 4);
    b_flag6 = *pbVar12;
    b_flag13 = 0xcf;
    break;
  case 0x804be90:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804bea8);
    ScriptEngine_SetFlagBit(0x3f,p_uint9,*p_uint9,arg1 << 6);
  case 0x804beac:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804becc);
    b_flag2 = *pbVar12 & 0xfc | b_flag6 & 3;
    goto ScriptEngine_Routine_0804DA2C;
  case 0x804bed0:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804beec);
    arg1 = arg1 & 3;
    ScriptEngine_SetFlagBit(0xfffffff3,p_uint9,*p_uint9,arg1 << 2);
  case 0x804bef0:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804bf0c);
    b_flag2 = (byte)((arg1 & 3) << 4);
    b_flag6 = *pbVar12;
    b_flag13 = 0xcf;
    break;
  case 0x804bf10:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804bf28);
    ScriptEngine_SetFlagBit(0x3f,p_uint9,*p_uint9,arg1 << 6);
  case 0x804bf2c:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804bf4c);
    b_flag2 = *pbVar12 & 0xfc | b_flag6 & 3;
    goto ScriptEngine_Routine_0804DA2C;
  case 0x804bf50:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804bf6c);
    arg1 = arg1 & 3;
    ScriptEngine_SetFlagBit(0xfffffff3,p_uint9,*p_uint9,arg1 << 2);
  case 0x804bf70:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804bf8c);
    b_flag2 = (byte)((arg1 & 3) << 4);
    b_flag6 = *pbVar12;
    b_flag13 = 0xcf;
    break;
  case 0x804bf90:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804bfa8);
    ScriptEngine_SetFlagBit(0x3f,p_uint9,*p_uint9,arg1 << 6);
  case 0x804bfac:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804bfcc);
    b_flag2 = *pbVar12 & 0xfc | b_flag6 & 3;
    goto ScriptEngine_Routine_0804DA2C;
  case 0x804bfd0:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804bfec);
    arg1 = arg1 & 3;
    ScriptEngine_SetFlagBit(0xfffffff3,p_uint9,*p_uint9,arg1 << 2);
  case 0x804bff0:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804c00c);
    b_flag2 = (byte)((arg1 & 3) << 4);
    b_flag6 = *pbVar12;
    b_flag13 = 0xcf;
    break;
  case 0x804c010:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804c028);
    ScriptEngine_SetFlagBit(0x3f,p_uint9,*p_uint9,arg1 << 6);
  case 0x804c02c:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804c04c);
    b_flag2 = *pbVar12 & 0xfc | b_flag6 & 3;
    goto ScriptEngine_Routine_0804DA2C;
  case 0x804c050:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804c06c);
    arg1 = arg1 & 3;
    ScriptEngine_SetFlagBit(0xfffffff3,p_uint9,*p_uint9,arg1 << 2);
  case 0x804c070:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804c08c);
    b_flag2 = (byte)((arg1 & 3) << 4);
    b_flag6 = *pbVar12;
    b_flag13 = 0xcf;
    break;
  case 0x804c090:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804c0a8);
    ScriptEngine_SetFlagBit(0x3f,p_uint9,*p_uint9,arg1 << 6);
  case 0x804c0ac:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804c0cc);
    b_flag2 = *pbVar12 & 0xfc | b_flag6 & 3;
    goto ScriptEngine_Routine_0804DA2C;
  case 0x804c0d0:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804c0e8);
    ScriptEngine_SetFlagBit(0x3f,p_uint9,*p_uint9,arg1 << 6);
  case 0x804c0ec:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804c10c);
    b_flag2 = *pbVar12 & 0xfc | b_flag6 & 3;
    goto ScriptEngine_Routine_0804DA2C;
  case 0x804c110:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804c12c);
    arg1 = arg1 & 3;
    ScriptEngine_SetFlagBit(0xfffffff3,p_uint9,*p_uint9,arg1 << 2);
  case 0x804c130:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804c14c);
    b_flag2 = (byte)((arg1 & 3) << 4);
    b_flag6 = *pbVar12;
    b_flag13 = 0xcf;
    break;
  case 0x804c150:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804c168);
    ScriptEngine_SetFlagBit(0x3f,p_uint9,*p_uint9,arg1 << 6);
  case 0x804c16c:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804c188);
    b_flag2 = (byte)((arg1 & 3) << 2);
    b_flag6 = *pbVar12;
    b_flag13 = 0xf3;
    break;
  case 0x804c18c:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804c1a8);
    arg1 = arg1 & 3;
    ScriptEngine_SetFlagBit(0xffffffcf,p_uint9,*p_uint9,arg1 << 4);
  case 0x804c1ac:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804c1c4);
    b_flag2 = (byte)(arg1 << 6);
    b_flag6 = *pbVar12;
    b_flag13 = 0x3f;
    break;
  case 0x804c1c8:
    arg1 = arg1 & 3;
    ScriptEngine_Routine_0804DA2C(*(byte *)(*(int *)(ctx + 0x350) + _LAB_0804c1e8) & 0xfffffffc | arg1);
  case 0x804c1ec:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804c208);
    b_flag2 = (byte)((arg1 & 3) << 2);
    b_flag6 = *pbVar12;
    b_flag13 = 0xf3;
    break;
  case 0x804c20c:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804c228);
    arg1 = arg1 & 3;
    ScriptEngine_SetFlagBit(0xffffffcf,p_uint9,*p_uint9,arg1 << 4);
  case 0x804c22c:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804c244);
    b_flag2 = (byte)(arg1 << 6);
    b_flag6 = *pbVar12;
    b_flag13 = 0x3f;
    break;
  case 0x804c248:
    arg1 = arg1 & 3;
    ScriptEngine_Routine_0804DA2C(*(byte *)(*(int *)(ctx + 0x350) + _LAB_0804c268) & 0xfffffffc | arg1);
  case 0x804c26c:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804c288);
    b_flag2 = (byte)((arg1 & 1) << 2);
    b_flag6 = *pbVar12;
    b_flag13 = 0xfb;
    break;
  case 0x804c28c:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804c2a8);
    arg1 = arg1 & 1;
    ScriptEngine_SetFlagBit(0xfffffff7,p_uint9,*p_uint9,arg1 << 3);
  case 0x804c2ac:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804c2c8);
    b_flag2 = (byte)((arg1 & 1) << 4);
    b_flag6 = *pbVar12;
    b_flag13 = 0xef;
    break;
  case 0x804c2cc:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804c2e8);
    arg1 = arg1 & 1;
    ScriptEngine_SetFlagBit(0xffffffdf,p_uint9,*p_uint9,arg1 << 5);
  case 0x804c2ec:
    i_val11 = *(int *)(ctx + 0x350);
    i_val19 = _LAB_0804c2fc;
    goto ScriptEngine_Routine_0804DA1A;
  case 0x804c300:
    p_uint18 = (uint *)(*(int *)(ctx + 0x350) + _LAB_0804c31c);
    u_val8 = (arg1 & 3) << 0xf;
    u_val4 = *p_uint18;
    u_val16 = _LAB_0804c320;
    goto ScriptEngine_Routine_0804CE8E;
  case 0x804c324:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804c340);
    arg1 = arg1 & 3;
    ScriptEngine_SetFlagBit(0xfffffff3,p_uint9,*p_uint9,arg1 << 2);
  case 0x804c344:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804c360);
    b_flag2 = (byte)((arg1 & 3) << 5);
    b_flag6 = *pbVar12;
    b_flag13 = 0x9f;
    break;
  case 0x804c364:
    p_uint7 = (undefined2 *)(*(int *)(ctx + 0x350) + _LAB_0804c380);
    arg1 = arg1 & 3;
    i_val19 = 0x804c37f;
    u_val5 = ScriptEngine_Routine_0804D2D6(_LAB_0804c384,p_uint7,*p_uint7,arg1 << 7);
    i_val11 = 0x804c387;
    (*(code *)(i_val19 + 0xcfe))(u_val5,0x9a);
    (*(code *)(i_val11 + 0xffe))();
  case 0x804c388:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804c3a4);
    b_flag2 = (byte)((arg1 & 7) << 1);
    b_flag6 = *pbVar12;
    b_flag13 = 0xf1;
    break;
  case 0x804c3a8:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804c3c4);
    arg1 = arg1 & 3;
    ScriptEngine_SetFlagBit(0xffffffcf,p_uint9,*p_uint9,arg1 << 4);
  case 0x804c3c8:
    i_val11 = *(int *)(ctx + 0x350);
    i_val19 = _LAB_0804c3d8;
    goto ScriptEngine_Routine_0804DA1A;
  case 0x804c3dc:
    i_val19 = *(int *)(ctx + 0x350);
    pbVar12 = (byte *)(i_val19 + _LAB_0804c40c);
    *pbVar12 = *pbVar12 & 0x7f | (byte)((arg1 & 1) << 7);
    ScriptEngine_Routine_0804D106(0xfffffffc,arg1 >> 1 & 3,*(undefined1 *)(i_val19 + _LAB_0804c410));
  case 0x804c414:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804c430);
    b_flag2 = (byte)((arg1 & 3) << 2);
    b_flag6 = *pbVar12;
    b_flag13 = 0xf3;
    break;
  case 0x804c434:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804c450);
    arg1 = arg1 & 3;
    ScriptEngine_SetFlagBit(0xffffff9f,p_uint9,*p_uint9,arg1 << 5);
  case 0x804c454:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804c474);
    b_flag2 = *pbVar12 & 0xfc | (byte)arg1 & 3;
    goto ScriptEngine_Routine_0804DA2C;
  case 0x804c478:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804c494);
    arg1 = arg1 & 1;
    ScriptEngine_SetFlagBit(0xfffffffb,p_uint9,*p_uint9,arg1 << 2);
  case 0x804c498:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804c4b4);
    b_flag2 = (byte)((arg1 & 3) << 3);
    b_flag6 = *pbVar12;
    b_flag13 = 0xe7;
    break;
  case 0x804c4b8:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804c4d0);
    ScriptEngine_SetFlagBit(0x3f,p_uint9,*p_uint9,arg1 << 6);
  case 0x804c4d4:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804c4f4);
    b_flag2 = *pbVar12 & 0xfe | b_flag6 & 1;
    goto ScriptEngine_Routine_0804DA2C;
  case 0x804c4f8:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804c514);
    arg1 = arg1 & 3;
    ScriptEngine_SetFlagBit(0xfffffff9,p_uint9,*p_uint9,arg1 << 1);
  case 0x804c518:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804c534);
    b_flag2 = (byte)((arg1 & 3) << 4);
    b_flag6 = *pbVar12;
    b_flag13 = 0xcf;
    break;
  case 0x804c538:
    p_uint7 = (undefined2 *)(*(int *)(ctx + 0x350) + _LAB_0804c554);
    arg1 = arg1 & 7;
    i_val19 = 0x804c553;
    u_val5 = ScriptEngine_Routine_0804D2D6(_LAB_0804c558,p_uint7,*p_uint7,arg1 << 6);
    i_val11 = 0x804c55b;
    (*(code *)(i_val19 + 0xc7e))(u_val5,0x9e);
    (*(code *)(i_val11 + 0xffe))();
  case 0x804c55c:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804c578);
    b_flag2 = (byte)((arg1 & 3) << 1);
    b_flag6 = *pbVar12;
    b_flag13 = 0xf9;
    break;
  case 0x804c57c:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804c598);
    arg1 = arg1 & 1;
    ScriptEngine_SetFlagBit(0xfffffff7,p_uint9,*p_uint9,arg1 << 3);
  case 0x804c59c:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804c5b8);
    b_flag2 = (byte)((arg1 & 3) << 4);
    b_flag6 = *pbVar12;
    b_flag13 = 0xcf;
    break;
  case 0x804c5bc:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804c5d4);
    ScriptEngine_SetFlagBit(0x3f,p_uint9,*p_uint9,arg1 << 6);
  case 0x804c5d8:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804c5f8);
    b_flag2 = *pbVar12 & 0xfc | b_flag6 & 3;
    goto ScriptEngine_Routine_0804DA2C;
  case 0x804c5fc:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804c618);
    arg1 = arg1 & 1;
    ScriptEngine_SetFlagBit(0xfffffffb,p_uint9,*p_uint9,arg1 << 2);
  case 0x804c61c:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804c638);
    b_flag2 = (byte)((arg1 & 1) << 3);
    b_flag6 = *pbVar12;
    b_flag13 = 0xf7;
    break;
  case 0x804c63c:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804c658);
    arg1 = arg1 & 1;
    ScriptEngine_SetFlagBit(0xffffffef,p_uint9,*p_uint9,arg1 << 4);
  case 0x804c65c:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804c678);
    b_flag2 = (byte)((arg1 & 3) << 5);
    b_flag6 = *pbVar12;
    b_flag13 = 0x9f;
    break;
  case 0x804c67c:
    p_uint10 = (ushort *)(*(int *)(ctx + 0x350) + _LAB_0804c698);
    u_val17 = (ushort)((arg1 & 7) << 7);
    u_val14 = *p_uint10;
    u_val3 = (ushort)_LAB_0804c69c;
    goto ScriptEngine_Routine_0804D2D6;
  case 0x804c6a0:
    arg1 = arg1 & 3;
    ScriptEngine_Routine_0804DA2C(*(byte *)(*(int *)(ctx + 0x350) + _LAB_0804c6c0) & 0xfffffffc | arg1);
  case 0x804c6c4:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804c6e0);
    b_flag2 = (byte)((arg1 & 3) << 3);
    b_flag6 = *pbVar12;
    b_flag13 = 0xe7;
    break;
  case 0x804c6e4:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804c6fc);
    ScriptEngine_SetFlagBit(0x3f,p_uint9,*p_uint9,arg1 << 6);
  case 0x804c700:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804c720);
    b_flag2 = *pbVar12 & 0xfe | b_flag6 & 1;
    goto ScriptEngine_Routine_0804DA2C;
  case 0x804c724:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804c740);
    arg1 = arg1 & 3;
    ScriptEngine_SetFlagBit(0xfffffff9,p_uint9,*p_uint9,arg1 << 1);
  case 0x804c744:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804c760);
    b_flag2 = (byte)((arg1 & 3) << 4);
    b_flag6 = *pbVar12;
    b_flag13 = 0xcf;
    break;
  case 0x804c764:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804c77c);
    ScriptEngine_SetFlagBit(0x3f,p_uint9,*p_uint9,arg1 << 6);
  case 0x804c780:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804c7a0);
    b_flag2 = *pbVar12 & 0xfc | b_flag6 & 3;
    goto ScriptEngine_Routine_0804DA2C;
  case 0x804c7a4:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804c7c0);
    arg1 = arg1 & 3;
    ScriptEngine_SetFlagBit(0xfffffff3,p_uint9,*p_uint9,arg1 << 2);
  case 0x804c7c4:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804c7e0);
    b_flag2 = (byte)((arg1 & 3) << 4);
    b_flag6 = *pbVar12;
    b_flag13 = 0xcf;
    break;
  case 0x804c7e4:
    ScriptEngine_Routine_0804DA1A((undefined4 *)(ctx + 0x350),*(undefined4 *)(ctx + 0x350),_LAB_0804c7f4);
  case 0x804c7f8:
    i_val19 = *(int *)(ctx + 0x350);
    pbVar12 = (byte *)(i_val19 + _ASSET_BLOCK_0804C828);
    *pbVar12 = *pbVar12 & 0x7f | (byte)((arg1 & 1) << 7);
    pbVar12 = (byte *)(i_val19 + _LAB_0804c82c);
    b_flag6 = (byte)(arg1 >> 1) & 1;
    b_flag13 = *pbVar12;
    b_flag2 = 0xfe;
    goto ScriptEngine_Routine_0804D106;
  case 0x804c830:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804c84c);
    arg1 = arg1 & 1;
    ScriptEngine_SetFlagBit(0xfffffffd,p_uint9,*p_uint9,arg1 << 1);
  case 0x804c850:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804c86c);
    b_flag2 = (byte)((arg1 & 3) << 2);
    b_flag6 = *pbVar12;
    b_flag13 = 0xf3;
    break;
  case 0x804c870:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804c88c);
    arg1 = arg1 & 1;
    ScriptEngine_SetFlagBit(0xffffffef,p_uint9,*p_uint9,arg1 << 4);
  case 0x804c890:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804c8ac);
    b_flag2 = (byte)((arg1 & 3) << 5);
    b_flag6 = *pbVar12;
    b_flag13 = 0x9f;
    break;
  case 0x804c8b0:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804c8c8);
    ScriptEngine_SetFlagBit(0x7f,p_uint9,*p_uint9,arg1 << 7);
  case 0x804c8cc:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804c8ec);
    b_flag2 = *pbVar12 & 0xfc | b_flag6 & 3;
    goto ScriptEngine_Routine_0804DA2C;
  case 0x804c8f0:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804c90c);
    arg1 = arg1 & 1;
    ScriptEngine_SetFlagBit(0xfffffffb,p_uint9,*p_uint9,arg1 << 2);
  case 0x804c910:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804c92c);
    b_flag2 = (byte)((arg1 & 3) << 3);
    b_flag6 = *pbVar12;
    b_flag13 = 0xe7;
    break;
  case 0x804c930:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804c94c);
    arg1 = arg1 & 3;
    ScriptEngine_SetFlagBit(0xffffff9f,p_uint9,*p_uint9,arg1 << 5);
  case 0x804c950:
    p_uint18 = (uint *)(*(int *)(ctx + 0x350) + 0x21A4);
    u_val8 = (arg1 & 7) << 0xf;
    u_val4 = *p_uint18;
    u_val16 = 0xFFFC7FFF;
    goto ScriptEngine_Routine_0804CE8E;
  case 0x804c970:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804c98c);
    b_flag2 = (byte)((arg1 & 1) << 2);
    b_flag6 = *pbVar12;
    b_flag13 = 0xfb;
    break;
  case 0x804c990:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804c9ac);
    arg1 = arg1 & 1;
    ScriptEngine_SetFlagBit(0xfffffff7,p_uint9,*p_uint9,arg1 << 3);
  case 0x804c9b0:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804c9cc);
    b_flag2 = (byte)((arg1 & 1) << 4);
    b_flag6 = *pbVar12;
    b_flag13 = 0xef;
    break;
  case 0x804c9d0:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804c9ec);
    arg1 = arg1 & 1;
    ScriptEngine_SetFlagBit(0xffffffdf,p_uint9,*p_uint9,arg1 << 5);
  case 0x804c9f0:
    i_val11 = *(int *)(ctx + 0x350);
    i_val19 = _LAB_0804ca00;
    goto ScriptEngine_Routine_0804DA1A;
  case 0x804ca04:
    p_uint10 = (ushort *)(*(int *)(ctx + 0x350) + _LAB_0804ca20);
    u_val17 = (ushort)((arg1 & 3) << 7);
    u_val14 = *p_uint10;
    u_val3 = (ushort)_LAB_0804ca24;
    goto ScriptEngine_Routine_0804D2D6;
  case 0x804ca28:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804ca44);
    arg1 = arg1 & 3;
    ScriptEngine_SetFlagBit(0xfffffff9,p_uint9,*p_uint9,arg1 << 1);
  case 0x804ca48:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804ca64);
    b_flag2 = (byte)((arg1 & 3) << 3);
    b_flag6 = *pbVar12;
    b_flag13 = 0xe7;
    break;
  case 0x804ca68:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _ASSET_BLOCK_0804CA84);
    arg1 = arg1 & 3;
    ScriptEngine_SetFlagBit(0xffffff9f,p_uint9,*p_uint9,arg1 << 5);
  case 0x804ca88:
    i_val19 = *(int *)(ctx + 0x350);
    pbVar12 = (byte *)(i_val19 + 0x21A7);
    *pbVar12 = *pbVar12 & 0x7f | (byte)((arg1 & 1) << 7);
    pbVar12 = (byte *)(i_val19 + 0x21A8);
    b_flag6 = (byte)(arg1 >> 1) & 1;
    b_flag13 = *pbVar12;
    b_flag2 = 0xfe;
    goto ScriptEngine_Routine_0804D106;
  case 0x804cac0:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804cadc);
    b_flag2 = (byte)((arg1 & 3) << 1);
    b_flag6 = *pbVar12;
    b_flag13 = 0xf9;
    break;
  case 0x804cae0:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804cafc);
    arg1 = arg1 & 3;
    ScriptEngine_SetFlagBit(0xffffffe7,p_uint9,*p_uint9,arg1 << 3);
  case 0x804cb00:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804cb18);
    b_flag2 = (byte)(arg1 << 5);
    b_flag6 = *pbVar12;
    b_flag13 = 0x1f;
    break;
  case 0x804cb1c:
    arg1 = arg1 & 3;
    ScriptEngine_Routine_0804DA2C(*(byte *)(*(int *)(ctx + 0x350) + _LAB_0804cb3c) & 0xfffffffc | arg1);
  case 0x804cb40:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804cb5c);
    b_flag2 = (byte)((arg1 & 3) << 2);
    b_flag6 = *pbVar12;
    b_flag13 = 0xf3;
    break;
  case 0x804cb60:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804cb7c);
    arg1 = arg1 & 1;
    ScriptEngine_SetFlagBit(0xffffffef,p_uint9,*p_uint9,arg1 << 4);
  case 0x804cb80:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804cb9c);
    b_flag2 = (byte)((arg1 & 1) << 5);
    b_flag6 = *pbVar12;
    b_flag13 = 0xdf;
    break;
  case 0x804cba0:
    ScriptEngine_Routine_0804DA1A((undefined4 *)(ctx + 0x350),*(undefined4 *)(ctx + 0x350),_LAB_0804cbb0);
  case 0x804cbb4:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804cbcc);
    b_flag2 = (byte)(arg1 << 7);
    b_flag6 = *pbVar12;
    b_flag13 = 0x7f;
    break;
  case 0x804cbd0:
    arg1 = arg1 & 1;
    ScriptEngine_Routine_0804DA2C(*(byte *)(*(int *)(ctx + 0x350) + _LAB_0804cbf0) & 0xfffffffe | arg1);
  case 0x804cbf4:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804cc10);
    b_flag2 = (byte)((arg1 & 1) << 1);
    b_flag6 = *pbVar12;
    b_flag13 = 0xfd;
    break;
  case 0x804cc14:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804cc30);
    arg1 = arg1 & 1;
    ScriptEngine_SetFlagBit(0xfffffffb,p_uint9,*p_uint9,arg1 << 2);
  case 0x804cc34:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804cc50);
    b_flag2 = (byte)((arg1 & 1) << 3);
    b_flag6 = *pbVar12;
    b_flag13 = 0xf7;
    break;
  case 0x804cc54:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804cc70);
    arg1 = arg1 & 1;
    ScriptEngine_SetFlagBit(0xffffffef,p_uint9,*p_uint9,arg1 << 4);
  case 0x804cc74:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804cc90);
    b_flag2 = (byte)((arg1 & 1) << 5);
    b_flag6 = *pbVar12;
    b_flag13 = 0xdf;
    break;
  case 0x804cc94:
    ScriptEngine_Routine_0804DA1A((undefined4 *)(ctx + 0x350),*(undefined4 *)(ctx + 0x350),_LAB_0804cca4);
  case 0x804cca8:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804ccc0);
    b_flag2 = (byte)(arg1 << 7);
    b_flag6 = *pbVar12;
    b_flag13 = 0x7f;
    break;
  case 0x804ccc4:
    arg1 = arg1 & 1;
    ScriptEngine_Routine_0804DA2C(*(byte *)(*(int *)(ctx + 0x350) + _LAB_0804cce4) & 0xfffffffe | arg1);
  case 0x804cce8:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804cd04);
    b_flag2 = (byte)((arg1 & 1) << 1);
    b_flag6 = *pbVar12;
    b_flag13 = 0xfd;
    break;
  case 0x804cd08:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804cd24);
    arg1 = arg1 & 1;
    ScriptEngine_SetFlagBit(0xfffffffb,p_uint9,*p_uint9,arg1 << 2);
  case 0x804cd28:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804cd44);
    b_flag2 = (byte)((arg1 & 1) << 3);
    b_flag6 = *pbVar12;
    b_flag13 = 0xf7;
    break;
  case 0x804cd48:
    p_uint10 = (ushort *)(*(int *)(ctx + 0x350) + 0x21B4);
    u_val17 = (ushort)((arg1 & 0xff) << 6);
    u_val14 = *p_uint10;
    u_val3 = (ushort)0xFFFFC03F;
    goto ScriptEngine_Routine_0804D2D6;
  case 0x804cd68:
    i_val11 = *(int *)(ctx + 0x350);
    i_val19 = 0x21B4;
    goto LAB_0804ce82;
  case 0x804cd78:
    p_uint10 = (ushort *)(*(int *)(ctx + 0x350) + 0x21B6);
    u_val17 = (ushort)((arg1 & 0xff) << 6);
    u_val14 = *p_uint10;
    u_val3 = (ushort)0xFFFFC03F;
    goto ScriptEngine_Routine_0804D2D6;
  case 0x804cd98:
    i_val19 = *(int *)(ctx + 0x350);
    pbVar12 = (byte *)(i_val19 + 0x21B7);
    *pbVar12 = *pbVar12 & 0x3f | (byte)((arg1 & 3) << 6);
    pbVar12 = (byte *)(i_val19 + 0x21B8);
    b_flag6 = (byte)(arg1 >> 2) & 0x3f;
    b_flag13 = *pbVar12;
    b_flag2 = 0xc0;
    goto ScriptEngine_Routine_0804D106;
  case 0x804cdd0:
    p_uint10 = (ushort *)(*(int *)(ctx + 0x350) + 0x21B8);
    u_val17 = (ushort)((arg1 & 0xff) << 6);
    u_val14 = *p_uint10;
    u_val3 = (ushort)0xFFFFC03F;
    goto ScriptEngine_Routine_0804D2D6;
  case 0x804cdf0:
    i_val11 = *(int *)(ctx + 0x350);
    i_val19 = 0x21B8;
    goto LAB_0804ce82;
  case 0x804ce00:
    p_uint10 = (ushort *)(*(int *)(ctx + 0x350) + 0x21BA);
    u_val17 = (ushort)((arg1 & 0xff) << 6);
    u_val14 = *p_uint10;
    u_val3 = (ushort)0xFFFFC03F;
    goto ScriptEngine_Routine_0804D2D6;
  case 0x804ce20:
    i_val19 = *(int *)(ctx + 0x350);
    pbVar12 = (byte *)(i_val19 + 0x21BB);
    *pbVar12 = *pbVar12 & 0x3f | (byte)((arg1 & 3) << 6);
    pbVar12 = (byte *)(i_val19 + 0x21BC);
    b_flag6 = (byte)(arg1 >> 2) & 0x3f;
    b_flag13 = *pbVar12;
    b_flag2 = 0xc0;
    goto ScriptEngine_Routine_0804D106;
  case 0x804ce58:
    p_uint10 = (ushort *)(*(int *)(ctx + 0x350) + 0x21BC);
    u_val17 = (ushort)((arg1 & 0xff) << 6);
    u_val14 = *p_uint10;
    u_val3 = (ushort)0xFFFFC03F;
    goto ScriptEngine_Routine_0804D2D6;
  case 0x804ce78:
    i_val11 = *(int *)(ctx + 0x350);
    i_val19 = _LAB_0804ce98;
LAB_0804ce82:
    p_uint18 = (uint *)(i_val11 + i_val19);
    u_val8 = (arg1 & 0xff) << 0xe;
    u_val4 = *p_uint18;
    u_val16 = _LAB_0804ce9c;
ScriptEngine_Routine_0804CE8E:
    *p_uint18 = u_val4 & u_val16 | u_val8;
    goto case_0804DA2E;
  case 0x804cea0:
    p_uint10 = (ushort *)(*(int *)(ctx + 0x350) + 0x21BE);
    u_val17 = (ushort)((arg1 & 0xff) << 6);
    u_val14 = *p_uint10;
    u_val3 = (ushort)0xFFFFC03F;
    goto ScriptEngine_Routine_0804D2D6;
  case 0x804cec0:
    i_val19 = *(int *)(ctx + 0x350);
    pbVar12 = (byte *)(i_val19 + 0x21BF);
    *pbVar12 = *pbVar12 & 0x3f | (byte)((arg1 & 3) << 6);
    pbVar12 = 0x21c0 + i_val19;
    b_flag6 = (byte)(arg1 >> 2) & 0x3f;
    b_flag13 = *pbVar12;
    b_flag2 = 0xc0;
ScriptEngine_Routine_0804D106:
    *pbVar12 = b_flag2 & b_flag13 | b_flag6;
    ScriptEngine_Routine_0804DA2E();
case_0804D118:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804d134);
    b_flag2 = (byte)((arg1 & 1) << 3);
    b_flag6 = *pbVar12;
    b_flag13 = 0xf7;
    break;
  case 0x804cef4:
    p_uint10 = (ushort *)(0x21c0 + *(int *)(ctx + 0x350));
    u_val17 = (ushort)((arg1 & 7) << 6);
    u_val14 = *p_uint10;
    u_val3 = (ushort)0xFFFFFE3F;
    goto ScriptEngine_Routine_0804D2D6;
  case 0x804cf14:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804cf30);
    arg1 = arg1 & 3;
    ScriptEngine_SetFlagBit(0xfffffff9,p_uint9,*p_uint9,arg1 << 1);
  case 0x804cf34:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804cf50);
    b_flag2 = (byte)((arg1 & 1) << 3);
    b_flag6 = *pbVar12;
    b_flag13 = 0xf7;
    break;
  case 0x804cf54:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804cf70);
    arg1 = arg1 & 1;
    ScriptEngine_SetFlagBit(0xffffffef,p_uint9,*p_uint9,arg1 << 4);
  case 0x804cf74:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804cf90);
    b_flag2 = (byte)((arg1 & 1) << 5);
    b_flag6 = *pbVar12;
    b_flag13 = 0xdf;
    break;
  case 0x804cf94:
    ScriptEngine_Routine_0804DA1A((undefined4 *)(ctx + 0x350),*(undefined4 *)(ctx + 0x350),_LAB_0804cfa4);
  case 0x804cfa8:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804cfc0);
    b_flag2 = (byte)(arg1 << 7);
    b_flag6 = *pbVar12;
    b_flag13 = 0x7f;
    break;
  case 0x804cfc4:
    arg1 = arg1 & 1;
    ScriptEngine_Routine_0804DA2C(*(byte *)(*(int *)(ctx + 0x350) + _LAB_0804cfe4) & 0xfffffffe | arg1);
  case 0x804cfe8:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804d004);
    b_flag2 = (byte)((arg1 & 1) << 1);
    b_flag6 = *pbVar12;
    b_flag13 = 0xfd;
    break;
  case 0x804d008:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804d024);
    arg1 = arg1 & 1;
    ScriptEngine_SetFlagBit(0xfffffffb,p_uint9,*p_uint9,arg1 << 2);
  case 0x804d028:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804d044);
    b_flag2 = (byte)((arg1 & 1) << 3);
    b_flag6 = *pbVar12;
    b_flag13 = 0xf7;
    break;
  case 0x804d048:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804d064);
    arg1 = arg1 & 1;
    ScriptEngine_SetFlagBit(0xffffffef,p_uint9,*p_uint9,arg1 << 4);
  case 0x804d068:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804d084);
    b_flag2 = (byte)((arg1 & 1) << 5);
    b_flag6 = *pbVar12;
    b_flag13 = 0xdf;
    break;
  case 0x804d088:
    ScriptEngine_Routine_0804DA1A((undefined4 *)(ctx + 0x350),*(undefined4 *)(ctx + 0x350),_LAB_0804d098);
  case 0x804d09c:
    p_uint10 = (ushort *)(*(int *)(ctx + 0x350) + 0x21C2);
    u_val17 = (ushort)((arg1 & 0xf) << 7);
    u_val14 = *p_uint10;
    u_val3 = (ushort)0xFFFFF87F;
    goto ScriptEngine_Routine_0804D2D6;
  case 0x804d0bc:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _ASSET_BLOCK_0804D0D8);
    b_flag2 = (byte)((arg1 & 0xf) << 3);
    b_flag6 = *pbVar12;
    b_flag13 = 0x87;
    break;
  case 0x804d0dc:
    i_val11 = *(int *)(ctx + 0x350);
    *(byte *)(i_val11 + _ASSET_BLOCK_0804D110) =
         *(byte *)(i_val11 + _ASSET_BLOCK_0804D110) & 0x7f | (byte)((arg1 & 1) << 7);
    b_flag6 = (byte)(arg1 >> 1);
    i_val19 = _LAB_0804d114;
    goto ScriptEngine_Routine_0804D0FE;
  case 0x804d118:
    goto case_0804D118;
  case 0x804d138:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804d154);
    arg1 = arg1 & 1;
    ScriptEngine_SetFlagBit(0xffffffef,p_uint9,*p_uint9,arg1 << 4);
  case 0x804d158:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804d174);
    b_flag2 = (byte)((arg1 & 1) << 5);
    b_flag6 = *pbVar12;
    b_flag13 = 0xdf;
    break;
  case 0x804d178:
    ScriptEngine_Routine_0804DA1A((undefined4 *)(ctx + 0x350),*(undefined4 *)(ctx + 0x350),_LAB_0804d188);
  case 0x804d18c:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804d1a4);
    b_flag2 = (byte)(arg1 << 7);
    b_flag6 = *pbVar12;
    b_flag13 = 0x7f;
    break;
  case 0x804d1a8:
    arg1 = arg1 & 1;
    ScriptEngine_Routine_0804DA2C(*(byte *)(*(int *)(ctx + 0x350) + _LAB_0804d1c8) & 0xfffffffe | arg1);
  case 0x804d1cc:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804d1e8);
    b_flag2 = (byte)((arg1 & 1) << 1);
    b_flag6 = *pbVar12;
    b_flag13 = 0xfd;
    break;
  case 0x804d1ec:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804d208);
    arg1 = arg1 & 1;
    ScriptEngine_SetFlagBit(0xfffffffb,p_uint9,*p_uint9,arg1 << 2);
  case 0x804d20c:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804d228);
    b_flag2 = (byte)((arg1 & 1) << 3);
    b_flag6 = *pbVar12;
    b_flag13 = 0xf7;
    break;
  case 0x804d22c:
    p_uint9 = (undefined1 *)(*(int *)(ctx + 0x350) + _LAB_0804d248);
    arg1 = arg1 & 1;
    ScriptEngine_SetFlagBit(0xffffffef,p_uint9,*p_uint9,arg1 << 4);
  case 0x804d24c:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804d268);
    b_flag2 = (byte)((arg1 & 1) << 5);
    b_flag6 = *pbVar12;
    b_flag13 = 0xdf;
    break;
  case 0x804d26c:
    ScriptEngine_Routine_0804DA1A((undefined4 *)(ctx + 0x350),*(undefined4 *)(ctx + 0x350),_LAB_0804d27c);
  case 0x804d280:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + _LAB_0804d298);
    b_flag2 = (byte)(arg1 << 7);
    b_flag6 = *pbVar12;
    b_flag13 = 0x7f;
    break;
  case 0x804d29c:
    arg1 = arg1 & 1;
    ScriptEngine_Routine_0804DA2C(*(byte *)(*(int *)(ctx + 0x350) + _LAB_0804d2bc) & 0xfffffffe | arg1);
  case 0x804d2c0:
    p_uint10 = (ushort *)(*(int *)(ctx + 0x350) + _LAB_0804d2e0);
    u_val17 = (ushort)((arg1 & 0xff) << 1);
    u_val14 = *p_uint10;
    u_val3 = (ushort)_LAB_0804d2e4;
ScriptEngine_Routine_0804D2D6:
    *p_uint10 = u_val3 & u_val14 | u_val17;
    goto case_0804DA2E;
  case 0x804d2e8:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + 0x21C7);
    b_flag2 = (byte)((arg1 & 1) << 1);
    b_flag6 = *pbVar12;
    b_flag13 = 0xfd;
    break;
  case 0x804d308:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + 0x21C7);
    b_flag2 = (byte)((arg1 & 1) << 2);
    b_flag6 = *pbVar12;
    b_flag13 = 0xfb;
    break;
  case 0x804d328:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + 0x21C7);
    b_flag2 = (byte)((arg1 & 1) << 3);
    b_flag6 = *pbVar12;
    b_flag13 = 0xf7;
    break;
  case 0x804d348:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + 0x21C7);
    b_flag2 = (byte)((arg1 & 1) << 4);
    b_flag6 = *pbVar12;
    b_flag13 = 0xef;
    break;
  case 0x804d368:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + 0x21C7);
    b_flag2 = (byte)((arg1 & 1) << 5);
    b_flag6 = *pbVar12;
    b_flag13 = 0xdf;
    break;
  case 0x804d388:
    i_val11 = *(int *)(ctx + 0x350);
    i_val19 = 0x21C7;
    goto ScriptEngine_Routine_0804DA1A;
  case 0x804d398:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + 0x21C7);
    b_flag2 = (byte)(arg1 << 7);
    b_flag6 = *pbVar12;
    b_flag13 = 0x7f;
    break;
  case 0x804d3b0:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + 0x21C8);
    b_flag2 = *pbVar12 & 0xfe | b_flag6 & 1;
    goto ScriptEngine_Routine_0804DA2C;
  case 0x804d3d0:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + 0x21C8);
    b_flag2 = (byte)((arg1 & 1) << 1);
    b_flag6 = *pbVar12;
    b_flag13 = 0xfd;
    break;
  case 0x804d3f0:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + 0x21AB);
    b_flag2 = (byte)((arg1 & 3) << 4);
    b_flag6 = *pbVar12;
    b_flag13 = 0xcf;
    break;
  case 0x804d410:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + 0x21AB);
    b_flag2 = (byte)(arg1 << 6);
    b_flag6 = *pbVar12;
    b_flag13 = 0x3f;
    break;
  case 0x804d428:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + 0x21AC);
    b_flag2 = *pbVar12 & 0xfc | b_flag6 & 3;
    goto ScriptEngine_Routine_0804DA2C;
  case 0x804d448:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + 0x21AC);
    b_flag2 = (byte)((arg1 & 3) << 2);
    b_flag6 = *pbVar12;
    b_flag13 = 0xf3;
    break;
  case 0x804d468:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + 0x21AC);
    b_flag2 = (byte)((arg1 & 3) << 4);
    b_flag6 = *pbVar12;
    b_flag13 = 0xcf;
    break;
  case 0x804d488:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + 0x21AC);
    b_flag2 = (byte)(arg1 << 6);
    b_flag6 = *pbVar12;
    b_flag13 = 0x3f;
    break;
  case 0x804d4a0:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + 0x21AD);
    b_flag2 = *pbVar12 & 0xfc | b_flag6 & 3;
    goto ScriptEngine_Routine_0804DA2C;
  case 0x804d4c0:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + 0x21AD);
    b_flag2 = (byte)((arg1 & 3) << 2);
    b_flag6 = *pbVar12;
    b_flag13 = 0xf3;
    break;
  case 0x804d4e0:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + 0x21AD);
    b_flag2 = (byte)((arg1 & 3) << 4);
    b_flag6 = *pbVar12;
    b_flag13 = 0xcf;
    break;
  case 0x804d500:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + 0x21AD);
    b_flag2 = (byte)(arg1 << 6);
    b_flag6 = *pbVar12;
    b_flag13 = 0x3f;
    break;
  case 0x804d518:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + 0x21AE);
    b_flag2 = *pbVar12 & 0xfc | b_flag6 & 3;
    goto ScriptEngine_Routine_0804DA2C;
  case 0x804d538:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + 0x21AE);
    b_flag2 = (byte)((arg1 & 3) << 2);
    b_flag6 = *pbVar12;
    b_flag13 = 0xf3;
    break;
  case 0x804d558:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + 0x21AE);
    b_flag2 = (byte)((arg1 & 3) << 4);
    b_flag6 = *pbVar12;
    b_flag13 = 0xcf;
    break;
  case 0x804d578:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + 0x21AE);
    b_flag2 = (byte)(arg1 << 6);
    b_flag6 = *pbVar12;
    b_flag13 = 0x3f;
    break;
  case 0x804d590:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + 0x21AF);
    b_flag2 = *pbVar12 & 0xfc | b_flag6 & 3;
    goto ScriptEngine_Routine_0804DA2C;
  case 0x804d5b0:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + 0x21AF);
    b_flag2 = (byte)((arg1 & 3) << 2);
    b_flag6 = *pbVar12;
    b_flag13 = 0xf3;
    break;
  case 0x804d5d0:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + 0x21AF);
    b_flag2 = (byte)((arg1 & 3) << 4);
    b_flag6 = *pbVar12;
    b_flag13 = 0xcf;
    break;
  case 0x804d5f0:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + 0x21AF);
    b_flag2 = (byte)(arg1 << 6);
    b_flag6 = *pbVar12;
    b_flag13 = 0x3f;
    break;
  case 0x804d608:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + 0x21B0);
    b_flag2 = *pbVar12 & 0xfc | b_flag6 & 3;
    goto ScriptEngine_Routine_0804DA2C;
  case 0x804d628:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + 0x21B0);
    b_flag2 = (byte)((arg1 & 3) << 2);
    b_flag6 = *pbVar12;
    b_flag13 = 0xf3;
    break;
  case 0x804d648:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + 0x21B0);
    b_flag2 = (byte)((arg1 & 3) << 4);
    b_flag6 = *pbVar12;
    b_flag13 = 0xcf;
    break;
  case 0x804d668:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + 0x21B0);
    b_flag2 = (byte)(arg1 << 6);
    b_flag6 = *pbVar12;
    b_flag13 = 0x3f;
    break;
  case 0x804d680:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + 0x21B1);
    b_flag2 = *pbVar12 & 0xfc | b_flag6 & 3;
    goto ScriptEngine_Routine_0804DA2C;
  case 0x804d6a0:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + 0x21B1);
    b_flag2 = (byte)((arg1 & 3) << 2);
    b_flag6 = *pbVar12;
    b_flag13 = 0xf3;
    break;
  case 0x804d6c0:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + 0x21B1);
    b_flag2 = (byte)((arg1 & 3) << 4);
    b_flag6 = *pbVar12;
    b_flag13 = 0xcf;
    break;
  case 0x804d6e0:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + 0x21B1);
    b_flag2 = (byte)(arg1 << 6);
    b_flag6 = *pbVar12;
    b_flag13 = 0x3f;
    break;
  case 0x804d6f8:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + 0x21B2);
    b_flag2 = *pbVar12 & 0xfc | b_flag6 & 3;
    goto ScriptEngine_Routine_0804DA2C;
  case 0x804d718:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + 0x21B2);
    b_flag2 = (byte)((arg1 & 3) << 2);
    b_flag6 = *pbVar12;
    b_flag13 = 0xf3;
    break;
  case 0x804d738:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + 0x21B2);
    b_flag2 = (byte)((arg1 & 3) << 4);
    b_flag6 = *pbVar12;
    b_flag13 = 0xcf;
    break;
  case 0x804d758:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + 0x21B2);
    b_flag2 = (byte)(arg1 << 6);
    b_flag6 = *pbVar12;
    b_flag13 = 0x3f;
    break;
  case 0x804d770:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + 0x21B3);
    b_flag2 = *pbVar12 & 0xfc | b_flag6 & 3;
    goto ScriptEngine_Routine_0804DA2C;
  case 0x804d790:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + 0x21B3);
    b_flag2 = (byte)((arg1 & 3) << 2);
    b_flag6 = *pbVar12;
    b_flag13 = 0xf3;
    break;
  case 0x804d7b0:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + 0x21B3);
    b_flag2 = (byte)((arg1 & 3) << 4);
    b_flag6 = *pbVar12;
    b_flag13 = 0xcf;
    break;
  case 0x804d7d0:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + 0x21B3);
    b_flag2 = (byte)(arg1 << 6);
    b_flag6 = *pbVar12;
    b_flag13 = 0x3f;
    break;
  case 0x804d7e8:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + 0x21B4);
    b_flag2 = *pbVar12 & 0xfc | b_flag6 & 3;
    goto ScriptEngine_Routine_0804DA2C;
  case 0x804d808:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + 0x21B4);
    b_flag2 = (byte)((arg1 & 3) << 2);
    b_flag6 = *pbVar12;
    b_flag13 = 0xf3;
    break;
  case 0x804d828:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + 0x21B4);
    b_flag2 = (byte)((arg1 & 3) << 4);
    b_flag6 = *pbVar12;
    b_flag13 = 0xcf;
    break;
  case 0x804d848:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + 0x21C8);
    b_flag2 = (byte)((arg1 & 1) << 2);
    b_flag6 = *pbVar12;
    b_flag13 = 0xfb;
    break;
  case 0x804d868:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + 0x21C8);
    b_flag2 = (byte)((arg1 & 1) << 3);
    b_flag6 = *pbVar12;
    b_flag13 = 0xf7;
    break;
  case 0x804d888:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + 0x21C8);
    b_flag2 = (byte)(arg1 << 4);
    b_flag6 = *pbVar12;
    b_flag13 = 0xf;
    break;
  case 0x804d8a0:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + 0x21C9);
    b_flag2 = *pbVar12 & 0xfe | b_flag6 & 1;
    goto ScriptEngine_Routine_0804DA2C;
  case 0x804d8c0:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + 0x21C9);
    b_flag2 = (byte)((arg1 & 0xf) << 1);
    b_flag6 = *pbVar12;
    b_flag13 = 0xe1;
    break;
  case 0x804d8e0:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + 0x21C9);
    b_flag2 = (byte)((arg1 & 1) << 5);
    b_flag6 = *pbVar12;
    b_flag13 = 0xdf;
    break;
  case 0x804d900:
    i_val11 = *(int *)(ctx + 0x350);
    i_val19 = 0x21C9;
    goto ScriptEngine_Routine_0804DA1A;
  case 0x804d910:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + 0x21C9);
    b_flag2 = (byte)(arg1 << 7);
    b_flag6 = *pbVar12;
    b_flag13 = 0x7f;
    break;
  case 0x804d928:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + 0x21CA);
    b_flag2 = *pbVar12 & 0xfc | b_flag6 & 3;
    goto ScriptEngine_Routine_0804DA2C;
  case 0x804d948:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + 0x21CA);
    b_flag2 = (byte)((arg1 & 1) << 2);
    b_flag6 = *pbVar12;
    b_flag13 = 0xfb;
    break;
  case 0x804d968:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + 0x21CA);
    b_flag2 = (byte)((arg1 & 1) << 3);
    b_flag6 = *pbVar12;
    b_flag13 = 0xf7;
    break;
  case 0x804d988:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + 0x21CA);
    b_flag2 = (byte)((arg1 & 1) << 4);
    b_flag6 = *pbVar12;
    b_flag13 = 0xef;
    break;
  case 0x804d9a8:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + 0x21CA);
    b_flag2 = (byte)((arg1 & 1) << 5);
    b_flag6 = *pbVar12;
    b_flag13 = 0xdf;
    break;
  case 0x804d9c8:
    i_val11 = *(int *)(ctx + 0x350);
    i_val19 = 0x21CA;
    goto ScriptEngine_Routine_0804DA1A;
  case 0x804d9d8:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + 0x21CB);
    b_flag2 = (byte)(arg1 << 2);
    b_flag6 = *pbVar12;
    b_flag13 = 3;
    break;
  case 0x804d9f0:
    pbVar12 = (byte *)(*(int *)(ctx + 0x350) + 0x216E);
    b_flag2 = (byte)((arg1 & 1) << 5);
    b_flag6 = *pbVar12;
    b_flag13 = 0xdf;
    break;
  case 0x804da10:
    i_val11 = *(int *)(ctx + 0x350);
    i_val19 = 0x216E;
ScriptEngine_Routine_0804DA1A:
    pbVar12 = (byte *)(i_val11 + i_val19);
    b_flag2 = (byte)((arg1 & 1) << 6);
    b_flag6 = *pbVar12;
    b_flag13 = 0xbf;
    break;
  case 0x804da2e:
    goto case_0804DA2E;
  }
  b_flag2 = b_flag13 & b_flag6 | b_flag2;
ScriptEngine_Routine_0804DA2C:
  *pbVar12 = b_flag2;
case_0804DA2E:
  u_val5 = ScriptEngine_Routine_0804590C(ctx,opcode);
  if (0x18B < opcode - 0x46U) {
    return;
  }
  opcode_handler = *(code **)((opcode - 0x46U) * 4 + gInlineTable_0804DA5C);
  u_val5 = (*opcode_handler)(opcode_handler,gInlineTable_0804DA5C,u_val5);
  return u_val5;
}

// =============================================================================
// Function: ScriptEngine_Routine_0804E0F8 @ 0x0804E0F8
// =============================================================================
u32 ScriptEngine_Routine_0804E0F8(int ctx,int opcode)

{
  char c_char1;
  int i_val2;
  int item_id;
  undefined4 u_val4;
  int *p_int5;
  uint u_val6;
  undefined1 temp_buf_18 [4];
  
  p_int5 = (int *)(ctx + 0x350);
  i_val2 = *p_int5 + 0x1C34;
  c_char1 = Product_GetId();
  if (c_char1 == '\0') {
    u_val6 = 0;
    temp_buf_18[0] = Product_Construct(i_val2);
    item_id = Item_GetId(temp_buf_18);
    if (item_id == opcode) {
      u_val6 = Product_GetPrice(i_val2);
      u_val6 = (-(u_val6 ^ 99) | u_val6 ^ 99) >> 0x1f;
    }
    if (((u_val6 == 0) && (i_val2 = Farmer_Routine_0800F990(*p_int5 + 0x1C38,opcode), i_val2 == 0)) &&
       (i_val2 = ShippingBin_StatEnt_ShipOne(*p_int5 + 0x380,opcode), i_val2 == 0)) {
      u_val4 = 0;
      goto LAB_0804e172;
    }
  }
  u_val4 = 1;
LAB_0804e172:
  return u_val4;
}

// =============================================================================
// Function: ScriptEngine_Routine_0804E17C @ 0x0804E17C
// =============================================================================
u32 ScriptEngine_Routine_0804E17C(int ctx,undefined4 opcode)

{
  char c_char1;
  int i_val2;
  undefined4 u_val3;
  int *p_int4;
  
  p_int4 = (int *)(ctx + 0x350);
  c_char1 = HeldItem_IsEmpty(*p_int4 + 0x1C2C);
  if (((c_char1 == '\0') && (i_val2 = Farmer_Routine_0800F77C(*p_int4 + 0x1C38), i_val2 == 0)) &&
     ((i_val2 = Building_Routine_0800C048(*p_int4 + 500), i_val2 == 0 ||
      (i_val2 = ShippingBin_GetSlotQuantity(i_val2,opcode), i_val2 == 0)))) {
    u_val3 = 0;
  }
  else {
    u_val3 = 1;
  }
  return u_val3;
}

// =============================================================================
// Function: ScriptEngine_Routine_0804E1D4 @ 0x0804E1D4
// =============================================================================
u32 ScriptEngine_Routine_0804E1D4(int ctx,undefined4 opcode)

{
  char c_char1;
  int i_val2;
  undefined4 u_val3;
  int *p_int4;
  
  p_int4 = (int *)(ctx + 0x350);
  c_char1 = HeldItem_IsEmpty(*p_int4 + 0x1C2C);
  if (((c_char1 == '\0') && (i_val2 = Farmer_Routine_0800F77C(*p_int4 + 0x1C38), i_val2 == 0)) &&
     ((i_val2 = Building_Routine_0800C060(*p_int4 + 500), i_val2 == 0 ||
      (i_val2 = Fridge_GetItem(i_val2,opcode), i_val2 == 0)))) {
    u_val3 = 0;
  }
  else {
    u_val3 = 1;
  }
  return u_val3;
}

// =============================================================================
// Function: ScriptEngine_Routine_0804E22C @ 0x0804E22C
// =============================================================================
u32 ScriptEngine_Routine_0804E22C(int ctx,int opcode)

{
  char c_char1;
  int i_val2;
  undefined4 u_val3;
  int i_val4;
  undefined1 facing_buffer [4];
  
  i_val4 = *(int *)(ctx + 0x350) + 0x1C2C;
  c_char1 = HeldItem_IsEmpty(i_val4);
  if ((c_char1 == '\0') && (i_val2 = HeldItem_GetKind(i_val4), i_val2 == 1)) {
    facing_buffer[0] = HeldItem_GetArticle(i_val4);
    i_val4 = Item_GetQuality(facing_buffer);
    if (i_val4 != opcode) goto LAB_0804e272;
  }
  else {
LAB_0804e272:
    i_val4 = Farmer_Routine_0800F714(*(int *)(ctx + 0x350) + 0x1C38,opcode);
    if ((i_val4 == -1) &&
       ((i_val4 = Building_Routine_0800C060(*(int *)(ctx + 0x350) + 500), i_val4 == 0 ||
        (i_val4 = Shelf_GetItem(i_val4,opcode), i_val4 == -1)))) {
      u_val3 = 0;
      goto LAB_0804e2b6;
    }
  }
  u_val3 = 1;
LAB_0804e2b6:
  return u_val3;
}

// =============================================================================
// Function: ScriptEngine_Routine_0804E2C0 @ 0x0804E2C0
// =============================================================================
u32 ScriptEngine_Routine_0804E2C0(int ctx,int opcode)

{
  char c_char1;
  int i_val2;
  undefined4 u_val3;
  int i_val4;
  undefined1 facing_buffer [4];
  
  i_val4 = *(int *)(ctx + 0x350) + 0x1C2C;
  c_char1 = HeldItem_IsEmpty(i_val4);
  if ((c_char1 == '\0') && (i_val2 = HeldItem_GetKind(i_val4), i_val2 == 0)) {
    HeldItem_GetFood(facing_buffer,i_val4);
    i_val4 = Item_Routine_0800DCB4(facing_buffer);
    if (i_val4 != opcode) goto LAB_0804e304;
  }
  else {
LAB_0804e304:
    i_val4 = Farmer_Routine_0800F6B4(*(int *)(ctx + 0x350) + 0x1C38,opcode);
    if ((i_val4 == -1) &&
       ((i_val4 = Building_Routine_0800C048(*(int *)(ctx + 0x350) + 500), i_val4 == 0 ||
        (i_val4 = ShippingBin_ResetDailyShipments(i_val4,opcode), i_val4 == -1)))) {
      u_val3 = 0;
      goto LAB_0804e34a;
    }
  }
  u_val3 = 1;
LAB_0804e34a:
  return u_val3;
}

// =============================================================================
// Function: ScriptEngine_Routine_0804E354 @ 0x0804E354
// =============================================================================
u32 ScriptEngine_Routine_0804E354(int ctx,int opcode)

{
  char c_char1;
  undefined4 u_val2;
  int item_id;
  undefined1 facing_buffer [4];
  
  item_id = *(int *)(ctx + 0x350) + 0x1C34;
  c_char1 = Product_GetId(item_id);
  if (c_char1 == '\0') {
    facing_buffer[0] = Product_Construct(item_id);
    item_id = Item_GetId(facing_buffer);
    if (item_id != opcode) goto LAB_0804e390;
  }
  else {
LAB_0804e390:
    item_id = Farmer_Routine_0800F92C(*(int *)(ctx + 0x350) + 0x1C38,opcode);
    if ((item_id == -1) &&
       (item_id = ShippingBin_FindSlotByItemId(*(int *)(ctx + 0x350) + 0x380,opcode), item_id == -1)) {
      u_val2 = 0;
      goto LAB_0804e3ce;
    }
  }
  u_val2 = 1;
LAB_0804e3ce:
  return u_val2;
}

// =============================================================================
// Function: ScriptEngine_Routine_0804E3D8 @ 0x0804E3D8
// =============================================================================
undefined8
ScriptEngine_Routine_0804E3D8(int ctx,uint opcode,int *arg1,undefined4 arg2,undefined4 arg_5,
             undefined4 arg_6)

{
  uint u_val1;
  undefined4 u_val2;
  int i_val3;
  undefined4 saved_r4;
  int i_val4;
  
  i_val4 = 0;
  if (opcode < 5) {
    switch(*(uint *)(PTR_case_0804E3F4_0804e3f0 + opcode * 4) & 0xfffffffe) {
    case 0x804e3f4:
      u_val1 = Product_GetPrice(saved_r4);
      if ((((int)(-(u_val1 ^ 99) | u_val1 ^ 99) < 0) ||
          (i_val4 = Farmer_Routine_0800F990(*arg1 + 0x1C38,0), i_val4 != 0)) ||
         (i_val4 = ShippingBin_StatEnt_ShipOne(*arg1 + 0x380,0), i_val4 != 0)) {
        u_val2 = 1;
      }
      else {
        u_val2 = 0;
      }
      return CONCAT44(arg_6,u_val2);
    case 0x804e408:
      i_val4 = Farm_Routine_08009C3C(*(int *)(ctx + 0x350) + 0x14);
      break;
    case 0x804e41a:
      i_val3 = Building_Routine_0800CE74(*(int *)(ctx + 0x350) + 0x5f0);
      if ((int)arg1 < i_val3) {
        i_val4 = Food_GetStaminaGain(*(int *)(ctx + 0x350) + 0x5f0,arg1);
      }
      break;
    case 0x804e442:
      i_val3 = Building_Routine_0800CE74(*(int *)(ctx + 0x350) + 0x5f0);
      if ((int)arg1 < i_val3) {
        i_val4 = Food_GetFatigueGain(*(int *)(ctx + 0x350) + 0x5f0,arg1);
      }
      break;
    case 0x804e46a:
      i_val3 = Barn_GetCowCount(*(int *)(ctx + 0x350) + 0x410);
      if ((int)arg1 < i_val3) {
        i_val4 = Building_Routine_0800C894(*(int *)(ctx + 0x350) + 0x410,arg1);
      }
      break;
    case 0x804e492:
      i_val4 = *(int *)(ctx + 0x350) + 0x1C70;
    }
  }
  return i_val4;
}

// =============================================================================
// Function: ScriptEngine_Routine_0804E4AC @ 0x0804E4AC
// =============================================================================
void ScriptEngine_Routine_0804E4AC(uint ctx,int opcode,uint arg1,uint arg2,undefined4 arg_5)

{
  uint u_val1;
  uint u_val2;
  uint u_val3;
  uint u_val4;
  uint u_val5;
  uint u_val6;
  int i_val7;
  undefined1 stack_buf_a8 [32];
  undefined1 stack_buf_88 [32];
  undefined1 stack_buf_68 [32];
  undefined1 temp_buf_48 [32];
  uint stack_val_28;
  uint stack_val_24;
  
  u_val1 = M4A_Routine_080D0D28(stack_buf_a8,arg_5);
  if (u_val1 - 1 < 2) {
    u_val5 = arg1 >> 3;
    u_val4 = arg2 >> 3;
    u_val2 = ctx & 0xffff;
    u_val3 = ctx >> 0x10;
    stack_val_28 = u_val5;
    if ((u_val5 < u_val2) && (u_val4 < u_val3)) {
      if (((arg1 & 7) == 0) && ((arg2 & 7) == 0)) {
        stack_val_24 = (uint)(u_val5 + 1 < u_val2);
        u_val6 = u_val4 + 1;
        i_val7 = (u_val4 * u_val2 + u_val5) * 0x20 + opcode;
        CpuFastSet(stack_buf_a8,i_val7,8);
        if (u_val6 < u_val3) {
          CpuFastSet(stack_buf_68,(u_val6 * u_val2 + u_val5) * 0x20 + opcode,8);
        }
        if (((stack_val_24 != 0) && (1 < u_val1)) &&
           (CpuFastSet(stack_buf_88,i_val7 + 0x20,8), u_val6 < u_val3)) {
          CpuFastSet(temp_buf_48,(stack_val_28 + u_val6 * u_val2) * 0x20 + opcode + 0x20,8);
        }
      }
      else {
        ScriptEngine_Routine_0804E9C8(ctx,opcode,arg1,arg2,stack_buf_a8);
      }
    }
  }
  else {
    u_val1 = 0;
  }
  return u_val1;
}

// =============================================================================
// Function: ScriptEngine_Routine_0804E7A0 @ 0x0804E7A0
// =============================================================================
u32 ScriptEngine_Routine_0804E7A0(uint ctx,undefined4 opcode,uint arg1)

{
  uint stack_val_8;
  undefined4 stack_val_4;
  
  stack_val_8 = arg1 & 0xf | (arg1 & 0xf) << 4;
  stack_val_8 = stack_val_8 | stack_val_8 << 8;
  stack_val_8 = stack_val_8 | stack_val_8 << 0x10;
  CpuFastSet(&stack_val_8,opcode,
                  (ctx >> 0x10) * 0x20 * (ctx & 0xffff) >> 2 & 0x001FFFFF | 0x1000000);
  return stack_val_4;
}

// =============================================================================
// Function: ScriptEngine_Routine_0804E7DC @ 0x0804E7DC
// =============================================================================
undefined4
ScriptEngine_Routine_0804E7DC(uint ctx,int opcode,uint arg1,uint arg2,uint arg_5,uint arg_6,
             uint arg_7)

{
  uint u_val1;
  uint u_val2;
  uint u_val3;
  uint u_val4;
  uint stack_val_20;
  
  u_val1 = arg_7 & 0xf | (arg_7 & 0xf) << 4;
  u_val1 = u_val1 | u_val1 << 8;
  u_val1 = u_val1 << 0x10 | u_val1;
  u_val3 = ctx & 0xffff;
  ctx = ctx >> 0x10;
  u_val2 = u_val3 * 8;
  u_val4 = ctx * 8;
  if ((((arg1 == 0) && (arg2 == 0)) && (u_val2 <= arg_5)) && (u_val4 <= arg_6)) {
    stack_val_20 = u_val1;
    CpuFastSet(&stack_val_20,opcode,ctx * 0x20 * u_val3 >> 2 & 0x001FFFFF | 0x1000000);
  }
  else if ((arg1 < u_val3) && (arg2 < ctx)) {
    if (u_val2 <= arg1 + arg_5) {
      arg_5 = u_val2 - arg1;
    }
    if (u_val4 <= arg2 + arg_6) {
      arg_6 = u_val4 - arg2;
    }
    if ((((arg1 & 7) == 0) && ((arg2 & 7) == 0)) &&
       (((arg_5 & 7) == 0 && ((arg_6 & 7) == 0)))) {
      arg_6 = arg_6 >> 3;
      opcode = opcode + (u_val3 * (arg2 >> 3) + (arg1 >> 3)) * 0x20;
      u_val2 = 0x3FFFFFF8 & arg_5 & 0x001FFFFF;
      do {
        stack_val_20 = u_val1;
        CpuFastSet(&stack_val_20,opcode,u_val2 | 0x1000000);
        opcode = opcode + u_val3 * 0x20;
        arg_6 = arg_6 - 1;
      } while (arg_6 != 0);
    }
  }
  return;
}

// =============================================================================
// Function: ScriptEngine_Routine_0804E8F0 @ 0x0804E8F0
// =============================================================================
undefined4
ScriptEngine_Routine_0804E8F0(uint ctx,undefined4 opcode,uint arg1,undefined4 arg2,byte *arg_5)

{
  byte b_flag1;
  int i_val2;
  uint u_val3;
  
  u_val3 = 0;
  b_flag1 = *arg_5;
  while ((b_flag1 != 0 && (arg1 < (ctx & 0xffff) << 3))) {
    u_val3 = u_val3 | b_flag1;
    i_val2 = ScriptEngine_Routine_0804E4AC(ctx,opcode,arg1,arg2,u_val3);
    if (i_val2 == 1) {
      u_val3 = 0;
      arg1 = arg1 + 8;
    }
    else if (i_val2 != 0) {
      if (i_val2 != 2) {
        return;
      }
      u_val3 = 0;
      arg1 = arg1 + 0x10;
    }
    arg_5 = arg_5 + 1;
    b_flag1 = *arg_5;
    u_val3 = u_val3 << 8;
  }
  return;
}

// =============================================================================
// Function: ScriptEngine_Routine_0804E958 @ 0x0804E958
// =============================================================================
undefined4
ScriptEngine_Routine_0804E958(uint ctx,undefined4 opcode,uint arg1,undefined4 arg2,byte *arg_5,
             undefined4 arg_6,undefined4 arg_7)

{
  byte b_flag1;
  int i_val2;
  uint u_val3;
  
  u_val3 = 0;
  b_flag1 = *arg_5;
  while ((b_flag1 != 0 && (arg1 < (ctx & 0xffff) << 3))) {
    u_val3 = u_val3 | b_flag1;
    i_val2 = ScriptEngine_Routine_0804E5AC(ctx,opcode,arg1,arg2,u_val3,arg_6,arg_7);
    if (i_val2 == 1) {
      u_val3 = 0;
      arg1 = arg1 + 8;
    }
    else if (i_val2 != 0) {
      if (i_val2 != 2) {
        return;
      }
      u_val3 = 0;
      arg1 = arg1 + 0x10;
    }
    arg_5 = arg_5 + 1;
    b_flag1 = *arg_5;
    u_val3 = u_val3 << 8;
  }
  return;
}

// =============================================================================
// Function: ScriptEngine_Routine_0804E9D0 @ 0x0804E9D0
// =============================================================================
void ScriptEngine_Routine_0804E9D0(uint ctx,undefined4 opcode,undefined4 arg1)

{
  
  CpuFastSet(arg1,opcode,
                  ((ctx >> 0x10) * (ctx & 0xffff) & 0x7ffffff) << 3 & 0x001FFFFF);
  return;
}

// =============================================================================
// Function: ScriptEngine_Routine_0804E9F4 @ 0x0804E9F4
// =============================================================================
undefined4
ScriptEngine_Routine_0804E9F4(ushort *ctx,ushort opcode,uint arg1,uint arg2,short arg_5,int arg_6)

{
  uint loop_i;
  uint loop_i;
  ushort *p_uint3;
  ushort u_val4;
  
  loop_i = 0;
  if (arg2 != 0) {
    do {
      loop_i = 0;
      loop_i = loop_i + 1;
      if (arg1 != 0) {
        p_uint3 = ctx;
        u_val4 = opcode;
        do {
          opcode = u_val4 + 1;
          *p_uint3 = u_val4 | arg_5 << 0xc;
          p_uint3 = p_uint3 + 1;
          loop_i = loop_i + 1;
          u_val4 = opcode;
        } while (loop_i < arg1);
      }
      ctx = ctx + arg_6;
    } while (loop_i < arg2);
  }
  return;
}

// =============================================================================
// Function: ScriptEngine_Routine_0804EA58 @ 0x0804EA58
// =============================================================================
void ScriptEngine_Routine_0804EA58(undefined4 *ctx,undefined4 opcode,undefined2 arg1,undefined4 arg2,
                  undefined4 arg_5,undefined2 arg_6,undefined4 arg_7)

{
  
  *ctx = 0;
  ctx[1] = 0;
  ctx[2] = gRomData_080E7868;
  ctx[3] = opcode;
  *(undefined2 *)((int)ctx + 0x12) = arg1;
  ctx[5] = arg2;
  ctx[6] = arg_5;
  *(undefined2 *)(ctx + 4) = arg_6;
  ctx[7] = arg_7;
  return;
}

// =============================================================================
// Function: ScriptEngine_Routine_0804EA80 @ 0x0804EA80
// =============================================================================
void ScriptEngine_Routine_0804EA80(int ctx)

{
  
  *(undefined4 *)(ctx + 8) = gRomData_080E7868;
  Farm_Routine_080098AC();
  return;
}

// =============================================================================
// Function: ScriptEngine_Routine_0804EA94 @ 0x0804EA94
// =============================================================================
void ScriptEngine_Routine_0804EA94(uint *ctx,uint opcode,uint arg1,uint arg2,uint arg_5,uint arg_6,
                  int arg_7,uint arg_8)

{
  uint u_val1;
  uint u_val2;
  
  u_val1 = 0xFFFFF3FF & (0xFFFF0FFF & arg2 & 0x3ff | (arg_5 & 0xf) << 0xc);
  u_val2 = 0xFFFF3FFF &
          (0xFE00FFFF & (0xFFFFFF00 & 0x1000 | arg1 & 0xff) |
          (opcode & 0x1FF) << 0x10);
  *ctx = 0x3FFFFFFF & (u_val2 | (arg_8 & 3) << 0xe) |
             ((u_val2 >> 0x1e) + arg_7) * 0x40000000;
  ctx[1] = u_val1 | (arg_6 & 3) << 10;
  return;
}

// =============================================================================
// Function: ScriptEngine_Routine_0804EB64 @ 0x0804EB64
// =============================================================================
void ScriptEngine_Routine_0804EB64(int ctx,undefined1 *opcode,uint arg1)

{
  undefined1 *p_uint1;
  undefined1 *p_uint2;
  int i_val3;
  char c_char4;
  byte *pbVar5;
  byte *pbVar6;
  undefined1 *p_uint7;
  uint loop_i;
  bool b_flag9;
  byte stack_bytes_3d [11];
  undefined1 stack_val_32;
  byte stack_bytes_30 [12];
  byte *pbStack_24;
  
  pbVar6 = stack_bytes_3d + 1;
  pbVar5 = stack_bytes_3d + 1;
  if (arg1 == 0) {
    if (ctx < 0) {
      stack_bytes_3d[1] = 0x2d;
      pbVar6 = stack_bytes_3d + 2;
      ctx = -ctx;
    }
    VTable_Routine_080E0EFC(ctx,pbVar6);
    stack_val_32 = 0;
    p_uint1 = gRomData_080F9F2C;
    p_uint2 = gRomData_080F9F28;
    i_val3 = gRomData_080F9E78;
    goto LAB_0804ec44;
  }
  b_flag9 = ctx < 0;
  if (b_flag9) {
    ctx = -ctx;
  }
  loop_i = 0;
  pbStack_24 = stack_bytes_3d + arg1 + 1;
  if (arg1 != 0) {
    do {
      c_char4 = math_umodsi3(ctx,10);
      stack_bytes_30[loop_i] = c_char4 + 0x30;
      ctx = math_udivsi3(ctx,10);
      if (ctx == 0) goto joined_r0x0804ebba;
      loop_i = loop_i + 1;
    } while (loop_i < arg1);
  }
  goto LAB_0804ebd2;
joined_r0x0804ebba:
  while (loop_i = loop_i + 1, loop_i < arg1) {
    stack_bytes_30[loop_i] = 0x20;
  }
LAB_0804ebd2:
  if (b_flag9) {
    stack_bytes_30[loop_i] = 0x2d;
  }
  loop_i = 0;
  if (arg1 != 0) {
    pbVar5 = stack_bytes_3d + arg1;
    do {
      *pbVar5 = stack_bytes_30[loop_i];
      pbVar5 = pbVar5 + -1;
      loop_i = loop_i + 1;
    } while (loop_i < arg1);
  }
  *pbStack_24 = 0;
  pbVar5 = stack_bytes_3d + 1;
  p_uint1 = gRomData_080F9F2C;
  p_uint2 = gRomData_080F9F28;
  i_val3 = gRomData_080F9E78;
LAB_0804ec44:
  for (; loop_i = (uint)*pbVar5, loop_i != 0; pbVar5 = pbVar5 + 1) {
    if ((loop_i - 0x30 & 0xff) < 10) {
      p_uint7 = (undefined1 *)(loop_i * 3 + i_val3);
    }
    else {
      p_uint7 = p_uint2;
      if ((loop_i != 0x20) && (p_uint7 = p_uint1, loop_i != 0x2d)) break;
    }
    *opcode = *p_uint7;
    opcode[1] = p_uint7[1];
    opcode = opcode + 2;
  }
  *opcode = 0;
  return;
}

// =============================================================================
// Function: ScriptEngine_Routine_0804EC84 @ 0x0804EC84
// =============================================================================
void ScriptEngine_Routine_0804EC84(int ctx,char *opcode,uint arg1)

{
  uint u_val1;
  char c_char2;
  int i_val3;
  uint u_val4;
  uint u_val5;
  char stack_str_29 [13];
  
  i_val3 = ctx;
  if (ctx < 0) {
    i_val3 = -ctx;
  }
  u_val5 = 0;
  u_val1 = 1;
  do {
    u_val4 = u_val1;
    c_char2 = math_umodsi3(i_val3,10);
    stack_str_29[u_val5 + 1] = c_char2 + '0';
    i_val3 = math_udivsi3(i_val3,10);
    if (i_val3 < 1) break;
    u_val5 = u_val4;
    u_val1 = u_val4 + 1;
  } while (u_val4 + 1 < 0xb);
  u_val5 = u_val4;
  if ((arg1 != 0) && (u_val5 = arg1, u_val4 <= arg1)) {
    for (; u_val5 = u_val4, u_val4 < arg1; u_val4 = u_val4 + 1) {
      stack_str_29[u_val4 + 1] = ' ';
    }
  }
  if (ctx < 0) {
    stack_str_29[u_val5 + 1] = '-';
    u_val5 = u_val5 + 1;
  }
  while (u_val5 - 1 != 0xffffffff) {
    *opcode = stack_str_29[u_val5];
    opcode = opcode + 1;
    u_val5 = u_val5 - 1;
  }
  *opcode = '\0';
  return;
}

// =============================================================================
// Function: ScriptEngine_Routine_0804ED28 @ 0x0804ED28
// =============================================================================
void ScriptEngine_Routine_0804ED28(int ctx,ushort *opcode,short arg1,short arg2,int arg_5)

{
  ushort u_val1;
  int div_result;
  ushort u_val3;
  
  u_val3 = arg2 * 0x1000;
  do {
    div_result = math_divsi3(ctx,10);
    u_val1 = arg1 + ((short)ctx + (short)div_result * -10) * 4;
    *opcode = u_val1 + 1 | u_val3;
    opcode[-1] = u_val3 | u_val1;
    opcode[arg_5] = u_val1 + 3 | u_val3;
    (opcode + arg_5)[-1] = u_val1 + 2 | u_val3;
    opcode = opcode + -2;
    ctx = div_result;
  } while (div_result != 0);
  return;
}

// =============================================================================
// Function: ScriptEngine_Routine_0804ED7C @ 0x0804ED7C
// =============================================================================
void ScriptEngine_Routine_0804ED7C(undefined4 *ctx,undefined4 opcode,undefined4 arg1,undefined2 arg2,
                  undefined2 arg_5,undefined4 arg_6)

{
  
  *ctx = 0;
  ctx[1] = 0;
  ctx[2] = gRomData_080E7858;
  ctx[3] = opcode;
  ctx[4] = arg1;
  *(undefined2 *)(ctx + 5) = arg2;
  *(undefined2 *)((int)ctx + 0x16) = arg_5;
  ctx[6] = arg_6;
  return;
}

// =============================================================================
// Function: ScriptEngine_Routine_0804EDA0 @ 0x0804EDA0
// =============================================================================
void ScriptEngine_Routine_0804EDA0(int ctx)

{
  
  *(undefined4 *)(ctx + 8) = gRomData_080E7858;
  Farm_Routine_080098AC();
  return;
}

// =============================================================================
// Function: ScriptEngine_Routine_0804EDB4 @ 0x0804EDB4
// =============================================================================
void ScriptEngine_Routine_0804EDB4(int ctx,ushort *opcode,short arg1,short arg2,int arg_5)

{
  ushort u_val1;
  int div_result;
  
  do {
    div_result = math_divsi3(ctx,10);
    u_val1 = arg1 + ((short)ctx + (short)div_result * -10) * 2;
    *opcode = arg2 * 0x1000 | u_val1;
    opcode[arg_5] = u_val1 + 1 | arg2 * 0x1000;
    opcode = opcode + -1;
    ctx = div_result;
  } while (div_result != 0);
  return;
}

// =============================================================================
// Function: ScriptEngine_Routine_0804EDF8 @ 0x0804EDF8
// =============================================================================
void ScriptEngine_Routine_0804EDF8(undefined4 *ctx,undefined4 opcode,undefined4 arg1,undefined2 arg2,
                  undefined2 arg_5,undefined4 arg_6)

{
  
  *ctx = 0;
  ctx[1] = 0;
  ctx[2] = gRomData_080E7848;
  ctx[3] = opcode;
  ctx[4] = arg1;
  *(undefined2 *)(ctx + 5) = arg2;
  *(undefined2 *)((int)ctx + 0x16) = arg_5;
  ctx[6] = arg_6;
  return;
}

// =============================================================================
// Function: ScriptEngine_Routine_0804EE1C @ 0x0804EE1C
// =============================================================================
void ScriptEngine_Routine_0804EE1C(int ctx)

{
  
  *(undefined4 *)(ctx + 8) = gRomData_080E7848;
  Farm_Routine_080098AC();
  return;
}

// =============================================================================
// Function: ScriptEngine_Routine_0804EE30 @ 0x0804EE30
// =============================================================================
void ScriptEngine_Routine_0804EE30(int ctx,ushort *opcode,short arg1,short arg2)

{
  int div_result;
  
  do {
    div_result = math_divsi3(ctx,10);
    *opcode = arg1 + (short)ctx + (short)div_result * -10 | arg2 << 0xc;
    opcode = opcode + -1;
    ctx = div_result;
  } while (div_result != 0);
  return;
}

// =============================================================================
// Function: ScriptEngine_Routine_0804EE64 @ 0x0804EE64
// =============================================================================
void ScriptEngine_Routine_0804EE64(undefined4 *ctx,undefined4 opcode,undefined4 arg1,undefined2 arg2,
                  undefined2 arg_5,undefined4 arg_6)

{
  
  *ctx = 0;
  ctx[1] = 0;
  ctx[2] = gRomData_080E7838;
  ctx[3] = opcode;
  ctx[4] = arg1;
  *(undefined2 *)(ctx + 5) = arg2;
  *(undefined2 *)((int)ctx + 0x16) = arg_5;
  ctx[6] = arg_6;
  return;
}

// =============================================================================
// Function: ScriptEngine_Routine_0804EE88 @ 0x0804EE88
// =============================================================================
void ScriptEngine_Routine_0804EE88(int ctx)

{
  
  *(undefined4 *)(ctx + 8) = gRomData_080E7838;
  Farm_Routine_080098AC();
  return;
}

// =============================================================================
// Function: ScriptEngine_Routine_0804EE9C @ 0x0804EE9C
// =============================================================================
longlong ScriptEngine_Routine_0804EE9C(int ctx)

{
  
  ScriptEngine_Routine_0804EE30(*(undefined4 *)(ctx + 0xc),*(undefined4 *)(ctx + 0x10),
                *(undefined2 *)(ctx + 0x14),*(undefined2 *)(ctx + 0x16),
                *(undefined4 *)(ctx + 0x18));
  return 0;
}

// =============================================================================
// Function: ScriptEngine_Routine_0804EEBC @ 0x0804EEBC
// =============================================================================
longlong ScriptEngine_Routine_0804EEBC(int ctx)

{
  
  ScriptEngine_Routine_0804EDB4(*(undefined4 *)(ctx + 0xc),*(undefined4 *)(ctx + 0x10),
                *(undefined2 *)(ctx + 0x14),*(undefined2 *)(ctx + 0x16),
                *(undefined4 *)(ctx + 0x18));
  return 0;
}

// =============================================================================
// Function: ScriptEngine_Routine_0804EEDC @ 0x0804EEDC
// =============================================================================
longlong ScriptEngine_Routine_0804EEDC(int ctx)

{
  
  ScriptEngine_Routine_0804ED28(*(undefined4 *)(ctx + 0xc),*(undefined4 *)(ctx + 0x10),
                *(undefined2 *)(ctx + 0x14),*(undefined2 *)(ctx + 0x16),
                *(undefined4 *)(ctx + 0x18));
  return 0;
}

// =============================================================================
// Function: ScriptEngine_Routine_0804EEFC @ 0x0804EEFC
// =============================================================================
longlong ScriptEngine_Routine_0804EEFC(int ctx)

{
  
  ScriptEngine_Routine_0804E9F4(*(undefined4 *)(ctx + 0xc),*(undefined2 *)(ctx + 0x12),
                *(undefined4 *)(ctx + 0x14),*(undefined4 *)(ctx + 0x18),
                *(undefined2 *)(ctx + 0x10),*(undefined4 *)(ctx + 0x1c));
  return 0;
}

// =============================================================================
// Function: ScriptEngine_Routine_0804EF20 @ 0x0804EF20
// =============================================================================
u32 ScriptEngine_Routine_0804EF20(int ctx)

{
  byte b_flag1;
  undefined4 u_val2;
  uint u_val3;
  uint u_val4;
  uint *p_uint5;
  uint *p_uint6;
  uint *p_uint7;
  uint *p_uint8;
  
  p_uint6 = *(uint **)(ctx + 0xc);
  p_uint5 = *(uint **)(ctx + 0x10);
  b_flag1 = *(byte *)(ctx + 0x15);
  if ((b_flag1 & 0x80) == 0) {
    CpuFastSet(p_uint6,p_uint5,(*(ushort *)(ctx + 0x14) & 0x3fff) << 3);
    u_val2 = 0;
  }
  else {
    p_uint7 = p_uint5 + (*(ushort *)(ctx + 0x14) & 0x3fff) * 8;
    u_val3 = (b_flag1 & 0x7f) >> 6 ^ 1;
    *(byte *)(ctx + 0x15) = b_flag1 & 0xbf | (byte)(u_val3 << 6);
    u_val4 = 0x0F0F0F0F << (u_val3 << 2);
    u_val3 = ~u_val4;
    do {
      *p_uint5 = *p_uint6 & u_val4;
      p_uint5[1] = p_uint6[1] & u_val3;
      p_uint5[2] = p_uint6[2] & u_val4;
      p_uint5[3] = p_uint6[3] & u_val3;
      p_uint5[4] = p_uint6[4] & u_val4;
      p_uint5[5] = p_uint6[5] & u_val3;
      p_uint8 = p_uint6 + 7;
      p_uint5[6] = p_uint6[6] & u_val4;
      p_uint6 = p_uint6 + 8;
      p_uint5[7] = *p_uint8 & u_val3;
      p_uint5 = p_uint5 + 8;
    } while (p_uint5 != p_uint7);
    u_val2 = 1;
  }
  return u_val2;
}

// =============================================================================
// Function: ScriptEngine_Routine_0804EFAC @ 0x0804EFAC
// =============================================================================
u32 ScriptEngine_Routine_0804EFAC(int ctx,int opcode)

{
  ushort u_val1;
  uint u_val2;
  undefined4 u_val3;
  int *p_int4;
  
  u_val1 = *(ushort *)(ctx + 0x14);
  u_val2 = (uint)*(ushort *)(ctx + 0x16) + (uint)*(byte *)(ctx + 0x18);
  if (2 < u_val2) {
    u_val2 = u_val2 - 3;
  }
  p_int4 = (int *)(*(int *)(u_val2 * 4 + ctx + 8) + (uint)(u_val1 >> 2) * 0x10);
  u_val2 = u_val1 & 3;
  if (u_val2 < 4) {
    u_val2 = ScriptEngine_Routine_0804E4AC(0x20004,*p_int4 + 4,u_val2 << 3,0,opcode);
    if (u_val2 - 1 < 2) {
      *(byte *)(p_int4 + 3) =
           (byte)((byte)((uint)-p_int4[2] >> 0x18) | (byte)((uint)p_int4[2] >> 0x18)) >> 7;
    }
  }
  else {
    u_val2 = 0;
  }
  if ((u_val2 == 0) || (2 < u_val2)) {
    u_val3 = 0;
  }
  else {
    u_val2 = u_val2 + u_val1;
    if (0x1b < u_val2) {
      u_val2 = math_modsi3(u_val2,0x1c);
    }
    *(short *)(ctx + 0x14) = (short)u_val2;
    if ((opcode != 0x20) && (opcode != 0x8140)) {
      *(undefined1 *)(ctx + 0x1b) = 1;
    }
    u_val3 = 1;
    *(undefined1 *)(ctx + 0x1a) = 1;
  }
  return u_val3;
}

// =============================================================================
// Function: ScriptEngine_Routine_0804F060 @ 0x0804F060
// =============================================================================
void ScriptEngine_Routine_0804F060(int ctx)

{
  byte b_flag1;
  uint u_val2;
  int *p_int3;
  int i_val4;
  
  if (*(ushort *)(ctx + 0x16) < 2) {
    *(ushort *)(ctx + 0x16) = *(ushort *)(ctx + 0x16) + 1;
  }
  else {
    b_flag1 = *(char *)(ctx + 0x18) + 1;
    *(byte *)(ctx + 0x18) = b_flag1;
    if (2 < b_flag1) {
      *(undefined1 *)(ctx + 0x18) = 0;
    }
    u_val2 = *(byte *)(ctx + 0x18) + 2;
    if (2 < u_val2) {
      u_val2 = *(byte *)(ctx + 0x18) - 1;
    }
    p_int3 = *(int **)(u_val2 * 4 + ctx + 8);
    i_val4 = 6;
    do {
      ScriptEngine_Routine_0804E7A0(0x20004,*p_int3 + 4,0);
      *(byte *)(p_int3 + 3) =
           (byte)((byte)((uint)-p_int3[2] >> 0x18) | (byte)((uint)p_int3[2] >> 0x18)) >> 7;
      p_int3 = p_int3 + 4;
      i_val4 = i_val4 + -1;
    } while (-1 < i_val4);
    *(undefined1 *)(ctx + 0x19) = 1;
    *(undefined1 *)(ctx + 0x1a) = 1;
  }
  return;
}

// =============================================================================
// Function: ScriptEngine_Routine_0804F0E0 @ 0x0804F0E0
// =============================================================================
void ScriptEngine_Routine_0804F0E0(int ctx)

{
  int i_val1;
  int loop_i;
  int *p_int3;
  int i_val4;
  
  loop_i = 0;
  do {
    i_val4 = 0;
    i_val1 = loop_i * 4;
    loop_i = loop_i + 1;
    do {
      p_int3 = (int *)(*(int *)(i_val1 + ctx + 8) + i_val4 * 0x10);
      ScriptEngine_Routine_0804E7A0(0x20004,*p_int3 + 4,0);
      *(byte *)(p_int3 + 3) =
           (byte)((byte)((uint)-p_int3[2] >> 0x18) | (byte)((uint)p_int3[2] >> 0x18)) >> 7;
      i_val4 = i_val4 + 1;
    } while (i_val4 < 7);
  } while (loop_i < 3);
  *(undefined2 *)(ctx + 0x16) = 0;
  *(undefined2 *)(ctx + 0x14) = 0;
  *(undefined1 *)(ctx + 0x19) = 1;
  *(undefined1 *)(ctx + 0x1a) = 1;
  *(undefined1 *)(ctx + 0x1b) = 0;
  return;
}

// =============================================================================
// Function: ScriptEngine_Routine_0804F160 @ 0x0804F160
// =============================================================================
u32 ScriptEngine_Routine_0804F160(int ctx)

{
  
  return (uint)(*(char *)(ctx + 4) != '\0');
}

// =============================================================================
// Function: ScriptEngine_Routine_0804F178 @ 0x0804F178
// =============================================================================
u32 ScriptEngine_Routine_0804F178(int ctx)

{
  undefined4 u_val1;
  
  u_val1 = 0;
  if ((*(char *)(ctx + 8) != '\0') && (*(char *)(ctx + 4) != '\0')) {
    u_val1 = 1;
  }
  return u_val1;
}

// =============================================================================
// Function: ScriptEngine_Routine_0804F19C @ 0x0804F19C
// =============================================================================
longlong ScriptEngine_Routine_0804F19C(int ctx)

{
  uint stack_val_60;
  undefined1 temp_buf_5c [16];
  undefined4 stack_val_4c;
  undefined1 temp_buf_3c [48];
  
  stack_val_60 = ((*(ushort *)(ctx + 0xc) & 0x7fff) >> 5) + 3 & 0x3FF |
              ((*(uint *)(ctx + 0xc) & 0x7ffff) >> 0xf) << 0xc;
  stack_val_60 = stack_val_60 | stack_val_60 << 0x10;
  CpuFastSet(&stack_val_60,(*(byte *)(ctx + 0xc) & 0x1f) * 0x800 + 0x6000000,0x010000A0);
  Animal_Routine_08051320((*(byte *)(ctx + 0xc) & 0x1f) * 0x800 + 0x6000000,0x10,0,0xe,3,
                (*(ushort *)(ctx + 0xc) & 0x7fff) >> 5,
                (*(uint *)(ctx + 0xc) & 0x7ffff) >> 0xf);
  Animal_Routine_08051320((*(byte *)(ctx + 0xc) & 0x1f) * 0x800 + 0x6000000,0,3,0x1e,7,
                (*(ushort *)(ctx + 0xc) & 0x7fff) >> 5,
                (*(uint *)(ctx + 0xc) & 0x7ffff) >> 0xf);
  CpuFastSet(*gRomData_080F9F78,((*(uint *)(ctx + 0xc) & 0x7ffff) >> 0xf) * 0x20 + 0x5000000,8)
  ;
  Animal_Routine_0805E6CC(temp_buf_3c,gRomGfx_08728208);
  Animal_Routine_0805E790(temp_buf_5c,temp_buf_3c,0);
  CpuFastSet(stack_val_4c,((*(byte *)(ctx + 0xe) & 0x7f) >> 3) * 0x20 + 0x05000200,8);
  return 0;
}

// =============================================================================
// Function: ScriptEngine_Routine_0804F288 @ 0x0804F288
// =============================================================================
undefined8
ScriptEngine_Routine_0804F288(uint *ctx,byte opcode,uint arg1,byte arg2,uint arg_5,undefined4 arg_6,
             undefined4 arg_7)

{
  byte b_flag1;
  undefined4 *p_uint2;
  undefined1 u_val3;
  byte b_flag4;
  int i_val5;
  undefined4 *p_uint6;
  undefined4 u_val7;
  int i_val8;
  uint u_val9;
  uint *p_uint10;
  uint *p_uint11;
  uint u_val12;
  int *p_int13;
  int *p_int14;
  int loop_i;
  undefined4 *p_uint16;
  byte *pbVar17;
  int stack_val_40;
  undefined4 stack_val_3c;
  undefined4 stack_val_38;
  int stack_val_34;
  uint *puStack_30;
  uint *puStack_2c;
  uint *puStack_28;
  int stack_val_24;
  
  *(byte *)ctx = (byte)*ctx & 0x80 | opcode & 3 | (byte)((arg1 & 0x1f) << 2);
  *(ushort *)ctx = (ushort)0xFFFFFE7F & (ushort)*ctx | (ushort)((arg1 >> 3 & 3) << 7);
  *ctx = *ctx & 0xFFF801FF | ((arg1 & 7) * 0x40 + 0x14) * 0x200;
  *(byte *)((int)ctx + 2) = *(byte *)((int)ctx + 2) & 0x87 | (arg2 & 0xf) << 3;
  ctx[1] = arg_5;
  ctx[2] = 0;
  *(byte *)(ctx + 3) = 0;
  *(byte *)((int)ctx + 0xd) = 1;
  HW_Routine_08007770(ctx + 4,arg_7);
  HW_Routine_080083D0(ctx + 6,arg_6,2);
  ctx[8] = 0;
  ctx[9] = 0;
  ctx[10] = gRomData_080E5BB4;
  ctx[0xb] = (uint)(ctx + 0xc);
  ctx[0xc] = 0;
  ctx[0xd] = 0;
  ctx[0xe] = gRomData_080E5BD8;
  ctx[0xc] = (uint)(ctx + 0xb);
  ctx[0xd] = (uint)(ctx + 0xc);
  ctx[0xf] = 0;
  ctx[0x30] = 0;
  ctx[0x31] = 0;
  ctx[0x32] = gRomData_080E7898;
  ctx[0x33] = (uint)(ctx + 0xf);
  p_uint11 = ctx + 0x34;
  *p_uint11 = gRomData_080E78C0;
  ctx[0x35] = (uint)(ctx + 4);
  p_uint10 = ctx + 0x36;
  i_val5 = 2;
  do {
    *p_uint10 = 0;
    p_uint10 = p_uint10 + 1;
    i_val5 = i_val5 + -1;
  } while (i_val5 != -1);
  *(ushort *)(ctx + 0x39) = 0;
  *(ushort *)((int)ctx + 0xe6) = 0;
  *(byte *)(ctx + 0x3a) = 0;
  *(byte *)((int)ctx + 0xe9) = 0;
  *(byte *)((int)ctx + 0xea) = 0;
  *(byte *)((int)ctx + 0xeb) = 0;
  puStack_28 = ctx + 4;
  puStack_30 = ctx + 0x34;
  puStack_2c = ctx + 0x3b;
  i_val5 = 0;
  do {
    p_uint6 = (undefined4 *)CppRuntime_OperatorNewArray(0x70);
    loop_i = 6;
    stack_val_34 = i_val5 << 2;
    stack_val_24 = i_val5 + 1;
    p_uint16 = p_uint6;
    do {
      u_val7 = CppRuntime_OperatorNewArray(0x104);
      *p_uint16 = u_val7;
      GBA_ObjAttr_Init(p_uint16 + 1);
      p_uint16[2] = 0;
      *(undefined1 *)(p_uint16 + 3) = 0;
      p_uint16 = p_uint16 + 4;
      loop_i = loop_i + -1;
    } while (loop_i != -1);
    pbVar17 = (byte *)((int)p_uint11 + stack_val_34 + 8);
    p_uint16 = *(undefined4 **)pbVar17;
    if ((p_uint6 != p_uint16) && (p_uint16 != (undefined4 *)0x0)) {
      p_uint2 = p_uint16 + 0x1c;
      while (p_uint16 != p_uint2) {
        HW_Routine_08007C28(p_uint2 + -3,p_uint2[-2]);
        HW_Routine_080079E8(p_uint2 + -3,2);
        CppRuntime_FreeMemory(p_uint2[-4]);
        p_uint2 = p_uint2 + -4;
      }
      CppRuntime_FreeMemory(p_uint16);
    }
    *(undefined4 **)pbVar17 = p_uint6;
    loop_i = 0;
    i_val5 = stack_val_34 + 8;
    do {
      p_int14 = (int *)(*(int *)((int)p_uint11 + i_val5) + loop_i * 0x10);
      HW_Routine_080083D0(&stack_val_40,arg_6,3);
      p_int13 = p_int14 + 1;
      if (&stack_val_40 != p_int13) {
        HW_Routine_08007C28(p_int13,p_int14[2]);
        i_val8 = HW_Routine_08007CD8(p_int13,stack_val_3c);
        p_int14[2] = i_val8;
      }
      HW_Routine_08007C28(&stack_val_40,stack_val_3c);
      HW_Routine_080079E8(&stack_val_40,2);
      i_val8 = -((-p_int14[2] | p_int14[2]) >> 0x1f);
      u_val3 = (undefined1)i_val8;
      if (i_val8 != 0) {
        stack_val_38 = 0x20004;
        ScriptEngine_Routine_0804E7A0(0x20004,*p_int14 + 4,0);
        u_val3 = 1;
      }
      *(undefined1 *)(p_int14 + 3) = u_val3;
      loop_i = loop_i + 1;
    } while (loop_i < 7);
    i_val5 = stack_val_24;
  } while (stack_val_24 < 3);
  *(byte *)((int)ctx + 0xea) = 1;
  NPC_Routine_080ADD44(puStack_2c);
  ctx[0x48] = 0;
  ctx[0x49] = 0;
  ctx[0x4a] = gRomData_080E7888;
  ctx[0x4b] = (uint)puStack_30;
  u_val9 = *gRomData_080F9F74;
  u_val12 = *gRomData_080F9F70;
  ctx[0x4c] = 0;
  ctx[0x4d] = 0;
  ctx[0x4e] = gRomData_080E78E0;
  ctx[0x4f] = u_val12;
  ctx[0x50] =
       (((ushort)*ctx & 0x1ff) >> 7) * 0x4000 + ((*ctx & 0x7ffff) >> 9) * 0x20 + 0x6000000;
  *(ushort *)(ctx + 0x51) =
       (ushort)0xFFFFC000 & (ushort)ctx[0x51] | (ushort)(u_val9 >> 5) & (ushort)0x3FFF;
  *(byte *)((int)ctx + 0x145) = *(byte *)((int)ctx + 0x145) & 0x3f | (arg_5 == 1) << 7;
  u_val9 = *ctx;
  u_val12 = *ctx;
  b_flag1 = *(byte *)((int)ctx + 2);
  b_flag4 = HW_Routine_080074C0(puStack_28,puStack_28[1]);
  ctx[0x52] = 0;
  ctx[0x53] = 0;
  ctx[0x54] = gRomData_080E7878;
  *(byte *)(ctx + 0x55) = (byte)ctx[0x55] & 0xe0 | (byte)(((byte)u_val9 & 0x7f) >> 2);
  *(ushort *)(ctx + 0x55) =
       (ushort)0xFFFF801F & (ushort)ctx[0x55] | (ushort)(((u_val12 & 0x7ffff) >> 9) << 5);
  ctx[0x55] = ctx[0x55] & 0xFFF87FFF | ((b_flag1 & 0x7f) >> 3) << 0xf;
  *(byte *)((int)ctx + 0x156) = *(byte *)((int)ctx + 0x156) & 0x87 | (b_flag4 & 0xf) << 3;
  ctx[0x56] = 0;
  Animal_Routine_0805E6CC(ctx + 0x58,gRomGfx_08728208);
  Animal_Routine_0805E6CC(ctx + 100,gRomGfx_0872937C);
  Animal_Routine_0805E824(ctx + 0x70,ctx + 100,0,0x100);
  HW_Routine_080083D0(ctx + 0x75,arg_6,7);
  *(byte *)(ctx + 0x77) = (byte)ctx[0x77] & 0xfc;
  NPC_Routine_080ADC00(ctx + 0x79);
  HW_Routine_08007770(ctx + 0x7a,arg_7);
  *(byte *)(ctx + 0x7c) = (byte)ctx[0x7c] & 0xfc;
  i_val5 = 2;
  do {
    i_val5 = i_val5 + -1;
  } while (i_val5 != -1);
  *(byte *)(ctx + 0x140) = 0;
  pbVar17 = (byte *)(0x504 + (int)ctx);
  Animal_Routine_0805E6CC(pbVar17,gRomGfx_08728320);
  Animal_Routine_0805E824((byte *)(0x534 + (int)ctx),pbVar17,0,0x100);
  HW_Routine_08007770(ctx + 0x152,arg_7);
  *(byte *)(ctx + 0x154) = (byte)ctx[0x154] | 0x3f;
  return ctx;
}

// =============================================================================
// Function: ScriptEngine_Routine_0804F69C @ 0x0804F69C
// =============================================================================
void ScriptEngine_Routine_0804F69C(int ctx,uint opcode)

{
  undefined4 u_val1;
  int i_val2;
  
  HW_Routine_080073E0(ctx + 0x548,*(undefined4 *)(ctx + 0x54c));
  HW_Routine_08007184(ctx + 0x548,2);
  u_val1 = gRomData_080E5A28;
  *(undefined4 *)(ctx + 0x504) = gRomData_080E5A28;
  HW_Routine_080073E0(ctx + 0x1e8,*(undefined4 *)(ctx + 0x1ec));
  HW_Routine_08007184(ctx + 0x1e8,2);
  NPC_Routine_080ADC84(ctx + 0x1e4,2);
  HW_Routine_08007C28(ctx + 0x1d4,*(undefined4 *)(ctx + 0x1d8));
  HW_Routine_080079E8(ctx + 0x1d4,2);
  *(undefined4 *)(ctx + 400) = u_val1;
  *(undefined4 *)(ctx + 0x160) = u_val1;
  Farm_Routine_080098AC(ctx + 0x148,2);
  Farm_Routine_080098AC(ctx + 0x130,2);
  Farm_Routine_080098AC(ctx + 0x120,2);
  VTable_Routine_080E105C(ctx + 0xd0,2);
  Farm_Routine_080098AC(ctx + 0xc0,2);
  for (i_val2 = ctx + 0x40; i_val2 != ctx + *(int *)(ctx + 0x3c) * 0x10 + 0x40;
      i_val2 = i_val2 + 0x10) {
  }
  Farm_Routine_080098DC(ctx + 0x20,2);
  HW_Routine_08007C28(ctx + 0x18,*(undefined4 *)(ctx + 0x1c));
  HW_Routine_080079E8(ctx + 0x18,2);
  HW_Routine_080073E0(ctx + 0x10,*(undefined4 *)(ctx + 0x14));
  HW_Routine_08007184(ctx + 0x10,2);
  if ((opcode & 1) != 0) {
    CppRuntime_FreeMemory(ctx);
  }
  return;
}

