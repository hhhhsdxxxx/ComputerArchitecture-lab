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
static const char *ng0 = "D:/users/ComputerArchitecture/lab4/pipeline.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static int ng3[] = {1, 0};
static int ng4[] = {6, 0};
static unsigned int ng5[] = {1U, 0U};
static unsigned int ng6[] = {2U, 0U};
static int ng7[] = {7, 0};
static unsigned int ng8[] = {3U, 0U};
static unsigned int ng9[] = {4U, 0U};
static unsigned int ng10[] = {5U, 0U};
static int ng11[] = {5, 0};
static int ng12[] = {31, 0};
static int ng13[] = {28, 0};
static int ng14[] = {27, 0};
static int ng15[] = {24, 0};
static int ng16[] = {23, 0};
static int ng17[] = {20, 0};
static int ng18[] = {19, 0};
static unsigned int ng19[] = {6U, 0U};



static void Cont_97_0(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 14368U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 11448U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 0);
    t8 = (t7 & 1);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 0);
    t11 = (t10 & 1);
    *((unsigned int *)t2) = t11;
    t12 = (t0 + 17920);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 1U;
    t18 = t17;
    t19 = (t4 + 4);
    t20 = *((unsigned int *)t4);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 0, 0);
    t25 = (t0 + 17664);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Cont_99_1(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
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
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 14616U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(99, ng0);
    t2 = (t0 + 13128);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t3 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t12 & 15U);
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 15U);
    t14 = (t0 + 17984);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 15U;
    t20 = t19;
    t21 = (t3 + 4);
    t22 = *((unsigned int *)t3);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 3);
    t27 = (t0 + 17680);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_100_2(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 14864U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 5528U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 31U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 31U);
    t12 = (t0 + 18048);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 31U;
    t18 = t17;
    t19 = (t3 + 4);
    t20 = *((unsigned int *)t3);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 0, 4);
    t25 = (t0 + 17696);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Cont_101_3(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 15112U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 0);
    t8 = (t7 & 1);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 0);
    t11 = (t10 & 1);
    *((unsigned int *)t2) = t11;
    t12 = (t0 + 18112);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 1U;
    t18 = t17;
    t19 = (t4 + 4);
    t20 = *((unsigned int *)t4);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 0, 0);
    t25 = (t0 + 17712);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Initial_103_4(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(103, ng0);

LAB2:    xsi_set_current_line(104, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 12968);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 8, 0LL);
    xsi_set_current_line(105, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 13128);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 4, 0LL);
    xsi_set_current_line(106, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 13288);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 3, 0LL);

LAB1:    return;
}

