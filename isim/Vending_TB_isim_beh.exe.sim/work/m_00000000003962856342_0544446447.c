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
static const char *ng0 = "C:/Computer System Design/Lab4CSD/Vending.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {5U, 0U};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {6U, 0U};
static unsigned int ng7[] = {3U, 0U};
static unsigned int ng8[] = {7U, 0U};
static unsigned int ng9[] = {4U, 0U};
static unsigned int ng10[] = {8U, 0U};
static unsigned int ng11[] = {9U, 0U};



static void Always_40_0(char *t0)
{
    char t12[8];
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
    char *t13;
    int t14;

LAB0:    t1 = (t0 + 5008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 5328);
    *((int *)t2) = 1;
    t3 = (t0 + 5040);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(40, ng0);

LAB5:    xsi_set_current_line(41, ng0);
    t4 = (t0 + 2568U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(46, ng0);

LAB10:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 4088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB11:    t5 = ((char*)((ng1)));
    t14 = xsi_vlog_unsigned_case_compare(t4, 10, t5, 4);
    if (t14 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng4)));
    t14 = xsi_vlog_unsigned_case_compare(t4, 10, t2, 4);
    if (t14 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng5)));
    t14 = xsi_vlog_unsigned_case_compare(t4, 10, t2, 4);
    if (t14 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng7)));
    t14 = xsi_vlog_unsigned_case_compare(t4, 10, t2, 4);
    if (t14 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng9)));
    t14 = xsi_vlog_unsigned_case_compare(t4, 10, t2, 4);
    if (t14 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng3)));
    t14 = xsi_vlog_unsigned_case_compare(t4, 10, t2, 4);
    if (t14 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng6)));
    t14 = xsi_vlog_unsigned_case_compare(t4, 10, t2, 4);
    if (t14 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng8)));
    t14 = xsi_vlog_unsigned_case_compare(t4, 10, t2, 4);
    if (t14 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng10)));
    t14 = xsi_vlog_unsigned_case_compare(t4, 10, t2, 4);
    if (t14 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng11)));
    t14 = xsi_vlog_unsigned_case_compare(t4, 10, t2, 4);
    if (t14 == 1)
        goto LAB30;

LAB31:
LAB32:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(41, ng0);

LAB9:    xsi_set_current_line(42, ng0);
    t11 = ((char*)((ng1)));
    memcpy(t12, t11, 8);
    t13 = (t0 + 4088);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 10, 0LL);
    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB8;

LAB12:    xsi_set_current_line(48, ng0);

