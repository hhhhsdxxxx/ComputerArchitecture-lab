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
static const char *ng0 = "D:/users/ComputerArchitecture/lab4/if_stage.v";
static unsigned int ng1[] = {4294967295U, 0U};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {15U, 0U};
static unsigned int ng5[] = {1U, 0U};
static unsigned int ng6[] = {32U, 0U};
static unsigned int ng7[] = {34U, 0U};
static unsigned int ng8[] = {2U, 0U};
static unsigned int ng9[] = {36U, 0U};
static unsigned int ng10[] = {3U, 0U};
static unsigned int ng11[] = {37U, 0U};
static unsigned int ng12[] = {4U, 0U};
static unsigned int ng13[] = {39U, 0U};
static unsigned int ng14[] = {5U, 0U};
static unsigned int ng15[] = {42U, 0U};
static unsigned int ng16[] = {11U, 0U};
static unsigned int ng17[] = {12U, 0U};
static unsigned int ng18[] = {13U, 0U};
static unsigned int ng19[] = {14U, 0U};
static unsigned int ng20[] = {8U, 0U};
static unsigned int ng21[] = {35U, 0U};
static unsigned int ng22[] = {6U, 0U};
static unsigned int ng23[] = {43U, 0U};
static unsigned int ng24[] = {7U, 0U};
static unsigned int ng25[] = {9U, 0U};
static unsigned int ng26[] = {10U, 0U};



static void Initial_100_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(100, ng0);

LAB2:    xsi_set_current_line(101, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);
    xsi_set_current_line(102, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 1, 0LL);
    xsi_set_current_line(103, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 4, 0LL);
    xsi_set_current_line(104, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 4, 0LL);

LAB1:    return;
}

static void Cont_107_1(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 4856U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(107, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 7088);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t6, 8);
    xsi_driver_vfirst_trans(t7, 0, 31);
    t12 = (t0 + 6912);
    *((int *)t12) = 1;

LAB1:    return;
}

static void Cont_108_2(char *t0)
{
    char t3[8];
    char t4[8];
    char *t1;
    char *t2;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;

LAB0:    t1 = (t0 + 5104U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(108, ng0);
    t2 = (t0 + 1688U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t12);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB8;

LAB9:    t18 = *((unsigned int *)t4);
    t19 = (~(t18));
    t20 = *((unsigned int *)t12);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t22, 8);

LAB16:    t16 = (t0 + 7152);
    t23 = (t16 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t3, 8);
    xsi_driver_vfirst_trans(t16, 0, 31);
    t27 = (t0 + 6928);
    *((int *)t27) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = (t0 + 1528U);
    t17 = *((char **)t16);
    goto LAB9;

LAB10:    t16 = (t0 + 2008U);
    t22 = *((char **)t16);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 32, t17, 32, t22, 32);
    goto LAB16;

LAB14:    memcpy(t3, t17, 8);
    goto LAB16;

}

static void Cont_109_3(char *t0)
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

LAB0:    t1 = (t0 + 5352U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(109, ng0);
    t2 = (t0 + 1368U);
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
    *((unsigned int *)t3) = (t10 & 15U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 15U);
    t12 = (t0 + 7216);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 15U;
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
    xsi_driver_vfirst_trans(t12, 0, 3);
    t25 = (t0 + 6944);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Cont_110_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 5600U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(110, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 7280);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 15U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 3);

LAB1:    return;
}

static void Cont_111_5(char *t0)
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

LAB0:    t1 = (t0 + 5848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(111, ng0);
    t2 = (t0 + 2648U);
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
    t12 = (t0 + 7344);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t3, 8);
    xsi_driver_vfirst_trans(t12, 0, 31);
    t17 = (t0 + 6960);
    *((int *)t17) = 1;

LAB1:    return;
}

static void Always_113_6(char *t0)
{
    char t13[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t14;

LAB0:    t1 = (t0 + 6096U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 6976);
    *((int *)t2) = 1;
    t3 = (t0 + 6128);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(113, ng0);

LAB5:    xsi_set_current_line(114, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(118, ng0);

LAB10:    xsi_set_current_line(119, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 0);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 4294967295U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 4294967295U);
    t5 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t5, t13, 0, 0, 32, 0LL);
    xsi_set_current_line(120, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(114, ng0);

LAB9:    xsi_set_current_line(115, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 32, 0LL);
    xsi_set_current_line(116, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB8;

}

static void Always_124_7(char *t0)
{
    char t8[8];
    char t33[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    int t32;
    int t34;

LAB0:    t1 = (t0 + 6344U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(124, ng0);
    t2 = (t0 + 6992);
    *((int *)t2) = 1;
    t3 = (t0 + 6376);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(124, ng0);

LAB5:    xsi_set_current_line(125, ng0);
    t4 = (t0 + 3688);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB9;

LAB6:    if (t20 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t8) = 1;

LAB9:    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(130, ng0);

LAB14:    xsi_set_current_line(131, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t8, 0, 8);
    t5 = (t8 + 4);
    t6 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 0);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t6);
    t14 = (t13 >> 0);
    *((unsigned int *)t5) = t14;
    t15 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t15 & 15U);
    t16 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t16 & 15U);
    t7 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t7, t8, 0, 0, 4, 0LL);
    xsi_set_current_line(132, ng0);
    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    memset(t8, 0, 8);
    t2 = (t8 + 4);
    t4 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (t11 >> 26);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t4);
    t14 = (t13 >> 26);
    *((unsigned int *)t2) = t14;
    t15 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t15 & 63U);
    t16 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t16 & 63U);

