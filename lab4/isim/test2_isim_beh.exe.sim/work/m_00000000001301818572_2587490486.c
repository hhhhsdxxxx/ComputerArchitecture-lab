/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/users/ComputerArchitecture/lab4/Alu.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {4U, 0U};
static unsigned int ng5[] = {5U, 0U};
static unsigned int ng6[] = {7U, 0U};
static unsigned int ng7[] = {8U, 0U};
static int ng8[] = {1, 0};
static unsigned int ng9[] = {12U, 0U};
static unsigned int ng10[] = {13U, 0U};
static unsigned int ng11[] = {15U, 0U};
static unsigned int ng12[] = {4294967295U, 0U};
static int ng13[] = {32, 0};



static void Initial_39_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(39, ng0);

LAB2:    xsi_set_current_line(40, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);

LAB1:    return;
}

static void Always_43_1(char *t0)
{
    char t4[8];
    char t19[8];
    char t40[8];
    char t47[8];
    char t49[8];
    char t50[8];
    char t52[8];
    char t53[8];
    char t71[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    int t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t48;
    char *t51;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    char *t69;
    char *t70;

LAB0:    t1 = (t0 + 2936U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 3256);
    *((int *)t2) = 1;
    t3 = (t0 + 2968);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(43, ng0);

LAB5:    xsi_set_current_line(44, ng0);
    t5 = (t0 + 1368U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 0);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 15U);
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 15U);

LAB6:    t14 = ((char*)((ng2)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t14, 4);
    if (t15 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t15 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t15 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng5)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t15 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng6)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t15 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng7)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t15 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng9)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t15 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng10)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t15 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng11)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t15 == 1)
        goto LAB23;

LAB24:
LAB25:    goto LAB2;

LAB7:    xsi_set_current_line(45, ng0);
    t16 = (t0 + 1048U);
    t17 = *((char **)t16);
    t16 = (t0 + 1208U);
    t18 = *((char **)t16);
    memset(t19, 0, 8);
    xsi_vlog_unsigned_add(t19, 32, t17, 32, t18, 32);
    t16 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t16, t19, 0, 0, 32, 0LL);
    goto LAB25;

LAB9:    xsi_set_current_line(46, ng0);
    t3 = (t0 + 1048U);
    t5 = *((char **)t3);
    t3 = (t0 + 1208U);
    t6 = *((char **)t3);
    memset(t19, 0, 8);
    xsi_vlog_unsigned_minus(t19, 32, t5, 32, t6, 32);
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t19, 0, 0, 32, 0LL);
    goto LAB25;

LAB11:    xsi_set_current_line(47, ng0);
    t3 = (t0 + 1048U);
    t5 = *((char **)t3);
    t3 = (t0 + 1208U);
    t6 = *((char **)t3);
    t8 = *((unsigned int *)t5);
    t9 = *((unsigned int *)t6);
    t10 = (t8 & t9);
    *((unsigned int *)t19) = t10;
    t3 = (t5 + 4);
    t7 = (t6 + 4);
    t14 = (t19 + 4);
    t11 = *((unsigned int *)t3);
    t12 = *((unsigned int *)t7);
    t13 = (t11 | t12);
    *((unsigned int *)t14) = t13;
    t20 = *((unsigned int *)t14);
    t21 = (t20 != 0);
    if (t21 == 1)
        goto LAB26;

LAB27:
LAB28:    t18 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t18, t19, 0, 0, 32, 0LL);
    goto LAB25;

LAB13:    xsi_set_current_line(48, ng0);
    t3 = (t0 + 1048U);
    t5 = *((char **)t3);
    t3 = (t0 + 1208U);
    t6 = *((char **)t3);
    t8 = *((unsigned int *)t5);
    t9 = *((unsigned int *)t6);
    t10 = (t8 | t9);
    *((unsigned int *)t19) = t10;
    t3 = (t5 + 4);
    t7 = (t6 + 4);
    t14 = (t19 + 4);
    t11 = *((unsigned int *)t3);
    t12 = *((unsigned int *)t7);
    t13 = (t11 | t12);
    *((unsigned int *)t14) = t13;
    t20 = *((unsigned int *)t14);
    t21 = (t20 != 0);
    if (t21 == 1)
        goto LAB29;

LAB30:
LAB31:    t18 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t18, t19, 0, 0, 32, 0LL);
    goto LAB25;

LAB15:    xsi_set_current_line(49, ng0);
    t3 = (t0 + 1048U);
    t5 = *((char **)t3);
    t3 = (t0 + 1208U);
    t6 = *((char **)t3);
    t8 = *((unsigned int *)t5);
    t9 = *((unsigned int *)t6);
    t10 = (t8 | t9);
    *((unsigned int *)t40) = t10;
    t3 = (t5 + 4);
    t7 = (t6 + 4);
    t14 = (t40 + 4);
    t11 = *((unsigned int *)t3);
    t12 = *((unsigned int *)t7);
    t13 = (t11 | t12);
    *((unsigned int *)t14) = t13;
    t20 = *((unsigned int *)t14);
    t21 = (t20 != 0);
    if (t21 == 1)
        goto LAB32;

