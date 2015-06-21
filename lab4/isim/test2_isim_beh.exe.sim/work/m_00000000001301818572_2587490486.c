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
static unsigned int ng6[] = {6U, 0U};
static unsigned int ng7[] = {7U, 0U};
static unsigned int ng8[] = {8U, 0U};
static int ng9[] = {1, 0};
static unsigned int ng10[] = {9U, 0U};
static unsigned int ng11[] = {12U, 0U};
static unsigned int ng12[] = {13U, 0U};
static unsigned int ng13[] = {15U, 0U};
static unsigned int ng14[] = {4294967295U, 0U};
static int ng15[] = {32, 0};



static void Initial_41_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(41, ng0);

LAB2:    xsi_set_current_line(42, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);

LAB1:    return;
}

static void Always_45_1(char *t0)
{
    char t4[8];
    char t19[8];
    char t40[8];
    char t47[8];
    char t48[8];
    char t49[8];
    char t50[8];
    char t93[8];
    char t94[8];
    char t95[8];
    char t98[8];
    char t125[8];
    char t133[8];
    char t181[8];
    char t182[8];
    char t186[8];
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
    char *t51;
    char *t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    char *t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    char *t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    char *t96;
    char *t97;
    char *t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    char *t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    char *t112;
    char *t113;
    char *t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    char *t123;
    char *t124;
    char *t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    char *t137;
    char *t138;
    char *t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    char *t147;
    char *t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    int t157;
    int t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    char *t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    char *t171;
    char *t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    char *t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    char *t183;
    char *t184;
    char *t185;
    char *t187;
    char *t188;
    char *t189;
    unsigned int t190;
    unsigned int t191;
    unsigned int t192;
    unsigned int t193;
    unsigned int t194;
    char *t195;
    char *t196;
    unsigned int t197;
    unsigned int t198;
    unsigned int t199;
    char *t200;
    unsigned int t201;
    unsigned int t202;
    unsigned int t203;
    unsigned int t204;
    char *t205;
    char *t206;

LAB0:    t1 = (t0 + 2936U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 3256);
    *((int *)t2) = 1;
    t3 = (t0 + 2968);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(45, ng0);

LAB5:    xsi_set_current_line(46, ng0);
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

LAB18:    t2 = ((char*)((ng8)));
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

LAB24:    t2 = ((char*)((ng12)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t15 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng13)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t15 == 1)
        goto LAB27;

LAB28:
LAB29:    goto LAB2;

LAB7:    xsi_set_current_line(47, ng0);
    t16 = (t0 + 1048U);
    t17 = *((char **)t16);
    t16 = (t0 + 1208U);
    t18 = *((char **)t16);
    memset(t19, 0, 8);
    xsi_vlog_unsigned_add(t19, 32, t17, 32, t18, 32);
    t16 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t16, t19, 0, 0, 32, 0LL);
    goto LAB29;

LAB9:    xsi_set_current_line(48, ng0);
    t3 = (t0 + 1048U);
    t5 = *((char **)t3);
    t3 = (t0 + 1208U);
    t6 = *((char **)t3);
    memset(t19, 0, 8);
    xsi_vlog_unsigned_minus(t19, 32, t5, 32, t6, 32);
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t19, 0, 0, 32, 0LL);
    goto LAB29;

LAB11:    xsi_set_current_line(49, ng0);
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
        goto LAB30;

LAB31:
LAB32:    t18 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t18, t19, 0, 0, 32, 0LL);
    goto LAB29;

LAB13:    xsi_set_current_line(50, ng0);
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
        goto LAB33;

LAB34:
LAB35:    t18 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t18, t19, 0, 0, 32, 0LL);
    goto LAB29;

LAB15:    xsi_set_current_line(51, ng0);
    t3 = (t0 + 1048U);
    t5 = *((char **)t3);
    t3 = (t0 + 1208U);
    t6 = *((char **)t3);
    t8 = *((unsigned int *)t5);
    t9 = *((unsigned int *)t6);
    t10 = (t8 ^ t9);
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
        goto LAB36;

LAB37:
LAB38:    t16 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t16, t19, 0, 0, 32, 0LL);
    goto LAB29;

LAB17:    xsi_set_current_line(52, ng0);
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
        goto LAB39;