static void Always_116_5(char *t0)
{
    char t8[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;

LAB0:    t1 = (t0 + 15608U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(116, ng0);
    t2 = (t0 + 17728);
    *((int *)t2) = 1;
    t3 = (t0 + 15640);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(116, ng0);

LAB5:    xsi_set_current_line(117, ng0);
    t4 = (t0 + 12968);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t6, 8, t7, 32);
    t9 = (t0 + 12968);
    xsi_vlogvar_wait_assign_value(t9, t8, 0, 0, 8, 0LL);
    goto LAB2;

}

static void Always_120_6(char *t0)
{
    char t8[8];
    char t22[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t23;

LAB0:    t1 = (t0 + 15856U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(120, ng0);
    t2 = (t0 + 17744);
    *((int *)t2) = 1;
    t3 = (t0 + 15888);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(120, ng0);

LAB5:    xsi_set_current_line(121, ng0);
    t4 = (t0 + 13128);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB7;

LAB6:    t10 = (t7 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB7;

LAB10:    if (*((unsigned int *)t6) < *((unsigned int *)t7))
        goto LAB8;

LAB9:    t12 = (t8 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t8);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(124, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 13128);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB13:    goto LAB2;

LAB7:    t11 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB9;

LAB8:    *((unsigned int *)t8) = 1;
    goto LAB9;

LAB11:    xsi_set_current_line(122, ng0);
    t18 = (t0 + 13128);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = ((char*)((ng3)));
    memset(t22, 0, 8);
    xsi_vlog_unsigned_add(t22, 32, t20, 4, t21, 32);
    t23 = (t0 + 13128);
    xsi_vlogvar_wait_assign_value(t23, t22, 0, 0, 4, 0LL);
    goto LAB13;

}

static void Always_127_7(char *t0)
{
    char t8[8];
    char t22[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t23;

LAB0:    t1 = (t0 + 16104U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(127, ng0);
    t2 = (t0 + 17760);
    *((int *)t2) = 1;
    t3 = (t0 + 16136);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(127, ng0);

LAB5:    xsi_set_current_line(128, ng0);
    t4 = (t0 + 13288);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB7;

LAB6:    t10 = (t7 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB7;

LAB10:    if (*((unsigned int *)t6) < *((unsigned int *)t7))
        goto LAB8;

LAB9:    t12 = (t8 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t8);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(131, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 13288);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB13:    goto LAB2;

LAB7:    t11 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB9;

LAB8:    *((unsigned int *)t8) = 1;
    goto LAB9;

LAB11:    xsi_set_current_line(129, ng0);
    t18 = (t0 + 13288);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = ((char*)((ng3)));
    memset(t22, 0, 8);
    xsi_vlog_unsigned_add(t22, 32, t20, 3, t21, 32);
    t23 = (t0 + 13288);
    xsi_vlogvar_wait_assign_value(t23, t22, 0, 0, 3, 0LL);
    goto LAB13;

}

static void Always_134_8(char *t0)
{
    char t4[8];
    char t20[8];
    char t21[8];
    char t22[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    int t17;
    char *t18;
    char *t19;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    int t30;
    char *t31;
    int t32;
    int t33;
    char *t34;
    int t35;
    int t36;
    int t37;
    int t38;
    int t39;

LAB0:    t1 = (t0 + 16352U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(134, ng0);
    t2 = (t0 + 17776);
    *((int *)t2) = 1;
    t3 = (t0 + 16384);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(134, ng0);

LAB5:    xsi_set_current_line(135, ng0);
    t5 = (t0 + 13288);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t4, 0, 8);
    t8 = (t4 + 4);
    t9 = (t7 + 4);
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t4) = t11;
    t12 = *((unsigned int *)t9);
    t13 = (t12 >> 0);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t14 & 7U);
    t15 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t15 & 7U);

LAB6:    t16 = ((char*)((ng1)));
    t17 = xsi_vlog_unsigned_case_compare(t4, 3, t16, 3);
    if (t17 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng5)));
    t17 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t17 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng6)));
    t17 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t17 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng8)));
    t17 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t17 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng9)));
    t17 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t17 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng10)));
    t17 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t17 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng19)));
    t17 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t17 == 1)
        goto LAB19;

LAB20:
LAB21:    goto LAB2;

LAB7:    xsi_set_current_line(136, ng0);
    t18 = (t0 + 2168U);
    t19 = *((char **)t18);
    t18 = (t0 + 13448);
    xsi_vlogvar_wait_assign_value(t18, t19, 0, 0, 32, 0LL);
    goto LAB21;

LAB9:    xsi_set_current_line(137, ng0);
    t3 = (t0 + 10008U);
    t5 = *((char **)t3);
    memset(t21, 0, 8);
    t3 = (t21 + 4);
    t6 = (t5 + 4);
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 0);
    *((unsigned int *)t21) = t11;
    t12 = *((unsigned int *)t6);
    t13 = (t12 >> 0);
    *((unsigned int *)t3) = t13;
    t14 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t14 & 268435455U);
    t15 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t15 & 268435455U);
    t7 = (t0 + 13128);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t22, 0, 8);
    t16 = (t22 + 4);
    t18 = (t9 + 4);
    t23 = *((unsigned int *)t9);
    t24 = (t23 >> 0);
    *((unsigned int *)t22) = t24;
    t25 = *((unsigned int *)t18);
    t26 = (t25 >> 0);
    *((unsigned int *)t16) = t26;
    t27 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t27 & 15U);
    t28 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t28 & 15U);
    xsi_vlogtype_concat(t20, 32, 32, 2U, t22, 4, t21, 28);
    t19 = (t0 + 13448);
    xsi_vlogvar_wait_assign_value(t19, t20, 0, 0, 32, 0LL);
    goto LAB21;

LAB11:    xsi_set_current_line(138, ng0);
    t3 = (t0 + 12968);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 13448);
    t8 = (t0 + 13448);
    t9 = (t8 + 72U);
    t16 = *((char **)t9);
    t18 = ((char*)((ng7)));
    t19 = ((char*)((ng2)));
    xsi_vlog_convert_partindices(t20, t21, t22, ((int*)(t16)), 2, t18, 32, 1, t19, 32, 1);
    t29 = (t20 + 4);
    t10 = *((unsigned int *)t29);
    t30 = (!(t10));
    t31 = (t21 + 4);
    t11 = *((unsigned int *)t31);
    t32 = (!(t11));
    t33 = (t30 && t32);
    t34 = (t22 + 4);
    t12 = *((unsigned int *)t34);
    t35 = (!(t12));
    t36 = (t33 && t35);
    if (t36 == 1)
        goto LAB22;