LAB33:
LAB34:    memset(t19, 0, 8);
    t18 = (t19 + 4);
    t41 = (t40 + 4);
    t36 = *((unsigned int *)t40);
    t37 = (~(t36));
    *((unsigned int *)t19) = t37;
    *((unsigned int *)t18) = 0;
    if (*((unsigned int *)t41) != 0)
        goto LAB36;

LAB35:    t44 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t44 & 4294967295U);
    t45 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t45 & 4294967295U);
    t46 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t46, t19, 0, 0, 32, 0LL);
    goto LAB25;

LAB17:    xsi_set_current_line(50, ng0);
    t3 = (t0 + 1048U);
    t5 = *((char **)t3);
    t3 = (t0 + 1208U);
    t6 = *((char **)t3);
    memset(t47, 0, 8);
    t3 = (t5 + 4);
    if (*((unsigned int *)t3) != 0)
        goto LAB38;

LAB37:    t7 = (t6 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB38;

LAB41:    if (*((unsigned int *)t5) < *((unsigned int *)t6))
        goto LAB39;

LAB40:    memset(t40, 0, 8);
    t16 = (t47 + 4);
    t8 = *((unsigned int *)t16);
    t9 = (~(t8));
    t10 = *((unsigned int *)t47);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t16) != 0)
        goto LAB44;

LAB45:    t18 = (t40 + 4);
    t13 = *((unsigned int *)t40);
    t20 = *((unsigned int *)t18);
    t21 = (t13 || t20);
    if (t21 > 0)
        goto LAB46;

LAB47:    t22 = *((unsigned int *)t40);
    t23 = (~(t22));
    t24 = *((unsigned int *)t18);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t18) > 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t40) > 0)
        goto LAB52;

LAB53:    memcpy(t19, t46, 8);

LAB54:    t48 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t48, t19, 0, 0, 32, 0LL);
    goto LAB25;

LAB19:    xsi_set_current_line(51, ng0);
    t3 = (t0 + 1048U);
    t5 = *((char **)t3);
    t3 = (t0 + 1208U);
    t6 = *((char **)t3);
    memset(t19, 0, 8);
    xsi_vlog_unsigned_lshift(t19, 32, t5, 32, t6, 32);
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t19, 0, 0, 32, 0LL);
    goto LAB25;

LAB21:    xsi_set_current_line(52, ng0);
    t3 = (t0 + 1048U);
    t5 = *((char **)t3);
    t3 = (t0 + 1208U);
    t6 = *((char **)t3);
    memset(t19, 0, 8);
    xsi_vlog_unsigned_rshift(t19, 32, t5, 32, t6, 32);
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t19, 0, 0, 32, 0LL);
    goto LAB25;

LAB23:    xsi_set_current_line(53, ng0);
    t3 = (t0 + 1048U);
    t5 = *((char **)t3);
    memset(t47, 0, 8);
    t3 = (t47 + 4);
    t6 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 31);
    t10 = (t9 & 1);
    *((unsigned int *)t47) = t10;
    t11 = *((unsigned int *)t6);
    t12 = (t11 >> 31);
    t13 = (t12 & 1);
    *((unsigned int *)t3) = t13;
    memset(t40, 0, 8);
    t7 = (t47 + 4);
    t20 = *((unsigned int *)t7);
    t21 = (~(t20));
    t22 = *((unsigned int *)t47);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB55;

LAB56:    if (*((unsigned int *)t7) != 0)
        goto LAB57;

LAB58:    t16 = (t40 + 4);
    t25 = *((unsigned int *)t40);
    t26 = *((unsigned int *)t16);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB59;

LAB60:    t64 = *((unsigned int *)t40);
    t65 = (~(t64));
    t66 = *((unsigned int *)t16);
    t67 = (t65 || t66);
    if (t67 > 0)
        goto LAB61;

LAB62:    if (*((unsigned int *)t16) > 0)
        goto LAB63;

LAB64:    if (*((unsigned int *)t40) > 0)
        goto LAB65;

LAB66:    memcpy(t19, t71, 8);

LAB67:    t68 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t68, t19, 0, 0, 32, 0LL);
    goto LAB25;

LAB26:    t22 = *((unsigned int *)t19);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t19) = (t22 | t23);
    t16 = (t5 + 4);
    t17 = (t6 + 4);
    t24 = *((unsigned int *)t5);
    t25 = (~(t24));
    t26 = *((unsigned int *)t16);
    t27 = (~(t26));
    t28 = *((unsigned int *)t6);
    t29 = (~(t28));
    t30 = *((unsigned int *)t17);
    t31 = (~(t30));
    t32 = (t25 & t27);
    t33 = (t29 & t31);
    t34 = (~(t32));
    t35 = (~(t33));
    t36 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t36 & t34);
    t37 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t37 & t35);
    t38 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t38 & t34);
    t39 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t39 & t35);
    goto LAB28;