LAB15:    t5 = ((char*)((ng2)));
    t32 = xsi_vlog_unsigned_case_compare(t8, 6, t5, 6);
    if (t32 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng20)));
    t32 = xsi_vlog_unsigned_case_compare(t8, 6, t2, 6);
    if (t32 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng17)));
    t32 = xsi_vlog_unsigned_case_compare(t8, 6, t2, 6);
    if (t32 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng18)));
    t32 = xsi_vlog_unsigned_case_compare(t8, 6, t2, 6);
    if (t32 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng21)));
    t32 = xsi_vlog_unsigned_case_compare(t8, 6, t2, 6);
    if (t32 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng23)));
    t32 = xsi_vlog_unsigned_case_compare(t8, 6, t2, 6);
    if (t32 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng12)));
    t32 = xsi_vlog_unsigned_case_compare(t8, 6, t2, 6);
    if (t32 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng8)));
    t32 = xsi_vlog_unsigned_case_compare(t8, 6, t2, 6);
    if (t32 == 1)
        goto LAB30;

LAB31:    t2 = ((char*)((ng14)));
    t32 = xsi_vlog_unsigned_case_compare(t8, 6, t2, 6);
    if (t32 == 1)
        goto LAB32;

LAB33:
LAB35:
LAB34:    xsi_set_current_line(191, ng0);

LAB78:    xsi_set_current_line(192, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB36:
LAB12:    goto LAB2;

LAB8:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(125, ng0);

LAB13:    xsi_set_current_line(126, ng0);
    t30 = ((char*)((ng2)));
    t31 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t31, t30, 0, 0, 4, 0LL);
    xsi_set_current_line(127, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB12;

LAB16:    xsi_set_current_line(133, ng0);

LAB37:    xsi_set_current_line(134, ng0);
    t6 = (t0 + 2168U);
    t7 = *((char **)t6);
    memset(t33, 0, 8);
    t6 = (t33 + 4);
    t9 = (t7 + 4);
    t17 = *((unsigned int *)t7);
    t18 = (t17 >> 0);
    *((unsigned int *)t33) = t18;
    t19 = *((unsigned int *)t9);
    t20 = (t19 >> 0);
    *((unsigned int *)t6) = t20;
    t21 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t21 & 63U);
    t22 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t22 & 63U);

LAB38:    t10 = ((char*)((ng6)));
    t34 = xsi_vlog_unsigned_case_compare(t33, 6, t10, 6);
    if (t34 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng7)));
    t32 = xsi_vlog_unsigned_case_compare(t33, 6, t2, 6);
    if (t32 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng9)));
    t32 = xsi_vlog_unsigned_case_compare(t33, 6, t2, 6);
    if (t32 == 1)
        goto LAB43;

LAB44:    t2 = ((char*)((ng11)));
    t32 = xsi_vlog_unsigned_case_compare(t33, 6, t2, 6);
    if (t32 == 1)
        goto LAB45;

LAB46:    t2 = ((char*)((ng13)));
    t32 = xsi_vlog_unsigned_case_compare(t33, 6, t2, 6);
    if (t32 == 1)
        goto LAB47;

LAB48:    t2 = ((char*)((ng15)));
    t32 = xsi_vlog_unsigned_case_compare(t33, 6, t2, 6);
    if (t32 == 1)
        goto LAB49;

LAB50:    t2 = ((char*)((ng2)));
    t32 = xsi_vlog_unsigned_case_compare(t33, 6, t2, 6);
    if (t32 == 1)
        goto LAB51;

LAB52:    t2 = ((char*)((ng8)));
    t32 = xsi_vlog_unsigned_case_compare(t33, 6, t2, 6);
    if (t32 == 1)
        goto LAB53;

LAB54:    t2 = ((char*)((ng10)));
    t32 = xsi_vlog_unsigned_case_compare(t33, 6, t2, 6);
    if (t32 == 1)
        goto LAB55;

LAB56:
LAB58:
LAB57:    xsi_set_current_line(162, ng0);

LAB69:    xsi_set_current_line(163, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB59:    goto LAB36;

LAB18:    xsi_set_current_line(167, ng0);

LAB70:    xsi_set_current_line(168, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 4, 0LL);
    goto LAB36;

LAB20:    xsi_set_current_line(170, ng0);

LAB71:    xsi_set_current_line(171, ng0);
    t3 = ((char*)((ng10)));
    t4 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 4, 0LL);
    goto LAB36;

LAB22:    xsi_set_current_line(173, ng0);

LAB72:    xsi_set_current_line(174, ng0);
    t3 = ((char*)((ng12)));
    t4 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 4, 0LL);
    goto LAB36;

