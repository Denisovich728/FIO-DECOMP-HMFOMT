// =============================================================================
// Harvest Moon: Friends of Mineral Town (GBA) - Decompiled Source
// Module: ENTITY_MANAGER (445 functions)
// Description: Interactive world entities, collision bounds, map triggers and villager entities
// =============================================================================

#include "../../include/entities/entity.h"

// =============================================================================
// Function: Entity_InitWorldActors @ 0x08020018
// =============================================================================
u32 Entity_InitWorldActors(int entity)

{
  int div_result;
  
  div_result = math_divsi3(entity * entity * 0x1b0,0xF424);
  return div_result + 0x30;
}

// =============================================================================
// Function: Entity_ResetMotionState @ 0x08020038
// =============================================================================
void Entity_ResetMotionState(int entity)

{
  
  Entity_UpdatePositions();
  *(undefined4 *)(entity + 0x14) = gRomData_080E6554;
  *(undefined1 *)(entity + 0x30) = 0;
  return entity;
}

// =============================================================================
// Function: Entity_SetVelocityFromDirection @ 0x08020080
// =============================================================================
void Entity_SetVelocityFromDirection(int entity,int speed)

{
  byte facing_dir;
  int i_val2;
  int i_val3;
  int i_val4;
  int i_val5;
  
  i_val2 = 0;
  i_val4 = 0;
  i_val3 = i_val2;
  i_val5 = i_val4;
  if (speed != 0) {
    facing_dir = *(byte *)(entity + 0x20);
    if (facing_dir == 1) {
      i_val5 = -speed;
    }
    else if (facing_dir < 2) {
      i_val5 = speed;
      if (facing_dir != 0) {
        i_val5 = i_val4;
      }
    }
    else if (facing_dir == 2) {
      i_val3 = -speed;
    }
    else {
      i_val3 = speed;
      if (facing_dir != 3) {
        i_val3 = i_val2;
      }
    }
  }
  *(int *)(entity + 0x18) = i_val3;
  *(int *)(entity + 0x1c) = i_val5;
  return;
}

// =============================================================================
// Function: Entity_Routine_080200C4 @ 0x080200C4
// =============================================================================
void Entity_Routine_080200C4(undefined4 *entity,undefined2 speed)

{
  char c_char1;
  int *p_int2;
  undefined4 u_val3;
  undefined4 *curr_ptr;
  undefined4 *end_ptr;
  
  if ((*(char *)(entity + 0xc) == '\0') && (c_char1 = Entity_Routine_08020060(entity), c_char1 != '\0')) {
    p_int2 = (int *)_call_via_r1((int *)*entity,*(undefined4 *)(*(int *)*entity + 0x14c));
    end_ptr = (undefined4 *)p_int2[1];
    for (curr_ptr = (undefined4 *)*p_int2; curr_ptr != end_ptr; curr_ptr = curr_ptr + 1) {
      c_char1 = HW_Routine_08008CD0(*curr_ptr);
      if (c_char1 == '\0') {
        u_val3 = *curr_ptr;
        goto LAB_0802011c;
      }
    }
    u_val3 = end_ptr[-1];
LAB_0802011c:
    HW_Routine_08008B6C(u_val3,speed);
    *(char *)(entity + 0xc) = '\x01';
  }
  return;
}

// =============================================================================
// Function: Entity_CanMoveToPosition @ 0x08020130
// =============================================================================
u32 Entity_CanMoveToPosition(int entity)

{
  char c_char1;
  int i_val2;
  uint u_val3;
  undefined4 u_val4;
  
  i_val2 = *(int *)(entity + 0x10);
  if (i_val2 == 0) {
    u_val4 = 1;
  }
  else {
    u_val4 = 0;
    u_val3 = 0;
    if (*(short *)(i_val2 + 0x3e) != 0) {
      u_val3 = (uint)(-(int)*(short *)(i_val2 + 0x40) | (int)*(short *)(i_val2 + 0x40)) >> 0x1f;
    }
    if ((u_val3 == 0) || (c_char1 = Animal_Routine_0805E894(i_val2 + 0x30), c_char1 != '\0')) {
      u_val4 = 1;
    }
  }
  return u_val4;
}

// =============================================================================
// Function: Entity_MoveAndCollide @ 0x08020170
// =============================================================================
void Entity_MoveAndCollide(int entity,int *speed)

{
  int vel_x;
  int vel_y;
  int i_val3;
  int pos_x;
  int i_val5;
  int i_val6;
  int pos_y;
  
  vel_x = *(int *)(entity + 0x18) + *(int *)(entity + 8);
  vel_y = *(int *)(entity + 0x1c) + *(int *)(entity + 0xc);
  if (speed != (int *)0x0) {
    pos_x = *(int *)(entity + 8) >> 0x10;
    pos_y = *(int *)(entity + 0xc) >> 0x10;
    i_val6 = (vel_y >> 0x10) - pos_y;
    i_val5 = (vel_x >> 0x10) - pos_x;
    if (0 < i_val6) {
      i_val3 = *speed;
      if (speed[10] < i_val3) {
        NPC_Routine_080AB85C(speed);
        i_val3 = *speed;
      }
      if (i_val3 < i_val6) {
        vel_y = *speed;
        if (speed[10] < vel_y) {
          NPC_Routine_080AB85C(speed);
          vel_y = *speed;
        }
        vel_y = (pos_y + vel_y) * 0x10000;
      }
    }
    if (i_val6 < 0) {
      i_val3 = speed[1];
      if (i_val3 + speed[10] < 0 != SCARRY4(i_val3,speed[10])) {
        NPC_Routine_080AB8D0(speed);
        i_val3 = speed[1];
      }
      if (i_val6 < i_val3) {
        vel_y = speed[1];
        if (vel_y + speed[10] < 0 != SCARRY4(vel_y,speed[10])) {
          NPC_Routine_080AB8D0(speed);
          vel_y = speed[1];
        }
        vel_y = (pos_y + vel_y) * 0x10000;
      }
    }
    if (i_val5 < 0) {
      i_val6 = speed[2];
      if (i_val6 + speed[10] < 0 != SCARRY4(i_val6,speed[10])) {
        NPC_Routine_080AB948(speed);
        i_val6 = speed[2];
      }
      if (i_val5 < i_val6) {
        vel_x = speed[2];
        if (vel_x + speed[10] < 0 != SCARRY4(vel_x,speed[10])) {
          NPC_Routine_080AB948(speed);
          vel_x = speed[2];
        }
        vel_x = (pos_x + vel_x) * 0x10000;
      }
    }
    if (0 < i_val5) {
      i_val6 = speed[3];
      if (speed[10] < i_val6) {
        NPC_Routine_080AB9C4(speed);
        i_val6 = speed[3];
      }
      if (i_val6 < i_val5) {
        vel_x = speed[3];
        if (speed[10] < vel_x) {
          NPC_Routine_080AB9C4(speed);
          vel_x = speed[3];
        }
        vel_x = (pos_x + vel_x) * 0x10000;
      }
    }
  }
  *(int *)(entity + 8) = vel_x;
  *(int *)(entity + 0xc) = vel_y;
  return;
}

// =============================================================================
// Function: Entity_Routine_080202A0 @ 0x080202A0
// =============================================================================
void Entity_Routine_080202A0(short *entity,int speed)

{
  short s_val1;
  short s_val2;
  
  s_val1 = *(short *)(speed + 10);
  s_val2 = *(short *)(speed + 0xe);
  *entity = s_val1 + -7;
  entity[1] = s_val2 + -9;
  entity[2] = s_val1 + 7;
  entity[3] = s_val2 + 5;
  return;
}

// =============================================================================
// Function: Entity_Routine_08020310 @ 0x08020310
// =============================================================================
u32 Entity_Routine_08020310(int entity,int *speed,int collision,undefined4 flags)

{
  int i_val1;
  undefined4 u_val2;
  undefined1 stack_buf_1c [8];
  
  Actor_CopyLocation2(stack_buf_1c,collision);
  Entity_ResetMotionState(entity,speed,stack_buf_1c,0x340);
  *(undefined4 *)(entity + 0x14) = gRomData_080E64C8;
  *(int *)(entity + 0x34) = collision;
  *(undefined4 *)(entity + 0x38) = flags;
  *(undefined1 *)(entity + 0x40) = 0;
  if ((*(int *)(collision + 0x20) == 5) &&
     (i_val1 = _call_via_r2(speed,0x4b,*(undefined4 *)(*speed + 0x40)), i_val1 != 0)) {
    if (*(short *)(i_val1 + 4) == *(short *)(entity + 4)) {
      Entity_Routine_08038374(i_val1,*(undefined4 *)(entity + 8),*(undefined4 *)(entity + 0xc),
                    *(undefined2 *)(entity + 0x22),*(undefined1 *)(entity + 0x20));
    }
    else {
      Entity_Routine_08020410(entity,0);
    }
  }
  u_val2 = Entity_Routine_08021264(entity);
  Entity_Routine_080211E4(entity,u_val2,*(undefined1 *)(entity + 0x20));
  return entity;
}

// =============================================================================
// Function: Entity_Routine_08020410 @ 0x08020410
// =============================================================================
void Entity_Routine_08020410(int entity,uint speed)

{
  uint stack_val_10;
  
  if (*(int *)(*(int *)(entity + 0x34) + 0x20) == 5) {
    Entity_Routine_080212C0(entity);
  }
  stack_val_10 = (stack_val_10 & 0xFFFF0000 | speed & 0xffff) & 0xFF00FFFF;
  Animal_Routine_0809BB48(*(undefined4 *)(entity + 0x34),&stack_val_10);
  Entity_Routine_080211E4(entity,0,*(undefined1 *)(entity + 0x20));
  return;
}

// =============================================================================
// Function: Entity_Routine_08020460 @ 0x08020460
// =============================================================================
u32 Entity_Routine_08020460(int entity)

{
  
  return (uint)(*(int *)(*(int *)(entity + 0x34) + 0x20) == 5);
}

// =============================================================================
// Function: Entity_Routine_08020474 @ 0x08020474
// =============================================================================
void Entity_Routine_08020474(int entity)

{
  short s_val1;
  int i_val2;
  
  Entity_Routine_080204CC();
  *(undefined1 *)(entity + 0x30) = 0;
  if (*(short *)(entity + 0x24) == 0) {
    s_val1 = *(short *)(entity + 0x26);
  }
  else {
    s_val1 = *(short *)(entity + 0x24) + -1;
  }
  *(short *)(entity + 0x24) = s_val1;
  i_val2 = *(int *)(entity + 0x10);
  if (i_val2 != 0) {
    _call_via_r1(i_val2,*(undefined4 *)(*(int *)(i_val2 + 4) + 0xc));
  }
  return;
}

// =============================================================================
// Function: Entity_Routine_080204A8 @ 0x080204A8
// =============================================================================
void Entity_Routine_080204A8(undefined4 entity,undefined4 speed)

{
  char c_char1;
  
  c_char1 = Entity_Routine_08032370();
  if (c_char1 != '\0') {
    Entity_Routine_080204CC(entity);
  }
  Entity_Routine_0803242C(entity,speed);
  return;
}

// =============================================================================
// Function: Entity_Routine_080204CC @ 0x080204CC
// =============================================================================
void Entity_Routine_080204CC(undefined4 *entity)

{
  short s_val1;
  bool b_flag2;
  undefined4 u_val3;
  char c_char4;
  int div_result;
  int i_val6;
  int i_val7;
  undefined4 u_val8;
  int i_val9;
  int *p_int10;
  uint u_val11;
  short s_val12;
  int i_val13;
  uint u_val14;
  byte b_flag15;
  int i_val16;
  undefined4 stack_val_114;
  undefined4 stack_val_110;
  undefined4 stack_val_10c;
  int stack_val_108;
  int stack_val_104;
  int stack_val_100;
  int stack_val_fc;
  char cStack_f8;
  char cStack_f7;
  char cStack_f6;
  char cStack_f5;
  undefined4 stack_val_f4;
  undefined4 stack_val_f0;
  undefined4 stack_val_ec;
  undefined4 stack_val_e8;
  undefined4 stack_val_e4;
  int stack_val_e0;
  int stack_val_dc;
  int stack_val_d8;
  undefined4 stack_val_d4;
  undefined4 stack_val_d0;
  undefined4 stack_val_cc;
  undefined4 stack_val_c8;
  undefined4 stack_val_c0;
  undefined4 stack_val_bc;
  undefined4 stack_val_b8;
  undefined4 stack_val_b4;
  undefined4 stack_val_b0;
  undefined4 stack_val_ac;
  int stack_val_a8;
  int stack_val_a4;
  undefined4 stack_val_a0;
  undefined4 stack_val_9c;
  undefined4 stack_val_98;
  undefined4 stack_val_94;
  undefined1 stack_buf_90 [8];
  undefined1 stack_buf_88 [8];
  undefined1 stack_buf_80 [8];
  undefined1 stack_buf_78 [8];
  uint stack_val_70;
  uint stack_val_6c;
  uint stack_val_68;
  uint stack_val_64;
  uint stack_val_60;
  uint stack_val_5c;
  uint stack_val_54;
  uint stack_val_50;
  uint stack_val_4c;
  uint stack_val_48;
  int *piStack_44;
  uint stack_val_40;
  int stack_val_3c;
  int stack_val_38;
  int stack_val_34;
  int stack_val_30;
  int stack_val_2c;
  int stack_val_28;
  char *pcStack_24;
  
  piStack_44 = (int *)*entity;
  i_val9 = entity[0xd];
  div_result = Animal_Routine_0809BB34(i_val9);
  stack_val_40 = (uint)*(ushort *)(entity + 1);
  _call_via_r3(&stack_val_114,piStack_44,stack_val_40,*(undefined4 *)(*piStack_44 + 0x34));
  _call_via_r2(&stack_val_a0,entity,*(undefined4 *)(entity[5] + 0xc));
  b_flag2 = false;
  if (((int)stack_val_40 < 9) && (div_result == 1)) {
    b_flag2 = true;
  }
  if (b_flag2) {
    stack_val_3c = ((int)(short)stack_val_9c - (int)(short)stack_val_a0) + 0x10;
    stack_val_38 = ((int)stack_val_9c._2_2_ - (int)stack_val_a0._2_2_) + 0x10;
  }
  else {
    stack_val_3c = 0;
    stack_val_38 = 0;
  }
  stack_val_108 = 0x21;
  stack_val_104 = -0x21;
  stack_val_100 = -0x21;
  stack_val_fc = 0x21;
  stack_val_f4 = stack_val_114;
  stack_val_f0 = stack_val_110;
  stack_val_ec = stack_val_10c;
  stack_val_e8 = stack_val_a0;
  stack_val_e4 = stack_val_9c;
  stack_val_e0 = 0x20;
  stack_val_dc = stack_val_3c;
  stack_val_d8 = stack_val_38;
  i_val6 = _call_via_r2(piStack_44,0,*(undefined4 *)(*piStack_44 + 0x40));
  i_val7 = _call_via_r2(piStack_44,0x4a,*(undefined4 *)(*piStack_44 + 0x40));
  stack_val_34 = 0;
  pcStack_24 = (char *)(entity + 0x10);
  if ((*pcStack_24 != '\0') && (*(short *)(entity + 9) == 0)) {
    *pcStack_24 = '\0';
    entity[2] = (int)*(short *)(entity + 0xf) << 0x10;
    entity[3] = (int)*(short *)((int)entity + 0x3e) << 0x10;
    _call_via_r2(&stack_val_98,entity,*(undefined4 *)(entity[5] + 0xc));
    stack_val_a0 = stack_val_98;
    u_val8 = stack_val_a0;
    stack_val_9c = stack_val_94;
    u_val3 = stack_val_9c;
    stack_val_9c._0_2_ = (short)stack_val_94;
    stack_val_a0._0_2_ = (short)stack_val_98;
    stack_val_a8 = ((int)(short)stack_val_9c - (int)(short)stack_val_a0) + 0x10;
    stack_val_9c._2_2_ = (short)((uint)stack_val_94 >> 0x10);
    stack_val_a0._2_2_ = (short)((uint)stack_val_98 >> 0x10);
    stack_val_a4 = ((int)stack_val_9c._2_2_ - (int)stack_val_a0._2_2_) + 0x10;
    stack_val_d4 = 0x21;
    stack_val_d0 = 0xffffffdf;
    stack_val_cc = 0xffffffdf;
    stack_val_c8 = 0x21;
    stack_val_c0 = stack_val_114;
    stack_val_bc = stack_val_110;
    stack_val_b8 = stack_val_10c;
    stack_val_b4 = stack_val_98;
    stack_val_b0 = stack_val_94;
    stack_val_ac = 0x20;
    stack_val_a0 = u_val8;
    stack_val_9c = u_val3;
    gba_memcpy(&stack_val_108,&stack_val_d4,0x34);
    if ((i_val6 != 0) && (*(ushort *)(i_val6 + 4) == stack_val_40)) {
      _call_via_r2(stack_buf_90,i_val6,*(undefined4 *)(*(int *)(i_val6 + 0x14) + 0xc));
      NPC_Routine_080ABA90(&stack_val_108,stack_buf_90,1);
    }
    if ((i_val7 != 0) && (*(ushort *)(i_val7 + 4) == stack_val_40)) {
      _call_via_r2(stack_buf_88,i_val7,*(undefined4 *)(*(int *)(i_val7 + 0x14) + 0xc));
      NPC_Routine_080ABA90(&stack_val_108,stack_buf_88,0);
    }
    u_val8 = Entity_Routine_08021264(entity);
    Entity_Routine_080211E4(entity,u_val8,*(undefined1 *)(entity + 8));
    if ((*(int *)(i_val9 + 0x20) == 5) &&
       ((stack_val_34 != 0 ||
        (stack_val_34 = _call_via_r2(piStack_44,0x4b,*(undefined4 *)(*piStack_44 + 0x40)),
        stack_val_34 != 0)))) {
      div_result = stack_val_34;
      if (*(ushort *)(stack_val_34 + 4) != stack_val_40) {
        Entity_Routine_080210A0();
      }
      Entity_Routine_08038398(div_result,*(undefined2 *)((int)entity + 0x22),*(undefined1 *)(entity + 8));
    }
    goto Entity_Routine_080210A0;
  }
  if ((i_val6 != 0) && (*(ushort *)(i_val6 + 4) == stack_val_40)) {
    _call_via_r2(stack_buf_80,i_val6,*(undefined4 *)(*(int *)(i_val6 + 0x14) + 0xc));
    NPC_Routine_080ABA90(&stack_val_108,stack_buf_80,1);
  }
  if ((i_val7 != 0) && (*(ushort *)(i_val7 + 4) == stack_val_40)) {
    _call_via_r2(stack_buf_78,i_val7,*(undefined4 *)(*(int *)(i_val7 + 0x14) + 0xc));
    NPC_Routine_080ABA90(&stack_val_108,stack_buf_78,0);
  }
  if ((*pcStack_24 == '\0') && (div_result == 1)) {
    div_result = (int)*(short *)((int)entity + 10);
    i_val7 = (int)*(short *)((int)entity + 0xe);
    i_val13 = entity[6];
    i_val16 = entity[7];
    stack_val_30 = div_result;
    stack_val_2c = i_val7;
    if (0 < i_val16) {
      if (stack_val_e0 < stack_val_108) {
        NPC_Routine_080AB85C(&stack_val_108);
      }
      if (stack_val_108 == 0) {
        if (stack_val_e0 < 0) {
          NPC_Routine_080AB85C(&stack_val_108);
        }
        if (cStack_f8 != '\0') {
          i_val7 = i_val7 + stack_val_38;
        }
      }
    }
    if (i_val16 < 0) {
      if (stack_val_104 + stack_val_e0 < 0 != SCARRY4(stack_val_104,stack_val_e0)) {
        NPC_Routine_080AB8D0(&stack_val_108);
      }
      if (stack_val_104 == 0) {
        if (stack_val_e0 < 0) {
          NPC_Routine_080AB8D0(&stack_val_108);
        }
        if (cStack_f7 != '\0') {
          i_val7 = i_val7 - stack_val_38;
        }
      }
    }
    if (i_val13 < 0) {
      if (stack_val_100 + stack_val_e0 < 0 != SCARRY4(stack_val_100,stack_val_e0)) {
        NPC_Routine_080AB948(&stack_val_108);
      }
      if (stack_val_100 == 0) {
        if (stack_val_e0 < 0) {
          NPC_Routine_080AB948(&stack_val_108);
        }
        if (cStack_f6 != '\0') {
          div_result = div_result - stack_val_3c;
        }
      }
    }
    if (0 < i_val13) {
      if (stack_val_e0 < stack_val_fc) {
        NPC_Routine_080AB9C4(&stack_val_108);
      }
      if (stack_val_fc == 0) {
        if (stack_val_e0 < 0) {
          NPC_Routine_080AB9C4(&stack_val_108);
        }
        if (cStack_f5 != '\0') {
          div_result = div_result + stack_val_3c;
        }
      }
    }
    if ((div_result != stack_val_30) || (i_val7 != stack_val_2c)) {
      *(short *)(entity + 0xf) = (short)div_result;
      *(short *)((int)entity + 0x3e) = (short)i_val7;
      *pcStack_24 = '\x01';
      Entity_Routine_080211E4(entity,0xc,*(undefined1 *)(entity + 8));
      if ((*(int *)(i_val9 + 0x20) == 5) &&
         (((stack_val_34 != 0 ||
           (stack_val_34 = _call_via_r2(piStack_44,0x4b,*(undefined4 *)(*piStack_44 + 0x40)),
           stack_val_34 != 0)) && (*(ushort *)(stack_val_34 + 4) == stack_val_40)))) {
        Entity_Routine_08038398(stack_val_34,*(undefined2 *)((int)entity + 0x22),*(undefined1 *)(entity + 8));
      }
    }
  }
  if (6 < *(uint *)(i_val9 + 0x20)) goto Entity_Routine_080210A0;
  switch(*(uint *)(PTR_case_080208B4_080208b0 + *(uint *)(i_val9 + 0x20) * 4) & 0xfffffffe) {
  case 0x80208b4:
  case 0x80208d0:
    s_val12 = *(short *)(i_val9 + 0x24);
    if (s_val12 != 0) {
      div_result = entity[6];
      i_val7 = entity[7];
      b_flag2 = false;
      if (div_result < 0) {
        if (stack_val_100 + stack_val_e0 < 0 != SCARRY4(stack_val_100,stack_val_e0)) {
          NPC_Routine_080AB948(&stack_val_108);
        }
        if (stack_val_100 < -0xf) goto LAB_08020902;
LAB_08020956:
        b_flag2 = true;
      }
      else {
LAB_08020902:
        if (0 < div_result) {
          if (stack_val_e0 < stack_val_fc) {
            NPC_Routine_080AB9C4(&stack_val_108);
          }
          if (stack_val_fc < 0x10) goto LAB_08020956;
        }
        if (i_val7 < 0) {
          if (stack_val_104 + stack_val_e0 < 0 != SCARRY4(stack_val_104,stack_val_e0)) {
            NPC_Routine_080AB8D0(&stack_val_108);
          }
          if (-0x10 < stack_val_104) goto LAB_08020956;
        }
        if (0 < i_val7) {
          if (stack_val_e0 < stack_val_108) {
            NPC_Routine_080AB85C(&stack_val_108);
          }
          if (stack_val_108 < 0x10) goto LAB_08020956;
        }
      }
      if (b_flag2) {
        s_val12 = 0;
      }
      else {
        s_val12 = s_val12 + -1;
      }
LAB_08020a48:
      *(short *)(i_val9 + 0x24) = s_val12;
      goto Entity_Routine_080210A0;
    }
    s_val12 = 0;
    if ((*pcStack_24 != '\0') || (c_char4 = Entity_CanMoveToPosition(entity), c_char4 == '\0')) goto LAB_08020a48;
    div_result = Animal_Routine_0809BB34(i_val9);
    if ((div_result != 1) ||
       ((div_result = _call_via_r2(piStack_44,0x2d,*(undefined4 *)(*piStack_44 + 0x40)), div_result == 0 ||
        (*(ushort *)(div_result + 4) != stack_val_40)))) {
      div_result = _call_via_r1(piStack_44,*(undefined4 *)(*piStack_44 + 0x144));
      b_flag15 = *(byte *)(div_result + 10);
      div_result = Animal_Routine_0809BB34(i_val9);
      i_val7 = (uint)(0xe < (b_flag15 & 0x1f) - 6) * 0x68 + div_result * 0x34 + gRomData_080F0838;
      div_result = NPC_Routine_080AB82C(i_val7,0xd);
      i_val7 = i_val7 + div_result * 4;
      s_val12 = NPC_Routine_080AB788((uint)*(byte *)(i_val7 + 2) * 0x3c);
      s_val12 = (ushort)*(byte *)(i_val7 + 1) * 0x3c + s_val12;
      u_val14 = (uint)*(byte *)(entity + 8);
      i_val7 = NPC_Routine_080AB788(4);
      if ((i_val7 != 0) && (i_val7 != 3)) {
        u_val14 = NPC_Routine_080AB7A4(u_val14);
      }
      *(char *)(i_val9 + 0x26) = (char)div_result;
      Entity_Routine_080211E4(entity,div_result,u_val14);
      goto LAB_08020a48;
    }
    Entity_Routine_080200C4(entity,0xa9);
    stack_val_70 = stack_val_70 & 0xFFFF0000 & 0xFF00FFFF;
    Animal_Routine_0809BB9C(i_val9);
    goto LAB_08020fd6;
  case 0x8020a54:
    u_val14 = (uint)*(ushort *)(i_val9 + 0x24);
    if (u_val14 != 0) {
      u_val14 = u_val14 - 1;
    }
    u_val11 = (uint)*(ushort *)(i_val9 + 0x26);
    if (u_val11 != 0) {
      u_val11 = u_val11 - 1;
    }
    if (*pcStack_24 != '\0') {
      *(short *)(i_val9 + 0x24) = (short)u_val14;
      *(short *)(i_val9 + 0x26) = (short)u_val11;
      goto Entity_Routine_080210A0;
    }
    if (((u_val14 != 0) && (i_val6 != 0)) && (*(ushort *)(i_val6 + 4) == stack_val_40)) {
      i_val13 = (int)*(short *)((int)entity + 10);
      i_val7 = (int)*(short *)((int)entity + 0xe);
      s_val12 = *(short *)(i_val6 + 10);
      s_val1 = *(short *)(i_val6 + 0xe);
      div_result = s_val12 - i_val13;
      if (div_result < 0) {
        div_result = -div_result;
      }
      if (div_result < 0x10) {
        div_result = s_val1 - i_val7;
        if (div_result < 0) {
          div_result = -div_result;
        }
        if (div_result < 0x10) goto LAB_08020b1a;
      }
      if (u_val11 == 0) {
LAB_08020ae4:
        u_val8 = NPC_Routine_080ABC40(i_val13,i_val7,(int)s_val12,(int)s_val1,&stack_val_108,
                              *(undefined1 *)(entity + 8));
        Entity_Routine_080211E4(entity,2,u_val8);
        div_result = NPC_Routine_080AB788(0x1e);
        u_val11 = div_result + 1;
        *(short *)(i_val9 + 0x28) = s_val12;
        *(short *)(i_val9 + 0x2a) = s_val1;
      }
      else {
        div_result = *(short *)(i_val9 + 0x28) - i_val13;
        if (div_result < 0) {
          div_result = -div_result;
        }
        if (div_result < 0x10) {
          div_result = *(short *)(i_val9 + 0x2a) - i_val7;
          if (div_result < 0) {
            div_result = -div_result;
          }
          if (div_result < 0x10) goto LAB_08020ae4;
        }
      }
      *(short *)(i_val9 + 0x24) = (short)u_val14;
      *(short *)(i_val9 + 0x26) = (short)u_val11;
      goto Entity_Routine_080210A0;
    }
LAB_08020b1a:
    stack_val_6c = (stack_val_6c & 0xFFFF0000 | 0xb4) & 0xFF00FFFF;
    break;
  case 0x8020b38:
    u_val14 = (uint)*(ushort *)(i_val9 + 0x24);
    if (u_val14 != 0) {
      u_val14 = u_val14 - 1;
    }
    u_val11 = *(uint *)(i_val9 + 0x24) & 0x7fffff;
    b_flag15 = (byte)(u_val11 >> 0x10);
    if (u_val11 >> 0x10 != 0) {
      b_flag15 = b_flag15 - 1;
    }
    u_val11 = (uint)*(byte *)(i_val9 + 0x27);
    if (u_val11 != 0) {
      u_val11 = u_val11 - 1;
    }
    if (*pcStack_24 != '\0') {
      *(short *)(i_val9 + 0x24) = (short)u_val14;
LAB_08020bdc:
      *(byte *)(i_val9 + 0x26) = *(byte *)(i_val9 + 0x26) & 0x80 | b_flag15 & 0x7f;
      *(char *)(i_val9 + 0x27) = (char)u_val11;
      goto Entity_Routine_080210A0;
    }
    if (u_val14 != 0) {
      if ((int)(*(uint *)(i_val9 + 0x24) * 0x100) < 0) {
        i_val6 = _call_via_r2(piStack_44,0x2d,*(undefined4 *)(*piStack_44 + 0x40));
      }
      if ((i_val6 != 0) && (*(ushort *)(i_val6 + 4) == stack_val_40)) {
        if (u_val11 == 0) {
          u_val8 = NPC_Routine_080ABE58((int)*(short *)((int)entity + 10),
                                (int)*(short *)((int)entity + 0xe),(int)*(short *)(i_val6 + 10),
                                (int)*(short *)(i_val6 + 0xe),&stack_val_108,
                                *(undefined1 *)(entity + 8));
          Entity_Routine_080211E4(entity,2,u_val8);
          div_result = NPC_Routine_080AB788(0x1e);
          u_val11 = div_result + 1;
        }
        *(short *)(i_val9 + 0x24) = (short)u_val14;
        goto LAB_08020bdc;
      }
    }
    Entity_Routine_080323C8(entity);
    stack_val_68 = (stack_val_68 & 0xFFFF0000 | 0xb4) & 0xFF00FFFF;
    break;
  case 0x8020c14:
    u_val14 = (uint)*(ushort *)(i_val9 + 0x24);
    if (u_val14 != 0) {
      u_val14 = u_val14 - 1;
    }
    u_val11 = (uint)*(ushort *)(i_val9 + 0x26);
    if (u_val11 != 0) {
      u_val11 = u_val11 - 1;
    }
    if (*pcStack_24 != '\0') {
      *(short *)(i_val9 + 0x24) = (short)u_val14;
      *(short *)(i_val9 + 0x26) = (short)u_val11;
      goto Entity_Routine_080210A0;
    }
    if (u_val14 == 0) {
LAB_08020d1a:
      stack_val_60 = (stack_val_60 & 0xFFFF0000 | 0xb4) & 0xFF00FFFF;
      break;
    }
    stack_val_34 = _call_via_r2(piStack_44,0x4b,*(undefined4 *)(*piStack_44 + 0x40));
    if ((stack_val_34 == 0) || (*(ushort *)(stack_val_34 + 4) != stack_val_40)) {
      if (u_val11 == 0) {
        Entity_Routine_080200C4(entity,0xaa);
        goto LAB_08020d1a;
      }
      goto LAB_08020d0c;
    }
    i_val6 = (int)*(short *)((int)entity + 10);
    i_val7 = (int)*(short *)((int)entity + 0xe);
    s_val12 = *(short *)(stack_val_34 + 10);
    s_val1 = *(short *)(stack_val_34 + 0xe);
    div_result = s_val12 - i_val6;
    if (div_result < 0) {
      div_result = -div_result;
    }
    if (7 < div_result) {
LAB_08020c8e:
      if (u_val11 == 0) {
LAB_08020cb2:
        u_val8 = NPC_Routine_080ABC40(i_val6,i_val7,(int)s_val12,(int)s_val1,&stack_val_108,
                              *(undefined1 *)(entity + 8));
        Entity_Routine_080211E4(entity,2,u_val8);
        div_result = NPC_Routine_080AB788(0x1e);
        u_val11 = div_result + 1;
        *(short *)(i_val9 + 0x28) = s_val12;
        *(short *)(i_val9 + 0x2a) = s_val1;
      }
      else {
        div_result = *(short *)(i_val9 + 0x28) - i_val6;
        if (div_result < 0) {
          div_result = -div_result;
        }
        if (div_result < 8) {
          div_result = *(short *)(i_val9 + 0x2a) - i_val7;
          if (div_result < 0) {
            div_result = -div_result;
          }
          if (div_result < 8) goto LAB_08020cb2;
        }
      }
LAB_08020d0c:
      *(short *)(i_val9 + 0x24) = (short)u_val14;
      *(short *)(i_val9 + 0x26) = (short)u_val11;
      goto Entity_Routine_080210A0;
    }
    div_result = s_val1 - i_val7;
    if (div_result < 0) {
      div_result = -div_result;
    }
    if (7 < div_result) goto LAB_08020c8e;
    u_val14 = NPC_Routine_080AB788(0x78);
    stack_val_64 = stack_val_64 & 0xFFFF0000 | u_val14 & 0xffff;
    Animal_Routine_0809BB80(i_val9);
    goto LAB_08020fd6;
  case 0x8020d38:
    stack_val_34 = _call_via_r2(piStack_44,0x4b,*(undefined4 *)(*piStack_44 + 0x40));
    u_val14 = (uint)*(ushort *)(i_val9 + 0x24);
    if (u_val14 != 0) {
      u_val14 = u_val14 - 1;
    }
    if ((stack_val_34 != 0) && (*(ushort *)(stack_val_34 + 4) == stack_val_40)) {
      if (u_val14 == 0) {
        Entity_Routine_080200C4(entity,0xa9);
        div_result = Animal_Routine_0809B228(i_val9);
        div_result = math_divsi3(div_result * 0x3c0,0xfb);
        stack_val_5c = div_result + 0x1e0U & 0xffff;
        Animal_Routine_0809BB8C(entity[0xd]);
        u_val8 = Entity_Routine_08021264(entity);
        Entity_Routine_080211E4(entity,u_val8,*(undefined1 *)(entity + 8));
        Entity_Routine_08038374(stack_val_34,entity[2],entity[3],*(undefined2 *)((int)entity + 0x22),
                      *(undefined1 *)(entity + 8));
      }
      else {
        *(short *)(i_val9 + 0x24) = (short)u_val14;
      }
      goto Entity_Routine_080210A0;
    }
    Entity_Routine_080200C4(entity,0xaa);
    stack_val_54 = (stack_val_54 & 0xFFFF0000 | 0xb4) & 0xFF00FFFF;
    break;
  case 0x8020de4:
    stack_val_34 = _call_via_r2(piStack_44,0x4b,*(undefined4 *)(*piStack_44 + 0x40));
    u_val14 = (uint)*(ushort *)(i_val9 + 0x24);
    if (u_val14 != 0) {
      u_val14 = u_val14 - 1;
    }
    u_val11 = (uint)*(ushort *)(i_val9 + 0x26);
    if (u_val11 != 0) {
      u_val11 = u_val11 - 1;
    }
    if (*pcStack_24 != '\0') {
      *(short *)(i_val9 + 0x24) = (short)u_val14;
      *(short *)(i_val9 + 0x26) = (short)u_val11;
      goto Entity_Routine_080210A0;
    }
    if ((stack_val_34 == 0) || (*(ushort *)(stack_val_34 + 4) != stack_val_40)) {
      if (u_val11 != 0) goto LAB_08020edc;
      Entity_Routine_080200C4(entity,0xaa);
    }
    else if (((u_val14 != 0) && (i_val6 != 0)) && (*(ushort *)(i_val6 + 4) == stack_val_40)) {
      i_val13 = (int)*(short *)((int)entity + 10);
      i_val7 = (int)*(short *)((int)entity + 0xe);
      stack_val_28 = (int)*(short *)(i_val6 + 10);
      s_val12 = *(short *)(i_val6 + 0xe);
      div_result = stack_val_28 - i_val13;
      if (div_result < 0) {
        div_result = -div_result;
      }
      if (div_result < 0x10) {
        div_result = s_val12 - i_val7;
        if (div_result < 0) {
          div_result = -div_result;
        }
        if (div_result < 0x10) {
          Entity_Routine_080200C4(entity,0xa9);
          goto LAB_08020eea;
        }
      }
      if (u_val11 == 0) {
LAB_08020e90:
        u_val8 = NPC_Routine_080ABC40(i_val13,i_val7,stack_val_28,(int)s_val12,&stack_val_108,
                              *(undefined1 *)(entity + 8));
        Entity_Routine_080211E4(entity,2,u_val8);
        Entity_Routine_08038398(stack_val_34,*(undefined2 *)((int)entity + 0x22),*(undefined1 *)(entity + 8));
        div_result = NPC_Routine_080AB788(0x1e);
        u_val11 = div_result + 1;
        *(undefined2 *)(i_val9 + 0x28) = (undefined2)stack_val_28;
        *(short *)(i_val9 + 0x2a) = s_val12;
      }
      else {
        div_result = *(short *)(i_val9 + 0x28) - i_val13;
        if (div_result < 0) {
          div_result = -div_result;
        }
        if (div_result < 0x10) {
          div_result = *(short *)(i_val9 + 0x2a) - i_val7;
          if (div_result < 0) {
            div_result = -div_result;
          }
          if (div_result < 0x10) goto LAB_08020e90;
        }
      }
LAB_08020edc:
      *(short *)(i_val9 + 0x24) = (short)u_val14;
      *(short *)(i_val9 + 0x26) = (short)u_val11;
      goto Entity_Routine_080210A0;
    }
LAB_08020eea:
    Entity_Routine_080212C0(entity);
    stack_val_50 = (stack_val_50 & 0xFFFF0000 | 0xb4) & 0xFF00FFFF;
    break;
  case 0x8020f0c:
    u_val14 = (uint)*(ushort *)(i_val9 + 0x24);
    if (u_val14 != 0) {
      u_val14 = u_val14 - 1;
    }
    if (*pcStack_24 != '\0') {
      *(short *)(i_val9 + 0x24) = (short)u_val14;
      goto Entity_Routine_080210A0;
    }
    div_result = _call_via_r2(piStack_44,0x2d,*(undefined4 *)(*piStack_44 + 0x40));
    if ((div_result == 0) || (*(ushort *)(div_result + 4) != stack_val_40)) {
      stack_val_48 = (stack_val_48 & 0xFFFF0000 | 0xb4) & 0xFF00FFFF;
      Animal_Routine_0809BB48(i_val9);
      u_val8 = Entity_Routine_08021264(entity);
      Entity_Routine_080211E4(entity,u_val8,*(undefined1 *)(entity + 8));
      goto Entity_Routine_080210A0;
    }
    i_val7 = (int)*(short *)((int)entity + 10);
    if (*(char *)(i_val9 + 0x26) == '\0') {
      i_val6 = *(short *)(div_result + 10) - i_val7;
      if (i_val6 < 0) {
        i_val6 = -i_val6;
      }
      if (i_val6 < 0x10) {
        div_result = (int)*(short *)(div_result + 0xe) - (int)*(short *)((int)entity + 0xe);
        if (div_result < 0) {
          div_result = -div_result;
        }
        if (div_result < 0x10) {
          Entity_Routine_080200C4(entity,0xd2);
          Entity_Routine_080211E4(entity,0xb,*(undefined1 *)(entity + 8));
          *(undefined1 *)(i_val9 + 0x26) = 1;
          *(undefined2 *)(i_val9 + 0x24) = 0x24;
          goto Entity_Routine_080210A0;
        }
      }
      if (u_val14 == 0) {
        u_val8 = NPC_Routine_080ABC40(i_val7);
        Entity_Routine_080211E4(entity,2,u_val8);
        div_result = NPC_Routine_080AB788(0x1e);
        u_val14 = div_result + 1;
      }
      *(undefined2 *)(i_val9 + 0x24) = (short)u_val14;
      goto Entity_Routine_080210A0;
    }
    if (u_val14 == 0) {
      i_val7 = *(short *)(div_result + 10) - i_val7;
      if (i_val7 < 0) {
        i_val7 = -i_val7;
      }
      if (i_val7 < 0x10) {
        i_val7 = (int)*(short *)(div_result + 0xe) - (int)*(short *)((int)entity + 0xe);
        if (i_val7 < 0) {
          i_val7 = -i_val7;
        }
        if ((i_val7 < 0x10) &&
           (c_char4 = _call_via_r1(div_result,*(undefined4 *)(*(int *)(div_result + 0x14) + 0x44)),
           c_char4 != '\0')) {
          _call_via_r1(div_result,*(undefined4 *)(*(int *)(div_result + 0x14) + 0x80));
        }
      }
      u_val14 = NPC_Routine_080AB788(0xfb);
      div_result = Animal_Routine_0809B374(i_val9);
      if (u_val14 < 0xfbU - div_result) {
        u_val14 = NPC_Routine_080AB788(0xb4);
        stack_val_4c = (stack_val_4c & 0xFFFF0000 | u_val14 & 0xffff) & 0xFF00FFFF;
        break;
      }
      *(undefined1 *)(i_val9 + 0x26) = 0;
      div_result = NPC_Routine_080AB788(0x1e);
      u_val14 = div_result + 1;
    }
    *(undefined2 *)(i_val9 + 0x24) = (short)u_val14;
    goto Entity_Routine_080210A0;
  }
  Animal_Routine_0809BB48(i_val9);
LAB_08020fd6:
  u_val8 = Entity_Routine_08021264(entity);
  Entity_Routine_080211E4(entity,u_val8,*(undefined1 *)(entity + 8));
Entity_Routine_080210A0:
  if (((entity[6] != 0) || (entity[7] != 0)) &&
     ((stack_val_40 == 2 ||
      (u_val14 = _call_via_r1(piStack_44,*(undefined4 *)(*piStack_44 + 0x14)), stack_val_40 == u_val14
      )))) {
    p_int10 = &stack_val_108;
    if (*pcStack_24 != '\0') {
      p_int10 = (int *)0x0;
    }
    Entity_MoveAndCollide(entity,p_int10);
  }
  if (((*(int *)(i_val9 + 0x20) == 5) && (stack_val_34 != 0)) &&
     (*(ushort *)(stack_val_34 + 4) == stack_val_40)) {
    *(undefined4 *)(stack_val_34 + 8) = entity[2];
    *(undefined4 *)(stack_val_34 + 0xc) = entity[3];
  }
  return;
}

// =============================================================================
// Function: Entity_Routine_0802110C @ 0x0802110C
// =============================================================================
u32 Entity_Routine_0802110C(int entity,int speed)

{
  int i_val1;
  int i_val2;
  
  i_val1 = gRomData_080F0908;
  speed = speed * 2;
  i_val2 = Animal_Routine_0809BB34(*(undefined4 *)(entity + 0x34));
  if (i_val2 == 1) {
    speed = speed + 0x1a;
  }
  return (uint)*(ushort *)(speed + i_val1);
}

// =============================================================================
// Function: Entity_Routine_08021130 @ 0x08021130
// =============================================================================
u32 Entity_Routine_08021130(int entity,uint speed)

{
  undefined4 u_val1;
  undefined4 u_val2;
  int i_val3;
  undefined4 stack_val_18;
  undefined4 stack_val_14;
  undefined4 stack_val_10;
  undefined4 stack_val_c;
  
  if (0xc < speed) goto case_0802117C;
  switch(*(uint *)(PTR_case_08021148_08021144 + speed * 4) & 0xfffffffe) {
  case 0x8021148:
  case 0x802117c:
case_0802117C:
    u_val2 = 0;
    break;
  case 0x8021180:
    u_val2 = 0x8000;
    break;
  case 0x8021186:
    u_val2 = 0x10000;
    break;
  case 0x802118c:
    _call_via_r2(&stack_val_18,entity,*(undefined4 *)(*(int *)(entity + 0x14) + 0xc));
    stack_val_10 = stack_val_18;
    u_val2 = stack_val_10;
    stack_val_c = stack_val_14;
    u_val1 = stack_val_c;
    i_val3 = 0x10;
    if (*(byte *)(entity + 0x20) < 2) {
      stack_val_c._2_2_ = (short)((uint)stack_val_14 >> 0x10);
      stack_val_10._2_2_ = (short)((uint)stack_val_18 >> 0x10);
      stack_val_c._0_2_ = stack_val_c._2_2_;
      stack_val_10._0_2_ = stack_val_10._2_2_;
LAB_080211cc:
      i_val3 = ((int)(short)stack_val_c - (int)(short)stack_val_10) + 0x10;
    }
    else if (*(byte *)(entity + 0x20) < 4) {
      stack_val_c._0_2_ = (short)stack_val_14;
      stack_val_10._0_2_ = (short)stack_val_18;
      goto LAB_080211cc;
    }
    stack_val_10 = u_val2;
    stack_val_c = u_val1;
    u_val2 = math_udivsi3(i_val3 << 0x10,0x1e);
  }
  return u_val2;
}

// =============================================================================
// Function: Entity_Routine_080211E4 @ 0x080211E4
// =============================================================================
void Entity_Routine_080211E4(int entity,uint speed,uint collision)

{
  uint u_val1;
  undefined4 u_val2;
  int i_val3;
  
  if ((speed != 0xc) && (*(char *)(entity + 0x40) != '\0')) {
    speed = 0xc;
  }
  u_val1 = Entity_Routine_0802110C(entity,speed);
  if (*(ushort *)(entity + 0x22) != u_val1) {
    Entity_Routine_080321B0(entity);
  }
  if (*(byte *)(entity + 0x20) != collision) {
    Entity_Routine_08032198(entity,collision);
  }
  u_val2 = Entity_Routine_08021130(entity,speed);
  Entity_SetVelocityFromDirection(entity,u_val2);
  if (speed != *(byte *)(entity + 0x41)) {
    i_val3 = -1;
    if (speed == 8) {
      i_val3 = 8;
    }
    if (i_val3 < 0) {
      Entity_Routine_080323C8(entity);
    }
    else {
      Entity_Routine_08032384(entity,i_val3,1);
    }
  }
  *(byte *)(entity + 0x41) = (byte)speed;
  return;
}

// =============================================================================
// Function: Entity_Routine_08021264 @ 0x08021264
// =============================================================================
u32 Entity_Routine_08021264(int entity)

{
  uint u_val1;
  
  u_val1 = *(uint *)(*(int *)(entity + 0x34) + 0x20);
  if (6 < u_val1) goto case_0802129C;
  switch(*(uint *)(PTR_case_08021280_0802127c + u_val1 * 4) & 0xfffffffe) {
  case 0x8021280:
  case 0x802129c:
case_0802129C:
    u_val1 = 3;
    break;
  case 0x80212a0:
    u_val1 = (uint)*(byte *)(*(int *)(entity + 0x34) + 0x26);
    break;
  case 0x80212a8:
    u_val1 = 2;
    break;
  case 0x80212ac:
    u_val1 = 2;
    if (*(char *)(*(int *)(entity + 0x34) + 0x26) != '\0') {
      u_val1 = 0xb;
    }
  }
  return u_val1;
}

// =============================================================================
// Function: Entity_Routine_080212C0 @ 0x080212C0
// =============================================================================
void Entity_Routine_080212C0(undefined4 *entity)

{
  byte mood_byte;
  char c_char2;
  int i_val3;
  int i_val4;
  uint u_val5;
  int i_val6;
  int i_val7;
  int *p_int8;
  uint u_val9;
  int i_val10;
  undefined1 stack_buf_34 [12];
  undefined1 temp_buf_28 [8];
  
  i_val3 = _call_via_r2((int *)*entity,0x4b,*(undefined4 *)(*(int *)*entity + 0x40));
  if ((i_val3 != 0) && (*(char *)(i_val3 + 0x26) != '\0')) {
    i_val4 = entity[2];
    i_val7 = entity[3];
    i_val10 = 8;
    u_val9 = (uint)*(ushort *)(entity + 1);
    p_int8 = (int *)*entity;
    u_val5 = _call_via_r1(p_int8,*(undefined4 *)(*p_int8 + 0x14));
    if ((u_val9 != u_val5) && (u_val9 != 2)) {
      i_val10 = 0;
    }
    _call_via_r3(stack_buf_34,p_int8,u_val9,*(undefined4 *)(*p_int8 + 0x34));
    do {
      i_val6 = i_val10 * 0x10000;
      mood_byte = *(byte *)(entity + 8);
      if (mood_byte == 1) {
        *(int *)(i_val3 + 8) = i_val4;
        i_val6 = i_val7 + i_val10 * -0x10000;
LAB_08021380:
        *(int *)(i_val3 + 0xc) = i_val6;
      }
      else {
        if (1 < mood_byte) {
          if (mood_byte == 2) {
            i_val6 = i_val10 * -0x10000;
          }
          else if (mood_byte != 3) goto LAB_08021382;
          *(int *)(i_val3 + 8) = i_val4 + i_val6;
          i_val6 = i_val7;
          goto LAB_08021380;
        }
        if (mood_byte == 0) {
          *(int *)(i_val3 + 8) = i_val4;
          i_val6 = i_val7 + i_val6;
          goto LAB_08021380;
        }
      }
LAB_08021382:
      i_val10 = i_val10 + -1;
      if (i_val10 < 0) break;
      _call_via_r2(temp_buf_28,i_val3,*(undefined4 *)(*(int *)(i_val3 + 0x14) + 0xc));
      c_char2 = NPC_Routine_080AC070(stack_buf_34,temp_buf_28);
    } while (c_char2 != '\0');
    Entity_Routine_080384FC(i_val3);
  }
  return;
}

// =============================================================================
// Function: Entity_Routine_080213B0 @ 0x080213B0
// =============================================================================
void Entity_Routine_080213B0(int entity)

{
  int i_val1;
  undefined4 u_val2;
  uint stack_val_c;
  
  if (*(char *)(entity + 0x40) == '\0') {
    if (*(int *)(*(int *)(entity + 0x34) + 0x20) == 5) {
      Entity_Routine_080212C0(entity);
    }
    i_val1 = NPC_Routine_080AB788(0x78);
    stack_val_c = ((stack_val_c & 0xFFFF0000 | i_val1 + 0xf0U & 0xffff) & 0xFF80FFFF | 0x3c0000) &
               0xFF7FFFFF & 0x00FFFFFF;
    Animal_Routine_0809BB64(*(undefined4 *)(entity + 0x34),&stack_val_c);
    u_val2 = Entity_Routine_08021264(entity);
    Entity_Routine_080211E4(entity,u_val2,*(undefined1 *)(entity + 0x20));
    NPC_ReduceFriendship(*(undefined4 *)(entity + 0x34),10);
    Entity_Routine_08032384(entity,2,0);
    Entity_Routine_080200C4(entity,0xaa);
  }
  return;
}

// =============================================================================
// Function: Entity_Routine_08021444 @ 0x08021444
// =============================================================================
void Entity_Routine_08021444(int entity,ushort *speed)

{
  int div_result;
  int i_val2;
  undefined4 u_val3;
  int i_val4;
  int i_val5;
  uint temp_buf_20 [2];
  
  if (((*speed & 0x3ff) == *(ushort *)(entity + 4)) &&
     (*(int *)(*(int *)(entity + 0x34) + 0x20) != 5)) {
    div_result = Animal_Routine_0809B228(*(int *)(entity + 0x34));
    i_val2 = Entity_InitWorldActors();
    i_val5 = (int)(short)((ushort)((speed[1] & 0x3FF) << 6) |
                        (ushort)(*(byte *)((int)speed + 1) >> 2)) - (int)*(short *)(entity + 10);
    i_val4 = (int)(short)((ushort)((speed[2] & 0x3FF) << 6) |
                        (ushort)(*(byte *)((int)speed + 3) >> 2)) - (int)*(short *)(entity + 0xe)
    ;
    if (i_val5 * i_val5 + i_val4 * i_val4 <= i_val2 * i_val2) {
      if (*(int *)(*(int *)(entity + 0x34) + 0x20) == 5) {
        Entity_Routine_080212C0(entity);
      }
      div_result = math_divsi3(div_result * 0x3c0,0xfb);
      temp_buf_20[0] = div_result + 0x1e0U & 0xffff;
      Animal_Routine_0809BB54(*(undefined4 *)(entity + 0x34),temp_buf_20);
      if (*(char *)(entity + 0x40) == '\0') {
        u_val3 = Entity_Routine_08021264(entity);
        Entity_Routine_080211E4(entity,u_val3,*(undefined1 *)(entity + 0x20));
      }
      Animal_Routine_0809B3BC(*(undefined4 *)(entity + 0x34));
    }
  }
  return;
}

// =============================================================================
// Function: Entity_Routine_0802151C @ 0x0802151C
// =============================================================================
void Entity_Routine_0802151C(int entity,ushort *speed)

{
  int div_result;
  int i_val2;
  undefined4 u_val3;
  int i_val4;
  int i_val5;
  uint temp_buf_20 [2];
  
  div_result = Animal_Routine_0809BB34(*(undefined4 *)(entity + 0x34));
  if ((div_result == 1) && ((*speed & 0x3ff) == *(ushort *)(entity + 4))) {
    div_result = Animal_Routine_0809B374(*(undefined4 *)(entity + 0x34));
    i_val2 = Entity_InitWorldActors();
    i_val5 = (int)(short)((ushort)((speed[1] & 0x3FF) << 6) |
                        (ushort)(*(byte *)((int)speed + 1) >> 2)) - (int)*(short *)(entity + 10);
    i_val4 = (int)(short)((ushort)((speed[2] & 0x3FF) << 6) |
                        (ushort)(*(byte *)((int)speed + 3) >> 2)) - (int)*(short *)(entity + 0xe)
    ;
    if (i_val5 * i_val5 + i_val4 * i_val4 <= i_val2 * i_val2) {
      Entity_Routine_080200C4(entity,0xa9);
      if (*(int *)(*(int *)(entity + 0x34) + 0x20) == 5) {
        Entity_Routine_080212C0(entity);
      }
      div_result = math_divsi3(div_result * 0x3c0,0xfb);
      temp_buf_20[0] = div_result + 0x1e0U & 0xffff;
      Animal_Routine_0809BB70(*(undefined4 *)(entity + 0x34),temp_buf_20);
      if (*(char *)(entity + 0x40) == '\0') {
        u_val3 = Entity_Routine_08021264(entity);
        Entity_Routine_080211E4(entity,u_val3,*(undefined1 *)(entity + 0x20));
      }
      Animal_Routine_0809B3B0(*(undefined4 *)(entity + 0x34));
    }
  }
  return;
}

// =============================================================================
// Function: Entity_Routine_080215FC @ 0x080215FC
// =============================================================================
void Entity_Routine_080215FC(short *entity,int speed)

{
  short s_val1;
  short s_val2;
  
  s_val1 = *(short *)(speed + 10);
  s_val2 = *(short *)(speed + 0xe);
  *entity = s_val1 + -7;
  entity[1] = s_val2 + -4;
  entity[2] = s_val1 + 7;
  entity[3] = s_val2 + 5;
  return;
}

// =============================================================================
// Function: Entity_Routine_08021620 @ 0x08021620
// =============================================================================
u32 Entity_Routine_08021620(int entity)

{
  undefined4 u_val1;
  
  if ((entity == 0) || (entity != 1)) {
    u_val1 = 6;
  }
  else {
    u_val1 = 8;
  }
  return u_val1;
}

// =============================================================================
// Function: Entity_Routine_08021634 @ 0x08021634
// =============================================================================
u32 Entity_Routine_08021634(int entity)

{
  undefined4 u_val1;
  undefined4 u_val2;
  undefined4 u_val3;
  int i_val4;
  
  u_val1 = Animal_Routine_0809BB34(*(undefined4 *)(entity + 0x34));
  u_val2 = CppRuntime_OperatorNewArray(0x8c);
  u_val3 = Entity_Routine_0802161C(u_val1);
  u_val1 = Entity_Routine_08021620(u_val1);
  i_val4 = Entity_Routine_080324BC(u_val2,entity,2,6,u_val3,u_val1,0,0);
  if (*(char *)(entity + 0x41) == '\b') {
    Animal_Routine_0805E860(i_val4 + 0x70,8);
    *(undefined1 *)(i_val4 + 0x84) = 1;
    *(undefined1 *)(i_val4 + 0x86) = 0;
    *(undefined1 *)(i_val4 + 0x87) = 1;
    *(byte *)(i_val4 + 0x8a) = *(byte *)(i_val4 + 0x8a) & 0xfc | 2;
  }
  return i_val4;
}

// =============================================================================
// Function: Entity_Routine_080216BC @ 0x080216BC
// =============================================================================
u32 Entity_Routine_080216BC(int entity,int *speed,undefined4 collision)

{
  byte b_flag1;
  int i_val2;
  uint u_val3;
  undefined4 u_val4;
  undefined1 temp_buf_18 [8];
  
  Actor_CopyLocation2(temp_buf_18,collision);
  Entity_ResetMotionState(entity,speed,temp_buf_18,0x782);
  *(undefined4 *)(entity + 0x14) = gRomData_080E6428;
  *(undefined4 *)(entity + 0x34) = collision;
  *(undefined1 *)(entity + 0x3d) = 0;
  i_val2 = _call_via_r2(speed,0,*(undefined4 *)(*speed + 0x40));
  b_flag1 = 0;
  if (i_val2 != 0) {
    u_val3 = _call_via_r1(i_val2,*(undefined4 *)(*(int *)(i_val2 + 0x14) + 0x40));
    b_flag1 = (byte)(-(u_val3 & 0xff) >> 0x1f);
  }
  *(byte *)(entity + 0x3e) = b_flag1;
  u_val4 = Entity_Routine_080220D4(entity);
  Entity_Routine_08022048(entity,u_val4,*(undefined1 *)(entity + 0x20));
  return entity;
}

// =============================================================================
// Function: Entity_Routine_080217A8 @ 0x080217A8
// =============================================================================
void Entity_Routine_080217A8(int entity,uint speed)

{
  undefined4 u_val1;
  uint stack_val_c;
  
  stack_val_c = (stack_val_c & 0xFFFF0000 | speed & 0xffff) & 0xFF00FFFF;
  Animal_Routine_0809BC24(*(undefined4 *)(entity + 0x34),&stack_val_c);
  u_val1 = Entity_Routine_080220D4(entity);
  Entity_Routine_08022048(entity,u_val1,*(undefined1 *)(entity + 0x20));
  return;
}

// =============================================================================
// Function: Entity_Routine_080217EC @ 0x080217EC
// =============================================================================
void Entity_Routine_080217EC(undefined4 *entity)

{
  byte b_flag1;
  short s_val2;
  bool b_flag3;
  undefined4 u_val4;
  char c_char5;
  short s_val6;
  int *p_int7;
  int i_val8;
  int i_val9;
  undefined4 u_val10;
  uint u_val11;
  int i_val12;
  int i_val13;
  undefined2 *p_uint14;
  short *psVar15;
  uint u_val16;
  int i_val17;
  undefined4 stack_val_f0;
  undefined4 stack_val_ec;
  undefined4 stack_val_e8;
  int stack_val_e4;
  int stack_val_e0;
  int stack_val_dc;
  int stack_val_d8;
  char cStack_d4;
  char cStack_d3;
  char cStack_d2;
  char cStack_d1;
  undefined4 stack_val_d0;
  undefined4 stack_val_cc;
  undefined4 stack_val_c8;
  undefined4 stack_val_c4;
  undefined4 stack_val_c0;
  int stack_val_bc;
  int stack_val_b8;
  int stack_val_b4;
  undefined4 stack_val_b0;
  undefined4 stack_val_ac;
  undefined4 stack_val_a8;
  undefined4 stack_val_a4;
  undefined4 stack_val_9c;
  undefined4 stack_val_98;
  undefined4 stack_val_94;
  undefined4 stack_val_90;
  undefined4 stack_val_8c;
  undefined4 stack_val_88;
  int stack_val_84;
  int stack_val_80;
  undefined4 stack_val_7c;
  undefined4 stack_val_78;
  undefined4 stack_val_74;
  undefined4 stack_val_70;
  undefined1 stack_buf_6c [8];
  undefined1 stack_buf_64 [8];
  undefined1 temp_buf_5c [8];
  undefined1 stack_buf_54 [8];
  uint stack_val_4c;
  undefined2 stack_val_48;
  undefined2 stack_val_46;
  undefined2 stack_val_44;
  undefined2 stack_val_42;
  uint stack_val_40;
  int stack_val_3c;
  uint stack_val_38;
  int stack_val_34;
  int stack_val_30;
  int stack_val_2c;
  int stack_val_28;
  char *pcStack_24;
  
  p_int7 = (int *)*entity;
  if (*(char *)((int)entity + 0x3e) != '\0') goto LAB_08021e6a;
  stack_val_3c = entity[0xd];
  i_val13 = Animal_Routine_0809BC10(stack_val_3c);
  stack_val_38 = (uint)*(ushort *)(entity + 1);
  _call_via_r3(&stack_val_f0,p_int7,stack_val_38,*(undefined4 *)(*p_int7 + 0x34));
  _call_via_r2(&stack_val_7c,entity,*(undefined4 *)(entity[5] + 0xc));
  b_flag3 = false;
  if (((int)stack_val_38 < 9) && (i_val13 == 1)) {
    b_flag3 = true;
  }
  if (b_flag3) {
    stack_val_34 = ((int)(short)stack_val_78 - (int)(short)stack_val_7c) + 0x10;
    stack_val_30 = ((int)stack_val_78._2_2_ - (int)stack_val_7c._2_2_) + 0x10;
  }
  else {
    stack_val_34 = 0;
    stack_val_30 = 0;
  }
  stack_val_e4 = 0x21;
  stack_val_e0 = -0x21;
  stack_val_dc = -0x21;
  stack_val_d8 = 0x21;
  stack_val_d0 = stack_val_f0;
  stack_val_cc = stack_val_ec;
  stack_val_c8 = stack_val_e8;
  stack_val_c4 = stack_val_7c;
  stack_val_c0 = stack_val_78;
  stack_val_bc = 0x20;
  stack_val_b8 = stack_val_34;
  stack_val_b4 = stack_val_30;
  i_val8 = _call_via_r2(p_int7,0,*(undefined4 *)(*p_int7 + 0x40));
  i_val9 = _call_via_r2(p_int7,0x4a,*(undefined4 *)(*p_int7 + 0x40));
  pcStack_24 = (char *)((int)entity + 0x3d);
  if ((*pcStack_24 == '\0') || (*(short *)(entity + 9) != 0)) {
    if ((i_val8 != 0) && (*(ushort *)(i_val8 + 4) == stack_val_38)) {
      _call_via_r2(temp_buf_5c,i_val8,*(undefined4 *)(*(int *)(i_val8 + 0x14) + 0xc));
      NPC_Routine_080ABA90(&stack_val_e4,temp_buf_5c,1);
    }
    if ((i_val9 != 0) && (*(ushort *)(i_val9 + 4) == stack_val_38)) {
      _call_via_r2(stack_buf_54,i_val9,*(undefined4 *)(*(int *)(i_val9 + 0x14) + 0xc));
      NPC_Routine_080ABA90(&stack_val_e4,stack_buf_54,0);
    }
    if ((*pcStack_24 == '\0') && (i_val13 == 1)) {
      i_val13 = (int)*(short *)((int)entity + 10);
      i_val9 = (int)*(short *)((int)entity + 0xe);
      i_val12 = entity[6];
      i_val17 = entity[7];
      stack_val_2c = i_val13;
      stack_val_28 = i_val9;
      if (0 < i_val17) {
        if (stack_val_bc < stack_val_e4) {
          NPC_Routine_080AB85C(&stack_val_e4);
        }
        if (stack_val_e4 == 0) {
          if (stack_val_bc < 0) {
            NPC_Routine_080AB85C(&stack_val_e4);
          }
          if (cStack_d4 != '\0') {
            i_val9 = i_val9 + stack_val_30;
          }
        }
      }
      if (i_val17 < 0) {
        if (stack_val_e0 + stack_val_bc < 0 != SCARRY4(stack_val_e0,stack_val_bc)) {
          NPC_Routine_080AB8D0(&stack_val_e4);
        }
        if (stack_val_e0 == 0) {
          if (stack_val_bc < 0) {
            NPC_Routine_080AB8D0(&stack_val_e4);
          }
          if (cStack_d3 != '\0') {
            i_val9 = i_val9 - stack_val_30;
          }
        }
      }
      if (i_val12 < 0) {
        if (stack_val_dc + stack_val_bc < 0 != SCARRY4(stack_val_dc,stack_val_bc)) {
          NPC_Routine_080AB948(&stack_val_e4);
        }
        if (stack_val_dc == 0) {
          if (stack_val_bc < 0) {
            NPC_Routine_080AB948(&stack_val_e4);
          }
          if (cStack_d2 != '\0') {
            i_val13 = i_val13 - stack_val_34;
          }
        }
      }
      if (0 < i_val12) {
        if (stack_val_bc < stack_val_d8) {
          NPC_Routine_080AB9C4(&stack_val_e4);
        }
        if (stack_val_d8 == 0) {
          if (stack_val_bc < 0) {
            NPC_Routine_080AB9C4(&stack_val_e4);
          }
          if (cStack_d1 != '\0') {
            i_val13 = i_val13 + stack_val_34;
          }
        }
      }
      if ((i_val13 != stack_val_2c) || (i_val9 != stack_val_28)) {
        *(short *)(entity + 0xe) = (short)i_val13;
        *(short *)((int)entity + 0x3a) = (short)i_val9;
        *pcStack_24 = '\x01';
        Entity_Routine_08022048(entity,6,*(undefined1 *)(entity + 8));
      }
    }
    i_val13 = stack_val_3c;
    i_val9 = *(int *)(stack_val_3c + 0x20);
    if (i_val9 == 1) {
      p_uint14 = (undefined2 *)(stack_val_3c + 0x24);
      u_val16 = (uint)*(ushort *)(stack_val_3c + 0x24);
      if (u_val16 != 0) {
        u_val16 = u_val16 - 1;
      }
      u_val11 = (uint)*(ushort *)(stack_val_3c + 0x26);
      if (u_val11 != 0) {
        u_val11 = u_val11 - 1;
      }
      if (((u_val16 == 0) || (i_val8 == 0)) || (*(ushort *)(i_val8 + 4) != stack_val_38)) {
LAB_08021d46:
        stack_val_4c = (stack_val_4c & 0xFFFF0000 | 0xb4) & 0xFF00FFFF;
        Animal_Routine_0809BC24(stack_val_3c);
        goto LAB_08021d5e;
      }
      i_val12 = (int)*(short *)((int)entity + 10);
      i_val9 = (int)*(short *)((int)entity + 0xe);
      s_val6 = *(short *)(i_val8 + 10);
      s_val2 = *(short *)(i_val8 + 0xe);
      i_val8 = s_val6 - i_val12;
      if (i_val8 < 0) {
        i_val8 = -i_val8;
      }
      if (i_val8 < 0x10) {
        i_val8 = s_val2 - i_val9;
        if (i_val8 < 0) {
          i_val8 = -i_val8;
        }
        if (i_val8 < 0x10) goto LAB_08021d46;
      }
      if (*pcStack_24 == '\0') {
        if (u_val11 == 0) {
LAB_08021d10:
          u_val10 = NPC_Routine_080ABC40(i_val12,i_val9,(int)s_val6,(int)s_val2,&stack_val_e4,
                                 *(undefined1 *)(entity + 8));
          Entity_Routine_08022048(entity,2,u_val10);
          i_val8 = NPC_Routine_080AB788(0x1e);
          u_val11 = i_val8 + 1;
          *(short *)(i_val13 + 0x28) = s_val6;
          *(short *)(i_val13 + 0x2a) = s_val2;
        }
        else {
          i_val8 = *(short *)(stack_val_3c + 0x28) - i_val12;
          if (i_val8 < 0) {
            i_val8 = -i_val8;
          }
          if (i_val8 < 0x10) {
            i_val8 = *(short *)(stack_val_3c + 0x2a) - i_val9;
            if (i_val8 < 0) {
              i_val8 = -i_val8;
            }
            if (i_val8 < 0x10) goto LAB_08021d10;
          }
        }
      }
      *p_uint14 = (short)u_val16;
      *(short *)(i_val13 + 0x26) = (short)u_val11;
    }
    else if (i_val9 < 2) {
      if (i_val9 == 0) {
        psVar15 = (short *)(stack_val_3c + 0x24);
        s_val6 = *(short *)(stack_val_3c + 0x24);
        if (s_val6 == 0) {
          s_val6 = 0;
          if ((*pcStack_24 == '\0') && (c_char5 = Entity_CanMoveToPosition(entity), c_char5 != '\0')) {
            i_val8 = _call_via_r1(p_int7,*(undefined4 *)(*p_int7 + 0x144));
            b_flag1 = *(byte *)(i_val8 + 10);
            i_val8 = Animal_Routine_0809BC10(stack_val_3c);
            i_val9 = (uint)(0xe < (b_flag1 & 0x1f) - 6) * 0x38 + i_val8 * 0x1c + gRomData_080F093C;
            i_val8 = NPC_Routine_080AB82C(i_val9,7);
            i_val9 = i_val9 + i_val8 * 4;
            s_val6 = NPC_Routine_080AB788((uint)*(byte *)(i_val9 + 2) * 0x3c);
            s_val6 = (ushort)*(byte *)(i_val9 + 1) * 0x3c + s_val6;
            u_val16 = (uint)*(byte *)(entity + 8);
            i_val9 = NPC_Routine_080AB788(4);
            if ((i_val9 != 0) && (i_val9 != 3)) {
              u_val16 = NPC_Routine_080AB7A4(u_val16);
            }
            *(char *)(i_val13 + 0x26) = (char)i_val8;
            Entity_Routine_08022048(entity,i_val8,u_val16);
          }
        }
        else {
          i_val13 = entity[6];
          i_val8 = entity[7];
          b_flag3 = false;
          if (i_val13 < 0) {
            if (stack_val_dc + stack_val_bc < 0 != SCARRY4(stack_val_dc,stack_val_bc)) {
              NPC_Routine_080AB948(&stack_val_e4);
            }
            if (stack_val_dc < -0xf) goto LAB_08021b80;
LAB_08021bd4:
            b_flag3 = true;
          }
          else {
LAB_08021b80:
            if (0 < i_val13) {
              if (stack_val_bc < stack_val_d8) {
                NPC_Routine_080AB9C4(&stack_val_e4);
              }
              if (stack_val_d8 < 0x10) goto LAB_08021bd4;
            }
            if (i_val8 < 0) {
              if (stack_val_e0 + stack_val_bc < 0 != SCARRY4(stack_val_e0,stack_val_bc)) {
                NPC_Routine_080AB8D0(&stack_val_e4);
              }
              if (-0x10 < stack_val_e0) goto LAB_08021bd4;
            }
            if (0 < i_val8) {
              if (stack_val_bc < stack_val_e4) {
                NPC_Routine_080AB85C(&stack_val_e4);
              }
              if (stack_val_e4 < 0x10) goto LAB_08021bd4;
            }
          }
          if (b_flag3) {
            s_val6 = 0;
          }
          else {
            s_val6 = s_val6 + -1;
          }
        }
        *psVar15 = s_val6;
      }
    }
    else if (i_val9 == 2) {
      psVar15 = (short *)(stack_val_3c + 0x24);
      c_char5 = *(char *)(entity + 8);
      stack_val_48 = 0x78;
      stack_val_46 = 0xd0;
      stack_val_44 = 0x2f0;
      stack_val_42 = 0x84;
      if ((stack_val_38 == 9) && (c_char5 == '\0')) {
        i_val13 = 0xd0 - (*(short *)((int)entity + 0xe) + -8);
        if (i_val13 < 0) {
          i_val13 = -i_val13;
        }
        if (i_val13 < 8) {
          Farmer_Routine_0801FE78(entity,2,0x2f0,0x94);
        }
      }
      else if ((stack_val_38 == 2) && (c_char5 == '\x01')) {
        i_val13 = 0x2f0 - *(short *)((int)entity + 10);
        if (i_val13 < 0) {
          i_val13 = -i_val13;
        }
        if (i_val13 < 0x10) {
          i_val13 = 0x84 - (*(short *)((int)entity + 0xe) + 8);
          if (i_val13 < 0) {
            i_val13 = -i_val13;
          }
          if (i_val13 < 8) {
            Farmer_Routine_0801FE78(entity,9,0x78,0xb0);
          }
        }
      }
      s_val6 = *psVar15;
      if (s_val6 == 0) {
        stack_val_40 = (stack_val_40 & 0xFFFF0000 | 0xb4) & 0xFF00FFFF;
        Animal_Routine_0809BC24(stack_val_3c);
        u_val10 = Entity_Routine_080220D4(entity);
        Entity_Routine_08022048(entity,u_val10,*(char *)(entity + 8));
      }
      else {
        *psVar15 = s_val6 + -1;
      }
    }
  }
  else {
    *pcStack_24 = '\0';
    entity[2] = (int)*(short *)(entity + 0xe) << 0x10;
    entity[3] = (int)*(short *)((int)entity + 0x3a) << 0x10;
    _call_via_r2(&stack_val_74,entity,*(undefined4 *)(entity[5] + 0xc));
    stack_val_7c = stack_val_74;
    u_val10 = stack_val_7c;
    stack_val_78 = stack_val_70;
    u_val4 = stack_val_78;
    stack_val_78._0_2_ = (short)stack_val_70;
    stack_val_7c._0_2_ = (short)stack_val_74;
    stack_val_84 = ((int)(short)stack_val_78 - (int)(short)stack_val_7c) + 0x10;
    stack_val_78._2_2_ = (short)((uint)stack_val_70 >> 0x10);
    stack_val_7c._2_2_ = (short)((uint)stack_val_74 >> 0x10);
    stack_val_80 = ((int)stack_val_78._2_2_ - (int)stack_val_7c._2_2_) + 0x10;
    stack_val_b0 = 0x21;
    stack_val_ac = 0xffffffdf;
    stack_val_a8 = 0xffffffdf;
    stack_val_a4 = 0x21;
    stack_val_9c = stack_val_f0;
    stack_val_98 = stack_val_ec;
    stack_val_94 = stack_val_e8;
    stack_val_90 = stack_val_74;
    stack_val_8c = stack_val_70;
    stack_val_88 = 0x20;
    stack_val_7c = u_val10;
    stack_val_78 = u_val4;
    gba_memcpy(&stack_val_e4,&stack_val_b0,0x34);
    if ((i_val8 != 0) && (*(ushort *)(i_val8 + 4) == stack_val_38)) {
      _call_via_r2(stack_buf_6c,i_val8,*(undefined4 *)(*(int *)(i_val8 + 0x14) + 0xc));
      NPC_Routine_080ABA90(&stack_val_e4,stack_buf_6c,1);
    }
    if ((i_val9 != 0) && (*(ushort *)(i_val9 + 4) == stack_val_38)) {
      _call_via_r2(stack_buf_64,i_val9,*(undefined4 *)(*(int *)(i_val9 + 0x14) + 0xc));
      NPC_Routine_080ABA90(&stack_val_e4,stack_buf_64,0);
    }
LAB_08021d5e:
    u_val10 = Entity_Routine_080220D4(entity);
    Entity_Routine_08022048(entity,u_val10,*(undefined1 *)(entity + 8));
  }
  p_int7 = &stack_val_e4;
  if (*pcStack_24 != '\0') {
    p_int7 = (int *)0x0;
  }
  Entity_MoveAndCollide(entity,p_int7);
LAB_08021e6a:
  *(undefined1 *)(entity + 0xc) = 0;
  if (*(short *)(entity + 9) == 0) {
    s_val6 = *(short *)((int)entity + 0x26);
  }
  else {
    s_val6 = *(short *)(entity + 9) + -1;
  }
  *(short *)(entity + 9) = s_val6;
  i_val13 = entity[4];
  if (i_val13 != 0) {
    _call_via_r1(i_val13,*(undefined4 *)(*(int *)(i_val13 + 4) + 0xc));
  }
  return;
}

// =============================================================================
// Function: Entity_Routine_08021EA8 @ 0x08021EA8
// =============================================================================
void Entity_Routine_08021EA8(undefined4 *entity,undefined4 speed)

{
  char c_char1;
  int i_val2;
  
  if (*(char *)((int)entity + 0x3e) != '\0') {
    i_val2 = _call_via_r2((int *)*entity,0,*(undefined4 *)(*(int *)*entity + 0x40));
    c_char1 = _call_via_r1(i_val2,*(undefined4 *)(*(int *)(i_val2 + 0x14) + 0xa0));
    if (c_char1 != '\0') {
      return;
    }
  }
  Entity_Routine_0803242C(entity,speed);
  return;
}

// =============================================================================
// Function: Entity_Routine_08021EE0 @ 0x08021EE0
// =============================================================================
void Entity_Routine_08021EE0(int entity)

{
  int i_val1;
  undefined4 u_val2;
  uint stack_val_10;
  
  i_val1 = Animal_Routine_0809BC10(*(undefined4 *)(entity + 0x34));
  if (i_val1 == 1) {
    stack_val_10 = (stack_val_10 & 0xFFFF0000 | 0x78) & 0xFF00FFFF;
    Animal_Routine_0809BC24(*(undefined4 *)(entity + 0x34),&stack_val_10);
    u_val2 = Entity_Routine_080220D4(entity);
    Entity_Routine_08022048(entity,u_val2,*(undefined1 *)(entity + 0x20));
    *(undefined1 *)(entity + 0x3e) = 1;
    Animal_Routine_0809B3B0(*(undefined4 *)(entity + 0x34));
  }
  return;
}

// =============================================================================
// Function: Entity_Routine_08021F3C @ 0x08021F3C
// =============================================================================
void Entity_Routine_08021F3C(int entity)

{
  undefined4 u_val1;
  uint stack_val_c;
  
  *(undefined1 *)(entity + 0x3e) = 0;
  stack_val_c = (stack_val_c & 0xFFFF0000 | 0x78) & 0xFF00FFFF;
  Animal_Routine_0809BC24(*(undefined4 *)(entity + 0x34),&stack_val_c);
  u_val1 = Entity_Routine_080220D4(entity);
  Entity_Routine_08022048(entity,u_val1,*(undefined1 *)(entity + 0x20));
  return;
}

// =============================================================================
// Function: Entity_Routine_08021F88 @ 0x08021F88
// =============================================================================
u32 Entity_Routine_08021F88(int entity,int speed)

{
  int i_val1;
  int i_val2;
  
  i_val1 = gRomData_080F09AC;
  i_val2 = Animal_Routine_0809BC10(*(undefined4 *)(entity + 0x34));
  return (uint)*(ushort *)((i_val2 * 7 + speed) * 2 + i_val1);
}

// =============================================================================
// Function: Entity_Routine_08021FAC @ 0x08021FAC
// =============================================================================
u32 Entity_Routine_08021FAC(int entity,uint speed)

{
  undefined4 u_val1;
  undefined4 u_val2;
  int i_val3;
  undefined4 stack_val_18;
  undefined4 stack_val_14;
  undefined4 stack_val_10;
  undefined4 stack_val_c;
  
  if (6 < speed) goto case_08021FE0;
  switch(*(uint *)(speed * 4 + gInlineTable_08021FC4) & 0xfffffffe) {
  case 0x8021fc4:
  case 0x8021fe0:
case_08021FE0:
    u_val2 = 0;
    break;
  case 0x8021fe4:
    u_val2 = 0x8000;
    break;
  case 0x8021fea:
    u_val2 = 0x10000;
    break;
  case 0x8021ff0:
    _call_via_r2(&stack_val_18,entity,*(undefined4 *)(*(int *)(entity + 0x14) + 0xc));
    stack_val_10 = stack_val_18;
    u_val2 = stack_val_10;
    stack_val_c = stack_val_14;
    u_val1 = stack_val_c;
    i_val3 = 0x10;
    if (*(byte *)(entity + 0x20) < 2) {
      stack_val_c._2_2_ = (short)((uint)stack_val_14 >> 0x10);
      stack_val_10._2_2_ = (short)((uint)stack_val_18 >> 0x10);
      stack_val_c._0_2_ = stack_val_c._2_2_;
      stack_val_10._0_2_ = stack_val_10._2_2_;
LAB_08022030:
      i_val3 = ((int)(short)stack_val_c - (int)(short)stack_val_10) + 0x10;
    }
    else if (*(byte *)(entity + 0x20) < 4) {
      stack_val_c._0_2_ = (short)stack_val_14;
      stack_val_10._0_2_ = (short)stack_val_18;
      goto LAB_08022030;
    }
    stack_val_10 = u_val2;
    stack_val_c = u_val1;
    u_val2 = math_udivsi3(i_val3 << 0x10,0xc);
  }
  return u_val2;
}

// =============================================================================
// Function: Entity_Routine_08022048 @ 0x08022048
// =============================================================================
void Entity_Routine_08022048(int entity,uint speed,uint collision)

{
  uint u_val1;
  undefined4 u_val2;
  int i_val3;
  
  if ((speed != 6) && (*(char *)(entity + 0x3d) != '\0')) {
    speed = 6;
  }
  u_val1 = Entity_Routine_08021F88(entity,speed);
  if (*(ushort *)(entity + 0x22) != u_val1) {
    Entity_Routine_080321B0(entity);
  }
  if (*(byte *)(entity + 0x20) != collision) {
    Entity_Routine_08032198(entity,collision);
  }
  u_val2 = Entity_Routine_08021FAC(entity,speed);
  Entity_SetVelocityFromDirection(entity,u_val2);
  if ((speed != *(byte *)(entity + 0x3c)) && (*(char *)(entity + 0x3e) == '\0')) {
    i_val3 = -1;
    if (speed == 4) {
      i_val3 = 8;
    }
    if (i_val3 < 0) {
      Entity_Routine_080323C8(entity);
    }
    else {
      Entity_Routine_08032384(entity,i_val3,1);
    }
  }
  *(byte *)(entity + 0x3c) = (byte)speed;
  return;
}

// =============================================================================
// Function: Entity_Routine_080220D4 @ 0x080220D4
// =============================================================================
u32 Entity_Routine_080220D4(int entity)

{
  uint u_val1;
  int i_val2;
  
  i_val2 = *(int *)(*(int *)(entity + 0x34) + 0x20);
  if (i_val2 == 1) {
    u_val1 = 2;
  }
  else {
    if (i_val2 < 2) {
      if (i_val2 == 0) {
        u_val1 = (uint)*(byte *)(*(int *)(entity + 0x34) + 0x26);
        goto LAB_080220fc;
      }
    }
    else if (i_val2 == 2) {
      u_val1 = 1;
      goto LAB_080220fc;
    }
    u_val1 = 0;
  }
LAB_080220fc:
  return u_val1;
}

// =============================================================================
// Function: Entity_Routine_08022100 @ 0x08022100
// =============================================================================
void Entity_Routine_08022100(int entity)

{
  undefined4 u_val1;
  uint stack_val_c;
  
  if (*(int *)(*(int *)(entity + 0x34) + 0x20) == 2) {
    stack_val_c = (stack_val_c & 0xFFFF0000 | 0xb4) & 0xFF00FFFF;
    Animal_Routine_0809BC24(*(int *)(entity + 0x34),&stack_val_c);
    if (*(char *)(entity + 0x3d) == '\0') {
      u_val1 = Entity_Routine_080220D4(entity);
      Entity_Routine_08022048(entity,u_val1,*(undefined1 *)(entity + 0x20));
    }
  }
  return;
}

// =============================================================================
// Function: Entity_Routine_08022154 @ 0x08022154
// =============================================================================
u32 Entity_Routine_08022154(int entity)

{
  undefined4 u_val1;
  
  u_val1 = Animal_Routine_0809B230(*(undefined4 *)(entity + 0x34));
  return (u_val1 ^ 1);
}

// =============================================================================
// Function: Entity_Routine_08022164 @ 0x08022164
// =============================================================================
void Entity_Routine_08022164(int entity)

{
  char c_char1;
  
  c_char1 = Animal_Routine_0809B230(*(undefined4 *)(entity + 0x34));
  if (c_char1 == '\0') {
    NPC_AddFriendship(*(undefined4 *)(entity + 0x34),1);
    NPC_SetTalkedToday(*(undefined4 *)(entity + 0x34));
  }
  Entity_Routine_08032384(entity,1,0);
  Entity_Routine_080200C4(entity,0xa7);
  return;
}

// =============================================================================
// Function: Entity_Routine_0802219C @ 0x0802219C
// =============================================================================
void Entity_Routine_0802219C(int entity,uint speed,uint collision)

{
  undefined4 u_val1;
  uint stack_val_10;
  
  if (0x3b < collision) {
    if (*(byte *)(entity + 0x20) != speed) {
      Entity_Routine_08032198(entity);
    }
    stack_val_10 = stack_val_10 & 0xFFFF0000 | 0x3c;
    Animal_Routine_0809BC40(*(undefined4 *)(entity + 0x34),&stack_val_10);
    if (*(char *)(entity + 0x3d) == '\0') {
      u_val1 = Entity_Routine_080220D4(entity);
      Entity_Routine_08022048(entity,u_val1,*(byte *)(entity + 0x20));
    }
  }
  return;
}

// =============================================================================
// Function: Entity_Routine_080221F0 @ 0x080221F0
// =============================================================================
void Entity_Routine_080221F0(int entity,ushort *speed)

{
  int i_val1;
  undefined4 u_val2;
  int i_val3;
  int i_val4;
  uint stack_buf_1c [2];
  
  if ((*speed & 0x3ff) == *(ushort *)(entity + 4)) {
    Animal_Routine_0809B228(*(undefined4 *)(entity + 0x34));
    i_val1 = Entity_InitWorldActors();
    i_val4 = (int)(short)((ushort)((speed[1] & 0x3FF) << 6) |
                        (ushort)(*(byte *)((int)speed + 1) >> 2)) - (int)*(short *)(entity + 10);
    i_val3 = (int)(short)((ushort)((speed[2] & 0x3FF) << 6) |
                        (ushort)(*(byte *)((int)speed + 3) >> 2)) - (int)*(short *)(entity + 0xe)
    ;
    if (i_val4 * i_val4 + i_val3 * i_val3 <= i_val1 * i_val1) {
      i_val1 = Animal_Routine_0809B228(*(undefined4 *)(entity + 0x34));
      stack_buf_1c[0] = ((uint)(i_val1 * 0x3c0) >> 8) + 0x1e0 & 0xffff;
      Animal_Routine_0809BC30(*(undefined4 *)(entity + 0x34),stack_buf_1c);
      if (*(char *)(entity + 0x3d) == '\0') {
        u_val2 = Entity_Routine_080220D4(entity);
        Entity_Routine_08022048(entity,u_val2,*(undefined1 *)(entity + 0x20));
      }
      Animal_Routine_0809B3BC(*(undefined4 *)(entity + 0x34));
    }
  }
  return;
}

// =============================================================================
// Function: Entity_Routine_080222A8 @ 0x080222A8
// =============================================================================
u32 Entity_Routine_080222A8(int entity,undefined4 speed,undefined4 collision)

{
  undefined4 u_val1;
  undefined4 u_val2;
  
  u_val1 = Entity_Routine_08022320(collision);
  u_val2 = Entity_Routine_08022334(collision);
  Entity_Routine_080324BC(entity,speed,5,0xd,u_val1,u_val2,0,0);
  *(undefined4 *)(entity + 4) = gRomData_080E64B4;
  return entity;
}

// =============================================================================
// Function: Entity_Routine_080222F4 @ 0x080222F4
// =============================================================================
void Entity_Routine_080222F4(int *entity,undefined4 speed)

{
  undefined1 u_val1;
  int i_val2;
  
  i_val2 = *entity;
  u_val1 = Entity_Routine_08032900(*(undefined2 *)(i_val2 + 4),(int)*(short *)(i_val2 + 10),
                        (int)*(short *)(i_val2 + 0xe));
  *(undefined1 *)((int)entity + 0x8b) = u_val1;
  Entity_Routine_08032690(entity,speed);
  return;
}

// =============================================================================
// Function: Entity_Routine_08022320 @ 0x08022320
// =============================================================================
u32 Entity_Routine_08022320(int entity)

{
  undefined4 u_val1;
  
  if ((entity == 0) || (entity != 1)) {
    u_val1 = 1;
  }
  else {
    u_val1 = 2;
  }
  return u_val1;
}

// =============================================================================
// Function: Entity_Routine_08022334 @ 0x08022334
// =============================================================================
u32 Entity_Routine_08022334(int entity)

{
  undefined4 u_val1;
  
  if ((entity == 0) || (entity != 1)) {
    u_val1 = 0xe;
  }
  else {
    u_val1 = 0xf;
  }
  return u_val1;
}

// =============================================================================
// Function: Entity_Routine_08022348 @ 0x08022348
// =============================================================================
u32 Entity_Routine_08022348(int entity)

{
  undefined4 u_val1;
  undefined4 u_val2;
  int i_val3;
  
  u_val1 = CppRuntime_OperatorNewArray(0x8c);
  u_val2 = Animal_Routine_0809BC10(*(undefined4 *)(entity + 0x34));
  i_val3 = Entity_Routine_080222A8(u_val1,entity,u_val2);
  if (*(char *)(entity + 0x3c) == '\x04') {
    Animal_Routine_0805E860(i_val3 + 0x70,8);
    *(undefined1 *)(i_val3 + 0x84) = 1;
    *(undefined1 *)(i_val3 + 0x86) = 0;
    *(undefined1 *)(i_val3 + 0x87) = 1;
    *(byte *)(i_val3 + 0x8a) = *(byte *)(i_val3 + 0x8a) & 0xfc | 2;
  }
  return i_val3;
}

// =============================================================================
// Function: Entity_Routine_080223A8 @ 0x080223A8
// =============================================================================
u32 Entity_Routine_080223A8(int entity,undefined4 speed,undefined4 collision)

{
  undefined4 u_val1;
  undefined1 temp_buf_18 [8];
  
  Actor_CopyLocation2(temp_buf_18,collision);
  Entity_ResetMotionState(entity,speed,temp_buf_18,0x720);
  *(undefined4 *)(entity + 0x14) = gRomData_080E639C;
  *(undefined4 *)(entity + 0x34) = collision;
  u_val1 = Entity_Routine_08022950(entity);
  Entity_Routine_080228B4(entity,u_val1,*(undefined1 *)(entity + 0x20));
  return entity;
}

// =============================================================================
// Function: Entity_Routine_08022444 @ 0x08022444
// =============================================================================
void Entity_Routine_08022444(int entity,uint speed)

{
  undefined4 u_val1;
  uint stack_val_c;
  
  stack_val_c = (stack_val_c & 0xFFFF0000 | speed & 0xffff) & 0xFF00FFFF;
  Chicken_IsFedToday(*(undefined4 *)(entity + 0x34),&stack_val_c);
  u_val1 = Entity_Routine_08022950(entity);
  Entity_Routine_080228B4(entity,u_val1,*(undefined1 *)(entity + 0x20));
  return;
}

// =============================================================================
// Function: Entity_Routine_08022488 @ 0x08022488
// =============================================================================
void Entity_Routine_08022488(int entity)

{
  short s_val1;
  int i_val2;
  
  Entity_Routine_080224E4();
  *(undefined1 *)(entity + 0x30) = 0;
  if (*(short *)(entity + 0x24) == 0) {
    s_val1 = *(short *)(entity + 0x26);
  }
  else {
    s_val1 = *(short *)(entity + 0x24) + -1;
  }
  *(short *)(entity + 0x24) = s_val1;
  i_val2 = *(int *)(entity + 0x10);
  if (i_val2 != 0) {
    _call_via_r1(i_val2,*(undefined4 *)(*(int *)(i_val2 + 4) + 0xc));
  }
  return;
}

// =============================================================================
// Function: Entity_Routine_080224BC @ 0x080224BC
// =============================================================================
void Entity_Routine_080224BC(undefined4 entity,undefined4 speed)

{
  char c_char1;
  
  c_char1 = Entity_Routine_08032370();
  if (c_char1 != '\0') {
    Entity_Routine_080224E4(entity,speed);
  }
  Entity_Routine_0803242C(entity,speed);
  return;
}

// =============================================================================
// Function: Entity_Routine_080224E4 @ 0x080224E4
// =============================================================================
void Entity_Routine_080224E4(undefined4 *entity,int speed)

{
  byte b_flag1;
  bool b_flag2;
  char c_char3;
  int *p_int4;
  uint u_val5;
  uint u_val6;
  int *p_int7;
  int i_val8;
  int i_val9;
  undefined4 u_val10;
  short s_val11;
  uint u_val12;
  int i_val13;
  undefined4 u_val14;
  undefined4 stack_val_8c;
  undefined4 stack_val_88;
  undefined4 stack_val_84;
  int stack_val_80;
  int stack_val_7c;
  int stack_val_78;
  int stack_val_74;
  undefined4 stack_val_6c;
  undefined4 stack_val_68;
  undefined4 stack_val_64;
  undefined4 stack_val_60;
  undefined4 stack_val_5c;
  int stack_val_58;
  undefined4 stack_val_54;
  undefined4 stack_val_50;
  undefined4 stack_val_4c;
  undefined4 stack_val_48;
  undefined1 stack_buf_44 [8];
  undefined1 temp_buf_3c [8];
  uint stack_val_34;
  uint stack_val_30;
  undefined2 *puStack_2c;
  undefined4 stack_val_28;
  undefined4 stack_val_24;
  
  i_val13 = entity[0xd];
  p_int4 = (int *)*entity;
  stack_val_30 = (uint)*(ushort *)(entity + 1);
  if ((stack_val_30 == 2) && (*(char *)(speed + 4) != '\0')) {
    u_val5 = Animal_Routine_0809B51C(i_val13);
    Animal_Routine_0809B57C(i_val13,1);
    u_val6 = Animal_Routine_0809B51C(i_val13);
    if ((u_val5 < 0xb4) &&
       (((0xb3 < u_val6 &&
         (p_int7 = (int *)_call_via_r1(p_int4,*(undefined4 *)(*p_int4 + 0x144)), *p_int7 != 0))
        && (c_char3 = Animal_Routine_0809B504(i_val13), c_char3 == '\0')))) {
      Animal_Routine_0809B638(i_val13);
    }
    if ((u_val5 < 0xf0) && (0xef < u_val6)) {
      Animal_Routine_0809BCF0(i_val13);
    }
    if (((u_val5 <= 0x12B) && (0x12B < u_val6)) &&
       (p_int7 = (int *)_call_via_r1(p_int4,*(undefined4 *)(*p_int4 + 0x144)), *p_int7 == 0)) {
      c_char3 = Animal_Routine_0809B504(i_val13);
      if ((c_char3 != '\0') && (u_val5 = NPC_Routine_080AB788(100), u_val5 < 0x1e)) {
        Animal_Routine_0809B644(i_val13);
      }
      NPC_AddFriendship(i_val13,1);
    }
  }
  _call_via_r3(&stack_val_8c,p_int4,stack_val_30,*(undefined4 *)(*p_int4 + 0x34));
  _call_via_r2(&stack_val_4c,entity,*(undefined4 *)(entity[5] + 0xc));
  stack_val_28 = stack_val_4c;
  stack_val_24 = stack_val_48;
  stack_val_80 = 0x11;
  stack_val_7c = -0x11;
  stack_val_78 = -0x11;
  stack_val_74 = 0x11;
  stack_val_6c = stack_val_8c;
  stack_val_68 = stack_val_88;
  stack_val_64 = stack_val_84;
  stack_val_60 = stack_val_4c;
  stack_val_5c = stack_val_48;
  stack_val_58 = 0x10;
  stack_val_54 = 0;
  stack_val_50 = 0;
  i_val8 = _call_via_r2(p_int4,0,*(undefined4 *)(*p_int4 + 0x40));
  i_val9 = _call_via_r2(p_int4,0x4a,*(undefined4 *)(*p_int4 + 0x40));
  if ((i_val8 != 0) && (*(ushort *)(i_val8 + 4) == stack_val_30)) {
    _call_via_r2(stack_buf_44,i_val8,*(undefined4 *)(*(int *)(i_val8 + 0x14) + 0xc));
    NPC_Routine_080ABA90(&stack_val_80,stack_buf_44,0);
  }
  if ((i_val9 != 0) && (*(ushort *)(i_val9 + 4) == stack_val_30)) {
    _call_via_r2(temp_buf_3c,i_val9,*(undefined4 *)(*(int *)(i_val9 + 0x14) + 0xc));
    NPC_Routine_080ABA90(&stack_val_80,temp_buf_3c,0);
  }
  if (*(int *)(i_val13 + 0x24) != 0) {
    if (*(int *)(i_val13 + 0x24) == 1) {
      puStack_2c = (undefined2 *)(i_val13 + 0x28);
      u_val5 = (uint)*(ushort *)(i_val13 + 0x28);
      if (u_val5 != 0) {
        u_val5 = u_val5 - 1;
      }
      u_val6 = (*(uint *)(i_val13 + 0x28) & 0x7fffff) >> 0x10;
      if (u_val6 != 0) {
        u_val6 = u_val6 - 1;
      }
      u_val12 = (uint)*(byte *)(i_val13 + 0x2b);
      if (u_val12 != 0) {
        u_val12 = u_val12 - 1;
      }
      if (u_val5 != 0) {
        if ((int)(*(uint *)(i_val13 + 0x28) * 0x100) < 0) {
          i_val8 = _call_via_r2(p_int4,0x2d,*(undefined4 *)(*p_int4 + 0x40));
        }
        if ((i_val8 != 0) && (*(ushort *)(i_val8 + 4) == stack_val_30)) {
          if (u_val12 == 0) {
            u_val14 = 1;
            if (u_val6 != 0) {
              u_val14 = 4;
            }
            u_val10 = NPC_Routine_080ABE58((int)*(short *)((int)entity + 10),
                                   (int)*(short *)((int)entity + 0xe),(int)*(short *)(i_val8 + 10),
                                   (int)*(short *)(i_val8 + 0xe),&stack_val_80,
                                   *(undefined1 *)(entity + 8));
            Entity_Routine_080228B4(entity,u_val14,u_val10);
            i_val13 = NPC_Routine_080AB788(0x1e);
            u_val12 = i_val13 + 1;
          }
          *puStack_2c = (short)u_val5;
          *(byte *)(puStack_2c + 1) = *(byte *)(puStack_2c + 1) & 0x80 | (byte)u_val6 & 0x7f;
          *(char *)((int)puStack_2c + 3) = (char)u_val12;
          goto LAB_08022894;
        }
      }
      stack_val_34 = (stack_val_34 & 0xFFFF0000 | 0xb4) & 0xFF00FFFF;
      Chicken_IsFedToday(i_val13,&stack_val_34);
      u_val14 = Entity_Routine_08022950(entity);
      Entity_Routine_080228B4(entity,u_val14,*(undefined1 *)(entity + 8));
    }
    goto LAB_08022894;
  }
  s_val11 = *(short *)(i_val13 + 0x28);
  if (s_val11 == 0) {
    c_char3 = Entity_CanMoveToPosition(entity);
    s_val11 = 0;
    if (c_char3 != '\0') {
      i_val9 = _call_via_r1(p_int4,*(undefined4 *)(*p_int4 + 0x144));
      b_flag1 = *(byte *)(i_val9 + 10);
      i_val9 = Animal_Routine_0809BCAC(i_val13);
      u_val5 = Animal_Routine_0809B50C(i_val13);
      i_val8 = (uint)(0xe < (b_flag1 & 0x1f) - 6) * 0x50 + i_val9 * 0x28 + gRomData_080F09C8 +
              (u_val5 & 0xff) * 0x14;
      i_val9 = NPC_Routine_080AB82C(i_val8,5);
      i_val8 = i_val8 + i_val9 * 4;
      s_val11 = NPC_Routine_080AB788((uint)*(byte *)(i_val8 + 2) * 0x3c);
      s_val11 = (ushort)*(byte *)(i_val8 + 1) * 0x3c + s_val11;
      u_val5 = (uint)*(byte *)(entity + 8);
      i_val8 = NPC_Routine_080AB788(4);
      if ((i_val8 != 0) && (i_val8 != 3)) {
        u_val5 = NPC_Routine_080AB7A4(u_val5);
      }
      Entity_Routine_080228B4(entity,i_val9,u_val5);
      *(char *)(i_val13 + 0x2a) = (char)i_val9;
    }
  }
  else {
    i_val9 = entity[6];
    i_val8 = entity[7];
    b_flag2 = false;
    if (i_val9 < 0) {
      if (stack_val_78 + stack_val_58 < 0 != SCARRY4(stack_val_78,stack_val_58)) {
        NPC_Routine_080AB948(&stack_val_80);
      }
      if (stack_val_78 < -0xf) goto LAB_080226a4;
LAB_080226f8:
      b_flag2 = true;
    }
    else {
LAB_080226a4:
      if (0 < i_val9) {
        if (stack_val_58 < stack_val_74) {
          NPC_Routine_080AB9C4(&stack_val_80);
        }
        if (stack_val_74 < 0x10) goto LAB_080226f8;
      }
      if (i_val8 < 0) {
        if (stack_val_7c + stack_val_58 < 0 != SCARRY4(stack_val_7c,stack_val_58)) {
          NPC_Routine_080AB8D0(&stack_val_80);
        }
        if (-0x10 < stack_val_7c) goto LAB_080226f8;
      }
      if (0 < i_val8) {
        if (stack_val_58 < stack_val_80) {
          NPC_Routine_080AB85C(&stack_val_80);
        }
        if (stack_val_80 < 0x10) goto LAB_080226f8;
      }
    }
    if (b_flag2) {
      s_val11 = 0;
    }
    else {
      s_val11 = s_val11 + -1;
    }
  }
  *(short *)(i_val13 + 0x28) = s_val11;
LAB_08022894:
  Entity_MoveAndCollide(entity,&stack_val_80);
  return;
}

// =============================================================================
// Function: Entity_Routine_080228B4 @ 0x080228B4
// =============================================================================
void Entity_Routine_080228B4(undefined4 *entity,uint speed,uint collision)

{
  uint u_val1;
  undefined4 u_val2;
  int i_val3;
  int i_val4;
  
  u_val1 = Entity_Routine_08022980();
  if (*(ushort *)((int)entity + 0x22) != u_val1) {
    Entity_Routine_080321B0(entity);
  }
  if (*(byte *)(entity + 8) != collision) {
    Entity_Routine_08032198(entity,collision);
  }
  u_val2 = Entity_Routine_080229A4(entity,speed);
  Entity_SetVelocityFromDirection(entity,u_val2);
  if (speed != *(byte *)(entity + 0xe)) {
    i_val4 = -1;
    i_val3 = Animal_Routine_0809BCAC(entity[0xd]);
    u_val1 = 0;
    if (i_val3 != 0) {
      u_val1 = 3;
    }
    if ((speed == u_val1) &&
       (i_val3 = _call_via_r1((int *)*entity,*(undefined4 *)(*(int *)*entity + 0x144)),
       0xe < (*(byte *)(i_val3 + 10) & 0x1f) - 6)) {
      i_val4 = 8;
    }
    if (i_val4 < 0) {
      Entity_Routine_080323C8(entity);
    }
    else {
      Entity_Routine_08032384(entity,i_val4,1);
    }
  }
  *(byte *)(entity + 0xe) = (byte)speed;
  return;
}

// =============================================================================
// Function: Entity_Routine_08022950 @ 0x08022950
// =============================================================================
u32 Entity_Routine_08022950(int entity)

{
  int i_val1;
  uint u_val2;
  
  i_val1 = *(int *)(entity + 0x34);
  if (*(int *)(i_val1 + 0x24) == 0) {
    u_val2 = (uint)*(byte *)(i_val1 + 0x2a);
  }
  else if (*(int *)(i_val1 + 0x24) == 1) {
    u_val2 = 1;
    if ((*(byte *)(i_val1 + 0x2a) & 0x7f) != 0) {
      u_val2 = 4;
    }
  }
  else {
    u_val2 = 0;
  }
  return u_val2;
}

// =============================================================================
// Function: Entity_Routine_08022980 @ 0x08022980
// =============================================================================
u32 Entity_Routine_08022980(int entity,int speed)

{
  int i_val1;
  int i_val2;
  
  i_val1 = gRomData_080F0A68;
  i_val2 = Animal_Routine_0809BCAC(*(undefined4 *)(entity + 0x34));
  return (uint)*(ushort *)((i_val2 * 5 + speed) * 2 + i_val1);
}

// =============================================================================
// Function: Entity_Routine_080229A4 @ 0x080229A4
// =============================================================================
u32 Entity_Routine_080229A4(undefined4 entity,int speed)

{
  undefined4 u_val1;
  
  if (speed == 1) {
    u_val1 = 0x8000;
  }
  else {
    u_val1 = 0;
  }
  return u_val1;
}

// =============================================================================
// Function: Entity_Routine_080229BC @ 0x080229BC
// =============================================================================
void Entity_Routine_080229BC(int entity)

{
  Animal_Routine_0809B50C(*(undefined4 *)(entity + 0x34));
  return;
}

// =============================================================================
// Function: Entity_Routine_080229C8 @ 0x080229C8
// =============================================================================
u32 Entity_Routine_080229C8(int entity)

{
  char c_char1;
  undefined4 u_val2;
  
  u_val2 = 0;
  if (((*(short *)(entity + 4) == 2) &&
      (c_char1 = Animal_Routine_0809B50C(*(undefined4 *)(entity + 0x34)), c_char1 == '\0')) &&
     (c_char1 = Animal_Routine_0809B504(*(undefined4 *)(entity + 0x34)), c_char1 == '\0')) {
    u_val2 = 1;
  }
  return u_val2;
}

// =============================================================================
// Function: Entity_Routine_080229F8 @ 0x080229F8
// =============================================================================
void Entity_Routine_080229F8(int entity)

{
  int i_val1;
  undefined4 u_val2;
  uint stack_val_c;
  
  i_val1 = NPC_Routine_080AB788(0x78);
  stack_val_c = ((stack_val_c & 0xFFFF0000 | i_val1 + 0xf0U & 0xffff) & 0xFF80FFFF | 0x3c0000) &
             0xFF7FFFFF & 0x00FFFFFF;
  Chicken_SetFedToday(*(undefined4 *)(entity + 0x34),&stack_val_c);
  u_val2 = Entity_Routine_08022950(entity);
  Entity_Routine_080228B4(entity,u_val2,*(undefined1 *)(entity + 0x20));
  NPC_ReduceFriendship(*(undefined4 *)(entity + 0x34),10);
  Animal_Routine_0809B638(*(undefined4 *)(entity + 0x34));
  Entity_Routine_08032384(entity,2,0);
  i_val1 = Animal_Routine_0809BCAC(*(undefined4 *)(entity + 0x34));
  u_val2 = 0xa5;
  if (i_val1 == 1) {
    u_val2 = 0xa6;
  }
  Entity_Routine_080200C4(entity,u_val2);
  return;
}

// =============================================================================
// Function: Entity_Routine_08022A88 @ 0x08022A88
// =============================================================================
void Entity_Routine_08022A88(int entity)

{
  char c_char1;
  
  Animal_Routine_0809B624(*(undefined4 *)(entity + 0x34));
  c_char1 = Animal_Routine_0809B504(*(undefined4 *)(entity + 0x34));
  if (c_char1 != '\0') {
    Animal_Routine_0809B644(*(undefined4 *)(entity + 0x34));
  }
  return;
}

// =============================================================================
// Function: Entity_Routine_08022AAC @ 0x08022AAC
// =============================================================================
void Entity_Routine_08022AAC(int entity)

{
  int i_val1;
  undefined4 u_val2;
  uint stack_val_c;
  
  i_val1 = NPC_Routine_080AB788(0x78);
  stack_val_c = ((stack_val_c & 0xFFFF0000 | i_val1 + 0xf0U & 0xffff) & 0xFF80FFFF | 0xbc0000) &
             0x00FFFFFF;
  Chicken_SetFedToday(*(undefined4 *)(entity + 0x34),&stack_val_c);
  u_val2 = Entity_Routine_08022950(entity);
  Entity_Routine_080228B4(entity,u_val2,*(undefined1 *)(entity + 0x20));
  NPC_ReduceFriendship(*(undefined4 *)(entity + 0x34),10);
  Animal_Routine_0809B638(*(undefined4 *)(entity + 0x34));
  Entity_Routine_08032384(entity,2,0);
  i_val1 = Animal_Routine_0809BCAC(*(undefined4 *)(entity + 0x34));
  u_val2 = 0xa5;
  if (i_val1 == 1) {
    u_val2 = 0xa6;
  }
  Entity_Routine_080200C4(entity,u_val2);
  return;
}

// =============================================================================
// Function: Entity_Routine_08022B38 @ 0x08022B38
// =============================================================================
void Entity_Routine_08022B38(short *entity,int speed)

{
  short s_val1;
  short s_val2;
  
  s_val1 = *(short *)(speed + 10);
  s_val2 = *(short *)(speed + 0xe);
  *entity = s_val1 + -7;
  entity[1] = s_val2 + -4;
  entity[2] = s_val1 + 7;
  entity[3] = s_val2 + 5;
  return;
}

// =============================================================================
// Function: Entity_Routine_08022B5C @ 0x08022B5C
// =============================================================================
u32 Entity_Routine_08022B5C(int entity)

{
  undefined4 u_val1;
  
  if ((entity == 0) || (entity != 1)) {
    u_val1 = 6;
  }
  else {
    u_val1 = 7;
  }
  return u_val1;
}

// =============================================================================
// Function: Entity_Routine_08022B70 @ 0x08022B70
// =============================================================================
u32 Entity_Routine_08022B70(undefined4 *entity)

{
  undefined4 u_val1;
  undefined4 u_val2;
  undefined4 u_val3;
  int i_val4;
  int i_val5;
  char c_char6;
  
  u_val1 = Animal_Routine_0809BCAC(entity[0xd]);
  u_val2 = CppRuntime_OperatorNewArray(0x8c);
  u_val3 = Entity_Routine_08022B58(u_val1);
  u_val1 = Entity_Routine_08022B5C(u_val1);
  i_val4 = Entity_Routine_080324BC(u_val2,entity,2,9,u_val3,u_val1,0,0);
  i_val5 = Animal_Routine_0809BCAC(entity[0xd]);
  c_char6 = '\0';
  if (i_val5 != 0) {
    c_char6 = '\x03';
  }
  if ((*(char *)(entity + 0xe) == c_char6) &&
     (i_val5 = _call_via_r1((int *)*entity,*(undefined4 *)(*(int *)*entity + 0x144)),
     0xe < (*(byte *)(i_val5 + 10) & 0x1f) - 6)) {
    Animal_Routine_0805E860(i_val4 + 0x70,8);
    *(undefined1 *)(i_val4 + 0x84) = 1;
    *(undefined1 *)(i_val4 + 0x86) = 0;
    *(undefined1 *)(i_val4 + 0x87) = 1;
    *(byte *)(i_val4 + 0x8a) = *(byte *)(i_val4 + 0x8a) & 0xfc | 2;
  }
  return i_val4;
}

// =============================================================================
// Function: Entity_Routine_08022C18 @ 0x08022C18
// =============================================================================
u32 Entity_Routine_08022C18(int entity,undefined4 speed,undefined4 collision)

{
  undefined4 u_val1;
  undefined1 temp_buf_18 [8];
  
  Actor_CopyLocation2(temp_buf_18,collision);
  Entity_ResetMotionState(entity,speed,temp_buf_18,0x2b0);
  *(undefined4 *)(entity + 0x14) = gRomData_080E6310;
  *(undefined4 *)(entity + 0x34) = collision;
  u_val1 = Entity_Routine_08023378(entity);
  Entity_Routine_08023308(entity,u_val1,*(undefined1 *)(entity + 0x20));
  return entity;
}

// =============================================================================
// Function: Entity_Routine_08022CB4 @ 0x08022CB4
// =============================================================================
void Entity_Routine_08022CB4(int entity,uint speed)

{
  undefined4 u_val1;
  uint stack_val_c;
  
  stack_val_c = (stack_val_c & 0xFFFF0000 | speed & 0xffff) & 0xFF00FFFF;
  BarnAnimal_GetAffection(*(undefined4 *)(entity + 0x34),&stack_val_c);
  u_val1 = Entity_Routine_08023378(entity);
  Entity_Routine_08023308(entity,u_val1,*(undefined1 *)(entity + 0x20));
  return;
}

// =============================================================================
// Function: Entity_Routine_08022CF8 @ 0x08022CF8
// =============================================================================
void Entity_Routine_08022CF8(undefined4 *entity,int speed)

{
  short s_val1;
  bool b_flag2;
  char c_char3;
  int i_val4;
  uint u_val5;
  uint u_val6;
  int *p_int7;
  int i_val8;
  int i_val9;
  int i_val10;
  undefined4 u_val11;
  uint *p_uint12;
  int i_val13;
  short s_val14;
  uint u_val15;
  int *p_int16;
  undefined4 u_val17;
  undefined4 stack_val_b8;
  undefined4 stack_val_b4;
  undefined4 stack_val_b0;
  int stack_val_ac;
  int stack_val_a8;
  int stack_val_a4;
  int stack_val_a0;
  undefined4 stack_val_98;
  undefined4 stack_val_94;
  undefined4 stack_val_90;
  undefined4 stack_val_8c;
  undefined4 stack_val_88;
  int stack_val_84;
  undefined4 stack_val_80;
  undefined4 stack_val_7c;
  undefined2 stack_val_78;
  undefined2 stack_val_76;
  undefined4 stack_val_74;
  undefined4 stack_val_70;
  undefined1 stack_buf_6c [8];
  undefined1 stack_buf_64 [8];
  uint stack_val_5c;
  uint stack_val_58;
  undefined4 stack_val_54;
  undefined4 stack_val_50;
  undefined4 stack_val_4c;
  undefined4 stack_val_48;
  undefined4 stack_val_44;
  undefined4 stack_val_40;
  undefined4 stack_val_3c;
  undefined4 stack_val_38;
  uint stack_val_34;
  uint stack_val_30;
  undefined2 *puStack_2c;
  undefined4 stack_val_28;
  undefined4 stack_val_24;
  
  p_int16 = (int *)*entity;
  i_val4 = entity[0xd];
  stack_val_30 = (uint)*(ushort *)(entity + 1);
  if ((stack_val_30 == 2) && (*(char *)(speed + 4) != '\0')) {
    u_val5 = Animal_Routine_0809B51C(i_val4);
    Animal_Routine_0809B57C(i_val4,1);
    u_val6 = Animal_Routine_0809B51C(i_val4);
    if ((u_val5 < 0xb4) &&
       (((0xb3 < u_val6 &&
         (p_int7 = (int *)_call_via_r1(p_int16,*(undefined4 *)(*p_int16 + 0x144)), *p_int7 != 0))
        && (c_char3 = Animal_Routine_0809B504(i_val4), c_char3 == '\0')))) {
      Animal_Routine_0809B638(i_val4);
    }
    if ((u_val5 < 0xf0) && (0xef < u_val6)) {
      stack_val_78 = *(undefined2 *)((int)entity + 10);
      stack_val_76 = *(undefined2 *)((int)entity + 0xe);
      c_char3 = _call_via_r2(p_int16,&stack_val_78,*(undefined4 *)(*p_int16 + 0x108));
      if (c_char3 != '\0') {
        Animal_Routine_0809B8F0(i_val4);
      }
    }
    if (((u_val5 <= 0x12B) && (0x12B < u_val6)) &&
       (p_int7 = (int *)_call_via_r1(p_int16,*(undefined4 *)(*p_int16 + 0x144)), *p_int7 == 0)) {
      c_char3 = Animal_Routine_0809B504(i_val4);
      if ((c_char3 != '\0') && (u_val5 = NPC_Routine_080AB788(100), u_val5 < 0x1e)) {
        Animal_Routine_0809B644(i_val4);
      }
      NPC_AddFriendship(i_val4,1);
    }
  }
  _call_via_r3(&stack_val_b8,p_int16,stack_val_30,*(undefined4 *)(*p_int16 + 0x34));
  _call_via_r2(&stack_val_74,entity,*(undefined4 *)(entity[5] + 0xc));
  stack_val_28 = stack_val_74;
  stack_val_24 = stack_val_70;
  stack_val_ac = 0x11;
  stack_val_a8 = -0x11;
  stack_val_a4 = -0x11;
  stack_val_a0 = 0x11;
  stack_val_98 = stack_val_b8;
  stack_val_94 = stack_val_b4;
  stack_val_90 = stack_val_b0;
  stack_val_8c = stack_val_74;
  stack_val_88 = stack_val_70;
  stack_val_84 = 0x10;
  stack_val_80 = 0;
  stack_val_7c = 0;
  i_val8 = _call_via_r2(p_int16,0,*(undefined4 *)(*p_int16 + 0x40));
  i_val9 = _call_via_r2(p_int16,0x4a,*(undefined4 *)(*p_int16 + 0x40));
  if ((i_val8 != 0) && (*(ushort *)(i_val8 + 4) == stack_val_30)) {
    _call_via_r2(stack_buf_6c,i_val8,*(undefined4 *)(*(int *)(i_val8 + 0x14) + 0xc));
    NPC_Routine_080ABA90(&stack_val_ac,stack_buf_6c,0);
  }
  if ((i_val9 != 0) && (*(ushort *)(i_val9 + 4) == stack_val_30)) {
    _call_via_r2(stack_buf_64,i_val9,*(undefined4 *)(*(int *)(i_val9 + 0x14) + 0xc));
    NPC_Routine_080ABA90(&stack_val_ac,stack_buf_64,0);
  }
  i_val9 = *(int *)(i_val4 + 0x28);
  if (i_val9 == 1) {
    puStack_2c = (undefined2 *)(i_val4 + 0x2c);
    u_val5 = (uint)*(ushort *)(i_val4 + 0x2c);
    if (u_val5 != 0) {
      u_val5 = u_val5 - 1;
    }
    u_val6 = (*(uint *)(i_val4 + 0x2c) & 0x7fffff) >> 0x10;
    if (u_val6 != 0) {
      u_val6 = u_val6 - 1;
    }
    u_val15 = (uint)*(byte *)(i_val4 + 0x2f);
    if (u_val15 != 0) {
      u_val15 = u_val15 - 1;
    }
    if (u_val5 != 0) {
      if ((int)(*(uint *)(i_val4 + 0x2c) * 0x100) < 0) {
        i_val8 = _call_via_r2(p_int16,0x2d,*(undefined4 *)(*p_int16 + 0x40));
      }
      if ((i_val8 != 0) && (*(ushort *)(i_val8 + 4) == stack_val_30)) {
        if (u_val15 == 0) {
          u_val17 = 1;
          if (u_val6 != 0) {
            u_val17 = 6;
          }
          u_val11 = NPC_Routine_080ABE58((int)*(short *)((int)entity + 10),
                                 (int)*(short *)((int)entity + 0xe),(int)*(short *)(i_val8 + 10),
                                 (int)*(short *)(i_val8 + 0xe),&stack_val_ac,
                                 *(undefined1 *)(entity + 8));
          Entity_Routine_08023308(entity,u_val17,u_val11);
          i_val4 = NPC_Routine_080AB788(0x1e);
          u_val15 = i_val4 + 1;
        }
        *puStack_2c = (short)u_val5;
        *(byte *)(puStack_2c + 1) = *(byte *)(puStack_2c + 1) & 0x80 | (byte)u_val6 & 0x7f;
        *(char *)((int)puStack_2c + 3) = (char)u_val15;
        goto LAB_080232b8;
      }
    }
    stack_val_5c = (stack_val_5c & 0xFFFF0000 | 0xb4) & 0xFF00FFFF;
    p_uint12 = &stack_val_5c;
LAB_0802319e:
    BarnAnimal_GetAffection(i_val4,p_uint12);
    u_val17 = Entity_Routine_08023378(entity);
    Entity_Routine_08023308(entity,u_val17,*(undefined1 *)(entity + 8));
    goto LAB_080232b8;
  }
  if (1 < i_val9) {
    if (i_val9 != 2) {
      if (i_val9 == 3) {
        c_char3 = *(char *)(entity + 8);
        s_val14 = *(short *)((int)entity + 10);
        s_val1 = *(short *)((int)entity + 0xe);
        if ((stack_val_30 == 0x25) && (c_char3 == '\0')) {
          Building_Routine_0800CE58(&stack_val_54);
          stack_val_50 = stack_val_54;
          u_val17 = stack_val_50;
          stack_val_50._2_2_ = (short)((uint)stack_val_54 >> 0x10);
          i_val9 = (int)stack_val_50._2_2_ - (s_val1 + -8);
          if (i_val9 < 0) {
            i_val9 = -i_val9;
          }
          stack_val_50 = u_val17;
          if (i_val9 < 8) {
            Farm_GetSpawnCoordinates(&stack_val_4c);
            stack_val_48 = stack_val_4c;
            u_val17 = stack_val_48;
            stack_val_48._0_2_ = (short)stack_val_4c;
            i_val9 = (int)(short)stack_val_48;
            stack_val_48._2_2_ = (short)((uint)stack_val_4c >> 0x10);
            i_val8 = (int)stack_val_48._2_2_;
            stack_val_48 = u_val17;
            Farmer_Routine_0801FE78(entity,2,i_val9,i_val8 + 0x10);
          }
        }
        else if ((stack_val_30 == 2) && (c_char3 == '\x01')) {
          Farm_GetSpawnCoordinates(&stack_val_44);
          stack_val_40 = stack_val_44;
          u_val17 = stack_val_40;
          stack_val_40._0_2_ = (short)stack_val_44;
          i_val9 = (int)(short)stack_val_40 - (int)s_val14;
          if (i_val9 < 0) {
            i_val9 = -i_val9;
          }
          stack_val_40 = u_val17;
          if (i_val9 < 0x10) {
            stack_val_40._2_2_ = (short)((uint)stack_val_44 >> 0x10);
            i_val9 = (int)stack_val_40._2_2_ - (s_val1 + 8);
            if (i_val9 < 0) {
              i_val9 = -i_val9;
            }
            if (i_val9 < 8) {
              Building_Routine_0800CE58(&stack_val_3c);
              stack_val_38 = stack_val_3c;
              u_val17 = stack_val_38;
              stack_val_38._0_2_ = (short)stack_val_3c;
              i_val9 = (int)(short)stack_val_38;
              stack_val_38._2_2_ = (short)((uint)stack_val_3c >> 0x10);
              i_val8 = (int)stack_val_38._2_2_;
              stack_val_38 = u_val17;
              Farmer_Routine_0801FE78(entity,0x25,i_val9,i_val8 + -0x20);
              Animal_Routine_0809B608(i_val4);
            }
          }
        }
        s_val14 = *(short *)(i_val4 + 0x2c);
        if (s_val14 == 0) {
          stack_val_34 = (stack_val_34 & 0xFFFF0000 | 0xb4) & 0xFF00FFFF;
          BarnAnimal_GetAffection(i_val4);
          u_val17 = Entity_Routine_08023378(entity);
          Entity_Routine_08023308(entity,u_val17,*(char *)(entity + 8));
        }
        else {
          *(short *)(i_val4 + 0x2c) = s_val14 + -1;
        }
      }
      goto LAB_080232b8;
    }
    u_val5 = (uint)*(ushort *)(i_val4 + 0x2c);
    if (u_val5 != 0) {
      u_val5 = u_val5 - 1;
    }
    u_val6 = (uint)*(ushort *)(i_val4 + 0x2e);
    if (u_val6 != 0) {
      u_val6 = u_val6 - 1;
    }
    if (((u_val5 == 0) || (i_val8 == 0)) || (*(ushort *)(i_val8 + 4) != stack_val_30)) {
LAB_0802318c:
      stack_val_58 = (stack_val_58 & 0xFFFF0000 | 0xb4) & 0xFF00FFFF;
      p_uint12 = &stack_val_58;
      goto LAB_0802319e;
    }
    i_val13 = (int)*(short *)((int)entity + 10);
    i_val10 = (int)*(short *)((int)entity + 0xe);
    s_val14 = *(short *)(i_val8 + 10);
    s_val1 = *(short *)(i_val8 + 0xe);
    i_val9 = s_val14 - i_val13;
    if (i_val9 < 0) {
      i_val9 = -i_val9;
    }
    if (i_val9 < 0x10) {
      i_val9 = s_val1 - i_val10;
      if (i_val9 < 0) {
        i_val9 = -i_val9;
      }
      if (i_val9 < 0x10) goto LAB_0802318c;
    }
    if (u_val6 == 0) {
LAB_08023158:
      u_val17 = NPC_Routine_080ABC40(i_val13,i_val10,(int)s_val14,(int)s_val1,&stack_val_ac,
                             *(undefined1 *)(entity + 8));
      Entity_Routine_08023308(entity,1,u_val17);
      i_val9 = NPC_Routine_080AB788(0x1e);
      u_val6 = i_val9 + 1;
      *(short *)(i_val4 + 0x30) = s_val14;
      *(short *)(i_val4 + 0x32) = s_val1;
    }
    else {
      i_val9 = *(short *)(i_val4 + 0x30) - i_val13;
      if (i_val9 < 0) {
        i_val9 = -i_val9;
      }
      if (i_val9 < 0x10) {
        i_val9 = *(short *)(i_val4 + 0x32) - i_val10;
        if (i_val9 < 0) {
          i_val9 = -i_val9;
        }
        if (i_val9 < 0x10) goto LAB_08023158;
      }
    }
    *(short *)(i_val4 + 0x2c) = (short)u_val5;
    *(short *)(i_val4 + 0x2e) = (short)u_val6;
    goto LAB_080232b8;
  }
  if (i_val9 != 0) goto LAB_080232b8;
  s_val14 = *(short *)(i_val4 + 0x2c);
  if (s_val14 == 0) {
    c_char3 = Entity_CanMoveToPosition(entity);
    s_val14 = 0;
    if (c_char3 != '\0') {
      i_val9 = _call_via_r1(p_int16,*(undefined4 *)(*p_int16 + 0x144));
      i_val8 = (uint)(0xe < (*(byte *)(i_val9 + 10) & 0x1f) - 6) * 0xe0 + gRomData_080F0A7C;
      u_val5 = Animal_Routine_0809B50C(i_val4);
      i_val9 = (u_val5 & 0xff) * 0x1c;
      c_char3 = Animal_Routine_0809B8B0(i_val4);
      if (c_char3 == '\0') {
        i_val10 = Animal_Routine_0809BD90(i_val4);
        i_val8 = i_val8 + i_val10 * 0x38 + i_val9;
      }
      else {
        i_val8 = i_val8 + i_val9 + 0xa8;
      }
      i_val9 = NPC_Routine_080AB82C(i_val8,7);
      i_val8 = i_val8 + i_val9 * 4;
      s_val14 = NPC_Routine_080AB788((uint)*(byte *)(i_val8 + 2) * 0x3c);
      s_val14 = (ushort)*(byte *)(i_val8 + 1) * 0x3c + s_val14;
      u_val5 = (uint)*(byte *)(entity + 8);
      i_val8 = NPC_Routine_080AB788(4);
      if ((i_val8 != 0) && (i_val8 != 3)) {
        u_val5 = NPC_Routine_080AB7A4(u_val5);
      }
      Entity_Routine_08023308(entity,i_val9,u_val5);
      *(char *)(i_val4 + 0x2e) = (char)i_val9;
    }
  }
  else {
    i_val9 = entity[6];
    i_val8 = entity[7];
    b_flag2 = false;
    if (i_val9 < 0) {
      if (stack_val_a4 + stack_val_84 < 0 != SCARRY4(stack_val_a4,stack_val_84)) {
        NPC_Routine_080AB948(&stack_val_ac);
      }
      if (stack_val_a4 < -0xf) goto LAB_08022eec;
LAB_08022f40:
      b_flag2 = true;
    }
    else {
LAB_08022eec:
      if (0 < i_val9) {
        if (stack_val_84 < stack_val_a0) {
          NPC_Routine_080AB9C4(&stack_val_ac);
        }
        if (stack_val_a0 < 0x10) goto LAB_08022f40;
      }
      if (i_val8 < 0) {
        if (stack_val_a8 + stack_val_84 < 0 != SCARRY4(stack_val_a8,stack_val_84)) {
          NPC_Routine_080AB8D0(&stack_val_ac);
        }
        if (-0x10 < stack_val_a8) goto LAB_08022f40;
      }
      if (0 < i_val8) {
        if (stack_val_84 < stack_val_ac) {
          NPC_Routine_080AB85C(&stack_val_ac);
        }
        if (stack_val_ac < 0x10) goto LAB_08022f40;
      }
    }
    if (b_flag2) {
      s_val14 = 0;
    }
    else {
      s_val14 = s_val14 + -1;
    }
  }
  *(short *)(i_val4 + 0x2c) = s_val14;
LAB_080232b8:
  Entity_MoveAndCollide(entity,&stack_val_ac);
  *(undefined1 *)(entity + 0xc) = 0;
  if (*(short *)(entity + 9) == 0) {
    *(undefined2 *)(entity + 9) = *(undefined2 *)((int)entity + 0x26);
  }
  else {
    *(short *)(entity + 9) = *(short *)(entity + 9) + -1;
  }
  i_val4 = entity[4];
  if (i_val4 != 0) {
    _call_via_r1(i_val4,*(undefined4 *)(*(int *)(i_val4 + 4) + 0xc));
  }
  return;
}

// =============================================================================
// Function: Entity_Routine_08023308 @ 0x08023308
// =============================================================================
void Entity_Routine_08023308(int entity,uint speed,uint collision)

{
  uint u_val1;
  undefined4 u_val2;
  int i_val3;
  
  u_val1 = Entity_Routine_080233B4();
  if (*(ushort *)(entity + 0x22) != u_val1) {
    Entity_Routine_080321B0(entity);
  }
  if (*(byte *)(entity + 0x20) != collision) {
    Entity_Routine_08032198(entity,collision);
  }
  u_val2 = Entity_Routine_08023400(entity,speed);
  Entity_SetVelocityFromDirection(entity,u_val2);
  if (speed != *(byte *)(entity + 0x38)) {
    i_val3 = -1;
    if (speed == 4) {
      i_val3 = 8;
    }
    if (i_val3 < 0) {
      Entity_Routine_080323C8(entity);
    }
    else {
      Entity_Routine_08032384(entity,i_val3,1);
    }
  }
  *(byte *)(entity + 0x38) = (byte)speed;
  return;
}

// =============================================================================
// Function: Entity_Routine_08023378 @ 0x08023378
// =============================================================================
u32 Entity_Routine_08023378(int entity)

{
  int i_val1;
  uint u_val2;
  int i_val3;
  
  i_val1 = *(int *)(entity + 0x34);
  i_val3 = *(int *)(i_val1 + 0x28);
  if (i_val3 == 1) {
    u_val2 = 1;
    if ((*(byte *)(i_val1 + 0x2e) & 0x7f) != 0) {
      u_val2 = 6;
    }
  }
  else {
    if (i_val3 < 2) {
      if (i_val3 == 0) {
        u_val2 = (uint)*(byte *)(i_val1 + 0x2e);
        goto LAB_080233b0;
      }
    }
    else if (i_val3 < 4) {
      u_val2 = 1;
      goto LAB_080233b0;
    }
    u_val2 = 0;
  }
LAB_080233b0:
  return u_val2;
}

// =============================================================================
// Function: Entity_Routine_080233B4 @ 0x080233B4
// =============================================================================
u32 Entity_Routine_080233B4(int entity,int speed)

{
  int i_val1;
  char c_char2;
  int i_val3;
  uint u_val4;
  
  u_val4 = 0;
  c_char2 = Animal_Routine_0809B8B0(*(undefined4 *)(entity + 0x34));
  if (c_char2 != '\0') {
    u_val4 = Animal_Routine_0809B8BC(*(undefined4 *)(entity + 0x34));
    u_val4 = (-u_val4 | u_val4) >> 0x1f;
  }
  i_val1 = gRomData_080F0C3C;
  if (u_val4 == 0) {
    i_val3 = Animal_Routine_0809BD90(*(undefined4 *)(entity + 0x34));
    i_val3 = speed * 2 + i_val3 * 0xe;
  }
  else {
    i_val3 = speed * 2 + 0x2a;
  }
  return (uint)*(ushort *)(i_val1 + i_val3);
}

// =============================================================================
// Function: Entity_Routine_08023400 @ 0x08023400
// =============================================================================
u32 Entity_Routine_08023400(undefined4 entity,int speed)

{
  undefined4 u_val1;
  
  if (speed == 1) {
    u_val1 = 0x8000;
  }
  else {
    u_val1 = 0;
  }
  return u_val1;
}

// =============================================================================
// Function: Entity_Routine_08023414 @ 0x08023414
// =============================================================================
void Entity_Routine_08023414(int entity,ushort *speed)

{
  char c_char1;
  int i_val2;
  int i_val3;
  uint u_val4;
  undefined4 u_val5;
  int i_val6;
  int i_val7;
  uint u_val8;
  uint temp_buf_20 [2];
  
  if (((*speed & 0x3ff) == *(ushort *)(entity + 4)) &&
     (c_char1 = Animal_Routine_0809B8B0(*(undefined4 *)(entity + 0x34)), c_char1 == '\0')) {
    i_val2 = Animal_Routine_0809B228(*(undefined4 *)(entity + 0x34));
    i_val3 = Entity_InitWorldActors();
    i_val7 = (int)(short)((ushort)((speed[1] & 0x3FF) << 6) |
                        (ushort)(*(byte *)((int)speed + 1) >> 2)) - (int)*(short *)(entity + 10);
    i_val6 = (int)(short)((ushort)((speed[2] & 0x3FF) << 6) |
                        (ushort)(*(byte *)((int)speed + 3) >> 2)) - (int)*(short *)(entity + 0xe)
    ;
    if (i_val7 * i_val7 + i_val6 * i_val6 <= i_val3 * i_val3) {
      c_char1 = Animal_Routine_0809B50C(*(undefined4 *)(entity + 0x34));
      if (c_char1 == '\0') {
        c_char1 = Animal_Routine_0809B504(*(undefined4 *)(entity + 0x34));
        u_val8 = 100;
        if (c_char1 != '\0') {
          u_val8 = 0x46;
        }
      }
      else {
        u_val8 = 0x1e;
      }
      u_val4 = NPC_Routine_080AB788(100);
      if (u_val4 < u_val8) {
        temp_buf_20[0] = ((i_val2 * 0xf & 0x3ffffffU) >> 2) + 0x1e0 & 0xffff;
        BarnAnimal_IsSick(*(undefined4 *)(entity + 0x34),temp_buf_20);
        u_val5 = Entity_Routine_08023378(entity);
        Entity_Routine_08023308(entity,u_val5,*(undefined1 *)(entity + 0x20));
      }
    }
  }
  return;
}

// =============================================================================
// Function: Entity_Routine_080234F8 @ 0x080234F8
// =============================================================================
void Entity_Routine_080234F8(int entity)

{
  undefined4 u_val1;
  uint stack_val_c;
  
  if (*(int *)(*(int *)(entity + 0x34) + 0x28) == 3) {
    stack_val_c = (stack_val_c & 0xFFFF0000 | 0xb4) & 0xFF00FFFF;
    BarnAnimal_GetAffection(*(int *)(entity + 0x34),&stack_val_c);
    u_val1 = Entity_Routine_08023378(entity);
    Entity_Routine_08023308(entity,u_val1,*(undefined1 *)(entity + 0x20));
  }
  return;
}

// =============================================================================
// Function: Entity_Routine_08023570 @ 0x08023570
// =============================================================================
u32 Entity_Routine_08023570(int entity)

{
  undefined4 u_val1;
  
  u_val1 = Animal_Routine_0809B230(*(undefined4 *)(entity + 0x34));
  return (u_val1 ^ 1);
}

// =============================================================================
// Function: Entity_Routine_08023580 @ 0x08023580
// =============================================================================
void Entity_Routine_08023580(int entity)

{
  Animal_Routine_0809BDC0(*(undefined4 *)(entity + 0x34));
  return;
}

// =============================================================================
// Function: Entity_Routine_0802358C @ 0x0802358C
// =============================================================================
void Entity_Routine_0802358C(int entity)

{
  Animal_Routine_0809B50C(*(undefined4 *)(entity + 0x34));
  return;
}

// =============================================================================
// Function: Entity_Routine_08023598 @ 0x08023598
// =============================================================================
u32 Entity_Routine_08023598(int entity)

{
  char c_char1;
  undefined4 u_val2;
  
  u_val2 = 0;
  if (((*(short *)(entity + 4) == 2) &&
      (c_char1 = Animal_Routine_0809B50C(*(undefined4 *)(entity + 0x34)), c_char1 == '\0')) &&
     (c_char1 = Animal_Routine_0809B504(*(undefined4 *)(entity + 0x34)), c_char1 == '\0')) {
    u_val2 = 1;
  }
  return u_val2;
}

// =============================================================================
// Function: Entity_Routine_080235C8 @ 0x080235C8
// =============================================================================
void Entity_Routine_080235C8(int entity)

{
  char c_char1;
  int i_val2;
  undefined4 u_val3;
  uint stack_val_c;
  
  c_char1 = Animal_Routine_0809B8B0(*(undefined4 *)(entity + 0x34));
  if (c_char1 == '\0') {
    i_val2 = NPC_Routine_080AB788(0x78);
    stack_val_c = ((stack_val_c & 0xFFFF0000 | i_val2 + 0xf0U & 0xffff) & 0xFF80FFFF | 0x3c0000) &
               0xFF7FFFFF & 0x00FFFFFF;
    BarnAnimal_SetAffection(*(undefined4 *)(entity + 0x34),&stack_val_c);
    u_val3 = Entity_Routine_08023378(entity);
    Entity_Routine_08023308(entity,u_val3,*(undefined1 *)(entity + 0x20));
  }
  NPC_ReduceFriendship(*(undefined4 *)(entity + 0x34),10);
  Animal_Routine_0809B638(*(undefined4 *)(entity + 0x34));
  Entity_Routine_08032384(entity,0,0);
  Entity_Routine_080200C4(entity,0xa2);
  return;
}

// =============================================================================
// Function: Entity_Routine_08023658 @ 0x08023658
// =============================================================================
void Entity_Routine_08023658(int entity)

{
  
  Animal_Routine_0809B8FC(*(undefined4 *)(entity + 0x34));
  return;
}

// =============================================================================
// Function: Entity_Routine_08023664 @ 0x08023664
// =============================================================================
void Entity_Routine_08023664(int entity)

{
  char c_char1;
  uint u_val2;
  
  c_char1 = Animal_Routine_0809B230(*(undefined4 *)(entity + 0x34));
  if (c_char1 == '\0') {
    NPC_AddFriendship(*(undefined4 *)(entity + 0x34),1);
    NPC_SetTalkedToday(*(undefined4 *)(entity + 0x34));
  }
  c_char1 = Animal_Routine_0809B504(*(undefined4 *)(entity + 0x34));
  if ((c_char1 != '\0') && (u_val2 = NPC_Routine_080AB788(100), u_val2 < 0x1e)) {
    Animal_Routine_0809B644(*(undefined4 *)(entity + 0x34));
  }
  c_char1 = Animal_Routine_0809B50C(*(undefined4 *)(entity + 0x34));
  if (c_char1 == '\0') {
    Entity_Routine_08032384(entity,1,0);
    Entity_Routine_080200C4(entity,0xa1);
  }
  return;
}

// =============================================================================
// Function: Entity_Routine_080236C4 @ 0x080236C4
// =============================================================================
void Entity_Routine_080236C4(int entity)

{
  Entity_Routine_08032384(entity,1,0);
  Entity_Routine_080200C4(entity,0xa1);
  Animal_Routine_0809BE44(*(undefined4 *)(entity + 0x34));
  return;
}

// =============================================================================
// Function: Entity_Routine_080236E4 @ 0x080236E4
// =============================================================================
void Entity_Routine_080236E4(int entity)

{
  char c_char1;
  
  Animal_Routine_0809B624(*(undefined4 *)(entity + 0x34));
  c_char1 = Animal_Routine_0809B504(*(undefined4 *)(entity + 0x34));
  if (c_char1 != '\0') {
    Animal_Routine_0809B644(*(undefined4 *)(entity + 0x34));
  }
  return;
}

// =============================================================================
// Function: Entity_Routine_08023708 @ 0x08023708
// =============================================================================
void Entity_Routine_08023708(int entity)

{
  char c_char1;
  int i_val2;
  undefined4 u_val3;
  uint stack_val_c;
  
  c_char1 = Animal_Routine_0809B8B0(*(undefined4 *)(entity + 0x34));
  if (c_char1 == '\0') {
    i_val2 = NPC_Routine_080AB788(0x78);
    stack_val_c = ((stack_val_c & 0xFFFF0000 | i_val2 + 0xf0U & 0xffff) & 0xFF80FFFF | 0xbc0000) &
               0x00FFFFFF;
    BarnAnimal_SetAffection(*(undefined4 *)(entity + 0x34),&stack_val_c);
    u_val3 = Entity_Routine_08023378(entity);
    Entity_Routine_08023308(entity,u_val3,*(undefined1 *)(entity + 0x20));
  }
  NPC_ReduceFriendship(*(undefined4 *)(entity + 0x34),10);
  Animal_Routine_0809B638(*(undefined4 *)(entity + 0x34));
  Entity_Routine_08032384(entity,0,0);
  Entity_Routine_080200C4(entity,0xa2);
  return;
}

// =============================================================================
// Function: Entity_Routine_08023794 @ 0x08023794
// =============================================================================
void Entity_Routine_08023794(int entity,uint speed,uint collision)

{
  char c_char1;
  undefined4 u_val2;
  uint stack_val_14;
  
  c_char1 = Animal_Routine_0809B8B0(*(undefined4 *)(entity + 0x34));
  if ((c_char1 == '\0') && (0x3b < collision)) {
    if (*(byte *)(entity + 0x20) != speed) {
      Entity_Routine_08032198(entity,speed);
    }
    stack_val_14 = stack_val_14 & 0xFFFF0000 | 0x3c;
    BarnAnimal_SetSick(*(undefined4 *)(entity + 0x34),&stack_val_14);
    u_val2 = Entity_Routine_08023378(entity);
    Entity_Routine_08023308(entity,u_val2,*(byte *)(entity + 0x20));
  }
  return;
}

// =============================================================================
// Function: Entity_Routine_080237F0 @ 0x080237F0
// =============================================================================
u32 Entity_Routine_080237F0(uint entity)

{
  undefined4 u_val1;
  
  if ((entity < 2) || (entity != 2)) {
    u_val1 = 1;
  }
  else {
    u_val1 = 2;
  }
  return u_val1;
}

// =============================================================================
// Function: Entity_Routine_08023804 @ 0x08023804
// =============================================================================
u32 Entity_Routine_08023804(int entity)

{
  undefined4 u_val1;
  
  if (entity == 1) {
    u_val1 = 0xb;
  }
  else if ((entity == 0) || (entity != 2)) {
    u_val1 = 9;
  }
  else {
    u_val1 = 0xc;
  }
  return u_val1;
}

// =============================================================================
// Function: Entity_Routine_08023820 @ 0x08023820
// =============================================================================
u32 Entity_Routine_08023820(int entity)

{
  undefined4 u_val1;
  undefined4 u_val2;
  undefined4 u_val3;
  int i_val4;
  
  u_val1 = Animal_Routine_0809BD90(*(undefined4 *)(entity + 0x34));
  u_val2 = CppRuntime_OperatorNewArray(0x8c);
  u_val3 = Entity_Routine_080237F0(u_val1);
  u_val1 = Entity_Routine_08023804(u_val1);
  i_val4 = Entity_Routine_080324BC(u_val2,entity,4,0xc,u_val3,u_val1,0,0);
  if (*(char *)(entity + 0x38) == '\x04') {
    Animal_Routine_0805E860(i_val4 + 0x70,8);
    *(undefined1 *)(i_val4 + 0x84) = 1;
    *(undefined1 *)(i_val4 + 0x86) = 0;
    *(undefined1 *)(i_val4 + 0x87) = 1;
    *(byte *)(i_val4 + 0x8a) = *(byte *)(i_val4 + 0x8a) & 0xfc | 2;
  }
  return i_val4;
}

// =============================================================================
// Function: Entity_Routine_080238A8 @ 0x080238A8
// =============================================================================
u32 Entity_Routine_080238A8(int entity,undefined4 speed,undefined4 collision)

{
  undefined4 u_val1;
  undefined1 temp_buf_18 [8];
  
  Actor_CopyLocation2(temp_buf_18,collision);
  Entity_ResetMotionState(entity,speed,temp_buf_18,0x921);
  *(undefined4 *)(entity + 0x14) = gRomData_080E6284;
  *(undefined4 *)(entity + 0x34) = collision;
  u_val1 = Entity_Routine_08024020(entity);
  Entity_Routine_08023FB0(entity,u_val1,*(undefined1 *)(entity + 0x20));
  return entity;
}

// =============================================================================
// Function: Entity_Routine_08023948 @ 0x08023948
// =============================================================================
void Entity_Routine_08023948(int entity,uint speed)

{
  undefined4 u_val1;
  uint stack_val_c;
  
  stack_val_c = (stack_val_c & 0xFFFF0000 | speed & 0xffff) & 0xFF00FFFF;
  BarnAnimal_GetAffection(*(undefined4 *)(entity + 0x34),&stack_val_c);
  u_val1 = Entity_Routine_08024020(entity);
  Entity_Routine_08023FB0(entity,u_val1,*(undefined1 *)(entity + 0x20));
  return;
}

// =============================================================================
// Function: Entity_Routine_0802398C @ 0x0802398C
// =============================================================================
void Entity_Routine_0802398C(undefined4 *entity,int speed)

{
  short s_val1;
  bool b_flag2;
  char c_char3;
  int i_val4;
  uint u_val5;
  uint u_val6;
  int *p_int7;
  int i_val8;
  int i_val9;
  int i_val10;
  undefined4 u_val11;
  uint *p_uint12;
  int i_val13;
  short s_val14;
  uint u_val15;
  int *p_int16;
  undefined4 u_val17;
  undefined4 stack_val_b8;
  undefined4 stack_val_b4;
  undefined4 stack_val_b0;
  int stack_val_ac;
  int stack_val_a8;
  int stack_val_a4;
  int stack_val_a0;
  undefined4 stack_val_98;
  undefined4 stack_val_94;
  undefined4 stack_val_90;
  undefined4 stack_val_8c;
  undefined4 stack_val_88;
  int stack_val_84;
  undefined4 stack_val_80;
  undefined4 stack_val_7c;
  undefined2 stack_val_78;
  undefined2 stack_val_76;
  undefined4 stack_val_74;
  undefined4 stack_val_70;
  undefined1 stack_buf_6c [8];
  undefined1 stack_buf_64 [8];
  uint stack_val_5c;
  uint stack_val_58;
  undefined4 stack_val_54;
  undefined4 stack_val_50;
  undefined4 stack_val_4c;
  undefined4 stack_val_48;
  undefined4 stack_val_44;
  undefined4 stack_val_40;
  undefined4 stack_val_3c;
  undefined4 stack_val_38;
  uint stack_val_34;
  uint stack_val_30;
  undefined2 *puStack_2c;
  undefined4 stack_val_28;
  undefined4 stack_val_24;
  
  p_int16 = (int *)*entity;
  i_val4 = entity[0xd];
  stack_val_30 = (uint)*(ushort *)(entity + 1);
  if ((stack_val_30 == 2) && (*(char *)(speed + 4) != '\0')) {
    u_val5 = Animal_Routine_0809B51C(i_val4);
    Animal_Routine_0809B57C(i_val4,1);
    u_val6 = Animal_Routine_0809B51C(i_val4);
    if ((u_val5 < 0xb4) &&
       (((0xb3 < u_val6 &&
         (p_int7 = (int *)_call_via_r1(p_int16,*(undefined4 *)(*p_int16 + 0x144)), *p_int7 != 0))
        && (c_char3 = Animal_Routine_0809B504(i_val4), c_char3 == '\0')))) {
      Animal_Routine_0809B638(i_val4);
    }
    if ((u_val5 < 0xf0) && (0xef < u_val6)) {
      stack_val_78 = *(undefined2 *)((int)entity + 10);
      stack_val_76 = *(undefined2 *)((int)entity + 0xe);
      c_char3 = _call_via_r2(p_int16,&stack_val_78,*(undefined4 *)(*p_int16 + 0x108));
      if (c_char3 != '\0') {
        Animal_Routine_0809B8F0(i_val4);
      }
    }
    if (((u_val5 <= 0x12B) && (0x12B < u_val6)) &&
       (p_int7 = (int *)_call_via_r1(p_int16,*(undefined4 *)(*p_int16 + 0x144)), *p_int7 == 0)) {
      c_char3 = Animal_Routine_0809B504(i_val4);
      if ((c_char3 != '\0') && (u_val5 = NPC_Routine_080AB788(100), u_val5 < 0x1e)) {
        Animal_Routine_0809B644(i_val4);
      }
      NPC_AddFriendship(i_val4,1);
    }
  }
  _call_via_r3(&stack_val_b8,p_int16,stack_val_30,*(undefined4 *)(*p_int16 + 0x34));
  _call_via_r2(&stack_val_74,entity,*(undefined4 *)(entity[5] + 0xc));
  stack_val_28 = stack_val_74;
  stack_val_24 = stack_val_70;
  stack_val_ac = 0x11;
  stack_val_a8 = -0x11;
  stack_val_a4 = -0x11;
  stack_val_a0 = 0x11;
  stack_val_98 = stack_val_b8;
  stack_val_94 = stack_val_b4;
  stack_val_90 = stack_val_b0;
  stack_val_8c = stack_val_74;
  stack_val_88 = stack_val_70;
  stack_val_84 = 0x10;
  stack_val_80 = 0;
  stack_val_7c = 0;
  i_val8 = _call_via_r2(p_int16,0,*(undefined4 *)(*p_int16 + 0x40));
  i_val9 = _call_via_r2(p_int16,0x4a,*(undefined4 *)(*p_int16 + 0x40));
  if ((i_val8 != 0) && (*(ushort *)(i_val8 + 4) == stack_val_30)) {
    _call_via_r2(stack_buf_6c,i_val8,*(undefined4 *)(*(int *)(i_val8 + 0x14) + 0xc));
    NPC_Routine_080ABA90(&stack_val_ac,stack_buf_6c,0);
  }
  if ((i_val9 != 0) && (*(ushort *)(i_val9 + 4) == stack_val_30)) {
    _call_via_r2(stack_buf_64,i_val9,*(undefined4 *)(*(int *)(i_val9 + 0x14) + 0xc));
    NPC_Routine_080ABA90(&stack_val_ac,stack_buf_64,0);
  }
  i_val9 = *(int *)(i_val4 + 0x28);
  if (i_val9 == 1) {
    puStack_2c = (undefined2 *)(i_val4 + 0x2c);
    u_val5 = (uint)*(ushort *)(i_val4 + 0x2c);
    if (u_val5 != 0) {
      u_val5 = u_val5 - 1;
    }
    u_val6 = (*(uint *)(i_val4 + 0x2c) & 0x7fffff) >> 0x10;
    if (u_val6 != 0) {
      u_val6 = u_val6 - 1;
    }
    u_val15 = (uint)*(byte *)(i_val4 + 0x2f);
    if (u_val15 != 0) {
      u_val15 = u_val15 - 1;
    }
    if (u_val5 != 0) {
      if ((int)(*(uint *)(i_val4 + 0x2c) * 0x100) < 0) {
        i_val8 = _call_via_r2(p_int16,0x2d,*(undefined4 *)(*p_int16 + 0x40));
      }
      if ((i_val8 != 0) && (*(ushort *)(i_val8 + 4) == stack_val_30)) {
        if (u_val15 == 0) {
          u_val17 = 1;
          if (u_val6 != 0) {
            u_val17 = 6;
          }
          u_val11 = NPC_Routine_080ABE58((int)*(short *)((int)entity + 10),
                                 (int)*(short *)((int)entity + 0xe),(int)*(short *)(i_val8 + 10),
                                 (int)*(short *)(i_val8 + 0xe),&stack_val_ac,
                                 *(undefined1 *)(entity + 8));
          Entity_Routine_08023FB0(entity,u_val17,u_val11);
          i_val4 = NPC_Routine_080AB788(0x1e);
          u_val15 = i_val4 + 1;
        }
        *puStack_2c = (short)u_val5;
        *(byte *)(puStack_2c + 1) = *(byte *)(puStack_2c + 1) & 0x80 | (byte)u_val6 & 0x7f;
        *(char *)((int)puStack_2c + 3) = (char)u_val15;
        goto LAB_08023f60;
      }
    }
    stack_val_5c = (stack_val_5c & 0xFFFF0000 | 0xb4) & 0xFF00FFFF;
    p_uint12 = &stack_val_5c;
LAB_08023e46:
    BarnAnimal_GetAffection(i_val4,p_uint12);
    u_val17 = Entity_Routine_08024020(entity);
    Entity_Routine_08023FB0(entity,u_val17,*(undefined1 *)(entity + 8));
    goto LAB_08023f60;
  }
  if (1 < i_val9) {
    if (i_val9 != 2) {
      if (i_val9 == 3) {
        c_char3 = *(char *)(entity + 8);
        s_val14 = *(short *)((int)entity + 10);
        s_val1 = *(short *)((int)entity + 0xe);
        if ((stack_val_30 == 0x25) && (c_char3 == '\0')) {
          Building_Routine_0800CE58(&stack_val_54);
          stack_val_50 = stack_val_54;
          u_val17 = stack_val_50;
          stack_val_50._2_2_ = (short)((uint)stack_val_54 >> 0x10);
          i_val9 = (int)stack_val_50._2_2_ - (s_val1 + -8);
          if (i_val9 < 0) {
            i_val9 = -i_val9;
          }
          stack_val_50 = u_val17;
          if (i_val9 < 8) {
            Farm_GetSpawnCoordinates(&stack_val_4c);
            stack_val_48 = stack_val_4c;
            u_val17 = stack_val_48;
            stack_val_48._0_2_ = (short)stack_val_4c;
            i_val9 = (int)(short)stack_val_48;
            stack_val_48._2_2_ = (short)((uint)stack_val_4c >> 0x10);
            i_val8 = (int)stack_val_48._2_2_;
            stack_val_48 = u_val17;
            Farmer_Routine_0801FE78(entity,2,i_val9,i_val8 + 0x10);
          }
        }
        else if ((stack_val_30 == 2) && (c_char3 == '\x01')) {
          Farm_GetSpawnCoordinates(&stack_val_44);
          stack_val_40 = stack_val_44;
          u_val17 = stack_val_40;
          stack_val_40._0_2_ = (short)stack_val_44;
          i_val9 = (int)(short)stack_val_40 - (int)s_val14;
          if (i_val9 < 0) {
            i_val9 = -i_val9;
          }
          stack_val_40 = u_val17;
          if (i_val9 < 0x10) {
            stack_val_40._2_2_ = (short)((uint)stack_val_44 >> 0x10);
            i_val9 = (int)stack_val_40._2_2_ - (s_val1 + 8);
            if (i_val9 < 0) {
              i_val9 = -i_val9;
            }
            if (i_val9 < 8) {
              Building_Routine_0800CE58(&stack_val_3c);
              stack_val_38 = stack_val_3c;
              u_val17 = stack_val_38;
              stack_val_38._0_2_ = (short)stack_val_3c;
              i_val9 = (int)(short)stack_val_38;
              stack_val_38._2_2_ = (short)((uint)stack_val_3c >> 0x10);
              i_val8 = (int)stack_val_38._2_2_;
              stack_val_38 = u_val17;
              Farmer_Routine_0801FE78(entity,0x25,i_val9,i_val8 + -0x20);
              Animal_Routine_0809B608(i_val4);
            }
          }
        }
        s_val14 = *(short *)(i_val4 + 0x2c);
        if (s_val14 == 0) {
          stack_val_34 = (stack_val_34 & 0xFFFF0000 | 0xb4) & 0xFF00FFFF;
          BarnAnimal_GetAffection(i_val4);
          u_val17 = Entity_Routine_08024020(entity);
          Entity_Routine_08023FB0(entity,u_val17,*(char *)(entity + 8));
        }
        else {
          *(short *)(i_val4 + 0x2c) = s_val14 + -1;
        }
      }
      goto LAB_08023f60;
    }
    u_val5 = (uint)*(ushort *)(i_val4 + 0x2c);
    if (u_val5 != 0) {
      u_val5 = u_val5 - 1;
    }
    u_val6 = (uint)*(ushort *)(i_val4 + 0x2e);
    if (u_val6 != 0) {
      u_val6 = u_val6 - 1;
    }
    if (((u_val5 == 0) || (i_val8 == 0)) || (*(ushort *)(i_val8 + 4) != stack_val_30)) {
LAB_08023e34:
      stack_val_58 = (stack_val_58 & 0xFFFF0000 | 0xb4) & 0xFF00FFFF;
      p_uint12 = &stack_val_58;
      goto LAB_08023e46;
    }
    i_val13 = (int)*(short *)((int)entity + 10);
    i_val10 = (int)*(short *)((int)entity + 0xe);
    s_val14 = *(short *)(i_val8 + 10);
    s_val1 = *(short *)(i_val8 + 0xe);
    i_val9 = s_val14 - i_val13;
    if (i_val9 < 0) {
      i_val9 = -i_val9;
    }
    if (i_val9 < 0x10) {
      i_val9 = s_val1 - i_val10;
      if (i_val9 < 0) {
        i_val9 = -i_val9;
      }
      if (i_val9 < 0x10) goto LAB_08023e34;
    }
    if (u_val6 == 0) {
LAB_08023e00:
      u_val17 = NPC_Routine_080ABC40(i_val13,i_val10,(int)s_val14,(int)s_val1,&stack_val_ac,
                             *(undefined1 *)(entity + 8));
      Entity_Routine_08023FB0(entity,1,u_val17);
      i_val9 = NPC_Routine_080AB788(0x1e);
      u_val6 = i_val9 + 1;
      *(short *)(i_val4 + 0x30) = s_val14;
      *(short *)(i_val4 + 0x32) = s_val1;
    }
    else {
      i_val9 = *(short *)(i_val4 + 0x30) - i_val13;
      if (i_val9 < 0) {
        i_val9 = -i_val9;
      }
      if (i_val9 < 0x10) {
        i_val9 = *(short *)(i_val4 + 0x32) - i_val10;
        if (i_val9 < 0) {
          i_val9 = -i_val9;
        }
        if (i_val9 < 0x10) goto LAB_08023e00;
      }
    }
    *(short *)(i_val4 + 0x2c) = (short)u_val5;
    *(short *)(i_val4 + 0x2e) = (short)u_val6;
    goto LAB_08023f60;
  }
  if (i_val9 != 0) goto LAB_08023f60;
  s_val14 = *(short *)(i_val4 + 0x2c);
  if (s_val14 == 0) {
    c_char3 = Entity_CanMoveToPosition(entity);
    s_val14 = 0;
    if (c_char3 != '\0') {
      i_val9 = _call_via_r1(p_int16,*(undefined4 *)(*p_int16 + 0x144));
      i_val8 = (uint)(0xe < (*(byte *)(i_val9 + 10) & 0x1f) - 6) * 0xe0 + gRomData_080F0C74;
      u_val5 = Animal_Routine_0809B50C(i_val4);
      i_val9 = (u_val5 & 0xff) * 0x1c;
      c_char3 = Animal_Routine_0809B8B0(i_val4);
      if (c_char3 == '\0') {
        c_char3 = Animal_Routine_0809BF00(i_val4);
        if (c_char3 == '\0') {
          i_val10 = Animal_Routine_0809BEDC(i_val4);
          i_val8 = i_val8 + i_val10 * 0x38 + i_val9;
        }
        else {
          i_val8 = i_val8 + i_val9 + 0x70;
        }
      }
      else {
        i_val8 = i_val8 + i_val9 + 0xa8;
      }
      i_val9 = NPC_Routine_080AB82C(i_val8,7);
      i_val8 = i_val8 + i_val9 * 4;
      s_val14 = NPC_Routine_080AB788((uint)*(byte *)(i_val8 + 2) * 0x3c);
      s_val14 = (ushort)*(byte *)(i_val8 + 1) * 0x3c + s_val14;
      u_val5 = (uint)*(byte *)(entity + 8);
      i_val8 = NPC_Routine_080AB788(4);
      if ((i_val8 != 0) && (i_val8 != 3)) {
        u_val5 = NPC_Routine_080AB7A4(u_val5);
      }
      Entity_Routine_08023FB0(entity,i_val9,u_val5);
      *(char *)(i_val4 + 0x2e) = (char)i_val9;
    }
  }
  else {
    i_val9 = entity[6];
    i_val8 = entity[7];
    b_flag2 = false;
    if (i_val9 < 0) {
      if (stack_val_a4 + stack_val_84 < 0 != SCARRY4(stack_val_a4,stack_val_84)) {
        NPC_Routine_080AB948(&stack_val_ac);
      }
      if (stack_val_a4 < -0xf) goto LAB_08023b80;
LAB_08023bd4:
      b_flag2 = true;
    }
    else {
LAB_08023b80:
      if (0 < i_val9) {
        if (stack_val_84 < stack_val_a0) {
          NPC_Routine_080AB9C4(&stack_val_ac);
        }
        if (stack_val_a0 < 0x10) goto LAB_08023bd4;
      }
      if (i_val8 < 0) {
        if (stack_val_a8 + stack_val_84 < 0 != SCARRY4(stack_val_a8,stack_val_84)) {
          NPC_Routine_080AB8D0(&stack_val_ac);
        }
        if (-0x10 < stack_val_a8) goto LAB_08023bd4;
      }
      if (0 < i_val8) {
        if (stack_val_84 < stack_val_ac) {
          NPC_Routine_080AB85C(&stack_val_ac);
        }
        if (stack_val_ac < 0x10) goto LAB_08023bd4;
      }
    }
    if (b_flag2) {
      s_val14 = 0;
    }
    else {
      s_val14 = s_val14 + -1;
    }
  }
  *(short *)(i_val4 + 0x2c) = s_val14;
LAB_08023f60:
  Entity_MoveAndCollide(entity,&stack_val_ac);
  *(undefined1 *)(entity + 0xc) = 0;
  if (*(short *)(entity + 9) == 0) {
    *(undefined2 *)(entity + 9) = *(undefined2 *)((int)entity + 0x26);
  }
  else {
    *(short *)(entity + 9) = *(short *)(entity + 9) + -1;
  }
  i_val4 = entity[4];
  if (i_val4 != 0) {
    _call_via_r1(i_val4,*(undefined4 *)(*(int *)(i_val4 + 4) + 0xc));
  }
  return;
}

// =============================================================================
// Function: Entity_Routine_08023FB0 @ 0x08023FB0
// =============================================================================
void Entity_Routine_08023FB0(int entity,uint speed,uint collision)

{
  uint u_val1;
  undefined4 u_val2;
  int i_val3;
  
  u_val1 = Entity_Routine_0802405C();
  if (*(ushort *)(entity + 0x22) != u_val1) {
    Entity_Routine_080321B0(entity);
  }
  if (*(byte *)(entity + 0x20) != collision) {
    Entity_Routine_08032198(entity,collision);
  }
  u_val2 = Entity_Routine_080240BC(entity,speed);
  Entity_SetVelocityFromDirection(entity,u_val2);
  if (speed != *(byte *)(entity + 0x38)) {
    i_val3 = -1;
    if (speed == 4) {
      i_val3 = 8;
    }
    if (i_val3 < 0) {
      Entity_Routine_080323C8(entity);
    }
    else {
      Entity_Routine_08032384(entity,i_val3,1);
    }
  }
  *(byte *)(entity + 0x38) = (byte)speed;
  return;
}

// =============================================================================
// Function: Entity_Routine_08024020 @ 0x08024020
// =============================================================================
u32 Entity_Routine_08024020(int entity)

{
  int i_val1;
  uint u_val2;
  int i_val3;
  
  i_val1 = *(int *)(entity + 0x34);
  i_val3 = *(int *)(i_val1 + 0x28);
  if (i_val3 == 1) {
    u_val2 = 1;
    if ((*(byte *)(i_val1 + 0x2e) & 0x7f) != 0) {
      u_val2 = 6;
    }
  }
  else {
    if (i_val3 < 2) {
      if (i_val3 == 0) {
        u_val2 = (uint)*(byte *)(i_val1 + 0x2e);
        goto LAB_08024058;
      }
    }
    else if (i_val3 < 4) {
      u_val2 = 1;
      goto LAB_08024058;
    }
    u_val2 = 0;
  }
LAB_08024058:
  return u_val2;
}

// =============================================================================
// Function: Entity_Routine_0802405C @ 0x0802405C
// =============================================================================
u32 Entity_Routine_0802405C(int entity,int speed)

{
  int i_val1;
  char c_char2;
  int i_val3;
  uint u_val4;
  
  u_val4 = 0;
  c_char2 = Animal_Routine_0809B8B0(*(undefined4 *)(entity + 0x34));
  if (c_char2 != '\0') {
    u_val4 = Animal_Routine_0809B8BC(*(undefined4 *)(entity + 0x34));
    u_val4 = (-u_val4 | u_val4) >> 0x1f;
  }
  i_val1 = gRomData_080F0E34;
  speed = speed * 2;
  if (u_val4 == 0) {
    c_char2 = Animal_Routine_0809BF00(*(undefined4 *)(entity + 0x34));
    if (c_char2 == '\0') {
      i_val3 = Animal_Routine_0809BEDC(*(undefined4 *)(entity + 0x34));
      speed = speed + i_val3 * 0xe;
    }
    else {
      speed = speed + 0x1c;
    }
  }
  else {
    speed = speed + 0x2a;
  }
  return (uint)*(ushort *)(i_val1 + speed);
}

// =============================================================================
// Function: Entity_Routine_080240BC @ 0x080240BC
// =============================================================================
u32 Entity_Routine_080240BC(undefined4 entity,int speed)

{
  undefined4 u_val1;
  
  if (speed == 1) {
    u_val1 = 0x8000;
  }
  else {
    u_val1 = 0;
  }
  return u_val1;
}

// =============================================================================
// Function: Entity_Routine_080240D0 @ 0x080240D0
// =============================================================================
void Entity_Routine_080240D0(int entity,ushort *speed)

{
  char c_char1;
  int i_val2;
  uint u_val3;
  undefined4 u_val4;
  int i_val5;
  int i_val6;
  uint u_val7;
  uint stack_buf_1c [2];
  
  if (((*speed & 0x3ff) == *(ushort *)(entity + 4)) &&
     (c_char1 = Animal_Routine_0809B8B0(*(undefined4 *)(entity + 0x34)), c_char1 == '\0')) {
    Animal_Routine_0809B228(*(undefined4 *)(entity + 0x34));
    i_val2 = Entity_InitWorldActors();
    i_val6 = (int)(short)((ushort)((speed[1] & 0x3FF) << 6) |
                        (ushort)(*(byte *)((int)speed + 1) >> 2)) - (int)*(short *)(entity + 10);
    i_val5 = (int)(short)((ushort)((speed[2] & 0x3FF) << 6) |
                        (ushort)(*(byte *)((int)speed + 3) >> 2)) - (int)*(short *)(entity + 0xe)
    ;
    if (i_val6 * i_val6 + i_val5 * i_val5 <= i_val2 * i_val2) {
      c_char1 = Animal_Routine_0809B50C(*(undefined4 *)(entity + 0x34));
      if (c_char1 == '\0') {
        c_char1 = Animal_Routine_0809B504(*(undefined4 *)(entity + 0x34));
        u_val7 = 100;
        if (c_char1 != '\0') {
          u_val7 = 0x46;
        }
      }
      else {
        u_val7 = 0x1e;
      }
      u_val3 = NPC_Routine_080AB788(100);
      if (u_val3 < u_val7) {
        i_val2 = Animal_Routine_0809B228(*(undefined4 *)(entity + 0x34));
        stack_buf_1c[0] = ((uint)(i_val2 * 0x3c0) >> 8) + 0x1e0 & 0xffff;
        BarnAnimal_IsSick(*(undefined4 *)(entity + 0x34),stack_buf_1c);
        u_val4 = Entity_Routine_08024020(entity);
        Entity_Routine_08023FB0(entity,u_val4,*(undefined1 *)(entity + 0x20));
      }
    }
  }
  return;
}

// =============================================================================
// Function: Entity_Routine_080241AC @ 0x080241AC
// =============================================================================
void Entity_Routine_080241AC(int entity)

{
  undefined4 u_val1;
  uint stack_val_c;
  
  if (*(int *)(*(int *)(entity + 0x34) + 0x28) == 3) {
    stack_val_c = (stack_val_c & 0xFFFF0000 | 0xb4) & 0xFF00FFFF;
    BarnAnimal_GetAffection(*(int *)(entity + 0x34),&stack_val_c);
    u_val1 = Entity_Routine_08024020(entity);
    Entity_Routine_08023FB0(entity,u_val1,*(undefined1 *)(entity + 0x20));
  }
  return;
}

// =============================================================================
// Function: Entity_Routine_08024224 @ 0x08024224
// =============================================================================
u32 Entity_Routine_08024224(int entity)

{
  undefined4 u_val1;
  
  u_val1 = Animal_Routine_0809B230(*(undefined4 *)(entity + 0x34));
  return (u_val1 ^ 1);
}

// =============================================================================
// Function: Entity_Routine_08024234 @ 0x08024234
// =============================================================================
void Entity_Routine_08024234(int entity)

{
  Animal_Routine_0809BF18(*(undefined4 *)(entity + 0x34));
  return;
}

// =============================================================================
// Function: Entity_Routine_08024240 @ 0x08024240
// =============================================================================
void Entity_Routine_08024240(int entity)

{
  Animal_Routine_0809B50C(*(undefined4 *)(entity + 0x34));
  return;
}

// =============================================================================
// Function: Entity_Routine_0802424C @ 0x0802424C
// =============================================================================
u32 Entity_Routine_0802424C(int entity)

{
  char c_char1;
  undefined4 u_val2;
  
  u_val2 = 0;
  if (((*(short *)(entity + 4) == 2) &&
      (c_char1 = Animal_Routine_0809B50C(*(undefined4 *)(entity + 0x34)), c_char1 == '\0')) &&
     (c_char1 = Animal_Routine_0809B504(*(undefined4 *)(entity + 0x34)), c_char1 == '\0')) {
    u_val2 = 1;
  }
  return u_val2;
}

// =============================================================================
// Function: Entity_Routine_0802427C @ 0x0802427C
// =============================================================================
void Entity_Routine_0802427C(int entity)

{
  char c_char1;
  int i_val2;
  undefined4 u_val3;
  uint stack_val_c;
  
  c_char1 = Animal_Routine_0809B8B0(*(undefined4 *)(entity + 0x34));
  if (c_char1 == '\0') {
    i_val2 = NPC_Routine_080AB788(0x78);
    stack_val_c = ((stack_val_c & 0xFFFF0000 | i_val2 + 0xf0U & 0xffff) & 0xFF80FFFF | 0x3c0000) &
               0xFF7FFFFF & 0x00FFFFFF;
    BarnAnimal_SetAffection(*(undefined4 *)(entity + 0x34),&stack_val_c);
    u_val3 = Entity_Routine_08024020(entity);
    Entity_Routine_08023FB0(entity,u_val3,*(undefined1 *)(entity + 0x20));
  }
  NPC_ReduceFriendship(*(undefined4 *)(entity + 0x34),10);
  Animal_Routine_0809B638(*(undefined4 *)(entity + 0x34));
  Entity_Routine_08032384(entity,0,0);
  Entity_Routine_080200C4(entity,0xa4);
  return;
}

// =============================================================================
// Function: Entity_Routine_0802430C @ 0x0802430C
// =============================================================================
void Entity_Routine_0802430C(int entity)

{
  
  Animal_Routine_0809B8FC(*(undefined4 *)(entity + 0x34));
  return;
}

// =============================================================================
// Function: Entity_Routine_08024318 @ 0x08024318
// =============================================================================
void Entity_Routine_08024318(int entity)

{
  char c_char1;
  uint u_val2;
  
  c_char1 = Animal_Routine_0809B230(*(undefined4 *)(entity + 0x34));
  if (c_char1 == '\0') {
    NPC_AddFriendship(*(undefined4 *)(entity + 0x34),1);
    NPC_SetTalkedToday(*(undefined4 *)(entity + 0x34));
  }
  c_char1 = Animal_Routine_0809B504(*(undefined4 *)(entity + 0x34));
  if ((c_char1 != '\0') && (u_val2 = NPC_Routine_080AB788(100), u_val2 < 0x1e)) {
    Animal_Routine_0809B644(*(undefined4 *)(entity + 0x34));
  }
  c_char1 = Animal_Routine_0809B50C(*(undefined4 *)(entity + 0x34));
  if (c_char1 == '\0') {
    Entity_Routine_08032384(entity,1,0);
    Entity_Routine_080200C4(entity,0xa3);
  }
  return;
}

// =============================================================================
// Function: Entity_Routine_08024378 @ 0x08024378
// =============================================================================
u32 Entity_Routine_08024378(int entity)

{
  undefined4 u_val1;
  uint u_val2;
  
  Entity_Routine_08032384(entity,1,0);
  Entity_Routine_080200C4(entity,0xa3);
  u_val1 = Animal_Routine_0809BF84(*(undefined4 *)(entity + 0x34));
  u_val2 = Entity_Routine_0802405C(entity,*(undefined1 *)(entity + 0x38));
  if (*(ushort *)(entity + 0x22) != u_val2) {
    Entity_Routine_080321B0(entity);
  }
  return u_val1;
}

// =============================================================================
// Function: Entity_Routine_080243B8 @ 0x080243B8
// =============================================================================
void Entity_Routine_080243B8(int entity)

{
  char c_char1;
  
  Animal_Routine_0809B624(*(undefined4 *)(entity + 0x34));
  c_char1 = Animal_Routine_0809B504(*(undefined4 *)(entity + 0x34));
  if (c_char1 != '\0') {
    Animal_Routine_0809B644(*(undefined4 *)(entity + 0x34));
  }
  return;
}

// =============================================================================
// Function: Entity_Routine_080243DC @ 0x080243DC
// =============================================================================
void Entity_Routine_080243DC(int entity)

{
  char c_char1;
  int i_val2;
  undefined4 u_val3;
  uint stack_val_c;
  
  c_char1 = Animal_Routine_0809B8B0(*(undefined4 *)(entity + 0x34));
  if (c_char1 == '\0') {
    i_val2 = NPC_Routine_080AB788(0x78);
    stack_val_c = ((stack_val_c & 0xFFFF0000 | i_val2 + 0xf0U & 0xffff) & 0xFF80FFFF | 0xbc0000) &
               0x00FFFFFF;
    BarnAnimal_SetAffection(*(undefined4 *)(entity + 0x34),&stack_val_c);
    u_val3 = Entity_Routine_08024020(entity);
    Entity_Routine_08023FB0(entity,u_val3,*(undefined1 *)(entity + 0x20));
  }
  NPC_ReduceFriendship(*(undefined4 *)(entity + 0x34),10);
  Animal_Routine_0809B638(*(undefined4 *)(entity + 0x34));
  Entity_Routine_08032384(entity,0,0);
  Entity_Routine_080200C4(entity,0xa4);
  return;
}

// =============================================================================
// Function: Entity_Routine_08024468 @ 0x08024468
// =============================================================================
void Entity_Routine_08024468(int entity,uint speed,uint collision)

{
  char c_char1;
  undefined4 u_val2;
  uint stack_val_14;
  
  c_char1 = Animal_Routine_0809B8B0(*(undefined4 *)(entity + 0x34));
  if ((c_char1 == '\0') && (0x3b < collision)) {
    if (*(byte *)(entity + 0x20) != speed) {
      Entity_Routine_08032198(entity,speed);
    }
    stack_val_14 = stack_val_14 & 0xFFFF0000 | 0x3c;
    BarnAnimal_SetSick(*(undefined4 *)(entity + 0x34),&stack_val_14);
    u_val2 = Entity_Routine_08024020(entity);
    Entity_Routine_08023FB0(entity,u_val2,*(byte *)(entity + 0x20));
  }
  return;
}

// =============================================================================
// Function: Entity_Routine_080244C4 @ 0x080244C4
// =============================================================================
u32 Entity_Routine_080244C4(int entity)

{
  undefined4 u_val1;
  
  if ((entity == 0) || (entity != 1)) {
    u_val1 = 1;
  }
  else {
    u_val1 = 2;
  }
  return u_val1;
}

// =============================================================================
// Function: Entity_Routine_080244D8 @ 0x080244D8
// =============================================================================
u32 Entity_Routine_080244D8(int entity)

{
  undefined4 u_val1;
  
  if ((entity == 0) || (entity != 1)) {
    u_val1 = 10;
  }
  else {
    u_val1 = 0xd;
  }
  return u_val1;
}

// =============================================================================
// Function: Entity_Routine_080244EC @ 0x080244EC
// =============================================================================
u32 Entity_Routine_080244EC(int entity)

{
  undefined4 u_val1;
  undefined4 u_val2;
  undefined4 u_val3;
  int i_val4;
  
  u_val1 = Animal_Routine_0809BEDC(*(undefined4 *)(entity + 0x34));
  u_val2 = CppRuntime_OperatorNewArray(0x8c);
  u_val3 = Entity_Routine_080244C4(u_val1);
  u_val1 = Entity_Routine_080244D8(u_val1);
  i_val4 = Entity_Routine_080324BC(u_val2,entity,4,0xb,u_val3,u_val1,0,0);
  if (*(char *)(entity + 0x38) == '\x04') {
    Animal_Routine_0805E860(i_val4 + 0x70,8);
    *(undefined1 *)(i_val4 + 0x84) = 1;
    *(undefined1 *)(i_val4 + 0x86) = 0;
    *(undefined1 *)(i_val4 + 0x87) = 1;
    *(byte *)(i_val4 + 0x8a) = *(byte *)(i_val4 + 0x8a) & 0xfc | 2;
  }
  return i_val4;
}

// =============================================================================
// Function: Entity_Routine_0802459C @ 0x0802459C
// =============================================================================
void Entity_Routine_0802459C(int entity)

{
  short s_val1;
  int i_val2;
  
  *(undefined1 *)(entity + 0x30) = 0;
  if (*(short *)(entity + 0x24) == 0) {
    s_val1 = *(short *)(entity + 0x26);
  }
  else {
    s_val1 = *(short *)(entity + 0x24) + -1;
  }
  *(short *)(entity + 0x24) = s_val1;
  i_val2 = *(int *)(entity + 0x10);
  if (i_val2 != 0) {
    _call_via_r1(i_val2,*(undefined4 *)(*(int *)(i_val2 + 4) + 0xc));
  }
  return;
}

// =============================================================================
// Function: Entity_Routine_080245E0 @ 0x080245E0
// =============================================================================
u32 Entity_Routine_080245E0(int entity)

{
  byte b_flag1;
  undefined4 u_val2;
  
  if (entity - 0x32U < 0x14) {
    switch(*(uint *)(PTR_case_080245F8_080245f4 + (entity - 0x32U) * 4) & 0xfffffffe) {
    case 0x80245f8:
    case 0x8024648:
      u_val2 = 0;
      break;
    case 0x802464c:
      u_val2 = 1;
      break;
    case 0x8024650:
      u_val2 = 2;
      break;
    case 0x8024654:
      u_val2 = 3;
      break;
    case 0x8024658:
      u_val2 = 4;
      break;
    case 0x802465c:
      u_val2 = 5;
      break;
    case 0x8024660:
      u_val2 = 6;
      break;
    case 0x8024664:
      u_val2 = 7;
      break;
    case 0x8024668:
      u_val2 = 8;
      break;
    case 0x802466c:
      u_val2 = 9;
      break;
    case 0x8024670:
      u_val2 = 10;
      break;
    case 0x8024674:
      u_val2 = 0xb;
      break;
    case 0x8024678:
      u_val2 = 0xc;
      break;
    case 0x802467c:
      u_val2 = 0xd;
      break;
    case 0x8024680:
      u_val2 = 0xe;
      break;
    case 0x8024684:
      u_val2 = 0x14;
      break;
    case 0x8024688:
      u_val2 = 0xf;
      break;
    case 0x802468c:
      u_val2 = 0x10;
      break;
    case 0x8024690:
      u_val2 = math_rand();
      u_val2 = math_umodsi3(u_val2,1000);
      b_flag1 = math_udivsi3(u_val2,10);
      if (b_flag1 < 5) {
        u_val2 = 0x12;
      }
      else {
        u_val2 = 0x11;
      }
      break;
    case 0x80246b2:
      u_val2 = 0x13;
    }
  }
  else {
    u_val2 = 0x15;
  }
  return u_val2;
}

// =============================================================================
// Function: Entity_Routine_08024724 @ 0x08024724
// =============================================================================
u32 Entity_Routine_08024724(short *entity,undefined4 speed,ushort *collision)

{
  short s_val1;
  short s_val2;
  char c_char3;
  short s_val4;
  uint u_val5;
  uint u_val6;
  int i_val7;
  int *p_int8;
  ushort stack_val_7c;
  short stack_val_7a;
  ushort stack_val_78;
  short stack_val_76;
  ushort stack_val_74;
  short stack_val_72;
  ushort stack_val_70;
  short stack_val_6e;
  short stack_val_6c;
  ushort stack_val_6a;
  short stack_val_68;
  ushort stack_val_66;
  short stack_val_64;
  ushort stack_val_62;
  short stack_val_60;
  ushort stack_val_5e;
  short stack_val_5c;
  short stack_val_5a;
  short stack_val_58;
  short stack_val_56;
  short stack_val_54;
  short stack_val_52;
  short stack_val_50;
  short stack_val_4e;
  short stack_val_4c;
  short stack_val_4a;
  short stack_val_48;
  short stack_val_46;
  short stack_val_44;
  short stack_val_42;
  short stack_val_40;
  short stack_val_3e;
  undefined4 stack_val_3c;
  uint stack_val_38;
  int stack_val_34;
  int stack_val_30;
  uint stack_val_2c;
  int stack_val_28;
  uint stack_val_24;
  
  stack_val_3c = speed;
  c_char3 = NPC_Routine_080AC070(speed,collision);
  if (c_char3 == '\0') {
LAB_0802495c:
    *entity = 0;
    s_val4 = 0;
  }
  else {
    stack_val_38 = ~((int)(short)collision[3] - 1U & 7);
    stack_val_34 = 8 - (collision[1] & 7);
    stack_val_78 = collision[2];
    u_val5 = ~((int)(short)stack_val_78 - 1U & 7);
    i_val7 = 8 - (*collision & 7);
    stack_val_7c = *collision;
    s_val4 = (short)stack_val_38;
    stack_val_7a = collision[1] + s_val4;
    stack_val_76 = collision[3] + s_val4;
    stack_val_30 = stack_val_34;
    stack_val_2c = u_val5;
    stack_val_28 = i_val7;
    c_char3 = NPC_Routine_080AC070(stack_val_3c,&stack_val_7c);
    if (c_char3 != '\x01') {
      *entity = 0;
      entity[1] = s_val4;
      goto LAB_08024960;
    }
    stack_val_74 = *collision;
    stack_val_70 = collision[2];
    stack_val_72 = (short)stack_val_30 + collision[1];
    stack_val_6e = (short)stack_val_30 + collision[3];
    u_val6 = NPC_Routine_080AC070(stack_val_3c);
    stack_val_24 = (u_val6 ^ 1) & 0xff;
    if (stack_val_24 != 0) {
      *entity = 0;
      entity[1] = (short)stack_val_30;
      goto LAB_08024960;
    }
    stack_val_6a = collision[1];
    stack_val_66 = collision[3];
    s_val1 = (short)u_val5;
    stack_val_6c = *collision + s_val1;
    stack_val_68 = collision[2] + s_val1;
    c_char3 = NPC_Routine_080AC070(stack_val_3c);
    if (c_char3 == '\x01') {
      stack_val_62 = collision[1];
      stack_val_5e = collision[3];
      s_val2 = (short)i_val7;
      stack_val_64 = *collision + s_val2;
      stack_val_60 = collision[2] + s_val2;
      c_char3 = NPC_Routine_080AC070(stack_val_3c);
      if (c_char3 != '\x01') {
        *entity = s_val2;
        entity[1] = 0;
        goto LAB_08024960;
      }
      stack_val_5c = *collision + s_val1;
      stack_val_5a = collision[1] + s_val4;
      stack_val_58 = collision[2] + s_val1;
      stack_val_56 = collision[3] + s_val4;
      c_char3 = NPC_Routine_080AC070(stack_val_3c);
      if (c_char3 == '\x01') {
        stack_val_54 = *collision + s_val2;
        s_val4 = (short)stack_val_38;
        stack_val_52 = s_val4 + collision[1];
        stack_val_50 = collision[2] + s_val2;
        stack_val_4e = s_val4 + collision[3];
        c_char3 = NPC_Routine_080AC070(stack_val_3c);
        if (c_char3 != '\x01') {
          *entity = s_val2;
          entity[1] = s_val4;
          goto LAB_08024960;
        }
        s_val4 = (short)stack_val_2c;
        stack_val_4c = s_val4 + *collision;
        stack_val_4a = (short)stack_val_30 + collision[1];
        stack_val_48 = s_val4 + collision[2];
        stack_val_46 = (short)stack_val_30 + collision[3];
        c_char3 = NPC_Routine_080AC070(stack_val_3c);
        if (c_char3 == '\x01') {
          s_val4 = (short)stack_val_28;
          stack_val_44 = s_val4 + *collision;
          stack_val_42 = (short)stack_val_34 + collision[1];
          stack_val_40 = s_val4 + collision[2];
          stack_val_3e = (short)stack_val_34 + collision[3];
          c_char3 = NPC_Routine_080AC070(stack_val_3c);
          if (c_char3 == '\x01') goto LAB_0802495c;
          *entity = s_val4;
          p_int8 = &stack_val_34;
        }
        else {
          *entity = s_val4;
          p_int8 = &stack_val_30;
        }
        entity[1] = (short)*p_int8;
        goto LAB_08024960;
      }
      *entity = s_val1;
    }
    else {
      *entity = s_val1;
      s_val4 = (short)stack_val_24;
    }
  }
  entity[1] = s_val4;
LAB_08024960:
  return entity;
}

// =============================================================================
// Function: Entity_Routine_08024974 @ 0x08024974
// =============================================================================
u32 Entity_Routine_08024974(int entity,undefined4 speed,int collision)

{
  short s_val1;
  
  Entity_Routine_0802B908();
  *(undefined4 *)(entity + 0x14) = gRomData_080E6658;
  *(int *)(entity + 0x34) = collision;
  *(int *)(entity + 0x38) = collision + 0x1BD8;
  *(undefined1 *)(entity + 0x3c) = 0;
  *(undefined1 *)(entity + 0x3d) = 0;
  *(undefined1 *)(entity + 0x3e) = 0;
  *(undefined1 *)(entity + 0x3f) = 0xf;
  *(undefined1 *)(entity + 0x40) = 0;
  *(undefined1 *)(entity + 0x41) = 0;
  *(undefined1 *)(entity + 0x42) = 0;
  *(undefined2 *)(entity + 0x44) = 0;
  *(undefined4 *)(entity + 0x60) = gRomData_080F0E80;
  *(undefined2 *)(entity + 100) = 0;
  Farmer_Routine_0800EFEC(entity + 0x68);
  *(undefined1 *)(entity + 0x6c) = 0;
  *(undefined1 *)(entity + 0x6d) = 0;
  *(undefined4 *)(entity + 0x70) = 0x3b;
  *(undefined1 *)(entity + 0x74) = 0;
  *(undefined1 *)(entity + 0x78) = 0;
  *(undefined1 *)(entity + 0x79) = 0;
  *(undefined1 *)(entity + 0x7a) = 0;
  *(short *)(entity + 0x7c) = (short)0xFFFF;
  *(undefined4 *)(entity + 0x80) = 0;
  *(undefined1 *)(entity + 0x88) = 0;
  *(undefined1 *)(entity + 0x89) = 0;
  *(undefined4 *)(entity + 0x8c) = 0;
  *(undefined4 *)(entity + 0x90) = 0;
  *(undefined4 *)(entity + 0x94) = 0;
  *(undefined4 *)(entity + 0x98) = 0;
  *(undefined4 *)(entity + 0x9c) = 0;
  *(undefined4 *)(entity + 0xa0) = 0;
  *(undefined1 *)(entity + 0xa4) = 1;
  *(undefined2 *)(entity + 0xa6) = 0;
  *(undefined4 *)(entity + 0xa8) = 0xffffffff;
  *(undefined4 *)(entity + 0xac) = 0xffffffff;
  *(undefined1 *)(entity + 0xb0) = 0;
  *(undefined1 *)(entity + 0xb1) = 0;
  *(undefined1 *)(entity + 0xb2) = 100;
  *(undefined1 *)(entity + 0xb3) = 0;
  *(undefined1 *)(entity + 0xb4) = 0;
  *(undefined1 *)(entity + 0xc0) = 0;
  *(undefined1 *)(entity + 0xc1) = 0;
  *(undefined1 *)(entity + 0xc2) = 0;
  *(undefined1 *)(entity + 0xc3) = 0;
  *(undefined1 *)(entity + 0xc4) = 0;
  *(undefined1 *)(entity + 0xc5) = 0;
  Entity_Routine_0802C2DC(entity);
  s_val1 = Entity_Routine_0802D158(entity);
  if (*(short *)(entity + 0x22) != s_val1) {
    Entity_Routine_080321B0(entity);
  }
  return entity;
}

// =============================================================================
// Function: Entity_Routine_08024B9C @ 0x08024B9C
// =============================================================================
void Entity_Routine_08024B9C(int entity)

{
  char c_char1;
  undefined4 u_val2;
  undefined1 u_val3;
  
  u_val3 = 2;
  if (*(short *)(entity + 4) == 0x13) {
    if (((*(byte *)(*(int *)(entity + 0x34) + 0x2171) & 0x1f) >> 3 == 1) ||
       (c_char1 = NPC_Routine_0809C694(*(int *)(entity + 0x34) + 0x2171 + -0x25,0x4a), c_char1 != '\0')
       ) {
      u_val3 = 1;
    }
  }
  *(undefined1 *)(entity + 0x21) = u_val3;
  u_val2 = CppRuntime_OperatorNewArray(0x284);
  Entity_Routine_0802B260(u_val2,entity);
  return;
}

// =============================================================================
// Function: Entity_Routine_08024BE8 @ 0x08024BE8
// =============================================================================
void Entity_Routine_08024BE8(undefined4 entity)

{
  
  Farmer_Routine_0801FDC0();
  Entity_Routine_0802A588(entity);
  return;
}

// =============================================================================
// Function: Entity_Routine_08024BFC @ 0x08024BFC
// =============================================================================
u32 * Entity_Routine_08024BFC(undefined4 *entity,int speed)

{
  char c_char1;
  undefined4 stack_val_1c;
  undefined4 stack_val_18;
  undefined4 stack_val_14;
  undefined4 stack_val_10;
  
  c_char1 = _call_via_r1(speed,*(undefined4 *)(*(int *)(speed + 0x14) + 0x40));
  if (c_char1 == '\0') {
    Entity_Routine_0803240C(&stack_val_14,speed);
    stack_val_1c = stack_val_14;
    stack_val_18 = stack_val_10;
  }
  else {
    stack_val_1c = CONCAT22(*(short *)(speed + 0xe) + -9,*(short *)(speed + 10) + -7);
    stack_val_18 = CONCAT22(*(short *)(speed + 0xe) + 5,*(short *)(speed + 10) + 7);
  }
  *entity = stack_val_1c;
  entity[1] = stack_val_18;
  return entity;
}

// =============================================================================
// Function: Entity_Routine_08024C54 @ 0x08024C54
// =============================================================================
void Entity_Routine_08024C54(int entity)

{
  
  *(undefined1 *)(entity + 6) = 1;
  Entity_Routine_080323C8();
  return;
}

// =============================================================================
// Function: Entity_Routine_08024C64 @ 0x08024C64
// =============================================================================
void Entity_Routine_08024C64(int entity)

{
  
  *(undefined1 *)(entity + 6) = 0;
  Entity_Routine_080323C8();
  return;
}

// =============================================================================
// Function: Entity_Routine_08024CA0 @ 0x08024CA0
// =============================================================================
u32 Entity_Routine_08024CA0(int entity)

{
  char c_char1;
  undefined4 u_val2;
  
  c_char1 = _call_via_r1(entity,*(undefined4 *)(*(int *)(entity + 0x14) + 0x28));
  if (((c_char1 == '\0') && (*(byte *)(entity + 0x3c) < 0x2b)) && (0x23 < *(byte *)(entity + 0x3c)))
  {
    u_val2 = 1;
  }
  else {
    u_val2 = 0;
  }
  return u_val2;
}

// =============================================================================
// Function: Entity_Routine_08024CD0 @ 0x08024CD0
// =============================================================================
void Entity_Routine_08024CD0(undefined4 *entity,undefined4 *speed)

{
  byte mood_byte;
  char c_char2;
  short s_val3;
  undefined4 u_val4;
  int *p_int5;
  uint u_val6;
  uint *p_uint7;
  ushort *p_uint8;
  int item_id;
  int i_val10;
  uint u_val11;
  ushort *p_uint12;
  uint loop_i;
  uint stack_val_80;
  undefined4 stack_val_7c;
  undefined4 stack_val_78;
  int stack_val_6c;
  int stack_val_68;
  ushort stack_val_64;
  ushort stack_val_62;
  undefined4 stack_buf_60 [2];
  undefined2 stack_val_56;
  short stack_val_54;
  short stack_val_52;
  undefined4 stack_val_50;
  undefined4 stack_val_4c;
  undefined4 stack_val_44;
  undefined4 stack_val_3c;
  undefined4 stack_val_38;
  undefined4 stack_val_34;
  uint temp_buf_30 [2];
  undefined1 stack_val_28;
  undefined1 stack_val_27;
  uint stack_val_24;
  
  Entity_Routine_0802F0EC(entity,*speed,*(undefined1 *)(speed + 1));
  Entity_Routine_0802CDCC(entity);
  s_val3 = Entity_Routine_0802D158(entity);
  if (*(short *)((int)entity + 0x22) != s_val3) {
    Entity_Routine_080321B0(entity);
  }
  if (*(short *)(entity + 9) == 0) {
    s_val3 = *(short *)((int)entity + 0x26);
  }
  else {
    s_val3 = *(short *)(entity + 9) + -1;
  }
  *(short *)(entity + 9) = s_val3;
  i_val10 = entity[4];
  if (i_val10 != 0) {
    _call_via_r1(i_val10,*(undefined4 *)(*(int *)(i_val10 + 4) + 0xc));
  }
  if (((entity[6] == 0) && (entity[7] == 0)) || (*(char *)(entity + 0xf) == '5'))
  goto LAB_08024f7e;
  _call_via_r2(stack_buf_60,entity,*(undefined4 *)(entity[5] + 0xc));
  stack_val_80 = 0;
  mood_byte = *(byte *)(entity + 8);
  stack_val_56 = (undefined2)((uint)stack_buf_60[0] >> 0x10);
  stack_val_54 = (short)stack_buf_60[1];
  if (mood_byte == 1) {
    if (&stack0x00000000 != 0x007c) {
      stack_val_7c = stack_buf_60[0];
    }
    stack_val_44 = CONCAT22(stack_val_56,stack_val_54 + -1);
    u_val4 = stack_val_44;
    if (&stack0x00000000 != 0x0078) goto LAB_08024ee6;
LAB_08024ee8:
    stack_val_80 = 2;
  }
  else {
    stack_val_52 = (short)((uint)stack_buf_60[1] >> 0x10);
    if (1 < mood_byte) {
      if (mood_byte == 2) {
        if (&stack0x00000000 != 0x007c) {
          stack_val_7c = stack_buf_60[0];
        }
        u_val4 = CONCAT22(stack_val_52 + -1,(short)stack_buf_60[0]);
        stack_val_3c = u_val4;
        if (&stack0x00000000 != 0x0078) {
LAB_08024ee6:
          stack_val_78 = u_val4;
        }
      }
      else {
        if (mood_byte != 3) goto LAB_08024eee;
        stack_val_38 = CONCAT22(stack_val_56,stack_val_54 + -1);
        if (&stack0x00000000 != 0x007c) {
          stack_val_7c = stack_val_38;
        }
        stack_val_34 = CONCAT22(stack_val_52 + -1,stack_val_54 + -1);
        u_val4 = stack_val_34;
        if (&stack0x00000000 != 0x0078) goto LAB_08024ee6;
      }
      goto LAB_08024ee8;
    }
    if (mood_byte == 0) {
      stack_val_50 = CONCAT22(stack_val_52 + -1,(short)stack_buf_60[0]);
      if (&stack0x00000000 != 0x007c) {
        stack_val_7c = stack_val_50;
      }
      stack_val_4c = CONCAT22(stack_val_52 + -1,stack_val_54 + -1);
      u_val4 = stack_val_4c;
      if (&stack0x00000000 != 0x0078) goto LAB_08024ee6;
      goto LAB_08024ee8;
    }
  }
LAB_08024eee:
  p_int5 = (int *)*entity;
  _call_via_r3(&stack_val_6c,p_int5,*(undefined2 *)(entity + 1),*(undefined4 *)(*p_int5 + 0x34));
  loop_i = 0;
  p_uint8 = (ushort *)&stack_val_7c;
  if (stack_val_80 != 0) {
    stack_val_24 = (uint)stack_val_64;
    p_uint12 = p_uint8;
    do {
      u_val11 = (int)((uint)*p_uint12 << 0x10) >> 0x13;
      u_val6 = (int)((uint)p_uint12[1] << 0x10) >> 0x13;
      if (((stack_val_6c == 0) || (stack_val_24 < u_val11)) || (stack_val_62 < u_val6)) {
        p_uint7 = (uint *)0x0;
      }
      else {
        u_val11 = stack_val_24 * u_val6 + u_val11;
        if (stack_val_68 != 0) {
          u_val11 = (uint)*(byte *)(stack_val_68 + u_val11);
        }
        p_uint7 = (uint *)(stack_val_6c + u_val11 * 4);
      }
      if ((p_uint7 != (uint *)0x0) && ((0x0001FFFC & *p_uint7) != 0)) {
        temp_buf_30[0] = (*p_uint7 & 0x1ffff) >> 2;
        temp_buf_30[1] = 0;
        _call_via_r3(p_int5,temp_buf_30,0,*(undefined4 *)(*p_int5 + 0x140));
        break;
      }
      p_uint12 = p_uint12 + 2;
      loop_i = loop_i + 1;
    } while (loop_i < stack_val_80);
  }
  for (; p_uint8 != (ushort *)(&stack_val_7c + stack_val_80); p_uint8 = p_uint8 + 2) {
  }
LAB_08024f7e:
  if (*(char *)(speed + 1) != '\0') {
    i_val10 = entity[0xd] + 0x1C34;
    c_char2 = Product_GetId(i_val10);
    if (c_char2 == '\0') {
      stack_val_28 = Product_Construct(i_val10);
      item_id = Item_GetId();
      if (item_id == 0x4e) {
        _call_via_r3(entity,1,0,*(undefined4 *)(entity[5] + 100));
      }
    }
    c_char2 = Product_GetId(i_val10);
    if (c_char2 == '\0') {
      stack_val_27 = Product_Construct(i_val10);
      i_val10 = Item_GetId();
      if ((i_val10 == 0x4f) && (c_char2 = Farmer_Routine_0800EE2C(entity[0xd] + 0x1BD8), c_char2 != '\0'))
      {
        _call_via_r3(entity,0,0xffffffff,*(undefined4 *)(entity[5] + 100));
      }
    }
  }
  return;
}

// =============================================================================
// Function: Entity_Routine_08025018 @ 0x08025018
// =============================================================================
void Entity_Routine_08025018(int entity,undefined4 speed)

{
  short s_val1;
  
  *(undefined1 *)(entity + 0xc1) = 0;
  if (*(char *)(entity + 0xc2) == '\0') {
    if (*(char *)(entity + 0xc0) != '\0') {
      Entity_Routine_0802F0EC(entity,0,0);
      s_val1 = Entity_Routine_0802D158(entity);
      if (*(short *)(entity + 0x22) != s_val1) {
        Entity_Routine_080321B0(entity);
      }
    }
    Entity_Routine_0803242C(entity,speed);
  }
  return;
}

// =============================================================================
// Function: Entity_Routine_08025068 @ 0x08025068
// =============================================================================
u32 Entity_Routine_08025068(int entity,int speed,int collision,undefined4 flags)

{
  undefined1 *p_uint1;
  byte *pbVar2;
  byte b_flag3;
  char c_char4;
  undefined1 u_val5;
  undefined1 u_val6;
  uint u_val7;
  uint max_stamina;
  uint u_val8;
  uint u_val9;
  uint u_val10;
  uint u_val11;
  uint u_val12;
  undefined4 u_val13;
  undefined4 u_val14;
  int i_val15;
  int i_val16;
  int i_val17;
  int i_val18;
  undefined4 u_val19;
  undefined8 u_val20;
  
  if (*(char *)(*(int *)(entity + 0x34) + 0x34C4) != '\0') goto LAB_080251e8;
  if (*(int *)(entity + 0x10) != 0) {
    *(undefined1 *)(*(int *)(entity + 0x10) + 0x281) = 1;
  }
  u_val7 = Farmer_GetStamina(*(undefined4 *)(entity + 0x38));
  max_stamina = Farmer_GetMaxStamina(*(undefined4 *)(entity + 0x38));
  Farmer_AddStamina(*(undefined4 *)(entity + 0x38),speed);
  u_val8 = Farmer_GetStamina(*(undefined4 *)(entity + 0x38));
  u_val9 = Farmer_GetFatigue(*(undefined4 *)(entity + 0x38));
  Farmer_AddFatigue(*(undefined4 *)(entity + 0x38),collision);
  u_val10 = Farmer_GetFatigue(*(undefined4 *)(entity + 0x38));
  u_val12 = gInlineTable_080250FC;
  if ((speed < 1) && (-1 < collision)) goto LAB_08025158;
  u_val11 = *(byte *)(entity + 0xc3) - 0x24;
  if (6 < u_val11) goto LAB_08025158;
  u_val11 = *(uint *)(u_val11 * 4 + gInlineTable_080250FC);
  switch(u_val11 & 0xfffffffe) {
  case 0x8025118:
    if (u_val8 <= max_stamina >> 1) break;
    goto LAB_08025154;
  case 0x8025122:
    u_val12 = math_divsi3(max_stamina,5);
    goto joined_r0x0802513a;
  case 0x8025130:
    u_val12 = math_divsi3(max_stamina,0x14);
joined_r0x0802513a:
    if (u_val12 < u_val8) {
LAB_08025154:
      *(byte *)(entity + 0xc3) = 0;
    }
    break;
  case 0x802513e:
    if (u_val8 != 0) goto LAB_08025154;
    break;
  case 0x8025144:
    if (u_val10 < 0x32) goto LAB_08025154;
    break;
  case 0x802514a:
    if (u_val10 < 0x50) goto LAB_08025154;
    break;
  case 0x8025150:
    if (u_val10 != 100) goto LAB_08025154;
    break;
  case 0x8484640:
    *(uint *)(entity + 0xe3) = u_val11;
    *(uint *)(entity + 0x74) = u_val12;
    *(uint *)(entity + 0xe3) = u_val11;
    u_val7 = u_val12 >> 8;
    *(uint *)(u_val7 + 0x14) = u_val11;
    *(char *)(u_val7 + 0xd) = (char)u_val12;
    u_val13 = *(undefined4 *)(entity + 0xd3);
    *(char *)(u_val12 + 0xd) = (char)u_val12;
    *(char *)(entity + 0xd3) = (char)u_val13;
    *(undefined4 *)(u_val7 + 0x54) = u_val13;
    *(undefined4 *)(u_val8 + 0x54) = 10;
    *(undefined4 *)(entity + 0xd3) = u_val13;
    b_flag3 = *(byte *)(u_val7 + 5);
    u_val8 = (uint)b_flag3;
    i_val15 = *(int *)(u_val8 + 4);
    u_val12 = *(uint *)(u_val7 + 100);
    u_val7 = u_val12 >> 8;
    *(undefined4 *)(i_val15 + 0x40) = 0x67;
    *(uint *)(u_val7 + 100) = u_val12;
    *(uint *)(i_val15 + 0x54) = u_val8;
    *(undefined4 *)(u_val8 + 0x54) = 10;
    *(byte *)(u_val7 + 0x11) = b_flag3;
    *(undefined4 *)(i_val15 + 0x10) = 0x67;
    u_val6 = (undefined1)(u_val12 >> 8);
    *(undefined1 *)(u_val8 + 0x11) = u_val6;
    *(undefined2 *)(i_val15 * 2) = 0x67;
    *(undefined4 *)(u_val7 + 0x54) = 0x67;
    *(undefined1 *)(i_val15 + 1) = u_val6;
    *(undefined4 *)(i_val15 + 0x10) = 0x67;
    *(uint *)(u_val7 + 0x44) = u_val8;
    u_val12 = u_val12 >> 8;
    *(char *)(u_val12 + 0x1d) = (char)u_val10 + -0x74;
    u_val13 = *(undefined4 *)(i_val15 + 0x70);
    i_val16 = *(int *)(u_val8 + 4);
    *(undefined1 *)(i_val16 + 9) = u_val6;
    *(char *)(i_val16 + 0x10) = (char)u_val13;
    *(undefined4 *)(u_val12 + 0x14) = u_val13;
    i_val15 = UNK_0x00d9;
    i_val18 = *(int *)(u_val12 + 0x44);
    c_char4 = *(char *)(i_val16 * 2);
    u_val13 = *(undefined4 *)(i_val16 + 0x44);
    i_val16 = *(int *)(c_char4 + 4);
    *(int *)(i_val16 + 0x44) = i_val16;
    *(char *)(i_val16 + 9) = (char)u_val13;
    u_val12 = *(uint *)(i_val15 + 4);
    u_val7 = u_val12 >> 0x15;
    *(undefined4 *)(i_val15 + 0x14) = flags;
    *(uint *)(u_val7 + 0x54) = u_val7;
    u_val6 = (undefined1)i_val18;
    *(undefined1 *)(u_val12 + 9) = u_val6;
    u_val12 = *(uint *)(u_val7 + 100);
    u_val7 = *(uint *)(i_val15 + 4);
    u_val8 = u_val7 >> 0x15;
    *(undefined4 *)(i_val15 + 0x14) = flags;
    *(uint *)(u_val8 + 0x54) = u_val8;
    *(char *)(u_val7 + 9) = c_char4;
    *(char *)(i_val15 + 0xd) = (char)u_val8;
    *(int *)(u_val8 + 0x74) = i_val15;
    i_val16 = *(int *)(i_val15 + 4);
    u_val12 = u_val12 >> 8;
    *(undefined1 *)(i_val16 + 0xc) = 0x65;
    *(undefined4 *)(i_val16 + 0x70) = 0x65;
    *(char *)(u_val12 + 0x19) = (char)*(undefined4 *)(i_val16 + 0x54);
    u_val12 = *(uint *)(u_val12 + 100);
    u_val7 = *(uint *)(*(int *)(i_val15 + 4) + 0x54);
    i_val17 = *(int *)(u_val7 + 0x14);
    *(uint *)(u_val7 + 0x14) = u_val7;
    *(uint *)(u_val12 + 0x54) = u_val7;
    u_val13 = *(undefined4 *)(*(int *)((u_val7 >> 0x15) + 0x14) + 0x14);
    *(int *)(u_val7 + 0x54) = i_val17;
    i_val15 = *(int *)(i_val17 + 4);
    *(undefined4 *)(i_val17 + 0x14) = u_val13;
    *(uint *)(u_val7 + 0x54) = u_val7;
    u_val7 = u_val12 >> 8;
    *(undefined4 *)(u_val7 + 0x14) = 0x65;
    *(uint *)(i_val15 + 0x24) = u_val12;
    *(undefined1 *)(u_val7 + 0x15) = u_val6;
    *(uint *)(u_val7 + 0x14) = u_val7;
    *(int *)(u_val7 + 0x74) = i_val17;
    *(undefined1 *)(i_val15 + 0x10) = 0x74;
    *(undefined4 *)(u_val7 + 0x54) = 0x74;
    u_val7 = u_val12 >> 0x1d;
    *(undefined1 *)(i_val17 + 9) = 10;
    *(uint *)(i_val15 + 0x74) = u_val7;
    *(int *)(u_val7 + 0x14) = i_val17;
    *(char *)(u_val7 + 0x11) = (char)i_val17;
    u_val8 = u_val12 >> 8;
    *(undefined1 *)(u_val8 + 9) = u_val6;
    *(undefined1 *)(i_val15 + 0x10) = 10;
    *(undefined4 *)(u_val8 + 0x14) = 10;
    u_val7 = *(uint *)(i_val18 + 0x74);
    *(int *)(u_val8 + 0x54) = i_val17;
    *(uint *)(i_val15 + 0x44) = u_val8;
    *(undefined2 *)(i_val15 * 2) = 0x75;
    *(undefined4 *)(u_val8 + 0x54) = 0x75;
    *(char *)(i_val15 + 1) = (char)(u_val12 >> 8);
    *(uint *)(u_val7 + 0x14) = u_val8;
    u_val12 = *(uint *)(i_val17 + 0x14);
    *(uint *)(u_val7 + 0x14) = u_val8;
    u_val12 = u_val12 >> 0x15;
    i_val16 = *(int *)(i_val17 + 0x14);
    u_val6 = (undefined1)*(undefined4 *)(i_val15 + 0x74);
    *(undefined1 *)(i_val16 + 0x1c) = u_val6;
    u_val5 = (undefined1)*(undefined4 *)(u_val8 + 100);
    *(undefined1 *)(i_val16 + 0x10) = u_val5;
    *(undefined1 *)(i_val16 + 0x1c) = u_val6;
    *(undefined1 *)(u_val8 + 9) = u_val5;
    u_val8 = u_val7 >> 8;
    *(undefined4 *)(i_val16 + 0x30) = 0x66;
    *(undefined1 *)(u_val8 + 0x15) = u_val5;
    *(char *)(i_val17 + 0xd) = (char)i_val15;
    *(uint *)(u_val8 + 0x54) = u_val12;
    *(uint *)(i_val17 + 0x54) = u_val12;
    *(char *)(u_val8 + 0xd) = (char)i_val17;
    i_val15 = UNK_0x000e;
    u_val13 = *(undefined4 *)(*(int *)(i_val17 + 0x74) + 0x50);
    *(undefined1 *)(UNK_0x000e + 0x11) = 0x65;
    *(undefined1 *)(i_val15 + 0xc) = u_val5;
    *(char *)(i_val15 + 0x10) = (char)u_val13;
    *(undefined4 *)(u_val8 + 0x54) = u_val13;
    i_val15 = *(int *)(i_val15 + 0x14);
    *(undefined4 *)(i_val15 + 100) = *(undefined4 *)(u_val8 + 0x44);
    *(char *)(i_val15 + 9) = (char)(u_val7 >> 8);
    *(uint *)(i_val15 + 0x54) = u_val12;
    *(undefined4 *)(i_val15 + 0x30) = 0x79;
    u_val7 = *(uint *)(i_val15 + 100);
    *(undefined1 *)(i_val15 + 0x10) = 0x79;
    u_val12 = _LAB_084847f4;
    UNK_0x0064 = u_val7;
    *(undefined1 *)(_LAB_084847f4 + 0x10) = 0x65;
    *(char *)(u_val12 + 9) = (char)u_val7;
    i_val16 = _LAB_08484954;
    u_val7 = _LAB_08484938;
    *(undefined2 *)(_LAB_08484938 + 0x20) = 0;
    *(uint *)(u_val7 + 0x54) = u_val12 >> 0x14;
    *(char *)(u_val12 + 9) = (char)*(undefined4 *)(u_val12 + 0x14);
    *(undefined1 *)(u_val12 + 0x11) = 0x6f;
    *(undefined1 *)((u_val7 >> 8) + 0x11) = 0x6f;
    *(undefined4 *)(u_val12 + 0x10) = 0x73;
    u_val12 = UNK_0x0064;
    u_val14 = *(undefined4 *)(i_val16 + 0x34);
    i_val15 = *(int *)(i_val16 + 4);
    *(undefined4 *)(UNK_0x0064 + 0x14) = 0x65;
    *(undefined1 *)(i_val16 + 0x19) = 0x3f;
    *(undefined1 *)(i_val15 + 0xd) = 0;
    *(undefined2 *)(i_val15 * 2) = 0x74;
    *(undefined1 *)(i_val16 + 9) = 0x74;
    *(char *)((u_val12 >> 8) + 0x11) = (char)u_val12;
    *(char *)(i_val15 + 0xd) = (char)(u_val12 >> 8);
    *(undefined1 *)(i_val15 + 0x10) = 0x74;
    i_val15 = *(int *)(i_val15 + 0x74);
    *(undefined1 *)(i_val15 + 0xc) = 0x6f;
    u_val19 = *(undefined4 *)(i_val16 + 0x74);
    u_val13 = *(undefined4 *)(i_val16 + 0x34);
    *(undefined4 *)(i_val15 + 0x60) = 0x65;
    *(char *)((u_val12 >> 8) + 9) = (char)u_val19;
    u_val12 = u_val12 >> 8;
    *(char *)(i_val15 + 0x22) = (char)u_val13;
    *(undefined4 *)(u_val12 + 0x14) = 0x22;
    *(undefined1 *)(i_val15 + 9) = 0x74;
    *(uint *)(i_val15 + 0x14) = u_val12;
    UNK_0x0088 = 10;
    *(undefined1 *)(i_val15 + 0x10) = 0x73;
    *(undefined4 *)(u_val12 + 0x54) = 0x73;
    i_val15 = *(int *)(*(int *)(i_val15 + 0x74) + 0x74);
    *(undefined4 *)(i_val15 + 0x10) = 0x74;
    *(undefined4 *)(i_val16 + 0x34) = 0;
    *(undefined1 *)(i_val15 + 0xd) = 0x74;
    *(undefined1 *)(i_val15 + 0x1c) = 0x68;
    *(undefined1 *)(*(int *)(i_val16 + 4) + 0x10) = 0x74;
    i_val15 = UNK_0x000e;
    *(undefined1 *)(i_val16 + 0xd) = *(undefined1 *)(UNK_0x000e + 5);
    *(undefined1 *)(i_val15 + 9) = 0x6f;
    *(undefined1 *)(i_val15 + 0x10) = 0x6e;
    *(undefined1 *)(i_val15 + 0x14) = 0x74;
    *(undefined4 *)(i_val16 + 0x54) = u_val14;
    i_val15 = *(int *)(i_val16 + 0x74);
    UNK_0x00c2 = 0x6f;
    *(undefined1 *)(i_val15 + 0x74) = 0x74;
    _NotUsed = 0x79;
    *(int *)(i_val16 + 0x54) = i_val16;
    *(undefined1 *)(i_val15 + 0x10) = 0x79;
    *(undefined1 *)(i_val15 + 9) = 0x6f;
    UNK_0x007f = 10;
    UNK_0x0009 = 0x6f;
    UNK_0x0024 = 0x6e;
    *(char *)(i_val15 + 0x10) = (char)*(undefined4 *)(i_val15 + 0x20);
    u_val12 = *(uint *)(UNK_0x0074 + 0x74);
    UNK_0x001d = (undefined1)UNK_0x0074;
    *(undefined4 *)((u_val12 >> 8) + 0x34) = 0;
    i_val15 = _UndefinedInstruction;
    p_uint1 = (undefined1 *)(_UndefinedInstruction + 5);
    *(undefined4 *)(_UndefinedInstruction + 0x70) = 0x65;
    *(undefined1 *)(i_val15 + 0x11) = *p_uint1;
    *(undefined1 *)(i_val15 + 0x14) = 0x65;
    u_val13 = *(undefined4 *)(UNK_0x0074 + 0x10);
    u_val8 = u_val12 >> 8;
    u_val6 = (undefined1)u_val13;
    *(undefined1 *)(UNK_0x0074 + 0x10) = u_val6;
    *(undefined4 *)(u_val8 + 0x54) = u_val13;
    u_val7 = *(uint *)(u_val8 + 0x44);
    *(undefined1 *)(u_val7 + 0x1c) = u_val6;
    *(undefined1 *)(u_val8 + 9) = 0x79;
    *(undefined4 *)(u_val7 + 0x54) = 0x2e;
    UNK_0x000e = CONCAT13((char)u_val7,UNK_0x000e);
    u_val6 = (undefined1)(u_val12 >> 8);
    *(undefined1 *)(u_val7 + 9) = u_val6;
    u_val8 = u_val12 >> 8;
    *(undefined1 *)(u_val8 + 0x15) = 0x79;
    i_val15 = *(int *)(u_val7 + 0x50);
    *(uint *)(u_val7 + 0x14) = u_val8;
    *(undefined4 *)(u_val12 + 100) = 0xb;
    *(int *)(u_val7 + 0x30) = i_val15;
    *(undefined1 *)(u_val8 + 0x15) = 0xb;
    UNK_0x000d = 10;
    *(char *)(u_val8 + 0xd) = (char)u_val7;
    *(int *)(u_val7 + 0x40) = i_val15 >> (u_val7 & 0xff);
    *(char *)(u_val7 + 0x10) = (char)*(undefined4 *)(u_val8 + 100);
    i_val15 = *(int *)(u_val7 + 0x74);
    *(undefined4 *)(i_val15 + 0x74) = 10;
    *(undefined1 *)(u_val7 + 0x11) = u_val6;
    *(undefined1 *)(u_val7 + 0x10) = 10;
    *(int *)(i_val15 + 0x54) = i_val15;
    *(undefined1 *)(u_val7 + 0x10) = 0x6f;
    *(undefined4 *)(u_val8 + 0x54) = 0x6f;
    u_val13 = *(undefined4 *)(i_val15 + 0x54);
    u_val7 = *(uint *)(u_val7 + 0x44);
    u_val12 = u_val12 >> 0x1d;
    u_val14 = *(undefined4 *)(u_val12 + 0x14);
    *(char *)(u_val12 + 0x11) = (char)i_val15;
    *(char *)(u_val12 + 0xd) = (char)u_val7;
    *(undefined4 *)(u_val12 + 0x10) = 0x73;
    *(undefined1 *)(u_val12 + 0x10) = 0x73;
    *(undefined4 *)(u_val8 + 0x14) = 0x73;
    b_flag3 = *(byte *)(u_val8 + 4);
    u_val6 = (undefined1)u_val14;
    *(undefined1 *)(b_flag3 + 0x15) = u_val6;
    *(undefined1 *)(u_val12 + 0x1c) = 0x73;
    *(undefined4 *)(b_flag3 + 0x54) = 0x73;
    i_val15 = _UndefinedInstruction;
    pbVar2 = (byte *)(_UndefinedInstruction + 5);
    *(undefined1 *)(_UndefinedInstruction + 8) = u_val6;
    i_val16 = *(int *)(i_val15 + 0x74);
    *(undefined4 *)(*pbVar2 + 0x54) = 0;
    i_val15 = 0x6320756F;
    u_val12 = u_val7 >> 8;
    UNK_0x0054 = 0x2e;
    *(uint *)(u_val12 + 0x54) = u_val12;
    *(uint *)(u_val12 + 0x24) = u_val12;
    *(char *)(i_val16 + 9) = (char)(u_val7 >> 8);
    *(undefined4 *)(*(int *)(i_val15 + 0x14) + 0x54) = 0;
    UNK_0x0079 = 0;
    u_val20 = (*(code *)max_stamina)(0x20,i_val15,UNK_0x0054,u_val13);
    return u_val20;
  }
LAB_08025158:
  if ((u_val9 != 100) && (u_val10 == 100)) {
    *(undefined1 *)(entity + 0xc3) = 0x2a;
    u_val13 = 1;
    goto LAB_080251ea;
  }
  if ((u_val9 < 0x50) && (0x4f < u_val10)) {
    u_val6 = 0x29;
LAB_080251e6:
    *(undefined1 *)(entity + 0xc3) = u_val6;
  }
  else {
    if ((u_val9 < 0x32) && (0x31 < u_val10)) {
      u_val6 = 0x28;
      goto LAB_080251e6;
    }
    if ((u_val7 != 0) && (u_val8 == 0)) {
      u_val6 = 0x27;
      goto LAB_080251e6;
    }
    u_val12 = math_divsi3(max_stamina,0x14);
    if ((u_val12 < u_val7) && (u_val8 <= u_val12)) {
      u_val6 = 0x26;
      goto LAB_080251e6;
    }
    u_val12 = math_divsi3(max_stamina,5);
    if ((u_val12 < u_val7) && (u_val8 <= u_val12)) {
      u_val6 = 0x25;
      goto LAB_080251e6;
    }
    if ((max_stamina >> 1 < u_val7) && (u_val8 <= max_stamina >> 1)) {
      u_val6 = 0x24;
      goto LAB_080251e6;
    }
  }
LAB_080251e8:
  u_val13 = 0;
LAB_080251ea:
  return u_val13;
}

// =============================================================================
// Function: Entity_Routine_080251FC @ 0x080251FC
// =============================================================================
undefined8
Entity_Routine_080251FC(undefined4 entity,undefined4 speed,undefined4 *collision,short flags,uint arg_5)

{
  char c_char1;
  uint u_val2;
  undefined4 stack_val_20;
  undefined4 stack_val_1c;
  
  stack_val_20 = *collision;
  stack_val_1c = collision[1];
  u_val2 = 1;
  if (arg_5 != 0) {
    do {
      stack_val_20 = CONCAT22(stack_val_20._2_2_,(short)stack_val_20 + flags);
      stack_val_1c = CONCAT22(stack_val_1c._2_2_,(short)stack_val_1c + flags);
      c_char1 = NPC_Routine_080AC070(speed,&stack_val_20);
      if (c_char1 == '\0') break;
      u_val2 = u_val2 + 1;
    } while (u_val2 <= arg_5);
  }
  return u_val2;
}

// =============================================================================
// Function: Entity_Routine_08025248 @ 0x08025248
// =============================================================================
undefined8
Entity_Routine_08025248(undefined4 entity,undefined4 speed,undefined4 *collision,short flags,uint arg_5)

{
  char c_char1;
  uint u_val2;
  undefined4 stack_val_20;
  undefined4 stack_val_1c;
  
  stack_val_20 = *collision;
  stack_val_1c = collision[1];
  u_val2 = 1;
  if (arg_5 != 0) {
    do {
      stack_val_20 = CONCAT22(stack_val_20._2_2_ + flags,(undefined2)stack_val_20);
      stack_val_1c = CONCAT22(stack_val_1c._2_2_ + flags,(undefined2)stack_val_1c);
      c_char1 = NPC_Routine_080AC070(speed,&stack_val_20);
      if (c_char1 == '\0') break;
      u_val2 = u_val2 + 1;
    } while (u_val2 <= arg_5);
  }
  return u_val2;
}

// =============================================================================
// Function: Entity_Routine_08025294 @ 0x08025294
// =============================================================================
u32 Entity_Routine_08025294(undefined4 entity,undefined4 speed,int collision,short *flags)

{
  short s_val1;
  short s_val2;
  short s_val3;
  short s_val4;
  char c_char5;
  short s_val6;
  undefined4 u_val7;
  short *psVar8;
  short asStack_24 [4];
  short asStack_1c [4];
  
  s_val1 = flags[2];
  s_val2 = *flags;
  s_val3 = flags[3];
  s_val4 = flags[1];
  if ((int)(0x10fU - (int)s_val1 & s_val2 + 0xFFFFFC3F & 0xafU - (int)s_val3 & s_val4 + 0xFFFFFDBF
           ) < 0) {
    if (collision != 1) {
      if (collision < 2) {
        if (collision != 0) goto LAB_08025360;
      }
      else {
        if (collision == 2) {
          s_val6 = -((s_val1 - s_val2) + 0x10);
          psVar8 = asStack_24;
        }
        else {
          if (collision != 3) goto LAB_08025360;
          s_val6 = (s_val1 - s_val2) + 0x10;
          psVar8 = asStack_1c;
        }
        *psVar8 = s_val6 + s_val2;
        psVar8[1] = s_val4;
        psVar8[2] = s_val6 + s_val1;
        psVar8[3] = s_val3;
      }
    }
    c_char5 = NPC_Routine_080AC070(speed);
    if (c_char5 != '\x01') {
      u_val7 = 1;
      goto LAB_08025362;
    }
  }
LAB_08025360:
  u_val7 = 0;
LAB_08025362:
  return u_val7;
}

// =============================================================================
// Function: Entity_Routine_0802536C @ 0x0802536C
// =============================================================================
void Entity_Routine_0802536C(undefined4 *entity,int speed,uint collision)

{
  undefined4 u_val1;
  char c_char2;
  short s_val3;
  int *p_int4;
  undefined4 u_val5;
  uint u_val6;
  uint *p_uint7;
  int i_val8;
  undefined4 *curr_ptr;
  short s_val10;
  undefined4 *end_ptr;
  char *p_char12;
  undefined1 stack_buf_74 [12];
  undefined4 stack_val_68;
  undefined4 stack_val_64;
  uint stack_val_60;
  undefined4 stack_val_5c;
  undefined4 stack_val_58;
  undefined2 stack_val_54;
  short stack_val_52;
  undefined2 stack_val_50;
  short stack_val_4e;
  short stack_val_4c;
  undefined2 stack_val_4a;
  short stack_val_48;
  undefined2 stack_val_46;
  short stack_val_44;
  undefined2 stack_val_42;
  short stack_val_40;
  undefined2 stack_val_3e;
  undefined2 stack_val_3c;
  short stack_val_3a;
  undefined2 stack_val_38;
  short stack_val_36;
  uint stack_val_34;
  uint stack_val_30;
  uint stack_val_2c;
  int stack_val_28;
  int stack_val_24;
  
  stack_val_2c = (uint)*(ushort *)(entity + 1);
  stack_val_30 = collision;
  _call_via_r3(stack_buf_74,(int *)*entity,stack_val_2c,*(undefined4 *)(*(int *)*entity + 0x34));
  stack_val_28 = (int)*(short *)((int)entity + 10);
  stack_val_24 = (int)*(short *)((int)entity + 0xe);
  _call_via_r2(&stack_val_68,entity,*(undefined4 *)(entity[5] + 0xc));
  if (speed == 1) {
    stack_val_60 = -stack_val_30;
    NPC_Routine_080AC124(stack_buf_74,&stack_val_68,0,&stack_val_60,0,0);
    if (stack_val_60 != 0) {
      stack_val_24 = stack_val_24 + stack_val_60;
      stack_val_68 = CONCAT22(stack_val_68._2_2_ + (short)stack_val_60,(short)stack_val_68);
      stack_val_64 = CONCAT22(stack_val_64._2_2_ + (short)stack_val_60,(short)stack_val_64);
LAB_0802548e:
      u_val6 = stack_val_60;
      if ((int)stack_val_60 < 0) {
        u_val6 = -stack_val_60;
      }
      stack_val_30 = stack_val_30 - u_val6;
    }
  }
  else if (speed < 2) {
    if (speed != 0) {
      return;
    }
    stack_val_60 = stack_val_30;
    NPC_Routine_080AC124(stack_buf_74,&stack_val_68,&stack_val_60,0,0,0);
    if (stack_val_60 != 0) {
      stack_val_24 = stack_val_24 + stack_val_60;
      stack_val_68 = CONCAT22(stack_val_68._2_2_ + (short)stack_val_60,(short)stack_val_68);
      stack_val_64 = CONCAT22(stack_val_64._2_2_ + (short)stack_val_60,(short)stack_val_64);
      goto LAB_0802548e;
    }
  }
  else if (speed == 2) {
    stack_val_60 = -stack_val_30;
    NPC_Routine_080AC124(stack_buf_74,&stack_val_68,0,0,&stack_val_60,0);
    if (stack_val_60 != 0) {
      stack_val_28 = stack_val_28 + stack_val_60;
      goto LAB_08025482;
    }
  }
  else {
    if (speed != 3) {
      return;
    }
    stack_val_60 = stack_val_30;
    NPC_Routine_080AC124(stack_buf_74,&stack_val_68,0,0,0,&stack_val_60);
    if (stack_val_60 != 0) {
      stack_val_28 = stack_val_28 + stack_val_60;
LAB_08025482:
      stack_val_68 = CONCAT22(stack_val_68._2_2_,(short)stack_val_68 + (short)stack_val_60);
      stack_val_64 = CONCAT22(stack_val_64._2_2_,(short)stack_val_64 + (short)stack_val_60);
      goto LAB_0802548e;
    }
  }
  if (stack_val_30 == 0) goto LAB_080257b2;
  stack_val_34 = 0;
  stack_val_5c = stack_val_68;
  u_val5 = stack_val_5c;
  stack_val_58 = stack_val_64;
  u_val1 = stack_val_58;
  stack_val_5c._0_2_ = (short)stack_val_68;
  stack_val_5c._2_2_ = (short)((uint)stack_val_68 >> 0x10);
  stack_val_58._0_2_ = (short)stack_val_64;
  stack_val_58._2_2_ = (short)((uint)stack_val_64 >> 0x10);
  if (speed == 1) {
    stack_val_5c = CONCAT22(stack_val_5c._2_2_ + -1,(short)stack_val_5c);
    stack_val_58 = CONCAT22(stack_val_58._2_2_ + -1,(short)stack_val_58);
    u_val5 = stack_val_5c;
    u_val1 = stack_val_58;
  }
  else if (speed < 2) {
    if (speed == 0) {
      stack_val_5c = CONCAT22(stack_val_5c._2_2_ + 1,(short)stack_val_5c);
      stack_val_58 = CONCAT22(stack_val_58._2_2_ + 1,(short)stack_val_58);
      u_val5 = stack_val_5c;
      u_val1 = stack_val_58;
    }
  }
  else {
    if (speed == 2) {
      stack_val_5c._0_2_ = (short)stack_val_5c + -1;
      stack_val_58._0_2_ = (short)stack_val_58 + -1;
    }
    else {
      if (speed != 3) goto LAB_0802550a;
      stack_val_5c._0_2_ = (short)stack_val_5c + 1;
      stack_val_58._0_2_ = (short)stack_val_58 + 1;
    }
    u_val5 = stack_val_5c;
    u_val1 = stack_val_58;
  }
LAB_0802550a:
  stack_val_58 = u_val1;
  stack_val_5c = u_val5;
  i_val8 = speed;
  if (-1 < speed) {
    if (speed < 2) {
      stack_val_34 = Entity_Routine_080251FC(entity,stack_buf_74,&stack_val_5c,0xffffffff,8);
      if (stack_val_34 < 9) {
        stack_val_4c = -(short)stack_val_34 + (short)stack_val_68;
        stack_val_4a = stack_val_68._2_2_;
        stack_val_48 = -(short)stack_val_34 + (short)stack_val_64;
        stack_val_46 = stack_val_64._2_2_;
        c_char2 = NPC_Routine_080AC070(stack_buf_74);
        if (c_char2 != '\x01') {
          i_val8 = 2;
          goto LAB_08025664;
        }
      }
      stack_val_34 = Entity_Routine_080251FC(entity,stack_buf_74,&stack_val_5c,1,8);
      u_val6 = stack_val_34;
      if (stack_val_34 < 9) {
        stack_val_44 = (short)stack_val_68 + (short)stack_val_34;
        stack_val_42 = stack_val_68._2_2_;
        stack_val_40 = (short)stack_val_34 + (short)stack_val_64;
        stack_val_3e = stack_val_64._2_2_;
        stack_val_34 = u_val6;
        c_char2 = NPC_Routine_080AC070(stack_buf_74);
        if (c_char2 != '\x01') {
          i_val8 = 3;
        }
      }
    }
    else if (speed < 4) {
      stack_val_34 = Entity_Routine_08025248(entity,stack_buf_74,&stack_val_5c,0xffffffff,8);
      if (stack_val_34 < 9) {
        stack_val_54 = (short)stack_val_68;
        stack_val_52 = -(short)stack_val_34 + stack_val_68._2_2_;
        stack_val_50 = (short)stack_val_64;
        stack_val_4e = -(short)stack_val_34 + stack_val_64._2_2_;
        c_char2 = NPC_Routine_080AC070(stack_buf_74);
        if (c_char2 != '\x01') {
          i_val8 = 1;
          goto LAB_08025664;
        }
      }
      stack_val_34 = Entity_Routine_08025248(entity,stack_buf_74,&stack_val_5c,1,8);
      u_val6 = stack_val_34;
      if (stack_val_34 < 9) {
        stack_val_3c = (short)stack_val_68;
        stack_val_3a = (short)stack_val_34 + stack_val_68._2_2_;
        stack_val_38 = (short)stack_val_64;
        stack_val_36 = (short)stack_val_34 + stack_val_64._2_2_;
        stack_val_34 = u_val6;
        c_char2 = NPC_Routine_080AC070(stack_buf_74);
        if (c_char2 != '\x01') {
          i_val8 = 0;
        }
      }
    }
  }
LAB_08025664:
  if ((((i_val8 != speed) && (stack_val_34 < 4)) || (stack_val_2c != 2)) ||
     ((*(char *)((int)entity + 0x3e) != '\x02' ||
      (c_char2 = Entity_Routine_08025294(entity,stack_buf_74,speed,&stack_val_68), c_char2 == '\0')))) {
    if (i_val8 != speed) {
      p_uint7 = &stack_val_34;
      if (stack_val_30 < stack_val_34) {
        p_uint7 = &stack_val_30;
      }
      u_val6 = *p_uint7;
      if (i_val8 == 1) {
        stack_val_24 = stack_val_24 - u_val6;
      }
      else if (i_val8 < 2) {
        if (i_val8 == 0) {
          stack_val_24 = stack_val_24 + u_val6;
        }
      }
      else if (i_val8 == 2) {
        stack_val_28 = stack_val_28 - u_val6;
      }
      else if (i_val8 == 3) {
        stack_val_28 = stack_val_28 + u_val6;
      }
    }
    goto LAB_080257b2;
  }
  p_int4 = (int *)_call_via_r1((int *)*entity,*(undefined4 *)(*(int *)*entity + 0x14c));
  end_ptr = (undefined4 *)p_int4[1];
  p_char12 = (char *)(entity + 0xf);
  for (curr_ptr = (undefined4 *)*p_int4; curr_ptr != end_ptr; curr_ptr = curr_ptr + 1) {
    c_char2 = HW_Routine_08008CD0(*curr_ptr);
    if (c_char2 == '\0') {
      u_val5 = *curr_ptr;
      goto LAB_080256c4;
    }
  }
  u_val5 = end_ptr[-1];
LAB_080256c4:
  HW_Routine_08008B6C(u_val5,0x69);
  i_val8 = 0;
  s_val10 = 0;
  s_val3 = (short)stack_val_24;
  if (speed == 1) {
    i_val8 = -(((int)stack_val_64._2_2_ - (int)stack_val_68._2_2_) + 0x10);
LAB_08025732:
    s_val10 = s_val3 + (short)i_val8;
  }
  else {
    if (1 < speed) {
      if (speed == 2) {
        i_val8 = -(((int)(short)stack_val_64 - (int)(short)stack_val_68) + 0x10);
      }
      else {
        if (speed != 3) goto LAB_08025734;
        i_val8 = ((int)(short)stack_val_64 - (int)(short)stack_val_68) + 0x10;
      }
      s_val3 = (short)stack_val_28;
      goto LAB_08025732;
    }
    if (speed == 0) {
      i_val8 = ((int)stack_val_64._2_2_ - (int)stack_val_68._2_2_) + 0x10;
      goto LAB_08025732;
    }
  }
LAB_08025734:
  if (*p_char12 == '\0') {
    *p_char12 = ',';
    entity[0x20] = i_val8 << 0xc;
  }
  else {
    if (*p_char12 != '\a') goto LAB_080257b2;
    *p_char12 = '-';
    u_val5 = math_udivsi3(i_val8 << 0x10,0xc);
    entity[0x20] = u_val5;
  }
  *(short *)(entity + 0x21) = s_val10;
LAB_080257b2:
  entity[2] = stack_val_28 << 0x10;
  entity[3] = stack_val_24 << 0x10;
  return;
}

// =============================================================================
// Function: Entity_Routine_080257D0 @ 0x080257D0
// =============================================================================
void Entity_Routine_080257D0(undefined4 *entity,char speed)

{
  char c_char1;
  int i_val2;
  int *p_int3;
  undefined4 u_val4;
  undefined4 *curr_ptr;
  undefined4 *end_ptr;
  
  if (speed == '\0') {
    i_val2 = Farmer_CycleHeldItemBack(entity[0xe]);
  }
  else {
    i_val2 = Farmer_CycleHeldItemFront(entity[0xe]);
  }
  if (i_val2 != 0) {
    *(undefined1 *)(entity + 0xf) = 0x13;
    Entity_Routine_0802A7D8(entity);
    p_int3 = (int *)_call_via_r1((int *)*entity,*(undefined4 *)(*(int *)*entity + 0x14c));
    end_ptr = (undefined4 *)p_int3[1];
    for (curr_ptr = (undefined4 *)*p_int3; curr_ptr != end_ptr; curr_ptr = curr_ptr + 1) {
      c_char1 = HW_Routine_08008CD0(*curr_ptr);
      if (c_char1 == '\0') {
        u_val4 = *curr_ptr;
        goto LAB_0802582c;
      }
    }
    u_val4 = end_ptr[-1];
LAB_0802582c:
    HW_Routine_08008B6C(u_val4,0x6b);
  }
  return;
}

// =============================================================================
// Function: Entity_Routine_08025838 @ 0x08025838
// =============================================================================
void Entity_Routine_08025838(undefined4 *entity,char speed)

{
  char c_char1;
  int i_val2;
  int *p_int3;
  undefined4 u_val4;
  undefined4 *curr_ptr;
  undefined4 *end_ptr;
  
  if (speed == '\0') {
    i_val2 = Farmer_CycleHeldItemBack(entity[0xe]);
  }
  else {
    i_val2 = Farmer_CycleHeldItemFront(entity[0xe]);
  }
  if (i_val2 != 0) {
    Entity_Routine_0802A588(entity);
    *(undefined1 *)(entity + 0xf) = 0x14;
    p_int3 = (int *)_call_via_r1((int *)*entity,*(undefined4 *)(*(int *)*entity + 0x14c));
    end_ptr = (undefined4 *)p_int3[1];
    for (curr_ptr = (undefined4 *)*p_int3; curr_ptr != end_ptr; curr_ptr = curr_ptr + 1) {
      c_char1 = HW_Routine_08008CD0(*curr_ptr);
      if (c_char1 == '\0') {
        u_val4 = *curr_ptr;
        goto LAB_08025894;
      }
    }
    u_val4 = end_ptr[-1];
LAB_08025894:
    HW_Routine_08008B6C(u_val4,0x6b);
  }
  return;
}

// =============================================================================
// Function: Entity_Routine_080258A0 @ 0x080258A0
// =============================================================================
void Entity_Routine_080258A0(undefined4 *entity)

{
  char c_char1;
  undefined1 u_val2;
  int i_val3;
  undefined4 *p_uint4;
  int *p_int5;
  undefined4 u_val6;
  undefined4 *p_uint7;
  undefined4 stack_val_10;
  
  HeldItem_ToRucksackItem(&stack_val_10,entity[0xe] + 0x54);
  c_char1 = Farmer_Routine_0800F06C(&stack_val_10);
  if (c_char1 == '\0') {
    i_val3 = Farmer_Routine_0800F634(entity[0xe] + 0x60);
    if (i_val3 != -1) {
      p_uint4 = (undefined4 *)Farmer_Routine_0800FCDC(entity[0xe] + 0x60);
      *p_uint4 = stack_val_10;
      HeldItem_Clear(entity[0xe] + 0x54);
      *(undefined1 *)(entity + 0xf) = 0x12;
      Entity_Routine_0802A7D8(entity);
      p_int5 = (int *)_call_via_r1((int *)*entity,*(undefined4 *)(*(int *)*entity + 0x14c));
      p_uint4 = (undefined4 *)*p_int5;
      p_uint7 = (undefined4 *)p_int5[1];
      do {
        if (p_uint4 == p_uint7) {
          u_val6 = p_uint7[-1];
LAB_0802591e:
          HW_Routine_08008B6C(u_val6,0x6b);
          return;
        }
        c_char1 = HW_Routine_08008CD0(*p_uint4);
        if (c_char1 == '\0') {
          u_val6 = *p_uint4;
          goto LAB_0802591e;
        }
        p_uint4 = p_uint4 + 1;
      } while( true );
    }
    u_val2 = 4;
  }
  else {
    u_val2 = 0;
  }
  *(undefined1 *)(entity + 0xf) = u_val2;
  return;
}

// =============================================================================
// Function: Entity_Routine_08025944 @ 0x08025944
// =============================================================================
u32 Entity_Routine_08025944(int entity)

{
  char c_char1;
  undefined4 u_val2;
  undefined4 u_val3;
  int item_id;
  undefined1 temp_coords [4];
  
  item_id = *(int *)(entity + 0x38) + 0x5c;
  c_char1 = Product_GetId(item_id);
  if (c_char1 == '\0') {
    u_val3 = *(undefined4 *)(entity + 0x38);
    u_val2 = Product_Construct(item_id);
    temp_coords[0] = Farmer_GetUpgradedTool(u_val3,u_val2);
    item_id = Item_GetId(temp_coords);
    if (item_id - 5U < 0x29) {
      switch(*(uint *)(PTR_case_0802598C_08025988 + (item_id - 5U) * 4) & 0xfffffffe) {
      case 0x802598c:
      case 0x8025a30:
        u_val2 = 1;
        goto LAB_08025a36;
      }
    }
  }
  u_val2 = 0;
LAB_08025a36:
  return u_val2;
}

// =============================================================================
// Function: Entity_Routine_08025A40 @ 0x08025A40
// =============================================================================
void Entity_Routine_08025A40(undefined4 *entity,char speed)

{
  char c_char1;
  int *p_int2;
  undefined4 u_val3;
  int i_val4;
  undefined4 *curr_ptr;
  undefined4 *end_ptr;
  
  c_char1 = Entity_Routine_08025944();
  if (c_char1 == '\0') {
    if (speed == '\0') {
      i_val4 = Farmer_CycleToolBack(entity[0xe]);
    }
    else {
      i_val4 = Farmer_CycleToolFront(entity[0xe]);
    }
    if (i_val4 != 0) {
      *(undefined1 *)(entity + 0xf) = 0x15;
      *(undefined1 *)((int)entity + 0x3d) = 0x14;
      Entity_Routine_0802A510(entity);
      p_int2 = (int *)_call_via_r1((int *)*entity,*(undefined4 *)(*(int *)*entity + 0x14c));
      end_ptr = (undefined4 *)p_int2[1];
      for (curr_ptr = (undefined4 *)*p_int2; curr_ptr != end_ptr; curr_ptr = curr_ptr + 1) {
        c_char1 = HW_Routine_08008CD0(*curr_ptr);
        if (c_char1 == '\0') {
          u_val3 = *curr_ptr;
          goto LAB_08025aee;
        }
      }
      u_val3 = end_ptr[-1];
LAB_08025aee:
      HW_Routine_08008B6C(u_val3,0xbc);
    }
  }
  else {
    p_int2 = (int *)_call_via_r1((int *)*entity,*(undefined4 *)(*(int *)*entity + 0x14c));
    end_ptr = (undefined4 *)p_int2[1];
    for (curr_ptr = (undefined4 *)*p_int2; curr_ptr != end_ptr; curr_ptr = curr_ptr + 1) {
      c_char1 = HW_Routine_08008CD0(*curr_ptr);
      if (c_char1 == '\0') {
        u_val3 = *curr_ptr;
        goto LAB_08025a82;
      }
    }
    u_val3 = end_ptr[-1];
LAB_08025a82:
    HW_Routine_08008B6C(u_val3,199);
    *(undefined1 *)(entity + 0xf) = 0;
  }
  return;
}

// =============================================================================
// Function: Entity_Routine_08025AFC @ 0x08025AFC
// =============================================================================
u32 Entity_Routine_08025AFC(int entity)

{
  
  return (uint)(*(ushort *)(entity + 4) < 9);
}

// =============================================================================
// Function: Entity_Routine_08025B10 @ 0x08025B10
// =============================================================================
u32 Entity_Routine_08025B10(int entity)

{
  ushort u_val1;
  char c_char2;
  int i_val3;
  int i_val4;
  
  i_val4 = 0;
  c_char2 = Entity_Routine_08025AFC();
  if ((c_char2 != '\0') && (*(int *)(*(int *)(entity + 0x34) + 8) - 1U < 2)) {
    i_val4 = 1;
  }
  u_val1 = *(ushort *)(*(int *)(entity + 0x34) + 0x12);
  if (0x15 < (u_val1 & 0x1f)) {
    i_val4 = i_val4 + 1;
  }
  if ((u_val1 & 0x1f) < 6) {
    i_val4 = i_val4 + 2;
  }
  i_val3 = Farmer_GetStamina(*(undefined4 *)(entity + 0x38));
  if (i_val3 == 0) {
    i_val4 = i_val4 + 2;
  }
  c_char2 = Entity_Routine_08025944(entity);
  if (c_char2 != '\0') {
    i_val4 = i_val4 + 10;
  }
  return i_val4;
}

// =============================================================================
// Function: Entity_Routine_08025B64 @ 0x08025B64
// =============================================================================
void Entity_Routine_08025B64(undefined4 *entity,uint speed,undefined4 collision,int flags)

{
  char c_char1;
  int *p_int2;
  int i_val3;
  undefined4 u_val4;
  undefined4 *p_uint5;
  undefined1 *p_uint6;
  undefined4 *p_uint7;
  int i_val8;
  int saved_r7;
  undefined1 stack_buf_38 [4];
  uint3 stack_val_34;
  undefined1 stack_val_30;
  undefined1 stack_val_2f;
  undefined1 stack_val_2e;
  undefined1 stack_val_2d;
  undefined1 stack_val_2c;
  undefined1 stack_val_2b;
  undefined1 stack_val_2a;
  undefined1 stack_buf_29 [22];
  undefined1 stack_buf_13 [3];
  
  if (0x22 < speed) goto case_08025C08;
  switch(*(uint *)(PTR_case_08025B7C_08025b78 + speed * 4) & 0xfffffffe) {
  case 0x8025b7c:
    entity = (undefined4 *)(uint)*(byte *)(flags + saved_r7);
  case 0x8025c08:
case_08025C08:
    *(undefined1 *)(entity + 0xf) = 0;
    return;
  case 0x8025c12:
    _call_via_r1(entity,*(undefined4 *)(entity[5] + 0x80));
    return;
  case 0x8025c20:
    p_uint6 = &stack_val_30;
    u_val4 = 5;
    goto LAB_08025c56;
  case 0x8025c28:
    p_uint6 = &stack_val_2f;
    u_val4 = 0xd;
    goto LAB_08025c56;
  case 0x8025c32:
    p_uint6 = &stack_val_2e;
    u_val4 = 0x15;
    goto LAB_08025c56;
  case 0x8025c3c:
    p_uint6 = &stack_val_2d;
    u_val4 = 0x1d;
    goto LAB_08025c56;
  case 0x8025c46:
    p_uint6 = &stack_val_2c;
    u_val4 = 0x25;
    goto LAB_08025c56;
  case 0x8025c4e:
    p_uint6 = &stack_val_2b;
    u_val4 = 0x2d;
LAB_08025c56:
    Item_SetId(p_uint6,u_val4);
    Entity_Routine_0802720C(entity,p_uint6);
    return;
  case 0x8025c68:
    Item_SetId(&stack_val_2a,0x4d);
    Entity_Routine_0802720C(entity,&stack_val_2a);
    p_int2 = (int *)_call_via_r1((int *)*entity,*(undefined4 *)(*(int *)*entity + 0x14c));
    p_uint5 = (undefined4 *)*p_int2;
    p_uint7 = (undefined4 *)p_int2[1];
    do {
      if (p_uint5 == p_uint7) {
        u_val4 = p_uint7[-1];
LAB_08025caa:
        HW_Routine_08008B6C(u_val4,0xb6);
        return;
      }
      c_char1 = HW_Routine_08008CD0(*p_uint5);
      if (c_char1 == '\0') {
        u_val4 = *p_uint5;
        goto LAB_08025caa;
      }
      p_uint5 = p_uint5 + 1;
    } while( true );
  case 0x8025cb2:
    i_val3 = math_rand();
    i_val8 = i_val3;
    if (i_val3 < 0) {
      i_val8 = i_val3 + 0xf;
    }
    Entity_Routine_0802771C(entity,i_val3 + (i_val8 >> 4) * -0x10 + 5);
    return;
  case 0x8025cce:
    i_val8 = entity[5];
    Item_SetIdAndClearQuality(&stack_val_34,0x36);
    Farmer_Routine_0800F004(stack_buf_38,(uint)stack_val_34);
    goto LAB_08025dfe;
  case 0x8025cf8:
    i_val8 = entity[5];
    p_uint6 = stack_buf_29;
    u_val4 = 0x11;
    break;
  case 0x8025d04:
    i_val8 = entity[5];
    p_uint6 = stack_buf_29 + 1;
    u_val4 = 0x12;
    break;
  case 0x8025d0e:
    i_val8 = entity[5];
    p_uint6 = stack_buf_29 + 2;
    u_val4 = 0x13;
    break;
  case 0x8025d1a:
    i_val8 = entity[5];
    p_uint6 = stack_buf_29 + 3;
    u_val4 = 0x14;
    break;
  case 0x8025d26:
    i_val8 = entity[5];
    p_uint6 = stack_buf_29 + 4;
    u_val4 = 0x15;
    break;
  case 0x8025d32:
    i_val8 = entity[5];
    p_uint6 = stack_buf_29 + 5;
    u_val4 = 0x16;
    break;
  case 0x8025d3c:
    i_val8 = entity[5];
    p_uint6 = stack_buf_29 + 6;
    u_val4 = 0x17;
    break;
  case 0x8025d48:
    i_val8 = entity[5];
    p_uint6 = stack_buf_29 + 7;
    u_val4 = 0x18;
    break;
  case 0x8025d54:
    i_val8 = entity[5];
    p_uint6 = stack_buf_29 + 8;
    u_val4 = 0x19;
    break;
  case 0x8025d60:
    i_val8 = entity[5];
    p_uint6 = stack_buf_29 + 9;
    u_val4 = 0x1a;
    break;
  case 0x8025d6a:
    i_val8 = entity[5];
    p_uint6 = stack_buf_29 + 10;
    u_val4 = 0x1b;
    break;
  case 0x8025d76:
    i_val8 = entity[5];
    p_uint6 = stack_buf_29 + 0xb;
    u_val4 = 0x1c;
    break;
  case 0x8025d82:
    i_val8 = entity[5];
    p_uint6 = stack_buf_29 + 0xc;
    u_val4 = 0x1d;
    break;
  case 0x8025d8e:
    i_val8 = entity[5];
    p_uint6 = stack_buf_29 + 0xd;
    u_val4 = 0x1e;
    break;
  case 0x8025d98:
    i_val8 = entity[5];
    p_uint6 = stack_buf_29 + 0xe;
    u_val4 = 0x1f;
    break;
  case 0x8025da4:
    i_val8 = entity[5];
    p_uint6 = stack_buf_29 + 0xf;
    u_val4 = 0x20;
    break;
  case 0x8025db0:
    i_val8 = entity[5];
    p_uint6 = stack_buf_29 + 0x10;
    u_val4 = 0x21;
    break;
  case 0x8025dbc:
    i_val8 = entity[5];
    p_uint6 = stack_buf_29 + 0x11;
    u_val4 = 0x22;
    break;
  case 0x8025dc6:
    i_val8 = entity[5];
    p_uint6 = stack_buf_29 + 0x12;
    u_val4 = 0x23;
    break;
  case 0x8025dd2:
    i_val8 = entity[5];
    p_uint6 = stack_buf_29 + 0x13;
    u_val4 = 0x24;
    break;
  case 0x8025dde:
    i_val8 = entity[5];
    p_uint6 = stack_buf_29 + 0x14;
    u_val4 = 0x25;
    break;
  case 0x8025dea:
    i_val8 = entity[5];
    p_uint6 = stack_buf_29 + 0x15;
    u_val4 = 0x26;
    break;
  case 0x8025e0c:
    i_val8 = entity[5];
    Item_SetQuality(stack_buf_13,0x33);
    Farmer_Routine_0800F040(stack_buf_38,stack_buf_13[0]);
    _call_via_r3(entity,stack_buf_38,0,*(undefined4 *)(i_val8 + 0x5c));
    return;
  }
  Item_SetQuality(p_uint6,u_val4);
  Farmer_Routine_0800F040(stack_buf_38,*p_uint6);
LAB_08025dfe:
  _call_via_r3(entity,stack_buf_38,0,*(undefined4 *)(i_val8 + 0x5c));
  return;
}

// =============================================================================
// Function: Entity_Routine_08025E38 @ 0x08025E38
// =============================================================================
void Entity_Routine_08025E38(undefined4 *entity)

{
  byte mood_byte;
  char c_char2;
  int *p_int3;
  undefined4 u_val4;
  undefined4 *p_uint5;
  undefined4 *p_uint6;
  
  Farmer_Routine_0800F4C0(entity[0xe] + 0x54);
  Entity_Routine_0802A588(entity);
  *(undefined1 *)(entity + 0xf) = 0x11;
  u_val4 = 0xFFF60000;
  mood_byte = *(byte *)(entity + 8);
  if (mood_byte == 1) {
    entity[0x23] = 0;
LAB_08025ebe:
    entity[0x24] = u_val4;
  }
  else {
    if (mood_byte < 2) {
      if (mood_byte != 0) goto LAB_08025ec2;
      u_val4 = 0xa0000;
      entity[0x23] = 0;
      goto LAB_08025ebe;
    }
    if (mood_byte == 2) {
      entity[0x23] = 0xFFF60000;
      entity[0x24] = 0;
    }
    else {
      if (mood_byte != 3) goto LAB_08025ec2;
      entity[0x23] = 0xa0000;
      entity[0x24] = 0;
    }
  }
  entity[0x27] = 0xc0000;
LAB_08025ec2:
  p_int3 = (int *)_call_via_r1((int *)*entity,*(undefined4 *)(*(int *)*entity + 0x14c));
  p_uint5 = (undefined4 *)*p_int3;
  p_uint6 = (undefined4 *)p_int3[1];
  do {
    if (p_uint5 == p_uint6) {
      u_val4 = p_uint6[-1];
LAB_08025ef0:
      HW_Routine_08008B6C(u_val4,0x6a);
      return;
    }
    c_char2 = HW_Routine_08008CD0(*p_uint5);
    if (c_char2 == '\0') {
      u_val4 = *p_uint5;
      goto LAB_08025ef0;
    }
    p_uint5 = p_uint5 + 1;
  } while( true );
}

// =============================================================================
// Function: Entity_Routine_08025EFC @ 0x08025EFC
// =============================================================================
void Entity_Routine_08025EFC(undefined4 *entity,undefined1 speed)

{
  byte mood_byte;
  char c_char2;
  int *p_int3;
  undefined4 u_val4;
  undefined4 *p_uint5;
  undefined4 *p_uint6;
  
  Farmer_Routine_0800F4F0(entity[0xe] + 0x54,speed);
  Entity_Routine_0802A588(entity);
  *(undefined1 *)(entity + 0xf) = 0x11;
  u_val4 = 0xFFF60000;
  mood_byte = *(byte *)(entity + 8);
  if (mood_byte == 1) {
    entity[0x23] = 0;
LAB_08025f86:
    entity[0x24] = u_val4;
  }
  else {
    if (mood_byte < 2) {
      if (mood_byte != 0) goto LAB_08025f8a;
      u_val4 = 0xa0000;
      entity[0x23] = 0;
      goto LAB_08025f86;
    }
    if (mood_byte == 2) {
      entity[0x23] = 0xFFF60000;
      entity[0x24] = 0;
    }
    else {
      if (mood_byte != 3) goto LAB_08025f8a;
      entity[0x23] = 0xa0000;
      entity[0x24] = 0;
    }
  }
  entity[0x27] = 0xc0000;
LAB_08025f8a:
  p_int3 = (int *)_call_via_r1((int *)*entity,*(undefined4 *)(*(int *)*entity + 0x14c));
  p_uint5 = (undefined4 *)*p_int3;
  p_uint6 = (undefined4 *)p_int3[1];
  do {
    if (p_uint5 == p_uint6) {
      u_val4 = p_uint6[-1];
LAB_08025fb8:
      HW_Routine_08008B6C(u_val4,0x6a);
      return;
    }
    c_char2 = HW_Routine_08008CD0(*p_uint5);
    if (c_char2 == '\0') {
      u_val4 = *p_uint5;
      goto LAB_08025fb8;
    }
    p_uint5 = p_uint5 + 1;
  } while( true );
}

// =============================================================================
// Function: Entity_Routine_08025FC4 @ 0x08025FC4
// =============================================================================
void Entity_Routine_08025FC4(undefined4 *entity)

{
  byte mood_byte;
  char c_char2;
  int *p_int3;
  undefined4 u_val4;
  undefined4 *p_uint5;
  undefined4 *p_uint6;
  
  Farmer_Routine_0800F4D8(entity[0xe] + 0x54);
  Entity_Routine_0802A588(entity);
  *(undefined1 *)(entity + 0xf) = 0x11;
  u_val4 = 0xFFF60000;
  mood_byte = *(byte *)(entity + 8);
  if (mood_byte == 1) {
    entity[0x23] = 0;
LAB_0802604a:
    entity[0x24] = u_val4;
  }
  else {
    if (mood_byte < 2) {
      if (mood_byte != 0) goto LAB_0802604e;
      u_val4 = 0xa0000;
      entity[0x23] = 0;
      goto LAB_0802604a;
    }
    if (mood_byte == 2) {
      entity[0x23] = 0xFFF60000;
      entity[0x24] = 0;
    }
    else {
      if (mood_byte != 3) goto LAB_0802604e;
      entity[0x23] = 0xa0000;
      entity[0x24] = 0;
    }
  }
  entity[0x27] = 0xc0000;
LAB_0802604e:
  p_int3 = (int *)_call_via_r1((int *)*entity,*(undefined4 *)(*(int *)*entity + 0x14c));
  p_uint5 = (undefined4 *)*p_int3;
  p_uint6 = (undefined4 *)p_int3[1];
  do {
    if (p_uint5 == p_uint6) {
      u_val4 = p_uint6[-1];
LAB_0802607c:
      HW_Routine_08008B6C(u_val4,0x6a);
      return;
    }
    c_char2 = HW_Routine_08008CD0(*p_uint5);
    if (c_char2 == '\0') {
      u_val4 = *p_uint5;
      goto LAB_0802607c;
    }
    p_uint5 = p_uint5 + 1;
  } while( true );
}

// =============================================================================
// Function: Entity_Routine_08026088 @ 0x08026088
// =============================================================================
void Entity_Routine_08026088(undefined4 *entity,undefined2 speed)

{
  byte mood_byte;
  char c_char2;
  int *p_int3;
  undefined4 u_val4;
  undefined4 *p_uint5;
  undefined4 *p_uint6;
  
  Farmer_Routine_0800F510(entity[0xe] + 0x54,speed);
  Entity_Routine_0802A588(entity);
  *(undefined1 *)(entity + 0xf) = 0x11;
  u_val4 = 0xFFF60000;
  mood_byte = *(byte *)(entity + 8);
  if (mood_byte == 1) {
    entity[0x23] = 0;
LAB_08026112:
    entity[0x24] = u_val4;
  }
  else {
    if (mood_byte < 2) {
      if (mood_byte != 0) goto LAB_08026116;
      u_val4 = 0xa0000;
      entity[0x23] = 0;
      goto LAB_08026112;
    }
    if (mood_byte == 2) {
      entity[0x23] = 0xFFF60000;
      entity[0x24] = 0;
    }
    else {
      if (mood_byte != 3) goto LAB_08026116;
      entity[0x23] = 0xa0000;
      entity[0x24] = 0;
    }
  }
  entity[0x27] = 0xc0000;
LAB_08026116:
  p_int3 = (int *)_call_via_r1((int *)*entity,*(undefined4 *)(*(int *)*entity + 0x14c));
  p_uint5 = (undefined4 *)*p_int3;
  p_uint6 = (undefined4 *)p_int3[1];
  do {
    if (p_uint5 == p_uint6) {
      u_val4 = p_uint6[-1];
LAB_08026144:
      HW_Routine_08008B6C(u_val4,0x6a);
      return;
    }
    c_char2 = HW_Routine_08008CD0(*p_uint5);
    if (c_char2 == '\0') {
      u_val4 = *p_uint5;
      goto LAB_08026144;
    }
    p_uint5 = p_uint5 + 1;
  } while( true );
}

// =============================================================================
// Function: Entity_Routine_08026150 @ 0x08026150
// =============================================================================
void Entity_Routine_08026150(undefined4 *entity,undefined4 *speed,char collision)

{
  byte mood_byte;
  char c_char2;
  int i_val3;
  int i_val4;
  undefined4 u_val5;
  int *p_int6;
  undefined1 *p_uint7;
  undefined4 *p_uint8;
  undefined4 *p_uint9;
  uint3 stack_val_24;
  undefined4 stack_val_20;
  undefined1 stack_val_1c;
  undefined1 stack_val_1b;
  undefined1 stack_buf_1a [2];
  
  Item_Routine_0800E0F0(&stack_val_1c);
  i_val3 = Farmer_Routine_0800F09C(speed);
  if (i_val3 == 0) {
    p_uint7 = &stack_val_1b;
    Farmer_Routine_0800F0A4(&stack_val_24,speed);
    Item_Routine_0800E0FC(p_uint7,(uint)stack_val_24);
LAB_080261b8:
    stack_val_1c = *p_uint7;
  }
  else if (i_val3 == 1) {
    p_uint7 = stack_buf_1a;
    u_val5 = Farmer_Routine_0800F0E8(speed);
    Item_Routine_0800E148(p_uint7,u_val5);
    goto LAB_080261b8;
  }
  i_val3 = entity[0xd];
  i_val4 = Item_Routine_0800E198(&stack_val_1c);
  if (i_val4 != 0) {
    u_val5 = Item_Routine_0800E194(&stack_val_1c);
    c_char2 = ShippingBin_GetValueShipped(i_val3 + 0x54,u_val5);
    if (c_char2 == '\0') {
      u_val5 = Item_Routine_0800E194(&stack_val_1c);
      ShippingBin_ResetValueShipped(i_val3 + 0x54,u_val5);
    }
  }
  stack_val_20 = *speed;
  HeldItem_FromRucksackItem(entity[0xe] + 0x54);
  if (collision != '\0') {
    HeldItem_CanThrow(entity[0xe] + 0x54);
  }
  Entity_Routine_0802A588(entity);
  *(undefined1 *)(entity + 0xf) = 0x11;
  u_val5 = 0xFFF60000;
  mood_byte = *(byte *)(entity + 8);
  if (mood_byte == 1) {
    entity[0x23] = 0;
LAB_0802627e:
    entity[0x24] = u_val5;
  }
  else {
    if (mood_byte < 2) {
      if (mood_byte != 0) goto LAB_08026282;
      u_val5 = 0xa0000;
      entity[0x23] = 0;
      goto LAB_0802627e;
    }
    if (mood_byte == 2) {
      entity[0x23] = 0xFFF60000;
      entity[0x24] = 0;
    }
    else {
      if (mood_byte != 3) goto LAB_08026282;
      entity[0x23] = 0xa0000;
      entity[0x24] = 0;
    }
  }
  entity[0x27] = 0xc0000;
LAB_08026282:
  p_int6 = (int *)_call_via_r1((int *)*entity,*(undefined4 *)(*(int *)*entity + 0x14c));
  p_uint8 = (undefined4 *)*p_int6;
  p_uint9 = (undefined4 *)p_int6[1];
  do {
    if (p_uint8 == p_uint9) {
      u_val5 = p_uint9[-1];
LAB_080262b0:
      HW_Routine_08008B6C(u_val5,0x6a);
      return;
    }
    c_char2 = HW_Routine_08008CD0(*p_uint8);
    if (c_char2 == '\0') {
      u_val5 = *p_uint8;
      goto LAB_080262b0;
    }
    p_uint8 = p_uint8 + 1;
  } while( true );
}

// =============================================================================
// Function: Entity_Routine_080262C4 @ 0x080262C4
// =============================================================================
u32 Entity_Routine_080262C4(int entity)

{
  char c_char1;
  int i_val2;
  undefined4 u_val3;
  byte *pbVar4;
  int i_val5;
  uint3 stack_val_14;
  byte stack_bytes_10 [4];
  
  i_val5 = *(int *)(entity + 0x34) + 0x1C2C;
  c_char1 = HeldItem_IsEmpty(i_val5);
  if ((c_char1 == '\0') && (c_char1 = HeldItem_IsValid(i_val5), c_char1 == '\0')) {
    i_val2 = HeldItem_GetKind(i_val5);
    if (i_val2 == 0) {
      pbVar4 = stack_bytes_10;
      HeldItem_GetFood(&stack_val_14,i_val5);
      Item_Routine_0800E0FC(pbVar4,(uint)stack_val_14);
      goto LAB_08026342;
    }
    if (i_val2 == 1) {
      pbVar4 = stack_bytes_10 + 1;
      u_val3 = HeldItem_GetArticle(i_val5);
      Item_Routine_0800E148(pbVar4,u_val3);
      goto LAB_08026342;
    }
  }
  pbVar4 = stack_bytes_10 + 2;
  Item_Routine_0800E0F0(pbVar4);
LAB_08026342:
  return (uint)*pbVar4;
}

// =============================================================================
// Function: Entity_Routine_0802634C @ 0x0802634C
// =============================================================================
void Entity_Routine_0802634C(undefined4 *entity)

{
  byte b_flag1;
  undefined1 u_val2;
  char c_char3;
  undefined2 u_val4;
  undefined4 u_val5;
  uint u_val6;
  int i_val8;
  int *p_int9;
  undefined4 *p_uint10;
  undefined2 u_val11;
  undefined4 *p_uint12;
  undefined1 stack_val_1c;
  undefined1 stack_buf_1b [7];
  undefined1 *p_uint7;
  
  p_uint7 = &stack_val_1c;
  Farmer_SetFatiguedFlag(entity[0xe]);
  *(undefined1 *)(entity + 0x22) = 1;
  *(undefined1 *)((int)entity + 0x89) = 0;
  entity[0x23] = 0xFFF80000;
  entity[0x24] = 0;
  entity[0x27] = 0x110000;
  p_uint10 = (undefined4 *)entity[4];
  if (p_uint10 != (undefined4 *)0x0) {
    u_val5 = _call_via_r1(*(int **)*p_uint10,*(undefined4 *)(**(int **)*p_uint10 + 100));
    Animal_Routine_0805E850(p_uint10 + 0x2d,u_val5,0x1DD);
    *(undefined1 *)(p_uint10 + 0x32) = 1;
    *(undefined1 *)((int)p_uint10 + 0xca) = 0;
    *(undefined1 *)((int)p_uint10 + 0xcb) = 1;
  }
  *(byte *)(entity + 0xf) = 0x2f;
  *(char *)((int)entity + 0x3d) = 'x';
  u_val11 = 0x192;
  *(short *)(entity + 0x1f) = (short)0xFFFF;
  u_val6 = (uint)*(byte *)(entity + 0xf);
  if (0x39 < u_val6) goto LAB_080267e4;
  switch(*(uint *)(u_val6 * 4 + gInlineTable_080263DC) & 0xfffffffe) {
  case 0x80264c4:
    c_char3 = HeldItem_IsEmpty(entity[0xe] + 0x54);
    if (c_char3 != '\0') {
      b_flag1 = *(byte *)((int)entity + 0x3e);
      if (b_flag1 == 1) {
        u_val11 = 0x132;
        if (*(char *)((int)entity + 0xb3) == '\0') {
          u_val11 = 0x1c6;
        }
        break;
      }
      if (1 < b_flag1) {
        if ((b_flag1 == 2) && (u_val11 = 0x132, *(char *)((int)entity + 0xb3) == '\0')) {
          u_val11 = 0x15e;
        }
        break;
      }
      if (b_flag1 != 0) break;
      goto case_08026624;
    }
    b_flag1 = *(byte *)((int)entity + 0x3e);
    if (b_flag1 != 1) {
      if (1 < b_flag1) {
        if (b_flag1 == 2) {
          u_val11 = 0x14e;
        }
        break;
      }
      goto joined_r0x08026598;
    }
    goto LAB_080267d0;
  case 0x8026538:
    c_char3 = HeldItem_IsEmpty(entity[0xe] + 0x54);
    if (c_char3 == '\0') goto case_080267AE;
    if (5 < *(byte *)((int)entity + 0x3f)) goto case_08026624;
    u_val11 = *(undefined2 *)
              (((uint)*(byte *)((int)entity + 0x3f) * 7 + (uint)*(byte *)(entity + 0x10)) * 2 +
              gRomData_080F0FCC);
    i_val8 = entity[0xe];
    u_val5 = Product_Construct(i_val8 + 0x5c);
    stack_val_1c = Farmer_GetUpgradedTool(i_val8,u_val5);
    goto LAB_080266a6;
  case 0x8026588:
    b_flag1 = HeldItem_IsEmpty(entity[0xe] + 0x54);
joined_r0x08026598:
    u_val11 = 0x192;
    if (b_flag1 != 0) break;
  case 0x80267ae:
case_080267AE:
    u_val11 = 0x152;
    break;
  case 0x802659e:
    c_char3 = HeldItem_IsEmpty(entity[0xe] + 0x54);
    u_val11 = 0x192;
    if (c_char3 == '\0') {
      u_val11 = 0x152;
    }
    break;
  case 0x80265b6:
    u_val11 = 0x136;
    break;
  case 0x80265bc:
    u_val11 = 0x19e;
    break;
  case 0x80265c2:
    u_val11 = 0x4e;
    break;
  case 0x80265c6:
    u_val11 = 0x46;
    break;
  case 0x80265ca:
    u_val11 = 0x13e;
    break;
  case 0x80265d0:
    u_val11 = 0x142;
    break;
  case 0x80265d6:
    u_val11 = *(undefined2 *)(entity + 0x11);
    i_val8 = entity[0xe];
    u_val5 = Product_Construct(i_val8 + 0x5c);
    u_val2 = Farmer_GetUpgradedTool(i_val8,u_val5);
    p_uint7 = stack_buf_1b;
    goto LAB_080266a4;
  case 0x80265f6:
    u_val11 = 0x1ea;
    i_val8 = entity[0xe];
    u_val5 = Product_Construct(i_val8 + 0x5c);
    u_val2 = Farmer_GetUpgradedTool(i_val8,u_val5);
    p_uint7 = stack_buf_1b + 1;
    goto LAB_080266a4;
  case 0x8026614:
    if (*(byte *)((int)entity + 0x4e) != *(byte *)((int)entity + 0x4f)) {
      u_val11 = 0x182;
      if ((uint)*(byte *)((int)entity + 0x4f) - (uint)*(byte *)((int)entity + 0x4e) == 1) {
        u_val11 = 0x186;
      }
      i_val8 = entity[0xe];
      u_val5 = Product_Construct(i_val8 + 0x5c);
      u_val2 = Farmer_GetUpgradedTool(i_val8,u_val5);
      p_uint7 = stack_buf_1b + 2;
      goto LAB_080266a4;
    }
  case 0x8026624:
case_08026624:
    u_val11 = 0x192;
    break;
  case 0x8026654:
    u_val11 = 0x76;
    i_val8 = entity[0xe];
    u_val5 = Product_Construct(i_val8 + 0x5c);
    u_val2 = Farmer_GetUpgradedTool(i_val8,u_val5);
    p_uint7 = stack_buf_1b + 3;
    goto LAB_080266a4;
  case 0x802666e:
    u_val11 = 0x6e;
    i_val8 = entity[0xe];
    u_val5 = Product_Construct(i_val8 + 0x5c);
    u_val2 = Farmer_GetUpgradedTool(i_val8,u_val5);
    p_uint7 = stack_buf_1b + 4;
    goto LAB_080266a4;
  case 0x802668a:
    u_val11 = 0x72;
    i_val8 = entity[0xe];
    u_val5 = Product_Construct(i_val8 + 0x5c);
    u_val2 = Farmer_GetUpgradedTool(i_val8,u_val5);
    p_uint7 = stack_buf_1b + 5;
LAB_080266a4:
    *p_uint7 = u_val2;
LAB_080266a6:
    u_val4 = ArticleStack_IsEmpty(p_uint7);
    *(undefined2 *)(entity + 0x1f) = u_val4;
    break;
  case 0x80266ae:
    u_val11 = 0x1fa;
    break;
  case 0x80266b4:
    u_val11 = 0x196;
    break;
  case 0x80266ba:
    u_val11 = 0x112;
    break;
  case 0x80266c0:
    u_val11 = 0x116;
    break;
  case 0x80266c6:
    i_val8 = _call_via_r2((int *)*entity,0x2c,*(undefined4 *)(*(int *)*entity + 0x40));
    b_flag1 = *(byte *)((int)entity + 0x3e);
    if (b_flag1 == 1) {
      u_val11 = 0xee;
      u_val6 = 0x77E;
    }
    else if (b_flag1 < 2) {
      if (b_flag1 != 0) break;
      u_val11 = 0xea;
      u_val6 = 0x77A;
    }
    else {
      if (b_flag1 != 2) break;
      u_val11 = 0xe6;
      u_val6 = 0x782;
    }
    goto LAB_08026792;
  case 0x8026710:
    u_val11 = 0x15a;
    i_val8 = _call_via_r2((int *)*entity,0x2c,*(undefined4 *)(*(int *)*entity + 0x40));
    u_val6 = 0x77A;
    goto LAB_08026792;
  case 0x802672c:
    u_val11 = 0x9a;
    i_val8 = _call_via_r2((int *)*entity,0x2c,*(undefined4 *)(*(int *)*entity + 0x40));
    u_val6 = 0x77A;
    goto LAB_08026792;
  case 0x8026744:
    u_val11 = 0x106;
    break;
  case 0x802674a:
    u_val11 = 0x102;
    break;
  case 0x8026750:
    u_val11 = 0xfe;
    break;
  case 0x8026754:
    u_val11 = 0xfa;
    break;
  case 0x8026758:
    u_val11 = 0x122;
    break;
  case 0x802675e:
    u_val11 = 0x11e;
    break;
  case 0x8026764:
    u_val11 = 0x11a;
    break;
  case 0x802676a:
    c_char3 = HeldItem_IsEmpty(entity[0xe] + 0x54);
    u_val11 = 0x14a;
    if (c_char3 != '\0') {
      u_val11 = 0x10a;
    }
    break;
  case 0x8026780:
    u_val11 = 0xe2;
    i_val8 = _call_via_r2((int *)*entity,0x2c,*(undefined4 *)(*(int *)*entity + 0x40));
    u_val6 = 0x792;
LAB_08026792:
    if (*(ushort *)(i_val8 + 0x22) != u_val6) {
      Entity_Routine_080321B0(i_val8);
    }
    break;
  case 0x80267a4:
    u_val11 = 0x3e;
    break;
  case 0x80267a8:
    u_val11 = 0x146;
    break;
  case 0x80267b4:
    u_val11 = 0x13a;
    break;
  case 0x80267ba:
    u_val11 = 0x42;
    break;
  case 0x80267be:
    c_char3 = HeldItem_IsEmpty(entity[0xe] + 0x54);
    u_val11 = 0x1c6;
    if (c_char3 != '\0') break;
LAB_080267d0:
    u_val11 = 0x156;
    break;
  case 0x80267da:
    u_val11 = 0xf6;
    if (*(char *)((int)entity + 0x3d) != '\0') {
      u_val11 = 0xf2;
    }
  }
LAB_080267e4:
  Entity_Routine_080321B0(entity,u_val11);
  p_int9 = (int *)_call_via_r1((int *)*entity,*(undefined4 *)(*(int *)*entity + 0x14c));
  p_uint10 = (undefined4 *)*p_int9;
  p_uint12 = (undefined4 *)p_int9[1];
  do {
    if (p_uint10 == p_uint12) {
      u_val5 = p_uint12[-1];
LAB_0802681e:
      HW_Routine_08008B6C(u_val5,0xb6);
      *(undefined1 *)(entity + 0x30) = 1;
      return;
    }
    c_char3 = HW_Routine_08008CD0(*p_uint10);
    if (c_char3 == '\0') {
      u_val5 = *p_uint10;
      goto LAB_0802681e;
    }
    p_uint10 = p_uint10 + 1;
  } while( true );
}

// =============================================================================
// Function: Entity_Routine_08026830 @ 0x08026830
// =============================================================================
void Entity_Routine_08026830(undefined4 *entity)

{
  byte b_flag1;
  undefined1 u_val2;
  char c_char3;
  undefined2 u_val4;
  undefined4 u_val5;
  uint u_val6;
  int i_val8;
  int *p_int9;
  undefined4 *p_uint10;
  undefined2 u_val11;
  undefined4 *p_uint12;
  undefined1 stack_val_1c;
  undefined1 stack_buf_1b [7];
  undefined1 *p_uint7;
  
  p_uint7 = &stack_val_1c;
  Farmer_EatPowerBerry(entity[0xe]);
  *(undefined1 *)(entity + 0x22) = 1;
  *(undefined1 *)((int)entity + 0x89) = 0;
  entity[0x23] = 0xFFF80000;
  entity[0x24] = 0;
  entity[0x27] = 0x110000;
  p_uint10 = (undefined4 *)entity[4];
  if (p_uint10 != (undefined4 *)0x0) {
    u_val5 = _call_via_r1(*(int **)*p_uint10,*(undefined4 *)(**(int **)*p_uint10 + 100));
    Animal_Routine_0805E850(p_uint10 + 0x2d,u_val5,0x15F);
    *(undefined1 *)(p_uint10 + 0x32) = 1;
    *(undefined1 *)((int)p_uint10 + 0xca) = 0;
    *(undefined1 *)((int)p_uint10 + 0xcb) = 1;
  }
  *(byte *)(entity + 0xf) = 0x2f;
  *(char *)((int)entity + 0x3d) = 'x';
  u_val11 = 0x192;
  *(short *)(entity + 0x1f) = (short)0xFFFF;
  u_val6 = (uint)*(byte *)(entity + 0xf);
  if (0x39 < u_val6) goto LAB_08026cc8;
  switch(*(uint *)(u_val6 * 4 + gInlineTable_080268C0) & 0xfffffffe) {
  case 0x80269a8:
    c_char3 = HeldItem_IsEmpty(entity[0xe] + 0x54);
    if (c_char3 != '\0') {
      b_flag1 = *(byte *)((int)entity + 0x3e);
      if (b_flag1 == 1) {
        u_val11 = 0x132;
        if (*(char *)((int)entity + 0xb3) == '\0') {
          u_val11 = 0x1c6;
        }
        break;
      }
      if (1 < b_flag1) {
        if ((b_flag1 == 2) && (u_val11 = 0x132, *(char *)((int)entity + 0xb3) == '\0')) {
          u_val11 = 0x15e;
        }
        break;
      }
      if (b_flag1 != 0) break;
      goto case_08026B08;
    }
    b_flag1 = *(byte *)((int)entity + 0x3e);
    if (b_flag1 != 1) {
      if (1 < b_flag1) {
        if (b_flag1 == 2) {
          u_val11 = 0x14e;
        }
        break;
      }
      goto joined_r0x08026a7c;
    }
    goto LAB_08026cb4;
  case 0x8026a1c:
    c_char3 = HeldItem_IsEmpty(entity[0xe] + 0x54);
    if (c_char3 == '\0') goto case_08026C92;
    if (5 < *(byte *)((int)entity + 0x3f)) goto case_08026B08;
    u_val11 = *(undefined2 *)
              (((uint)*(byte *)((int)entity + 0x3f) * 7 + (uint)*(byte *)(entity + 0x10)) * 2 +
              gRomData_080F0FCC);
    i_val8 = entity[0xe];
    u_val5 = Product_Construct(i_val8 + 0x5c);
    stack_val_1c = Farmer_GetUpgradedTool(i_val8,u_val5);
    goto LAB_08026b8a;
  case 0x8026a6c:
    b_flag1 = HeldItem_IsEmpty(entity[0xe] + 0x54);
joined_r0x08026a7c:
    u_val11 = 0x192;
    if (b_flag1 != 0) break;
  case 0x8026c92:
case_08026C92:
    u_val11 = 0x152;
    break;
  case 0x8026a82:
    c_char3 = HeldItem_IsEmpty(entity[0xe] + 0x54);
    u_val11 = 0x192;
    if (c_char3 == '\0') {
      u_val11 = 0x152;
    }
    break;
  case 0x8026a9a:
    u_val11 = 0x136;
    break;
  case 0x8026aa0:
    u_val11 = 0x19e;
    break;
  case 0x8026aa6:
    u_val11 = 0x4e;
    break;
  case 0x8026aaa:
    u_val11 = 0x46;
    break;
  case 0x8026aae:
    u_val11 = 0x13e;
    break;
  case 0x8026ab4:
    u_val11 = 0x142;
    break;
  case 0x8026aba:
    u_val11 = *(undefined2 *)(entity + 0x11);
    i_val8 = entity[0xe];
    u_val5 = Product_Construct(i_val8 + 0x5c);
    u_val2 = Farmer_GetUpgradedTool(i_val8,u_val5);
    p_uint7 = stack_buf_1b;
    goto LAB_08026b88;
  case 0x8026ada:
    u_val11 = 0x1ea;
    i_val8 = entity[0xe];
    u_val5 = Product_Construct(i_val8 + 0x5c);
    u_val2 = Farmer_GetUpgradedTool(i_val8,u_val5);
    p_uint7 = stack_buf_1b + 1;
    goto LAB_08026b88;
  case 0x8026af8:
    if (*(byte *)((int)entity + 0x4e) != *(byte *)((int)entity + 0x4f)) {
      u_val11 = 0x182;
      if ((uint)*(byte *)((int)entity + 0x4f) - (uint)*(byte *)((int)entity + 0x4e) == 1) {
        u_val11 = 0x186;
      }
      i_val8 = entity[0xe];
      u_val5 = Product_Construct(i_val8 + 0x5c);
      u_val2 = Farmer_GetUpgradedTool(i_val8,u_val5);
      p_uint7 = stack_buf_1b + 2;
      goto LAB_08026b88;
    }
  case 0x8026b08:
case_08026B08:
    u_val11 = 0x192;
    break;
  case 0x8026b38:
    u_val11 = 0x76;
    i_val8 = entity[0xe];
    u_val5 = Product_Construct(i_val8 + 0x5c);
    u_val2 = Farmer_GetUpgradedTool(i_val8,u_val5);
    p_uint7 = stack_buf_1b + 3;
    goto LAB_08026b88;
  case 0x8026b52:
    u_val11 = 0x6e;
    i_val8 = entity[0xe];
    u_val5 = Product_Construct(i_val8 + 0x5c);
    u_val2 = Farmer_GetUpgradedTool(i_val8,u_val5);
    p_uint7 = stack_buf_1b + 4;
    goto LAB_08026b88;
  case 0x8026b6e:
    u_val11 = 0x72;
    i_val8 = entity[0xe];
    u_val5 = Product_Construct(i_val8 + 0x5c);
    u_val2 = Farmer_GetUpgradedTool(i_val8,u_val5);
    p_uint7 = stack_buf_1b + 5;
LAB_08026b88:
    *p_uint7 = u_val2;
LAB_08026b8a:
    u_val4 = ArticleStack_IsEmpty(p_uint7);
    *(undefined2 *)(entity + 0x1f) = u_val4;
    break;
  case 0x8026b92:
    u_val11 = 0x1fa;
    break;
  case 0x8026b98:
    u_val11 = 0x196;
    break;
  case 0x8026b9e:
    u_val11 = 0x112;
    break;
  case 0x8026ba4:
    u_val11 = 0x116;
    break;
  case 0x8026baa:
    i_val8 = _call_via_r2((int *)*entity,0x2c,*(undefined4 *)(*(int *)*entity + 0x40));
    b_flag1 = *(byte *)((int)entity + 0x3e);
    if (b_flag1 == 1) {
      u_val11 = 0xee;
      u_val6 = 0x77E;
    }
    else if (b_flag1 < 2) {
      if (b_flag1 != 0) break;
      u_val11 = 0xea;
      u_val6 = 0x77A;
    }
    else {
      if (b_flag1 != 2) break;
      u_val11 = 0xe6;
      u_val6 = 0x782;
    }
    goto LAB_08026c76;
  case 0x8026bf4:
    u_val11 = 0x15a;
    i_val8 = _call_via_r2((int *)*entity,0x2c,*(undefined4 *)(*(int *)*entity + 0x40));
    u_val6 = 0x77A;
    goto LAB_08026c76;
  case 0x8026c10:
    u_val11 = 0x9a;
    i_val8 = _call_via_r2((int *)*entity,0x2c,*(undefined4 *)(*(int *)*entity + 0x40));
    u_val6 = 0x77A;
    goto LAB_08026c76;
  case 0x8026c28:
    u_val11 = 0x106;
    break;
  case 0x8026c2e:
    u_val11 = 0x102;
    break;
  case 0x8026c34:
    u_val11 = 0xfe;
    break;
  case 0x8026c38:
    u_val11 = 0xfa;
    break;
  case 0x8026c3c:
    u_val11 = 0x122;
    break;
  case 0x8026c42:
    u_val11 = 0x11e;
    break;
  case 0x8026c48:
    u_val11 = 0x11a;
    break;
  case 0x8026c4e:
    c_char3 = HeldItem_IsEmpty(entity[0xe] + 0x54);
    u_val11 = 0x14a;
    if (c_char3 != '\0') {
      u_val11 = 0x10a;
    }
    break;
  case 0x8026c64:
    u_val11 = 0xe2;
    i_val8 = _call_via_r2((int *)*entity,0x2c,*(undefined4 *)(*(int *)*entity + 0x40));
    u_val6 = 0x792;
LAB_08026c76:
    if (*(ushort *)(i_val8 + 0x22) != u_val6) {
      Entity_Routine_080321B0(i_val8);
    }
    break;
  case 0x8026c88:
    u_val11 = 0x3e;
    break;
  case 0x8026c8c:
    u_val11 = 0x146;
    break;
  case 0x8026c98:
    u_val11 = 0x13a;
    break;
  case 0x8026c9e:
    u_val11 = 0x42;
    break;
  case 0x8026ca2:
    c_char3 = HeldItem_IsEmpty(entity[0xe] + 0x54);
    u_val11 = 0x1c6;
    if (c_char3 != '\0') break;
LAB_08026cb4:
    u_val11 = 0x156;
    break;
  case 0x8026cbe:
    u_val11 = 0xf6;
    if (*(char *)((int)entity + 0x3d) != '\0') {
      u_val11 = 0xf2;
    }
  }
LAB_08026cc8:
  Entity_Routine_080321B0(entity,u_val11);
  p_int9 = (int *)_call_via_r1((int *)*entity,*(undefined4 *)(*(int *)*entity + 0x14c));
  p_uint10 = (undefined4 *)*p_int9;
  p_uint12 = (undefined4 *)p_int9[1];
  do {
    if (p_uint10 == p_uint12) {
      u_val5 = p_uint12[-1];
LAB_08026d02:
      HW_Routine_08008B6C(u_val5,0xb6);
      *(undefined1 *)(entity + 0x30) = 1;
      return;
    }
    c_char3 = HW_Routine_08008CD0(*p_uint10);
    if (c_char3 == '\0') {
      u_val5 = *p_uint10;
      goto LAB_08026d02;
    }
    p_uint10 = p_uint10 + 1;
  } while( true );
}

// =============================================================================
// Function: Entity_Routine_08026D14 @ 0x08026D14
// =============================================================================
void Entity_Routine_08026D14(undefined4 *entity,undefined2 speed)

{
  byte mood_byte;
  undefined1 u_val2;
  char c_char3;
  undefined2 u_val4;
  undefined4 u_val5;
  int i_val7;
  uint u_val8;
  undefined4 *p_uint9;
  undefined2 u_val10;
  undefined1 stack_val_1c;
  undefined1 stack_buf_1b [7];
  undefined1 *p_uint6;
  
  p_uint6 = &stack_val_1c;
  *(undefined1 *)(entity + 0xf) = 0x11;
  *(undefined1 *)(entity + 0x22) = 1;
  *(undefined1 *)((int)entity + 0x89) = 0;
  u_val5 = 0xFFF60000;
  mood_byte = *(byte *)(entity + 8);
  if (mood_byte == 1) {
    entity[0x23] = 0;
LAB_08026d86:
    entity[0x24] = u_val5;
LAB_08026d88:
    entity[0x27] = 0xc0000;
  }
  else {
    if (1 < mood_byte) {
      if (mood_byte == 2) {
        entity[0x23] = 0xFFF60000;
        entity[0x24] = 0;
      }
      else {
        if (mood_byte != 3) goto LAB_08026d8a;
        entity[0x23] = 0xa0000;
        entity[0x24] = 0;
      }
      goto LAB_08026d88;
    }
    if (mood_byte == 0) {
      u_val5 = 0xa0000;
      entity[0x23] = 0;
      goto LAB_08026d86;
    }
  }
LAB_08026d8a:
  p_uint9 = (undefined4 *)entity[4];
  if (p_uint9 != (undefined4 *)0x0) {
    u_val5 = _call_via_r1(*(int **)*p_uint9,*(undefined4 *)(**(int **)*p_uint9 + 0x68));
    Animal_Routine_0805E850(p_uint9 + 0x2d,u_val5,speed);
    *(undefined1 *)(p_uint9 + 0x32) = 1;
    *(undefined1 *)((int)p_uint9 + 0xca) = 0;
    *(undefined1 *)((int)p_uint9 + 0xcb) = 1;
  }
  u_val10 = 0x192;
  *(short *)(entity + 0x1f) = (short)0xFFFF;
  if (0x39 < *(byte *)(entity + 0xf)) goto LAB_080271f0;
  switch(*(uint *)((uint)*(byte *)(entity + 0xf) * 4 + gInlineTable_08026DE8) & 0xfffffffe) {
  case 0x8026ed0:
    c_char3 = HeldItem_IsEmpty(entity[0xe] + 0x54);
    if (c_char3 != '\0') {
      mood_byte = *(byte *)((int)entity + 0x3e);
      if (mood_byte == 1) {
        u_val10 = 0x132;
        if (*(char *)((int)entity + 0xb3) == '\0') {
          u_val10 = 0x1c6;
        }
        break;
      }
      if (1 < mood_byte) {
        if ((mood_byte == 2) && (u_val10 = 0x132, *(char *)((int)entity + 0xb3) == '\0')) {
          u_val10 = 0x15e;
        }
        break;
      }
      if (mood_byte != 0) break;
      goto case_08027030;
    }
    mood_byte = *(byte *)((int)entity + 0x3e);
    if (mood_byte != 1) {
      if (1 < mood_byte) {
        if (mood_byte == 2) {
          u_val10 = 0x14e;
        }
        break;
      }
      goto joined_r0x08026fa4;
    }
    goto LAB_080271dc;
  case 0x8026f44:
    c_char3 = HeldItem_IsEmpty(entity[0xe] + 0x54);
    if (c_char3 == '\0') goto case_080271BA;
    if (5 < *(byte *)((int)entity + 0x3f)) goto case_08027030;
    u_val10 = *(undefined2 *)
              (((uint)*(byte *)((int)entity + 0x3f) * 7 + (uint)*(byte *)(entity + 0x10)) * 2 +
              gRomData_080F0FCC);
    i_val7 = entity[0xe];
    u_val5 = Product_Construct(i_val7 + 0x5c);
    stack_val_1c = Farmer_GetUpgradedTool(i_val7,u_val5);
    goto LAB_080270b2;
  case 0x8026f94:
    mood_byte = HeldItem_IsEmpty(entity[0xe] + 0x54);
joined_r0x08026fa4:
    u_val10 = 0x192;
    if (mood_byte != 0) break;
  case 0x80271ba:
case_080271BA:
    u_val10 = 0x152;
    break;
  case 0x8026faa:
    c_char3 = HeldItem_IsEmpty(entity[0xe] + 0x54);
    u_val10 = 0x192;
    if (c_char3 == '\0') {
      u_val10 = 0x152;
    }
    break;
  case 0x8026fc2:
    u_val10 = 0x136;
    break;
  case 0x8026fc8:
    u_val10 = 0x19e;
    break;
  case 0x8026fce:
    u_val10 = 0x4e;
    break;
  case 0x8026fd2:
    u_val10 = 0x46;
    break;
  case 0x8026fd6:
    u_val10 = 0x13e;
    break;
  case 0x8026fdc:
    u_val10 = 0x142;
    break;
  case 0x8026fe2:
    u_val10 = *(undefined2 *)(entity + 0x11);
    i_val7 = entity[0xe];
    u_val5 = Product_Construct(i_val7 + 0x5c);
    u_val2 = Farmer_GetUpgradedTool(i_val7,u_val5);
    p_uint6 = stack_buf_1b;
    goto LAB_080270b0;
  case 0x8027002:
    u_val10 = 0x1ea;
    i_val7 = entity[0xe];
    u_val5 = Product_Construct(i_val7 + 0x5c);
    u_val2 = Farmer_GetUpgradedTool(i_val7,u_val5);
    p_uint6 = stack_buf_1b + 1;
    goto LAB_080270b0;
  case 0x8027020:
    if (*(byte *)((int)entity + 0x4e) != *(byte *)((int)entity + 0x4f)) {
      u_val10 = 0x182;
      if ((uint)*(byte *)((int)entity + 0x4f) - (uint)*(byte *)((int)entity + 0x4e) == 1) {
        u_val10 = 0x186;
      }
      i_val7 = entity[0xe];
      u_val5 = Product_Construct(i_val7 + 0x5c);
      u_val2 = Farmer_GetUpgradedTool(i_val7,u_val5);
      p_uint6 = stack_buf_1b + 2;
      goto LAB_080270b0;
    }
  case 0x8027030:
case_08027030:
    u_val10 = 0x192;
    break;
  case 0x8027060:
    u_val10 = 0x76;
    i_val7 = entity[0xe];
    u_val5 = Product_Construct(i_val7 + 0x5c);
    u_val2 = Farmer_GetUpgradedTool(i_val7,u_val5);
    p_uint6 = stack_buf_1b + 3;
    goto LAB_080270b0;
  case 0x802707a:
    u_val10 = 0x6e;
    i_val7 = entity[0xe];
    u_val5 = Product_Construct(i_val7 + 0x5c);
    u_val2 = Farmer_GetUpgradedTool(i_val7,u_val5);
    p_uint6 = stack_buf_1b + 4;
    goto LAB_080270b0;
  case 0x8027096:
    u_val10 = 0x72;
    i_val7 = entity[0xe];
    u_val5 = Product_Construct(i_val7 + 0x5c);
    u_val2 = Farmer_GetUpgradedTool(i_val7,u_val5);
    p_uint6 = stack_buf_1b + 5;
LAB_080270b0:
    *p_uint6 = u_val2;
LAB_080270b2:
    u_val4 = ArticleStack_IsEmpty(p_uint6);
    *(undefined2 *)(entity + 0x1f) = u_val4;
    break;
  case 0x80270ba:
    u_val10 = 0x1fa;
    break;
  case 0x80270c0:
    u_val10 = 0x196;
    break;
  case 0x80270c6:
    u_val10 = 0x112;
    break;
  case 0x80270cc:
    u_val10 = 0x116;
    break;
  case 0x80270d2:
    i_val7 = _call_via_r2((int *)*entity,0x2c,*(undefined4 *)(*(int *)*entity + 0x40));
    mood_byte = *(byte *)((int)entity + 0x3e);
    if (mood_byte == 1) {
      u_val10 = 0xee;
      u_val8 = 0x77E;
    }
    else if (mood_byte < 2) {
      if (mood_byte != 0) break;
      u_val10 = 0xea;
      u_val8 = 0x77A;
    }
    else {
      if (mood_byte != 2) break;
      u_val10 = 0xe6;
      u_val8 = 0x782;
    }
    goto LAB_0802719e;
  case 0x802711c:
    u_val10 = 0x15a;
    i_val7 = _call_via_r2((int *)*entity,0x2c,*(undefined4 *)(*(int *)*entity + 0x40));
    u_val8 = 0x77A;
    goto LAB_0802719e;
  case 0x8027138:
    u_val10 = 0x9a;
    i_val7 = _call_via_r2((int *)*entity,0x2c,*(undefined4 *)(*(int *)*entity + 0x40));
    u_val8 = 0x77A;
    goto LAB_0802719e;
  case 0x8027150:
    u_val10 = 0x106;
    break;
  case 0x8027156:
    u_val10 = 0x102;
    break;
  case 0x802715c:
    u_val10 = 0xfe;
    break;
  case 0x8027160:
    u_val10 = 0xfa;
    break;
  case 0x8027164:
    u_val10 = 0x122;
    break;
  case 0x802716a:
    u_val10 = 0x11e;
    break;
  case 0x8027170:
    u_val10 = 0x11a;
    break;
  case 0x8027176:
    c_char3 = HeldItem_IsEmpty(entity[0xe] + 0x54);
    u_val10 = 0x14a;
    if (c_char3 != '\0') {
      u_val10 = 0x10a;
    }
    break;
  case 0x802718c:
    u_val10 = 0xe2;
    i_val7 = _call_via_r2((int *)*entity,0x2c,*(undefined4 *)(*(int *)*entity + 0x40));
    u_val8 = 0x792;
LAB_0802719e:
    if (*(ushort *)(i_val7 + 0x22) != u_val8) {
      Entity_Routine_080321B0(i_val7);
    }
    break;
  case 0x80271b0:
    u_val10 = 0x3e;
    break;
  case 0x80271b4:
    u_val10 = 0x146;
    break;
  case 0x80271c0:
    u_val10 = 0x13a;
    break;
  case 0x80271c6:
    u_val10 = 0x42;
    break;
  case 0x80271ca:
    c_char3 = HeldItem_IsEmpty(entity[0xe] + 0x54);
    u_val10 = 0x1c6;
    if (c_char3 != '\0') break;
LAB_080271dc:
    u_val10 = 0x156;
    break;
  case 0x80271e2:
    u_val10 = 0xf6;
    if (*(char *)((int)entity + 0x3d) != '\0') {
      u_val10 = 0xf2;
    }
  }
LAB_080271f0:
  Entity_Routine_080321B0(entity,u_val10);
  *(undefined1 *)(entity + 0x30) = 1;
  return;
}

// =============================================================================
// Function: Entity_Routine_0802720C @ 0x0802720C
// =============================================================================
void Entity_Routine_0802720C(undefined4 *entity,undefined4 speed)

{
  byte b_flag1;
  undefined1 u_val2;
  char c_char3;
  undefined2 u_val4;
  undefined2 u_val5;
  undefined4 u_val6;
  uint u_val7;
  int *p_int9;
  int i_val10;
  undefined4 *p_uint11;
  undefined4 *p_uint12;
  undefined1 stack_val_24;
  undefined1 stack_buf_23 [7];
  undefined1 *p_uint8;
  
  p_uint8 = &stack_val_24;
  *(undefined1 *)(entity + 0x22) = 1;
  *(undefined1 *)((int)entity + 0x89) = 0;
  entity[0x23] = 0xFFF80000;
  entity[0x24] = 0;
  entity[0x27] = 0x110000;
  p_uint11 = (undefined4 *)entity[4];
  if (p_uint11 != (undefined4 *)0x0) {
    u_val4 = ArticleStack_IsEmpty(speed);
    u_val6 = _call_via_r1(*(int **)*p_uint11,*(undefined4 *)(**(int **)*p_uint11 + 100));
    Animal_Routine_0805E850(p_uint11 + 0x2d,u_val6,u_val4);
    *(undefined1 *)(p_uint11 + 0x32) = 1;
    *(undefined1 *)((int)p_uint11 + 0xca) = 0;
    *(undefined1 *)((int)p_uint11 + 0xcb) = 1;
  }
  i_val10 = entity[0xe];
  u_val6 = Item_GetId(speed);
  Farmer_Routine_0800FEC8(i_val10 + 0x60,u_val6,1);
  *(byte *)(entity + 0xf) = 0x34;
  *(char *)((int)entity + 0x3d) = 'x';
  u_val4 = 0x192;
  *(short *)(entity + 0x1f) = (short)0xFFFF;
  u_val7 = (uint)*(byte *)(entity + 0xf);
  if (0x39 < u_val7) goto LAB_080276c8;
  switch(*(uint *)(u_val7 * 4 + gInlineTable_080272C0) & 0xfffffffe) {
  case 0x80273a8:
    c_char3 = HeldItem_IsEmpty(entity[0xe] + 0x54);
    if (c_char3 != '\0') {
      b_flag1 = *(byte *)((int)entity + 0x3e);
      if (b_flag1 == 1) {
        u_val4 = 0x132;
        if (*(char *)((int)entity + 0xb3) == '\0') {
          u_val4 = 0x1c6;
        }
        break;
      }
      if (1 < b_flag1) {
        if ((b_flag1 == 2) && (u_val4 = 0x132, *(char *)((int)entity + 0xb3) == '\0')) {
          u_val4 = 0x15e;
        }
        break;
      }
      if (b_flag1 != 0) break;
      goto case_08027508;
    }
    b_flag1 = *(byte *)((int)entity + 0x3e);
    if (b_flag1 != 1) {
      if (1 < b_flag1) {
        if (b_flag1 == 2) {
          u_val4 = 0x14e;
        }
        break;
      }
      goto joined_r0x0802747c;
    }
    goto LAB_080276b4;
  case 0x802741c:
    c_char3 = HeldItem_IsEmpty(entity[0xe] + 0x54);
    if (c_char3 == '\0') goto case_08027692;
    if (5 < *(byte *)((int)entity + 0x3f)) goto case_08027508;
    u_val4 = *(undefined2 *)
             (((uint)*(byte *)((int)entity + 0x3f) * 7 + (uint)*(byte *)(entity + 0x10)) * 2 +
             gRomData_080F0FCC);
    i_val10 = entity[0xe];
    u_val6 = Product_Construct(i_val10 + 0x5c);
    stack_val_24 = Farmer_GetUpgradedTool(i_val10,u_val6);
    goto LAB_0802758a;
  case 0x802746c:
    b_flag1 = HeldItem_IsEmpty(entity[0xe] + 0x54);
joined_r0x0802747c:
    u_val4 = 0x192;
    if (b_flag1 != 0) break;
  case 0x8027692:
case_08027692:
    u_val4 = 0x152;
    break;
  case 0x8027482:
    c_char3 = HeldItem_IsEmpty(entity[0xe] + 0x54);
    u_val4 = 0x192;
    if (c_char3 == '\0') {
      u_val4 = 0x152;
    }
    break;
  case 0x802749a:
    u_val4 = 0x136;
    break;
  case 0x80274a0:
    u_val4 = 0x19e;
    break;
  case 0x80274a6:
    u_val4 = 0x4e;
    break;
  case 0x80274aa:
    u_val4 = 0x46;
    break;
  case 0x80274ae:
    u_val4 = 0x13e;
    break;
  case 0x80274b4:
    u_val4 = 0x142;
    break;
  case 0x80274ba:
    u_val4 = *(undefined2 *)(entity + 0x11);
    i_val10 = entity[0xe];
    u_val6 = Product_Construct(i_val10 + 0x5c);
    u_val2 = Farmer_GetUpgradedTool(i_val10,u_val6);
    p_uint8 = stack_buf_23;
    goto LAB_08027588;
  case 0x80274da:
    u_val4 = 0x1ea;
    i_val10 = entity[0xe];
    u_val6 = Product_Construct(i_val10 + 0x5c);
    u_val2 = Farmer_GetUpgradedTool(i_val10,u_val6);
    p_uint8 = stack_buf_23 + 1;
    goto LAB_08027588;
  case 0x80274f8:
    if (*(byte *)((int)entity + 0x4e) != *(byte *)((int)entity + 0x4f)) {
      u_val4 = 0x182;
      if ((uint)*(byte *)((int)entity + 0x4f) - (uint)*(byte *)((int)entity + 0x4e) == 1) {
        u_val4 = 0x186;
      }
      i_val10 = entity[0xe];
      u_val6 = Product_Construct(i_val10 + 0x5c);
      u_val2 = Farmer_GetUpgradedTool(i_val10,u_val6);
      p_uint8 = stack_buf_23 + 2;
      goto LAB_08027588;
    }
  case 0x8027508:
case_08027508:
    u_val4 = 0x192;
    break;
  case 0x8027538:
    u_val4 = 0x76;
    i_val10 = entity[0xe];
    u_val6 = Product_Construct(i_val10 + 0x5c);
    u_val2 = Farmer_GetUpgradedTool(i_val10,u_val6);
    p_uint8 = stack_buf_23 + 3;
    goto LAB_08027588;
  case 0x8027552:
    u_val4 = 0x6e;
    i_val10 = entity[0xe];
    u_val6 = Product_Construct(i_val10 + 0x5c);
    u_val2 = Farmer_GetUpgradedTool(i_val10,u_val6);
    p_uint8 = stack_buf_23 + 4;
    goto LAB_08027588;
  case 0x802756e:
    u_val4 = 0x72;
    i_val10 = entity[0xe];
    u_val6 = Product_Construct(i_val10 + 0x5c);
    u_val2 = Farmer_GetUpgradedTool(i_val10,u_val6);
    p_uint8 = stack_buf_23 + 5;
LAB_08027588:
    *p_uint8 = u_val2;
LAB_0802758a:
    u_val5 = ArticleStack_IsEmpty(p_uint8);
    *(undefined2 *)(entity + 0x1f) = u_val5;
    break;
  case 0x8027592:
    u_val4 = 0x1fa;
    break;
  case 0x8027598:
    u_val4 = 0x196;
    break;
  case 0x802759e:
    u_val4 = 0x112;
    break;
  case 0x80275a4:
    u_val4 = 0x116;
    break;
  case 0x80275aa:
    i_val10 = _call_via_r2((int *)*entity,0x2c,*(undefined4 *)(*(int *)*entity + 0x40));
    b_flag1 = *(byte *)((int)entity + 0x3e);
    if (b_flag1 == 1) {
      u_val4 = 0xee;
      u_val7 = 0x77E;
    }
    else if (b_flag1 < 2) {
      if (b_flag1 != 0) break;
      u_val4 = 0xea;
      u_val7 = 0x77A;
    }
    else {
      if (b_flag1 != 2) break;
      u_val4 = 0xe6;
      u_val7 = 0x782;
    }
    goto LAB_08027676;
  case 0x80275f4:
    u_val4 = 0x15a;
    i_val10 = _call_via_r2((int *)*entity,0x2c,*(undefined4 *)(*(int *)*entity + 0x40));
    u_val7 = 0x77A;
    goto LAB_08027676;
  case 0x8027610:
    u_val4 = 0x9a;
    i_val10 = _call_via_r2((int *)*entity,0x2c,*(undefined4 *)(*(int *)*entity + 0x40));
    u_val7 = 0x77A;
    goto LAB_08027676;
  case 0x8027628:
    u_val4 = 0x106;
    break;
  case 0x802762e:
    u_val4 = 0x102;
    break;
  case 0x8027634:
    u_val4 = 0xfe;
    break;
  case 0x8027638:
    u_val4 = 0xfa;
    break;
  case 0x802763c:
    u_val4 = 0x122;
    break;
  case 0x8027642:
    u_val4 = 0x11e;
    break;
  case 0x8027648:
    u_val4 = 0x11a;
    break;
  case 0x802764e:
    c_char3 = HeldItem_IsEmpty(entity[0xe] + 0x54);
    u_val4 = 0x14a;
    if (c_char3 != '\0') {
      u_val4 = 0x10a;
    }
    break;
  case 0x8027664:
    u_val4 = 0xe2;
    i_val10 = _call_via_r2((int *)*entity,0x2c,*(undefined4 *)(*(int *)*entity + 0x40));
    u_val7 = 0x792;
LAB_08027676:
    if (*(ushort *)(i_val10 + 0x22) != u_val7) {
      Entity_Routine_080321B0(i_val10);
    }
    break;
  case 0x8027688:
    u_val4 = 0x3e;
    break;
  case 0x802768c:
    u_val4 = 0x146;
    break;
  case 0x8027698:
    u_val4 = 0x13a;
    break;
  case 0x802769e:
    u_val4 = 0x42;
    break;
  case 0x80276a2:
    c_char3 = HeldItem_IsEmpty(entity[0xe] + 0x54);
    u_val4 = 0x1c6;
    if (c_char3 != '\0') break;
LAB_080276b4:
    u_val4 = 0x156;
    break;
  case 0x80276be:
    u_val4 = 0xf6;
    if (*(char *)((int)entity + 0x3d) != '\0') {
      u_val4 = 0xf2;
    }
  }
LAB_080276c8:
  Entity_Routine_080321B0(entity,u_val4);
  p_int9 = (int *)_call_via_r1((int *)*entity,*(undefined4 *)(*(int *)*entity + 0x14c));
  p_uint11 = (undefined4 *)*p_int9;
  p_uint12 = (undefined4 *)p_int9[1];
  do {
    if (p_uint11 == p_uint12) {
      u_val6 = p_uint12[-1];
LAB_08027702:
      HW_Routine_08008B6C(u_val6,0xbc);
      *(undefined1 *)(entity + 0x30) = 1;
      return;
    }
    c_char3 = HW_Routine_08008CD0(*p_uint11);
    if (c_char3 == '\0') {
      u_val6 = *p_uint11;
      goto LAB_08027702;
    }
    p_uint11 = p_uint11 + 1;
  } while( true );
}

// =============================================================================
// Function: Entity_Routine_0802771C @ 0x0802771C
// =============================================================================
void Entity_Routine_0802771C(undefined4 *entity)

{
  byte b_flag1;
  undefined1 u_val2;
  char c_char3;
  undefined2 u_val4;
  undefined4 u_val5;
  uint u_val6;
  int i_val8;
  int *p_int9;
  undefined4 *p_uint10;
  undefined2 u_val11;
  undefined4 *p_uint12;
  undefined1 stack_val_1c;
  undefined1 stack_buf_1b [7];
  undefined1 *p_uint7;
  
  p_uint7 = &stack_val_1c;
  Animal_Routine_0809ABD8(entity[0xd] + 0x1AA8);
  *(undefined1 *)(entity + 0x22) = 1;
  *(undefined1 *)((int)entity + 0x89) = 0;
  entity[0x23] = 0;
  entity[0x24] = 0;
  entity[0x27] = 0x150000;
  p_uint10 = (undefined4 *)entity[4];
  if (p_uint10 != (undefined4 *)0x0) {
    u_val5 = _call_via_r1(*(int **)*p_uint10,*(undefined4 *)(**(int **)*p_uint10 + 100));
    Animal_Routine_0805E850(p_uint10 + 0x2d,u_val5,0x6a);
    *(undefined1 *)(p_uint10 + 0x32) = 1;
    *(undefined1 *)((int)p_uint10 + 0xca) = 0;
    *(undefined1 *)((int)p_uint10 + 0xcb) = 1;
  }
  *(byte *)(entity + 0xf) = 0x31;
  u_val11 = 0x192;
  *(short *)(entity + 0x1f) = (short)0xFFFF;
  u_val6 = (uint)*(byte *)(entity + 0xf);
  if (0x39 < u_val6) goto LAB_08027bb0;
  switch(*(uint *)(u_val6 * 4 + gInlineTable_080277A4) & 0xfffffffe) {
  case 0x802788c:
    c_char3 = HeldItem_IsEmpty(entity[0xe] + 0x54);
    if (c_char3 != '\0') {
      b_flag1 = *(byte *)((int)entity + 0x3e);
      if (b_flag1 == 1) {
        u_val11 = 0x132;
        if (*(char *)((int)entity + 0xb3) == '\0') {
          u_val11 = 0x1c6;
        }
        break;
      }
      if (1 < b_flag1) {
        if ((b_flag1 == 2) && (u_val11 = 0x132, *(char *)((int)entity + 0xb3) == '\0')) {
          u_val11 = 0x15e;
        }
        break;
      }
      if (b_flag1 != 0) break;
      goto case_080279EC;
    }
    b_flag1 = *(byte *)((int)entity + 0x3e);
    if (b_flag1 != 1) {
      if (1 < b_flag1) {
        if (b_flag1 == 2) {
          u_val11 = 0x14e;
        }
        break;
      }
      goto joined_r0x08027960;
    }
    goto LAB_08027b98;
  case 0x8027900:
    c_char3 = HeldItem_IsEmpty(entity[0xe] + 0x54);
    if (c_char3 == '\0') goto case_08027B76;
    if (5 < *(byte *)((int)entity + 0x3f)) goto case_080279EC;
    u_val11 = *(undefined2 *)
              (((uint)*(byte *)((int)entity + 0x3f) * 7 + (uint)*(byte *)(entity + 0x10)) * 2 +
              gRomData_080F0FCC);
    i_val8 = entity[0xe];
    u_val5 = Product_Construct(i_val8 + 0x5c);
    stack_val_1c = Farmer_GetUpgradedTool(i_val8,u_val5);
    goto LAB_08027a6e;
  case 0x8027950:
    b_flag1 = HeldItem_IsEmpty(entity[0xe] + 0x54);
joined_r0x08027960:
    u_val11 = 0x192;
    if (b_flag1 != 0) break;
  case 0x8027b76:
case_08027B76:
    u_val11 = 0x152;
    break;
  case 0x8027966:
    c_char3 = HeldItem_IsEmpty(entity[0xe] + 0x54);
    u_val11 = 0x192;
    if (c_char3 == '\0') {
      u_val11 = 0x152;
    }
    break;
  case 0x802797e:
    u_val11 = 0x136;
    break;
  case 0x8027984:
    u_val11 = 0x19e;
    break;
  case 0x802798a:
    u_val11 = 0x4e;
    break;
  case 0x802798e:
    u_val11 = 0x46;
    break;
  case 0x8027992:
    u_val11 = 0x13e;
    break;
  case 0x8027998:
    u_val11 = 0x142;
    break;
  case 0x802799e:
    u_val11 = *(undefined2 *)(entity + 0x11);
    i_val8 = entity[0xe];
    u_val5 = Product_Construct(i_val8 + 0x5c);
    u_val2 = Farmer_GetUpgradedTool(i_val8,u_val5);
    p_uint7 = stack_buf_1b;
    goto LAB_08027a6c;
  case 0x80279be:
    u_val11 = 0x1ea;
    i_val8 = entity[0xe];
    u_val5 = Product_Construct(i_val8 + 0x5c);
    u_val2 = Farmer_GetUpgradedTool(i_val8,u_val5);
    p_uint7 = stack_buf_1b + 1;
    goto LAB_08027a6c;
  case 0x80279dc:
    if (*(byte *)((int)entity + 0x4e) != *(byte *)((int)entity + 0x4f)) {
      u_val11 = 0x182;
      if ((uint)*(byte *)((int)entity + 0x4f) - (uint)*(byte *)((int)entity + 0x4e) == 1) {
        u_val11 = 0x186;
      }
      i_val8 = entity[0xe];
      u_val5 = Product_Construct(i_val8 + 0x5c);
      u_val2 = Farmer_GetUpgradedTool(i_val8,u_val5);
      p_uint7 = stack_buf_1b + 2;
      goto LAB_08027a6c;
    }
  case 0x80279ec:
case_080279EC:
    u_val11 = 0x192;
    break;
  case 0x8027a1c:
    u_val11 = 0x76;
    i_val8 = entity[0xe];
    u_val5 = Product_Construct(i_val8 + 0x5c);
    u_val2 = Farmer_GetUpgradedTool(i_val8,u_val5);
    p_uint7 = stack_buf_1b + 3;
    goto LAB_08027a6c;
  case 0x8027a36:
    u_val11 = 0x6e;
    i_val8 = entity[0xe];
    u_val5 = Product_Construct(i_val8 + 0x5c);
    u_val2 = Farmer_GetUpgradedTool(i_val8,u_val5);
    p_uint7 = stack_buf_1b + 4;
    goto LAB_08027a6c;
  case 0x8027a52:
    u_val11 = 0x72;
    i_val8 = entity[0xe];
    u_val5 = Product_Construct(i_val8 + 0x5c);
    u_val2 = Farmer_GetUpgradedTool(i_val8,u_val5);
    p_uint7 = stack_buf_1b + 5;
LAB_08027a6c:
    *p_uint7 = u_val2;
LAB_08027a6e:
    u_val4 = ArticleStack_IsEmpty(p_uint7);
    *(undefined2 *)(entity + 0x1f) = u_val4;
    break;
  case 0x8027a76:
    u_val11 = 0x1fa;
    break;
  case 0x8027a7c:
    u_val11 = 0x196;
    break;
  case 0x8027a82:
    u_val11 = 0x112;
    break;
  case 0x8027a88:
    u_val11 = 0x116;
    break;
  case 0x8027a8e:
    i_val8 = _call_via_r2((int *)*entity,0x2c,*(undefined4 *)(*(int *)*entity + 0x40));
    b_flag1 = *(byte *)((int)entity + 0x3e);
    if (b_flag1 == 1) {
      u_val11 = 0xee;
      u_val6 = 0x77E;
    }
    else if (b_flag1 < 2) {
      if (b_flag1 != 0) break;
      u_val11 = 0xea;
      u_val6 = 0x77A;
    }
    else {
      if (b_flag1 != 2) break;
      u_val11 = 0xe6;
      u_val6 = 0x782;
    }
    goto LAB_08027b5a;
  case 0x8027ad8:
    u_val11 = 0x15a;
    i_val8 = _call_via_r2((int *)*entity,0x2c,*(undefined4 *)(*(int *)*entity + 0x40));
    u_val6 = 0x77A;
    goto LAB_08027b5a;
  case 0x8027af4:
    u_val11 = 0x9a;
    i_val8 = _call_via_r2((int *)*entity,0x2c,*(undefined4 *)(*(int *)*entity + 0x40));
    u_val6 = 0x77A;
    goto LAB_08027b5a;
  case 0x8027b0c:
    u_val11 = 0x106;
    break;
  case 0x8027b12:
    u_val11 = 0x102;
    break;
  case 0x8027b18:
    u_val11 = 0xfe;
    break;
  case 0x8027b1c:
    u_val11 = 0xfa;
    break;
  case 0x8027b20:
    u_val11 = 0x122;
    break;
  case 0x8027b26:
    u_val11 = 0x11e;
    break;
  case 0x8027b2c:
    u_val11 = 0x11a;
    break;
  case 0x8027b32:
    c_char3 = HeldItem_IsEmpty(entity[0xe] + 0x54);
    u_val11 = 0x14a;
    if (c_char3 != '\0') {
      u_val11 = 0x10a;
    }
    break;
  case 0x8027b48:
    u_val11 = 0xe2;
    i_val8 = _call_via_r2((int *)*entity,0x2c,*(undefined4 *)(*(int *)*entity + 0x40));
    u_val6 = 0x792;
LAB_08027b5a:
    if (*(ushort *)(i_val8 + 0x22) != u_val6) {
      Entity_Routine_080321B0(i_val8);
    }
    break;
  case 0x8027b6c:
    u_val11 = 0x3e;
    break;
  case 0x8027b70:
    u_val11 = 0x146;
    break;
  case 0x8027b7c:
    u_val11 = 0x13a;
    break;
  case 0x8027b82:
    u_val11 = 0x42;
    break;
  case 0x8027b86:
    c_char3 = HeldItem_IsEmpty(entity[0xe] + 0x54);
    u_val11 = 0x1c6;
    if (c_char3 != '\0') break;
LAB_08027b98:
    u_val11 = 0x156;
    break;
  case 0x8027ba2:
    u_val11 = 0xf6;
    if (*(char *)((int)entity + 0x3d) != '\0') {
      u_val11 = 0xf2;
    }
  }
LAB_08027bb0:
  Entity_Routine_080321B0(entity,u_val11);
  p_int9 = (int *)_call_via_r1((int *)*entity,*(undefined4 *)(*(int *)*entity + 0x14c));
  p_uint10 = (undefined4 *)*p_int9;
  p_uint12 = (undefined4 *)p_int9[1];
  do {
    if (p_uint10 == p_uint12) {
      u_val5 = p_uint12[-1];
LAB_08027bea:
      HW_Routine_08008B6C(u_val5,0x6a);
      *(undefined1 *)(entity + 0x30) = 1;
      return;
    }
    c_char3 = HW_Routine_08008CD0(*p_uint10);
    if (c_char3 == '\0') {
      u_val5 = *p_uint10;
      goto LAB_08027bea;
    }
    p_uint10 = p_uint10 + 1;
  } while( true );
}

// =============================================================================
// Function: Entity_Routine_08027BFC @ 0x08027BFC
// =============================================================================
u32 Entity_Routine_08027BFC(undefined4 *entity)

{
  char c_char1;
  byte mood_byte;
  undefined1 u_val3;
  undefined2 u_val4;
  int i_val5;
  undefined1 *p_uint6;
  undefined4 u_val7;
  uint u_val8;
  int *p_int9;
  undefined4 u_val10;
  int i_val11;
  undefined4 *curr_ptr;
  undefined2 u_val13;
  undefined4 *end_ptr;
  undefined1 stack_val_34;
  undefined1 stack_buf_33 [6];
  undefined1 stack_val_2d;
  undefined1 stack_buf_2c [8];
  undefined4 *puStack_24;
  
  p_uint6 = &stack_val_34;
  i_val11 = entity[0xd] + 0x1C2C;
  c_char1 = HeldItem_IsEmpty(i_val11);
  if ((c_char1 == '\0') && (i_val11 = HeldItem_GetKind(i_val11), i_val11 == 4)) {
    i_val11 = Farmer_Routine_0800FFD0(0x1ca0 + entity[0xd]);
    if (i_val11 == 0) goto LAB_08028182;
    i_val11 = Farmer_Routine_0800FFD4(0x1ca0 + entity[0xd]);
    i_val5 = Farmer_Routine_0800FFD8(0x1ca0 + entity[0xd]);
    puStack_24 = entity + 0x30;
    curr_ptr = entity + 0x1f;
    for (; i_val11 != i_val5; i_val11 = i_val11 + 1) {
      _call_via_r2((int *)*entity,i_val11,*(undefined4 *)(*(int *)*entity + 0x15c));
    }
    Farmer_Routine_08010024(0x1ca0 + entity[0xd]);
    entity[0x23] = 0;
    entity[0x24] = 0;
    entity[0x27] = 0;
    end_ptr = (undefined4 *)entity[4];
    if (end_ptr != (undefined4 *)0x0) {
      mood_byte = *(byte *)(entity + 8);
      u_val7 = _call_via_r1(*(int **)*end_ptr,*(undefined4 *)(**(int **)*end_ptr + 100));
      Animal_Routine_0805E850(end_ptr + 0x2d,u_val7,mood_byte + 0x36);
      *(undefined1 *)(end_ptr + 0x32) = 1;
      *(undefined1 *)((int)end_ptr + 0xca) = 0;
      *(undefined1 *)((int)end_ptr + 0xcb) = 1;
    }
    *(byte *)(entity + 0xf) = 0x2e;
    *(undefined1 *)puStack_24 = 1;
    u_val13 = 0x192;
    *(short *)curr_ptr = (short)0xFFFF;
    u_val8 = (uint)*(byte *)(entity + 0xf);
    if (0x39 < u_val8) goto LAB_08028130;
    switch(*(uint *)(u_val8 * 4 + gInlineTable_08027D0C) & 0xfffffffe) {
    case 0x8027df4:
      c_char1 = HeldItem_IsEmpty(entity[0xe] + 0x54);
      if (c_char1 == '\0') {
        mood_byte = *(byte *)((int)entity + 0x3e);
        if (mood_byte == 1) goto LAB_08028118;
        if (mood_byte < 2) goto joined_r0x08027ec8;
        if (mood_byte == 2) {
          u_val13 = 0x14e;
        }
      }
      else {
        mood_byte = *(byte *)((int)entity + 0x3e);
        if (mood_byte == 1) {
          u_val13 = 0x132;
          if (*(char *)((int)entity + 0xb3) == '\0') {
            u_val13 = 0x1c6;
          }
        }
        else if (mood_byte < 2) {
          if (mood_byte == 0) goto case_08027F54;
        }
        else if ((mood_byte == 2) && (u_val13 = 0x132, *(char *)((int)entity + 0xb3) == '\0')) {
          u_val13 = 0x15e;
        }
      }
      break;
    case 0x8027e68:
      c_char1 = HeldItem_IsEmpty(entity[0xe] + 0x54);
      if (c_char1 != '\0') {
        if (*(byte *)((int)entity + 0x3f) < 6) {
          u_val13 = *(undefined2 *)
                    (((uint)*(byte *)((int)entity + 0x3f) * 7 + (uint)*(byte *)(entity + 0x10)) *
                     2 + gRomData_080F0FCC);
          i_val11 = entity[0xe];
          u_val7 = Product_Construct(i_val11 + 0x5c);
          stack_val_34 = Farmer_GetUpgradedTool(i_val11,u_val7);
          goto LAB_08027fc4;
        }
        goto case_08027F54;
      }
    case 0x80280f6:
case_080280F6:
      u_val13 = 0x152;
      break;
    case 0x8027eb8:
      mood_byte = HeldItem_IsEmpty(entity[0xe] + 0x54);
joined_r0x08027ec8:
      u_val13 = 0x192;
      if (mood_byte == 0) goto case_080280F6;
      break;
    case 0x8027ece:
      c_char1 = HeldItem_IsEmpty(entity[0xe] + 0x54);
      u_val13 = 0x192;
      if (c_char1 == '\0') {
        u_val13 = 0x152;
      }
      break;
    case 0x8027ee6:
      u_val13 = 0x136;
      break;
    case 0x8027eec:
      u_val13 = 0x19e;
      break;
    case 0x8027ef2:
      u_val13 = 0x4e;
      break;
    case 0x8027ef6:
      u_val13 = 0x46;
      break;
    case 0x8027efa:
      u_val13 = 0x13e;
      break;
    case 0x8027f00:
      u_val13 = 0x142;
      break;
    case 0x8027f06:
      u_val13 = *(undefined2 *)(entity + 0x11);
      i_val11 = entity[0xe];
      u_val7 = Product_Construct(i_val11 + 0x5c);
      u_val3 = Farmer_GetUpgradedTool(i_val11,u_val7);
      p_uint6 = stack_buf_33;
      goto LAB_08027fe8;
    case 0x8027f26:
      u_val13 = 0x1ea;
      i_val11 = entity[0xe];
      u_val7 = Product_Construct(i_val11 + 0x5c);
      u_val3 = Farmer_GetUpgradedTool(i_val11,u_val7);
      p_uint6 = stack_buf_33 + 1;
      goto LAB_08027f9c;
    case 0x8027f44:
      if (*(byte *)((int)entity + 0x4e) != *(byte *)((int)entity + 0x4f)) {
        u_val13 = 0x182;
        if ((uint)*(byte *)((int)entity + 0x4f) - (uint)*(byte *)((int)entity + 0x4e) == 1) {
          u_val13 = 0x186;
        }
        i_val11 = entity[0xe];
        u_val7 = Product_Construct(i_val11 + 0x5c);
        u_val3 = Farmer_GetUpgradedTool(i_val11,u_val7);
        p_uint6 = stack_buf_33 + 2;
        goto LAB_08027fe8;
      }
    case 0x8027f54:
case_08027F54:
      u_val13 = 0x192;
      break;
    case 0x8027f84:
      u_val13 = 0x76;
      i_val11 = entity[0xe];
      u_val7 = Product_Construct(i_val11 + 0x5c);
      u_val3 = Farmer_GetUpgradedTool(i_val11,u_val7);
      p_uint6 = stack_buf_33 + 3;
LAB_08027f9c:
      *p_uint6 = u_val3;
      u_val4 = ArticleStack_IsEmpty();
      *(undefined2 *)curr_ptr = u_val4;
      break;
    case 0x8027fa8:
      u_val13 = 0x6e;
      i_val11 = entity[0xe];
      u_val7 = Product_Construct(i_val11 + 0x5c);
      stack_buf_33[4] = Farmer_GetUpgradedTool(i_val11,u_val7);
      p_uint6 = stack_buf_33 + 4;
LAB_08027fc4:
      u_val4 = ArticleStack_IsEmpty(p_uint6);
      *(undefined2 *)curr_ptr = u_val4;
      break;
    case 0x8027fce:
      u_val13 = 0x72;
      i_val11 = entity[0xe];
      u_val7 = Product_Construct(i_val11 + 0x5c);
      u_val3 = Farmer_GetUpgradedTool(i_val11,u_val7);
      p_uint6 = stack_buf_33 + 5;
LAB_08027fe8:
      *p_uint6 = u_val3;
      u_val4 = ArticleStack_IsEmpty();
      *(undefined2 *)curr_ptr = u_val4;
      break;
    case 0x8027ff4:
      u_val13 = 0x1fa;
      break;
    case 0x8027ffa:
      u_val13 = 0x196;
      break;
    case 0x8028000:
      u_val13 = 0x112;
      break;
    case 0x8028006:
      u_val13 = 0x116;
      break;
    case 0x802800c:
      i_val11 = _call_via_r2((int *)*entity,0x2c,*(undefined4 *)(*(int *)*entity + 0x40));
      mood_byte = *(byte *)((int)entity + 0x3e);
      if (mood_byte == 1) {
        u_val13 = 0xee;
        u_val8 = 0x77E;
        goto LAB_080280da;
      }
      if (mood_byte < 2) {
        if (mood_byte == 0) {
          u_val13 = 0xea;
          u_val8 = 0x77A;
          goto LAB_080280da;
        }
      }
      else if (mood_byte == 2) {
        u_val13 = 0xe6;
        u_val8 = 0x782;
        goto LAB_080280da;
      }
      break;
    case 0x8028058:
      u_val13 = 0x15a;
      i_val11 = _call_via_r2((int *)*entity,0x2c,*(undefined4 *)(*(int *)*entity + 0x40));
      u_val8 = 0x77A;
      goto LAB_080280da;
    case 0x8028074:
      u_val13 = 0x9a;
      i_val11 = _call_via_r2((int *)*entity,0x2c,*(undefined4 *)(*(int *)*entity + 0x40));
      u_val8 = 0x77A;
      goto LAB_080280da;
    case 0x802808c:
      u_val13 = 0x106;
      break;
    case 0x8028092:
      u_val13 = 0x102;
      break;
    case 0x8028098:
      u_val13 = 0xfe;
      break;
    case 0x802809c:
      u_val13 = 0xfa;
      break;
    case 0x80280a0:
      u_val13 = 0x122;
      break;
    case 0x80280a6:
      u_val13 = 0x11e;
      break;
    case 0x80280ac:
      u_val13 = 0x11a;
      break;
    case 0x80280b2:
      c_char1 = HeldItem_IsEmpty(entity[0xe] + 0x54);
      u_val13 = 0x14a;
      if (c_char1 != '\0') {
        u_val13 = 0x10a;
      }
      break;
    case 0x80280c8:
      u_val13 = 0xe2;
      i_val11 = _call_via_r2((int *)*entity,0x2c,*(undefined4 *)(*(int *)*entity + 0x40));
      u_val8 = 0x792;
LAB_080280da:
      if (*(ushort *)(i_val11 + 0x22) != u_val8) {
        Entity_Routine_080321B0(i_val11);
      }
      break;
    case 0x80280ec:
      u_val13 = 0x3e;
      break;
    case 0x80280f0:
      u_val13 = 0x146;
      break;
    case 0x80280fc:
      u_val13 = 0x13a;
      break;
    case 0x8028102:
      u_val13 = 0x42;
      break;
    case 0x8028106:
      c_char1 = HeldItem_IsEmpty(entity[0xe] + 0x54);
      u_val13 = 0x1c6;
      if (c_char1 == '\0') {
LAB_08028118:
        u_val13 = 0x156;
      }
      break;
    case 0x8028122:
      u_val13 = 0xf6;
      if (*(char *)((int)entity + 0x3d) != '\0') {
        u_val13 = 0xf2;
      }
    }
LAB_08028130:
    Entity_Routine_080321B0(entity,u_val13);
    p_int9 = (int *)_call_via_r1((int *)*entity,*(undefined4 *)(*(int *)*entity + 0x14c));
    end_ptr = (undefined4 *)p_int9[1];
    for (curr_ptr = (undefined4 *)*p_int9; curr_ptr != end_ptr; curr_ptr = curr_ptr + 1) {
      c_char1 = HW_Routine_08008CD0(*curr_ptr);
      if (c_char1 == '\0') {
        u_val7 = *curr_ptr;
        goto LAB_08028168;
      }
    }
    u_val7 = end_ptr[-1];
LAB_08028168:
    u_val10 = 0x6e;
    goto LAB_0802862e;
  }
  stack_val_2d = Entity_Routine_080262C4(entity);
  i_val11 = Item_Routine_0800E198(&stack_val_2d);
  if (i_val11 == 0) {
LAB_08028182:
    u_val7 = 0;
    goto LAB_08028634;
  }
  _call_via_r2((int *)*entity,&stack_val_2d,*(undefined4 *)(*(int *)*entity + 0x15c));
  *(undefined1 *)(entity + 0x30) = 1;
  *(byte *)(entity + 0xf) = 0xe;
  u_val13 = 0x192;
  curr_ptr = entity + 0x1f;
  *(short *)curr_ptr = (short)0xFFFF;
  u_val8 = (uint)*(byte *)(entity + 0xf);
  if (0x39 < u_val8) goto LAB_080285f4;
  switch(*(uint *)(u_val8 * 4 + gInlineTable_080281D0) & 0xfffffffe) {
  case 0x80282b8:
    c_char1 = HeldItem_IsEmpty(entity[0xe] + 0x54);
    if (c_char1 == '\0') {
      mood_byte = *(byte *)((int)entity + 0x3e);
      if (mood_byte == 1) goto LAB_080285dc;
      if (mood_byte < 2) goto joined_r0x0802838c;
      if (mood_byte == 2) {
        u_val13 = 0x14e;
      }
    }
    else {
      mood_byte = *(byte *)((int)entity + 0x3e);
      if (mood_byte == 1) {
        u_val13 = 0x132;
        if (*(char *)((int)entity + 0xb3) == '\0') {
          u_val13 = 0x1c6;
        }
      }
      else if (mood_byte < 2) {
        if (mood_byte == 0) goto case_08028418;
      }
      else if ((mood_byte == 2) && (u_val13 = 0x132, *(char *)((int)entity + 0xb3) == '\0')) {
        u_val13 = 0x15e;
      }
    }
    break;
  case 0x802832c:
    c_char1 = HeldItem_IsEmpty(entity[0xe] + 0x54);
    if (c_char1 != '\0') {
      if (*(byte *)((int)entity + 0x3f) < 6) {
        u_val13 = *(undefined2 *)
                  (((uint)*(byte *)((int)entity + 0x3f) * 7 + (uint)*(byte *)(entity + 0x10)) * 2
                  + gRomData_080F0FCC);
        i_val11 = entity[0xe];
        u_val7 = Product_Construct(i_val11 + 0x5c);
        u_val3 = Farmer_GetUpgradedTool(i_val11,u_val7);
        p_uint6 = stack_buf_2c;
        goto LAB_080284ac;
      }
      goto case_08028418;
    }
  case 0x80285ba:
case_080285BA:
    u_val13 = 0x152;
    break;
  case 0x802837c:
    mood_byte = HeldItem_IsEmpty(entity[0xe] + 0x54);
joined_r0x0802838c:
    u_val13 = 0x192;
    if (mood_byte == 0) goto case_080285BA;
    break;
  case 0x8028392:
    c_char1 = HeldItem_IsEmpty(entity[0xe] + 0x54);
    u_val13 = 0x192;
    if (c_char1 == '\0') {
      u_val13 = 0x152;
    }
    break;
  case 0x80283aa:
    u_val13 = 0x136;
    break;
  case 0x80283b0:
    u_val13 = 0x19e;
    break;
  case 0x80283b6:
    u_val13 = 0x4e;
    break;
  case 0x80283ba:
    u_val13 = 0x46;
    break;
  case 0x80283be:
    u_val13 = 0x13e;
    break;
  case 0x80283c4:
    u_val13 = 0x142;
    break;
  case 0x80283ca:
    u_val13 = *(undefined2 *)(entity + 0x11);
    i_val11 = entity[0xe];
    u_val7 = Product_Construct(i_val11 + 0x5c);
    u_val3 = Farmer_GetUpgradedTool(i_val11,u_val7);
    p_uint6 = stack_buf_2c + 1;
    goto LAB_08028460;
  case 0x80283ea:
    u_val13 = 0x1ea;
    i_val11 = entity[0xe];
    u_val7 = Product_Construct(i_val11 + 0x5c);
    u_val3 = Farmer_GetUpgradedTool(i_val11,u_val7);
    p_uint6 = stack_buf_2c + 2;
    goto LAB_08028486;
  case 0x8028408:
    if (*(byte *)((int)entity + 0x4e) != *(byte *)((int)entity + 0x4f)) {
      u_val13 = 0x182;
      if ((uint)*(byte *)((int)entity + 0x4f) - (uint)*(byte *)((int)entity + 0x4e) == 1) {
        u_val13 = 0x186;
      }
      i_val11 = entity[0xe];
      u_val7 = Product_Construct(i_val11 + 0x5c);
      u_val3 = Farmer_GetUpgradedTool(i_val11,u_val7);
      p_uint6 = stack_buf_2c + 3;
      goto LAB_080284ac;
    }
  case 0x8028418:
case_08028418:
    u_val13 = 0x192;
    break;
  case 0x8028448:
    u_val13 = 0x76;
    i_val11 = entity[0xe];
    u_val7 = Product_Construct(i_val11 + 0x5c);
    u_val3 = Farmer_GetUpgradedTool(i_val11,u_val7);
    p_uint6 = stack_buf_2c + 4;
LAB_08028460:
    *p_uint6 = u_val3;
    u_val4 = ArticleStack_IsEmpty();
    *(undefined2 *)curr_ptr = u_val4;
    break;
  case 0x802846c:
    u_val13 = 0x6e;
    i_val11 = entity[0xe];
    u_val7 = Product_Construct(i_val11 + 0x5c);
    u_val3 = Farmer_GetUpgradedTool(i_val11,u_val7);
    p_uint6 = stack_buf_2c + 5;
LAB_08028486:
    *p_uint6 = u_val3;
    u_val4 = ArticleStack_IsEmpty();
    *(undefined2 *)curr_ptr = u_val4;
    break;
  case 0x8028492:
    u_val13 = 0x72;
    i_val11 = entity[0xe];
    u_val7 = Product_Construct(i_val11 + 0x5c);
    u_val3 = Farmer_GetUpgradedTool(i_val11,u_val7);
    p_uint6 = stack_buf_2c + 6;
LAB_080284ac:
    *p_uint6 = u_val3;
    u_val4 = ArticleStack_IsEmpty();
    *(undefined2 *)curr_ptr = u_val4;
    break;
  case 0x80284b8:
    u_val13 = 0x1fa;
    break;
  case 0x80284be:
    u_val13 = 0x196;
    break;
  case 0x80284c4:
    u_val13 = 0x112;
    break;
  case 0x80284ca:
    u_val13 = 0x116;
    break;
  case 0x80284d0:
    i_val11 = _call_via_r2((int *)*entity,0x2c,*(undefined4 *)(*(int *)*entity + 0x40));
    mood_byte = *(byte *)((int)entity + 0x3e);
    if (mood_byte == 1) {
      u_val13 = 0xee;
      u_val8 = 0x77E;
      goto LAB_0802859e;
    }
    if (mood_byte < 2) {
      if (mood_byte == 0) {
        u_val13 = 0xea;
        u_val8 = 0x77A;
        goto LAB_0802859e;
      }
    }
    else if (mood_byte == 2) {
      u_val13 = 0xe6;
      u_val8 = 0x782;
      goto LAB_0802859e;
    }
    break;
  case 0x802851c:
    u_val13 = 0x15a;
    i_val11 = _call_via_r2((int *)*entity,0x2c,*(undefined4 *)(*(int *)*entity + 0x40));
    u_val8 = 0x77A;
    goto LAB_0802859e;
  case 0x8028538:
    u_val13 = 0x9a;
    i_val11 = _call_via_r2((int *)*entity,0x2c,*(undefined4 *)(*(int *)*entity + 0x40));
    u_val8 = 0x77A;
    goto LAB_0802859e;
  case 0x8028550:
    u_val13 = 0x106;
    break;
  case 0x8028556:
    u_val13 = 0x102;
    break;
  case 0x802855c:
    u_val13 = 0xfe;
    break;
  case 0x8028560:
    u_val13 = 0xfa;
    break;
  case 0x8028564:
    u_val13 = 0x122;
    break;
  case 0x802856a:
    u_val13 = 0x11e;
    break;
  case 0x8028570:
    u_val13 = 0x11a;
    break;
  case 0x8028576:
    c_char1 = HeldItem_IsEmpty(entity[0xe] + 0x54);
    u_val13 = 0x14a;
    if (c_char1 != '\0') {
      u_val13 = 0x10a;
    }
    break;
  case 0x802858c:
    u_val13 = 0xe2;
    i_val11 = _call_via_r2((int *)*entity,0x2c,*(undefined4 *)(*(int *)*entity + 0x40));
    u_val8 = 0x792;
LAB_0802859e:
    if (*(ushort *)(i_val11 + 0x22) != u_val8) {
      Entity_Routine_080321B0(i_val11);
    }
    break;
  case 0x80285b0:
    u_val13 = 0x3e;
    break;
  case 0x80285b4:
    u_val13 = 0x146;
    break;
  case 0x80285c0:
    u_val13 = 0x13a;
    break;
  case 0x80285c6:
    u_val13 = 0x42;
    break;
  case 0x80285ca:
    c_char1 = HeldItem_IsEmpty(entity[0xe] + 0x54);
    u_val13 = 0x1c6;
    if (c_char1 == '\0') {
LAB_080285dc:
      u_val13 = 0x156;
    }
    break;
  case 0x80285e6:
    u_val13 = 0xf6;
    if (*(char *)((int)entity + 0x3d) != '\0') {
      u_val13 = 0xf2;
    }
  }
LAB_080285f4:
  Entity_Routine_080321B0(entity,u_val13);
  p_int9 = (int *)_call_via_r1((int *)*entity,*(undefined4 *)(*(int *)*entity + 0x14c));
  end_ptr = (undefined4 *)p_int9[1];
  for (curr_ptr = (undefined4 *)*p_int9; curr_ptr != end_ptr; curr_ptr = curr_ptr + 1) {
    c_char1 = HW_Routine_08008CD0(*curr_ptr);
    if (c_char1 == '\0') {
      u_val7 = *curr_ptr;
      goto LAB_0802862c;
    }
  }
  u_val7 = end_ptr[-1];
LAB_0802862c:
  u_val10 = 0x6c;
LAB_0802862e:
  HW_Routine_08008B6C(u_val7,u_val10);
  u_val7 = 1;
LAB_08028634:
  return u_val7;
}

// =============================================================================
// Function: Entity_Routine_08028644 @ 0x08028644
// =============================================================================
void Entity_Routine_08028644(undefined4 *entity)

{
  undefined4 u_val1;
  char c_char2;
  byte mood_byte;
  undefined1 u_val4;
  undefined2 u_val5;
  uint u_val6;
  int i_val8;
  int *p_int9;
  undefined4 u_val10;
  undefined4 *p_uint11;
  undefined2 u_val12;
  undefined4 *p_uint13;
  undefined1 stack_val_1c;
  undefined1 stack_buf_1b [7];
  undefined1 *p_uint7;
  
  p_uint7 = &stack_val_1c;
  c_char2 = HeldItem_IsEmpty(entity[0xd] + 0x1C2C);
  if (c_char2 != '\0') {
    return;
  }
  *(undefined1 *)(entity + 0x30) = 1;
  *(byte *)(entity + 0xf) = 0xb;
  entity[0x23] = 0;
  entity[0x24] = 0;
  entity[0x27] = 0x150000;
  u_val1 = 0x0001AAAA;
  u_val10 = 0xFFFE5556;
  mood_byte = *(byte *)(entity + 8);
  if (mood_byte == 1) {
    entity[0x25] = 0;
    entity[0x26] = u_val10;
    entity[0x28] = 0;
  }
  else if (mood_byte < 2) {
    if (mood_byte == 0) {
      entity[0x25] = 0;
      entity[0x26] = u_val1;
      entity[0x28] = 0;
    }
  }
  else {
    u_val10 = 0xFFFE5556;
    if ((mood_byte == 2) || (u_val10 = 0x0001AAAA, mood_byte == 3)) {
      entity[0x25] = u_val10;
      entity[0x26] = 0;
      entity[0x28] = 0;
    }
  }
  u_val12 = 0x192;
  *(short *)(entity + 0x1f) = (short)0xFFFF;
  u_val6 = (uint)*(byte *)(entity + 0xf);
  if (0x39 < u_val6) goto LAB_08028b08;
  switch(*(uint *)(u_val6 * 4 + gInlineTable_080286FC) & 0xfffffffe) {
  case 0x80287e4:
    c_char2 = HeldItem_IsEmpty(entity[0xe] + 0x54);
    if (c_char2 != '\0') {
      mood_byte = *(byte *)((int)entity + 0x3e);
      if (mood_byte == 1) {
        u_val12 = 0x132;
        if (*(char *)((int)entity + 0xb3) == '\0') {
          u_val12 = 0x1c6;
        }
        break;
      }
      if (1 < mood_byte) {
        if ((mood_byte == 2) && (u_val12 = 0x132, *(char *)((int)entity + 0xb3) == '\0')) {
          u_val12 = 0x15e;
        }
        break;
      }
      if (mood_byte != 0) break;
      goto case_08028944;
    }
    mood_byte = *(byte *)((int)entity + 0x3e);
    if (mood_byte == 1) goto LAB_08028af0;
    if (1 < mood_byte) {
      if (mood_byte == 2) {
        u_val12 = 0x14e;
      }
      break;
    }
    goto joined_r0x080288b8;
  case 0x8028858:
    c_char2 = HeldItem_IsEmpty(entity[0xe] + 0x54);
    if (c_char2 == '\0') goto case_08028ACE;
    if (5 < *(byte *)((int)entity + 0x3f)) goto case_08028944;
    u_val12 = *(undefined2 *)
              (((uint)*(byte *)((int)entity + 0x3f) * 7 + (uint)*(byte *)(entity + 0x10)) * 2 +
              gRomData_080F0FCC);
    i_val8 = entity[0xe];
    u_val10 = Product_Construct(i_val8 + 0x5c);
    stack_val_1c = Farmer_GetUpgradedTool(i_val8,u_val10);
    goto LAB_080289c6;
  case 0x80288a8:
    mood_byte = HeldItem_IsEmpty(entity[0xe] + 0x54);
joined_r0x080288b8:
    u_val12 = 0x192;
    if (mood_byte == 0) {
case_08028ACE:
      u_val12 = 0x152;
    }
    break;
  case 0x80288be:
    c_char2 = HeldItem_IsEmpty(entity[0xe] + 0x54);
    u_val12 = 0x192;
    if (c_char2 == '\0') {
      u_val12 = 0x152;
    }
    break;
  case 0x80288d6:
    u_val12 = 0x136;
    break;
  case 0x80288dc:
    u_val12 = 0x19e;
    break;
  case 0x80288e2:
    u_val12 = 0x4e;
    break;
  case 0x80288e6:
    u_val12 = 0x46;
    break;
  case 0x80288ea:
    u_val12 = 0x13e;
    break;
  case 0x80288f0:
    u_val12 = 0x142;
    break;
  case 0x80288f6:
    u_val12 = *(undefined2 *)(entity + 0x11);
    i_val8 = entity[0xe];
    u_val10 = Product_Construct(i_val8 + 0x5c);
    u_val4 = Farmer_GetUpgradedTool(i_val8,u_val10);
    p_uint7 = stack_buf_1b;
    goto LAB_080289c4;
  case 0x8028916:
    u_val12 = 0x1ea;
    i_val8 = entity[0xe];
    u_val10 = Product_Construct(i_val8 + 0x5c);
    u_val4 = Farmer_GetUpgradedTool(i_val8,u_val10);
    p_uint7 = stack_buf_1b + 1;
    goto LAB_080289c4;
  case 0x8028934:
    if (*(byte *)((int)entity + 0x4e) != *(byte *)((int)entity + 0x4f)) {
      u_val12 = 0x182;
      if ((uint)*(byte *)((int)entity + 0x4f) - (uint)*(byte *)((int)entity + 0x4e) == 1) {
        u_val12 = 0x186;
      }
      i_val8 = entity[0xe];
      u_val10 = Product_Construct(i_val8 + 0x5c);
      u_val4 = Farmer_GetUpgradedTool(i_val8,u_val10);
      p_uint7 = stack_buf_1b + 2;
      goto LAB_080289c4;
    }
  case 0x8028944:
case_08028944:
    u_val12 = 0x192;
    break;
  case 0x8028974:
    u_val12 = 0x76;
    i_val8 = entity[0xe];
    u_val10 = Product_Construct(i_val8 + 0x5c);
    u_val4 = Farmer_GetUpgradedTool(i_val8,u_val10);
    p_uint7 = stack_buf_1b + 3;
    goto LAB_080289c4;
  case 0x802898e:
    u_val12 = 0x6e;
    i_val8 = entity[0xe];
    u_val10 = Product_Construct(i_val8 + 0x5c);
    u_val4 = Farmer_GetUpgradedTool(i_val8,u_val10);
    p_uint7 = stack_buf_1b + 4;
    goto LAB_080289c4;
  case 0x80289aa:
    u_val12 = 0x72;
    i_val8 = entity[0xe];
    u_val10 = Product_Construct(i_val8 + 0x5c);
    u_val4 = Farmer_GetUpgradedTool(i_val8,u_val10);
    p_uint7 = stack_buf_1b + 5;
LAB_080289c4:
    *p_uint7 = u_val4;
LAB_080289c6:
    u_val5 = ArticleStack_IsEmpty(p_uint7);
    *(undefined2 *)(entity + 0x1f) = u_val5;
    break;
  case 0x80289ce:
    u_val12 = 0x1fa;
    break;
  case 0x80289d4:
    u_val12 = 0x196;
    break;
  case 0x80289da:
    u_val12 = 0x112;
    break;
  case 0x80289e0:
    u_val12 = 0x116;
    break;
  case 0x80289e6:
    i_val8 = _call_via_r2((int *)*entity,0x2c,*(undefined4 *)(*(int *)*entity + 0x40));
    mood_byte = *(byte *)((int)entity + 0x3e);
    if (mood_byte == 1) {
      u_val12 = 0xee;
      u_val6 = 0x77E;
    }
    else if (mood_byte < 2) {
      if (mood_byte != 0) break;
      u_val12 = 0xea;
      u_val6 = 0x77A;
    }
    else {
      if (mood_byte != 2) break;
      u_val12 = 0xe6;
      u_val6 = 0x782;
    }
    goto LAB_08028ab2;
  case 0x8028a30:
    u_val12 = 0x15a;
    i_val8 = _call_via_r2((int *)*entity,0x2c,*(undefined4 *)(*(int *)*entity + 0x40));
    u_val6 = 0x77A;
    goto LAB_08028ab2;
  case 0x8028a4c:
    u_val12 = 0x9a;
    i_val8 = _call_via_r2((int *)*entity,0x2c,*(undefined4 *)(*(int *)*entity + 0x40));
    u_val6 = 0x77A;
    goto LAB_08028ab2;
  case 0x8028a64:
    u_val12 = 0x106;
    break;
  case 0x8028a6a:
    u_val12 = 0x102;
    break;
  case 0x8028a70:
    u_val12 = 0xfe;
    break;
  case 0x8028a74:
    u_val12 = 0xfa;
    break;
  case 0x8028a78:
    u_val12 = 0x122;
    break;
  case 0x8028a7e:
    u_val12 = 0x11e;
    break;
  case 0x8028a84:
    u_val12 = 0x11a;
    break;
  case 0x8028a8a:
    c_char2 = HeldItem_IsEmpty(entity[0xe] + 0x54);
    u_val12 = 0x14a;
    if (c_char2 != '\0') {
      u_val12 = 0x10a;
    }
    break;
  case 0x8028aa0:
    u_val12 = 0xe2;
    i_val8 = _call_via_r2((int *)*entity,0x2c,*(undefined4 *)(*(int *)*entity + 0x40));
    u_val6 = 0x792;
LAB_08028ab2:
    if (*(ushort *)(i_val8 + 0x22) != u_val6) {
      Entity_Routine_080321B0(i_val8);
    }
    break;
  case 0x8028ac4:
    u_val12 = 0x3e;
    break;
  case 0x8028ac8:
    u_val12 = 0x146;
    break;
  case 0x8028ace:
    goto case_08028ACE;
  case 0x8028ad4:
    u_val12 = 0x13a;
    break;
  case 0x8028ada:
    u_val12 = 0x42;
    break;
  case 0x8028ade:
    c_char2 = HeldItem_IsEmpty(entity[0xe] + 0x54);
    u_val12 = 0x1c6;
    if (c_char2 != '\0') break;
LAB_08028af0:
    u_val12 = 0x156;
    break;
  case 0x8028afa:
    u_val12 = 0xf6;
    if (*(char *)((int)entity + 0x3d) != '\0') {
      u_val12 = 0xf2;
    }
  }
LAB_08028b08:
  Entity_Routine_080321B0(entity,u_val12);
  p_int9 = (int *)_call_via_r1((int *)*entity,*(undefined4 *)(*(int *)*entity + 0x14c));
  p_uint11 = (undefined4 *)*p_int9;
  p_uint13 = (undefined4 *)p_int9[1];
  do {
    if (p_uint11 == p_uint13) {
      u_val10 = p_uint13[-1];
LAB_08028b40:
      HW_Routine_08008B6C(u_val10,0x6c);
      return;
    }
    c_char2 = HW_Routine_08008CD0(*p_uint11);
    if (c_char2 == '\0') {
      u_val10 = *p_uint11;
      goto LAB_08028b40;
    }
    p_uint11 = p_uint11 + 1;
  } while( true );
}

// =============================================================================
// Function: Entity_Routine_08028B50 @ 0x08028B50
// =============================================================================
void Entity_Routine_08028B50(undefined4 *entity)

{
  char c_char1;
  byte mood_byte;
  undefined1 u_val3;
  undefined2 u_val4;
  int *p_int6;
  undefined4 u_val7;
  uint u_val8;
  int i_val9;
  undefined4 *p_uint10;
  undefined2 u_val11;
  undefined4 *p_uint12;
  undefined1 stack_val_1c;
  undefined1 stack_buf_1b [7];
  undefined1 *p_uint5;
  
  p_uint5 = &stack_val_1c;
  *(undefined1 *)(entity + 0xf) = 0xe;
  *(undefined1 *)(entity + 0x30) = 1;
  i_val9 = entity[0xd] + 0x1C2C;
  c_char1 = HeldItem_IsEmpty(i_val9);
  if (((c_char1 == '\0') && (i_val9 = HeldItem_GetKind(i_val9), i_val9 < 4)) && (1 < i_val9)) {
    *(undefined1 *)(entity + 0xf) = 0xd;
    u_val7 = 0xFFF60000;
    mood_byte = *(byte *)(entity + 8);
    if (mood_byte == 1) {
      entity[0x23] = 0;
LAB_08028bf6:
      entity[0x24] = u_val7;
    }
    else {
      if (mood_byte < 2) {
        if (mood_byte != 0) goto LAB_08028bfa;
        u_val7 = 0xa0000;
        entity[0x23] = 0;
        goto LAB_08028bf6;
      }
      if (mood_byte == 2) {
        entity[0x23] = 0xFFF60000;
        entity[0x24] = 0;
      }
      else {
        if (mood_byte != 3) goto LAB_08028bfa;
        entity[0x23] = 0xa0000;
        entity[0x24] = 0;
      }
    }
    entity[0x27] = 0xc0000;
  }
LAB_08028bfa:
  u_val11 = 0x192;
  *(short *)(entity + 0x1f) = (short)0xFFFF;
  if (0x39 < *(byte *)(entity + 0xf)) goto LAB_08029034;
  switch(*(uint *)((uint)*(byte *)(entity + 0xf) * 4 + gInlineTable_08028C28) & 0xfffffffe) {
  case 0x8028d10:
    c_char1 = HeldItem_IsEmpty(entity[0xe] + 0x54);
    if (c_char1 != '\0') {
      mood_byte = *(byte *)((int)entity + 0x3e);
      if (mood_byte == 1) {
        u_val11 = 0x132;
        if (*(char *)((int)entity + 0xb3) == '\0') {
          u_val11 = 0x1c6;
        }
        break;
      }
      if (1 < mood_byte) {
        if ((mood_byte == 2) && (u_val11 = 0x132, *(char *)((int)entity + 0xb3) == '\0')) {
          u_val11 = 0x15e;
        }
        break;
      }
      if (mood_byte != 0) break;
      goto case_08028E70;
    }
    mood_byte = *(byte *)((int)entity + 0x3e);
    if (mood_byte != 1) {
      if (1 < mood_byte) {
        if (mood_byte == 2) {
          u_val11 = 0x14e;
        }
        break;
      }
      goto joined_r0x08028de4;
    }
    goto LAB_0802901c;
  case 0x8028d84:
    c_char1 = HeldItem_IsEmpty(entity[0xe] + 0x54);
    if (c_char1 == '\0') goto case_08028FFA;
    if (5 < *(byte *)((int)entity + 0x3f)) goto case_08028E70;
    u_val11 = *(undefined2 *)
              (((uint)*(byte *)((int)entity + 0x3f) * 7 + (uint)*(byte *)(entity + 0x10)) * 2 +
              gRomData_080F0FCC);
    i_val9 = entity[0xe];
    u_val7 = Product_Construct(i_val9 + 0x5c);
    stack_val_1c = Farmer_GetUpgradedTool(i_val9,u_val7);
    goto LAB_08028ef2;
  case 0x8028dd4:
    mood_byte = HeldItem_IsEmpty(entity[0xe] + 0x54);
joined_r0x08028de4:
    u_val11 = 0x192;
    if (mood_byte != 0) break;
  case 0x8028ffa:
case_08028FFA:
    u_val11 = 0x152;
    break;
  case 0x8028dea:
    c_char1 = HeldItem_IsEmpty(entity[0xe] + 0x54);
    u_val11 = 0x192;
    if (c_char1 == '\0') {
      u_val11 = 0x152;
    }
    break;
  case 0x8028e02:
    u_val11 = 0x136;
    break;
  case 0x8028e08:
    u_val11 = 0x19e;
    break;
  case 0x8028e0e:
    u_val11 = 0x4e;
    break;
  case 0x8028e12:
    u_val11 = 0x46;
    break;
  case 0x8028e16:
    u_val11 = 0x13e;
    break;
  case 0x8028e1c:
    u_val11 = 0x142;
    break;
  case 0x8028e22:
    u_val11 = *(undefined2 *)(entity + 0x11);
    i_val9 = entity[0xe];
    u_val7 = Product_Construct(i_val9 + 0x5c);
    u_val3 = Farmer_GetUpgradedTool(i_val9,u_val7);
    p_uint5 = stack_buf_1b;
    goto LAB_08028ef0;
  case 0x8028e42:
    u_val11 = 0x1ea;
    i_val9 = entity[0xe];
    u_val7 = Product_Construct(i_val9 + 0x5c);
    u_val3 = Farmer_GetUpgradedTool(i_val9,u_val7);
    p_uint5 = stack_buf_1b + 1;
    goto LAB_08028ef0;
  case 0x8028e60:
    if (*(byte *)((int)entity + 0x4e) != *(byte *)((int)entity + 0x4f)) {
      u_val11 = 0x182;
      if ((uint)*(byte *)((int)entity + 0x4f) - (uint)*(byte *)((int)entity + 0x4e) == 1) {
        u_val11 = 0x186;
      }
      i_val9 = entity[0xe];
      u_val7 = Product_Construct(i_val9 + 0x5c);
      u_val3 = Farmer_GetUpgradedTool(i_val9,u_val7);
      p_uint5 = stack_buf_1b + 2;
      goto LAB_08028ef0;
    }
  case 0x8028e70:
case_08028E70:
    u_val11 = 0x192;
    break;
  case 0x8028ea0:
    u_val11 = 0x76;
    i_val9 = entity[0xe];
    u_val7 = Product_Construct(i_val9 + 0x5c);
    u_val3 = Farmer_GetUpgradedTool(i_val9,u_val7);
    p_uint5 = stack_buf_1b + 3;
    goto LAB_08028ef0;
  case 0x8028eba:
    u_val11 = 0x6e;
    i_val9 = entity[0xe];
    u_val7 = Product_Construct(i_val9 + 0x5c);
    u_val3 = Farmer_GetUpgradedTool(i_val9,u_val7);
    p_uint5 = stack_buf_1b + 4;
    goto LAB_08028ef0;
  case 0x8028ed6:
    u_val11 = 0x72;
    i_val9 = entity[0xe];
    u_val7 = Product_Construct(i_val9 + 0x5c);
    u_val3 = Farmer_GetUpgradedTool(i_val9,u_val7);
    p_uint5 = stack_buf_1b + 5;
LAB_08028ef0:
    *p_uint5 = u_val3;
LAB_08028ef2:
    u_val4 = ArticleStack_IsEmpty(p_uint5);
    *(undefined2 *)(entity + 0x1f) = u_val4;
    break;
  case 0x8028efa:
    u_val11 = 0x1fa;
    break;
  case 0x8028f00:
    u_val11 = 0x196;
    break;
  case 0x8028f06:
    u_val11 = 0x112;
    break;
  case 0x8028f0c:
    u_val11 = 0x116;
    break;
  case 0x8028f12:
    i_val9 = _call_via_r2((int *)*entity,0x2c,*(undefined4 *)(*(int *)*entity + 0x40));
    mood_byte = *(byte *)((int)entity + 0x3e);
    if (mood_byte == 1) {
      u_val11 = 0xee;
      u_val8 = 0x77E;
    }
    else if (mood_byte < 2) {
      if (mood_byte != 0) break;
      u_val11 = 0xea;
      u_val8 = 0x77A;
    }
    else {
      if (mood_byte != 2) break;
      u_val11 = 0xe6;
      u_val8 = 0x782;
    }
    goto LAB_08028fde;
  case 0x8028f5c:
    u_val11 = 0x15a;
    i_val9 = _call_via_r2((int *)*entity,0x2c,*(undefined4 *)(*(int *)*entity + 0x40));
    u_val8 = 0x77A;
    goto LAB_08028fde;
  case 0x8028f78:
    u_val11 = 0x9a;
    i_val9 = _call_via_r2((int *)*entity,0x2c,*(undefined4 *)(*(int *)*entity + 0x40));
    u_val8 = 0x77A;
    goto LAB_08028fde;
  case 0x8028f90:
    u_val11 = 0x106;
    break;
  case 0x8028f96:
    u_val11 = 0x102;
    break;
  case 0x8028f9c:
    u_val11 = 0xfe;
    break;
  case 0x8028fa0:
    u_val11 = 0xfa;
    break;
  case 0x8028fa4:
    u_val11 = 0x122;
    break;
  case 0x8028faa:
    u_val11 = 0x11e;
    break;
  case 0x8028fb0:
    u_val11 = 0x11a;
    break;
  case 0x8028fb6:
    c_char1 = HeldItem_IsEmpty(entity[0xe] + 0x54);
    u_val11 = 0x14a;
    if (c_char1 != '\0') {
      u_val11 = 0x10a;
    }
    break;
  case 0x8028fcc:
    u_val11 = 0xe2;
    i_val9 = _call_via_r2((int *)*entity,0x2c,*(undefined4 *)(*(int *)*entity + 0x40));
    u_val8 = 0x792;
LAB_08028fde:
    if (*(ushort *)(i_val9 + 0x22) != u_val8) {
      Entity_Routine_080321B0(i_val9);
    }
    break;
  case 0x8028ff0:
    u_val11 = 0x3e;
    break;
  case 0x8028ff4:
    u_val11 = 0x146;
    break;
  case 0x8029000:
    u_val11 = 0x13a;
    break;
  case 0x8029006:
    u_val11 = 0x42;
    break;
  case 0x802900a:
    c_char1 = HeldItem_IsEmpty(entity[0xe] + 0x54);
    u_val11 = 0x1c6;
    if (c_char1 != '\0') break;
LAB_0802901c:
    u_val11 = 0x156;
    break;
  case 0x8029026:
    u_val11 = 0xf6;
    if (*(char *)((int)entity + 0x3d) != '\0') {
      u_val11 = 0xf2;
    }
  }
LAB_08029034:
  Entity_Routine_080321B0(entity,u_val11);
  p_int6 = (int *)_call_via_r1((int *)*entity,*(undefined4 *)(*(int *)*entity + 0x14c));
  p_uint10 = (undefined4 *)*p_int6;
  p_uint12 = (undefined4 *)p_int6[1];
  do {
    if (p_uint10 == p_uint12) {
      u_val7 = p_uint12[-1];
LAB_0802906c:
      HW_Routine_08008B6C(u_val7,0x6c);
      return;
    }
    c_char1 = HW_Routine_08008CD0(*p_uint10);
    if (c_char1 == '\0') {
      u_val7 = *p_uint10;
      goto LAB_0802906c;
    }
    p_uint10 = p_uint10 + 1;
  } while( true );
}

// =============================================================================
// Function: Entity_Routine_0802907C @ 0x0802907C
// =============================================================================
void Entity_Routine_0802907C(int entity)

{
  char c_char1;
  int i_val2;
  int i_val3;
  undefined1 temp_coords [4];
  
  i_val3 = *(int *)(entity + 0x34) + 0x1C2C;
  c_char1 = HeldItem_IsEmpty(i_val3);
  if (c_char1 == '\0') {
    i_val2 = HeldItem_GetKind(i_val3);
    if (i_val2 == 1) {
      temp_coords[0] = HeldItem_GetArticle(i_val3);
      i_val3 = Item_GetQuality(temp_coords);
      if (i_val3 == 0x35) {
        Farmer_Routine_0800ED2C(*(undefined4 *)(entity + 0x38));
      }
    }
    HeldItem_Clear(*(int *)(entity + 0x38) + 0x54);
    Entity_Routine_0802A7D8(entity);
  }
  return;
}

// =============================================================================
// Function: Entity_Routine_080290D4 @ 0x080290D4
// =============================================================================
u32 Entity_Routine_080290D4(undefined4 *entity,undefined4 speed,undefined1 collision)

{
  char c_char1;
  byte b_flag2;
  undefined1 u_val3;
  undefined2 u_val4;
  undefined4 u_val5;
  int i_val7;
  uint u_val8;
  undefined2 u_val9;
  undefined1 stack_val_1c;
  undefined1 stack_buf_1b [7];
  undefined1 *p_uint6;
  
  p_uint6 = &stack_val_1c;
  *(undefined1 *)(entity + 0x29) = 1;
  c_char1 = HeldItem_IsEmpty(entity[0xd] + 0x1C2C);
  if (c_char1 == '\0') {
    u_val5 = 0;
    goto LAB_08029550;
  }
  *(undefined1 *)(entity + 0x30) = 1;
  Entity_Routine_08026150(entity,speed,collision);
  u_val9 = 0x192;
  *(short *)(entity + 0x1f) = (short)0xFFFF;
  if (0x39 < *(byte *)(entity + 0xf)) goto LAB_08029544;
  switch(*(uint *)((uint)*(byte *)(entity + 0xf) * 4 + gInlineTable_0802913C) & 0xfffffffe) {
  case 0x8029224:
    c_char1 = HeldItem_IsEmpty(entity[0xe] + 0x54);
    if (c_char1 == '\0') {
      b_flag2 = *(byte *)((int)entity + 0x3e);
      if (b_flag2 == 1) goto LAB_08029530;
      if (b_flag2 < 2) goto joined_r0x080292f8;
      if (b_flag2 == 2) {
        u_val9 = 0x14e;
      }
    }
    else {
      b_flag2 = *(byte *)((int)entity + 0x3e);
      if (b_flag2 == 1) {
        u_val9 = 0x132;
        if (*(char *)((int)entity + 0xb3) == '\0') {
          u_val9 = 0x1c6;
        }
      }
      else if (b_flag2 < 2) {
        if (b_flag2 == 0) goto case_08029384;
      }
      else if ((b_flag2 == 2) && (u_val9 = 0x132, *(char *)((int)entity + 0xb3) == '\0')) {
        u_val9 = 0x15e;
      }
    }
    break;
  case 0x8029298:
    c_char1 = HeldItem_IsEmpty(entity[0xe] + 0x54);
    if (c_char1 == '\0') goto case_0802950E;
    if (5 < *(byte *)((int)entity + 0x3f)) goto case_08029384;
    u_val9 = *(undefined2 *)
             (((uint)*(byte *)((int)entity + 0x3f) * 7 + (uint)*(byte *)(entity + 0x10)) * 2 +
             gRomData_080F0FCC);
    i_val7 = entity[0xe];
    u_val5 = Product_Construct(i_val7 + 0x5c);
    stack_val_1c = Farmer_GetUpgradedTool(i_val7,u_val5);
    goto LAB_08029406;
  case 0x80292e8:
    b_flag2 = HeldItem_IsEmpty(entity[0xe] + 0x54);
joined_r0x080292f8:
    u_val9 = 0x192;
    if (b_flag2 == 0) goto case_0802950E;
    break;
  case 0x80292fe:
    c_char1 = HeldItem_IsEmpty(entity[0xe] + 0x54);
    u_val9 = 0x192;
    if (c_char1 == '\0') {
      u_val9 = 0x152;
    }
    break;
  case 0x8029316:
    u_val9 = 0x136;
    break;
  case 0x802931c:
    u_val9 = 0x19e;
    break;
  case 0x8029322:
    u_val9 = 0x4e;
    break;
  case 0x8029326:
    u_val9 = 0x46;
    break;
  case 0x802932a:
    u_val9 = 0x13e;
    break;
  case 0x8029330:
    u_val9 = 0x142;
    break;
  case 0x8029336:
    u_val9 = *(undefined2 *)(entity + 0x11);
    i_val7 = entity[0xe];
    u_val5 = Product_Construct(i_val7 + 0x5c);
    u_val3 = Farmer_GetUpgradedTool(i_val7,u_val5);
    p_uint6 = stack_buf_1b;
    goto LAB_08029404;
  case 0x8029356:
    u_val9 = 0x1ea;
    i_val7 = entity[0xe];
    u_val5 = Product_Construct(i_val7 + 0x5c);
    u_val3 = Farmer_GetUpgradedTool(i_val7,u_val5);
    p_uint6 = stack_buf_1b + 1;
    goto LAB_08029404;
  case 0x8029374:
    if (*(byte *)((int)entity + 0x4e) != *(byte *)((int)entity + 0x4f)) {
      u_val9 = 0x182;
      if ((uint)*(byte *)((int)entity + 0x4f) - (uint)*(byte *)((int)entity + 0x4e) == 1) {
        u_val9 = 0x186;
      }
      i_val7 = entity[0xe];
      u_val5 = Product_Construct(i_val7 + 0x5c);
      u_val3 = Farmer_GetUpgradedTool(i_val7,u_val5);
      p_uint6 = stack_buf_1b + 2;
      goto LAB_08029404;
    }
  case 0x8029384:
case_08029384:
    u_val9 = 0x192;
    break;
  case 0x80293b4:
    u_val9 = 0x76;
    i_val7 = entity[0xe];
    u_val5 = Product_Construct(i_val7 + 0x5c);
    u_val3 = Farmer_GetUpgradedTool(i_val7,u_val5);
    p_uint6 = stack_buf_1b + 3;
    goto LAB_08029404;
  case 0x80293ce:
    u_val9 = 0x6e;
    i_val7 = entity[0xe];
    u_val5 = Product_Construct(i_val7 + 0x5c);
    u_val3 = Farmer_GetUpgradedTool(i_val7,u_val5);
    p_uint6 = stack_buf_1b + 4;
    goto LAB_08029404;
  case 0x80293ea:
    u_val9 = 0x72;
    i_val7 = entity[0xe];
    u_val5 = Product_Construct(i_val7 + 0x5c);
    u_val3 = Farmer_GetUpgradedTool(i_val7,u_val5);
    p_uint6 = stack_buf_1b + 5;
LAB_08029404:
    *p_uint6 = u_val3;
LAB_08029406:
    u_val4 = ArticleStack_IsEmpty(p_uint6);
    *(undefined2 *)(entity + 0x1f) = u_val4;
    break;
  case 0x802940e:
    u_val9 = 0x1fa;
    break;
  case 0x8029414:
    u_val9 = 0x196;
    break;
  case 0x802941a:
    u_val9 = 0x112;
    break;
  case 0x8029420:
    u_val9 = 0x116;
    break;
  case 0x8029426:
    i_val7 = _call_via_r2((int *)*entity,0x2c,*(undefined4 *)(*(int *)*entity + 0x40));
    b_flag2 = *(byte *)((int)entity + 0x3e);
    if (b_flag2 == 1) {
      u_val9 = 0xee;
      u_val8 = 0x77E;
      goto LAB_080294f2;
    }
    if (b_flag2 < 2) {
      if (b_flag2 == 0) {
        u_val9 = 0xea;
        u_val8 = 0x77A;
        goto LAB_080294f2;
      }
    }
    else if (b_flag2 == 2) {
      u_val9 = 0xe6;
      u_val8 = 0x782;
      goto LAB_080294f2;
    }
    break;
  case 0x8029470:
    u_val9 = 0x15a;
    i_val7 = _call_via_r2((int *)*entity,0x2c,*(undefined4 *)(*(int *)*entity + 0x40));
    u_val8 = 0x77A;
    goto LAB_080294f2;
  case 0x802948c:
    u_val9 = 0x9a;
    i_val7 = _call_via_r2((int *)*entity,0x2c,*(undefined4 *)(*(int *)*entity + 0x40));
    u_val8 = 0x77A;
    goto LAB_080294f2;
  case 0x80294a4:
    u_val9 = 0x106;
    break;
  case 0x80294aa:
    u_val9 = 0x102;
    break;
  case 0x80294b0:
    u_val9 = 0xfe;
    break;
  case 0x80294b4:
    u_val9 = 0xfa;
    break;
  case 0x80294b8:
    u_val9 = 0x122;
    break;
  case 0x80294be:
    u_val9 = 0x11e;
    break;
  case 0x80294c4:
    u_val9 = 0x11a;
    break;
  case 0x80294ca:
    c_char1 = HeldItem_IsEmpty(entity[0xe] + 0x54);
    u_val9 = 0x14a;
    if (c_char1 != '\0') {
      u_val9 = 0x10a;
    }
    break;
  case 0x80294e0:
    u_val9 = 0xe2;
    i_val7 = _call_via_r2((int *)*entity,0x2c,*(undefined4 *)(*(int *)*entity + 0x40));
    u_val8 = 0x792;
LAB_080294f2:
    if (*(ushort *)(i_val7 + 0x22) != u_val8) {
      Entity_Routine_080321B0(i_val7);
    }
    break;
  case 0x8029504:
    u_val9 = 0x3e;
    break;
  case 0x8029508:
    u_val9 = 0x146;
    break;
  case 0x802950e:
case_0802950E:
    u_val9 = 0x152;
    break;
  case 0x8029514:
    u_val9 = 0x13a;
    break;
  case 0x802951a:
    u_val9 = 0x42;
    break;
  case 0x802951e:
    c_char1 = HeldItem_IsEmpty(entity[0xe] + 0x54);
    u_val9 = 0x1c6;
    if (c_char1 == '\0') {
LAB_08029530:
      u_val9 = 0x156;
    }
    break;
  case 0x8029536:
    u_val9 = 0xf6;
    if (*(char *)((int)entity + 0x3d) != '\0') {
      u_val9 = 0xf2;
    }
  }
LAB_08029544:
  Entity_Routine_080321B0(entity,u_val9);
  u_val5 = 1;
LAB_08029550:
  return u_val5;
}

// =============================================================================
// Function: Entity_Routine_08029558 @ 0x08029558
// =============================================================================
u32 Entity_Routine_08029558(undefined4 *entity)

{
  char c_char1;
  byte b_flag2;
  undefined1 u_val3;
  undefined2 u_val4;
  undefined4 u_val5;
  int i_val7;
  uint u_val8;
  undefined2 u_val9;
  undefined1 stack_val_1c;
  undefined1 stack_buf_1b [7];
  undefined1 *p_uint6;
  
  p_uint6 = &stack_val_1c;
  *(undefined1 *)(entity + 0x29) = 1;
  c_char1 = HeldItem_IsEmpty(entity[0xd] + 0x1C2C);
  if (c_char1 == '\0') {
    u_val5 = 0;
    goto LAB_080299c8;
  }
  *(undefined1 *)(entity + 0x30) = 1;
  Entity_Routine_08025FC4(entity);
  u_val9 = 0x192;
  *(short *)(entity + 0x1f) = (short)0xFFFF;
  if (0x39 < *(byte *)(entity + 0xf)) goto LAB_080299bc;
  switch(*(uint *)((uint)*(byte *)(entity + 0xf) * 4 + gInlineTable_080295B4) & 0xfffffffe) {
  case 0x802969c:
    c_char1 = HeldItem_IsEmpty(entity[0xe] + 0x54);
    if (c_char1 == '\0') {
      b_flag2 = *(byte *)((int)entity + 0x3e);
      if (b_flag2 == 1) goto LAB_080299a8;
      if (b_flag2 < 2) goto joined_r0x08029770;
      if (b_flag2 == 2) {
        u_val9 = 0x14e;
      }
    }
    else {
      b_flag2 = *(byte *)((int)entity + 0x3e);
      if (b_flag2 == 1) {
        u_val9 = 0x132;
        if (*(char *)((int)entity + 0xb3) == '\0') {
          u_val9 = 0x1c6;
        }
      }
      else if (b_flag2 < 2) {
        if (b_flag2 == 0) goto case_080297FC;
      }
      else if ((b_flag2 == 2) && (u_val9 = 0x132, *(char *)((int)entity + 0xb3) == '\0')) {
        u_val9 = 0x15e;
      }
    }
    break;
  case 0x8029710:
    c_char1 = HeldItem_IsEmpty(entity[0xe] + 0x54);
    if (c_char1 == '\0') goto case_08029986;
    if (5 < *(byte *)((int)entity + 0x3f)) goto case_080297FC;
    u_val9 = *(undefined2 *)
             (((uint)*(byte *)((int)entity + 0x3f) * 7 + (uint)*(byte *)(entity + 0x10)) * 2 +
             gRomData_080F0FCC);
    i_val7 = entity[0xe];
    u_val5 = Product_Construct(i_val7 + 0x5c);
    stack_val_1c = Farmer_GetUpgradedTool(i_val7,u_val5);
    goto LAB_0802987e;
  case 0x8029760:
    b_flag2 = HeldItem_IsEmpty(entity[0xe] + 0x54);
joined_r0x08029770:
    u_val9 = 0x192;
    if (b_flag2 == 0) goto case_08029986;
    break;
  case 0x8029776:
    c_char1 = HeldItem_IsEmpty(entity[0xe] + 0x54);
    u_val9 = 0x192;
    if (c_char1 == '\0') {
      u_val9 = 0x152;
    }
    break;
  case 0x802978e:
    u_val9 = 0x136;
    break;
  case 0x8029794:
    u_val9 = 0x19e;
    break;
  case 0x802979a:
    u_val9 = 0x4e;
    break;
  case 0x802979e:
    u_val9 = 0x46;
    break;
  case 0x80297a2:
    u_val9 = 0x13e;
    break;
  case 0x80297a8:
    u_val9 = 0x142;
    break;
  case 0x80297ae:
    u_val9 = *(undefined2 *)(entity + 0x11);
    i_val7 = entity[0xe];
    u_val5 = Product_Construct(i_val7 + 0x5c);
    u_val3 = Farmer_GetUpgradedTool(i_val7,u_val5);
    p_uint6 = stack_buf_1b;
    goto LAB_0802987c;
  case 0x80297ce:
    u_val9 = 0x1ea;
    i_val7 = entity[0xe];
    u_val5 = Product_Construct(i_val7 + 0x5c);
    u_val3 = Farmer_GetUpgradedTool(i_val7,u_val5);
    p_uint6 = stack_buf_1b + 1;
    goto LAB_0802987c;
  case 0x80297ec:
    if (*(byte *)((int)entity + 0x4e) != *(byte *)((int)entity + 0x4f)) {
      u_val9 = 0x182;
      if ((uint)*(byte *)((int)entity + 0x4f) - (uint)*(byte *)((int)entity + 0x4e) == 1) {
        u_val9 = 0x186;
      }
      i_val7 = entity[0xe];
      u_val5 = Product_Construct(i_val7 + 0x5c);
      u_val3 = Farmer_GetUpgradedTool(i_val7,u_val5);
      p_uint6 = stack_buf_1b + 2;
      goto LAB_0802987c;
    }
  case 0x80297fc:
case_080297FC:
    u_val9 = 0x192;
    break;
  case 0x802982c:
    u_val9 = 0x76;
    i_val7 = entity[0xe];
    u_val5 = Product_Construct(i_val7 + 0x5c);
    u_val3 = Farmer_GetUpgradedTool(i_val7,u_val5);
    p_uint6 = stack_buf_1b + 3;
    goto LAB_0802987c;
  case 0x8029846:
    u_val9 = 0x6e;
    i_val7 = entity[0xe];
    u_val5 = Product_Construct(i_val7 + 0x5c);
    u_val3 = Farmer_GetUpgradedTool(i_val7,u_val5);
    p_uint6 = stack_buf_1b + 4;
    goto LAB_0802987c;
  case 0x8029862:
    u_val9 = 0x72;
    i_val7 = entity[0xe];
    u_val5 = Product_Construct(i_val7 + 0x5c);
    u_val3 = Farmer_GetUpgradedTool(i_val7,u_val5);
    p_uint6 = stack_buf_1b + 5;
LAB_0802987c:
    *p_uint6 = u_val3;
LAB_0802987e:
    u_val4 = ArticleStack_IsEmpty(p_uint6);
    *(undefined2 *)(entity + 0x1f) = u_val4;
    break;
  case 0x8029886:
    u_val9 = 0x1fa;
    break;
  case 0x802988c:
    u_val9 = 0x196;
    break;
  case 0x8029892:
    u_val9 = 0x112;
    break;
  case 0x8029898:
    u_val9 = 0x116;
    break;
  case 0x802989e:
    i_val7 = _call_via_r2((int *)*entity,0x2c,*(undefined4 *)(*(int *)*entity + 0x40));
    b_flag2 = *(byte *)((int)entity + 0x3e);
    if (b_flag2 == 1) {
      u_val9 = 0xee;
      u_val8 = 0x77E;
      goto LAB_0802996a;
    }
    if (b_flag2 < 2) {
      if (b_flag2 == 0) {
        u_val9 = 0xea;
        u_val8 = 0x77A;
        goto LAB_0802996a;
      }
    }
    else if (b_flag2 == 2) {
      u_val9 = 0xe6;
      u_val8 = 0x782;
      goto LAB_0802996a;
    }
    break;
  case 0x80298e8:
    u_val9 = 0x15a;
    i_val7 = _call_via_r2((int *)*entity,0x2c,*(undefined4 *)(*(int *)*entity + 0x40));
    u_val8 = 0x77A;
    goto LAB_0802996a;
  case 0x8029904:
    u_val9 = 0x9a;
    i_val7 = _call_via_r2((int *)*entity,0x2c,*(undefined4 *)(*(int *)*entity + 0x40));
    u_val8 = 0x77A;
    goto LAB_0802996a;
  case 0x802991c:
    u_val9 = 0x106;
    break;
  case 0x8029922:
    u_val9 = 0x102;
    break;
  case 0x8029928:
    u_val9 = 0xfe;
    break;
  case 0x802992c:
    u_val9 = 0xfa;
    break;
  case 0x8029930:
    u_val9 = 0x122;
    break;
  case 0x8029936:
    u_val9 = 0x11e;
    break;
  case 0x802993c:
    u_val9 = 0x11a;
    break;
  case 0x8029942:
    c_char1 = HeldItem_IsEmpty(entity[0xe] + 0x54);
    u_val9 = 0x14a;
    if (c_char1 != '\0') {
      u_val9 = 0x10a;
    }
    break;
  case 0x8029958:
    u_val9 = 0xe2;
    i_val7 = _call_via_r2((int *)*entity,0x2c,*(undefined4 *)(*(int *)*entity + 0x40));
    u_val8 = 0x792;
LAB_0802996a:
    if (*(ushort *)(i_val7 + 0x22) != u_val8) {
      Entity_Routine_080321B0(i_val7);
    }
    break;
  case 0x802997c:
    u_val9 = 0x3e;
    break;
  case 0x8029980:
    u_val9 = 0x146;
    break;
  case 0x8029986:
case_08029986:
    u_val9 = 0x152;
    break;
  case 0x802998c:
    u_val9 = 0x13a;
    break;
  case 0x8029992:
    u_val9 = 0x42;
    break;
  case 0x8029996:
    c_char1 = HeldItem_IsEmpty(entity[0xe] + 0x54);
    u_val9 = 0x1c6;
    if (c_char1 == '\0') {
LAB_080299a8:
      u_val9 = 0x156;
    }
    break;
  case 0x80299ae:
    u_val9 = 0xf6;
    if (*(char *)((int)entity + 0x3d) != '\0') {
      u_val9 = 0xf2;
    }
  }
LAB_080299bc:
  Entity_Routine_080321B0(entity,u_val9);
  u_val5 = 1;
LAB_080299c8:
  return u_val5;
}

// =============================================================================
// Function: Entity_Routine_080299D0 @ 0x080299D0
// =============================================================================
void Entity_Routine_080299D0(int entity)

{
  
  *(undefined1 *)(entity + 0xa4) = 0;
  *(undefined1 *)(entity + 0x88) = 0;
  Entity_Routine_080321B0(entity,0x192);
  return;
}

// =============================================================================
// Function: Entity_Routine_080299EC @ 0x080299EC
// =============================================================================
void Entity_Routine_080299EC(undefined4 *entity)

{
  char c_char1;
  byte mood_byte;
  undefined1 u_val3;
  undefined2 u_val4;
  int *p_int5;
  undefined4 u_val6;
  int i_val8;
  uint u_val9;
  undefined4 *curr_ptr;
  undefined2 u_val11;
  undefined4 *end_ptr;
  undefined1 stack_val_28;
  undefined1 stack_buf_27 [7];
  undefined1 *p_uint7;
  
  p_uint7 = &stack_val_28;
  *(undefined1 *)(entity + 0x29) = 1;
  Entity_Routine_0802A588(entity);
  c_char1 = HeldItem_IsEmpty(entity[0xe] + 0x54);
  if (c_char1 == '\0') {
    p_int5 = (int *)_call_via_r1((int *)*entity,*(undefined4 *)(*(int *)*entity + 0x14c));
    end_ptr = (undefined4 *)p_int5[1];
    for (curr_ptr = (undefined4 *)*p_int5; curr_ptr != end_ptr; curr_ptr = curr_ptr + 1) {
      c_char1 = HW_Routine_08008CD0(*curr_ptr);
      if (c_char1 == '\0') {
        u_val6 = *curr_ptr;
        goto LAB_08029a5a;
      }
    }
    u_val6 = end_ptr[-1];
LAB_08029a5a:
    HW_Routine_08008B6C(u_val6,0x6a);
    *(undefined1 *)(entity + 0xf) = 0x11;
    u_val6 = 0xFFF60000;
    mood_byte = *(byte *)(entity + 8);
    if (mood_byte == 1) {
      entity[0x23] = 0;
LAB_08029aca:
      entity[0x24] = u_val6;
      entity[0x27] = 0xc0000;
    }
    else if (mood_byte < 2) {
      if (mood_byte == 0) {
        u_val6 = 0xa0000;
        entity[0x23] = 0;
        goto LAB_08029aca;
      }
    }
    else {
      u_val6 = 0xFFF60000;
      if (mood_byte != 2) {
        if (mood_byte != 3) goto LAB_08029ae4;
        u_val6 = 0xa0000;
      }
      entity[0x23] = u_val6;
      entity[0x24] = 0;
      entity[0x27] = 0xc0000;
    }
  }
  else {
    *(undefined1 *)(entity + 0xf) = 0;
  }
LAB_08029ae4:
  u_val11 = 0x192;
  *(short *)(entity + 0x1f) = (short)0xFFFF;
  if (0x39 < *(byte *)(entity + 0xf)) goto LAB_08029f10;
  switch(*(uint *)((uint)*(byte *)(entity + 0xf) * 4 + gInlineTable_08029B08) & 0xfffffffe) {
  case 0x8029bf0:
    c_char1 = HeldItem_IsEmpty(entity[0xe] + 0x54);
    if (c_char1 != '\0') {
      mood_byte = *(byte *)((int)entity + 0x3e);
      if (mood_byte == 1) {
        u_val11 = 0x132;
        if (*(char *)((int)entity + 0xb3) == '\0') {
          u_val11 = 0x1c6;
        }
        break;
      }
      if (1 < mood_byte) {
        if ((mood_byte == 2) && (u_val11 = 0x132, *(char *)((int)entity + 0xb3) == '\0')) {
          u_val11 = 0x15e;
        }
        break;
      }
      if (mood_byte != 0) break;
      goto case_08029D50;
    }
    mood_byte = *(byte *)((int)entity + 0x3e);
    if (mood_byte != 1) {
      if (1 < mood_byte) {
        if (mood_byte == 2) {
          u_val11 = 0x14e;
        }
        break;
      }
      goto joined_r0x08029cc4;
    }
    goto LAB_08029efc;
  case 0x8029c64:
    c_char1 = HeldItem_IsEmpty(entity[0xe] + 0x54);
    if (c_char1 == '\0') goto case_08029EDA;
    if (5 < *(byte *)((int)entity + 0x3f)) goto case_08029D50;
    u_val11 = *(undefined2 *)
              (((uint)*(byte *)((int)entity + 0x3f) * 7 + (uint)*(byte *)(entity + 0x10)) * 2 +
              gRomData_080F0FCC);
    i_val8 = entity[0xe];
    u_val6 = Product_Construct(i_val8 + 0x5c);
    stack_val_28 = Farmer_GetUpgradedTool(i_val8,u_val6);
    goto LAB_08029dd2;
  case 0x8029cb4:
    mood_byte = HeldItem_IsEmpty(entity[0xe] + 0x54);
joined_r0x08029cc4:
    u_val11 = 0x192;
    if (mood_byte != 0) break;
  case 0x8029eda:
case_08029EDA:
    u_val11 = 0x152;
    break;
  case 0x8029cca:
    c_char1 = HeldItem_IsEmpty(entity[0xe] + 0x54);
    u_val11 = 0x192;
    if (c_char1 == '\0') {
      u_val11 = 0x152;
    }
    break;
  case 0x8029ce2:
    u_val11 = 0x136;
    break;
  case 0x8029ce8:
    u_val11 = 0x19e;
    break;
  case 0x8029cee:
    u_val11 = 0x4e;
    break;
  case 0x8029cf2:
    u_val11 = 0x46;
    break;
  case 0x8029cf6:
    u_val11 = 0x13e;
    break;
  case 0x8029cfc:
    u_val11 = 0x142;
    break;
  case 0x8029d02:
    u_val11 = *(undefined2 *)(entity + 0x11);
    i_val8 = entity[0xe];
    u_val6 = Product_Construct(i_val8 + 0x5c);
    u_val3 = Farmer_GetUpgradedTool(i_val8,u_val6);
    p_uint7 = stack_buf_27;
    goto LAB_08029dd0;
  case 0x8029d22:
    u_val11 = 0x1ea;
    i_val8 = entity[0xe];
    u_val6 = Product_Construct(i_val8 + 0x5c);
    u_val3 = Farmer_GetUpgradedTool(i_val8,u_val6);
    p_uint7 = stack_buf_27 + 1;
    goto LAB_08029dd0;
  case 0x8029d40:
    if (*(byte *)((int)entity + 0x4e) != *(byte *)((int)entity + 0x4f)) {
      u_val11 = 0x182;
      if ((uint)*(byte *)((int)entity + 0x4f) - (uint)*(byte *)((int)entity + 0x4e) == 1) {
        u_val11 = 0x186;
      }
      i_val8 = entity[0xe];
      u_val6 = Product_Construct(i_val8 + 0x5c);
      u_val3 = Farmer_GetUpgradedTool(i_val8,u_val6);
      p_uint7 = stack_buf_27 + 2;
      goto LAB_08029dd0;
    }
  case 0x8029d50:
case_08029D50:
    u_val11 = 0x192;
    break;
  case 0x8029d80:
    u_val11 = 0x76;
    i_val8 = entity[0xe];
    u_val6 = Product_Construct(i_val8 + 0x5c);
    u_val3 = Farmer_GetUpgradedTool(i_val8,u_val6);
    p_uint7 = stack_buf_27 + 3;
    goto LAB_08029dd0;
  case 0x8029d9a:
    u_val11 = 0x6e;
    i_val8 = entity[0xe];
    u_val6 = Product_Construct(i_val8 + 0x5c);
    u_val3 = Farmer_GetUpgradedTool(i_val8,u_val6);
    p_uint7 = stack_buf_27 + 4;
    goto LAB_08029dd0;
  case 0x8029db6:
    u_val11 = 0x72;
    i_val8 = entity[0xe];
    u_val6 = Product_Construct(i_val8 + 0x5c);
    u_val3 = Farmer_GetUpgradedTool(i_val8,u_val6);
    p_uint7 = stack_buf_27 + 5;
LAB_08029dd0:
    *p_uint7 = u_val3;
LAB_08029dd2:
    u_val4 = ArticleStack_IsEmpty(p_uint7);
    *(undefined2 *)(entity + 0x1f) = u_val4;
    break;
  case 0x8029dda:
    u_val11 = 0x1fa;
    break;
  case 0x8029de0:
    u_val11 = 0x196;
    break;
  case 0x8029de6:
    u_val11 = 0x112;
    break;
  case 0x8029dec:
    u_val11 = 0x116;
    break;
  case 0x8029df2:
    i_val8 = _call_via_r2((int *)*entity,0x2c,*(undefined4 *)(*(int *)*entity + 0x40));
    mood_byte = *(byte *)((int)entity + 0x3e);
    if (mood_byte == 1) {
      u_val11 = 0xee;
      u_val9 = 0x77E;
    }
    else if (mood_byte < 2) {
      if (mood_byte != 0) break;
      u_val11 = 0xea;
      u_val9 = 0x77A;
    }
    else {
      if (mood_byte != 2) break;
      u_val11 = 0xe6;
      u_val9 = 0x782;
    }
    goto LAB_08029ebe;
  case 0x8029e3c:
    u_val11 = 0x15a;
    i_val8 = _call_via_r2((int *)*entity,0x2c,*(undefined4 *)(*(int *)*entity + 0x40));
    u_val9 = 0x77A;
    goto LAB_08029ebe;
  case 0x8029e58:
    u_val11 = 0x9a;
    i_val8 = _call_via_r2((int *)*entity,0x2c,*(undefined4 *)(*(int *)*entity + 0x40));
    u_val9 = 0x77A;
    goto LAB_08029ebe;
  case 0x8029e70:
    u_val11 = 0x106;
    break;
  case 0x8029e76:
    u_val11 = 0x102;
    break;
  case 0x8029e7c:
    u_val11 = 0xfe;
    break;
  case 0x8029e80:
    u_val11 = 0xfa;
    break;
  case 0x8029e84:
    u_val11 = 0x122;
    break;
  case 0x8029e8a:
    u_val11 = 0x11e;
    break;
  case 0x8029e90:
    u_val11 = 0x11a;
    break;
  case 0x8029e96:
    c_char1 = HeldItem_IsEmpty(entity[0xe] + 0x54);
    u_val11 = 0x14a;
    if (c_char1 != '\0') {
      u_val11 = 0x10a;
    }
    break;
  case 0x8029eac:
    u_val11 = 0xe2;
    i_val8 = _call_via_r2((int *)*entity,0x2c,*(undefined4 *)(*(int *)*entity + 0x40));
    u_val9 = 0x792;
LAB_08029ebe:
    if (*(ushort *)(i_val8 + 0x22) != u_val9) {
      Entity_Routine_080321B0(i_val8);
    }
    break;
  case 0x8029ed0:
    u_val11 = 0x3e;
    break;
  case 0x8029ed4:
    u_val11 = 0x146;
    break;
  case 0x8029ee0:
    u_val11 = 0x13a;
    break;
  case 0x8029ee6:
    u_val11 = 0x42;
    break;
  case 0x8029eea:
    c_char1 = HeldItem_IsEmpty(entity[0xe] + 0x54);
    u_val11 = 0x1c6;
    if (c_char1 != '\0') break;
LAB_08029efc:
    u_val11 = 0x156;
    break;
  case 0x8029f02:
    u_val11 = 0xf6;
    if (*(char *)((int)entity + 0x3d) != '\0') {
      u_val11 = 0xf2;
    }
  }
LAB_08029f10:
  Entity_Routine_080321B0(entity,u_val11);
  *(undefined1 *)(entity + 0x30) = 1;
  return;
}

// =============================================================================
// Function: Entity_Routine_08029F30 @ 0x08029F30
// =============================================================================
void Entity_Routine_08029F30(undefined4 *entity,undefined4 speed)

{
  byte b_flag1;
  undefined1 u_val2;
  char c_char3;
  undefined2 u_val4;
  undefined2 u_val5;
  undefined4 u_val6;
  uint u_val7;
  undefined1 *p_uint8;
  int i_val9;
  undefined4 *p_uint10;
  undefined1 stack_val_20;
  undefined1 stack_buf_1f [7];
  
  *(undefined1 *)(entity + 0x29) = 1;
  *(undefined1 *)(entity + 0x22) = 1;
  *(undefined1 *)((int)entity + 0x89) = 0;
  entity[0x23] = 0xFFF80000;
  entity[0x24] = 0;
  entity[0x27] = 0x110000;
  p_uint10 = (undefined4 *)entity[4];
  if (p_uint10 != (undefined4 *)0x0) {
    Item_SetId(&stack_val_20,speed);
    u_val4 = ArticleStack_IsEmpty(&stack_val_20);
    u_val6 = _call_via_r1(*(int **)*p_uint10,*(undefined4 *)(**(int **)*p_uint10 + 100));
    Animal_Routine_0805E850(p_uint10 + 0x2d,u_val6,u_val4);
    *(undefined1 *)(p_uint10 + 0x32) = 1;
    *(undefined1 *)((int)p_uint10 + 0xca) = 0;
    *(undefined1 *)((int)p_uint10 + 0xcb) = 1;
  }
  *(byte *)(entity + 0xf) = 0x34;
  *(char *)((int)entity + 0x3d) = 'x';
  u_val4 = 0x192;
  *(short *)(entity + 0x1f) = (short)0xFFFF;
  u_val7 = (uint)*(byte *)(entity + 0xf);
  if (0x39 < u_val7) goto LAB_0802a3e0;
  switch(*(uint *)(u_val7 * 4 + gInlineTable_08029FDC) & 0xfffffffe) {
  case 0x802a0c4:
    c_char3 = HeldItem_IsEmpty(entity[0xe] + 0x54);
    if (c_char3 != '\0') {
      b_flag1 = *(byte *)((int)entity + 0x3e);
      if (b_flag1 == 1) {
        u_val4 = 0x132;
        if (*(char *)((int)entity + 0xb3) == '\0') {
          u_val4 = 0x1c6;
        }
        break;
      }
      if (1 < b_flag1) {
        if ((b_flag1 == 2) && (u_val4 = 0x132, *(char *)((int)entity + 0xb3) == '\0')) {
          u_val4 = 0x15e;
        }
        break;
      }
      if (b_flag1 != 0) break;
      goto case_0802A224;
    }
    b_flag1 = *(byte *)((int)entity + 0x3e);
    if (b_flag1 != 1) {
      if (1 < b_flag1) {
        if (b_flag1 == 2) {
          u_val4 = 0x14e;
        }
        break;
      }
      goto joined_r0x0802a198;
    }
    goto LAB_0802a3d0;
  case 0x802a138:
    c_char3 = HeldItem_IsEmpty(entity[0xe] + 0x54);
    if (c_char3 != '\0') {
      if (*(byte *)((int)entity + 0x3f) < 6) {
        u_val4 = *(undefined2 *)
                 (((uint)*(byte *)((int)entity + 0x3f) * 7 + (uint)*(byte *)(entity + 0x10)) * 2 +
                 gRomData_080F0FCC);
        i_val9 = entity[0xe];
        u_val6 = Product_Construct(i_val9 + 0x5c);
        u_val2 = Farmer_GetUpgradedTool(i_val9,u_val6);
        p_uint8 = stack_buf_1f;
        goto LAB_0802a2a4;
      }
      goto case_0802A224;
    }
  case 0x802a3ae:
case_0802A3AE:
    u_val4 = 0x152;
    break;
  case 0x802a188:
    b_flag1 = HeldItem_IsEmpty(entity[0xe] + 0x54);
joined_r0x0802a198:
    u_val4 = 0x192;
    if (b_flag1 != 0) break;
    goto case_0802A3AE;
  case 0x802a19e:
    c_char3 = HeldItem_IsEmpty(entity[0xe] + 0x54);
    u_val4 = 0x192;
    if (c_char3 == '\0') {
      u_val4 = 0x152;
    }
    break;
  case 0x802a1b6:
    u_val4 = 0x136;
    break;
  case 0x802a1bc:
    u_val4 = 0x19e;
    break;
  case 0x802a1c2:
    u_val4 = 0x4e;
    break;
  case 0x802a1c6:
    u_val4 = 0x46;
    break;
  case 0x802a1ca:
    u_val4 = 0x13e;
    break;
  case 0x802a1d0:
    u_val4 = 0x142;
    break;
  case 0x802a1d6:
    u_val4 = *(undefined2 *)(entity + 0x11);
    i_val9 = entity[0xe];
    u_val6 = Product_Construct(i_val9 + 0x5c);
    u_val2 = Farmer_GetUpgradedTool(i_val9,u_val6);
    p_uint8 = stack_buf_1f + 1;
    goto LAB_0802a2a4;
  case 0x802a1f6:
    u_val4 = 0x1ea;
    i_val9 = entity[0xe];
    u_val6 = Product_Construct(i_val9 + 0x5c);
    u_val2 = Farmer_GetUpgradedTool(i_val9,u_val6);
    p_uint8 = stack_buf_1f + 2;
    goto LAB_0802a2a4;
  case 0x802a214:
    if (*(byte *)((int)entity + 0x4e) != *(byte *)((int)entity + 0x4f)) {
      u_val4 = 0x182;
      if ((uint)*(byte *)((int)entity + 0x4f) - (uint)*(byte *)((int)entity + 0x4e) == 1) {
        u_val4 = 0x186;
      }
      i_val9 = entity[0xe];
      u_val6 = Product_Construct(i_val9 + 0x5c);
      u_val2 = Farmer_GetUpgradedTool(i_val9,u_val6);
      p_uint8 = stack_buf_1f + 3;
      goto LAB_0802a2a4;
    }
  case 0x802a224:
case_0802A224:
    u_val4 = 0x192;
    break;
  case 0x802a252:
    u_val4 = 0x76;
    i_val9 = entity[0xe];
    u_val6 = Product_Construct(i_val9 + 0x5c);
    u_val2 = Farmer_GetUpgradedTool(i_val9,u_val6);
    p_uint8 = stack_buf_1f + 4;
    goto LAB_0802a2a4;
  case 0x802a26e:
    u_val4 = 0x6e;
    i_val9 = entity[0xe];
    u_val6 = Product_Construct(i_val9 + 0x5c);
    u_val2 = Farmer_GetUpgradedTool(i_val9,u_val6);
    p_uint8 = stack_buf_1f + 5;
    goto LAB_0802a2a4;
  case 0x802a28a:
    u_val4 = 0x72;
    i_val9 = entity[0xe];
    u_val6 = Product_Construct(i_val9 + 0x5c);
    u_val2 = Farmer_GetUpgradedTool(i_val9,u_val6);
    p_uint8 = stack_buf_1f + 6;
LAB_0802a2a4:
    *p_uint8 = u_val2;
    u_val5 = ArticleStack_IsEmpty();
    *(undefined2 *)(entity + 0x1f) = u_val5;
    break;
  case 0x802a2ae:
    u_val4 = 0x1fa;
    break;
  case 0x802a2b4:
    u_val4 = 0x196;
    break;
  case 0x802a2ba:
    u_val4 = 0x112;
    break;
  case 0x802a2c0:
    u_val4 = 0x116;
    break;
  case 0x802a2c6:
    i_val9 = _call_via_r2((int *)*entity,0x2c,*(undefined4 *)(*(int *)*entity + 0x40));
    b_flag1 = *(byte *)((int)entity + 0x3e);
    if (b_flag1 == 1) {
      u_val4 = 0xee;
      u_val7 = 0x77E;
    }
    else if (b_flag1 < 2) {
      if (b_flag1 != 0) break;
      u_val4 = 0xea;
      u_val7 = 0x77A;
    }
    else {
      if (b_flag1 != 2) break;
      u_val4 = 0xe6;
      u_val7 = 0x782;
    }
    goto LAB_0802a392;
  case 0x802a310:
    u_val4 = 0x15a;
    i_val9 = _call_via_r2((int *)*entity,0x2c,*(undefined4 *)(*(int *)*entity + 0x40));
    u_val7 = 0x77A;
    goto LAB_0802a392;
  case 0x802a32c:
    u_val4 = 0x9a;
    i_val9 = _call_via_r2((int *)*entity,0x2c,*(undefined4 *)(*(int *)*entity + 0x40));
    u_val7 = 0x77A;
    goto LAB_0802a392;
  case 0x802a344:
    u_val4 = 0x106;
    break;
  case 0x802a34a:
    u_val4 = 0x102;
    break;
  case 0x802a350:
    u_val4 = 0xfe;
    break;
  case 0x802a354:
    u_val4 = 0xfa;
    break;
  case 0x802a358:
    u_val4 = 0x122;
    break;
  case 0x802a35e:
    u_val4 = 0x11e;
    break;
  case 0x802a364:
    u_val4 = 0x11a;
    break;
  case 0x802a36a:
    c_char3 = HeldItem_IsEmpty(entity[0xe] + 0x54);
    u_val4 = 0x14a;
    if (c_char3 != '\0') {
      u_val4 = 0x10a;
    }
    break;
  case 0x802a380:
    u_val4 = 0xe2;
    i_val9 = _call_via_r2((int *)*entity,0x2c,*(undefined4 *)(*(int *)*entity + 0x40));
    u_val7 = 0x792;
LAB_0802a392:
    if (*(ushort *)(i_val9 + 0x22) != u_val7) {
      Entity_Routine_080321B0(i_val9);
    }
    break;
  case 0x802a3a4:
    u_val4 = 0x3e;
    break;
  case 0x802a3a8:
    u_val4 = 0x146;
    break;
  case 0x802a3b4:
    u_val4 = 0x13a;
    break;
  case 0x802a3ba:
    u_val4 = 0x42;
    break;
  case 0x802a3be:
    c_char3 = HeldItem_IsEmpty(entity[0xe] + 0x54);
    u_val4 = 0x1c6;
    if (c_char3 != '\0') break;
LAB_0802a3d0:
    u_val4 = 0x156;
    break;
  case 0x802a3d6:
    u_val4 = 0xf6;
    if (*(char *)((int)entity + 0x3d) != '\0') {
      u_val4 = 0xf2;
    }
  }
LAB_0802a3e0:
  Entity_Routine_080321B0(entity,u_val4);
  *(undefined1 *)(entity + 0x30) = 1;
  return;
}

// =============================================================================
// Function: Entity_Routine_0802A400 @ 0x0802A400
// =============================================================================
void Entity_Routine_0802A400(int entity,undefined4 speed)

{
  undefined1 u_val1;
  undefined2 u_val2;
  undefined4 u_val3;
  undefined4 u_val4;
  undefined4 *p_uint5;
  int i_val6;
  
  *(undefined1 *)(entity + 0xa4) = 1;
  *(undefined1 *)(entity + 0x88) = 1;
  *(undefined1 *)(entity + 0x89) = 0;
  *(undefined4 *)(entity + 0x8c) = 0;
  *(undefined4 *)(entity + 0x90) = 0;
  *(undefined4 *)(entity + 0x9c) = 0x150000;
  p_uint5 = *(undefined4 **)(entity + 0x10);
  if (p_uint5 != (undefined4 *)0x0) {
    u_val2 = Item_GetFoodBasePrice(speed);
    u_val3 = _call_via_r1(*(int **)*p_uint5,*(undefined4 *)(**(int **)*p_uint5 + 100));
    Animal_Routine_0805E850(p_uint5 + 0x2d,u_val3,u_val2);
    *(undefined1 *)(p_uint5 + 0x32) = 1;
    *(undefined1 *)((int)p_uint5 + 0xca) = 0;
    *(undefined1 *)((int)p_uint5 + 0xcb) = 1;
  }
  i_val6 = *(int *)(entity + 0x14);
  u_val3 = Item_GetFoodStaminaEffect(speed);
  u_val4 = Item_GetFoodFatigueEffect(speed);
  _call_via_r3(entity,u_val3,u_val4,*(undefined4 *)(i_val6 + 100));
  i_val6 = Item_GetFoodIsDrinkOrLiquid(speed);
  if (i_val6 == 0) {
    u_val1 = 0x36;
  }
  else {
    u_val1 = 0x37;
  }
  *(undefined1 *)(entity + 0x3c) = u_val1;
  *(undefined1 *)(entity + 0xc0) = 1;
  Entity_Routine_080321B0(entity,0x146);
  return;
}

// =============================================================================
// Function: Entity_Routine_0802A4C0 @ 0x0802A4C0
// =============================================================================
void Entity_Routine_0802A4C0(int entity,undefined4 speed,int collision)

{
  undefined4 u_val1;
  undefined4 *p_uint2;
  
  *(undefined1 *)(entity + 0x88) = 1;
  if ((collision == 1) || (collision == 0)) {
    *(char *)(entity + 0x89) = (char)collision;
  }
  p_uint2 = *(undefined4 **)(entity + 0x10);
  if (p_uint2 != (undefined4 *)0x0) {
    u_val1 = _call_via_r1(*(int **)*p_uint2,*(undefined4 *)(**(int **)*p_uint2 + 100));
    Animal_Routine_0805E850(p_uint2 + 0x2d,u_val1,speed);
    *(undefined1 *)(p_uint2 + 0x32) = 1;
    *(undefined1 *)((int)p_uint2 + 0xca) = 0;
    *(undefined1 *)((int)p_uint2 + 0xcb) = 1;
  }
  return;
}

// =============================================================================
// Function: Entity_Routine_0802A510 @ 0x0802A510
// =============================================================================
void Entity_Routine_0802A510(int entity)

{
  undefined2 u_val1;
  undefined4 u_val2;
  int i_val3;
  undefined4 *p_uint4;
  undefined1 temp_buf_18 [4];
  
  *(undefined1 *)(entity + 0x88) = 1;
  *(undefined1 *)(entity + 0x89) = 0;
  *(undefined4 *)(entity + 0x8c) = 0xFFF80000;
  *(undefined4 *)(entity + 0x90) = 0;
  *(undefined4 *)(entity + 0x9c) = 0x110000;
  p_uint4 = *(undefined4 **)(entity + 0x10);
  if (p_uint4 != (undefined4 *)0x0) {
    i_val3 = *(int *)(entity + 0x38);
    u_val2 = Product_Construct(i_val3 + 0x5c);
    temp_buf_18[0] = Farmer_GetUpgradedTool(i_val3,u_val2);
    u_val1 = ArticleStack_IsEmpty(temp_buf_18);
    u_val2 = _call_via_r1(*(int **)*p_uint4,*(undefined4 *)(**(int **)*p_uint4 + 100));
    Animal_Routine_0805E850(p_uint4 + 0x2d,u_val2,u_val1);
    *(undefined1 *)(p_uint4 + 0x32) = 1;
    *(undefined1 *)((int)p_uint4 + 0xca) = 0;
    *(undefined1 *)((int)p_uint4 + 0xcb) = 1;
  }
  return;
}

// =============================================================================
// Function: Entity_Routine_0802AA84 @ 0x0802AA84
// =============================================================================
u32 Entity_Routine_0802AA84(int entity)

{
  char c_char1;
  undefined4 u_val2;
  uint u_val3;
  int i_val4;
  int i_val5;
  uint loop_i;
  int i_val7;
  byte stack_bytes_28 [8];
  undefined1 stack_val_20;
  undefined1 stack_val_1f;
  undefined1 stack_val_1e;
  
  i_val7 = 0;
  i_val5 = *(int *)(entity + 0x34) + 0x1C34;
  c_char1 = Product_GetId(i_val5);
  if (c_char1 == '\0') {
    i_val7 = *(int *)(entity + 0x34) + 0x1BD8;
    u_val2 = Product_Construct(i_val5);
    stack_val_20 = Farmer_GetUpgradedTool(i_val7,u_val2);
    i_val7 = Entity_Routine_080246BC(0);
  }
  i_val5 = *(int *)(entity + 0x34) + 0x1C38;
  for (loop_i = 0; u_val3 = Farmer_Routine_0800F5F8(i_val5), loop_i < u_val3; loop_i = loop_i + 1) {
    u_val2 = Farmer_Routine_0800F868(i_val5,loop_i);
    c_char1 = Product_GetId();
    if (c_char1 == '\0') {
      i_val4 = *(int *)(entity + 0x34) + 0x1BD8;
      u_val2 = Product_Construct(u_val2);
      stack_val_1f = Farmer_GetUpgradedTool(i_val4,u_val2);
      i_val7 = Entity_Routine_080246BC(i_val7);
    }
  }
  i_val5 = *(int *)(entity + 0x34);
  loop_i = 0;
  do {
    u_val2 = ShippingBin_Routine_0800B408(i_val5 + 0x380,loop_i);
    c_char1 = Product_GetId();
    if (c_char1 == '\0') {
      i_val4 = *(int *)(entity + 0x34) + 0x1BD8;
      u_val2 = Product_Construct(u_val2);
      stack_val_1e = Farmer_GetUpgradedTool(i_val4,u_val2);
      i_val7 = Entity_Routine_080246BC(i_val7);
    }
    loop_i = loop_i + 1;
  } while (loop_i < 0x40);
  gba_memcpy(stack_bytes_28,gRomData_080F11B4,7);
  return (uint)stack_bytes_28[i_val7];
}

// =============================================================================
// Function: Entity_Routine_0802AB98 @ 0x0802AB98
// =============================================================================
short * Entity_Routine_0802AB98(short *entity,int speed,int collision)

{
  short s_val1;
  short s_val2;
  
  if (collision == 1) {
    s_val1 = *(short *)(speed + 10);
    s_val2 = *(short *)(speed + 0xe);
    *entity = s_val1 + -4;
    entity[1] = s_val2 + -0x14;
    s_val1 = s_val1 + 4;
  }
  else {
    if (collision < 2) {
      if (collision == 0) {
        s_val1 = *(short *)(speed + 10);
        s_val2 = *(short *)(speed + 0xe);
        *entity = s_val1 + -4;
        entity[1] = s_val2 + -6;
        entity[2] = s_val1 + 4;
        entity[3] = s_val2 + 0x12;
        return entity;
      }
LAB_0802ac1a:
      *entity = 0;
      entity[1] = 0;
      entity[2] = 0;
      entity[3] = 0;
      return entity;
    }
    if (collision == 2) {
      s_val1 = *(short *)(speed + 10);
      s_val2 = *(short *)(speed + 0xe);
      *entity = s_val1 + -0x14;
      entity[1] = s_val2 + -0xe;
      s_val1 = s_val1 + 4;
    }
    else {
      if (collision != 3) goto LAB_0802ac1a;
      s_val1 = *(short *)(speed + 10);
      s_val2 = *(short *)(speed + 0xe);
      *entity = s_val1 + -4;
      entity[1] = s_val2 + -0xe;
      s_val1 = s_val1 + 0x14;
    }
  }
  entity[2] = s_val1;
  entity[3] = s_val2 + 2;
  return entity;
}

// =============================================================================
// Function: Entity_Routine_0802AC2C @ 0x0802AC2C
// =============================================================================
void Entity_Routine_0802AC2C(undefined4 *entity,int speed,undefined4 collision)

{
  char c_char1;
  int i_val2;
  undefined4 u_val3;
  int i_val4;
  uint u_val5;
  undefined4 stack_val_58;
  undefined4 stack_val_54;
  undefined4 stack_val_50;
  undefined4 stack_val_4c;
  short stack_val_48;
  short stack_val_46;
  short stack_val_44;
  short stack_val_42;
  int *piStack_40;
  uint stack_val_3c;
  int stack_val_38;
  int stack_val_34;
  uint stack_val_30;
  int stack_val_2c;
  uint stack_val_28;
  char cStack_24;
  
  piStack_40 = (int *)*entity;
  stack_val_3c = (uint)*(ushort *)(entity + 1);
  stack_val_38 = (int)*(short *)((int)entity + 10);
  stack_val_34 = (int)*(short *)((int)entity + 0xe);
  Entity_Routine_0802AB98(&stack_val_58,entity,*(undefined1 *)(entity + 8));
  stack_val_50 = stack_val_58;
  stack_val_4c = stack_val_54;
  stack_val_30 = 100;
  stack_val_2c = 0;
  u_val5 = 0x2b;
  do {
    stack_val_28 = u_val5;
    i_val2 = _call_via_r2(piStack_40,u_val5,*(undefined4 *)(*piStack_40 + 0x40));
    cStack_24 = '\0';
    if ((i_val2 != 0) && (*(ushort *)(i_val2 + 4) == stack_val_3c)) {
      _call_via_r2(&stack_val_48,i_val2,*(undefined4 *)(*(int *)(i_val2 + 0x14) + 0xc));
      if (((int)(short)stack_val_50 - (int)stack_val_44 & (int)stack_val_48 - (int)(short)stack_val_4c &
           (int)stack_val_50._2_2_ - (int)stack_val_42 & (int)stack_val_46 - (int)stack_val_4c._2_2_) < 0) {
        i_val4 = speed >> 0x10;
        if (i_val4 != 0) {
          u_val3 = collision;
          if (0 < i_val4) {
            u_val3 = *(undefined4 *)(i_val4 * 4 + *(int *)(i_val2 + (short)collision) + -4);
          }
          c_char1 = _call_via_r1(i_val2 + (short)speed,u_val3);
          if (c_char1 == '\0') goto LAB_0802ad20;
        }
        cStack_24 = '\x01';
      }
    }
LAB_0802ad20:
    if ((cStack_24 != '\0') &&
       ((i_val4 = *(short *)(i_val2 + 10) - stack_val_38, i_val2 = *(short *)(i_val2 + 0xe) - stack_val_34,
        i_val2 = i_val4 * i_val4 + i_val2 * i_val2, stack_val_30 == 100 || (i_val2 < stack_val_2c)))) {
      stack_val_30 = stack_val_28;
      stack_val_2c = i_val2;
    }
    u_val5 = u_val5 + 1;
    if (0x45 < u_val5) {
      *(undefined1 *)((int)entity + 0xb2) = (undefined1)stack_val_30;
      return;
    }
  } while( true );
}

// =============================================================================
// Function: Entity_Routine_0802AD80 @ 0x0802AD80
// =============================================================================
void Entity_Routine_0802AD80(undefined4 *entity)

{
  int i_val1;
  int i_val2;
  uint u_val3;
  int *p_int4;
  undefined4 *p_uint5;
  undefined4 *p_uint6;
  undefined4 u_val7;
  undefined4 stack_val_3c;
  undefined4 stack_val_38;
  undefined4 stack_buf_34 [2];
  undefined4 stack_buf_2c [2];
  undefined4 waypoint_coords [2];
  undefined4 stack_buf_1c [2];
  undefined4 stack_val_14;
  undefined4 stack_val_10;
  
  p_uint5 = &stack_val_3c;
  i_val1 = Farmer_GetStepCount(entity[0xe]);
  Farmer_IncrementPedometerStep(entity[0xe]);
  i_val2 = Farmer_GetStepCount(entity[0xe]);
  if (i_val1 == i_val2) {
    return;
  }
  u_val3 = Farmer_GetStepCount(entity[0xe]);
  if (u_val3 == 0x000F4240) {
    p_int4 = (int *)*entity;
    p_uint6 = (undefined4 *)(*p_int4 + 0x140);
    p_uint5 = stack_buf_2c;
    stack_buf_2c[0] = 0x338;
  }
  else if (0x000F4240 < u_val3) {
    if (u_val3 == 0x05F5E100) {
      p_int4 = (int *)*entity;
      p_uint6 = (undefined4 *)(*p_int4 + 0x140);
      p_uint5 = stack_buf_1c;
      stack_buf_1c[0] = 0x33A;
    }
    else {
      if (0x05F5E100 < u_val3) {
        if (u_val3 != 0x3B9ACA00) {
          return;
        }
        stack_val_14 = 0x33B;
        stack_val_10 = 0;
        _call_via_r3((int *)*entity,&stack_val_14,1,*(undefined4 *)(*(int *)*entity + 0x140));
        return;
      }
      if (u_val3 != 0x00989680) {
        return;
      }
      p_int4 = (int *)*entity;
      p_uint6 = (undefined4 *)(*p_int4 + 0x140);
      p_uint5 = waypoint_coords;
      waypoint_coords[0] = 0x339;
    }
  }
  else {
    if (u_val3 == 0x2710) {
      p_int4 = (int *)*entity;
      stack_val_3c = 0x336;
      stack_val_38 = 0;
      u_val7 = *(undefined4 *)(*p_int4 + 0x140);
      goto LAB_0802ae6e;
    }
    if (u_val3 != 0x000186A0) {
      return;
    }
    p_int4 = (int *)*entity;
    p_uint6 = (undefined4 *)(*p_int4 + 0x140);
    p_uint5 = stack_buf_34;
    stack_buf_34[0] = 0x337;
  }
  p_uint5[1] = 0;
  u_val7 = *p_uint6;
LAB_0802ae6e:
  _call_via_r3(p_int4,p_uint5,1,u_val7);
  return;
}

// =============================================================================
// Function: Entity_Routine_0802AEA4 @ 0x0802AEA4
// =============================================================================
u32 Entity_Routine_0802AEA4(undefined4 *entity)

{
  ushort u_val1;
  char c_char2;
  int i_val3;
  int i_val4;
  uint u_val5;
  uint *p_uint6;
  undefined4 u_val7;
  uint u_val8;
  int stack_val_2c;
  int stack_val_28;
  ushort stack_val_24;
  ushort stack_val_22;
  undefined4 stack_val_20;
  undefined4 stack_val_1c;
  undefined4 stack_val_18;
  undefined4 stack_val_14;
  
  u_val1 = *(ushort *)(entity + 1);
  _call_via_r3(&stack_val_2c,(int *)*entity,(uint)u_val1,*(undefined4 *)(*(int *)*entity + 0x34));
  _call_via_r2(&stack_val_20,entity,*(undefined4 *)(entity[5] + 0xc));
  stack_val_18 = stack_val_20;
  stack_val_14 = stack_val_1c;
  c_char2 = NPC_Routine_080AC070(&stack_val_2c,&stack_val_18);
  if (c_char2 == '\0') {
    if (0x1FF < u_val1 - 0x34) {
LAB_0802b048:
      u_val7 = 0;
      goto LAB_0802b04a;
    }
    i_val3 = (int)(short)stack_val_18;
    if (i_val3 < 0) {
      i_val3 = i_val3 + 7;
    }
    i_val4 = (int)stack_val_18._2_2_;
    if (i_val4 < 0) {
      i_val4 = i_val4 + 7;
    }
    u_val8 = (uint)stack_val_24;
    if (((stack_val_2c == 0) || (u_val8 < (uint)(i_val3 >> 3))) || ((uint)stack_val_22 < (uint)(i_val4 >> 3))
       ) {
      p_uint6 = (uint *)0x0;
    }
    else {
      u_val5 = u_val8 * (i_val4 >> 3) + (i_val3 >> 3);
      if (stack_val_28 != 0) {
        u_val5 = (uint)*(byte *)(stack_val_28 + u_val5);
      }
      p_uint6 = (uint *)(stack_val_2c + u_val5 * 4);
    }
    if ((p_uint6 == (uint *)0x0) || ((*p_uint6 & 0x0001FFFC) == 0)) {
      i_val3 = (int)(short)stack_val_18;
      if (i_val3 < 0) {
        i_val3 = i_val3 + 7;
      }
      i_val4 = stack_val_14._2_2_ + -1;
      if (i_val4 < 0) {
        i_val4 = stack_val_14._2_2_ + 6;
      }
      if (((stack_val_2c == 0) || (u_val8 < (uint)(i_val3 >> 3))) ||
         ((uint)stack_val_22 < (uint)(i_val4 >> 3))) {
        p_uint6 = (uint *)0x0;
      }
      else {
        u_val5 = u_val8 * (i_val4 >> 3) + (i_val3 >> 3);
        if (stack_val_28 != 0) {
          u_val5 = (uint)*(byte *)(stack_val_28 + u_val5);
        }
        p_uint6 = (uint *)(stack_val_2c + u_val5 * 4);
      }
      if ((p_uint6 == (uint *)0x0) || ((*p_uint6 & 0x0001FFFC) == 0)) {
        i_val3 = (short)stack_val_14 + -1;
        if (i_val3 < 0) {
          i_val3 = (short)stack_val_14 + 6;
        }
        i_val4 = (int)stack_val_18._2_2_;
        if (i_val4 < 0) {
          i_val4 = i_val4 + 7;
        }
        if (((stack_val_2c == 0) || (u_val8 < (uint)(i_val3 >> 3))) ||
           ((uint)stack_val_22 < (uint)(i_val4 >> 3))) {
          p_uint6 = (uint *)0x0;
        }
        else {
          u_val5 = u_val8 * (i_val4 >> 3) + (i_val3 >> 3);
          if (stack_val_28 != 0) {
            u_val5 = (uint)*(byte *)(stack_val_28 + u_val5);
          }
          p_uint6 = (uint *)(stack_val_2c + u_val5 * 4);
        }
        if ((p_uint6 == (uint *)0x0) || ((*p_uint6 & 0x0001FFFC) == 0)) {
          i_val3 = (short)stack_val_14 + -1;
          if (i_val3 < 0) {
            i_val3 = (short)stack_val_14 + 6;
          }
          i_val4 = stack_val_14._2_2_ + -1;
          if (i_val4 < 0) {
            i_val4 = stack_val_14._2_2_ + 6;
          }
          if (((stack_val_2c == 0) || (u_val8 < (uint)(i_val3 >> 3))) ||
             ((uint)stack_val_22 < (uint)(i_val4 >> 3))) {
            p_uint6 = (uint *)0x0;
          }
          else {
            i_val3 = u_val8 * (i_val4 >> 3) + (i_val3 >> 3);
            if (stack_val_28 == 0) {
              p_uint6 = (uint *)(stack_val_2c + i_val3 * 4);
            }
            else {
              p_uint6 = (uint *)(stack_val_2c + (uint)*(byte *)(stack_val_28 + i_val3) * 4);
            }
          }
          if ((p_uint6 == (uint *)0x0) || ((*p_uint6 & 0x0001FFFC) == 0)) goto LAB_0802b048;
        }
      }
    }
  }
  u_val7 = 1;
LAB_0802b04a:
  return u_val7;
}

// =============================================================================
// Function: Entity_Routine_0802B054 @ 0x0802B054
// =============================================================================
void Entity_Routine_0802B054(undefined4 *entity)

{
  byte b_flag1;
  bool b_flag2;
  char c_char3;
  int i_val4;
  undefined4 *p_uint5;
  uint u_val6;
  undefined1 temp_buf_3c [4];
  undefined4 stack_val_38;
  uint stack_val_34;
  undefined1 stack_val_30;
  undefined4 stack_val_2c;
  uint stack_val_28;
  undefined4 stack_val_24;
  undefined4 stack_val_20;
  undefined4 stack_val_1c;
  undefined4 stack_val_18;
  
  c_char3 = NPC_Routine_0809DFAC(entity[0xd] + 0x2E58);
  if (c_char3 == '\t') {
    b_flag1 = *(byte *)(entity[0xd] + 0x2189);
    if (((b_flag1 & 0x30) == 0) && (i_val4 = HeldItem_GetKind(entity[0xe] + 0x54), i_val4 == 1)) {
      temp_buf_3c[0] = HeldItem_GetArticle(entity[0xe] + 0x54);
      i_val4 = Item_GetQuality(temp_buf_3c);
      if (i_val4 == 0x25) {
        stack_val_38 = 0x330;
        stack_val_34 = b_flag1 & 0x30;
        _call_via_r3((int *)*entity,&stack_val_38,0,*(undefined4 *)(*(int *)*entity + 0x140));
      }
    }
  }
  c_char3 = NPC_Routine_0809E02C(entity[0xd] + 0x2E58);
  if (c_char3 == '\t') {
    b_flag1 = *(byte *)(entity[0xd] + 0x218B);
    if (((b_flag1 & 0x18) == 0) && (i_val4 = HeldItem_GetKind(entity[0xe] + 0x54), i_val4 == 1)) {
      stack_val_30 = HeldItem_GetArticle(entity[0xe] + 0x54);
      i_val4 = Item_GetQuality();
      if (i_val4 == 0x26) {
        stack_val_2c = 0x332;
        stack_val_28 = b_flag1 & 0x18;
        _call_via_r3((int *)*entity,&stack_val_2c,0,*(undefined4 *)(*(int *)*entity + 0x140));
      }
    }
  }
  if ((*(byte *)(entity[0xd] + 0x2194) & 0xc0) == 0) {
    b_flag2 = true;
    p_uint5 = gRomData_080F11BC;
    for (u_val6 = 0; u_val6 < 9; u_val6 = u_val6 + 1) {
      c_char3 = ShippingBin_GetValueShipped(entity[0xd] + 0x54,*p_uint5);
      if (c_char3 == '\0') {
        b_flag2 = false;
        break;
      }
      p_uint5 = p_uint5 + 1;
    }
    i_val4 = 0x2E58;
    if (b_flag2) {
      c_char3 = NPC_Routine_0809E184(entity[0xd] + 0x2E58);
      if ((((c_char3 != '\0') && (c_char3 = NPC_Routine_0809E194(entity[0xd] + i_val4), c_char3 != '\0')) &&
          (c_char3 = NPC_Routine_0809DFAC(entity[0xd] + i_val4), c_char3 != '\0')) &&
         (c_char3 = NPC_Routine_0809E1A4(entity[0xd] + i_val4), c_char3 != '\0')) {
        stack_val_24 = 0x34D;
        stack_val_20 = 0;
        _call_via_r3((int *)*entity,&stack_val_24,0,*(undefined4 *)(*(int *)*entity + 0x140));
      }
    }
  }
  if ((*(byte *)(entity[0xd] + 0x2195) & 3) == 0) {
    b_flag2 = true;
    p_uint5 = gRomData_080F11E0;
    for (u_val6 = 0; u_val6 < 0xe; u_val6 = u_val6 + 1) {
      c_char3 = ShippingBin_GetValueShipped(entity[0xd] + 0x54,*p_uint5);
      if (c_char3 == '\0') {
        b_flag2 = false;
        break;
      }
      p_uint5 = p_uint5 + 1;
    }
    if (((b_flag2) && (c_char3 = NPC_AreAllTasksCompleted(0x3480 + entity[0xd]), c_char3 != '\0')) &&
       ((c_char3 = NPC_Routine_0809E174(entity[0xd] + 0x2E58), c_char3 != '\0' &&
        (c_char3 = NPC_Routine_0809E02C(entity[0xd] + 0x2E58), c_char3 != '\0')))) {
      stack_val_1c = 0x34E;
      stack_val_18 = 0;
      _call_via_r3((int *)*entity,&stack_val_1c,0,*(undefined4 *)(*(int *)*entity + 0x140));
    }
  }
  return;
}

// =============================================================================
// Function: Entity_Routine_0802B3B4 @ 0x0802B3B4
// =============================================================================
void Entity_Routine_0802B3B4(int *entity)

{
  ushort u_val1;
  char c_char2;
  int *p_int3;
  ushort *p_uint4;
  int i_val5;
  undefined1 *p_uint6;
  uint loop_i;
  
  Entity_Routine_0803260C();
  i_val5 = *entity;
  p_uint4 = (ushort *)(i_val5 + 0x7c);
  u_val1 = *p_uint4;
  if ((u_val1 != 0xFFFF) && ((char)entity[0x11] == '\0')) {
    *p_uint4 = (ushort)0xFFFF | u_val1;
  }
  if (*(char *)(i_val5 + 0x88) == '\x01') {
    p_int3 = (int *)((int)entity + 0xcb);
    if (*(char *)p_int3 == '\0') {
      i_val5 = Animal_Routine_0805E8F0(entity + 0x2d);
      if (-1 < i_val5 * 0x40000000) goto LAB_0802b414;
      p_int3 = entity + 0x32;
      c_char2 = '\x01';
    }
    else {
      c_char2 = '\0';
    }
    *(char *)p_int3 = c_char2;
  }
LAB_0802b414:
  loop_i = 0;
  p_int3 = entity + 0x3f;
  p_uint6 = (undefined1 *)((int)entity + 0x113);
  entity = entity + 0x34;
  do {
    if ((char)*entity != '\0') {
      if (*(char *)((int)p_int3 + 0x17) == '\0') {
        i_val5 = Animal_Routine_0805E8F0(p_int3);
        if (i_val5 * 0x40000000 < 0) {
          *(undefined1 *)(p_int3 + 5) = 1;
        }
      }
      else {
        *p_uint6 = 0;
        i_val5 = 2;
      }
      if (i_val5 * 0x20000000 < 0) {
        *(char *)entity = '\0';
      }
    }
    p_int3 = p_int3 + 0x12;
    p_uint6 = p_uint6 + 0x48;
    entity = entity + 0x12;
    loop_i = loop_i + 1;
  } while (loop_i < 6);
  return;
}

// =============================================================================
// Function: Entity_Routine_0802B46C @ 0x0802B46C
// =============================================================================
void Entity_Routine_0802B46C(int *entity)

{
  byte facing_dir;
  undefined2 u_val2;
  undefined2 u_val3;
  int i_val4;
  int *p_int5;
  uint u_val6;
  uint u_val7;
  undefined4 stack_val_1c;
  
  i_val4 = *entity;
  u_val7 = (uint)*(byte *)(entity + 0xa0);
  u_val2 = *(undefined2 *)(i_val4 + 10);
  u_val3 = *(undefined2 *)(i_val4 + 0xe);
  facing_dir = *(byte *)(i_val4 + 0x20);
  u_val6 = u_val7 & 1;
  p_int5 = entity + u_val7 * 0x12 + 0x34;
  *(undefined1 *)p_int5 = 1;
  stack_val_1c = CONCAT22(u_val3,u_val2);
  p_int5[0x11] = stack_val_1c;
  i_val4 = 0x652;
  if (facing_dir == 1) {
LAB_0802b4de:
    i_val4 = u_val6 + i_val4;
  }
  else {
    if (1 < facing_dir) {
      if (facing_dir == 2) {
        i_val4 = u_val6 + 0x654;
        goto LAB_0802b4e0;
      }
      i_val4 = 0x656;
      if (facing_dir == 3) goto LAB_0802b4de;
    }
    i_val4 = u_val6 + 0x650;
  }
LAB_0802b4e0:
  Animal_Routine_0805E860(p_int5 + 0xb,i_val4);
  *(undefined1 *)(p_int5 + 0x10) = 1;
  *(undefined1 *)((int)p_int5 + 0x42) = 0;
  *(undefined1 *)((int)p_int5 + 0x43) = 1;
  u_val6 = 0;
  if (u_val7 + 1 < 6) {
    u_val6 = u_val7 + 1;
  }
  *(char *)(entity + 0xa0) = (char)u_val6;
  return;
}

// =============================================================================
// Function: Entity_Routine_0802B51C @ 0x0802B51C
// =============================================================================
void Entity_Routine_0802B51C(int *entity,undefined4 *speed)

{
  ushort u_val1;
  short s_val2;
  short s_val3;
  short s_val4;
  undefined4 *p_uint5;
  int i_val6;
  int i_val7;
  uint u_val8;
  undefined4 u_val9;
  int *p_int10;
  int *p_int11;
  int *p_int12;
  ushort *p_uint13;
  int i_val14;
  undefined1 stack_buf_84 [8];
  undefined1 stack_buf_7c [8];
  undefined4 stack_buf_74 [4];
  undefined4 stack_val_64;
  undefined4 stack_val_60;
  undefined2 *apuStack_5c [2];
  undefined2 *apuStack_54 [2];
  int *piStack_4c;
  undefined4 *puStack_48;
  undefined4 *puStack_44;
  uint stack_val_40;
  int stack_val_3c;
  int stack_val_38;
  uint stack_val_34;
  undefined4 *puStack_30;
  int *piStack_2c;
  int *piStack_28;
  int stack_val_24;
  
  puStack_44 = (undefined4 *)*entity;
  u_val1 = *(ushort *)(puStack_44 + 1);
  p_int11 = (int *)*puStack_44;
  stack_val_40 = (uint)*(byte *)(entity + 0x11);
  i_val14 = puStack_44[2];
  i_val6 = puStack_44[3];
  stack_val_64 = *speed;
  stack_val_60 = speed[2];
  piStack_4c = entity;
  puStack_48 = speed;
  i_val7 = Entity_Routine_08032900(u_val1,i_val14 >> 0x10,i_val6 >> 0x10);
  p_uint5 = puStack_44;
  *(char *)((int)piStack_4c + 0x8b) = (char)i_val7;
  if ((*(char *)(puStack_44 + 0x22) == '\x01') && (*(char *)(puStack_44 + 0x29) != '\0')) {
    stack_val_3c = (i_val14 + puStack_44[0x23] >> 0x10) - (int)*(short *)(puStack_48 + 3);
    i_val6 = i_val6 + puStack_44[0x24];
    i_val14 = i_val6 >> 0x10;
    s_val2 = *(short *)((int)puStack_48 + 0xe);
    stack_val_38 = 0x8000 - i_val14;
    if (*(char *)((int)puStack_44 + 0x89) == '\x01') {
      u_val9 = _call_via_r1(p_int11,*(undefined4 *)(*p_int11 + 0x58));
      ScriptEngine_SetVariable(u_val9,puStack_48[2],stack_val_3c,i_val14 - s_val2,0);
    }
    p_int10 = piStack_4c;
    stack_val_24 = (i_val6 - p_uint5[0x27] >> 0x10) - (int)*(short *)((int)puStack_48 + 0xe);
    u_val8 = 2;
    if ((0xf < (int)p_uint5[0x27] >> 0x10) && ((8 < u_val1 || (i_val7 == 1)))) {
      u_val8 = 1;
    }
    p_int12 = piStack_4c + 0x23;
    _call_via_r3(stack_buf_84,(int *)piStack_4c[0x2d],
                    *(undefined2 *)(piStack_4c[0x2e] + (uint)*(ushort *)(piStack_4c + 0x30) * 4),
                    *(undefined4 *)(*(int *)piStack_4c[0x2d] + 0x10));
    if ((-piStack_4c[0x25] | piStack_4c[0x25]) < 0) {
      i_val6 = _call_via_r4(stack_val_60,stack_val_3c,stack_val_24,
                              u_val8 << 2 | u_val8 | u_val8 << 4 | u_val8 << 6,stack_val_38,stack_buf_84,
                              *p_int12,(short)p_int10[0x26],piStack_4c + 0x27);
    }
    else {
      i_val6 = 0;
    }
    if ((i_val6 != 0) && ((char)p_int10[0x32] != '\0')) {
      NPC_Routine_080A480C(p_int12,stack_val_64,stack_buf_7c);
      if (*(char *)((int)p_int10 + 0xc9) == '\0') {
        if (*(char *)((int)p_int10 + 0xca) == '\0') {
          NPC_Routine_080A4944(p_int12,stack_buf_74,1);
          *(char *)((int)p_int10 + 0xca) = '\x01';
        }
      }
      else {
        NPC_Routine_080A4944(p_int12,stack_buf_74,1);
      }
      *(char *)(p_int10 + 0x32) = '\0';
    }
  }
  stack_val_34 = 0;
  puStack_30 = &stack_val_64;
  piStack_2c = piStack_4c + 0x39;
  p_int12 = piStack_4c + 0x36;
  p_int10 = piStack_4c + 0x35;
  piStack_28 = piStack_4c + 0x34;
  do {
    s_val2 = *(short *)(puStack_48 + 3);
    s_val3 = *(short *)((int)puStack_48 + 0xe);
    if ((char)*piStack_28 != '\0') {
      i_val6 = p_int12[0xf];
      s_val4 = *(short *)((int)p_int12 + 0x3e);
      _call_via_r3(stack_buf_84,(int *)p_int12[9],
                      *(undefined2 *)(p_int12[10] + (uint)*(ushort *)(p_int12 + 0xc) * 4),
                      *(undefined4 *)(*(int *)p_int12[9] + 0x10));
      if ((-p_int12[1] | p_int12[1]) < 0) {
        i_val6 = _call_via_r4(stack_val_60,(int)(short)i_val6 - (int)s_val2,(int)s_val4 - (int)s_val3,
                                0xaa,0x8000,stack_buf_84,*p_int10,(short)p_int12[2],piStack_2c);
      }
      else {
        i_val6 = 0;
      }
      if ((i_val6 != 0) && ((char)p_int10[0xf] != '\0')) {
        NPC_Routine_080A480C(p_int10,*puStack_30,stack_buf_7c);
        if (*(char *)((int)p_int10 + 0x3d) == '\0') {
          if (*(char *)((int)p_int10 + 0x3e) == '\0') {
            NPC_Routine_080A4944(p_int10,stack_buf_74,1);
            *(char *)((int)p_int10 + 0x3e) = '\x01';
          }
        }
        else {
          NPC_Routine_080A4944(p_int10,stack_buf_74,1);
        }
        *(char *)(p_int10 + 0xf) = '\0';
      }
    }
    piStack_2c = piStack_2c + 0x12;
    p_int12 = p_int12 + 0x12;
    p_int10 = p_int10 + 0x12;
    piStack_28 = piStack_28 + 0x12;
    stack_val_34 = stack_val_34 + 1;
  } while (stack_val_34 < 6);
  Entity_Routine_08032690(piStack_4c,puStack_48);
  if ((stack_val_40 != 0) || (*(char *)((int)piStack_4c + 0x281) != '\0')) {
    u_val8 = Farmer_GetFatigue(puStack_44[0xe]);
    if (u_val8 < 0x50) {
      if (*(char *)((int)piStack_4c + 0x281) != '\0') {
        p_int10 = (int *)_call_via_r1(p_int11,*(undefined4 *)(*p_int11 + 0x68));
        i_val6 = *p_int10;
        _call_via_r3(apuStack_5c,p_int10,
                        (uint)*(ushort *)((int)puStack_44 + 0x22) + (uint)*(byte *)(puStack_44 + 8),
                        *(undefined4 *)(i_val6 + 0xc));
        _call_via_r3(stack_buf_84,p_int10,*apuStack_5c[0],*(undefined4 *)(i_val6 + 0x10));
        u_val9 = _call_via_r2(p_int11,0,*(undefined4 *)(*p_int11 + 0x48));
        _call_via_r4(p_int11,stack_buf_74[0],u_val9,1);
      }
    }
    else {
      u_val9 = _call_via_r2(p_int11,0,*(undefined4 *)(*p_int11 + 0x48));
      _call_via_r4(p_int11,gRomGfx_0858BA08,u_val9,1);
    }
    p_uint13 = (ushort *)(puStack_44 + 0x1f);
    if (*p_uint13 != 0xFFFF) {
      p_int10 = (int *)_call_via_r1(p_int11,*(undefined4 *)(*p_int11 + 100));
      i_val6 = *p_int10;
      _call_via_r3(apuStack_54,p_int10,*p_uint13,*(undefined4 *)(i_val6 + 0xc));
      _call_via_r3(stack_buf_84,p_int10,*apuStack_54[0],*(undefined4 *)(i_val6 + 0x10));
      u_val9 = _call_via_r2(p_int11,2,*(undefined4 *)(*p_int11 + 0x48));
      _call_via_r4(p_int11,stack_buf_74[0],u_val9,1);
    }
    *(undefined1 *)((int)piStack_4c + 0x281) = 0;
  }
  return;
}

// =============================================================================
// Function: Entity_Routine_0802B8EC @ 0x0802B8EC
// =============================================================================
void Entity_Routine_0802B8EC(undefined4 entity,undefined4 speed)

{
  undefined4 u_val1;
  
  u_val1 = CppRuntime_OperatorNewArray(200);
  Entity_Routine_08024974(u_val1,entity,speed);
  return;
}

// =============================================================================
// Function: Entity_Routine_0802B908 @ 0x0802B908
// =============================================================================
u32 Entity_Routine_0802B908(int entity,undefined4 speed,int collision)

{
  undefined1 facing_buffer [8];
  
  Farmer_GetLocation(facing_buffer,collision + 0x1BD8);
  Entity_UpdatePositions(entity,speed,facing_buffer,2,0x192);
  *(undefined4 *)(entity + 0x14) = gRomData_080E676C;
  return entity;
}

// =============================================================================
// Function: Entity_Routine_0802B944 @ 0x0802B944
// =============================================================================
u32 Entity_Routine_0802B944(int entity,undefined4 speed)

{
  ushort u_val1;
  undefined1 temp_buf_28 [6];
  undefined1 stack_val_22;
  ushort stack_val_20;
  ushort stack_val_1e;
  ushort stack_val_1c;
  
  u_val1 = (ushort)0xFFFFFC00;
  stack_val_20 = u_val1 & stack_val_20 & 0x3ff | 0x234;
  stack_val_1e = u_val1 & stack_val_1e & 0x3ff;
  stack_val_1c = u_val1 & stack_val_1c;
  gba_memcpy(temp_buf_28,&stack_val_20,6);
  stack_val_22 = 0;
  Entity_UpdatePositions(entity,speed,temp_buf_28,2,0);
  *(undefined4 *)(entity + 0x14) = gRomData_080E671C;
  return entity;
}

// =============================================================================
// Function: Entity_Routine_0802B9C0 @ 0x0802B9C0
// =============================================================================
u32 Entity_Routine_0802B9C0(int entity)

{
  
  Entity_Routine_0802B944();
  *(undefined4 *)(entity + 0x14) = gRomData_080E65F4;
  *(undefined1 *)(entity + 0x34) = 0;
  *(undefined1 *)(entity + 0x35) = 0;
  *(undefined1 *)(entity + 0x38) = 0;
  *(undefined1 *)(entity + 0x39) = 0;
  *(undefined4 *)(entity + 0x3c) = 0;
  *(undefined4 *)(entity + 0x40) = 0;
  *(undefined4 *)(entity + 0x44) = 0;
  *(undefined4 *)(entity + 0x48) = 0;
  *(undefined4 *)(entity + 0x4c) = 0;
  *(undefined4 *)(entity + 0x50) = 0;
  *(undefined1 *)(entity + 0x54) = 0;
  *(undefined2 *)(entity + 0x56) = 0;
  *(undefined1 *)(entity + 0x58) = 0;
  *(undefined1 *)(entity + 0x59) = 0;
  Farmer_Routine_0801FDC0(entity);
  return entity;
}

// =============================================================================
// Function: Entity_Routine_0802BA10 @ 0x0802BA10
// =============================================================================
void Entity_Routine_0802BA10(undefined4 entity)

{
  undefined4 u_val1;
  
  u_val1 = CppRuntime_OperatorNewArray(0xd0);
  Entity_Routine_0802BF2C(u_val1,entity);
  return;
}

// =============================================================================
// Function: Entity_Routine_0802BA28 @ 0x0802BA28
// =============================================================================
void Entity_Routine_0802BA28(int entity,undefined4 speed)

{
  short s_val1;
  
  if (*(char *)(entity + 0x58) == '\0') {
    if (*(char *)(entity + 0x54) != '\0') {
      Entity_Routine_0802BA74(entity);
      s_val1 = Entity_Routine_0802BC48(entity);
      if (*(short *)(entity + 0x22) != s_val1) {
        Entity_Routine_080321B0(entity);
      }
    }
  }
  else {
    *(char *)(entity + 0x58) = '\0';
  }
  Entity_Routine_0803242C(entity,speed);
  return;
}

// =============================================================================
// Function: Entity_Routine_0802BAE4 @ 0x0802BAE4
// =============================================================================
u32 Entity_Routine_0802BAE4(undefined4 entity,undefined4 speed,undefined4 collision)

{
  byte mood_byte;
  ushort u_val2;
  ushort u_val3;
  ushort u_val4;
  undefined4 u_val5;
  uint u_val6;
  uint u_val7;
  undefined4 *saved_r7;
  undefined1 *saved_r10;
  undefined4 in_stack_00000010;
  undefined4 stack_val_14;
  undefined4 stack_val_10;
  
  stack_val_14 = speed;
  stack_val_10 = collision;
  (*(code *)(caller_pc + 0xffe))();
  *(undefined4 *)(saved_r10 + 0x14) = 0;
  *(undefined4 *)(saved_r10 + 0x18) = 0;
  if (*(short *)(saved_r7 + 9) == 0) {
    *(undefined1 *)(saved_r7 + 0xd) = 0;
    u_val7 = (uint)*(short *)((int)saved_r7 + 10);
    u_val6 = (uint)*(short *)((int)saved_r7 + 0xe);
    mood_byte = *(byte *)(saved_r7 + 8);
    if (mood_byte == 1) {
      u_val6 = u_val6 - 0x14;
    }
    else if (mood_byte < 2) {
      if (mood_byte == 0) {
        u_val6 = u_val6 + 0x14;
      }
    }
    else if (mood_byte == 2) {
      u_val7 = u_val7 - 0x14;
    }
    else if (mood_byte == 3) {
      u_val7 = u_val7 + 0x14;
    }
    u_val4 = (ushort)0x3FF;
    u_val3 = (ushort)0xFFFFFC00;
    u_val2 = u_val3 & (ushort)stack_val_14 | *(ushort *)(saved_r7 + 1) & u_val4;
    stack_val_14._1_1_ = (byte)(u_val2 >> 8);
    stack_val_14._0_2_ = CONCAT11(stack_val_14._1_1_ & 3 | (byte)((u_val7 & 0x3f) << 2),(char)u_val2);
    u_val2 = u_val3 & stack_val_14._2_2_ | (ushort)((u_val7 & 0xffff) >> 6) & u_val4;
    stack_val_14 = CONCAT22(u_val2,(ushort)stack_val_14);
    u_val5 = stack_val_14;
    stack_val_14._3_1_ = (byte)(u_val2 >> 8);
    stack_val_14 = CONCAT13(stack_val_14._3_1_ & 3 | (byte)((u_val6 & 0x3f) << 2),(int3)u_val5);
    stack_val_10 = CONCAT22(stack_val_10._2_2_,
                         u_val3 & (ushort)stack_val_10 | (ushort)((u_val6 & 0xffff) >> 6) & u_val4);
    _call_via_r3((int *)*saved_r7,&stack_val_14,*(undefined2 *)((int)saved_r7 + 0x56),
                    *(undefined4 *)(*(int *)*saved_r7 + 0xbc));
    *saved_r10 = 0;
    *(undefined1 *)((int)saved_r7 + 0x59) = 0;
  }
  return in_stack_00000010;
}

// =============================================================================
// Function: Entity_Routine_0802BC48 @ 0x0802BC48
// =============================================================================
u32 Entity_Routine_0802BC48(int entity)

{
  undefined4 u_val1;
  undefined4 *p_uint2;
  undefined1 stack_buf_4 [4];
  
  p_uint2 = (undefined4 *)stack_buf_4;
  u_val1 = 0x192;
  if (*(byte *)(entity + 0x34) < 5) {
    switch(*(uint *)(PTR_case_0802BC68_0802bc64 + (uint)*(byte *)(entity + 0x34) * 4) & 0xfffffffe)
    {
    case 0x802bc68:
      p_uint2 = (undefined4 *)&stack0x0000004c;
      entity = 0;
    case 0x802bc7c:
      u_val1 = 0x152;
      if (*(char *)(entity + 0x59) == '\0') {
        u_val1 = 0x192;
      }
      break;
    case 0x802bc8e:
      u_val1 = 0x19e;
      break;
    case 0x802bc94:
      u_val1 = 0x146;
      break;
    case 0x802bc9a:
      u_val1 = 0x42;
    }
  }
  return CONCAT44(*p_uint2,u_val1);
}

// =============================================================================
// Function: Entity_Routine_0802BCA4 @ 0x0802BCA4
// =============================================================================
void Entity_Routine_0802BCA4(int entity,undefined4 speed)

{
  undefined2 u_val1;
  undefined4 u_val2;
  undefined4 *p_uint3;
  undefined1 stack_buf_1c [4];
  
  *(undefined1 *)(entity + 0x38) = 1;
  *(undefined1 *)(entity + 0x39) = 0;
  *(undefined4 *)(entity + 0x3c) = 0xFFF80000;
  *(undefined4 *)(entity + 0x40) = 0;
  *(undefined4 *)(entity + 0x4c) = 0x110000;
  p_uint3 = *(undefined4 **)(entity + 0x10);
  if (p_uint3 != (undefined4 *)0x0) {
    Item_SetId(stack_buf_1c,speed);
    u_val1 = ArticleStack_IsEmpty(stack_buf_1c);
    u_val2 = _call_via_r1(*(int **)*p_uint3,*(undefined4 *)(**(int **)*p_uint3 + 100));
    Animal_Routine_0805E850(p_uint3 + 0x2d,u_val2,u_val1);
    *(undefined1 *)(p_uint3 + 0x32) = 1;
    *(undefined1 *)((int)p_uint3 + 0xca) = 0;
    *(undefined1 *)((int)p_uint3 + 0xcb) = 1;
    *(undefined2 *)(p_uint3 + 0x33) = u_val1;
  }
  *(undefined1 *)(entity + 0x34) = 4;
  *(undefined1 *)(entity + 0x35) = 0x14;
  *(undefined1 *)(entity + 0x58) = 1;
  u_val1 = Entity_Routine_0802BC48(entity);
  Entity_Routine_080321B0(entity,u_val1);
  *(undefined1 *)(entity + 0x54) = 1;
  return;
}

// =============================================================================
// Function: Entity_Routine_0802BD50 @ 0x0802BD50
// =============================================================================
void Entity_Routine_0802BD50(int entity,undefined2 speed,char collision)

{
  byte facing_dir;
  undefined2 u_val2;
  undefined4 u_val3;
  undefined4 *p_uint4;
  
  *(undefined2 *)(entity + 0x56) = speed;
  *(undefined1 *)(entity + 0x38) = 1;
  *(undefined1 *)(entity + 0x39) = 0;
  *(undefined4 *)(entity + 0x3c) = 0;
  *(undefined4 *)(entity + 0x40) = 0;
  *(undefined4 *)(entity + 0x4c) = 0x150000;
  p_uint4 = *(undefined4 **)(entity + 0x10);
  if (p_uint4 != (undefined4 *)0x0) {
    if (collision == '\0') {
      u_val3 = _call_via_r1(*(int **)*p_uint4,*(undefined4 *)(**(int **)*p_uint4 + 100));
    }
    else {
      u_val3 = _call_via_r1(*(int **)*p_uint4,*(undefined4 *)(**(int **)*p_uint4 + 0x68));
    }
    Animal_Routine_0805E850(p_uint4 + 0x2d,u_val3,speed);
    *(undefined1 *)(p_uint4 + 0x32) = 1;
    *(undefined1 *)((int)p_uint4 + 0xca) = 0;
    *(undefined1 *)((int)p_uint4 + 0xcb) = 1;
  }
  *(undefined1 *)(entity + 0x34) = 3;
  u_val3 = 0xFFF60000;
  facing_dir = *(byte *)(entity + 0x20);
  if (facing_dir == 1) {
    *(undefined4 *)(entity + 0x3c) = 0;
LAB_0802be36:
    *(undefined4 *)(entity + 0x40) = u_val3;
  }
  else {
    if (facing_dir < 2) {
      if (facing_dir != 0) goto LAB_0802be3a;
      u_val3 = 0xa0000;
      *(undefined4 *)(entity + 0x3c) = 0;
      goto LAB_0802be36;
    }
    if (facing_dir == 2) {
      *(undefined4 *)(entity + 0x3c) = 0xFFF60000;
      *(undefined4 *)(entity + 0x40) = 0;
    }
    else {
      if (facing_dir != 3) goto LAB_0802be3a;
      *(undefined4 *)(entity + 0x3c) = 0xa0000;
      *(undefined4 *)(entity + 0x40) = 0;
    }
  }
  *(undefined4 *)(entity + 0x4c) = 0xc0000;
LAB_0802be3a:
  *(undefined1 *)(entity + 0x58) = 1;
  u_val2 = Entity_Routine_0802BC48(entity);
  Entity_Routine_080321B0(entity,u_val2);
  *(undefined1 *)(entity + 0x54) = 1;
  return;
}

// =============================================================================
// Function: Entity_Routine_0802BE68 @ 0x0802BE68
// =============================================================================
void Entity_Routine_0802BE68(int entity)

{
  byte facing_dir;
  undefined2 u_val2;
  undefined4 u_val3;
  
  facing_dir = *(byte *)(entity + 0x20);
  u_val3 = 0xFFFE5556;
  if (facing_dir == 1) {
LAB_0802bec6:
    *(undefined4 *)(entity + 0x44) = 0;
    *(undefined4 *)(entity + 0x48) = u_val3;
  }
  else {
    if (facing_dir < 2) {
      u_val3 = 0x0001AAAA;
      if (facing_dir != 0) goto LAB_0802becc;
      goto LAB_0802bec6;
    }
    if (facing_dir == 2) {
      *(undefined4 *)(entity + 0x44) = 0xFFFE5556;
      *(undefined4 *)(entity + 0x48) = 0;
    }
    else {
      if (facing_dir != 3) goto LAB_0802becc;
      *(undefined4 *)(entity + 0x44) = 0x0001AAAA;
      *(undefined4 *)(entity + 0x48) = 0;
    }
  }
  *(undefined4 *)(entity + 0x50) = 0;
LAB_0802becc:
  *(undefined1 *)(entity + 0x34) = 1;
  *(undefined1 *)(entity + 0x58) = 1;
  u_val2 = Entity_Routine_0802BC48(entity);
  Entity_Routine_080321B0(entity,u_val2);
  *(undefined1 *)(entity + 0x54) = 1;
  return;
}

// =============================================================================
// Function: Entity_Routine_0802BEFC @ 0x0802BEFC
// =============================================================================
void Entity_Routine_0802BEFC(int entity)

{
  undefined2 u_val1;
  
  *(undefined1 *)(entity + 0x34) = 2;
  *(undefined1 *)(entity + 0x58) = 1;
  u_val1 = Entity_Routine_0802BC48(entity);
  Entity_Routine_080321B0(entity,u_val1);
  *(undefined1 *)(entity + 0x54) = 1;
  return;
}

// =============================================================================
// Function: Entity_Routine_0802BFA0 @ 0x0802BFA0
// =============================================================================
void Entity_Routine_0802BFA0(int *entity)

{
  char c_char1;
  int i_val2;
  int *p_int3;
  
  Entity_Routine_0803260C();
  if (*(char *)(*entity + 0x38) == '\x01') {
    p_int3 = (int *)((int)entity + 0xcb);
    if (*(char *)p_int3 == '\0') {
      i_val2 = Animal_Routine_0805E8F0(entity + 0x2d);
      if (-1 < i_val2 * 0x40000000) {
        return;
      }
      p_int3 = entity + 0x32;
      c_char1 = '\x01';
    }
    else {
      c_char1 = '\0';
    }
    *(char *)p_int3 = c_char1;
  }
  return;
}

// =============================================================================
// Function: Entity_Routine_0802BFE4 @ 0x0802BFE4
// =============================================================================
void Entity_Routine_0802BFE4(undefined4 *entity,undefined4 *speed)

{
  short s_val1;
  uint u_val2;
  int *p_int3;
  undefined4 u_val4;
  int *p_int5;
  undefined4 *p_uint6;
  int i_val7;
  undefined4 *p_uint8;
  int i_val9;
  undefined1 stack_buf_78 [8];
  undefined1 stack_buf_70 [8];
  undefined4 stack_buf_68 [4];
  undefined4 stack_val_58;
  undefined4 stack_val_54;
  undefined2 *apuStack_50 [2];
  uint stack_val_48;
  uint stack_val_44;
  int stack_val_40;
  int stack_val_3c;
  int stack_val_38;
  int stack_val_34;
  int stack_val_30;
  undefined4 *puStack_2c;
  char *pcStack_28;
  int stack_val_24;
  
  p_uint6 = (undefined4 *)*entity;
  stack_val_48 = (uint)*(ushort *)(p_uint6 + 1);
  p_int5 = (int *)*p_uint6;
  stack_val_44 = (uint)*(byte *)(entity + 0x11);
  stack_val_24 = p_uint6[2];
  stack_val_40 = p_uint6[3];
  stack_val_58 = *speed;
  stack_val_54 = speed[2];
  stack_val_3c = Entity_Routine_08032900(stack_val_48,stack_val_24 >> 0x10,stack_val_40 >> 0x10);
  *(undefined1 *)((int)entity + 0x8b) = (undefined1)stack_val_3c;
  if (*(char *)(p_uint6 + 0xe) == '\x01') {
    stack_val_38 = (stack_val_24 + p_uint6[0xf] >> 0x10) - (int)*(short *)(speed + 3);
    i_val7 = stack_val_40 + p_uint6[0x10];
    i_val9 = i_val7 >> 0x10;
    s_val1 = *(short *)((int)speed + 0xe);
    stack_val_34 = 0x8000 - i_val9;
    if (*(char *)((int)p_uint6 + 0x39) == '\x01') {
      u_val4 = _call_via_r1(p_int5,*(undefined4 *)(*p_int5 + 0x58));
      ScriptEngine_SetVariable(u_val4,speed[2],stack_val_38,i_val9 - s_val1,0);
    }
    stack_val_30 = (i_val7 - p_uint6[0x13] >> 0x10) - (int)*(short *)((int)speed + 0xe);
    if ((int)stack_val_48 < 9) {
      u_val2 = 1;
      if (stack_val_3c != 1) {
        u_val2 = 2;
      }
    }
    else {
      u_val2 = 1;
    }
    p_uint8 = entity + 0x23;
    puStack_2c = &stack_val_58;
    _call_via_r3(stack_buf_78,(int *)entity[0x2d],
                    *(undefined2 *)(entity[0x2e] + (uint)*(ushort *)(entity + 0x30) * 4),
                    *(undefined4 *)(*(int *)entity[0x2d] + 0x10));
    if ((int)(-entity[0x25] | entity[0x25]) < 0) {
      i_val9 = _call_via_r4(puStack_2c[1],stack_val_38,stack_val_30,
                              u_val2 << 2 | u_val2 | u_val2 << 4 | u_val2 << 6,stack_val_34,stack_buf_78,
                              *p_uint8,*(undefined2 *)(entity + 0x26),entity + 0x27);
    }
    else {
      i_val9 = 0;
    }
    if ((i_val9 != 0) && (pcStack_28 = (char *)(entity + 0x32), *pcStack_28 != '\0')) {
      NPC_Routine_080A480C(p_uint8,*puStack_2c,stack_buf_70);
      if (*(char *)((int)entity + 0xc9) == '\0') {
        if (*(char *)((int)entity + 0xca) == '\0') {
          NPC_Routine_080A4944(p_uint8,stack_buf_68,1);
          *(char *)((int)entity + 0xca) = '\x01';
        }
      }
      else {
        NPC_Routine_080A4944(p_uint8,stack_buf_68,1);
      }
      *pcStack_28 = '\0';
    }
  }
  Entity_Routine_08032690(entity,speed);
  if (((stack_val_44 != 0) && (*(char *)(p_uint6 + 0xe) != '\x01')) &&
     (*(ushort *)(entity + 0x33) != 0xFFFF)) {
    p_int3 = (int *)_call_via_r1(p_int5,*(undefined4 *)(*p_int5 + 100));
    i_val9 = *p_int3;
    _call_via_r3(apuStack_50,p_int3,*(ushort *)(entity + 0x33),*(undefined4 *)(i_val9 + 0xc));
    _call_via_r3(stack_buf_78,p_int3,*apuStack_50[0],*(undefined4 *)(i_val9 + 0x10));
    u_val4 = _call_via_r2(p_int5,2,*(undefined4 *)(*p_int5 + 0x48));
    _call_via_r4(p_int5,stack_buf_68[0],u_val4,1);
  }
  return;
}

// =============================================================================
// Function: Entity_Routine_0802C210 @ 0x0802C210
// =============================================================================
void Entity_Routine_0802C210(undefined4 entity)

{
  undefined4 u_val1;
  
  u_val1 = CppRuntime_OperatorNewArray(0x5c);
  Entity_Routine_0802B9C0(u_val1,entity);
  return;
}

// =============================================================================
// Function: Entity_Routine_0802C228 @ 0x0802C228
// =============================================================================
void Entity_Routine_0802C228(undefined4 *entity,undefined4 speed)

{
  undefined4 u_val1;
  
  u_val1 = _call_via_r1(*(int **)*entity,*(undefined4 *)(**(int **)*entity + 100));
  Animal_Routine_0805E850(entity + 0x2d,u_val1,speed);
  *(undefined1 *)(entity + 0x32) = 1;
  *(undefined1 *)((int)entity + 0xca) = 0;
  *(undefined1 *)((int)entity + 0xcb) = 1;
  *(short *)(entity + 0x33) = (short)speed;
  return;
}

// =============================================================================
// Function: Entity_Routine_0802C264 @ 0x0802C264
// =============================================================================
void Entity_Routine_0802C264(undefined4 *entity,undefined4 speed)

{
  undefined4 u_val1;
  
  u_val1 = _call_via_r1(*(int **)*entity,*(undefined4 *)(**(int **)*entity + 0x68));
  Animal_Routine_0805E850(entity + 0x2d,u_val1,speed);
  *(undefined1 *)(entity + 0x32) = 1;
  *(undefined1 *)((int)entity + 0xca) = 0;
  *(undefined1 *)((int)entity + 0xcb) = 1;
  return;
}

// =============================================================================
// Function: Entity_Routine_0802C29C @ 0x0802C29C
// =============================================================================
void Entity_Routine_0802C29C(undefined4 *entity,undefined4 speed)

{
  undefined4 u_val1;
  
  u_val1 = _call_via_r1(*(int **)*entity,*(undefined4 *)(**(int **)*entity + 100));
  Animal_Routine_0805E850(entity + 0x2d,u_val1,speed);
  *(undefined1 *)(entity + 0x32) = 1;
  *(undefined1 *)((int)entity + 0xca) = 0;
  *(undefined1 *)((int)entity + 0xcb) = 1;
  return;
}

// =============================================================================
// Function: Entity_Routine_0802C2E0 @ 0x0802C2E0
// =============================================================================
undefined4
Entity_Routine_0802C2E0(undefined4 *entity,undefined4 speed,undefined4 collision,undefined4 *flags)

{
  byte mood_byte;
  undefined *p_uint2;
  undefined4 u_val3;
  char c_char4;
  int *p_int5;
  undefined4 u_val6;
  undefined4 *saved_r4;
  undefined4 *curr_ptr;
  int i_val8;
  int i_val9;
  undefined4 *end_ptr;
  undefined4 *saved_r6;
  undefined4 *saved_r8;
  
  *(undefined1 *)(entity + 0xf) = 9;
  p_uint2 = PTR_case_0802C30C_0802c308;
  i_val9 = 0;
  if (0xd < *(byte *)((int)entity + 0x3f)) goto LAB_0802c840;
  switch(*(uint *)(PTR_case_0802C30C_0802c308 + (uint)*(byte *)((int)entity + 0x3f) * 4) &
         0xfffffffe) {
  case 0x802c30c:
    *flags = collision;
    flags[1] = flags;
    flags[2] = saved_r4;
    flags[3] = 0;
    flags[4] = saved_r8;
    *flags = 0;
    flags[1] = flags;
    flags[2] = saved_r4;
    flags[3] = 0;
    flags[4] = saved_r8;
    *saved_r4 = saved_r6;
    curr_ptr = saved_r4 + 1;
    *flags = 0;
    flags[1] = flags;
    flags[2] = curr_ptr;
    flags[3] = 0;
    flags[4] = saved_r8;
    *flags = 0;
    flags[1] = flags;
    flags[2] = curr_ptr;
    flags[3] = 0;
    flags[4] = saved_r8;
    *flags = 0;
    flags[1] = saved_r6;
    *curr_ptr = 0;
    saved_r4[2] = 0;
    saved_r4[3] = saved_r6;
    saved_r4[4] = saved_r8;
    curr_ptr = saved_r4 + 5;
    _Reset = 0;
    _PrefetchAbort = p_uint2;
    _DataAbort = 0;
    _IRQ = 0xc;
    _UndefinedInstruction = curr_ptr;
    _SupervisorCall = saved_r6;
    _NotUsed = flags + 2;
    _FIQ = saved_r6;
    UNK_0x0020 = saved_r8;
    *saved_r6 = p_uint2;
    saved_r6[1] = saved_r8;
    end_ptr = saved_r6 + 2;
    *end_ptr = 0;
    saved_r6[3] = curr_ptr;
    saved_r6[4] = end_ptr;
    saved_r6[5] = saved_r8;
    *saved_r8 = p_uint2;
    saved_r8[1] = flags + 2;
    saved_r8[2] = 0xc;
    saved_r8[3] = end_ptr;
    saved_r8[4] = curr_ptr;
    saved_r8[5] = 0xc;
    saved_r8[6] = saved_r8 + 4;
  case 0x802c344:
    Entity_Routine_0802A4C0(entity,0xa2,1);
    entity[0x23] = 0;
    entity[0x24] = 0;
    entity[0x27] = 0x100000;
    u_val3 = 0x0001B6DB;
    u_val6 = 0xFFFE4925;
    mood_byte = *(byte *)(entity + 8);
    if (mood_byte == 1) {
      entity[0x25] = 0;
LAB_0802c3b8:
      entity[0x26] = u_val6;
LAB_0802c3ba:
      entity[0x28] = 0x28000;
    }
    else {
      if (1 < mood_byte) {
        if (mood_byte == 2) {
          entity[0x25] = 0xFFFE4925;
          entity[0x26] = 0;
        }
        else {
          if (mood_byte != 3) goto case_0802C3BC;
          entity[0x25] = 0x0001B6DB;
          entity[0x26] = 0;
        }
        goto LAB_0802c3ba;
      }
      if (mood_byte == 0) {
        entity[0x25] = 0;
        u_val6 = u_val3;
        goto LAB_0802c3b8;
      }
    }
case_0802C3BC:
    *(undefined2 *)(entity + 0x11) =
         *(undefined2 *)
          (((uint)*(byte *)((int)entity + 0x3f) * 7 + (uint)*(byte *)(entity + 0x10)) * 8 +
          gRomData_080F1020);
    p_int5 = (int *)_call_via_r1((int *)*entity,*(undefined4 *)(*(int *)*entity + 0x14c));
    end_ptr = (undefined4 *)p_int5[1];
    for (curr_ptr = (undefined4 *)*p_int5; curr_ptr != end_ptr; curr_ptr = curr_ptr + 1) {
      c_char4 = HW_Routine_08008CD0(*curr_ptr);
      if (c_char4 == '\0') {
        u_val6 = *curr_ptr;
        goto LAB_0802c40c;
      }
    }
    u_val6 = end_ptr[-1];
LAB_0802c40c:
    i_val9 = gRomData_080F1020;
    HW_Routine_08008B6C(u_val6,*(undefined2 *)
                         (((uint)*(byte *)((int)entity + 0x3f) * 7 +
                          (uint)*(byte *)(entity + 0x10)) * 8 + gRomData_080F1020 + 2));
    c_char4 = Entity_Routine_08025944(entity);
joined_r0x0802c4b2:
    if (c_char4 == '\0') {
      i_val9 = (int)*(char *)(((uint)*(byte *)((int)entity + 0x3f) * 7 +
                             (uint)*(byte *)(entity + 0x10)) * 8 + i_val9 + 4);
    }
    else {
      i_val9 = (int)*(char *)(((uint)*(byte *)((int)entity + 0x3f) * 7 +
                             (uint)*(byte *)(entity + 0x10)) * 8 + i_val9 + 5);
    }
    goto LAB_0802c840;
  case 0x802c3bc:
    goto case_0802C3BC;
  case 0x802c440:
    *(undefined2 *)(entity + 0x11) =
         *(undefined2 *)
          (((uint)*(byte *)((int)entity + 0x3f) * 7 + (uint)*(byte *)(entity + 0x10)) * 8 +
          gRomData_080F1020);
    p_int5 = (int *)_call_via_r1((int *)*entity,*(undefined4 *)(*(int *)*entity + 0x14c));
    end_ptr = (undefined4 *)p_int5[1];
    for (curr_ptr = (undefined4 *)*p_int5; curr_ptr != end_ptr; curr_ptr = curr_ptr + 1) {
      c_char4 = HW_Routine_08008CD0(*curr_ptr);
      if (c_char4 == '\0') {
        u_val6 = *curr_ptr;
        goto LAB_0802c490;
      }
    }
    u_val6 = end_ptr[-1];
LAB_0802c490:
    i_val9 = gRomData_080F1020;
    HW_Routine_08008B6C(u_val6,*(undefined2 *)
                         (((uint)*(byte *)((int)entity + 0x3f) * 7 +
                          (uint)*(byte *)(entity + 0x10)) * 8 + gRomData_080F1020 + 2));
    c_char4 = Entity_Routine_08025944(entity);
    goto joined_r0x0802c4b2;
  case 0x802c4e4:
    *(undefined2 *)(entity + 0x11) = 0x1ae;
    p_int5 = (int *)_call_via_r1((int *)*entity,*(undefined4 *)(*(int *)*entity + 0x14c));
    end_ptr = (undefined4 *)p_int5[1];
    for (curr_ptr = (undefined4 *)*p_int5; curr_ptr != end_ptr; curr_ptr = curr_ptr + 1) {
      c_char4 = HW_Routine_08008CD0(*curr_ptr);
      if (c_char4 == '\0') {
        u_val6 = *curr_ptr;
        goto LAB_0802c522;
      }
    }
    u_val6 = end_ptr[-1];
LAB_0802c522:
    HW_Routine_08008B6C(u_val6,0x9d);
    curr_ptr = gRomData_080F1184;
    break;
  case 0x802c554:
    *(undefined2 *)(entity + 0x11) = 0x1be;
    p_int5 = (int *)_call_via_r1((int *)*entity,*(undefined4 *)(*(int *)*entity + 0x14c));
    end_ptr = (undefined4 *)p_int5[1];
    for (curr_ptr = (undefined4 *)*p_int5; curr_ptr != end_ptr; curr_ptr = curr_ptr + 1) {
      c_char4 = HW_Routine_08008CD0(*curr_ptr);
      if (c_char4 == '\0') {
        u_val6 = *curr_ptr;
        goto LAB_0802c592;
      }
    }
    u_val6 = end_ptr[-1];
LAB_0802c592:
    HW_Routine_08008B6C(u_val6,0x9d);
    curr_ptr = gRomData_080F118C;
    break;
  case 0x802c5a4:
    *(undefined2 *)(entity + 0x11) = 0x1ba;
    p_int5 = (int *)_call_via_r1((int *)*entity,*(undefined4 *)(*(int *)*entity + 0x14c));
    end_ptr = (undefined4 *)p_int5[1];
    for (curr_ptr = (undefined4 *)*p_int5; curr_ptr != end_ptr; curr_ptr = curr_ptr + 1) {
      c_char4 = HW_Routine_08008CD0(*curr_ptr);
      if (c_char4 == '\0') {
        u_val6 = *curr_ptr;
        goto LAB_0802c5de;
      }
    }
    u_val6 = end_ptr[-1];
LAB_0802c5de:
    HW_Routine_08008B6C(u_val6,0x94);
    goto LAB_0802c5e4;
  case 0x802c5ee:
    *(undefined2 *)(entity + 0x11) = 0x1aa;
    p_int5 = (int *)_call_via_r1((int *)*entity,*(undefined4 *)(*(int *)*entity + 0x14c));
    end_ptr = (undefined4 *)p_int5[1];
    for (curr_ptr = (undefined4 *)*p_int5; curr_ptr != end_ptr; curr_ptr = curr_ptr + 1) {
      c_char4 = HW_Routine_08008CD0(*curr_ptr);
      if (c_char4 == '\0') {
        u_val6 = *curr_ptr;
        goto LAB_0802c62c;
      }
    }
    u_val6 = end_ptr[-1];
LAB_0802c62c:
    HW_Routine_08008B6C(u_val6,0x93);
    Entity_Routine_0802AC2C(entity,*gRomData_080F1194,gRomData_080F1194[1]);
    if (*(byte *)((int)entity + 0xb2) - 0x2b < 0x1b) {
      i_val9 = _call_via_r2((int *)*entity,(uint)*(byte *)((int)entity + 0xb2),
                              *(undefined4 *)(*(int *)*entity + 0x40));
    }
    else {
      i_val9 = 0;
    }
    if (i_val9 != 0) {
      _call_via_r2(i_val9,0x3c,*(undefined4 *)(*(int *)(i_val9 + 0x14) + 0x88));
    }
LAB_0802c5e4:
    i_val9 = -2;
    goto LAB_0802c840;
  case 0x802c682:
    *(undefined2 *)(entity + 0x11) = 0x1b6;
    p_int5 = (int *)_call_via_r1((int *)*entity,*(undefined4 *)(*(int *)*entity + 0x14c));
    end_ptr = (undefined4 *)p_int5[1];
    for (curr_ptr = (undefined4 *)*p_int5; curr_ptr != end_ptr; curr_ptr = curr_ptr + 1) {
      c_char4 = HW_Routine_08008CD0(*curr_ptr);
      if (c_char4 == '\0') {
        u_val6 = *curr_ptr;
        goto LAB_0802c6c0;
      }
    }
    u_val6 = end_ptr[-1];
LAB_0802c6c0:
    HW_Routine_08008B6C(u_val6,0x9f);
    curr_ptr = gRomData_080F119C;
    break;
  case 0x802c6d4:
    *(undefined2 *)(entity + 0x11) = 0x1b2;
    p_int5 = (int *)_call_via_r1((int *)*entity,*(undefined4 *)(*(int *)*entity + 0x14c));
    end_ptr = (undefined4 *)p_int5[1];
    for (curr_ptr = (undefined4 *)*p_int5; curr_ptr != end_ptr; curr_ptr = curr_ptr + 1) {
      c_char4 = HW_Routine_08008CD0(*curr_ptr);
      if (c_char4 == '\0') {
        u_val6 = *curr_ptr;
        goto LAB_0802c712;
      }
    }
    u_val6 = end_ptr[-1];
LAB_0802c712:
    HW_Routine_08008B6C(u_val6,0xa0);
    Entity_Routine_0802AC2C(entity,*gRomData_080F11A4,gRomData_080F11A4[1]);
    if (*(byte *)((int)entity + 0xb2) - 0x2b < 0x1b) {
      i_val9 = _call_via_r2((int *)*entity,(uint)*(byte *)((int)entity + 0xb2),
                              *(undefined4 *)(*(int *)*entity + 0x40));
    }
    else {
      i_val9 = 0;
    }
    if (i_val9 != 0) {
      _call_via_r2(i_val9,0x3c,*(undefined4 *)(*(int *)(i_val9 + 0x14) + 0x88));
    }
    i_val9 = -8;
    goto LAB_0802c840;
  case 0x802c76a:
    *(undefined2 *)(entity + 0x11) = 0x1a6;
    p_int5 = (int *)_call_via_r1((int *)*entity,*(undefined4 *)(*(int *)*entity + 0x14c));
    end_ptr = (undefined4 *)p_int5[1];
    for (curr_ptr = (undefined4 *)*p_int5; curr_ptr != end_ptr; curr_ptr = curr_ptr + 1) {
      c_char4 = HW_Routine_08008CD0(*curr_ptr);
      if (c_char4 == '\0') {
        u_val6 = *curr_ptr;
        goto LAB_0802c7a4;
      }
    }
    u_val6 = end_ptr[-1];
LAB_0802c7a4:
    HW_Routine_08008B6C(u_val6,0x9e);
    goto LAB_0802c83c;
  case 0x802c7b0:
    *(undefined2 *)(entity + 0x11) = 0x1a2;
    p_int5 = (int *)_call_via_r1((int *)*entity,*(undefined4 *)(*(int *)*entity + 0x14c));
    end_ptr = (undefined4 *)p_int5[1];
    for (curr_ptr = (undefined4 *)*p_int5; curr_ptr != end_ptr; curr_ptr = curr_ptr + 1) {
      c_char4 = HW_Routine_08008CD0(*curr_ptr);
      if (c_char4 == '\0') {
        u_val6 = *curr_ptr;
        goto LAB_0802c7ee;
      }
    }
    u_val6 = end_ptr[-1];
LAB_0802c7ee:
    HW_Routine_08008B6C(u_val6,0x9d);
    Entity_Routine_0802AC2C(entity,*gRomData_080F11AC,gRomData_080F11AC[1]);
    mood_byte = *(byte *)((int)entity + 0xb2);
    goto joined_r0x0802c80a;
  }
  Entity_Routine_0802AC2C(entity,*curr_ptr,curr_ptr[1]);
  mood_byte = *(byte *)((int)entity + 0xb2);
joined_r0x0802c80a:
  if (mood_byte - 0x2b < 0x1b) {
    i_val9 = _call_via_r2((int *)*entity,(uint)mood_byte,*(undefined4 *)(*(int *)*entity + 0x40));
  }
  else {
    i_val9 = 0;
  }
  if (i_val9 != 0) {
    _call_via_r2(i_val9,0x3c,*(undefined4 *)(*(int *)(i_val9 + 0x14) + 0x88));
  }
LAB_0802c83c:
  i_val9 = -4;
LAB_0802c840:
  i_val8 = entity[5];
  u_val6 = Entity_Routine_08025B10(entity);
  _call_via_r3(entity,i_val9,u_val6,*(undefined4 *)(i_val8 + 100));
  return;
}

// =============================================================================
// Function: Entity_Routine_0802C860 @ 0x0802C860
// =============================================================================
void Entity_Routine_0802C860(undefined4 *entity)

{
  char c_char1;
  int *p_int2;
  undefined4 u_val3;
  undefined4 *p_uint4;
  int item_id;
  undefined4 *p_uint6;
  undefined1 facing_buffer [4];
  
  *(undefined1 *)(entity + 0xf) = 10;
  *(undefined1 *)((int)entity + 0x3d) = 0x14;
  Entity_Routine_0802A510(entity);
  p_int2 = (int *)_call_via_r1((int *)*entity,*(undefined4 *)(*(int *)*entity + 0x14c));
  p_uint4 = (undefined4 *)*p_int2;
  p_uint6 = (undefined4 *)p_int2[1];
  do {
    if (p_uint4 == p_uint6) {
      u_val3 = p_uint6[-1];
LAB_0802c8a8:
      HW_Routine_08008B6C(u_val3,0xbc);
      item_id = entity[0xe];
      u_val3 = Product_Construct(item_id + 0x5c);
      facing_buffer[0] = Farmer_GetUpgradedTool(item_id,u_val3);
      item_id = Item_GetId(facing_buffer);
      if (item_id == 0x4d) {
        item_id = entity[5];
        u_val3 = Entity_Routine_08025B10(entity);
        _call_via_r3(entity,0xfffffffe,u_val3,*(undefined4 *)(item_id + 100));
      }
      else {
        item_id = entity[5];
        u_val3 = Entity_Routine_08025B10(entity);
        _call_via_r3(entity,0,u_val3,*(undefined4 *)(item_id + 100));
      }
      return;
    }
    c_char1 = HW_Routine_08008CD0(*p_uint4);
    if (c_char1 == '\0') {
      u_val3 = *p_uint4;
      goto LAB_0802c8a8;
    }
    p_uint4 = p_uint4 + 1;
  } while( true );
}

// =============================================================================
// Function: Entity_Routine_0802C908 @ 0x0802C908
// =============================================================================
void Entity_Routine_0802C908(undefined4 *entity)

{
  byte b_flag1;
  char c_char2;
  int *p_int3;
  undefined4 u_val4;
  char *p_char5;
  byte *pbVar6;
  undefined4 *curr_ptr;
  undefined4 *end_ptr;
  
  if ((*(byte *)((int)entity + 0x41) != 0) &&
     (pbVar6 = (byte *)(entity + 0x10),
     (int)(uint)*pbVar6 < (int)(*(byte *)((int)entity + 0x41) - 1))) {
    p_char5 = (char *)((int)entity + 0x42);
    c_char2 = *p_char5;
    *p_char5 = c_char2 + '\x01';
    if ((char)(c_char2 + '\x01') == '\x14') {
      *p_char5 = '\0';
      b_flag1 = *pbVar6;
      *pbVar6 = b_flag1 + 1;
      if ((byte)(b_flag1 + 1) == 5) {
        p_int3 = (int *)_call_via_r1((int *)*entity,*(undefined4 *)(*(int *)*entity + 0x14c));
        end_ptr = (undefined4 *)p_int3[1];
        for (curr_ptr = (undefined4 *)*p_int3; curr_ptr != end_ptr; curr_ptr = curr_ptr + 1) {
          c_char2 = HW_Routine_08008CD0(*curr_ptr);
          if (c_char2 == '\0') {
            u_val4 = *curr_ptr;
            goto LAB_0802c978;
          }
        }
        u_val4 = end_ptr[-1];
LAB_0802c978:
        HW_Routine_08008B6C(u_val4,0xb8);
      }
    }
  }
  return;
}

// =============================================================================
// Function: Entity_Routine_0802C984 @ 0x0802C984
// =============================================================================
void Entity_Routine_0802C984(undefined4 *entity,undefined4 speed,undefined4 collision,int flags)

{
  byte mood_byte;
  char c_char2;
  undefined1 u_val3;
  undefined4 u_val4;
  uint u_val5;
  int *p_int6;
  undefined1 *p_uint7;
  int i_val8;
  undefined4 *p_uint9;
  int i_val10;
  undefined4 *p_uint11;
  int *p_int12;
  int stack_val_24;
  int stack_val_20;
  ushort stack_val_1c;
  ushort stack_val_1a;
  undefined1 stack_val_18;
  undefined1 stack_val_17;
  
  *(undefined1 *)(entity + 0x10) = 0;
  *(undefined1 *)((int)entity + 0x42) = 0;
  c_char2 = Product_GetId(entity[0xe] + 0x5c);
  if (c_char2 == '\0') {
    i_val8 = entity[0xe];
    u_val4 = Product_Construct(i_val8 + 0x5c);
    stack_val_18 = Farmer_GetUpgradedTool(i_val8,u_val4);
    u_val5 = Item_GetId();
    if (u_val5 < 0x51) {
      switch(*(uint *)(PTR_case_0802C9DC_0802c9d8 + u_val5 * 4) & 0xfffffffe) {
      case 0x802c9dc:
        entity = *(undefined4 **)
                   (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)
                                                  (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(
                                                  int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *
                                                  )(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(
                                                  int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *
                                                  )(*(int *)**(undefined4 **)
                                                              **(undefined4 **)
                                                                **(undefined4 **)
                                                                  (**(int **)**(undefined4 **)
                                                                               **(undefined4 **)
                                                                                 **(undefined4 **)
                                                                                   (flags + 0x20)
                                                                  + 0x40) + 4) + 8) + 8) + 8) + 8) +
                                                  8) + 8) + 8) + 8) + 0x18) + 4) + 4) + 4) + 4) + 4)
                                                  + 4) + 4) + 4) + 4) + 4) + 4) + 4) + 4) + 4) + 4)
                                                  + 4) + 4) + 4) + 4) + 8) + 0x20) + 0x10);
      case 0x802cb20:
        p_uint7 = (undefined1 *)((int)entity + 0x3f);
        u_val3 = 0;
        break;
      case 0x802cb28:
        p_uint7 = (undefined1 *)((int)entity + 0x3f);
        u_val3 = 3;
        break;
      case 0x802cb30:
        p_uint7 = (undefined1 *)((int)entity + 0x3f);
        u_val3 = 1;
        break;
      case 0x802cb38:
        p_uint7 = (undefined1 *)((int)entity + 0x3f);
        u_val3 = 4;
        break;
      case 0x802cb40:
        i_val10 = (int)*(short *)((int)entity + 10);
        i_val8 = (int)*(short *)((int)entity + 0xe);
        mood_byte = *(byte *)(entity + 8);
        if (mood_byte == 1) {
          i_val8 = i_val8 + -0x10;
        }
        else if (mood_byte < 2) {
          if (mood_byte == 0) {
            i_val8 = i_val8 + 0x10;
          }
        }
        else if (mood_byte == 2) {
          i_val10 = i_val10 + -0x10;
        }
        else if (mood_byte == 3) {
          i_val10 = i_val10 + 0x10;
        }
        p_int12 = (int *)*entity;
        _call_via_r3(&stack_val_24,p_int12,*(undefined2 *)(entity + 1),
                        *(undefined4 *)(*p_int12 + 0x34));
        if (((stack_val_24 == 0) || ((uint)stack_val_1c < (uint)(i_val10 >> 3))) ||
           ((uint)stack_val_1a < (uint)(i_val8 >> 3))) {
          p_int6 = (int *)0x0;
        }
        else {
          u_val5 = (i_val8 >> 3) * (uint)stack_val_1c + (i_val10 >> 3);
          if (stack_val_20 != 0) {
            u_val5 = (uint)*(byte *)(stack_val_20 + u_val5);
          }
          p_int6 = (int *)(stack_val_24 + u_val5 * 4);
        }
        if ((p_int6 != (int *)0x0) && (*p_int6 * 0x40000000 < 0)) {
          *(undefined1 *)(entity + 0xf) = 0x1b;
          *(undefined1 *)((int)entity + 0x3f) = 0xf;
          i_val8 = entity[5];
          u_val4 = Entity_Routine_08025B10(entity);
          _call_via_r3(entity,0xfffffffe,u_val4,*(undefined4 *)(i_val8 + 100));
          p_int12 = (int *)_call_via_r1(p_int12,*(undefined4 *)(*p_int12 + 0x14c));
          p_uint9 = (undefined4 *)*p_int12;
          p_uint11 = (undefined4 *)p_int12[1];
          do {
            if (p_uint9 == p_uint11) {
              u_val4 = p_uint11[-1];
LAB_0802cc18:
              HW_Routine_08008B6C(u_val4,0x92);
              return;
            }
            c_char2 = HW_Routine_08008CD0(*p_uint9);
            if (c_char2 == '\0') {
              u_val4 = *p_uint9;
              goto LAB_0802cc18;
            }
            p_uint9 = p_uint9 + 1;
          } while( true );
        }
        i_val8 = Farmer_Routine_0800E94C(entity[0xe]);
        if (i_val8 == 0) {
          p_uint7 = (undefined1 *)((int)entity + 0x3f);
          u_val3 = 0xf;
          goto LAB_0802cdc2;
        }
        p_uint7 = (undefined1 *)((int)entity + 0x3f);
        u_val3 = 2;
        break;
      case 0x802cc3a:
        p_uint7 = (undefined1 *)((int)entity + 0x3f);
        u_val3 = 5;
        break;
      case 0x802cc42:
        p_uint7 = (undefined1 *)((int)entity + 0x3f);
        u_val3 = 6;
        break;
      case 0x802cc4a:
        p_uint7 = (undefined1 *)((int)entity + 0x3f);
        u_val3 = 7;
        break;
      case 0x802cc52:
        p_uint7 = (undefined1 *)((int)entity + 0x3f);
        u_val3 = 8;
        break;
      case 0x802cc5a:
        p_uint7 = (undefined1 *)((int)entity + 0x3f);
        u_val3 = 9;
        break;
      case 0x802cc62:
        p_uint7 = (undefined1 *)((int)entity + 0x3f);
        u_val3 = 10;
        break;
      case 0x802cc6a:
        p_uint7 = (undefined1 *)((int)entity + 0x3f);
        u_val3 = 0xb;
        break;
      case 0x802cc72:
        p_uint7 = (undefined1 *)((int)entity + 0x3f);
        u_val3 = 0xc;
        break;
      case 0x802cc7a:
        p_uint7 = (undefined1 *)((int)entity + 0x3f);
        u_val3 = 0xd;
        break;
      case 0x802cc82:
        p_uint7 = (undefined1 *)((int)entity + 0x3f);
        u_val3 = 0xe;
      }
    }
    else {
      p_uint7 = (undefined1 *)((int)entity + 0x3f);
      u_val3 = 0xf;
    }
    *p_uint7 = u_val3;
    i_val8 = entity[0xe];
    u_val4 = Product_Construct(i_val8 + 0x5c);
    stack_val_17 = Farmer_GetUpgradedTool(i_val8,u_val4);
    u_val5 = Item_GetId();
    if (u_val5 < 0x30) {
      switch(*(uint *)(PTR_case_0802CCC4_0802ccc0 + u_val5 * 4) & 0xfffffffe) {
      case 0x802ccc4:
      case 0x802cd84:
        p_uint7 = (undefined1 *)((int)entity + 0x41);
        u_val3 = 1;
        break;
      case 0x802cd8c:
        p_uint7 = (undefined1 *)((int)entity + 0x41);
        u_val3 = 2;
        break;
      case 0x802cd94:
        p_uint7 = (undefined1 *)((int)entity + 0x41);
        u_val3 = 3;
        break;
      case 0x802cd9c:
        p_uint7 = (undefined1 *)((int)entity + 0x41);
        u_val3 = 4;
        break;
      case 0x802cda4:
        p_uint7 = (undefined1 *)((int)entity + 0x41);
        u_val3 = 5;
        break;
      case 0x802cdac:
        p_uint7 = (undefined1 *)((int)entity + 0x41);
        u_val3 = 6;
        break;
      case 0x802cdb4:
        p_uint7 = (undefined1 *)((int)entity + 0x41);
        u_val3 = 7;
      }
    }
    else {
      p_uint7 = (undefined1 *)((int)entity + 0x41);
      u_val3 = 0;
    }
  }
  else {
    p_uint7 = (undefined1 *)((int)entity + 0x3f);
    u_val3 = 0xf;
  }
LAB_0802cdc2:
  *p_uint7 = u_val3;
  return;
}

// =============================================================================
// Function: Entity_Routine_0802CDCC @ 0x0802CDCC
// =============================================================================
void Entity_Routine_0802CDCC(undefined4 *entity)

{
  undefined4 u_val1;
  undefined4 u_val2;
  char c_char3;
  int i_val4;
  int i_val5;
  int i_val6;
  uint u_val7;
  int i_val8;
  int i_val9;
  undefined1 stack_buf_a0 [12];
  undefined4 stack_val_94;
  undefined4 stack_val_90;
  undefined4 stack_val_8c;
  undefined4 stack_val_88;
  undefined4 stack_val_84;
  undefined4 stack_val_80;
  undefined4 stack_val_7c;
  undefined4 stack_val_78;
  undefined4 stack_val_74;
  undefined4 stack_val_70;
  undefined4 stack_val_6c;
  undefined4 stack_val_68;
  undefined4 stack_val_64;
  undefined4 stack_val_60;
  undefined4 stack_val_5c;
  undefined4 stack_val_58;
  short stack_val_54;
  short stack_val_52;
  short stack_val_50;
  short stack_val_4e;
  int *piStack_4c;
  uint stack_val_48;
  uint stack_val_44;
  uint stack_val_40;
  uint stack_val_3c;
  uint stack_val_38;
  int stack_val_34;
  uint stack_val_30;
  int stack_val_2c;
  int stack_val_28;
  int stack_val_24;
  
  c_char3 = *(char *)((int)entity + 0xb3);
  if (c_char3 == '\0') {
    if (*(char *)(entity + 0x2d) != '\0') {
      c_char3 = *(char *)(entity + 0x2d) + -1;
LAB_0802ce2e:
      *(char *)(entity + 0x2d) = c_char3;
    }
  }
  else {
    c_char3 = c_char3 + -1;
    *(char *)((int)entity + 0xb3) = c_char3;
    if (c_char3 == '\0') {
      u_val7 = 0x2b;
      do {
        i_val4 = _call_via_r2((int *)*entity,u_val7,*(undefined4 *)(*(int *)*entity + 0x40));
        if (i_val4 != 0) {
          _call_via_r1(i_val4,*(undefined4 *)(*(int *)(i_val4 + 0x14) + 0x40));
        }
        u_val7 = u_val7 + 1;
      } while (u_val7 < 0x46);
    }
    else if (*(byte *)(entity + 0x2d) < 0x5a) {
      c_char3 = *(byte *)(entity + 0x2d) + 1;
      goto LAB_0802ce2e;
    }
  }
  piStack_4c = (int *)*entity;
  stack_val_48 = (uint)*(ushort *)(entity + 1);
  if ((((entity[6] != 0) || (entity[7] != 0)) && (*(char *)(entity + 0xf) != ',')) &&
     (*(char *)(entity + 0xf) != '5')) {
    _call_via_r2(&stack_val_94,entity,*(undefined4 *)(entity[5] + 0xc));
    stack_val_8c = stack_val_94;
    stack_val_88 = stack_val_90;
    u_val7 = _call_via_r1(entity,*(undefined4 *)(entity[5] + 0x40));
    stack_val_44 = (u_val7 ^ 1) & 0xff;
    stack_val_40 = (uint)*(byte *)(entity + 8);
    stack_val_3c = (uint)*(byte *)(entity + 0x2d);
    stack_val_84 = CONCAT22(*(short *)((int)entity + 0x1e) + stack_val_8c._2_2_,
                         *(short *)((int)entity + 0x1a) + (short)stack_val_8c);
    stack_val_80 = CONCAT22(*(short *)((int)entity + 0x1e) + stack_val_88._2_2_,
                         *(short *)((int)entity + 0x1a) + (short)stack_val_88);
    stack_val_7c = stack_val_84;
    stack_val_78 = stack_val_80;
    if (*(char *)((int)entity + 0x3e) == '\x02') {
      stack_val_38 = 0x15;
      stack_val_34 = gRomData_080F0F78;
    }
    else {
      stack_val_38 = 0x3c;
      stack_val_34 = gRomData_080F0E88;
    }
    stack_val_30 = 0;
    if (stack_val_38 != 0) {
      do {
        stack_val_2c = *(int *)(stack_val_30 * 4 + stack_val_34);
        stack_val_28 = _call_via_r2(piStack_4c,stack_val_2c,*(undefined4 *)(*piStack_4c + 0x40));
        if ((stack_val_28 != 0) && (*(ushort *)(stack_val_28 + 4) == stack_val_48)) {
          _call_via_r2(&stack_val_74,stack_val_28,*(undefined4 *)(*(int *)(stack_val_28 + 0x14) + 0xc));
          stack_val_6c = stack_val_74;
          u_val1 = stack_val_6c;
          stack_val_68 = stack_val_70;
          u_val2 = stack_val_68;
          stack_val_6c._0_2_ = (short)stack_val_74;
          i_val4 = (int)(short)stack_val_6c;
          stack_val_68._0_2_ = (short)stack_val_70;
          i_val8 = (int)(short)stack_val_68;
          stack_val_6c._2_2_ = (short)((uint)stack_val_74 >> 0x10);
          stack_val_24 = (int)stack_val_6c._2_2_;
          stack_val_68._2_2_ = (short)((uint)stack_val_70 >> 0x10);
          i_val6 = (int)stack_val_68._2_2_;
          stack_val_6c = u_val1;
          stack_val_68 = u_val2;
          if (-1 < (i_val4 - (short)stack_val_88 & (short)stack_val_8c - i_val8 &
                    stack_val_24 - stack_val_88._2_2_ & stack_val_8c._2_2_ - i_val6)) {
            if ((i_val4 - (short)stack_val_78 & (short)stack_val_7c - i_val8 & stack_val_24 - stack_val_78._2_2_ &
                stack_val_7c._2_2_ - i_val6) < 0) {
              entity[6] = 0;
              entity[7] = 0;
              if ((stack_val_44 != 0) && (stack_val_2c - 0x2bU < 0x1b)) {
                _call_via_r3(stack_val_28,stack_val_40,stack_val_3c,
                                *(undefined4 *)(*(int *)(stack_val_28 + 0x14) + 0x84));
                *(undefined1 *)((int)entity + 0xb3) = 8;
              }
            }
          }
        }
        stack_val_30 = stack_val_30 + 1;
      } while (stack_val_30 < stack_val_38);
    }
  }
  if ((entity[6] == 0) && (entity[7] == 0)) {
    return;
  }
  i_val8 = entity[2];
  i_val9 = entity[3];
  i_val4 = entity[6] + i_val8;
  i_val6 = entity[7] + i_val9;
  if (i_val4 < 0) {
    i_val4 = 0;
  }
  else {
    i_val5 = _call_via_r2(piStack_4c,stack_val_48,*(undefined4 *)(*piStack_4c + 0x2c));
    if (i_val5 * 0x10000 < i_val4) {
      i_val4 = i_val5 * 0x10000;
    }
  }
  if (i_val6 < 0) {
    i_val5 = 0;
LAB_0802d048:
    i_val6 = i_val5;
  }
  else {
    i_val5 = _call_via_r2(piStack_4c,stack_val_48,*(undefined4 *)(*piStack_4c + 0x30));
    i_val5 = i_val5 * 0x10000;
    if (i_val5 < i_val6) goto LAB_0802d048;
  }
  if (1 < (byte)(*(char *)(entity + 0xf) - 0x2cU)) {
    _call_via_r3(stack_buf_a0,piStack_4c,stack_val_48,*(undefined4 *)(*piStack_4c + 0x34));
    _call_via_r2(&stack_val_64,entity,*(undefined4 *)(entity[5] + 0xc));
    stack_val_5c = stack_val_64;
    stack_val_58 = stack_val_60;
    c_char3 = NPC_Routine_080AC070(stack_buf_a0,&stack_val_5c);
    if (c_char3 != '\0') {
      entity[2] = i_val4;
      entity[3] = i_val6;
      goto LAB_0802d122;
    }
    i_val8 = (i_val4 >> 0x10) - (i_val8 >> 0x10);
    i_val9 = (i_val6 >> 0x10) - (i_val9 >> 0x10);
    stack_val_54 = (short)i_val8 + (short)stack_val_5c;
    stack_val_52 = (short)i_val9 + stack_val_5c._2_2_;
    stack_val_50 = (short)i_val8 + (short)stack_val_58;
    stack_val_4e = (short)i_val9 + stack_val_58._2_2_;
    c_char3 = NPC_Routine_080AC070(stack_buf_a0);
    if (c_char3 == '\x01') {
      if (i_val8 < 1) {
        if (i_val8 < 0) {
          Entity_Routine_0802536C(entity,2,-i_val8);
        }
        else if (i_val9 < 1) {
          if (i_val9 < 0) {
            Entity_Routine_0802536C(entity,1,-i_val9);
          }
        }
        else {
          Entity_Routine_0802536C(entity,0,i_val9);
        }
      }
      else {
        Entity_Routine_0802536C(entity,3,i_val8);
      }
      goto LAB_0802d122;
    }
  }
  entity[2] = i_val4;
  entity[3] = i_val6;
LAB_0802d122:
  c_char3 = _call_via_r1(entity,*(undefined4 *)(entity[5] + 0x40));
  if (c_char3 != '\0') {
    i_val4 = _call_via_r2(piStack_4c,0x2c,*(undefined4 *)(*piStack_4c + 0x40));
    *(undefined4 *)(i_val4 + 8) = entity[2];
    *(undefined4 *)(i_val4 + 0xc) = entity[3];
  }
  return;
}

// =============================================================================
// Function: Entity_Routine_0802D158 @ 0x0802D158
// =============================================================================
u32 Entity_Routine_0802D158(undefined4 *entity)

{
  byte b_flag1;
  undefined1 u_val2;
  char c_char3;
  undefined2 u_val4;
  undefined4 u_val5;
  int i_val7;
  uint u_val8;
  uint u_val9;
  undefined1 stack_val_18;
  undefined1 stack_buf_17 [7];
  undefined1 *p_uint6;
  
  p_uint6 = &stack_val_18;
  u_val9 = 0x192;
  *(short *)(entity + 0x1f) = (short)0xFFFF;
  if (0x39 < *(byte *)(entity + 0xf)) goto LAB_0802d590;
  switch(*(uint *)((uint)*(byte *)(entity + 0xf) * 4 + gInlineTable_0802D184) & 0xfffffffe) {
  case 0x802d26c:
    c_char3 = HeldItem_IsEmpty(entity[0xe] + 0x54);
    if (c_char3 != '\0') {
      b_flag1 = *(byte *)((int)entity + 0x3e);
      if (b_flag1 == 1) {
        u_val9 = 0x132;
        if (*(char *)((int)entity + 0xb3) == '\0') {
          u_val9 = 0x1c6;
        }
        break;
      }
      if (1 < b_flag1) {
        if ((b_flag1 == 2) && (u_val9 = 0x132, *(char *)((int)entity + 0xb3) == '\0')) {
          u_val9 = 0x15e;
        }
        break;
      }
      if (b_flag1 != 0) break;
      goto case_0802D3CC;
    }
    b_flag1 = *(byte *)((int)entity + 0x3e);
    if (b_flag1 != 1) {
      if (1 < b_flag1) {
        if (b_flag1 == 2) {
          u_val9 = 0x14e;
        }
        break;
      }
      goto joined_r0x0802d340;
    }
    goto LAB_0802d57c;
  case 0x802d2e0:
    c_char3 = HeldItem_IsEmpty(entity[0xe] + 0x54);
    if (c_char3 == '\0') goto case_0802D55A;
    if (5 < *(byte *)((int)entity + 0x3f)) goto case_0802D3CC;
    u_val9 = (uint)*(ushort *)
                   (((uint)*(byte *)((int)entity + 0x3f) * 7 + (uint)*(byte *)(entity + 0x10)) * 2
                   + gRomData_080F0FCC);
    i_val7 = entity[0xe];
    u_val5 = Product_Construct(i_val7 + 0x5c);
    stack_val_18 = Farmer_GetUpgradedTool(i_val7,u_val5);
    goto LAB_0802d44e;
  case 0x802d330:
    b_flag1 = HeldItem_IsEmpty(entity[0xe] + 0x54);
joined_r0x0802d340:
    u_val9 = 0x192;
    if (b_flag1 != 0) break;
  case 0x802d55a:
case_0802D55A:
    u_val9 = 0x152;
    break;
  case 0x802d346:
    c_char3 = HeldItem_IsEmpty(entity[0xe] + 0x54);
    u_val9 = 0x192;
    if (c_char3 == '\0') {
      u_val9 = 0x152;
    }
    break;
  case 0x802d35e:
    u_val9 = 0x136;
    break;
  case 0x802d364:
    u_val9 = 0x19e;
    break;
  case 0x802d36a:
    u_val9 = 0x4e;
    break;
  case 0x802d36e:
    u_val9 = 0x46;
    break;
  case 0x802d372:
    u_val9 = 0x13e;
    break;
  case 0x802d378:
    u_val9 = 0x142;
    break;
  case 0x802d37e:
    u_val9 = (uint)*(ushort *)(entity + 0x11);
    i_val7 = entity[0xe];
    u_val5 = Product_Construct(i_val7 + 0x5c);
    u_val2 = Farmer_GetUpgradedTool(i_val7,u_val5);
    p_uint6 = stack_buf_17;
    goto LAB_0802d44c;
  case 0x802d39e:
    u_val9 = 0x1ea;
    i_val7 = entity[0xe];
    u_val5 = Product_Construct(i_val7 + 0x5c);
    u_val2 = Farmer_GetUpgradedTool(i_val7,u_val5);
    p_uint6 = stack_buf_17 + 1;
    goto LAB_0802d44c;
  case 0x802d3bc:
    if (*(byte *)((int)entity + 0x4e) != *(byte *)((int)entity + 0x4f)) {
      u_val9 = 0x182;
      if ((uint)*(byte *)((int)entity + 0x4f) - (uint)*(byte *)((int)entity + 0x4e) == 1) {
        u_val9 = 0x186;
      }
      i_val7 = entity[0xe];
      u_val5 = Product_Construct(i_val7 + 0x5c);
      u_val2 = Farmer_GetUpgradedTool(i_val7,u_val5);
      p_uint6 = stack_buf_17 + 2;
      goto LAB_0802d44c;
    }
  case 0x802d3cc:
case_0802D3CC:
    u_val9 = 0x192;
    break;
  case 0x802d3fc:
    u_val9 = 0x76;
    i_val7 = entity[0xe];
    u_val5 = Product_Construct(i_val7 + 0x5c);
    u_val2 = Farmer_GetUpgradedTool(i_val7,u_val5);
    p_uint6 = stack_buf_17 + 3;
    goto LAB_0802d44c;
  case 0x802d416:
    u_val9 = 0x6e;
    i_val7 = entity[0xe];
    u_val5 = Product_Construct(i_val7 + 0x5c);
    u_val2 = Farmer_GetUpgradedTool(i_val7,u_val5);
    p_uint6 = stack_buf_17 + 4;
    goto LAB_0802d44c;
  case 0x802d432:
    u_val9 = 0x72;
    i_val7 = entity[0xe];
    u_val5 = Product_Construct(i_val7 + 0x5c);
    u_val2 = Farmer_GetUpgradedTool(i_val7,u_val5);
    p_uint6 = stack_buf_17 + 5;
LAB_0802d44c:
    *p_uint6 = u_val2;
LAB_0802d44e:
    u_val4 = ArticleStack_IsEmpty(p_uint6);
    *(undefined2 *)(entity + 0x1f) = u_val4;
    break;
  case 0x802d45a:
    u_val9 = 0x1fa;
    break;
  case 0x802d460:
    u_val9 = 0x196;
    break;
  case 0x802d466:
    u_val9 = 0x112;
    break;
  case 0x802d46c:
    u_val9 = 0x116;
    break;
  case 0x802d472:
    i_val7 = _call_via_r2((int *)*entity,0x2c,*(undefined4 *)(*(int *)*entity + 0x40));
    b_flag1 = *(byte *)((int)entity + 0x3e);
    if (b_flag1 == 1) {
      u_val9 = 0xee;
      u_val8 = 0x77E;
    }
    else if (b_flag1 < 2) {
      if (b_flag1 != 0) break;
      u_val9 = 0xea;
      u_val8 = 0x77A;
    }
    else {
      if (b_flag1 != 2) break;
      u_val9 = 0xe6;
      u_val8 = 0x782;
    }
    goto LAB_0802d53e;
  case 0x802d4bc:
    u_val9 = 0x15a;
    i_val7 = _call_via_r2((int *)*entity,0x2c,*(undefined4 *)(*(int *)*entity + 0x40));
    u_val8 = 0x77A;
    goto LAB_0802d53e;
  case 0x802d4d8:
    u_val9 = 0x9a;
    i_val7 = _call_via_r2((int *)*entity,0x2c,*(undefined4 *)(*(int *)*entity + 0x40));
    u_val8 = 0x77A;
    goto LAB_0802d53e;
  case 0x802d4f0:
    u_val9 = 0x106;
    break;
  case 0x802d4f6:
    u_val9 = 0x102;
    break;
  case 0x802d4fc:
    u_val9 = 0xfe;
    break;
  case 0x802d500:
    u_val9 = 0xfa;
    break;
  case 0x802d504:
    u_val9 = 0x122;
    break;
  case 0x802d50a:
    u_val9 = 0x11e;
    break;
  case 0x802d510:
    u_val9 = 0x11a;
    break;
  case 0x802d516:
    c_char3 = HeldItem_IsEmpty(entity[0xe] + 0x54);
    u_val9 = 0x14a;
    if (c_char3 != '\0') {
      u_val9 = 0x10a;
    }
    break;
  case 0x802d52c:
    u_val9 = 0xe2;
    i_val7 = _call_via_r2((int *)*entity,0x2c,*(undefined4 *)(*(int *)*entity + 0x40));
    u_val8 = 0x792;
LAB_0802d53e:
    if (*(ushort *)(i_val7 + 0x22) != u_val8) {
      Entity_Routine_080321B0(i_val7);
    }
    break;
  case 0x802d550:
    u_val9 = 0x3e;
    break;
  case 0x802d554:
    u_val9 = 0x146;
    break;
  case 0x802d560:
    u_val9 = 0x13a;
    break;
  case 0x802d566:
    u_val9 = 0x42;
    break;
  case 0x802d56a:
    c_char3 = HeldItem_IsEmpty(entity[0xe] + 0x54);
    u_val9 = 0x1c6;
    if (c_char3 != '\0') break;
LAB_0802d57c:
    u_val9 = 0x156;
    break;
  case 0x802d582:
    u_val9 = 0xf6;
    if (*(char *)((int)entity + 0x3d) != '\0') {
      u_val9 = 0xf2;
    }
  }
LAB_0802d590:
  return u_val9;
}

// =============================================================================
// Function: Entity_Routine_0802D59C @ 0x0802D59C
// =============================================================================
void Entity_Routine_0802D59C(undefined4 *entity,ushort *speed)

{
  undefined1 *p_uint1;
  byte *pbVar2;
  uint *p_uint3;
  int i_val4;
  uint u_val5;
  byte b_flag6;
  ushort u_val7;
  uint u_val8;
  ushort u_val9;
  undefined4 stack_val_40;
  ushort stack_val_3c;
  int stack_val_38;
  int stack_val_34;
  ushort stack_val_30;
  ushort stack_val_2e;
  uint stack_buf_2c [3];
  
  stack_buf_2c[2] = 0;
  u_val9 = 0;
  if (speed != (ushort *)0x0) {
    stack_buf_2c[2] = (uint)*speed;
    u_val9 = speed[2];
  }
  p_uint1 = (undefined1 *)((int)entity + 0x3e);
  *p_uint1 = 0;
  pbVar2 = (byte *)(entity + 8);
  if ((*(char *)((int)entity + 0xc3) == '\0') && ((u_val9 & 1) != 0)) {
    Farmer_Routine_0801FE94(&stack_val_40,entity);
    b_flag6 = *pbVar2;
    if (b_flag6 == 1) {
      u_val7 = (ushort)0x3FF;
      u_val5 = ((stack_val_3c & 0x3FF) << 6 | (uint)(stack_val_40._3_1_ >> 2)) * 0x10000 +
              0xFFF00000;
LAB_0802d646:
      stack_val_40 = CONCAT13(stack_val_40._3_1_ & 3 | (byte)((u_val5 >> 0x10 & 0x3f) << 2),
                           (undefined3)stack_val_40);
      stack_val_3c = (ushort)0xFFFFFC00 & stack_val_3c | (ushort)(u_val5 >> 0x16) & u_val7;
    }
    else if (b_flag6 < 2) {
      if (b_flag6 == 0) {
        u_val7 = (ushort)0x3FF;
        u_val5 = ((stack_val_3c & 0x3FF) << 6 | (uint)(stack_val_40._3_1_ >> 2)) * 0x10000 +
                0x100000;
        goto LAB_0802d646;
      }
    }
    else {
      if (b_flag6 == 2) {
        u_val5 = ((int)(stack_val_40 << 6) >> 0x10) - 0x10;
      }
      else {
        if (b_flag6 != 3) goto LAB_0802d68e;
        u_val5 = ((int)(stack_val_40 << 6) >> 0x10) + 0x10;
      }
      stack_val_40 = 0xFC0003FF & stack_val_40 | (u_val5 & 0xffff) << 10;
    }
LAB_0802d68e:
    _call_via_r3(&stack_val_38,(int *)*entity,*(undefined2 *)(entity + 1),
                    *(undefined4 *)(*(int *)*entity + 0x34));
    u_val5 = (int)(stack_val_40 << 6) >> 0x13;
    u_val8 = (int)(((stack_val_3c & 0x3FF) << 6 | stack_val_40 >> 0x1a) << 0x10) >> 0x13;
    if (((stack_val_38 == 0) || (stack_val_30 < u_val5)) || (stack_val_2e < u_val8)) {
      p_uint3 = (uint *)0x0;
    }
    else {
      u_val5 = u_val8 * stack_val_30 + u_val5;
      if (stack_val_34 != 0) {
        u_val5 = (uint)*(byte *)(stack_val_34 + u_val5);
      }
      p_uint3 = (uint *)(stack_val_38 + u_val5 * 4);
    }
    if ((p_uint3 != (uint *)0x0) && ((0xFFFE & *(ushort *)((int)p_uint3 + 2)) != 0)) {
      stack_buf_2c[0] = *p_uint3 >> 0x11;
      stack_buf_2c[1] = 0;
      _call_via_r3((int *)*entity,stack_buf_2c,0,*(undefined4 *)(*(int *)*entity + 0x140));
      return;
    }
  }
  u_val5 = 0;
  u_val8 = 0;
  b_flag6 = *pbVar2;
  if ((*(char *)((int)entity + 0xc3) != '\0') || ((u_val9 & 3) != 0)) {
    *(undefined1 *)(entity + 0xf) = 0x23;
    goto LAB_0802d7f8;
  }
  if ((stack_buf_2c[2] & 0x1ff) >> 8 == 0 &&
      ((stack_buf_2c[2] & 0x1f) >> 4 == 0 &&
      ((stack_buf_2c[2] & 0x3f) >> 5 == 0 &&
      ((stack_buf_2c[2] & 0x7f) >> 6 == 0 && (stack_buf_2c[2] & 0xff) >> 7 == 0)))) goto LAB_0802d7f8;
  if ((stack_buf_2c[2] & 0x20) == 0) {
    if ((stack_buf_2c[2] & 0x10) == 0) {
      if ((stack_buf_2c[2] & 0x40) == 0) {
        if ((stack_buf_2c[2] & 0x80) != 0) {
          b_flag6 = 0;
        }
      }
      else {
        b_flag6 = 1;
      }
    }
    else {
      b_flag6 = 3;
    }
  }
  else {
    b_flag6 = 2;
  }
  if (b_flag6 == 1) {
    u_val8 = 0xfe;
  }
  else if (b_flag6 < 2) {
    if (b_flag6 == 0) {
      u_val8 = 2;
    }
  }
  else if (b_flag6 == 2) {
    u_val5 = 0xfe;
  }
  else if (b_flag6 == 3) {
    u_val5 = 2;
  }
  if ((*(byte *)(entity[0xd] + 0x2210) & 1) == 0) {
    if ((stack_buf_2c[2] & 0x100) == 0) {
LAB_0802d7f6:
      *p_uint1 = 1;
      goto LAB_0802d7f8;
    }
  }
  else if ((stack_buf_2c[2] & 0x100) != 0) goto LAB_0802d7f6;
  *p_uint1 = 2;
  u_val5 = (u_val5 & 0x7f) << 1;
  u_val8 = (u_val8 & 0x7f) << 1;
LAB_0802d7f8:
  entity[6] = (int)(u_val5 << 0x18) >> 8;
  entity[7] = (int)(u_val8 << 0x18) >> 8;
  if (*pbVar2 != b_flag6) {
    Entity_Routine_08032198(entity,b_flag6);
  }
  i_val4 = _call_via_r2((int *)*entity,0x2c,*(undefined4 *)(*(int *)*entity + 0x40));
  if (*(byte *)(i_val4 + 0x20) != b_flag6) {
    Entity_Routine_08032198(i_val4,b_flag6);
  }
  return;
}

// =============================================================================
// Function: Entity_Routine_0802D844 @ 0x0802D844
// =============================================================================
void Entity_Routine_0802D844(int entity,int speed)

{
  uint u_val1;
  
  u_val1 = 0;
  if (speed != 0) {
    u_val1 = (uint)*(ushort *)(speed + 4);
  }
  if ((*(char *)(entity + 0xc3) != '\0') || ((0x3F3 & u_val1) != 0)) {
    Entity_Routine_080323C8(entity);
    *(undefined1 *)(entity + 0x3c) = 0x18;
    if ((u_val1 & 0x20) == 0) {
      if ((u_val1 & 0x10) == 0) {
        if ((u_val1 & 0x40) == 0) {
          if (((u_val1 & 0x80) != 0) && (*(char *)(entity + 0x20) != '\0')) {
            Entity_Routine_08032198(entity,0);
          }
        }
        else if (*(char *)(entity + 0x20) != '\x01') {
          Entity_Routine_08032198(entity,1);
        }
      }
      else if (*(char *)(entity + 0x20) != '\x03') {
        Entity_Routine_08032198(entity,3);
      }
    }
    else if (*(char *)(entity + 0x20) != '\x02') {
      Entity_Routine_08032198(entity,2);
    }
  }
  return;
}

// =============================================================================
// Function: Entity_Routine_0802D8E8 @ 0x0802D8E8
// =============================================================================
void Entity_Routine_0802D8E8(undefined4 *entity,ushort *speed)

{
  byte b_flag1;
  uint u_val2;
  uint u_val3;
  undefined4 stack_val_18;
  uint stack_val_14;
  uint stack_val_10;
  
  u_val2 = 0;
  stack_val_10 = 0;
  u_val3 = 0;
  if (speed != (ushort *)0x0) {
    u_val2 = (uint)*speed;
    stack_val_10 = (uint)speed[2];
    u_val3 = (uint)speed[4];
  }
  if (*(char *)((int)entity + 0xc3) != '\0') {
    *(undefined1 *)(entity + 0xf) = 0;
    return;
  }
  u_val2 = (u_val2 & 3) >> 1 | (u_val2 & 0x3ff) >> 9;
  b_flag1 = (byte)u_val2;
  if (u_val2 != 0) {
    if ((u_val3 & 0x7f) >> 6 != 0 || (u_val3 & 0x3f) >> 5 != 0) {
      Entity_Routine_08025A40(entity,1);
      return;
    }
    stack_val_14 = (stack_val_10 & 0x3ff) >> 9 |
                (stack_val_10 & 3) >> 1 | (u_val3 & 0xff) >> 7 | (u_val3 & 0x1f) >> 4;
    if (stack_val_14 != 0) {
      Entity_Routine_08025A40(entity,0);
      return;
    }
    b_flag1 = (byte)stack_val_10 & 1;
    if ((stack_val_10 & 1) != 0) {
      stack_val_18 = 0x3CE;
      _call_via_r3((int *)*entity,&stack_val_18,0,*(undefined4 *)(*(int *)*entity + 0x140));
      *(undefined1 *)(entity + 0xf) = 0;
      return;
    }
    if ((stack_val_10 & 0x100) == 0) {
      return;
    }
  }
  *(byte *)(entity + 0xf) = b_flag1;
  return;
}

// =============================================================================
// Function: Entity_Routine_0802D9AC @ 0x0802D9AC
// =============================================================================
void Entity_Routine_0802D9AC(undefined4 *entity,ushort *speed)

{
  char c_char1;
  int *p_int2;
  int i_val3;
  undefined4 u_val4;
  undefined4 u_val5;
  uint u_val6;
  undefined4 *end_ptr;
  undefined4 *curr_ptr;
  undefined1 stack_buf_2c [4];
  undefined4 temp_buf_28 [2];
  undefined4 temp_buf_20 [2];
  uint stack_val_18;
  uint stack_val_14;
  
  stack_val_18 = 0;
  stack_val_14 = 0;
  u_val6 = 0;
  if (speed != (ushort *)0x0) {
    stack_val_18 = (uint)*speed;
    stack_val_14 = (uint)speed[2];
    u_val6 = (uint)speed[4];
  }
  if (*(char *)((int)entity + 0xc3) == '\0') {
    if ((stack_val_18 & 1) == 0 && (stack_val_18 & 0x3ff) >> 9 == 0) {
      *(undefined1 *)(entity + 0xf) = 0;
    }
    else if ((u_val6 & 0x7f) >> 6 == 0 && (u_val6 & 0x3f) >> 5 == 0) {
      if ((stack_val_14 & 0x3ff) >> 9 == 0 &&
          ((stack_val_14 & 1) == 0 && ((u_val6 & 0xff) >> 7 == 0 && (u_val6 & 0x1f) >> 4 == 0))) {
        if ((stack_val_14 & 2) == 0) {
          if ((stack_val_14 & 0x100) != 0) {
            *(byte *)(entity + 0xf) = (byte)stack_val_14 & 2;
          }
        }
        else {
          if ((0x201 & stack_val_18) == 0x201) {
            p_int2 = (int *)*entity;
            end_ptr = (undefined4 *)(*p_int2 + (0x201 - 0xc1));
            curr_ptr = temp_buf_28;
            temp_buf_28[0] = 0x3CE;
          }
          else {
            if ((stack_val_18 & 1) == 0) {
              if ((stack_val_18 & 0x200) == 0) {
                return;
              }
              c_char1 = HeldItem_IsEmpty(entity[0xe] + 0x54);
              if (c_char1 != '\0') {
                Entity_Routine_08025A40(entity,0);
                return;
              }
              c_char1 = HeldItem_IsValid(entity[0xe] + 0x54);
              if ((c_char1 != '\0') || (i_val3 = HeldItem_GetKind(entity[0xe] + 0x54), i_val3 != 0)) {
                *(undefined1 *)(entity + 0xf) = 0;
                return;
              }
              HeldItem_GetFood(stack_buf_2c,entity[0xe] + 0x54);
              i_val3 = entity[5];
              u_val4 = Item_GetFoodStaminaEffect(stack_buf_2c);
              u_val5 = Item_GetFoodFatigueEffect(stack_buf_2c);
              _call_via_r3(entity,u_val4,u_val5,*(undefined4 *)(i_val3 + 100));
              i_val3 = Item_GetFoodIsDrinkOrLiquid(stack_buf_2c);
              if (i_val3 == 0) {
                *(undefined1 *)(entity + 0xf) = 0xf;
                p_int2 = (int *)_call_via_r1((int *)*entity,
                                                *(undefined4 *)(*(int *)*entity + 0x14c));
                end_ptr = (undefined4 *)p_int2[1];
                for (curr_ptr = (undefined4 *)*p_int2; curr_ptr != end_ptr; curr_ptr = curr_ptr + 1) {
                  c_char1 = HW_Routine_08008CD0(*curr_ptr);
                  if (c_char1 == '\0') {
                    u_val4 = *curr_ptr;
                    goto LAB_0802db62;
                  }
                }
                u_val4 = end_ptr[-1];
LAB_0802db62:
                HW_Routine_08008B6C(u_val4,0x65);
              }
              else {
                *(undefined1 *)(entity + 0xf) = 0x10;
                p_int2 = (int *)_call_via_r1((int *)*entity,
                                                *(undefined4 *)(*(int *)*entity + 0x14c));
                end_ptr = (undefined4 *)p_int2[1];
                for (curr_ptr = (undefined4 *)*p_int2; curr_ptr != end_ptr; curr_ptr = curr_ptr + 1) {
                  c_char1 = HW_Routine_08008CD0(*curr_ptr);
                  if (c_char1 == '\0') {
                    u_val4 = *curr_ptr;
                    goto LAB_0802dba4;
                  }
                }
                u_val4 = end_ptr[-1];
LAB_0802dba4:
                HW_Routine_08008B6C(u_val4,0x66);
              }
              Entity_Routine_0802A7D8(entity);
              HeldItem_Clear(entity[0xe] + 0x54);
              return;
            }
            p_int2 = (int *)*entity;
            end_ptr = (undefined4 *)(*p_int2 + 0x140);
            curr_ptr = temp_buf_20;
            temp_buf_20[0] = 0x3CE;
          }
          curr_ptr[1] = 0;
          _call_via_r3(p_int2,curr_ptr,0,*end_ptr);
          *(undefined1 *)(entity + 0xf) = 0;
        }
      }
      else {
        c_char1 = HeldItem_IsEmpty(entity[0xe] + 0x54);
        if (c_char1 == '\0') {
          Entity_Routine_080257D0(entity,0);
        }
        else {
          Entity_Routine_08025838(entity,0);
        }
      }
    }
    else {
      c_char1 = HeldItem_IsEmpty(entity[0xe] + 0x54);
      if (c_char1 == '\0') {
        Entity_Routine_080257D0(entity,1);
      }
      else {
        Entity_Routine_08025838(entity,1);
      }
    }
  }
  else {
    *(undefined1 *)(entity + 0xf) = 0;
  }
  return;
}

// =============================================================================
// Function: Entity_Routine_0802DBF0 @ 0x0802DBF0
// =============================================================================
void Entity_Routine_0802DBF0(undefined4 *entity,ushort *speed)

{
  byte b_flag1;
  char c_char2;
  int i_val3;
  undefined4 u_val4;
  int *p_int5;
  undefined4 u_val6;
  undefined4 *curr_ptr;
  undefined4 *end_ptr;
  undefined1 stack_buf_1c [4];
  uint stack_val_18;
  uint stack_val_14;
  
  b_flag1 = 0;
  stack_val_18 = 0;
  stack_val_14 = 0;
  if (speed != (ushort *)0x0) {
    stack_val_18 = (uint)*speed;
    stack_val_14 = (uint)speed[2];
  }
  if (*(char *)((int)entity + 0xc3) != '\0') {
LAB_0802de26:
    *(byte *)(entity + 0xf) = b_flag1;
    return;
  }
  if ((stack_val_18 & 0x200) == 0) {
    c_char2 = HeldItem_IsEmpty(entity[0xe] + 0x54);
    if (c_char2 == '\0') {
LAB_0802de86:
      *(undefined1 *)(entity + 0xf) = 0;
      return;
    }
    *(undefined1 *)(entity + 0xf) = 0x16;
    *(undefined1 *)((int)entity + 0x79) = 3;
    p_int5 = (int *)_call_via_r1((int *)*entity,*(undefined4 *)(*(int *)*entity + 0x14c));
    end_ptr = (undefined4 *)p_int5[1];
    for (curr_ptr = (undefined4 *)*p_int5; curr_ptr != end_ptr; curr_ptr = curr_ptr + 1) {
      c_char2 = HW_Routine_08008CD0(*curr_ptr);
      if (c_char2 == '\0') goto LAB_0802de2e;
    }
  }
  else if ((stack_val_14 & 0x7f) >> 6 == 0 && (stack_val_14 & 0x3f) >> 5 == 0) {
    if ((stack_val_14 & 0xff) >> 7 == 0 && (stack_val_14 & 0x1f) >> 4 == 0) {
      if ((stack_val_14 & 1) != 0) {
        c_char2 = HeldItem_IsEmpty(entity[0xe] + 0x54);
        if (c_char2 != '\0') {
          Entity_Routine_08025838(entity,1);
          return;
        }
        Entity_Routine_080257D0(entity,1);
        return;
      }
      b_flag1 = (byte)stack_val_14 & 2;
      if ((stack_val_14 & 2) != 0) {
        c_char2 = HeldItem_IsEmpty(entity[0xe] + 0x54);
        if (c_char2 != '\0') {
          Entity_Routine_08025A40(entity,0);
          return;
        }
        c_char2 = HeldItem_IsValid(entity[0xe] + 0x54);
        if ((c_char2 != '\0') || (i_val3 = HeldItem_GetKind(entity[0xe] + 0x54), i_val3 != 0)) {
          *(undefined1 *)(entity + 0xf) = 0;
          return;
        }
        HeldItem_GetFood(stack_buf_1c,entity[0xe] + 0x54);
        i_val3 = entity[5];
        u_val6 = Item_GetFoodStaminaEffect(stack_buf_1c);
        u_val4 = Item_GetFoodFatigueEffect(stack_buf_1c);
        _call_via_r3(entity,u_val6,u_val4,*(undefined4 *)(i_val3 + 100));
        i_val3 = Item_GetFoodIsDrinkOrLiquid(stack_buf_1c);
        if (i_val3 == 0) {
          *(undefined1 *)(entity + 0xf) = 0xf;
          p_int5 = (int *)_call_via_r1((int *)*entity,*(undefined4 *)(*(int *)*entity + 0x14c))
          ;
          end_ptr = (undefined4 *)p_int5[1];
          for (curr_ptr = (undefined4 *)*p_int5; curr_ptr != end_ptr; curr_ptr = curr_ptr + 1) {
            c_char2 = HW_Routine_08008CD0(*curr_ptr);
            if (c_char2 == '\0') {
              u_val6 = *curr_ptr;
              goto LAB_0802ddba;
            }
          }
          u_val6 = end_ptr[-1];
LAB_0802ddba:
          HW_Routine_08008B6C(u_val6,0x65);
        }
        else {
          *(undefined1 *)(entity + 0xf) = 0x10;
          p_int5 = (int *)_call_via_r1((int *)*entity,*(undefined4 *)(*(int *)*entity + 0x14c))
          ;
          end_ptr = (undefined4 *)p_int5[1];
          for (curr_ptr = (undefined4 *)*p_int5; curr_ptr != end_ptr; curr_ptr = curr_ptr + 1) {
            c_char2 = HW_Routine_08008CD0(*curr_ptr);
            if (c_char2 == '\0') {
              u_val6 = *curr_ptr;
              goto LAB_0802ddfc;
            }
          }
          u_val6 = end_ptr[-1];
LAB_0802ddfc:
          HW_Routine_08008B6C(u_val6,0x66);
        }
        Entity_Routine_0802A7D8(entity);
        HeldItem_Clear(entity[0xe] + 0x54);
        return;
      }
      if ((stack_val_14 & 0x100) == 0) {
        return;
      }
      goto LAB_0802de26;
    }
    c_char2 = HeldItem_IsEmpty(entity[0xe] + 0x54);
    if (c_char2 == '\0') goto LAB_0802de86;
    *(undefined1 *)(entity + 0xf) = 0x16;
    *(undefined1 *)((int)entity + 0x79) = 2;
    p_int5 = (int *)_call_via_r1((int *)*entity,*(undefined4 *)(*(int *)*entity + 0x14c));
    end_ptr = (undefined4 *)p_int5[1];
    for (curr_ptr = (undefined4 *)*p_int5; curr_ptr != end_ptr; curr_ptr = curr_ptr + 1) {
      c_char2 = HW_Routine_08008CD0(*curr_ptr);
      if (c_char2 == '\0') goto LAB_0802de2e;
    }
  }
  else {
    c_char2 = HeldItem_IsEmpty(entity[0xe] + 0x54);
    if (c_char2 == '\0') goto LAB_0802de86;
    *(undefined1 *)(entity + 0xf) = 0x16;
    *(undefined1 *)((int)entity + 0x79) = 1;
    p_int5 = (int *)_call_via_r1((int *)*entity,*(undefined4 *)(*(int *)*entity + 0x14c));
    end_ptr = (undefined4 *)p_int5[1];
    for (curr_ptr = (undefined4 *)*p_int5; curr_ptr != end_ptr; curr_ptr = curr_ptr + 1) {
      c_char2 = HW_Routine_08008CD0(*curr_ptr);
      if (c_char2 == '\0') goto LAB_0802de2e;
    }
  }
  u_val6 = end_ptr[-1];
LAB_0802de7e:
  HW_Routine_08008B6C(u_val6,0x67);
  return;
LAB_0802de2e:
  u_val6 = *curr_ptr;
  goto LAB_0802de7e;
}

// =============================================================================
// Function: Entity_Routine_0802DE94 @ 0x0802DE94
// =============================================================================
void Entity_Routine_0802DE94(undefined4 *entity,ushort *speed)

{
  char c_char1;
  int i_val2;
  undefined4 u_val3;
  undefined4 u_val4;
  int *p_int5;
  ushort u_val6;
  uint u_val7;
  undefined4 *curr_ptr;
  undefined4 *end_ptr;
  undefined1 temp_buf_20 [4];
  uint stack_val_1c;
  undefined4 stack_val_18;
  uint stack_val_14;
  
  u_val6 = 0;
  stack_val_1c = 0;
  if (speed != (ushort *)0x0) {
    u_val6 = *speed;
    stack_val_1c = (uint)speed[2];
  }
  if (*(char *)((int)entity + 0xc3) == '\0') {
    if ((u_val6 & 2) == 0) {
      c_char1 = HeldItem_IsEmpty(entity[0xe] + 0x54);
      if (c_char1 == '\0') {
        Entity_Routine_080258A0(entity);
        return;
      }
      u_val7 = 0;
      if (*(char *)((int)entity + 0x3f) != '\x0f') {
        if (*(char *)((int)entity + 0x3f) == '\x0e') {
          Entity_Routine_0802C860(entity);
          return;
        }
        Entity_Routine_0802C2E0(entity);
        return;
      }
    }
    else {
      c_char1 = HeldItem_IsEmpty(entity[0xe] + 0x54);
      if (c_char1 != '\0') {
        Entity_Routine_0802C908(entity);
      }
      if ((stack_val_1c & 0x1f) >> 4 != 0 ||
          ((stack_val_1c & 0x3f) >> 5 != 0 ||
          ((stack_val_1c & 0x7f) >> 6 != 0 || (stack_val_1c & 0xff) >> 7 != 0))) {
        if ((stack_val_1c & 0x20) != 0) {
          if (*(char *)(entity + 8) == '\x02') {
            return;
          }
          Entity_Routine_08032198(entity,2);
          return;
        }
        if ((stack_val_1c & 0x10) != 0) {
          if (*(char *)(entity + 8) == '\x03') {
            return;
          }
          Entity_Routine_08032198(entity,3);
          return;
        }
        if ((stack_val_1c & 0x40) != 0) {
          if (*(char *)(entity + 8) == '\x01') {
            return;
          }
          Entity_Routine_08032198(entity,1);
          return;
        }
        if ((stack_val_1c & 0x80) == 0) {
          return;
        }
        if (*(char *)(entity + 8) == '\0') {
          return;
        }
        Entity_Routine_08032198(entity,0);
        return;
      }
      u_val7 = stack_val_1c >> 8 & 1;
      if ((stack_val_1c & 0x100) != 0) {
        *(undefined1 *)(entity + 0xf) = 0;
        return;
      }
      if ((stack_val_1c & 1) == 0) {
        if ((stack_val_1c & 0x200) == 0) {
          return;
        }
        c_char1 = HeldItem_IsEmpty(entity[0xe] + 0x54);
        if (c_char1 != '\0') {
          Entity_Routine_08025A40(entity,0);
          return;
        }
        c_char1 = HeldItem_IsValid(entity[0xe] + 0x54);
        if ((c_char1 == '\0') && (i_val2 = HeldItem_GetKind(entity[0xe] + 0x54), i_val2 == 0)) {
          HeldItem_GetFood(temp_buf_20,entity[0xe] + 0x54);
          i_val2 = entity[5];
          u_val3 = Item_GetFoodStaminaEffect(temp_buf_20);
          u_val4 = Item_GetFoodFatigueEffect(temp_buf_20);
          _call_via_r3(entity,u_val3,u_val4,*(undefined4 *)(i_val2 + 100));
          i_val2 = Item_GetFoodIsDrinkOrLiquid(temp_buf_20);
          if (i_val2 == 0) {
            *(undefined1 *)(entity + 0xf) = 0xf;
            p_int5 = (int *)_call_via_r1((int *)*entity,
                                            *(undefined4 *)(*(int *)*entity + 0x14c));
            end_ptr = (undefined4 *)p_int5[1];
            for (curr_ptr = (undefined4 *)*p_int5; curr_ptr != end_ptr; curr_ptr = curr_ptr + 1) {
              c_char1 = HW_Routine_08008CD0(*curr_ptr);
              if (c_char1 == '\0') {
                u_val3 = *curr_ptr;
                goto LAB_0802e056;
              }
            }
            u_val3 = end_ptr[-1];
LAB_0802e056:
            HW_Routine_08008B6C(u_val3,0x65);
          }
          else {
            *(undefined1 *)(entity + 0xf) = 0x10;
            p_int5 = (int *)_call_via_r1((int *)*entity,
                                            *(undefined4 *)(*(int *)*entity + 0x14c));
            end_ptr = (undefined4 *)p_int5[1];
            for (curr_ptr = (undefined4 *)*p_int5; curr_ptr != end_ptr; curr_ptr = curr_ptr + 1) {
              c_char1 = HW_Routine_08008CD0(*curr_ptr);
              if (c_char1 == '\0') {
                u_val3 = *curr_ptr;
                goto LAB_0802e098;
              }
            }
            u_val3 = end_ptr[-1];
LAB_0802e098:
            HW_Routine_08008B6C(u_val3,0x66);
          }
          Entity_Routine_0802A7D8(entity);
          HeldItem_Clear(entity[0xe] + 0x54);
          return;
        }
        goto LAB_0802e0ae;
      }
      stack_val_18 = 0x3CE;
      stack_val_14 = u_val7;
      _call_via_r3((int *)*entity,&stack_val_18,0,*(undefined4 *)(*(int *)*entity + 0x140));
    }
    *(char *)(entity + 0xf) = (char)u_val7;
  }
  else {
LAB_0802e0ae:
    *(undefined1 *)(entity + 0xf) = 0;
  }
  return;
}

// =============================================================================
// Function: Entity_Routine_0802E0FC @ 0x0802E0FC
// =============================================================================
void Entity_Routine_0802E0FC(undefined4 *entity,ushort *speed)

{
  ushort u_val1;
  char c_char2;
  int i_val3;
  int i_val4;
  undefined *p_uint5;
  uint *p_uint6;
  undefined4 u_val7;
  byte b_flag8;
  int *p_int9;
  uint u_val10;
  ushort u_val11;
  byte *pbVar12;
  undefined4 *curr_ptr;
  ushort u_val14;
  uint u_val15;
  undefined4 *end_ptr;
  undefined1 stack_buf_a4 [8];
  undefined4 stack_val_9c;
  undefined4 stack_val_98;
  ushort stack_val_94;
  int stack_val_90;
  int stack_val_8c;
  ushort stack_val_88;
  ushort stack_val_86;
  undefined4 stack_val_84;
  uint stack_val_80;
  undefined4 stack_val_7c;
  undefined4 stack_val_78;
  undefined4 stack_val_74;
  undefined4 stack_val_70;
  undefined4 stack_val_6c;
  undefined4 stack_val_68;
  undefined4 stack_val_64;
  undefined4 stack_val_60;
  undefined4 stack_val_5c;
  undefined4 stack_val_58;
  undefined4 stack_val_54;
  short stack_val_50;
  short stack_val_4e;
  short stack_val_4c;
  short stack_val_4a;
  undefined1 stack_val_48;
  undefined1 stack_val_47;
  undefined1 stack_buf_46 [2];
  uint stack_buf_44 [2];
  undefined1 *puStack_3c;
  uint stack_val_38;
  int stack_val_34;
  undefined4 *puStack_30;
  byte *pbStack_2c;
  undefined4 *puStack_28;
  int stack_val_24;
  
  u_val14 = 0;
  stack_val_7c = 0;
  if (speed != (ushort *)0x0) {
    u_val14 = *speed;
    stack_val_7c = (uint)speed[2];
  }
  b_flag8 = *(byte *)((int)entity + 0xc3);
  stack_val_80 = (uint)b_flag8;
  if (stack_val_80 != 0) {
    *(undefined1 *)(entity + 0xf) = 0;
    return;
  }
  if ((u_val14 & 1) != 0) {
    if ((stack_val_7c & 2) != 0) {
      stack_val_84 = 0x3ce;
      _call_via_r3((int *)*entity,&stack_val_84,0,*(undefined4 *)(*(int *)*entity + 0x140));
      *(byte *)(entity + 0xf) = b_flag8;
      return;
    }
    b_flag8 = stack_val_7c._1_1_ & 2;
    if ((stack_val_7c & 0x200) != 0) {
      c_char2 = HeldItem_IsEmpty(entity[0xe] + 0x54);
      if (c_char2 == '\0') {
        Entity_Routine_080257D0(entity,1);
        return;
      }
      Entity_Routine_08025838(entity,0);
      return;
    }
    if ((stack_val_7c & 0x100) == 0) {
      Entity_Routine_0802EBE6();
    }
    *(byte *)(entity + 0xf) = b_flag8;
    return;
  }
  curr_ptr = entity + 0xf;
  *(undefined1 *)curr_ptr = 0;
  p_int9 = (int *)*entity;
  Farmer_Routine_0801FE94(stack_buf_a4,entity);
  pbVar12 = (byte *)(entity + 8);
  puStack_3c = stack_buf_a4;
  Entity_Routine_0802AB98(&stack_val_78,entity,*pbVar12);
  stack_val_70 = stack_val_78;
  stack_val_6c = stack_val_74;
  i_val3 = _call_via_r3(p_int9,stack_buf_a4,&stack_val_70,*(undefined4 *)(*p_int9 + 0x134));
  stack_val_38 = 0;
  stack_val_34 = 0;
  pbStack_2c = pbVar12;
  puStack_28 = curr_ptr;
  switch(i_val3) {
  case 0x2b:
    c_char2 = HeldItem_IsEmpty(entity[0xe] + 0x54);
    if (c_char2 != '\0') {
      p_int9 = (int *)*entity;
      i_val4 = _call_via_r2(p_int9,i_val3,*(undefined4 *)(*p_int9 + 0x40));
      if (i_val4 != 0) {
        _call_via_r2(i_val4,0x3c,*(undefined4 *)(*(int *)(i_val4 + 0x14) + 0x88));
      }
      _call_via_r2(p_int9,i_val3,*(undefined4 *)(*p_int9 + 0x3c));
      Entity_Routine_08025E38(entity);
      return;
    }
    break;
  case 0x2c:
    Farm_Routine_08009C3C(entity[0xd] + 0x14);
    i_val3 = Animal_Routine_0809BC10();
    if (i_val3 == 1) {
      c_char2 = HeldItem_IsEmpty(entity[0xe] + 0x54);
      if (c_char2 == '\0') {
        stack_val_48 = Entity_Routine_080262C4(entity);
        i_val3 = Item_Routine_0800E198(&stack_val_48);
        if (i_val3 != 0) {
          p_int9 = (int *)*entity;
          _call_via_r2(p_int9,&stack_val_48,*(undefined4 *)(*p_int9 + 0x15c));
          *(undefined1 *)puStack_28 = 0xe;
          stack_val_34 = 1;
          i_val3 = _call_via_r2(p_int9,0x2c,*(undefined4 *)(*p_int9 + 0x40));
          if (i_val3 != 0) {
            _call_via_r2(i_val3,0x3c,*(undefined4 *)(*(int *)(i_val3 + 0x14) + 0x88));
            Entity_Routine_08032384(i_val3,5,0);
          }
          p_int9 = (int *)_call_via_r1(p_int9,*(undefined4 *)(*p_int9 + 0x14c));
          end_ptr = (undefined4 *)p_int9[1];
          for (curr_ptr = (undefined4 *)*p_int9; curr_ptr != end_ptr; curr_ptr = curr_ptr + 1) {
            c_char2 = HW_Routine_08008CD0(*curr_ptr);
            if (c_char2 == '\0') goto LAB_0802e57e;
          }
          goto LAB_0802e5f6;
        }
      }
      else {
        _call_via_r3(&stack_val_9c,p_int9,*(undefined2 *)(entity + 1),
                        *(undefined4 *)(*p_int9 + 0x34));
        u_val14 = *(ushort *)((int)entity + 10);
        u_val11 = *(ushort *)((int)entity + 0xe);
        stack_val_68 = CONCAT22(u_val11 - 9,u_val14 - 7);
        stack_val_64 = CONCAT22(u_val11 + 5,u_val14 + 7);
        stack_val_60 = stack_val_68;
        stack_val_5c = stack_val_64;
        c_char2 = NPC_Routine_080AC070(&stack_val_9c,&stack_val_60);
        if (c_char2 == '\x01') {
          Entity_Routine_08024724(&stack_val_58,&stack_val_9c,&stack_val_60);
          stack_val_54 = stack_val_58;
          u_val7 = stack_val_54;
          stack_val_54._0_2_ = (short)stack_val_58;
          u_val14 = u_val14 + (short)stack_val_54;
          stack_val_54._2_2_ = (short)((uint)stack_val_58 >> 0x10);
          u_val11 = u_val11 + stack_val_54._2_2_;
          stack_val_50 = u_val14 - 7;
          stack_val_4e = u_val11 - 9;
          stack_val_4c = u_val14 + 7;
          stack_val_4a = u_val11 + 5;
          stack_val_54 = u_val7;
          c_char2 = NPC_Routine_080AC070(&stack_val_9c);
          if (c_char2 == '\x01') break;
        }
        i_val3 = _call_via_r2(p_int9,0x2c,*(undefined4 *)(*p_int9 + 0x40));
        Entity_Routine_08021EE0();
        *(uint *)(i_val3 + 8) = (uint)u_val14 * 0x10000;
        *(uint *)(i_val3 + 0xc) = (uint)u_val11 * 0x10000;
        *(undefined4 *)(i_val3 + 0x18) = 0;
        *(undefined4 *)(i_val3 + 0x1c) = 0;
        b_flag8 = *pbStack_2c;
        if (b_flag8 == 1) {
          if (*(char *)(i_val3 + 0x20) != '\x03') {
            Entity_Routine_08032198(i_val3,3);
          }
        }
        else if (b_flag8 < 2) {
          if ((b_flag8 == 0) && (*(char *)(i_val3 + 0x20) != '\x02')) {
            Entity_Routine_08032198(i_val3,2);
          }
        }
        else if (b_flag8 == 2) {
          if (*(char *)(i_val3 + 0x20) != '\x01') {
            Entity_Routine_08032198(i_val3,1);
          }
        }
        else if ((b_flag8 == 3) && (*(char *)(i_val3 + 0x20) != '\0')) {
          Entity_Routine_08032198(i_val3,0);
        }
        u_val7 = math_udivsi3((uint)u_val14 * 0x10000 - entity[2],0x18);
        entity[0x2e] = u_val7;
        u_val7 = math_udivsi3((uint)u_val11 * 0x10000 - entity[3],0x18);
        entity[0x2f] = u_val7;
        entity[6] = entity[0x2e];
        entity[7] = entity[0x2f];
        stack_val_34 = 1;
        p_uint5 = (undefined *)0x22;
code_r0x0802e480:
        *(char *)puStack_28 = (char)p_uint5;
      }
    }
    else {
      stack_val_38 = 9;
    }
    break;
  default:
    i_val3 = _call_via_r2((int *)*entity,i_val3,*(undefined4 *)(*(int *)*entity + 300));
    if (i_val3 != 0) {
      stack_val_38 = _call_via_r1(i_val3,*(undefined4 *)(*(int *)(i_val3 + 0x14) + 0x34));
      stack_val_38 = stack_val_38 & 0xffff;
    }
    break;
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
    c_char2 = HeldItem_IsEmpty(entity[0xe] + 0x54);
    if (c_char2 != '\0') {
      p_int9 = (int *)*entity;
      i_val4 = _call_via_r2(p_int9,i_val3,*(undefined4 *)(*p_int9 + 0x40));
      if (i_val4 != 0) {
        _call_via_r2(i_val4,0x3c,*(undefined4 *)(*(int *)(i_val4 + 0x14) + 0x88));
      }
      _call_via_r2(p_int9,i_val3,*(undefined4 *)(*p_int9 + 0x3c));
      Entity_Routine_08025EFC(entity,i_val3 - 0x2eU & 0xff);
      return;
    }
    break;
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
    *(char *)((int)entity + 0xb1) = (char)i_val3 + -0x36;
    i_val3 = Food_GetStaminaGain(entity[0xd] + 0x5f0);
    stack_val_38 = 0xd;
    if (i_val3 != 0) {
      stack_val_38 = 8;
    }
    break;
  case 0x4a:
    c_char2 = HeldItem_IsEmpty(entity[0xe] + 0x54);
    if (c_char2 != '\0') {
      _call_via_r2((int *)*entity,i_val3,*(undefined4 *)(*(int *)*entity + 0x3c));
      Entity_Routine_08025FC4(entity);
      return;
    }
    stack_val_47 = Entity_Routine_080262C4(entity);
    i_val3 = Item_Routine_0800E198(&stack_val_47);
    if (i_val3 != 0) {
      i_val3 = _call_via_r2((int *)*entity,0x4a,*(undefined4 *)(*(int *)*entity + 0x40));
      i_val4 = Farmer_Routine_0800FFD0(*(undefined4 *)(i_val3 + 0x18));
      if (i_val4 != 0x1e) {
        Entity_Routine_08037EB4(i_val3,&stack_val_47);
        *(undefined1 *)puStack_28 = 0xe;
        stack_val_34 = 1;
        p_int9 = (int *)_call_via_r1((int *)*entity,*(undefined4 *)(*(int *)*entity + 0x14c));
        end_ptr = (undefined4 *)p_int9[1];
        for (curr_ptr = (undefined4 *)*p_int9; curr_ptr != end_ptr; curr_ptr = curr_ptr + 1) {
          c_char2 = HW_Routine_08008CD0(*curr_ptr);
          if (c_char2 == '\0') goto LAB_0802e57e;
        }
LAB_0802e5f6:
        u_val7 = end_ptr[-1];
        goto LAB_0802e5fa;
      }
      stack_val_38 = 0x3cd;
    }
    break;
  case 0x4b:
    c_char2 = HeldItem_IsEmpty(entity[0xe] + 0x54);
    if (c_char2 != '\0') {
      _call_via_r2((int *)*entity,0x4b,*(undefined4 *)(*(int *)*entity + 0x40));
      c_char2 = Entity_Routine_08038108();
      if (c_char2 == '\0') {
        _call_via_r2((int *)*entity,i_val3,*(undefined4 *)(*(int *)*entity + 0x3c));
        Item_SetQuality(stack_buf_46,0x35);
        Farmer_Routine_0800F040(&stack_val_9c,stack_buf_46[0]);
        goto LAB_0802e786;
      }
    }
    break;
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
    c_char2 = HeldItem_IsEmpty(entity[0xe] + 0x54);
    if (c_char2 != '\0') {
      i_val4 = Building_Routine_0800C6A0(entity[0xd] + 0x410,i_val3 + -0x4c);
      if (i_val4 != 0) {
        u_val15 = *(byte *)(i_val4 + 6) & 7;
        u_val7 = 0xf;
        if (u_val15 < 6) {
          p_uint5 = (&case_0802E6C4)[u_val15];
          switch((uint)p_uint5 & 0xfffffffe) {
          case 0x802e6c4:
            goto code_r0x0802e480;
          case 0x802e6dc:
            u_val7 = 0xf;
            break;
          case 0x802e6e0:
            u_val7 = 0x10;
            break;
          case 0x802e6e6:
            u_val7 = 0x11;
            break;
          case 0x802e6ec:
            u_val7 = 0x12;
            break;
          case 0x802e6f2:
            u_val7 = 0x13;
            break;
          case 0x802e6f8:
            u_val7 = 0x14;
          }
        }
        _call_via_r2((int *)*entity,i_val3,*(undefined4 *)(*(int *)*entity + 0x3c));
        Building_Routine_0800C9B8(entity[0xd] + 0x410,i_val3 + -0x4c);
        Item_SetIdAndClearQuality(&stack_val_98,u_val7);
        Farmer_Routine_0800F004(&stack_val_9c,stack_val_98 & 0xffffff);
LAB_0802e786:
        Entity_Routine_08026150(entity,&stack_val_9c,0);
        return;
      }
    }
    break;
  case 100:
    break;
  }
case_0802E7BA:
  if (stack_val_34 != 0) {
    return;
  }
  if (stack_val_38 != 0) goto LAB_0802e906;
  gba_memcpy(&stack_val_9c,puStack_3c,6);
  b_flag8 = *pbStack_2c;
  if (b_flag8 == 1) {
    u_val15 = ((stack_val_98 & 0xffff & 0x3FF) << 6 | (uint)(stack_val_9c._3_1_ >> 2)) * 0x10000 +
             0xFFF00000;
    stack_val_9c = CONCAT13(stack_val_9c._3_1_ & 3 | (byte)((u_val15 >> 0x10 & 0x3f) << 2),
                         (undefined3)stack_val_9c);
    stack_val_98 = CONCAT22(stack_val_98._2_2_,
                         (ushort)0xFFFFFC00 & (ushort)stack_val_98 |
                         (ushort)(u_val15 >> 0x16) & (ushort)0x3FF);
  }
  else if (b_flag8 < 2) {
    if (b_flag8 == 0) {
      u_val15 = ((stack_val_98 & 0xffff & 0x3FF) << 6 | (uint)(stack_val_9c._3_1_ >> 2)) * 0x10000
               + 0x100000;
      stack_val_9c = CONCAT13(stack_val_9c._3_1_ & 3 | (byte)((u_val15 >> 0x10 & 0x3f) << 2),
                           (undefined3)stack_val_9c);
      stack_val_98 = CONCAT22(stack_val_98._2_2_,
                           (ushort)0xFFFFFC00 & (ushort)stack_val_98 |
                           (ushort)(u_val15 >> 0x16) & (ushort)0x3FF);
    }
  }
  else {
    if (b_flag8 == 2) {
      u_val15 = ((int)(stack_val_9c << 6) >> 0x10) - 0x10;
    }
    else {
      if (b_flag8 != 3) goto LAB_0802e89a;
      u_val15 = ((int)(stack_val_9c << 6) >> 0x10) + 0x10;
    }
    stack_val_9c = 0xFC0003FF & stack_val_9c | (u_val15 & 0xffff) << 10;
  }
LAB_0802e89a:
  _call_via_r3(&stack_val_90,(int *)*entity,*(undefined2 *)(entity + 1),
                  *(undefined4 *)(*(int *)*entity + 0x34));
  u_val15 = (int)(stack_val_9c << 6) >> 0x13;
  u_val10 = (int)(((stack_val_98 & 0xffff & 0x3FF) << 6 | stack_val_9c >> 0x1a) << 0x10) >> 0x13;
  if (((stack_val_90 == 0) || (stack_val_88 < u_val15)) || (stack_val_86 < u_val10)) {
    p_uint6 = (uint *)0x0;
  }
  else {
    u_val15 = u_val10 * stack_val_88 + u_val15;
    if (stack_val_8c != 0) {
      u_val15 = (uint)*(byte *)(stack_val_8c + u_val15);
    }
    p_uint6 = (uint *)(stack_val_90 + u_val15 * 4);
  }
  if (p_uint6 != (uint *)0x0) {
    stack_val_38 = *p_uint6 >> 0x11;
  }
  if (stack_val_38 != 0) {
LAB_0802e906:
    stack_buf_44[0] = stack_val_38;
    stack_buf_44[1] = 0;
    _call_via_r3((int *)*entity,stack_buf_44,0,*(undefined4 *)(*(int *)*entity + 0x140));
    *(undefined1 *)puStack_28 = 0;
    return;
  }
  c_char2 = HeldItem_IsEmpty(entity[0xe] + 0x54);
  if (c_char2 != '\0') {
    u_val10 = (uint)*(short *)((int)entity + 10);
    u_val15 = (uint)*(short *)((int)entity + 0xe);
    b_flag8 = *pbStack_2c;
    if (b_flag8 == 1) {
      u_val15 = u_val15 - 0x10;
    }
    else if (b_flag8 < 2) {
      if (b_flag8 == 0) {
        u_val15 = u_val15 + 0x10;
      }
    }
    else if (b_flag8 == 2) {
      u_val10 = u_val10 - 0x10;
    }
    else if (b_flag8 == 3) {
      u_val10 = u_val10 + 0x10;
    }
    Farmer_Routine_0800EFEC(&stack_val_9c);
    puStack_30 = (undefined4 *)(*(int *)*entity + 0xe0);
    u_val1 = (ushort)0x3FF;
    u_val11 = (ushort)0xFFFFFC00;
    u_val14 = u_val11 & (ushort)stack_val_98 | *(ushort *)(entity + 1) & u_val1;
    stack_val_24 = (u_val10 & 0x3f) << 2;
    stack_val_98._1_1_ = (byte)(u_val14 >> 8);
    stack_val_98._0_2_ = CONCAT11(stack_val_98._1_1_ & 3 | (byte)stack_val_24,(char)u_val14);
    u_val14 = u_val11 & stack_val_98._2_2_ | (ushort)((u_val10 & 0xffff) >> 6) & u_val1;
    stack_val_98 = CONCAT22(u_val14,(ushort)stack_val_98);
    u_val7 = stack_val_98;
    stack_val_98._3_1_ = (byte)(u_val14 >> 8);
    stack_val_98 = CONCAT13(stack_val_98._3_1_ & 3 | (byte)((u_val15 & 0x3f) << 2),(int3)u_val7);
    stack_val_94 = u_val11 & stack_val_94 | (ushort)((u_val15 & 0xffff) >> 6) & u_val1;
    _call_via_r3((int *)*entity,&stack_val_98,&stack_val_9c,*puStack_30);
    c_char2 = Farmer_Routine_0800F06C(&stack_val_9c);
    if (c_char2 != '\0') {
      return;
    }
    Entity_Routine_08026150(entity,&stack_val_9c,0);
    return;
  }
  i_val3 = Entity_Routine_0802A7E0(entity);
  if (i_val3 == 1) {
    *(undefined1 *)puStack_28 = 0xd;
    u_val7 = 0xFFF60000;
    b_flag8 = *pbStack_2c;
    if (b_flag8 == 1) {
      entity[0x23] = 0;
LAB_0802ea52:
      entity[0x24] = u_val7;
LAB_0802ea54:
      entity[0x27] = 0xc0000;
    }
    else {
      if (1 < b_flag8) {
        if (b_flag8 == 2) {
          entity[0x23] = 0xFFF60000;
          entity[0x24] = 0;
        }
        else {
          if (b_flag8 != 3) goto LAB_0802ea56;
          entity[0x23] = 0xa0000;
          entity[0x24] = 0;
        }
        goto LAB_0802ea54;
      }
      if (b_flag8 == 0) {
        u_val7 = 0xa0000;
        entity[0x23] = 0;
        goto LAB_0802ea52;
      }
    }
LAB_0802ea56:
    p_int9 = (int *)_call_via_r1((int *)*entity,*(undefined4 *)(*(int *)*entity + 0x14c));
    end_ptr = (undefined4 *)p_int9[1];
    for (curr_ptr = (undefined4 *)*p_int9; curr_ptr != end_ptr; curr_ptr = curr_ptr + 1) {
      c_char2 = HW_Routine_08008CD0(*curr_ptr);
      if (c_char2 == '\0') goto LAB_0802ea82;
    }
  }
  else if (i_val3 < 2) {
    if (i_val3 != 0) {
      return;
    }
    *(undefined1 *)puStack_28 = 0xb;
    entity[0x23] = 0;
    entity[0x24] = 0;
    entity[0x27] = 0x150000;
    b_flag8 = *pbStack_2c;
    u_val7 = 0xFFFE5556;
    if (b_flag8 == 1) {
LAB_0802e9ae:
      entity[0x25] = 0;
      entity[0x26] = u_val7;
LAB_0802e9b2:
      entity[0x28] = 0;
    }
    else {
      if (1 < b_flag8) {
        if (b_flag8 == 2) {
          entity[0x25] = 0xFFFE5556;
          entity[0x26] = 0;
        }
        else {
          if (b_flag8 != 3) goto LAB_0802e9b4;
          entity[0x25] = 0x0001AAAA;
          entity[0x26] = 0;
        }
        goto LAB_0802e9b2;
      }
      u_val7 = 0x0001AAAA;
      if (b_flag8 == 0) goto LAB_0802e9ae;
    }
LAB_0802e9b4:
    p_int9 = (int *)_call_via_r1((int *)*entity,*(undefined4 *)(*(int *)*entity + 0x14c));
    end_ptr = (undefined4 *)p_int9[1];
    for (curr_ptr = (undefined4 *)*p_int9; curr_ptr != end_ptr; curr_ptr = curr_ptr + 1) {
      c_char2 = HW_Routine_08008CD0(*curr_ptr);
      if (c_char2 == '\0') goto LAB_0802ea82;
    }
  }
  else {
    if (i_val3 == 2) {
      return;
    }
    if (i_val3 != 3) {
      return;
    }
    *(undefined1 *)puStack_28 = 0xc;
    Entity_Routine_0802A7D8(entity);
    HeldItem_Clear(entity[0xe] + 0x54);
    i_val3 = entity[0xd] + 0x1CCC;
    Farmer_Routine_0801FE94(&stack_val_9c,entity);
    gba_memcpy(i_val3,&stack_val_9c,6);
    _call_via_r2((int *)*entity,0x4b,*(undefined4 *)(*(int *)*entity + 0x38));
    i_val3 = _call_via_r2((int *)*entity,0x4b,*(undefined4 *)(*(int *)*entity + 0x40));
    if (i_val3 == 0) {
      return;
    }
    Entity_Routine_080380EC(i_val3,*pbStack_2c);
    p_int9 = (int *)_call_via_r1((int *)*entity,*(undefined4 *)(*(int *)*entity + 0x14c));
    end_ptr = (undefined4 *)p_int9[1];
    for (curr_ptr = (undefined4 *)*p_int9; curr_ptr != end_ptr; curr_ptr = curr_ptr + 1) {
      c_char2 = HW_Routine_08008CD0(*curr_ptr);
      if (c_char2 == '\0') goto LAB_0802ea82;
    }
  }
  u_val7 = end_ptr[-1];
LAB_0802eb06:
  HW_Routine_08008B6C(u_val7,0x6c);
  return;
LAB_0802e57e:
  u_val7 = *curr_ptr;
LAB_0802e5fa:
  HW_Routine_08008B6C(u_val7,0x6e);
  goto case_0802E7BA;
LAB_0802ea82:
  u_val7 = *curr_ptr;
  goto LAB_0802eb06;
}

// =============================================================================
// Function: Entity_Routine_0802EC00 @ 0x0802EC00
// =============================================================================
void Entity_Routine_0802EC00(undefined4 *entity,ushort *speed)

{
  char c_char1;
  undefined1 u_val2;
  int i_val3;
  int i_val4;
  byte *pbVar5;
  ushort *p_uint6;
  undefined4 u_val7;
  byte *pbVar8;
  int i_val9;
  uint u_val10;
  uint u_val11;
  undefined4 *curr_ptr;
  byte b_flag13;
  undefined4 *end_ptr;
  int *p_int15;
  byte stack_bytes_34 [4];
  undefined1 temp_buf_30 [8];
  uint stack_val_28;
  uint stack_val_24;
  
  *(undefined1 *)(entity + 0x30) = 0;
  *(undefined1 *)((int)entity + 0x7a) = 0;
  c_char1 = *(char *)((int)entity + 0xc3);
  if (c_char1 != '\0') {
    *(char *)(entity + 0xf) = c_char1;
    *(undefined2 *)((int)entity + 0xa6) = 0;
    *(char *)((int)entity + 0xc3) = '\0';
    _call_via_r1(entity,*(undefined4 *)(entity[5] + 0x6c));
    return;
  }
  c_char1 = Entity_Routine_0802AEA4(entity);
  if (c_char1 != '\0') {
    *(undefined1 *)(entity + 0xf) = 0x35;
    *(undefined2 *)((int)entity + 0xa6) = 0;
    return;
  }
  i_val9 = entity[0xe] + 0x54;
  c_char1 = HeldItem_IsEmpty(i_val9);
  if ((c_char1 != '\0') || (i_val3 = HeldItem_GetKind(i_val9), i_val3 != 5)) goto LAB_0802eda2;
  i_val3 = Farmer_Routine_0800F360(i_val9);
  if (i_val3 != 0x155) {
    if (0x155 < i_val3) {
      if (i_val3 != 0x18c) {
        if (i_val3 < 0x18d) {
          if (i_val3 != 0x167) {
            if (i_val3 < 0x168) {
              if (i_val3 == 0x15f) {
                p_int15 = (int *)_call_via_r1((int *)*entity,
                                                 *(undefined4 *)(*(int *)*entity + 0x14c));
                curr_ptr = (undefined4 *)*p_int15;
                end_ptr = (undefined4 *)p_int15[1];
                do {
                  if (curr_ptr == end_ptr) {
                    u_val7 = end_ptr[-1];
LAB_0802ed44:
                    HW_Routine_08008B6C(u_val7,0xb6);
                    HeldItem_Clear(entity[0xe] + 0x54);
                    entity[0x23] = 0xFFF80000;
                    entity[0x24] = 0;
                    entity[0x27] = 0x110000;
                    *(undefined1 *)(entity + 0xf) = 0x2f;
                    *(undefined2 *)((int)entity + 0xa6) = 0;
                    *(undefined1 *)((int)entity + 0x3d) = 0x78;
                    return;
                  }
                  c_char1 = HW_Routine_08008CD0(*curr_ptr);
                  if (c_char1 == '\0') {
                    u_val7 = *curr_ptr;
                    goto LAB_0802ed44;
                  }
                  curr_ptr = curr_ptr + 1;
                } while( true );
              }
              goto LAB_0802eda2;
            }
            i_val4 = 0x180;
LAB_0802ecea:
            if (i_val3 != i_val4) goto LAB_0802eda2;
            goto LAB_0802ed78;
          }
        }
        else {
          if (i_val3 == 0x1a6) goto LAB_0802ed78;
          i_val4 = 0x1CD;
          if (i_val3 < 0x1a7) {
            i_val4 = 0x191;
            goto LAB_0802ecea;
          }
LAB_0802ecf2:
          if (i_val3 != i_val4) goto LAB_0802eda2;
        }
LAB_0802ed82:
        u_val2 = 0x39;
        goto LAB_0802ed8a;
      }
    }
    else if (i_val3 != 0x6b) {
      if (i_val3 < 0x6c) {
        if ((i_val3 != 0xb) && (i_val3 != 0x62)) {
LAB_0802eda2:
          pbVar5 = (byte *)((int)entity + 0x3e);
          if ((*pbVar5 == 0) && (c_char1 = HeldItem_IsEmpty(i_val9), c_char1 != '\0')) {
            p_uint6 = (ushort *)((int)entity + 0xa6);
            if (600 < *p_uint6) {
              *(undefined1 *)(entity + 0xf) = 0x17;
              *p_uint6 = 0;
              return;
            }
            *p_uint6 = *p_uint6 + 1;
          }
          else {
            *(undefined2 *)((int)entity + 0xa6) = 0;
          }
          p_uint6 = (ushort *)((int)entity + 0xa6);
          if (*pbVar5 == 0) {
            *(undefined1 *)(entity + 0x31) = 0;
          }
          else if (*pbVar5 < 3) {
            *(char *)(entity + 0x31) = *(char *)(entity + 0x31) + '\x01';
          }
          stack_val_24 = 0;
          stack_val_28 = 0;
          if (speed != (ushort *)0x0) {
            stack_val_24 = (uint)*speed;
            stack_val_28 = (uint)speed[2];
          }
          *pbVar5 = 0;
          if ((stack_val_28 & 1) != 0) {
            *(undefined1 *)(entity + 0xf) = 1;
            *p_uint6 = 0;
            goto LAB_0802efa2;
          }
          if ((stack_val_28 & 2) != 0) {
            *(undefined1 *)(entity + 0xf) = 2;
            *p_uint6 = (ushort)stack_val_28 & 1;
            c_char1 = HeldItem_IsEmpty(entity[0xe] + 0x54);
            if (c_char1 != '\0') {
              Entity_Routine_0802C984(entity);
            }
            goto LAB_0802efa2;
          }
          if ((stack_val_28 & 0x200) != 0) {
            *(undefined1 *)(entity + 0xf) = 3;
            *p_uint6 = (ushort)stack_val_28 & 2;
            goto LAB_0802efa2;
          }
          if ((stack_val_24 & 0x1ff) >> 8 == 0 &&
              ((stack_val_24 & 0x1f) >> 4 == 0 &&
              ((stack_val_24 & 0x3f) >> 5 == 0 &&
              ((stack_val_24 & 0x7f) >> 6 == 0 && (stack_val_24 & 0xff) >> 7 == 0)))) goto LAB_0802efa2;
          pbVar8 = (byte *)(entity + 8);
          if ((stack_val_24 & 0x20) == 0) {
            if ((stack_val_24 & 0x10) == 0) {
              if ((stack_val_24 & 0x40) == 0) {
                b_flag13 = *pbVar8;
                if ((stack_val_24 & 0x80) != 0) {
                  b_flag13 = 0;
                }
              }
              else {
                b_flag13 = 1;
              }
            }
            else {
              b_flag13 = 3;
            }
          }
          else {
            b_flag13 = 2;
          }
          if (b_flag13 != *pbVar8) {
            *(undefined1 *)((int)entity + 0xb3) = 0;
            u_val10 = 0x2b;
            do {
              i_val9 = _call_via_r2((int *)*entity,u_val10,
                                      *(undefined4 *)(*(int *)*entity + 0x40));
              if (i_val9 != 0) {
                _call_via_r1(i_val9,*(undefined4 *)(*(int *)(i_val9 + 0x14) + 0x40));
              }
              u_val10 = u_val10 + 1;
            } while (u_val10 < 0x46);
          }
          if (*pbVar8 != b_flag13) {
            Entity_Routine_08032198(entity,b_flag13);
          }
          b_flag13 = *pbVar8;
          if (b_flag13 == 1) {
            u_val10 = 0;
            u_val11 = 0xff;
          }
          else if (b_flag13 < 2) {
            if (b_flag13 == 0) {
              u_val10 = 0;
              u_val11 = 1;
            }
            else {
LAB_0802ef36:
              u_val10 = 0xff;
              u_val11 = 0;
            }
          }
          else {
            if ((b_flag13 == 2) || (b_flag13 != 3)) goto LAB_0802ef36;
            u_val10 = 1;
            u_val11 = 0;
          }
          if ((*(byte *)(entity[0xd] + 0x2210) & 1) == 0) {
            if ((stack_val_24 & 0x100) != 0) goto LAB_0802ef7e;
LAB_0802ef92:
            *pbVar5 = 1;
          }
          else {
            if ((stack_val_24 & 0x100) != 0) goto LAB_0802ef92;
LAB_0802ef7e:
            *pbVar5 = 2;
            u_val10 = (u_val10 & 0x7f) << 1;
            u_val11 = (u_val11 & 0x7f) << 1;
          }
          entity[6] = (int)(u_val10 << 0x18) >> 8;
          entity[7] = (int)(u_val11 << 0x18) >> 8;
LAB_0802efa2:
          gba_memcpy(stack_bytes_34,gRomData_080F117F,3);
          if ((stack_bytes_34[*pbVar5] != 0) && (stack_bytes_34[*pbVar5] <= *(byte *)(entity + 0x31))) {
            *(byte *)(entity + 0x31) = 0;
            p_int15 = (int *)*entity;
            i_val9 = *p_int15;
            Farmer_Routine_0801FE94(temp_buf_30,entity);
            c_char1 = _call_via_r2(p_int15,temp_buf_30,*(undefined4 *)(i_val9 + 0x120));
            if (c_char1 == '\0') {
              p_int15 = (int *)_call_via_r1((int *)*entity,
                                               *(undefined4 *)(*(int *)*entity + 0x14c));
              end_ptr = (undefined4 *)p_int15[1];
              for (curr_ptr = (undefined4 *)*p_int15; curr_ptr != end_ptr; curr_ptr = curr_ptr + 1) {
                c_char1 = HW_Routine_08008CD0(*curr_ptr);
                if (c_char1 == '\0') {
                  u_val7 = *curr_ptr;
                  goto LAB_0802f0a8;
                }
              }
              u_val7 = end_ptr[-1];
LAB_0802f0a8:
              HW_Routine_08008B6C(u_val7,0xd0);
            }
            else {
              if (entity[4] != 0) {
                Entity_Routine_0802B46C();
              }
              i_val9 = Farmer_GetFacingDirection(entity[0xd] + 0x10);
              if (i_val9 == 3) {
                p_int15 = (int *)_call_via_r1((int *)*entity,
                                                 *(undefined4 *)(*(int *)*entity + 0x14c));
                end_ptr = (undefined4 *)p_int15[1];
                for (curr_ptr = (undefined4 *)*p_int15; curr_ptr != end_ptr; curr_ptr = curr_ptr + 1) {
                  c_char1 = HW_Routine_08008CD0(*curr_ptr);
                  if (c_char1 == '\0') {
                    u_val7 = *curr_ptr;
                    goto LAB_0802f06e;
                  }
                }
                u_val7 = end_ptr[-1];
LAB_0802f06e:
                HW_Routine_08008B6C(u_val7,0xd1);
              }
              else {
                p_int15 = (int *)_call_via_r1((int *)*entity,
                                                 *(undefined4 *)(*(int *)*entity + 0x14c));
                end_ptr = (undefined4 *)p_int15[1];
                for (curr_ptr = (undefined4 *)*p_int15; curr_ptr != end_ptr; curr_ptr = curr_ptr + 1) {
                  c_char1 = HW_Routine_08008CD0(*curr_ptr);
                  if (c_char1 == '\0') {
                    u_val7 = *curr_ptr;
                    goto LAB_0802f02e;
                  }
                }
                u_val7 = end_ptr[-1];
LAB_0802f02e:
                HW_Routine_08008B6C(u_val7,0xd0);
              }
            }
          }
          if (*(short *)(entity + 9) != 0) {
            return;
          }
          if (*pbVar5 == 1) {
            Entity_Routine_0802AD80(entity);
            return;
          }
          if (*pbVar5 != 2) {
            return;
          }
          Entity_Routine_0802AD80(entity);
          Entity_Routine_0802AD80(entity);
          return;
        }
      }
      else if (i_val3 != 0xf7) {
        if (0xf7 < i_val3) {
          i_val4 = 0x122;
          goto LAB_0802ecf2;
        }
        if (i_val3 == 0xd6) goto LAB_0802ed82;
        goto LAB_0802eda2;
      }
    }
  }
LAB_0802ed78:
  u_val2 = 0x38;
LAB_0802ed8a:
  *(undefined1 *)(entity + 0xf) = u_val2;
  *(undefined2 *)((int)entity + 0xa6) = 0;
  *(undefined1 *)((int)entity + 0x3d) = 0x1e;
  HeldItem_Clear(entity[0xe] + 0x54);
  return;
}

// =============================================================================
// Function: Entity_Routine_08031F30 @ 0x08031F30
// =============================================================================
void Entity_Routine_08031F30(undefined4 *entity,undefined4 speed)

{
  undefined4 u_val1;
  
  u_val1 = _call_via_r1(*(int **)*entity,*(undefined4 *)(**(int **)*entity + 0x68));
  Animal_Routine_0805E850(entity + 0x2d,u_val1,speed);
  *(undefined1 *)(entity + 0x32) = 1;
  *(undefined1 *)((int)entity + 0xca) = 0;
  *(undefined1 *)((int)entity + 0xcb) = 1;
  return;
}

// =============================================================================
// Function: Entity_Routine_08031F68 @ 0x08031F68
// =============================================================================
void Entity_Routine_08031F68(undefined4 *entity,undefined4 speed)

{
  undefined4 u_val1;
  
  u_val1 = _call_via_r1(*(int **)*entity,*(undefined4 *)(**(int **)*entity + 100));
  Animal_Routine_0805E850(entity + 0x2d,u_val1,speed);
  *(undefined1 *)(entity + 0x32) = 1;
  *(undefined1 *)((int)entity + 0xca) = 0;
  *(undefined1 *)((int)entity + 0xcb) = 1;
  return;
}

// =============================================================================
// Function: Entity_Routine_08031FA0 @ 0x08031FA0
// =============================================================================
u32 Entity_Routine_08031FA0(undefined4 *entity)

{
  undefined4 u_val1;
  
  if (*(byte *)((int)entity + 0xb2) - 0x2b < 0x1b) {
    u_val1 = _call_via_r2((int *)*entity,(uint)*(byte *)((int)entity + 0xb2),
                            *(undefined4 *)(*(int *)*entity + 0x40));
  }
  else {
    u_val1 = 0;
  }
  return u_val1;
}

// =============================================================================
// Function: Entity_Routine_08031FCC @ 0x08031FCC
// =============================================================================
u32 Entity_Routine_08031FCC(undefined4 entity,int speed)

{
  
  return (uint)(speed - 0x2bU < 0x1b);
}

// =============================================================================
// Function: Entity_Routine_08031FDC @ 0x08031FDC
// =============================================================================
void Entity_Routine_08031FDC(undefined4 entity,int *speed,int collision)

{
  int i_val1;
  
  if (collision == 1) {
    i_val1 = *speed;
    *speed = -speed[1];
    speed[1] = -i_val1;
  }
  else if (collision < 2) {
    if (collision == 0) {
      i_val1 = *speed;
      *speed = speed[1];
      speed[1] = i_val1;
    }
  }
  else if (collision == 2) {
    *speed = -*speed;
  }
  return;
}

// =============================================================================
// Function: Entity_Routine_0803205C @ 0x0803205C
// =============================================================================
u32 Entity_Routine_0803205C(int entity)

{
  undefined4 u_val1;
  
  u_val1 = 0;
  if ((*(char *)(entity + 0x3c) == '\a') || (*(char *)(entity + 0x3c) == '-')) {
    u_val1 = 1;
  }
  return u_val1;
}

// =============================================================================
// Function: Entity_Routine_08032090 @ 0x08032090
// =============================================================================
u32 Entity_Routine_08032090(int *entity,undefined4 speed)

{
  uint u_val1;
  uint loop_i;
  int i_val3;
  int stack_val_18;
  uint stack_val_14;
  
  _call_via_r3(&stack_val_18,entity,speed,*(undefined4 *)(*entity + 0xc));
  i_val3 = 0;
  loop_i = 0;
  u_val1 = 0;
  if (stack_val_18 != 0) {
    u_val1 = stack_val_14 & 0xffff;
  }
  if (u_val1 != 0) {
    do {
      i_val3 = i_val3 + (uint)*(ushort *)(stack_val_18 + 2);
      stack_val_18 = stack_val_18 + 4;
      loop_i = loop_i + 1;
    } while (loop_i < u_val1);
  }
  return i_val3;
}

// =============================================================================
// Function: Entity_UpdatePositions @ 0x080320DC
// =============================================================================
undefined8
Entity_UpdatePositions(int entity,undefined4 speed,int collision,undefined1 flags,undefined4 arg_5)

{
  
  Farmer_Routine_0801FD78();
  *(undefined4 *)(entity + 0x14) = gRomData_080E6878;
  *(undefined4 *)(entity + 0x18) = 0;
  *(undefined4 *)(entity + 0x1c) = 0;
  *(undefined1 *)(entity + 0x20) = *(undefined1 *)(collision + 6);
  *(undefined1 *)(entity + 0x21) = flags;
  Entity_Routine_08032300(entity + 0x28);
  Entity_Routine_080321B0(entity,arg_5);
  return entity;
}

// =============================================================================
// Function: Entity_Routine_0803211C @ 0x0803211C
// =============================================================================
void Entity_Routine_0803211C(int entity,ushort *speed)

{
  
  Farmer_Routine_0801FE78(entity,*speed & 0x3ff,
                (int)(short)((ushort)((speed[1] & 0x3FF) << 6) |
                            (ushort)(*(byte *)((int)speed + 1) >> 2)),
                (int)(short)((ushort)((speed[2] & 0x3FF) << 6) |
                            (ushort)(*(byte *)((int)speed + 3) >> 2)));
  if (*(char *)(entity + 0x20) != (char)speed[3]) {
    Entity_Routine_08032198(entity);
  }
  *(undefined4 *)(entity + 0x28) = 0;
  return;
}

// =============================================================================
// Function: Entity_Routine_08032170 @ 0x08032170
// =============================================================================
u32 Entity_Routine_08032170(int entity,int speed)

{
  undefined1 u_val1;
  undefined1 facing_buffer [8];
  
  Farmer_Routine_0801FE94(facing_buffer);
  u_val1 = *(undefined1 *)(speed + 0x20);
  gba_memcpy(entity,facing_buffer,6);
  *(undefined1 *)(entity + 6) = u_val1;
  return entity;
}

// =============================================================================
// Function: Entity_Routine_08032198 @ 0x08032198
// =============================================================================
void Entity_Routine_08032198(int entity,byte speed)

{
  
  *(byte *)(entity + 0x20) = speed;
  Entity_Routine_080321C8(entity,(uint)*(ushort *)(entity + 0x22) + (uint)*(byte *)(entity + 0x20));
  return;
}

// =============================================================================
// Function: Entity_Routine_080321B0 @ 0x080321B0
// =============================================================================
void Entity_Routine_080321B0(int entity,undefined2 speed)

{
  
  *(undefined2 *)(entity + 0x22) = speed;
  Entity_Routine_080321C8(entity,(uint)*(ushort *)(entity + 0x22) + (uint)*(byte *)(entity + 0x20));
  return;
}

// =============================================================================
// Function: Entity_Routine_080321C8 @ 0x080321C8
// =============================================================================
void Entity_Routine_080321C8(undefined4 *entity,undefined4 speed)

{
  undefined2 u_val1;
  undefined4 u_val2;
  int i_val3;
  
  i_val3 = entity[4];
  if (i_val3 != 0) {
    Animal_Routine_0805E860(i_val3 + 0x30);
    *(undefined1 *)(i_val3 + 0x44) = 1;
    *(undefined1 *)(i_val3 + 0x46) = 0;
    *(undefined1 *)(i_val3 + 0x47) = 1;
  }
  u_val2 = _call_via_r1((int *)*entity,*(undefined4 *)(*(int *)*entity + 0x68));
  u_val1 = Entity_Routine_08032090(u_val2,speed);
  *(undefined2 *)(entity + 9) = u_val1;
  *(undefined2 *)((int)entity + 0x26) = u_val1;
  return;
}

// =============================================================================
// Function: Entity_Routine_08032208 @ 0x08032208
// =============================================================================
void Entity_Routine_08032208(undefined4 *entity)

{
  undefined2 u_val1;
  short s_val2;
  char c_char3;
  int i_val4;
  int i_val5;
  int i_val6;
  int i_val7;
  int *p_int8;
  int i_val9;
  undefined1 temp_buf_48 [12];
  undefined4 stack_val_3c;
  undefined4 stack_val_38;
  undefined4 stack_val_34;
  undefined4 stack_val_30;
  short stack_val_2c;
  short stack_val_2a;
  short stack_val_28;
  short stack_val_26;
  int stack_val_24;
  
  if ((entity[6] == 0) && (entity[7] == 0)) {
    return;
  }
  p_int8 = (int *)*entity;
  u_val1 = *(undefined2 *)(entity + 1);
  i_val7 = entity[2];
  i_val6 = entity[3];
  i_val5 = entity[6] + i_val7;
  i_val9 = i_val6 + entity[7];
  if (i_val5 < 0) {
    i_val4 = 0;
  }
  else {
    i_val4 = _call_via_r2(p_int8,u_val1,*(undefined4 *)(*p_int8 + 0x2c));
    i_val4 = i_val4 * 0x10000;
    if (i_val5 <= i_val4) goto LAB_08032252;
  }
  i_val5 = i_val4;
LAB_08032252:
  if (i_val9 < 0) {
    i_val9 = 0;
  }
  else {
    i_val4 = _call_via_r2(p_int8,u_val1,*(undefined4 *)(*p_int8 + 0x30));
    if (i_val4 * 0x10000 < i_val9) {
      i_val9 = i_val4 * 0x10000;
    }
  }
  stack_val_24 = (i_val5 >> 0x10) - (i_val7 >> 0x10);
  s_val2 = (short)((uint)i_val9 >> 0x10) - (short)((uint)i_val6 >> 0x10);
  _call_via_r2(&stack_val_3c,entity,*(undefined4 *)(entity[5] + 0xc));
  stack_val_34 = stack_val_3c;
  stack_val_30 = stack_val_38;
  _call_via_r3(temp_buf_48,p_int8,u_val1,*(undefined4 *)(*p_int8 + 0x34));
  c_char3 = NPC_Routine_080AC070(temp_buf_48,&stack_val_34);
  if (c_char3 == '\0') {
    stack_val_2c = (short)stack_val_24 + (short)stack_val_34;
    stack_val_2a = stack_val_34._2_2_ + s_val2;
    stack_val_28 = (short)stack_val_24 + (short)stack_val_30;
    stack_val_26 = stack_val_30._2_2_ + s_val2;
    c_char3 = NPC_Routine_080AC070(temp_buf_48);
    if (c_char3 == '\x01') {
      return;
    }
  }
  entity[2] = i_val5;
  entity[3] = i_val9;
  return;
}

// =============================================================================
// Function: Entity_Routine_08032308 @ 0x08032308
// =============================================================================
void Entity_Routine_08032308(int entity,int speed,int collision)

{
  
  *(int *)(entity + 8) = (int)*(short *)(entity + 10) << 0x10;
  if ((collision == 0) || (speed == *(short *)(entity + 10))) {
    *(undefined4 *)(entity + 0x28) = 0;
  }
  else {
    if (collision < 0) {
      collision = -collision;
    }
    *(int *)(entity + 0x28) = collision;
    *(short *)(entity + 0x2c) = (short)speed;
    *(undefined1 *)(entity + 0x2e) = 0;
  }
  return;
}

// =============================================================================
// Function: Entity_Routine_0803233C @ 0x0803233C
// =============================================================================
void Entity_Routine_0803233C(int entity,int speed,int collision)

{
  
  *(int *)(entity + 0xc) = (int)*(short *)(entity + 0xe) << 0x10;
  if ((collision == 0) || (speed == *(short *)(entity + 0xe))) {
    *(undefined4 *)(entity + 0x28) = 0;
  }
  else {
    if (collision < 0) {
      collision = -collision;
    }
    *(int *)(entity + 0x28) = collision;
    *(short *)(entity + 0x2c) = (short)speed;
    *(undefined1 *)(entity + 0x2e) = 1;
  }
  return;
}

// =============================================================================
// Function: Entity_Routine_08032370 @ 0x08032370
// =============================================================================
u32 Entity_Routine_08032370(int entity)

{
  
  return (uint)(*(int *)(entity + 0x28) == 0);
}

// =============================================================================
// Function: Entity_Routine_08032384 @ 0x08032384
// =============================================================================
void Entity_Routine_08032384(int entity,undefined4 speed,char collision)

{
  byte b_flag1;
  int i_val2;
  
  i_val2 = *(int *)(entity + 0x10);
  if (i_val2 != 0) {
    Animal_Routine_0805E860(i_val2 + 0x70);
    *(undefined1 *)(i_val2 + 0x84) = 1;
    *(undefined1 *)(i_val2 + 0x86) = 0;
    *(undefined1 *)(i_val2 + 0x87) = 1;
    b_flag1 = 1;
    if (collision != '\0') {
      b_flag1 = 2;
    }
    *(byte *)(i_val2 + 0x8a) = *(byte *)(i_val2 + 0x8a) & 0xfc | b_flag1;
  }
  return;
}

// =============================================================================
// Function: Entity_Routine_080323C8 @ 0x080323C8
// =============================================================================
void Entity_Routine_080323C8(int entity)

{
  byte *pbVar1;
  
  if (*(int *)(entity + 0x10) != 0) {
    pbVar1 = (byte *)(*(int *)(entity + 0x10) + 0x8a);
    *pbVar1 = *pbVar1 & 0xfc;
  }
  return;
}

// =============================================================================
// Function: Entity_Routine_080323E0 @ 0x080323E0
// =============================================================================
void Entity_Routine_080323E0(int entity,undefined1 speed)

{
  
  if (*(int *)(entity + 0x10) != 0) {
    *(undefined1 *)(*(int *)(entity + 0x10) + 0x88) = speed;
  }
  return;
}

// =============================================================================
// Function: Entity_Routine_080323F0 @ 0x080323F0
// =============================================================================
void Entity_Routine_080323F0(int entity,char speed)

{
  byte *pbVar1;
  
  if (*(int *)(entity + 0x10) != 0) {
    pbVar1 = (byte *)(*(int *)(entity + 0x10) + 0x8a);
    *pbVar1 = *pbVar1 & 3 | speed << 2;
  }
  return;
}

// =============================================================================
// Function: Entity_Routine_0803240C @ 0x0803240C
// =============================================================================
void Entity_Routine_0803240C(short *entity,int speed)

{
  short s_val1;
  short s_val2;
  
  s_val1 = *(short *)(speed + 10);
  s_val2 = *(short *)(speed + 0xe);
  *entity = s_val1 + -7;
  entity[1] = s_val2 + -4;
  entity[2] = s_val1 + 7;
  entity[3] = s_val2 + 5;
  return;
}

// =============================================================================
// Function: Entity_Routine_0803242C @ 0x0803242C
// =============================================================================
void Entity_Routine_0803242C(int entity,undefined4 speed)

{
  short s_val1;
  int pos_x;
  int i_val3;
  int i_val4;
  int i_val5;
  bool b_flag6;
  
  if (*(short *)(entity + 0x24) == 0) {
    s_val1 = *(short *)(entity + 0x26);
  }
  else {
    s_val1 = *(short *)(entity + 0x24) + -1;
  }
  *(short *)(entity + 0x24) = s_val1;
  i_val3 = *(int *)(entity + 0x28);
  if (i_val3 == 0) goto LAB_080324a6;
  b_flag6 = *(char *)(entity + 0x2e) != '\0';
  if (b_flag6) {
    pos_x = *(int *)(entity + 0xc);
  }
  else {
    pos_x = *(int *)(entity + 8);
  }
  i_val4 = pos_x >> 0x10;
  i_val5 = (int)*(short *)(entity + 0x2c);
  if (i_val5 == i_val4) {
    *(undefined4 *)(entity + 0x28) = 0;
    goto LAB_080324a6;
  }
  if (i_val5 - i_val4 < 1) {
    i_val3 = -i_val3;
  }
  pos_x = pos_x + i_val3;
  if (pos_x >> 0x10 != i_val4) {
    i_val3 = i_val5 - (pos_x >> 0x10);
    if (i_val5 - i_val4 < 1) {
      if (-1 < i_val3) goto LAB_08032496;
    }
    else if (i_val3 < 1) {
LAB_08032496:
      *(undefined4 *)(entity + 0x28) = 0;
    }
  }
  if (b_flag6) {
    *(int *)(entity + 0xc) = pos_x;
  }
  else {
    *(int *)(entity + 8) = pos_x;
  }
LAB_080324a6:
  Farmer_Routine_0801FE60(entity,speed);
  return;
}

// =============================================================================
// Function: Entity_Routine_080324BC @ 0x080324BC
// =============================================================================
undefined8
Entity_Routine_080324BC(undefined4 *entity,undefined4 *speed,undefined4 collision,undefined4 flags,
             undefined1 arg_5,char arg_6,undefined1 arg_7,undefined1 arg_8)

{
  undefined4 u_val1;
  
  *entity = speed;
  entity[1] = gRomData_080E68B4;
  u_val1 = _call_via_r1((int *)*speed,*(undefined4 *)(*(int *)*speed + 0x68));
  NPC_Routine_080A4A00(entity + 2,u_val1,
                (uint)*(ushort *)((int)speed + 0x22) + (uint)*(byte *)(speed + 8),*speed,
                collision,flags,arg_8);
  u_val1 = _call_via_r1((int *)*speed,*(undefined4 *)(*(int *)*speed + 0x6c));
  NPC_Routine_080A4A00(entity + 0x12,u_val1,0,*speed,2,0xe,0);
  *(undefined1 *)(entity + 0x22) = arg_5;
  *(undefined1 *)((int)entity + 0x89) = 0;
  *(char *)((int)entity + 0x8a) = arg_6 << 2;
  *(undefined1 *)((int)entity + 0x8b) = arg_7;
  return entity;
}

// =============================================================================
// Function: Entity_Routine_08032560 @ 0x08032560
// =============================================================================
undefined8
Entity_Routine_08032560(undefined4 *entity,undefined4 *speed,undefined4 collision,undefined4 flags,
             uint arg_5,undefined1 arg_6,char arg_7,undefined1 arg_8,undefined1 arg_9)

{
  undefined4 u_val1;
  
  *entity = speed;
  entity[1] = gRomData_080E68B4;
  u_val1 = _call_via_r1((int *)*speed,*(undefined4 *)(*(int *)*speed + 0x68));
  NPC_Routine_080A49A0(entity + 2,u_val1,
                (uint)*(ushort *)((int)speed + 0x22) + (uint)*(byte *)(speed + 8),*speed,
                collision,flags,arg_5,arg_9);
  u_val1 = _call_via_r1((int *)*speed,*(undefined4 *)(*(int *)*speed + 0x6c));
  NPC_Routine_080A4A00(entity + 0x12,u_val1,0,*speed,2,0xe,arg_5 & 0xffffff00);
  *(undefined1 *)(entity + 0x22) = arg_6;
  *(undefined1 *)((int)entity + 0x89) = 0;
  *(char *)((int)entity + 0x8a) = arg_7 << 2;
  *(undefined1 *)((int)entity + 0x8b) = arg_8;
  return entity;
}

// =============================================================================
// Function: Entity_Routine_0803260C @ 0x0803260C
// =============================================================================
void Entity_Routine_0803260C(int entity)

{
  byte b_flag1;
  bool b_flag2;
  char c_char3;
  int i_val4;
  char *p_char5;
  byte *pbVar6;
  
  p_char5 = (char *)(entity + 0x47);
  if (*p_char5 == '\0') {
    i_val4 = Animal_Routine_0805E8F0(entity + 0x30);
    if (-1 < i_val4 * 0x40000000) goto LAB_08032634;
    p_char5 = (char *)(entity + 0x44);
    c_char3 = '\x01';
  }
  else {
    c_char3 = '\0';
  }
  *p_char5 = c_char3;
LAB_08032634:
  pbVar6 = (byte *)(entity + 0x8a);
  b_flag1 = *pbVar6;
  if ((b_flag1 & 3) != 0) {
    b_flag2 = false;
    if (*(char *)(entity + 0x87) == '\0') {
      i_val4 = Animal_Routine_0805E8F0(entity + 0x70);
      if (i_val4 * 0x40000000 < 0) {
        *(undefined1 *)(entity + 0x84) = 1;
      }
    }
    else {
      *(char *)(entity + 0x87) = '\0';
      i_val4 = 2;
    }
    if ((i_val4 * 0x20000000 < 0) && ((b_flag1 & 3) != 2)) {
      b_flag2 = true;
    }
    if (b_flag2) {
      *pbVar6 = *pbVar6 & 0xfc;
    }
  }
  return;
}

// =============================================================================
// Function: Entity_Routine_08032900 @ 0x08032900
// =============================================================================
u32 Entity_Routine_08032900(int entity,int speed,int collision)

{
  undefined4 u_val1;
  
  if (entity == 2) {
    if (((0x2AF < (uint)(speed + 0xFFFFFEF0)) || (collision < 0xb0)) ||
       ((int)(0x2AF - 0x60) < collision)) {
      u_val1 = 2;
    }
    else {
      u_val1 = 1;
    }
  }
  else {
    u_val1 = 0;
  }
  return u_val1;
}

// =============================================================================
// Function: Entity_Routine_08032934 @ 0x08032934
// =============================================================================
void Entity_Routine_08032934(int entity,undefined4 speed,int collision)

{
  
  Entity_UpdatePositions(entity,speed,collision,2,*(undefined2 *)(collision + 8));
  *(undefined4 *)(entity + 0x14) = gRomData_080E6828;
  *(int *)(entity + 0x30) = collision;
  return entity;
}

// =============================================================================
// Function: Entity_Routine_080329B4 @ 0x080329B4
// =============================================================================
void Entity_Routine_080329B4(undefined4 entity)

{
  undefined4 u_val1;
  
  u_val1 = CppRuntime_OperatorNewArray(0x8c);
  Entity_Routine_08032A00(u_val1,entity);
  return;
}

// =============================================================================
// Function: Entity_Routine_080329DC @ 0x080329DC
// =============================================================================
void Entity_Routine_080329DC(short *entity,int speed)

{
  short s_val1;
  short s_val2;
  
  s_val1 = *(short *)(speed + 10);
  s_val2 = *(short *)(speed + 0xe);
  *entity = s_val1 + -7;
  entity[1] = s_val2 + -10;
  entity[2] = s_val1 + 7;
  entity[3] = s_val2 + 4;
  return;
}

// =============================================================================
// Function: Entity_Routine_08032A00 @ 0x08032A00
// =============================================================================
void Entity_Routine_08032A00(int entity,undefined4 speed)

{
  
  Entity_Routine_080324BC(entity,speed,6,0x20,1,0,0,0);
  *(undefined4 *)(entity + 4) = gRomData_080E6864;
  return entity;
}

// =============================================================================
// Function: Entity_Routine_08032A30 @ 0x08032A30
// =============================================================================
void Entity_Routine_08032A30(int entity)

{
  short s_val1;
  int i_val2;
  
  if (*(short *)(entity + 0x24) == 0) {
    s_val1 = *(short *)(entity + 0x26);
  }
  else {
    s_val1 = *(short *)(entity + 0x24) + -1;
  }
  *(short *)(entity + 0x24) = s_val1;
  i_val2 = *(int *)(entity + 0x10);
  if (i_val2 != 0) {
    _call_via_r1(i_val2,*(undefined4 *)(*(int *)(i_val2 + 4) + 0xc));
  }
  return;
}

// =============================================================================
// Function: Entity_Routine_08032A58 @ 0x08032A58
// =============================================================================
void Entity_Routine_08032A58(int entity)

{
  Animal_Routine_0805E894(entity + 0x30);
  return;
}

// =============================================================================
// Function: Entity_Routine_08032A64 @ 0x08032A64
// =============================================================================
u32 Entity_Routine_08032A64(int entity)

{
  uint u_val1;
  
  u_val1 = 0;
  if (*(short *)(entity + 0x3e) != 0) {
    u_val1 = (uint)(-(int)*(short *)(entity + 0x40) | (int)*(short *)(entity + 0x40)) >> 0x1f;
  }
  return u_val1;
}

// =============================================================================
// Function: Entity_Routine_08032AB4 @ 0x08032AB4
// =============================================================================
void Entity_Routine_08032AB4(int entity,undefined4 speed,char collision)

{
  byte b_flag1;
  
  Animal_Routine_0805E860(entity + 0x70);
  *(undefined1 *)(entity + 0x84) = 1;
  *(undefined1 *)(entity + 0x86) = 0;
  *(undefined1 *)(entity + 0x87) = 1;
  b_flag1 = 1;
  if (collision != '\0') {
    b_flag1 = 2;
  }
  *(byte *)(entity + 0x8a) = *(byte *)(entity + 0x8a) & 0xfc | b_flag1;
  return;
}

// =============================================================================
// Function: Entity_Routine_08032B04 @ 0x08032B04
// =============================================================================
void Entity_Routine_08032B04(int entity)

{
  
  Animal_Routine_0805E860(entity + 0x30);
  *(undefined1 *)(entity + 0x44) = 1;
  *(undefined1 *)(entity + 0x46) = 0;
  *(undefined1 *)(entity + 0x47) = 1;
  return;
}

// =============================================================================
// Function: Entity_Routine_08032B2C @ 0x08032B2C
// =============================================================================
u32 Entity_Routine_08032B2C(int entity)

{
  
  return (uint)(*(short *)(entity + 0x24) == 0);
}

// =============================================================================
// Function: Entity_Routine_08032B44 @ 0x08032B44
// =============================================================================
void Entity_Routine_08032B44(int entity,uint speed)

{
  
  if (*(ushort *)(entity + 0x22) != speed) {
    Entity_Routine_080321B0(entity);
  }
  return;
}

// =============================================================================
// Function: Entity_Routine_08032B68 @ 0x08032B68
// =============================================================================
void Entity_Routine_08032B68(int entity,uint speed)

{
  
  if (*(byte *)(entity + 0x20) != speed) {
    Entity_Routine_08032198(entity);
  }
  return;
}

// =============================================================================
// Function: Entity_Routine_08032BB4 @ 0x08032BB4
// =============================================================================
undefined8
Entity_Routine_08032BB4(uint *entity,int speed,int *collision,uint flags,int arg_5,int arg_6,
             byte *arg_7)

{
  undefined4 u_val1;
  char c_char2;
  int i_val3;
  int i_val4;
  int i_val5;
  uint loop_j;
  byte *pbVar7;
  uint loop_k;
  uint u_val9;
  uint loop_i;
  uint u_val11;
  uint stack_val_68;
  uint stack_val_64;
  undefined4 stack_val_60;
  uint stack_val_5c;
  undefined4 stack_val_58;
  undefined4 stack_val_54;
  undefined4 stack_val_50;
  undefined4 stack_val_4c;
  undefined4 stack_val_48;
  undefined4 stack_val_44;
  uint *puStack_40;
  int stack_val_3c;
  uint stack_val_38;
  uint stack_val_34;
  uint stack_val_30;
  uint stack_val_2c;
  uint stack_val_28;
  short *psStack_24;
  
  stack_val_68 = stack_val_68 & 0xfffffff0;
  stack_val_34 = 0;
  puStack_40 = entity;
  stack_val_3c = speed;
  stack_val_38 = flags;
  if (flags == 0x25) {
    speed = speed + 0x5DC;
    i_val4 = Building_Routine_0800CE6C(speed);
    if (i_val4 != 0) {
      loop_i = 0;
      stack_val_30 = 0;
      u_val11 = Item_HasStarQuality(speed);
      loop_j = stack_val_34;
      while (loop_j < u_val11) {
        i_val4 = Tool_GetDesc(speed,loop_i);
        c_char2 = Building_Routine_0800CED4(speed,loop_i);
        if (c_char2 == '\0') {
          if (-1 < i_val4) {
            Tool_CalculateStaminaCost(&stack_val_58,speed,loop_i);
            stack_val_54 = stack_val_58;
            u_val1 = stack_val_54;
            stack_val_54._0_2_ = (short)stack_val_58;
            stack_val_54._2_2_ = (short)((uint)stack_val_58 >> 0x10);
            loop_j = ((short)stack_val_54 - arg_5) * ((short)stack_val_54 - arg_5) +
                    (stack_val_54._2_2_ - arg_6) * (stack_val_54._2_2_ - arg_6);
            stack_val_54 = u_val1;
            if (((stack_val_68 & 0xf) == 0) || (loop_j < stack_val_34)) {
              loop_k = stack_val_60 & 0xfffffff0;
              stack_val_60._2_2_ = (undefined2)(loop_k >> 0x10);
              stack_val_60 = CONCAT22(stack_val_60._2_2_,CONCAT11((char)loop_i,(char)loop_k)) | 5;
              c_char2 = NPC_Routine_0809E968(arg_7,&stack_val_60);
              if (c_char2 == '\0') {
                stack_val_68 = stack_val_60;
                stack_val_64 = stack_val_5c;
                stack_val_34 = loop_j;
              }
            }
          }
        }
        else if (i_val4 < 0) {
          stack_val_30 = stack_val_30 + 1;
        }
        loop_i = loop_i + 1;
        loop_j = loop_i;
      }
      u_val11 = 0;
      loop_i = Building_Routine_0800CE74(stack_val_3c + 0x5DC);
      loop_j = 0;
      if (loop_i != 0) {
        do {
          i_val4 = Building_Routine_0800CF60(speed,loop_j);
          if ((((i_val4 != 0) &&
               (i_val5 = _call_via_r2(collision,loop_j + 0x36,*(undefined4 *)(*collision + 0x44)),
               i_val5 != 0)) && (*(short *)(i_val5 + 4) == 0x25)) &&
             ((c_char2 = Animal_Routine_0809B4FC(i_val4), c_char2 == '\0' &&
              (c_char2 = Animal_Routine_0809B8B0(i_val4), c_char2 == '\0')))) {
            u_val11 = u_val11 + 1;
          }
          loop_j = loop_j + 1;
        } while (loop_j < loop_i);
      }
      if (u_val11 != 0) {
        loop_j = 0;
        loop_k = 0;
        stack_val_2c = loop_i;
        if (loop_i != 0) {
          do {
            c_char2 = Building_Routine_0800CEA8(speed,loop_k);
            if (c_char2 == '\0') {
              if (loop_k < 0x10) {
                loop_j = loop_j | 1 << (loop_k & 0x1f);
              }
            }
            else {
              stack_val_30 = stack_val_30 + 1;
            }
            loop_k = loop_k + 1;
          } while (loop_k < stack_val_2c);
        }
        if (stack_val_30 < u_val11) {
          loop_i = 0;
          pbVar7 = arg_7;
          do {
            if ((*pbVar7 & 0xf) == 4) {
              stack_val_30 = stack_val_30 + 1;
              if (pbVar7[1] < 0x10) {
                loop_j = loop_j & ~(1 << (pbVar7[1] & 0x1f));
              }
            }
            pbVar7 = pbVar7 + 8;
            loop_i = loop_i + 1;
          } while (loop_i < 7);
          if ((stack_val_30 < u_val11) && (loop_i = 0, stack_val_2c != 0)) {
            psStack_24 = (short *)&stack_val_4c;
            do {
              u_val11 = 0;
              if (loop_i < 0x10) {
                u_val11 = 1 << (loop_i & 0x1f) & loop_j;
                u_val11 = (-u_val11 | u_val11) >> 0x1f;
              }
              if (u_val11 != 0) {
                Tool_GetName(&stack_val_50,speed,loop_i);
                stack_val_4c = stack_val_50;
                u_val11 = (*psStack_24 - arg_5) * (*psStack_24 - arg_5) +
                         (psStack_24[1] - arg_6) * (psStack_24[1] - arg_6);
                if (((stack_val_68 & 0xf) == 0) || (u_val11 < stack_val_34)) {
                  loop_k = stack_val_60 & 0xfffffff0;
                  stack_val_60._2_2_ = (undefined2)(loop_k >> 0x10);
                  stack_val_60 = CONCAT22(stack_val_60._2_2_,CONCAT11((char)loop_i,(char)loop_k)) | 4;
                  stack_val_68 = stack_val_60;
                  stack_val_64 = stack_val_5c;
                  stack_val_34 = u_val11;
                }
              }
              loop_i = loop_i + 1;
            } while (loop_i < stack_val_2c);
          }
        }
      }
    }
  }
  if (stack_val_38 == 0x11) {
    i_val5 = stack_val_3c + 0x3fc;
    i_val4 = Building_Routine_0800C568(i_val5);
    if (i_val4 != 0) {
      loop_i = Barn_GetCowCount(i_val5);
      u_val11 = 0;
      loop_j = 0;
      if (loop_i != 0) {
        do {
          i_val4 = Building_Routine_0800C5CC(i_val5,loop_j);
          if ((((i_val4 != 0) &&
               (i_val3 = _call_via_r2(collision,loop_j + 0x2e,*(undefined4 *)(*collision + 0x44)),
               i_val3 != 0)) && (*(short *)(i_val3 + 4) == 0x11)) &&
             (c_char2 = Animal_Routine_0809B4FC(i_val4), c_char2 == '\0')) {
            u_val11 = u_val11 + 1;
          }
          loop_j = loop_j + 1;
        } while (loop_j < loop_i);
      }
      if (u_val11 != 0) {
        u_val9 = 0;
        loop_j = 0;
        loop_k = 0;
        stack_val_28 = loop_i;
        if (loop_i != 0) {
          do {
            c_char2 = Building_Routine_0800C598(i_val5,loop_k);
            if (c_char2 == '\0') {
              if (loop_k < 8) {
                loop_j = loop_j | 1 << (loop_k & 0x1f);
              }
            }
            else {
              u_val9 = u_val9 + 1;
            }
            loop_k = loop_k + 1;
          } while (loop_k < stack_val_28);
        }
        if (u_val9 < u_val11) {
          loop_i = 0;
          pbVar7 = arg_7;
          do {
            if ((*pbVar7 & 0xf) == 3) {
              u_val9 = u_val9 + 1;
              if (pbVar7[1] < 8) {
                loop_j = loop_j & ~(1 << (pbVar7[1] & 0x1f));
              }
            }
            pbVar7 = pbVar7 + 8;
            loop_i = loop_i + 1;
          } while (loop_i < 7);
          if ((u_val9 < u_val11) && (loop_i = 0, stack_val_28 != 0)) {
            psStack_24 = (short *)&stack_val_44;
            do {
              u_val11 = 0;
              if (loop_i < 8) {
                u_val11 = 1 << (loop_i & 0x1f) & loop_j;
                u_val11 = (-u_val11 | u_val11) >> 0x1f;
              }
              if (u_val11 != 0) {
                Building_Routine_0800C6F0(&stack_val_48,i_val5,loop_i);
                stack_val_44 = stack_val_48;
                u_val11 = (*psStack_24 - arg_5) * (*psStack_24 - arg_5) +
                         (psStack_24[1] - arg_6) * (psStack_24[1] - arg_6);
                if (((stack_val_68 & 0xf) == 0) || (u_val11 < stack_val_34)) {
                  loop_k = stack_val_60 & 0xfffffff0;
                  stack_val_60._2_2_ = (undefined2)(loop_k >> 0x10);
                  stack_val_60 = CONCAT22(stack_val_60._2_2_,CONCAT11((char)loop_i,(char)loop_k)) | 3;
                  stack_val_68 = stack_val_60;
                  stack_val_64 = stack_val_5c;
                  stack_val_34 = u_val11;
                }
              }
              loop_i = loop_i + 1;
            } while (loop_i < stack_val_28);
          }
        }
      }
    }
  }
  loop_i = 0x36;
  do {
    i_val4 = _call_via_r2(collision,loop_i,*(undefined4 *)(*collision + 0x44));
    if ((((i_val4 != 0) && (*(ushort *)(i_val4 + 4) == stack_val_38)) &&
        ((c_char2 = _call_via_r1(i_val4,*(undefined4 *)(*(int *)(i_val4 + 0x14) + 0x50)),
         c_char2 != '\0' ||
         ((c_char2 = _call_via_r1(i_val4,*(undefined4 *)(*(int *)(i_val4 + 0x14) + 0x54)),
          c_char2 != '\0' ||
          (c_char2 = _call_via_r1(i_val4,*(undefined4 *)(*(int *)(i_val4 + 0x14) + 0x58)),
          c_char2 != '\0')))))) &&
       ((i_val5 = *(short *)(i_val4 + 10) - arg_5, i_val4 = *(short *)(i_val4 + 0xe) - arg_6,
        loop_j = i_val5 * i_val5 + i_val4 * i_val4, (stack_val_68 & 0xf) == 0 || (loop_j < stack_val_34)))) {
      u_val11 = stack_val_60 & 0xfffffff0;
      stack_val_60._2_2_ = (undefined2)(u_val11 >> 0x10);
      stack_val_60 = CONCAT22(stack_val_60._2_2_,CONCAT11((char)loop_i + -0x36,(char)u_val11)) | 6;
      c_char2 = NPC_Routine_0809E968(arg_7,&stack_val_60);
      if (c_char2 == '\0') {
        stack_val_68 = stack_val_60;
        stack_val_64 = stack_val_5c;
        stack_val_34 = loop_j;
      }
    }
    loop_i = loop_i + 1;
  } while (loop_i < 0x46);
  loop_i = 0x2e;
  do {
    _call_via_r2(collision,loop_i,*(undefined4 *)(*collision + 0x44));
    loop_i = loop_i + 1;
  } while (loop_i < 0x36);
  loop_i = 0x4c;
  do {
    i_val4 = _call_via_r2(collision,loop_i,*(undefined4 *)(*collision + 0x44));
    if (((i_val4 != 0) && (*(ushort *)(i_val4 + 4) == stack_val_38)) &&
       ((i_val5 = *(short *)(i_val4 + 10) - arg_5, i_val4 = *(short *)(i_val4 + 0xe) - arg_6,
        loop_j = i_val5 * i_val5 + i_val4 * i_val4, (stack_val_68 & 0xf) == 0 || (loop_j < stack_val_34)))) {
      u_val11 = stack_val_60 & 0xfffffff0;
      stack_val_60._2_2_ = (undefined2)(u_val11 >> 0x10);
      stack_val_60 = CONCAT22(stack_val_60._2_2_,CONCAT11((char)loop_i + -0x4c,(char)u_val11)) | 8;
      c_char2 = NPC_Routine_0809E968(arg_7,&stack_val_60);
      if (c_char2 == '\0') {
        stack_val_68 = stack_val_60;
        stack_val_64 = stack_val_5c;
        stack_val_34 = loop_j;
      }
    }
    loop_i = loop_i + 1;
  } while (loop_i < 0x54);
  *puStack_40 = stack_val_68;
  puStack_40[1] = stack_val_64;
  return puStack_40;
}

// =============================================================================
// Function: Entity_Routine_080330F4 @ 0x080330F4
// =============================================================================
undefined8
Entity_Routine_080330F4(uint *entity,int speed,undefined4 collision,ushort *flags,int arg_5,
             undefined4 arg_6)

{
  short s_val1;
  short s_val2;
  char c_char3;
  ushort u_val4;
  int i_val5;
  undefined4 u_val6;
  undefined1 *p_uint7;
  int i_val8;
  uint u_val9;
  uint loop_j;
  uint u_val11;
  int i_val12;
  uint loop_i;
  uint u_val14;
  uint stack_val_80;
  uint stack_val_7c;
  undefined4 stack_val_78;
  uint stack_val_74;
  uint stack_val_70;
  undefined1 stack_val_6c;
  undefined1 stack_buf_6b [3];
  undefined4 stack_val_68;
  undefined4 stack_val_64;
  undefined4 stack_val_60;
  undefined4 stack_val_5c;
  undefined4 stack_val_58;
  undefined4 stack_val_54;
  undefined4 stack_val_50;
  undefined4 stack_val_4c;
  uint *puStack_48;
  int stack_val_44;
  uint stack_val_40;
  int stack_val_3c;
  undefined1 *puStack_38;
  uint stack_val_34;
  short *psStack_30;
  uint stack_val_2c;
  int stack_val_28;
  uint stack_val_24;
  
  stack_val_80 = stack_val_80 & 0xfffffff0;
  stack_val_44 = (int)(short)((ushort)((flags[1] & 0x3FF) << 6) |
                          (ushort)(*(byte *)((int)flags + 1) >> 2));
  i_val5 = (int)(short)((ushort)((flags[2] & 0x3FF) << 6) |
                      (ushort)(*(byte *)((int)flags + 3) >> 2));
  puStack_48 = entity;
  if (arg_5 == 1) {
    stack_val_34 = 0;
    speed = 0x9C8 + speed;
    u_val14 = 0;
    do {
      loop_i = 0;
      loop_j = u_val14 + 1;
      i_val12 = 0x118 - stack_val_44;
      do {
        u_val9 = *(uint *)((loop_i + u_val14 * 0x2b) * 4 + speed);
        u_val11 = 0;
        if (((u_val9 & 3) == 1) && (((u_val9 & 0xfff) >> 8) - 1 < 4)) {
          u_val11 = -((u_val9 & 0xff) >> 2 ^ 0x14) >> 0x1f;
        }
        if ((u_val11 != 0) &&
           ((i_val8 = (u_val14 * 0x10 + 0xb8) - i_val5, stack_val_24 = i_val12 * i_val12 + i_val8 * i_val8,
            (stack_val_80 & 0xf) == 0 || (stack_val_24 < stack_val_34)))) {
          u_val9 = stack_val_78 & 0xfffffff0;
          stack_val_78._3_1_ = (undefined1)(u_val9 >> 0x18);
          stack_val_78 = CONCAT13(stack_val_78._3_1_,
                               CONCAT12((char)u_val14,CONCAT11((char)loop_i,(char)u_val9))) | 1;
          c_char3 = NPC_Routine_0809E968(arg_6,&stack_val_78);
          if (c_char3 == '\0') {
            stack_val_80 = stack_val_78;
            stack_val_7c = stack_val_74;
            stack_val_34 = stack_val_24;
          }
        }
        i_val12 = i_val12 + 0x10;
        loop_i = loop_i + 1;
      } while (loop_i < 0x2b);
      u_val14 = loop_j;
    } while (loop_j < 0x19);
    goto LAB_0803356a;
  }
  if (arg_5 < 2) {
    if (arg_5 == 0) {
      stack_val_40 = 0;
      stack_val_3c = speed + 0x9C8;
      puStack_38 = &stack_val_6c;
      u_val14 = 0;
      do {
        loop_j = 0;
        stack_val_28 = u_val14 << 1;
        stack_val_2c = u_val14 + 1;
        i_val12 = 0x118 - stack_val_44;
        do {
          i_val8 = (stack_val_28 + 0x17) * 8 - i_val5;
          loop_i = i_val12 * i_val12 + i_val8 * i_val8;
          if (((stack_val_80 & 0xf) == 0) || (loop_i < stack_val_40)) {
            u_val9 = *(uint *)(stack_val_3c + (loop_j + u_val14 * 0x2b) * 4);
            if ((u_val9 & 0xfff) >> 8 == 5) {
              stack_val_70 = u_val9;
              FieldPlot_HarvestCrop(&stack_val_78,&stack_val_70);
              c_char3 = Farmer_Routine_0800F06C(&stack_val_78);
              if (c_char3 != '\0') goto LAB_080331ee;
              i_val8 = Farmer_Routine_0800F09C(&stack_val_78);
              if (i_val8 == 0) {
                Farmer_Routine_0800F0A4(&stack_val_74,&stack_val_78);
                Item_Routine_0800E0FC(puStack_38,stack_val_74 & 0xffffff);
                p_uint7 = puStack_38;
              }
              else {
                if (i_val8 != 1) goto LAB_080331ee;
                u_val6 = Farmer_Routine_0800F0E8(&stack_val_78);
                Item_Routine_0800E148(stack_buf_6b,u_val6);
                p_uint7 = stack_buf_6b;
              }
              u_val9 = Item_Routine_0800E198(p_uint7);
              u_val9 = (-u_val9 | u_val9) >> 0x1f;
            }
            else {
LAB_080331ee:
              u_val9 = 0;
            }
            if (u_val9 != 0) {
              u_val9 = stack_val_78 & 0xfffffff0;
              stack_val_78._3_1_ = (undefined1)(u_val9 >> 0x18);
              stack_val_78 = CONCAT13(stack_val_78._3_1_,
                                   CONCAT12((char)u_val14,CONCAT11((char)loop_j,(char)u_val9))) | 2;
              c_char3 = NPC_Routine_0809E968(arg_6,&stack_val_78);
              if (c_char3 == '\0') {
                stack_val_80 = stack_val_78;
                stack_val_7c = stack_val_74;
                stack_val_40 = loop_i;
              }
            }
          }
          i_val12 = i_val12 + 0x10;
          loop_j = loop_j + 1;
        } while (loop_j < 0x2b);
        u_val14 = stack_val_2c;
      } while (stack_val_2c < 0x19);
    }
    goto LAB_0803356a;
  }
  if (arg_5 != 2) goto LAB_0803356a;
  Farm_GetSpawnCoordinates(&stack_val_68);
  stack_val_64 = stack_val_68;
  Farm_GetHouseCoordinates(&stack_val_60);
  stack_val_5c = stack_val_60;
  Building_Routine_0800CE58(&stack_val_58);
  stack_val_54 = stack_val_58;
  psStack_30 = (short *)&stack_val_54;
  Building_Routine_0800C554(&stack_val_50);
  stack_val_4c = stack_val_50;
  u_val4 = *flags & 0x3ff;
  if (u_val4 == 0x11) {
    Entity_Routine_08032BB4(&stack_val_78,speed,collision,0x11,stack_val_44,i_val5,arg_6);
    stack_val_80 = stack_val_78;
    stack_val_7c = stack_val_74;
    if ((stack_val_78 & 0xf) == 0) {
      Entity_Routine_08032BB4(&stack_val_78,speed,collision,2,(int)(short)stack_val_5c,(int)stack_val_5c._2_2_,arg_6)
      ;
      stack_val_80 = stack_val_78;
      stack_val_7c = stack_val_74;
      if ((stack_val_78 & 0xf) == 0) {
        Entity_Routine_08032BB4(&stack_val_78,speed,collision,0x25,(int)*psStack_30,(int)psStack_30[1],arg_6);
        stack_val_80 = stack_val_78;
        stack_val_7c = stack_val_74;
      }
    }
    goto LAB_0803356a;
  }
  if (u_val4 < 0x12) {
    if (u_val4 != 2) goto LAB_0803356a;
    Entity_Routine_08032BB4(&stack_val_78,speed,collision,2,stack_val_44,i_val5,arg_6);
    stack_val_80 = stack_val_78;
    stack_val_7c = stack_val_74;
    if ((stack_val_78 & 0xf) != 0) goto LAB_0803356a;
    if ((uint)(((short)stack_val_64 - stack_val_44) * ((short)stack_val_64 - stack_val_44) +
              (stack_val_64._2_2_ - i_val5) * (stack_val_64._2_2_ - i_val5)) <=
        (uint)(((short)stack_val_5c - stack_val_44) * ((short)stack_val_5c - stack_val_44) +
              (stack_val_5c._2_2_ - i_val5) * (stack_val_5c._2_2_ - i_val5))) {
      u_val6 = 0x25;
      s_val1 = *psStack_30;
      s_val2 = psStack_30[1];
      goto LAB_080334ac;
    }
    Entity_Routine_08032BB4(&stack_val_78,speed,collision,0x11,(int)(short)stack_val_4c,(int)stack_val_4c._2_2_,arg_6
                 );
    stack_val_80 = stack_val_78;
    stack_val_7c = stack_val_74;
    if ((stack_val_78 & 0xf) != 0) goto LAB_0803356a;
    s_val1 = *psStack_30;
    s_val2 = psStack_30[1];
    u_val6 = 0x25;
  }
  else {
    if (u_val4 != 0x25) goto LAB_0803356a;
    Entity_Routine_08032BB4(&stack_val_78,speed,collision,0x25,stack_val_44,i_val5,arg_6);
    stack_val_80 = stack_val_78;
    stack_val_7c = stack_val_74;
    if ((stack_val_78 & 0xf) != 0) goto LAB_0803356a;
    u_val6 = 2;
    s_val1 = (short)stack_val_64;
    s_val2 = stack_val_64._2_2_;
LAB_080334ac:
    Entity_Routine_08032BB4(&stack_val_78,speed,collision,u_val6,(int)s_val1,(int)s_val2,arg_6);
    stack_val_80 = stack_val_78;
    stack_val_7c = stack_val_74;
    if ((stack_val_78 & 0xf) != 0) goto LAB_0803356a;
    u_val6 = 0x11;
    s_val1 = (short)stack_val_4c;
    s_val2 = stack_val_4c._2_2_;
  }
  Entity_Routine_08032BB4(&stack_val_78,speed,collision,u_val6,(int)s_val1,(int)s_val2,arg_6);
  stack_val_80 = stack_val_78;
  stack_val_7c = stack_val_74;
LAB_0803356a:
  *puStack_48 = stack_val_80;
  puStack_48[1] = stack_val_7c;
  return puStack_48;
}

// =============================================================================
// Function: Entity_Routine_08033584 @ 0x08033584
// =============================================================================
u32 Entity_Routine_08033584(byte *entity,int speed,int *collision)

{
  char c_char1;
  uint u_val2;
  undefined4 u_val3;
  int i_val4;
  uint u_val5;
  undefined1 temp_buf_20 [4];
  uint3 stack_val_1c;
  uint stack_val_18;
  undefined1 stack_val_14;
  undefined1 stack_buf_13 [3];
  
  if (8 < (*entity & 0xf)) goto case_08033648;
  switch(*(uint *)(PTR_case_080335A8_080335a4 + (*entity & 0xf) * 4) & 0xfffffffe) {
  case 0x80335a8:
    speed = speed + 0xcc;
  case 0x80335cc:
    u_val5 = *(uint *)(speed + 0x9C8 + ((uint)entity[2] * 0x2b + (uint)entity[1]) * 4);
    u_val2 = 0;
    if (((u_val5 & 3) == 1) && (((u_val5 & 0xfff) >> 8) - 1 < 4)) {
      u_val2 = -((u_val5 & 0xff) >> 2 ^ 0x14) >> 0x1f;
    }
    goto LAB_0803377a;
  case 0x8033608:
    stack_val_18 = *(uint *)(speed + 0x9C8 + ((uint)entity[2] * 0x2b + (uint)entity[1]) * 4
                         );
    if ((stack_val_18 & 0xfff) >> 8 == 5) {
      FieldPlot_HarvestCrop(temp_buf_20,&stack_val_18);
      c_char1 = Farmer_Routine_0800F06C(temp_buf_20);
      if (c_char1 == '\0') {
        i_val4 = Farmer_Routine_0800F09C(temp_buf_20);
        if (i_val4 == 0) {
          Farmer_Routine_0800F0A4(&stack_val_1c,temp_buf_20);
          Item_Routine_0800E0FC(&stack_val_14,(uint)stack_val_1c);
          u_val2 = Item_Routine_0800E198(&stack_val_14);
          u_val2 = (-u_val2 | u_val2) >> 0x1f;
          goto LAB_0803377a;
        }
        if (i_val4 == 1) {
          u_val3 = Farmer_Routine_0800F0E8(temp_buf_20);
          Item_Routine_0800E148(stack_buf_13,u_val3);
          u_val2 = Item_Routine_0800E198(stack_buf_13);
          u_val2 = (-u_val2 | u_val2) >> 0x1f;
          goto LAB_0803377a;
        }
      }
    }
    break;
  case 0x80336a4:
    u_val2 = 0;
    i_val4 = Building_Routine_0800C568(speed + 0x3fc);
    if (i_val4 == 0) goto LAB_0803377a;
    c_char1 = Building_Routine_0800C598(speed + 0x3fc,entity[1]);
    goto LAB_080336f8;
  case 0x80336c0:
    u_val2 = 0;
    speed = speed + 0x5DC;
    i_val4 = Building_Routine_0800CE6C(speed);
    if (i_val4 == 0) goto LAB_0803377a;
    c_char1 = Building_Routine_0800CEA8(speed,entity[1]);
    goto LAB_080336f8;
  case 0x80336e0:
    u_val2 = 0;
    speed = speed + 0x5DC;
    i_val4 = Building_Routine_0800CE6C(speed);
    if (i_val4 == 0) goto LAB_0803377a;
    c_char1 = Building_Routine_0800CED4(speed,entity[1]);
LAB_080336f8:
    u_val2 = 0;
    if (c_char1 == '\0') {
      u_val2 = 1;
    }
    goto LAB_0803377a;
  case 0x8033708:
    i_val4 = _call_via_r2(collision,entity[1] + 0x36,*(undefined4 *)(*collision + 0x44));
    u_val2 = 0;
    if ((i_val4 != 0) &&
       (((c_char1 = _call_via_r1(i_val4,*(undefined4 *)(*(int *)(i_val4 + 0x14) + 0x50)),
         c_char1 != '\0' ||
         (c_char1 = _call_via_r1(i_val4,*(undefined4 *)(*(int *)(i_val4 + 0x14) + 0x54)),
         c_char1 != '\0')) ||
        (c_char1 = _call_via_r1(i_val4,*(undefined4 *)(*(int *)(i_val4 + 0x14) + 0x58)),
        c_char1 != '\0')))) {
      u_val2 = 1;
    }
    goto LAB_0803377a;
  case 0x8033754:
    _call_via_r2(collision,entity[1] + 0x2e,*(undefined4 *)(*collision + 0x44));
    break;
  case 0x8033764:
    u_val2 = _call_via_r2(collision,entity[1] + 0x4c,*(undefined4 *)(*collision + 0x44));
    u_val2 = (-u_val2 | u_val2) >> 0x1f;
    goto LAB_0803377a;
  }
case_08033648:
  u_val2 = 0;
LAB_0803377a:
  return u_val2;
}

// =============================================================================
// Function: Entity_Routine_08033784 @ 0x08033784
// =============================================================================
u32 Entity_Routine_08033784(byte *entity,undefined4 speed,int *collision)

{
  uint u_val1;
  int i_val2;
  
  if (8 < (*entity & 0xf)) goto case_080337F2;
  switch(*(uint *)(PTR_case_080337A4_080337a0 + (*entity & 0xf) * 4) & 0xfffffffe) {
  case 0x80337a4:
  case 0x80337c8:
    u_val1 = 2;
    goto LAB_080337fa;
  case 0x80337cc:
    u_val1 = 0x11;
    goto LAB_080337fa;
  case 0x80337d0:
    u_val1 = 0x25;
    goto LAB_080337fa;
  case 0x80337d4:
    i_val2 = entity[1] + 0x36;
    break;
  case 0x80337da:
    i_val2 = entity[1] + 0x2e;
    break;
  case 0x80337e0:
    i_val2 = entity[1] + 0x4c;
    break;
  case 0x80337f2:
    goto case_080337F2;
  }
  i_val2 = _call_via_r2(collision,i_val2,*(undefined4 *)(*collision + 0x44));
  if (i_val2 == 0) {
case_080337F2:
    u_val1 = 0x234;
  }
  else {
    u_val1 = (uint)*(ushort *)(i_val2 + 4);
  }
LAB_080337fa:
  return u_val1;
}

// =============================================================================
// Function: Entity_Routine_08033800 @ 0x08033800
// =============================================================================
u32 Entity_Routine_08033800(undefined2 *entity,int *speed,undefined4 collision)

{
  int i_val1;
  undefined2 u_val2;
  
  i_val1 = _call_via_r2(speed,collision,*(undefined4 *)(*speed + 0x44));
  if (i_val1 == 0) {
    *entity = 0;
    u_val2 = 0;
  }
  else {
    u_val2 = *(undefined2 *)(i_val1 + 0xe);
    *entity = *(undefined2 *)(i_val1 + 10);
  }
  entity[1] = u_val2;
  return entity;
}

// =============================================================================
// Function: Entity_Routine_08033830 @ 0x08033830
// =============================================================================
u32 Entity_Routine_08033830(short *entity,byte *speed,int collision,undefined4 flags)

{
  byte b_flag1;
  int i_val2;
  
  if (8 < (*speed & 0xf)) goto case_08033874;
  switch(*(uint *)(PTR_case_08033850_0803384c + (*speed & 0xf) * 4) & 0xfffffffe) {
  case 0x8033850:
  case 0x8033874:
case_08033874:
    *entity = 0;
    entity[1] = 0;
    break;
  case 0x803387c:
    b_flag1 = speed[2];
    *entity = (ushort)speed[1] * 0x10 + 0x118;
    entity[1] = (ushort)b_flag1 * 0x10 + 0xb8;
    break;
  case 0x8033892:
    Building_Routine_0800C6F0(entity,collision + 0x3fc,speed[1]);
    break;
  case 0x80338a2:
    Tool_GetName(entity,collision + 0x5DC,speed[1]);
    break;
  case 0x80338b4:
    Tool_CalculateStaminaCost(entity,collision + 0x5DC,speed[1]);
    break;
  case 0x80338c8:
    i_val2 = speed[1] + 0x36;
    goto LAB_080338d2;
  case 0x80338ce:
    i_val2 = speed[1] + 0x2e;
LAB_080338d2:
    Entity_Routine_08033800(entity,flags,i_val2);
    break;
  case 0x80338dc:
    Entity_Routine_08033800(entity,flags,speed[1] + 0x4c);
  }
  return entity;
}

// =============================================================================
// Function: Entity_Routine_080338F0 @ 0x080338F0
// =============================================================================
u32 Entity_Routine_080338F0(int entity)

{
  uint u_val1;
  
  u_val1 = NPC_Routine_080AB788(0x200);
  return (uint)(u_val1 < entity + 0x100U);
}

// =============================================================================
// Function: Entity_Routine_08033A80 @ 0x08033A80
// =============================================================================
u32 Entity_Routine_08033A80(int entity)

{
  undefined4 u_val1;
  int i_val2;
  int i_val3;
  
  u_val1 = CppRuntime_OperatorNewArray(0xd4);
  i_val2 = Entity_Routine_08034A14(u_val1,entity);
  i_val3 = -1;
  if (*(char *)(entity + 0x40) == '\x02') {
    i_val3 = 8;
  }
  else {
    if (*(char *)(entity + 0x40) == '\x03') {
      i_val3 = 5;
    }
    if (i_val3 < 0) goto LAB_08033ada;
  }
  Animal_Routine_0805E860(i_val2 + 0x70,i_val3);
  *(undefined1 *)(i_val2 + 0x84) = 1;
  *(undefined1 *)(i_val2 + 0x86) = 0;
  *(undefined1 *)(i_val2 + 0x87) = 1;
  *(byte *)(i_val2 + 0x8a) = *(byte *)(i_val2 + 0x8a) & 0xfc | 2;
LAB_08033ada:
  return i_val2;
}

// =============================================================================
// Function: Entity_Routine_08033AE4 @ 0x08033AE4
// =============================================================================
void Entity_Routine_08033AE4(int entity)

{
  
  *(undefined1 *)(entity + 6) = 0;
  *(undefined1 *)(entity + 0x42) = 1;
  Entity_Routine_08033B7C();
  return;
}

// =============================================================================
// Function: Entity_Routine_08033B10 @ 0x08033B10
// =============================================================================
void Entity_Routine_08033B10(int entity)

{
  
  Farmer_Routine_0801FE20();
  NPC_Routine_0809E3DC(*(undefined4 *)(entity + 0x34));
  return;
}

// =============================================================================
// Function: Entity_Routine_08033B24 @ 0x08033B24
// =============================================================================
void Entity_Routine_08033B24(undefined4 *entity)

{
  undefined4 u_val1;
  undefined4 u_val2;
  bool b_flag3;
  byte stack_bytes_20 [8];
  undefined1 temp_buf_18 [8];
  
  if ((*(byte *)(entity[0xe] + (uint)*(byte *)(entity + 0xc) * 8) & 0xf) == 0) {
    u_val2 = *entity;
    Farmer_Routine_0801FE94(temp_buf_18,entity);
    u_val1 = NPC_Routine_0809E65C(entity[0xd]);
    Entity_Routine_080330F4(stack_bytes_20,entity[0xf],u_val2,temp_buf_18,u_val1,entity[0xe]);
    b_flag3 = (stack_bytes_20[0] & 0xf) == 0;
  }
  else {
    b_flag3 = false;
  }
  return b_flag3;
}

// =============================================================================
// Function: Entity_Routine_08033B84 @ 0x08033B84
// =============================================================================
void Entity_Routine_08033B84(int entity)

{
  
  if (*(int *)(entity + 0x10) != 0) {
    Entity_Routine_08034BFC();
  }
  return;
}

// =============================================================================
// Function: Entity_Routine_08033B94 @ 0x08033B94
// =============================================================================
void Entity_Routine_08033B94(undefined4 *entity,int speed,undefined4 collision,undefined4 flags)

{
  undefined1 u_val1;
  ushort u_val2;
  char c_char3;
  short s_val4;
  int i_val5;
  int i_val6;
  int *p_int7;
  uint *p_uint8;
  undefined4 u_val9;
  uint u_val10;
  int *p_int11;
  undefined4 u_val12;
  uint u_val13;
  undefined4 stack_val_c4;
  undefined4 stack_val_c0;
  undefined4 stack_val_bc;
  undefined4 stack_val_b8;
  undefined4 stack_val_b4;
  undefined4 stack_val_b0;
  undefined4 stack_val_ac;
  undefined4 stack_val_a4;
  undefined4 stack_val_a0;
  undefined4 stack_val_9c;
  undefined4 stack_val_98;
  undefined4 stack_val_94;
  undefined4 stack_val_90;
  undefined4 stack_val_8c;
  undefined4 stack_val_88;
  undefined1 stack_buf_84 [4];
  short stack_val_80;
  short stack_val_7e;
  undefined4 stack_val_7c;
  undefined4 stack_val_78;
  undefined4 stack_val_74;
  undefined4 stack_val_70;
  undefined4 stack_val_6c;
  undefined4 stack_val_68;
  undefined4 stack_val_64;
  undefined4 stack_val_60;
  uint stack_val_5c;
  undefined4 stack_val_58;
  undefined4 stack_val_54;
  undefined4 stack_val_50;
  undefined4 stack_val_4c;
  undefined4 stack_val_48;
  uint stack_val_44;
  uint stack_val_40;
  undefined1 temp_buf_3c [4];
  short *psStack_38;
  short *psStack_34;
  int stack_val_30;
  int stack_val_2c;
  undefined4 stack_val_28;
  undefined4 stack_val_24;
  
  i_val5 = entity[0xd];
  p_int11 = (int *)*entity;
  p_int7 = p_int11;
  if (5 < *(uint *)(i_val5 + 0x1c)) goto case_08033BD8;
  p_int7 = (int *)PTR_case_08033BC0_08033bbc;
  switch(*(uint *)(PTR_case_08033BC0_08033bbc + *(uint *)(i_val5 + 0x1c) * 4) & 0xfffffffe) {
  case 0x8033bc0:
    flags = 0;
  case 0x8033bd8:
case_08033BD8:
    if (((*(char *)(speed + 4) != '\0') &&
        (i_val6 = NPC_Routine_0809E65C(i_val5,p_int7,speed,flags), i_val6 != 3)) &&
       ((i_val6 = NPC_Routine_0809E664(i_val5), i_val6 != 0 &&
        ((p_int7 = (int *)_call_via_r1(p_int11,*(undefined4 *)(*p_int11 + 0x144)),
         (*(byte *)((int)p_int7 + 10) & 0x1f) == 6 &&
         ((*(ushort *)((int)p_int7 + 10) & 0x7ff) >> 5 == *(byte *)(entity + 0xc) + 1)))))) {
      if (*p_int7 - 3U < 2) {
        NPC_Routine_0809E75C(i_val5);
      }
      else {
        Farmer_Routine_0801FE78(entity,2,0x168,0xfffffff8);
        NPC_Routine_0809E7D0(i_val5,stack_buf_84);
        Entity_Routine_08034180(entity,1,0,0x8000);
      }
    }
    goto LAB_08034110;
  case 0x8033c64:
    if (*(short *)(entity + 1) != 2) {
      Farmer_Routine_0801FE78(entity,2,0x168,0xfffffff8);
      Entity_Routine_08034180(entity,1,0,0x8000);
    }
    if (*(short *)((int)entity + 0xe) < 0x78) goto LAB_08034110;
    break;
  case 0x8033c94:
    psStack_38 = (short *)(i_val5 + 0x20);
    if (*(short *)(i_val5 + 0x20) == 0) {
      c_char3 = Entity_Routine_08034940(entity);
      if ((c_char3 == '\0') &&
         (((*(char *)(i_val5 + 0x23) != '\0' &&
           (c_char3 = *(char *)(i_val5 + 0x23) + -1, *(char *)(i_val5 + 0x23) = c_char3, c_char3 != '\0'))
          || (c_char3 = Entity_Routine_08034260(entity), c_char3 == '\0')))) {
        i_val5 = gRomData_080F143C;
        i_val6 = NPC_Routine_080AB82C(gRomData_080F143C,5);
        i_val5 = i_val6 * 4 + i_val5;
        *(char *)(psStack_38 + 1) = (char)i_val6;
        s_val4 = NPC_Routine_080AB788((uint)*(byte *)(i_val5 + 2) * 0x3c);
        *psStack_38 = (ushort)*(byte *)(i_val5 + 1) * 0x3c + s_val4;
        u_val2 = *(ushort *)(entity + 1);
        stack_val_80 = 0;
        stack_val_7e = 0;
        if (u_val2 == 0x11) {
          stack_val_80 = NPC_Routine_080AB788(0x40);
          stack_val_80 = stack_val_80 + 0x90;
          stack_val_7e = NPC_Routine_080AB788(0x30);
          stack_val_7e = stack_val_7e + 0x70;
        }
        else if (u_val2 < 0x12) {
          if (u_val2 == 2) {
            stack_val_80 = NPC_Routine_080AB788(0x48);
            stack_val_80 = stack_val_80 + 0x80;
            stack_val_7e = NPC_Routine_080AB788(0x48);
            stack_val_7e = stack_val_7e + 0x128;
          }
        }
        else if (u_val2 == 0x25) {
          stack_val_80 = NPC_Routine_080AB788(0x68);
          stack_val_80 = stack_val_80 + 0x48;
          stack_val_7e = NPC_Routine_080AB788(0x30);
          stack_val_7e = stack_val_7e + 0x60;
        }
        u_val1 = *(undefined1 *)(entity + 8);
        _call_via_r3(&stack_val_c4,p_int11,u_val2,*(undefined4 *)(*p_int11 + 0x34));
        _call_via_r2(&stack_val_7c,entity,*(undefined4 *)(entity[5] + 0xc));
        stack_val_28 = stack_val_7c;
        stack_val_24 = stack_val_78;
        stack_val_b8 = 0x21;
        stack_val_b4 = 0xffffffdf;
        stack_val_b0 = 0xffffffdf;
        stack_val_ac = 0x21;
        stack_val_a4 = stack_val_c4;
        stack_val_a0 = stack_val_c0;
        stack_val_9c = stack_val_bc;
        stack_val_98 = stack_val_7c;
        stack_val_94 = stack_val_78;
        stack_val_90 = 0x20;
        stack_val_8c = 0;
        stack_val_88 = 0;
        u_val12 = NPC_Routine_080ABC40((int)*(short *)((int)entity + 10),
                               (int)*(short *)((int)entity + 0xe),(int)stack_val_80,(int)stack_val_7e,
                               &stack_val_b8,u_val1);
        Entity_Routine_08034180(entity,(char)psStack_38[1],u_val12,0x8000);
      }
    }
    else {
      *(short *)(i_val5 + 0x20) = *(short *)(i_val5 + 0x20) + -1;
    }
    goto LAB_08034110;
  case 0x8033dfc:
    psStack_34 = (short *)(i_val5 + 0x20);
    i_val6 = entity[0xe] + (uint)*(byte *)(entity + 0xc) * 8;
    u_val10 = Entity_Routine_08033784(i_val6,entity[0xf],p_int11);
    u_val13 = (uint)*(ushort *)(entity + 1);
    stack_val_30 = (int)*(short *)((int)entity + 10);
    stack_val_2c = (int)*(short *)((int)entity + 0xe);
    stack_val_74 = CONCAT22(*(short *)((int)entity + 0xe),*(short *)((int)entity + 10));
    if (u_val10 == u_val13) {
      Entity_Routine_08033830(&stack_val_70,i_val6,entity[0xf],p_int11);
      stack_val_74 = stack_val_70;
    }
    else if (u_val13 == 0x11) {
      Building_Routine_0800C554(&stack_val_60);
      stack_val_74 = stack_val_60;
    }
    else if (u_val13 < 0x12) {
      if (u_val13 == 2) {
        if (u_val10 == 0x11) {
          Farm_GetHouseCoordinates(&stack_val_68);
          stack_val_74 = stack_val_68;
        }
        else {
          if (u_val10 != 0x25) goto LAB_08033e92;
          Farm_GetSpawnCoordinates(&stack_val_6c);
          stack_val_74 = stack_val_6c;
        }
      }
      else {
LAB_08033e92:
        u_val10 = 0x234;
      }
    }
    else {
      if (u_val13 != 0x25) goto LAB_08033e92;
      Building_Routine_0800CE58(&stack_val_64);
      stack_val_74 = stack_val_64;
    }
    if (u_val10 != 0x234) {
      i_val6 = (short)stack_val_74 - stack_val_30;
      if (i_val6 < 0) {
        i_val6 = -i_val6;
      }
      if (i_val6 < 8) {
        i_val6 = stack_val_74._2_2_ - stack_val_2c;
        if (i_val6 < 0) {
          i_val6 = -i_val6;
        }
        if (i_val6 < 8) {
          c_char3 = Entity_Routine_08034940(entity);
          if (c_char3 != '\0') goto LAB_08034110;
          if (u_val10 != u_val13) {
            u_val12 = 2;
            stack_val_58 = 0;
            if (u_val13 == 0x11) {
              Farm_GetHouseCoordinates(&stack_val_48);
              stack_val_58 = stack_val_48;
            }
            else if (u_val13 < 0x12) {
              if (u_val13 == 2) {
                if (u_val10 == 0x11) {
                  u_val12 = 0x11;
                  Building_Routine_0800C554(&stack_val_50);
                  stack_val_58 = stack_val_50;
                }
                else if (u_val10 == 0x25) {
                  u_val12 = 0x25;
                  Building_Routine_0800CE58(&stack_val_54);
                  stack_val_58 = stack_val_54;
                }
              }
            }
            else if (u_val13 == 0x25) {
              Farm_GetSpawnCoordinates(&stack_val_4c);
              stack_val_58 = stack_val_4c;
            }
            Farmer_Routine_0801FE78(entity,u_val12,(int)(short)stack_val_58,(int)stack_val_58._2_2_);
            Entity_Routine_08034180(entity,0,*(undefined1 *)(entity + 8),0);
            *psStack_34 = 0;
            goto LAB_08034110;
          }
          c_char3 = Entity_Routine_0803436C(entity);
          if (c_char3 != '\0') {
            stack_val_5c = stack_val_5c & 0xFFFF0000 | 0x3c;
            NPC_Routine_0809E7F0(i_val5,&stack_val_5c);
            u_val1 = *(undefined1 *)(entity + 8);
            u_val12 = 4;
            goto LAB_080340d2;
          }
          break;
        }
      }
    }
    if (*psStack_34 != 0) {
      *psStack_34 = *psStack_34 + -1;
      goto LAB_08034110;
    }
    c_char3 = Entity_Routine_08034940(entity);
    if (c_char3 != '\0') goto LAB_08034110;
    c_char3 = Entity_Routine_08033584(entity[0xe] + (uint)*(byte *)(entity + 0xc) * 8,entity[0xf],p_int11);
    if (c_char3 != '\0') {
      u_val12 = NPC_Routine_0809E65C(i_val5);
      Bachelorette_GetStatsByte(i_val5,u_val12);
      u_val12 = Entity_Routine_08033914();
      i_val6 = stack_val_74._2_2_ - stack_val_2c;
      i_val5 = (short)stack_val_74 - stack_val_30;
      if (i_val5 < 0) {
        i_val5 = -i_val5;
      }
      if (i_val6 < 0) {
        i_val6 = -i_val6;
      }
      stack_val_40 = math_udivsi3((i_val5 + i_val6) / 2 << 0x10,u_val12);
      stack_val_44 = 0xb4;
      p_uint8 = &stack_val_44;
      if (stack_val_40 < 0xb4) {
        p_uint8 = &stack_val_40;
      }
      s_val4 = NPC_Routine_080AB788(*p_uint8);
      *psStack_34 = s_val4;
      u_val1 = *(undefined1 *)(entity + 8);
      NPC_Routine_080ABA3C(&stack_val_c4);
      u_val9 = NPC_Routine_080ABC40(stack_val_30,stack_val_2c,(int)(short)stack_val_74,(int)stack_val_74._2_2_,
                            &stack_val_c4,u_val1);
      Entity_Routine_08034180(entity,1,u_val9,u_val12);
      goto LAB_08034110;
    }
    break;
  case 0x8034054:
    if (*(short *)(i_val5 + 0x20) != 0) {
      *(short *)(i_val5 + 0x20) = *(short *)(i_val5 + 0x20) + -1;
      goto LAB_08034110;
    }
    c_char3 = Entity_Routine_08034940(entity);
    if (c_char3 != '\0') goto LAB_08034110;
    break;
  case 0x8034078:
    i_val6 = (int)*(short *)((int)entity + 10);
    if (i_val6 != 0x168) {
      if (0x167 < i_val6) {
        if ((int)entity[6] < 0) goto LAB_08034110;
      }
      else if (0 < (int)entity[6]) goto LAB_08034110;
      u_val12 = 2;
      if (i_val6 <= 0x167) {
        u_val12 = 3;
      }
      Entity_Routine_08034180(entity,1,u_val12,0x8000);
      goto LAB_08034110;
    }
    if (-1 < (int)entity[7]) {
      Entity_Routine_08034180(entity,1,1,0x8000);
      goto LAB_08034110;
    }
    if (-8 < *(short *)((int)entity + 0xe)) goto LAB_08034110;
    NPC_Routine_0809E75C(i_val5);
    NPC_Routine_0809E7C8(i_val5,temp_buf_3c);
    NPC_Routine_0809E804(&stack_val_c4,*(undefined1 *)(entity + 0xc));
    Entity_Routine_0803211C(entity,&stack_val_c4);
    u_val1 = *(undefined1 *)(entity + 8);
    u_val12 = 0;
LAB_080340d2:
    Entity_Routine_08034180(entity,u_val12,u_val1,0);
    goto LAB_08034110;
  }
  Entity_Routine_080342D8(entity);
LAB_08034110:
  if (*(char *)((int)entity + 0x42) != '\0') {
    u_val10 = Entity_Routine_08034248(entity,*(undefined1 *)(entity + 0x10));
    if (*(ushort *)((int)entity + 0x22) != u_val10) {
      Entity_Routine_080321B0(entity);
    }
    *(char *)((int)entity + 0x42) = '\0';
  }
  if (entity[7] != 0) {
    entity[3] = entity[3] + entity[7];
  }
  if (entity[6] != 0) {
    entity[2] = entity[2] + entity[6];
  }
  if (*(short *)(entity + 9) == 0) {
    s_val4 = *(short *)((int)entity + 0x26);
  }
  else {
    s_val4 = *(short *)(entity + 9) + -1;
  }
  *(short *)(entity + 9) = s_val4;
  i_val5 = entity[4];
  if (i_val5 != 0) {
    _call_via_r1(i_val5,*(undefined4 *)(*(int *)(i_val5 + 4) + 0xc));
  }
  return;
}

// =============================================================================
// Function: Entity_Routine_08034180 @ 0x08034180
// =============================================================================
void Entity_Routine_08034180(int entity,uint speed,uint collision,int flags)

{
  uint u_val1;
  int i_val2;
  
  u_val1 = Entity_Routine_08034248();
  if (*(ushort *)(entity + 0x22) != u_val1) {
    Entity_Routine_080321B0(entity);
  }
  if (*(byte *)(entity + 0x20) != collision) {
    Entity_Routine_08032198(entity,collision);
  }
  *(undefined1 *)(entity + 0x42) = 0;
  if (speed == 1) {
    if (flags < 0) {
      flags = -flags;
    }
    if (collision == 1) {
      *(int *)(entity + 0x1c) = -flags;
      *(undefined4 *)(entity + 0x18) = 0;
    }
    else if ((int)collision < 2) {
      if (collision == 0) {
        *(int *)(entity + 0x1c) = flags;
        *(undefined4 *)(entity + 0x18) = 0;
      }
    }
    else {
      if (collision == 2) {
        *(int *)(entity + 0x18) = -flags;
      }
      else {
        if (collision != 3) goto LAB_0803420a;
        *(int *)(entity + 0x18) = flags;
      }
      *(undefined4 *)(entity + 0x1c) = 0;
    }
  }
  else if ((int)speed < 2) {
    if (speed == 0) {
LAB_080341c8:
      *(undefined4 *)(entity + 0x18) = 0;
      *(undefined4 *)(entity + 0x1c) = 0;
    }
  }
  else if ((int)speed < 5) goto LAB_080341c8;
LAB_0803420a:
  if (speed != *(byte *)(entity + 0x40)) {
    i_val2 = -1;
    if (speed == 2) {
      i_val2 = 8;
    }
    else {
      if (speed == 3) {
        i_val2 = 5;
      }
      if (i_val2 < 0) {
        Entity_Routine_080323C8(entity);
        goto LAB_0803423e;
      }
    }
    Entity_Routine_08032384(entity,i_val2,1);
  }
LAB_0803423e:
  *(byte *)(entity + 0x40) = (byte)speed;
  return;
}

// =============================================================================
// Function: Entity_Routine_08034260 @ 0x08034260
// =============================================================================
u32 Entity_Routine_08034260(undefined4 *entity)

{
  undefined4 u_val1;
  undefined4 u_val2;
  byte stack_bytes_28 [8];
  undefined1 temp_buf_20 [8];
  uint stack_val_18;
  
  if (*(char *)((int)entity + 0x41) == '\0') {
    u_val2 = *entity;
    Farmer_Routine_0801FE94(temp_buf_20,entity);
    u_val1 = NPC_Routine_0809E65C(entity[0xd]);
    Entity_Routine_080330F4(stack_bytes_28,entity[0xf],u_val2,temp_buf_20,u_val1,entity[0xe]);
    if ((stack_bytes_28[0] & 0xf) == 0) {
      *(char *)((int)entity + 0x41) = '\x01';
      u_val1 = 0;
    }
    else {
      NPC_Routine_0809E988(entity[0xe],*(undefined1 *)(entity + 0xc),stack_bytes_28);
      stack_val_18 = stack_val_18 & 0xFFFF0000;
      NPC_Routine_0809E7E4(entity[0xd],&stack_val_18);
      u_val1 = 1;
    }
  }
  else {
    u_val1 = 0;
  }
  return u_val1;
}

// =============================================================================
// Function: Entity_Routine_080342D8 @ 0x080342D8
// =============================================================================
void Entity_Routine_080342D8(int entity)

{
  char c_char1;
  uint u_val2;
  undefined4 u_val3;
  int i_val4;
  undefined4 u_val5;
  uint stack_val_10;
  
  NPC_Routine_0809E33C(*(undefined4 *)(entity + 0x34));
  c_char1 = Entity_Routine_080338F0();
  if ((c_char1 == '\0') || (c_char1 = Entity_Routine_08034260(entity), c_char1 == '\0')) {
    u_val2 = NPC_Routine_080AB788(0xb4);
    stack_val_10 = (stack_val_10 & 0xFFFF0000 | u_val2 & 0xffff) & 0xFF00FFFF;
    u_val5 = *(undefined4 *)(entity + 0x34);
    u_val3 = NPC_Routine_0809E65C(u_val5);
    i_val4 = Bachelorette_GetStatsByte(u_val5,u_val3);
    u_val2 = NPC_Routine_080AB788(0x100 - i_val4);
    stack_val_10 = stack_val_10 & 0x00FFFFFF | ((u_val2 >> 6) + 2) * 0x1000000;
    NPC_Routine_0809E7D8(*(undefined4 *)(entity + 0x34),&stack_val_10);
    Entity_Routine_08034180(entity,0,*(undefined1 *)(entity + 0x20),0);
  }
  return;
}

// =============================================================================
// Function: Entity_Routine_0803436C @ 0x0803436C
// =============================================================================
u32 Entity_Routine_0803436C(undefined4 *entity)

{
  ushort u_val1;
  short s_val2;
  char c_char3;
  uint u_val4;
  uint u_val5;
  undefined4 u_val6;
  uint *p_uint7;
  undefined4 u_val8;
  int i_val9;
  int i_val10;
  undefined4 stack_val_4c;
  uint stack_val_48;
  undefined4 stack_val_44;
  ushort stack_val_40;
  undefined4 stack_val_3c;
  ushort stack_val_38;
  short stack_val_34;
  short stack_val_32;
  undefined1 stack_val_30;
  undefined1 stack_val_2f;
  undefined1 stack_val_2e;
  undefined1 stack_val_2d;
  undefined1 stack_val_2c;
  undefined1 stack_buf_2b [3];
  undefined4 *puStack_28;
  int *piStack_24;
  
  piStack_24 = (int *)*entity;
  p_uint7 = (uint *)(entity[0xe] + (uint)*(byte *)(entity + 0xc) * 8);
  stack_val_4c = *p_uint7;
  stack_val_48 = p_uint7[1];
  puStack_28 = entity;
  NPC_Routine_0809E994(entity[0xe],*(byte *)(entity + 0xc),&stack_val_44);
  c_char3 = Entity_Routine_08033584(&stack_val_4c,puStack_28[0xf],piStack_24);
  if (c_char3 == '\0') goto case_080348FA;
  i_val10 = puStack_28[4];
  if (i_val10 != 0) {
    Entity_Routine_08033830(&stack_val_34,&stack_val_4c,puStack_28[0xf],piStack_24);
    u_val4 = stack_val_4c & 0xf;
    if (u_val4 == 4) {
      s_val2 = stack_val_32 + 0x18;
      if ((stack_val_4c._1_1_ & 7) < 4) {
        s_val2 = stack_val_32 + -0x20;
      }
    }
    else {
      s_val2 = stack_val_32;
      if (u_val4 < 5) {
        if (u_val4 == 3) {
          s_val2 = stack_val_32 + -0x18;
        }
      }
      else if (u_val4 == 5) {
        s_val2 = stack_val_32 + -0x28;
      }
    }
    stack_val_32 = s_val2;
    Entity_Routine_08034BFC(i_val10,*(undefined1 *)(puStack_28 + 0xc),(int)stack_val_34,(int)stack_val_32);
  }
  switch(stack_val_4c & 0xf) {
  case 1:
    u_val1 = *(ushort *)((int)puStack_28 + 10);
    stack_val_44 = CONCAT22(u_val1 >> 6,CONCAT11((char)((u_val1 & 0x3f) << 2),2));
    u_val6 = stack_val_44;
    stack_val_44._3_1_ = (byte)(u_val1 >> 0xe);
    stack_val_44 = CONCAT13(stack_val_44._3_1_ | (byte)((*(ushort *)((int)puStack_28 + 0xe) & 0x3f) << 2),
                         (int3)u_val6);
    stack_val_40 = stack_val_40 & 0xfc00 | *(ushort *)((int)puStack_28 + 0xe) >> 6;
    _call_via_r2(piStack_24,&stack_val_44,*(undefined4 *)(*piStack_24 + 0xd8));
    i_val10 = 1;
    goto LAB_080348fe;
  case 2:
    Farmer_Routine_0800EFEC();
    u_val1 = *(ushort *)((int)puStack_28 + 10);
    stack_val_3c = CONCAT22(u_val1 >> 6,CONCAT11((char)((u_val1 & 0x3f) << 2),2));
    u_val6 = stack_val_3c;
    stack_val_3c._3_1_ = (byte)(u_val1 >> 0xe);
    stack_val_3c = CONCAT13(stack_val_3c._3_1_ | (byte)((*(ushort *)((int)puStack_28 + 0xe) & 0x3f) << 2),
                         (int3)u_val6);
    stack_val_38 = stack_val_38 & 0xfc00 | *(ushort *)((int)puStack_28 + 0xe) >> 6;
    _call_via_r3(piStack_24,&stack_val_3c,&stack_val_44,*(undefined4 *)(*piStack_24 + 0xe0));
    c_char3 = Farmer_Routine_0800F06C(&stack_val_44);
    if (c_char3 == '\0') {
      i_val10 = Farmer_Routine_0800F09C(&stack_val_44);
      if (i_val10 == 0) {
        i_val10 = *piStack_24;
        Farmer_Routine_0800F0A4(&stack_val_3c,&stack_val_44);
        Item_Routine_0800E0FC(&stack_val_30,stack_val_3c & 0xffffff);
        _call_via_r2(piStack_24,&stack_val_30,*(undefined4 *)(i_val10 + 0x15c));
      }
      else {
        if (i_val10 != 1) break;
        i_val10 = *piStack_24;
        u_val6 = Farmer_Routine_0800F0E8(&stack_val_44);
        Item_Routine_0800E148(&stack_val_2f,u_val6);
        _call_via_r2(piStack_24,&stack_val_2f,*(undefined4 *)(i_val10 + 0x15c));
      }
      i_val10 = 0;
      goto LAB_080348fe;
    }
    break;
  case 3:
    Building_Routine_0800C7D8(puStack_28[0xf] + 0x3fc,1);
    Building_Routine_0800C814(puStack_28[0xf] + 0x3fc,stack_val_4c._1_1_);
    u_val4 = stack_val_4c >> 8 & 0xff;
    u_val6 = *(undefined4 *)(*piStack_24 + 0xa0);
    goto LAB_0803466e;
  case 4:
    ToolStack_GetAmount(puStack_28[0xf] + 0x5dc,1);
    ToolStack_AddAmount(puStack_28[0xf] + 0x5dc,stack_val_4c._1_1_);
    u_val4 = stack_val_4c >> 8 & 0xff;
    u_val6 = *(undefined4 *)(*piStack_24 + 0x9c);
    goto LAB_0803466e;
  case 5:
    ToolStack_GetAmount(puStack_28[0xf] + 0x5dc,1);
    Food_Construct(puStack_28[0xf] + 0x5dc,stack_val_4c._1_1_);
    u_val4 = (stack_val_4c >> 8 & 0xff) + 0x10;
    u_val6 = *(undefined4 *)(*piStack_24 + 0x9c);
LAB_0803466e:
    _call_via_r2(piStack_24,u_val4,u_val6);
    i_val10 = 2;
LAB_080348fe:
    gba_memcpy(&stack_val_44,gRomData_080F1496,3);
    if ((i_val10 != 3) && (u_val4 = NPC_Routine_080AB788(200), u_val4 < *(byte *)((int)&stack_val_44 + i_val10)))
    {
      NPC_Routine_0809E69C(puStack_28[0xd],i_val10,1);
    }
    u_val6 = 1;
    goto LAB_0803492a;
  case 6:
    i_val10 = _call_via_r2(piStack_24,stack_val_4c._1_1_ + 0x36,*(undefined4 *)(*piStack_24 + 0x40));
    if (i_val10 != 0) {
      c_char3 = _call_via_r1(i_val10,*(undefined4 *)(*(int *)(i_val10 + 0x14) + 0x50));
      if (c_char3 != '\0') {
        _call_via_r1(i_val10,*(undefined4 *)(*(int *)(i_val10 + 0x14) + 0x70));
      }
      c_char3 = _call_via_r1(i_val10,*(undefined4 *)(*(int *)(i_val10 + 0x14) + 0x54));
      if (c_char3 != '\0') {
        u_val6 = _call_via_r1(i_val10,*(undefined4 *)(*(int *)(i_val10 + 0x14) + 0x74));
        u_val8 = 0x1c;
        switch(u_val6) {
        case 0:
          u_val8 = 0x1c;
          break;
        case 1:
          u_val8 = 0x1d;
          break;
        case 2:
          u_val8 = 0x1e;
          break;
        case 3:
          u_val8 = 0x1f;
          break;
        case 4:
          u_val8 = 0x20;
          break;
        case 5:
          u_val8 = 0x21;
        }
        i_val9 = *piStack_24;
        Item_SetIdAndClearQuality(&stack_val_44,u_val8);
        Item_Routine_0800E0FC(&stack_val_2e,stack_val_44 & 0xffffff);
        _call_via_r2(piStack_24,&stack_val_2e,*(undefined4 *)(i_val9 + 0x15c));
      }
      c_char3 = _call_via_r1(i_val10,*(undefined4 *)(*(int *)(i_val10 + 0x14) + 0x58));
      if (c_char3 != '\0') {
        u_val6 = _call_via_r1(i_val10,*(undefined4 *)(*(int *)(i_val10 + 0x14) + 0x78));
        u_val8 = 5;
        switch(u_val6) {
        case 0:
          u_val8 = 5;
          break;
        case 1:
          u_val8 = 6;
          break;
        case 2:
          u_val8 = 7;
          break;
        case 3:
          u_val8 = 8;
          break;
        case 4:
          u_val8 = 9;
          break;
        case 5:
          u_val8 = 10;
        }
        i_val9 = *piStack_24;
        Item_SetQuality(&stack_val_2c,u_val8);
        Item_Routine_0800E148(&stack_val_2d,stack_val_2c);
        _call_via_r2(piStack_24,&stack_val_2d,*(undefined4 *)(i_val9 + 0x15c));
      }
      _call_via_r2(i_val10,0x3c,*(undefined4 *)(*(int *)(i_val10 + 0x14) + 0x88));
      i_val10 = 2;
      goto LAB_080348fe;
    }
    break;
  case 7:
    i_val10 = _call_via_r2(piStack_24,stack_val_4c._1_1_ + 0x2e,*(undefined4 *)(*piStack_24 + 0x40));
    if (i_val10 != 0) {
      c_char3 = _call_via_r1(i_val10,*(undefined4 *)(*(int *)(i_val10 + 0x14) + 0x50));
      if (c_char3 != '\0') {
        _call_via_r1(i_val10,*(undefined4 *)(*(int *)(i_val10 + 0x14) + 0x70));
      }
      _call_via_r2(i_val10,0x3c,*(undefined4 *)(*(int *)(i_val10 + 0x14) + 0x88));
      i_val10 = 2;
      goto LAB_080348fe;
    }
    break;
  case 8:
    u_val4 = (uint)stack_val_4c._1_1_;
    i_val10 = Building_Routine_0800C6A0(puStack_28[0xf] + 0x3fc);
    if (i_val10 != 0) {
      u_val5 = *(byte *)(i_val10 + 6) & 7;
      u_val6 = 0xf;
      if (u_val5 < 6) {
        switch((uint)(&case_08034868)[u_val5] & 0xfffffffe) {
        case 0x8034868:
        case 0x8034880:
          u_val6 = 0xf;
          break;
        case 0x8034884:
          u_val6 = 0x10;
          break;
        case 0x8034888:
          u_val6 = 0x11;
          break;
        case 0x803488c:
          u_val6 = 0x12;
          break;
        case 0x8034890:
          u_val6 = 0x13;
          break;
        case 0x8034894:
          u_val6 = 0x14;
        }
      }
      _call_via_r2((int *)*puStack_28,u_val4 + 0x4c,*(undefined4 *)(*(int *)*puStack_28 + 0x3c));
      Building_Routine_0800C9B8(puStack_28[0xf] + 0x3fc,stack_val_4c._1_1_);
      i_val10 = *piStack_24;
      Item_SetIdAndClearQuality(&stack_val_44,u_val6);
      Item_Routine_0800E0FC(stack_buf_2b,stack_val_44 & 0xffffff);
      _call_via_r2(piStack_24,stack_buf_2b,*(undefined4 *)(i_val10 + 0x15c));
      i_val10 = 2;
      goto LAB_080348fe;
    }
  }
case_080348FA:
  u_val6 = 0;
LAB_0803492a:
  return u_val6;
}

// =============================================================================
// Function: Entity_Routine_08034940 @ 0x08034940
// =============================================================================
u32 Entity_Routine_08034940(undefined4 *entity)

{
  ushort u_val1;
  int i_val2;
  uint u_val3;
  undefined4 u_val4;
  short stack_val_18;
  short stack_val_16;
  short stack_val_14;
  short stack_val_12;
  undefined1 temp_coords [4];
  
  i_val2 = _call_via_r1((int *)*entity,*(undefined4 *)(*(int *)*entity + 0x144));
  u_val3 = *(ushort *)(i_val2 + 10) & 0x1f;
  if (5 < u_val3) {
    if ((u_val3 - 6) * 0x3c + ((*(ushort *)(i_val2 + 10) & 0x7ff) >> 5) <
        (uint)*(byte *)(entity + 0xc) + 0x385) {
      u_val4 = 0;
      goto LAB_08034a0a;
    }
  }
  u_val1 = *(ushort *)(entity + 1);
  if (u_val1 == 0x11) {
    Farm_GetHouseCoordinates(&stack_val_14);
    Farmer_Routine_0801FE78(entity,2,(int)stack_val_14,(int)stack_val_12);
  }
  else if ((0x11 < u_val1) && (u_val1 == 0x25)) {
    Farm_GetSpawnCoordinates(&stack_val_18);
    Farmer_Routine_0801FE78(entity,2,(int)stack_val_18,(int)stack_val_16);
  }
  NPC_Routine_0809E994(entity[0xe],*(undefined1 *)(entity + 0xc));
  NPC_Routine_0809E7FC(entity[0xd],temp_coords);
  if (*(short *)((int)entity + 10) == 0x168) {
    u_val4 = 1;
  }
  else {
    u_val4 = 2;
    if (*(short *)((int)entity + 10) <= 0x167) {
      u_val4 = 3;
    }
  }
  Entity_Routine_08034180(entity,1,u_val4,0x8000);
  u_val4 = 1;
LAB_08034a0a:
  return u_val4;
}

// =============================================================================
// Function: Entity_Routine_08034AA0 @ 0x08034AA0
// =============================================================================
void Entity_Routine_08034AA0(int entity)

{
  char c_char1;
  int i_val2;
  char *p_char3;
  
  Entity_Routine_0803260C();
  if (*(short *)(entity + 0xd0) == 0) {
    return;
  }
  p_char3 = (char *)(entity + 0xcb);
  if (*p_char3 == '\0') {
    i_val2 = Animal_Routine_0805E8F0(entity + 0xb4);
    if (-1 < i_val2 * 0x40000000) goto LAB_08034ad6;
    p_char3 = (char *)(entity + 200);
    c_char1 = '\x01';
  }
  else {
    c_char1 = '\0';
  }
  *p_char3 = c_char1;
LAB_08034ad6:
  *(short *)(entity + 0xd0) = *(short *)(entity + 0xd0) + -1;
  return;
}

// =============================================================================
// Function: Entity_Routine_08034AE8 @ 0x08034AE8
// =============================================================================
void Entity_Routine_08034AE8(int entity,undefined4 *speed)

{
  short s_val1;
  short s_val2;
  short s_val3;
  short s_val4;
  int i_val5;
  undefined4 *p_uint6;
  undefined1 temp_buf_48 [8];
  undefined1 temp_buf_40 [8];
  undefined1 stack_buf_38 [16];
  undefined4 stack_val_28;
  undefined4 stack_val_24;
  
  Entity_Routine_08032690();
  if (*(short *)(entity + 0xd0) != 0) {
    stack_val_28 = *speed;
    stack_val_24 = speed[2];
    s_val1 = *(short *)(entity + 0xcc);
    s_val2 = *(short *)(entity + 0xce);
    s_val3 = *(short *)(speed + 3);
    s_val4 = *(short *)((int)speed + 0xe);
    p_uint6 = (undefined4 *)(entity + 0x8c);
    _call_via_r3(temp_buf_48,*(int **)(entity + 0xb4),
                    *(undefined2 *)
                     (*(int *)(entity + 0xb8) + (uint)*(ushort *)(entity + 0xc0) * 4),
                    *(undefined4 *)(**(int **)(entity + 0xb4) + 0x10));
    if ((int)(-*(uint *)(entity + 0x94) | *(uint *)(entity + 0x94)) < 0) {
      i_val5 = _call_via_r4(stack_val_24,(int)s_val1 - (int)s_val3,(int)s_val2 - (int)s_val4,0x55,
                              0x8000 - s_val2,temp_buf_48,*p_uint6,*(undefined2 *)(entity + 0x98),
                              entity + 0x9c);
    }
    else {
      i_val5 = 0;
    }
    if ((i_val5 != 0) && (*(char *)(entity + 200) != '\0')) {
      NPC_Routine_080A480C(p_uint6,stack_val_28,temp_buf_40);
      if (*(char *)(entity + 0xc9) == '\0') {
        if (*(char *)(entity + 0xca) == '\0') {
          NPC_Routine_080A4944(p_uint6,stack_buf_38,1);
          *(char *)(entity + 0xca) = '\x01';
        }
      }
      else {
        NPC_Routine_080A4944(p_uint6,stack_buf_38,1);
      }
      *(char *)(entity + 200) = '\0';
    }
  }
  return;
}

// =============================================================================
// Function: Entity_Routine_08034BFC @ 0x08034BFC
// =============================================================================
void Entity_Routine_08034BFC(int entity,int speed,undefined2 collision,undefined2 flags)

{
  
  Animal_Routine_0805E860(entity + 0xb4,*(undefined2 *)(speed * 2 + gRomData_080F14F0));
  *(undefined1 *)(entity + 200) = 1;
  *(undefined1 *)(entity + 0xca) = 0;
  *(undefined1 *)(entity + 0xcb) = 1;
  *(undefined2 *)(entity + 0xcc) = collision;
  *(undefined2 *)(entity + 0xce) = flags;
  *(undefined2 *)(entity + 0xd0) = 0x3c;
  return;
}

// =============================================================================
// Function: Entity_Routine_08034C4C @ 0x08034C4C
// =============================================================================
void Entity_Routine_08034C4C(int entity,undefined4 speed,undefined4 collision)

{
  
  Entity_Routine_08033B84(entity,*(undefined1 *)(entity + 0x30),speed,collision);
  return;
}

// =============================================================================
// Function: Entity_Routine_08034C64 @ 0x08034C64
// =============================================================================
u32 Entity_Routine_08034C64(undefined4 entity,ushort *speed)

{
  undefined4 *p_uint1;
  int i_val2;
  uint u_val3;
  int i_val4;
  ushort *p_uint5;
  int stack_val_14;
  
  p_uint1 = gRomData_080F29C0;
  i_val2 = _call_via_r1(entity,*gRomData_080F29C0);
  p_uint5 = *(ushort **)(i_val2 * 4 + p_uint1[2]);
  if (p_uint5 != (ushort *)0x0) {
    u_val3 = *speed & 0x1f;
    i_val2 = u_val3 - 6;
    if (i_val2 < 0) {
      i_val2 = u_val3 + 0x12;
    }
    stack_val_14 = i_val2 * 0x3c + ((*speed & 0x7ff) >> 5);
    i_val4 = *(int *)(p_uint5 + 2);
    i_val2 = VTable_Routine_080D7ECC(i_val4,i_val4 + (uint)*p_uint5 * 8,&stack_val_14,0,0);
    u_val3 = (i_val2 - i_val4 >> 3) - 1;
    if ((u_val3 < *p_uint5) && (i_val2 = *(int *)(u_val3 * 8 + *(int *)(p_uint5 + 2) + 4), i_val2 != 0)) {
      u_val3 = -(*(ushort *)(i_val2 + 10) & 0x3ff ^ 0x1d) >> 0x1f;
      goto LAB_08034ce2;
    }
  }
  u_val3 = 0;
LAB_08034ce2:
  return u_val3;
}

// =============================================================================
// Function: Entity_ProcessCollisions @ 0x08034CEC
// =============================================================================
undefined8
Entity_ProcessCollisions(int entity,undefined4 speed,int collision,undefined4 flags,undefined4 arg_5,
             uint arg_6,undefined2 arg_7,undefined2 arg_8)

{
  uint u_val1;
  undefined1 stack_buf_1c [8];
  
  NPC_Routine_0809E32C(stack_buf_1c,collision);
  u_val1 = arg_6;
  if (*(ushort *)(collision + 0x12) != 0xFFFF) {
    u_val1 = (uint)*(ushort *)(collision + 0x12);
  }
  Entity_UpdatePositions(entity,speed,stack_buf_1c,2,u_val1);
  *(undefined4 *)(entity + 0x14) = gRomData_080E71D8;
  *(int *)(entity + 0x30) = collision;
  *(undefined4 *)(entity + 0x34) = flags;
  *(undefined4 *)(entity + 0x38) = arg_5;
  *(byte *)(entity + 0x3c) = *(byte *)(collision + 0xc) & 0x1f;
  *(char *)(entity + 0x3d) = (char)((*(ushort *)(collision + 0xc) & 0x3ff) >> 5);
  *(char *)(entity + 0x3e) = (char)((*(byte *)(collision + 0xd) & 0x7f) >> 2);
  *(undefined1 *)(entity + 0x3f) = 0;
  *(short *)(entity + 0x40) = (short)((*(uint *)(collision + 0xc) & 0x1ffffff) >> 0xf);
  *(undefined2 *)(entity + 0x42) = arg_8;
  *(undefined2 *)(entity + 0x44) = (undefined2)arg_6;
  *(undefined2 *)(entity + 0x46) = arg_7;
  if (*(ushort *)(*(int *)(entity + 0x30) + 0x12) == 0xFFFF) {
    Entity_Routine_08034F00(entity,1);
  }
  else {
    *(undefined1 *)(entity + 6) = 1;
    if (*(short *)(entity + 0x22) != *(short *)(collision + 0x12)) {
      Entity_Routine_080321B0(entity);
    }
  }
  return entity;
}

// =============================================================================
// Function: Entity_Routine_08034DB0 @ 0x08034DB0
// =============================================================================
void Entity_Routine_08034DB0(int entity,uint speed)

{
  int i_val1;
  undefined4 u_val2;
  undefined1 temp_buf_18 [8];
  
  *(undefined4 *)(entity + 0x14) = gRomData_080E71D8;
  u_val2 = *(undefined4 *)(entity + 0x30);
  Entity_Routine_08032170(temp_buf_18,entity);
  NPC_Routine_0809E368(u_val2,temp_buf_18);
  if (*(char *)(entity + 6) == '\0') {
    *(short *)(*(int *)(entity + 0x30) + 0x12) = (short)0xFFFF;
  }
  else {
    *(undefined2 *)(*(int *)(entity + 0x30) + 0x12) = *(undefined2 *)(entity + 0x22);
  }
  if (*(int *)(entity + 0x38) != 0) {
    *(byte *)(*(int *)(entity + 0x30) + 0xc) =
         *(byte *)(*(int *)(entity + 0x30) + 0xc) & 0xe0 | *(byte *)(entity + 0x3c) & 0x1f;
    *(ushort *)(*(int *)(entity + 0x30) + 0xc) =
         (ushort)0xFFFFFC1F & *(ushort *)(*(int *)(entity + 0x30) + 0xc) |
         (*(byte *)(entity + 0x3d) & 0x1f) << 5;
    *(byte *)(*(int *)(entity + 0x30) + 0xd) =
         *(byte *)(*(int *)(entity + 0x30) + 0xd) & 0x83 | (*(byte *)(entity + 0x3e) & 0x1f) << 2;
    *(uint *)(*(int *)(entity + 0x30) + 0xc) =
         *(uint *)(*(int *)(entity + 0x30) + 0xc) & 0xFE007FFF |
         (*(ushort *)(entity + 0x40) & 0x3FF) << 0xf;
  }
  *(undefined4 *)(entity + 0x14) = gRomData_080E6250;
  i_val1 = *(int *)(entity + 0x10);
  if (i_val1 != 0) {
    _call_via_r2(i_val1,3,*(undefined4 *)(*(int *)(i_val1 + 4) + 8));
  }
  if ((speed & 1) != 0) {
    CppRuntime_FreeMemory(entity);
  }
  return;
}

// =============================================================================
// Function: Entity_Routine_08034E8C @ 0x08034E8C
// =============================================================================
void Entity_Routine_08034E8C(int entity)

{
  
  Farmer_Routine_0801FE20();
  NPC_Routine_0809E3DC(*(undefined4 *)(entity + 0x30));
  return;
}

// =============================================================================
// Function: Entity_Routine_08034EA0 @ 0x08034EA0
// =============================================================================
void Entity_Routine_08034EA0(int entity)

{
  
  *(undefined1 *)(entity + 6) = 0;
  _call_via_r2(entity,1,*(undefined4 *)(*(int *)(entity + 0x14) + 0x3c));
  return;
}

// =============================================================================
// Function: Entity_Routine_08034EB4 @ 0x08034EB4
// =============================================================================
void Entity_Routine_08034EB4(int entity)

{
  short s_val1;
  int i_val2;
  
  Entity_Routine_08035380();
  if (*(short *)(entity + 0x24) == 0) {
    s_val1 = *(short *)(entity + 0x26);
  }
  else {
    s_val1 = *(short *)(entity + 0x24) + -1;
  }
  *(short *)(entity + 0x24) = s_val1;
  i_val2 = *(int *)(entity + 0x10);
  if (i_val2 != 0) {
    _call_via_r1(i_val2,*(undefined4 *)(*(int *)(i_val2 + 4) + 0xc));
  }
  return;
}

// =============================================================================
// Function: Entity_Routine_08034EE0 @ 0x08034EE0
// =============================================================================
u32 Entity_Routine_08034EE0(int entity)

{
  uint u_val1;
  
  u_val1 = (uint)*(ushort *)(*(int *)(entity + 0x30) + 0x10);
  if (u_val1 == 0) {
    u_val1 = (uint)*(ushort *)(entity + 0x42);
  }
  return u_val1;
}

// =============================================================================
// Function: Entity_Routine_08034F00 @ 0x08034F00
// =============================================================================
void Entity_Routine_08034F00(undefined4 *entity,int speed)

{
  byte b_flag1;
  char c_char2;
  byte *pbVar3;
  int i_val4;
  uint u_val5;
  byte *pbVar6;
  uint u_val7;
  short *psVar8;
  int i_val9;
  int i_val10;
  ushort *p_uint11;
  int i_val12;
  undefined4 u_val13;
  uint u_val14;
  ushort *p_uint15;
  bool b_flag16;
  undefined1 temp_buf_50 [8];
  uint stack_val_48;
  uint stack_val_44;
  int stack_val_40;
  undefined4 *puStack_3c;
  int stack_val_38;
  ushort *puStack_34;
  uint stack_val_30;
  uint stack_val_2c;
  byte *pbStack_28;
  byte *pbStack_24;
  
  if (speed < 1) {
    return;
  }
  pbVar3 = (byte *)(entity + 0xf);
  pbStack_24 = (byte *)((int)entity + 0x3d);
  stack_val_40 = speed;
  if ((undefined4 *)entity[0xe] == (undefined4 *)0x0) {
LAB_08035312:
    if (1 < stack_val_40) {
      Farmer_Routine_0801FF38(entity,0x234);
      u_val13 = entity[0xc];
      Entity_Routine_08032170(temp_buf_50,entity);
      NPC_Routine_0809E368(u_val13,temp_buf_50);
    }
    if (*(char *)(entity + 8) != '\0') {
      Entity_Routine_08032198(entity,0);
    }
    entity[6] = 0;
    entity[7] = 0;
    if (*(short *)((int)entity + 0x22) != *(short *)(entity + 0x11)) {
      Entity_Routine_080321B0(entity);
    }
    *pbVar3 = 0;
    *pbStack_24 = 0;
    *(undefined1 *)((int)entity + 0x3e) = 0;
    *(undefined2 *)(entity + 0x10) = 0;
    return;
  }
  if (2 < speed) {
    b_flag1 = _call_via_r1(entity[0xd],*(undefined4 *)entity[0xe]);
    *pbVar3 = b_flag1;
  }
  p_uint15 = *(ushort **)((uint)*pbVar3 * 4 + *(int *)(entity[0xe] + 8));
  if (p_uint15 == (ushort *)0x0) goto LAB_08035312;
  i_val4 = _call_via_r1((int *)*entity,*(undefined4 *)(*(int *)*entity + 0x144));
  u_val5 = *(ushort *)(i_val4 + 10) & 0x1f;
  i_val9 = u_val5 - 6;
  if (i_val9 < 0) {
    i_val9 = u_val5 + 0x12;
  }
  u_val5 = i_val9 * 0x3c + ((*(ushort *)(i_val4 + 10) & 0x7ff) >> 5);
  if (2 < stack_val_40) {
    i_val9 = *(int *)(p_uint15 + 2);
    stack_val_48 = u_val5;
    i_val4 = VTable_Routine_080D7ECC(i_val9,i_val9 + (uint)*p_uint15 * 8,&stack_val_48,0,0);
    *pbStack_24 = (char)(i_val4 - i_val9 >> 3) - 1;
    *(undefined1 *)((int)entity + 0x3e) = 0;
  }
  if ((uint)*p_uint15 <= (uint)*pbStack_24) goto LAB_08035312;
  p_uint15 = (ushort *)(*(int *)(p_uint15 + 2) + (uint)*pbStack_24 * 8);
  puStack_3c = *(undefined4 **)(p_uint15 + 2);
  if (puStack_3c == (undefined4 *)0x0) goto LAB_08035312;
  stack_val_38 = 0;
  p_uint11 = (ushort *)*puStack_3c;
  if ((p_uint11 == (ushort *)0x0) || (*(ushort *)(puStack_3c + 1) == 0)) {
    if (1 < stack_val_40) {
      Farmer_Routine_0801FE78(entity,*(ushort *)((int)puStack_3c + 10) & 0x3ff,
                    (int)*(short *)((int)puStack_3c + 6),(int)*(short *)(puStack_3c + 2));
    }
    if ((uint)*(byte *)(entity + 8) != (*(byte *)((int)puStack_3c + 0xb) & 0xf) >> 2) {
      Entity_Routine_08032198(entity);
    }
    entity[6] = 0;
    entity[7] = 0;
    goto LAB_080352ca;
  }
  pbVar6 = (byte *)((int)entity + 0x3e);
  if ((uint)*(ushort *)(puStack_3c + 1) <= (uint)*pbVar6) goto LAB_08035312;
  i_val4 = (int)*(short *)((int)puStack_3c + 6);
  i_val9 = (int)*(short *)(puStack_3c + 2);
  u_val14 = (*(byte *)((int)puStack_3c + 0xb) & 0xf) >> 2;
  if ((int)((uint)*(byte *)((int)puStack_3c + 0xb) * 0x8000000) < 0) {
    p_uint15 = p_uint11 + (uint)*pbVar6 * 4;
    pbStack_28 = (byte *)(entity + 8);
    for (; p_uint11 != p_uint15; p_uint11 = p_uint11 + 4) {
      i_val10 = (int)(short)*p_uint11;
      if ((int)((uint)(byte)p_uint11[3] * 0x20000000) < 0) {
        if (i_val9 != i_val10) {
          i_val9 = i_val10;
        }
      }
      else if (i_val4 != i_val10) {
        i_val4 = i_val10;
      }
    }
    if (1 < stack_val_40) {
      *(short *)(entity + 0x10) = 0;
    }
    b_flag16 = (int)((uint)(byte)p_uint15[3] * 0x20000000) < 0;
    i_val10 = i_val9;
    if (!b_flag16) {
      i_val10 = i_val4;
    }
    i_val12 = (short)*p_uint15 - i_val10;
    if ((*(short *)(entity + 0x10) == 0) && ((short)*p_uint15 != i_val10)) {
      i_val10 = 0;
      if (*(char *)((int)entity + 0x3f) == '\0') {
        i_val10 = 0x8000;
      }
      if (p_uint15[1] != 0) {
        i_val10 = (uint)p_uint15[1] * i_val10;
      }
      if (b_flag16) {
        if (-1 < i_val12) {
          entity[7] = i_val10;
        }
        else {
          entity[7] = -i_val10;
        }
        u_val14 = (uint)(-1 >= i_val12);
        entity[6] = 0;
      }
      else {
        if (i_val12 < 0) {
          u_val14 = 2;
          entity[6] = -i_val10;
        }
        else {
          u_val14 = 3;
          entity[6] = i_val10;
        }
        entity[7] = 0;
      }
      stack_val_38 = 0;
      if (*(char *)((int)entity + 0x3f) == '\0') {
        stack_val_38 = 1;
      }
    }
    else {
      if (b_flag16) {
        i_val9 = (int)(short)*p_uint15;
      }
      else {
        i_val4 = (int)(short)*p_uint15;
      }
      entity[6] = 0;
      entity[7] = 0;
      u_val14 = (byte)p_uint15[3] & 3;
    }
LAB_08035266:
    if (1 < stack_val_40) {
      Farmer_Routine_0801FE78(entity,*(ushort *)((int)puStack_3c + 10) & 0x3ff,i_val4,i_val9);
    }
  }
  else {
    u_val7 = (uint)*p_uint15;
    stack_val_44 = 0;
    if (u_val7 <= u_val5) {
      stack_val_44 = u_val5 - u_val7;
    }
    puStack_34 = p_uint11;
    if (2 < stack_val_40) {
      i_val10 = VTable_Routine_080DC96C(p_uint11,p_uint11 + (uint)*(ushort *)(puStack_3c + 1) * 4,&stack_val_44,0,0)
      ;
      *pbVar6 = (byte)(i_val10 - (int)p_uint11 >> 3);
      if (*(ushort *)(puStack_3c + 1) <= (ushort)*pbVar6) {
        *pbVar6 = (char)*(ushort *)(puStack_3c + 1) - 1;
      }
    }
    p_uint11 = puStack_34 + (uint)*pbVar6 * 4;
    stack_val_30 = 0;
    pbStack_28 = (byte *)(entity + 8);
    for (p_uint15 = puStack_34; p_uint15 != p_uint11; p_uint15 = p_uint15 + 4) {
      stack_val_30 = (uint)*p_uint15;
      i_val10 = (int)(short)p_uint15[1];
      if ((p_uint15[2] & 1) == 0) {
        if ((i_val4 != i_val10) && (u_val14 = 3, b_flag16 = i_val10 < i_val4, i_val4 = i_val10, b_flag16)) {
          u_val14 = 2;
        }
      }
      else if (i_val9 != i_val10) {
        u_val14 = (uint)(i_val10 < i_val9);
        i_val9 = i_val10;
      }
    }
    b_flag16 = (p_uint11[2] & 1) == 0;
    i_val10 = i_val9;
    if (b_flag16) {
      i_val10 = i_val4;
    }
    stack_val_2c = (short)p_uint11[1] - i_val10;
    if (stack_val_2c == 0) {
      entity[6] = 0;
      entity[7] = 0;
    }
    else {
      if (*(char *)((int)entity + 0x3f) == '\0') {
        u_val13 = math_udivsi3(stack_val_2c * 0x10000,(*p_uint11 - stack_val_30) * 0x19);
      }
      else {
        u_val13 = 0;
      }
      if (b_flag16) {
        u_val14 = 3;
        if ((int)stack_val_2c < 0) {
          u_val14 = 2;
        }
        entity[6] = u_val13;
        u_val13 = 0;
      }
      else {
        u_val14 = stack_val_2c >> 0x1f;
        entity[6] = 0;
      }
      entity[7] = u_val13;
      stack_val_38 = 0;
      if (*(char *)((int)entity + 0x3f) == '\0') {
        stack_val_38 = 1;
      }
    }
    if (2 < stack_val_40) {
      *(undefined2 *)(entity + 0x10) = 0;
      if (b_flag16) {
        if (stack_val_44 < *p_uint11) {
          i_val4 = i_val4 + ((int)(entity[6] * (stack_val_44 - stack_val_30) * 0x19) >> 0x10);
        }
        else {
          i_val4 = (int)(short)p_uint11[1];
        }
      }
      else if (stack_val_44 < *p_uint11) {
        i_val9 = i_val9 + ((int)(entity[7] * (stack_val_44 - stack_val_30) * 0x19) >> 0x10);
      }
      else {
        i_val9 = (int)(short)p_uint11[1];
      }
      goto LAB_08035266;
    }
    if (1 < stack_val_40) {
      *(short *)(entity + 0x10) = ((short)stack_val_44 - (short)stack_val_30) * 0x19;
      goto LAB_08035266;
    }
  }
  if (*pbStack_28 != u_val14) {
    Entity_Routine_08032198(entity,u_val14);
  }
LAB_080352ca:
  if (1 < stack_val_40) {
    u_val13 = entity[0xc];
    Entity_Routine_08032170(temp_buf_50,entity);
    NPC_Routine_0809E368(u_val13,temp_buf_50);
  }
  if ((stack_val_38 == 0) ||
     (c_char2 = _call_via_r1(entity,*(undefined4 *)(entity[5] + 0x28)), c_char2 != '\0')) {
    psVar8 = (short *)(entity + 0x11);
  }
  else {
    psVar8 = (short *)((int)entity + 0x46);
  }
  if (*(short *)((int)entity + 0x22) == *psVar8) {
    return;
  }
  Entity_Routine_080321B0(entity);
  return;
}

// =============================================================================
// Function: Entity_Routine_08035380 @ 0x08035380
// =============================================================================
void Entity_Routine_08035380(undefined4 *entity)

{
  byte b_flag1;
  ushort u_val2;
  undefined4 u_val3;
  undefined4 u_val4;
  int i_val5;
  uint u_val6;
  char *p_char7;
  int i_val8;
  uint u_val9;
  int *p_int10;
  int i_val11;
  int *p_int12;
  bool b_flag13;
  bool b_flag14;
  int stack_val_dc;
  int stack_val_d8;
  int stack_val_d4;
  int stack_val_d0;
  undefined4 stack_val_cc;
  undefined4 stack_val_c8;
  undefined4 stack_val_c4;
  undefined4 stack_val_c0;
  undefined4 stack_val_bc;
  undefined4 stack_val_b8;
  undefined4 stack_val_b4;
  undefined4 stack_val_b0;
  short stack_val_ac;
  short stack_val_aa;
  short stack_val_a8;
  short stack_val_a6;
  int stack_val_a4;
  int stack_val_a0;
  int stack_val_9c;
  int stack_val_98;
  undefined4 stack_val_94;
  undefined4 stack_val_90;
  undefined4 stack_val_8c;
  undefined4 stack_val_88;
  undefined4 stack_val_84;
  undefined4 stack_val_80;
  undefined4 stack_val_7c;
  undefined4 stack_val_78;
  short stack_val_74;
  short stack_val_72;
  short stack_val_70;
  short stack_val_6e;
  ushort *puStack_6c;
  int *piStack_68;
  int stack_val_64;
  int stack_val_60;
  int *piStack_5c;
  int stack_val_58;
  int stack_val_54;
  int stack_val_50;
  int stack_val_4c;
  short *psStack_48;
  int *piStack_44;
  int *piStack_40;
  int stack_val_3c;
  int stack_val_38;
  int stack_val_34;
  int stack_val_30;
  byte *pbStack_2c;
  byte *pbStack_28;
  ushort *puStack_24;
  
  p_int12 = &stack_val_dc;
  p_int10 = (int *)*entity;
  if (entity[0xe] == 0) {
    return;
  }
  puStack_6c = *(ushort **)((uint)*(byte *)(entity + 0xf) * 4 + *(int *)(entity[0xe] + 8));
  if (puStack_6c == (ushort *)0x0) {
    return;
  }
  pbStack_2c = (byte *)((int)entity + 0x3d);
  if ((uint)*puStack_6c <= (uint)*pbStack_2c) {
    return;
  }
  i_val11 = *(int *)(puStack_6c + 2) + (uint)*pbStack_2c * 8;
  piStack_68 = *(int **)(i_val11 + 4);
  if (piStack_68 == (int *)0x0) {
    return;
  }
  i_val5 = _call_via_r1(p_int10,*(undefined4 *)(*p_int10 + 0x144));
  u_val6 = *(ushort *)(i_val5 + 10) & 0x1f;
  i_val8 = u_val6 - 6;
  if (i_val8 < 0) {
    i_val8 = u_val6 + 0x12;
  }
  u_val6 = i_val8 * 0x3c + ((*(ushort *)(i_val5 + 10) & 0x7ff) >> 5);
  stack_val_64 = 0;
  i_val5 = *piStack_68;
  if ((i_val5 == 0) || (*(ushort *)(piStack_68 + 1) == 0)) {
    if (((ushort)(*pbStack_2c + 1) < *puStack_6c) && (*(ushort *)(i_val11 + 8) <= u_val6)) {
      *(undefined1 *)((int)entity + 0x3e) = 0;
      *pbStack_2c = *pbStack_2c + 1;
      stack_val_64 = 2;
    }
  }
  else {
    pbStack_28 = (byte *)((int)entity + 0x3e);
    u_val9 = (uint)*pbStack_28;
    if (*(ushort *)(piStack_68 + 1) <= u_val9) {
      return;
    }
    if ((int)((uint)*(byte *)((int)piStack_68 + 0xb) * 0x8000000) < 0) {
      psStack_48 = (short *)(i_val5 + u_val9 * 8);
      b_flag13 = (int)((uint)*(byte *)(psStack_48 + 3) * 0x20000000) < 0;
      b_flag14 = false;
      if (((ushort)(*pbStack_2c + 1) < *puStack_6c) && (*(ushort *)(i_val11 + 8) <= u_val6)) {
        b_flag14 = true;
      }
      if ((b_flag14) &&
         (u_val2 = *(ushort *)(entity + 1),
         u_val6 = _call_via_r1(p_int10,*(undefined4 *)(*p_int10 + 0x14)), u_val2 != u_val6)) {
        *pbStack_28 = 0;
LAB_080358ac:
        *pbStack_2c = *pbStack_2c + 1;
LAB_080358b4:
        stack_val_64 = 2;
        goto LAB_080358ec;
      }
      puStack_24 = (ushort *)(entity + 0x10);
      u_val2 = *puStack_24;
      if (u_val2 == 0) {
        stack_val_a4 = entity[2];
        stack_val_9c = entity[3];
        stack_val_a0 = entity[6];
        stack_val_98 = entity[7];
        if (b_flag13) {
          piStack_44 = &stack_val_9c;
          piStack_40 = &stack_val_98;
        }
        else {
          piStack_44 = &stack_val_a4;
          piStack_40 = &stack_val_a0;
        }
        stack_val_3c = *piStack_44 >> 0x10;
        stack_val_38 = *piStack_44 + *piStack_40;
        stack_val_34 = stack_val_38 >> 0x10;
        i_val11 = stack_val_34 - stack_val_3c;
        stack_val_30 = 1;
        p_char7 = (char *)((int)entity + 0x3f);
        if (*p_char7 != '\0') {
          stack_val_30 = 0;
          if (b_flag14) {
            *p_char7 = '\0';
          }
          else {
            *p_char7 = *p_char7 + -1;
          }
          if (*p_char7 == '\0') {
            stack_val_64 = 1;
          }
        }
        u_val3 = stack_val_7c;
        u_val4 = stack_val_78;
        if ((((!b_flag14) && (i_val11 != 0)) &&
            (i_val5 = _call_via_r2(p_int10,0,*(undefined4 *)(*p_int10 + 0x40)), u_val3 = stack_val_7c,
            u_val4 = stack_val_78, i_val5 != 0)) && (*(short *)(i_val5 + 4) == *(short *)(entity + 1))) {
          _call_via_r2(&stack_val_94,entity,*(undefined4 *)(entity[5] + 0xc));
          stack_val_8c = stack_val_94;
          stack_val_88 = stack_val_90;
          _call_via_r2(&stack_val_84,i_val5,*(undefined4 *)(*(int *)(i_val5 + 0x14) + 0xc));
          stack_val_7c = stack_val_84;
          u_val3 = stack_val_7c;
          stack_val_78 = stack_val_80;
          u_val4 = stack_val_78;
          if (b_flag13) {
            i_val5 = 0;
          }
          else {
            i_val5 = i_val11;
            i_val11 = 0;
          }
          stack_val_78._0_2_ = (short)stack_val_80;
          stack_val_7c._0_2_ = (short)stack_val_84;
          stack_val_78._2_2_ = (short)((uint)stack_val_80 >> 0x10);
          stack_val_7c._2_2_ = (short)((uint)stack_val_84 >> 0x10);
          if (-1 < ((int)(short)stack_val_8c - (int)(short)stack_val_78 &
                    (int)(short)stack_val_7c - (int)(short)stack_val_88 &
                    (int)stack_val_8c._2_2_ - (int)stack_val_78._2_2_ &
                   (int)stack_val_7c._2_2_ - (int)stack_val_88._2_2_)) {
            stack_val_74 = (short)i_val5 + (short)stack_val_8c;
            stack_val_72 = (short)i_val11 + stack_val_8c._2_2_;
            stack_val_70 = (short)i_val5 + (short)stack_val_88;
            stack_val_6e = (short)i_val11 + stack_val_88._2_2_;
            if (((int)stack_val_74 - (int)(short)stack_val_78 & (int)(short)stack_val_7c - (int)stack_val_70 &
                 (int)stack_val_72 - (int)stack_val_78._2_2_ & (int)stack_val_7c._2_2_ - (int)stack_val_6e) < 0)
            {
              stack_val_30 = 0;
            }
          }
        }
        stack_val_78 = u_val4;
        stack_val_7c = u_val3;
        if (stack_val_30 != 0) {
          i_val11 = (int)*psStack_48;
          if ((stack_val_34 == i_val11) || ((i_val11 - stack_val_3c ^ i_val11 - stack_val_34) < 0)) {
            *piStack_44 = i_val11 << 0x10;
            *piStack_40 = 0;
            if ((b_flag14) || (psStack_48[2] == 0)) {
              b_flag1 = *pbStack_28;
              *pbStack_28 = b_flag1 + 1;
              if ((ushort)(byte)(b_flag1 + 1) < *(ushort *)(piStack_68 + 1)) {
                stack_val_64 = 1;
              }
              else {
                *pbStack_28 = 0;
                if (b_flag14) {
                  *pbStack_2c = *pbStack_2c + 1;
                }
                stack_val_64 = 2;
              }
            }
            else {
              *puStack_24 = 1;
              stack_val_64 = 1;
            }
          }
          else {
            *piStack_44 = stack_val_38;
          }
          entity[2] = stack_val_a4;
          entity[3] = stack_val_9c;
          entity[6] = stack_val_a0;
          entity[7] = stack_val_98;
        }
      }
      else if ((b_flag14) || (*puStack_24 = u_val2 + 1, (ushort)psStack_48[2] < (ushort)(u_val2 + 1))) {
        *puStack_24 = 0;
        b_flag1 = *pbStack_28;
        *pbStack_28 = b_flag1 + 1;
        if ((ushort)(byte)(b_flag1 + 1) < *(ushort *)(piStack_68 + 1)) {
          stack_val_64 = 1;
          goto LAB_080358ec;
        }
        *pbStack_28 = 0;
        if (b_flag14) goto LAB_080358ac;
        goto LAB_080358b4;
      }
    }
    else {
      stack_val_60 = i_val5 + u_val9 * 8;
      b_flag14 = (*(byte *)(stack_val_60 + 4) & 1) != 0;
      stack_val_dc = entity[2];
      stack_val_d4 = entity[3];
      stack_val_d8 = entity[6];
      stack_val_d0 = entity[7];
      if (b_flag14) {
        p_int12 = &stack_val_d4;
        piStack_5c = &stack_val_d0;
      }
      else {
        piStack_5c = &stack_val_d8;
      }
      stack_val_58 = *p_int12 >> 0x10;
      stack_val_54 = *p_int12 + *piStack_5c;
      stack_val_50 = stack_val_54 >> 0x10;
      i_val11 = stack_val_50 - stack_val_58;
      puStack_24 = (ushort *)(entity + 0x10);
      b_flag13 = (int)(uint)*puStack_24 < 0x2EE;
      stack_val_4c = 1;
      p_char7 = (char *)((int)entity + 0x3f);
      if (*p_char7 != '\0') {
        stack_val_4c = 0;
        if (b_flag13) {
          *p_char7 = *p_char7 + -1;
        }
        else {
          *p_char7 = '\0';
        }
        if (*p_char7 == '\0') {
          stack_val_64 = 1;
        }
      }
      u_val3 = stack_val_b4;
      u_val4 = stack_val_b0;
      if ((((b_flag13) && (i_val11 != 0)) &&
          (i_val5 = _call_via_r2(p_int10,0,*(undefined4 *)(*p_int10 + 0x40)), u_val3 = stack_val_b4,
          u_val4 = stack_val_b0, i_val5 != 0)) && (*(short *)(i_val5 + 4) == *(short *)(entity + 1))) {
        _call_via_r2(&stack_val_cc,entity,*(undefined4 *)(entity[5] + 0xc));
        stack_val_c4 = stack_val_cc;
        stack_val_c0 = stack_val_c8;
        _call_via_r2(&stack_val_bc,i_val5,*(undefined4 *)(*(int *)(i_val5 + 0x14) + 0xc));
        stack_val_b4 = stack_val_bc;
        u_val3 = stack_val_b4;
        stack_val_b0 = stack_val_b8;
        u_val4 = stack_val_b0;
        if (b_flag14) {
          i_val5 = 0;
        }
        else {
          i_val5 = i_val11;
          i_val11 = 0;
        }
        stack_val_b0._0_2_ = (short)stack_val_b8;
        stack_val_b4._0_2_ = (short)stack_val_bc;
        stack_val_b0._2_2_ = (short)((uint)stack_val_b8 >> 0x10);
        stack_val_b4._2_2_ = (short)((uint)stack_val_bc >> 0x10);
        if (-1 < ((int)(short)stack_val_c4 - (int)(short)stack_val_b0 &
                  (int)(short)stack_val_b4 - (int)(short)stack_val_c0 &
                  (int)stack_val_c4._2_2_ - (int)stack_val_b0._2_2_ &
                 (int)stack_val_b4._2_2_ - (int)stack_val_c0._2_2_)) {
          stack_val_ac = (short)i_val5 + (short)stack_val_c4;
          stack_val_aa = (short)i_val11 + stack_val_c4._2_2_;
          stack_val_a8 = (short)i_val5 + (short)stack_val_c0;
          stack_val_a6 = (short)i_val11 + stack_val_c0._2_2_;
          if (((int)stack_val_ac - (int)(short)stack_val_b0 & (int)(short)stack_val_b4 - (int)stack_val_a8 &
               (int)stack_val_aa - (int)stack_val_b0._2_2_ & (int)stack_val_b4._2_2_ - (int)stack_val_a6) < 0) {
            stack_val_4c = 0;
          }
        }
      }
      stack_val_b0 = u_val4;
      stack_val_b4 = u_val3;
      if (stack_val_4c == 0) {
        *puStack_24 = *puStack_24 + 1;
      }
      else {
        i_val11 = (int)*(short *)(stack_val_60 + 2);
        if ((stack_val_58 == i_val11) || (stack_val_50 == i_val11)) {
LAB_080355d0:
          *p_int12 = i_val11 << 0x10;
          *piStack_5c = 0;
          b_flag1 = *pbStack_28;
          *pbStack_28 = b_flag1 + 1;
          if ((ushort)(byte)(b_flag1 + 1) < *(ushort *)(piStack_68 + 1)) {
            stack_val_64 = 1;
          }
          else {
            if (*puStack_6c <= (ushort)(*pbStack_2c + 1)) {
              return;
            }
            *pbStack_28 = 0;
            *pbStack_2c = *pbStack_2c + 1;
            stack_val_64 = 2;
          }
        }
        else {
          if (i_val11 < stack_val_50) {
            if (stack_val_58 <= i_val11) goto LAB_080355d0;
          }
          else if (stack_val_58 > i_val11) goto LAB_080355d0;
          *p_int12 = stack_val_54;
        }
        entity[2] = stack_val_dc;
        entity[3] = stack_val_d4;
        entity[6] = stack_val_d8;
        entity[7] = stack_val_d0;
      }
    }
  }
  if (stack_val_64 < 1) {
    return;
  }
LAB_080358ec:
  _call_via_r2(entity,stack_val_64,*(undefined4 *)(entity[5] + 0x3c));
  return;
}

// =============================================================================
// Function: Entity_Routine_08035908 @ 0x08035908
// =============================================================================
void Entity_Routine_08035908(int entity,uint speed)

{
  char c_char1;
  uint u_val2;
  
  u_val2 = (uint)*(ushort *)(entity + 0x44);
  if (speed != u_val2) {
    *(ushort *)(entity + 0x44) = (ushort)speed;
    c_char1 = _call_via_r1(entity,*(undefined4 *)(*(int *)(entity + 0x14) + 0x28));
    if (((c_char1 == '\0') && (*(ushort *)(entity + 0x22) == u_val2)) &&
       (*(ushort *)(entity + 0x22) != speed)) {
      Entity_Routine_080321B0(entity,speed);
    }
  }
  return;
}

// =============================================================================
// Function: Entity_Routine_08035940 @ 0x08035940
// =============================================================================
void Entity_Routine_08035940(int entity,uint speed)

{
  char c_char1;
  uint u_val2;
  
  u_val2 = (uint)*(ushort *)(entity + 0x46);
  if (speed != u_val2) {
    *(ushort *)(entity + 0x46) = (ushort)speed;
    c_char1 = _call_via_r1(entity,*(undefined4 *)(*(int *)(entity + 0x14) + 0x28));
    if (((c_char1 == '\0') && (*(ushort *)(entity + 0x22) == u_val2)) &&
       (*(ushort *)(entity + 0x22) != speed)) {
      Entity_Routine_080321B0(entity,speed);
    }
  }
  return;
}

// =============================================================================
// Function: Entity_Routine_08035978 @ 0x08035978
// =============================================================================
u32 Entity_Routine_08035978(undefined4 *entity)

{
  char c_char1;
  int i_val2;
  uint u_val3;
  int i_val4;
  undefined4 u_val5;
  int *p_int6;
  ushort *p_uint7;
  int i_val8;
  
  c_char1 = _call_via_r1(entity,*(undefined4 *)(entity[5] + 0x28));
  if (((c_char1 == '\0') && (entity[0xe] != 0)) &&
     (p_uint7 = *(ushort **)((uint)*(byte *)(entity + 0xf) * 4 + *(int *)(entity[0xe] + 8)),
     p_uint7 != (ushort *)0x0)) {
    u_val3 = (uint)*(byte *)((int)entity + 0x3d);
    if (u_val3 < *p_uint7) {
      i_val8 = *(int *)(p_uint7 + 2) + u_val3 * 8;
      p_int6 = *(int **)(i_val8 + 4);
      if (p_int6 != (int *)0x0) {
        i_val2 = _call_via_r1((int *)*entity,*(undefined4 *)(*(int *)*entity + 0x144));
        u_val3 = *(ushort *)(i_val2 + 10) & 0x1f;
        i_val4 = u_val3 - 6;
        if (i_val4 < 0) {
          i_val4 = u_val3 + 0x12;
        }
        if ((*p_int6 == 0) || (*(ushort *)(p_int6 + 1) == 0)) {
LAB_08035a20:
          u_val5 = 0;
          if ((*p_uint7 <= (ushort)(*(byte *)((int)entity + 0x3d) + 1)) ||
             (i_val4 * 0x3c + ((*(ushort *)(i_val2 + 10) & 0x7ff) >> 5) < (uint)*(ushort *)(i_val8 + 8)
             )) goto LAB_08035a3c;
        }
        else {
          if (*(ushort *)(p_int6 + 1) <= (ushort)*(byte *)((int)entity + 0x3e)) goto LAB_08035a3a;
          if ((int)((uint)*(byte *)((int)p_int6 + 0xb) * 0x8000000) < 0) goto LAB_08035a20;
          u_val5 = 0;
          if ((int)(uint)*(ushort *)(entity + 0x10) < 0x2EE) goto LAB_08035a3c;
        }
        u_val5 = 1;
        goto LAB_08035a3c;
      }
    }
  }
LAB_08035a3a:
  u_val5 = 0;
LAB_08035a3c:
  return u_val5;
}

// =============================================================================
// Function: Entity_Routine_08035A48 @ 0x08035A48
// =============================================================================
void Entity_Routine_08035A48(int entity,ushort *speed)

{
  char c_char1;
  int i_val2;
  
  if (*(ushort *)(entity + 4) == (*speed & 0x3ff)) {
    i_val2 = (int)(short)((ushort)((speed[1] & 0x3FF) << 6) |
                        (ushort)(*(byte *)((int)speed + 1) >> 2)) - (int)*(short *)(entity + 10);
    if (i_val2 < 0) {
      i_val2 = -i_val2;
    }
    if (i_val2 < 0x98) {
      i_val2 = (int)(short)((ushort)((speed[2] & 0x3FF) << 6) |
                          (ushort)(*(byte *)((int)speed + 3) >> 2)) -
              (int)*(short *)(entity + 0xe);
      if (i_val2 < 0) {
        i_val2 = -i_val2;
      }
      if (((i_val2 < 0x70) && (c_char1 = Entity_Routine_08035978(entity), c_char1 == '\0')) &&
         (c_char1 = _call_via_r1(entity,*(undefined4 *)(*(int *)(entity + 0x14) + 0x28)),
         c_char1 == '\0')) {
        Entity_Routine_08032384(entity,2,0);
        *(undefined1 *)(entity + 0x3f) = 0x78;
        _call_via_r2(entity,1,*(undefined4 *)(*(int *)(entity + 0x14) + 0x3c));
      }
    }
  }
  return;
}

// =============================================================================
// Function: Entity_Routine_08035AE0 @ 0x08035AE0
// =============================================================================
u32 Entity_Routine_08035AE0(int entity)

{
  undefined4 u_val1;
  
  u_val1 = 0;
  if ((*(short *)(entity + 4) == 0x1d) && (*(short *)(entity + 0xe) < 0x38)) {
    u_val1 = 1;
  }
  return u_val1;
}

// =============================================================================
// Function: Entity_Routine_08035AFC @ 0x08035AFC
// =============================================================================
u32 Entity_Routine_08035AFC(int entity)

{
  
  Entity_ProcessCollisions(entity);
  *(undefined4 *)(entity + 0x14) = gRomData_080E7198;
  return entity;
}

// =============================================================================
// Function: Entity_Routine_08035B38 @ 0x08035B38
// =============================================================================
void Entity_Routine_08035B38(undefined4 entity)

{
  undefined4 u_val1;
  
  u_val1 = CppRuntime_OperatorNewArray(0x8c);
  Entity_Routine_080324BC(u_val1,entity,4,0x1b,1,0,0,0);
  return;
}

// =============================================================================
// Function: Entity_Routine_08035B64 @ 0x08035B64
// =============================================================================
u32 Entity_Routine_08035B64(int entity)

{
  
  Entity_ProcessCollisions(entity);
  *(undefined4 *)(entity + 0x14) = gRomData_080E7158;
  return entity;
}

// =============================================================================
// Function: Entity_Routine_08035B9C @ 0x08035B9C
// =============================================================================
void Entity_Routine_08035B9C(undefined4 entity)

{
  undefined4 u_val1;
  
  u_val1 = CppRuntime_OperatorNewArray(0x8c);
  Entity_Routine_080324BC(u_val1,entity,4,0x1b,1,0,0,0);
  return;
}

// =============================================================================
// Function: Entity_Routine_08035BC8 @ 0x08035BC8
// =============================================================================
u32 Entity_Routine_08035BC8(int entity)

{
  
  Entity_ProcessCollisions(entity);
  *(undefined4 *)(entity + 0x14) = gRomData_080E7118;
  return entity;
}

// =============================================================================
// Function: Entity_Routine_08035C04 @ 0x08035C04
// =============================================================================
void Entity_Routine_08035C04(undefined4 *entity)

{
  undefined4 u_val1;
  char c_char2;
  int i_val3;
  uint u_val4;
  int i_val5;
  int i_val6;
  undefined4 u_val7;
  undefined4 u_val8;
  
  u_val8 = 0x233;
  u_val1 = 0x22F;
  i_val5 = entity[0xd];
  i_val6 = i_val5 + 0x1CD4;
  i_val3 = NPC_Routine_080A0490(i_val6);
  u_val7 = u_val1;
  if ((((i_val3 == 3) && (*(short *)(entity + 1) == 0x1d)) &&
      (c_char2 = Entity_Routine_08035AE0(entity), u_val7 = 0x23F, c_char2 == '\0')) &&
     ((((*(byte *)(i_val5 + 0x216B) & 0x7f) >> 5 != 1 &&
       (i_val3 = NPC_Routine_080A0384(i_val6), u_val7 = u_val1, i_val3 != 0)) &&
      (u_val4 = NPC_Routine_0809EAD8(), u_val4 < 0x3c)))) {
    i_val3 = _call_via_r1((int *)*entity,*(undefined4 *)(*(int *)*entity + 0x144));
    c_char2 = Entity_Routine_08034C64(i_val5,i_val3 + 10);
    if (c_char2 != '\0') {
      u_val7 = 0x247;
      u_val8 = 0x24B;
    }
  }
  Entity_Routine_08035908(entity,u_val7);
  Entity_Routine_08035940(entity,u_val8);
  return;
}

// =============================================================================
// Function: Entity_Routine_08035CB8 @ 0x08035CB8
// =============================================================================
void Entity_Routine_08035CB8(undefined4 entity,int speed)

{
  
  Entity_Routine_08034F00();
  if (1 < speed) {
    Entity_Routine_08035C04(entity);
  }
  return;
}

// =============================================================================
// Function: Entity_Routine_08035CD4 @ 0x08035CD4
// =============================================================================
void Entity_Routine_08035CD4(undefined4 entity)

{
  undefined4 u_val1;
  
  Entity_Routine_08035C04();
  u_val1 = CppRuntime_OperatorNewArray(0x8c);
  Entity_Routine_080324BC(u_val1,entity,5,0x1b,1,0,0,0);
  return;
}

// =============================================================================
// Function: Entity_Routine_08035D04 @ 0x08035D04
// =============================================================================
u32 Entity_Routine_08035D04(int entity)

{
  
  Entity_ProcessCollisions(entity);
  *(undefined4 *)(entity + 0x14) = gRomData_080E70D8;
  return entity;
}

// =============================================================================
// Function: Entity_Routine_08035D40 @ 0x08035D40
// =============================================================================
void Entity_Routine_08035D40(undefined4 entity)

{
  undefined4 u_val1;
  
  u_val1 = CppRuntime_OperatorNewArray(0x8c);
  Entity_Routine_080324BC(u_val1,entity,4,0x1b,1,3,0,0);
  return;
}

// =============================================================================
// Function: Entity_Routine_08035D70 @ 0x08035D70
// =============================================================================
u32 Entity_Routine_08035D70(int entity)

{
  
  Entity_ProcessCollisions(entity);
  *(undefined4 *)(entity + 0x14) = gRomData_080E7098;
  return entity;
}

// =============================================================================
// Function: Entity_Routine_08035DAC @ 0x08035DAC
// =============================================================================
void Entity_Routine_08035DAC(undefined4 entity)

{
  undefined4 u_val1;
  
  u_val1 = CppRuntime_OperatorNewArray(0x8c);
  Entity_Routine_080324BC(u_val1,entity,4,0x1b,1,1,0,0);
  return;
}

// =============================================================================
// Function: Entity_Routine_08035DD8 @ 0x08035DD8
// =============================================================================
u32 Entity_Routine_08035DD8(int entity)

{
  
  Entity_ProcessCollisions(entity);
  *(undefined4 *)(entity + 0x14) = gRomData_080E7058;
  return entity;
}

// =============================================================================
// Function: Entity_Routine_08035E14 @ 0x08035E14
// =============================================================================
void Entity_Routine_08035E14(undefined4 entity)

{
  undefined4 u_val1;
  
  u_val1 = CppRuntime_OperatorNewArray(0x8c);
  Entity_Routine_080324BC(u_val1,entity,4,0x1b,1,0,0,0);
  return;
}

// =============================================================================
// Function: Entity_Routine_08035E40 @ 0x08035E40
// =============================================================================
u32 Entity_Routine_08035E40(int entity)

{
  
  Entity_ProcessCollisions(entity);
  *(undefined4 *)(entity + 0x14) = gRomData_080E7018;
  return entity;
}

// =============================================================================
// Function: Entity_Routine_08035E7C @ 0x08035E7C
// =============================================================================
void Entity_Routine_08035E7C(undefined4 entity)

{
  undefined4 u_val1;
  
  u_val1 = CppRuntime_OperatorNewArray(0x8c);
  Entity_Routine_080324BC(u_val1,entity,4,0x1b,1,2,0,0);
  return;
}

// =============================================================================
// Function: Entity_Routine_08035EE4 @ 0x08035EE4
// =============================================================================
void Entity_Routine_08035EE4(undefined4 entity)

{
  undefined4 u_val1;
  
  u_val1 = CppRuntime_OperatorNewArray(0x8c);
  Entity_Routine_080324BC(u_val1,entity,4,0x1b,1,0,0,0);
  return;
}

// =============================================================================
// Function: Entity_Routine_08035F10 @ 0x08035F10
// =============================================================================
u32 Entity_Routine_08035F10(int entity)

{
  
  Entity_ProcessCollisions(entity);
  *(undefined4 *)(entity + 0x14) = gRomData_080E6F98;
  return entity;
}

// =============================================================================
// Function: Entity_Routine_08035F48 @ 0x08035F48
// =============================================================================
void Entity_Routine_08035F48(undefined4 entity)

{
  undefined4 u_val1;
  
  u_val1 = CppRuntime_OperatorNewArray(0x8c);
  Entity_Routine_080324BC(u_val1,entity,4,0x1b,1,0,0,0);
  return;
}

// =============================================================================
// Function: Entity_Routine_08035F74 @ 0x08035F74
// =============================================================================
u32 Entity_Routine_08035F74(int entity)

{
  
  Entity_ProcessCollisions(entity);
  *(undefined4 *)(entity + 0x14) = gRomData_080E6F58;
  return entity;
}

// =============================================================================
// Function: Entity_Routine_08035FB0 @ 0x08035FB0
// =============================================================================
void Entity_Routine_08035FB0(undefined4 entity)

{
  undefined4 u_val1;
  
  u_val1 = CppRuntime_OperatorNewArray(0x8c);
  Entity_Routine_080324BC(u_val1,entity,4,0x1b,1,2,0,0);
  return;
}

// =============================================================================
// Function: Entity_Routine_08035FE0 @ 0x08035FE0
// =============================================================================
u32 Entity_Routine_08035FE0(int entity)

{
  
  Entity_ProcessCollisions(entity);
  *(undefined4 *)(entity + 0x14) = gRomData_080E6F18;
  return entity;
}

// =============================================================================
// Function: Entity_Routine_0803601C @ 0x0803601C
// =============================================================================
void Entity_Routine_0803601C(undefined4 entity)

{
  undefined4 u_val1;
  
  u_val1 = CppRuntime_OperatorNewArray(0x8c);
  Entity_Routine_080324BC(u_val1,entity,4,0x1b,1,0,0,0);
  return;
}

// =============================================================================
// Function: Entity_Routine_08036048 @ 0x08036048
// =============================================================================
u32 Entity_Routine_08036048(int entity)

{
  
  Entity_ProcessCollisions(entity);
  *(undefined4 *)(entity + 0x14) = gRomData_080E6ED8;
  return entity;
}

// =============================================================================
// Function: Entity_Routine_08036084 @ 0x08036084
// =============================================================================
void Entity_Routine_08036084(undefined4 *entity)

{
  undefined4 u_val1;
  char c_char2;
  int i_val3;
  uint u_val4;
  int i_val5;
  int i_val6;
  undefined4 u_val7;
  undefined4 u_val8;
  
  u_val8 = 0x817;
  u_val1 = 0x813;
  i_val5 = entity[0xd];
  i_val6 = i_val5 + 0x1CD4;
  i_val3 = NPC_Routine_080A0490(i_val6);
  u_val7 = u_val1;
  if ((((i_val3 == 0xc) && (*(short *)(entity + 1) == 0x1d)) &&
      (c_char2 = Entity_Routine_08035AE0(entity), u_val7 = 0x827, c_char2 == '\0')) &&
     ((((*(byte *)(i_val5 + 0x216C) & 0x7f) >> 5 != 1 &&
       (i_val3 = NPC_Routine_080A0384(i_val6), u_val7 = u_val1, i_val3 != 0)) &&
      (u_val4 = NPC_Routine_0809EAD8(), u_val4 < 0x3c)))) {
    i_val3 = _call_via_r1((int *)*entity,*(undefined4 *)(*(int *)*entity + 0x144));
    c_char2 = Entity_Routine_08034C64(i_val5,i_val3 + 10);
    if (c_char2 != '\0') {
      u_val7 = 0x82F;
      u_val8 = 0x833;
    }
  }
  Entity_Routine_08035908(entity,u_val7);
  Entity_Routine_08035940(entity,u_val8);
  return;
}

// =============================================================================
// Function: Entity_Routine_08036138 @ 0x08036138
// =============================================================================
void Entity_Routine_08036138(undefined4 entity,int speed)

{
  
  Entity_Routine_08034F00();
  if (1 < speed) {
    Entity_Routine_08036084(entity);
  }
  return;
}

// =============================================================================
// Function: Entity_Routine_08036154 @ 0x08036154
// =============================================================================
void Entity_Routine_08036154(undefined4 entity)

{
  undefined4 u_val1;
  
  Entity_Routine_08036084();
  u_val1 = CppRuntime_OperatorNewArray(0x8c);
  Entity_Routine_080324BC(u_val1,entity,5,0x1b,1,0,0,0);
  return;
}

// =============================================================================
// Function: Entity_Routine_08036184 @ 0x08036184
// =============================================================================
u32 Entity_Routine_08036184(int entity)

{
  
  Entity_ProcessCollisions(entity);
  *(undefined4 *)(entity + 0x14) = gRomData_080E6E98;
  return entity;
}

// =============================================================================
// Function: Entity_Routine_080361C0 @ 0x080361C0
// =============================================================================
void Entity_Routine_080361C0(undefined4 entity)

{
  undefined4 u_val1;
  
  u_val1 = CppRuntime_OperatorNewArray(0x8c);
  Entity_Routine_080324BC(u_val1,entity,4,0x1b,1,0,0,0);
  return;
}

// =============================================================================
// Function: Entity_Routine_080361EC @ 0x080361EC
// =============================================================================
u32 Entity_Routine_080361EC(int entity)

{
  
  Entity_ProcessCollisions(entity);
  *(undefined4 *)(entity + 0x14) = gRomData_080E6E58;
  return entity;
}

// =============================================================================
// Function: Entity_Routine_08036228 @ 0x08036228
// =============================================================================
void Entity_Routine_08036228(undefined4 entity)

{
  undefined4 u_val1;
  
  u_val1 = CppRuntime_OperatorNewArray(0x8c);
  Entity_Routine_080324BC(u_val1,entity,4,0x1b,1,2,0,0);
  return;
}

// =============================================================================
// Function: Entity_Routine_08036258 @ 0x08036258
// =============================================================================
u32 Entity_Routine_08036258(int entity)

{
  
  Entity_ProcessCollisions(entity);
  *(undefined4 *)(entity + 0x14) = gRomData_080E6E18;
  return entity;
}

// =============================================================================
// Function: Entity_Routine_08036290 @ 0x08036290
// =============================================================================
void Entity_Routine_08036290(undefined4 entity)

{
  undefined4 u_val1;
  
  u_val1 = CppRuntime_OperatorNewArray(0x8c);
  Entity_Routine_080324BC(u_val1,entity,4,0x1b,1,2,0,0);
  return;
}

// =============================================================================
// Function: Entity_Routine_080362C0 @ 0x080362C0
// =============================================================================
u32 Entity_Routine_080362C0(int entity)

{
  
  Entity_ProcessCollisions(entity);
  *(undefined4 *)(entity + 0x14) = gRomData_080E6DD8;
  return entity;
}

// =============================================================================
// Function: Entity_Routine_080362FC @ 0x080362FC
// =============================================================================
void Entity_Routine_080362FC(undefined4 entity)

{
  undefined4 u_val1;
  
  u_val1 = CppRuntime_OperatorNewArray(0x8c);
  Entity_Routine_080324BC(u_val1,entity,4,0x1b,1,1,0,0);
  return;
}

// =============================================================================
// Function: Entity_Routine_08036328 @ 0x08036328
// =============================================================================
u32 Entity_Routine_08036328(int entity)

{
  
  Entity_ProcessCollisions(entity);
  *(undefined4 *)(entity + 0x14) = gRomData_080E6D98;
  return entity;
}

// =============================================================================
// Function: Entity_Routine_08036364 @ 0x08036364
// =============================================================================
void Entity_Routine_08036364(undefined4 entity)

{
  undefined4 u_val1;
  
  u_val1 = CppRuntime_OperatorNewArray(0x8c);
  Entity_Routine_080324BC(u_val1,entity,4,0x1b,1,0,0,0);
  return;
}

// =============================================================================
// Function: Entity_Routine_08036390 @ 0x08036390
// =============================================================================
u32 Entity_Routine_08036390(int entity)

{
  
  Entity_ProcessCollisions(entity);
  *(undefined4 *)(entity + 0x14) = gRomData_080E6D58;
  return entity;
}

// =============================================================================
// Function: Entity_Routine_080363CC @ 0x080363CC
// =============================================================================
void Entity_Routine_080363CC(undefined4 entity)

{
  undefined4 u_val1;
  
  u_val1 = CppRuntime_OperatorNewArray(0x8c);
  Entity_Routine_080324BC(u_val1,entity,4,0x1b,1,0,0,0);
  return;
}

// =============================================================================
// Function: Entity_Routine_080363F8 @ 0x080363F8
// =============================================================================
u32 Entity_Routine_080363F8(int entity)

{
  
  Entity_ProcessCollisions(entity);
  *(undefined4 *)(entity + 0x14) = gRomData_080E6D18;
  return entity;
}

// =============================================================================
// Function: Entity_Routine_08036430 @ 0x08036430
// =============================================================================
void Entity_Routine_08036430(undefined4 *entity)

{
  undefined4 u_val1;
  char c_char2;
  int i_val3;
  uint u_val4;
  int i_val5;
  int i_val6;
  undefined4 u_val7;
  undefined4 u_val8;
  
  u_val8 = 0x695;
  u_val1 = 0x691;
  i_val5 = entity[0xd];
  i_val6 = i_val5 + 0x1CD4;
  i_val3 = NPC_Routine_080A0490(i_val6);
  u_val7 = u_val1;
  if ((((i_val3 == 0x13) && (*(short *)(entity + 1) == 0x1d)) &&
      (c_char2 = Entity_Routine_08035AE0(entity), u_val7 = 0x6A1, c_char2 == '\0')) &&
     ((((*(byte *)(i_val5 + 0x216C) & 0x1f) >> 3 != 1 &&
       (i_val3 = NPC_Routine_080A0384(i_val6), u_val7 = u_val1, i_val3 != 0)) &&
      (u_val4 = NPC_Routine_0809EAD8(), u_val4 < 0x3c)))) {
    i_val3 = _call_via_r1((int *)*entity,*(undefined4 *)(*(int *)*entity + 0x144));
    c_char2 = Entity_Routine_08034C64(i_val5,i_val3 + 10);
    if (c_char2 != '\0') {
      u_val7 = 0x6AD;
      u_val8 = 0x6B1;
    }
  }
  Entity_Routine_08035908(entity,u_val7);
  Entity_Routine_08035940(entity,u_val8);
  return;
}

// =============================================================================
// Function: Entity_Routine_080364E4 @ 0x080364E4
// =============================================================================
void Entity_Routine_080364E4(undefined4 entity,int speed)

{
  
  Entity_Routine_08034F00();
  if (1 < speed) {
    Entity_Routine_08036430(entity);
  }
  return;
}

// =============================================================================
// Function: Entity_Routine_08036500 @ 0x08036500
// =============================================================================
void Entity_Routine_08036500(undefined4 entity)

{
  undefined4 u_val1;
  
  Entity_Routine_08036430();
  u_val1 = CppRuntime_OperatorNewArray(0x8c);
  Entity_Routine_080324BC(u_val1,entity,5,0x1b,1,0,0,0);
  return;
}

// =============================================================================
// Function: Entity_Routine_08036564 @ 0x08036564
// =============================================================================
void Entity_Routine_08036564(undefined4 entity)

{
  undefined4 u_val1;
  
  u_val1 = CppRuntime_OperatorNewArray(0x8c);
  Entity_Routine_080324BC(u_val1,entity,4,0x1b,1,0,0,0);
  return;
}

// =============================================================================
// Function: Entity_Routine_08036590 @ 0x08036590
// =============================================================================
u32 Entity_Routine_08036590(int entity)

{
  
  Entity_ProcessCollisions(entity);
  *(undefined4 *)(entity + 0x14) = gRomData_080E6C98;
  return entity;
}

// =============================================================================
// Function: Entity_Routine_080365CC @ 0x080365CC
// =============================================================================
void Entity_Routine_080365CC(undefined4 *entity)

{
  undefined4 u_val1;
  char c_char2;
  int i_val3;
  uint u_val4;
  int i_val5;
  int i_val6;
  undefined4 u_val7;
  undefined4 u_val8;
  
  u_val8 = 0x888;
  u_val1 = 0x884;
  i_val5 = entity[0xd];
  i_val6 = i_val5 + 0x1CD4;
  i_val3 = NPC_Routine_080A0490(i_val6);
  u_val7 = u_val1;
  if ((((i_val3 == 0x15) && (*(short *)(entity + 1) == 0x1d)) &&
      (c_char2 = Entity_Routine_08035AE0(entity), u_val7 = 0x89C, c_char2 == '\0')) &&
     ((((*(byte *)(i_val5 + 0x216C) & 7) >> 1 != 1 &&
       (i_val3 = NPC_Routine_080A0384(i_val6), u_val7 = u_val1, i_val3 != 0)) &&
      (u_val4 = NPC_Routine_0809EAD8(), u_val4 < 0x3c)))) {
    i_val3 = _call_via_r1((int *)*entity,*(undefined4 *)(*(int *)*entity + 0x144));
    c_char2 = Entity_Routine_08034C64(i_val5,i_val3 + 10);
    if (c_char2 != '\0') {
      u_val7 = 0x894;
      u_val8 = 0x898;
    }
  }
  Entity_Routine_08035908(entity,u_val7);
  Entity_Routine_08035940(entity,u_val8);
  return;
}

// =============================================================================
// Function: Entity_Routine_08036680 @ 0x08036680
// =============================================================================
void Entity_Routine_08036680(undefined4 entity,int speed)

{
  
  Entity_Routine_08034F00();
  if (1 < speed) {
    Entity_Routine_080365CC(entity);
  }
  return;
}

// =============================================================================
// Function: Entity_Routine_0803669C @ 0x0803669C
// =============================================================================
void Entity_Routine_0803669C(undefined4 entity)

{
  undefined4 u_val1;
  
  Entity_Routine_080365CC();
  u_val1 = CppRuntime_OperatorNewArray(0x8c);
  Entity_Routine_080324BC(u_val1,entity,5,0x1b,1,0,0,0);
  return;
}

// =============================================================================
// Function: Entity_Routine_080366CC @ 0x080366CC
// =============================================================================
u32 Entity_Routine_080366CC(int entity)

{
  
  Entity_ProcessCollisions(entity);
  *(undefined4 *)(entity + 0x14) = gRomData_080E6C58;
  return entity;
}

// =============================================================================
// Function: Entity_Routine_08036704 @ 0x08036704
// =============================================================================
void Entity_Routine_08036704(undefined4 entity)

{
  undefined4 u_val1;
  
  u_val1 = CppRuntime_OperatorNewArray(0x8c);
  Entity_Routine_080324BC(u_val1,entity,4,0x1b,1,0,0,0);
  return;
}

// =============================================================================
// Function: Entity_Routine_08036730 @ 0x08036730
// =============================================================================
u32 Entity_Routine_08036730(int entity)

{
  
  Entity_ProcessCollisions(entity);
  *(undefined4 *)(entity + 0x14) = gRomData_080E6C18;
  return entity;
}

// =============================================================================
// Function: Entity_Routine_08036768 @ 0x08036768
// =============================================================================
void Entity_Routine_08036768(int entity)

{
  int i_val1;
  undefined1 u_val2;
  
  u_val2 = 2;
  i_val1 = 0x27B;
  if ((*(byte *)(*(int *)(entity + 0x34) + 0x2181) & 3) == 1) {
    i_val1 = 0x27B + 0x18;
    u_val2 = 1;
  }
  Entity_Routine_08035908(entity,i_val1);
  Entity_Routine_08035940(entity,0x27F);
  *(undefined1 *)(entity + 0x21) = u_val2;
  return;
}

// =============================================================================
// Function: Entity_Routine_080367AC @ 0x080367AC
// =============================================================================
void Entity_Routine_080367AC(undefined4 entity,int speed)

{
  
  Entity_Routine_08034F00();
  if (1 < speed) {
    Entity_Routine_08036768(entity);
  }
  return;
}

// =============================================================================
// Function: Entity_Routine_080367C8 @ 0x080367C8
// =============================================================================
void Entity_Routine_080367C8(undefined4 entity)

{
  undefined4 u_val1;
  
  Entity_Routine_08036768();
  u_val1 = CppRuntime_OperatorNewArray(0x8c);
  Entity_Routine_080324BC(u_val1,entity,5,0x1b,1,0,0,0);
  return;
}

// =============================================================================
// Function: Entity_Routine_080367F8 @ 0x080367F8
// =============================================================================
u32 Entity_Routine_080367F8(int entity)

{
  
  Entity_ProcessCollisions(entity);
  *(undefined4 *)(entity + 0x14) = gRomData_080E6BD8;
  return entity;
}

// =============================================================================
// Function: Entity_Routine_08036834 @ 0x08036834
// =============================================================================
void Entity_Routine_08036834(undefined4 entity)

{
  undefined4 u_val1;
  
  u_val1 = CppRuntime_OperatorNewArray(0x8c);
  Entity_Routine_080324BC(u_val1,entity,4,0x1b,1,0,0,0);
  return;
}

// =============================================================================
// Function: Entity_Routine_08036860 @ 0x08036860
// =============================================================================
void Entity_Routine_08036860(int entity)

{
  
  Entity_ProcessCollisions(entity);
  *(undefined4 *)(entity + 0x14) = gRomData_080E6B98;
  return entity;
}

// =============================================================================
// Function: Entity_Routine_08036898 @ 0x08036898
// =============================================================================
void Entity_Routine_08036898(undefined4 entity)

{
  undefined4 u_val1;
  
  u_val1 = CppRuntime_OperatorNewArray(0x8c);
  Entity_Routine_080324BC(u_val1,entity,4,0x1b,1,0,0,0);
  return;
}

// =============================================================================
// Function: Entity_Routine_080368C4 @ 0x080368C4
// =============================================================================
u32 Entity_Routine_080368C4(int entity)

{
  
  Entity_ProcessCollisions(entity);
  *(undefined4 *)(entity + 0x14) = gRomData_080E6B58;
  return entity;
}

// =============================================================================
// Function: Entity_Routine_08036900 @ 0x08036900
// =============================================================================
void Entity_Routine_08036900(undefined4 *entity)

{
  undefined4 u_val1;
  char c_char2;
  int i_val3;
  uint u_val4;
  int i_val5;
  int i_val6;
  undefined4 u_val7;
  undefined4 u_val8;
  
  u_val8 = 0x7C2;
  u_val1 = 0x7BE;
  i_val5 = entity[0xd];
  i_val6 = i_val5 + 0x1CD4;
  i_val3 = NPC_Routine_080A0490(i_val6);
  u_val7 = u_val1;
  if ((((i_val3 == 0x19) && (*(short *)(entity + 1) == 0x1d)) &&
      (c_char2 = Entity_Routine_08035AE0(entity), u_val7 = 0x7D2, c_char2 == '\0')) &&
     ((((byte)((*(byte *)(i_val5 + 0x216C) & 1) << 1 | *(byte *)(i_val5 + 0x216B) >> 7)
        != 1 && (i_val3 = NPC_Routine_080A0384(i_val6), u_val7 = u_val1, i_val3 != 0)) &&
      (u_val4 = NPC_Routine_0809EAD8(), u_val4 < 0x3c)))) {
    i_val3 = _call_via_r1((int *)*entity,*(undefined4 *)(*(int *)*entity + 0x144));
    c_char2 = Entity_Routine_08034C64(i_val5,i_val3 + 10);
    if (c_char2 != '\0') {
      u_val7 = 0x7CA;
      u_val8 = 0x7CE;
    }
  }
  Entity_Routine_08035908(entity,u_val7);
  Entity_Routine_08035940(entity,u_val8);
  return;
}

// =============================================================================
// Function: Entity_Routine_080369C4 @ 0x080369C4
// =============================================================================
void Entity_Routine_080369C4(undefined4 entity,int speed)

{
  
  Entity_Routine_08034F00();
  if (1 < speed) {
    Entity_Routine_08036900(entity);
  }
  return;
}

// =============================================================================
// Function: Entity_Routine_080369E0 @ 0x080369E0
// =============================================================================
void Entity_Routine_080369E0(undefined4 entity)

{
  undefined4 u_val1;
  
  Entity_Routine_08036900();
  u_val1 = CppRuntime_OperatorNewArray(0x8c);
  Entity_Routine_080324BC(u_val1,entity,5,0x1b,1,0,0,0);
  return;
}

// =============================================================================
// Function: Entity_Routine_08036A10 @ 0x08036A10
// =============================================================================
u32 Entity_Routine_08036A10(int entity)

{
  
  Entity_ProcessCollisions(entity);
  *(undefined4 *)(entity + 0x14) = gRomData_080E6B18;
  return entity;
}

// =============================================================================
// Function: Entity_Routine_08036A4C @ 0x08036A4C
// =============================================================================
void Entity_Routine_08036A4C(undefined4 entity)

{
  undefined4 u_val1;
  
  u_val1 = CppRuntime_OperatorNewArray(0x8c);
  Entity_Routine_080324BC(u_val1,entity,4,0x1b,1,0,0,0);
  return;
}

// =============================================================================
// Function: Entity_Routine_08036A78 @ 0x08036A78
// =============================================================================
u32 Entity_Routine_08036A78(int entity)

{
  
  Entity_ProcessCollisions(entity);
  *(undefined4 *)(entity + 0x14) = gRomData_080E6AD8;
  return entity;
}

// =============================================================================
// Function: Entity_Routine_08036AB4 @ 0x08036AB4
// =============================================================================
void Entity_Routine_08036AB4(int entity)

{
  ushort u_val1;
  undefined4 u_val2;
  undefined4 u_val3;
  
  u_val1 = *(ushort *)(entity + 4);
  if (u_val1 != 0x11) {
    u_val2 = 0x9D3;
    u_val3 = 0x9D7;
    if (u_val1 < 0x12) {
      if (u_val1 != 7) goto LAB_08036ae4;
    }
    else if ((u_val1 != 0x1d) && (u_val1 != 0x25)) goto LAB_08036ae4;
  }
  u_val2 = 0x9DF;
  u_val3 = 0x9E3;
LAB_08036ae4:
  Entity_Routine_08035908(entity,u_val2);
  Entity_Routine_08035940(entity,u_val3);
  return;
}

// =============================================================================
// Function: Entity_Routine_08036B00 @ 0x08036B00
// =============================================================================
void Entity_Routine_08036B00(undefined4 entity,int speed)

{
  
  Entity_Routine_08034F00();
  if (1 < speed) {
    Entity_Routine_08036AB4(entity);
  }
  return;
}

// =============================================================================
// Function: Entity_Routine_08036B1C @ 0x08036B1C
// =============================================================================
void Entity_Routine_08036B1C(undefined4 entity)

{
  undefined4 u_val1;
  
  Entity_Routine_08036AB4();
  u_val1 = CppRuntime_OperatorNewArray(0x8c);
  Entity_Routine_080324BC(u_val1,entity,5,0x1b,1,0,0,0);
  return;
}

// =============================================================================
// Function: Entity_Routine_08036B80 @ 0x08036B80
// =============================================================================
void Entity_Routine_08036B80(undefined4 entity)

{
  undefined4 u_val1;
  
  u_val1 = CppRuntime_OperatorNewArray(0x8c);
  Entity_Routine_080324BC(u_val1,entity,4,0x1b,1,2,0,0);
  return;
}

// =============================================================================
// Function: Entity_Routine_08036BB0 @ 0x08036BB0
// =============================================================================
void Entity_Routine_08036BB0(undefined4 *entity)

{
  short s_val1;
  short s_val2;
  
  s_val1 = *(short *)((int)entity + 10);
  s_val2 = *(short *)((int)entity + 0xe);
  Entity_Routine_08034EB4(entity);
  if (((*(short *)(entity + 1) == 2) &&
      (((s_val1 != 0xf4 || (s_val2 != 0xab)) && (*(short *)((int)entity + 10) == 0xf4)))) &&
     (*(short *)((int)entity + 0xe) == 0xab)) {
    _call_via_r1((int *)*entity,*(undefined4 *)(*(int *)*entity + 0x114));
  }
  return;
}

// =============================================================================
// Function: Entity_Routine_08036BF8 @ 0x08036BF8
// =============================================================================
void Entity_Routine_08036BF8(undefined4 *entity,int speed)

{
  short s_val1;
  short s_val2;
  
  s_val1 = *(short *)((int)entity + 10);
  s_val2 = *(short *)((int)entity + 0xe);
  Entity_Routine_08034F00(entity,speed);
  if ((((1 < speed) && (*(short *)(entity + 1) == 2)) && ((s_val1 != 0xf4 || (s_val2 != 0xab)))) &&
     ((*(short *)((int)entity + 10) == 0xf4 && (*(short *)((int)entity + 0xe) == 0xab)))) {
    _call_via_r1((int *)*entity,*(undefined4 *)(*(int *)*entity + 0x114));
  }
  return;
}

// =============================================================================
// Function: Entity_Routine_08036C48 @ 0x08036C48
// =============================================================================
void Entity_Routine_08036C48(int entity)

{
  
  Entity_ProcessCollisions(entity);
  *(undefined4 *)(entity + 0x14) = gRomData_080E6A58;
  return entity;
}

// =============================================================================
// Function: Entity_Routine_08036C80 @ 0x08036C80
// =============================================================================
void Entity_Routine_08036C80(undefined4 entity)

{
  undefined4 u_val1;
  
  u_val1 = CppRuntime_OperatorNewArray(0x8c);
  Entity_Routine_080324BC(u_val1,entity,4,0x1b,1,0,0,0);
  return;
}

// =============================================================================
// Function: Entity_Routine_08036CAC @ 0x08036CAC
// =============================================================================
void Entity_Routine_08036CAC(int entity)

{
  
  Entity_ProcessCollisions(entity);
  *(undefined4 *)(entity + 0x14) = gRomData_080E6A18;
  return entity;
}

// =============================================================================
// Function: Entity_Routine_08036CDC @ 0x08036CDC
// =============================================================================
void Entity_Routine_08036CDC(undefined4 entity)

{
  undefined4 u_val1;
  
  u_val1 = CppRuntime_OperatorNewArray(0x8c);
  Entity_Routine_080324BC(u_val1,entity,4,0x1b,1,2,0,0);
  return;
}

// =============================================================================
// Function: Entity_Routine_08036D0C @ 0x08036D0C
// =============================================================================
void Entity_Routine_08036D0C(int entity)

{
  
  Entity_ProcessCollisions(entity);
  *(undefined4 *)(entity + 0x14) = gRomData_080E69D8;
  return entity;
}

// =============================================================================
// Function: Entity_Routine_08036D3C @ 0x08036D3C
// =============================================================================
void Entity_Routine_08036D3C(undefined4 entity)

{
  undefined4 u_val1;
  
  u_val1 = CppRuntime_OperatorNewArray(0x8c);
  Entity_Routine_080324BC(u_val1,entity,4,0x1b,1,0,0,0);
  return;
}

// =============================================================================
// Function: Entity_Routine_08036D68 @ 0x08036D68
// =============================================================================
u32 Entity_Routine_08036D68(int entity)

{
  
  Entity_ProcessCollisions(entity);
  *(undefined4 *)(entity + 0x14) = gRomData_080E6998;
  return entity;
}

// =============================================================================
// Function: Entity_Routine_08036D98 @ 0x08036D98
// =============================================================================
void Entity_Routine_08036D98(undefined4 entity)

{
  undefined4 u_val1;
  
  u_val1 = CppRuntime_OperatorNewArray(0x8c);
  Entity_Routine_080324BC(u_val1,entity,4,0x1b,1,0,0,0);
  return;
}

// =============================================================================
// Function: Entity_Routine_08036DC4 @ 0x08036DC4
// =============================================================================
u32 Entity_Routine_08036DC4(int entity)

{
  
  Entity_ProcessCollisions(entity);
  *(undefined4 *)(entity + 0x14) = gRomData_080E6958;
  return entity;
}

// =============================================================================
// Function: Entity_Routine_08036E00 @ 0x08036E00
// =============================================================================
void Entity_Routine_08036E00(undefined4 entity)

{
  undefined4 u_val1;
  
  u_val1 = CppRuntime_OperatorNewArray(0x8c);
  Entity_Routine_080324BC(u_val1,entity,4,0x1b,1,0,0,0);
  return;
}

// =============================================================================
// Function: Entity_Routine_08036E2C @ 0x08036E2C
// =============================================================================
u32 Entity_Routine_08036E2C(int entity)

{
  
  Entity_ProcessCollisions(entity);
  *(undefined4 *)(entity + 0x14) = gRomData_080E6918;
  *(undefined2 *)(entity + 0x48) = 0;
  return entity;
}

// =============================================================================
// Function: Entity_Routine_08036E70 @ 0x08036E70
// =============================================================================
void Entity_Routine_08036E70(int entity)

{
  undefined4 u_val1;
  char c_char2;
  int i_val3;
  uint u_val4;
  undefined4 u_val5;
  undefined4 u_val6;
  
  i_val3 = NPC_Routine_080A0384(*(int *)(entity + 0x34) + 0x1CD4);
  u_val6 = 0x26F;
  u_val1 = 0x267;
  if (i_val3 != 0) {
    u_val4 = NPC_Routine_0809EAD8();
    if (u_val4 < 0x3c) {
      c_char2 = Entity_Routine_08035AE0(entity);
      u_val5 = u_val1;
      if (c_char2 != '\0') {
        u_val5 = 0xc;
      }
    }
    else {
      c_char2 = Entity_Routine_08035AE0(entity);
      u_val5 = 0x277;
      if ((c_char2 == '\0') && (c_char2 = NPC_Routine_0809EAE0(i_val3), u_val5 = u_val1, c_char2 == '\0')) {
        u_val5 = 0x26B;
        u_val6 = 0x273;
      }
    }
    Entity_Routine_08035908(entity,u_val5);
    Entity_Routine_08035940(entity,u_val6);
  }
  return;
}

// =============================================================================
// Function: Entity_Routine_08036EF0 @ 0x08036EF0
// =============================================================================
void Entity_Routine_08036EF0(undefined4 entity,int speed)

{
  
  Entity_Routine_08034F00();
  if (1 < speed) {
    Entity_Routine_08036E70(entity);
  }
  return;
}

// =============================================================================
// Function: Entity_Routine_08036F0C @ 0x08036F0C
// =============================================================================
u32 Entity_Routine_08036F0C(int entity)

{
  char c_char1;
  int i_val2;
  undefined4 u_val3;
  undefined4 u_val4;
  
  i_val2 = NPC_Routine_080A0384(*(int *)(entity + 0x34) + 0x1CD4);
  if (i_val2 == 0) {
    u_val4 = 0;
  }
  else {
    Entity_Routine_08036E70(entity);
    c_char1 = NPC_Routine_0809EAE0(i_val2);
    u_val4 = 1;
    if (c_char1 != '\0') {
      u_val4 = 4;
    }
    u_val3 = CppRuntime_OperatorNewArray(0x8c);
    u_val4 = Entity_Routine_080324BC(u_val3,entity,4,0x1b,0,u_val4,0,0);
  }
  return u_val4;
}

// =============================================================================
// Function: Entity_Routine_08036F68 @ 0x08036F68
// =============================================================================
void Entity_Routine_08036F68(int entity,undefined4 speed)

{
  char c_char1;
  short s_val2;
  int i_val3;
  uint u_val4;
  undefined4 u_val5;
  byte *pbVar6;
  uint u_val7;
  undefined4 stack_val_24;
  undefined4 stack_val_20;
  undefined4 stack_val_1c;
  undefined4 stack_val_18;
  
  pbVar6 = (byte *)&stack_val_24;
  if ((((*(int *)(entity + 0x10) != 0) &&
       (i_val3 = NPC_Routine_080A0384(*(int *)(entity + 0x34) + 0x1CD4), i_val3 != 0)) &&
      (u_val4 = NPC_Routine_0809EAD8(), u_val4 < 0x3c)) && (c_char1 = Entity_Routine_08035AE0(entity), c_char1 != '\0'))
  {
    s_val2 = *(short *)(entity + 0x48);
    if (s_val2 == 0) {
      stack_val_24 = *gRomData_080F1514;
      stack_val_20 = gRomData_080F1514[1];
      stack_val_1c = gRomData_080F1514[2];
      stack_val_18 = gRomData_080F1514[3];
      u_val5 = math_rand();
      u_val4 = math_umodsi3(u_val5,100);
      for (u_val7 = 0; u_val7 < 4; u_val7 = u_val7 + 1) {
        if (u_val4 < *pbVar6) {
          Entity_Routine_08035908(entity,*(undefined2 *)(pbVar6 + 2));
          break;
        }
        u_val4 = u_val4 - *pbVar6;
        pbVar6 = pbVar6 + 4;
      }
      u_val5 = math_rand();
      s_val2 = math_umodsi3(u_val5,0x78);
      s_val2 = s_val2 + 0x78;
    }
    else {
      s_val2 = s_val2 + -1;
    }
    *(short *)(entity + 0x48) = s_val2;
  }
  Entity_Routine_08034EB4(entity,speed);
  return;
}

// =============================================================================
// Function: Entity_Routine_08037098 @ 0x08037098
// =============================================================================
void Entity_Routine_08037098(int entity,int speed)

{
  byte facing_dir;
  int i_val2;
  int i_val3;
  int i_val4;
  
  i_val2 = 0;
  i_val4 = 0;
  facing_dir = *(byte *)(entity + 0x20);
  i_val3 = i_val2;
  if (facing_dir == 1) {
    speed = -speed;
  }
  else if (facing_dir < 2) {
    if (facing_dir != 0) {
      speed = i_val4;
    }
  }
  else if (facing_dir == 2) {
    i_val3 = -speed;
    speed = i_val4;
  }
  else {
    i_val3 = speed;
    speed = i_val4;
    if (facing_dir != 3) {
      i_val3 = i_val2;
    }
  }
  *(int *)(entity + 0x18) = i_val3;
  *(int *)(entity + 0x1c) = speed;
  return;
}

// =============================================================================
// Function: Entity_Routine_080370D8 @ 0x080370D8
// =============================================================================
u32 Entity_Routine_080370D8(int entity)

{
  char c_char1;
  int i_val2;
  uint u_val3;
  undefined4 u_val4;
  
  i_val2 = *(int *)(entity + 0x10);
  if (i_val2 == 0) {
    u_val4 = 1;
  }
  else {
    u_val4 = 0;
    u_val3 = 0;
    if (*(short *)(i_val2 + 0x3e) != 0) {
      u_val3 = (uint)(-(int)*(short *)(i_val2 + 0x40) | (int)*(short *)(i_val2 + 0x40)) >> 0x1f;
    }
    if ((u_val3 == 0) || (c_char1 = Animal_Routine_0805E894(i_val2 + 0x30), c_char1 != '\0')) {
      u_val4 = 1;
    }
  }
  return u_val4;
}

// =============================================================================
// Function: Entity_Routine_08037118 @ 0x08037118
// =============================================================================
void Entity_Routine_08037118(int entity,int *speed)

{
  int vel_x;
  int vel_y;
  int pos_x;
  int i_val4;
  int i_val5;
  int i_val6;
  int pos_y;
  
  vel_x = *(int *)(entity + 0x18) + *(int *)(entity + 8);
  vel_y = *(int *)(entity + 0x1c) + *(int *)(entity + 0xc);
  pos_x = *(int *)(entity + 8) >> 0x10;
  pos_y = *(int *)(entity + 0xc) >> 0x10;
  i_val6 = (vel_y >> 0x10) - pos_y;
  i_val4 = (vel_x >> 0x10) - pos_x;
  if (0 < i_val6) {
    i_val5 = *speed;
    if (speed[10] < i_val5) {
      NPC_Routine_080AB85C(speed);
      i_val5 = *speed;
    }
    if (i_val5 < i_val6) {
      vel_y = *speed;
      if (speed[10] < vel_y) {
        NPC_Routine_080AB85C(speed);
        vel_y = *speed;
      }
      vel_y = (pos_y + vel_y) * 0x10000;
    }
  }
  if (i_val6 < 0) {
    i_val5 = speed[1];
    if (i_val5 + speed[10] < 0 != SCARRY4(i_val5,speed[10])) {
      NPC_Routine_080AB8D0(speed);
      i_val5 = speed[1];
    }
    if (i_val6 < i_val5) {
      vel_y = speed[1];
      if (vel_y + speed[10] < 0 != SCARRY4(vel_y,speed[10])) {
        NPC_Routine_080AB8D0(speed);
        vel_y = speed[1];
      }
      vel_y = (pos_y + vel_y) * 0x10000;
    }
  }
  if (i_val4 < 0) {
    i_val6 = speed[2];
    if (i_val6 + speed[10] < 0 != SCARRY4(i_val6,speed[10])) {
      NPC_Routine_080AB948(speed);
      i_val6 = speed[2];
    }
    if (i_val4 < i_val6) {
      vel_x = speed[2];
      if (vel_x + speed[10] < 0 != SCARRY4(vel_x,speed[10])) {
        NPC_Routine_080AB948(speed);
        vel_x = speed[2];
      }
      vel_x = (pos_x + vel_x) * 0x10000;
    }
  }
  if (0 < i_val4) {
    i_val6 = speed[3];
    if (speed[10] < i_val6) {
      NPC_Routine_080AB9C4(speed);
      i_val6 = speed[3];
    }
    if (i_val6 < i_val4) {
      vel_x = speed[3];
      if (speed[10] < vel_x) {
        NPC_Routine_080AB9C4(speed);
        vel_x = speed[3];
      }
      vel_x = (pos_x + vel_x) * 0x10000;
    }
  }
  *(int *)(entity + 8) = vel_x;
  *(int *)(entity + 0xc) = vel_y;
  return;
}

// =============================================================================
// Function: Entity_Routine_0803726C @ 0x0803726C
// =============================================================================
void Entity_Routine_0803726C(undefined4 *entity)

{
  short s_val1;
  uint u_val2;
  uint u_val3;
  int i_val4;
  int *p_int5;
  int i_val6;
  undefined4 stack_val_7c;
  undefined4 stack_val_78;
  undefined4 stack_val_74;
  int stack_val_70;
  int stack_val_6c;
  int stack_val_68;
  int stack_val_64;
  undefined4 stack_val_5c;
  undefined4 stack_val_58;
  undefined4 stack_val_54;
  undefined4 stack_val_50;
  undefined4 stack_val_4c;
  int stack_val_48;
  undefined4 stack_val_44;
  undefined4 stack_val_40;
  undefined4 stack_val_3c;
  undefined4 stack_val_38;
  undefined1 stack_buf_34 [8];
  undefined1 stack_buf_2c [8];
  undefined4 stack_val_24;
  undefined4 stack_val_20;
  
  p_int5 = (int *)*entity;
  u_val2 = (uint)*(ushort *)(entity + 1);
  u_val3 = _call_via_r1(p_int5,*(undefined4 *)(*p_int5 + 0x14));
  if (u_val3 != u_val2) goto LAB_08037402;
  _call_via_r3(&stack_val_7c,p_int5,u_val2,*(undefined4 *)(*p_int5 + 0x34));
  _call_via_r2(&stack_val_3c,entity,*(undefined4 *)(entity[5] + 0xc));
  stack_val_24 = stack_val_3c;
  stack_val_20 = stack_val_38;
  stack_val_70 = 0x21;
  stack_val_6c = -0x21;
  stack_val_68 = -0x21;
  stack_val_64 = 0x21;
  stack_val_5c = stack_val_7c;
  stack_val_58 = stack_val_78;
  stack_val_54 = stack_val_74;
  stack_val_50 = stack_val_3c;
  stack_val_4c = stack_val_38;
  stack_val_48 = 0x20;
  stack_val_44 = 0;
  stack_val_40 = 0;
  i_val4 = _call_via_r2((int *)*entity,0,*(undefined4 *)(*(int *)*entity + 0x40));
  if ((i_val4 != 0) && (*(ushort *)(i_val4 + 4) == u_val2)) {
    _call_via_r2(stack_buf_34,i_val4,*(undefined4 *)(*(int *)(i_val4 + 0x14) + 0xc));
    NPC_Routine_080ABA90(&stack_val_70,stack_buf_34,0);
  }
  i_val4 = _call_via_r2((int *)*entity,0x4a,*(undefined4 *)(*(int *)*entity + 0x40));
  if ((i_val4 != 0) && (*(ushort *)(i_val4 + 4) == u_val2)) {
    _call_via_r2(stack_buf_2c,i_val4,*(undefined4 *)(*(int *)(i_val4 + 0x14) + 0xc));
    NPC_Routine_080ABA90(&stack_val_70,stack_buf_2c,0);
  }
  if ((0 < (int)*(short *)(entity + 0xe) - (int)*(short *)(entity + 0xd)) &&
     (0 < (int)*(short *)((int)entity + 0x3a) - (int)*(short *)((int)entity + 0x36))) {
    NPC_Routine_080ABA90(&stack_val_70,entity + 0xd,0);
  }
  s_val1 = *(short *)((int)entity + 0x3e);
  if (s_val1 == 0) {
    s_val1 = _call_via_r1(entity,*(undefined4 *)(entity[5] + 0x40));
  }
  else {
    i_val4 = entity[6];
    i_val6 = entity[7];
    if (i_val4 < 0) {
      if (stack_val_68 + stack_val_48 < 0 != SCARRY4(stack_val_68,stack_val_48)) {
        NPC_Routine_080AB948(&stack_val_70);
      }
      if (stack_val_68 < 0) goto LAB_08037390;
LAB_080373e4:
      s_val1 = 0;
    }
    else {
LAB_08037390:
      if (0 < i_val4) {
        if (stack_val_48 < stack_val_64) {
          NPC_Routine_080AB9C4(&stack_val_70);
        }
        if (stack_val_64 < 1) goto LAB_080373e4;
      }
      if (i_val6 < 0) {
        if (stack_val_6c + stack_val_48 < 0 != SCARRY4(stack_val_6c,stack_val_48)) {
          NPC_Routine_080AB8D0(&stack_val_70);
        }
        if (-1 < stack_val_6c) goto LAB_080373e4;
      }
      if (0 < i_val6) {
        if (stack_val_48 < stack_val_70) {
          NPC_Routine_080AB85C(&stack_val_70);
        }
        if (stack_val_70 < 1) goto LAB_080373e4;
      }
      s_val1 = s_val1 + -1;
    }
  }
  *(short *)((int)entity + 0x3e) = s_val1;
  Entity_Routine_08037118(entity,&stack_val_70);
LAB_08037402:
  if (*(short *)(entity + 9) == 0) {
    s_val1 = *(short *)((int)entity + 0x26);
  }
  else {
    s_val1 = *(short *)(entity + 9) + -1;
  }
  *(short *)(entity + 9) = s_val1;
  i_val4 = entity[4];
  if (i_val4 != 0) {
    _call_via_r1(i_val4,*(undefined4 *)(*(int *)(i_val4 + 4) + 0xc));
  }
  return;
}

// =============================================================================
// Function: Entity_Routine_08037434 @ 0x08037434
// =============================================================================
void Entity_Routine_08037434(int entity)

{
  
  if (*(char *)(entity + 0x40) == '\0') {
    _call_via_r1(entity,*(undefined4 *)(*(int *)(entity + 0x14) + 0x3c));
  }
  *(undefined2 *)(entity + 0x3e) = 0;
  Farmer_Routine_0801FDC0(entity);
  return;
}

// =============================================================================
// Function: Entity_Routine_0803745C @ 0x0803745C
// =============================================================================
void Entity_Routine_0803745C(int entity)

{
  
  Farmer_Routine_0801FE20();
  *(undefined1 *)(entity + 0x40) = 0;
  return;
}

// =============================================================================
// Function: Entity_Routine_08037470 @ 0x08037470
// =============================================================================
void Entity_Routine_08037470(short *entity,int speed)

{
  short s_val1;
  short s_val2;
  
  s_val1 = *(short *)(speed + 10);
  s_val2 = *(short *)(speed + 0xe);
  *entity = s_val1 + -7;
  entity[1] = s_val2 + -9;
  entity[2] = s_val1 + 7;
  entity[3] = s_val2 + 5;
  return;
}

// =============================================================================
// Function: Entity_Routine_08037494 @ 0x08037494
// =============================================================================
u32 Entity_Routine_08037494(undefined4 *entity)

{
  byte b_flag1;
  int i_val2;
  int i_val3;
  uint u_val4;
  undefined4 u_val5;
  int i_val6;
  
  i_val2 = _call_via_r1((int *)*entity,*(undefined4 *)(*(int *)*entity + 0x144));
  i_val6 = (uint)(0xe < (*(byte *)(i_val2 + 10) & 0x1f) - 6) * 0x14 + gRomData_080F1538;
  i_val2 = NPC_Routine_080AB82C(i_val6,5);
  i_val6 = i_val6 + i_val2 * 4;
  i_val3 = NPC_Routine_080AB788((uint)*(byte *)(i_val6 + 2) * 0x3c);
  b_flag1 = *(byte *)(i_val6 + 1);
  i_val6 = NPC_Routine_080AB788(4);
  if (((i_val6 != 0) && (i_val6 != 3)) &&
     (u_val4 = NPC_Routine_080AB7A4(*(byte *)(entity + 8)), *(byte *)(entity + 8) != u_val4)) {
    Entity_Routine_08032198(entity);
  }
  u_val5 = Entity_Routine_08037628(entity,i_val2);
  Entity_Routine_08037098(entity,u_val5);
  u_val4 = Entity_Routine_08037618(entity,i_val2);
  if (*(ushort *)((int)entity + 0x22) != u_val4) {
    Entity_Routine_080321B0(entity);
  }
  return (uint)b_flag1 * 0x3c + i_val3;
}

// =============================================================================
// Function: Entity_Routine_0803753C @ 0x0803753C
// =============================================================================
void Entity_Routine_0803753C(undefined4 entity)

{
  undefined4 u_val1;
  
  u_val1 = CppRuntime_OperatorNewArray(0x8c);
  Entity_Routine_080324BC(u_val1,entity,2,9,0,7,0,0);
  return;
}

// =============================================================================
// Function: Entity_Routine_08037568 @ 0x08037568
// =============================================================================
void Entity_Routine_08037568(undefined4 *entity)

{
  int *p_int1;
  uint u_val2;
  undefined1 temp_buf_18 [8];
  
  p_int1 = (int *)_call_via_r1((int *)*entity,*(undefined4 *)(*(int *)*entity + 0x144));
  if ((*(byte *)((int)p_int1 + 10) & 0x1f) - 6 < 10) {
    u_val2 = ((*(byte *)((int)p_int1 + 9) & 0x7f) >> 2) +
            (*(byte *)((int)p_int1 + 9) & 3) * 0x1e + ((*(byte *)(p_int1 + 2) & 7) + 6) * 0x78;
    if (6 < u_val2) {
      u_val2 = math_modsi3(u_val2,7);
    }
    if (((u_val2 & 7) != 0) && (*p_int1 == 0)) {
      NPC_Routine_080A17A0(temp_buf_18,*(byte *)(entity + 0x11) & 3);
      Entity_Routine_0803211C(entity,temp_buf_18);
      u_val2 = Entity_Routine_08037618(entity,0);
      if (*(ushort *)((int)entity + 0x22) == u_val2) {
        return;
      }
      Entity_Routine_080321B0(entity);
      return;
    }
  }
  Farmer_Routine_0801FF38(entity,0x234);
  return;
}

// =============================================================================
// Function: Entity_Routine_08037628 @ 0x08037628
// =============================================================================
u32 Entity_Routine_08037628(undefined4 entity,int speed)

{
  undefined4 u_val1;
  
  if (speed == 1) {
    u_val1 = 0x8000;
  }
  else {
    u_val1 = 0;
  }
  return u_val1;
}

// =============================================================================
// Function: Entity_Routine_0803763C @ 0x0803763C
// =============================================================================
u32 Entity_Routine_0803763C(undefined4 *entity)

{
  byte b_flag1;
  int i_val2;
  int i_val3;
  uint u_val4;
  undefined4 u_val5;
  int i_val6;
  
  i_val2 = _call_via_r1((int *)*entity,*(undefined4 *)(*(int *)*entity + 0x144));
  i_val6 = (uint)(0xe < (*(byte *)(i_val2 + 10) & 0x1f) - 6) * 0x1c + gRomData_080F156C;
  i_val2 = NPC_Routine_080AB82C(i_val6,7);
  i_val6 = i_val6 + i_val2 * 4;
  i_val3 = NPC_Routine_080AB788((uint)*(byte *)(i_val6 + 2) * 0x3c);
  b_flag1 = *(byte *)(i_val6 + 1);
  i_val6 = NPC_Routine_080AB788(4);
  if (((i_val6 != 0) && (i_val6 != 3)) &&
     (u_val4 = NPC_Routine_080AB7A4(*(byte *)(entity + 8)), *(byte *)(entity + 8) != u_val4)) {
    Entity_Routine_08032198(entity);
  }
  u_val5 = Entity_Routine_080377D4(entity,i_val2);
  Entity_Routine_08037098(entity,u_val5);
  u_val4 = Entity_Routine_080377C4(entity,i_val2);
  if (*(ushort *)((int)entity + 0x22) != u_val4) {
    Entity_Routine_080321B0(entity);
  }
  return (uint)b_flag1 * 0x3c + i_val3;
}

// =============================================================================
// Function: Entity_Routine_080376E4 @ 0x080376E4
// =============================================================================
void Entity_Routine_080376E4(undefined4 entity)

{
  undefined4 u_val1;
  
  u_val1 = CppRuntime_OperatorNewArray(0x8c);
  Entity_Routine_080324BC(u_val1,entity,4,0xc,2,0xc,0,0);
  return;
}

// =============================================================================
// Function: Entity_Routine_08037714 @ 0x08037714
// =============================================================================
void Entity_Routine_08037714(undefined4 *entity)

{
  int *p_int1;
  uint u_val2;
  undefined1 temp_buf_18 [8];
  
  p_int1 = (int *)_call_via_r1((int *)*entity,*(undefined4 *)(*(int *)*entity + 0x144));
  if ((*(byte *)((int)p_int1 + 10) & 0x1f) - 6 < 10) {
    u_val2 = ((*(byte *)((int)p_int1 + 9) & 0x7f) >> 2) +
            (*(byte *)((int)p_int1 + 9) & 3) * 0x1e + ((*(byte *)(p_int1 + 2) & 7) + 6) * 0x78;
    if (6 < u_val2) {
      u_val2 = math_modsi3(u_val2,7);
    }
    if (((u_val2 & 7) != 1) && (*p_int1 == 0)) {
      NPC_Routine_080A1890(temp_buf_18,*(byte *)(entity + 0x11) & 3);
      Entity_Routine_0803211C(entity,temp_buf_18);
      u_val2 = Entity_Routine_080377C4(entity,0);
      if (*(ushort *)((int)entity + 0x22) == u_val2) {
        return;
      }
      Entity_Routine_080321B0(entity);
      return;
    }
  }
  Farmer_Routine_0801FF38(entity,0x234);
  return;
}

// =============================================================================
// Function: Entity_Routine_080377D4 @ 0x080377D4
// =============================================================================
u32 Entity_Routine_080377D4(undefined4 entity,int speed)

{
  undefined4 u_val1;
  
  if (speed == 1) {
    u_val1 = 0x8000;
  }
  else {
    u_val1 = 0;
  }
  return u_val1;
}

// =============================================================================
// Function: Entity_Routine_080377E8 @ 0x080377E8
// =============================================================================
u32 Entity_Routine_080377E8(undefined4 *entity)

{
  byte b_flag1;
  int i_val2;
  int i_val3;
  uint u_val4;
  undefined4 u_val5;
  int i_val6;
  
  i_val2 = _call_via_r1((int *)*entity,*(undefined4 *)(*(int *)*entity + 0x144));
  i_val6 = (uint)(0xe < (*(byte *)(i_val2 + 10) & 0x1f) - 6) * 0x34 + gRomData_080F15B4;
  i_val2 = NPC_Routine_080AB82C(i_val6,0xd);
  i_val6 = i_val6 + i_val2 * 4;
  i_val3 = NPC_Routine_080AB788((uint)*(byte *)(i_val6 + 2) * 0x3c);
  b_flag1 = *(byte *)(i_val6 + 1);
  i_val6 = NPC_Routine_080AB788(4);
  if (((i_val6 != 0) && (i_val6 != 3)) &&
     (u_val4 = NPC_Routine_080AB7A4(*(byte *)(entity + 8)), *(byte *)(entity + 8) != u_val4)) {
    Entity_Routine_08032198(entity);
  }
  u_val5 = Entity_Routine_080378FC(entity,i_val2);
  Entity_Routine_08037098(entity,u_val5);
  u_val4 = Entity_Routine_080378EC(entity,i_val2);
  if (*(ushort *)((int)entity + 0x22) != u_val4) {
    Entity_Routine_080321B0(entity);
  }
  return (uint)b_flag1 * 0x3c + i_val3;
}

// =============================================================================
// Function: Entity_Routine_0803788C @ 0x0803788C
// =============================================================================
void Entity_Routine_0803788C(undefined4 entity)

{
  undefined4 u_val1;
  
  u_val1 = CppRuntime_OperatorNewArray(0x8c);
  Entity_Routine_080324BC(u_val1,entity,2,0x1b,0,8,0,0);
  return;
}

// =============================================================================
// Function: Entity_Routine_080378B8 @ 0x080378B8
// =============================================================================
void Entity_Routine_080378B8(int entity)

{
  uint u_val1;
  undefined1 temp_coords [8];
  
  NPC_Routine_080A198C(temp_coords);
  Entity_Routine_0803211C(entity,temp_coords);
  u_val1 = Entity_Routine_080378EC(entity,0);
  if (*(ushort *)(entity + 0x22) != u_val1) {
    Entity_Routine_080321B0(entity);
  }
  return;
}

// =============================================================================
// Function: Entity_Routine_080378FC @ 0x080378FC
// =============================================================================
u32 Entity_Routine_080378FC(undefined4 entity,uint speed)

{
  undefined4 u_val1;
  
  if (0xc < speed) goto case_08037944;
  switch(*(uint *)(PTR_case_08037910_0803790c + speed * 4) & 0xfffffffe) {
  case 0x8037910:
  case 0x8037944:
case_08037944:
    u_val1 = 0;
    break;
  case 0x8037948:
    u_val1 = 0x8000;
    break;
  case 0x803794e:
    u_val1 = 0x10000;
  }
  return u_val1;
}

// =============================================================================
// Function: Entity_Routine_08037958 @ 0x08037958
// =============================================================================
u32 Entity_Routine_08037958(int entity)

{
  byte b_flag1;
  int i_val2;
  int i_val3;
  uint u_val4;
  undefined4 u_val5;
  int i_val6;
  
  i_val6 = gRomData_080F1638;
  i_val2 = NPC_Routine_080AB82C(gRomData_080F1638,3);
  i_val6 = i_val2 * 4 + i_val6;
  i_val3 = NPC_Routine_080AB788((uint)*(byte *)(i_val6 + 2) * 0x3c);
  b_flag1 = *(byte *)(i_val6 + 1);
  i_val6 = NPC_Routine_080AB788(4);
  if (((i_val6 != 0) && (i_val6 != 3)) &&
     (u_val4 = NPC_Routine_080AB7A4(*(byte *)(entity + 0x20)), *(byte *)(entity + 0x20) != u_val4)) {
    Entity_Routine_08032198(entity);
  }
  u_val5 = Entity_Routine_08037A48(entity,i_val2);
  Entity_Routine_08037098(entity,u_val5);
  u_val4 = Entity_Routine_08037A38(entity,i_val2);
  if (*(ushort *)(entity + 0x22) != u_val4) {
    Entity_Routine_080321B0(entity);
  }
  return (uint)b_flag1 * 0x3c + i_val3;
}

// =============================================================================
// Function: Entity_Routine_080379D8 @ 0x080379D8
// =============================================================================
void Entity_Routine_080379D8(undefined4 entity)

{
  undefined4 u_val1;
  
  u_val1 = CppRuntime_OperatorNewArray(0x8c);
  Entity_Routine_080324BC(u_val1,entity,2,0x1b,0,8,0,0);
  return;
}

// =============================================================================
// Function: Entity_Routine_08037A04 @ 0x08037A04
// =============================================================================
void Entity_Routine_08037A04(int entity)

{
  uint u_val1;
  undefined1 temp_coords [8];
  
  NPC_Routine_080A19EC(temp_coords);
  Entity_Routine_0803211C(entity,temp_coords);
  u_val1 = Entity_Routine_08037A38(entity,0);
  if (*(ushort *)(entity + 0x22) != u_val1) {
    Entity_Routine_080321B0(entity);
  }
  return;
}

// =============================================================================
// Function: Entity_Routine_08037A48 @ 0x08037A48
// =============================================================================
u32 Entity_Routine_08037A48(undefined4 entity,int speed)

{
  undefined4 u_val1;
  
  if (speed == 1) {
    u_val1 = 0x8000;
  }
  else {
    u_val1 = 0;
  }
  return u_val1;
}

// =============================================================================
// Function: Entity_Routine_08037A5C @ 0x08037A5C
// =============================================================================
u32 Entity_Routine_08037A5C(undefined4 entity,undefined4 speed,byte collision)

{
  int i_val1;
  undefined2 stack_val_1c;
  undefined2 stack_val_1a;
  undefined2 stack_val_18;
  undefined2 stack_val_16;
  
  i_val1 = CppRuntime_OperatorNewArray(0x48);
  Entity_Routine_08037008(i_val1,entity,speed,0x71C,0);
  *(undefined4 *)(i_val1 + 0x14) = gRomData_080E72E4;
  *(byte *)(i_val1 + 0x44) = *(byte *)(i_val1 + 0x44) & 0xfc | collision & 3;
  stack_val_1c = 0x160;
  stack_val_1a = 0xd8;
  stack_val_18 = 0x198;
  stack_val_16 = 0xe8;
  Entity_Routine_08037244(i_val1,&stack_val_1c);
  return i_val1;
}

// =============================================================================
// Function: Entity_Routine_08037AD0 @ 0x08037AD0
// =============================================================================
u32 Entity_Routine_08037AD0(undefined4 entity,undefined4 speed,byte collision)

{
  int i_val1;
  undefined2 stack_val_1c;
  undefined2 stack_val_1a;
  undefined2 stack_val_18;
  undefined2 stack_val_16;
  
  i_val1 = CppRuntime_OperatorNewArray(0x48);
  Entity_Routine_08037008(i_val1,entity,speed,0x2ac,0xb);
  *(undefined4 *)(i_val1 + 0x14) = gRomData_080E72A0;
  *(byte *)(i_val1 + 0x44) = *(byte *)(i_val1 + 0x44) & 0xfc | collision & 3;
  stack_val_1c = 0x398;
  stack_val_1a = 0x120;
  stack_val_18 = 0x4e0;
  stack_val_16 = 0x128;
  Entity_Routine_08037244(i_val1,&stack_val_1c);
  return i_val1;
}

// =============================================================================
// Function: Entity_Routine_08037B48 @ 0x08037B48
// =============================================================================
u32 Entity_Routine_08037B48(undefined4 entity,undefined4 speed)

{
  int i_val1;
  
  i_val1 = CppRuntime_OperatorNewArray(0x44);
  Entity_Routine_08037008(i_val1,entity,speed,0x379,0xc);
  *(undefined4 *)(i_val1 + 0x14) = gRomData_080E725C;
  return i_val1;
}

// =============================================================================
// Function: Entity_Routine_08037B80 @ 0x08037B80
// =============================================================================
u32 Entity_Routine_08037B80(undefined4 entity,undefined4 speed)

{
  int i_val1;
  
  i_val1 = CppRuntime_OperatorNewArray(0x44);
  Entity_Routine_08037008(i_val1,entity,speed,0x207,10);
  *(undefined4 *)(i_val1 + 0x14) = gRomData_080E7218;
  return i_val1;
}

// =============================================================================
// Function: Entity_Routine_08037BB8 @ 0x08037BB8
// =============================================================================
u32 Entity_Routine_08037BB8(int entity,undefined4 speed,undefined4 collision)

{
  
  Entity_Routine_08037008(entity,speed,collision,0x207,10);
  *(undefined4 *)(entity + 0x14) = gRomData_080E7218;
  return entity;
}

// =============================================================================
// Function: Entity_Routine_08037BE0 @ 0x08037BE0
// =============================================================================
void Entity_Routine_08037BE0(int entity,undefined4 speed,undefined4 collision)

{
  
  Entity_Routine_08037008(entity,speed,collision,0x379,0xc);
  *(undefined4 *)(entity + 0x14) = gRomData_080E725C;
  return entity;
}

// =============================================================================
// Function: Entity_Routine_08037C08 @ 0x08037C08
// =============================================================================
u32 Entity_Routine_08037C08(int entity,undefined4 speed,undefined4 collision,byte flags)

{
  undefined2 stack_val_14;
  undefined2 stack_val_12;
  undefined2 stack_val_10;
  undefined2 stack_val_e;
  
  Entity_Routine_08037008(entity,speed,collision,0x2ac,0xb);
  *(undefined4 *)(entity + 0x14) = gRomData_080E72A0;
  *(byte *)(entity + 0x44) = *(byte *)(entity + 0x44) & 0xfc | flags & 3;
  stack_val_14 = 0x398;
  stack_val_12 = 0x120;
  stack_val_10 = 0x4e0;
  stack_val_e = 0x128;
  Entity_Routine_08037244(entity,&stack_val_14);
  return entity;
}

// =============================================================================
// Function: Entity_Routine_08037C68 @ 0x08037C68
// =============================================================================
u32 Entity_Routine_08037C68(int entity,undefined4 speed,undefined4 collision,byte flags)

{
  undefined2 stack_val_14;
  undefined2 stack_val_12;
  undefined2 stack_val_10;
  undefined2 stack_val_e;
  
  Entity_Routine_08037008(entity,speed,collision,0x71C,0);
  *(undefined4 *)(entity + 0x14) = gRomData_080E72E4;
  *(byte *)(entity + 0x44) = *(byte *)(entity + 0x44) & 0xfc | flags & 3;
  stack_val_14 = 0x160;
  stack_val_12 = 0xd8;
  stack_val_10 = 0x198;
  stack_val_e = 0xe8;
  Entity_Routine_08037244(entity,&stack_val_14);
  return entity;
}

// =============================================================================
// Function: Entity_Routine_08037CC4 @ 0x08037CC4
// =============================================================================
void Entity_Routine_08037CC4(int entity)

{
  
  Farmer_Routine_0801FD78();
  *(undefined4 *)(entity + 0x14) = gRomData_080E7444;
  return entity;
}

// =============================================================================
// Function: Entity_Routine_08037CF0 @ 0x08037CF0
// =============================================================================
void Entity_Routine_08037CF0(undefined4 entity)

{
  undefined4 u_val1;
  
  u_val1 = CppRuntime_OperatorNewArray(0x54);
  Entity_Routine_08037D08(u_val1,entity);
  return;
}

// =============================================================================
// Function: Entity_Routine_08037D74 @ 0x08037D74
// =============================================================================
void Entity_Routine_08037D74(int *entity,undefined4 *speed)

{
  undefined4 u_val1;
  int i_val2;
  
  i_val2 = (int)*(short *)(*entity + 0xe);
  u_val1 = *speed;
  if ((-entity[4] | entity[4]) < 0) {
    i_val2 = _call_via_r4(speed[2],(int)*(short *)(*entity + 10) - (int)*(short *)(speed + 3)
                            ,i_val2 - *(short *)((int)speed + 0xe),0xaa,0x8000 - i_val2,
                            entity + 0xc,entity[2],(short)entity[5],entity + 6,u_val1,speed[2])
    ;
  }
  else {
    i_val2 = 0;
  }
  if ((i_val2 != 0) && ((char)entity[0x14] != '\0')) {
    NPC_Routine_080A480C(entity + 2,u_val1,entity + 0xe);
    NPC_Routine_080A4944(entity + 2,entity + 0x10,1);
    *(char *)(entity + 0x14) = '\0';
  }
  return;
}

// =============================================================================
// Function: Entity_Routine_08037E18 @ 0x08037E18
// =============================================================================
u32 Entity_Routine_08037E18(int entity,undefined4 speed,undefined4 collision)

{
  undefined1 temp_buf_18 [8];
  
  Farmer_Routine_0800FFE0(temp_buf_18,collision);
  Farmer_Routine_0801FD78(entity,speed,temp_buf_18);
  *(undefined4 *)(entity + 0x14) = gRomData_080E73FC;
  *(undefined4 *)(entity + 0x18) = collision;
  return entity;
}

// =============================================================================
// Function: Entity_Routine_08037E9C @ 0x08037E9C
// =============================================================================
void Entity_Routine_08037E9C(undefined4 entity)

{
  undefined4 u_val1;
  
  u_val1 = CppRuntime_OperatorNewArray(0x58);
  Entity_Routine_08037EF0(u_val1,entity);
  return;
}

// =============================================================================
// Function: Entity_Routine_08037EB4 @ 0x08037EB4
// =============================================================================
void Entity_Routine_08037EB4(int entity,undefined1 *speed)

{
  
  Farmer_Routine_0800FFF4(*(undefined4 *)(entity + 0x18),*speed);
  if (*(int *)(entity + 0x10) != 0) {
    Entity_Routine_08037F74();
  }
  return;
}

// =============================================================================
// Function: Entity_Routine_08037ED0 @ 0x08037ED0
// =============================================================================
void Entity_Routine_08037ED0(short *entity,int speed)

{
  short s_val1;
  short s_val2;
  
  s_val1 = *(short *)(speed + 10);
  s_val2 = *(short *)(speed + 0xe);
  *entity = s_val1 + -7;
  entity[1] = s_val2 + -4;
  entity[2] = s_val1 + 7;
  entity[3] = s_val2 + 5;
  return;
}

// =============================================================================
// Function: Entity_Routine_08037F60 @ 0x08037F60
// =============================================================================
void Entity_Routine_08037F60(int entity)

{
  char c_char1;
  
  c_char1 = *(char *)(entity + 0x54);
  if (c_char1 != '\0') {
    *(char *)(entity + 0x54) = c_char1 + -1;
  }
  return;
}

// =============================================================================
// Function: Entity_Routine_08037F7C @ 0x08037F7C
// =============================================================================
void Entity_Routine_08037F7C(int *entity,undefined4 *speed)

{
  undefined4 u_val1;
  int i_val2;
  int i_val3;
  
  i_val3 = (int)*(short *)(*entity + 0xe);
  i_val2 = i_val3 - *(short *)((int)speed + 0xe);
  u_val1 = *speed;
  if ((char)entity[0x15] != '\0') {
    i_val2 = i_val2 + -2;
  }
  if ((-entity[4] | entity[4]) < 0) {
    i_val2 = _call_via_r4(speed[2],(int)*(short *)(*entity + 10) - (int)*(short *)(speed + 3)
                            ,i_val2,0xaa,0x8000 - i_val3,entity + 0xc,entity[2],(short)entity[5],
                            entity + 6,u_val1,speed[2]);
  }
  else {
    i_val2 = 0;
  }
  if ((i_val2 != 0) && ((char)entity[0x14] != '\0')) {
    NPC_Routine_080A480C(entity + 2,u_val1,entity + 0xe);
    NPC_Routine_080A4944(entity + 2,entity + 0x10,1);
    *(char *)(entity + 0x14) = '\0';
  }
  return;
}

// =============================================================================
// Function: Entity_Routine_08038028 @ 0x08038028
// =============================================================================
u32 Entity_Routine_08038028(int entity,int *speed,undefined4 collision)

{
  char c_char1;
  int i_val2;
  
  Farmer_Routine_0801FD78();
  *(undefined4 *)(entity + 0x14) = gRomData_080E73B4;
  *(undefined4 *)(entity + 0x18) = collision;
  *(undefined4 *)(entity + 0x1c) = 0;
  *(undefined1 *)(entity + 0x25) = 0;
  *(undefined1 *)(entity + 0x26) = 0;
  *(undefined2 *)(entity + 0x28) = 0x31;
  i_val2 = _call_via_r2(speed,0x2b,*(undefined4 *)(*speed + 0x40));
  if (((i_val2 != 0) && (*(short *)(i_val2 + 4) == *(short *)(entity + 4))) &&
     (c_char1 = Entity_Routine_08020460(i_val2), c_char1 != '\0')) {
    Entity_Routine_08038374(entity,*(undefined4 *)(i_val2 + 8),*(undefined4 *)(i_val2 + 0xc),
                  *(undefined2 *)(i_val2 + 0x22),*(undefined1 *)(i_val2 + 0x20));
  }
  return entity;
}

// =============================================================================
// Function: Entity_Routine_08038110 @ 0x08038110
// =============================================================================
void Entity_Routine_08038110(undefined4 *entity)

{
  byte b_flag1;
  uint u_val2;
  int *p_int3;
  int i_val4;
  int *p_int5;
  int i_val6;
  int stack_val_5c;
  int stack_val_58;
  uint stack_val_54;
  int stack_val_50;
  int stack_val_4c;
  int stack_val_48;
  int stack_val_44;
  int stack_val_40;
  int stack_val_3c;
  uint stack_val_38;
  undefined4 stack_val_34;
  undefined4 stack_val_30;
  undefined4 stack_val_2c;
  undefined4 stack_val_28;
  undefined4 stack_val_24;
  undefined4 stack_val_20;
  undefined4 stack_val_1c;
  
  if (*(char *)((int)entity + 0x25) == '\0') {
    return;
  }
  p_int5 = (int *)*entity;
  _call_via_r3(&stack_val_5c,p_int5,*(undefined2 *)(entity + 1),*(undefined4 *)(*p_int5 + 0x34));
  i_val4 = entity[8] + 0xFFFFB85D;
  entity[8] = i_val4;
  i_val4 = entity[7] + i_val4;
  entity[7] = i_val4;
  if (i_val4 < 1) {
    entity[7] = 0;
    *(char *)((int)entity + 0x25) = '\0';
    Farmer_Routine_0801FE94(&stack_val_50,entity);
    gba_memcpy(entity[6],&stack_val_50,6);
    if (((stack_val_5c == 0) || ((stack_val_54 & 0xffff) < (uint)((int)entity[2] >> 0x13))) ||
       (stack_val_54 >> 0x10 < (uint)((int)entity[3] >> 0x13))) {
      p_int3 = (int *)0x0;
    }
    else {
      u_val2 = ((int)entity[3] >> 0x13) * (stack_val_54 & 0xffff) + ((int)entity[2] >> 0x13);
      if (stack_val_58 != 0) {
        u_val2 = (uint)*(byte *)(stack_val_58 + u_val2);
      }
      p_int3 = (int *)(stack_val_5c + u_val2 * 4);
    }
    if (p_int3 == (int *)0x0) {
      _call_via_r2(p_int5,1,*(undefined4 *)(*p_int5 + 0x13c));
      return;
    }
    if (*p_int3 * 0x40000000 < 0) {
      _call_via_r2(p_int5,0,*(undefined4 *)(*p_int5 + 0x13c));
      return;
    }
    i_val4 = _call_via_r2((int *)*entity,0x2b,*(undefined4 *)(*(int *)*entity + 0x40));
    if (i_val4 == 0) {
      return;
    }
    Entity_Routine_0802151C(i_val4,&stack_val_50);
    return;
  }
  _call_via_r2(&stack_val_28,entity,*(undefined4 *)(entity[5] + 0xc));
  stack_val_20 = stack_val_28;
  stack_val_1c = stack_val_24;
  stack_val_50 = 0x21;
  stack_val_4c = -0x21;
  stack_val_48 = -0x21;
  stack_val_44 = 0x21;
  stack_val_40 = stack_val_5c;
  stack_val_3c = stack_val_58;
  stack_val_38 = stack_val_54;
  stack_val_34 = stack_val_28;
  stack_val_30 = stack_val_24;
  stack_val_2c = 0x20;
  i_val4 = entity[2];
  i_val6 = entity[3];
  b_flag1 = *(byte *)(entity + 9);
  if (b_flag1 == 1) {
    NPC_Routine_080ABBC4(&stack_val_50);
    stack_val_50 = stack_val_4c * 0x10000;
    if (stack_val_50 - 0xFFFE38E4 == 0 || stack_val_50 < 0xFFFE38E4) {
      i_val6 = i_val6 + 0xFFFE38E4;
      goto LAB_08038250;
    }
  }
  else {
    if (1 < b_flag1) {
      if (b_flag1 == 2) {
        NPC_Routine_080ABBEC(&stack_val_50);
        stack_val_44 = stack_val_48 * 0x10000;
        if (stack_val_44 - 0xFFFE38E4 == 0 || stack_val_44 < 0xFFFE38E4) {
          i_val4 = i_val4 + 0xFFFE38E4;
          goto LAB_08038250;
        }
      }
      else {
        if (b_flag1 != 3) goto LAB_08038250;
        NPC_Routine_080ABC14(&stack_val_50);
        stack_val_44 = stack_val_44 * 0x10000;
        if (stack_val_44 - 0x0001C71B != 0 && 0x0001C71B <= stack_val_44) {
          stack_val_44 = 0x0001C71C;
        }
      }
      i_val4 = i_val4 + stack_val_44;
      goto LAB_08038250;
    }
    if (b_flag1 != 0) goto LAB_08038250;
    NPC_Routine_080ABBA0(&stack_val_50);
    stack_val_50 = stack_val_50 * 0x10000;
    if (stack_val_50 - 0x0001C71B != 0 && 0x0001C71B <= stack_val_50) {
      i_val6 = i_val6 + 0x0001C71C;
      goto LAB_08038250;
    }
  }
  i_val6 = i_val6 + stack_val_50;
LAB_08038250:
  entity[2] = i_val4;
  entity[3] = i_val6;
  return;
}

// =============================================================================
// Function: Entity_Routine_08038300 @ 0x08038300
// =============================================================================
void Entity_Routine_08038300(int entity)

{
  int i_val1;
  
  i_val1 = *(int *)(entity + 0x10);
  if (i_val1 != 0) {
    _call_via_r1(i_val1,*(undefined4 *)(*(int *)(i_val1 + 4) + 0xc));
  }
  Entity_Routine_08038110(entity);
  return;
}

// =============================================================================
// Function: Entity_Routine_08038320 @ 0x08038320
// =============================================================================
void Entity_Routine_08038320(undefined4 entity)

{
  
  Farmer_Routine_0801FE60();
  Entity_Routine_08038110(entity);
  return;
}

// =============================================================================
// Function: Entity_Routine_08038334 @ 0x08038334
// =============================================================================
void Entity_Routine_08038334(undefined4 entity)

{
  undefined4 u_val1;
  
  u_val1 = CppRuntime_OperatorNewArray(0x48);
  Entity_Routine_0803853C(u_val1,entity);
  return;
}

// =============================================================================
// Function: Entity_Routine_0803834C @ 0x0803834C
// =============================================================================
void Entity_Routine_0803834C(short *entity,int speed)

{
  short s_val1;
  short s_val2;
  
  s_val1 = *(short *)(speed + 10);
  s_val2 = *(short *)(speed + 0xe);
  *entity = s_val1 + -4;
  entity[1] = s_val2 + -4;
  entity[2] = s_val1 + 4;
  entity[3] = s_val2 + 4;
  return;
}

// =============================================================================
// Function: Entity_Routine_08038374 @ 0x08038374
// =============================================================================
undefined4
Entity_Routine_08038374(int entity,undefined4 speed,undefined4 collision,undefined4 flags,
             undefined4 arg_5)

{
  
  *(undefined1 *)(entity + 0x26) = 1;
  *(undefined4 *)(entity + 8) = speed;
  *(undefined4 *)(entity + 0xc) = collision;
  Entity_Routine_08038398(entity,flags,arg_5);
  return;
}

// =============================================================================
// Function: Entity_Routine_08038398 @ 0x08038398
// =============================================================================
void Entity_Routine_08038398(int entity,int speed,int collision)

{
  int i_val1;
  int i_val2;
  
  i_val1 = 0x15;
  if ((uint)(speed + 0xFFFFFCC8) < 0x3e) {
    switch(*(uint *)((speed + 0xFFFFFCC8) * 4 + gInlineTable_080383BC) & 0xfffffffe) {
    case 0x80384b4:
      i_val1 = 0x19;
      break;
    case 0x80384b8:
      i_val1 = 0x1d;
      break;
    case 0x80384bc:
      i_val1 = 0x21;
      break;
    case 0x80384c0:
      i_val1 = 0x25;
      break;
    case 0x80384c4:
      i_val1 = 0x29;
      break;
    case 0x80384c8:
      i_val1 = 0x2d;
    }
  }
  if (i_val1 + collision != (uint)*(ushort *)(entity + 0x28)) {
    i_val2 = *(int *)(entity + 0x10);
    if (i_val2 != 0) {
      Animal_Routine_0805E860(i_val2 + 0x30);
      *(undefined1 *)(i_val2 + 0x44) = 1;
      *(undefined1 *)(i_val2 + 0x46) = 0;
      *(undefined1 *)(i_val2 + 0x47) = 1;
    }
    *(short *)(entity + 0x28) = (short)(i_val1 + collision);
  }
  return;
}

// =============================================================================
// Function: Entity_Routine_080384FC @ 0x080384FC
// =============================================================================
void Entity_Routine_080384FC(int entity)

{
  int i_val1;
  
  if (*(short *)(entity + 0x28) != 0x31) {
    i_val1 = *(int *)(entity + 0x10);
    if (i_val1 != 0) {
      Animal_Routine_0805E860(i_val1 + 0x30,0x31);
      *(undefined1 *)(i_val1 + 0x44) = 1;
      *(undefined1 *)(i_val1 + 0x46) = 0;
      *(undefined1 *)(i_val1 + 0x47) = 1;
    }
    *(undefined2 *)(entity + 0x28) = 0x31;
  }
  *(undefined1 *)(entity + 0x26) = 0;
  return;
}

// =============================================================================
// Function: Entity_Routine_0803853C @ 0x0803853C
// =============================================================================
u32 Entity_Routine_0803853C(undefined4 *entity,undefined4 *speed)

{
  undefined4 u_val1;
  
  *entity = speed;
  entity[1] = gRomData_080E73E8;
  u_val1 = _call_via_r1((int *)*speed,*(undefined4 *)(*(int *)*speed + 100));
  NPC_Routine_080A4A00(entity + 2,u_val1,*(undefined2 *)(speed + 10),*speed,2,7,0);
  return entity;
}

// =============================================================================
// Function: Entity_Routine_08038580 @ 0x08038580
// =============================================================================
void Entity_Routine_08038580(int entity)

{
  char c_char1;
  int i_val2;
  char *p_char3;
  
  p_char3 = (char *)(entity + 0x47);
  if (*p_char3 == '\0') {
    i_val2 = Animal_Routine_0805E8F0(entity + 0x30);
    if (-1 < i_val2 * 0x40000000) {
      return;
    }
    p_char3 = (char *)(entity + 0x44);
    c_char1 = '\x01';
  }
  else {
    c_char1 = '\0';
  }
  *p_char3 = c_char1;
  return;
}

// =============================================================================
// Function: Entity_Routine_080385B0 @ 0x080385B0
// =============================================================================
void Entity_Routine_080385B0(int *entity,undefined4 *speed)

{
  short s_val1;
  undefined4 *p_uint2;
  int i_val3;
  int i_val4;
  undefined4 u_val5;
  int i_val6;
  int *p_int7;
  uint u_val8;
  undefined1 temp_buf_5c [8];
  undefined1 stack_buf_54 [8];
  undefined1 stack_buf_4c [16];
  undefined4 stack_val_3c;
  undefined4 stack_val_38;
  int stack_val_34;
  int stack_val_30;
  uint stack_val_2c;
  int stack_val_28;
  undefined4 *puStack_24;
  
  p_uint2 = (undefined4 *)*entity;
  s_val1 = *(short *)((int)p_uint2 + 10);
  stack_val_34 = (int)s_val1 - (int)*(short *)(speed + 3);
  i_val6 = (int)*(short *)((int)p_uint2 + 0xe);
  stack_val_30 = i_val6 - *(short *)((int)speed + 0xe);
  stack_val_2c = (uint)*(byte *)((int)p_uint2 + 0x26);
  i_val3 = -i_val6 + 0x8000;
  if (stack_val_2c != 0) {
    i_val3 = -i_val6 + 0x7fff;
  }
  stack_val_3c = *speed;
  stack_val_38 = speed[2];
  u_val8 = 2;
  stack_val_28 = stack_val_30;
  if (stack_val_2c == 0) {
    i_val4 = Entity_Routine_0803836C(p_uint2);
    stack_val_28 = stack_val_30 - i_val4;
    if ((0xf < i_val4) &&
       ((8 < *(ushort *)(p_uint2 + 1) ||
        ((((*(ushort *)(p_uint2 + 1) == 2 && ((uint)(s_val1 + 0xFFFFFEF0) <= 0x2AF)) &&
          (0xaf < i_val6)) && (i_val6 <= (int)(0x2AF - 0x60))))))) {
      u_val8 = 1;
    }
  }
  p_int7 = entity + 2;
  puStack_24 = &stack_val_3c;
  _call_via_r3(temp_buf_5c,(int *)entity[0xc],
                  *(undefined2 *)(entity[0xd] + (uint)*(ushort *)(entity + 0xf) * 4),
                  *(undefined4 *)(*(int *)entity[0xc] + 0x10));
  if ((-entity[4] | entity[4]) < 0) {
    i_val3 = _call_via_r4(puStack_24[1],stack_val_34,stack_val_28,
                            u_val8 << 2 | u_val8 | u_val8 << 4 | u_val8 << 6,i_val3,temp_buf_5c,entity[2]
                            ,(short)entity[5],entity + 6);
  }
  else {
    i_val3 = 0;
  }
  if ((i_val3 != 0) && ((char)entity[0x11] != '\0')) {
    NPC_Routine_080A480C(p_int7,*puStack_24,stack_buf_54);
    if (*(char *)((int)entity + 0x45) == '\0') {
      if (*(char *)((int)entity + 0x46) == '\0') {
        NPC_Routine_080A4944(p_int7,stack_buf_4c,1);
        *(char *)((int)entity + 0x46) = '\x01';
      }
    }
    else {
      NPC_Routine_080A4944(p_int7,stack_buf_4c,1);
    }
    *(char *)(entity + 0x11) = '\0';
  }
  if (stack_val_2c == 0) {
    u_val5 = _call_via_r1((int *)*p_uint2,*(undefined4 *)(*(int *)*p_uint2 + 0x58));
    ScriptEngine_SetVariable(u_val5,speed[2],stack_val_34,stack_val_30,stack_val_2c);
  }
  return;
}

// =============================================================================
// Function: Entity_Routine_08038740 @ 0x08038740
// =============================================================================
u32 Entity_Routine_08038740(int entity,undefined4 speed,undefined4 collision)

{
  
  Farmer_Routine_0801FD78(entity);
  *(undefined4 *)(entity + 0x14) = gRomData_080E7380;
  *(undefined4 *)(entity + 0x18) = collision;
  return entity;
}

// =============================================================================
// Function: Entity_Routine_080387A0 @ 0x080387A0
// =============================================================================
void Entity_Routine_080387A0(undefined4 entity)

{
  undefined4 u_val1;
  
  u_val1 = CppRuntime_OperatorNewArray(0x18);
  Entity_Routine_08038820(u_val1,entity);
  return;
}

// =============================================================================
// Function: Entity_Routine_080387B8 @ 0x080387B8
// =============================================================================
void Entity_Routine_080387B8(int entity)

{
  
  if (*(int *)(entity + 0x10) != 0) {
    Entity_Routine_08038DF0();
  }
  return;
}

// =============================================================================
// Function: Entity_Routine_080387C8 @ 0x080387C8
// =============================================================================
void Entity_Routine_080387C8(int entity)

{
  
  if (*(int *)(entity + 0x10) != 0) {
    Entity_Routine_08038E90();
  }
  return;
}

// =============================================================================
// Function: Entity_Routine_080387D8 @ 0x080387D8
// =============================================================================
u32 Entity_Routine_080387D8(int entity)

{
  undefined4 u_val1;
  
  if (*(int *)(entity + 0x10) == 0) {
    u_val1 = 1;
  }
  else {
    u_val1 = Entity_Routine_08038EA0();
  }
  return u_val1;
}

// =============================================================================
// Function: Entity_Routine_080387EC @ 0x080387EC
// =============================================================================
void Entity_Routine_080387EC(int entity)

{
  
  if (*(int *)(entity + 0x10) != 0) {
    Entity_Routine_08038EB8();
  }
  return;
}

// =============================================================================
// Function: Entity_Routine_080387FC @ 0x080387FC
// =============================================================================
void Entity_Routine_080387FC(int entity)

{
  
  if (*(int *)(entity + 0x10) != 0) {
    Entity_Routine_08038EE0();
  }
  return;
}

// =============================================================================
// Function: Entity_Routine_0803880C @ 0x0803880C
// =============================================================================
u32 Entity_Routine_0803880C(int entity)

{
  undefined4 u_val1;
  
  if (*(int *)(entity + 0x10) == 0) {
    u_val1 = 0;
  }
  else {
    u_val1 = Entity_Routine_080390D0();
  }
  return u_val1;
}

// =============================================================================
// Function: Entity_Routine_08038820 @ 0x08038820
// =============================================================================
u32 Entity_Routine_08038820(undefined4 *entity,undefined4 *speed)

{
  int i_val1;
  int *p_int2;
  undefined4 u_val3;
  int *p_int4;
  int i_val5;
  int *p_int6;
  undefined2 *apuStack_28 [2];
  
  *entity = speed;
  entity[1] = gRomData_080E736C;
  if ((*(byte *)(speed[6] + 0x54) & 0x7f) >> 5 == 1) {
    i_val1 = CppRuntime_OperatorNewArray(0x4c);
    p_int4 = (int *)*speed;
    p_int2 = (int *)_call_via_r1(p_int4,*(undefined4 *)(*p_int4 + 0x74));
    NPC_Routine_080A4740(i_val1,p_int4,6,0x1b);
    *(undefined4 *)(i_val1 + 0x24) = gRomData_080E602C;
    i_val5 = *p_int2;
    _call_via_r3(apuStack_28,p_int2,0,*(undefined4 *)(i_val5 + 0xc));
    _call_via_r3(i_val1 + 0x28,p_int2,*apuStack_28[0],*(undefined4 *)(i_val5 + 0x10));
    *(undefined1 *)(i_val1 + 0x48) = 1;
  }
  else {
    i_val1 = 0;
  }
  entity[2] = i_val1;
  entity[3] = 0;
  entity[4] = 0;
  entity[5] = 0;
  u_val3 = CppRuntime_OperatorNewArray(0x194);
  p_int2 = (int *)VTable_Routine_080DCB7C(u_val3,*(undefined4 *)*entity,
                                (*(byte *)(speed[6] + 0x5d) & 0xf) >> 2 == 1);
  p_int4 = (int *)entity[5];
  if ((p_int2 != p_int4) && (p_int4 != (int *)0x0)) {
    i_val1 = *p_int4;
    for (p_int6 = p_int4 + 1; p_int6 != p_int4 + i_val1 * 0x14 + 1; p_int6 = p_int6 + 0x14) {
      NPC_Routine_080A47B4(p_int6,2);
    }
    CppRuntime_FreeMemory(p_int4);
  }
  entity[5] = p_int2;
  return entity;
}

// =============================================================================
// Function: Entity_Routine_08038928 @ 0x08038928
// =============================================================================
void Entity_Routine_08038928(int entity)

{
  uint *p_uint1;
  int pos_y;
  int i_val3;
  uint u_val4;
  uint *p_uint5;
  int i_val6;
  int *p_int7;
  uint *p_uint8;
  char *p_char9;
  undefined1 *p_uint10;
  int *p_int11;
  uint loop_i;
  
  p_uint1 = *(uint **)(entity + 0x14);
  if ((p_uint1 != (uint *)0x0) && (loop_i = 0, *p_uint1 != 0)) {
    p_uint5 = p_uint1 + 0x10;
    p_uint8 = p_uint1 + 0xb;
    do {
      if (*(char *)((int)p_uint5 + 3) == '\0') {
        pos_y = Animal_Routine_0805E8F0(p_uint8);
        if (pos_y * 0x40000000 < 0) {
          *(undefined1 *)p_uint5 = 1;
        }
      }
      else {
        *(undefined1 *)((int)p_uint5 + 3) = 0;
      }
      u_val4 = p_uint5[1] - p_uint5[3];
      p_uint5[1] = u_val4;
      pos_y = (uint)(byte)p_uint5[4] * 0x10000;
      if ((int)(u_val4 + pos_y) < 0 != SCARRY4(u_val4,pos_y)) {
        p_uint5[1] = 0x1e00000;
      }
      p_uint5 = p_uint5 + 0x14;
      p_uint8 = p_uint8 + 0x14;
      loop_i = loop_i + 1;
    } while (loop_i < *p_uint1);
  }
  pos_y = *(int *)(entity + 0xc);
  if (((pos_y != 0) && (*(char *)(pos_y + 0x50) != '\0')) &&
     (i_val3 = *(int *)(pos_y + 0x4c) + 0xFFFF8000, *(int *)(pos_y + 0x4c) = i_val3,
     i_val3 < 0xa80001)) {
    *(undefined4 *)(pos_y + 0x4c) = 0xa80000;
    *(char *)(pos_y + 0x50) = '\0';
  }
  pos_y = *(int *)(entity + 0x10);
  if (pos_y != 0) {
    i_val3 = 0;
    loop_i = 0;
    p_char9 = (char *)(pos_y + 0x144);
    i_val6 = pos_y + 0x2c;
    p_uint10 = (undefined1 *)(pos_y + 0x43);
    do {
      if (*p_char9 == '\0') {
        if (*(char *)(i_val6 + 0x17) == '\0') {
          pos_y = Animal_Routine_0805E8F0(i_val6);
          if (pos_y * 0x40000000 < 0) {
            *(undefined1 *)(i_val6 + 0x14) = 1;
          }
        }
        else {
          *p_uint10 = 0;
          pos_y = 2;
        }
        if (pos_y * 0x20000000 < 0) {
          *p_char9 = '\x01';
        }
      }
      else {
        i_val3 = i_val3 + 1;
      }
      p_char9 = p_char9 + 1;
      i_val6 = i_val6 + 0x40;
      p_uint10 = p_uint10 + 0x40;
      loop_i = loop_i + 1;
    } while (loop_i < 5);
    if (i_val3 == 5) {
      p_int11 = *(int **)(entity + 0x10);
      if ((p_int11 != (int *)0x0) && (p_int11 != (int *)0x0)) {
        pos_y = *p_int11;
        for (p_int7 = p_int11 + 1; p_int7 != p_int11 + pos_y * 0x10 + 1; p_int7 = p_int7 + 0x10) {
          _call_via_r2(p_int7,2,*(undefined4 *)(p_int7[9] + 8));
        }
        CppRuntime_FreeMemory(p_int11);
      }
      *(undefined4 *)(entity + 0x10) = 0;
    }
  }
  return;
}

// =============================================================================
// Function: Entity_Routine_08038A70 @ 0x08038A70
// =============================================================================
void Entity_Routine_08038A70(int entity,undefined4 *speed)

{
  undefined4 u_val1;
  char c_char2;
  uint *p_uint3;
  undefined4 *p_uint4;
  int i_val5;
  int i_val6;
  uint *p_uint7;
  undefined1 stack_buf_98 [8];
  undefined1 stack_buf_90 [8];
  undefined1 stack_buf_88 [16];
  undefined4 stack_val_78;
  undefined4 stack_val_74;
  undefined4 stack_val_70;
  undefined4 stack_val_6c;
  undefined4 stack_val_68;
  undefined4 stack_val_64;
  undefined4 stack_val_60;
  undefined4 stack_val_5c;
  undefined4 stack_val_58;
  undefined4 stack_val_54;
  int stack_val_50;
  int stack_val_4c;
  int stack_val_48;
  uint *puStack_44;
  undefined4 stack_val_40;
  undefined4 stack_val_3c;
  uint stack_val_38;
  int stack_val_34;
  uint stack_val_30;
  int stack_val_2c;
  ushort *puStack_28;
  uint *puStack_24;
  
  stack_val_4c = (int)*(short *)(speed + 3);
  stack_val_48 = (int)*(short *)((int)speed + 0xe);
  stack_val_78 = *speed;
  stack_val_74 = speed[2];
  p_uint3 = *(uint **)(entity + 0x14);
  stack_val_50 = entity;
  if ((p_uint3 != (uint *)0x0) &&
     (stack_val_38 = 0, puStack_44 = p_uint3, stack_val_40 = stack_val_78, stack_val_3c = stack_val_74, *p_uint3 != 0
     )) {
    p_uint7 = p_uint3 + 0x10;
    puStack_24 = p_uint3 + 5;
    p_uint3 = p_uint3 + 1;
    do {
      u_val1 = 0x7FFF;
      stack_val_70 = stack_val_40;
      stack_val_6c = stack_val_3c;
      if (*(char *)((int)p_uint7 + 0x11) == '\0') {
        c_char2 = '\x01';
      }
      else {
        i_val5 = *(short *)((int)p_uint7 + 6) - stack_val_4c;
        i_val6 = (short)p_uint7[2] - stack_val_48;
        _call_via_r3(stack_buf_98,(int *)p_uint3[10],
                        *(undefined2 *)(p_uint3[0xb] + (uint)(ushort)p_uint3[0xd] * 4),
                        *(undefined4 *)(*(int *)p_uint3[10] + 0x10));
        if ((int)(-p_uint3[2] | p_uint3[2]) < 0) {
          i_val5 = _call_via_r4(stack_val_6c,i_val5,i_val6,0xff,u_val1,stack_buf_98,*p_uint3,
                                  (short)p_uint3[3],puStack_24);
        }
        else {
          i_val5 = 0;
        }
        if ((i_val5 != 0) && ((char)*p_uint7 != '\0')) {
          NPC_Routine_080A480C(p_uint3,stack_val_70,stack_buf_90);
          if (*(char *)((int)p_uint7 + 1) == '\0') {
            if (*(char *)((int)p_uint7 + 2) == '\0') {
              NPC_Routine_080A4944(p_uint3,stack_buf_88,1);
              *(char *)((int)p_uint7 + 2) = '\x01';
            }
          }
          else {
            NPC_Routine_080A4944(p_uint3,stack_buf_88,1);
          }
          *(char *)p_uint7 = '\0';
        }
        c_char2 = '\0';
      }
      *(char *)((int)p_uint7 + 0x11) = c_char2;
      p_uint7 = p_uint7 + 0x14;
      puStack_24 = puStack_24 + 0x14;
      p_uint3 = p_uint3 + 0x14;
      stack_val_38 = stack_val_38 + 1;
    } while (stack_val_38 < *puStack_44);
  }
  p_uint4 = *(undefined4 **)(stack_val_50 + 8);
  if (p_uint4 != (undefined4 *)0x0) {
    stack_val_68 = stack_val_78;
    stack_val_64 = stack_val_74;
    if ((int)(-p_uint4[2] | p_uint4[2]) < 0) {
      i_val5 = _call_via_r4(stack_val_74,300 - stack_val_4c,100 - stack_val_48,0xff,0x8000,p_uint4 + 10,
                              *p_uint4,*(undefined2 *)(p_uint4 + 3),p_uint4 + 4);
    }
    else {
      i_val5 = 0;
    }
    if ((i_val5 != 0) && (*(char *)(p_uint4 + 0x12) != '\0')) {
      NPC_Routine_080A480C(p_uint4,stack_val_68,p_uint4 + 0xc);
      NPC_Routine_080A4944(p_uint4,p_uint4 + 0xe,1);
      *(char *)(p_uint4 + 0x12) = '\0';
    }
  }
  p_uint4 = *(undefined4 **)(stack_val_50 + 0xc);
  if (p_uint4 != (undefined4 *)0x0) {
    stack_val_60 = stack_val_78;
    stack_val_5c = stack_val_74;
    if ((int)(-p_uint4[2] | p_uint4[2]) < 0) {
      i_val5 = _call_via_r4(stack_val_74,
                              (uint)*(byte *)((int)p_uint4 + 0x51) * 8 - (stack_val_4c + -0xf0),
                              ((int)p_uint4[0x13] >> 0x10) - stack_val_48,0xff,0x8000,p_uint4 + 10,
                              *p_uint4,*(undefined2 *)(p_uint4 + 3),p_uint4 + 4);
    }
    else {
      i_val5 = 0;
    }
    if ((i_val5 != 0) && (*(char *)(p_uint4 + 0x12) != '\0')) {
      NPC_Routine_080A480C(p_uint4,stack_val_60,p_uint4 + 0xc);
      NPC_Routine_080A4944(p_uint4,p_uint4 + 0xe,0);
      *(char *)(p_uint4 + 0x12) = '\0';
    }
  }
  stack_val_34 = *(int *)(stack_val_50 + 0x10);
  if (stack_val_34 != 0) {
    stack_val_58 = stack_val_78;
    stack_val_54 = stack_val_74;
    stack_val_30 = 0;
    stack_val_2c = stack_val_34 + 0x14;
    puStack_28 = gRomData_080F165E;
    p_uint4 = (undefined4 *)(stack_val_34 + 4);
    do {
      if (*(char *)(stack_val_34 + 0x144 + stack_val_30) == '\0') {
        i_val5 = (uint)*puStack_28 - stack_val_4c;
        i_val6 = (uint)puStack_28[1] - stack_val_48;
        _call_via_r3(stack_buf_98,(int *)p_uint4[10],
                        *(undefined2 *)(p_uint4[0xb] + (uint)*(ushort *)(p_uint4 + 0xd) * 4),
                        *(undefined4 *)(*(int *)p_uint4[10] + 0x10));
        if ((int)(-p_uint4[2] | p_uint4[2]) < 0) {
          i_val5 = _call_via_r4(stack_val_54,i_val5,i_val6,0xff,0x8000,stack_buf_98,*p_uint4,
                                  *(undefined2 *)(p_uint4 + 3),stack_val_2c);
        }
        else {
          i_val5 = 0;
        }
        if ((i_val5 != 0) && (*(char *)(p_uint4 + 0xf) != '\0')) {
          NPC_Routine_080A480C(p_uint4,stack_val_58,stack_buf_90);
          if (*(char *)((int)p_uint4 + 0x3d) == '\0') {
            if (*(char *)((int)p_uint4 + 0x3e) == '\0') {
              NPC_Routine_080A4944(p_uint4,stack_buf_88,1);
              *(char *)((int)p_uint4 + 0x3e) = '\x01';
            }
          }
          else {
            NPC_Routine_080A4944(p_uint4,stack_buf_88,1);
          }
          *(char *)(p_uint4 + 0xf) = '\0';
        }
      }
      stack_val_2c = stack_val_2c + 0x40;
      puStack_28 = puStack_28 + 2;
      p_uint4 = p_uint4 + 0x10;
      stack_val_30 = stack_val_30 + 1;
    } while (stack_val_30 < 5);
  }
  return;
}

// =============================================================================
// Function: Entity_Routine_08038DF0 @ 0x08038DF0
// =============================================================================
void Entity_Routine_08038DF0(undefined4 *entity)

{
  int i_val1;
  int *p_int2;
  int *p_int3;
  int i_val4;
  undefined2 *apuStack_20 [2];
  
  i_val1 = CppRuntime_OperatorNewArray(0x54);
  p_int3 = *(int **)*entity;
  p_int2 = (int *)_call_via_r1(p_int3,*(undefined4 *)(*p_int3 + 0x70));
  NPC_Routine_080A4740(i_val1,p_int3,6,0x1b);
  *(undefined4 *)(i_val1 + 0x24) = gRomData_080E602C;
  i_val4 = *p_int2;
  _call_via_r3(apuStack_20,p_int2,0,*(undefined4 *)(i_val4 + 0xc));
  _call_via_r3(i_val1 + 0x28,p_int2,*apuStack_20[0],*(undefined4 *)(i_val4 + 0x10));
  *(undefined1 *)(i_val1 + 0x48) = 1;
  *(undefined4 *)(i_val1 + 0x4c) = 0x1200000;
  *(undefined1 *)(i_val1 + 0x50) = 0;
  *(undefined1 *)(i_val1 + 0x51) = 0;
  i_val4 = entity[3];
  if ((i_val1 != i_val4) && (i_val4 != 0)) {
    NPC_Routine_080A47B4(i_val4,2);
    CppRuntime_FreeMemory(i_val4);
  }
  entity[3] = i_val1;
  return;
}

// =============================================================================
// Function: Entity_Routine_08038EA0 @ 0x08038EA0
// =============================================================================
u32 Entity_Routine_08038EA0(int entity)

{
  
  return (uint)(*(char *)(*(int *)(entity + 0xc) + 0x50) == '\0');
}

// =============================================================================
// Function: Entity_Routine_08038EB8 @ 0x08038EB8
// =============================================================================
void Entity_Routine_08038EB8(int entity)

{
  int pos_y;
  
  pos_y = *(int *)(entity + 0xc);
  if ((pos_y != 0) && (pos_y != 0)) {
    NPC_Routine_080A47B4(pos_y,2);
    CppRuntime_FreeMemory(pos_y);
  }
  *(undefined4 *)(entity + 0xc) = 0;
  return;
}

// =============================================================================
// Function: Entity_Routine_08038EE0 @ 0x08038EE0
// =============================================================================
void Entity_Routine_08038EE0(undefined4 *entity)

{
  uint *p_uint1;
  undefined4 u_val2;
  uint u_val3;
  undefined4 u_val4;
  undefined4 *p_uint5;
  uint *p_uint6;
  int *p_int7;
  uint *p_uint8;
  undefined *p_uint9;
  undefined *p_uint10;
  undefined stack_buf_64 [4];
  undefined1 stack_buf_60 [40];
  uint stack_val_38;
  uint stack_val_34;
  uint stack_val_30;
  uint stack_val_2c;
  uint stack_val_28;
  undefined1 stack_val_24;
  undefined1 stack_val_23;
  undefined1 stack_val_22;
  undefined1 stack_val_21;
  
  p_uint1 = (uint *)CppRuntime_OperatorNewArray(0x14c);
  p_int7 = *(int **)*entity;
  *p_uint1 = 0;
  p_uint10 = stack_buf_64;
  p_uint5 = entity;
  p_uint9 = (undefined *)0x0;
  do {
    switch(*(uint *)(PTR_case_08038F18_08038f14 + (int)p_uint9 * 4) & 0xfffffffe) {
    case 0x8038f18:
      p_uint10 = (undefined *)0x0;
    case 0x8038f2c:
      u_val2 = _call_via_r1(p_int7,*(undefined4 *)(*p_int7 + 0x78),p_uint5,p_uint10);
      u_val4 = 2;
      break;
    case 0x8038f4c:
      u_val2 = _call_via_r1(p_int7,*(undefined4 *)(*p_int7 + 0x78));
      u_val4 = 1;
      break;
    case 0x8038fdc:
      u_val2 = _call_via_r1(p_int7,*(undefined4 *)(*p_int7 + 0x78));
      stack_buf_64[0] = 0;
      NPC_Routine_080A4A00(stack_buf_60,u_val2,0,p_int7,4,0x1c);
      if (*p_uint1 < 5) {
        p_uint8 = p_uint1 + *p_uint1 * 0x10 + 1;
        if (p_uint8 != (uint *)0x0) {
          VTable_Routine_080DC840(p_uint8,stack_buf_60);
          p_uint8[9] = gRomData_080E681C;
          p_uint8[10] = stack_val_38;
          p_uint8[0xb] = stack_val_34;
          p_uint8[0xc] = stack_val_30;
          p_uint8[0xd] = stack_val_2c;
          p_uint8[0xe] = stack_val_28;
          *(undefined1 *)(p_uint8 + 0xf) = stack_val_24;
          *(undefined1 *)((int)p_uint8 + 0x3d) = stack_val_23;
          *(undefined1 *)((int)p_uint8 + 0x3e) = stack_val_22;
          *(undefined1 *)((int)p_uint8 + 0x3f) = stack_val_21;
        }
        *p_uint1 = *p_uint1 + 1;
      }
      NPC_Routine_080A47B4(stack_buf_60,2);
      goto LAB_08039064;
    }
    stack_buf_64[0] = 0;
    NPC_Routine_080A4A00(stack_buf_60,u_val2,u_val4,p_int7,4,0x1c);
    if (*p_uint1 < 5) {
      p_uint8 = p_uint1 + *p_uint1 * 0x10 + 1;
      if (p_uint8 != (uint *)0x0) {
        VTable_Routine_080DC840(p_uint8,stack_buf_60);
        p_uint8[9] = gRomData_080E681C;
        p_uint8[10] = stack_val_38;
        p_uint8[0xb] = stack_val_34;
        p_uint8[0xc] = stack_val_30;
        p_uint8[0xd] = stack_val_2c;
        p_uint8[0xe] = stack_val_28;
        *(undefined1 *)(p_uint8 + 0xf) = stack_val_24;
        *(undefined1 *)((int)p_uint8 + 0x3d) = stack_val_23;
        *(undefined1 *)((int)p_uint8 + 0x3e) = stack_val_22;
        *(undefined1 *)((int)p_uint8 + 0x3f) = stack_val_21;
      }
      *p_uint1 = *p_uint1 + 1;
    }
    NPC_Routine_080A47B4(stack_buf_60,2);
LAB_08039064:
    *(undefined1 *)((int)(p_uint1 + 0x51) + (int)p_uint9) = 0;
    p_uint5 = (undefined4 *)0x0001;
    p_uint10 = p_uint9 + 1;
    p_uint9 = p_uint10;
    if (&UndefinedInstruction < p_uint10) {
      p_uint8 = (uint *)entity[4];
      if ((p_uint1 != p_uint8) && (p_uint8 != (uint *)0x0)) {
        u_val3 = *p_uint8;
        for (p_uint6 = p_uint8 + 1; p_uint6 != p_uint8 + u_val3 * 0x10 + 1; p_uint6 = p_uint6 + 0x10) {
          _call_via_r2(p_uint6,2,*(undefined4 *)(p_uint6[9] + 8));
        }
        CppRuntime_FreeMemory(p_uint8);
      }
      entity[4] = p_uint1;
      return;
    }
  } while( true );
}

// =============================================================================
// Function: Entity_Routine_080390DC @ 0x080390DC
// =============================================================================
void Entity_Routine_080390DC(int entity)

{
  
  Animal_Routine_0805E860(entity + 0x30);
  *(undefined1 *)(entity + 0x44) = 1;
  *(undefined1 *)(entity + 0x46) = 0;
  *(undefined1 *)(entity + 0x47) = 1;
  return;
}

// =============================================================================
// Function: Entity_Routine_0803911C @ 0x0803911C
// =============================================================================
u32 Entity_Routine_0803911C(int entity)

{
  int i_val1;
  
  i_val1 = Farmer_Routine_0800FFD0(*(undefined4 *)(entity + 0x18));
  return (uint)(i_val1 == 0x1e);
}

// =============================================================================
// Function: Entity_Routine_08039134 @ 0x08039134
// =============================================================================
u32 Entity_Routine_08039134(int *entity,uint speed,int collision,int flags)

{
  char c_char1;
  int i_val2;
  int i_val3;
  int i_val4;
  int i_val5;
  int i_val6;
  
  i_val5 = 100;
  i_val6 = 0;
  i_val4 = 0x2e;
  do {
    i_val2 = _call_via_r2(entity,i_val4,*(undefined4 *)(*entity + 0x40));
    if ((((i_val2 != 0) && (*(ushort *)(i_val2 + 4) == speed)) &&
        (c_char1 = _call_via_r1(i_val2,*(undefined4 *)(*(int *)(i_val2 + 0x14) + 0x60)),
        c_char1 != '\0')) &&
       ((i_val3 = *(short *)(i_val2 + 10) - collision, i_val2 = *(short *)(i_val2 + 0xe) - flags,
        i_val2 = i_val3 * i_val3 + i_val2 * i_val2, i_val5 == 100 || (i_val2 < i_val6)))) {
      i_val5 = i_val4;
      i_val6 = i_val2;
    }
    i_val4 = i_val4 + 1;
  } while (i_val4 < 0x46);
  return i_val5;
}

// =============================================================================
// Function: Entity_Routine_080391C0 @ 0x080391C0
// =============================================================================
u32 Entity_Routine_080391C0(int entity,int speed)

{
  undefined4 u_val1;
  
  if ((((speed < 0x39) && (0x143 < entity)) && (entity <= 0x143 + 0x21)) ||
     (((0x27F < speed && (0xf7 < entity)) && (entity < 0x119)))) {
    u_val1 = 1;
  }
  else {
    u_val1 = 0;
  }
  return u_val1;
}

// =============================================================================
// Function: Entity_Routine_08039204 @ 0x08039204
// =============================================================================
void Entity_Routine_08039204(undefined4 entity,int speed,undefined4 collision)

{
  char c_char1;
  int i_val2;
  int i_val3;
  int i_val4;
  short s_val5;
  short s_val6;
  uint u_val7;
  int i_val8;
  int i_val9;
  undefined1 stack_buf_2c [4];
  undefined4 stack_val_28;
  undefined2 *puStack_24;
  
  i_val2 = *(int *)(speed + 0x34);
  puStack_24 = (undefined2 *)(i_val2 + 0x10);
  u_val7 = (uint)*(ushort *)(i_val2 + 0x10);
  if (u_val7 != 0) {
    u_val7 = u_val7 - 1;
  }
  i_val3 = (int)*(short *)(speed + 10);
  i_val9 = (int)*(short *)(speed + 0xe);
  if (i_val9 < 0x161) {
    s_val5 = 0x154;
    s_val6 = -0x10;
  }
  else {
    s_val5 = 0x108;
    s_val6 = 0x2d0;
  }
  i_val8 = (int)s_val6;
  stack_val_28 = collision;
  if (*(short *)(speed + 4) == 2) {
    i_val4 = s_val5 - i_val3;
    if (i_val4 < 0) {
      i_val4 = -i_val4;
    }
    if (i_val4 < 0x10) {
      i_val4 = i_val8 - i_val9;
      if (i_val4 < 0) {
        i_val4 = -i_val4;
      }
      if (i_val4 < 0x10) goto LAB_080392ea;
    }
    if (u_val7 == 0) {
      c_char1 = Entity_Routine_080391C0(i_val3,i_val9);
      if (c_char1 == '\0') {
        u_val7 = NPC_Routine_080ABC40(i_val3,i_val9,(int)s_val5,i_val8,stack_val_28,*(byte *)(speed + 0x20));
        if (*(byte *)(speed + 0x20) != u_val7) {
          Entity_Routine_08032198(speed);
        }
      }
      else if ((bool)*(char *)(speed + 0x20) != i_val8 <= i_val9) {
        Entity_Routine_08032198(speed);
      }
      i_val2 = NPC_Routine_080AB788(0x1e);
      u_val7 = i_val2 + 1;
    }
    *puStack_24 = (short)u_val7;
  }
  else {
LAB_080392ea:
    Farmer_Routine_0801FF38(speed,0x234);
    NPC_GetFacingDirection(i_val2,stack_buf_2c);
  }
  return;
}

// =============================================================================
// Function: Entity_Routine_0803955C @ 0x0803955C
// =============================================================================
void Entity_Routine_0803955C(undefined4 entity,undefined4 *speed)

{
  short s_val1;
  short s_val2;
  short s_val3;
  char c_char4;
  int i_val5;
  uint u_val6;
  int i_val7;
  int i_val8;
  int *p_int9;
  undefined4 u_val10;
  uint stack_val_30;
  uint stack_val_2c;
  uint stack_val_28;
  uint stack_val_24;
  
  i_val5 = speed[0xd];
  if ((*(ushort *)(i_val5 + 0x10) == 0) || (i_val8 = *(ushort *)(i_val5 + 0x10) - 1, i_val8 == 0)) {
    if (*(char *)(i_val5 + 0x12) != '\0') {
      p_int9 = (int *)*speed;
      s_val1 = *(short *)(speed + 1);
      s_val2 = *(short *)((int)speed + 10);
      s_val3 = *(short *)((int)speed + 0xe);
      u_val6 = Entity_Routine_08039134(p_int9,s_val1,(int)s_val2,(int)s_val3);
      if (u_val6 == 100) {
        u_val6 = (uint)*(byte *)(i_val5 + 0x13);
      }
      i_val8 = _call_via_r2(p_int9,u_val6,*(undefined4 *)(*p_int9 + 0x40));
      if (((i_val8 != 0) && (*(short *)(i_val8 + 4) == s_val1)) &&
         (c_char4 = _call_via_r1(i_val8,*(undefined4 *)(*(int *)(i_val8 + 0x14) + 0x60)),
         c_char4 != '\0')) {
        i_val7 = (int)*(short *)(i_val8 + 10) - (int)s_val2;
        if (i_val7 < 0) {
          i_val7 = -i_val7;
        }
        if (i_val7 < 0x10) {
          i_val7 = (int)*(short *)(i_val8 + 0xe) - (int)s_val3;
          if (i_val7 < 0) {
            i_val7 = -i_val7;
          }
          if (i_val7 < 0x10) {
            _call_via_r1(i_val8,*(undefined4 *)(*(int *)(i_val8 + 0x14) + 0x80));
          }
        }
      }
      NPC_ReduceMood(i_val5,4);
      u_val10 = speed[0xd];
      i_val8 = 100;
      i_val5 = NPC_Routine_0809C060(u_val10);
      if (i_val5 == 0) {
        Entity_Routine_080200C4(speed,0xaa);
      }
      else {
        i_val8 = Entity_Routine_08039134(*speed,*(undefined2 *)(speed + 1),
                              (int)*(short *)((int)speed + 10),(int)*(short *)((int)speed + 0xe)
                             );
      }
      if (i_val8 != 100) {
        u_val6 = NPC_Routine_080AB788(100);
        if (u_val6 < 0x46) {
          stack_val_30 = stack_val_30 & 0xFFFF0000;
          i_val5 = NPC_Routine_080AB788(8);
          stack_val_2c = (stack_val_2c & 0xFF00FFFF | (i_val5 + 3U & 0xff) << 0x10) & 0x00FFFFFF |
                      i_val8 << 0x18;
          NPC_Routine_0809C0AC(u_val10,&stack_val_30);
          return;
        }
        i_val5 = NPC_Routine_080AB788(0x3c);
        stack_val_28 = (stack_val_28 & 0xFFFF0000 | i_val5 + 0x78U & 0xffff) & 0xFF00FFFF &
                    0x00FFFFFF | i_val8 << 0x18;
        NPC_Routine_0809C0BC(u_val10,&stack_val_28);
        return;
      }
      stack_val_24 = stack_val_24 & 0xFFFF0000 | 0xb4;
      NPC_Routine_0809C0A0(u_val10,&stack_val_24);
      return;
    }
    i_val8 = 0x24;
    *(undefined1 *)(i_val5 + 0x12) = 1;
    Entity_Routine_080200C4(speed,0xab);
  }
  *(short *)(i_val5 + 0x10) = (short)i_val8;
  return;
}

// =============================================================================
// Function: Entity_Routine_080396F4 @ 0x080396F4
// =============================================================================
u32 Entity_Routine_080396F4(undefined4 entity,int speed)

{
  undefined4 u_val1;
  
  u_val1 = 0;
  if (*(char *)(*(int *)(speed + 0x34) + 0x12) != '\0') {
    u_val1 = 3;
  }
  return u_val1;
}

// =============================================================================
// Function: Entity_Routine_08039708 @ 0x08039708
// =============================================================================
void Entity_Routine_08039708(undefined4 entity,undefined4 *speed,undefined4 collision)

{
  int i_val1;
  int i_val2;
  undefined4 u_val3;
  uint u_val4;
  uint u_val5;
  byte b_flag6;
  uint stack_val_30;
  uint stack_val_2c;
  uint stack_val_28;
  uint stack_val_24;
  
  i_val1 = speed[0xd];
  u_val4 = (uint)*(ushort *)(i_val1 + 0x10);
  if (u_val4 != 0) {
    u_val4 = u_val4 - 1;
  }
  u_val5 = *(uint *)(i_val1 + 0x10) & 0x7fffff;
  b_flag6 = (byte)(u_val5 >> 0x10);
  if (u_val5 >> 0x10 != 0) {
    b_flag6 = b_flag6 - 1;
  }
  u_val5 = (uint)*(byte *)(i_val1 + 0x13);
  if (u_val5 != 0) {
    u_val5 = u_val5 - 1;
  }
  if (u_val4 != 0) {
    u_val3 = 0;
    if ((int)(*(uint *)(i_val1 + 0x10) * 0x100) < 0) {
      u_val3 = 0x2b;
    }
    i_val2 = _call_via_r2((int *)*speed,u_val3,*(undefined4 *)(*(int *)*speed + 0x40));
    if ((i_val2 != 0) && (*(short *)(i_val2 + 4) == *(short *)(speed + 1))) {
      if (u_val5 == 0) {
        u_val5 = NPC_Routine_080ABE58((int)*(short *)((int)speed + 10),(int)*(short *)((int)speed + 0xe)
                              ,(int)*(short *)(i_val2 + 10),(int)*(short *)(i_val2 + 0xe),collision,
                              *(byte *)(speed + 8));
        if (*(byte *)(speed + 8) != u_val5) {
          Entity_Routine_08032198(speed);
        }
        i_val2 = NPC_Routine_080AB788(0x1e);
        u_val5 = i_val2 + 1;
      }
      *(short *)(i_val1 + 0x10) = (short)u_val4;
      *(byte *)(i_val1 + 0x12) = *(byte *)(i_val1 + 0x12) & 0x80 | b_flag6 & 0x7f;
      *(char *)(i_val1 + 0x13) = (char)u_val5;
      return;
    }
  }
  Entity_Routine_080323C8(speed);
  u_val3 = speed[0xd];
  i_val2 = 100;
  i_val1 = NPC_Routine_0809C060(u_val3);
  if (i_val1 == 0) {
    Entity_Routine_080200C4(speed,0xaa);
  }
  else {
    i_val2 = Entity_Routine_08039134(*speed,*(undefined2 *)(speed + 1),(int)*(short *)((int)speed + 10),
                          (int)*(short *)((int)speed + 0xe));
  }
  if (i_val2 == 100) {
    stack_val_24 = stack_val_24 & 0xFFFF0000 | 0xb4;
    NPC_Routine_0809C0A0(u_val3,&stack_val_24);
  }
  else {
    u_val4 = NPC_Routine_080AB788(100);
    if (u_val4 < 0x46) {
      stack_val_30 = stack_val_30 & 0xFFFF0000;
      i_val1 = NPC_Routine_080AB788(8);
      stack_val_2c = (stack_val_2c & 0xFF00FFFF | (i_val1 + 3U & 0xff) << 0x10) & 0x00FFFFFF |
                  i_val2 << 0x18;
      NPC_Routine_0809C0AC(u_val3,&stack_val_30);
    }
    else {
      i_val1 = NPC_Routine_080AB788(0x3c);
      stack_val_28 = (stack_val_28 & 0xFFFF0000 | i_val1 + 0x78U & 0xffff) & 0xFF00FFFF &
                  0x00FFFFFF | i_val2 << 0x18;
      NPC_Routine_0809C0BC(u_val3,&stack_val_28);
    }
  }
  return;
}

// =============================================================================
// Function: Entity_Routine_08039A30 @ 0x08039A30
// =============================================================================
void Entity_Routine_08039A30(undefined4 entity)

{
  undefined4 u_val1;
  
  u_val1 = CppRuntime_OperatorNewArray(0x8c);
  Entity_Routine_080324BC(u_val1,entity,2,0x1b,0,8,0,0);
  return;
}

// =============================================================================
// Function: Entity_Routine_08039D5C @ 0x08039D5C
// =============================================================================
u32 Entity_Routine_08039D5C(undefined4 entity,uint speed)

{
  undefined4 u_val1;
  
  if (speed < 5) {
    switch(*(uint *)(PTR_case_08039D70_08039d6c + speed * 4) & 0xfffffffe) {
    case 0x8039d70:
    case 0x8039d84:
      u_val1 = 0x8000;
      break;
    case 0x8039d8a:
      u_val1 = 0x10000;
      break;
    case 0x8039d90:
      goto case_08039D90;
    }
  }
  else {
case_08039D90:
    u_val1 = 0;
  }
  return u_val1;
}

// =============================================================================
// Function: Entity_Routine_08039DA8 @ 0x08039DA8
// =============================================================================
void Entity_Routine_08039DA8(int entity)

{
  int i_val1;
  uint stack_val_c;
  
  if (*(int *)(*(int *)(entity + 0x34) + 0xc) != 1) {
    i_val1 = NPC_Routine_080AB788(0x78);
    stack_val_c = ((stack_val_c & 0xFFFF0000 | i_val1 + 0xf0U & 0xffff) & 0xFF80FFFF | 0x3c0000) &
               0xFF7FFFFF & 0x00FFFFFF;
    NPC_Routine_0809C0C8(*(undefined4 *)(entity + 0x34),&stack_val_c);
    NPC_ReduceMood(*(undefined4 *)(entity + 0x34),0xf);
    Entity_Routine_08032384(entity,2,0);
    Entity_Routine_080200C4(entity,0xaa);
  }
  return;
}

// =============================================================================
// Function: Entity_Routine_08039E18 @ 0x08039E18
// =============================================================================
void Entity_Routine_08039E18(int entity)

{
  int i_val1;
  uint stack_val_c;
  
  if (*(int *)(*(int *)(entity + 0x34) + 0xc) != 1) {
    i_val1 = NPC_Routine_080AB788(0x78);
    stack_val_c = ((stack_val_c & 0xFFFF0000 | i_val1 + 0xf0U & 0xffff) & 0xFF80FFFF | 0xbc0000) &
               0x00FFFFFF;
    NPC_Routine_0809C0C8(*(undefined4 *)(entity + 0x34),&stack_val_c);
    NPC_ReduceMood(*(undefined4 *)(entity + 0x34),4);
    Entity_Routine_08032384(entity,2,0);
    Entity_Routine_080200C4(entity,0xaa);
  }
  return;
}

// =============================================================================
// Function: Entity_Routine_08039E98 @ 0x08039E98
// =============================================================================
u32 Entity_Routine_08039E98(undefined4 *entity,int *speed,undefined4 collision,int flags)

{
  undefined4 u_val1;
  int i_val2;
  int *p_int3;
  int i_val4;
  undefined2 *apuStack_24 [2];
  
  entity[0x13] = gRomData_080E76BC;
  *entity = speed;
  *(short *)(entity + 1) = (short)collision;
  u_val1 = _call_via_r1(speed,*(undefined4 *)(*speed + 0x68));
  NPC_Routine_080A4A00(entity + 2,u_val1,collision,speed,3,0x1b,0);
  if (flags == 1) {
    i_val2 = CppRuntime_OperatorNewArray(0x4c);
    p_int3 = (int *)_call_via_r1(speed,*(undefined4 *)(*speed + 0x68));
    NPC_Routine_080A4740(i_val2,speed,2,0xf);
    *(undefined4 *)(i_val2 + 0x24) = gRomData_080E602C;
    i_val4 = *p_int3;
    _call_via_r3(apuStack_24,p_int3,0x91A,*(undefined4 *)(i_val4 + 0xc));
    _call_via_r3(i_val2 + 0x28,p_int3,*apuStack_24[0],*(undefined4 *)(i_val4 + 0x10));
    *(undefined1 *)(i_val2 + 0x48) = 1;
  }
  else {
    i_val2 = 0;
  }
  entity[0x12] = i_val2;
  return entity;
}

// =============================================================================
// Function: Entity_Routine_08039F50 @ 0x08039F50
// =============================================================================
void Entity_Routine_08039F50(int entity,uint speed)

{
  int i_val1;
  
  *(undefined4 *)(entity + 0x4c) = gRomData_080E76BC;
  i_val1 = *(int *)(entity + 0x48);
  if (i_val1 != 0) {
    _call_via_r2(i_val1,3,*(undefined4 *)(*(int *)(i_val1 + 0x24) + 8));
  }
  NPC_Routine_080A47B4(entity + 8,2);
  if ((speed & 1) != 0) {
    CppRuntime_FreeMemory(entity);
  }
  return;
}

// =============================================================================
// Function: Entity_Routine_08039F90 @ 0x08039F90
// =============================================================================
undefined4
Entity_Routine_08039F90(int entity,int *speed,undefined4 collision,undefined4 flags,int arg_5,int arg_6
             ,int arg_7,uint arg_8)

{
  uint u_val1;
  undefined4 *p_uint2;
  int i_val3;
  int i_val4;
  undefined1 stack_buf_54 [8];
  undefined1 stack_buf_4c [8];
  undefined1 stack_buf_44 [16];
  undefined4 stack_val_34;
  undefined4 stack_val_30;
  int stack_val_2c;
  int stack_val_28;
  int stack_val_24;
  
  stack_val_2c = _call_via_r1(speed,*(undefined4 *)(*speed + 0x18));
  stack_val_2c = arg_5 - stack_val_2c;
  stack_val_28 = _call_via_r1(speed,*(undefined4 *)(*speed + 0x1c));
  stack_val_28 = arg_6 - stack_val_28;
  stack_val_24 = 0x8000 - arg_6;
  i_val3 = arg_7;
  if (arg_7 < 0) {
    i_val3 = -arg_7;
  }
  i_val3 = stack_val_28 - i_val3;
  i_val4 = entity + 8;
  u_val1 = arg_8 & 3;
  stack_val_34 = flags;
  stack_val_30 = collision;
  _call_via_r3(stack_buf_54,*(int **)(entity + 0x30),
                  *(undefined2 *)(*(int *)(entity + 0x34) + (uint)*(ushort *)(entity + 0x3c) * 4),
                  *(undefined4 *)(**(int **)(entity + 0x30) + 0x10));
  if ((int)(-*(uint *)(entity + 0x10) | *(uint *)(entity + 0x10)) < 0) {
    i_val3 = _call_via_r4(stack_val_30,stack_val_2c,i_val3,u_val1 << 2 | u_val1 | u_val1 << 4 | u_val1 << 6,
                            stack_val_24,stack_buf_54,*(undefined4 *)(entity + 8),
                            *(undefined2 *)(entity + 0x14),entity + 0x18);
  }
  else {
    i_val3 = 0;
  }
  if ((i_val3 != 0) && (*(char *)(entity + 0x44) != '\0')) {
    NPC_Routine_080A480C(i_val4,stack_val_34,stack_buf_4c);
    if (*(char *)(entity + 0x45) == '\0') {
      if (*(char *)(entity + 0x46) == '\0') {
        NPC_Routine_080A4944(i_val4,stack_buf_44,1);
        *(char *)(entity + 0x46) = '\x01';
      }
    }
    else {
      NPC_Routine_080A4944(i_val4,stack_buf_44,1);
    }
    *(char *)(entity + 0x44) = '\0';
  }
  p_uint2 = *(undefined4 **)(entity + 0x48);
  if ((p_uint2 != (undefined4 *)0x0) && (-1 < arg_7)) {
    arg_8 = arg_8 & 3;
    if ((int)(-p_uint2[2] | p_uint2[2]) < 0) {
      i_val3 = _call_via_r4(stack_val_30,stack_val_2c,stack_val_28,
                              arg_8 << 2 | arg_8 | arg_8 << 4 | arg_8 << 6,stack_val_24,
                              p_uint2 + 10,*p_uint2,*(undefined2 *)(p_uint2 + 3),p_uint2 + 4);
    }
    else {
      i_val3 = 0;
    }
    if ((i_val3 != 0) && (*(char *)(p_uint2 + 0x12) != '\0')) {
      NPC_Routine_080A480C(p_uint2,stack_val_34,p_uint2 + 0xc);
      NPC_Routine_080A4944(p_uint2,p_uint2 + 0xe,1);
      *(char *)(p_uint2 + 0x12) = '\0';
    }
  }
  return;
}

// =============================================================================
// Function: Entity_Routine_0803A144 @ 0x0803A144
// =============================================================================
void Entity_Routine_0803A144(undefined4 entity,int speed,int collision)

{
  int i_val1;
  char c_char2;
  
  c_char2 = (char)collision;
  if (collision * 0x1000000 < 0) {
    c_char2 = NPC_Routine_080AB788(3);
  }
  i_val1 = gRomData_080F16C2;
  *(undefined2 *)(speed + 4) = *(undefined2 *)(c_char2 * 4 + gRomData_080F16C2);
  *(undefined2 *)(speed + 6) = *(undefined2 *)((c_char2 * 2 + 1) * 2 + i_val1);
  return;
}

// =============================================================================
// Function: Entity_Routine_0803A180 @ 0x0803A180
// =============================================================================
void Entity_Routine_0803A180(undefined4 *entity,int *speed,int collision)

{
  ushort u_val1;
  char c_char2;
  short s_val3;
  int i_val4;
  char *p_char5;
  undefined4 u_val6;
  undefined4 stack_val_64;
  undefined4 stack_val_60;
  undefined4 stack_val_5c;
  int stack_val_58;
  int stack_val_54;
  int stack_val_50;
  int stack_val_4c;
  undefined4 stack_val_44;
  undefined4 stack_val_40;
  undefined4 stack_val_3c;
  undefined4 stack_val_38;
  undefined4 stack_val_34;
  undefined4 stack_val_30;
  undefined4 stack_val_2c;
  undefined4 stack_val_28;
  undefined4 stack_val_24;
  undefined4 stack_val_20;
  
  u_val6 = 0;
  _call_via_r3(&stack_val_64,(int *)*entity,0,*(undefined4 *)(*(int *)*entity + 0x34));
  stack_val_24 = CONCAT22(*(short *)((int)speed + 6) + -8,(short)speed[1] + -8);
  stack_val_20 = CONCAT22(*(short *)((int)speed + 6) + 8,(short)speed[1] + 8);
  stack_val_58 = 0x21;
  stack_val_54 = -0x21;
  stack_val_50 = -0x21;
  stack_val_4c = 0x21;
  stack_val_44 = stack_val_64;
  stack_val_40 = stack_val_60;
  stack_val_3c = stack_val_5c;
  stack_val_38 = stack_val_24;
  stack_val_34 = stack_val_20;
  stack_val_30 = 0x20;
  stack_val_2c = 0;
  stack_val_28 = 0;
  if ((*(char *)((int)speed + 0x12) != '\0') && (*(char *)((int)speed + 0x12) == '\x01')) {
    i_val4 = *speed;
    if (i_val4 == 1) {
      NPC_Routine_080AB8D0(&stack_val_58);
      if (stack_val_54 < -1) {
        speed[3] = speed[3] - collision;
        goto LAB_0803a2a6;
      }
    }
    else if (i_val4 < 2) {
      if ((i_val4 == 0) && (NPC_Routine_080AB85C(&stack_val_58), 1 < stack_val_58)) {
        speed[3] = speed[3] + collision;
        goto LAB_0803a2a6;
      }
    }
    else if (i_val4 == 2) {
      NPC_Routine_080AB948(&stack_val_58);
      if (stack_val_50 < -1) {
        speed[2] = speed[2] - collision;
        goto LAB_0803a2a6;
      }
    }
    else if ((i_val4 == 3) && (NPC_Routine_080AB9C4(&stack_val_58), 1 < stack_val_4c)) {
      i_val4 = speed[2];
      speed[2] = i_val4 + collision;
      if (i_val4 + collision >> 0x10 < 0x245) goto LAB_0803a2a6;
      speed[2] = 0x2440000;
    }
    *(undefined2 *)(speed + 4) = 0;
  }
LAB_0803a2a6:
  *(undefined2 *)(speed + 1) = *(undefined2 *)((int)speed + 10);
  *(undefined2 *)((int)speed + 6) = *(undefined2 *)((int)speed + 0xe);
  p_char5 = (char *)((int)entity + 0x47);
  if (*p_char5 == '\0') {
    i_val4 = Animal_Routine_0805E8F0(entity + 0xc);
    if (-1 < i_val4 * 0x40000000) goto LAB_0803a2d6;
    p_char5 = (char *)(entity + 0x11);
    c_char2 = '\x01';
  }
  else {
    c_char2 = '\0';
  }
  *p_char5 = c_char2;
LAB_0803a2d6:
  u_val1 = *(ushort *)(speed + 4);
  *(short *)(speed + 4) = (short)(u_val1 - 1);
  if ((int)((u_val1 - 1) * 0x10000) < 0) {
    s_val3 = NPC_Routine_080AB788(3);
    if (s_val3 == 3) {
      *(undefined1 *)((int)speed + 0x12) = 0;
    }
    else {
      *(undefined1 *)((int)speed + 0x12) = 1;
      i_val4 = NPC_Routine_080AB7A4(*speed);
      *speed = i_val4;
    }
    s_val3 = NPC_Routine_080AB788(0x1f);
    *(short *)(speed + 4) = s_val3 + 0x10;
    u_val6 = 1;
  }
  return u_val6;
}

// =============================================================================
// Function: Entity_Routine_0803A350 @ 0x0803A350
// =============================================================================
void Entity_Routine_0803A350(undefined4 *entity,undefined2 speed)

{
  char c_char1;
  int *p_int2;
  undefined4 u_val3;
  undefined4 *p_uint4;
  undefined4 *p_uint5;
  
  p_int2 = (int *)_call_via_r1((int *)*entity,*(undefined4 *)(*(int *)*entity + 0x14c));
  p_uint4 = (undefined4 *)*p_int2;
  p_uint5 = (undefined4 *)p_int2[1];
  do {
    if (p_uint4 == p_uint5) {
      u_val3 = p_uint5[-1];
LAB_0803a386:
      HW_Routine_08008B6C(u_val3,speed);
      return;
    }
    c_char1 = HW_Routine_08008CD0(*p_uint4);
    if (c_char1 == '\0') {
      u_val3 = *p_uint4;
      goto LAB_0803a386;
    }
    p_uint4 = p_uint4 + 1;
  } while( true );
}

// =============================================================================
// Function: Entity_Routine_0803A394 @ 0x0803A394
// =============================================================================
void Entity_Routine_0803A394(int entity,undefined4 speed,int collision,char flags)

{
  undefined1 u_val1;
  short s_val2;
  int i_val3;
  undefined4 u_val4;
  int *p_int5;
  int i_val6;
  int i_val7;
  int i_val8;
  int i_val9;
  int stack_val_28;
  uint stack_val_24;
  
  i_val3 = gRomData_080F1904;
  if (flags == '\0') {
    i_val3 = gRomData_080F18D2;
  }
  i_val8 = 4;
  if (flags == '\0') {
    i_val8 = 10;
  }
  s_val2 = NPC_Routine_080AB788(99);
  stack_val_28 = 0;
  stack_val_24 = 0;
  i_val9 = 0;
  if (collision == 1) {
    i_val9 = 1;
  }
  else if (collision < 2) {
    if (collision == 0) {
      i_val9 = 0;
    }
  }
  else if (collision == 2) {
    i_val9 = 2;
  }
  else if (collision == 3) {
    i_val9 = 3;
  }
  i_val7 = 0;
  if (i_val8 != 0) {
    if (s_val2 < (short)(ushort)*(byte *)(i_val3 + i_val9)) {
      stack_val_28 = 0;
      stack_val_24 = (uint)*(byte *)(i_val3 + 4);
    }
    else {
      do {
        s_val2 = s_val2 - (ushort)*(byte *)(i_val7 * 5 + i_val3 + i_val9);
        i_val7 = i_val7 + 1;
        if (i_val8 <= i_val7) goto LAB_0803a458;
        i_val6 = i_val7 * 5 + i_val3;
      } while ((short)(ushort)*(byte *)(i_val6 + i_val9) <= s_val2);
      stack_val_24 = (uint)*(byte *)(i_val6 + 4);
      stack_val_28 = i_val7;
    }
  }
LAB_0803a458:
  if ((stack_val_28 != 0) && (flags != '\0')) {
    stack_val_28 = stack_val_28 + 9;
  }
  if (1 < stack_val_24) {
    i_val3 = NPC_Routine_080AB788(stack_val_24 - 1);
    stack_val_24 = i_val3 + 1;
  }
  do {
    if ((int)stack_val_24 < 1) {
      return;
    }
    i_val3 = NPC_Routine_080AB788(0x188);
    i_val3 = i_val3 + 0xb8;
    if (i_val3 < 0xf0) {
      s_val2 = NPC_Routine_080AB788(0x38);
      s_val2 = s_val2 + 0x1f0;
    }
    else {
      s_val2 = NPC_Routine_080AB788(0x30);
      s_val2 = s_val2 + 0x228;
    }
    if (0xb < stack_val_28 - 1U) goto LAB_0803a776;
    switch(*(uint *)(PTR_case_0803A4C4_0803a4c0 + (stack_val_28 - 1U) * 4) & 0xfffffffe) {
    case 0x803a4c4:
      i_val3 = 0x803a7b8;
      entity = 0x803a8b0;
      s_val2 = -0x5acc;
    case 0x803a4f4:
      i_val8 = CppRuntime_OperatorNewArray(100);
      Entity_Routine_08039E98(i_val8,speed,0x9B6,1);
      u_val4 = gRomData_080E76A4;
      break;
    case 0x803a55c:
      i_val8 = CppRuntime_OperatorNewArray(100);
      Entity_Routine_08039E98(i_val8,speed,0x10,1);
      u_val4 = gRomData_080E768C;
      break;
    case 0x803a578:
      i_val8 = CppRuntime_OperatorNewArray(100);
      Entity_Routine_08039E98(i_val8,speed,0x3DB,1);
      u_val4 = gRomData_080E7674;
      break;
    case 0x803a598:
      i_val8 = CppRuntime_OperatorNewArray(100);
      Entity_Routine_08039E98(i_val8,speed,0x806,1);
      u_val4 = gRomData_080E765C;
      break;
    case 0x803a5b8:
      i_val8 = CppRuntime_OperatorNewArray(0x6c);
      Entity_Routine_08039E98(i_val8,speed,0x202,1);
      *(undefined4 *)(i_val8 + 0x4c) = gRomData_080E7644;
      *(undefined4 *)(i_val8 + 0x50) = 0;
      *(short *)(i_val8 + 0x54) = (short)i_val3;
      *(short *)(i_val8 + 0x56) = s_val2;
      *(undefined2 *)(i_val8 + 0x60) = 0;
      *(undefined1 *)(i_val8 + 0x62) = 0;
      *(int *)(i_val8 + 0x58) = (int)*(short *)(i_val8 + 0x54) << 0x10;
      *(int *)(i_val8 + 0x5c) = (int)*(short *)(i_val8 + 0x56) << 0x10;
      *(undefined4 *)(i_val8 + 0x68) = 0;
      goto LAB_0803a536;
    case 0x803a608:
      i_val3 = CppRuntime_OperatorNewArray(0x88);
      Entity_Routine_08039E98(i_val3,speed,0x2a4,1);
      *(undefined4 *)(i_val3 + 0x4c) = gRomData_080E762C;
      *(undefined4 *)(i_val3 + 0x50) = 0;
      u_val1 = Entity_Routine_0803A144(i_val3,i_val3 + 0x50,0xffffffff);
      *(undefined1 *)(i_val3 + 0x78) = u_val1;
      *(undefined1 *)(i_val3 + 0x79) = 0xff;
      *(undefined2 *)(i_val3 + 0x60) = 0;
      *(undefined1 *)(i_val3 + 0x62) = 0;
      *(int *)(i_val3 + 0x58) = (int)*(short *)(i_val3 + 0x54) << 0x10;
      *(int *)(i_val3 + 0x5c) = (int)*(short *)(i_val3 + 0x56) << 0x10;
      *(undefined1 *)(i_val3 + 0x84) = 0xf8;
      goto LAB_0803a75a;
    case 0x803a670:
      i_val8 = CppRuntime_OperatorNewArray(100);
      Entity_Routine_08039E98(i_val8,speed,0x87B,1);
      u_val4 = gRomData_080E7614;
      break;
    case 0x803a690:
      i_val8 = CppRuntime_OperatorNewArray(100);
      Entity_Routine_08039E98(i_val8,speed,0x65C,1);
      u_val4 = gRomData_080E75FC;
      break;
    case 0x803a6b0:
      i_val8 = CppRuntime_OperatorNewArray(100);
      Entity_Routine_08039E98(i_val8,speed,0x8F9,1);
      u_val4 = gRomData_080E75E4;
      break;
    case 0x803a6d0:
      i_val8 = CppRuntime_OperatorNewArray(100);
      Entity_Routine_08039E98(i_val8,speed,0x9A9,1);
      u_val4 = gRomData_080E75CC;
      break;
    case 0x803a6f0:
      i_val8 = CppRuntime_OperatorNewArray(100);
      Entity_Routine_08039E98(i_val8,speed,0x8FD,1);
      u_val4 = gRomData_080E75B4;
      break;
    case 0x803a710:
      i_val3 = CppRuntime_OperatorNewArray(100);
      Entity_Routine_08039E98(i_val3,speed,0x15,0);
      *(undefined4 *)(i_val3 + 0x4c) = gRomData_080E759C;
      *(undefined4 *)(i_val3 + 0x50) = 0;
      Entity_Routine_0803A144(i_val3,i_val3 + 0x50,0xffffffff);
      *(undefined2 *)(i_val3 + 0x60) = 0;
      *(undefined1 *)(i_val3 + 0x62) = 0;
      *(int *)(i_val3 + 0x58) = (int)*(short *)(i_val3 + 0x54) << 0x10;
      *(int *)(i_val3 + 0x5c) = (int)*(short *)(i_val3 + 0x56) << 0x10;
LAB_0803a75a:
      if (*(uint *)(entity + 8) < 3) {
        p_int5 = (int *)(entity + *(uint *)(entity + 8) * 4 + 0xc);
        if (p_int5 != (int *)0x0) {
          *p_int5 = i_val3;
        }
        goto LAB_0803a770;
      }
      goto LAB_0803a776;
    }
    *(undefined4 *)(i_val8 + 0x4c) = u_val4;
    *(undefined4 *)(i_val8 + 0x50) = 0;
    *(short *)(i_val8 + 0x54) = (short)i_val3;
    *(short *)(i_val8 + 0x56) = s_val2;
    *(undefined2 *)(i_val8 + 0x60) = 0;
    *(undefined1 *)(i_val8 + 0x62) = 0;
    *(int *)(i_val8 + 0x58) = (int)*(short *)(i_val8 + 0x54) << 0x10;
    *(int *)(i_val8 + 0x5c) = (int)*(short *)(i_val8 + 0x56) << 0x10;
LAB_0803a536:
    if (*(uint *)(entity + 8) < 3) {
      p_int5 = (int *)(entity + *(uint *)(entity + 8) * 4 + 0xc);
      if (p_int5 != (int *)0x0) {
        *p_int5 = i_val8;
      }
LAB_0803a770:
      *(int *)(entity + 8) = *(int *)(entity + 8) + 1;
    }
LAB_0803a776:
    stack_val_24 = stack_val_24 - 1;
  } while( true );
}

// =============================================================================
// Function: Entity_Routine_0803A798 @ 0x0803A798
// =============================================================================
u32 Entity_Routine_0803A798(undefined4 entity,undefined4 speed)

{
  ushort u_val1;
  int i_val2;
  ushort stack_val_1c;
  ushort stack_val_1a;
  ushort stack_val_18;
  
  i_val2 = CppRuntime_OperatorNewArray(0x20);
  u_val1 = (ushort)0xFFFFFC00;
  stack_val_1c = u_val1 & stack_val_1c & 0x3ff;
  stack_val_1a = u_val1 & stack_val_1a & 0x3ff;
  stack_val_18 = u_val1 & stack_val_18;
  Farmer_Routine_0801FD78(i_val2,entity,&stack_val_1c);
  *(undefined4 *)(i_val2 + 0x14) = gRomData_080E7568;
  *(undefined4 *)(i_val2 + 0x18) = speed;
  *(undefined1 *)(i_val2 + 0x1c) = 1;
  return i_val2;
}

// =============================================================================
// Function: Entity_Routine_0803A840 @ 0x0803A840
// =============================================================================
void Entity_Routine_0803A840(int entity)

{
  char c_char1;
  int i_val2;
  char *p_char3;
  
  p_char3 = (char *)(entity + 0x47);
  if (*p_char3 == '\0') {
    i_val2 = Animal_Routine_0805E8F0(entity + 0x30);
    if (-1 < i_val2 * 0x40000000) {
      return;
    }
    p_char3 = (char *)(entity + 0x44);
    c_char1 = '\x01';
  }
  else {
    c_char1 = '\0';
  }
  *p_char3 = c_char1;
  return;
}

