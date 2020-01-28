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

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/.Xilinx/fsm/source.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {1U, 0U};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {3U, 0U};
static unsigned int ng7[] = {4U, 0U};
static unsigned int ng8[] = {5U, 0U};
static unsigned int ng9[] = {6U, 0U};
static unsigned int ng10[] = {7U, 0U};
static unsigned int ng11[] = {8U, 0U};
static unsigned int ng12[] = {9U, 0U};
static int ng13[] = {11, 0};
static unsigned int ng14[] = {10U, 0U};
static unsigned int ng15[] = {11U, 0U};



static void Always_49_0(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;

LAB0:    t1 = (t0 + 4520U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 4860);
    *((int *)t2) = 1;
    t3 = (t0 + 4548);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(50, ng0);

LAB5:    xsi_set_current_line(51, ng0);
    t5 = (t0 + 1652U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 3996);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = (t0 + 3904);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 4, 0LL);

LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(52, ng0);

LAB13:    xsi_set_current_line(53, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 3904);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 4, 0LL);
    goto LAB12;

}

static void Always_61_1(char *t0)
{
    char t16[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;

LAB0:    t1 = (t0 + 4664U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 4868);
    *((int *)t2) = 1;
    t3 = (t0 + 4692);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(62, ng0);

LAB5:    xsi_set_current_line(63, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 2616);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2708);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2800);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2892);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2984);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3076);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3168);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3260);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3352);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3444);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3536);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3628);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 3904);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 3996);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 4, 0LL);
    xsi_set_current_line(76, ng0);
    t2 = (t0 + 2296U);
    t3 = *((char **)t2);
    t2 = (t0 + 3720);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 2, 0LL);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 2388U);
    t3 = *((char **)t2);
    t2 = (t0 + 3812);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 2, 0LL);
    xsi_set_current_line(78, ng0);
    t2 = (t0 + 3904);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);

LAB6:    t5 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t5, 4);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng12)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng14)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng15)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB29;

LAB30:
LAB31:    goto LAB2;

LAB7:    xsi_set_current_line(79, ng0);

LAB32:    xsi_set_current_line(80, ng0);
    t7 = (t0 + 1744U);
    t8 = *((char **)t7);
    t7 = (t8 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t8);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB33;

LAB34:    xsi_set_current_line(86, ng0);

LAB37:    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3996);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2616);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB35:    goto LAB31;

LAB9:    xsi_set_current_line(91, ng0);

LAB38:    xsi_set_current_line(92, ng0);
    t3 = (t0 + 1836U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB39;

LAB40:    xsi_set_current_line(98, ng0);

LAB43:    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3996);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2616);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB41:    goto LAB31;

LAB11:    xsi_set_current_line(103, ng0);

LAB44:    xsi_set_current_line(104, ng0);
    t3 = (t0 + 2020U);
    t5 = *((char **)t3);
    t3 = (t0 + 3812);
    t7 = (t3 + 36U);
    t8 = *((char **)t7);
    memset(t16, 0, 8);
    t14 = (t5 + 4);
    t15 = (t8 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t8);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t14);
    t13 = *((unsigned int *)t15);
    t17 = (t12 ^ t13);
    t18 = (t11 | t17);
    t19 = *((unsigned int *)t14);
    t20 = *((unsigned int *)t15);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB48;

LAB45:    if (t21 != 0)
        goto LAB47;

LAB46:    *((unsigned int *)t16) = 1;

LAB48:    t25 = (t16 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t16);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB49;

LAB50:    xsi_set_current_line(110, ng0);

LAB53:    xsi_set_current_line(111, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3996);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2984);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB51:    goto LAB31;

LAB13:    xsi_set_current_line(115, ng0);

LAB54:    xsi_set_current_line(116, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 3996);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    xsi_set_current_line(117, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2616);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB31;

LAB15:    xsi_set_current_line(119, ng0);

LAB55:    xsi_set_current_line(120, ng0);
    t3 = (t0 + 2204U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng5)));
    memset(t16, 0, 8);
    t7 = (t5 + 4);
    t8 = (t3 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t3);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t17 = (t12 ^ t13);
    t18 = (t11 | t17);
    t19 = *((unsigned int *)t7);
    t20 = *((unsigned int *)t8);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB59;