LAB24:    xsi_set_current_line(176, ng0);

LAB73:    xsi_set_current_line(177, ng0);
    t3 = ((char*)((ng22)));
    t4 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 4, 0LL);
    goto LAB36;

LAB26:    xsi_set_current_line(179, ng0);

LAB74:    xsi_set_current_line(180, ng0);
    t3 = ((char*)((ng24)));
    t4 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 4, 0LL);
    goto LAB36;

LAB28:    xsi_set_current_line(182, ng0);

LAB75:    xsi_set_current_line(183, ng0);
    t3 = ((char*)((ng20)));
    t4 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 4, 0LL);
    goto LAB36;

LAB30:    xsi_set_current_line(185, ng0);

LAB76:    xsi_set_current_line(186, ng0);
    t3 = ((char*)((ng25)));
    t4 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 4, 0LL);
    goto LAB36;

LAB32:    xsi_set_current_line(188, ng0);

LAB77:    xsi_set_current_line(189, ng0);
    t3 = ((char*)((ng26)));
    t4 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 4, 0LL);
    goto LAB36;

LAB39:    xsi_set_current_line(135, ng0);

LAB60:    xsi_set_current_line(136, ng0);
    t23 = ((char*)((ng5)));
    t24 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t24, t23, 0, 0, 4, 0LL);
    goto LAB59;

LAB41:    xsi_set_current_line(138, ng0);

LAB61:    xsi_set_current_line(139, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 4, 0LL);
    goto LAB59;

LAB43:    xsi_set_current_line(141, ng0);

LAB62:    xsi_set_current_line(142, ng0);
    t3 = ((char*)((ng10)));
    t4 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 4, 0LL);
    goto LAB59;

LAB45:    xsi_set_current_line(144, ng0);

LAB63:    xsi_set_current_line(145, ng0);
    t3 = ((char*)((ng12)));
    t4 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 4, 0LL);
    goto LAB59;

LAB47:    xsi_set_current_line(147, ng0);

LAB64:    xsi_set_current_line(148, ng0);
    t3 = ((char*)((ng14)));
    t4 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 4, 0LL);
    goto LAB59;

LAB49:    xsi_set_current_line(150, ng0);

LAB65:    xsi_set_current_line(151, ng0);
    t3 = ((char*)((ng16)));
    t4 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 4, 0LL);
    goto LAB59;

LAB51:    xsi_set_current_line(153, ng0);

LAB66:    xsi_set_current_line(154, ng0);
    t3 = ((char*)((ng17)));
    t4 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 4, 0LL);
    goto LAB59;

LAB53:    xsi_set_current_line(156, ng0);

LAB67:    xsi_set_current_line(157, ng0);
    t3 = ((char*)((ng18)));
    t4 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 4, 0LL);
    goto LAB59;

LAB55:    xsi_set_current_line(159, ng0);

LAB68:    xsi_set_current_line(160, ng0);
    t3 = ((char*)((ng19)));
    t4 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 4, 0LL);
    goto LAB59;

}

static void implSig1_execute(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;

LAB0:    t1 = (t0 + 6592U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1048U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t4 + 4);
    t5 = *((unsigned int *)t2);
    t6 = (~(t5));
    t7 = *((unsigned int *)t4);
    t8 = (t7 & t6);
    t9 = (t8 & 1U);
    if (t9 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t2) == 0)
        goto LAB4;

LAB6:    t10 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t10) = 1;

LAB7:    t11 = (t3 + 4);
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = (~(t13));
    *((unsigned int *)t3) = t14;
    *((unsigned int *)t11) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB9;

LAB8:    t19 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t19 & 1U);
    t20 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t20 & 1U);
    t21 = (t0 + 7408);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memset(t25, 0, 8);
    t26 = 1U;
    t27 = t26;
    t28 = (t3 + 4);
    t29 = *((unsigned int *)t3);
    t26 = (t26 & t29);
    t30 = *((unsigned int *)t28);
    t27 = (t27 & t30);
    t31 = (t25 + 4);
    t32 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t32 | t26);
    t33 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t33 | t27);
    xsi_driver_vfirst_trans(t21, 0, 0);
    t34 = (t0 + 7008);
    *((int *)t34) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t3) = 1;
    goto LAB7;

LAB9:    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t12);
    *((unsigned int *)t3) = (t15 | t16);
    t17 = *((unsigned int *)t11);
    t18 = *((unsigned int *)t12);
    *((unsigned int *)t11) = (t17 | t18);
    goto LAB8;

}


extern void work_m_00000000003507398086_0228657068_init()
{
	static char *pe[] = {(void *)Initial_100_0,(void *)Cont_107_1,(void *)Cont_108_2,(void *)Cont_109_3,(void *)Cont_110_4,(void *)Cont_111_5,(void *)Always_113_6,(void *)Always_124_7,(void *)implSig1_execute};
	xsi_register_didat("work_m_00000000003507398086_0228657068", "isim/test_isim_beh.exe.sim/work/m_00000000003507398086_0228657068.didat");
	xsi_register_executes(pe);
}