LAB40:
LAB41:    memset(t19, 0, 8);
    t18 = (t19 + 4);
    t41 = (t40 + 4);
    t36 = *((unsigned int *)t40);
    t37 = (~(t36));
    *((unsigned int *)t19) = t37;
    *((unsigned int *)t18) = 0;
    if (*((unsigned int *)t41) != 0)
        goto LAB43;

LAB42:    t44 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t44 & 4294967295U);
    t45 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t45 & 4294967295U);
    t46 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t46, t19, 0, 0, 32, 0LL);
    goto LAB29;

LAB19:    xsi_set_current_line(53, ng0);
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
    t7 = (t0 + 1208U);
    t14 = *((char **)t7);
    memset(t49, 0, 8);
    t7 = (t49 + 4);
    t16 = (t14 + 4);
    t20 = *((unsigned int *)t14);
    t21 = (t20 >> 31);
    t22 = (t21 & 1);
    *((unsigned int *)t49) = t22;
    t23 = *((unsigned int *)t16);
    t24 = (t23 >> 31);
    t25 = (t24 & 1);
    *((unsigned int *)t7) = t25;
    memset(t48, 0, 8);
    t17 = (t49 + 4);
    t26 = *((unsigned int *)t17);
    t27 = (~(t26));
    t28 = *((unsigned int *)t49);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB47;

LAB45:    if (*((unsigned int *)t17) == 0)
        goto LAB44;

LAB46:    t18 = (t48 + 4);
    *((unsigned int *)t48) = 1;
    *((unsigned int *)t18) = 1;

LAB47:    t41 = (t48 + 4);
    t46 = (t49 + 4);
    t31 = *((unsigned int *)t49);
    t34 = (~(t31));
    *((unsigned int *)t48) = t34;
    *((unsigned int *)t41) = 0;
    if (*((unsigned int *)t46) != 0)
        goto LAB49;

LAB48:    t39 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t39 & 1U);
    t42 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t42 & 1U);
    t43 = *((unsigned int *)t47);
    t44 = *((unsigned int *)t48);
    t45 = (t43 & t44);
    *((unsigned int *)t50) = t45;
    t51 = (t47 + 4);
    t52 = (t48 + 4);
    t53 = (t50 + 4);
    t54 = *((unsigned int *)t51);
    t55 = *((unsigned int *)t52);
    t56 = (t54 | t55);
    *((unsigned int *)t53) = t56;
    t57 = *((unsigned int *)t53);
    t58 = (t57 != 0);
    if (t58 == 1)
        goto LAB50;

LAB51:
LAB52:    memset(t40, 0, 8);
    t77 = (t50 + 4);
    t78 = *((unsigned int *)t77);
    t79 = (~(t78));
    t80 = *((unsigned int *)t50);
    t81 = (t80 & t79);
    t82 = (t81 & 1U);
    if (t82 != 0)
        goto LAB53;

LAB54:    if (*((unsigned int *)t77) != 0)
        goto LAB55;

LAB56:    t84 = (t40 + 4);
    t85 = *((unsigned int *)t40);
    t86 = *((unsigned int *)t84);
    t87 = (t85 || t86);
    if (t87 > 0)
        goto LAB57;

LAB58:    t89 = *((unsigned int *)t40);
    t90 = (~(t89));
    t91 = *((unsigned int *)t84);
    t92 = (t90 || t91);
    if (t92 > 0)
        goto LAB59;

LAB60:    if (*((unsigned int *)t84) > 0)
        goto LAB61;

LAB62:    if (*((unsigned int *)t40) > 0)
        goto LAB63;

LAB64:    memcpy(t19, t93, 8);

LAB65:    t206 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t206, t19, 0, 0, 32, 0LL);
    goto LAB29;

LAB21:    xsi_set_current_line(54, ng0);
    t3 = (t0 + 1048U);
    t5 = *((char **)t3);
    t3 = (t0 + 1208U);
    t6 = *((char **)t3);
    memset(t47, 0, 8);
    t3 = (t5 + 4);
    if (*((unsigned int *)t3) != 0)
        goto LAB107;