LAB23:    goto LAB21;

LAB13:    xsi_set_current_line(140, ng0);

LAB24:    xsi_set_current_line(149, ng0);
    t3 = (t0 + 7608U);
    t5 = *((char **)t3);
    memset(t21, 0, 8);
    t3 = (t21 + 4);
    t6 = (t5 + 4);
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 0);
    *((unsigned int *)t21) = t11;
    t12 = *((unsigned int *)t6);
    t13 = (t12 >> 0);
    *((unsigned int *)t3) = t13;
    t14 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t14 & 16777215U);
    t15 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t15 & 16777215U);
    t7 = (t0 + 7288U);
    t8 = *((char **)t7);
    t7 = ((char*)((ng1)));
    t9 = (t0 + 7448U);
    t16 = *((char **)t9);
    memset(t22, 0, 8);
    t9 = (t22 + 4);
    t18 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    t24 = (t23 >> 0);
    *((unsigned int *)t22) = t24;
    t25 = *((unsigned int *)t18);
    t26 = (t25 >> 0);
    *((unsigned int *)t9) = t26;
    t27 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t27 & 15U);
    t28 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t28 & 15U);
    xsi_vlogtype_concat(t20, 32, 32, 4U, t22, 4, t7, 3, t8, 1, t21, 24);
    t19 = (t0 + 13448);
    xsi_vlogvar_wait_assign_value(t19, t20, 0, 0, 32, 0LL);
    goto LAB21;

LAB15:    xsi_set_current_line(152, ng0);

LAB25:    xsi_set_current_line(161, ng0);
    t3 = (t0 + 6488U);
    t5 = *((char **)t3);
    memset(t21, 0, 8);
    t3 = (t21 + 4);
    t6 = (t5 + 4);
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 0);
    *((unsigned int *)t21) = t11;
    t12 = *((unsigned int *)t6);
    t13 = (t12 >> 0);
    *((unsigned int *)t3) = t13;
    t14 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t14 & 65535U);
    t15 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t15 & 65535U);
    t7 = (t0 + 6648U);
    t8 = *((char **)t7);
    memset(t22, 0, 8);
    t7 = (t22 + 4);
    t9 = (t8 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (t23 >> 0);
    *((unsigned int *)t22) = t24;
    t25 = *((unsigned int *)t9);
    t26 = (t25 >> 0);
    *((unsigned int *)t7) = t26;
    t27 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t27 & 255U);
    t28 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t28 & 255U);
    t16 = ((char*)((ng1)));
    xsi_vlogtype_concat(t20, 32, 32, 3U, t16, 8, t22, 8, t21, 16);
    t18 = (t0 + 13448);
    xsi_vlogvar_wait_assign_value(t18, t20, 0, 0, 32, 0LL);
    goto LAB21;

LAB17:    xsi_set_current_line(164, ng0);

LAB26:    xsi_set_current_line(165, ng0);
    t3 = ((char*)((ng11)));
    t5 = (t0 + 13448);
    t6 = (t0 + 13448);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng12)));
    t16 = ((char*)((ng13)));
    xsi_vlog_convert_partindices(t20, t21, t22, ((int*)(t8)), 2, t9, 32, 1, t16, 32, 1);
    t18 = (t20 + 4);
    t10 = *((unsigned int *)t18);
    t30 = (!(t10));
    t19 = (t21 + 4);
    t11 = *((unsigned int *)t19);
    t32 = (!(t11));
    t33 = (t30 && t32);
    t29 = (t22 + 4);
    t12 = *((unsigned int *)t29);
    t35 = (!(t12));
    t36 = (t33 && t35);
    if (t36 == 1)
        goto LAB27;

LAB28:    xsi_set_current_line(166, ng0);
    t2 = (t0 + 9208U);
    t3 = *((char **)t2);
    t2 = (t0 + 13448);
    t5 = (t0 + 13448);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng14)));
    t9 = ((char*)((ng15)));
    xsi_vlog_convert_partindices(t20, t21, t22, ((int*)(t7)), 2, t8, 32, 1, t9, 32, 1);
    t16 = (t20 + 4);
    t10 = *((unsigned int *)t16);
    t17 = (!(t10));
    t18 = (t21 + 4);
    t11 = *((unsigned int *)t18);
    t30 = (!(t11));
    t32 = (t17 && t30);
    t19 = (t22 + 4);
    t12 = *((unsigned int *)t19);
    t33 = (!(t12));
    t35 = (t32 && t33);
    if (t35 == 1)
        goto LAB29;