LAB29:    t22 = *((unsigned int *)t19);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t19) = (t22 | t23);
    t16 = (t5 + 4);
    t17 = (t6 + 4);
    t24 = *((unsigned int *)t16);
    t25 = (~(t24));
    t26 = *((unsigned int *)t5);
    t32 = (t26 & t25);
    t27 = *((unsigned int *)t17);
    t28 = (~(t27));
    t29 = *((unsigned int *)t6);
    t33 = (t29 & t28);
    t30 = (~(t32));
    t31 = (~(t33));
    t34 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t34 & t30);
    t35 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t35 & t31);
    goto LAB31;

LAB32:    t22 = *((unsigned int *)t40);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t40) = (t22 | t23);
    t16 = (t5 + 4);
    t17 = (t6 + 4);
    t24 = *((unsigned int *)t16);
    t25 = (~(t24));
    t26 = *((unsigned int *)t5);
    t32 = (t26 & t25);
    t27 = *((unsigned int *)t17);
    t28 = (~(t27));
    t29 = *((unsigned int *)t6);
    t33 = (t29 & t28);
    t30 = (~(t32));
    t31 = (~(t33));
    t34 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t34 & t30);
    t35 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t35 & t31);
    goto LAB34;

LAB36:    t38 = *((unsigned int *)t19);
    t39 = *((unsigned int *)t41);
    *((unsigned int *)t19) = (t38 | t39);
    t42 = *((unsigned int *)t18);
    t43 = *((unsigned int *)t41);
    *((unsigned int *)t18) = (t42 | t43);
    goto LAB35;

LAB38:    t14 = (t47 + 4);
    *((unsigned int *)t47) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB40;

LAB39:    *((unsigned int *)t47) = 1;
    goto LAB40;

LAB42:    *((unsigned int *)t40) = 1;
    goto LAB45;

LAB44:    t17 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB45;

LAB46:    t41 = ((char*)((ng8)));
    goto LAB47;

LAB48:    t46 = ((char*)((ng1)));
    goto LAB49;

LAB50:    xsi_vlog_unsigned_bit_combine(t19, 32, t41, 32, t46, 32);
    goto LAB54;

LAB52:    memcpy(t19, t41, 8);
    goto LAB54;

LAB55:    *((unsigned int *)t40) = 1;
    goto LAB58;

LAB57:    t14 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB58;

LAB59:    t17 = ((char*)((ng12)));
    t18 = ((char*)((ng13)));
    t41 = (t0 + 1208U);
    t46 = *((char **)t41);
    memset(t49, 0, 8);
    xsi_vlog_unsigned_minus(t49, 32, t18, 32, t46, 32);
    memset(t50, 0, 8);
    xsi_vlog_unsigned_lshift(t50, 32, t17, 32, t49, 32);
    t41 = (t0 + 1048U);
    t48 = *((char **)t41);
    t41 = (t0 + 1208U);
    t51 = *((char **)t41);
    memset(t52, 0, 8);
    xsi_vlog_unsigned_rshift(t52, 32, t48, 32, t51, 32);
    t28 = *((unsigned int *)t50);
    t29 = *((unsigned int *)t52);
    t30 = (t28 | t29);
    *((unsigned int *)t53) = t30;
    t41 = (t50 + 4);
    t54 = (t52 + 4);
    t55 = (t53 + 4);
    t31 = *((unsigned int *)t41);
    t34 = *((unsigned int *)t54);
    t35 = (t31 | t34);
    *((unsigned int *)t55) = t35;
    t36 = *((unsigned int *)t55);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB68;

LAB69:
LAB70:    goto LAB60;

LAB61:    t68 = (t0 + 1048U);
    t69 = *((char **)t68);
    t68 = (t0 + 1208U);
    t70 = *((char **)t68);
    memset(t71, 0, 8);
    xsi_vlog_unsigned_rshift(t71, 32, t69, 32, t70, 32);
    goto LAB62;

LAB63:    xsi_vlog_unsigned_bit_combine(t19, 32, t53, 32, t71, 32);
    goto LAB67;

LAB65:    memcpy(t19, t53, 8);
    goto LAB67;

LAB68:    t38 = *((unsigned int *)t53);
    t39 = *((unsigned int *)t55);
    *((unsigned int *)t53) = (t38 | t39);
    t56 = (t50 + 4);
    t57 = (t52 + 4);
    t42 = *((unsigned int *)t56);
    t43 = (~(t42));
    t44 = *((unsigned int *)t50);
    t32 = (t44 & t43);
    t45 = *((unsigned int *)t57);
    t58 = (~(t45));
    t59 = *((unsigned int *)t52);
    t33 = (t59 & t58);
    t60 = (~(t32));
    t61 = (~(t33));
    t62 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t62 & t60);
    t63 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t63 & t61);
    goto LAB70;

}


extern void work_m_00000000001301818572_2587490486_init()
{
	static char *pe[] = {(void *)Initial_39_0,(void *)Always_43_1};
	xsi_register_didat("work_m_00000000001301818572_2587490486", "isim/test2_isim_beh.exe.sim/work/m_00000000001301818572_2587490486.didat");
	xsi_register_executes(pe);
}