LAB106:    t7 = (t6 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB107;

LAB110:    if (*((unsigned int *)t5) < *((unsigned int *)t6))
        goto LAB108;

LAB109:    memset(t40, 0, 8);
    t16 = (t47 + 4);
    t8 = *((unsigned int *)t16);
    t9 = (~(t8));
    t10 = *((unsigned int *)t47);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB111;

LAB112:    if (*((unsigned int *)t16) != 0)
        goto LAB113;

LAB114:    t18 = (t40 + 4);
    t13 = *((unsigned int *)t40);
    t20 = *((unsigned int *)t18);
    t21 = (t13 || t20);
    if (t21 > 0)
        goto LAB115;

LAB116:    t22 = *((unsigned int *)t40);
    t23 = (~(t22));
    t24 = *((unsigned int *)t18);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB117;

LAB118:    if (*((unsigned int *)t18) > 0)
        goto LAB119;

LAB120:    if (*((unsigned int *)t40) > 0)
        goto LAB121;

LAB122:    memcpy(t19, t46, 8);

LAB123:    t51 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t51, t19, 0, 0, 32, 0LL);
    goto LAB29;

LAB23:    xsi_set_current_line(55, ng0);
    t3 = (t0 + 1208U);
    t5 = *((char **)t3);
    t3 = (t0 + 1048U);
    t6 = *((char **)t3);
    memset(t19, 0, 8);
    xsi_vlog_unsigned_lshift(t19, 32, t5, 32, t6, 32);
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t19, 0, 0, 32, 0LL);
    goto LAB29;

LAB25:    xsi_set_current_line(56, ng0);
    t3 = (t0 + 1208U);
    t5 = *((char **)t3);
    t3 = (t0 + 1048U);
    t6 = *((char **)t3);
    memset(t19, 0, 8);
    xsi_vlog_unsigned_rshift(t19, 32, t5, 32, t6, 32);
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t19, 0, 0, 32, 0LL);
    goto LAB29;

LAB27:    xsi_set_current_line(57, ng0);
    t3 = (t0 + 1208U);
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
        goto LAB124;

LAB125:    if (*((unsigned int *)t7) != 0)
        goto LAB126;

LAB127:    t16 = (t40 + 4);
    t25 = *((unsigned int *)t40);
    t26 = *((unsigned int *)t16);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB128;

LAB129:    t60 = *((unsigned int *)t40);
    t63 = (~(t60));
    t64 = *((unsigned int *)t16);
    t65 = (t63 || t64);
    if (t65 > 0)
        goto LAB130;

LAB131:    if (*((unsigned int *)t16) > 0)
        goto LAB132;

LAB133:    if (*((unsigned int *)t40) > 0)
        goto LAB134;

LAB135:    memcpy(t19, t94, 8);

LAB136:    t83 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t83, t19, 0, 0, 32, 0LL);
    goto LAB29;

LAB30:    t22 = *((unsigned int *)t19);
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
    goto LAB32;

LAB33:    t22 = *((unsigned int *)t19);
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
    goto LAB35;

LAB36:    t22 = *((unsigned int *)t19);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t19) = (t22 | t23);
    goto LAB38;

LAB39:    t22 = *((unsigned int *)t40);
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
    goto LAB41;

LAB43:    t38 = *((unsigned int *)t19);
    t39 = *((unsigned int *)t41);
    *((unsigned int *)t19) = (t38 | t39);
    t42 = *((unsigned int *)t18);
    t43 = *((unsigned int *)t41);
    *((unsigned int *)t18) = (t42 | t43);
    goto LAB42;

LAB44:    *((unsigned int *)t48) = 1;
    goto LAB47;

LAB49:    t35 = *((unsigned int *)t48);
    t36 = *((unsigned int *)t46);
    *((unsigned int *)t48) = (t35 | t36);
    t37 = *((unsigned int *)t41);
    t38 = *((unsigned int *)t46);
    *((unsigned int *)t41) = (t37 | t38);
    goto LAB48;

LAB50:    t59 = *((unsigned int *)t50);
    t60 = *((unsigned int *)t53);
    *((unsigned int *)t50) = (t59 | t60);
    t61 = (t47 + 4);
    t62 = (t48 + 4);
    t63 = *((unsigned int *)t47);
    t64 = (~(t63));
    t65 = *((unsigned int *)t61);
    t66 = (~(t65));
    t67 = *((unsigned int *)t48);
    t68 = (~(t67));
    t69 = *((unsigned int *)t62);
    t70 = (~(t69));
    t32 = (t64 & t66);
    t33 = (t68 & t70);
    t71 = (~(t32));
    t72 = (~(t33));
    t73 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t73 & t71);
    t74 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t74 & t72);
    t75 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t75 & t71);
    t76 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t76 & t72);
    goto LAB52;