LAB30:    xsi_set_current_line(167, ng0);
    t2 = (t0 + 9048U);
    t3 = *((char **)t2);
    t2 = (t0 + 13448);
    t5 = (t0 + 13448);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng16)));
    t9 = ((char*)((ng17)));
    xsi_vlog_convert_partindices(t20, t21, t22, ((int*)(t7)), 2, t8, 32, 1, t9, 32, 1);
    t16 = (t20 + 4);
    t10 = *((unsigned int *)t16);
    t17 = (!(t10));
    t18 = (t21 + 4);
    t11 = *((unsigned int *)t18);
    t30 = (!(t11));
    t32 = (t17 && t30);
    t19 = (t22 + 4);
    t12 = *((unsigned int *)t19);
    t33 = (!(t12));
    t35 = (t32 && t33);
    if (t35 == 1)
        goto LAB31;

LAB32:    xsi_set_current_line(168, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 13448);
    t5 = (t0 + 13448);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng18)));
    t9 = ((char*)((ng2)));
    xsi_vlog_convert_partindices(t20, t21, t22, ((int*)(t7)), 2, t8, 32, 1, t9, 32, 1);
    t16 = (t20 + 4);
    t10 = *((unsigned int *)t16);
    t17 = (!(t10));
    t18 = (t21 + 4);
    t11 = *((unsigned int *)t18);
    t30 = (!(t11));
    t32 = (t17 && t30);
    t19 = (t22 + 4);
    t12 = *((unsigned int *)t19);
    t33 = (!(t12));
    t35 = (t32 && t33);
    if (t35 == 1)
        goto LAB33;

LAB34:    goto LAB21;

LAB19:    xsi_set_current_line(171, ng0);
    t3 = (t0 + 9848U);
    t5 = *((char **)t3);
    memset(t20, 0, 8);
    t3 = (t20 + 4);
    t6 = (t5 + 4);
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 0);
    *((unsigned int *)t20) = t11;
    t12 = *((unsigned int *)t6);
    t13 = (t12 >> 0);
    *((unsigned int *)t3) = t13;
    t14 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t14 & 4294967295U);
    t15 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t15 & 4294967295U);
    t7 = (t0 + 13448);
    xsi_vlogvar_wait_assign_value(t7, t20, 0, 0, 32, 0LL);
    goto LAB21;

LAB22:    t13 = *((unsigned int *)t22);
    t37 = (t13 + 0);
    t14 = *((unsigned int *)t20);
    t15 = *((unsigned int *)t21);
    t38 = (t14 - t15);
    t39 = (t38 + 1);
    xsi_vlogvar_wait_assign_value(t7, t6, t37, *((unsigned int *)t21), t39, 0LL);
    goto LAB23;

LAB27:    t13 = *((unsigned int *)t22);
    t37 = (t13 + 0);
    t14 = *((unsigned int *)t20);
    t15 = *((unsigned int *)t21);
    t38 = (t14 - t15);
    t39 = (t38 + 1);
    xsi_vlogvar_wait_assign_value(t5, t3, t37, *((unsigned int *)t21), t39, 0LL);
    goto LAB28;

LAB29:    t13 = *((unsigned int *)t22);
    t36 = (t13 + 0);
    t14 = *((unsigned int *)t20);
    t15 = *((unsigned int *)t21);
    t37 = (t14 - t15);
    t38 = (t37 + 1);
    xsi_vlogvar_wait_assign_value(t2, t3, t36, *((unsigned int *)t21), t38, 0LL);
    goto LAB30;

LAB31:    t13 = *((unsigned int *)t22);
    t36 = (t13 + 0);
    t14 = *((unsigned int *)t20);
    t15 = *((unsigned int *)t21);
    t37 = (t14 - t15);
    t38 = (t37 + 1);
    xsi_vlogvar_wait_assign_value(t2, t3, t36, *((unsigned int *)t21), t38, 0LL);
    goto LAB32;

LAB33:    t13 = *((unsigned int *)t22);
    t36 = (t13 + 0);
    t14 = *((unsigned int *)t20);
    t15 = *((unsigned int *)t21);
    t37 = (t14 - t15);
    t38 = (t37 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, t36, *((unsigned int *)t21), t38, 0LL);
    goto LAB34;

}

static void Cont_175_9(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    t1 = (t0 + 16600U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(175, ng0);
    t2 = (t0 + 1848U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 4294967295U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 4294967295U);
    t12 = (t0 + 18176);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t3, 8);
    xsi_driver_vfirst_trans(t12, 0, 31);
    t17 = (t0 + 17792);
    *((int *)t17) = 1;

LAB1:    return;
}