LAB33:    xsi_set_current_line(49, ng0);
    t11 = ((char*)((ng2)));
    t13 = (t0 + 3768);
    xsi_vlogvar_wait_assign_value(t13, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(51, ng0);
    t2 = (t0 + 2728U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB34;

LAB35:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 2888U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB37;

LAB38:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 3048U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB40;

LAB41:
LAB42:
LAB39:
LAB36:    goto LAB32;

LAB14:    xsi_set_current_line(58, ng0);

LAB43:    xsi_set_current_line(59, ng0);
    t3 = (t0 + 2728U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB44;

LAB45:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 2888U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB47;

LAB48:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 3048U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB50;

LAB51:
LAB52:
LAB49:
LAB46:    goto LAB32;

LAB16:    xsi_set_current_line(66, ng0);

LAB53:    xsi_set_current_line(67, ng0);
    t3 = (t0 + 2728U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB54;

LAB55:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 2888U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB57;

LAB58:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 3048U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB60;

LAB61:
LAB62:
LAB59:
LAB56:    goto LAB32;

LAB18:    xsi_set_current_line(74, ng0);

LAB63:    xsi_set_current_line(75, ng0);
    t3 = (t0 + 2728U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB64;

LAB65:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 2888U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB67;

LAB68:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 3048U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB70;

LAB71:
LAB72:
LAB69:
LAB66:    goto LAB32;

LAB20:    xsi_set_current_line(82, ng0);

LAB73:    xsi_set_current_line(83, ng0);
    t3 = (t0 + 2728U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB74;

LAB75:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 2888U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB77;

LAB78:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 3048U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB80;

LAB81:
LAB82:
LAB79:
LAB76:    goto LAB32;

LAB22:    xsi_set_current_line(90, ng0);

LAB83:    xsi_set_current_line(91, ng0);
    t3 = (t0 + 2728U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB84;

LAB85:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 2888U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB87;

LAB88:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 3048U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB90;

LAB91:
LAB92:
LAB89:
LAB86:    goto LAB32;

LAB24:    xsi_set_current_line(98, ng0);

LAB93:    xsi_set_current_line(99, ng0);
    t3 = (t0 + 2728U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB94;

LAB95:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 2888U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB97;

LAB98:    xsi_set_current_line(103, ng0);
    t2 = (t0 + 3048U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB100;

LAB101:
LAB102:
LAB99:
LAB96:    goto LAB32;

LAB26:    xsi_set_current_line(106, ng0);

LAB103:    xsi_set_current_line(107, ng0);
    t3 = (t0 + 2728U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB104;

LAB105:    xsi_set_current_line(109, ng0);
    t2 = (t0 + 2888U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB107;

LAB108:    xsi_set_current_line(111, ng0);
    t2 = (t0 + 3048U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB110;

LAB111:
LAB112:
LAB109:
LAB106:    goto LAB32;

LAB28:    xsi_set_current_line(115, ng0);
    t3 = ((char*)((ng11)));
    memcpy(t12, t3, 8);
    t5 = (t0 + 4088);
    xsi_vlogvar_wait_assign_value(t5, t12, 0, 0, 10, 0LL);
    goto LAB32;

LAB30:    xsi_set_current_line(116, ng0);

LAB113:    xsi_set_current_line(117, ng0);
    t3 = ((char*)((ng1)));
    memcpy(t12, t3, 8);
    t5 = (t0 + 4088);
    xsi_vlogvar_wait_assign_value(t5, t12, 0, 0, 10, 0LL);
    xsi_set_current_line(118, ng0);
    t2 = (t0 + 3368U);
    t3 = *((char **)t2);
    t2 = (t0 + 3768);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(119, ng0);
    t2 = (t0 + 3208U);
    t3 = *((char **)t2);
    t2 = (t0 + 3928);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    goto LAB32;

LAB34:    xsi_set_current_line(52, ng0);
    t5 = ((char*)((ng3)));
    memcpy(t12, t5, 8);
    t11 = (t0 + 4088);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, 0, 10, 0LL);
    goto LAB36;

LAB37:    xsi_set_current_line(54, ng0);
    t5 = ((char*)((ng4)));
    memcpy(t12, t5, 8);
    t11 = (t0 + 4088);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, 0, 10, 0LL);
    goto LAB39;

LAB40:    xsi_set_current_line(56, ng0);
    t5 = ((char*)((ng5)));
    memcpy(t12, t5, 8);
    t11 = (t0 + 4088);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, 0, 10, 0LL);
    goto LAB42;

LAB44:    xsi_set_current_line(60, ng0);
    t11 = ((char*)((ng6)));
    memcpy(t12, t11, 8);
    t13 = (t0 + 4088);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 10, 0LL);
    goto LAB46;

LAB47:    xsi_set_current_line(62, ng0);
    t5 = ((char*)((ng5)));
    memcpy(t12, t5, 8);
    t11 = (t0 + 4088);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, 0, 10, 0LL);
    goto LAB49;

LAB50:    xsi_set_current_line(64, ng0);
    t5 = ((char*)((ng7)));
    memcpy(t12, t5, 8);
    t11 = (t0 + 4088);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, 0, 10, 0LL);
    goto LAB52;

LAB54:    xsi_set_current_line(68, ng0);
    t11 = ((char*)((ng8)));
    memcpy(t12, t11, 8);
    t13 = (t0 + 4088);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 10, 0LL);
    goto LAB56;

LAB57:    xsi_set_current_line(70, ng0);
    t5 = ((char*)((ng7)));
    memcpy(t12, t5, 8);
    t11 = (t0 + 4088);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, 0, 10, 0LL);
    goto LAB59;

LAB60:    xsi_set_current_line(72, ng0);
    t5 = ((char*)((ng9)));
    memcpy(t12, t5, 8);
    t11 = (t0 + 4088);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, 0, 10, 0LL);
    goto LAB62;

LAB64:    xsi_set_current_line(76, ng0);
    t11 = ((char*)((ng10)));
    memcpy(t12, t11, 8);
    t13 = (t0 + 4088);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 10, 0LL);
    goto LAB66;

LAB67:    xsi_set_current_line(78, ng0);
    t5 = ((char*)((ng9)));
    memcpy(t12, t5, 8);
    t11 = (t0 + 4088);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, 0, 10, 0LL);
    goto LAB69;

LAB70:    xsi_set_current_line(80, ng0);
    t5 = ((char*)((ng3)));
    memcpy(t12, t5, 8);
    t11 = (t0 + 4088);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, 0, 10, 0LL);
    goto LAB72;