LAB53:    *((unsigned int *)t40) = 1;
    goto LAB56;

LAB55:    t83 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t83) = 1;
    goto LAB56;

LAB57:    t88 = ((char*)((ng9)));
    goto LAB58;

LAB59:    t96 = (t0 + 1048U);
    t97 = *((char **)t96);
    memset(t98, 0, 8);
    t96 = (t98 + 4);
    t99 = (t97 + 4);
    t100 = *((unsigned int *)t97);
    t101 = (t100 >> 31);
    t102 = (t101 & 1);
    *((unsigned int *)t98) = t102;
    t103 = *((unsigned int *)t99);
    t104 = (t103 >> 31);
    t105 = (t104 & 1);
    *((unsigned int *)t96) = t105;
    memset(t95, 0, 8);
    t106 = (t98 + 4);
    t107 = *((unsigned int *)t106);
    t108 = (~(t107));
    t109 = *((unsigned int *)t98);
    t110 = (t109 & t108);
    t111 = (t110 & 1U);
    if (t111 != 0)
        goto LAB69;

LAB67:    if (*((unsigned int *)t106) == 0)
        goto LAB66;

LAB68:    t112 = (t95 + 4);
    *((unsigned int *)t95) = 1;
    *((unsigned int *)t112) = 1;

LAB69:    t113 = (t95 + 4);
    t114 = (t98 + 4);
    t115 = *((unsigned int *)t98);
    t116 = (~(t115));
    *((unsigned int *)t95) = t116;
    *((unsigned int *)t113) = 0;
    if (*((unsigned int *)t114) != 0)
        goto LAB71;

LAB70:    t121 = *((unsigned int *)t95);
    *((unsigned int *)t95) = (t121 & 1U);
    t122 = *((unsigned int *)t113);
    *((unsigned int *)t113) = (t122 & 1U);
    t123 = (t0 + 1208U);
    t124 = *((char **)t123);
    memset(t125, 0, 8);
    t123 = (t125 + 4);
    t126 = (t124 + 4);
    t127 = *((unsigned int *)t124);
    t128 = (t127 >> 31);
    t129 = (t128 & 1);
    *((unsigned int *)t125) = t129;
    t130 = *((unsigned int *)t126);
    t131 = (t130 >> 31);
    t132 = (t131 & 1);
    *((unsigned int *)t123) = t132;
    t134 = *((unsigned int *)t95);
    t135 = *((unsigned int *)t125);
    t136 = (t134 & t135);
    *((unsigned int *)t133) = t136;
    t137 = (t95 + 4);
    t138 = (t125 + 4);
    t139 = (t133 + 4);
    t140 = *((unsigned int *)t137);
    t141 = *((unsigned int *)t138);
    t142 = (t140 | t141);
    *((unsigned int *)t139) = t142;
    t143 = *((unsigned int *)t139);
    t144 = (t143 != 0);
    if (t144 == 1)
        goto LAB72;

LAB73:
LAB74:    memset(t94, 0, 8);
    t165 = (t133 + 4);
    t166 = *((unsigned int *)t165);
    t167 = (~(t166));
    t168 = *((unsigned int *)t133);
    t169 = (t168 & t167);
    t170 = (t169 & 1U);
    if (t170 != 0)
        goto LAB75;

LAB76:    if (*((unsigned int *)t165) != 0)
        goto LAB77;

LAB78:    t172 = (t94 + 4);
    t173 = *((unsigned int *)t94);
    t174 = *((unsigned int *)t172);
    t175 = (t173 || t174);
    if (t175 > 0)
        goto LAB79;

LAB80:    t177 = *((unsigned int *)t94);
    t178 = (~(t177));
    t179 = *((unsigned int *)t172);
    t180 = (t178 || t179);
    if (t180 > 0)
        goto LAB81;

LAB82:    if (*((unsigned int *)t172) > 0)
        goto LAB83;