static void Cont_177_10(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 16848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(177, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 1);
    t8 = (t7 & 1);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 1);
    t11 = (t10 & 1);
    *((unsigned int *)t2) = t11;
    t12 = (t0 + 18240);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 1U;
    t18 = t17;
    t19 = (t4 + 4);
    t20 = *((unsigned int *)t4);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 0, 0);
    t25 = (t0 + 17808);
    *((int *)t25) = 1;

LAB1:    return;
}

static void implSig1_execute(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 17096U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 10168U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng1)));
    xsi_vlogtype_concat(t3, 5, 5, 2U, t2, 1, t4, 4);
    t5 = (t0 + 18304);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 31U;
    t11 = t10;
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t3);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 4);
    t18 = (t0 + 17824);
    *((int *)t18) = 1;

LAB1:    return;
}

static void implSig2_execute(char *t0)
{
    char t4[8];
    char t22[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    int t46;
    int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;

LAB0:    t1 = (t0 + 17344U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 4728U);
    t3 = *((char **)t2);
    t2 = (t0 + 6328U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t2) == 0)
        goto LAB4;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;

LAB7:    t12 = (t4 + 4);
    t13 = (t5 + 4);
    t14 = *((unsigned int *)t5);
    t15 = (~(t14));
    *((unsigned int *)t4) = t15;
    *((unsigned int *)t12) = 0;
    if (*((unsigned int *)t13) != 0)
        goto LAB9;

LAB8:    t20 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t20 & 1U);
    t21 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t21 & 1U);
    t23 = *((unsigned int *)t3);
    t24 = *((unsigned int *)t4);
    t25 = (t23 & t24);
    *((unsigned int *)t22) = t25;
    t26 = (t3 + 4);
    t27 = (t4 + 4);
    t28 = (t22 + 4);
    t29 = *((unsigned int *)t26);
    t30 = *((unsigned int *)t27);
    t31 = (t29 | t30);
    *((unsigned int *)t28) = t31;
    t32 = *((unsigned int *)t28);
    t33 = (t32 != 0);
    if (t33 == 1)
        goto LAB10;

LAB11:
LAB12:    t54 = (t0 + 18368);
    t55 = (t54 + 56U);
    t56 = *((char **)t55);
    t57 = (t56 + 56U);
    t58 = *((char **)t57);
    memset(t58, 0, 8);
    t59 = 1U;
    t60 = t59;
    t61 = (t22 + 4);
    t62 = *((unsigned int *)t22);
    t59 = (t59 & t62);
    t63 = *((unsigned int *)t61);
    t60 = (t60 & t63);
    t64 = (t58 + 4);
    t65 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t65 | t59);
    t66 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t66 | t60);
    xsi_driver_vfirst_trans(t54, 0, 0);
    t67 = (t0 + 17840);
    *((int *)t67) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB9:    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t13);
    *((unsigned int *)t4) = (t16 | t17);
    t18 = *((unsigned int *)t12);
    t19 = *((unsigned int *)t13);
    *((unsigned int *)t12) = (t18 | t19);
    goto LAB8;

LAB10:    t34 = *((unsigned int *)t22);
    t35 = *((unsigned int *)t28);
    *((unsigned int *)t22) = (t34 | t35);
    t36 = (t3 + 4);
    t37 = (t4 + 4);
    t38 = *((unsigned int *)t3);
    t39 = (~(t38));
    t40 = *((unsigned int *)t36);
    t41 = (~(t40));
    t42 = *((unsigned int *)t4);
    t43 = (~(t42));
    t44 = *((unsigned int *)t37);
    t45 = (~(t44));
    t46 = (t39 & t41);
    t47 = (t43 & t45);
    t48 = (~(t46));
    t49 = (~(t47));
    t50 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t50 & t48);
    t51 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t51 & t49);
    t52 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t52 & t48);
    t53 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t53 & t49);
    goto LAB12;

}


extern void work_m_00000000002167259214_3409648901_init()
{
	static char *pe[] = {(void *)Cont_97_0,(void *)Cont_99_1,(void *)Cont_100_2,(void *)Cont_101_3,(void *)Initial_103_4,(void *)Always_116_5,(void *)Always_120_6,(void *)Always_127_7,(void *)Always_134_8,(void *)Cont_175_9,(void *)Cont_177_10,(void *)implSig1_execute,(void *)implSig2_execute};
	xsi_register_didat("work_m_00000000002167259214_3409648901", "isim/test2_isim_beh.exe.sim/work/m_00000000002167259214_3409648901.didat");
	xsi_register_executes(pe);
}