LAB74:    xsi_set_current_line(84, ng0);
    t11 = ((char*)((ng11)));
    memcpy(t12, t11, 8);
    t13 = (t0 + 4088);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 10, 0LL);
    goto LAB76;

LAB77:    xsi_set_current_line(86, ng0);
    t5 = ((char*)((ng3)));
    memcpy(t12, t5, 8);
    t11 = (t0 + 4088);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, 0, 10, 0LL);
    goto LAB79;

LAB80:    xsi_set_current_line(88, ng0);
    t5 = ((char*)((ng6)));
    memcpy(t12, t5, 8);
    t11 = (t0 + 4088);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, 0, 10, 0LL);
    goto LAB82;

LAB84:    xsi_set_current_line(92, ng0);
    t11 = ((char*)((ng11)));
    memcpy(t12, t11, 8);
    t13 = (t0 + 4088);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 10, 0LL);
    goto LAB86;

LAB87:    xsi_set_current_line(94, ng0);
    t5 = ((char*)((ng6)));
    memcpy(t12, t5, 8);
    t11 = (t0 + 4088);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, 0, 10, 0LL);
    goto LAB89;

LAB90:    xsi_set_current_line(96, ng0);
    t5 = ((char*)((ng8)));
    memcpy(t12, t5, 8);
    t11 = (t0 + 4088);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, 0, 10, 0LL);
    goto LAB92;

LAB94:    xsi_set_current_line(100, ng0);
    t11 = ((char*)((ng11)));
    memcpy(t12, t11, 8);
    t13 = (t0 + 4088);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 10, 0LL);
    goto LAB96;

LAB97:    xsi_set_current_line(102, ng0);
    t5 = ((char*)((ng8)));
    memcpy(t12, t5, 8);
    t11 = (t0 + 4088);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, 0, 10, 0LL);
    goto LAB99;

LAB100:    xsi_set_current_line(104, ng0);
    t5 = ((char*)((ng10)));
    memcpy(t12, t5, 8);
    t11 = (t0 + 4088);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, 0, 10, 0LL);
    goto LAB102;

LAB104:    xsi_set_current_line(108, ng0);
    t11 = ((char*)((ng11)));
    memcpy(t12, t11, 8);
    t13 = (t0 + 4088);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 10, 0LL);
    goto LAB106;

LAB107:    xsi_set_current_line(110, ng0);
    t5 = ((char*)((ng10)));
    memcpy(t12, t5, 8);
    t11 = (t0 + 4088);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, 0, 10, 0LL);
    goto LAB109;

LAB110:    xsi_set_current_line(112, ng0);
    t5 = ((char*)((ng11)));
    memcpy(t12, t5, 8);
    t11 = (t0 + 4088);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, 0, 10, 0LL);
    goto LAB112;

}


extern void work_m_00000000003962856342_0544446447_init()
{
	static char *pe[] = {(void *)Always_40_0};
	xsi_register_didat("work_m_00000000003962856342_0544446447", "isim/Vending_TB_isim_beh.exe.sim/work/m_00000000003962856342_0544446447.didat");
	xsi_register_executes(pe);
}