LAB84:    if (*((unsigned int *)t94) > 0)
        goto LAB85;

LAB86:    memcpy(t93, t181, 8);

LAB87:    goto LAB60;

LAB61:    xsi_vlog_unsigned_bit_combine(t19, 32, t88, 32, t93, 32);
    goto LAB65;

LAB63:    memcpy(t19, t88, 8);
    goto LAB65;

LAB66:    *((unsigned int *)t95) = 1;
    goto LAB69;

LAB71:    t117 = *((unsigned int *)t95);
    t118 = *((unsigned int *)t114);
    *((unsigned int *)t95) = (t117 | t118);
    t119 = *((unsigned int *)t113);
    t120 = *((unsigned int *)t114);
    *((unsigned int *)t113) = (t119 | t120);
    goto LAB70;

LAB72:    t145 = *((unsigned int *)t133);
    t146 = *((unsigned int *)t139);
    *((unsigned int *)t133) = (t145 | t146);
    t147 = (t95 + 4);
    t148 = (t125 + 4);
    t149 = *((unsigned int *)t95);
    t150 = (~(t149));
    t151 = *((unsigned int *)t147);
    t152 = (~(t151));
    t153 = *((unsigned int *)t125);
    t154 = (~(t153));
    t155 = *((unsigned int *)t148);
    t156 = (~(t155));
    t157 = (t150 & t152);
    t158 = (t154 & t156);
    t159 = (~(t157));
    t160 = (~(t158));
    t161 = *((unsigned int *)t139);
    *((unsigned int *)t139) = (t161 & t159);
    t162 = *((unsigned int *)t139);
    *((unsigned int *)t139) = (t162 & t160);
    t163 = *((unsigned int *)t133);
    *((unsigned int *)t133) = (t163 & t159);
    t164 = *((unsigned int *)t133);
    *((unsigned int *)t133) = (t164 & t160);
    goto LAB74;

LAB75:    *((unsigned int *)t94) = 1;
    goto LAB78;

LAB77:    t171 = (t94 + 4);
    *((unsigned int *)t94) = 1;
    *((unsigned int *)t171) = 1;
    goto LAB78;

LAB79:    t176 = ((char*)((ng1)));
    goto LAB80;

LAB81:    t183 = (t0 + 1048U);
    t184 = *((char **)t183);
    t183 = (t0 + 1208U);
    t185 = *((char **)t183);
    memset(t186, 0, 8);
    t183 = (t184 + 4);
    if (*((unsigned int *)t183) != 0)
        goto LAB89;

LAB88:    t187 = (t185 + 4);
    if (*((unsigned int *)t187) != 0)
        goto LAB89;

LAB92:    if (*((unsigned int *)t184) < *((unsigned int *)t185))
        goto LAB90;

LAB91:    memset(t182, 0, 8);
    t189 = (t186 + 4);
    t190 = *((unsigned int *)t189);
    t191 = (~(t190));
    t192 = *((unsigned int *)t186);
    t193 = (t192 & t191);
    t194 = (t193 & 1U);
    if (t194 != 0)
        goto LAB93;

LAB94:    if (*((unsigned int *)t189) != 0)
        goto LAB95;

LAB96:    t196 = (t182 + 4);
    t197 = *((unsigned int *)t182);
    t198 = *((unsigned int *)t196);
    t199 = (t197 || t198);
    if (t199 > 0)
        goto LAB97;

LAB98:    t201 = *((unsigned int *)t182);
    t202 = (~(t201));
    t203 = *((unsigned int *)t196);
    t204 = (t202 || t203);
    if (t204 > 0)
        goto LAB99;

LAB100:    if (*((unsigned int *)t196) > 0)
        goto LAB101;

LAB102:    if (*((unsigned int *)t182) > 0)
        goto LAB103;

LAB104:    memcpy(t181, t205, 8);

LAB105:    goto LAB82;

LAB83:    xsi_vlog_unsigned_bit_combine(t93, 32, t176, 32, t181, 32);
    goto LAB87;

LAB85:    memcpy(t93, t176, 8);
    goto LAB87;

LAB89:    t188 = (t186 + 4);
    *((unsigned int *)t186) = 1;
    *((unsigned int *)t188) = 1;
    goto LAB91;