LAB56:    if (t21 != 0)
        goto LAB58;

LAB57:    *((unsigned int *)t16) = 1;

LAB59:    t15 = (t16 + 4);
    t26 = *((unsigned int *)t15);
    t27 = (~(t26));
    t28 = *((unsigned int *)t16);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB60;

LAB61:    xsi_set_current_line(125, ng0);
    t2 = (t0 + 2204U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t16, 0, 8);
    t5 = (t3 + 4);
    t7 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t7);
    t17 = (t12 ^ t13);
    t18 = (t11 | t17);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t7);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB67;

LAB64:    if (t21 != 0)
        goto LAB66;

LAB65:    *((unsigned int *)t16) = 1;

LAB67:    t14 = (t16 + 4);
    t26 = *((unsigned int *)t14);
    t27 = (~(t26));
    t28 = *((unsigned int *)t16);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB68;

LAB69:    xsi_set_current_line(130, ng0);
    t2 = (t0 + 2204U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t16, 0, 8);
    t5 = (t3 + 4);
    t7 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t7);
    t17 = (t12 ^ t13);
    t18 = (t11 | t17);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t7);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB75;

LAB72:    if (t21 != 0)
        goto LAB74;

LAB73:    *((unsigned int *)t16) = 1;

LAB75:    t14 = (t16 + 4);
    t26 = *((unsigned int *)t14);
    t27 = (~(t26));
    t28 = *((unsigned int *)t16);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB76;

LAB77:    xsi_set_current_line(136, ng0);

LAB80:    xsi_set_current_line(137, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3996);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(138, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2984);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB78:
LAB70:
LAB62:    goto LAB31;

LAB17:    xsi_set_current_line(141, ng0);

LAB81:    xsi_set_current_line(142, ng0);
    t3 = (t0 + 2112U);
    t5 = *((char **)t3);
    t3 = (t0 + 3720);
    t7 = (t3 + 36U);
    t8 = *((char **)t7);
    memset(t16, 0, 8);
    t14 = (t5 + 4);
    if (*((unsigned int *)t14) != 0)
        goto LAB83;

LAB82:    t15 = (t8 + 4);
    if (*((unsigned int *)t15) != 0)
        goto LAB83;

LAB86:    if (*((unsigned int *)t5) > *((unsigned int *)t8))
        goto LAB85;

LAB84:    *((unsigned int *)t16) = 1;

LAB85:    t25 = (t16 + 4);
    t9 = *((unsigned int *)t25);
    t10 = (~(t9));
    t11 = *((unsigned int *)t16);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB87;

LAB88:    xsi_set_current_line(148, ng0);

LAB91:    xsi_set_current_line(149, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3996);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(150, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2984);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB89:    goto LAB31;

LAB19:    xsi_set_current_line(153, ng0);

LAB92:    xsi_set_current_line(154, ng0);
    t3 = ((char*)((ng12)));
    t5 = (t0 + 3996);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    xsi_set_current_line(155, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3444);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB31;

LAB21:    xsi_set_current_line(157, ng0);

