// =============================================================================
// Harvest Moon: Friends of Mineral Town (GBA) - Decompiled Source
// Module: SCRIPT_ENGINE (151 functions)
// Description: Harvest Moon virtual script bytecode engine, dialogue flow and cutscenes
// =============================================================================

#include "../../include/events/script_engine.h"

// =============================================================================
// Function: ScriptEngine_Construct @ 0x0803AB30
// =============================================================================
undefined8 ScriptEngine_Construct(undefined4 *param_1,int *param_2)

{
  undefined2 uVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  undefined4 in_lr;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 uStack_30;
  undefined2 *apuStack_2c [2];
  undefined2 **ppuStack_24;
  
  *param_1 = param_2;
  puVar4 = param_1 + 1;
  iVar6 = 2;
  ppuStack_24 = apuStack_2c;
  puVar5 = puVar4;
  do {
    *puVar4 = 0;
    *(undefined2 *)(puVar4 + 1) = 0;
    puVar4[2] = 0;
    *(undefined2 *)(puVar4 + 3) = 0;
    puVar4[4] = 0;
    *(undefined2 *)(puVar4 + 5) = 0;
    puVar4[6] = 0;
    *(undefined2 *)(puVar4 + 7) = 0;
    HW_Routine_08007874(puVar5 + 8);
    puVar4[9] = 0;
    puVar4 = puVar4 + 0xb;
    puVar5 = puVar5 + 0xb;
    iVar6 = iVar6 + -1;
  } while (iVar6 != -1);
  piVar2 = param_1 + 0x22;
  *piVar2 = 0;
  *(undefined1 *)(param_1 + 0x27) = 1;
  uStack_30 = _call_via_r2(param_2,0xf,*(undefined4 *)(*param_2 + 0x48));
  if (*piVar2 == 0) {
    gba_memset(param_1 + 0x23,uStack_30,(int)param_1 + (0x8c - (int)(param_1 + 0x23)));
    gba_memset((int)piVar2 + *piVar2 + 4,uStack_30,1 - *piVar2);
    *piVar2 = 1;
  }
  else {
    gba_memset(param_1 + 0x23,uStack_30,((int)param_1 + 0x8d) - (int)(param_1 + 0x23));
    *piVar2 = *piVar2 - ((int)piVar2 + ((*piVar2 + 4) - ((int)param_1 + 0x8d)));
  }
  piVar2 = (int *)_call_via_r1(param_2,*(undefined4 *)(*param_2 + 0x68));
  uVar7 = 0;
  do {
    iVar6 = *piVar2;
    _call_via_r3(ppuStack_24,piVar2,uVar7 + 0x91A,*(undefined4 *)(iVar6 + 0xc));
    _call_via_r3(&uStack_50,piVar2,*apuStack_2c[0],*(undefined4 *)(iVar6 + 0x10));
    gba_memcpy(&uStack_50,&uStack_50,0x20);
    param_1[uVar7 * 0xb + 1] = uStack_50;
    param_1[uVar7 * 0xb + 2] = uStack_4c;
    param_1[uVar7 * 0xb + 3] = uStack_48;
    param_1[uVar7 * 0xb + 4] = uStack_44;
    param_1[uVar7 * 0xb + 5] = uStack_40;
    param_1[uVar7 * 0xb + 6] = uStack_3c;
    param_1[uVar7 * 0xb + 7] = uStack_38;
    param_1[uVar7 * 0xb + 8] = uStack_34;
    puVar5 = param_1 + uVar7 * 0xb + 9;
    HW_Routine_08007C28(puVar5,param_1[uVar7 * 0xb + 10]);
    uVar3 = HW_Routine_08007B54(puVar5,2);
    param_1[uVar7 * 0xb + 10] = uVar3;
    uVar1 = HW_Routine_08007D4C(puVar5);
    *(undefined2 *)(param_1 + uVar7 * 0xb + 0xb) = uVar1;
    uVar7 = uVar7 + 1;
  } while (uVar7 < 3);
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: ScriptEngine_Destruct @ 0x0803AC78
// =============================================================================
undefined4 ScriptEngine_Destruct(undefined4 *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 in_lr;
  
  puVar1 = param_1 + 0x22;
  _call_via_r2((int *)*param_1,*(undefined1 *)(param_1 + 0x23),
                  *(undefined4 *)(*(int *)*param_1 + 0x4c));
  if (param_1 != (undefined4 *)0xfffffffc) {
    for (; param_1 + 1 != puVar1; puVar1 = puVar1 + -0xb) {
      HW_Routine_08007C28(puVar1 + -3,puVar1[-2]);
      HW_Routine_080079E8(puVar1 + -3,2);
    }
  }
  if ((param_2 & 1) != 0) {
    Dispatcher_Routine_08000608(param_1);
  }
  return in_lr;
}

// =============================================================================
// Function: ScriptEngine_ClearVM @ 0x0803ACD8
// =============================================================================
undefined4 ScriptEngine_ClearVM(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined2 uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 in_lr;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  int iStack_34;
  undefined4 *puStack_30;
  undefined4 *puStack_2c;
  undefined4 *puStack_28;
  undefined4 *puStack_24;
  
  uVar11 = 0;
  do {
    uVar9 = param_1[uVar11 * 0xb + 3];
    iVar1 = HW_Routine_08007D4C(param_1 + uVar11 * 0xb + 9,param_1[uVar11 * 0xb + 10]);
    uVar7 = 0;
    if (param_1[uVar11 * 0xb + 3] != 0) {
      uVar7 = *(undefined2 *)(param_1 + uVar11 * 0xb + 4);
    }
    HW_Routine_08008F0C(&uStack_48,uVar9,iVar1 * 0x20 + 0x06010000,uVar7);
    puVar4 = (undefined4 *)param_2[1];
    if (puVar4 == (undefined4 *)param_2[3]) {
      iStack_34 = 1;
      puVar5 = (undefined4 *)*param_2;
      iStack_38 = (int)puVar4 - (int)puVar5 >> 4;
      piVar2 = &iStack_38;
      if (iStack_38 == 0) {
        piVar2 = &iStack_34;
      }
      puStack_28 = puVar4;
      if (iStack_38 + *piVar2 == 0) {
        puVar4 = (undefined4 *)0x0;
        iVar1 = 0;
        puStack_30 = &uStack_48;
      }
      else {
        iVar1 = (iStack_38 + *piVar2) * 0x10;
        puStack_30 = &uStack_48;
        puVar4 = (undefined4 *)runtime_malloc_aligned(iVar1);
        if (puVar4 == (undefined4 *)0x0) {
          puVar4 = (undefined4 *)VTable_Routine_080D3BC0(iVar1);
        }
        puVar5 = (undefined4 *)*param_2;
      }
      puStack_2c = param_1 + 0x23;
      puVar8 = puVar4;
      for (; puVar5 != puStack_28; puVar5 = puVar5 + 4) {
        if (puVar8 != (undefined4 *)0x0) {
          uVar9 = puVar5[1];
          uVar10 = puVar5[2];
          *puVar8 = *puVar5;
          puVar8[1] = uVar9;
          puVar8[2] = uVar10;
          puVar8[3] = puVar5[3];
        }
        puVar8 = puVar8 + 4;
      }
      iVar3 = iStack_34;
      if (iStack_34 == 1) {
        if (puVar8 != (undefined4 *)0x0) {
          uVar9 = puStack_30[1];
          uVar10 = puStack_30[2];
          *puVar8 = *puStack_30;
          puVar8[1] = uVar9;
          puVar8[2] = uVar10;
          puVar8[3] = puStack_30[3];
        }
        puVar8 = puVar8 + 4;
      }
      else {
        for (; iVar3 != 0; iVar3 = iVar3 + -1) {
          if (puVar8 != (undefined4 *)0x0) {
            uVar9 = puStack_30[1];
            uVar10 = puStack_30[2];
            *puVar8 = *puStack_30;
            puVar8[1] = uVar9;
            puVar8[2] = uVar10;
            puVar8[3] = puStack_30[3];
          }
          puVar8 = puVar8 + 4;
        }
      }
      iVar6 = *param_2;
      for (iVar3 = iVar6; iVar3 != param_2[1]; iVar3 = iVar3 + 0x10) {
      }
      puStack_24 = puVar4;
      if (iVar6 != 0) {
        cpp_operator_delete(iVar6);
      }
      *param_2 = (int)puStack_24;
      param_2[1] = (int)puVar8;
      param_2[3] = (int)puStack_24 + iVar1;
    }
    else {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = uStack_48;
        puVar4[1] = uStack_44;
        puVar4[2] = uStack_40;
        puVar4[3] = uStack_3c;
      }
      param_2[1] = param_2[1] + 0x10;
      puStack_2c = param_1 + 0x23;
      puStack_30 = &uStack_48;
    }
    uVar11 = uVar11 + 1;
  } while (uVar11 < 3);
  _call_via_r4(*param_1,param_1[5],*(undefined1 *)puStack_2c,1);
  return in_lr;
}

// =============================================================================
// Function: ScriptEngine_SetVariable @ 0x0803AE58
// =============================================================================
undefined4
ScriptEngine_SetVariable(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             int param_5)

{
  undefined4 in_lr;
  
  _call_via_r4(param_2,param_3,param_4,0xaa,0x8000,param_1 + param_5 * 0xb + 1,*param_1,
                  *(undefined2 *)(param_1 + param_5 * 0xb + 1 + 10),param_1 + 0x22);
  return in_lr;
}

// =============================================================================
// Function: ScriptEngine_GetVariable @ 0x0803AEA0
// =============================================================================
void ScriptEngine_GetVariable(undefined4 *param_1,int *param_2,int *param_3,int param_4,uint param_5)

{
  undefined2 uVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  int iVar6;
  uint *puVar7;
  undefined4 uVar8;
  uint *puVar9;
  int iVar10;
  uint uStack_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  int iStack_40;
  ushort uStack_3c;
  int iStack_38;
  uint uStack_34;
  undefined4 *puStack_30;
  undefined4 uStack_2c;
  uint *puStack_28;
  uint uStack_24;
  
  *param_1 = param_2;
  param_1[1] = 0;
  puVar9 = param_1 + 0x34;
  *puVar9 = 0;
  iStack_38._0_1_ = (undefined1)param_4;
  *(undefined1 *)(param_1 + 0x39) = (undefined1)iStack_38;
  *(undefined1 *)((int)param_1 + 0xe5) = 1;
  *(undefined1 *)((int)param_1 + 0xe6) = 0;
  param_1[0x3a] = 0;
  iStack_38 = param_4;
  _call_via_r3(&iStack_40,param_3,0,*(undefined4 *)(*param_3 + 0xc));
  uStack_34 = 0;
  if (iStack_40 != 0) {
    uStack_34 = (uint)uStack_3c;
  }
  uStack_24 = 0;
  puStack_28 = puVar9;
  if (uStack_34 != 0) {
    puStack_30 = param_1 + 1;
    do {
      _call_via_r3(&uStack_60,param_3,*(undefined2 *)(iStack_40 + uStack_24 * 4),
                      *(undefined4 *)(*param_3 + 0x10));
      uStack_88 = uStack_60;
      uStack_84 = uStack_5c;
      uStack_80 = uStack_58;
      uStack_7c = uStack_54;
      uStack_78 = uStack_50;
      uStack_74 = uStack_4c;
      uStack_70 = uStack_48;
      uStack_6c = uStack_44;
      HW_Routine_08007874(&uStack_68,&uStack_68);
      uStack_64 = HW_Routine_08007B54(&uStack_68,0);
      if ((uint)param_1[1] < 5) {
        puVar9 = puStack_30 + param_1[1] * 10 + 1;
        if (puVar9 != (uint *)0x0) {
          *puVar9 = uStack_88;
          puVar9[1] = uStack_84;
          puVar9[2] = uStack_80;
          puVar9[3] = uStack_7c;
          puVar9[4] = uStack_78;
          puVar9[5] = uStack_74;
          puVar9[6] = uStack_70;
          puVar9[7] = uStack_6c;
          HW_Routine_08007874(puVar9 + 8,puVar9 + 8);
          uVar3 = HW_Routine_08007CD8(puVar9 + 8,uStack_64);
          puVar9[9] = uVar3;
        }
        param_1[1] = param_1[1] + 1;
      }
      HW_Routine_08007C28(&uStack_68,uStack_64);
      HW_Routine_080079E8(&uStack_68,2);
      uStack_24 = uStack_24 + 1;
    } while (uStack_24 < uStack_34);
  }
  if ((iStack_38 == 0) || (iStack_38 != 1)) {
    uVar8 = 0x10;
  }
  else {
    uVar8 = 0x11;
  }
  uVar2 = _call_via_r2(param_2,uVar8,*(undefined4 *)(*param_2 + 0x48));
  if (*puStack_28 < 0x10) {
    puVar4 = (undefined1 *)((int)puStack_28 + *puStack_28 + 4);
    if (puVar4 != (undefined1 *)0x0) {
      *puVar4 = uVar2;
    }
    *puStack_28 = *puStack_28 + 1;
  }
  iVar10 = 0;
  uVar3 = 0;
  if (uStack_34 != 0) {
    do {
      iVar10 = iVar10 + (uint)*(ushort *)(iStack_40 + 2);
      iStack_40 = iStack_40 + 4;
      uVar3 = uVar3 + 1;
    } while (uVar3 < uStack_34);
  }
  uStack_2c = _call_via_r1(param_2,*(undefined4 *)(*param_2 + 0x18));
  uVar8 = _call_via_r1(param_2,*(undefined4 *)(*param_2 + 0x1c));
  uStack_24 = 0;
  if (param_5 != 0) {
    do {
      Animal_Routine_0805E824(&uStack_88,param_3,0,0x100);
      if (iVar10 == 0) {
        iVar6 = 0;
      }
      else {
        uVar5 = math_rand();
        iVar6 = math_modsi3(uVar5,iVar10);
      }
      if (iVar6 != 0) {
        uVar1 = (undefined2)uStack_78;
        uStack_78._0_2_ = (short)(iVar6 << 8);
        Animal_Routine_0805E8F0(&uStack_88);
        uStack_78 = CONCAT22(uStack_78._2_2_,uVar1);
      }
      ScriptEngine_StackPush(&uStack_74,&uStack_88,uStack_2c,uVar8);
      puVar9 = param_1 + 0x3a;
      if (*puVar9 < 0x20) {
        puVar7 = puVar9 + *puVar9 * 7 + 1;
        if (puVar7 != (uint *)0x0) {
          *puVar7 = uStack_74;
          puVar7[1] = uStack_70;
          puVar7[2] = uStack_6c;
          puVar7[3] = uStack_68;
          puVar7[4] = uStack_64;
          puVar7[5] = uStack_60;
          puVar7[6] = uStack_5c;
        }
        *puVar9 = *puVar9 + 1;
      }
      uStack_24 = uStack_24 + 1;
    } while (uStack_24 < param_5);
  }
  return param_1;
}

// =============================================================================
// Function: ScriptEngine_ParseHeaderChunks @ 0x0803B128
// =============================================================================
undefined4 ScriptEngine_ParseHeaderChunks(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  short sVar9;
  undefined4 uVar10;
  undefined4 in_lr;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  int iStack_34;
  undefined4 *puStack_30;
  undefined4 *puStack_2c;
  undefined4 *puStack_28;
  undefined4 *puStack_24;
  
  puStack_2c = param_1 + param_1[1] * 10 + 2;
  puVar6 = param_1 + 2;
  puStack_30 = param_1;
  if (param_1 + 2 != puStack_2c) {
    do {
      iVar7 = puVar6[2];
      sVar9 = 0;
      if (iVar7 != 0) {
        sVar9 = *(short *)(puVar6 + 3);
      }
      puStack_28 = puVar6 + 10;
      if (sVar9 != 0) {
        iVar1 = HW_Routine_08007D4C(puVar6 + 8,puVar6[9]);
        HW_Routine_08008F0C(&uStack_48,iVar7,iVar1 * 0x20 + 0x06010000,sVar9);
        puVar3 = (undefined4 *)param_2[1];
        if (puVar3 == (undefined4 *)param_2[3]) {
          iStack_34 = 1;
          puVar4 = (undefined4 *)*param_2;
          iStack_38 = (int)puVar3 - (int)puVar4 >> 4;
          piVar2 = &iStack_38;
          if (iStack_38 == 0) {
            piVar2 = &iStack_34;
          }
          puStack_24 = puVar3;
          if (iStack_38 + *piVar2 == 0) {
            puVar3 = (undefined4 *)0x0;
            iVar7 = 0;
          }
          else {
            iVar7 = (iStack_38 + *piVar2) * 0x10;
            puVar3 = (undefined4 *)runtime_malloc_aligned(iVar7);
            if (puVar3 == (undefined4 *)0x0) {
              puVar3 = (undefined4 *)VTable_Routine_080D3BC0(iVar7);
            }
            puVar4 = (undefined4 *)*param_2;
          }
          puStack_28 = puVar6 + 10;
          puVar6 = puVar3;
          for (; puVar4 != puStack_24; puVar4 = puVar4 + 4) {
            if (puVar6 != (undefined4 *)0x0) {
              uVar8 = puVar4[1];
              uVar10 = puVar4[2];
              *puVar6 = *puVar4;
              puVar6[1] = uVar8;
              puVar6[2] = uVar10;
              puVar6[3] = puVar4[3];
            }
            puVar6 = puVar6 + 4;
          }
          iVar1 = iStack_34;
          if (iStack_34 == 1) {
            if (puVar6 != (undefined4 *)0x0) {
              *puVar6 = uStack_48;
              puVar6[1] = uStack_44;
              puVar6[2] = uStack_40;
              puVar6[3] = uStack_3c;
            }
            puVar6 = puVar6 + 4;
          }
          else {
            for (; iVar1 != 0; iVar1 = iVar1 + -1) {
              if (puVar6 != (undefined4 *)0x0) {
                *puVar6 = uStack_48;
                puVar6[1] = uStack_44;
                puVar6[2] = uStack_40;
                puVar6[3] = uStack_3c;
              }
              puVar6 = puVar6 + 4;
            }
          }
          iVar5 = *param_2;
          for (iVar1 = iVar5; iVar1 != param_2[1]; iVar1 = iVar1 + 0x10) {
          }
          if (iVar5 != 0) {
            cpp_operator_delete(iVar5);
          }
          *param_2 = (int)puVar3;
          param_2[1] = (int)puVar6;
          param_2[3] = iVar7 + (int)puVar3;
        }
        else {
          if (puVar3 != (undefined4 *)0x0) {
            *puVar3 = uStack_48;
            puVar3[1] = uStack_44;
            puVar3[2] = uStack_40;
            puVar3[3] = uStack_3c;
          }
          param_2[1] = param_2[1] + 0x10;
        }
      }
      puVar6 = puStack_28;
    } while (puStack_28 != puStack_2c);
  }
  _call_via_r4(*puStack_30,puStack_30[6],*(undefined1 *)(puStack_30 + 0x35),1);
  return in_lr;
}

// =============================================================================
// Function: ScriptEngine_AllocateStack @ 0x0803B2A8
// =============================================================================
undefined4 ScriptEngine_AllocateStack(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 in_lr;
  uint uStack_2c;
  
  uVar5 = (uint)*(byte *)(param_1 + 0x39);
  piVar4 = (int *)(uVar5 * 0x10 + gRomData_080F1948);
  uVar8 = 0;
  uVar9 = 0;
  if ((uVar5 == 0) || (uVar5 != 1)) {
    uStack_2c = 2;
  }
  else {
    uStack_2c = 3;
  }
  uVar1 = _call_via_r1((int *)*param_1,*(undefined4 *)(*(int *)*param_1 + 0x18));
  uVar2 = _call_via_r1((int *)*param_1,*(undefined4 *)(*(int *)*param_1 + 0x1c));
  uVar5 = param_1[0x3a];
  uVar7 = 0;
  if (uVar5 != 0) {
    param_1 = param_1 + 0x3b;
    piVar6 = piVar4;
    do {
      iVar3 = Animal_Routine_0805E8F0(param_1);
      if (iVar3 * 0x20000000 < 0) {
        ScriptEngine_StackPop(param_1,uVar1,uVar2);
      }
      uVar9 = uVar9 + 1;
      if (uStack_2c <= uVar9) {
        uVar8 = uVar8 + 1;
        piVar6 = piVar6 + 2;
        if (1 < uVar8) {
          uVar8 = 0;
          piVar6 = piVar4;
        }
        uVar9 = 0;
      }
      param_1[5] = param_1[5] + *piVar6;
      param_1[6] = param_1[6] + piVar6[1];
      param_1 = param_1 + 7;
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar5);
  }
  return in_lr;
}

// =============================================================================
// Function: ScriptEngine_FreeStack @ 0x0803B368
// =============================================================================
undefined4 ScriptEngine_FreeStack(undefined4 *param_1,undefined4 param_2)

{
  short sVar1;
  short sVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int *piVar9;
  uint uVar10;
  undefined4 in_lr;
  
  uVar4 = param_1[0x3a];
  cVar3 = *(char *)((int)param_1 + 0xe6);
  if ((cVar3 == '\0') || (cVar3 != '\x01')) {
    cVar3 = '\x01';
    uVar10 = 0;
    uVar4 = uVar4 >> 1;
  }
  else {
    cVar3 = '\0';
    uVar10 = uVar4 >> 1;
  }
  *(char *)((int)param_1 + 0xe6) = cVar3;
  iVar5 = _call_via_r1((int *)*param_1,*(undefined4 *)(*(int *)*param_1 + 0x18));
  iVar6 = _call_via_r1((int *)*param_1,*(undefined4 *)(*(int *)*param_1 + 0x1c));
  if (uVar10 < uVar4) {
    piVar9 = param_1 + uVar10 * 7 + 0x3c;
    do {
      sVar1 = *(short *)((int)piVar9 + 0x12);
      sVar2 = *(short *)((int)piVar9 + 0x16);
      puVar8 = param_1 + (uint)*(ushort *)(*piVar9 + (uint)*(ushort *)(piVar9 + 2) * 4) * 10 + 2;
      uVar7 = HW_Routine_08007D4C(puVar8 + 8,puVar8[9]);
      _call_via_r4(param_2,((sVar1 - iVar5) + 8U & 0xff) - 8,((sVar2 - iVar6) + 8U & 0xff) - 8,
                      0x55,0,puVar8,*param_1,uVar7,param_1 + 0x34);
      piVar9 = piVar9 + 7;
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar4);
  }
  return in_lr;
}

// =============================================================================
// Function: ScriptEngine_StackPush @ 0x0803B454
// =============================================================================
undefined8
ScriptEngine_StackPush(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  uVar1 = param_2[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  ScriptEngine_StackPop(param_1,param_3,param_4);
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: ScriptEngine_StackPop @ 0x0803B474
// =============================================================================
undefined4 ScriptEngine_StackPop(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  uVar2 = math_rand();
  iVar3 = math_umodsi3(uVar2,0xf0);
  *(int *)(param_1 + 0x14) = (param_2 + iVar3) * 0x10000;
  uVar2 = math_rand();
  iVar3 = math_umodsi3(uVar2,0xa0);
  *(int *)(param_1 + 0x18) = (param_3 + iVar3) * 0x10000;
  uVar1 = math_rand();
  *(ushort *)(param_1 + 0x10) = (uVar1 & 0x90) + 0x60;
  return in_lr;
}

// =============================================================================
// Function: ScriptEngine_StackTop @ 0x0803B4B0
// =============================================================================
undefined8 ScriptEngine_StackTop(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 in_lr;
  
  *param_1 = gRomData_080E76E8;
  param_1[1] = param_2;
  puVar1 = param_1 + 2;
  iVar2 = 3;
  do {
    *(undefined1 *)puVar1 = 0;
    puVar1 = puVar1 + 6;
    iVar2 = iVar2 + -1;
  } while (iVar2 != -1);
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: ScriptEngine_SetPC @ 0x0803B4DC
// =============================================================================
undefined8 ScriptEngine_SetPC(undefined1 *param_1,int param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  undefined1 auStack_34 [32];
  
  if (0xc < (uint)(param_3 + 0xFFFF00DF)) {
    auStack_34[0] = 0;
    *param_1 = 0;
    gba_strcpy(param_1 + 4);
    goto LAB_0803b6ac;
  }
  switch(*(uint *)((param_3 + 0xFFFF00DF) * 4 + _func_0803B4FC) & 0xfffffffe) {
  case 0x803b534:
    cVar1 = Farm_HasPlantedCrop(*(int *)(param_2 + 4) + 0x14);
    if ((cVar1 == '\0') ||
       (puVar3 = gRomData_080F1974,
       -1 < (int)((uint)*(byte *)(*(int *)(param_2 + 4) + 0x21C8) * 0x20000000))) {
      puVar3 = (undefined *)Farmer_GetName(*(int *)(param_2 + 4) + 0x1BD8);
    }
    break;
  case 0x803b570:
    iVar4 = Farm_GetFieldState(*(int *)(param_2 + 4) + 0x14);
    uVar2 = gRomData_080F1980;
    if (iVar4 != 0) {
      uVar2 = Animal_Routine_0809B1F4();
    }
    uVar5 = gba_strlen(uVar2);
    if (0x1f < uVar5) {
      uVar5 = 0x1f;
    }
    gba_memcpy(auStack_34,uVar2,uVar5);
    goto LAB_0803b68c;
  case 0x803b5a8:
    puVar3 = (undefined *)Animal_Routine_0809B1F4(*(int *)(param_2 + 4) + 0x1C70);
    break;
  case 0x803b5bc:
    puVar3 = (undefined *)Farmer_GetFarmName(*(int *)(param_2 + 4) + 0x1BD8);
    break;
  case 0x803b5d0:
    iVar4 = NPC_Routine_080A0384(*(int *)(param_2 + 4) + 0x1CD4);
    uVar2 = gRomData_080F1984;
    if (iVar4 == 0) {
      uVar5 = gba_strlen(gRomData_080F1984);
      if (0x1f < uVar5) {
        uVar5 = 0x1f;
      }
      gba_memcpy(auStack_34,uVar2,uVar5);
      auStack_34[uVar5] = 0;
      *param_1 = 1;
      gba_strcpy(param_1 + 4);
      goto LAB_0803b6ac;
    }
    NPC_Routine_080A0384(*(int *)(param_2 + 4) + 0x1CD4);
    puVar3 = (undefined *)NPC_Routine_0809EACC();
    break;
  case 0x803b628:
    puVar3 = (undefined *)Farm_NoOp(*(int *)(param_2 + 4) + 0x14);
    break;
  case 0x803b634:
    gba_strcpy(auStack_34,param_3 * 0x18 + param_2 + 0xFFE81490);
    *param_1 = 1;
    goto LAB_0803b694;
  case 0x803b650:
    iVar4 = *(int *)(param_2 + 4);
    puVar3 = 0x21E0;
    goto LAB_0803b66e;
  case 0x803b65c:
    iVar4 = *(int *)(param_2 + 4);
    puVar3 = 0x21F0;
    goto LAB_0803b66e;
  case 0x803b668:
    iVar4 = *(int *)(param_2 + 4);
    puVar3 = 0x2200;
LAB_0803b66e:
    puVar3 = puVar3 + iVar4;
  }
  uVar5 = gba_strlen(puVar3);
  if (0x1f < uVar5) {
    uVar5 = 0x1f;
  }
  gba_memcpy(auStack_34,puVar3,uVar5);
LAB_0803b68c:
  auStack_34[uVar5] = 0;
  *param_1 = 1;
LAB_0803b694:
  gba_strcpy(param_1 + 4,auStack_34);
LAB_0803b6ac:
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: ScriptEngine_GetPC @ 0x0803B6B8
// =============================================================================
undefined4 ScriptEngine_GetPC(int param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 in_lr;
  undefined1 auStack_2c [24];
  
  uVar1 = gba_strlen(param_3);
  if (0x16 < uVar1) {
    uVar1 = 0x16;
  }
  gba_memcpy(auStack_2c,param_3,uVar1);
  auStack_2c[uVar1] = 0;
  gba_strcpy(param_2 * 0x18 + param_1 + 8,auStack_2c);
  return in_lr;
}

// =============================================================================
// Function: ScriptEngine_ResolveStringPointer @ 0x0803B6FC
// =============================================================================
void ScriptEngine_ResolveStringPointer(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  *param_1 = gRomData_080E7748;
  uVar1 = *param_2;
  *param_2 = 0;
  param_1[1] = uVar1;
  param_1[2] = param_3;
  return;
}

// =============================================================================
// Function: ScriptEngine_ResolveJumpTarget @ 0x0803B840
// =============================================================================
longlong ScriptEngine_ResolveJumpTarget(int param_1)

{
  uint in_lr;
  uint uStack_10;
  
  uStack_10 = ((*(ushort *)(param_1 + 0x1c) & 0x7fff) >> 5) + 3 & 0x3FF |
              ((*(uint *)(param_1 + 0x1c) & 0x7ffff) >> 0xf) << 0xc;
  uStack_10 = uStack_10 | uStack_10 << 0x10;
  CpuFastSet(&uStack_10,(*(byte *)(param_1 + 0x1c) & 0x1f) * 0x800 + 0x6000000,0x010000A0);
  Animal_Routine_08051320((*(byte *)(param_1 + 0x1c) & 0x1f) * 0x800 + 0x6000000,
                *(undefined4 *)(param_1 + 0xc),0,*(undefined4 *)(param_1 + 0x14),
                *(undefined4 *)(param_1 + 0x18),(*(ushort *)(param_1 + 0x1c) & 0x7fff) >> 5,
                (*(uint *)(param_1 + 0x1c) & 0x7ffff) >> 0xf);
  CpuFastSet(*gRomData_080F9F78,((*(uint *)(param_1 + 0x1c) & 0x7ffff) >> 0xf) * 0x20 + 0x5000000,8
                 );
  return (ulonglong)in_lr << 0x20;
}

// =============================================================================
// Function: ScriptEngine_LookupJumpTable @ 0x0803B8CC
// =============================================================================
undefined8
ScriptEngine_LookupJumpTable(short *param_1,short param_2,short param_3,short param_4,short param_5,byte param_6,
             uint param_7,uint param_8,uint param_9)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 in_lr;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  *(byte *)(param_1 + 4) =
       *(byte *)(param_1 + 4) & 0x80 | param_6 & 3 | (byte)((param_7 & 0x1f) << 2);
  uVar3 = (param_7 >> 3 & 3) << 7;
  uVar4 = 0xFFFFFE7F & (ushort)param_1[4];
  param_1[4] = (ushort)uVar4 | (ushort)uVar3;
  uVar1 = 0x3FF;
  uVar6 = ((param_7 & 7) * 0x40 + 0x14) * 0x200;
  uVar7 = *(uint *)(param_1 + 4) & 0xFFF801FF;
  *(uint *)(param_1 + 4) = uVar7 | uVar6;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0x87 | (byte)((param_8 & 0xf) << 3);
  param_1[5] = (ushort)0xFFFF807F & param_1[5] | (ushort)((param_9 & 0xff) << 7);
  *(byte *)((int)param_1 + 0xb) = *(byte *)((int)param_1 + 0xb) & 0x7f;
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0x80;
  *(undefined1 *)((int)param_1 + 0xd) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = gRomData_080E5BB4;
  *(short **)(param_1 + 0xe) = param_1 + 0x10;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = gRomData_080E5BD8;
  *(short **)(param_1 + 0x10) = param_1 + 0xe;
  *(short **)(param_1 + 0x12) = param_1 + 0x10;
  uVar7 = (uVar7 & 0x7ffff | uVar6) >> 9;
  uVar6 = *gRomData_080F9F74;
  uVar5 = *gRomData_080F9F70;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = gRomData_080E7768;
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  *(uint *)(param_1 + 0x1e) = (((uVar4 & 0x1ff | uVar3) >> 7) * 0x200 + uVar7) * 0x20 + 0x6000000;
  *(char *)(param_1 + 0x20) = (char)(uVar6 >> 5);
  *(bool *)((int)param_1 + 0x41) = param_9 == 1;
  *(undefined1 *)(param_1 + 0x21) = 0;
  iVar2 = (int)*param_1;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 7;
  }
  iVar8 = (int)param_1[1];
  if (iVar8 < 0) {
    iVar8 = iVar8 + 7;
  }
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = gRomData_080E7758;
  *(int *)(param_1 + 0x28) = iVar2 >> 3;
  *(int *)(param_1 + 0x2a) = iVar8 >> 3;
  *(uint *)(param_1 + 0x2c) = (uint)((ushort)param_1[2] >> 3);
  *(uint *)(param_1 + 0x2e) = (uint)((ushort)param_1[3] >> 3);
  *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) & 0xe0 | (byte)(param_7 & 0x1f);
  param_1[0x30] = (ushort)0xFFFF801F & param_1[0x30] | (ushort)((uVar7 & uVar1) << 5);
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xFFF87FFF | (param_8 & 0xf) << 0xf;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: ScriptEngine_Routine_0803BAAC @ 0x0803BAAC
// =============================================================================
undefined8 ScriptEngine_Routine_0803BAAC(short *param_1,ushort *param_2,int param_3,int param_4)

{
  byte bVar1;
  short sVar2;
  ushort uVar3;
  short sVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ushort *puVar10;
  uint uVar11;
  undefined4 in_lr;
  
  bVar1 = *(byte *)((int)param_1 + 0xb);
  bVar5 = (char)param_1[6] << 1 | bVar1 >> 7;
  if (bVar5 == 1) {
    if (8 < *(byte *)((int)param_1 + 0xd)) {
      *(byte *)((int)param_1 + 0xb) = bVar1 | 0x80;
      *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0x80 | 1;
      goto LAB_0803bb18;
    }
    cVar6 = *(byte *)((int)param_1 + 0xd) + 1;
  }
  else {
    if ((bVar5 < 2) || (bVar5 != 2)) goto LAB_0803bb18;
    if (*(char *)((int)param_1 + 0xd) == '\0') {
      *(byte *)((int)param_1 + 0xb) = bVar1 & 0x7f;
      *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0x80;
      goto LAB_0803bb18;
    }
    cVar6 = *(char *)((int)param_1 + 0xd) + -1;
  }
  *(char *)((int)param_1 + 0xd) = cVar6;
LAB_0803bb18:
  if (*(short **)(param_1 + 0xe) != param_1 + 0x10) {
    _call_via_r2(param_3,param_1 + 8,*(undefined4 *)(*(int *)(param_3 + 8) + 0x1c));
  }
  if ((*(byte *)(param_1 + 6) & 0x7f) == 0 && -1 < *(char *)((int)param_1 + 0xb)) {
    *param_2 = *param_2 & ~(ushort)(0x100 << (*(byte *)(param_1 + 4) & 3));
    if ((int)(-*(uint *)(param_1 + 0x16) | *(uint *)(param_1 + 0x16)) < 0) {
      _call_via_r2(param_4,param_1 + 0x16,*(undefined4 *)(*(int *)(param_4 + 8) + 0x14));
    }
  }
  else {
    bVar1 = *(byte *)(param_1 + 4);
    uVar9 = bVar1 & 3;
    *param_2 = (ushort)(0x100 << uVar9) | 0x2000 | *param_2;
    param_2[uVar9 + 4] =
         (ushort)((((ushort)param_1[4] & 0x1ff) >> 7) << 2) | (ushort)(((bVar1 & 0x7f) >> 2) << 8) |
         0x40;
    param_2[uVar9 * 2 + 8] = 0;
    sVar2 = param_1[1];
    param_2[uVar9 * 2 + 9] = -sVar2;
    uVar11 = (uint)*(byte *)((int)param_1 + 0xd);
    if (uVar11 < 9) {
      uVar3 = param_1[3];
      iVar7 = math_divsi3(uVar11 * uVar3,9,param_2 + uVar9 * 2 + 9,param_2 + uVar9 + 4,-sVar2);
      sVar4 = (short)((int)(param_1[1] * 2 + (uint)uVar3) / 2) - (short)(iVar7 / 2);
      uVar3 = param_1[2];
      iVar8 = math_divsi3(uVar11 * uVar3,9);
      sVar2 = (short)((int)(*param_1 * 2 + (uint)uVar3) / 2) - (short)(iVar8 / 2);
      param_2[0x20] = sVar2 * 0x100 | sVar2 + (short)iVar8;
      param_2[0x22] = sVar4 * 0x100 | sVar4 + (short)iVar7;
    }
    else {
      param_2[0x20] = *param_1 << 8 | *param_1 + param_1[2];
      param_2[0x22] = sVar2 << 8 | sVar2 + param_1[3];
    }
    puVar10 = param_2 + 0x24;
    *puVar10 = 0x3f;
    uVar11 = 1 << (bVar1 & 3);
    uVar3 = ~(ushort)uVar11 & 0x3f;
    param_2[0x25] = uVar3;
    uVar9 = ((ushort)param_1[5] & 0x7fff) >> 7;
    if (uVar9 == 2) {
      *puVar10 = *puVar10 | 0x20;
      *(uint *)(param_2 + 0x28) = uVar11 | gRomTable_08083F40;
    }
    if ((uVar9 == 1) && (-1 < (int)(-*(uint *)(param_1 + 0x16) | *(uint *)(param_1 + 0x16)))) {
      _call_via_r2(param_4,param_1 + 0x16,*(undefined4 *)(*(int *)(param_4 + 8) + 0x10),
                      param_1 + 0x16,uVar3);
    }
  }
  return CONCAT44(in_lr,(*(byte *)(param_1 + 6) & 0x7f) << 1 |
                        (uint)(*(byte *)((int)param_1 + 0xb) >> 7));
}

// =============================================================================
// Function: ScriptEngine_Routine_0803BCF8 @ 0x0803BCF8
// =============================================================================
undefined4 ScriptEngine_Routine_0803BCF8(int param_1)

{
  undefined4 in_lr;
  
  if ((*(byte *)(param_1 + 0xc) & 0x7f) == 0 && -1 < *(char *)(param_1 + 0xb)) {
    if ((*(ushort *)(param_1 + 10) & 0x7fff) >> 7 != 1) {
      Farm_Routine_08009940(param_1 + 0x10,param_1 + 0x2c);
    }
    Farm_Routine_08009940(param_1 + 0x10,param_1 + 0x44);
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
  if ((byte)(*(char *)(param_1 + 0xc) << 1 | *(byte *)(param_1 + 0xb) >> 7) < 3) {
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 0x80;
    *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) & 0x80;
  }
  return in_lr;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803BD60 @ 0x0803BD60
// =============================================================================
undefined4 ScriptEngine_Routine_0803BD60(int param_1)

{
  undefined4 in_lr;
  
  ScriptEngine_Routine_0803BCF8();
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 0x80;
  *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) & 0x80 | 1;
  *(undefined1 *)(param_1 + 0xd) = 9;
  return in_lr;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803BD88 @ 0x0803BD88
// =============================================================================
undefined4 ScriptEngine_Routine_0803BD88(int param_1)

{
  undefined4 in_lr;
  
  if ((*(byte *)(param_1 + 0xc) & 0x7f) != 0 || (char)*(byte *)(param_1 + 0xb) < '\0') {
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0x7f;
    *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) & 0x80 | 1;
  }
  return in_lr;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803BDB8 @ 0x0803BDB8
// =============================================================================
undefined4 ScriptEngine_Routine_0803BDB8(int param_1)

{
  undefined4 in_lr;
  
  if ((*(byte *)(param_1 + 0xc) & 0x7f) != 0 || (char)*(byte *)(param_1 + 0xb) < '\0') {
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0x7f;
    *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) & 0x80;
  }
  return in_lr;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803BDFC @ 0x0803BDFC
// =============================================================================
void ScriptEngine_Routine_0803BDFC(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  undefined4 param_9)

{
  undefined4 uVar1;
  
  param_1[1] = gRomData_080E7778;
  uVar1 = Dispatcher_Routine_080005D4(100);
  uVar1 = ScriptEngine_LookupJumpTable(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  *param_1 = uVar1;
  return param_1;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803BE50 @ 0x0803BE50
// =============================================================================
undefined4 ScriptEngine_Routine_0803BE50(int *param_1,uint param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  param_1[1] = gRomData_080E7778;
  iVar1 = *param_1;
  if (iVar1 != 0) {
    Farm_Routine_080098AC(iVar1 + 0x44,2);
    Farm_Routine_080098AC(iVar1 + 0x2c,2);
    Farm_Routine_080098DC(iVar1 + 0x10,2);
    Dispatcher_Routine_08000608(iVar1);
  }
  if ((param_2 & 1) != 0) {
    Dispatcher_Routine_08000608(param_1);
  }
  return in_lr;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803BEB0 @ 0x0803BEB0
// =============================================================================
void ScriptEngine_Routine_0803BEB0(undefined4 *param_1)

{
  ScriptEngine_Routine_0803BAAC(*param_1);
  return;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803BEBC @ 0x0803BEBC
// =============================================================================
undefined4 ScriptEngine_Routine_0803BEBC(undefined4 *param_1)

{
  undefined4 in_lr;
  
  ScriptEngine_Routine_0803BCF8(*param_1);
  return in_lr;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803BEC8 @ 0x0803BEC8
// =============================================================================
undefined4 ScriptEngine_Routine_0803BEC8(undefined4 *param_1)

{
  undefined4 in_lr;
  
  ScriptEngine_Routine_0803BD60(*param_1);
  return in_lr;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803BED4 @ 0x0803BED4
// =============================================================================
undefined4 ScriptEngine_Routine_0803BED4(undefined4 *param_1)

{
  undefined4 in_lr;
  
  ScriptEngine_Routine_0803BD88(*param_1);
  return in_lr;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803BEE0 @ 0x0803BEE0
// =============================================================================
undefined4 ScriptEngine_Routine_0803BEE0(undefined4 *param_1)

{
  undefined4 in_lr;
  
  ScriptEngine_Routine_0803BDB8(*param_1);
  return in_lr;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803BEFC @ 0x0803BEFC
// =============================================================================
undefined4 ScriptEngine_Routine_0803BEFC(undefined4 *param_1)

{
  undefined4 in_lr;
  
  ScriptEngine_Routine_0803BDE4(*param_1);
  return in_lr;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803BF08 @ 0x0803BF08
// =============================================================================
undefined4 ScriptEngine_Routine_0803BF08(undefined4 *param_1)

{
  undefined4 in_lr;
  
  ScriptEngine_Routine_0803BDEC(*param_1);
  return in_lr;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803BF14 @ 0x0803BF14
// =============================================================================
void ScriptEngine_Routine_0803BF14(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,byte param_6,uint param_7,uint param_8)

{
  
  param_1[6] = param_5;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = gRomData_080E7758;
  param_1[3] = param_2;
  param_1[4] = param_3;
  param_1[5] = param_4;
  *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) & 0xe0 | param_6 & 0x1f;
  *(ushort *)(param_1 + 7) =
       (ushort)0xFFFF801F & *(ushort *)(param_1 + 7) | (ushort)((param_7 & 0x3FF) << 5);
  param_1[7] = param_1[7] & 0xFFF87FFF | (param_8 & 0xf) << 0xf;
  return;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803BF78 @ 0x0803BF78
// =============================================================================
undefined8
ScriptEngine_Routine_0803BF78(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined1 param_6)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  ScriptEngine_Routine_0803BDFC(param_1,0,0x88,0xf0,0x18,param_2,param_3,param_4,param_5);
  *(undefined4 *)(param_1 + 4) = gRomData_080E77A4;
  Dispatcher_Routine_080005D4(0x41C);
  uVar1 = VTable_Routine_080E0A94();
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined1 *)(param_1 + 0xc) = param_6;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0xe) = 1;
  *(undefined1 *)(param_1 + 0xf) = 1;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: ScriptEngine_Routine_0803BFC8 @ 0x0803BFC8
// =============================================================================
undefined4 ScriptEngine_Routine_0803BFC8(int param_1,undefined4 param_2)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 4) = gRomData_080E77A4;
  if (*(int *)(param_1 + 8) != 0) {
    VTable_Routine_080E0C38(*(int *)(param_1 + 8),3);
  }
  ScriptEngine_Routine_0803BE50(param_1,param_2);
  return in_lr;
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
ScriptEngine_Routine_0803C028(int param_1,int param_2,byte *param_3,undefined4 param_4,int param_5,
             undefined4 param_6,int param_7)

{
  byte bVar1;
  ushort uVar2;
  uint *puVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  undefined4 in_lr;
  uint *apuStack_90 [2];
  int iStack_88;
  ushort uStack_84;
  int iStack_80;
  ushort uStack_7c;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint auStack_58 [2];
  byte *pbStack_50;
  int iStack_4c;
  uint uStack_48;
  int iStack_44;
  uint uStack_40;
  int iStack_3c;
  uint uStack_38;
  uint *puStack_34;
  uint *puStack_30;
  uint uStack_2c;
  int iStack_28;
  uint uStack_24;
  
  pbStack_50 = param_3;
  iStack_4c = ScriptEngine_Routine_0803BEB0(param_1,param_4,param_5,param_6);
  if (((iStack_4c < 0) || (iStack_4c < 3)) || (iStack_4c != 3)) goto LAB_0803c506;
  uStack_48 = 0;
  if (*(char *)(param_1 + 0xf) != '\0') {
    uVar2 = *(ushort *)(param_2 + 8);
    if ((uVar2 & 0x3f) >> 5 == 0 && (uVar2 & 0x1f) >> 4 == 0) {
      if (((uVar2 & 1) != 0) && (param_7 != 0)) {
        HW_Routine_08008B6C(param_7,0xc5);
      }
    }
    else {
      if ((uVar2 & 0x20) == 0) {
        if ((uVar2 & 0x10) != 0) {
          if (*(char *)(param_1 + 0xc) != '\x06') {
            cVar4 = *(char *)(param_1 + 0xc) + '\x01';
            goto LAB_0803c0a4;
          }
          *(undefined1 *)(param_1 + 0xc) = 0;
        }
      }
      else {
        if (*(char *)(param_1 + 0xc) == '\0') {
          cVar4 = '\x06';
        }
        else {
          cVar4 = *(char *)(param_1 + 0xc) + -1;
        }
LAB_0803c0a4:
        *(char *)(param_1 + 0xc) = cVar4;
      }
      if (param_7 != 0) {
        HW_Routine_08008B6C(param_7,0xcb);
      }
      uStack_48 = *(uint *)((uint)*(byte *)(param_1 + 0xc) * 4 + gRomData_080F1A34);
      *(undefined1 *)(param_1 + 0xe) = 0x14;
    }
  }
  if (*(char *)(param_1 + 0xd) != '\0') {
    iVar11 = *(int *)(param_1 + 8);
    iVar5 = *(int *)(iVar11 + 0x50);
    _call_via_r3(apuStack_90,*(int **)(iVar5 + 0x20),
                    *(undefined2 *)(*(int *)(iVar5 + 0x24) + (uint)*(ushort *)(iVar5 + 0x2c) * 4),
                    *(undefined4 *)(**(int **)(iVar5 + 0x20) + 0x10));
    iVar5 = iStack_80;
    iVar6 = HW_Routine_080074C0(iVar11 + 0x30,*(undefined4 *)(iVar11 + 0x34));
    uVar10 = 0;
    if (iStack_80 != 0) {
      uVar10 = (uint)uStack_7c;
    }
    iVar6 = iVar6 * 0x20 + 0x05000200;
    *(int *)(iVar11 + 0x44) = iVar5;
    *(int *)(iVar11 + 0x48) = iVar6;
    *(uint *)(iVar11 + 0x4c) = uVar10;
    _call_via_r2(param_5,iVar11 + 0x38,*(undefined4 *)(*(int *)(param_5 + 8) + 0x10));
    uStack_48 = *(uint *)((uint)*(byte *)(param_1 + 0xc) * 4 + gRomData_080F1A34);
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
  cVar4 = *(char *)(param_1 + 0xe) + -1;
  *(char *)(param_1 + 0xe) = cVar4;
  if (cVar4 == '\0') {
    *(undefined1 *)(param_1 + 0xe) = 0x28;
  }
  if (*(byte *)(param_1 + 0xe) < 0x14) {
    iVar5 = *(int *)(param_1 + 8);
    bVar1 = *(byte *)(param_1 + 0xc);
    iVar6 = *(int *)(iVar5 + 0x50);
    uVar10 = HW_Routine_080074C0(iVar5 + 0x30,*(undefined4 *)(iVar5 + 0x34));
    uVar7 = Animal_Routine_0805E8F0(iVar6 + 0x20);
    _call_via_r3(apuStack_90,*(int **)(iVar6 + 0x20),
                    *(undefined2 *)(*(int *)(iVar6 + 0x24) + (uint)*(ushort *)(iVar6 + 0x2c) * 4),
                    *(undefined4 *)(**(int **)(iVar6 + 0x20) + 0x10));
    iVar5 = iStack_88;
    if ((uVar7 & 3) >> 1 != 0) {
      iVar11 = HW_Routine_08007D4C(iVar6,*(undefined4 *)(iVar6 + 4));
      uVar7 = 0;
      if (iStack_88 != 0) {
        uVar7 = (uint)uStack_84;
      }
      iVar11 = iVar11 * 0x20 + 0x06010000;
      *(int *)(iVar6 + 0x14) = iVar5;
      *(int *)(iVar6 + 0x18) = iVar11;
      *(uint *)(iVar6 + 0x1c) = uVar7;
      _call_via_r2(param_5,iVar6 + 8,*(undefined4 *)(*(int *)(param_5 + 8) + 0x10));
    }
    uVar7 = 0xFE00FFFF & *apuStack_90[0];
    uStack_70 = 0xFFFFFF00 &
                (uVar7 | (((*apuStack_90[0] & 0x1ffffff) >> 0x10) + (uint)bVar1 * 0x10 + 0x10 &
                         0x1FF) << 0x10) | (uVar7 & 0xff) + 0x96 & 0xff;
    uStack_6c = apuStack_90[0][1] & 0xFFFF0FFF | (uVar10 & 0xf) << 0xc;
    uVar10 = HW_Routine_08007D4C(iVar6,*(undefined4 *)(iVar6 + 4));
    uStack_6c = uStack_6c & 0xFFFFFC00 | uVar10 & 0x3ff;
    uStack_70 = uStack_70 | 0x1000;
    bVar1 = *pbStack_50;
    if (bVar1 < 0x80) {
      *(uint *)(pbStack_50 + (uint)bVar1 * 8 + 4) = uStack_70;
      *(undefined2 *)((int)(pbStack_50 + (uint)bVar1 * 8 + 4) + 4) = (undefined2)uStack_6c;
      *pbStack_50 = bVar1 + 1;
    }
  }
  iVar5 = *(int *)(param_1 + 8);
  uVar10 = 0;
  puStack_34 = &uStack_68;
  uStack_2c = -uStack_48;
  puStack_30 = auStack_58;
  iStack_28 = 0x10;
  do {
    iVar11 = *(int *)(uVar10 * 4 + iVar5 + 0x54);
    uVar7 = HW_Routine_080074C0(iVar5 + 0x30,*(undefined4 *)(iVar5 + 0x34));
    uVar8 = Animal_Routine_0805E8F0(iVar11 + 0x20);
    _call_via_r3(apuStack_90,*(int **)(iVar11 + 0x20),
                    *(undefined2 *)(*(int *)(iVar11 + 0x24) + (uint)*(ushort *)(iVar11 + 0x2c) * 4),
                    *(undefined4 *)(**(int **)(iVar11 + 0x20) + 0x10));
    iVar6 = iStack_88;
    if ((uVar8 & 3) >> 1 != 0) {
      iVar9 = HW_Routine_08007D4C(iVar11,*(undefined4 *)(iVar11 + 4));
      uVar8 = 0;
      if (iStack_88 != 0) {
        uVar8 = (uint)uStack_84;
      }
      iVar9 = iVar9 * 0x20 + 0x06010000;
      *(int *)(iVar11 + 0x14) = iVar6;
      *(int *)(iVar11 + 0x18) = iVar9;
      *(uint *)(iVar11 + 0x1c) = uVar8;
      _call_via_r2(param_5,iVar11 + 8,*(undefined4 *)(*(int *)(param_5 + 8) + 0x10));
    }
    uStack_68 = 0xFFFFFF00 &
                (0xFE00FFFF & *apuStack_90[0] |
                (((*apuStack_90[0] & 0x1ffffff) >> 0x10) + iStack_28 & 0x1FF) << 0x10) |
                (byte)*puStack_34 + 0x96 & 0xff;
    uStack_64 = apuStack_90[0][1] & 0xFFFF0FFF | (uVar7 & 0xf) << 0xc;
    uVar7 = HW_Routine_08007D4C(iVar11,*(undefined4 *)(iVar11 + 4));
    uStack_64 = uStack_64 & 0xFFFFFC00 | uVar7 & 0x3ff;
    uStack_68 = uStack_68 | 0x1000;
    bVar1 = *pbStack_50;
    if (bVar1 < 0x80) {
      *(uint *)(pbStack_50 + (uint)bVar1 * 8 + 4) = uStack_68;
      *(undefined2 *)((int)(pbStack_50 + (uint)bVar1 * 8 + 4) + 4) = (undefined2)uStack_64;
      *pbStack_50 = bVar1 + 1;
    }
    iStack_28 = iStack_28 + 0x10;
    uVar10 = uVar10 + 1;
  } while (uVar10 < 7);
  iVar5 = *(int *)(param_1 + 8);
  if (uStack_48 != 0) {
    uStack_60 = 0x2000c;
    ScriptEngine_Routine_0804E7A0(0x2000c,iVar5 + 0x74,0);
    uStack_5c = 0x2000c;
    ScriptEngine_Routine_0804E8F0(0x2000c,iVar5 + 0x74,0,0,uStack_48);
  }
  uVar10 = HW_Routine_080074C0(iVar5 + 0x30,*(undefined4 *)(iVar5 + 0x34));
  iStack_44 = iVar5 + 0x70;
  uStack_40 = (uStack_2c | uStack_48) >> 0x1f;
  auStack_58[1] = 0;
  puStack_30[1] = puStack_30[1] & 0xFFFF0FFF | (uVar10 & 0xf) << 0xc;
  auStack_58[0] = (0xFFFF3FFF & 0x80000000 | 0x4000) & 0xFFFFFF00 | 0x108e;
  iStack_3c = iVar5 + 0x74;
  uVar10 = 0;
  do {
    iVar5 = uVar10 * 8 + iStack_44;
    uVar7 = HW_Routine_08007D4C(iVar5 + 0x304,*(undefined4 *)(iVar5 + 0x308));
    uStack_38 = uVar10 + 1;
    if (uStack_40 != 0) {
      uVar8 = 0;
      piVar12 = (int *)(uVar10 * 0x30 + iStack_44 + 0x328);
      iVar11 = uVar7 * 0x20 + 0x06010000;
      iVar6 = uVar10 * 0x80 + iStack_3c;
      iVar5 = uVar10 * 0x30 + iStack_44 + 0x31c;
      do {
        *piVar12 = iVar6;
        piVar12[1] = iVar11;
        piVar12[2] = 0x80;
        uStack_24 = uVar8;
        _call_via_r2(param_5,iVar5,*(undefined4 *)(*(int *)(param_5 + 8) + 0x10));
        piVar12 = piVar12 + 6;
        iVar11 = iVar11 + 0x80;
        iVar6 = iVar6 + 0x180;
        iVar5 = iVar5 + 0x18;
        uVar8 = uStack_24 + 1;
      } while (uVar8 < 2);
    }
    puVar3 = puStack_30;
    puStack_30[1] = puStack_30[1] & 0xFFFFFC00 | uVar7 & 0x3ff;
    auStack_58[0] = auStack_58[0] & 0xFE00FFFF | (uVar10 * 0x20 + 0x88 & 0x1FF) << 0x10;
    bVar1 = *pbStack_50;
    if (bVar1 < 0x80) {
      *(uint *)(pbStack_50 + (uint)bVar1 * 8 + 4) = auStack_58[0];
      *(short *)((int)(pbStack_50 + (uint)bVar1 * 8 + 4) + 4) = (short)puVar3[1];
      *pbStack_50 = bVar1 + 1;
    }
    uVar10 = uStack_38;
  } while (uStack_38 < 3);
LAB_0803c506:
  return CONCAT44(in_lr,iStack_4c);
}

// =============================================================================
// Function: ScriptEngine_Routine_0803C518 @ 0x0803C518
// =============================================================================
undefined4 ScriptEngine_Routine_0803C518(int param_1)

{
  undefined4 in_lr;
  
  ScriptEngine_Routine_0803BEBC();
  *(undefined1 *)(param_1 + 0xd) = 1;
  *(undefined1 *)(param_1 + 0xf) = 1;
  return in_lr;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803C52C @ 0x0803C52C
// =============================================================================
undefined4 ScriptEngine_Routine_0803C52C(int param_1)

{
  undefined4 in_lr;
  
  ScriptEngine_Routine_0803BEC8();
  *(undefined1 *)(param_1 + 0xd) = 1;
  *(undefined1 *)(param_1 + 0xf) = 1;
  return in_lr;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803C54C @ 0x0803C54C
// =============================================================================
undefined8
ScriptEngine_Routine_0803C54C(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5)

{
  undefined4 in_lr;
  
  ScriptEngine_Routine_0803BDFC(param_1,0x80,0x88,0x70,0x18,param_2,param_3,param_4,param_5);
  *(undefined4 *)(param_1 + 4) = gRomData_080E77E0;
  ScriptEngine_Routine_0803C5B0(param_1 + 8);
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: ScriptEngine_Routine_0803C588 @ 0x0803C588
// =============================================================================
undefined4 ScriptEngine_Routine_0803C588(int param_1,undefined4 param_2)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 4) = gRomData_080E77E0;
  ScriptEngine_Routine_0803C7A0(param_1 + 8,2);
  ScriptEngine_Routine_0803BE50(param_1,param_2);
  return in_lr;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803C7A0 @ 0x0803C7A0
// =============================================================================
undefined4 ScriptEngine_Routine_0803C7A0(int *param_1,uint param_2)

{
  undefined4 in_lr;
  
  if (*param_1 != 0) {
    VTable_Routine_080E0D70(*param_1,3);
  }
  if ((param_2 & 1) != 0) {
    Dispatcher_Routine_08000608(param_1);
  }
  return in_lr;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803C7C8 @ 0x0803C7C8
// =============================================================================
undefined4 ScriptEngine_Routine_0803C7C8(undefined4 *param_1,int param_2,int param_3,byte *param_4,int param_5)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  undefined4 in_lr;
  undefined1 auStack_8c [8];
  int iStack_84;
  int iStack_7c;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  undefined2 *apuStack_5c [2];
  uint uStack_54;
  uint uStack_50;
  undefined2 *apuStack_4c [2];
  uint uStack_44;
  undefined4 uStack_40;
  undefined2 *apuStack_3c [2];
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  
  piVar8 = (int *)*param_1;
  if ((-piVar8[0x19] | piVar8[0x19]) < 0) {
    uStack_34 = HW_Routine_080074C0(piVar8 + 0x18);
    if (*(byte *)(piVar8 + 0x20) != 0) {
      uVar3 = -piVar8[0x1a] | piVar8[0x1a];
      if (-1 < (int)uVar3) {
        Animal_Routine_0805E790(auStack_8c,piVar8,0);
        iVar4 = uStack_34 * 0x20 + 0x05000200;
        piVar8[0x1d] = iStack_7c;
        piVar8[0x1e] = iVar4;
        piVar8[0x1f] = 0x20;
        _call_via_r2(param_5,piVar8 + 0x1a,*(undefined4 *)(*(int *)(param_5 + 8) + 0x10));
        *(byte *)(piVar8 + 0x20) = (byte)(uVar3 >> 0x1f);
      }
    }
    uStack_30 = param_2 + 4;
    uStack_2c = param_3 + 4;
    if ((-piVar8[0x62] | piVar8[0x62]) < 0) {
      uVar3 = HW_Routine_08007D4C(piVar8 + 0x61);
      if (*(byte *)(piVar8 + 99) != 0) {
        uVar5 = piVar8[100];
        uVar5 = -uVar5 | uVar5;
        if (-1 < (int)uVar5) {
          iVar4 = uVar3 * 0x20 + 0x06010000;
          piVar8[0x67] = (int)(piVar8 + 0x21);
          piVar8[0x68] = iVar4;
          piVar8[0x69] = 0x100;
          _call_via_r2(param_5,piVar8 + 100,*(undefined4 *)(*(int *)(param_5 + 8) + 0x10));
          *(byte *)(piVar8 + 99) = (byte)(uVar5 >> 0x1f);
        }
      }
      uStack_6c = (((0xFFFF3FFF & 0x1000 | 0x4000) & 0x3FFFFFFF | 0x80000000) & 0xFFFFFF00
                  | uStack_2c & 0xff) & 0xFE00FFFF | (0x1FF & uStack_30) << 0x10;
      uStack_68 = uVar3 & 0x3ff & 0xFFFF0FFF | (uStack_34 & 0xf) << 0xc;
      bVar1 = *param_4;
      if (bVar1 < 0x80) {
        *(uint *)(param_4 + (uint)bVar1 * 8 + 4) = uStack_6c;
        *(undefined2 *)((int)(param_4 + (uint)bVar1 * 8 + 4) + 4) = (undefined2)uStack_68;
        *param_4 = bVar1 + 1;
      }
    }
    uVar3 = uStack_30 + 0x20;
    if ((-piVar8[0xab] | piVar8[0xab]) < 0) {
      uVar5 = HW_Routine_08007D4C(piVar8 + 0xaa);
      if (*(byte *)(piVar8 + 0xac) != 0) {
        uVar6 = piVar8[0xad];
        uVar6 = -uVar6 | uVar6;
        if (-1 < (int)uVar6) {
          iVar4 = uVar5 * 0x20 + 0x06010000;
          piVar8[0xb0] = (int)(piVar8 + 0x6a);
          piVar8[0xb1] = iVar4;
          piVar8[0xb2] = 0x100;
          _call_via_r2(param_5,piVar8 + 0xad,*(undefined4 *)(*(int *)(param_5 + 8) + 0x10));
          *(byte *)(piVar8 + 0xac) = (byte)(uVar6 >> 0x1f);
        }
      }
      uStack_64 = (((0xFFFF3FFF & 0x1000 | 0x4000) & 0x3FFFFFFF | 0x80000000) & 0xFFFFFF00
                  | uStack_2c & 0xff) & 0xFE00FFFF | (uVar3 & 0x1FF) << 0x10;
      uStack_60 = uVar5 & 0x3ff & 0xFFFF0FFF | (uStack_34 & 0xf) << 0xc;
      bVar1 = *param_4;
      if (bVar1 < 0x80) {
        *(uint *)(param_4 + (uint)bVar1 * 8 + 4) = uStack_64;
        *(undefined2 *)((int)(param_4 + (uint)bVar1 * 8 + 4) + 4) = (undefined2)uStack_60;
        *param_4 = bVar1 + 1;
      }
    }
    uStack_24 = 0;
    uStack_28 = 0x40001000;
    if ((-piVar8[0xb5] | piVar8[0xb5]) < 0) {
      uVar3 = HW_Routine_08007D4C(piVar8 + 0xb4);
      if (*(byte *)(piVar8 + 0xbc) != 0) {
        uVar5 = piVar8[0xb6];
        uVar5 = -uVar5 | uVar5;
        if (-1 < (int)uVar5) {
          iVar4 = *piVar8;
          _call_via_r3(apuStack_5c,piVar8,(char)piVar8[0xb3],*(undefined4 *)(iVar4 + 0xc));
          _call_via_r3(auStack_8c,piVar8,*apuStack_5c[0],*(undefined4 *)(iVar4 + 0x10));
          iVar4 = uVar3 * 0x20 + 0x06010000;
          piVar8[0xb9] = iStack_84;
          piVar8[0xba] = iVar4;
          piVar8[0xbb] = 0x80;
          _call_via_r2(param_5,piVar8 + 0xb6,*(undefined4 *)(*(int *)(param_5 + 8) + 0x10));
          *(byte *)(piVar8 + 0xbc) = (byte)(uVar5 >> 0x1f);
        }
      }
      uStack_54 = (uStack_28 & 0xFFFFFF00 | uStack_2c & 0xff) & 0xFE00FFFF |
                  (uStack_30 + 0x40 & 0x1FF) << 0x10;
      uStack_50 = (uStack_24 & 0xFFFFFC00 | uVar3 & 0x3ff) & 0xFFFF0FFF |
                  (uStack_34 & 0xf) << 0xc;
      bVar1 = *param_4;
      if (bVar1 < 0x80) {
        *(uint *)(param_4 + (uint)bVar1 * 8 + 4) = uStack_54;
        *(undefined2 *)((int)(param_4 + (uint)bVar1 * 8 + 4) + 4) = (undefined2)uStack_50;
        *param_4 = bVar1 + 1;
      }
    }
    if (((-piVar8[0xc6] | piVar8[0xc6]) < 0) && ((-piVar8[0xbe] | piVar8[0xbe]) < 0)) {
      uStack_40 = uStack_24;
      uStack_44 = (uStack_28 & 0xFFFFFF00 | uStack_2c & 0xff) & 0xFE00FFFF |
                  (uStack_30 + 0x58 & 0x1FF) << 0x10;
      if (*(char *)((int)piVar8 + 0x2F1) != '\0') {
        uVar3 = HW_Routine_08007D4C(piVar8 + 0xc5,piVar8[0xc6]);
        uVar5 = HW_Routine_080074C0(piVar8 + 0xbd,piVar8[0xbe]);
        if ((char)piVar8[0xcd] != '\0') {
          iVar4 = piVar8[0xc];
          _call_via_r3(apuStack_4c,piVar8 + 0xc,*(undefined2 *)((int)piVar8 + 0x2F2),
                          *(undefined4 *)(iVar4 + 0xc));
          _call_via_r3(auStack_8c,piVar8 + 0xc,*apuStack_4c[0],*(undefined4 *)(iVar4 + 0x10));
          uVar6 = piVar8[199];
          if (-1 < (int)(-uVar6 | uVar6)) {
            iVar4 = uVar3 * 0x20 + 0x06010000;
            piVar8[0xca] = iStack_84;
            piVar8[0xcb] = iVar4;
            piVar8[0xcc] = 0x80;
            _call_via_r2(param_5,piVar8 + 199,*(undefined4 *)(*(int *)(param_5 + 8) + 0x10));
          }
          uVar6 = piVar8[0xbf];
          if (-1 < (int)(-uVar6 | uVar6)) {
            iVar4 = uVar5 * 0x20 + 0x05000200;
            piVar8[0xc2] = iStack_7c;
            piVar8[0xc3] = iVar4;
            piVar8[0xc4] = 0x20;
            _call_via_r2(param_5,piVar8 + 0xbf,*(undefined4 *)(*(int *)(param_5 + 8) + 0x10));
          }
          *(char *)(piVar8 + 0xcd) = '\0';
        }
        uStack_40 = (uStack_40 & 0xFFFFFC00 | uVar3 & 0x3ff) & 0xFFFF0FFF |
                    (uVar5 & 0xf) << 0xc;
        bVar1 = *param_4;
        if (bVar1 < 0x80) {
          *(uint *)(param_4 + (uint)bVar1 * 8 + 4) = uStack_44;
          *(ushort *)((int)(param_4 + (uint)bVar1 * 8 + 4) + 4) = (ushort)uStack_40;
          *param_4 = bVar1 + 1;
        }
      }
      if ((-piVar8[0xcf] | piVar8[0xcf]) < 0) {
        iVar4 = HW_Routine_08007D4C(piVar8 + 0xce);
        if (*(byte *)(piVar8 + 0xd6) != 0) {
          uVar3 = piVar8[0xd0];
          uVar3 = -uVar3 | uVar3;
          if (-1 < (int)uVar3) {
            iVar7 = *piVar8;
            _call_via_r3(apuStack_3c,piVar8,5,*(undefined4 *)(iVar7 + 0xc));
            _call_via_r3(auStack_8c,piVar8,*apuStack_3c[0],*(undefined4 *)(iVar7 + 0x10));
            iVar7 = iVar4 * 0x20 + 0x06010000;
            piVar8[0xd3] = iStack_84;
            piVar8[0xd4] = iVar7;
            piVar8[0xd5] = 0x80;
            _call_via_r2(param_5,piVar8 + 0xd0,*(undefined4 *)(*(int *)(param_5 + 8) + 0x10));
            *(byte *)(piVar8 + 0xd6) = (byte)(uVar3 >> 0x1f);
          }
        }
        uVar2 = (ushort)0xFFFFFC00 & (ushort)uStack_40 | (ushort)iVar4 & (ushort)0x3FF;
        uStack_40._1_1_ = (byte)(uVar2 >> 8);
        uStack_40._0_2_ = CONCAT11(uStack_40._1_1_ & 0xf | (byte)(uStack_34 << 4),(char)uVar2);
        bVar1 = *param_4;
        if (bVar1 < 0x80) {
          *(uint *)(param_4 + (uint)bVar1 * 8 + 4) = uStack_44;
          *(ushort *)((int)(param_4 + (uint)bVar1 * 8 + 4) + 4) = (ushort)uStack_40;
          *param_4 = bVar1 + 1;
        }
      }
    }
  }
  return in_lr;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803D080 @ 0x0803D080
// =============================================================================
undefined4 ScriptEngine_Routine_0803D080(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  undefined4 uStack_1c;
  
  iVar1 = gRomGfx_0875A440;
  iVar3 = *param_1;
  if (param_2 == 1) {
    uStack_1c = 0xd;
    iVar2 = 0xe;
    goto LAB_0803d0b4;
  }
  if (1 < param_2) {
    if (param_2 == 2) {
      uStack_1c = 0xf;
      iVar2 = 0x10;
      goto LAB_0803d0b4;
    }
    if (param_2 == 3) {
      uStack_1c = 0x11;
      iVar2 = 0x12;
      goto LAB_0803d0b4;
    }
  }
  uStack_1c = 0xb;
  iVar2 = 0xc;
LAB_0803d0b4:
  gba_memcpy(iVar3 + 0x84,uStack_1c * 0x20 + gRomGfx_0875A440,0x20);
  *(undefined1 *)(iVar3 + 0x18c) = 1;
  gba_memcpy(iVar3 + 0xa4,iVar2 * 0x20 + iVar1,0x20);
  *(undefined1 *)(iVar3 + 0x18c) = 1;
  return in_lr;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803D240 @ 0x0803D240
// =============================================================================
undefined4 ScriptEngine_Routine_0803D240(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 in_lr;
  undefined1 auStack_34 [32];
  
  puVar4 = auStack_34;
  iVar6 = *param_1;
  iVar2 = 0x1e;
  if (param_2 < 0xc) {
    iVar2 = 0x1c;
  }
  gba_memcpy(iVar6 + 0x104,iVar2 * 0x20 + gRomGfx_0875A440,0x20);
  puVar3 = (undefined1 *)(iVar6 + 0x18c);
  *puVar3 = 1;
  uVar5 = 0xc;
  if ((param_2 != 0xc) && (uVar5 = param_2, 0xb < param_2)) {
    uVar5 = param_2 - 0xc;
  }
  iVar2 = math_divsi3(uVar5,10);
  iVar1 = math_modsi3(uVar5,10);
  if (iVar2 < 1) {
    gba_memset(auStack_34,0,0x20);
  }
  else {
    puVar4 = (undefined1 *)(iVar2 * 0x20 + gRomGfx_0875A440);
  }
  gba_memcpy(iVar6 + 0x144,puVar4,0x20);
  *puVar3 = 1;
  gba_memcpy(iVar6 + 0x164,iVar1 * 0x20 + gRomGfx_0875A440,0x20);
  *puVar3 = 1;
  return in_lr;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803D2E8 @ 0x0803D2E8
// =============================================================================
undefined4 ScriptEngine_Routine_0803D2E8(int *param_1,char param_2)

{
  int iVar1;
  undefined4 in_lr;
  undefined1 auStack_28 [32];
  
  iVar1 = *param_1;
  if (param_2 == '\0') {
    gba_memset(auStack_28,0,0x20);
    gba_memcpy(iVar1 + 0x228,auStack_28,0x20);
  }
  else {
    gba_memcpy(iVar1 + 0x228,gRomGfx_0875A440 + 0x140,0x20);
  }
  *(undefined1 *)(iVar1 + 0x2b0) = 1;
  return in_lr;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803D340 @ 0x0803D340
// =============================================================================
undefined4 ScriptEngine_Routine_0803D340(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *param_1;
  iVar2 = math_divsi3(param_2,10);
  iVar3 = math_modsi3(param_2,10);
  iVar1 = _LAB_0803d39c;
  gba_memcpy(iVar4 + 0x248,iVar2 * 0x20 + _LAB_0803d39c,0x20);
  *(undefined1 *)(iVar4 + 0x2b0) = 1;
  gba_memcpy(iVar4 + 0x268,iVar3 * 0x20 + iVar1,0x20);
  *(undefined1 *)(iVar4 + 0x2b0) = 1;
  return in_lr;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803D3A0 @ 0x0803D3A0
// =============================================================================
undefined4 ScriptEngine_Routine_0803D3A0(int *param_1,undefined *param_2)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 unaff_r4;
  uint unaff_r5;
  undefined *unaff_r6;
  int unaff_r7;
  int unaff_r8;
  undefined4 in_lr;
  undefined4 *puVar4;
  
  while( true ) {
    puVar4 = (undefined4 *)((int)register0x00000054 + -4);
    *puVar4 = in_lr;
    iVar3 = *param_1;
    cVar1 = *(char *)(iVar3 + 0x2cc);
    if (&UndefinedInstruction < param_2) break;
    param_1 = *(int **)(PTR_case_0803D3C0_0803d3bc + (int)param_2 * 4);
    switch((uint)param_1 & 0xfffffffe) {
    case 0x803d3c0:
      if (!CARRY4((int)param_2 * 4,(uint)PTR_case_0803D3C0_0803d3bc)) {
        gba_memcpy(param_1,unaff_r4,0x20);
        param_1 = (int *)0x02b0;
code_r0x0803d378:
        unaff_r6 = (undefined *)(unaff_r7 + (int)param_1);
        unaff_r4 = 1;
        *unaff_r6 = 1;
        unaff_r5 = unaff_r5 * 0x20 + unaff_r8;
        puVar2 = 0x009a;
code_r0x0803d384:
        gba_memcpy(unaff_r7 + (int)puVar2 * 4,unaff_r5,0x20);
code_r0x0803d390:
        *unaff_r6 = (char)unaff_r4;
        return *(undefined4 *)((int)register0x00000054 + 0x10);
      }
      if (-1 < (int)param_1) goto code_r0x0803d378;
      puVar2 = PTR_case_0803D3C0_0803d3bc;
      if (-1 < (int)param_1) goto code_r0x0803d384;
      if (-1 < (int)param_1) goto code_r0x0803d390;
      if ((int)param_1 < 0) goto case_0803D3D4;
      unaff_r4 = 0x803d4a0;
      unaff_r5 = (uint)unaff_r6 >> 1;
      param_2 = PTR_case_0803D3C0_0803d3bc;
      register0x00000054 = (BADSPACEBASE *)puVar4;
      break;
    case 0x803d3d4:
case_0803D3D4:
      cVar1 = '\0';
      goto LAB_0803d3e6;
    case 0x803d3d8:
      cVar1 = '\x01';
      goto LAB_0803d3e6;
    case 0x803d3dc:
      cVar1 = '\x02';
      goto LAB_0803d3e6;
    case 0x803d3e0:
      cVar1 = '\x03';
      goto LAB_0803d3e6;
    case 0x803d3e4:
      cVar1 = '\x04';
      goto LAB_0803d3e6;
    }
  }
LAB_0803d3e6:
  if (cVar1 != *(char *)(iVar3 + 0x2cc)) {
    *(char *)(iVar3 + 0x2cc) = cVar1;
    *(undefined1 *)(iVar3 + 0x2f0) = 1;
  }
  return *puVar4;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803D404 @ 0x0803D404
// =============================================================================
undefined4 ScriptEngine_Routine_0803D404(int *param_1,uint param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *param_1;
  if ((*(char *)(iVar1 + 0x2F1) == '\0') || (param_2 != *(ushort *)(iVar1 + 0x2F2)))
  {
    *(char *)(iVar1 + 0x2F1) = '\x01';
    *(short *)(iVar1 + 0x2F2) = (short)param_2;
    *(undefined1 *)(iVar1 + 0x334) = 1;
  }
  return in_lr;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803D440 @ 0x0803D440
// =============================================================================
undefined4 ScriptEngine_Routine_0803D440(int *param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  iVar1 = *param_1;
  pcVar2 = (char *)(iVar1 + 0x2F1);
  if (*pcVar2 != '\0') {
    *pcVar2 = '\0';
    *(undefined1 *)(iVar1 + 0x334) = 1;
  }
  return in_lr;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803D464 @ 0x0803D464
// =============================================================================
undefined4 ScriptEngine_Routine_0803D464(int param_1)

{
  undefined4 in_lr;
  
  ScriptEngine_Routine_0803D440(param_1 + 8);
  return in_lr;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803D470 @ 0x0803D470
// =============================================================================
undefined4 ScriptEngine_Routine_0803D470(int param_1)

{
  undefined4 in_lr;
  
  ScriptEngine_Routine_0803D404(param_1 + 8);
  return in_lr;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803D47C @ 0x0803D47C
// =============================================================================
undefined4 ScriptEngine_Routine_0803D47C(int param_1)

{
  undefined4 in_lr;
  
  ScriptEngine_Routine_0803D3A0(param_1 + 8);
  return in_lr;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803D488 @ 0x0803D488
// =============================================================================
undefined4 ScriptEngine_Routine_0803D488(int param_1)

{
  undefined4 in_lr;
  
  ScriptEngine_Routine_0803D340(param_1 + 8);
  return in_lr;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803D494 @ 0x0803D494
// =============================================================================
undefined4 ScriptEngine_Routine_0803D494(int param_1,undefined1 param_2)

{
  undefined4 in_lr;
  
  ScriptEngine_Routine_0803D2E8(param_1 + 8,param_2);
  return in_lr;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803D4A4 @ 0x0803D4A4
// =============================================================================
undefined4 ScriptEngine_Routine_0803D4A4(int param_1)

{
  undefined4 in_lr;
  
  ScriptEngine_Routine_0803D240(param_1 + 8);
  return in_lr;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803D4B0 @ 0x0803D4B0
// =============================================================================
undefined4 ScriptEngine_Routine_0803D4B0(int param_1)

{
  undefined4 in_lr;
  
  ScriptEngine_Routine_0803D0F0(param_1 + 8);
  return in_lr;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803D4BC @ 0x0803D4BC
// =============================================================================
undefined4 ScriptEngine_Routine_0803D4BC(int param_1)

{
  undefined4 in_lr;
  
  ScriptEngine_Routine_0803D080(param_1 + 8);
  return in_lr;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803D4C8 @ 0x0803D4C8
// =============================================================================
undefined4 ScriptEngine_Routine_0803D4C8(int param_1,undefined4 param_2,undefined1 param_3)

{
  undefined4 in_lr;
  
  ScriptEngine_Routine_0803CD4C(param_1 + 8,param_2,param_3);
  return in_lr;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803D4D8 @ 0x0803D4D8
// =============================================================================
undefined8
ScriptEngine_Routine_0803D4D8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  iVar1 = ScriptEngine_Routine_0803BEB0(param_1,param_3,param_4,param_5);
  if (iVar1 == 3) {
    uVar2 = _call_via_r1(param_1,*(undefined4 *)(*(int *)(param_1 + 4) + 0x1c));
    uVar3 = _call_via_r1(param_1,*(undefined4 *)(*(int *)(param_1 + 4) + 0x20));
    ScriptEngine_Routine_0803C7C8(param_1 + 8,uVar2,uVar3,param_2,param_4);
  }
  return CONCAT44(in_lr,iVar1);
}

// =============================================================================
// Function: ScriptEngine_Routine_0803D52C @ 0x0803D52C
// =============================================================================
undefined8 ScriptEngine_Routine_0803D52C(char *param_1,uint *param_2)

{
  byte bVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  byte bVar6;
  undefined4 in_lr;
  uint uStack_2c;
  uint uStack_28;
  byte bStack_24;
  
  bStack_24 = *(byte *)((int)param_2 + 1);
  uVar4 = ((bStack_24 & 0x7f) >> 2) + (bStack_24 & 3) * 0x1e + (((byte)*param_2 & 7) + 6) * 0x78;
  if (6 < uVar4) {
    uVar4 = math_modsi3(uVar4,7);
  }
  bVar6 = (byte)(uVar4 & 7);
  uStack_2c = 200;
  uStack_28 = (uint)(byte)((byte)*param_2 >> 3) * 7 + ((byte)*param_2 & 7);
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
    bStack_24 = bStack_24 & 0x83 | (byte)((uVar3 & 0x1f) << 2);
    if (((bStack_24 & 3) == 3) && ((bStack_24 & 0x7f) >> 2 == 0x1d)) {
      cVar5 = cVar5 + -1;
    }
    bVar1 = 6;
    if (1 < (uVar4 & 7)) {
      bVar1 = bVar6 - 1;
    }
    bVar6 = bVar1 & 7;
  }
  *param_1 = cVar5;
  param_1[1] = bStack_24 & 3;
  param_1[2] = (char)((bStack_24 & 0x7f) >> 2) + '\x01';
  param_1[3] = bVar6;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: ScriptEngine_Routine_0803D644 @ 0x0803D644
// =============================================================================
undefined8 ScriptEngine_Routine_0803D644(int param_1,int param_2)

{
  byte *pbVar1;
  undefined4 uVar2;
  byte *pbVar3;
  undefined4 in_lr;
  uint uStack_c;
  
  uStack_c = param_1 * 0x1e + -1 + param_2;
  pbVar3 = (byte *)(gRomData_080F1A66 + 0xe);
  pbVar1 = (byte *)VTable_Routine_080E0E80(gRomData_080F1A66,pbVar3,&uStack_c,0,0);
  uVar2 = 0;
  if ((pbVar1 != pbVar3) && (*pbVar1 <= uStack_c)) {
    uVar2 = 1;
  }
  return CONCAT44(in_lr,uVar2);
}

// =============================================================================
// Function: ScriptEngine_Routine_0803D688 @ 0x0803D688
// =============================================================================
undefined4 ScriptEngine_Routine_0803D688(int param_1,undefined4 *param_2,undefined4 param_3)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  short *psVar5;
  int iVar6;
  undefined4 in_lr;
  undefined1 auStack_38 [6];
  undefined1 uStack_32;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  ushort uStack_2c;
  ushort uStack_28;
  ushort uStack_26;
  ushort uStack_24;
  
  iVar4 = _call_via_r1(param_3,*param_2);
  iVar6 = 0;
  if ((((param_2[2] != 0) && (psVar5 = *(short **)(iVar4 * 4 + param_2[2]), psVar5 != (short *)0x0))
      && (*psVar5 != 0)) && (*(int *)(psVar5 + 2) != 0)) {
    iVar6 = *(int *)(*(int *)(psVar5 + 2) + 4);
  }
  if (iVar6 == 0) {
    uVar2 = (ushort)0xFFFFFC00;
    uStack_28 = uVar2 & uStack_28 & 0x3ff | 0x234;
    uStack_26 = uVar2 & uStack_26 & 0x3ff;
    uStack_24 = uVar2 & uStack_24;
    gba_memcpy(auStack_38,&uStack_28,6);
    uStack_32 = 0;
  }
  else {
    uVar3 = (ushort)0xFFFFFC00;
    uVar2 = uVar3 & uStack_30 | *(ushort *)(iVar6 + 10) & 0x3ff;
    uStack_30._1_1_ = (byte)(uVar2 >> 8);
    uStack_30 = CONCAT11(uStack_30._1_1_ & 3 | (byte)((*(ushort *)(iVar6 + 6) & 0x3f) << 2),
                         (char)uVar2);
    uVar2 = uVar3 & uStack_2e | *(ushort *)(iVar6 + 6) >> 6;
    uStack_2e._1_1_ = (byte)(uVar2 >> 8);
    uStack_2e = CONCAT11(uStack_2e._1_1_ & 3 | (byte)((*(ushort *)(iVar6 + 8) & 0x3f) << 2),
                         (char)uVar2);
    uStack_2c = uVar3 & uStack_2c | *(ushort *)(iVar6 + 8) >> 6;
    bVar1 = *(byte *)(iVar6 + 0xb);
    gba_memcpy(auStack_38,&uStack_30,6);
    uStack_32 = (undefined1)((bVar1 & 0xf) >> 2);
  }
  NPC_Routine_0809E368(param_1,auStack_38);
  *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) & 0xe0 | (byte)iVar4 & 0x1f;
  *(ushort *)(param_1 + 0xc) = (ushort)0xFFFFFC1F & *(ushort *)(param_1 + 0xc);
  *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) & 0x83;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xFE007FFF;
  return in_lr;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803DA24 @ 0x0803DA24
// =============================================================================
undefined8 ScriptEngine_Routine_0803DA24(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  undefined1 uStack_10;
  undefined1 uStack_f;
  undefined1 uStack_e;
  char cStack_d;
  
  if ((*(byte *)(param_1 + 0x21CA) & 0xc) == 0) {
    ScriptEngine_Routine_0803D52C(&uStack_10,param_1 + 0x10);
    cVar1 = ScriptEngine_Routine_0803D644(uStack_f,uStack_e);
    if (cVar1 == '\0') {
      if (*(int *)(param_1 + 8) == 0) {
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
  return CONCAT44(in_lr,uVar2);
}

// =============================================================================
// Function: ScriptEngine_Routine_0803DA7C @ 0x0803DA7C
// =============================================================================
undefined8 ScriptEngine_Routine_0803DA7C(int param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 in_lr;
  undefined1 uStack_20;
  char cStack_1f;
  char cStack_1e;
  char cStack_1d;
  
  if (-1 < (int)((uint)*(byte *)(param_1 + 0x21CA) * 0x10000000)) {
    ScriptEngine_Routine_0803D52C(&uStack_20,param_1 + 0x10);
    iVar3 = NPC_Routine_080A0490(param_1 + 0x1CD4);
    if (iVar3 == 3) {
      if ((cStack_1f == '\x02') && (cStack_1e == '\r')) {
        uVar6 = 0x16;
      }
      else if ((*(byte *)(param_1 + 0x216B) & 0x7f) >> 5 == 1) {
        uVar6 = 0x17;
      }
      else {
        cVar2 = *(char *)(param_1 + 0x2148);
        uVar4 = NPC_Routine_080A0384(param_1 + 0x1CD4);
        uVar4 = -uVar4 | uVar4;
        cVar1 = ScriptEngine_Routine_0803D644(cStack_1f,cStack_1e);
        if (((cVar1 == '\0') && (*(int *)(param_1 + 8) != 3)) && (*(int *)(param_1 + 8) != 4)) {
          if ((cVar2 == '\0') || (cStack_1d != '\0')) {
            if ((int)uVar4 < 0) {
              if (cVar2 == '\0') {
                uVar6 = 6;
              }
              else {
                uVar6 = 7;
              }
            }
            else if (cVar2 == '\0') {
              uVar6 = 9;
            }
            else {
              uVar6 = 10;
            }
          }
          else if ((int)uVar4 < 0) {
            uVar6 = 8;
          }
          else {
            uVar6 = 0xb;
          }
        }
        else if ((int)uVar4 < 0) {
          if (cVar2 == '\0') {
            uVar6 = 0xc;
          }
          else {
            uVar6 = 0xd;
          }
        }
        else if (cVar2 == '\0') {
          uVar6 = 0xe;
        }
        else {
          uVar6 = 0xf;
        }
      }
      goto LAB_0803dc54;
    }
    uVar4 = NPC_Routine_0809E4AC(param_1 + 0x1D6C);
    if (uVar4 < 5) {
      if (((cStack_1f == '\x02') && (cStack_1e == '\x1e')) &&
         ((*(byte *)(param_1 + 0x21A3) & 3) != 2)) {
        uVar6 = 0x11;
        goto LAB_0803dc54;
      }
      iVar5 = NPC_Routine_080A01F8(param_1 + 0x1CD4,3);
      if (((((cStack_1f == '\x03') && (cStack_1e == '\x0e')) && (iVar3 == 0)) &&
          ((iVar5 != 0 && (uVar4 = NPC_Routine_0809E498(), 0x270F < uVar4)))) &&
         ((*(byte *)(param_1 + 0x21A3) & 0x3f) >> 4 != 2)) {
        uVar6 = 0x12;
        goto LAB_0803dc54;
      }
      cVar2 = ScriptEngine_Routine_0803D644(cStack_1f,cStack_1e);
      if (cVar2 != '\0') {
        uVar6 = 0x10;
        goto LAB_0803dc54;
      }
      if (-1 < (int)((uint)*(byte *)(param_1 + 0x215A) * 0x10000000)) {
        if (cStack_1d == '\0') {
          if (*(int *)(param_1 + 8) == 0) {
            if (cStack_1f == '\x01') {
              uVar6 = 5;
            }
            else {
              uVar6 = 3;
            }
          }
          else {
            uVar6 = 4;
          }
        }
        else if (*(int *)(param_1 + 8) == 0) {
          uVar6 = 1;
        }
        else {
          uVar6 = 2;
        }
        goto LAB_0803dc54;
      }
    }
    else if (cStack_1f == '\x01') {
      cVar2 = ScriptEngine_Routine_0803D644(1,cStack_1e);
      if (cVar2 == '\0') {
        if (*(int *)(param_1 + 8) == 0) {
          uVar6 = 0x14;
        }
        else {
          uVar6 = 0x15;
        }
      }
      else {
        uVar6 = 0x13;
      }
      goto LAB_0803dc54;
    }
  }
  uVar6 = 0;
LAB_0803dc54:
  return CONCAT44(in_lr,uVar6);
}

// =============================================================================
// Function: ScriptEngine_Routine_0803DC64 @ 0x0803DC64
// =============================================================================
undefined8 ScriptEngine_Routine_0803DC64(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  undefined1 uStack_c;
  undefined1 uStack_b;
  undefined1 uStack_a;
  char cStack_9;
  
  if ((*(byte *)(param_1 + 0x21CA) & 0xc) == 0) {
    ScriptEngine_Routine_0803D52C(&uStack_c,param_1 + 0x10);
    cVar1 = ScriptEngine_Routine_0803D644(uStack_b,uStack_a);
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
  return CONCAT44(in_lr,uVar2);
}

// =============================================================================
// Function: ScriptEngine_Routine_0803DCB4 @ 0x0803DCB4
// =============================================================================
undefined8 ScriptEngine_Routine_0803DCB4(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 in_lr;
  undefined1 uStack_14;
  char cStack_13;
  char cStack_12;
  char cStack_11;
  
  iVar5 = param_1 + 0x1CD4;
  iVar2 = NPC_Routine_080A0384(iVar5);
  if (iVar2 == 0) {
    uVar4 = 0;
    goto LAB_0803dde0;
  }
  uVar3 = NPC_Routine_0809EAD8();
  if (0x3b < uVar3) {
    uVar4 = 4;
    goto LAB_0803dde0;
  }
  iVar2 = NPC_Routine_080A0490(iVar5);
  if (iVar2 == 0x1f) {
    uVar4 = 3;
    goto LAB_0803dde0;
  }
  ScriptEngine_Routine_0803D52C(&uStack_14,param_1 + 0x10);
  if ((cStack_13 == '\x02') && (cStack_12 == '\r')) {
    uVar4 = 5;
    goto LAB_0803dde0;
  }
  cVar1 = ScriptEngine_Routine_0803D644();
  if (((cVar1 != '\0') || (*(int *)(param_1 + 8) == 3)) || (*(int *)(param_1 + 8) == 4))
  goto LAB_0803ddb0;
  cVar1 = *(char *)(param_1 + 0x2148);
  if (0x1c < iVar2 - 3U) goto case_0803DDD6;
  switch(*(uint *)((iVar2 - 3U) * 4 + gInlineTable_0803DD38) & 0xfffffffe) {
  case 0x803ddac:
    if (cStack_11 != '\x01') goto case_0803DDD6;
    goto LAB_0803ddb0;
  case 0x803ddb4:
    if (cVar1 == '\0') goto LAB_0803ddb0;
    break;
  case 0x803ddbe:
    if ((cVar1 == '\0') || (cStack_11 == '\x02')) goto LAB_0803ddb0;
    break;
  case 0x803ddcc:
    if (cStack_11 == '\x03') goto LAB_0803ddb0;
    goto case_0803DDD6;
  case 0x803ddd2:
    cStack_11 = cVar1;
    break;
  case 0x803ddd6:
    goto case_0803DDD6;
  }
  if (cStack_11 == '\0') {
LAB_0803ddb0:
    uVar4 = 2;
  }
  else {
case_0803DDD6:
    uVar4 = 1;
  }
LAB_0803dde0:
  return CONCAT44(in_lr,uVar4);
}

// =============================================================================
// Function: ScriptEngine_Routine_0803DDE8 @ 0x0803DDE8
// =============================================================================
undefined8 ScriptEngine_Routine_0803DDE8(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  byte bStack_1c;
  char cStack_1b;
  byte bStack_1a;
  char cStack_19;
  
  if (-1 < (int)((uint)*(byte *)(param_1 + 0x21CA) * 0x2000000)) {
    ScriptEngine_Routine_0803D52C(&bStack_1c,param_1 + 0x10);
    if (((*(byte *)(param_1 + 0x2181) & 0x3f) >> 4 != 2) &&
       (((int)((uint)*(byte *)(param_1 + 0x2181 + -0xc) * 0x8000000) < 0 ||
        ((bStack_1c < 2 && (((bStack_1c != 1 || (cStack_1b != '\x03')) || (bStack_1a < 0x1d))))))))
    {
      if ((*(byte *)(param_1 + 0x2181) & 3) == 1) {
        uVar2 = 5;
      }
      else {
        cVar1 = ScriptEngine_Routine_0803D644(cStack_1b,bStack_1a);
        if (cVar1 == '\0') {
          if (((bStack_1c != 1) || (cStack_1b != '\x02')) ||
             ((bStack_1a != 0xf ||
              (-1 < (int)((uint)*(byte *)(param_1 + 0x2175) * 0x8000000))))) {
            if ((*(uint *)(param_1 + 0x2174) & 0x61000) != 0x41000) {
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
  return CONCAT44(in_lr,uVar2);
}

// =============================================================================
// Function: ScriptEngine_Routine_0803DECC @ 0x0803DECC
// =============================================================================
undefined8 ScriptEngine_Routine_0803DECC(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  undefined1 uStack_c;
  undefined1 uStack_b;
  undefined1 uStack_a;
  
  ScriptEngine_Routine_0803D52C(&uStack_c,param_1 + 0x10);
  cVar1 = ScriptEngine_Routine_0803D644(uStack_b,uStack_a);
  if (cVar1 == '\0') {
    uVar2 = 1;
  }
  else {
    uVar2 = 2;
  }
  return CONCAT44(in_lr,uVar2);
}

// =============================================================================
// Function: ScriptEngine_Routine_0803DEF8 @ 0x0803DEF8
// =============================================================================
undefined8 ScriptEngine_Routine_0803DEF8(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  undefined1 uStack_10;
  undefined1 uStack_f;
  undefined1 uStack_e;
  char cStack_d;
  
  if ((int)((uint)*(byte *)(param_1 + 0x21CA) * 0x4000000) < 0) {
    uVar2 = 0;
  }
  else {
    ScriptEngine_Routine_0803D52C(&uStack_10,param_1 + 0x10);
    cVar1 = ScriptEngine_Routine_0803D644(uStack_f,uStack_e);
    if (cVar1 == '\0') {
      if (cStack_d == '\x03') {
        if (*(int *)(param_1 + 8) == 0) {
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
  return CONCAT44(in_lr,uVar2);
}

// =============================================================================
// Function: ScriptEngine_Routine_0803DF50 @ 0x0803DF50
// =============================================================================
undefined8 ScriptEngine_Routine_0803DF50(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  undefined1 uStack_c;
  undefined1 uStack_b;
  undefined1 uStack_a;
  
  if ((int)((uint)*(byte *)(param_1 + 0x21CA) * 0x4000000) < 0) {
    uVar2 = 0;
  }
  else {
    ScriptEngine_Routine_0803D52C(&uStack_c,param_1 + 0x10);
    cVar1 = ScriptEngine_Routine_0803D644(uStack_b,uStack_a);
    if (cVar1 == '\0') {
      uVar2 = 1;
    }
    else {
      uVar2 = 2;
    }
  }
  return CONCAT44(in_lr,uVar2);
}

// =============================================================================
// Function: ScriptEngine_Routine_0803DF94 @ 0x0803DF94
// =============================================================================
undefined8 ScriptEngine_Routine_0803DF94(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  undefined1 uStack_c;
  undefined1 uStack_b;
  undefined1 uStack_a;
  char cStack_9;
  
  if ((int)((uint)*(byte *)(param_1 + 0x21CA) * 0x20000000) < 0) {
    uVar2 = 0;
  }
  else {
    ScriptEngine_Routine_0803D52C(&uStack_c,param_1 + 0x10);
    cVar1 = ScriptEngine_Routine_0803D644(uStack_b,uStack_a);
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
  return CONCAT44(in_lr,uVar2);
}

// =============================================================================
// Function: ScriptEngine_Routine_0803DFE8 @ 0x0803DFE8
// =============================================================================
undefined8 ScriptEngine_Routine_0803DFE8(int param_1)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 in_lr;
  undefined1 uStack_20;
  char cStack_1f;
  char cStack_1e;
  char cStack_1d;
  
  if ((*(byte *)(param_1 + 0x21CA) & 0xc) == 0) {
    ScriptEngine_Routine_0803D52C(&uStack_20,param_1 + 0x10);
    iVar6 = param_1 + 0x1CD4;
    iVar4 = NPC_Routine_080A0490(iVar6);
    if (iVar4 == 0x13) {
      if (cStack_1f == '\x02') {
        if (cStack_1e == '\t') {
          uVar3 = 0x15;
          goto LAB_0803e194;
        }
        if (cStack_1e == '\r') {
          uVar3 = 0x16;
          goto LAB_0803e194;
        }
      }
      if ((*(byte *)(param_1 + 0x216C) & 0x1f) >> 3 == 1) {
        uVar3 = 0x17;
      }
      else {
        cVar2 = *(char *)(param_1 + 0x2148);
        uVar5 = NPC_Routine_080A0384(param_1 + 0x1CD4);
        uVar5 = -uVar5 | uVar5;
        cVar1 = ScriptEngine_Routine_0803D644(cStack_1f,cStack_1e);
        if (((cVar1 == '\0') && (*(int *)(param_1 + 8) != 3)) && (*(int *)(param_1 + 8) != 4)) {
          if ((cVar2 == '\0') || ((cStack_1d != '\0' && (cStack_1d != '\x02')))) {
            if ((int)uVar5 < 0) {
              if (cVar2 == '\0') {
                uVar3 = 0xb;
              }
              else {
                uVar3 = 0xc;
              }
            }
            else if (cVar2 == '\0') {
              uVar3 = 0xe;
            }
            else {
              uVar3 = 0xf;
            }
          }
          else if ((int)uVar5 < 0) {
            uVar3 = 0xd;
          }
          else {
            uVar3 = 0x10;
          }
        }
        else if ((int)uVar5 < 0) {
          if (cVar2 == '\0') {
            uVar3 = 0x11;
          }
          else {
            uVar3 = 0x12;
          }
        }
        else if (cVar2 == '\0') {
          uVar3 = 0x13;
        }
        else {
          uVar3 = 0x14;
        }
      }
    }
    else {
      uVar5 = NPC_Routine_0809E4AC(param_1 + 0x1EB8);
      if (uVar5 < 5) {
        iVar6 = NPC_Routine_080A01F8(iVar6,0x13);
        if (((((cStack_1f == '\x03') && (cStack_1e == '\x0e')) && (iVar4 == 0)) &&
            ((iVar6 != 0 && (uVar5 = NPC_Routine_0809E498(), 0x270F < uVar5)))) &&
           ((*(byte *)(param_1 + 0x21A4) & 0x7f) >> 5 != 2)) {
          uVar3 = 9;
        }
        else {
          cVar2 = ScriptEngine_Routine_0803D644(cStack_1f,cStack_1e);
          if (cVar2 == '\0') {
            if (cStack_1d == '\0') {
              uVar3 = 3;
            }
            else if (cStack_1d == '\x02') {
              if (*(int *)(param_1 + 8) == 0) {
                uVar3 = 4;
              }
              else {
                uVar3 = 5;
              }
            }
            else if (*(int *)(param_1 + 8) == 0) {
              uVar3 = 1;
            }
            else {
              uVar3 = 2;
            }
          }
          else {
            uVar3 = 8;
          }
        }
      }
      else {
        cVar2 = ScriptEngine_Routine_0803D644(cStack_1f,cStack_1e);
        if (cVar2 == '\0') {
          if (cStack_1d == '\0') {
            uVar3 = 7;
          }
          else {
            uVar3 = 6;
          }
        }
        else {
          uVar3 = 10;
        }
      }
    }
  }
  else {
    uVar3 = 0;
  }
LAB_0803e194:
  return CONCAT44(in_lr,uVar3);
}

// =============================================================================
// Function: ScriptEngine_Routine_0803E1A4 @ 0x0803E1A4
// =============================================================================
undefined8 ScriptEngine_Routine_0803E1A4(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  undefined1 uStack_10;
  undefined1 uStack_f;
  undefined1 uStack_e;
  char cStack_d;
  
  if ((int)((uint)*(byte *)(param_1 + 0x21CA) * 0x20000000) < 0) {
    uVar2 = 0;
  }
  else {
    ScriptEngine_Routine_0803D52C(&uStack_10,param_1 + 0x10);
    cVar1 = ScriptEngine_Routine_0803D644(uStack_f,uStack_e);
    if (cVar1 == '\0') {
      if (*(int *)(param_1 + 8) == 0) {
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
  return CONCAT44(in_lr,uVar2);
}

// =============================================================================
// Function: ScriptEngine_Routine_0803E1FC @ 0x0803E1FC
// =============================================================================
undefined8 ScriptEngine_Routine_0803E1FC(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  undefined1 uStack_14;
  char cStack_13;
  char cStack_12;
  
  if ((int)((uint)*(byte *)(param_1 + 0x21CA) * 0x2000000) < 0) {
    uVar2 = 0;
  }
  else {
    ScriptEngine_Routine_0803D52C(&uStack_14,param_1 + 0x10);
    cVar1 = ScriptEngine_Routine_0803D644(cStack_13,cStack_12);
    if (cVar1 == '\0') {
      iVar3 = NPC_Routine_080A0490(param_1 + 0x1CD4);
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
  return CONCAT44(in_lr,uVar2);
}

// =============================================================================
// Function: ScriptEngine_Routine_0803E264 @ 0x0803E264
// =============================================================================
undefined8 ScriptEngine_Routine_0803E264(int param_1)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 in_lr;
  undefined1 uStack_20;
  char cStack_1f;
  char cStack_1e;
  
  if ((int)((uint)*(byte *)(param_1 + 0x21CA) * 0x2000000) < 0) {
    uVar3 = 0;
    goto LAB_0803e3fe;
  }
  ScriptEngine_Routine_0803D52C(&uStack_20,param_1 + 0x10);
  iVar4 = NPC_Routine_080A0490(param_1 + 0x1CD4);
  if ((cStack_1f == '\x02') && (cStack_1e == '\x05')) {
    if (iVar4 != 0x19) {
      uVar3 = 5;
      goto LAB_0803e3fe;
    }
  }
  else if (iVar4 != 0x19) {
    uVar5 = NPC_Routine_0809E4AC(param_1 + 0x1F38);
    if (uVar5 < 5) {
      iVar6 = NPC_Routine_080A01F8(param_1 + 0x1CD4,0x19);
      if (((((cStack_1f == '\x03') && (cStack_1e == '\x0e')) && (iVar4 == 0)) &&
          ((iVar6 != 0 && (uVar5 = NPC_Routine_0809E498(), 0x270F < uVar5)))) &&
         ((byte)((*(byte *)(param_1 + 0x21A3 + 1) & 1) << 1 |
                *(byte *)(param_1 + 0x21A3) >> 7) != 2)) {
        uVar3 = 7;
        goto LAB_0803e3fe;
      }
      cVar2 = ScriptEngine_Routine_0803D644(cStack_1f,cStack_1e);
      if (cVar2 == '\0') {
        if (*(int *)(param_1 + 8) == 0) {
          uVar3 = 1;
        }
        else {
          uVar3 = 2;
        }
        goto LAB_0803e3fe;
      }
    }
    else {
      cVar2 = ScriptEngine_Routine_0803D644(cStack_1f,cStack_1e);
      if (cVar2 == '\0') {
        if (*(int *)(param_1 + 8) == 0) {
          uVar3 = 3;
        }
        else {
          uVar3 = 4;
        }
        goto LAB_0803e3fe;
      }
    }
    uVar3 = 6;
    goto LAB_0803e3fe;
  }
  if (cStack_1f == '\x02') {
    if (cStack_1e == '\t') {
      uVar3 = 0x10;
      goto LAB_0803e3fe;
    }
    if (cStack_1e == '\r') {
      uVar3 = 0x11;
      goto LAB_0803e3fe;
    }
  }
  if ((byte)((*(byte *)(param_1 + 0x216B + 1) & 1) << 1 |
            *(byte *)(param_1 + 0x216B) >> 7) == 1) {
    uVar3 = 0x12;
  }
  else {
    cVar2 = *(char *)(param_1 + 0x2148);
    uVar5 = NPC_Routine_080A0384(param_1 + 0x1CD4);
    cVar1 = ScriptEngine_Routine_0803D644(cStack_1f,cStack_1e);
    if (((cVar1 == '\0') && (*(int *)(param_1 + 8) != 3)) && (*(int *)(param_1 + 8) != 4)) {
      if ((int)(-uVar5 | uVar5) < 0) {
        if (cVar2 == '\0') {
          uVar3 = 8;
        }
        else {
          uVar3 = 9;
        }
      }
      else if (cVar2 == '\0') {
        uVar3 = 10;
      }
      else {
        uVar3 = 0xb;
      }
    }
    else if ((int)(-uVar5 | uVar5) < 0) {
      if (cVar2 == '\0') {
        uVar3 = 0xc;
      }
      else {
        uVar3 = 0xd;
      }
    }
    else if (cVar2 == '\0') {
      uVar3 = 0xe;
    }
    else {
      uVar3 = 0xf;
    }
  }
LAB_0803e3fe:
  return CONCAT44(in_lr,uVar3);
}

// =============================================================================
// Function: ScriptEngine_Routine_0803E40C @ 0x0803E40C
// =============================================================================
undefined8 ScriptEngine_Routine_0803E40C(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  undefined1 auStack_10 [3];
  char cStack_d;
  
  ScriptEngine_Routine_0803D52C(auStack_10,param_1 + 0x10);
  if (((*(byte *)(param_1 + 0x2187) & 0x1f) >> 3 == 2) && (cStack_d == '\0')) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

// =============================================================================
// Function: ScriptEngine_Routine_0803E448 @ 0x0803E448
// =============================================================================
undefined8 ScriptEngine_Routine_0803E448(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  undefined1 uStack_10;
  undefined1 uStack_f;
  undefined1 uStack_e;
  char cStack_d;
  
  if ((int)((uint)*(byte *)(param_1 + 0x21CA) * 0x8000000) < 0) {
    uVar2 = 0;
  }
  else {
    ScriptEngine_Routine_0803D52C(&uStack_10,param_1 + 0x10);
    cVar1 = ScriptEngine_Routine_0803D644(uStack_f,uStack_e);
    if (cVar1 == '\0') {
      if (cStack_d == '\x01') {
        if (*(int *)(param_1 + 8) == 0) {
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
  return CONCAT44(in_lr,uVar2);
}

// =============================================================================
// Function: ScriptEngine_Routine_0803E4A0 @ 0x0803E4A0
// =============================================================================
undefined8 ScriptEngine_Routine_0803E4A0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  undefined1 uStack_20;
  char cStack_1f;
  char cStack_1e;
  char cStack_1d;
  
  if ((int)((uint)*(byte *)(param_1 + 0x21CA) * 0x8000000) < 0) {
    uVar2 = 0;
  }
  else {
    ScriptEngine_Routine_0803D52C(&uStack_20,param_1 + 0x10);
    iVar5 = param_1 + 0x1CD4;
    iVar3 = NPC_Routine_080A0490(iVar5);
    if (iVar3 == 0xc) {
      if (cStack_1f == '\x02') {
        if (cStack_1e == '\t') {
          uVar2 = 0x10;
          goto LAB_0803e610;
        }
        if (cStack_1e == '\r') {
          uVar2 = 0x11;
          goto LAB_0803e610;
        }
      }
      if ((*(byte *)(param_1 + 0x216C) & 0x7f) >> 5 == 1) {
        uVar2 = 0x12;
      }
      else {
        uVar4 = NPC_Routine_080A0384(param_1 + 0x1CD4);
        uVar4 = -uVar4 | uVar4;
        cVar1 = ScriptEngine_Routine_0803D644(cStack_1f,cStack_1e);
        if (((cVar1 == '\0') && (*(int *)(param_1 + 8) != 3)) && (*(int *)(param_1 + 8) != 4)) {
          if (cStack_1d == '\x01') {
            if ((int)uVar4 < 0) {
              uVar2 = 0xb;
            }
            else {
              uVar2 = 0xd;
            }
          }
          else if ((int)uVar4 < 0) {
            uVar2 = 10;
          }
          else {
            uVar2 = 0xc;
          }
        }
        else if ((int)uVar4 < 0) {
          uVar2 = 0xe;
        }
        else {
          uVar2 = 0xf;
        }
      }
    }
    else {
      uVar4 = NPC_Routine_0809E4AC(param_1 + 0x1E28);
      if (uVar4 < 5) {
        iVar5 = NPC_Routine_080A01F8(iVar5,0xc);
        if (((((cStack_1f == '\x03') && (cStack_1e == '\x0e')) && (iVar3 == 0)) &&
            ((iVar5 != 0 && (uVar4 = NPC_Routine_0809E498(), 0x270F < uVar4)))) &&
           ((*(byte *)(param_1 + 0x21A5) & 3) != 2)) {
          uVar2 = 7;
        }
        else {
          cVar1 = ScriptEngine_Routine_0803D644(cStack_1f,cStack_1e);
          if (cVar1 == '\0') {
            if (cStack_1d == '\x01') {
              if (*(int *)(param_1 + 8) == 0) {
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
            uVar2 = 8;
          }
        }
      }
      else {
        cVar1 = ScriptEngine_Routine_0803D644(cStack_1f,cStack_1e);
        if (cVar1 == '\0') {
          if (cStack_1d == '\x04') {
            if (*(int *)(param_1 + 8) == 0) {
              uVar2 = 5;
            }
            else {
              uVar2 = 6;
            }
          }
          else {
            uVar2 = 4;
          }
        }
        else {
          uVar2 = 9;
        }
      }
    }
  }
LAB_0803e610:
  return CONCAT44(in_lr,uVar2);
}

// =============================================================================
// Function: ScriptEngine_Routine_0803E620 @ 0x0803E620
// =============================================================================
undefined8 ScriptEngine_Routine_0803E620(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  undefined1 uStack_10;
  undefined1 uStack_f;
  undefined1 uStack_e;
  char cStack_d;
  
  if ((int)((uint)*(byte *)(param_1 + 0x21CA) * 0x8000000) < 0) {
    uVar2 = 0;
  }
  else {
    ScriptEngine_Routine_0803D52C(&uStack_10,param_1 + 0x10);
    cVar1 = ScriptEngine_Routine_0803D644(uStack_f,uStack_e);
    if (cVar1 == '\0') {
      if (cStack_d == '\x01') {
        if (*(int *)(param_1 + 8) == 0) {
          uVar2 = 3;
        }
        else {
          uVar2 = 4;
        }
      }
      else if (*(int *)(param_1 + 8) == 0) {
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
  return CONCAT44(in_lr,uVar2);
}

// =============================================================================
// Function: ScriptEngine_Routine_0803E684 @ 0x0803E684
// =============================================================================
undefined8 ScriptEngine_Routine_0803E684(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint *puVar3;
  undefined4 in_lr;
  undefined1 uStack_1c;
  char cStack_1b;
  byte bStack_1a;
  uint uStack_18;
  uint uStack_14;
  
  ScriptEngine_Routine_0803D52C(&uStack_1c,param_1 + 0x10);
  cVar1 = ScriptEngine_Routine_0803D644(cStack_1b,bStack_1a);
  if (cVar1 == '\0') {
    uStack_18 = 200;
    uStack_14 = (uint)(*(byte *)(param_1 + 0x10) >> 3) * 7 + (*(byte *)(param_1 + 0x10) & 7);
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
  return CONCAT44(in_lr,uVar2);
}

// =============================================================================
// Function: ScriptEngine_Routine_0803E6EC @ 0x0803E6EC
// =============================================================================
undefined8 ScriptEngine_Routine_0803E6EC(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  undefined1 uStack_10;
  char cStack_f;
  char cStack_e;
  char cStack_d;
  
  ScriptEngine_Routine_0803D52C(&uStack_10,param_1 + 0x10);
  if (((cStack_f == '\x03') && (cStack_e == '\x02')) &&
     ((*(uint *)(param_1 + 0x2178) & 0x43000) == 0x2000)) {
    if ((*(byte *)(param_1 + 0x217A) & 0x1f) >> 3 == 2) {
      uVar2 = 0;
    }
    else {
      uVar2 = 7;
    }
  }
  else {
    cVar1 = ScriptEngine_Routine_0803D644(cStack_f,cStack_e);
    if (cVar1 == '\0') {
      if (cStack_d == '\x06') {
        if (*(int *)(param_1 + 8) == 0) {
          uVar2 = 2;
        }
        else {
          uVar2 = 3;
        }
      }
      else if (cStack_d == '\0') {
        if (*(int *)(param_1 + 8) == 0) {
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
  return CONCAT44(in_lr,uVar2);
}

// =============================================================================
// Function: ScriptEngine_Routine_0803E780 @ 0x0803E780
// =============================================================================
undefined8 ScriptEngine_Routine_0803E780(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  undefined1 uStack_20;
  char cStack_1f;
  char cStack_1e;
  char cStack_1d;
  
  if ((int)((uint)*(byte *)(param_1 + 0x21CA) * 0x4000000) < 0) {
    uVar2 = 0;
  }
  else {
    ScriptEngine_Routine_0803D52C(&uStack_20,param_1 + 0x10);
    iVar5 = param_1 + 0x1CD4;
    iVar3 = NPC_Routine_080A0490(iVar5);
    if (iVar3 == 0x15) {
      if (cStack_1f == '\x02') {
        if (cStack_1e == '\t') {
          uVar2 = 0xe;
          goto LAB_0803e8da;
        }
        if (cStack_1e == '\r') {
          uVar2 = 0xf;
          goto LAB_0803e8da;
        }
      }
      if ((*(byte *)(param_1 + 0x216C) & 7) >> 1 == 1) {
        uVar2 = 0x10;
      }
      else {
        uVar4 = NPC_Routine_080A0384(param_1 + 0x1CD4);
        uVar4 = -uVar4 | uVar4;
        cVar1 = ScriptEngine_Routine_0803D644(cStack_1f,cStack_1e);
        if (((cVar1 == '\0') && (*(int *)(param_1 + 8) != 3)) && (*(int *)(param_1 + 8) != 4)) {
          if (cStack_1d == '\x03') {
            if ((int)uVar4 < 0) {
              uVar2 = 9;
            }
            else {
              uVar2 = 0xb;
            }
          }
          else if ((int)uVar4 < 0) {
            uVar2 = 8;
          }
          else {
            uVar2 = 10;
          }
        }
        else if ((int)uVar4 < 0) {
          uVar2 = 0xc;
        }
        else {
          uVar2 = 0xd;
        }
      }
    }
    else {
      uVar4 = NPC_Routine_0809E4AC(param_1 + 0x1EE4);
      if (uVar4 < 5) {
        iVar5 = NPC_Routine_080A01F8(iVar5,0x15);
        if (((((cStack_1f == '\x03') && (cStack_1e == '\x0e')) && (iVar3 == 0)) &&
            ((iVar5 != 0 && (uVar4 = NPC_Routine_0809E498(), 0x270F < uVar4)))) &&
           ((*(byte *)(param_1 + 0x21A4) & 0xf) >> 2 != 2)) {
          uVar2 = 6;
        }
        else {
          cVar1 = ScriptEngine_Routine_0803D644(cStack_1f,cStack_1e);
          if (cVar1 == '\0') {
            if (cStack_1d == '\x03') {
              uVar2 = 2;
            }
            else {
              uVar2 = 1;
            }
          }
          else {
            uVar2 = 5;
          }
        }
      }
      else {
        cVar1 = ScriptEngine_Routine_0803D644(cStack_1f,cStack_1e);
        if (cVar1 == '\0') {
          if (cStack_1d == '\x03') {
            uVar2 = 4;
          }
          else {
            uVar2 = 3;
          }
        }
        else {
          uVar2 = 7;
        }
      }
    }
  }
LAB_0803e8da:
  return CONCAT44(in_lr,uVar2);
}

// =============================================================================
// Function: ScriptEngine_Routine_0803E8E8 @ 0x0803E8E8
// =============================================================================
undefined8 ScriptEngine_Routine_0803E8E8(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  undefined1 uStack_10;
  char cStack_f;
  char cStack_e;
  char cStack_d;
  
  if (-1 < (int)((uint)*(byte *)(param_1 + 0x21CA) * 0x4000000)) {
    ScriptEngine_Routine_0803D52C(&uStack_10,param_1 + 0x10);
    if (((cStack_f == '\x02') && (cStack_e == '\x1e')) &&
       (*(byte *)(param_1 + 0x21A2) >> 6 != 2)) {
      uVar2 = 5;
      goto LAB_0803e968;
    }
    cVar1 = ScriptEngine_Routine_0803D644(cStack_f);
    if (cVar1 != '\0') {
      uVar2 = 4;
      goto LAB_0803e968;
    }
    if (-1 < (int)((uint)*(byte *)(param_1 + 0x215A) * 0x10000000)) {
      if ((cStack_d == '\x01') || (cStack_d == '\x03')) {
        uVar2 = 3;
      }
      else if (*(int *)(param_1 + 8) == 0) {
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
  return CONCAT44(in_lr,uVar2);
}

// =============================================================================
// Function: ScriptEngine_Routine_0803E970 @ 0x0803E970
// =============================================================================
undefined8 ScriptEngine_Routine_0803E970(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  undefined1 uStack_14;
  undefined1 uStack_13;
  undefined1 uStack_12;
  char cStack_11;
  
  ScriptEngine_Routine_0803D52C(&uStack_14,param_1 + 0x10);
  cVar1 = ScriptEngine_Routine_0803D644(uStack_13,uStack_12);
  if (cVar1 == '\0') {
    if ((int)((uint)*(byte *)(param_1 + 0x21CA) * 0x2000000) < 0) {
      uVar2 = 0;
    }
    else if ((*(uint *)(param_1 + 0x2174) & 0x61000) == 0x41000) {
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
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 5;
  }
  return CONCAT44(in_lr,uVar2);
}

// =============================================================================
// Function: ScriptEngine_Routine_0803E9E4 @ 0x0803E9E4
// =============================================================================
undefined8 ScriptEngine_Routine_0803E9E4(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  undefined1 uStack_10;
  undefined1 uStack_f;
  undefined1 uStack_e;
  char cStack_d;
  
  ScriptEngine_Routine_0803D52C(&uStack_10,param_1 + 0x10);
  cVar1 = ScriptEngine_Routine_0803D644(uStack_f,uStack_e);
  if (cVar1 == '\0') {
    if ((int)((uint)*(byte *)(param_1 + 0x21CA) * 0x2000000) < 0) {
      uVar2 = 0;
    }
    else if (*(int *)(param_1 + 8) == 0) {
      if (cStack_d == '\x06') {
        if ((*(uint *)(param_1 + 0x2174) & 0x61000) == 0x41000) {
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
  return CONCAT44(in_lr,uVar2);
}

// =============================================================================
// Function: ScriptEngine_Routine_0803EA5C @ 0x0803EA5C
// =============================================================================
undefined8 ScriptEngine_Routine_0803EA5C(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  undefined1 auStack_10 [3];
  char cStack_d;
  
  ScriptEngine_Routine_0803D52C(auStack_10,param_1 + 0x10);
  if (((*(byte *)(param_1 + 0x2186) & 0x7f) >> 5 == 2) && (cStack_d == '\x03')) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

// =============================================================================
// Function: ScriptEngine_Routine_0803EA98 @ 0x0803EA98
// =============================================================================
undefined8 ScriptEngine_Routine_0803EA98(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  undefined1 uStack_c;
  undefined1 uStack_b;
  undefined1 uStack_a;
  
  if ((int)((uint)*(byte *)(param_1 + 0x21CA) * 0x4000000) < 0) {
    uVar2 = 0;
  }
  else {
    ScriptEngine_Routine_0803D52C(&uStack_c,param_1 + 0x10);
    cVar1 = ScriptEngine_Routine_0803D644(uStack_b,uStack_a);
    if (cVar1 == '\0') {
      uVar2 = 1;
    }
    else {
      uVar2 = 2;
    }
  }
  return CONCAT44(in_lr,uVar2);
}

// =============================================================================
// Function: ScriptEngine_Routine_0803EADC @ 0x0803EADC
// =============================================================================
undefined8 ScriptEngine_Routine_0803EADC(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  undefined1 uStack_10;
  char cStack_f;
  char cStack_e;
  char cStack_d;
  
  if ((*(byte *)(param_1 + 0x21CA) & 0x7c) == 0) {
    ScriptEngine_Routine_0803D52C(&uStack_10,param_1 + 0x10);
    if ((cStack_f == '\x02') && (cStack_e == '\x03')) {
      uVar2 = 9;
    }
    else {
      cVar1 = ScriptEngine_Routine_0803D644();
      if (cVar1 == '\0') {
        if (((cStack_d == '\x01') || (cStack_d == '\x03')) || (*(int *)(param_1 + 8) != 0)) {
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
  return CONCAT44(in_lr,uVar2);
}

// =============================================================================
// Function: ScriptEngine_Routine_0803EB40 @ 0x0803EB40
// =============================================================================
undefined8 ScriptEngine_Routine_0803EB40(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  undefined1 uStack_10;
  char cStack_f;
  undefined1 uStack_e;
  char cStack_d;
  
  if (-1 < (int)((uint)*(byte *)(param_1 + 0x21CA) * 0x10000000)) {
    ScriptEngine_Routine_0803D52C(&uStack_10,param_1 + 0x10);
    if (cStack_f == '\x01') {
      cVar1 = ScriptEngine_Routine_0803D644(1,uStack_e);
      if (cVar1 == '\0') {
        if (cStack_d == '\0') {
          if (*(int *)(param_1 + 8) == 0) {
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
  return CONCAT44(in_lr,uVar2);
}

// =============================================================================
// Function: ScriptEngine_Routine_0803EB9C @ 0x0803EB9C
// =============================================================================
undefined8 ScriptEngine_Routine_0803EB9C(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 in_lr;
  undefined1 uStack_1c;
  undefined1 uStack_1b;
  undefined1 uStack_1a;
  char cStack_19;
  
  if ((int)((uint)*(byte *)(param_1 + 0x21CA) * 0x8000000) < 0) {
    uVar2 = 0;
  }
  else {
    ScriptEngine_Routine_0803D52C(&uStack_1c,param_1 + 0x10);
    uVar3 = NPC_Routine_0809E4AC(param_1 + 0x1E28);
    if (uVar3 < 5) {
      cVar1 = ScriptEngine_Routine_0803D644(uStack_1b,uStack_1a);
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
      cVar1 = ScriptEngine_Routine_0803D644(uStack_1b,uStack_1a);
      if (cVar1 == '\0') {
        if (cStack_19 == '\x04') {
          if (*(int *)(param_1 + 8) == 0) {
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
  return CONCAT44(in_lr,uVar2);
}

// =============================================================================
// Function: ScriptEngine_Routine_0803EC44 @ 0x0803EC44
// =============================================================================
undefined8 ScriptEngine_Routine_0803EC44(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  undefined1 uStack_14;
  undefined1 uStack_13;
  undefined1 uStack_12;
  char cStack_11;
  
  if ((int)((uint)*(byte *)(param_1 + 0x21CA) * 0x8000000) < 0) {
    uVar2 = 0;
  }
  else {
    ScriptEngine_Routine_0803D52C(&uStack_14,param_1 + 0x10);
    cVar1 = ScriptEngine_Routine_0803D644(uStack_13,uStack_12);
    if (cVar1 == '\0') {
      iVar4 = param_1 + 0x1DAC;
      iVar3 = NPC_Routine_0809ECD8(iVar4);
      if ((iVar3 == 0) || (cVar1 = NPC_Routine_0809ECE0(iVar4), cVar1 != '\0')) {
        if (cStack_11 == '\x04') {
          if (*(int *)(param_1 + 8) == 0) {
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
  return CONCAT44(in_lr,uVar2);
}

// =============================================================================
// Function: ScriptEngine_Routine_0803ECC0 @ 0x0803ECC0
// =============================================================================
undefined8 ScriptEngine_Routine_0803ECC0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  undefined1 uStack_18;
  undefined1 uStack_17;
  undefined1 uStack_16;
  byte bStack_15;
  
  ScriptEngine_Routine_0803D52C(&uStack_18,param_1 + 0x10);
  cVar1 = ScriptEngine_Routine_0803D644(uStack_17,uStack_16);
  if (cVar1 != '\0') {
    uVar2 = 5;
    goto LAB_0803edc4;
  }
  iVar6 = *(int *)(param_1 + 8);
  iVar5 = param_1 + 0x1F64;
  iVar3 = NPC_Routine_0809EB68(iVar5);
  if ((((iVar3 == 0) || (cVar1 = NPC_Routine_0809EB70(iVar5), cVar1 != '\0')) ||
      (cVar1 = NPC_Routine_0809EB8C(iVar5), cVar1 != '\0')) ||
     ((iVar6 - 3U < 2 || (uVar4 = NPC_Routine_0809EB68(iVar5), 0xd < uVar4)))) goto case_0803EDA4;
  switch(*(uint *)(uVar4 * 4 + gInlineTable_0803ED30) & 0xfffffffe) {
  case 0x803ed68:
    iVar3 = Building_Routine_0800BF14(param_1 + 500);
    if (iVar3 == 1) {
      uVar2 = 7;
      break;
    }
    if (iVar3 == 0) {
      uVar2 = 6;
      break;
    }
    if (iVar3 == 2) {
      uVar2 = 0xd;
      break;
    }
  case 0x803eda4:
case_0803EDA4:
    if (bStack_15 < 6) {
      if (3 < bStack_15) {
        uVar2 = 2;
        break;
      }
      if (bStack_15 == 0) {
        uVar2 = 4;
        break;
      }
    }
    else if (bStack_15 == 6) {
      uVar2 = 3;
      break;
    }
    uVar2 = 1;
    break;
  case 0x803ed8c:
    uVar2 = 8;
    break;
  case 0x803ed90:
    uVar2 = 9;
    break;
  case 0x803ed94:
    uVar2 = 0xe;
    break;
  case 0x803ed98:
    uVar2 = 10;
    break;
  case 0x803ed9c:
    uVar2 = 0xb;
    break;
  case 0x803eda0:
    uVar2 = 0xc;
  }
LAB_0803edc4:
  return CONCAT44(in_lr,uVar2);
}

// =============================================================================
// Function: ScriptEngine_Routine_0803EDCC @ 0x0803EDCC
// =============================================================================
undefined8 ScriptEngine_Routine_0803EDCC(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  undefined1 uStack_18;
  char cStack_17;
  char cStack_16;
  char cStack_15;
  
  ScriptEngine_Routine_0803D52C(&uStack_18,param_1 + 0x10);
  cVar1 = ScriptEngine_Routine_0803D644(cStack_17,cStack_16);
  if (cVar1 == '\0') {
    if (((cStack_17 == '\x02') && (cStack_16 == '\x1e')) &&
       ((*(byte *)(param_1 + 0x21A2) & 0x3f) >> 4 != 2)) {
      uVar2 = 6;
    }
    else if ((int)((uint)*(byte *)(param_1 + 0x215A) * 0x10000000) < 0) {
      uVar2 = 0;
    }
    else if (*(int *)(param_1 + 8) == 0) {
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
  return CONCAT44(in_lr,uVar2);
}

// =============================================================================
// Function: ScriptEngine_Routine_0803EE50 @ 0x0803EE50
// =============================================================================
undefined8 ScriptEngine_Routine_0803EE50(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  undefined1 uStack_10;
  undefined1 uStack_f;
  undefined1 uStack_e;
  char cStack_d;
  
  ScriptEngine_Routine_0803D52C(&uStack_10,param_1 + 0x10);
  cVar1 = ScriptEngine_Routine_0803D644(uStack_f,uStack_e);
  if (cVar1 == '\0') {
    if (cStack_d == '\x01') {
      if (*(int *)(param_1 + 8) == 0) {
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
  return CONCAT44(in_lr,uVar2);
}

// =============================================================================
// Function: ScriptEngine_HandleDialogTrigger @ 0x0803EE94
// =============================================================================
undefined8 ScriptEngine_HandleDialogTrigger(undefined4 *param_1)

{
  undefined4 in_lr;
  
  param_1[0xd3] = gRomData_080E7810;
  *param_1 = 0;
  param_1[0x6d] = 0;
  gba_memset(param_1 + 9,0,400);
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: ScriptEngine_Routine_0803EEC8 @ 0x0803EEC8
// =============================================================================
undefined4 ScriptEngine_Routine_0803EEC8(int param_1,uint param_2)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0x34c) = gRomData_080E7810;
  if ((param_2 & 1) != 0) {
    Dispatcher_Routine_08000608(param_1);
  }
  return in_lr;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803EEEC @ 0x0803EEEC
// =============================================================================
undefined8 ScriptEngine_Routine_0803EEEC(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  int iStack_2c;
  uint uStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  if (param_2 != 0) {
    gba_memcpy(&iStack_2c,param_2,0xc);
    uVar4 = 0xc;
    if ((iStack_2c == 0x46464952) && (iStack_24 == 0x20524353)) {
      param_1[1] = 0;
      if (0xb < uStack_28) {
        do {
          gba_memcpy(&iStack_20,param_2 + uVar4,8);
          iVar5 = uVar4 + 8;
          if (iStack_20 == 0x45444F43) {
            param_1[2] = 0;
            param_1[3] = *(undefined4 *)(param_2 + iVar5);
            param_1[1] = (undefined4 *)(param_2 + iVar5) + 1;
          }
          else if (iStack_20 == 0x20525453) {
            iVar3 = *(int *)(param_2 + iVar5);
            param_1[4] = iVar3;
            iVar1 = param_2 + uVar4 + 0xc;
            param_1[5] = iVar1;
            param_1[6] = iVar1 + iVar3 * 4;
          }
          else if (iStack_20 == 0x504D554A) {
            param_1[7] = *(undefined4 *)(param_2 + iVar5);
            param_1[8] = (undefined4 *)(param_2 + iVar5) + 1;
          }
          uVar4 = iVar5 + iStack_1c;
        } while (uVar4 <= uStack_28);
      }
      if (param_1[1] != 0) {
        param_1[0x6d] = 0;
        gba_memset(param_1 + 9,0,400);
        param_1[0xd2] = 0;
        gba_memset(param_1 + 0x6e,0,400);
        uVar2 = 1;
        *param_1 = 1;
        goto LAB_0803efca;
      }
    }
  }
  uVar2 = 0;
LAB_0803efca:
  return CONCAT44(in_lr,uVar2);
}

// =============================================================================
// Function: AScriptEngine_Execute @ 0x0803EFD8
// =============================================================================
undefined8 AScriptEngine_Execute(int *param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((*param_1 != 0) && (*param_1 == 1)) {
    do {
      iVar1 = ScriptEngine_Routine_0803F0E0(param_1);
      if (iVar1 + 3U < 6) {
        switch(*(uint *)(PTR_case_0803F004_0803f000 + (iVar1 + 3U) * 4) & 0xfffffffe) {
        case 0x803f004:
        case 0x803f01c:
          *param_1 = 0;
        }
      }
    } while (iVar1 == 0);
  }
  return CONCAT44(in_lr,*param_1);
}

// =============================================================================
// Function: ScriptEngine_Routine_0803F084 @ 0x0803F084
// =============================================================================
undefined8 ScriptEngine_Routine_0803F084(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  cVar1 = ScriptEngine_Routine_0803F03C();
  param_2 = param_2 + *(int *)(param_1 + 4);
  iVar2 = (uint)*(byte *)(param_2 + 1) + (uint)*(byte *)(param_2 + 2) * 0x100;
  if (cVar1 != '\0') {
    iVar2 = iVar2 + *(int *)(param_1 + 0x348);
  }
  return CONCAT44(in_lr,iVar2);
}

// =============================================================================
// Function: ScriptEngine_Routine_0803F0B4 @ 0x0803F0B4
// =============================================================================
void ScriptEngine_Routine_0803F0B4(int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = ScriptEngine_Routine_0803F03C();
  uVar2 = (uint)*(byte *)(param_2 + *(int *)(param_1 + 4) + 1);
  if (cVar1 != '\0') {
    uVar2 = uVar2 + *(int *)(param_1 + 0x348);
  }
  return uVar2;
}

// =============================================================================
// Function: ScriptEngine_GetStringById @ 0x0803F7E0
// =============================================================================
undefined8 ScriptEngine_GetStringById(int param_1,uint param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = gRomData_080F9EA4;
  if (param_2 <= *(uint *)(param_1 + 0x10)) {
    iVar1 = *(int *)(param_1 + 0x18) + *(int *)(param_2 * 4 + *(int *)(param_1 + 0x14));
  }
  return CONCAT44(in_lr,iVar1);
}

// =============================================================================
// Function: ScriptEngine_StartEventScript @ 0x0803F804
// =============================================================================
void ScriptEngine_StartEventScript(int param_1,undefined4 param_2)

{
  
  ScriptEngine_HandleDialogTrigger();
  *(undefined4 *)(param_1 + 0x34c) = gRomData_080E7824;
  *(undefined4 *)(param_1 + 0x350) = param_2;
  *(undefined4 *)(param_1 + 0x354) = 0;
  *(undefined4 *)(param_1 + 0x358) = 0;
  return param_1;
}

// =============================================================================
// Function: ScriptEngine_Routine_0803F83C @ 0x0803F83C
// =============================================================================
undefined8 ScriptEngine_Routine_0803F83C(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 in_lr;
  
  ScriptEngine_HandleDialogTrigger();
  *(undefined4 *)(param_1 + 0x34c) = gRomData_080E7824;
  *(undefined4 *)(param_1 + 0x350) = param_2;
  *(undefined4 *)(param_1 + 0x354) = param_3;
  *(undefined4 *)(param_1 + 0x358) = 0;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: ScriptEngine_Routine_0803F878 @ 0x0803F878
// =============================================================================
undefined4 ScriptEngine_Routine_0803F878(int param_1,int param_2,undefined4 param_3)

{
  undefined4 in_lr;
  
  ScriptEngine_Routine_0803EEEC(param_1,*(undefined4 *)(param_2 * 4 + gRomData_080F89D4));
  *(undefined4 *)(param_1 + 0x358) = param_3;
  return in_lr;
}

// =============================================================================
// Function: ScriptEngine_PushStack32 @ 0x0803F8B8
// =============================================================================
undefined4 ScriptEngine_PushStack32(int param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = *(uint *)(param_1 + 0x1b4);
  if (uVar1 < 100) {
    *(undefined4 *)(param_1 + 0x24 + uVar1 * 4) = param_2;
    *(uint *)(param_1 + 0x1b4) = uVar1 + 1;
  }
  return in_lr;
}

// =============================================================================
// Function: ScriptEngine_Routine_08045584 @ 0x08045584
// =============================================================================
undefined8 ScriptEngine_Routine_08045584(int param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  iVar1 = NPC_Routine_080A0878(*(int *)(param_1 + 0x350) + 0x1CD4);
  if (iVar1 != 0) {
    if (param_3 == '\0') {
      iVar2 = NPC_Routine_0809E49C(iVar1);
      if (iVar2 == 5) {
        uVar3 = NPC_Routine_0809E4A4(iVar1);
        goto LAB_080455d0;
      }
    }
    else {
      iVar2 = NPC_Routine_0809E4AC(iVar1);
      if (iVar2 == 4) {
        uVar3 = NPC_Routine_0809E4B4(iVar1);
        goto LAB_080455d0;
      }
    }
  }
  uVar3 = 0;
LAB_080455d0:
  return CONCAT44(in_lr,uVar3);
}

// =============================================================================
// Function: ScriptEngine_Routine_080455D8 @ 0x080455D8
// =============================================================================
undefined8
ScriptEngine_Routine_080455D8(int param_1,undefined2 param_2,undefined4 param_3,uint param_4,char param_5)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  cVar1 = NPC_Routine_0809C694(*(int *)(param_1 + 0x350) + 0x214C,param_2);
  if (cVar1 == '\0') {
    iVar3 = NPC_Routine_080A0878(*(int *)(param_1 + 0x350) + 0x1CD4,param_3);
    if (iVar3 != 0) {
      if (param_5 == '\0') {
        uVar4 = NPC_Routine_0809E49C();
      }
      else {
        uVar4 = NPC_Routine_0809E4AC();
      }
      if (param_4 <= uVar4) {
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
  return CONCAT44(in_lr,uVar2);
}

// =============================================================================
// Function: ScriptEngine_Routine_08045638 @ 0x08045638
// =============================================================================
undefined4
ScriptEngine_Routine_08045638(int param_1,undefined2 param_2,undefined4 param_3,int param_4,uint param_5,
             char param_6)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  undefined4 in_lr;
  byte bStack_3c;
  byte bStack_3b;
  byte abStack_3a [2];
  byte abStack_38 [4];
  undefined4 uStack_34;
  byte bStack_2c;
  byte bStack_28;
  byte *pbStack_24;
  
  iVar9 = *(int *)(param_1 + 0x350) + 0x214C;
  uStack_34 = param_3;
  iVar5 = NPC_Routine_080A0878(*(int *)(param_1 + 0x350) + 0x1CD4,param_3);
  if (iVar5 != 0) {
    if (param_4 == 1) {
      if (param_6 == '\0') {
        uVar6 = NPC_Routine_0809E49C(iVar5);
      }
      else {
        uVar6 = NPC_Routine_0809E4AC(iVar5);
      }
      if (uVar6 < param_5) {
        NPC_Routine_0809C6AC(iVar9,param_2);
      }
    }
    else if (param_4 < 2) {
      if ((param_4 == 0) && (cVar3 = NPC_Routine_0809C694(iVar9,param_2), cVar3 != '\0')) {
        NPC_Routine_0809C6B0(iVar9,param_2);
      }
    }
    else if (param_4 == 2) {
      while( true ) {
        if (param_6 == '\0') {
          uVar6 = NPC_Routine_0809E49C(iVar5);
        }
        else {
          uVar6 = NPC_Routine_0809E4AC(iVar5);
        }
        if (param_5 <= uVar6) break;
        if (param_6 == '\0') {
          NPC_Routine_0809E4F8(iVar5);
        }
        else {
          NPC_Routine_0809E520(iVar5);
        }
      }
      cVar3 = NPC_Routine_0809C694(iVar9,param_2);
      if (cVar3 != '\0') {
        NPC_Routine_0809C6B0(iVar9,param_2);
      }
      if ((param_6 == '\0') && (iVar5 = NPC_Routine_0809E49C(iVar5), iVar5 == 5)) {
        bStack_3c = *(byte *)(*(int *)(param_1 + 0x350) + 0x10);
        bVar4 = *(byte *)(*(int *)(param_1 + 0x350) + 0x11);
        uVar6 = (bVar4 & 0x7f) >> 2;
        uVar8 = uVar6 + 7;
        bVar1 = 0x1d < uVar8;
        if (bVar1) {
          uVar8 = uVar6 - 0x17;
        }
        uVar6 = (bVar4 & 3) + (uint)bVar1;
        abStack_3a[0] = bVar4 & 0x80 | (byte)uVar6 & 3 | (byte)((uVar8 & 0x1f) << 2);
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
        bStack_3b = Farmer_GetBirthday(*(int *)(param_1 + 0x350) + 0x1BD8);
        bVar4 = NPC_Routine_0809FE74(*(int *)(param_1 + 0x350) + 0x1CD4,uStack_34,&bStack_3b);
        bStack_2c = bStack_2c & 0x80;
        pbStack_24 = abStack_38;
        while( true ) {
          bVar1 = false;
          if ((((abStack_3a[0] & 0x7f) == (bVar4 & 0x7f)) ||
              ((abStack_3a[0] & 0x7f) == (bStack_3b & 0x7f))) ||
             (cVar3 = NPC_Routine_080ADBB4(abStack_3a), cVar3 != '\0')) {
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
          bVar7 = abStack_3a[0] & 0x83 | (byte)((uVar6 & 0x1f) << 2);
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
        iVar5 = *(int *)(param_1 + 0x350);
        abStack_38[0] = bStack_3c;
        pbStack_24[1] = abStack_3a[0];
        NPC_Routine_080A1478(iVar5 + 0x1CD4,pbStack_24);
      }
    }
  }
  return in_lr;
}

// =============================================================================
// Function: ScriptEngine_Routine_0804590C @ 0x0804590C
// =============================================================================
undefined8 ScriptEngine_Routine_0804590C(uint *param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint extraout_r1;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined *puVar9;
  undefined4 in_lr;
  undefined1 uVar10;
  uint uStack_18;
  uint uStack_14;
  
  if (0x24D < param_2) {
    ScriptEngine_Routine_08048FEC();
    param_2 = extraout_r1;
  }
  switch(*(uint *)(param_2 * 4 + gInlineTable_08045934) & 0xfffffffe) {
  case 0x804626c:
    uStack_18 = 200;
    uStack_14 = (uint)(*(byte *)(param_1[0xd4] + 0x10) >> 3) * 7 +
                (*(byte *)(param_1[0xd4] + 0x10) & 7);
    param_1 = &uStack_14;
    puVar3 = param_1;
    if (199 < uStack_14) {
      puVar3 = &uStack_18;
    }
    goto LAB_0804688e;
  case 0x8046296:
    ScriptEngine_Routine_08048F32(*(undefined1 *)(param_1[0xd4] + 0x11));
  case 0x80462a4:
    uVar5 = (uint)*(byte *)(param_1[0xd4] + 0x11);
    goto LAB_08046812;
  case 0x80462b0:
    bVar1 = *(byte *)(param_1[0xd4] + 0x12);
    goto ScriptEngine_Routine_08047766;
  case 0x80462be:
    ScriptEngine_Routine_08048FEE((*(ushort *)(param_1[0xd4] + 0x12) & 0x7ff) >> 5);
  case 0x80462d0:
    uVar5 = (uint)*(byte *)(param_1[0xd4] + 0x11);
    uVar5 = ((uVar5 & 0x7f) >> 2) +
            (uVar5 & 3) * 0x1e + ((*(byte *)(param_1[0xd4] + 0x10) & 7) + 6) * 0x78;
    if (6 < uVar5) {
      uVar5 = math_modsi3(uVar5,7);
    }
    uVar5 = uVar5 & 7;
    break;
  case 0x8046312:
    uVar5 = *(uint *)(param_1[0xd4] + 8);
    break;
  case 0x8046320:
    ScriptEngine_Routine_08048FEE(*(undefined4 *)(param_1[0xd4] + 0xc));
  case 0x804632e:
    uVar5 = Farmer_GetBirthday(param_1[0xd4] + _LAB_08046344);
    goto SUB_08048f32;
  case 0x8046348:
    uVar5 = Farmer_GetBirthday(param_1[0xd4] + 0x1BD8);
    goto LAB_08046812;
  case 0x8046360:
    uVar5 = Farmer_GetStamina(param_1[0xd4] + _LAB_08046374);
    break;
  case 0x8046378:
    uVar5 = Farmer_GetMaxStamina(param_1[0xd4] + _LAB_0804638c);
    break;
  case 0x8046390:
    uVar5 = Farmer_GetFatigue(param_1[0xd4] + _LAB_080463a4);
    break;
  case 0x80463a8:
    uVar5 = Farmer_AteMysteryBerry(param_1[0xd4] + 0x1BD8);
    goto LAB_080466d4;
  case 0x80463c0:
    uVar5 = Farm_Routine_08009AF8(param_1[0xd4] + 0x14);
    break;
  case 0x80463d2:
    uVar5 = Building_Routine_0800CE6C(param_1[0xd4] + 0x5f0);
    break;
  case 0x80463e8:
    uVar5 = Building_Routine_0800C568(param_1[0xd4] + 0x410);
    break;
  case 0x80463fe:
    uVar5 = Farm_Routine_08009B18(param_1[0xd4] + 0x14);
    goto LAB_080466d4;
  case 0x804640e:
    uVar5 = Building_Routine_0800BF14(param_1[0xd4] + 500);
    break;
  case 0x8046424:
    uVar5 = Building_Routine_0800C560(param_1[0xd4] + 0x410);
    break;
  case 0x804643a:
    uVar5 = Building_Routine_0800CE64(param_1[0xd4] + 0x5f0);
    break;
  case 0x8046450:
    uVar5 = Farmer_Routine_08010E48(param_1[0xd4]);
    goto LAB_080466d4;
  case 0x804645e:
    uVar5 = Farmer_Routine_08010E50(param_1[0xd4]);
    goto LAB_080466d4;
  case 0x804646c:
    uVar5 = Farmer_Routine_08010E58(param_1[0xd4]);
    goto LAB_080466d4;
  case 0x804647a:
    uVar5 = Building_Routine_0800BF84(param_1[0xd4] + 500);
    goto LAB_080466d4;
  case 0x804648e:
    puVar3 = param_1 + 0xd4;
    param_1 = (uint *)0x01f4;
    iVar2 = Building_Routine_0800C048(*puVar3 + 500);
    goto LAB_080464a0;
  case 0x80464ae:
    goto case_080464AE;
  case 0x80464c2:
    uVar5 = Building_Routine_0800BF94(param_1[0xd4] + 500);
    goto LAB_080466d4;
  case 0x80464d6:
    uVar5 = Building_Routine_0800BF8C(param_1[0xd4] + 500);
    goto LAB_080466d4;
  case 0x80464ea:
    uVar5 = Building_Routine_0800BFAC(param_1[0xd4] + 500);
    goto LAB_080466d4;
  case 0x80464fe:
    uVar5 = Building_Routine_0800BFB4(param_1[0xd4] + 500);
    goto LAB_080466d4;
  case 0x8046512:
    uVar5 = Building_Routine_0800BF9C(param_1[0xd4] + 500);
    goto LAB_080466d4;
  case 0x8046526:
    puVar3 = param_1 + 0xd4;
    param_1 = (uint *)0x01f4;
    iVar2 = Building_Routine_0800C07C(*puVar3 + 500);
    goto LAB_080464a0;
  case 0x804653a:
    uVar5 = Building_Routine_0800BFCC(param_1[0xd4] + 500);
    goto LAB_080466d4;
  case 0x804654e:
    uVar5 = Building_Routine_0800BFD4(param_1[0xd4] + 500);
    goto LAB_080466d4;
  case 0x8046562:
    uVar5 = Building_Routine_0800BFDC(param_1[0xd4] + 500);
    goto LAB_080466d4;
  case 0x8046576:
    uVar5 = Building_Routine_0800BFE4(param_1[0xd4] + 500);
    goto LAB_080466d4;
  case 0x804658a:
    uVar5 = Building_Routine_0800BFEC(param_1[0xd4] + 500);
    goto LAB_080466d4;
  case 0x804659e:
    uVar5 = Building_Routine_0800BFF4(param_1[0xd4] + 500);
    goto LAB_080466d4;
  case 0x80465b2:
    uVar5 = Building_Routine_0800BFFC(param_1[0xd4] + 500);
    goto LAB_080466d4;
  case 0x80465c6:
    uVar5 = Building_Routine_0800C004(param_1[0xd4] + 500);
    goto LAB_080466d4;
  case 0x80465da:
    uVar5 = Building_Routine_0800C00C(param_1[0xd4] + 500);
    goto LAB_080466d4;
  case 0x80465ee:
    uVar5 = Building_Routine_0800BFBC(param_1[0xd4] + 500);
    goto LAB_080466d4;
  case 0x8046602:
    uVar5 = Farmer_Routine_0800F5D8(param_1[0xd4] + _LAB_08046618);
    break;
  case 0x804661c:
    uVar5 = Animal_Routine_0809BB34(param_1[0xd4] + _LAB_08046630);
    break;
  case 0x8046634:
    uVar5 = Animal_Routine_0809B228(param_1[0xd4] + _LAB_08046648);
    break;
  case 0x804664c:
    uVar5 = Farmer_GetStepCount(param_1[0xd4] + _LAB_08046660);
    break;
  case 0x8046664:
    uVar5 = Building_Routine_0800C014(param_1[0xd4] + 500);
    break;
  case 0x804667a:
    uVar5 = NPC_Routine_080A039C(param_1[0xd4] + _LAB_08046690);
    break;
  case 0x8046694:
    iVar2 = NPC_Routine_080A0A04(param_1[0xd4] + _LAB_080466b4);
    if (iVar2 == 0) {
      ScriptEngine_Routine_08048FEC();
    }
    uVar5 = NPC_Routine_0809EAD8();
    break;
  case 0x80466b8:
    iVar2 = NPC_Routine_080A0A04(param_1[0xd4] + _LAB_080466dc);
    if (iVar2 == 0) {
      ScriptEngine_Routine_08048FEC();
    }
    uVar5 = NPC_Routine_0809EAE0();
LAB_080466d4:
    uVar5 = uVar5 & 0xff;
    break;
  case 0x80466e0:
    iVar2 = NPC_Routine_080A0A04(param_1[0xd4] + _LAB_08046700);
    if (iVar2 == 0) {
      ScriptEngine_Routine_08048FEC();
    }
    uVar5 = NPC_Routine_0809EAD0();
    goto SUB_08048f32;
  case 0x8046704:
    iVar2 = NPC_Routine_080A0A04(param_1[0xd4] + 0x1CD4);
    if (iVar2 == 0) {
      ScriptEngine_Routine_08048FEC();
    }
    uVar5 = NPC_Routine_0809EAD0();
    goto LAB_08046812;
  case 0x8046728:
    uVar6 = 0x13;
    goto LAB_0804674a;
  case 0x804672e:
    uVar6 = 3;
    goto LAB_0804674a;
  case 0x8046734:
    uVar6 = 0xc;
    goto LAB_0804674a;
  case 0x804673a:
    uVar6 = 0x15;
    goto LAB_0804674a;
  case 0x8046740:
    uVar6 = 0x19;
    goto LAB_0804674a;
  case 0x8046746:
    uVar6 = 0x1f;
LAB_0804674a:
    uVar5 = ScriptEngine_Routine_08045584(param_1,uVar6,0);
    break;
  case 0x8046754:
    uVar6 = 0x13;
    goto LAB_08046770;
  case 0x804675a:
    uVar6 = 3;
    goto LAB_08046770;
  case 0x8046760:
    uVar6 = 0xc;
    goto LAB_08046770;
  case 0x8046766:
    uVar6 = 0x15;
    goto LAB_08046770;
  case 0x804676c:
    uVar6 = 0x19;
LAB_08046770:
    uVar5 = ScriptEngine_Routine_08045584(param_1,uVar6,1);
    break;
  case 0x804677a:
    iVar2 = param_1[0xd4] + 0x214C;
    uVar5 = (uint)*(byte *)(iVar2 + 0x1c);
    if ((((((uVar5 & 1) << 1 | (uint)(*(byte *)(iVar2 + 0x1b) >> 7)) != 2) &&
         ((uVar5 & 7) >> 1 != 2)) && ((uVar5 & 0x1f) >> 3 != 2)) &&
       ((((uVar5 & 0x7f) >> 5 != 2 && ((*(ushort *)(iVar2 + 0x1c) & 0x1ff) >> 7 != 2)) &&
        ((*(byte *)(param_1[0xd4] + 0x2197) & 3) != 2)))) {
      ScriptEngine_Routine_08048FEC();
    }
    uVar5 = param_1[0xd4];
    param_1 = 0x2144;
    goto LAB_0804688c;
  case 0x80467e4:
    iVar2 = NPC_Routine_080A1480(param_1[0xd4] + _LAB_080467fc);
    uVar5 = (uint)*(byte *)(iVar2 + 1);
    goto SUB_08048f32;
  case 0x8046800:
    iVar2 = NPC_Routine_080A1480(param_1[0xd4] + _LAB_0804681c);
    uVar5 = (uint)*(byte *)(iVar2 + 1);
LAB_08046812:
    uVar5 = ((uVar5 & 0x7f) >> 2) + 1;
    break;
  case 0x8046820:
    uVar5 = (uint)*(byte *)(param_1[0xd4] + _LAB_08046834);
    break;
  case 0x8046838:
    iVar2 = Farm_Routine_08009C3C(param_1[0xd4] + 0x14);
LAB_080464a0:
    while (iVar2 != 0) {
      ScriptEngine_Routine_08048FEE(1);
case_080464AE:
      puVar3 = param_1 + 0xd4;
      param_1 = (uint *)0x01f4;
      iVar2 = Building_Routine_0800C060(*puVar3 + 500);
    }
    uVar5 = 0;
    break;
  case 0x8046848:
    iVar2 = Farm_Routine_08009C3C(param_1[0xd4] + 0x14);
    if (iVar2 == 0) {
      ScriptEngine_Routine_08048FEC();
    }
    uVar5 = Animal_Routine_0809BC10();
    break;
  case 0x8046866:
    iVar2 = Farm_Routine_08009C3C(param_1[0xd4] + 0x14);
    if (iVar2 == 0) {
      ScriptEngine_Routine_08048FEC();
    }
    uVar5 = Animal_Routine_0809B228();
    break;
  case 0x8046884:
    uVar5 = *_LAB_08046894;
    param_1 = (uint *)0x0368;
LAB_0804688c:
    puVar3 = (uint *)(uVar5 + (int)param_1);
LAB_0804688e:
    ScriptEngine_Routine_08048FEE(*puVar3);
case_08046898:
    uVar10 = 0;
    uVar6 = 0x46;
    uVar8 = 0x13;
    goto LAB_08046bc6;
  case 0x8046898:
    goto case_08046898;
  case 0x80468a6:
    uVar10 = 0;
    uVar6 = 0x47;
    uVar8 = 0x13;
    goto LAB_08046bdc;
  case 0x80468b4:
    uVar10 = 0;
    uVar6 = 0x49;
    uVar8 = 0x13;
    goto LAB_08046bf2;
  case 0x80468c2:
    uVar10 = 0;
    uVar6 = 0x4a;
    uVar8 = 0x13;
    goto LAB_08046c08;
  case 0x80468d0:
    uVar10 = 0;
    uVar6 = 0x4b;
    uVar8 = 0x13;
    goto LAB_08046c2a;
  case 0x80468de:
    uVar6 = 0x4c;
    uVar8 = 0x13;
    goto LAB_08046a4e;
  case 0x80468ec:
    uVar10 = 0;
    uVar6 = 0x4e;
    uVar8 = 3;
    goto LAB_08046bc6;
  case 0x80468fa:
    uVar10 = 0;
    uVar6 = 0x4f;
    uVar8 = 3;
    goto LAB_08046bdc;
  case 0x8046908:
    uVar10 = 0;
    uVar6 = 0x50;
    uVar8 = 3;
    goto LAB_08046bf2;
  case 0x8046916:
    uVar10 = 0;
    uVar6 = 0x52;
    uVar8 = 3;
    goto LAB_08046c08;
  case 0x8046924:
    uVar10 = 0;
    uVar6 = 0x54;
    uVar8 = 3;
    goto LAB_08046c2a;
  case 0x8046932:
    uVar6 = 0x55;
    uVar8 = 3;
    goto LAB_08046a4e;
  case 0x8046940:
    uVar10 = 0;
    uVar6 = 0x57;
    uVar8 = 0x19;
    goto LAB_08046bc6;
  case 0x804694e:
    uVar10 = 0;
    uVar6 = 0x58;
    uVar8 = 0x19;
    goto LAB_08046bdc;
  case 0x804695c:
    uVar10 = 0;
    uVar6 = 0x5a;
    uVar8 = 0x19;
    goto LAB_08046bf2;
  case 0x804696a:
    uVar10 = 0;
    uVar6 = 0x5c;
    uVar8 = 0x19;
    goto LAB_08046c08;
  case 0x8046978:
    uVar10 = 0;
    uVar6 = 0x5e;
    uVar8 = 0x19;
    goto LAB_08046c2a;
  case 0x8046986:
    uVar6 = 0x5f;
    uVar8 = 0x19;
    goto LAB_08046a4e;
  case 0x8046994:
    uVar10 = 0;
    uVar6 = 0x61;
    uVar8 = 0xc;
    goto LAB_08046bc6;
  case 0x80469a2:
    uVar10 = 0;
    uVar6 = 0x62;
    uVar8 = 0xc;
    goto LAB_08046bdc;
  case 0x80469b0:
    uVar10 = 0;
    uVar6 = 100;
    uVar8 = 0xc;
    goto LAB_08046bf2;
  case 0x80469be:
    uVar10 = 0;
    uVar6 = 0x65;
    uVar8 = 0xc;
    goto LAB_08046c08;
  case 0x80469cc:
    uVar10 = 0;
    uVar6 = 0x66;
    uVar8 = 0xc;
    goto LAB_08046c2a;
  case 0x80469da:
    uVar6 = 0x67;
    uVar8 = 0xc;
    goto LAB_08046a4e;
  case 0x80469e8:
    uVar10 = 0;
    uVar6 = 0x69;
    goto LAB_08046bc4;
  case 0x80469f4:
    uVar10 = 0;
    uVar6 = 0x6a;
    goto LAB_08046bda;
  case 0x8046a00:
    uVar10 = 0;
    uVar6 = 0x6b;
    goto LAB_08046bf0;
  case 0x8046a0c:
    uVar10 = 0;
    uVar6 = 0x6d;
    goto LAB_08046c06;
  case 0x8046a18:
    uVar10 = 0;
    uVar6 = 0x6e;
    goto LAB_08046c28;
  case 0x8046a24:
    uVar6 = 0x6f;
    uVar8 = 0x15;
    goto LAB_08046a4e;
  case 0x8046a32:
    uVar6 = 0x172;
    uVar10 = 0;
    uVar8 = 0x1f;
    goto LAB_08046c2a;
  case 0x8046a42:
    uVar8 = 0x1f;
    uVar6 = _LAB_08046a58;
LAB_08046a4e:
    uVar5 = ScriptEngine_Routine_080455D8(param_1,uVar6,uVar8,6,0);
    break;
  case 0x8046a5c:
    uVar10 = 1;
    uVar6 = 0x71;
    uVar8 = 0x13;
    goto LAB_08046bc6;
  case 0x8046a6a:
    uVar10 = 1;
    uVar6 = 0x72;
    uVar8 = 0x13;
    goto LAB_08046bdc;
  case 0x8046a78:
    uVar10 = 1;
    uVar6 = 0x73;
    uVar8 = 0x13;
    goto LAB_08046bf2;
  case 0x8046a86:
    uVar10 = 1;
    uVar6 = 0x74;
    uVar8 = 0x13;
    goto LAB_08046c08;
  case 0x8046a94:
    uVar10 = 1;
    uVar6 = 0x75;
    uVar8 = 0x13;
    goto LAB_08046c2a;
  case 0x8046aa2:
    uVar10 = 1;
    uVar6 = 0x76;
    uVar8 = 0x13;
    goto LAB_08046c2a;
  case 0x8046ab0:
    uVar10 = 1;
    uVar6 = 0x77;
    uVar8 = 0x13;
    goto LAB_08046c2a;
  case 0x8046abe:
    uVar10 = 1;
    uVar6 = 0x7a;
    uVar8 = 3;
    goto LAB_08046bc6;
  case 0x8046acc:
    uVar10 = 1;
    uVar6 = 0x7b;
    uVar8 = 3;
    goto LAB_08046bdc;
  case 0x8046ada:
    uVar10 = 1;
    uVar6 = 0x7c;
    uVar8 = 3;
    goto LAB_08046bf2;
  case 0x8046ae8:
    uVar10 = 1;
    uVar6 = 0x7d;
    uVar8 = 3;
    goto LAB_08046c08;
  case 0x8046af6:
    uVar10 = 1;
    uVar6 = 0x7e;
    uVar8 = 3;
    goto LAB_08046c2a;
  case 0x8046b04:
    uVar10 = 1;
    uVar6 = 0x7f;
    uVar8 = 3;
    goto LAB_08046c2a;
  case 0x8046b12:
    uVar10 = 1;
    uVar6 = 0x82;
    uVar8 = 0x19;
    goto LAB_08046bc6;
  case 0x8046b20:
    uVar10 = 1;
    uVar6 = 0x83;
    uVar8 = 0x19;
    goto LAB_08046bdc;
  case 0x8046b2e:
    uVar10 = 1;
    uVar6 = 0x84;
    uVar8 = 0x19;
    goto LAB_08046bf2;
  case 0x8046b3c:
    uVar10 = 1;
    uVar6 = 0x85;
    uVar8 = 0x19;
    goto LAB_08046c08;
  case 0x8046b4a:
    uVar10 = 1;
    uVar6 = 0x86;
    uVar8 = 0x19;
    goto LAB_08046c2a;
  case 0x8046b58:
    uVar10 = 1;
    uVar6 = 0x87;
    uVar8 = 0x19;
    goto LAB_08046c2a;
  case 0x8046b66:
    uVar10 = 1;
    uVar6 = 0x8a;
    uVar8 = 0xc;
    goto LAB_08046bc6;
  case 0x8046b74:
    uVar10 = 1;
    uVar6 = 0x8b;
    uVar8 = 0xc;
    goto LAB_08046bdc;
  case 0x8046b82:
    uVar10 = 1;
    uVar6 = 0x8c;
    uVar8 = 0xc;
    goto LAB_08046bf2;
  case 0x8046b90:
    uVar10 = 1;
    uVar6 = 0x8d;
    uVar8 = 0xc;
    goto LAB_08046c08;
  case 0x8046b9e:
    uVar10 = 1;
    uVar6 = 0x8e;
    uVar8 = 0xc;
    goto LAB_08046c2a;
  case 0x8046bac:
    uVar10 = 1;
    uVar6 = 0x8f;
    uVar8 = 0xc;
    goto LAB_08046c2a;
  case 0x8046bba:
    uVar10 = 1;
    uVar6 = 0x92;
LAB_08046bc4:
    uVar8 = 0x15;
LAB_08046bc6:
    uVar5 = ScriptEngine_Routine_080455D8(param_1,uVar6,uVar8,1,uVar10);
    break;
  case 0x8046bd0:
    uVar10 = 1;
    uVar6 = 0x93;
LAB_08046bda:
    uVar8 = 0x15;
LAB_08046bdc:
    uVar5 = ScriptEngine_Routine_080455D8(param_1,uVar6,uVar8,2,uVar10);
    break;
  case 0x8046be6:
    uVar10 = 1;
    uVar6 = 0x94;
LAB_08046bf0:
    uVar8 = 0x15;
LAB_08046bf2:
    uVar5 = ScriptEngine_Routine_080455D8(param_1,uVar6,uVar8,3,uVar10);
    break;
  case 0x8046bfc:
    uVar10 = 1;
    uVar6 = 0x95;
LAB_08046c06:
    uVar8 = 0x15;
LAB_08046c08:
    uVar5 = ScriptEngine_Routine_080455D8(param_1,uVar6,uVar8,4,uVar10);
    break;
  case 0x8046c12:
    uVar10 = 1;
    uVar6 = 0x96;
    goto LAB_08046c28;
  case 0x8046c1e:
    uVar10 = 1;
    uVar6 = 0x97;
LAB_08046c28:
    uVar8 = 0x15;
LAB_08046c2a:
    uVar5 = ScriptEngine_Routine_080455D8(param_1,uVar6,uVar8,5,uVar10);
    break;
  case 0x8046c34:
    uVar5 = param_1[0xd4];
    iVar2 = _LAB_08046c44;
    goto SUB_08048966;
  case 0x8046c48:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08046c58;
    ScriptEngine_Routine_08048E36(*puVar3);
  case 0x8046c5c:
    uVar5 = param_1[0xd4];
    param_1 = _LAB_08046c6c;
    goto ScriptEngine_Routine_080486B2;
  case 0x8046c70:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08046c80;
    ScriptEngine_Routine_08048E36(*puVar3);
  case 0x8046c84:
    uVar5 = param_1[0xd4];
    iVar2 = _LAB_08046c94;
    goto SUB_08048966;
  case 0x8046c98:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08046ca8;
    ScriptEngine_Routine_08048EC6(*puVar3);
  case 0x8046cac:
    uVar5 = param_1[0xd4];
    iVar2 = _LAB_08046cbc;
    goto SUB_08048f5e;
  case 0x8046cc0:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08046cd0;
    ScriptEngine_Routine_08048E76(*puVar3);
  case 0x8046cd4:
    uVar5 = param_1[0xd4];
    iVar2 = _LAB_08046ce4;
    goto ScriptEngine_Routine_08048EC6;
  case 0x8046ce8:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08046cf8;
    ScriptEngine_Routine_08048C0E(*puVar3);
  case 0x8046cfc:
    uVar5 = param_1[0xd4];
    iVar2 = _LAB_08046d0c;
    goto ScriptEngine_Routine_08048F46;
  case 0x8046d10:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08046d20;
    ScriptEngine_Routine_08048FC6(*puVar3);
  case 0x8046d24:
    uVar5 = param_1[0xd4];
    iVar2 = _LAB_08046d34;
    goto ScriptEngine_Routine_08048EC6;
  case 0x8046d38:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08046d48;
    ScriptEngine_Routine_08048F5E(*puVar3);
  case 0x8046d4c:
    uVar5 = param_1[0xd4];
    iVar2 = _LAB_08046d5c;
    goto SUB_08048fc6;
  case 0x8046d60:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08046d70;
    ScriptEngine_Routine_08048F16(*puVar3);
  case 0x8046d74:
    uVar5 = param_1[0xd4];
    iVar2 = _LAB_08046d84;
    goto ScriptEngine_Routine_08048C0E;
  case 0x8046d88:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08046d98;
    ScriptEngine_Routine_08048F5E(*puVar3);
  case 0x8046d9c:
    uVar5 = param_1[0xd4];
    iVar2 = _LAB_08046dac;
    goto SUB_08048f76;
  case 0x8046db0:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08046dc0;
    ScriptEngine_Routine_08048FDE(*puVar3);
  case 0x8046dc4:
    uVar5 = param_1[0xd4];
    iVar2 = _LAB_08046dd4;
    goto ScriptEngine_Routine_08048EC6;
  case 0x8046dd8:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08046de8;
    ScriptEngine_Routine_08048F46(*puVar3);
  case 0x8046dec:
    uVar5 = param_1[0xd4];
    iVar2 = _LAB_08046dfc;
    goto SUB_08048f76;
  case 0x8046e00:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08046e10;
    ScriptEngine_Routine_08048662(*puVar3);
  case 0x8046e14:
    uVar5 = param_1[0xd4];
    param_1 = _LAB_08046e24;
    goto ScriptEngine_Routine_0804811A;
  case 0x8046e28:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08046e38;
    ScriptEngine_Routine_08048966(*puVar3);
  case 0x8046e3c:
    uVar5 = param_1[0xd4];
    param_1 = _LAB_08046e4c;
    goto ScriptEngine_Routine_080486B2;
  case 0x8046e50:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08046e60;
    ScriptEngine_Routine_08048662(*puVar3);
  case 0x8046e64:
    uVar5 = param_1[0xd4];
    param_1 = _LAB_08046e74;
    goto SUB_08048626;
  case 0x8046e78:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08046e88;
    ScriptEngine_Routine_08048966(*puVar3);
  case 0x8046e8c:
    uVar5 = param_1[0xd4];
    param_1 = _LAB_08046e9c;
    goto ScriptEngine_Routine_080486B2;
  case 0x8046ea0:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08046eb0;
    ScriptEngine_Routine_08048662(*puVar3);
  case 0x8046eb4:
    uVar5 = (uint)(*(byte *)(param_1[0xd4] + _LAB_08046ed0) >> 7);
    uVar4 = (uint)*(byte *)(param_1[0xd4] + _LAB_08046ed4);
    uVar7 = 1;
    goto ScriptEngine_Routine_08048A7C;
  case 0x8046ed8:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08046ee8;
    ScriptEngine_Routine_08048966(*puVar3);
  case 0x8046eec:
    uVar5 = param_1[0xd4];
    param_1 = _LAB_08046efc;
    goto ScriptEngine_Routine_080486B2;
  case 0x8046f00:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08046f10;
    ScriptEngine_Routine_08048662(*puVar3);
  case 0x8046f14:
    uVar5 = param_1[0xd4];
    param_1 = _LAB_08046f24;
    goto SUB_08048626;
  case 0x8046f28:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08046f38;
    ScriptEngine_Routine_08048966(*puVar3);
  case 0x8046f3c:
    uVar5 = param_1[0xd4];
    param_1 = _LAB_08046f4c;
    goto ScriptEngine_Routine_080486B2;
  case 0x8046f50:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08046f60;
    ScriptEngine_Routine_08048662(*puVar3);
  case 0x8046f64:
    uVar5 = param_1[0xd4];
    param_1 = _LAB_08046f74;
    goto ScriptEngine_Routine_0804811A;
  case 0x8046f78:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08046f88;
    ScriptEngine_Routine_08048966(*puVar3);
  case 0x8046f8c:
    uVar5 = param_1[0xd4];
    param_1 = _LAB_08046f9c;
    goto ScriptEngine_Routine_080486B2;
  case 0x8046fa0:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08046fb0;
    ScriptEngine_Routine_08048662(*puVar3);
  case 0x8046fb4:
    uVar5 = param_1[0xd4];
    param_1 = _LAB_08046fc4;
    goto SUB_08048626;
  case 0x8046fc8:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08046fd8;
    ScriptEngine_Routine_08048966(*puVar3);
  case 0x8046fdc:
    uVar5 = param_1[0xd4];
    param_1 = _LAB_08046fec;
    goto ScriptEngine_Routine_080486B2;
  case 0x8046ff0:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08047000;
    ScriptEngine_Routine_08048662(*puVar3);
  case 0x8047004:
    uVar5 = (uint)(*(byte *)(param_1[0xd4] + _LAB_08047020) >> 7);
    uVar4 = (uint)*(byte *)(param_1[0xd4] + _LAB_08047024);
    uVar7 = 1;
    goto ScriptEngine_Routine_08048A7C;
  case 0x8047028:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08047038;
    ScriptEngine_Routine_08048966(*puVar3);
  case 0x804703c:
    uVar5 = param_1[0xd4];
    param_1 = _LAB_0804704c;
    goto ScriptEngine_Routine_080486B2;
  case 0x8047050:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08047060;
    ScriptEngine_Routine_08048662(*puVar3);
  case 0x8047064:
    uVar5 = param_1[0xd4];
    param_1 = _LAB_08047074;
    goto SUB_08048626;
  case 0x8047078:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08047088;
    ScriptEngine_Routine_08048966(*puVar3);
  case 0x804708c:
    uVar5 = param_1[0xd4];
    param_1 = _LAB_0804709c;
    goto ScriptEngine_Routine_080486B2;
  case 0x80470a0:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_080470b0;
    ScriptEngine_Routine_08048662(*puVar3);
  case 0x80470b4:
    uVar5 = param_1[0xd4];
    param_1 = _LAB_080470c4;
    goto ScriptEngine_Routine_0804811A;
  case 0x80470c8:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_080470d8;
    ScriptEngine_Routine_08048966(*puVar3);
  case 0x80470dc:
    uVar5 = param_1[0xd4];
    param_1 = _LAB_080470ec;
    goto ScriptEngine_Routine_080486B2;
  case 0x80470f0:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08047100;
    ScriptEngine_Routine_08048662(*puVar3);
  case 0x8047104:
    uVar5 = param_1[0xd4];
    param_1 = _LAB_08047114;
    goto SUB_08048626;
  case 0x8047118:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08047128;
    ScriptEngine_Routine_08048966(*puVar3);
  case 0x804712c:
    uVar5 = param_1[0xd4];
    param_1 = _LAB_0804713c;
    goto ScriptEngine_Routine_080486B2;
  case 0x8047140:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08047150;
    ScriptEngine_Routine_08048662(*puVar3);
  case 0x8047154:
    uVar5 = (uint)(*(byte *)(param_1[0xd4] + _LAB_08047170) >> 7);
    uVar4 = (uint)*(byte *)(param_1[0xd4] + _LAB_08047174);
    uVar7 = 1;
    goto ScriptEngine_Routine_08048A7C;
  case 0x8047178:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08047188;
    ScriptEngine_Routine_08048966(*puVar3);
  case 0x804718c:
    uVar5 = param_1[0xd4];
    param_1 = _LAB_0804719c;
    goto ScriptEngine_Routine_080486B2;
  case 0x80471a0:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_080471b0;
    ScriptEngine_Routine_08048662(*puVar3);
  case 0x80471b4:
    uVar5 = param_1[0xd4];
    param_1 = _LAB_080471c4;
    goto SUB_08048626;
  case 0x80471c8:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_080471d8;
    ScriptEngine_Routine_08048966(*puVar3);
  case 0x80471dc:
    uVar5 = param_1[0xd4];
    param_1 = _LAB_080471ec;
    goto ScriptEngine_Routine_080486B2;
  case 0x80471f0:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08047200;
    ScriptEngine_Routine_08048662(*puVar3);
  case 0x8047204:
    uVar5 = param_1[0xd4];
    param_1 = _LAB_08047214;
    goto ScriptEngine_Routine_0804811A;
  case 0x8047218:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08047228;
    ScriptEngine_Routine_08048966(*puVar3);
  case 0x804722c:
    uVar5 = param_1[0xd4];
    param_1 = _LAB_0804723c;
    goto ScriptEngine_Routine_080486B2;
  case 0x8047240:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08047250;
    ScriptEngine_Routine_08048662(*puVar3);
  case 0x8047254:
    uVar5 = param_1[0xd4];
    param_1 = _LAB_08047264;
    goto SUB_08048626;
  case 0x8047268:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08047278;
    ScriptEngine_Routine_08048966(*puVar3);
  case 0x804727c:
    uVar5 = param_1[0xd4];
    param_1 = _LAB_0804728c;
    goto ScriptEngine_Routine_080486B2;
  case 0x8047290:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_080472a0;
    ScriptEngine_Routine_08048662(*puVar3);
  case 0x80472a4:
    uVar5 = (uint)(*(byte *)(param_1[0xd4] + _LAB_080472c0) >> 7);
    uVar4 = (uint)*(byte *)(param_1[0xd4] + _LAB_080472c4);
    uVar7 = 1;
    goto ScriptEngine_Routine_08048A7C;
  case 0x80472c8:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_080472d8;
    ScriptEngine_Routine_08048966(*puVar3);
  case 0x80472dc:
    uVar5 = param_1[0xd4];
    param_1 = _LAB_080472ec;
    goto ScriptEngine_Routine_080486B2;
  case 0x80472f0:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08047300;
    ScriptEngine_Routine_08048662(*puVar3);
  case 0x8047304:
    uVar5 = param_1[0xd4];
    param_1 = _LAB_08047314;
    goto SUB_08048626;
  case 0x8047318:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08047328;
    ScriptEngine_Routine_08048966(*puVar3);
  case 0x804732c:
    uVar5 = param_1[0xd4];
    param_1 = _LAB_0804733c;
    goto ScriptEngine_Routine_080486B2;
  case 0x8047340:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08047350;
    ScriptEngine_Routine_08048662(*puVar3);
  case 0x8047354:
    uVar5 = param_1[0xd4];
    param_1 = _LAB_08047364;
    goto ScriptEngine_Routine_0804811A;
  case 0x8047368:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08047378;
    ScriptEngine_Routine_08048966(*puVar3);
  case 0x804737c:
    uVar5 = param_1[0xd4];
    param_1 = _LAB_0804738c;
    goto ScriptEngine_Routine_080486B2;
  case 0x8047390:
    puVar3 = param_1 + 0xd4;
    param_1 = (uint *)(uint)(*(byte *)(*puVar3 + _LAB_080473b4) >> 4);
    ScriptEngine_Routine_08048FEE((*(byte *)(*puVar3 + _LAB_080473b8) & 7) << 4 | (uint)param_1);
  case 0x80473bc:
    uVar5 = param_1[0xd4];
    param_1 = _LAB_080473cc;
    goto ScriptEngine_Routine_080486B2;
  case 0x80473d0:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_080473e0;
    ScriptEngine_Routine_08048662(*puVar3);
  case 0x80473e4:
    uVar5 = param_1[0xd4];
    param_1 = _LAB_080473f4;
    goto SUB_08048626;
  case 0x80473f8:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08047408;
    ScriptEngine_Routine_08048966(*puVar3);
  case 0x804740c:
    uVar5 = param_1[0xd4];
    param_1 = _LAB_0804741c;
    goto ScriptEngine_Routine_080486B2;
  case 0x8047420:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08047430;
    ScriptEngine_Routine_08048662(*puVar3);
  case 0x8047434:
    uVar5 = param_1[0xd4];
    iVar2 = _LAB_08047444;
    goto ScriptEngine_Routine_08048F16;
  case 0x8047448:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08047458;
    ScriptEngine_Routine_08048F2E(*puVar3);
  case 0x804745c:
    uVar5 = param_1[0xd4];
    iVar2 = _LAB_0804746c;
    goto ScriptEngine_Routine_08048E5E;
  case 0x8047470:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08047480;
    ScriptEngine_Routine_08048E76(*puVar3);
  case 0x8047484:
    uVar5 = param_1[0xd4];
    iVar2 = _LAB_08047494;
    goto ScriptEngine_Routine_08048E36;
  case 0x8047498:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_080474a8;
    ScriptEngine_Routine_08048F2E(*puVar3);
  case 0x80474ac:
    uVar5 = param_1[0xd4];
    iVar2 = _LAB_080474bc;
    goto ScriptEngine_Routine_08048E5E;
  case 0x80474c0:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_080474d0;
    ScriptEngine_Routine_08048E76(*puVar3);
  case 0x80474d4:
    uVar5 = param_1[0xd4];
    iVar2 = _LAB_080474e4;
    goto ScriptEngine_Routine_08048E36;
  case 0x80474e8:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_080474f8;
    ScriptEngine_Routine_08048F2E(*puVar3);
  case 0x80474fc:
    uVar5 = param_1[0xd4];
    iVar2 = _LAB_0804750c;
    goto ScriptEngine_Routine_08048E5E;
  case 0x8047510:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08047520;
    ScriptEngine_Routine_08048E76(*puVar3);
  case 0x8047524:
    uVar5 = param_1[0xd4];
    iVar2 = _LAB_08047534;
    goto ScriptEngine_Routine_08048E36;
  case 0x8047538:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08047548;
    ScriptEngine_Routine_08048F2E(*puVar3);
  case 0x804754c:
    uVar5 = param_1[0xd4];
    iVar2 = _LAB_0804755c;
    goto ScriptEngine_Routine_08048E5E;
  case 0x8047560:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08047570;
    ScriptEngine_Routine_08048F76(*puVar3);
  case 0x8047574:
    uVar5 = param_1[0xd4];
    iVar2 = _LAB_08047584;
    goto SUB_08048fc6;
  case 0x8047588:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08047598;
    ScriptEngine_Routine_08048FDE(*puVar3);
  case 0x804759c:
    uVar5 = param_1[0xd4];
    iVar2 = _LAB_080475ac;
    goto ScriptEngine_Routine_08048F16;
  case 0x80475b0:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_080475c0;
    ScriptEngine_Routine_08048EC6(*puVar3);
  case 0x80475c4:
    uVar5 = param_1[0xd4];
    iVar2 = _LAB_080475d4;
    goto SUB_08048966;
  case 0x80475d8:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_080475e8;
    ScriptEngine_Routine_080486B2(*puVar3);
  case 0x80475ec:
    uVar5 = param_1[0xd4];
    iVar2 = _LAB_080475fc;
    goto SUB_08048662;
  case 0x8047600:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08047610;
    ScriptEngine_Routine_08048626(*puVar3);
  case 0x8047614:
    uVar5 = param_1[0xd4];
    iVar2 = _LAB_08047624;
    goto SUB_08048966;
  case 0x8047628:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08047638;
    ScriptEngine_Routine_08048F5E(*puVar3);
  case 0x804763c:
    uVar5 = param_1[0xd4];
    puVar9 = _LAB_0804764c;
    goto ScriptEngine_Routine_08048E76;
  case 0x8047650:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08047660;
    ScriptEngine_Routine_08048E36(*puVar3);
  case 0x8047664:
    uVar5 = param_1[0xd4];
    iVar2 = _LAB_08047674;
    goto ScriptEngine_Routine_08048EC6;
  case 0x8047678:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08047688;
    ScriptEngine_Routine_08048966(*puVar3);
  case 0x804768c:
    uVar5 = (*(byte *)(param_1[0xd4] + _LAB_080476a4) & 0x3f) >> 3;
    break;
  case 0x80476a8:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_080476b8;
    ScriptEngine_Routine_08048E36(*puVar3);
  case 0x80476bc:
    uVar5 = param_1[0xd4];
    puVar9 = _LAB_080476cc;
    goto SUB_08048f2e;
  case 0x80476d0:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_080476e0;
    ScriptEngine_Routine_08048E5E(*puVar3);
  case 0x80476e4:
    uVar5 = param_1[0xd4];
    puVar9 = _LAB_080476f4;
    goto ScriptEngine_Routine_08048E76;
  case 0x80476f8:
    uVar5 = param_1[0xd4];
    param_1 = 0x2178;
    goto LAB_08047c1a;
  case 0x8047708:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08047718;
    ScriptEngine_Routine_08048F46(*puVar3);
  case 0x804771c:
    uVar5 = param_1[0xd4];
    param_1 = _LAB_0804772c;
    goto ScriptEngine_Routine_080486B2;
  case 0x8047730:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08047740;
    ScriptEngine_Routine_08048662(*puVar3);
  case 0x8047744:
    uVar5 = param_1[0xd4];
    iVar2 = _LAB_08047754;
    goto ScriptEngine_Routine_08048F16;
  case 0x8047758:
    bVar1 = *(byte *)(param_1[0xd4] + (int)_LAB_08047770);
    param_1 = _LAB_08047770;
ScriptEngine_Routine_08047766:
    ScriptEngine_Routine_08048FEE(bVar1 & 0x1f);
case_08047774:
    uVar5 = param_1[0xd4];
    iVar2 = _LAB_08047784;
    goto SUB_08048662;
  case 0x8047774:
    goto case_08047774;
  case 0x8047788:
    puVar3 = param_1 + 0xd4;
    param_1 = (uint *)(uint)(*(byte *)(*puVar3 + _LAB_080477a4) >> 7);
    ScriptEngine_Routine_08048A7C(*(undefined1 *)(*puVar3 + _LAB_080477a8),1);
  case 0x80477ac:
    uVar5 = param_1[0xd4];
    iVar2 = _LAB_080477bc;
    goto SUB_08048966;
  case 0x80477c0:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_080477d0;
    ScriptEngine_Routine_080486B2(*puVar3);
  case 0x80477d4:
    uVar5 = param_1[0xd4];
    iVar2 = _LAB_080477e4;
    goto SUB_08048662;
  case 0x80477e8:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_080477f8;
    ScriptEngine_Routine_08048F16(*puVar3);
  case 0x80477fc:
    uVar5 = param_1[0xd4];
    puVar9 = _LAB_0804780c;
    goto SUB_08048f2e;
  case 0x8047810:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08047820;
    ScriptEngine_Routine_08048E5E(*puVar3);
  case 0x8047824:
    uVar5 = param_1[0xd4];
    puVar9 = _LAB_08047834;
    goto ScriptEngine_Routine_08048E76;
  case 0x8047838:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08047848;
    ScriptEngine_Routine_08048E36(*puVar3);
  case 0x804784c:
    uVar5 = param_1[0xd4];
    puVar9 = _LAB_0804785c;
    goto SUB_08048f2e;
  case 0x8047860:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08047870;
    ScriptEngine_Routine_08048E5E(*puVar3);
  case 0x8047874:
    uVar5 = param_1[0xd4];
    puVar9 = _LAB_08047884;
    goto ScriptEngine_Routine_08048E76;
  case 0x8047888:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08047898;
    ScriptEngine_Routine_08048E36(*puVar3);
  case 0x804789c:
    uVar5 = param_1[0xd4];
    puVar9 = _LAB_080478ac;
    goto SUB_08048f2e;
  case 0x80478b0:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_080478c0;
    ScriptEngine_Routine_08048E5E(*puVar3);
  case 0x80478c4:
    uVar5 = param_1[0xd4];
    puVar9 = _LAB_080478d4;
    goto ScriptEngine_Routine_08048E76;
  case 0x80478d8:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_080478e8;
    ScriptEngine_Routine_08048E36(*puVar3);
  case 0x80478ec:
    uVar5 = param_1[0xd4];
    puVar9 = 0x2180;
    goto SUB_08048f2e;
  case 0x80478fc:
    puVar3 = param_1 + 0xd4;
    param_1 = (uint *)0x2180;
    ScriptEngine_Routine_08048E5E(*puVar3);
  case 0x804790c:
    uVar5 = param_1[0xd4];
    puVar9 = 0x2180;
    goto ScriptEngine_Routine_08048E76;
  case 0x804791c:
    puVar3 = param_1 + 0xd4;
    param_1 = (uint *)0x2180;
    ScriptEngine_Routine_08048E36(*puVar3);
  case 0x804792c:
    uVar5 = param_1[0xd4];
    puVar9 = _LAB_0804793c;
    goto SUB_08048f2e;
  case 0x8047940:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08047950;
    ScriptEngine_Routine_08048E5E(*puVar3);
  case 0x8047954:
    uVar5 = param_1[0xd4];
    puVar9 = _LAB_08047964;
    goto ScriptEngine_Routine_08048E76;
  case 0x8047968:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08047978;
    ScriptEngine_Routine_08048E36(*puVar3);
  case 0x804797c:
    uVar5 = param_1[0xd4];
    puVar9 = _LAB_0804798c;
    goto SUB_08048f2e;
  case 0x8047990:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_080479a0;
    ScriptEngine_Routine_08048F46(*puVar3);
  case 0x80479a4:
    uVar5 = param_1[0xd4];
    param_1 = _LAB_080479b4;
    goto ScriptEngine_Routine_080486B2;
  case 0x80479b8:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_080479c8;
    ScriptEngine_Routine_08048662(*puVar3);
  case 0x80479cc:
    uVar5 = param_1[0xd4];
    param_1 = _LAB_080479dc;
    goto SUB_08048626;
  case 0x80479e0:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_080479f0;
    ScriptEngine_Routine_08048966(*puVar3);
  case 0x80479f4:
    uVar5 = param_1[0xd4];
    param_1 = _LAB_08047a04;
    goto ScriptEngine_Routine_080486B2;
  case 0x8047a08:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08047a18;
    ScriptEngine_Routine_08048662(*puVar3);
  case 0x8047a1c:
    uVar5 = (uint)(*(byte *)(param_1[0xd4] + _LAB_08047a38) >> 7);
    uVar4 = (uint)*(byte *)(param_1[0xd4] + _LAB_08047a3c);
    uVar7 = 1;
    goto ScriptEngine_Routine_08048A7C;
  case 0x8047a40:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08047a50;
    ScriptEngine_Routine_08048C0E(*puVar3);
  case 0x8047a54:
    uVar5 = param_1[0xd4];
    iVar2 = _LAB_08047a64;
    goto ScriptEngine_Routine_08048E5E;
  case 0x8047a68:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08047a78;
    ScriptEngine_Routine_08048E76(*puVar3);
  case 0x8047a7c:
    uVar5 = param_1[0xd4];
    iVar2 = _LAB_08047a8c;
    goto ScriptEngine_Routine_08048E36;
  case 0x8047a90:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08047aa0;
    ScriptEngine_Routine_08048F2E(*puVar3);
  case 0x8047aa4:
    uVar5 = param_1[0xd4];
    iVar2 = _LAB_08047ab4;
    goto ScriptEngine_Routine_08048E5E;
  case 0x8047ab8:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08047ac8;
    ScriptEngine_Routine_08048E76(*puVar3);
  case 0x8047acc:
    uVar5 = param_1[0xd4];
    iVar2 = _LAB_08047adc;
    goto ScriptEngine_Routine_08048E36;
  case 0x8047ae0:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08047af0;
    ScriptEngine_Routine_08048F2E(*puVar3);
  case 0x8047af4:
    uVar5 = (*(byte *)(param_1[0xd4] + _LAB_08047b0c) & 0x1f) >> 2;
    break;
  case 0x8047b10:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08047b20;
    ScriptEngine_Routine_08048662(*puVar3);
  case 0x8047b24:
    uVar5 = param_1[0xd4];
    param_1 = _LAB_08047b34;
    goto SUB_08048626;
  case 0x8047b38:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08047b48;
    ScriptEngine_Routine_08048966(*puVar3);
  case 0x8047b4c:
    uVar5 = param_1[0xd4];
    param_1 = _LAB_08047b5c;
    goto ScriptEngine_Routine_080486B2;
  case 0x8047b60:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08047b70;
    ScriptEngine_Routine_08048662(*puVar3);
  case 0x8047b74:
    uVar5 = (uint)(*(byte *)(param_1[0xd4] + _LAB_08047b90) >> 7);
    uVar4 = (uint)*(byte *)(param_1[0xd4] + _LAB_08047b94);
    uVar7 = 1;
    goto ScriptEngine_Routine_08048A7C;
  case 0x8047b98:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08047ba8;
    ScriptEngine_Routine_08048966(*puVar3);
  case 0x8047bac:
    uVar5 = param_1[0xd4];
    param_1 = _LAB_08047bbc;
    goto ScriptEngine_Routine_080486B2;
  case 0x8047bc0:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08047bd0;
    ScriptEngine_Routine_08048662(*puVar3);
  case 0x8047bd4:
    uVar5 = param_1[0xd4];
    iVar2 = _LAB_08047be4;
    goto ScriptEngine_Routine_080483AE;
  case 0x8047be8:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08047bf8;
    ScriptEngine_Routine_08048E5E(*puVar3);
  case 0x8047bfc:
    uVar5 = param_1[0xd4];
    puVar9 = _LAB_08047c0c;
    goto ScriptEngine_Routine_08048E76;
  case 0x8047c10:
    uVar5 = param_1[0xd4];
    param_1 = _LAB_08047c28;
LAB_08047c1a:
    ScriptEngine_Routine_08048FEE((*(uint *)(uVar5 + (int)param_1) & 0x3ffff) >> 0xe);
case_08047C2C:
    uVar5 = param_1[0xd4];
    iVar2 = _LAB_08047c3c;
    goto ScriptEngine_Routine_08048E5E;
  case 0x8047c2c:
    goto case_08047C2C;
  case 0x8047c40:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08047c50;
    ScriptEngine_Routine_08048E76(*puVar3);
  case 0x8047c54:
    uVar5 = param_1[0xd4];
    iVar2 = _LAB_08047c64;
    goto ScriptEngine_Routine_08048E36;
  case 0x8047c68:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08047c78;
    ScriptEngine_Routine_08048F2E(*puVar3);
  case 0x8047c7c:
    uVar5 = param_1[0xd4];
    param_1 = _LAB_08047c8c;
    goto ScriptEngine_Routine_080486B2;
  case 0x8047c90:
    puVar3 = param_1 + 0xd4;
    param_1 = (uint *)(uint)(*(byte *)(*puVar3 + _LAB_08047cb4) >> 5);
    ScriptEngine_Routine_08048FEE((*(byte *)(*puVar3 + _LAB_08047cb8) & 1) << 3 | (uint)param_1);
  case 0x8047cbc:
    uVar5 = param_1[0xd4];
    iVar2 = _LAB_08047ccc;
    goto SUB_08048966;
  case 0x8047cd0:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08047ce0;
    ScriptEngine_Routine_080486B2(*puVar3);
  case 0x8047ce4:
    uVar5 = param_1[0xd4];
    iVar2 = _LAB_08047cf4;
    goto SUB_08048662;
  case 0x8047cf8:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08047d08;
    ScriptEngine_Routine_08048626(*puVar3);
  case 0x8047d0c:
    uVar5 = param_1[0xd4];
    iVar2 = _LAB_08047d1c;
    goto SUB_08048966;
  case 0x8047d20:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08047d30;
    ScriptEngine_Routine_080486B2(*puVar3);
  case 0x8047d34:
    uVar5 = (*(uint *)(param_1[0xd4] + _LAB_08047d4c) & 0x1ffff) >> 0xd;
    break;
  case 0x8047d50:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08047d60;
    ScriptEngine_Routine_08048966(*puVar3);
  case 0x8047d64:
    uVar5 = param_1[0xd4];
    param_1 = _LAB_08047d74;
    goto ScriptEngine_Routine_080486B2;
  case 0x8047d78:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08047d88;
    ScriptEngine_Routine_08048FC6(*puVar3);
  case 0x8047d8c:
    uVar5 = param_1[0xd4];
    iVar2 = _LAB_08047d9c;
    goto ScriptEngine_Routine_08048E36;
  case 0x8047da0:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08047db0;
    ScriptEngine_Routine_08048F2E(*puVar3);
  case 0x8047db4:
    uVar5 = param_1[0xd4];
    iVar2 = _LAB_08047dc4;
    goto ScriptEngine_Routine_08048E5E;
  case 0x8047dc8:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08047dd8;
    ScriptEngine_Routine_08048E76(*puVar3);
  case 0x8047ddc:
    uVar5 = param_1[0xd4];
    iVar2 = _LAB_08047dec;
    goto ScriptEngine_Routine_08048E36;
  case 0x8047df0:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08047e00;
    ScriptEngine_Routine_08048F2E(*puVar3);
  case 0x8047e04:
    uVar5 = param_1[0xd4];
    iVar2 = _LAB_08047e14;
    goto ScriptEngine_Routine_08048E5E;
  case 0x8047e18:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08047e28;
    ScriptEngine_Routine_08048E76(*puVar3);
  case 0x8047e2c:
    uVar5 = param_1[0xd4];
    iVar2 = _LAB_08047e3c;
    goto ScriptEngine_Routine_08048E36;
  case 0x8047e40:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08047e50;
    ScriptEngine_Routine_08048F2E(*puVar3);
  case 0x8047e54:
    uVar5 = param_1[0xd4];
    iVar2 = _LAB_08047e64;
    goto ScriptEngine_Routine_08048E5E;
  case 0x8047e68:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08047e78;
    ScriptEngine_Routine_08048E76(*puVar3);
  case 0x8047e7c:
    uVar5 = param_1[0xd4];
    iVar2 = _LAB_08047e8c;
    goto ScriptEngine_Routine_08048E36;
  case 0x8047e90:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08047ea0;
    ScriptEngine_Routine_08048F2E(*puVar3);
  case 0x8047ea4:
    uVar5 = param_1[0xd4];
    iVar2 = _LAB_08047eb4;
    goto ScriptEngine_Routine_08048E5E;
  case 0x8047eb8:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08047ec8;
    ScriptEngine_Routine_08048E76(*puVar3);
  case 0x8047ecc:
    uVar5 = param_1[0xd4];
    iVar2 = _LAB_08047edc;
    goto ScriptEngine_Routine_08048E36;
  case 0x8047ee0:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08047ef0;
    ScriptEngine_Routine_08048F2E(*puVar3);
  case 0x8047ef4:
    uVar5 = param_1[0xd4];
    iVar2 = _LAB_08047f04;
    goto ScriptEngine_Routine_08048E5E;
  case 0x8047f08:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08047f18;
    ScriptEngine_Routine_08048E76(*puVar3);
  case 0x8047f1c:
    uVar5 = param_1[0xd4];
    iVar2 = _LAB_08047f2c;
    goto ScriptEngine_Routine_08048E36;
  case 0x8047f30:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08047f40;
    ScriptEngine_Routine_08048F2E(*puVar3);
  case 0x8047f44:
    uVar5 = param_1[0xd4];
    iVar2 = _LAB_08047f54;
    goto ScriptEngine_Routine_08048E5E;
  case 0x8047f58:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08047f68;
    ScriptEngine_Routine_08048E76(*puVar3);
  case 0x8047f6c:
    uVar5 = param_1[0xd4];
    iVar2 = _LAB_08047f7c;
    goto ScriptEngine_Routine_08048E36;
  case 0x8047f80:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08047f90;
    ScriptEngine_Routine_08048F2E(*puVar3);
  case 0x8047f94:
    uVar5 = param_1[0xd4];
    iVar2 = _LAB_08047fa4;
    goto ScriptEngine_Routine_08048E36;
  case 0x8047fa8:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08047fb8;
    ScriptEngine_Routine_08048F2E(*puVar3);
  case 0x8047fbc:
    uVar5 = param_1[0xd4];
    iVar2 = _LAB_08047fcc;
    goto ScriptEngine_Routine_08048E5E;
  case 0x8047fd0:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08047fe0;
    ScriptEngine_Routine_08048E76(*puVar3);
  case 0x8047fe4:
    uVar5 = param_1[0xd4];
    iVar2 = _LAB_08047ff4;
    goto ScriptEngine_Routine_08048E36;
  case 0x8047ff8:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08048008;
    ScriptEngine_Routine_08048F2E(*puVar3);
  case 0x804800c:
    uVar5 = param_1[0xd4];
    iVar2 = _LAB_0804801c;
    goto ScriptEngine_Routine_08048E5E;
  case 0x8048020:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08048030;
    ScriptEngine_Routine_08048E76(*puVar3);
  case 0x8048034:
    uVar5 = param_1[0xd4];
    iVar2 = _LAB_08048044;
    goto ScriptEngine_Routine_08048E36;
  case 0x8048048:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08048058;
    ScriptEngine_Routine_08048F2E(*puVar3);
  case 0x804805c:
    uVar5 = param_1[0xd4];
    iVar2 = _LAB_0804806c;
    goto ScriptEngine_Routine_08048E5E;
  case 0x8048070:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08048080;
    ScriptEngine_Routine_08048E76(*puVar3);
  case 0x8048084:
    uVar5 = param_1[0xd4];
    iVar2 = _LAB_08048094;
    goto ScriptEngine_Routine_08048E36;
  case 0x8048098:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_080480a8;
    ScriptEngine_Routine_08048F2E(*puVar3);
  case 0x80480ac:
    uVar5 = param_1[0xd4];
    iVar2 = _LAB_080480bc;
    goto ScriptEngine_Routine_08048F46;
  case 0x80480c0:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_080480d0;
    ScriptEngine_Routine_08048F5E(*puVar3);
  case 0x80480d4:
    uVar5 = param_1[0xd4];
    iVar2 = _LAB_080480e4;
    goto SUB_08048f76;
  case 0x80480e8:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_080480f8;
    ScriptEngine_Routine_08048FC6(*puVar3);
  case 0x80480fc:
    uVar5 = param_1[0xd4];
    iVar2 = _LAB_0804810c;
    goto SUB_08048fde;
  case 0x8048110:
    uVar5 = param_1[0xd4];
    param_1 = _LAB_08048128;
ScriptEngine_Routine_0804811A:
    ScriptEngine_Routine_08048FEE((*(uint *)(uVar5 + (int)param_1) & 0x1ffff) >> 0xf);
case_0804812C:
    uVar5 = param_1[0xd4];
    iVar2 = _LAB_0804813c;
    goto ScriptEngine_Routine_08048C0E;
  case 0x804812c:
    goto case_0804812C;
  case 0x8048140:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08048150;
    ScriptEngine_Routine_08048E5E(*puVar3);
  case 0x8048154:
    uVar5 = param_1[0xd4];
    iVar2 = _LAB_08048164;
    goto SUB_08048f76;
  case 0x8048168:
    uVar5 = param_1[0xd4];
    iVar2 = 0x219A;
    goto SUB_08048662;
  case 0x8048178:
    uVar5 = param_1[0xd4];
    param_1 = 0x219A;
    goto SUB_08048626;
  case 0x8048188:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_080481a0;
    ScriptEngine_Routine_08048FEE((*(byte *)(*puVar3 + (int)_LAB_080481a0) & 0xf) >> 1);
  case 0x80481a4:
    uVar5 = param_1[0xd4];
    puVar9 = _LAB_080481b4;
    goto ScriptEngine_Routine_08048E76;
  case 0x80481b8:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_080481c8;
    ScriptEngine_Routine_08048FDE(*puVar3);
  case 0x80481cc:
    uVar5 = (uint)(*(byte *)(param_1[0xd4] + _LAB_080481e8) >> 7);
    uVar4 = (uint)*(byte *)(param_1[0xd4] + _LAB_080481ec);
    uVar7 = 3;
    goto ScriptEngine_Routine_08048A7C;
  case 0x80481f0:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08048200;
    ScriptEngine_Routine_08048E5E(*puVar3);
  case 0x8048204:
    uVar5 = param_1[0xd4];
    iVar2 = _LAB_08048214;
    goto SUB_08048f76;
  case 0x8048218:
    uVar5 = param_1[0xd4];
    iVar2 = 0x219C;
    goto SUB_08048662;
  case 0x8048228:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08048238;
    ScriptEngine_Routine_08048F16(*puVar3);
  case 0x804823c:
    uVar5 = param_1[0xd4];
    puVar9 = _LAB_0804824c;
    goto SUB_08048f2e;
  case 0x8048250:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08048260;
    ScriptEngine_Routine_08048F46(*puVar3);
  case 0x8048264:
    uVar5 = param_1[0xd4];
    param_1 = 0x219D;
    goto ScriptEngine_Routine_080486B2;
  case 0x8048274:
    uVar5 = param_1[0xd4];
    iVar2 = _LAB_08048284;
    goto SUB_08048fc6;
  case 0x8048288:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08048298;
    ScriptEngine_Routine_08048E36(*puVar3);
  case 0x804829c:
    uVar5 = param_1[0xd4];
    iVar2 = _LAB_080482ac;
    goto ScriptEngine_Routine_08048EC6;
  case 0x80482b0:
    uVar5 = param_1[0xd4];
    iVar2 = 0x219E;
    goto SUB_08048966;
  case 0x80482c0:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_080482d0;
    ScriptEngine_Routine_08048F5E(*puVar3);
  case 0x80482d4:
    uVar5 = param_1[0xd4];
    puVar9 = _LAB_080482e4;
    goto ScriptEngine_Routine_08048E76;
  case 0x80482e8:
    uVar5 = param_1[0xd4];
    puVar9 = 0x219E;
    goto LAB_08048950;
  case 0x80482f8:
    uVar5 = param_1[0xd4];
    iVar2 = 0x219F;
    goto SUB_08048966;
  case 0x8048308:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08048318;
    ScriptEngine_Routine_08048F5E(*puVar3);
  case 0x804831c:
    uVar5 = param_1[0xd4];
    puVar9 = _LAB_0804832c;
    goto ScriptEngine_Routine_08048E76;
  case 0x8048330:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08048340;
    ScriptEngine_Routine_08048E36(*puVar3);
  case 0x8048344:
    uVar5 = param_1[0xd4];
    puVar9 = _LAB_08048354;
    goto SUB_08048f2e;
  case 0x8048358:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08048368;
    ScriptEngine_Routine_08048F46(*puVar3);
  case 0x804836c:
    uVar5 = param_1[0xd4];
    iVar2 = _LAB_0804837c;
    goto SUB_08048f5e;
  case 0x8048380:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08048390;
    ScriptEngine_Routine_08048F76(*puVar3);
  case 0x8048394:
    uVar5 = param_1[0xd4];
    iVar2 = 0x21A0;
    goto SUB_08048662;
  case 0x80483a4:
    uVar5 = param_1[0xd4];
    iVar2 = _LAB_080483bc;
ScriptEngine_Routine_080483AE:
    uVar5 = (*(ushort *)(uVar5 + iVar2) & 0x3ff) >> 7;
    break;
  case 0x80483c0:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_080483d0;
    ScriptEngine_Routine_08048F2E(*puVar3);
  case 0x80483d4:
    uVar5 = param_1[0xd4];
    iVar2 = _LAB_080483e4;
    goto ScriptEngine_Routine_08048F46;
  case 0x80483e8:
    uVar5 = param_1[0xd4];
    param_1 = 0x21A1;
    goto ScriptEngine_Routine_080486B2;
  case 0x80483f8:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08048408;
    ScriptEngine_Routine_08048FC6(*puVar3);
  case 0x804840c:
    uVar5 = param_1[0xd4];
    iVar2 = _LAB_0804841c;
    goto ScriptEngine_Routine_08048E36;
  case 0x8048420:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08048430;
    ScriptEngine_Routine_08048EC6(*puVar3);
  case 0x8048434:
    uVar5 = param_1[0xd4];
    iVar2 = 0x21A2;
    goto SUB_08048966;
  case 0x8048444:
    uVar5 = param_1[0xd4];
    iVar2 = _LAB_08048454;
    goto SUB_08048f5e;
  case 0x8048458:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08048468;
    ScriptEngine_Routine_08048E76(*puVar3);
  case 0x804846c:
    uVar5 = param_1[0xd4];
    iVar2 = _LAB_0804847c;
    goto ScriptEngine_Routine_08048E36;
  case 0x8048480:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08048490;
    ScriptEngine_Routine_08048F2E(*puVar3);
  case 0x8048494:
    uVar5 = param_1[0xd4];
    iVar2 = _LAB_080484a4;
    goto ScriptEngine_Routine_08048E5E;
  case 0x80484a8:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_080484b8;
    ScriptEngine_Routine_08048E76(*puVar3);
  case 0x80484bc:
    uVar5 = param_1[0xd4];
    iVar2 = _LAB_080484cc;
    goto SUB_08048fde;
  case 0x80484d0:
    uVar5 = (uint)(*(byte *)(param_1[0xd4] + 0x21A3) >> 7);
    uVar4 = (uint)*(byte *)(param_1[0xd4] + 0x21A4);
    uVar7 = 1;
    goto ScriptEngine_Routine_08048A7C;
  case 0x80484f4:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08048504;
    ScriptEngine_Routine_08048C0E(*puVar3);
  case 0x8048508:
    uVar5 = param_1[0xd4];
    iVar2 = _LAB_08048518;
    goto ScriptEngine_Routine_08048E5E;
  case 0x804851c:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_0804852c;
    ScriptEngine_Routine_08048F76(*puVar3);
  case 0x8048530:
    uVar5 = param_1[0xd4];
    iVar2 = 0x21A4;
    goto SUB_08048662;
  case 0x8048540:
    uVar5 = param_1[0xd4];
    iVar2 = _LAB_08048550;
    goto ScriptEngine_Routine_08048F16;
  case 0x8048554:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08048564;
    ScriptEngine_Routine_08048F2E(*puVar3);
  case 0x8048568:
    uVar5 = param_1[0xd4];
    iVar2 = _LAB_08048578;
    goto ScriptEngine_Routine_08048F46;
  case 0x804857c:
    uVar5 = param_1[0xd4];
    param_1 = 0x21A5;
    goto ScriptEngine_Routine_080486B2;
  case 0x804858c:
    uVar5 = param_1[0xd4];
    iVar2 = 0x21A5;
    goto SUB_08048662;
  case 0x804859c:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_080485b4;
    ScriptEngine_Routine_08048FEE((*(uint *)(*puVar3 + (int)_LAB_080485b4) & 0x3ffff) >> 0xf);
  case 0x80485b8:
    uVar5 = param_1[0xd4];
    iVar2 = _LAB_080485c8;
    goto ScriptEngine_Routine_08048F46;
  case 0x80485cc:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_080485dc;
    ScriptEngine_Routine_08048F5E(*puVar3);
  case 0x80485e0:
    uVar5 = param_1[0xd4];
    iVar2 = _LAB_080485f0;
    goto SUB_08048f76;
  case 0x80485f4:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08048604;
    ScriptEngine_Routine_08048FC6(*puVar3);
  case 0x8048608:
    uVar5 = param_1[0xd4];
    iVar2 = _LAB_08048618;
    goto SUB_08048fde;
  case 0x804861c:
    uVar5 = param_1[0xd4];
    param_1 = _LAB_08048634;
SUB_08048626:
    ScriptEngine_Routine_08048FEE((*(ushort *)(uVar5 + (int)param_1) & 0x1ff) >> 7);
case_08048638:
    uVar5 = param_1[0xd4];
    iVar2 = 0x21A7;
SUB_08048966:
    uVar5 = (*(byte *)(uVar5 + iVar2) & 7) >> 1;
    break;
  case 0x8048638:
    goto case_08048638;
  case 0x8048648:
    uVar5 = param_1[0xd4];
    param_1 = 0x21A7;
    goto ScriptEngine_Routine_080486B2;
  case 0x8048658:
    uVar5 = param_1[0xd4];
    iVar2 = _LAB_08048670;
SUB_08048662:
    uVar5 = (*(byte *)(uVar5 + iVar2) & 0x7f) >> 5;
    break;
  case 0x8048674:
    uVar5 = (uint)(*(byte *)(param_1[0xd4] + 0x21A7) >> 7);
    uVar4 = (uint)*(byte *)(param_1[0xd4] + 0x21A8);
    uVar7 = 1;
    goto ScriptEngine_Routine_08048A7C;
  case 0x8048698:
    uVar5 = param_1[0xd4];
    iVar2 = 0x21A8;
    goto SUB_08048966;
  case 0x80486a8:
    uVar5 = param_1[0xd4];
    param_1 = _LAB_080486c0;
ScriptEngine_Routine_080486B2:
    ScriptEngine_Routine_08048FEE((*(byte *)(uVar5 + (int)param_1) & 0x1f) >> 3);
case_080486C4:
    uVar5 = (uint)(*(byte *)(param_1[0xd4] + _LAB_080486d8) >> 5);
    break;
  case 0x80486c4:
    goto case_080486C4;
  case 0x80486dc:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_080486ec;
    ScriptEngine_Routine_08048F2E(*puVar3);
  case 0x80486f0:
    uVar5 = param_1[0xd4];
    iVar2 = _LAB_08048700;
    goto ScriptEngine_Routine_08048E5E;
  case 0x8048704:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08048714;
    ScriptEngine_Routine_08048F76(*puVar3);
  case 0x8048718:
    uVar5 = param_1[0xd4];
    iVar2 = _LAB_08048728;
    goto SUB_08048fc6;
  case 0x804872c:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_0804873c;
    ScriptEngine_Routine_08048FDE(*puVar3);
  case 0x8048740:
    uVar5 = param_1[0xd4];
    iVar2 = _LAB_08048750;
    goto ScriptEngine_Routine_08048F16;
  case 0x8048754:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08048764;
    ScriptEngine_Routine_08048EC6(*puVar3);
  case 0x8048768:
    uVar5 = param_1[0xd4];
    iVar2 = 0x21AA;
    goto ScriptEngine_Routine_08048C0E;
  case 0x8048778:
    uVar5 = param_1[0xd4];
    iVar2 = _LAB_08048788;
    goto ScriptEngine_Routine_08048F46;
  case 0x804878c:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_0804879c;
    ScriptEngine_Routine_08048F5E(*puVar3);
  case 0x80487a0:
    uVar5 = param_1[0xd4];
    iVar2 = _LAB_080487b0;
    goto SUB_08048f76;
  case 0x80487b4:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_080487c4;
    ScriptEngine_Routine_08048FC6(*puVar3);
  case 0x80487c8:
    uVar5 = param_1[0xd4];
    iVar2 = _LAB_080487d8;
    goto SUB_08048fde;
  case 0x80487dc:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_080487ec;
    ScriptEngine_Routine_08048F16(*puVar3);
  case 0x80487f0:
    uVar5 = param_1[0xd4];
    iVar2 = _LAB_08048800;
    goto ScriptEngine_Routine_08048EC6;
  case 0x8048804:
    uVar5 = param_1[0xd4];
    iVar2 = 0x21AB;
    goto ScriptEngine_Routine_08048C0E;
  case 0x8048814:
    puVar3 = param_1 + 0xd4;
    param_1 = _LAB_08048824;
    ScriptEngine_Routine_08048F46(*puVar3);
  case 0x8048828:
    uVar5 = param_1[0xd4];
    iVar2 = _LAB_08048838;
    goto SUB_08048f5e;
  case 0x804883c:
    uVar5 = param_1[0xd4];
    iVar2 = 0x21B4;
    goto LAB_0804890a;
  case 0x804884c:
    uVar5 = param_1[0xd4];
    param_1 = 0x21B4;
    goto LAB_080488ee;
  case 0x804885c:
    uVar5 = param_1[0xd4];
    iVar2 = 0x21B6;
    goto LAB_0804890a;
  case 0x804886c:
    uVar5 = param_1[0xd4];
    param_1 = (uint *)(uint)(*(byte *)(uVar5 + 0x21B7) >> 6);
    puVar9 = 0x21B8;
    goto LAB_08048930;
  case 0x8048888:
    uVar5 = param_1[0xd4];
    iVar2 = 0x21B8;
    goto LAB_0804890a;
  case 0x8048898:
    uVar5 = param_1[0xd4];
    param_1 = 0x21B8;
    goto LAB_080488ee;
  case 0x80488a8:
    uVar5 = param_1[0xd4];
    iVar2 = 0x21BA;
    goto LAB_0804890a;
  case 0x80488b8:
    uVar5 = param_1[0xd4];
    param_1 = (uint *)(uint)(*(byte *)(uVar5 + 0x21BB) >> 6);
    puVar9 = 0x21BC;
    goto LAB_08048930;
  case 0x80488d4:
    uVar5 = param_1[0xd4];
    iVar2 = 0x21BC;
    goto LAB_0804890a;
  case 0x80488e4:
    uVar5 = param_1[0xd4];
    param_1 = _LAB_080488fc;
LAB_080488ee:
    ScriptEngine_Routine_08048FEE((*(uint *)(uVar5 + (int)param_1) & 0x3fffff) >> 0xe);
case_08048900:
    uVar5 = param_1[0xd4];
    iVar2 = _LAB_08048918;
LAB_0804890a:
    uVar5 = (*(ushort *)(uVar5 + iVar2) & 0x3fff) >> 6;
    break;
  case 0x8048900:
    goto case_08048900;
  case 0x804891c:
    uVar5 = param_1[0xd4];
    param_1 = (uint *)(uint)(*(byte *)(uVar5 + _LAB_08048940) >> 6);
    puVar9 = 0x21c0;
LAB_08048930:
    ScriptEngine_Routine_08048FEE(((byte)puVar9[uVar5] & 0x3f) << 2 | (uint)param_1);
case_08048944:
    uVar5 = param_1[0xd4];
    puVar9 = 0x21c0;
LAB_08048950:
    uVar5 = (*(ushort *)(puVar9 + uVar5) & 0x1ff) >> 6;
    break;
  case 0x8048944:
    goto case_08048944;
  case 0x804895c:
    uVar5 = param_1[0xd4];
    iVar2 = 0x21C1;
    goto SUB_08048966;
  case 0x8048974:
    uVar5 = param_1[0xd4];
    iVar2 = 0x21C1;
    goto SUB_08048f5e;
  case 0x8048984:
    uVar5 = param_1[0xd4];
    iVar2 = 0x21C1;
    goto SUB_08048f76;
  case 0x8048994:
    uVar5 = param_1[0xd4];
    iVar2 = 0x21C1;
    goto SUB_08048fc6;
  case 0x80489a4:
    uVar5 = param_1[0xd4];
    iVar2 = 0x21C1;
    goto SUB_08048fde;
  case 0x80489b4:
    uVar5 = param_1[0xd4];
    iVar2 = 0x21C1;
    goto ScriptEngine_Routine_08048F16;
  case 0x80489c4:
    uVar5 = param_1[0xd4];
    iVar2 = 0x21C2;
    goto ScriptEngine_Routine_08048EC6;
  case 0x80489d4:
    uVar5 = param_1[0xd4];
    iVar2 = 0x21C2;
    goto ScriptEngine_Routine_08048C0E;
  case 0x80489e4:
    uVar5 = param_1[0xd4];
    iVar2 = 0x21C2;
    goto ScriptEngine_Routine_08048F46;
  case 0x80489f4:
    uVar5 = param_1[0xd4];
    iVar2 = 0x21C2;
    goto SUB_08048f5e;
  case 0x8048a04:
    uVar5 = param_1[0xd4];
    iVar2 = 0x21C2;
    goto SUB_08048f76;
  case 0x8048a14:
    uVar5 = param_1[0xd4];
    iVar2 = 0x21C2;
    goto SUB_08048fc6;
  case 0x8048a24:
    uVar5 = param_1[0xd4];
    iVar2 = 0x21C2;
    goto SUB_08048fde;
  case 0x8048a34:
    uVar5 = (*(ushort *)(param_1[0xd4] + 0x21C2) & 0x7ff) >> 7;
    break;
  case 0x8048a4c:
    uVar5 = (*(byte *)(param_1[0xd4] + _ASSET_BLOCK_08048A60) & 0x7f) >> 3;
    break;
  case 0x8048a64:
    uVar5 = (uint)(*(byte *)(param_1[0xd4] + 0x21C3) >> 7);
    uVar4 = (uint)*(byte *)(param_1[0xd4] + 0x21C4);
    uVar7 = 7;
ScriptEngine_Routine_08048A7C:
    uVar5 = (uVar4 & uVar7) << 1 | uVar5;
    break;
  case 0x8048a8c:
    uVar5 = param_1[0xd4];
    iVar2 = 0x21C4;
    goto SUB_08048f5e;
  case 0x8048a9c:
    uVar5 = param_1[0xd4];
    iVar2 = 0x21C4;
    goto SUB_08048f76;
  case 0x8048aac:
    uVar5 = param_1[0xd4];
    iVar2 = 0x21C4;
    goto SUB_08048fc6;
  case 0x8048abc:
    uVar5 = param_1[0xd4];
    iVar2 = 0x21C4;
    goto SUB_08048fde;
  case 0x8048acc:
    uVar5 = param_1[0xd4];
    iVar2 = 0x21C4;
    goto ScriptEngine_Routine_08048F16;
  case 0x8048adc:
    uVar5 = param_1[0xd4];
    iVar2 = 0x21C5;
    goto ScriptEngine_Routine_08048EC6;
  case 0x8048aec:
    uVar5 = param_1[0xd4];
    iVar2 = 0x21C5;
    goto ScriptEngine_Routine_08048C0E;
  case 0x8048afc:
    uVar5 = param_1[0xd4];
    iVar2 = 0x21C5;
    goto ScriptEngine_Routine_08048F46;
  case 0x8048b0c:
    uVar5 = param_1[0xd4];
    iVar2 = 0x21C5;
    goto SUB_08048f5e;
  case 0x8048b1c:
    uVar5 = param_1[0xd4];
    iVar2 = 0x21C5;
    goto SUB_08048f76;
  case 0x8048b2c:
    uVar5 = param_1[0xd4];
    iVar2 = 0x21C5;
    goto SUB_08048fc6;
  case 0x8048b3c:
    uVar5 = param_1[0xd4];
    iVar2 = 0x21C5;
    goto SUB_08048fde;
  case 0x8048b4c:
    uVar5 = param_1[0xd4];
    iVar2 = 0x21C5;
    goto ScriptEngine_Routine_08048F16;
  case 0x8048b5c:
    uVar5 = param_1[0xd4];
    iVar2 = 0x21C6;
    goto ScriptEngine_Routine_08048EC6;
  case 0x8048b6c:
    uVar5 = (*(ushort *)(param_1[0xd4] + 0x21C6) & 0x1ff) >> 1;
    break;
  case 0x8048b84:
    uVar5 = param_1[0xd4];
    iVar2 = 0x21C7;
    goto ScriptEngine_Routine_08048C0E;
  case 0x8048b94:
    uVar5 = param_1[0xd4];
    iVar2 = 0x21C7;
    goto ScriptEngine_Routine_08048F46;
  case 0x8048ba4:
    uVar5 = param_1[0xd4];
    iVar2 = 0x21C7;
    goto SUB_08048f5e;
  case 0x8048bb4:
    uVar5 = param_1[0xd4];
    iVar2 = 0x21C7;
    goto SUB_08048f76;
  case 0x8048bc4:
    uVar5 = param_1[0xd4];
    iVar2 = 0x21C7;
    goto SUB_08048fc6;
  case 0x8048bd4:
    uVar5 = param_1[0xd4];
    iVar2 = 0x21C7;
    goto SUB_08048fde;
  case 0x8048be4:
    uVar5 = param_1[0xd4];
    iVar2 = 0x21C7;
    goto ScriptEngine_Routine_08048F16;
  case 0x8048bf4:
    uVar5 = param_1[0xd4];
    iVar2 = 0x21C8;
    goto ScriptEngine_Routine_08048EC6;
  case 0x8048c04:
    uVar5 = param_1[0xd4];
    iVar2 = 0x21C8;
ScriptEngine_Routine_08048C0E:
    uVar5 = (*(byte *)(uVar5 + iVar2) & 3) >> 1;
    break;
  case 0x8048c1c:
    uVar5 = param_1[0xd4];
    puVar9 = 0x21AB;
    goto ScriptEngine_Routine_08048E76;
  case 0x8048c2c:
    uVar5 = param_1[0xd4];
    iVar2 = 0x21AB;
    goto ScriptEngine_Routine_08048E36;
  case 0x8048c3c:
    uVar5 = param_1[0xd4];
    puVar9 = 0x21AC;
    goto SUB_08048f2e;
  case 0x8048c4c:
    uVar5 = param_1[0xd4];
    iVar2 = 0x21AC;
    goto ScriptEngine_Routine_08048E5E;
  case 0x8048c5c:
    uVar5 = param_1[0xd4];
    puVar9 = 0x21AC;
    goto ScriptEngine_Routine_08048E76;
  case 0x8048c6c:
    uVar5 = param_1[0xd4];
    iVar2 = 0x21AC;
    goto ScriptEngine_Routine_08048E36;
  case 0x8048c7c:
    uVar5 = param_1[0xd4];
    puVar9 = 0x21AD;
    goto SUB_08048f2e;
  case 0x8048c8c:
    uVar5 = param_1[0xd4];
    iVar2 = 0x21AD;
    goto ScriptEngine_Routine_08048E5E;
  case 0x8048c9c:
    uVar5 = param_1[0xd4];
    puVar9 = 0x21AD;
    goto ScriptEngine_Routine_08048E76;
  case 0x8048cac:
    uVar5 = param_1[0xd4];
    iVar2 = 0x21AD;
    goto ScriptEngine_Routine_08048E36;
  case 0x8048cbc:
    uVar5 = param_1[0xd4];
    puVar9 = 0x21AE;
    goto SUB_08048f2e;
  case 0x8048ccc:
    uVar5 = param_1[0xd4];
    iVar2 = 0x21AE;
    goto ScriptEngine_Routine_08048E5E;
  case 0x8048cdc:
    uVar5 = param_1[0xd4];
    puVar9 = 0x21AE;
    goto ScriptEngine_Routine_08048E76;
  case 0x8048cec:
    uVar5 = param_1[0xd4];
    iVar2 = 0x21AE;
    goto ScriptEngine_Routine_08048E36;
  case 0x8048cfc:
    uVar5 = param_1[0xd4];
    puVar9 = 0x21AF;
    goto SUB_08048f2e;
  case 0x8048d0c:
    uVar5 = param_1[0xd4];
    iVar2 = 0x21AF;
    goto ScriptEngine_Routine_08048E5E;
  case 0x8048d1c:
    uVar5 = param_1[0xd4];
    puVar9 = 0x21AF;
    goto ScriptEngine_Routine_08048E76;
  case 0x8048d2c:
    uVar5 = param_1[0xd4];
    iVar2 = 0x21AF;
    goto ScriptEngine_Routine_08048E36;
  case 0x8048d3c:
    uVar5 = param_1[0xd4];
    puVar9 = 0x21B0;
    goto SUB_08048f2e;
  case 0x8048d4c:
    uVar5 = param_1[0xd4];
    iVar2 = 0x21B0;
    goto ScriptEngine_Routine_08048E5E;
  case 0x8048d5c:
    uVar5 = param_1[0xd4];
    puVar9 = 0x21B0;
    goto ScriptEngine_Routine_08048E76;
  case 0x8048d6c:
    uVar5 = param_1[0xd4];
    iVar2 = 0x21B0;
    goto ScriptEngine_Routine_08048E36;
  case 0x8048d7c:
    uVar5 = param_1[0xd4];
    puVar9 = 0x21B1;
    goto SUB_08048f2e;
  case 0x8048d8c:
    uVar5 = param_1[0xd4];
    iVar2 = 0x21B1;
    goto ScriptEngine_Routine_08048E5E;
  case 0x8048d9c:
    uVar5 = param_1[0xd4];
    puVar9 = 0x21B1;
    goto ScriptEngine_Routine_08048E76;
  case 0x8048dac:
    uVar5 = param_1[0xd4];
    iVar2 = 0x21B1;
    goto ScriptEngine_Routine_08048E36;
  case 0x8048dbc:
    uVar5 = param_1[0xd4];
    puVar9 = 0x21B2;
    goto SUB_08048f2e;
  case 0x8048dcc:
    uVar5 = param_1[0xd4];
    iVar2 = 0x21B2;
    goto ScriptEngine_Routine_08048E5E;
  case 0x8048ddc:
    uVar5 = param_1[0xd4];
    puVar9 = 0x21B2;
    goto ScriptEngine_Routine_08048E76;
  case 0x8048dec:
    uVar5 = param_1[0xd4];
    iVar2 = 0x21B2;
    goto ScriptEngine_Routine_08048E36;
  case 0x8048dfc:
    uVar5 = param_1[0xd4];
    puVar9 = 0x21B3;
    goto SUB_08048f2e;
  case 0x8048e0c:
    uVar5 = param_1[0xd4];
    iVar2 = 0x21B3;
    goto ScriptEngine_Routine_08048E5E;
  case 0x8048e1c:
    uVar5 = param_1[0xd4];
    puVar9 = 0x21B3;
    goto ScriptEngine_Routine_08048E76;
  case 0x8048e2c:
    uVar5 = param_1[0xd4];
    iVar2 = 0x21B3;
ScriptEngine_Routine_08048E36:
    uVar5 = (uint)(*(byte *)(uVar5 + iVar2) >> 6);
    break;
  case 0x8048e44:
    uVar5 = param_1[0xd4];
    puVar9 = 0x21B4;
    goto SUB_08048f2e;
  case 0x8048e54:
    uVar5 = param_1[0xd4];
    iVar2 = 0x21B4;
ScriptEngine_Routine_08048E5E:
    uVar5 = (*(byte *)(uVar5 + iVar2) & 0xf) >> 2;
    break;
  case 0x8048e6c:
    uVar5 = param_1[0xd4];
    puVar9 = 0x21B4;
ScriptEngine_Routine_08048E76:
    uVar5 = ((byte)puVar9[uVar5] & 0x3f) >> 4;
    break;
  case 0x8048e84:
    uVar5 = param_1[0xd4];
    iVar2 = 0x21C8;
    goto ScriptEngine_Routine_08048F46;
  case 0x8048e94:
    uVar5 = param_1[0xd4];
    iVar2 = 0x21C8;
    goto SUB_08048f5e;
  case 0x8048ea4:
    uVar5 = (uint)(*(byte *)(param_1[0xd4] + 0x21C8) >> 4);
    break;
  case 0x8048ebc:
    uVar5 = param_1[0xd4];
    iVar2 = 0x21C9;
ScriptEngine_Routine_08048EC6:
    uVar5 = *(byte *)(uVar5 + iVar2) & 1;
    break;
  case 0x8048ed4:
    uVar5 = (*(byte *)(param_1[0xd4] + 0x21C9) & 0x1f) >> 1;
    break;
  case 0x8048eec:
    uVar5 = param_1[0xd4];
    iVar2 = 0x21C9;
    goto SUB_08048fc6;
  case 0x8048efc:
    uVar5 = param_1[0xd4];
    iVar2 = 0x21C9;
    goto SUB_08048fde;
  case 0x8048f0c:
    uVar5 = param_1[0xd4];
    iVar2 = 0x21C9;
ScriptEngine_Routine_08048F16:
    uVar5 = (uint)(*(byte *)(uVar5 + iVar2) >> 7);
    break;
  case 0x8048f24:
    uVar5 = param_1[0xd4];
    puVar9 = 0x21CA;
SUB_08048f2e:
    uVar5 = (uint)(byte)puVar9[uVar5];
SUB_08048f32:
    uVar5 = uVar5 & 3;
    break;
  case 0x8048f3c:
    uVar5 = param_1[0xd4];
    iVar2 = 0x21CA;
ScriptEngine_Routine_08048F46:
    uVar5 = (*(byte *)(uVar5 + iVar2) & 7) >> 2;
    break;
  case 0x8048f54:
    uVar5 = param_1[0xd4];
    iVar2 = 0x21CA;
SUB_08048f5e:
    uVar5 = (*(byte *)(uVar5 + iVar2) & 0xf) >> 3;
    break;
  case 0x8048f6c:
    uVar5 = param_1[0xd4];
    iVar2 = 0x21CA;
SUB_08048f76:
    uVar5 = (*(byte *)(uVar5 + iVar2) & 0x1f) >> 4;
    break;
  case 0x8048f84:
    uVar5 = param_1[0xd4];
    iVar2 = 0x21CA;
    goto SUB_08048fc6;
  case 0x8048f94:
    uVar5 = param_1[0xd4];
    iVar2 = 0x21CA;
    goto SUB_08048fde;
  case 0x8048fa4:
    uVar5 = (uint)(*(byte *)(param_1[0xd4] + 0x21CB) >> 2);
    break;
  case 0x8048fbc:
    uVar5 = param_1[0xd4];
    iVar2 = 0x216E;
SUB_08048fc6:
    uVar5 = (*(byte *)(uVar5 + iVar2) & 0x3f) >> 5;
    break;
  case 0x8048fd4:
    uVar5 = param_1[0xd4];
    iVar2 = 0x216E;
SUB_08048fde:
    uVar5 = (*(byte *)(uVar5 + iVar2) & 0x7f) >> 6;
  }
  return CONCAT44(in_lr,uVar5);
}

// =============================================================================
// Function: ScriptEngine_Routine_08048FFC @ 0x08048FFC
// =============================================================================
undefined4 ScriptEngine_Routine_08048FFC(uint param_1,int param_2,uint param_3)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  undefined4 uVar5;
  byte bVar6;
  undefined2 *puVar7;
  uint uVar8;
  undefined1 *puVar9;
  ushort *puVar10;
  int iVar11;
  byte *pbVar12;
  byte bVar13;
  ushort uVar14;
  undefined4 uVar15;
  uint uVar16;
  ushort uVar17;
  uint *puVar18;
  int iVar19;
  int *piVar20;
  undefined4 in_lr;
  undefined4 uVar21;
  undefined1 uVar22;
  
  ScriptEngine_Routine_0804590C();
  if (0x231 < param_2 - 0x1cU) goto case_0804DA2E;
  bVar6 = (byte)param_3;
  switch(*(uint *)((param_2 - 0x1cU) * 4 + gInlineTable_08049034) & 0xfffffffe) {
  case 0x80498fc:
    if (param_3 != 0) {
      ScriptEngine_Routine_0804DA2E();
    }
    cVar1 = Farm_Routine_08009B18(*(int *)(param_1 + 0x350) + 0x14);
    if (cVar1 != '\0') {
      Farm_ClearDailyFlag(*(int *)(param_1 + 0x350) + 0x14);
    }
    goto case_0804DA2E;
  case 0x8049928:
    piVar20 = (int *)(param_1 + 0x350);
    iVar19 = Farm_Routine_08009AF8(*piVar20 + 0x14);
    if ((int)(param_3 - iVar19) < 0) {
      Farm_TakeLumber(*piVar20 + 0x14,-(param_3 - iVar19));
    }
    else {
      Farm_AddLumber(*piVar20 + 0x14);
    }
    goto case_0804DA2E;
  case 0x8049956:
    piVar20 = (int *)(param_1 + 0x350);
    iVar19 = Building_Routine_0800CE6C(*piVar20 + 0x5f0);
    if ((int)(param_3 - iVar19) < 0) {
      ToolStack_GetAmount(*piVar20 + 0x5f0,-(param_3 - iVar19));
    }
    else {
      ToolStack_IsEmpty(*piVar20 + 0x5f0);
    }
    goto case_0804DA2E;
  case 0x8049990:
    piVar20 = (int *)(param_1 + 0x350);
    iVar19 = Building_Routine_0800C568(*piVar20 + 0x410);
    if ((int)(param_3 - iVar19) < 0) {
      Building_Routine_0800C7D8(*piVar20 + 0x410,-(param_3 - iVar19));
    }
    else {
      Building_Routine_0800C794(*piVar20 + 0x410);
    }
    goto case_0804DA2E;
  case 0x80499ca:
    ScriptEngine_Routine_0804DA2C((-param_3 | param_3) >> 0x1f,*(int *)(param_1 + 0x350) + _LAB_080499e0);
  case 0x80499e4:
    iVar19 = NPC_Routine_080A0A04(*(int *)(param_1 + 0x350) + _LAB_08049a20);
    if (iVar19 != 0) {
      if (param_3 == 0) {
        ScriptEngine_Routine_0804DA2E();
      }
      cVar1 = NPC_Routine_0809EAE0();
      if (cVar1 == '\0') {
        NPC_Routine_0809EAEC(iVar19);
      }
    }
    goto case_0804DA2E;
  case 0x8049a24:
    cVar1 = Building_Routine_0800BF9C(*(int *)(param_1 + 0x350) + 500);
    if (cVar1 == '\0') {
      if (param_3 == 0) {
        ScriptEngine_Routine_0804DA2E();
      }
      Building_Routine_0800C194(*(int *)(param_1 + 0x350) + 500);
    }
    goto case_0804DA2E;
  case 0x8049a54:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + 0x219C);
    *pbVar12 = *pbVar12 & 0xef | (byte)((param_3 & 1) << 4);
    if (param_3 == 0) {
      if (*(int *)(param_1 + 0x354) != 0) {
        Farmer_Routine_080168D4(*(int *)(param_1 + 0x354),4);
      }
      goto case_0804DA2E;
    }
    iVar19 = *(int *)(param_1 + 0x354);
    if (iVar19 == 0) {
      iVar19 = ScriptEngine_Routine_0804DA2E();
    }
    uVar5 = 4;
    goto LAB_08049b0a;
  case 0x8049aaa:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + 0x219A);
    *pbVar12 = *pbVar12 & 0xfd | (byte)((param_3 & 1) << 1);
    goto joined_r0x08049af6;
  case 0x8049ad4:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_08049b14);
    *pbVar12 = *pbVar12 & 0xfb | (byte)((param_3 & 1) << 2);
joined_r0x08049af6:
    if (param_3 == 0) {
      iVar19 = *(int *)(param_1 + 0x354);
      if (iVar19 == 0) {
        iVar19 = ScriptEngine_Routine_0804DA2E();
      }
      Farmer_Routine_080168D4(iVar19,0);
    }
    else {
      iVar19 = *(int *)(param_1 + 0x354);
      if (iVar19 != 0) {
        uVar5 = 0;
LAB_08049b0a:
        Farmer_Routine_08016834(iVar19,uVar5,0);
      }
    }
    goto case_0804DA2E;
  case 0x8049b32:
    Building_Routine_0800C244(*(int *)(param_1 + 0x350) + 500);
    goto LAB_08049b66;
  case 0x8049b4c:
    Building_Routine_0800C364(*(int *)(param_1 + 0x350) + 500,param_3);
LAB_08049b66:
    if (*(int *)(param_1 + 0x354) != 0) {
      Farmer_Routine_08016C10();
    }
    goto case_0804DA2E;
  case 0x8049b78:
    NPC_Routine_080A03A4(*(int *)(param_1 + 0x350) + _LAB_08049b90,param_3);
    goto case_0804DA2E;
  case 0x8049b94:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + 0x219A);
    *pbVar12 = *pbVar12 & 0xef | (byte)((param_3 & 1) << 4);
    if (param_3 == 0) goto case_0804DA2E;
    iVar19 = *(int *)(param_1 + 0x354);
    if (iVar19 == 0) {
      iVar19 = ScriptEngine_Routine_0804DA2E();
    }
    uVar5 = Farmer_Routine_08016AFC(iVar19,0);
    uVar21 = 0;
    goto LAB_08049d4c;
  case 0x8049be0:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + 0x219C);
    *pbVar12 = *pbVar12 & 0x7f | (byte)(param_3 << 7);
    if (param_3 == 0) goto case_0804DA2E;
    iVar19 = *(int *)(param_1 + 0x354);
    if (iVar19 == 0) {
      iVar19 = ScriptEngine_Routine_0804DA2E();
    }
    uVar5 = Farmer_Routine_08016AFC(iVar19,4);
    uVar21 = 4;
    goto LAB_08049d4c;
  case 0x8049c24:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + 0x219D);
    *pbVar12 = *pbVar12 & 0xdf | (byte)((param_3 & 1) << 5);
    if (param_3 == 0) goto case_0804DA2E;
    iVar19 = *(int *)(param_1 + 0x354);
    if (iVar19 == 0) {
      iVar19 = ScriptEngine_Routine_0804DA2E();
    }
    uVar5 = Farmer_Routine_08016AFC(iVar19,3);
    uVar21 = 3;
    goto LAB_08049d4c;
  case 0x8049c70:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + 0x219E);
    *pbVar12 = *pbVar12 & 0xf7 | (byte)((param_3 & 1) << 3);
    if (param_3 == 0) goto case_0804DA2E;
    iVar19 = *(int *)(param_1 + 0x354);
    if (iVar19 == 0) {
      iVar19 = ScriptEngine_Routine_0804DA2E();
    }
    uVar5 = Farmer_Routine_08016AFC(iVar19,1);
    uVar21 = 1;
    goto LAB_08049d4c;
  case 0x8049cbc:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + 0x21A1);
    *pbVar12 = *pbVar12 & 0xdf | (byte)((param_3 & 1) << 5);
    if (param_3 == 0) {
      ScriptEngine_Routine_0804DA2E();
    }
    if (*(int *)(param_1 + 0x354) == 0) goto case_0804DA2E;
    uVar5 = Farmer_Routine_08016AFC(*(int *)(param_1 + 0x354),0);
    uVar21 = 0;
    goto LAB_08049d4c;
  case 0x8049d08:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_08049d60);
    *pbVar12 = *pbVar12 & 0xf7 | (byte)((param_3 & 1) << 3);
    if (param_3 == 0) {
      ScriptEngine_Routine_0804DA2E();
    }
    if (*(int *)(param_1 + 0x354) == 0) goto case_0804DA2E;
    uVar5 = Farmer_Routine_08016AFC(*(int *)(param_1 + 0x354),2);
    uVar21 = 2;
LAB_08049d4c:
    iVar19 = ScriptEngine_Routine_0804E3D8(param_1,uVar21,uVar5);
    if (iVar19 != 0) {
      Animal_Routine_0809B26C();
    }
    goto case_0804DA2E;
  case 0x8049d64:
    uVar21 = 1;
    uVar22 = 0;
    uVar5 = 0x46;
    uVar15 = 0x13;
    goto LAB_0804a1b8;
  case 0x8049d76:
    uVar21 = 2;
    uVar22 = 0;
    uVar5 = 0x47;
    uVar15 = 0x13;
    goto LAB_0804a1b8;
  case 0x8049d88:
    uVar21 = 3;
    uVar22 = 0;
    uVar5 = 0x49;
    uVar15 = 0x13;
    goto LAB_0804a1b8;
  case 0x8049d9a:
    uVar21 = 4;
    uVar22 = 0;
    uVar5 = 0x4a;
    uVar15 = 0x13;
    goto LAB_0804a1b8;
  case 0x8049dac:
    uVar21 = 5;
    uVar22 = 0;
    uVar5 = 0x4b;
    uVar15 = 0x13;
    goto LAB_0804a1b8;
  case 0x8049dbe:
    uVar21 = 6;
    uVar22 = 0;
    uVar5 = 0x4c;
    uVar15 = 0x13;
    goto LAB_0804a1b8;
  case 0x8049dd0:
    uVar21 = 1;
    uVar22 = 0;
    uVar5 = 0x4e;
    uVar15 = 3;
    goto LAB_0804a1b8;
  case 0x8049de2:
    uVar21 = 2;
    uVar22 = 0;
    uVar5 = 0x4f;
    uVar15 = 3;
    goto LAB_0804a1b8;
  case 0x8049df4:
    uVar21 = 3;
    uVar22 = 0;
    uVar5 = 0x50;
    uVar15 = 3;
    goto LAB_0804a1b8;
  case 0x8049e06:
    uVar21 = 4;
    uVar22 = 0;
    uVar5 = 0x52;
    uVar15 = 3;
    goto LAB_0804a1b8;
  case 0x8049e18:
    uVar21 = 5;
    uVar22 = 0;
    uVar5 = 0x54;
    uVar15 = 3;
    goto LAB_0804a1b8;
  case 0x8049e2a:
    uVar21 = 6;
    uVar22 = 0;
    uVar5 = 0x55;
    uVar15 = 3;
    goto LAB_0804a1b8;
  case 0x8049e3c:
    uVar21 = 1;
    uVar22 = 0;
    uVar5 = 0x57;
    uVar15 = 0x19;
    goto LAB_0804a1b8;
  case 0x8049e4e:
    uVar21 = 2;
    uVar22 = 0;
    uVar5 = 0x58;
    uVar15 = 0x19;
    goto LAB_0804a1b8;
  case 0x8049e60:
    uVar21 = 3;
    uVar22 = 0;
    uVar5 = 0x5a;
    uVar15 = 0x19;
    goto LAB_0804a1b8;
  case 0x8049e72:
    uVar21 = 4;
    uVar22 = 0;
    uVar5 = 0x5c;
    uVar15 = 0x19;
    goto LAB_0804a1b8;
  case 0x8049e84:
    uVar21 = 5;
    uVar22 = 0;
    uVar5 = 0x5e;
    uVar15 = 0x19;
    goto LAB_0804a1b8;
  case 0x8049e96:
    uVar21 = 6;
    uVar22 = 0;
    uVar5 = 0x5f;
    uVar15 = 0x19;
    goto LAB_0804a1b8;
  case 0x8049ea8:
    uVar21 = 1;
    uVar22 = 0;
    uVar5 = 0x61;
    uVar15 = 0xc;
    goto LAB_0804a1b8;
  case 0x8049eba:
    uVar21 = 2;
    uVar22 = 0;
    uVar5 = 0x62;
    uVar15 = 0xc;
    goto LAB_0804a1b8;
  case 0x8049ecc:
    uVar21 = 3;
    uVar22 = 0;
    uVar5 = 100;
    uVar15 = 0xc;
    goto LAB_0804a1b8;
  case 0x8049ede:
    uVar21 = 4;
    uVar22 = 0;
    uVar5 = 0x65;
    uVar15 = 0xc;
    goto LAB_0804a1b8;
  case 0x8049ef0:
    uVar21 = 5;
    uVar22 = 0;
    uVar5 = 0x66;
    uVar15 = 0xc;
    goto LAB_0804a1b8;
  case 0x8049f02:
    uVar21 = 6;
    uVar22 = 0;
    uVar5 = 0x67;
    uVar15 = 0xc;
    goto LAB_0804a1b8;
  case 0x8049f14:
    uVar21 = 1;
    uVar22 = 0;
    uVar5 = 0x69;
    goto LAB_0804a1b6;
  case 0x8049f24:
    uVar21 = 2;
    uVar22 = 0;
    uVar5 = 0x6a;
    goto LAB_0804a1b6;
  case 0x8049f34:
    uVar21 = 3;
    uVar22 = 0;
    uVar5 = 0x6b;
    goto LAB_0804a1b6;
  case 0x8049f44:
    uVar21 = 4;
    uVar22 = 0;
    uVar5 = 0x6d;
    goto LAB_0804a1b6;
  case 0x8049f54:
    uVar21 = 5;
    uVar22 = 0;
    uVar5 = 0x6e;
    goto LAB_0804a1b6;
  case 0x8049f64:
    uVar21 = 6;
    uVar22 = 0;
    uVar5 = 0x6f;
    goto LAB_0804a1b6;
  case 0x8049f74:
    uVar5 = 0x172;
    uVar21 = 5;
    uVar22 = 0;
    uVar15 = 0x1f;
    goto LAB_0804a1b8;
  case 0x8049f88:
    uVar21 = 6;
    uVar22 = 0;
    uVar15 = 0x1f;
    uVar5 = 0x173;
    goto LAB_0804a1b8;
  case 0x8049fa0:
    uVar21 = 1;
    uVar22 = 1;
    uVar15 = 0x13;
    uVar5 = 0x71;
    goto LAB_0804a1b8;
  case 0x8049fb0:
    uVar21 = 2;
    uVar22 = 1;
    uVar15 = 0x13;
    uVar5 = 0x72;
    goto LAB_0804a1b8;
  case 0x8049fc2:
    uVar21 = 3;
    uVar22 = 1;
    uVar15 = 0x13;
    uVar5 = 0x73;
    goto LAB_0804a1b8;
  case 0x8049fd4:
    uVar21 = 4;
    uVar22 = 1;
    uVar15 = 0x13;
    uVar5 = 0x74;
    goto LAB_0804a1b8;
  case 0x8049fe6:
    uVar21 = 5;
    uVar22 = 1;
    uVar15 = 0x13;
    uVar5 = 0x75;
    goto LAB_0804a1b8;
  case 0x8049ff8:
    uVar21 = 5;
    uVar22 = 1;
    uVar15 = 0x13;
    uVar5 = 0x76;
    goto LAB_0804a1b8;
  case 0x804a00a:
    uVar21 = 5;
    uVar22 = 1;
    uVar15 = 0x13;
    uVar5 = 0x77;
    goto LAB_0804a1b8;
  case 0x804a01c:
    uVar21 = 1;
    uVar22 = 1;
    uVar15 = 3;
    uVar5 = 0x7a;
    goto LAB_0804a1b8;
  case 0x804a02c:
    uVar21 = 2;
    uVar22 = 1;
    uVar15 = 3;
    uVar5 = 0x7b;
    goto LAB_0804a1b8;
  case 0x804a03e:
    uVar21 = 3;
    uVar22 = 1;
    uVar15 = 3;
    uVar5 = 0x7c;
    goto LAB_0804a1b8;
  case 0x804a050:
    uVar21 = 4;
    uVar22 = 1;
    uVar15 = 3;
    uVar5 = 0x7d;
    goto LAB_0804a1b8;
  case 0x804a062:
    uVar21 = 5;
    uVar22 = 1;
    uVar15 = 3;
    uVar5 = 0x7e;
    goto LAB_0804a1b8;
  case 0x804a074:
    uVar21 = 5;
    uVar22 = 1;
    uVar15 = 3;
    uVar5 = 0x7f;
    goto LAB_0804a1b8;
  case 0x804a086:
    uVar21 = 1;
    uVar22 = 1;
    uVar15 = 0x19;
    uVar5 = 0x82;
    goto LAB_0804a1b8;
  case 0x804a096:
    uVar21 = 2;
    uVar22 = 1;
    uVar15 = 0x19;
    uVar5 = 0x83;
    goto LAB_0804a1b8;
  case 0x804a0a8:
    uVar21 = 3;
    uVar22 = 1;
    uVar15 = 0x19;
    uVar5 = 0x84;
    goto LAB_0804a1b8;
  case 0x804a0ba:
    uVar21 = 4;
    uVar22 = 1;
    uVar15 = 0x19;
    uVar5 = 0x85;
    goto LAB_0804a1b8;
  case 0x804a0cc:
    uVar21 = 5;
    uVar22 = 1;
    uVar15 = 0x19;
    uVar5 = 0x86;
    goto LAB_0804a1b8;
  case 0x804a0de:
    uVar21 = 5;
    uVar22 = 1;
    uVar15 = 0x19;
    uVar5 = 0x87;
    goto LAB_0804a1b8;
  case 0x804a0f0:
    uVar21 = 1;
    uVar22 = 1;
    uVar15 = 0xc;
    uVar5 = 0x8a;
    goto LAB_0804a1b8;
  case 0x804a100:
    uVar21 = 2;
    uVar22 = 1;
    uVar15 = 0xc;
    uVar5 = 0x8b;
    goto LAB_0804a1b8;
  case 0x804a112:
    uVar21 = 3;
    uVar22 = 1;
    uVar15 = 0xc;
    uVar5 = 0x8c;
    goto LAB_0804a1b8;
  case 0x804a124:
    uVar21 = 4;
    uVar22 = 1;
    uVar15 = 0xc;
    uVar5 = 0x8d;
    goto LAB_0804a1b8;
  case 0x804a136:
    uVar21 = 5;
    uVar22 = 1;
    uVar15 = 0xc;
    uVar5 = 0x8e;
    goto LAB_0804a1b8;
  case 0x804a148:
    uVar21 = 5;
    uVar22 = 1;
    uVar15 = 0xc;
    uVar5 = 0x8f;
    goto LAB_0804a1b8;
  case 0x804a15a:
    uVar21 = 1;
    uVar22 = 1;
    uVar5 = 0x92;
    goto LAB_0804a1b6;
  case 0x804a168:
    uVar21 = 2;
    uVar22 = 1;
    uVar5 = 0x93;
    goto LAB_0804a1b6;
  case 0x804a178:
    uVar21 = 3;
    uVar22 = 1;
    uVar5 = 0x94;
    goto LAB_0804a1b6;
  case 0x804a188:
    uVar21 = 4;
    uVar22 = 1;
    uVar5 = 0x95;
    goto LAB_0804a1b6;
  case 0x804a198:
    uVar21 = 5;
    uVar22 = 1;
    uVar5 = 0x96;
    goto LAB_0804a1b6;
  case 0x804a1a8:
    uVar21 = 5;
    uVar22 = 1;
    uVar5 = 0x97;
LAB_0804a1b6:
    uVar15 = 0x15;
LAB_0804a1b8:
    ScriptEngine_Routine_08045638(param_1,uVar5,uVar15,param_3,uVar21,uVar22);
    goto case_0804DA2E;
  case 0x804a1c2:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804a1e0);
    param_3 = param_3 & 3;
    ScriptEngine_SetFlagBit(0xfffffff9,puVar9,*puVar9,param_3 << 1);
  case 0x804a1e4:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804a1fc);
    bVar2 = (byte)(param_3 << 6);
    bVar6 = *pbVar12;
    bVar13 = 0x3f;
    break;
  case 0x804a200:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804a21c);
    param_3 = param_3 & 3;
    ScriptEngine_SetFlagBit(0xffffffe7,puVar9,*puVar9,param_3 << 3);
  case 0x804a220:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804a238);
    bVar2 = (byte)(param_3 << 6);
    bVar6 = *pbVar12;
    bVar13 = 0x3f;
    break;
  case 0x804a23c:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804a258);
    param_3 = param_3 & 3;
    ScriptEngine_SetFlagBit(0xfffffff9,puVar9,*puVar9,param_3 << 1);
  case 0x804a25c:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804a27c);
    bVar2 = *pbVar12 & 0xfe | (byte)param_3 & 1;
    goto SUB_0804da2c;
  case 0x804a280:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804a29c);
    param_3 = param_3 & 1;
    ScriptEngine_SetFlagBit(0xfffffff7,puVar9,*puVar9,param_3 << 3);
  case 0x804a2a0:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804a2bc);
    bVar2 = (byte)((param_3 & 3) << 4);
    bVar6 = *pbVar12;
    bVar13 = 0xcf;
    break;
  case 0x804a2c0:
    param_3 = param_3 & 1;
    ScriptEngine_Routine_0804DA2C(*(byte *)(*(int *)(param_1 + 0x350) + _LAB_0804a2e0) & 0xfffffffe | param_3);
  case 0x804a2e4:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804a300);
    bVar2 = (byte)((param_3 & 1) << 1);
    bVar6 = *pbVar12;
    bVar13 = 0xfd;
    break;
  case 0x804a304:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804a320);
    param_3 = param_3 & 1;
    ScriptEngine_SetFlagBit(0xfffffffb,puVar9,*puVar9,param_3 << 2);
  case 0x804a324:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804a340);
    bVar2 = (byte)((param_3 & 1) << 5);
    bVar6 = *pbVar12;
    bVar13 = 0xdf;
    break;
  case 0x804a344:
    param_3 = param_3 & 1;
    ScriptEngine_Routine_0804DA2C(*(byte *)(*(int *)(param_1 + 0x350) + _LAB_0804a364) & 0xfffffffe | param_3);
  case 0x804a368:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804a384);
    bVar2 = (byte)((param_3 & 1) << 3);
    bVar6 = *pbVar12;
    bVar13 = 0xf7;
    break;
  case 0x804a388:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804a3a4);
    param_3 = param_3 & 1;
    ScriptEngine_SetFlagBit(0xffffffdf,puVar9,*puVar9,param_3 << 5);
  case 0x804a3a8:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804a3c0);
    bVar2 = (byte)(param_3 << 7);
    bVar6 = *pbVar12;
    bVar13 = 0x7f;
    break;
  case 0x804a3c4:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804a3e0);
    param_3 = param_3 & 1;
    ScriptEngine_SetFlagBit(0xfffffffd,puVar9,*puVar9,param_3 << 1);
  case 0x804a3e4:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804a400);
    bVar2 = (byte)((param_3 & 1) << 3);
    bVar6 = *pbVar12;
    bVar13 = 0xf7;
    break;
  case 0x804a404:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804a420);
    param_3 = param_3 & 1;
    ScriptEngine_SetFlagBit(0xffffffef,puVar9,*puVar9,param_3 << 4);
  case 0x804a424:
    iVar11 = *(int *)(param_1 + 0x350);
    iVar19 = _LAB_0804a434;
    goto SUB_0804da1a;
  case 0x804a438:
    param_3 = param_3 & 1;
    ScriptEngine_Routine_0804DA2C(*(byte *)(*(int *)(param_1 + 0x350) + _LAB_0804a458) & 0xfffffffe | param_3);
  case 0x804a45c:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804a478);
    bVar2 = (byte)((param_3 & 1) << 2);
    bVar6 = *pbVar12;
    bVar13 = 0xfb;
    break;
  case 0x804a47c:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804a498);
    param_3 = param_3 & 1;
    ScriptEngine_SetFlagBit(0xffffffef,puVar9,*puVar9,param_3 << 4);
  case 0x804a49c:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804a4b8);
    bVar2 = (byte)((param_3 & 3) << 5);
    bVar6 = *pbVar12;
    bVar13 = 0x9f;
    break;
  case 0x804a4bc:
    iVar19 = 0x804a4d7;
    uVar5 = ScriptEngine_Routine_0804CE8E(*(undefined4 *)(*(int *)(param_1 + 0x350) + _LAB_0804a4d8),
                            (param_3 & 3) << 0xf,_LAB_0804a4dc);
    param_1 = (uint)*(byte *)(param_1 + 0x1f);
    (*(code *)(iVar19 + 0xffc))(uVar5,0x5c);
  case 0x804a4e0:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804a4fc);
    bVar2 = (byte)((param_3 & 3) << 1);
    bVar6 = *pbVar12;
    bVar13 = 0xf9;
    break;
  case 0x804a500:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804a51c);
    param_3 = param_3 & 3;
    ScriptEngine_SetFlagBit(0xffffffe7,puVar9,*puVar9,param_3 << 3);
  case 0x804a520:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804a53c);
    bVar2 = (byte)((param_3 & 3) << 5);
    bVar6 = *pbVar12;
    bVar13 = 0x9f;
    break;
  case 0x804a540:
    puVar7 = (undefined2 *)(*(int *)(param_1 + 0x350) + _LAB_0804a55c);
    param_3 = param_3 & 3;
    iVar19 = 0x804a55b;
    uVar5 = ScriptEngine_Routine_0804D2D6(_LAB_0804a560,puVar7,*puVar7,param_3 << 7);
    iVar11 = 0x804a563;
    (*(code *)(iVar19 + 0xcfe))(uVar5,0x5e);
    (*(code *)(iVar11 + 0xffe))();
  case 0x804a564:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804a580);
    bVar2 = (byte)((param_3 & 3) << 1);
    bVar6 = *pbVar12;
    bVar13 = 0xf9;
    break;
  case 0x804a584:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804a5a0);
    param_3 = param_3 & 3;
    ScriptEngine_SetFlagBit(0xffffffe7,puVar9,*puVar9,param_3 << 3);
  case 0x804a5a4:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _ASSET_BLOCK_0804A5C0);
    bVar2 = (byte)((param_3 & 3) << 5);
    bVar6 = *pbVar12;
    bVar13 = 0x9f;
    break;
  case 0x804a5c4:
    iVar19 = *(int *)(param_1 + 0x350);
    pbVar12 = (byte *)(iVar19 + _ASSET_BLOCK_0804A5F4);
    *pbVar12 = *pbVar12 & 0x7f | (byte)((param_3 & 1) << 7);
    ScriptEngine_Routine_0804D106(0xfffffffe,param_3 >> 1 & 1,*(undefined1 *)(iVar19 + _LAB_0804a5f8));
  case 0x804a5fc:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804a618);
    bVar2 = (byte)((param_3 & 3) << 1);
    bVar6 = *pbVar12;
    bVar13 = 0xf9;
    break;
  case 0x804a61c:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804a638);
    param_3 = param_3 & 3;
    ScriptEngine_SetFlagBit(0xffffffe7,puVar9,*puVar9,param_3 << 3);
  case 0x804a63c:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804a658);
    bVar2 = (byte)((param_3 & 3) << 5);
    bVar6 = *pbVar12;
    bVar13 = 0x9f;
    break;
  case 0x804a65c:
    puVar7 = (undefined2 *)(*(int *)(param_1 + 0x350) + _LAB_0804a678);
    param_3 = param_3 & 3;
    iVar19 = 0x804a677;
    uVar5 = ScriptEngine_Routine_0804D2D6(_LAB_0804a67c,puVar7,*puVar7,param_3 << 7);
    iVar11 = 0x804a67f;
    (*(code *)(iVar19 + 0xcfe))(uVar5,0x60);
    (*(code *)(iVar11 + 0xffe))();
  case 0x804a680:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804a69c);
    bVar2 = (byte)((param_3 & 3) << 1);
    bVar6 = *pbVar12;
    bVar13 = 0xf9;
    break;
  case 0x804a6a0:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804a6bc);
    param_3 = param_3 & 3;
    ScriptEngine_SetFlagBit(0xffffffe7,puVar9,*puVar9,param_3 << 3);
  case 0x804a6c0:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804a6dc);
    bVar2 = (byte)((param_3 & 3) << 5);
    bVar6 = *pbVar12;
    bVar13 = 0x9f;
    break;
  case 0x804a6e0:
    iVar19 = 0x804a6fb;
    uVar5 = ScriptEngine_Routine_0804CE8E(*(undefined4 *)(*(int *)(param_1 + 0x350) + _LAB_0804a6fc),
                            (param_3 & 3) << 0xf,_LAB_0804a700);
    param_1 = (uint)*(byte *)(param_1 + 0x1f);
    (*(code *)(iVar19 + 0xffc))(uVar5,0x60);
  case 0x804a704:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804a720);
    bVar2 = (byte)((param_3 & 3) << 1);
    bVar6 = *pbVar12;
    bVar13 = 0xf9;
    break;
  case 0x804a724:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804a740);
    param_3 = param_3 & 3;
    ScriptEngine_SetFlagBit(0xffffffe7,puVar9,*puVar9,param_3 << 3);
  case 0x804a744:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804a760);
    bVar2 = (byte)((param_3 & 3) << 5);
    bVar6 = *pbVar12;
    bVar13 = 0x9f;
    break;
  case 0x804a764:
    puVar7 = (undefined2 *)(*(int *)(param_1 + 0x350) + _LAB_0804a780);
    param_3 = param_3 & 3;
    iVar19 = 0x804a77f;
    uVar5 = ScriptEngine_Routine_0804D2D6(_LAB_0804a784,puVar7,*puVar7,param_3 << 7);
    iVar11 = 0x804a787;
    (*(code *)(iVar19 + 0xcfe))(uVar5,0x62);
    (*(code *)(iVar11 + 0xffe))();
  case 0x804a788:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804a7a4);
    bVar2 = (byte)((param_3 & 3) << 1);
    bVar6 = *pbVar12;
    bVar13 = 0xf9;
    break;
  case 0x804a7a8:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804a7c4);
    param_3 = param_3 & 3;
    ScriptEngine_SetFlagBit(0xffffffe7,puVar9,*puVar9,param_3 << 3);
  case 0x804a7c8:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _ASSET_BLOCK_0804A7E4);
    bVar2 = (byte)((param_3 & 3) << 5);
    bVar6 = *pbVar12;
    bVar13 = 0x9f;
    break;
  case 0x804a7e8:
    iVar19 = *(int *)(param_1 + 0x350);
    pbVar12 = (byte *)(iVar19 + _ASSET_BLOCK_0804A818);
    *pbVar12 = *pbVar12 & 0x7f | (byte)((param_3 & 1) << 7);
    ScriptEngine_Routine_0804D106(0xfffffffe,param_3 >> 1 & 1,*(undefined1 *)(iVar19 + _LAB_0804a81c));
  case 0x804a820:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804a83c);
    bVar2 = (byte)((param_3 & 3) << 1);
    bVar6 = *pbVar12;
    bVar13 = 0xf9;
    break;
  case 0x804a840:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804a85c);
    param_3 = param_3 & 3;
    ScriptEngine_SetFlagBit(0xffffffe7,puVar9,*puVar9,param_3 << 3);
  case 0x804a860:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804a87c);
    bVar2 = (byte)((param_3 & 3) << 5);
    bVar6 = *pbVar12;
    bVar13 = 0x9f;
    break;
  case 0x804a880:
    puVar7 = (undefined2 *)(*(int *)(param_1 + 0x350) + _LAB_0804a89c);
    param_3 = param_3 & 3;
    iVar19 = 0x804a89b;
    uVar5 = ScriptEngine_Routine_0804D2D6(_LAB_0804a8a0,puVar7,*puVar7,param_3 << 7);
    iVar11 = 0x804a8a3;
    (*(code *)(iVar19 + 0xcfe))(uVar5,100);
    (*(code *)(iVar11 + 0xffe))();
  case 0x804a8a4:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804a8c0);
    bVar2 = (byte)((param_3 & 3) << 1);
    bVar6 = *pbVar12;
    bVar13 = 0xf9;
    break;
  case 0x804a8c4:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804a8e0);
    param_3 = param_3 & 3;
    ScriptEngine_SetFlagBit(0xffffffe7,puVar9,*puVar9,param_3 << 3);
  case 0x804a8e4:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804a900);
    bVar2 = (byte)((param_3 & 3) << 5);
    bVar6 = *pbVar12;
    bVar13 = 0x9f;
    break;
  case 0x804a904:
    iVar19 = 0x804a91f;
    uVar5 = ScriptEngine_Routine_0804CE8E(*(undefined4 *)(*(int *)(param_1 + 0x350) + _LAB_0804a920),
                            (param_3 & 3) << 0xf,_LAB_0804a924);
    param_1 = (uint)*(byte *)(param_1 + 0x1f);
    (*(code *)(iVar19 + 0xffc))(uVar5,100);
  case 0x804a928:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804a944);
    bVar2 = (byte)((param_3 & 3) << 1);
    bVar6 = *pbVar12;
    bVar13 = 0xf9;
    break;
  case 0x804a948:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804a964);
    param_3 = param_3 & 3;
    ScriptEngine_SetFlagBit(0xffffffe7,puVar9,*puVar9,param_3 << 3);
  case 0x804a968:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804a984);
    bVar2 = (byte)((param_3 & 3) << 5);
    bVar6 = *pbVar12;
    bVar13 = 0x9f;
    break;
  case 0x804a988:
    puVar7 = (undefined2 *)(*(int *)(param_1 + 0x350) + _LAB_0804a9a4);
    param_3 = param_3 & 3;
    iVar19 = 0x804a9a3;
    uVar5 = ScriptEngine_Routine_0804D2D6(_LAB_0804a9a8,puVar7,*puVar7,param_3 << 7);
    iVar11 = 0x804a9ab;
    (*(code *)(iVar19 + 0xcfe))(uVar5,0x66);
    (*(code *)(iVar11 + 0xffe))();
  case 0x804a9ac:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804a9c8);
    bVar2 = (byte)((param_3 & 3) << 1);
    bVar6 = *pbVar12;
    bVar13 = 0xf9;
    break;
  case 0x804a9cc:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804a9e8);
    param_3 = param_3 & 3;
    ScriptEngine_SetFlagBit(0xffffffe7,puVar9,*puVar9,param_3 << 3);
  case 0x804a9ec:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _ASSET_BLOCK_0804AA08);
    bVar2 = (byte)((param_3 & 3) << 5);
    bVar6 = *pbVar12;
    bVar13 = 0x9f;
    break;
  case 0x804aa0c:
    iVar19 = *(int *)(param_1 + 0x350);
    pbVar12 = (byte *)(iVar19 + _ASSET_BLOCK_0804AA3C);
    *pbVar12 = *pbVar12 & 0x7f | (byte)((param_3 & 1) << 7);
    ScriptEngine_Routine_0804D106(0xfffffffe,param_3 >> 1 & 1,*(undefined1 *)(iVar19 + _LAB_0804aa40));
  case 0x804aa44:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804aa60);
    bVar2 = (byte)((param_3 & 3) << 1);
    bVar6 = *pbVar12;
    bVar13 = 0xf9;
    break;
  case 0x804aa64:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804aa80);
    param_3 = param_3 & 3;
    ScriptEngine_SetFlagBit(0xffffffe7,puVar9,*puVar9,param_3 << 3);
  case 0x804aa84:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804aaa0);
    bVar2 = (byte)((param_3 & 3) << 5);
    bVar6 = *pbVar12;
    bVar13 = 0x9f;
    break;
  case 0x804aaa4:
    puVar10 = (ushort *)(*(int *)(param_1 + 0x350) + _LAB_0804aac0);
    uVar17 = (ushort)((param_3 & 3) << 7);
    uVar14 = *puVar10;
    uVar3 = (ushort)_LAB_0804aac4;
    goto ScriptEngine_Routine_0804D2D6;
  case 0x804aac8:
    param_3 = param_3 & 3;
    ScriptEngine_Routine_0804DA2C(*(byte *)(*(int *)(param_1 + 0x350) + _LAB_0804aae8) & 0xfffffffc | param_3);
  case 0x804aaec:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804ab08);
    bVar2 = (byte)((param_3 & 3) << 1);
    bVar6 = *pbVar12;
    bVar13 = 0xf9;
    break;
  case 0x804ab0c:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804ab28);
    param_3 = param_3 & 3;
    ScriptEngine_SetFlagBit(0xffffffe7,puVar9,*puVar9,param_3 << 3);
  case 0x804ab2c:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804ab48);
    bVar2 = (byte)((param_3 & 3) << 5);
    bVar6 = *pbVar12;
    bVar13 = 0x9f;
    break;
  case 0x804ab4c:
    iVar19 = 0x804ab67;
    uVar5 = ScriptEngine_Routine_0804CE8E(*(undefined4 *)(*(int *)(param_1 + 0x350) + _LAB_0804ab68),
                            (param_3 & 3) << 0xf,_LAB_0804ab6c);
    param_1 = (uint)*(byte *)(param_1 + 0x1f);
    (*(code *)(iVar19 + 0xffc))(uVar5,0x68);
  case 0x804ab70:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804ab8c);
    bVar2 = (byte)((param_3 & 3) << 1);
    bVar6 = *pbVar12;
    bVar13 = 0xf9;
    break;
  case 0x804ab90:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804abac);
    param_3 = param_3 & 3;
    ScriptEngine_SetFlagBit(0xffffffe7,puVar9,*puVar9,param_3 << 3);
  case 0x804abb0:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804abcc);
    bVar2 = (byte)((param_3 & 3) << 5);
    bVar6 = *pbVar12;
    bVar13 = 0x9f;
    break;
  case 0x804abd0:
    puVar7 = (undefined2 *)(*(int *)(param_1 + 0x350) + _LAB_0804abec);
    param_3 = param_3 & 3;
    iVar19 = 0x804abeb;
    uVar5 = ScriptEngine_Routine_0804D2D6(_LAB_0804abf0,puVar7,*puVar7,param_3 << 7);
    iVar11 = 0x804abf3;
    (*(code *)(iVar19 + 0xcfe))(uVar5,0x6a);
    (*(code *)(iVar11 + 0xffe))();
  case 0x804abf4:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804ac10);
    bVar2 = (byte)((param_3 & 3) << 1);
    bVar6 = *pbVar12;
    bVar13 = 0xf9;
    break;
  case 0x804ac14:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804ac30);
    param_3 = param_3 & 3;
    ScriptEngine_SetFlagBit(0xffffffe7,puVar9,*puVar9,param_3 << 3);
  case 0x804ac34:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _ASSET_BLOCK_0804AC50);
    bVar2 = (byte)((param_3 & 3) << 5);
    bVar6 = *pbVar12;
    bVar13 = 0x9f;
    break;
  case 0x804ac54:
    iVar19 = *(int *)(param_1 + 0x350);
    pbVar12 = (byte *)(iVar19 + _ASSET_BLOCK_0804AC84);
    *pbVar12 = *pbVar12 & 0x7f | (byte)((param_3 & 1) << 7);
    ScriptEngine_Routine_0804D106(0xfffffffe,param_3 >> 1 & 1,*(undefined1 *)(iVar19 + _LAB_0804ac88));
  case 0x804ac8c:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804aca8);
    bVar2 = (byte)((param_3 & 3) << 1);
    bVar6 = *pbVar12;
    bVar13 = 0xf9;
    break;
  case 0x804acac:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804acc8);
    param_3 = param_3 & 3;
    ScriptEngine_SetFlagBit(0xffffffe7,puVar9,*puVar9,param_3 << 3);
  case 0x804accc:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804ace8);
    bVar2 = (byte)((param_3 & 3) << 5);
    bVar6 = *pbVar12;
    bVar13 = 0x9f;
    break;
  case 0x804acec:
    puVar7 = (undefined2 *)(*(int *)(param_1 + 0x350) + _LAB_0804ad08);
    param_3 = param_3 & 3;
    iVar19 = 0x804ad07;
    uVar5 = ScriptEngine_Routine_0804D2D6(_LAB_0804ad0c,puVar7,*puVar7,param_3 << 7);
    iVar11 = 0x804ad0f;
    (*(code *)(iVar19 + 0xcfe))(uVar5,0x6c);
    (*(code *)(iVar11 + 0xffe))();
  case 0x804ad10:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804ad2c);
    bVar2 = (byte)((param_3 & 3) << 1);
    bVar6 = *pbVar12;
    bVar13 = 0xf9;
    break;
  case 0x804ad30:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804ad4c);
    param_3 = param_3 & 3;
    ScriptEngine_SetFlagBit(0xffffffe7,puVar9,*puVar9,param_3 << 3);
  case 0x804ad50:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804ad6c);
    bVar2 = (byte)((param_3 & 3) << 5);
    bVar6 = *pbVar12;
    bVar13 = 0x9f;
    break;
  case 0x804ad70:
    iVar19 = 0x804ad8b;
    uVar5 = ScriptEngine_Routine_0804CE8E(*(undefined4 *)(*(int *)(param_1 + 0x350) + _LAB_0804ad8c),
                            (param_3 & 3) << 0xf,_LAB_0804ad90);
    param_1 = (uint)*(byte *)(param_1 + 0x1f);
    (*(code *)(iVar19 + 0xffc))(uVar5,0x6c);
  case 0x804ad94:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804adb0);
    bVar2 = (byte)((param_3 & 3) << 1);
    bVar6 = *pbVar12;
    bVar13 = 0xf9;
    break;
  case 0x804adb4:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _ASSET_BLOCK_0804ADD0);
    param_3 = param_3 & 3;
    ScriptEngine_SetFlagBit(0xffffffe7,puVar9,*puVar9,param_3 << 3);
  case 0x804add4:
    iVar11 = *(int *)(param_1 + 0x350);
    *(byte *)(iVar11 + _LAB_0804adfc) =
         *(byte *)(iVar11 + _LAB_0804adfc) & 0xf | (byte)((param_3 & 0xf) << 4);
    bVar6 = (byte)(param_3 >> 4);
    iVar19 = _LAB_0804ae00;
ScriptEngine_Routine_0804D0FE:
    pbVar12 = (byte *)(iVar11 + iVar19);
    bVar6 = bVar6 & 7;
    bVar13 = *pbVar12;
    bVar2 = 0xf8;
    goto ScriptEngine_Routine_0804D106;
  case 0x804ae04:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804ae20);
    param_3 = param_3 & 3;
    ScriptEngine_SetFlagBit(0xffffffe7,puVar9,*puVar9,param_3 << 3);
  case 0x804ae24:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804ae40);
    bVar2 = (byte)((param_3 & 3) << 5);
    bVar6 = *pbVar12;
    bVar13 = 0x9f;
    break;
  case 0x804ae44:
    puVar10 = (ushort *)(*(int *)(param_1 + 0x350) + _LAB_0804ae60);
    uVar17 = (ushort)((param_3 & 3) << 7);
    uVar14 = *puVar10;
    uVar3 = (ushort)_LAB_0804ae64;
    goto ScriptEngine_Routine_0804D2D6;
  case 0x804ae68:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804ae84);
    param_3 = param_3 & 3;
    ScriptEngine_SetFlagBit(0xfffffff9,puVar9,*puVar9,param_3 << 1);
  case 0x804ae88:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804aea4);
    bVar2 = (byte)((param_3 & 3) << 3);
    bVar6 = *pbVar12;
    bVar13 = 0xe7;
    break;
  case 0x804aea8:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804aec4);
    param_3 = param_3 & 3;
    ScriptEngine_SetFlagBit(0xffffff9f,puVar9,*puVar9,param_3 << 5);
  case 0x804aec8:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804aee0);
    bVar2 = (byte)(param_3 << 7);
    bVar6 = *pbVar12;
    bVar13 = 0x7f;
    break;
  case 0x804aee4:
    param_3 = param_3 & 3;
    ScriptEngine_Routine_0804DA2C(*(byte *)(*(int *)(param_1 + 0x350) + _LAB_0804af04) & 0xfffffffc | param_3);
  case 0x804af08:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804af24);
    bVar2 = (byte)((param_3 & 3) << 2);
    bVar6 = *pbVar12;
    bVar13 = 0xf3;
    break;
  case 0x804af28:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804af44);
    param_3 = param_3 & 3;
    ScriptEngine_SetFlagBit(0xffffffcf,puVar9,*puVar9,param_3 << 4);
  case 0x804af48:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804af60);
    bVar2 = (byte)(param_3 << 6);
    bVar6 = *pbVar12;
    bVar13 = 0x3f;
    break;
  case 0x804af64:
    param_3 = param_3 & 3;
    ScriptEngine_Routine_0804DA2C(*(byte *)(*(int *)(param_1 + 0x350) + _LAB_0804af84) & 0xfffffffc | param_3);
  case 0x804af88:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804afa4);
    bVar2 = (byte)((param_3 & 3) << 2);
    bVar6 = *pbVar12;
    bVar13 = 0xf3;
    break;
  case 0x804afa8:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804afc4);
    param_3 = param_3 & 3;
    ScriptEngine_SetFlagBit(0xffffffcf,puVar9,*puVar9,param_3 << 4);
  case 0x804afc8:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804afe0);
    bVar2 = (byte)(param_3 << 6);
    bVar6 = *pbVar12;
    bVar13 = 0x3f;
    break;
  case 0x804afe4:
    param_3 = param_3 & 3;
    ScriptEngine_Routine_0804DA2C(*(byte *)(*(int *)(param_1 + 0x350) + _LAB_0804b004) & 0xfffffffc | param_3);
  case 0x804b008:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804b024);
    bVar2 = (byte)((param_3 & 3) << 2);
    bVar6 = *pbVar12;
    bVar13 = 0xf3;
    break;
  case 0x804b028:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804b044);
    param_3 = param_3 & 3;
    ScriptEngine_SetFlagBit(0xffffffcf,puVar9,*puVar9,param_3 << 4);
  case 0x804b048:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804b060);
    bVar2 = (byte)(param_3 << 6);
    bVar6 = *pbVar12;
    bVar13 = 0x3f;
    break;
  case 0x804b064:
    param_3 = param_3 & 3;
    ScriptEngine_Routine_0804DA2C(*(byte *)(*(int *)(param_1 + 0x350) + _LAB_0804b084) & 0xfffffffc | param_3);
  case 0x804b088:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804b0a4);
    bVar2 = (byte)((param_3 & 3) << 2);
    bVar6 = *pbVar12;
    bVar13 = 0xf3;
    break;
  case 0x804b0a8:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804b0c4);
    param_3 = param_3 & 1;
    ScriptEngine_SetFlagBit(0xffffffef,puVar9,*puVar9,param_3 << 4);
  case 0x804b0c8:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804b0e4);
    bVar2 = (byte)((param_3 & 1) << 5);
    bVar6 = *pbVar12;
    bVar13 = 0xdf;
    break;
  case 0x804b0e8:
    ScriptEngine_Routine_0804DA1A((undefined4 *)(param_1 + 0x350),*(undefined4 *)(param_1 + 0x350),_LAB_0804b0f8);
  case 0x804b0fc:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804b114);
    bVar2 = (byte)(param_3 << 7);
    bVar6 = *pbVar12;
    bVar13 = 0x7f;
    break;
  case 0x804b118:
    param_3 = param_3 & 1;
    ScriptEngine_Routine_0804DA2C(*(byte *)(*(int *)(param_1 + 0x350) + _LAB_0804b138) & 0xfffffffe | param_3);
  case 0x804b13c:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804b158);
    bVar2 = (byte)((param_3 & 3) << 1);
    bVar6 = *pbVar12;
    bVar13 = 0xf9;
    break;
  case 0x804b15c:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804b178);
    param_3 = param_3 & 3;
    ScriptEngine_SetFlagBit(0xffffffe7,puVar9,*puVar9,param_3 << 3);
  case 0x804b17c:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804b198);
    bVar2 = (byte)((param_3 & 3) << 5);
    bVar6 = *pbVar12;
    bVar13 = 0x9f;
    break;
  case 0x804b19c:
    puVar7 = (undefined2 *)(*(int *)(param_1 + 0x350) + _LAB_0804b1b8);
    param_3 = param_3 & 3;
    iVar19 = 0x804b1b7;
    uVar5 = ScriptEngine_Routine_0804D2D6(_LAB_0804b1bc,puVar7,*puVar7,param_3 << 7);
    iVar11 = 0x804b1bf;
    (*(code *)(iVar19 + 0xcfe))(uVar5,0x76);
    (*(code *)(iVar11 + 0xffe))();
  case 0x804b1c0:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804b1dc);
    bVar2 = (byte)((param_3 & 3) << 1);
    bVar6 = *pbVar12;
    bVar13 = 0xf9;
    break;
  case 0x804b1e0:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804b1fc);
    param_3 = param_3 & 1;
    ScriptEngine_SetFlagBit(0xfffffff7,puVar9,*puVar9,param_3 << 3);
  case 0x804b200:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804b21c);
    bVar2 = (byte)((param_3 & 3) << 4);
    bVar6 = *pbVar12;
    bVar13 = 0xcf;
    break;
  case 0x804b220:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804b238);
    ScriptEngine_SetFlagBit(0x3f,puVar9,*puVar9,param_3 << 6);
  case 0x804b23c:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804b25c);
    bVar2 = *pbVar12 & 0xfe | bVar6 & 1;
    goto SUB_0804da2c;
  case 0x804b260:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804b27c);
    param_3 = param_3 & 3;
    ScriptEngine_SetFlagBit(0xfffffff9,puVar9,*puVar9,param_3 << 1);
  case 0x804b280:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804b29c);
    bVar2 = (byte)((param_3 & 7) << 3);
    bVar6 = *pbVar12;
    bVar13 = 199;
    break;
  case 0x804b2a0:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804b2b8);
    ScriptEngine_SetFlagBit(0x3f,puVar9,*puVar9,param_3 << 6);
  case 0x804b2bc:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804b2dc);
    bVar2 = *pbVar12 & 0xfc | bVar6 & 3;
    goto SUB_0804da2c;
  case 0x804b2e0:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804b2fc);
    param_3 = param_3 & 3;
    ScriptEngine_SetFlagBit(0xfffffff3,puVar9,*puVar9,param_3 << 2);
  case 0x804b300:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804b31c);
    bVar2 = (byte)((param_3 & 3) << 4);
    bVar6 = *pbVar12;
    bVar13 = 0xcf;
    break;
  case 0x804b320:
    iVar19 = 0x804b33b;
    uVar5 = ScriptEngine_Routine_0804CE8E(*(undefined4 *)(*(int *)(param_1 + 0x350) + _LAB_0804b33c),
                            (param_3 & 0xf) << 0xe,_LAB_0804b340);
    param_1 = param_1 - 0xff;
    (*(code *)(iVar19 + 0xff8))(uVar5,0x78);
  case 0x804b344:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804b360);
    bVar2 = (byte)((param_3 & 1) << 2);
    bVar6 = *pbVar12;
    bVar13 = 0xfb;
    break;
  case 0x804b364:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804b380);
    param_3 = param_3 & 3;
    ScriptEngine_SetFlagBit(0xffffffe7,puVar9,*puVar9,param_3 << 3);
  case 0x804b384:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804b3a0);
    bVar2 = (byte)((param_3 & 3) << 5);
    bVar6 = *pbVar12;
    bVar13 = 0x9f;
    break;
  case 0x804b3a4:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804b3bc);
    ScriptEngine_SetFlagBit(0x7f,puVar9,*puVar9,param_3 << 7);
  case 0x804b3c0:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804b3e0);
    bVar2 = *pbVar12 & 0xe0 | bVar6 & 0x1f;
    goto SUB_0804da2c;
  case 0x804b3e4:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _ASSET_BLOCK_0804B400);
    param_3 = param_3 & 3;
    ScriptEngine_SetFlagBit(0xffffff9f,puVar9,*puVar9,param_3 << 5);
  case 0x804b404:
    iVar19 = *(int *)(param_1 + 0x350);
    pbVar12 = (byte *)(iVar19 + _ASSET_BLOCK_0804B434);
    *pbVar12 = *pbVar12 & 0x7f | (byte)((param_3 & 1) << 7);
    pbVar12 = (byte *)(iVar19 + _LAB_0804b438);
    bVar6 = (byte)(param_3 >> 1) & 1;
    bVar13 = *pbVar12;
    bVar2 = 0xfe;
    goto ScriptEngine_Routine_0804D106;
  case 0x804b43c:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804b458);
    param_3 = param_3 & 3;
    ScriptEngine_SetFlagBit(0xfffffff9,puVar9,*puVar9,param_3 << 1);
  case 0x804b45c:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804b478);
    bVar2 = (byte)((param_3 & 3) << 3);
    bVar6 = *pbVar12;
    bVar13 = 0xe7;
    break;
  case 0x804b47c:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804b498);
    param_3 = param_3 & 3;
    ScriptEngine_SetFlagBit(0xffffff9f,puVar9,*puVar9,param_3 << 5);
  case 0x804b49c:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804b4b4);
    bVar2 = (byte)(param_3 << 7);
    bVar6 = *pbVar12;
    bVar13 = 0x7f;
    break;
  case 0x804b4b8:
    param_3 = param_3 & 3;
    ScriptEngine_Routine_0804DA2C(*(byte *)(*(int *)(param_1 + 0x350) + _LAB_0804b4d8) & 0xfffffffc | param_3);
  case 0x804b4dc:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804b4f8);
    bVar2 = (byte)((param_3 & 3) << 2);
    bVar6 = *pbVar12;
    bVar13 = 0xf3;
    break;
  case 0x804b4fc:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804b518);
    param_3 = param_3 & 3;
    ScriptEngine_SetFlagBit(0xffffffcf,puVar9,*puVar9,param_3 << 4);
  case 0x804b51c:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804b534);
    bVar2 = (byte)(param_3 << 6);
    bVar6 = *pbVar12;
    bVar13 = 0x3f;
    break;
  case 0x804b538:
    param_3 = param_3 & 3;
    ScriptEngine_Routine_0804DA2C(*(byte *)(*(int *)(param_1 + 0x350) + _LAB_0804b558) & 0xfffffffc | param_3);
  case 0x804b55c:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804b578);
    bVar2 = (byte)((param_3 & 3) << 2);
    bVar6 = *pbVar12;
    bVar13 = 0xf3;
    break;
  case 0x804b57c:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804b598);
    param_3 = param_3 & 3;
    ScriptEngine_SetFlagBit(0xffffffcf,puVar9,*puVar9,param_3 << 4);
  case 0x804b59c:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804b5b4);
    bVar2 = (byte)(param_3 << 6);
    bVar6 = *pbVar12;
    bVar13 = 0x3f;
    break;
  case 0x804b5b8:
    param_3 = param_3 & 3;
    ScriptEngine_Routine_0804DA2C(*(byte *)(*(int *)(param_1 + 0x350) + _LAB_0804b5d8) & 0xfffffffc | param_3);
  case 0x804b5dc:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804b5f8);
    bVar2 = (byte)((param_3 & 3) << 2);
    bVar6 = *pbVar12;
    bVar13 = 0xf3;
    break;
  case 0x804b5fc:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804b618);
    param_3 = param_3 & 3;
    ScriptEngine_SetFlagBit(0xffffffcf,puVar9,*puVar9,param_3 << 4);
  case 0x804b61c:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804b634);
    bVar2 = (byte)(param_3 << 6);
    bVar6 = *pbVar12;
    bVar13 = 0x3f;
    break;
  case 0x804b638:
    param_3 = param_3 & 3;
    ScriptEngine_Routine_0804DA2C((byte)(0x2180)[*(int *)(param_1 + 0x350)] & 0xfffffffc | param_3);
  case 0x804b658:
    pbVar12 = 0x2180 + *(int *)(param_1 + 0x350);
    bVar2 = (byte)((param_3 & 3) << 2);
    bVar6 = *pbVar12;
    bVar13 = 0xf3;
    break;
  case 0x804b676:
    param_3 = param_3 & 3;
    ScriptEngine_SetFlagBit(0xffffffcf,0x2180 + *(int *)(param_1 + 0x350),
                    (0x2180)[*(int *)(param_1 + 0x350)],param_3 << 4);
  case 0x804b694:
    pbVar12 = 0x2180 + *(int *)(param_1 + 0x350);
    bVar2 = (byte)(param_3 << 6);
    bVar6 = *pbVar12;
    bVar13 = 0x3f;
    break;
  case 0x804b6ac:
    param_3 = param_3 & 3;
    ScriptEngine_Routine_0804DA2C(*(byte *)(*(int *)(param_1 + 0x350) + _LAB_0804b6cc) & 0xfffffffc | param_3);
  case 0x804b6d0:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804b6ec);
    bVar2 = (byte)((param_3 & 3) << 2);
    bVar6 = *pbVar12;
    bVar13 = 0xf3;
    break;
  case 0x804b6f0:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804b70c);
    param_3 = param_3 & 3;
    ScriptEngine_SetFlagBit(0xffffffcf,puVar9,*puVar9,param_3 << 4);
  case 0x804b710:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804b728);
    bVar2 = (byte)(param_3 << 6);
    bVar6 = *pbVar12;
    bVar13 = 0x3f;
    break;
  case 0x804b72c:
    param_3 = param_3 & 3;
    ScriptEngine_Routine_0804DA2C(*(byte *)(*(int *)(param_1 + 0x350) + _LAB_0804b74c) & 0xfffffffc | param_3);
  case 0x804b750:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804b76c);
    bVar2 = (byte)((param_3 & 1) << 2);
    bVar6 = *pbVar12;
    bVar13 = 0xfb;
    break;
  case 0x804b770:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804b78c);
    param_3 = param_3 & 3;
    ScriptEngine_SetFlagBit(0xffffffe7,puVar9,*puVar9,param_3 << 3);
  case 0x804b790:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804b7ac);
    bVar2 = (byte)((param_3 & 3) << 5);
    bVar6 = *pbVar12;
    bVar13 = 0x9f;
    break;
  case 0x804b7b0:
    puVar7 = (undefined2 *)(*(int *)(param_1 + 0x350) + _LAB_0804b7cc);
    param_3 = param_3 & 3;
    iVar19 = 0x804b7cb;
    uVar5 = ScriptEngine_Routine_0804D2D6(_LAB_0804b7d0,puVar7,*puVar7,param_3 << 7);
    iVar11 = 0x804b7d3;
    (*(code *)(iVar19 + 0xcfe))(uVar5,0x82);
    (*(code *)(iVar11 + 0xffe))();
  case 0x804b7d4:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804b7f0);
    bVar2 = (byte)((param_3 & 3) << 1);
    bVar6 = *pbVar12;
    bVar13 = 0xf9;
    break;
  case 0x804b7f4:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804b810);
    param_3 = param_3 & 3;
    ScriptEngine_SetFlagBit(0xffffffe7,puVar9,*puVar9,param_3 << 3);
  case 0x804b814:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _ASSET_BLOCK_0804B830);
    bVar2 = (byte)((param_3 & 3) << 5);
    bVar6 = *pbVar12;
    bVar13 = 0x9f;
    break;
  case 0x804b834:
    iVar19 = *(int *)(param_1 + 0x350);
    pbVar12 = (byte *)(iVar19 + _ASSET_BLOCK_0804B864);
    *pbVar12 = *pbVar12 & 0x7f | (byte)((param_3 & 1) << 7);
    ScriptEngine_Routine_0804D106(0xfffffffe,param_3 >> 1 & 1,*(undefined1 *)(iVar19 + _LAB_0804b868));
  case 0x804b86c:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804b888);
    bVar2 = (byte)((param_3 & 1) << 1);
    bVar6 = *pbVar12;
    bVar13 = 0xfd;
    break;
  case 0x804b88c:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804b8a8);
    param_3 = param_3 & 3;
    ScriptEngine_SetFlagBit(0xfffffff3,puVar9,*puVar9,param_3 << 2);
  case 0x804b8ac:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804b8c8);
    bVar2 = (byte)((param_3 & 3) << 4);
    bVar6 = *pbVar12;
    bVar13 = 0xcf;
    break;
  case 0x804b8cc:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804b8e4);
    ScriptEngine_SetFlagBit(0x3f,puVar9,*puVar9,param_3 << 6);
  case 0x804b8e8:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804b908);
    bVar2 = *pbVar12 & 0xfc | bVar6 & 3;
    goto SUB_0804da2c;
  case 0x804b90c:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804b928);
    param_3 = param_3 & 3;
    ScriptEngine_SetFlagBit(0xfffffff3,puVar9,*puVar9,param_3 << 2);
  case 0x804b92c:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804b948);
    bVar2 = (byte)((param_3 & 3) << 4);
    bVar6 = *pbVar12;
    bVar13 = 0xcf;
    break;
  case 0x804b94c:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804b964);
    ScriptEngine_SetFlagBit(0x3f,puVar9,*puVar9,param_3 << 6);
  case 0x804b968:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804b988);
    bVar2 = *pbVar12 & 0xfc | bVar6 & 3;
    goto SUB_0804da2c;
  case 0x804b98c:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804b9a8);
    param_3 = param_3 & 7;
    ScriptEngine_SetFlagBit(0xffffffe3,puVar9,*puVar9,param_3 << 2);
  case 0x804b9ac:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804b9c8);
    bVar2 = (byte)((param_3 & 3) << 5);
    bVar6 = *pbVar12;
    bVar13 = 0x9f;
    break;
  case 0x804b9cc:
    puVar7 = (undefined2 *)(*(int *)(param_1 + 0x350) + _LAB_0804b9e8);
    param_3 = param_3 & 3;
    iVar19 = 0x804b9e7;
    uVar5 = ScriptEngine_Routine_0804D2D6(_LAB_0804b9ec,puVar7,*puVar7,param_3 << 7);
    iVar11 = 0x804b9ef;
    (*(code *)(iVar19 + 0xcfe))(uVar5,0x86);
    (*(code *)(iVar11 + 0xffe))();
  case 0x804b9f0:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804ba0c);
    bVar2 = (byte)((param_3 & 3) << 1);
    bVar6 = *pbVar12;
    bVar13 = 0xf9;
    break;
  case 0x804ba10:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804ba2c);
    param_3 = param_3 & 3;
    ScriptEngine_SetFlagBit(0xffffffe7,puVar9,*puVar9,param_3 << 3);
  case 0x804ba30:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _ASSET_BLOCK_0804BA4C);
    bVar2 = (byte)((param_3 & 3) << 5);
    bVar6 = *pbVar12;
    bVar13 = 0x9f;
    break;
  case 0x804ba50:
    iVar19 = *(int *)(param_1 + 0x350);
    pbVar12 = (byte *)(iVar19 + _ASSET_BLOCK_0804BA80);
    *pbVar12 = *pbVar12 & 0x7f | (byte)((param_3 & 1) << 7);
    ScriptEngine_Routine_0804D106(0xfffffffe,param_3 >> 1 & 1,*(undefined1 *)(iVar19 + _LAB_0804ba84));
  case 0x804ba88:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804baa4);
    bVar2 = (byte)((param_3 & 3) << 1);
    bVar6 = *pbVar12;
    bVar13 = 0xf9;
    break;
  case 0x804baa8:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804bac4);
    param_3 = param_3 & 3;
    ScriptEngine_SetFlagBit(0xffffffe7,puVar9,*puVar9,param_3 << 3);
  case 0x804bac8:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804bae4);
    bVar2 = (byte)((param_3 & 3) << 5);
    bVar6 = *pbVar12;
    bVar13 = 0x9f;
    break;
  case 0x804bae8:
    puVar10 = (ushort *)(*(int *)(param_1 + 0x350) + _LAB_0804bb04);
    uVar17 = (ushort)((param_3 & 7) << 7);
    uVar14 = *puVar10;
    uVar3 = (ushort)_LAB_0804bb08;
    goto ScriptEngine_Routine_0804D2D6;
  case 0x804bb0c:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804bb28);
    param_3 = param_3 & 3;
    ScriptEngine_SetFlagBit(0xfffffff3,puVar9,*puVar9,param_3 << 2);
  case 0x804bb2c:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804bb48);
    bVar2 = (byte)((param_3 & 3) << 4);
    bVar6 = *pbVar12;
    bVar13 = 0xcf;
    break;
  case 0x804bb4c:
    iVar19 = 0x804bb67;
    uVar5 = ScriptEngine_Routine_0804CE8E(*(undefined4 *)(*(int *)(param_1 + 0x350) + _LAB_0804bb68),
                            (param_3 & 0xf) << 0xe,_LAB_0804bb6c);
    param_1 = param_1 - 0xff;
    (*(code *)(iVar19 + 0xff8))(uVar5,0x88);
  case 0x804bb70:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804bb8c);
    bVar2 = (byte)((param_3 & 3) << 2);
    bVar6 = *pbVar12;
    bVar13 = 0xf3;
    break;
  case 0x804bb90:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804bbac);
    param_3 = param_3 & 3;
    ScriptEngine_SetFlagBit(0xffffffcf,puVar9,*puVar9,param_3 << 4);
  case 0x804bbb0:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804bbc8);
    bVar2 = (byte)(param_3 << 6);
    bVar6 = *pbVar12;
    bVar13 = 0x3f;
    break;
  case 0x804bbcc:
    param_3 = param_3 & 3;
    ScriptEngine_Routine_0804DA2C(*(byte *)(*(int *)(param_1 + 0x350) + _LAB_0804bbec) & 0xfffffffc | param_3);
  case 0x804bbf0:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _ASSET_BLOCK_0804BC0C);
    bVar2 = (byte)((param_3 & 3) << 3);
    bVar6 = *pbVar12;
    bVar13 = 0xe7;
    break;
  case 0x804bc10:
    iVar19 = *(int *)(param_1 + 0x350);
    pbVar12 = (byte *)(iVar19 + _LAB_0804bc40);
    *pbVar12 = *pbVar12 & 0x1f | (byte)((param_3 & 7) << 5);
    ScriptEngine_Routine_0804D106(0xfffffffe,param_3 >> 3 & 1,*(undefined1 *)(iVar19 + _LAB_0804bc44));
  case 0x804bc48:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804bc64);
    bVar2 = (byte)((param_3 & 3) << 1);
    bVar6 = *pbVar12;
    bVar13 = 0xf9;
    break;
  case 0x804bc68:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804bc84);
    param_3 = param_3 & 3;
    ScriptEngine_SetFlagBit(0xffffffe7,puVar9,*puVar9,param_3 << 3);
  case 0x804bc88:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804bca4);
    bVar2 = (byte)((param_3 & 3) << 5);
    bVar6 = *pbVar12;
    bVar13 = 0x9f;
    break;
  case 0x804bca8:
    puVar10 = (ushort *)(*(int *)(param_1 + 0x350) + _LAB_0804bcc4);
    uVar17 = (ushort)((param_3 & 3) << 7);
    uVar14 = *puVar10;
    uVar3 = (ushort)_LAB_0804bcc8;
    goto ScriptEngine_Routine_0804D2D6;
  case 0x804bccc:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804bce8);
    param_3 = param_3 & 3;
    ScriptEngine_SetFlagBit(0xfffffff9,puVar9,*puVar9,param_3 << 1);
  case 0x804bcec:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804bd08);
    bVar2 = (byte)((param_3 & 3) << 3);
    bVar6 = *pbVar12;
    bVar13 = 0xe7;
    break;
  case 0x804bd0c:
    iVar19 = 0x804bd27;
    uVar5 = ScriptEngine_Routine_0804CE8E(*(undefined4 *)(*(int *)(param_1 + 0x350) + _LAB_0804bd28),
                            (param_3 & 0xf) << 0xd,_LAB_0804bd2c);
    param_1 = param_1 - 7;
    (*(code *)(iVar19 + 0xffc))(uVar5,0x8c);
  case 0x804bd30:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804bd4c);
    bVar2 = (byte)((param_3 & 3) << 1);
    bVar6 = *pbVar12;
    bVar13 = 0xf9;
    break;
  case 0x804bd50:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804bd6c);
    param_3 = param_3 & 3;
    ScriptEngine_SetFlagBit(0xffffffe7,puVar9,*puVar9,param_3 << 3);
  case 0x804bd70:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804bd8c);
    bVar2 = (byte)((param_3 & 1) << 5);
    bVar6 = *pbVar12;
    bVar13 = 0xdf;
    break;
  case 0x804bd90:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804bda8);
    ScriptEngine_SetFlagBit(0x3f,puVar9,*puVar9,param_3 << 6);
  case 0x804bdac:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804bdcc);
    bVar2 = *pbVar12 & 0xfc | bVar6 & 3;
    goto SUB_0804da2c;
  case 0x804bdd0:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804bdec);
    param_3 = param_3 & 3;
    ScriptEngine_SetFlagBit(0xfffffff3,puVar9,*puVar9,param_3 << 2);
  case 0x804bdf0:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804be0c);
    bVar2 = (byte)((param_3 & 3) << 4);
    bVar6 = *pbVar12;
    bVar13 = 0xcf;
    break;
  case 0x804be10:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804be28);
    ScriptEngine_SetFlagBit(0x3f,puVar9,*puVar9,param_3 << 6);
  case 0x804be2c:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804be4c);
    bVar2 = *pbVar12 & 0xfc | bVar6 & 3;
    goto SUB_0804da2c;
  case 0x804be50:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804be6c);
    param_3 = param_3 & 3;
    ScriptEngine_SetFlagBit(0xfffffff3,puVar9,*puVar9,param_3 << 2);
  case 0x804be70:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804be8c);
    bVar2 = (byte)((param_3 & 3) << 4);
    bVar6 = *pbVar12;
    bVar13 = 0xcf;
    break;
  case 0x804be90:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804bea8);
    ScriptEngine_SetFlagBit(0x3f,puVar9,*puVar9,param_3 << 6);
  case 0x804beac:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804becc);
    bVar2 = *pbVar12 & 0xfc | bVar6 & 3;
    goto SUB_0804da2c;
  case 0x804bed0:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804beec);
    param_3 = param_3 & 3;
    ScriptEngine_SetFlagBit(0xfffffff3,puVar9,*puVar9,param_3 << 2);
  case 0x804bef0:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804bf0c);
    bVar2 = (byte)((param_3 & 3) << 4);
    bVar6 = *pbVar12;
    bVar13 = 0xcf;
    break;
  case 0x804bf10:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804bf28);
    ScriptEngine_SetFlagBit(0x3f,puVar9,*puVar9,param_3 << 6);
  case 0x804bf2c:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804bf4c);
    bVar2 = *pbVar12 & 0xfc | bVar6 & 3;
    goto SUB_0804da2c;
  case 0x804bf50:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804bf6c);
    param_3 = param_3 & 3;
    ScriptEngine_SetFlagBit(0xfffffff3,puVar9,*puVar9,param_3 << 2);
  case 0x804bf70:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804bf8c);
    bVar2 = (byte)((param_3 & 3) << 4);
    bVar6 = *pbVar12;
    bVar13 = 0xcf;
    break;
  case 0x804bf90:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804bfa8);
    ScriptEngine_SetFlagBit(0x3f,puVar9,*puVar9,param_3 << 6);
  case 0x804bfac:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804bfcc);
    bVar2 = *pbVar12 & 0xfc | bVar6 & 3;
    goto SUB_0804da2c;
  case 0x804bfd0:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804bfec);
    param_3 = param_3 & 3;
    ScriptEngine_SetFlagBit(0xfffffff3,puVar9,*puVar9,param_3 << 2);
  case 0x804bff0:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804c00c);
    bVar2 = (byte)((param_3 & 3) << 4);
    bVar6 = *pbVar12;
    bVar13 = 0xcf;
    break;
  case 0x804c010:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804c028);
    ScriptEngine_SetFlagBit(0x3f,puVar9,*puVar9,param_3 << 6);
  case 0x804c02c:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804c04c);
    bVar2 = *pbVar12 & 0xfc | bVar6 & 3;
    goto SUB_0804da2c;
  case 0x804c050:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804c06c);
    param_3 = param_3 & 3;
    ScriptEngine_SetFlagBit(0xfffffff3,puVar9,*puVar9,param_3 << 2);
  case 0x804c070:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804c08c);
    bVar2 = (byte)((param_3 & 3) << 4);
    bVar6 = *pbVar12;
    bVar13 = 0xcf;
    break;
  case 0x804c090:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804c0a8);
    ScriptEngine_SetFlagBit(0x3f,puVar9,*puVar9,param_3 << 6);
  case 0x804c0ac:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804c0cc);
    bVar2 = *pbVar12 & 0xfc | bVar6 & 3;
    goto SUB_0804da2c;
  case 0x804c0d0:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804c0e8);
    ScriptEngine_SetFlagBit(0x3f,puVar9,*puVar9,param_3 << 6);
  case 0x804c0ec:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804c10c);
    bVar2 = *pbVar12 & 0xfc | bVar6 & 3;
    goto SUB_0804da2c;
  case 0x804c110:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804c12c);
    param_3 = param_3 & 3;
    ScriptEngine_SetFlagBit(0xfffffff3,puVar9,*puVar9,param_3 << 2);
  case 0x804c130:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804c14c);
    bVar2 = (byte)((param_3 & 3) << 4);
    bVar6 = *pbVar12;
    bVar13 = 0xcf;
    break;
  case 0x804c150:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804c168);
    ScriptEngine_SetFlagBit(0x3f,puVar9,*puVar9,param_3 << 6);
  case 0x804c16c:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804c188);
    bVar2 = (byte)((param_3 & 3) << 2);
    bVar6 = *pbVar12;
    bVar13 = 0xf3;
    break;
  case 0x804c18c:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804c1a8);
    param_3 = param_3 & 3;
    ScriptEngine_SetFlagBit(0xffffffcf,puVar9,*puVar9,param_3 << 4);
  case 0x804c1ac:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804c1c4);
    bVar2 = (byte)(param_3 << 6);
    bVar6 = *pbVar12;
    bVar13 = 0x3f;
    break;
  case 0x804c1c8:
    param_3 = param_3 & 3;
    ScriptEngine_Routine_0804DA2C(*(byte *)(*(int *)(param_1 + 0x350) + _LAB_0804c1e8) & 0xfffffffc | param_3);
  case 0x804c1ec:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804c208);
    bVar2 = (byte)((param_3 & 3) << 2);
    bVar6 = *pbVar12;
    bVar13 = 0xf3;
    break;
  case 0x804c20c:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804c228);
    param_3 = param_3 & 3;
    ScriptEngine_SetFlagBit(0xffffffcf,puVar9,*puVar9,param_3 << 4);
  case 0x804c22c:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804c244);
    bVar2 = (byte)(param_3 << 6);
    bVar6 = *pbVar12;
    bVar13 = 0x3f;
    break;
  case 0x804c248:
    param_3 = param_3 & 3;
    ScriptEngine_Routine_0804DA2C(*(byte *)(*(int *)(param_1 + 0x350) + _LAB_0804c268) & 0xfffffffc | param_3);
  case 0x804c26c:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804c288);
    bVar2 = (byte)((param_3 & 1) << 2);
    bVar6 = *pbVar12;
    bVar13 = 0xfb;
    break;
  case 0x804c28c:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804c2a8);
    param_3 = param_3 & 1;
    ScriptEngine_SetFlagBit(0xfffffff7,puVar9,*puVar9,param_3 << 3);
  case 0x804c2ac:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804c2c8);
    bVar2 = (byte)((param_3 & 1) << 4);
    bVar6 = *pbVar12;
    bVar13 = 0xef;
    break;
  case 0x804c2cc:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804c2e8);
    param_3 = param_3 & 1;
    ScriptEngine_SetFlagBit(0xffffffdf,puVar9,*puVar9,param_3 << 5);
  case 0x804c2ec:
    iVar11 = *(int *)(param_1 + 0x350);
    iVar19 = _LAB_0804c2fc;
    goto SUB_0804da1a;
  case 0x804c300:
    puVar18 = (uint *)(*(int *)(param_1 + 0x350) + _LAB_0804c31c);
    uVar8 = (param_3 & 3) << 0xf;
    uVar4 = *puVar18;
    uVar16 = _LAB_0804c320;
    goto SUB_0804ce8e;
  case 0x804c324:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804c340);
    param_3 = param_3 & 3;
    ScriptEngine_SetFlagBit(0xfffffff3,puVar9,*puVar9,param_3 << 2);
  case 0x804c344:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804c360);
    bVar2 = (byte)((param_3 & 3) << 5);
    bVar6 = *pbVar12;
    bVar13 = 0x9f;
    break;
  case 0x804c364:
    puVar7 = (undefined2 *)(*(int *)(param_1 + 0x350) + _LAB_0804c380);
    param_3 = param_3 & 3;
    iVar19 = 0x804c37f;
    uVar5 = ScriptEngine_Routine_0804D2D6(_LAB_0804c384,puVar7,*puVar7,param_3 << 7);
    iVar11 = 0x804c387;
    (*(code *)(iVar19 + 0xcfe))(uVar5,0x9a);
    (*(code *)(iVar11 + 0xffe))();
  case 0x804c388:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804c3a4);
    bVar2 = (byte)((param_3 & 7) << 1);
    bVar6 = *pbVar12;
    bVar13 = 0xf1;
    break;
  case 0x804c3a8:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804c3c4);
    param_3 = param_3 & 3;
    ScriptEngine_SetFlagBit(0xffffffcf,puVar9,*puVar9,param_3 << 4);
  case 0x804c3c8:
    iVar11 = *(int *)(param_1 + 0x350);
    iVar19 = _LAB_0804c3d8;
    goto SUB_0804da1a;
  case 0x804c3dc:
    iVar19 = *(int *)(param_1 + 0x350);
    pbVar12 = (byte *)(iVar19 + _LAB_0804c40c);
    *pbVar12 = *pbVar12 & 0x7f | (byte)((param_3 & 1) << 7);
    ScriptEngine_Routine_0804D106(0xfffffffc,param_3 >> 1 & 3,*(undefined1 *)(iVar19 + _LAB_0804c410));
  case 0x804c414:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804c430);
    bVar2 = (byte)((param_3 & 3) << 2);
    bVar6 = *pbVar12;
    bVar13 = 0xf3;
    break;
  case 0x804c434:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804c450);
    param_3 = param_3 & 3;
    ScriptEngine_SetFlagBit(0xffffff9f,puVar9,*puVar9,param_3 << 5);
  case 0x804c454:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804c474);
    bVar2 = *pbVar12 & 0xfc | (byte)param_3 & 3;
    goto SUB_0804da2c;
  case 0x804c478:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804c494);
    param_3 = param_3 & 1;
    ScriptEngine_SetFlagBit(0xfffffffb,puVar9,*puVar9,param_3 << 2);
  case 0x804c498:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804c4b4);
    bVar2 = (byte)((param_3 & 3) << 3);
    bVar6 = *pbVar12;
    bVar13 = 0xe7;
    break;
  case 0x804c4b8:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804c4d0);
    ScriptEngine_SetFlagBit(0x3f,puVar9,*puVar9,param_3 << 6);
  case 0x804c4d4:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804c4f4);
    bVar2 = *pbVar12 & 0xfe | bVar6 & 1;
    goto SUB_0804da2c;
  case 0x804c4f8:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804c514);
    param_3 = param_3 & 3;
    ScriptEngine_SetFlagBit(0xfffffff9,puVar9,*puVar9,param_3 << 1);
  case 0x804c518:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804c534);
    bVar2 = (byte)((param_3 & 3) << 4);
    bVar6 = *pbVar12;
    bVar13 = 0xcf;
    break;
  case 0x804c538:
    puVar7 = (undefined2 *)(*(int *)(param_1 + 0x350) + _LAB_0804c554);
    param_3 = param_3 & 7;
    iVar19 = 0x804c553;
    uVar5 = ScriptEngine_Routine_0804D2D6(_LAB_0804c558,puVar7,*puVar7,param_3 << 6);
    iVar11 = 0x804c55b;
    (*(code *)(iVar19 + 0xc7e))(uVar5,0x9e);
    (*(code *)(iVar11 + 0xffe))();
  case 0x804c55c:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804c578);
    bVar2 = (byte)((param_3 & 3) << 1);
    bVar6 = *pbVar12;
    bVar13 = 0xf9;
    break;
  case 0x804c57c:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804c598);
    param_3 = param_3 & 1;
    ScriptEngine_SetFlagBit(0xfffffff7,puVar9,*puVar9,param_3 << 3);
  case 0x804c59c:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804c5b8);
    bVar2 = (byte)((param_3 & 3) << 4);
    bVar6 = *pbVar12;
    bVar13 = 0xcf;
    break;
  case 0x804c5bc:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804c5d4);
    ScriptEngine_SetFlagBit(0x3f,puVar9,*puVar9,param_3 << 6);
  case 0x804c5d8:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804c5f8);
    bVar2 = *pbVar12 & 0xfc | bVar6 & 3;
    goto SUB_0804da2c;
  case 0x804c5fc:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804c618);
    param_3 = param_3 & 1;
    ScriptEngine_SetFlagBit(0xfffffffb,puVar9,*puVar9,param_3 << 2);
  case 0x804c61c:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804c638);
    bVar2 = (byte)((param_3 & 1) << 3);
    bVar6 = *pbVar12;
    bVar13 = 0xf7;
    break;
  case 0x804c63c:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804c658);
    param_3 = param_3 & 1;
    ScriptEngine_SetFlagBit(0xffffffef,puVar9,*puVar9,param_3 << 4);
  case 0x804c65c:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804c678);
    bVar2 = (byte)((param_3 & 3) << 5);
    bVar6 = *pbVar12;
    bVar13 = 0x9f;
    break;
  case 0x804c67c:
    puVar10 = (ushort *)(*(int *)(param_1 + 0x350) + _LAB_0804c698);
    uVar17 = (ushort)((param_3 & 7) << 7);
    uVar14 = *puVar10;
    uVar3 = (ushort)_LAB_0804c69c;
    goto ScriptEngine_Routine_0804D2D6;
  case 0x804c6a0:
    param_3 = param_3 & 3;
    ScriptEngine_Routine_0804DA2C(*(byte *)(*(int *)(param_1 + 0x350) + _LAB_0804c6c0) & 0xfffffffc | param_3);
  case 0x804c6c4:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804c6e0);
    bVar2 = (byte)((param_3 & 3) << 3);
    bVar6 = *pbVar12;
    bVar13 = 0xe7;
    break;
  case 0x804c6e4:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804c6fc);
    ScriptEngine_SetFlagBit(0x3f,puVar9,*puVar9,param_3 << 6);
  case 0x804c700:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804c720);
    bVar2 = *pbVar12 & 0xfe | bVar6 & 1;
    goto SUB_0804da2c;
  case 0x804c724:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804c740);
    param_3 = param_3 & 3;
    ScriptEngine_SetFlagBit(0xfffffff9,puVar9,*puVar9,param_3 << 1);
  case 0x804c744:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804c760);
    bVar2 = (byte)((param_3 & 3) << 4);
    bVar6 = *pbVar12;
    bVar13 = 0xcf;
    break;
  case 0x804c764:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804c77c);
    ScriptEngine_SetFlagBit(0x3f,puVar9,*puVar9,param_3 << 6);
  case 0x804c780:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804c7a0);
    bVar2 = *pbVar12 & 0xfc | bVar6 & 3;
    goto SUB_0804da2c;
  case 0x804c7a4:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804c7c0);
    param_3 = param_3 & 3;
    ScriptEngine_SetFlagBit(0xfffffff3,puVar9,*puVar9,param_3 << 2);
  case 0x804c7c4:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804c7e0);
    bVar2 = (byte)((param_3 & 3) << 4);
    bVar6 = *pbVar12;
    bVar13 = 0xcf;
    break;
  case 0x804c7e4:
    ScriptEngine_Routine_0804DA1A((undefined4 *)(param_1 + 0x350),*(undefined4 *)(param_1 + 0x350),_LAB_0804c7f4);
  case 0x804c7f8:
    iVar19 = *(int *)(param_1 + 0x350);
    pbVar12 = (byte *)(iVar19 + _ASSET_BLOCK_0804C828);
    *pbVar12 = *pbVar12 & 0x7f | (byte)((param_3 & 1) << 7);
    pbVar12 = (byte *)(iVar19 + _LAB_0804c82c);
    bVar6 = (byte)(param_3 >> 1) & 1;
    bVar13 = *pbVar12;
    bVar2 = 0xfe;
    goto ScriptEngine_Routine_0804D106;
  case 0x804c830:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804c84c);
    param_3 = param_3 & 1;
    ScriptEngine_SetFlagBit(0xfffffffd,puVar9,*puVar9,param_3 << 1);
  case 0x804c850:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804c86c);
    bVar2 = (byte)((param_3 & 3) << 2);
    bVar6 = *pbVar12;
    bVar13 = 0xf3;
    break;
  case 0x804c870:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804c88c);
    param_3 = param_3 & 1;
    ScriptEngine_SetFlagBit(0xffffffef,puVar9,*puVar9,param_3 << 4);
  case 0x804c890:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804c8ac);
    bVar2 = (byte)((param_3 & 3) << 5);
    bVar6 = *pbVar12;
    bVar13 = 0x9f;
    break;
  case 0x804c8b0:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804c8c8);
    ScriptEngine_SetFlagBit(0x7f,puVar9,*puVar9,param_3 << 7);
  case 0x804c8cc:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804c8ec);
    bVar2 = *pbVar12 & 0xfc | bVar6 & 3;
    goto SUB_0804da2c;
  case 0x804c8f0:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804c90c);
    param_3 = param_3 & 1;
    ScriptEngine_SetFlagBit(0xfffffffb,puVar9,*puVar9,param_3 << 2);
  case 0x804c910:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804c92c);
    bVar2 = (byte)((param_3 & 3) << 3);
    bVar6 = *pbVar12;
    bVar13 = 0xe7;
    break;
  case 0x804c930:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804c94c);
    param_3 = param_3 & 3;
    ScriptEngine_SetFlagBit(0xffffff9f,puVar9,*puVar9,param_3 << 5);
  case 0x804c950:
    puVar18 = (uint *)(*(int *)(param_1 + 0x350) + 0x21A4);
    uVar8 = (param_3 & 7) << 0xf;
    uVar4 = *puVar18;
    uVar16 = 0xFFFC7FFF;
    goto SUB_0804ce8e;
  case 0x804c970:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804c98c);
    bVar2 = (byte)((param_3 & 1) << 2);
    bVar6 = *pbVar12;
    bVar13 = 0xfb;
    break;
  case 0x804c990:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804c9ac);
    param_3 = param_3 & 1;
    ScriptEngine_SetFlagBit(0xfffffff7,puVar9,*puVar9,param_3 << 3);
  case 0x804c9b0:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804c9cc);
    bVar2 = (byte)((param_3 & 1) << 4);
    bVar6 = *pbVar12;
    bVar13 = 0xef;
    break;
  case 0x804c9d0:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804c9ec);
    param_3 = param_3 & 1;
    ScriptEngine_SetFlagBit(0xffffffdf,puVar9,*puVar9,param_3 << 5);
  case 0x804c9f0:
    iVar11 = *(int *)(param_1 + 0x350);
    iVar19 = _LAB_0804ca00;
    goto SUB_0804da1a;
  case 0x804ca04:
    puVar10 = (ushort *)(*(int *)(param_1 + 0x350) + _LAB_0804ca20);
    uVar17 = (ushort)((param_3 & 3) << 7);
    uVar14 = *puVar10;
    uVar3 = (ushort)_LAB_0804ca24;
    goto ScriptEngine_Routine_0804D2D6;
  case 0x804ca28:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804ca44);
    param_3 = param_3 & 3;
    ScriptEngine_SetFlagBit(0xfffffff9,puVar9,*puVar9,param_3 << 1);
  case 0x804ca48:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804ca64);
    bVar2 = (byte)((param_3 & 3) << 3);
    bVar6 = *pbVar12;
    bVar13 = 0xe7;
    break;
  case 0x804ca68:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _ASSET_BLOCK_0804CA84);
    param_3 = param_3 & 3;
    ScriptEngine_SetFlagBit(0xffffff9f,puVar9,*puVar9,param_3 << 5);
  case 0x804ca88:
    iVar19 = *(int *)(param_1 + 0x350);
    pbVar12 = (byte *)(iVar19 + 0x21A7);
    *pbVar12 = *pbVar12 & 0x7f | (byte)((param_3 & 1) << 7);
    pbVar12 = (byte *)(iVar19 + 0x21A8);
    bVar6 = (byte)(param_3 >> 1) & 1;
    bVar13 = *pbVar12;
    bVar2 = 0xfe;
    goto ScriptEngine_Routine_0804D106;
  case 0x804cac0:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804cadc);
    bVar2 = (byte)((param_3 & 3) << 1);
    bVar6 = *pbVar12;
    bVar13 = 0xf9;
    break;
  case 0x804cae0:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804cafc);
    param_3 = param_3 & 3;
    ScriptEngine_SetFlagBit(0xffffffe7,puVar9,*puVar9,param_3 << 3);
  case 0x804cb00:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804cb18);
    bVar2 = (byte)(param_3 << 5);
    bVar6 = *pbVar12;
    bVar13 = 0x1f;
    break;
  case 0x804cb1c:
    param_3 = param_3 & 3;
    ScriptEngine_Routine_0804DA2C(*(byte *)(*(int *)(param_1 + 0x350) + _LAB_0804cb3c) & 0xfffffffc | param_3);
  case 0x804cb40:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804cb5c);
    bVar2 = (byte)((param_3 & 3) << 2);
    bVar6 = *pbVar12;
    bVar13 = 0xf3;
    break;
  case 0x804cb60:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804cb7c);
    param_3 = param_3 & 1;
    ScriptEngine_SetFlagBit(0xffffffef,puVar9,*puVar9,param_3 << 4);
  case 0x804cb80:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804cb9c);
    bVar2 = (byte)((param_3 & 1) << 5);
    bVar6 = *pbVar12;
    bVar13 = 0xdf;
    break;
  case 0x804cba0:
    ScriptEngine_Routine_0804DA1A((undefined4 *)(param_1 + 0x350),*(undefined4 *)(param_1 + 0x350),_LAB_0804cbb0);
  case 0x804cbb4:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804cbcc);
    bVar2 = (byte)(param_3 << 7);
    bVar6 = *pbVar12;
    bVar13 = 0x7f;
    break;
  case 0x804cbd0:
    param_3 = param_3 & 1;
    ScriptEngine_Routine_0804DA2C(*(byte *)(*(int *)(param_1 + 0x350) + _LAB_0804cbf0) & 0xfffffffe | param_3);
  case 0x804cbf4:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804cc10);
    bVar2 = (byte)((param_3 & 1) << 1);
    bVar6 = *pbVar12;
    bVar13 = 0xfd;
    break;
  case 0x804cc14:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804cc30);
    param_3 = param_3 & 1;
    ScriptEngine_SetFlagBit(0xfffffffb,puVar9,*puVar9,param_3 << 2);
  case 0x804cc34:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804cc50);
    bVar2 = (byte)((param_3 & 1) << 3);
    bVar6 = *pbVar12;
    bVar13 = 0xf7;
    break;
  case 0x804cc54:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804cc70);
    param_3 = param_3 & 1;
    ScriptEngine_SetFlagBit(0xffffffef,puVar9,*puVar9,param_3 << 4);
  case 0x804cc74:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804cc90);
    bVar2 = (byte)((param_3 & 1) << 5);
    bVar6 = *pbVar12;
    bVar13 = 0xdf;
    break;
  case 0x804cc94:
    ScriptEngine_Routine_0804DA1A((undefined4 *)(param_1 + 0x350),*(undefined4 *)(param_1 + 0x350),_LAB_0804cca4);
  case 0x804cca8:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804ccc0);
    bVar2 = (byte)(param_3 << 7);
    bVar6 = *pbVar12;
    bVar13 = 0x7f;
    break;
  case 0x804ccc4:
    param_3 = param_3 & 1;
    ScriptEngine_Routine_0804DA2C(*(byte *)(*(int *)(param_1 + 0x350) + _LAB_0804cce4) & 0xfffffffe | param_3);
  case 0x804cce8:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804cd04);
    bVar2 = (byte)((param_3 & 1) << 1);
    bVar6 = *pbVar12;
    bVar13 = 0xfd;
    break;
  case 0x804cd08:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804cd24);
    param_3 = param_3 & 1;
    ScriptEngine_SetFlagBit(0xfffffffb,puVar9,*puVar9,param_3 << 2);
  case 0x804cd28:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804cd44);
    bVar2 = (byte)((param_3 & 1) << 3);
    bVar6 = *pbVar12;
    bVar13 = 0xf7;
    break;
  case 0x804cd48:
    puVar10 = (ushort *)(*(int *)(param_1 + 0x350) + 0x21B4);
    uVar17 = (ushort)((param_3 & 0xff) << 6);
    uVar14 = *puVar10;
    uVar3 = (ushort)0xFFFFC03F;
    goto ScriptEngine_Routine_0804D2D6;
  case 0x804cd68:
    iVar11 = *(int *)(param_1 + 0x350);
    iVar19 = 0x21B4;
    goto LAB_0804ce82;
  case 0x804cd78:
    puVar10 = (ushort *)(*(int *)(param_1 + 0x350) + 0x21B6);
    uVar17 = (ushort)((param_3 & 0xff) << 6);
    uVar14 = *puVar10;
    uVar3 = (ushort)0xFFFFC03F;
    goto ScriptEngine_Routine_0804D2D6;
  case 0x804cd98:
    iVar19 = *(int *)(param_1 + 0x350);
    pbVar12 = (byte *)(iVar19 + 0x21B7);
    *pbVar12 = *pbVar12 & 0x3f | (byte)((param_3 & 3) << 6);
    pbVar12 = (byte *)(iVar19 + 0x21B8);
    bVar6 = (byte)(param_3 >> 2) & 0x3f;
    bVar13 = *pbVar12;
    bVar2 = 0xc0;
    goto ScriptEngine_Routine_0804D106;
  case 0x804cdd0:
    puVar10 = (ushort *)(*(int *)(param_1 + 0x350) + 0x21B8);
    uVar17 = (ushort)((param_3 & 0xff) << 6);
    uVar14 = *puVar10;
    uVar3 = (ushort)0xFFFFC03F;
    goto ScriptEngine_Routine_0804D2D6;
  case 0x804cdf0:
    iVar11 = *(int *)(param_1 + 0x350);
    iVar19 = 0x21B8;
    goto LAB_0804ce82;
  case 0x804ce00:
    puVar10 = (ushort *)(*(int *)(param_1 + 0x350) + 0x21BA);
    uVar17 = (ushort)((param_3 & 0xff) << 6);
    uVar14 = *puVar10;
    uVar3 = (ushort)0xFFFFC03F;
    goto ScriptEngine_Routine_0804D2D6;
  case 0x804ce20:
    iVar19 = *(int *)(param_1 + 0x350);
    pbVar12 = (byte *)(iVar19 + 0x21BB);
    *pbVar12 = *pbVar12 & 0x3f | (byte)((param_3 & 3) << 6);
    pbVar12 = (byte *)(iVar19 + 0x21BC);
    bVar6 = (byte)(param_3 >> 2) & 0x3f;
    bVar13 = *pbVar12;
    bVar2 = 0xc0;
    goto ScriptEngine_Routine_0804D106;
  case 0x804ce58:
    puVar10 = (ushort *)(*(int *)(param_1 + 0x350) + 0x21BC);
    uVar17 = (ushort)((param_3 & 0xff) << 6);
    uVar14 = *puVar10;
    uVar3 = (ushort)0xFFFFC03F;
    goto ScriptEngine_Routine_0804D2D6;
  case 0x804ce78:
    iVar11 = *(int *)(param_1 + 0x350);
    iVar19 = _LAB_0804ce98;
LAB_0804ce82:
    puVar18 = (uint *)(iVar11 + iVar19);
    uVar8 = (param_3 & 0xff) << 0xe;
    uVar4 = *puVar18;
    uVar16 = _LAB_0804ce9c;
SUB_0804ce8e:
    *puVar18 = uVar4 & uVar16 | uVar8;
    goto case_0804DA2E;
  case 0x804cea0:
    puVar10 = (ushort *)(*(int *)(param_1 + 0x350) + 0x21BE);
    uVar17 = (ushort)((param_3 & 0xff) << 6);
    uVar14 = *puVar10;
    uVar3 = (ushort)0xFFFFC03F;
    goto ScriptEngine_Routine_0804D2D6;
  case 0x804cec0:
    iVar19 = *(int *)(param_1 + 0x350);
    pbVar12 = (byte *)(iVar19 + 0x21BF);
    *pbVar12 = *pbVar12 & 0x3f | (byte)((param_3 & 3) << 6);
    pbVar12 = 0x21c0 + iVar19;
    bVar6 = (byte)(param_3 >> 2) & 0x3f;
    bVar13 = *pbVar12;
    bVar2 = 0xc0;
ScriptEngine_Routine_0804D106:
    *pbVar12 = bVar2 & bVar13 | bVar6;
    ScriptEngine_Routine_0804DA2E();
case_0804D118:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804d134);
    bVar2 = (byte)((param_3 & 1) << 3);
    bVar6 = *pbVar12;
    bVar13 = 0xf7;
    break;
  case 0x804cef4:
    puVar10 = (ushort *)(0x21c0 + *(int *)(param_1 + 0x350));
    uVar17 = (ushort)((param_3 & 7) << 6);
    uVar14 = *puVar10;
    uVar3 = (ushort)0xFFFFFE3F;
    goto ScriptEngine_Routine_0804D2D6;
  case 0x804cf14:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804cf30);
    param_3 = param_3 & 3;
    ScriptEngine_SetFlagBit(0xfffffff9,puVar9,*puVar9,param_3 << 1);
  case 0x804cf34:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804cf50);
    bVar2 = (byte)((param_3 & 1) << 3);
    bVar6 = *pbVar12;
    bVar13 = 0xf7;
    break;
  case 0x804cf54:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804cf70);
    param_3 = param_3 & 1;
    ScriptEngine_SetFlagBit(0xffffffef,puVar9,*puVar9,param_3 << 4);
  case 0x804cf74:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804cf90);
    bVar2 = (byte)((param_3 & 1) << 5);
    bVar6 = *pbVar12;
    bVar13 = 0xdf;
    break;
  case 0x804cf94:
    ScriptEngine_Routine_0804DA1A((undefined4 *)(param_1 + 0x350),*(undefined4 *)(param_1 + 0x350),_LAB_0804cfa4);
  case 0x804cfa8:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804cfc0);
    bVar2 = (byte)(param_3 << 7);
    bVar6 = *pbVar12;
    bVar13 = 0x7f;
    break;
  case 0x804cfc4:
    param_3 = param_3 & 1;
    ScriptEngine_Routine_0804DA2C(*(byte *)(*(int *)(param_1 + 0x350) + _LAB_0804cfe4) & 0xfffffffe | param_3);
  case 0x804cfe8:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804d004);
    bVar2 = (byte)((param_3 & 1) << 1);
    bVar6 = *pbVar12;
    bVar13 = 0xfd;
    break;
  case 0x804d008:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804d024);
    param_3 = param_3 & 1;
    ScriptEngine_SetFlagBit(0xfffffffb,puVar9,*puVar9,param_3 << 2);
  case 0x804d028:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804d044);
    bVar2 = (byte)((param_3 & 1) << 3);
    bVar6 = *pbVar12;
    bVar13 = 0xf7;
    break;
  case 0x804d048:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804d064);
    param_3 = param_3 & 1;
    ScriptEngine_SetFlagBit(0xffffffef,puVar9,*puVar9,param_3 << 4);
  case 0x804d068:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804d084);
    bVar2 = (byte)((param_3 & 1) << 5);
    bVar6 = *pbVar12;
    bVar13 = 0xdf;
    break;
  case 0x804d088:
    ScriptEngine_Routine_0804DA1A((undefined4 *)(param_1 + 0x350),*(undefined4 *)(param_1 + 0x350),_LAB_0804d098);
  case 0x804d09c:
    puVar10 = (ushort *)(*(int *)(param_1 + 0x350) + 0x21C2);
    uVar17 = (ushort)((param_3 & 0xf) << 7);
    uVar14 = *puVar10;
    uVar3 = (ushort)0xFFFFF87F;
    goto ScriptEngine_Routine_0804D2D6;
  case 0x804d0bc:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _ASSET_BLOCK_0804D0D8);
    bVar2 = (byte)((param_3 & 0xf) << 3);
    bVar6 = *pbVar12;
    bVar13 = 0x87;
    break;
  case 0x804d0dc:
    iVar11 = *(int *)(param_1 + 0x350);
    *(byte *)(iVar11 + _ASSET_BLOCK_0804D110) =
         *(byte *)(iVar11 + _ASSET_BLOCK_0804D110) & 0x7f | (byte)((param_3 & 1) << 7);
    bVar6 = (byte)(param_3 >> 1);
    iVar19 = _LAB_0804d114;
    goto ScriptEngine_Routine_0804D0FE;
  case 0x804d118:
    goto case_0804D118;
  case 0x804d138:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804d154);
    param_3 = param_3 & 1;
    ScriptEngine_SetFlagBit(0xffffffef,puVar9,*puVar9,param_3 << 4);
  case 0x804d158:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804d174);
    bVar2 = (byte)((param_3 & 1) << 5);
    bVar6 = *pbVar12;
    bVar13 = 0xdf;
    break;
  case 0x804d178:
    ScriptEngine_Routine_0804DA1A((undefined4 *)(param_1 + 0x350),*(undefined4 *)(param_1 + 0x350),_LAB_0804d188);
  case 0x804d18c:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804d1a4);
    bVar2 = (byte)(param_3 << 7);
    bVar6 = *pbVar12;
    bVar13 = 0x7f;
    break;
  case 0x804d1a8:
    param_3 = param_3 & 1;
    ScriptEngine_Routine_0804DA2C(*(byte *)(*(int *)(param_1 + 0x350) + _LAB_0804d1c8) & 0xfffffffe | param_3);
  case 0x804d1cc:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804d1e8);
    bVar2 = (byte)((param_3 & 1) << 1);
    bVar6 = *pbVar12;
    bVar13 = 0xfd;
    break;
  case 0x804d1ec:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804d208);
    param_3 = param_3 & 1;
    ScriptEngine_SetFlagBit(0xfffffffb,puVar9,*puVar9,param_3 << 2);
  case 0x804d20c:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804d228);
    bVar2 = (byte)((param_3 & 1) << 3);
    bVar6 = *pbVar12;
    bVar13 = 0xf7;
    break;
  case 0x804d22c:
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x350) + _LAB_0804d248);
    param_3 = param_3 & 1;
    ScriptEngine_SetFlagBit(0xffffffef,puVar9,*puVar9,param_3 << 4);
  case 0x804d24c:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804d268);
    bVar2 = (byte)((param_3 & 1) << 5);
    bVar6 = *pbVar12;
    bVar13 = 0xdf;
    break;
  case 0x804d26c:
    ScriptEngine_Routine_0804DA1A((undefined4 *)(param_1 + 0x350),*(undefined4 *)(param_1 + 0x350),_LAB_0804d27c);
  case 0x804d280:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + _LAB_0804d298);
    bVar2 = (byte)(param_3 << 7);
    bVar6 = *pbVar12;
    bVar13 = 0x7f;
    break;
  case 0x804d29c:
    param_3 = param_3 & 1;
    ScriptEngine_Routine_0804DA2C(*(byte *)(*(int *)(param_1 + 0x350) + _LAB_0804d2bc) & 0xfffffffe | param_3);
  case 0x804d2c0:
    puVar10 = (ushort *)(*(int *)(param_1 + 0x350) + _LAB_0804d2e0);
    uVar17 = (ushort)((param_3 & 0xff) << 1);
    uVar14 = *puVar10;
    uVar3 = (ushort)_LAB_0804d2e4;
ScriptEngine_Routine_0804D2D6:
    *puVar10 = uVar3 & uVar14 | uVar17;
    goto case_0804DA2E;
  case 0x804d2e8:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + 0x21C7);
    bVar2 = (byte)((param_3 & 1) << 1);
    bVar6 = *pbVar12;
    bVar13 = 0xfd;
    break;
  case 0x804d308:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + 0x21C7);
    bVar2 = (byte)((param_3 & 1) << 2);
    bVar6 = *pbVar12;
    bVar13 = 0xfb;
    break;
  case 0x804d328:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + 0x21C7);
    bVar2 = (byte)((param_3 & 1) << 3);
    bVar6 = *pbVar12;
    bVar13 = 0xf7;
    break;
  case 0x804d348:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + 0x21C7);
    bVar2 = (byte)((param_3 & 1) << 4);
    bVar6 = *pbVar12;
    bVar13 = 0xef;
    break;
  case 0x804d368:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + 0x21C7);
    bVar2 = (byte)((param_3 & 1) << 5);
    bVar6 = *pbVar12;
    bVar13 = 0xdf;
    break;
  case 0x804d388:
    iVar11 = *(int *)(param_1 + 0x350);
    iVar19 = 0x21C7;
    goto SUB_0804da1a;
  case 0x804d398:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + 0x21C7);
    bVar2 = (byte)(param_3 << 7);
    bVar6 = *pbVar12;
    bVar13 = 0x7f;
    break;
  case 0x804d3b0:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + 0x21C8);
    bVar2 = *pbVar12 & 0xfe | bVar6 & 1;
    goto SUB_0804da2c;
  case 0x804d3d0:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + 0x21C8);
    bVar2 = (byte)((param_3 & 1) << 1);
    bVar6 = *pbVar12;
    bVar13 = 0xfd;
    break;
  case 0x804d3f0:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + 0x21AB);
    bVar2 = (byte)((param_3 & 3) << 4);
    bVar6 = *pbVar12;
    bVar13 = 0xcf;
    break;
  case 0x804d410:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + 0x21AB);
    bVar2 = (byte)(param_3 << 6);
    bVar6 = *pbVar12;
    bVar13 = 0x3f;
    break;
  case 0x804d428:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + 0x21AC);
    bVar2 = *pbVar12 & 0xfc | bVar6 & 3;
    goto SUB_0804da2c;
  case 0x804d448:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + 0x21AC);
    bVar2 = (byte)((param_3 & 3) << 2);
    bVar6 = *pbVar12;
    bVar13 = 0xf3;
    break;
  case 0x804d468:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + 0x21AC);
    bVar2 = (byte)((param_3 & 3) << 4);
    bVar6 = *pbVar12;
    bVar13 = 0xcf;
    break;
  case 0x804d488:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + 0x21AC);
    bVar2 = (byte)(param_3 << 6);
    bVar6 = *pbVar12;
    bVar13 = 0x3f;
    break;
  case 0x804d4a0:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + 0x21AD);
    bVar2 = *pbVar12 & 0xfc | bVar6 & 3;
    goto SUB_0804da2c;
  case 0x804d4c0:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + 0x21AD);
    bVar2 = (byte)((param_3 & 3) << 2);
    bVar6 = *pbVar12;
    bVar13 = 0xf3;
    break;
  case 0x804d4e0:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + 0x21AD);
    bVar2 = (byte)((param_3 & 3) << 4);
    bVar6 = *pbVar12;
    bVar13 = 0xcf;
    break;
  case 0x804d500:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + 0x21AD);
    bVar2 = (byte)(param_3 << 6);
    bVar6 = *pbVar12;
    bVar13 = 0x3f;
    break;
  case 0x804d518:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + 0x21AE);
    bVar2 = *pbVar12 & 0xfc | bVar6 & 3;
    goto SUB_0804da2c;
  case 0x804d538:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + 0x21AE);
    bVar2 = (byte)((param_3 & 3) << 2);
    bVar6 = *pbVar12;
    bVar13 = 0xf3;
    break;
  case 0x804d558:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + 0x21AE);
    bVar2 = (byte)((param_3 & 3) << 4);
    bVar6 = *pbVar12;
    bVar13 = 0xcf;
    break;
  case 0x804d578:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + 0x21AE);
    bVar2 = (byte)(param_3 << 6);
    bVar6 = *pbVar12;
    bVar13 = 0x3f;
    break;
  case 0x804d590:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + 0x21AF);
    bVar2 = *pbVar12 & 0xfc | bVar6 & 3;
    goto SUB_0804da2c;
  case 0x804d5b0:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + 0x21AF);
    bVar2 = (byte)((param_3 & 3) << 2);
    bVar6 = *pbVar12;
    bVar13 = 0xf3;
    break;
  case 0x804d5d0:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + 0x21AF);
    bVar2 = (byte)((param_3 & 3) << 4);
    bVar6 = *pbVar12;
    bVar13 = 0xcf;
    break;
  case 0x804d5f0:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + 0x21AF);
    bVar2 = (byte)(param_3 << 6);
    bVar6 = *pbVar12;
    bVar13 = 0x3f;
    break;
  case 0x804d608:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + 0x21B0);
    bVar2 = *pbVar12 & 0xfc | bVar6 & 3;
    goto SUB_0804da2c;
  case 0x804d628:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + 0x21B0);
    bVar2 = (byte)((param_3 & 3) << 2);
    bVar6 = *pbVar12;
    bVar13 = 0xf3;
    break;
  case 0x804d648:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + 0x21B0);
    bVar2 = (byte)((param_3 & 3) << 4);
    bVar6 = *pbVar12;
    bVar13 = 0xcf;
    break;
  case 0x804d668:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + 0x21B0);
    bVar2 = (byte)(param_3 << 6);
    bVar6 = *pbVar12;
    bVar13 = 0x3f;
    break;
  case 0x804d680:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + 0x21B1);
    bVar2 = *pbVar12 & 0xfc | bVar6 & 3;
    goto SUB_0804da2c;
  case 0x804d6a0:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + 0x21B1);
    bVar2 = (byte)((param_3 & 3) << 2);
    bVar6 = *pbVar12;
    bVar13 = 0xf3;
    break;
  case 0x804d6c0:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + 0x21B1);
    bVar2 = (byte)((param_3 & 3) << 4);
    bVar6 = *pbVar12;
    bVar13 = 0xcf;
    break;
  case 0x804d6e0:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + 0x21B1);
    bVar2 = (byte)(param_3 << 6);
    bVar6 = *pbVar12;
    bVar13 = 0x3f;
    break;
  case 0x804d6f8:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + 0x21B2);
    bVar2 = *pbVar12 & 0xfc | bVar6 & 3;
    goto SUB_0804da2c;
  case 0x804d718:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + 0x21B2);
    bVar2 = (byte)((param_3 & 3) << 2);
    bVar6 = *pbVar12;
    bVar13 = 0xf3;
    break;
  case 0x804d738:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + 0x21B2);
    bVar2 = (byte)((param_3 & 3) << 4);
    bVar6 = *pbVar12;
    bVar13 = 0xcf;
    break;
  case 0x804d758:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + 0x21B2);
    bVar2 = (byte)(param_3 << 6);
    bVar6 = *pbVar12;
    bVar13 = 0x3f;
    break;
  case 0x804d770:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + 0x21B3);
    bVar2 = *pbVar12 & 0xfc | bVar6 & 3;
    goto SUB_0804da2c;
  case 0x804d790:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + 0x21B3);
    bVar2 = (byte)((param_3 & 3) << 2);
    bVar6 = *pbVar12;
    bVar13 = 0xf3;
    break;
  case 0x804d7b0:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + 0x21B3);
    bVar2 = (byte)((param_3 & 3) << 4);
    bVar6 = *pbVar12;
    bVar13 = 0xcf;
    break;
  case 0x804d7d0:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + 0x21B3);
    bVar2 = (byte)(param_3 << 6);
    bVar6 = *pbVar12;
    bVar13 = 0x3f;
    break;
  case 0x804d7e8:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + 0x21B4);
    bVar2 = *pbVar12 & 0xfc | bVar6 & 3;
    goto SUB_0804da2c;
  case 0x804d808:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + 0x21B4);
    bVar2 = (byte)((param_3 & 3) << 2);
    bVar6 = *pbVar12;
    bVar13 = 0xf3;
    break;
  case 0x804d828:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + 0x21B4);
    bVar2 = (byte)((param_3 & 3) << 4);
    bVar6 = *pbVar12;
    bVar13 = 0xcf;
    break;
  case 0x804d848:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + 0x21C8);
    bVar2 = (byte)((param_3 & 1) << 2);
    bVar6 = *pbVar12;
    bVar13 = 0xfb;
    break;
  case 0x804d868:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + 0x21C8);
    bVar2 = (byte)((param_3 & 1) << 3);
    bVar6 = *pbVar12;
    bVar13 = 0xf7;
    break;
  case 0x804d888:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + 0x21C8);
    bVar2 = (byte)(param_3 << 4);
    bVar6 = *pbVar12;
    bVar13 = 0xf;
    break;
  case 0x804d8a0:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + 0x21C9);
    bVar2 = *pbVar12 & 0xfe | bVar6 & 1;
    goto SUB_0804da2c;
  case 0x804d8c0:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + 0x21C9);
    bVar2 = (byte)((param_3 & 0xf) << 1);
    bVar6 = *pbVar12;
    bVar13 = 0xe1;
    break;
  case 0x804d8e0:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + 0x21C9);
    bVar2 = (byte)((param_3 & 1) << 5);
    bVar6 = *pbVar12;
    bVar13 = 0xdf;
    break;
  case 0x804d900:
    iVar11 = *(int *)(param_1 + 0x350);
    iVar19 = 0x21C9;
    goto SUB_0804da1a;
  case 0x804d910:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + 0x21C9);
    bVar2 = (byte)(param_3 << 7);
    bVar6 = *pbVar12;
    bVar13 = 0x7f;
    break;
  case 0x804d928:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + 0x21CA);
    bVar2 = *pbVar12 & 0xfc | bVar6 & 3;
    goto SUB_0804da2c;
  case 0x804d948:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + 0x21CA);
    bVar2 = (byte)((param_3 & 1) << 2);
    bVar6 = *pbVar12;
    bVar13 = 0xfb;
    break;
  case 0x804d968:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + 0x21CA);
    bVar2 = (byte)((param_3 & 1) << 3);
    bVar6 = *pbVar12;
    bVar13 = 0xf7;
    break;
  case 0x804d988:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + 0x21CA);
    bVar2 = (byte)((param_3 & 1) << 4);
    bVar6 = *pbVar12;
    bVar13 = 0xef;
    break;
  case 0x804d9a8:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + 0x21CA);
    bVar2 = (byte)((param_3 & 1) << 5);
    bVar6 = *pbVar12;
    bVar13 = 0xdf;
    break;
  case 0x804d9c8:
    iVar11 = *(int *)(param_1 + 0x350);
    iVar19 = 0x21CA;
    goto SUB_0804da1a;
  case 0x804d9d8:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + 0x21CB);
    bVar2 = (byte)(param_3 << 2);
    bVar6 = *pbVar12;
    bVar13 = 3;
    break;
  case 0x804d9f0:
    pbVar12 = (byte *)(*(int *)(param_1 + 0x350) + 0x216E);
    bVar2 = (byte)((param_3 & 1) << 5);
    bVar6 = *pbVar12;
    bVar13 = 0xdf;
    break;
  case 0x804da10:
    iVar11 = *(int *)(param_1 + 0x350);
    iVar19 = 0x216E;
SUB_0804da1a:
    pbVar12 = (byte *)(iVar11 + iVar19);
    bVar2 = (byte)((param_3 & 1) << 6);
    bVar6 = *pbVar12;
    bVar13 = 0xbf;
    break;
  case 0x804da2e:
    goto case_0804DA2E;
  }
  bVar2 = bVar13 & bVar6 | bVar2;
SUB_0804da2c:
  *pbVar12 = bVar2;
case_0804DA2E:
  uVar5 = ScriptEngine_Routine_0804590C(param_1,param_2);
  if (0x18B < param_2 - 0x46U) {
    return in_lr;
  }
  opcode_handler = *(code **)((param_2 - 0x46U) * 4 + gInlineTable_0804DA5C);
  uVar5 = (*opcode_handler)(opcode_handler,gInlineTable_0804DA5C,uVar5);
  return uVar5;
}

// =============================================================================
// Function: ScriptEngine_Routine_0804E0F8 @ 0x0804E0F8
// =============================================================================
undefined8 ScriptEngine_Routine_0804E0F8(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  undefined4 in_lr;
  undefined1 auStack_18 [4];
  
  piVar5 = (int *)(param_1 + 0x350);
  iVar2 = *piVar5 + 0x1C34;
  cVar1 = Product_GetId();
  if (cVar1 == '\0') {
    uVar6 = 0;
    auStack_18[0] = Product_Construct(iVar2);
    iVar3 = Item_GetId(auStack_18);
    if (iVar3 == param_2) {
      uVar6 = Product_GetPrice(iVar2);
      uVar6 = (-(uVar6 ^ 99) | uVar6 ^ 99) >> 0x1f;
    }
    if (((uVar6 == 0) && (iVar2 = Farmer_Routine_0800F990(*piVar5 + 0x1C38,param_2), iVar2 == 0)) &&
       (iVar2 = ShippingBin_StatEnt_ShipOne(*piVar5 + 0x380,param_2), iVar2 == 0)) {
      uVar4 = 0;
      goto LAB_0804e172;
    }
  }
  uVar4 = 1;
LAB_0804e172:
  return CONCAT44(in_lr,uVar4);
}

// =============================================================================
// Function: ScriptEngine_Routine_0804E17C @ 0x0804E17C
// =============================================================================
undefined8 ScriptEngine_Routine_0804E17C(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 in_lr;
  
  piVar4 = (int *)(param_1 + 0x350);
  cVar1 = HeldItem_IsEmpty(*piVar4 + 0x1C2C);
  if (((cVar1 == '\0') && (iVar2 = Farmer_Routine_0800F77C(*piVar4 + 0x1C38), iVar2 == 0)) &&
     ((iVar2 = Building_Routine_0800C048(*piVar4 + 500), iVar2 == 0 ||
      (iVar2 = ShippingBin_Routine_0800B68C(iVar2,param_2), iVar2 == 0)))) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return CONCAT44(in_lr,uVar3);
}

// =============================================================================
// Function: ScriptEngine_Routine_0804E1D4 @ 0x0804E1D4
// =============================================================================
undefined8 ScriptEngine_Routine_0804E1D4(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 in_lr;
  
  piVar4 = (int *)(param_1 + 0x350);
  cVar1 = HeldItem_IsEmpty(*piVar4 + 0x1C2C);
  if (((cVar1 == '\0') && (iVar2 = Farmer_Routine_0800F77C(*piVar4 + 0x1C38), iVar2 == 0)) &&
     ((iVar2 = Building_Routine_0800C060(*piVar4 + 500), iVar2 == 0 ||
      (iVar2 = Fridge_GetItem(iVar2,param_2), iVar2 == 0)))) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return CONCAT44(in_lr,uVar3);
}

// =============================================================================
// Function: ScriptEngine_Routine_0804E22C @ 0x0804E22C
// =============================================================================
undefined8 ScriptEngine_Routine_0804E22C(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  undefined1 auStack_14 [4];
  
  iVar4 = *(int *)(param_1 + 0x350) + 0x1C2C;
  cVar1 = HeldItem_IsEmpty(iVar4);
  if ((cVar1 == '\0') && (iVar2 = HeldItem_GetKind(iVar4), iVar2 == 1)) {
    auStack_14[0] = HeldItem_GetArticle(iVar4);
    iVar4 = Item_GetQuality(auStack_14);
    if (iVar4 != param_2) goto LAB_0804e272;
  }
  else {
LAB_0804e272:
    iVar4 = Farmer_Routine_0800F714(*(int *)(param_1 + 0x350) + 0x1C38,param_2);
    if ((iVar4 == -1) &&
       ((iVar4 = Building_Routine_0800C060(*(int *)(param_1 + 0x350) + 500), iVar4 == 0 ||
        (iVar4 = Shelf_GetItem(iVar4,param_2), iVar4 == -1)))) {
      uVar3 = 0;
      goto LAB_0804e2b6;
    }
  }
  uVar3 = 1;
LAB_0804e2b6:
  return CONCAT44(in_lr,uVar3);
}

// =============================================================================
// Function: ScriptEngine_Routine_0804E2C0 @ 0x0804E2C0
// =============================================================================
undefined8 ScriptEngine_Routine_0804E2C0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  undefined1 auStack_14 [4];
  
  iVar4 = *(int *)(param_1 + 0x350) + 0x1C2C;
  cVar1 = HeldItem_IsEmpty(iVar4);
  if ((cVar1 == '\0') && (iVar2 = HeldItem_GetKind(iVar4), iVar2 == 0)) {
    HeldItem_GetFood(auStack_14,iVar4);
    iVar4 = Item_Routine_0800DCB4(auStack_14);
    if (iVar4 != param_2) goto LAB_0804e304;
  }
  else {
LAB_0804e304:
    iVar4 = Farmer_Routine_0800F6B4(*(int *)(param_1 + 0x350) + 0x1C38,param_2);
    if ((iVar4 == -1) &&
       ((iVar4 = Building_Routine_0800C048(*(int *)(param_1 + 0x350) + 500), iVar4 == 0 ||
        (iVar4 = ShippingBin_Routine_0800B7B8(iVar4,param_2), iVar4 == -1)))) {
      uVar3 = 0;
      goto LAB_0804e34a;
    }
  }
  uVar3 = 1;
LAB_0804e34a:
  return CONCAT44(in_lr,uVar3);
}

// =============================================================================
// Function: ScriptEngine_Routine_0804E354 @ 0x0804E354
// =============================================================================
undefined8 ScriptEngine_Routine_0804E354(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  undefined1 auStack_14 [4];
  
  iVar3 = *(int *)(param_1 + 0x350) + 0x1C34;
  cVar1 = Product_GetId(iVar3);
  if (cVar1 == '\0') {
    auStack_14[0] = Product_Construct(iVar3);
    iVar3 = Item_GetId(auStack_14);
    if (iVar3 != param_2) goto LAB_0804e390;
  }
  else {
LAB_0804e390:
    iVar3 = Farmer_Routine_0800F92C(*(int *)(param_1 + 0x350) + 0x1C38,param_2);
    if ((iVar3 == -1) &&
       (iVar3 = ShippingBin_Routine_0800B544(*(int *)(param_1 + 0x350) + 0x380,param_2), iVar3 == -1)) {
      uVar2 = 0;
      goto LAB_0804e3ce;
    }
  }
  uVar2 = 1;
LAB_0804e3ce:
  return CONCAT44(in_lr,uVar2);
}

// =============================================================================
// Function: ScriptEngine_Routine_0804E3D8 @ 0x0804E3D8
// =============================================================================
undefined8
ScriptEngine_Routine_0804E3D8(int param_1,uint param_2,int *param_3,undefined4 param_4,undefined4 param_5,
             undefined4 param_6)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 unaff_r4;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = 0;
  if (param_2 < 5) {
    switch(*(uint *)(PTR_case_0804E3F4_0804e3f0 + param_2 * 4) & 0xfffffffe) {
    case 0x804e3f4:
      uVar1 = Product_GetPrice(unaff_r4);
      if ((((int)(-(uVar1 ^ 99) | uVar1 ^ 99) < 0) ||
          (iVar4 = Farmer_Routine_0800F990(*param_3 + 0x1C38,0), iVar4 != 0)) ||
         (iVar4 = ShippingBin_StatEnt_ShipOne(*param_3 + 0x380,0), iVar4 != 0)) {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
      return CONCAT44(param_6,uVar2);
    case 0x804e408:
      iVar4 = Farm_Routine_08009C3C(*(int *)(param_1 + 0x350) + 0x14);
      break;
    case 0x804e41a:
      iVar3 = Building_Routine_0800CE74(*(int *)(param_1 + 0x350) + 0x5f0);
      if ((int)param_3 < iVar3) {
        iVar4 = Food_GetStaminaGain(*(int *)(param_1 + 0x350) + 0x5f0,param_3);
      }
      break;
    case 0x804e442:
      iVar3 = Building_Routine_0800CE74(*(int *)(param_1 + 0x350) + 0x5f0);
      if ((int)param_3 < iVar3) {
        iVar4 = Food_GetFatigueGain(*(int *)(param_1 + 0x350) + 0x5f0,param_3);
      }
      break;
    case 0x804e46a:
      iVar3 = Barn_GetCowCount(*(int *)(param_1 + 0x350) + 0x410);
      if ((int)param_3 < iVar3) {
        iVar4 = Building_Routine_0800C894(*(int *)(param_1 + 0x350) + 0x410,param_3);
      }
      break;
    case 0x804e492:
      iVar4 = *(int *)(param_1 + 0x350) + 0x1C70;
    }
  }
  return CONCAT44(in_lr,iVar4);
}

// =============================================================================
// Function: ScriptEngine_Routine_0804E4AC @ 0x0804E4AC
// =============================================================================
void ScriptEngine_Routine_0804E4AC(uint param_1,int param_2,uint param_3,uint param_4,undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [32];
  undefined1 auStack_48 [32];
  uint uStack_28;
  uint uStack_24;
  
  uVar1 = M4A_Routine_080D0D28(auStack_a8,param_5);
  if (uVar1 - 1 < 2) {
    uVar5 = param_3 >> 3;
    uVar4 = param_4 >> 3;
    uVar2 = param_1 & 0xffff;
    uVar3 = param_1 >> 0x10;
    uStack_28 = uVar5;
    if ((uVar5 < uVar2) && (uVar4 < uVar3)) {
      if (((param_3 & 7) == 0) && ((param_4 & 7) == 0)) {
        uStack_24 = (uint)(uVar5 + 1 < uVar2);
        uVar6 = uVar4 + 1;
        iVar7 = (uVar4 * uVar2 + uVar5) * 0x20 + param_2;
        CpuFastSet(auStack_a8,iVar7,8);
        if (uVar6 < uVar3) {
          CpuFastSet(auStack_68,(uVar6 * uVar2 + uVar5) * 0x20 + param_2,8);
        }
        if (((uStack_24 != 0) && (1 < uVar1)) &&
           (CpuFastSet(auStack_88,iVar7 + 0x20,8), uVar6 < uVar3)) {
          CpuFastSet(auStack_48,(uStack_28 + uVar6 * uVar2) * 0x20 + param_2 + 0x20,8);
        }
      }
      else {
        ScriptEngine_Routine_0804E9C8(param_1,param_2,param_3,param_4,auStack_a8);
      }
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

// =============================================================================
// Function: ScriptEngine_Routine_0804E7A0 @ 0x0804E7A0
// =============================================================================
undefined4 ScriptEngine_Routine_0804E7A0(uint param_1,undefined4 param_2,uint param_3)

{
  undefined4 in_lr;
  uint uStack_8;
  undefined4 uStack_4;
  
  uStack_8 = param_3 & 0xf | (param_3 & 0xf) << 4;
  uStack_8 = uStack_8 | uStack_8 << 8;
  uStack_8 = uStack_8 | uStack_8 << 0x10;
  uStack_4 = in_lr;
  CpuFastSet(&uStack_8,param_2,
                  (param_1 >> 0x10) * 0x20 * (param_1 & 0xffff) >> 2 & 0x001FFFFF | 0x1000000);
  return uStack_4;
}

// =============================================================================
// Function: ScriptEngine_Routine_0804E7DC @ 0x0804E7DC
// =============================================================================
undefined4
ScriptEngine_Routine_0804E7DC(uint param_1,int param_2,uint param_3,uint param_4,uint param_5,uint param_6,
             uint param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 in_lr;
  uint uStack_20;
  
  uVar1 = param_7 & 0xf | (param_7 & 0xf) << 4;
  uVar1 = uVar1 | uVar1 << 8;
  uVar1 = uVar1 << 0x10 | uVar1;
  uVar3 = param_1 & 0xffff;
  param_1 = param_1 >> 0x10;
  uVar2 = uVar3 * 8;
  uVar4 = param_1 * 8;
  if ((((param_3 == 0) && (param_4 == 0)) && (uVar2 <= param_5)) && (uVar4 <= param_6)) {
    uStack_20 = uVar1;
    CpuFastSet(&uStack_20,param_2,param_1 * 0x20 * uVar3 >> 2 & 0x001FFFFF | 0x1000000);
  }
  else if ((param_3 < uVar3) && (param_4 < param_1)) {
    if (uVar2 <= param_3 + param_5) {
      param_5 = uVar2 - param_3;
    }
    if (uVar4 <= param_4 + param_6) {
      param_6 = uVar4 - param_4;
    }
    if ((((param_3 & 7) == 0) && ((param_4 & 7) == 0)) &&
       (((param_5 & 7) == 0 && ((param_6 & 7) == 0)))) {
      param_6 = param_6 >> 3;
      param_2 = param_2 + (uVar3 * (param_4 >> 3) + (param_3 >> 3)) * 0x20;
      uVar2 = 0x3FFFFFF8 & param_5 & 0x001FFFFF;
      do {
        uStack_20 = uVar1;
        CpuFastSet(&uStack_20,param_2,uVar2 | 0x1000000);
        param_2 = param_2 + uVar3 * 0x20;
        param_6 = param_6 - 1;
      } while (param_6 != 0);
    }
  }
  return in_lr;
}

// =============================================================================
// Function: ScriptEngine_Routine_0804E8F0 @ 0x0804E8F0
// =============================================================================
undefined4
ScriptEngine_Routine_0804E8F0(uint param_1,undefined4 param_2,uint param_3,undefined4 param_4,byte *param_5)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  uVar3 = 0;
  bVar1 = *param_5;
  while ((bVar1 != 0 && (param_3 < (param_1 & 0xffff) << 3))) {
    uVar3 = uVar3 | bVar1;
    iVar2 = ScriptEngine_Routine_0804E4AC(param_1,param_2,param_3,param_4,uVar3);
    if (iVar2 == 1) {
      uVar3 = 0;
      param_3 = param_3 + 8;
    }
    else if (iVar2 != 0) {
      if (iVar2 != 2) {
        return in_lr;
      }
      uVar3 = 0;
      param_3 = param_3 + 0x10;
    }
    param_5 = param_5 + 1;
    bVar1 = *param_5;
    uVar3 = uVar3 << 8;
  }
  return in_lr;
}

// =============================================================================
// Function: ScriptEngine_Routine_0804E958 @ 0x0804E958
// =============================================================================
undefined4
ScriptEngine_Routine_0804E958(uint param_1,undefined4 param_2,uint param_3,undefined4 param_4,byte *param_5,
             undefined4 param_6,undefined4 param_7)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  uVar3 = 0;
  bVar1 = *param_5;
  while ((bVar1 != 0 && (param_3 < (param_1 & 0xffff) << 3))) {
    uVar3 = uVar3 | bVar1;
    iVar2 = ScriptEngine_Routine_0804E5AC(param_1,param_2,param_3,param_4,uVar3,param_6,param_7);
    if (iVar2 == 1) {
      uVar3 = 0;
      param_3 = param_3 + 8;
    }
    else if (iVar2 != 0) {
      if (iVar2 != 2) {
        return in_lr;
      }
      uVar3 = 0;
      param_3 = param_3 + 0x10;
    }
    param_5 = param_5 + 1;
    bVar1 = *param_5;
    uVar3 = uVar3 << 8;
  }
  return in_lr;
}

// =============================================================================
// Function: ScriptEngine_Routine_0804E9D0 @ 0x0804E9D0
// =============================================================================
undefined4 ScriptEngine_Routine_0804E9D0(uint param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 in_lr;
  
  CpuFastSet(param_3,param_2,
                  ((param_1 >> 0x10) * (param_1 & 0xffff) & 0x7ffffff) << 3 & 0x001FFFFF);
  return in_lr;
}

// =============================================================================
// Function: ScriptEngine_Routine_0804E9F4 @ 0x0804E9F4
// =============================================================================
undefined4
ScriptEngine_Routine_0804E9F4(ushort *param_1,ushort param_2,uint param_3,uint param_4,short param_5,int param_6)

{
  uint uVar1;
  uint uVar2;
  ushort *puVar3;
  ushort uVar4;
  undefined4 in_lr;
  
  uVar1 = 0;
  if (param_4 != 0) {
    do {
      uVar2 = 0;
      uVar1 = uVar1 + 1;
      if (param_3 != 0) {
        puVar3 = param_1;
        uVar4 = param_2;
        do {
          param_2 = uVar4 + 1;
          *puVar3 = uVar4 | param_5 << 0xc;
          puVar3 = puVar3 + 1;
          uVar2 = uVar2 + 1;
          uVar4 = param_2;
        } while (uVar2 < param_3);
      }
      param_1 = param_1 + param_6;
    } while (uVar1 < param_4);
  }
  return in_lr;
}

// =============================================================================
// Function: ScriptEngine_Routine_0804EA58 @ 0x0804EA58
// =============================================================================
void ScriptEngine_Routine_0804EA58(undefined4 *param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4,
                  undefined4 param_5,undefined2 param_6,undefined4 param_7)

{
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = gRomData_080E7868;
  param_1[3] = param_2;
  *(undefined2 *)((int)param_1 + 0x12) = param_3;
  param_1[5] = param_4;
  param_1[6] = param_5;
  *(undefined2 *)(param_1 + 4) = param_6;
  param_1[7] = param_7;
  return;
}

// =============================================================================
// Function: ScriptEngine_Routine_0804EA80 @ 0x0804EA80
// =============================================================================
undefined4 ScriptEngine_Routine_0804EA80(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 8) = gRomData_080E7868;
  Farm_Routine_080098AC();
  return in_lr;
}

// =============================================================================
// Function: ScriptEngine_Routine_0804EA94 @ 0x0804EA94
// =============================================================================
void ScriptEngine_Routine_0804EA94(uint *param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                  int param_7,uint param_8)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0xFFFFF3FF & (0xFFFF0FFF & param_4 & 0x3ff | (param_5 & 0xf) << 0xc);
  uVar2 = 0xFFFF3FFF &
          (0xFE00FFFF & (0xFFFFFF00 & 0x1000 | param_3 & 0xff) |
          (param_2 & 0x1FF) << 0x10);
  *param_1 = 0x3FFFFFFF & (uVar2 | (param_8 & 3) << 0xe) |
             ((uVar2 >> 0x1e) + param_7) * 0x40000000;
  param_1[1] = uVar1 | (param_6 & 3) << 10;
  return;
}

// =============================================================================
// Function: ScriptEngine_Routine_0804EB64 @ 0x0804EB64
// =============================================================================
undefined4 ScriptEngine_Routine_0804EB64(int param_1,undefined1 *param_2,uint param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  char cVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined1 *puVar7;
  uint uVar8;
  undefined4 in_lr;
  bool bVar9;
  byte abStack_3d [11];
  undefined1 uStack_32;
  byte abStack_30 [12];
  byte *pbStack_24;
  
  pbVar6 = abStack_3d + 1;
  pbVar5 = abStack_3d + 1;
  if (param_3 == 0) {
    if (param_1 < 0) {
      abStack_3d[1] = 0x2d;
      pbVar6 = abStack_3d + 2;
      param_1 = -param_1;
    }
    VTable_Routine_080E0EFC(param_1,pbVar6);
    uStack_32 = 0;
    puVar1 = gRomData_080F9F2C;
    puVar2 = gRomData_080F9F28;
    iVar3 = gRomData_080F9E78;
    goto LAB_0804ec44;
  }
  bVar9 = param_1 < 0;
  if (bVar9) {
    param_1 = -param_1;
  }
  uVar8 = 0;
  pbStack_24 = abStack_3d + param_3 + 1;
  if (param_3 != 0) {
    do {
      cVar4 = math_umodsi3(param_1,10);
      abStack_30[uVar8] = cVar4 + 0x30;
      param_1 = math_udivsi3(param_1,10);
      if (param_1 == 0) goto joined_r0x0804ebba;
      uVar8 = uVar8 + 1;
    } while (uVar8 < param_3);
  }
  goto LAB_0804ebd2;
joined_r0x0804ebba:
  while (uVar8 = uVar8 + 1, uVar8 < param_3) {
    abStack_30[uVar8] = 0x20;
  }
LAB_0804ebd2:
  if (bVar9) {
    abStack_30[uVar8] = 0x2d;
  }
  uVar8 = 0;
  if (param_3 != 0) {
    pbVar5 = abStack_3d + param_3;
    do {
      *pbVar5 = abStack_30[uVar8];
      pbVar5 = pbVar5 + -1;
      uVar8 = uVar8 + 1;
    } while (uVar8 < param_3);
  }
  *pbStack_24 = 0;
  pbVar5 = abStack_3d + 1;
  puVar1 = gRomData_080F9F2C;
  puVar2 = gRomData_080F9F28;
  iVar3 = gRomData_080F9E78;
LAB_0804ec44:
  for (; uVar8 = (uint)*pbVar5, uVar8 != 0; pbVar5 = pbVar5 + 1) {
    if ((uVar8 - 0x30 & 0xff) < 10) {
      puVar7 = (undefined1 *)(uVar8 * 3 + iVar3);
    }
    else {
      puVar7 = puVar2;
      if ((uVar8 != 0x20) && (puVar7 = puVar1, uVar8 != 0x2d)) break;
    }
    *param_2 = *puVar7;
    param_2[1] = puVar7[1];
    param_2 = param_2 + 2;
  }
  *param_2 = 0;
  return in_lr;
}

// =============================================================================
// Function: ScriptEngine_Routine_0804EC84 @ 0x0804EC84
// =============================================================================
undefined4 ScriptEngine_Routine_0804EC84(int param_1,char *param_2,uint param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 in_lr;
  char acStack_29 [13];
  
  iVar3 = param_1;
  if (param_1 < 0) {
    iVar3 = -param_1;
  }
  uVar5 = 0;
  uVar1 = 1;
  do {
    uVar4 = uVar1;
    cVar2 = math_umodsi3(iVar3,10);
    acStack_29[uVar5 + 1] = cVar2 + '0';
    iVar3 = math_udivsi3(iVar3,10);
    if (iVar3 < 1) break;
    uVar5 = uVar4;
    uVar1 = uVar4 + 1;
  } while (uVar4 + 1 < 0xb);
  uVar5 = uVar4;
  if ((param_3 != 0) && (uVar5 = param_3, uVar4 <= param_3)) {
    for (; uVar5 = uVar4, uVar4 < param_3; uVar4 = uVar4 + 1) {
      acStack_29[uVar4 + 1] = ' ';
    }
  }
  if (param_1 < 0) {
    acStack_29[uVar5 + 1] = '-';
    uVar5 = uVar5 + 1;
  }
  while (uVar5 - 1 != 0xffffffff) {
    *param_2 = acStack_29[uVar5];
    param_2 = param_2 + 1;
    uVar5 = uVar5 - 1;
  }
  *param_2 = '\0';
  return in_lr;
}

// =============================================================================
// Function: ScriptEngine_Routine_0804ED28 @ 0x0804ED28
// =============================================================================
undefined4 ScriptEngine_Routine_0804ED28(int param_1,ushort *param_2,short param_3,short param_4,int param_5)

{
  ushort uVar1;
  int iVar2;
  ushort uVar3;
  undefined4 in_lr;
  
  uVar3 = param_4 * 0x1000;
  do {
    iVar2 = math_divsi3(param_1,10);
    uVar1 = param_3 + ((short)param_1 + (short)iVar2 * -10) * 4;
    *param_2 = uVar1 + 1 | uVar3;
    param_2[-1] = uVar3 | uVar1;
    param_2[param_5] = uVar1 + 3 | uVar3;
    (param_2 + param_5)[-1] = uVar1 + 2 | uVar3;
    param_2 = param_2 + -2;
    param_1 = iVar2;
  } while (iVar2 != 0);
  return in_lr;
}

// =============================================================================
// Function: ScriptEngine_Routine_0804ED7C @ 0x0804ED7C
// =============================================================================
void ScriptEngine_Routine_0804ED7C(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4,
                  undefined2 param_5,undefined4 param_6)

{
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = gRomData_080E7858;
  param_1[3] = param_2;
  param_1[4] = param_3;
  *(undefined2 *)(param_1 + 5) = param_4;
  *(undefined2 *)((int)param_1 + 0x16) = param_5;
  param_1[6] = param_6;
  return;
}

// =============================================================================
// Function: ScriptEngine_Routine_0804EDA0 @ 0x0804EDA0
// =============================================================================
undefined4 ScriptEngine_Routine_0804EDA0(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 8) = gRomData_080E7858;
  Farm_Routine_080098AC();
  return in_lr;
}

// =============================================================================
// Function: ScriptEngine_Routine_0804EDB4 @ 0x0804EDB4
// =============================================================================
undefined4 ScriptEngine_Routine_0804EDB4(int param_1,ushort *param_2,short param_3,short param_4,int param_5)

{
  ushort uVar1;
  int iVar2;
  undefined4 in_lr;
  
  do {
    iVar2 = math_divsi3(param_1,10);
    uVar1 = param_3 + ((short)param_1 + (short)iVar2 * -10) * 2;
    *param_2 = param_4 * 0x1000 | uVar1;
    param_2[param_5] = uVar1 + 1 | param_4 * 0x1000;
    param_2 = param_2 + -1;
    param_1 = iVar2;
  } while (iVar2 != 0);
  return in_lr;
}

// =============================================================================
// Function: ScriptEngine_Routine_0804EDF8 @ 0x0804EDF8
// =============================================================================
void ScriptEngine_Routine_0804EDF8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4,
                  undefined2 param_5,undefined4 param_6)

{
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = gRomData_080E7848;
  param_1[3] = param_2;
  param_1[4] = param_3;
  *(undefined2 *)(param_1 + 5) = param_4;
  *(undefined2 *)((int)param_1 + 0x16) = param_5;
  param_1[6] = param_6;
  return;
}

// =============================================================================
// Function: ScriptEngine_Routine_0804EE1C @ 0x0804EE1C
// =============================================================================
undefined4 ScriptEngine_Routine_0804EE1C(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 8) = gRomData_080E7848;
  Farm_Routine_080098AC();
  return in_lr;
}

// =============================================================================
// Function: ScriptEngine_Routine_0804EE30 @ 0x0804EE30
// =============================================================================
undefined4 ScriptEngine_Routine_0804EE30(int param_1,ushort *param_2,short param_3,short param_4)

{
  int iVar1;
  undefined4 in_lr;
  
  do {
    iVar1 = math_divsi3(param_1,10);
    *param_2 = param_3 + (short)param_1 + (short)iVar1 * -10 | param_4 << 0xc;
    param_2 = param_2 + -1;
    param_1 = iVar1;
  } while (iVar1 != 0);
  return in_lr;
}

// =============================================================================
// Function: ScriptEngine_Routine_0804EE64 @ 0x0804EE64
// =============================================================================
void ScriptEngine_Routine_0804EE64(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4,
                  undefined2 param_5,undefined4 param_6)

{
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = gRomData_080E7838;
  param_1[3] = param_2;
  param_1[4] = param_3;
  *(undefined2 *)(param_1 + 5) = param_4;
  *(undefined2 *)((int)param_1 + 0x16) = param_5;
  param_1[6] = param_6;
  return;
}

// =============================================================================
// Function: ScriptEngine_Routine_0804EE88 @ 0x0804EE88
// =============================================================================
undefined4 ScriptEngine_Routine_0804EE88(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 8) = gRomData_080E7838;
  Farm_Routine_080098AC();
  return in_lr;
}

// =============================================================================
// Function: ScriptEngine_Routine_0804EE9C @ 0x0804EE9C
// =============================================================================
longlong ScriptEngine_Routine_0804EE9C(int param_1)

{
  uint in_lr;
  
  ScriptEngine_Routine_0804EE30(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),
                *(undefined2 *)(param_1 + 0x14),*(undefined2 *)(param_1 + 0x16),
                *(undefined4 *)(param_1 + 0x18));
  return (ulonglong)in_lr << 0x20;
}

// =============================================================================
// Function: ScriptEngine_Routine_0804EEBC @ 0x0804EEBC
// =============================================================================
longlong ScriptEngine_Routine_0804EEBC(int param_1)

{
  uint in_lr;
  
  ScriptEngine_Routine_0804EDB4(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),
                *(undefined2 *)(param_1 + 0x14),*(undefined2 *)(param_1 + 0x16),
                *(undefined4 *)(param_1 + 0x18));
  return (ulonglong)in_lr << 0x20;
}

// =============================================================================
// Function: ScriptEngine_Routine_0804EEDC @ 0x0804EEDC
// =============================================================================
longlong ScriptEngine_Routine_0804EEDC(int param_1)

{
  uint in_lr;
  
  ScriptEngine_Routine_0804ED28(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),
                *(undefined2 *)(param_1 + 0x14),*(undefined2 *)(param_1 + 0x16),
                *(undefined4 *)(param_1 + 0x18));
  return (ulonglong)in_lr << 0x20;
}

// =============================================================================
// Function: ScriptEngine_Routine_0804EEFC @ 0x0804EEFC
// =============================================================================
longlong ScriptEngine_Routine_0804EEFC(int param_1)

{
  uint in_lr;
  
  ScriptEngine_Routine_0804E9F4(*(undefined4 *)(param_1 + 0xc),*(undefined2 *)(param_1 + 0x12),
                *(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
                *(undefined2 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x1c));
  return (ulonglong)in_lr << 0x20;
}

// =============================================================================
// Function: ScriptEngine_Routine_0804EF20 @ 0x0804EF20
// =============================================================================
undefined8 ScriptEngine_Routine_0804EF20(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  undefined4 in_lr;
  uint *puVar8;
  
  puVar6 = *(uint **)(param_1 + 0xc);
  puVar5 = *(uint **)(param_1 + 0x10);
  bVar1 = *(byte *)(param_1 + 0x15);
  if ((bVar1 & 0x80) == 0) {
    CpuFastSet(puVar6,puVar5,(*(ushort *)(param_1 + 0x14) & 0x3fff) << 3);
    uVar2 = 0;
  }
  else {
    puVar7 = puVar5 + (*(ushort *)(param_1 + 0x14) & 0x3fff) * 8;
    uVar3 = (bVar1 & 0x7f) >> 6 ^ 1;
    *(byte *)(param_1 + 0x15) = bVar1 & 0xbf | (byte)(uVar3 << 6);
    uVar4 = 0x0F0F0F0F << (uVar3 << 2);
    uVar3 = ~uVar4;
    do {
      *puVar5 = *puVar6 & uVar4;
      puVar5[1] = puVar6[1] & uVar3;
      puVar5[2] = puVar6[2] & uVar4;
      puVar5[3] = puVar6[3] & uVar3;
      puVar5[4] = puVar6[4] & uVar4;
      puVar5[5] = puVar6[5] & uVar3;
      puVar8 = puVar6 + 7;
      puVar5[6] = puVar6[6] & uVar4;
      puVar6 = puVar6 + 8;
      puVar5[7] = *puVar8 & uVar3;
      puVar5 = puVar5 + 8;
    } while (puVar5 != puVar7);
    uVar2 = 1;
  }
  return CONCAT44(in_lr,uVar2);
}

// =============================================================================
// Function: ScriptEngine_Routine_0804EFAC @ 0x0804EFAC
// =============================================================================
undefined8 ScriptEngine_Routine_0804EFAC(int param_1,int param_2)

{
  ushort uVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 in_lr;
  
  uVar1 = *(ushort *)(param_1 + 0x14);
  uVar2 = (uint)*(ushort *)(param_1 + 0x16) + (uint)*(byte *)(param_1 + 0x18);
  if (2 < uVar2) {
    uVar2 = uVar2 - 3;
  }
  piVar4 = (int *)(*(int *)(uVar2 * 4 + param_1 + 8) + (uint)(uVar1 >> 2) * 0x10);
  uVar2 = uVar1 & 3;
  if (uVar2 < 4) {
    uVar2 = ScriptEngine_Routine_0804E4AC(0x20004,*piVar4 + 4,uVar2 << 3,0,param_2);
    if (uVar2 - 1 < 2) {
      *(byte *)(piVar4 + 3) =
           (byte)((byte)((uint)-piVar4[2] >> 0x18) | (byte)((uint)piVar4[2] >> 0x18)) >> 7;
    }
  }
  else {
    uVar2 = 0;
  }
  if ((uVar2 == 0) || (2 < uVar2)) {
    uVar3 = 0;
  }
  else {
    uVar2 = uVar2 + uVar1;
    if (0x1b < uVar2) {
      uVar2 = math_modsi3(uVar2,0x1c);
    }
    *(short *)(param_1 + 0x14) = (short)uVar2;
    if ((param_2 != 0x20) && (param_2 != 0x8140)) {
      *(undefined1 *)(param_1 + 0x1b) = 1;
    }
    uVar3 = 1;
    *(undefined1 *)(param_1 + 0x1a) = 1;
  }
  return CONCAT44(in_lr,uVar3);
}

// =============================================================================
// Function: ScriptEngine_Routine_0804F060 @ 0x0804F060
// =============================================================================
undefined4 ScriptEngine_Routine_0804F060(int param_1)

{
  byte bVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(ushort *)(param_1 + 0x16) < 2) {
    *(ushort *)(param_1 + 0x16) = *(ushort *)(param_1 + 0x16) + 1;
  }
  else {
    bVar1 = *(char *)(param_1 + 0x18) + 1;
    *(byte *)(param_1 + 0x18) = bVar1;
    if (2 < bVar1) {
      *(undefined1 *)(param_1 + 0x18) = 0;
    }
    uVar2 = *(byte *)(param_1 + 0x18) + 2;
    if (2 < uVar2) {
      uVar2 = *(byte *)(param_1 + 0x18) - 1;
    }
    piVar3 = *(int **)(uVar2 * 4 + param_1 + 8);
    iVar4 = 6;
    do {
      ScriptEngine_Routine_0804E7A0(0x20004,*piVar3 + 4,0);
      *(byte *)(piVar3 + 3) =
           (byte)((byte)((uint)-piVar3[2] >> 0x18) | (byte)((uint)piVar3[2] >> 0x18)) >> 7;
      piVar3 = piVar3 + 4;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    *(undefined1 *)(param_1 + 0x19) = 1;
    *(undefined1 *)(param_1 + 0x1a) = 1;
  }
  return in_lr;
}

// =============================================================================
// Function: ScriptEngine_Routine_0804F0E0 @ 0x0804F0E0
// =============================================================================
undefined4 ScriptEngine_Routine_0804F0E0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar2 = 0;
  do {
    iVar4 = 0;
    iVar1 = iVar2 * 4;
    iVar2 = iVar2 + 1;
    do {
      piVar3 = (int *)(*(int *)(iVar1 + param_1 + 8) + iVar4 * 0x10);
      ScriptEngine_Routine_0804E7A0(0x20004,*piVar3 + 4,0);
      *(byte *)(piVar3 + 3) =
           (byte)((byte)((uint)-piVar3[2] >> 0x18) | (byte)((uint)piVar3[2] >> 0x18)) >> 7;
      iVar4 = iVar4 + 1;
    } while (iVar4 < 7);
  } while (iVar2 < 3);
  *(undefined2 *)(param_1 + 0x16) = 0;
  *(undefined2 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x19) = 1;
  *(undefined1 *)(param_1 + 0x1a) = 1;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  return in_lr;
}

// =============================================================================
// Function: ScriptEngine_Routine_0804F160 @ 0x0804F160
// =============================================================================
undefined8 ScriptEngine_Routine_0804F160(int param_1)

{
  undefined4 in_lr;
  
  return CONCAT44(in_lr,(uint)(*(char *)(param_1 + 4) != '\0'));
}

// =============================================================================
// Function: ScriptEngine_Routine_0804F178 @ 0x0804F178
// =============================================================================
undefined8 ScriptEngine_Routine_0804F178(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = 0;
  if ((*(char *)(param_1 + 8) != '\0') && (*(char *)(param_1 + 4) != '\0')) {
    uVar1 = 1;
  }
  return CONCAT44(in_lr,uVar1);
}

// =============================================================================
// Function: ScriptEngine_Routine_0804F19C @ 0x0804F19C
// =============================================================================
longlong ScriptEngine_Routine_0804F19C(int param_1)

{
  uint in_lr;
  uint uStack_60;
  undefined1 auStack_5c [16];
  undefined4 uStack_4c;
  undefined1 auStack_3c [48];
  
  uStack_60 = ((*(ushort *)(param_1 + 0xc) & 0x7fff) >> 5) + 3 & 0x3FF |
              ((*(uint *)(param_1 + 0xc) & 0x7ffff) >> 0xf) << 0xc;
  uStack_60 = uStack_60 | uStack_60 << 0x10;
  CpuFastSet(&uStack_60,(*(byte *)(param_1 + 0xc) & 0x1f) * 0x800 + 0x6000000,0x010000A0);
  Animal_Routine_08051320((*(byte *)(param_1 + 0xc) & 0x1f) * 0x800 + 0x6000000,0x10,0,0xe,3,
                (*(ushort *)(param_1 + 0xc) & 0x7fff) >> 5,
                (*(uint *)(param_1 + 0xc) & 0x7ffff) >> 0xf);
  Animal_Routine_08051320((*(byte *)(param_1 + 0xc) & 0x1f) * 0x800 + 0x6000000,0,3,0x1e,7,
                (*(ushort *)(param_1 + 0xc) & 0x7fff) >> 5,
                (*(uint *)(param_1 + 0xc) & 0x7ffff) >> 0xf);
  CpuFastSet(*gRomData_080F9F78,((*(uint *)(param_1 + 0xc) & 0x7ffff) >> 0xf) * 0x20 + 0x5000000,8)
  ;
  Animal_Routine_0805E6CC(auStack_3c,gRomGfx_08728208);
  Animal_Routine_0805E790(auStack_5c,auStack_3c,0);
  CpuFastSet(uStack_4c,((*(byte *)(param_1 + 0xe) & 0x7f) >> 3) * 0x20 + 0x05000200,8);
  return (ulonglong)in_lr << 0x20;
}

// =============================================================================
// Function: ScriptEngine_Routine_0804F288 @ 0x0804F288
// =============================================================================
undefined8
ScriptEngine_Routine_0804F288(uint *param_1,byte param_2,uint param_3,byte param_4,uint param_5,undefined4 param_6,
             undefined4 param_7)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  byte bVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  uint uVar12;
  int *piVar13;
  int *piVar14;
  int iVar15;
  undefined4 *puVar16;
  byte *pbVar17;
  undefined4 in_lr;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  uint *puStack_30;
  uint *puStack_2c;
  uint *puStack_28;
  int iStack_24;
  
  *(byte *)param_1 = (byte)*param_1 & 0x80 | param_2 & 3 | (byte)((param_3 & 0x1f) << 2);
  *(ushort *)param_1 = (ushort)0xFFFFFE7F & (ushort)*param_1 | (ushort)((param_3 >> 3 & 3) << 7);
  *param_1 = *param_1 & 0xFFF801FF | ((param_3 & 7) * 0x40 + 0x14) * 0x200;
  *(byte *)((int)param_1 + 2) = *(byte *)((int)param_1 + 2) & 0x87 | (param_4 & 0xf) << 3;
  param_1[1] = param_5;
  param_1[2] = 0;
  *(byte *)(param_1 + 3) = 0;
  *(byte *)((int)param_1 + 0xd) = 1;
  HW_Routine_08007770(param_1 + 4,param_7);
  HW_Routine_080083D0(param_1 + 6,param_6,2);
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = gRomData_080E5BB4;
  param_1[0xb] = (uint)(param_1 + 0xc);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = gRomData_080E5BD8;
  param_1[0xc] = (uint)(param_1 + 0xb);
  param_1[0xd] = (uint)(param_1 + 0xc);
  param_1[0xf] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = gRomData_080E7898;
  param_1[0x33] = (uint)(param_1 + 0xf);
  puVar11 = param_1 + 0x34;
  *puVar11 = gRomData_080E78C0;
  param_1[0x35] = (uint)(param_1 + 4);
  puVar10 = param_1 + 0x36;
  iVar5 = 2;
  do {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != -1);
  *(ushort *)(param_1 + 0x39) = 0;
  *(ushort *)((int)param_1 + 0xe6) = 0;
  *(byte *)(param_1 + 0x3a) = 0;
  *(byte *)((int)param_1 + 0xe9) = 0;
  *(byte *)((int)param_1 + 0xea) = 0;
  *(byte *)((int)param_1 + 0xeb) = 0;
  puStack_28 = param_1 + 4;
  puStack_30 = param_1 + 0x34;
  puStack_2c = param_1 + 0x3b;
  iVar5 = 0;
  do {
    puVar6 = (undefined4 *)Dispatcher_Routine_080005D4(0x70);
    iVar15 = 6;
    iStack_34 = iVar5 << 2;
    iStack_24 = iVar5 + 1;
    puVar16 = puVar6;
    do {
      uVar7 = Dispatcher_Routine_080005D4(0x104);
      *puVar16 = uVar7;
      HW_Routine_08007874(puVar16 + 1);
      puVar16[2] = 0;
      *(undefined1 *)(puVar16 + 3) = 0;
      puVar16 = puVar16 + 4;
      iVar15 = iVar15 + -1;
    } while (iVar15 != -1);
    pbVar17 = (byte *)((int)puVar11 + iStack_34 + 8);
    puVar16 = *(undefined4 **)pbVar17;
    if ((puVar6 != puVar16) && (puVar16 != (undefined4 *)0x0)) {
      puVar2 = puVar16 + 0x1c;
      while (puVar16 != puVar2) {
        HW_Routine_08007C28(puVar2 + -3,puVar2[-2]);
        HW_Routine_080079E8(puVar2 + -3,2);
        Dispatcher_Routine_08000608(puVar2[-4]);
        puVar2 = puVar2 + -4;
      }
      Dispatcher_Routine_08000608(puVar16);
    }
    *(undefined4 **)pbVar17 = puVar6;
    iVar15 = 0;
    iVar5 = iStack_34 + 8;
    do {
      piVar14 = (int *)(*(int *)((int)puVar11 + iVar5) + iVar15 * 0x10);
      HW_Routine_080083D0(&iStack_40,param_6,3);
      piVar13 = piVar14 + 1;
      if (&iStack_40 != piVar13) {
        HW_Routine_08007C28(piVar13,piVar14[2]);
        iVar8 = HW_Routine_08007CD8(piVar13,uStack_3c);
        piVar14[2] = iVar8;
      }
      HW_Routine_08007C28(&iStack_40,uStack_3c);
      HW_Routine_080079E8(&iStack_40,2);
      iVar8 = -((-piVar14[2] | piVar14[2]) >> 0x1f);
      uVar3 = (undefined1)iVar8;
      if (iVar8 != 0) {
        uStack_38 = 0x20004;
        ScriptEngine_Routine_0804E7A0(0x20004,*piVar14 + 4,0);
        uVar3 = 1;
      }
      *(undefined1 *)(piVar14 + 3) = uVar3;
      iVar15 = iVar15 + 1;
    } while (iVar15 < 7);
    iVar5 = iStack_24;
  } while (iStack_24 < 3);
  *(byte *)((int)param_1 + 0xea) = 1;
  NPC_Routine_080ADD44(puStack_2c);
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = gRomData_080E7888;
  param_1[0x4b] = (uint)puStack_30;
  uVar9 = *gRomData_080F9F74;
  uVar12 = *gRomData_080F9F70;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = gRomData_080E78E0;
  param_1[0x4f] = uVar12;
  param_1[0x50] =
       (((ushort)*param_1 & 0x1ff) >> 7) * 0x4000 + ((*param_1 & 0x7ffff) >> 9) * 0x20 + 0x6000000;
  *(ushort *)(param_1 + 0x51) =
       (ushort)0xFFFFC000 & (ushort)param_1[0x51] | (ushort)(uVar9 >> 5) & (ushort)0x3FFF;
  *(byte *)((int)param_1 + 0x145) = *(byte *)((int)param_1 + 0x145) & 0x3f | (param_5 == 1) << 7;
  uVar9 = *param_1;
  uVar12 = *param_1;
  bVar1 = *(byte *)((int)param_1 + 2);
  bVar4 = HW_Routine_080074C0(puStack_28,puStack_28[1]);
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = gRomData_080E7878;
  *(byte *)(param_1 + 0x55) = (byte)param_1[0x55] & 0xe0 | (byte)(((byte)uVar9 & 0x7f) >> 2);
  *(ushort *)(param_1 + 0x55) =
       (ushort)0xFFFF801F & (ushort)param_1[0x55] | (ushort)(((uVar12 & 0x7ffff) >> 9) << 5);
  param_1[0x55] = param_1[0x55] & 0xFFF87FFF | ((bVar1 & 0x7f) >> 3) << 0xf;
  *(byte *)((int)param_1 + 0x156) = *(byte *)((int)param_1 + 0x156) & 0x87 | (bVar4 & 0xf) << 3;
  param_1[0x56] = 0;
  Animal_Routine_0805E6CC(param_1 + 0x58,gRomGfx_08728208);
  Animal_Routine_0805E6CC(param_1 + 100,gRomGfx_0872937C);
  Animal_Routine_0805E824(param_1 + 0x70,param_1 + 100,0,0x100);
  HW_Routine_080083D0(param_1 + 0x75,param_6,7);
  *(byte *)(param_1 + 0x77) = (byte)param_1[0x77] & 0xfc;
  NPC_Routine_080ADC00(param_1 + 0x79);
  HW_Routine_08007770(param_1 + 0x7a,param_7);
  *(byte *)(param_1 + 0x7c) = (byte)param_1[0x7c] & 0xfc;
  iVar5 = 2;
  do {
    iVar5 = iVar5 + -1;
  } while (iVar5 != -1);
  *(byte *)(param_1 + 0x140) = 0;
  pbVar17 = (byte *)(0x504 + (int)param_1);
  Animal_Routine_0805E6CC(pbVar17,gRomGfx_08728320);
  Animal_Routine_0805E824((byte *)(0x534 + (int)param_1),pbVar17,0,0x100);
  HW_Routine_08007770(param_1 + 0x152,param_7);
  *(byte *)(param_1 + 0x154) = (byte)param_1[0x154] | 0x3f;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: ScriptEngine_Routine_0804F69C @ 0x0804F69C
// =============================================================================
undefined4 ScriptEngine_Routine_0804F69C(int param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  HW_Routine_080073E0(param_1 + 0x548,*(undefined4 *)(param_1 + 0x54c));
  HW_Routine_08007184(param_1 + 0x548,2);
  uVar1 = gRomData_080E5A28;
  *(undefined4 *)(param_1 + 0x504) = gRomData_080E5A28;
  HW_Routine_080073E0(param_1 + 0x1e8,*(undefined4 *)(param_1 + 0x1ec));
  HW_Routine_08007184(param_1 + 0x1e8,2);
  NPC_Routine_080ADC84(param_1 + 0x1e4,2);
  HW_Routine_08007C28(param_1 + 0x1d4,*(undefined4 *)(param_1 + 0x1d8));
  HW_Routine_080079E8(param_1 + 0x1d4,2);
  *(undefined4 *)(param_1 + 400) = uVar1;
  *(undefined4 *)(param_1 + 0x160) = uVar1;
  Farm_Routine_080098AC(param_1 + 0x148,2);
  Farm_Routine_080098AC(param_1 + 0x130,2);
  Farm_Routine_080098AC(param_1 + 0x120,2);
  VTable_Routine_080E105C(param_1 + 0xd0,2);
  Farm_Routine_080098AC(param_1 + 0xc0,2);
  for (iVar2 = param_1 + 0x40; iVar2 != param_1 + *(int *)(param_1 + 0x3c) * 0x10 + 0x40;
      iVar2 = iVar2 + 0x10) {
  }
  Farm_Routine_080098DC(param_1 + 0x20,2);
  HW_Routine_08007C28(param_1 + 0x18,*(undefined4 *)(param_1 + 0x1c));
  HW_Routine_080079E8(param_1 + 0x18,2);
  HW_Routine_080073E0(param_1 + 0x10,*(undefined4 *)(param_1 + 0x14));
  HW_Routine_08007184(param_1 + 0x10,2);
  if ((param_2 & 1) != 0) {
    Dispatcher_Routine_08000608(param_1);
  }
  return in_lr;
}