LAB90:    *((unsigned int *)t186) = 1;
    goto LAB91;

LAB93:    *((unsigned int *)t182) = 1;
    goto LAB96;

LAB95:    t195 = (t182 + 4);
    *((unsigned int *)t182) = 1;
    *((unsigned int *)t195) = 1;
    goto LAB96;

LAB97:    t200 = ((char*)((ng9)));
    goto LAB98;

LAB99:    t205 = ((char*)((ng1)));
    goto LAB100;

LAB101:    xsi_vlog_unsigned_bit_combine(t181, 32, t200, 32, t205, 32);
    goto LAB105;

LAB103:    memcpy(t181, t200, 8);
    goto LAB105;

LAB107:    t14 = (t47 + 4);
    *((unsigned int *)t47) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB109;

LAB108:    *((unsigned int *)t47) = 1;
    goto LAB109;

LAB111:    *((unsigned int *)t40) = 1;
    goto LAB114;

LAB113:    t17 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB114;

LAB115:    t41 = ((char*)((ng9)));
    goto LAB116;

LAB117:    t46 = ((char*)((ng1)));
    goto LAB118;

LAB119:    xsi_vlog_unsigned_bit_combine(t19, 32, t41, 32, t46, 32);
    goto LAB123;

LAB121:    memcpy(t19, t41, 8);
    goto LAB123;

LAB124:    *((unsigned int *)t40) = 1;
    goto LAB127;

LAB126:    t14 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB127;

LAB128:    t17 = ((char*)((ng14)));
    t18 = ((char*)((ng15)));
    t41 = (t0 + 1048U);
    t46 = *((char **)t41);
    memset(t48, 0, 8);
    xsi_vlog_unsigned_minus(t48, 32, t18, 32, t46, 32);
    memset(t49, 0, 8);
    xsi_vlog_unsigned_lshift(t49, 32, t17, 32, t48, 32);
    t41 = (t0 + 1208U);
    t51 = *((char **)t41);
    t41 = (t0 + 1048U);
    t52 = *((char **)t41);
    memset(t50, 0, 8);
    xsi_vlog_unsigned_rshift(t50, 32, t51, 32, t52, 32);
    t28 = *((unsigned int *)t49);
    t29 = *((unsigned int *)t50);
    t30 = (t28 | t29);
    *((unsigned int *)t93) = t30;
    t41 = (t49 + 4);
    t53 = (t50 + 4);
    t61 = (t93 + 4);
    t31 = *((unsigned int *)t41);
    t34 = *((unsigned int *)t53);
    t35 = (t31 | t34);
    *((unsigned int *)t61) = t35;
    t36 = *((unsigned int *)t61);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB137;

LAB138:
LAB139:    goto LAB129;

LAB130:    t83 = (t0 + 1208U);
    t84 = *((char **)t83);
    t83 = (t0 + 1048U);
    t88 = *((char **)t83);
    memset(t94, 0, 8);
    xsi_vlog_unsigned_rshift(t94, 32, t84, 32, t88, 32);
    goto LAB131;

LAB132:    xsi_vlog_unsigned_bit_combine(t19, 32, t93, 32, t94, 32);
    goto LAB136;

LAB134:    memcpy(t19, t93, 8);
    goto LAB136;

LAB137:    t38 = *((unsigned int *)t93);
    t39 = *((unsigned int *)t61);
    *((unsigned int *)t93) = (t38 | t39);
    t62 = (t49 + 4);
    t77 = (t50 + 4);
    t42 = *((unsigned int *)t62);
    t43 = (~(t42));
    t44 = *((unsigned int *)t49);
    t32 = (t44 & t43);
    t45 = *((unsigned int *)t77);
    t54 = (~(t45));
    t55 = *((unsigned int *)t50);
    t33 = (t55 & t54);
    t56 = (~(t32));
    t57 = (~(t33));
    t58 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t58 & t56);
    t59 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t59 & t57);
    goto LAB139;

}


extern void work_m_00000000001301818572_2587490486_init()
{
	static char *pe[] = {(void *)Initial_41_0,(void *)Always_45_1};
	xsi_register_didat("work_m_00000000001301818572_2587490486", "isim/test2_isim_beh.exe.sim/work/m_00000000001301818572_2587490486.didat");
	xsi_register_executes(pe);
}