LAB93:    xsi_set_current_line(158, ng0);
    t3 = (t0 + 2112U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng13)));
    memset(t16, 0, 8);
    t7 = (t5 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB95;

LAB94:    t8 = (t3 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB95;

LAB98:    if (*((unsigned int *)t5) > *((unsigned int *)t3))
        goto LAB97;

LAB96:    *((unsigned int *)t16) = 1;

LAB97:    t15 = (t16 + 4);
    t9 = *((unsigned int *)t15);
    t10 = (~(t9));
    t11 = *((unsigned int *)t16);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB99;

LAB100:    xsi_set_current_line(164, ng0);

LAB103:    xsi_set_current_line(165, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3996);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(166, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2984);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB101:    goto LAB31;

LAB23:    xsi_set_current_line(169, ng0);

LAB104:    xsi_set_current_line(170, ng0);
    t3 = ((char*)((ng15)));
    t5 = (t0 + 3996);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    xsi_set_current_line(171, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3628);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB31;

LAB25:    xsi_set_current_line(173, ng0);

LAB105:    xsi_set_current_line(174, ng0);
    t3 = ((char*)((ng15)));
    t5 = (t0 + 3996);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    xsi_set_current_line(175, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3628);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB31;

LAB27:    xsi_set_current_line(177, ng0);

LAB106:    xsi_set_current_line(178, ng0);
    t3 = ((char*)((ng15)));
    t5 = (t0 + 3996);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    xsi_set_current_line(179, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3628);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB31;

LAB29:    xsi_set_current_line(181, ng0);

LAB107:    xsi_set_current_line(182, ng0);
    t3 = (t0 + 1928U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB108;

LAB109:    xsi_set_current_line(188, ng0);

LAB112:    xsi_set_current_line(189, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3996);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(190, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2616);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB110:    goto LAB31;

LAB33:    xsi_set_current_line(81, ng0);

LAB36:    xsi_set_current_line(82, ng0);
    t14 = ((char*)((ng3)));
    t15 = (t0 + 3996);
    xsi_vlogvar_wait_assign_value(t15, t14, 0, 0, 4, 0LL);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2708);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB35;

LAB39:    xsi_set_current_line(93, ng0);

LAB42:    xsi_set_current_line(94, ng0);
    t7 = ((char*)((ng5)));
    t8 = (t0 + 3996);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 4, 0LL);
    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2800);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB41;

LAB47:    t24 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB48;

LAB49:    xsi_set_current_line(105, ng0);

LAB52:    xsi_set_current_line(106, ng0);
    t31 = ((char*)((ng6)));
    t32 = (t0 + 3996);
    xsi_vlogvar_wait_assign_value(t32, t31, 0, 0, 4, 0LL);
    xsi_set_current_line(107, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2892);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB51;

LAB58:    t14 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB59;

LAB60:    xsi_set_current_line(121, ng0);

LAB63:    xsi_set_current_line(122, ng0);
    t24 = ((char*)((ng8)));
    t25 = (t0 + 3996);
    xsi_vlogvar_wait_assign_value(t25, t24, 0, 0, 4, 0LL);
    xsi_set_current_line(123, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3076);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB62;

LAB66:    t8 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB67;

LAB68:    xsi_set_current_line(126, ng0);

LAB71:    xsi_set_current_line(127, ng0);
    t15 = ((char*)((ng9)));
    t24 = (t0 + 3996);
    xsi_vlogvar_wait_assign_value(t24, t15, 0, 0, 4, 0LL);
    xsi_set_current_line(128, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3168);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB70;

LAB74:    t8 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB75;

LAB76:    xsi_set_current_line(131, ng0);

LAB79:    xsi_set_current_line(132, ng0);
    t15 = ((char*)((ng10)));
    t24 = (t0 + 3996);
    xsi_vlogvar_wait_assign_value(t24, t15, 0, 0, 4, 0LL);
    xsi_set_current_line(133, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3260);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB78;

LAB83:    t24 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB85;

LAB87:    xsi_set_current_line(143, ng0);

LAB90:    xsi_set_current_line(144, ng0);
    t31 = ((char*)((ng11)));
    t32 = (t0 + 3996);
    xsi_vlogvar_wait_assign_value(t32, t31, 0, 0, 4, 0LL);
    xsi_set_current_line(145, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3352);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB89;

LAB95:    t14 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB97;

LAB99:    xsi_set_current_line(159, ng0);

LAB102:    xsi_set_current_line(160, ng0);
    t24 = ((char*)((ng14)));
    t25 = (t0 + 3996);
    xsi_vlogvar_wait_assign_value(t25, t24, 0, 0, 4, 0LL);
    xsi_set_current_line(161, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3536);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB101;

LAB108:    xsi_set_current_line(183, ng0);

LAB111:    xsi_set_current_line(184, ng0);
    t7 = ((char*)((ng6)));
    t8 = (t0 + 3996);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 4, 0LL);
    xsi_set_current_line(185, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2892);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB110;

}


extern void work_m_00000000004157180291_0940654029_init()
{
	static char *pe[] = {(void *)Always_49_0,(void *)Always_61_1};
	xsi_register_didat("work_m_00000000004157180291_0940654029", "isim/atmtest_isim_beh.exe.sim/work/m_00000000004157180291_0940654029.didat");
	xsi_register_executes(pe);
}
