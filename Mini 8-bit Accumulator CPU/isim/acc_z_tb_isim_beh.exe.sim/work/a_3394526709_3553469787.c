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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/ise/CPU_Set2_22201162/acc_z_tb.vhd";
extern char *IEEE_P_2592010699;
extern char *STD_STANDARD;
extern char *IEEE_P_1242562249;

int ieee_p_1242562249_sub_17802405650254020620_1035706684(char *, char *, char *);
unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_3394526709_3553469787_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    int64 t10;
    int64 t11;

LAB0:    t1 = (t0 + 3824U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(51, ng0);

LAB4:    t2 = (t0 + 2312U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (!(t4));
    if (t5 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(55, ng0);

LAB18:    *((char **)t1) = &&LAB19;

LAB1:    return;
LAB5:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 4472);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 2608U);
    t3 = *((char **)t2);
    t10 = *((int64 *)t3);
    t11 = (t10 / 2);
    t2 = (t0 + 3632);
    xsi_process_wait(t2, t11);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB6:;
LAB8:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 4472);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 2608U);
    t3 = *((char **)t2);
    t10 = *((int64 *)t3);
    t11 = (t10 / 2);
    t2 = (t0 + 3632);
    xsi_process_wait(t2, t11);

LAB14:    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    goto LAB4;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

LAB16:    goto LAB2;

LAB17:    goto LAB16;

LAB19:    goto LAB17;

}

static void work_a_3394526709_3553469787_p_1(char *t0)
{
    char t38[16];
    char t39[16];
    char t40[16];
    char t41[16];
    char t42[16];
    char t45[16];
    char t51[16];
    char t56[16];
    char t58[16];
    char t61[16];
    char t66[16];
    char *t1;
    char *t2;
    int64 t3;
    char *t4;
    int t5;
    int t6;
    char *t7;
    char *t8;
    int t9;
    int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned char t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned char t22;
    unsigned int t23;
    unsigned char t24;
    int t25;
    int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned char t31;
    unsigned char t32;
    char *t33;
    char *t34;
    int t35;
    int t36;
    char *t37;
    char *t43;
    char *t44;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t52;
    char *t53;
    char *t55;
    char *t57;
    char *t59;
    char *t60;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    char *t67;
    char *t68;
    char *t69;
    char *t70;

LAB0:    t1 = (t0 + 4072U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(61, ng0);
    t3 = (2 * 1000LL);
    t2 = (t0 + 3880);
    xsi_process_wait(t2, t3);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 7828);
    *((int *)t2) = 0;
    t4 = (t0 + 7832);
    *((int *)t4) = 7;
    t5 = 0;
    t6 = 7;

LAB8:    if (t5 <= t6)
        goto LAB9;

LAB11:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 2848U);
    t4 = *((char **)t2);
    t5 = *((int *)t4);
    t16 = (t5 == 0);
    if (t16 != 0)
        goto LAB33;

LAB35:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 7899);
    t7 = ((STD_STANDARD) + 384);
    t8 = (t0 + 2848U);
    t15 = *((char **)t8);
    t5 = *((int *)t15);
    t8 = xsi_int_to_mem(t5);
    t17 = xsi_string_variable_get_image(t38, t7, t8);
    t19 = ((STD_STANDARD) + 984);
    t20 = (t40 + 0U);
    t21 = (t20 + 0U);
    *((int *)t21) = 1;
    t21 = (t20 + 4U);
    *((int *)t21) = 30;
    t21 = (t20 + 8U);
    *((int *)t21) = 1;
    t6 = (30 - 1);
    t11 = (t6 * 1);
    t11 = (t11 + 1);
    t21 = (t20 + 12U);
    *((unsigned int *)t21) = t11;
    t18 = xsi_base_array_concat(t18, t39, t19, (char)97, t2, t40, (char)97, t17, t38, (char)101);
    t21 = (t38 + 12U);
    t11 = *((unsigned int *)t21);
    t12 = (30U + t11);
    xsi_report(t18, t12, (unsigned char)2);

LAB34:    xsi_set_current_line(92, ng0);
    t2 = (t0 + 4856);
    t4 = (t2 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t15 = *((char **)t8);
    *((unsigned char *)t15) = (unsigned char)1;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(93, ng0);

LAB38:    *((char **)t1) = &&LAB39;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB9:    xsi_set_current_line(63, ng0);
    t7 = (t0 + 2728U);
    t8 = *((char **)t7);
    t7 = (t0 + 7828);
    t9 = *((int *)t7);
    t10 = (t9 - 0);
    t11 = (t10 * 1);
    t12 = (24U * t11);
    t13 = (0 + t12);
    t14 = (t13 + 0U);
    t15 = (t8 + t14);
    t16 = *((unsigned char *)t15);
    t17 = (t0 + 4536);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = t16;
    xsi_driver_first_trans_fast(t17);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 2728U);
    t4 = *((char **)t2);
    t2 = (t0 + 7828);
    t9 = *((int *)t2);
    t10 = (t9 - 0);
    t11 = (t10 * 1);
    t12 = (24U * t11);
    t13 = (0 + t12);
    t14 = (t13 + 1U);
    t7 = (t4 + t14);
    t16 = *((unsigned char *)t7);
    t8 = (t0 + 4600);
    t15 = (t8 + 56U);
    t17 = *((char **)t15);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = t16;
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 2728U);
    t4 = *((char **)t2);
    t2 = (t0 + 7828);
    t9 = *((int *)t2);
    t10 = (t9 - 0);
    t11 = (t10 * 1);
    t12 = (24U * t11);
    t13 = (0 + t12);
    t14 = (t13 + 2U);
    t7 = (t4 + t14);
    t16 = *((unsigned char *)t7);
    t8 = (t0 + 4664);
    t15 = (t8 + 56U);
    t17 = *((char **)t15);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = t16;
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 2728U);
    t4 = *((char **)t2);
    t2 = (t0 + 7828);
    t9 = *((int *)t2);
    t10 = (t9 - 0);
    t11 = (t10 * 1);
    t12 = (24U * t11);
    t13 = (0 + t12);
    t14 = (t13 + 3U);
    t7 = (t4 + t14);
    t8 = (t0 + 4728);
    t15 = (t8 + 56U);
    t17 = *((char **)t15);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t7, 8U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 2728U);
    t4 = *((char **)t2);
    t2 = (t0 + 7828);
    t9 = *((int *)t2);
    t10 = (t9 - 0);
    t11 = (t10 * 1);
    t12 = (24U * t11);
    t13 = (0 + t12);
    t14 = (t13 + 11U);
    t7 = (t4 + t14);
    t16 = *((unsigned char *)t7);
    t8 = (t0 + 4792);
    t15 = (t8 + 56U);
    t17 = *((char **)t15);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = t16;
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(69, ng0);

LAB14:    t2 = (t0 + 4392);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB10:    t2 = (t0 + 7828);
    t5 = *((int *)t2);
    t4 = (t0 + 7832);
    t6 = *((int *)t4);
    if (t5 == t6)
        goto LAB11;

LAB32:    t9 = (t5 + 1);
    t5 = t9;
    t7 = (t0 + 7828);
    *((int *)t7) = t5;
    goto LAB8;

LAB12:    t7 = (t0 + 4392);
    *((int *)t7) = 0;
    xsi_set_current_line(70, ng0);
    t3 = (1 * 1000LL);
    t2 = (t0 + 3880);
    xsi_process_wait(t2, t3);

LAB18:    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB13:    t4 = (t0 + 992U);
    t16 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t4, 0U, 0U);
    if (t16 == 1)
        goto LAB12;
    else
        goto LAB14;

LAB15:    goto LAB13;

LAB16:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 1992U);
    t4 = *((char **)t2);
    t2 = (t0 + 2728U);
    t7 = *((char **)t2);
    t2 = (t0 + 7828);
    t9 = *((int *)t2);
    t10 = (t9 - 0);
    t11 = (t10 * 1);
    t12 = (24U * t11);
    t13 = (0 + t12);
    t14 = (t13 + 12U);
    t8 = (t7 + t14);
    t22 = 1;
    if (8U == 8U)
        goto LAB26;

LAB27:    t22 = 0;

LAB28:    if ((!(t22)) == 1)
        goto LAB23;

LAB24:    t18 = (t0 + 2152U);
    t19 = *((char **)t18);
    t24 = *((unsigned char *)t19);
    t18 = (t0 + 2728U);
    t20 = *((char **)t18);
    t18 = (t0 + 7828);
    t25 = *((int *)t18);
    t26 = (t25 - 0);
    t27 = (t26 * 1);
    t28 = (24U * t27);
    t29 = (0 + t28);
    t30 = (t29 + 20U);
    t21 = (t20 + t30);
    t31 = *((unsigned char *)t21);
    t32 = (t24 != t31);
    t16 = t32;

LAB25:    if (t16 != 0)
        goto LAB20;

LAB22:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 7859);
    t7 = ((STD_STANDARD) + 384);
    t8 = (t0 + 7828);
    t15 = xsi_int_to_mem(*((int *)t8));
    t17 = xsi_string_variable_get_image(t38, t7, t15);
    t19 = ((STD_STANDARD) + 984);
    t20 = (t40 + 0U);
    t21 = (t20 + 0U);
    *((int *)t21) = 1;
    t21 = (t20 + 4U);
    *((int *)t21) = 5;
    t21 = (t20 + 8U);
    *((int *)t21) = 1;
    t9 = (5 - 1);
    t11 = (t9 * 1);
    t11 = (t11 + 1);
    t21 = (t20 + 12U);
    *((unsigned int *)t21) = t11;
    t18 = xsi_base_array_concat(t18, t39, t19, (char)97, t2, t40, (char)97, t17, t38, (char)101);
    t21 = (t0 + 7864);
    t37 = ((STD_STANDARD) + 984);
    t43 = (t42 + 0U);
    t44 = (t43 + 0U);
    *((int *)t44) = 1;
    t44 = (t43 + 4U);
    *((int *)t44) = 9;
    t44 = (t43 + 8U);
    *((int *)t44) = 1;
    t10 = (9 - 1);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t44 = (t43 + 12U);
    *((unsigned int *)t44) = t11;
    t34 = xsi_base_array_concat(t34, t41, t37, (char)97, t18, t39, (char)97, t21, t42, (char)101);
    t44 = ((STD_STANDARD) + 384);
    t46 = (t0 + 1992U);
    t47 = *((char **)t46);
    t46 = (t0 + 7528U);
    t25 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t47, t46);
    t48 = xsi_int_to_mem(t25);
    t49 = xsi_string_variable_get_image(t45, t44, t48);
    t52 = ((STD_STANDARD) + 984);
    t50 = xsi_base_array_concat(t50, t51, t52, (char)97, t34, t41, (char)97, t49, t45, (char)101);
    t53 = (t0 + 7873);
    t57 = ((STD_STANDARD) + 984);
    t59 = (t58 + 0U);
    t60 = (t59 + 0U);
    *((int *)t60) = 1;
    t60 = (t59 + 4U);
    *((int *)t60) = 3;
    t60 = (t59 + 8U);
    *((int *)t60) = 1;
    t26 = (3 - 1);
    t11 = (t26 * 1);
    t11 = (t11 + 1);
    t60 = (t59 + 12U);
    *((unsigned int *)t60) = t11;
    t55 = xsi_base_array_concat(t55, t56, t57, (char)97, t50, t51, (char)97, t53, t58, (char)101);
    t60 = ((IEEE_P_2592010699) + 3216);
    t62 = (t0 + 2152U);
    t63 = *((char **)t62);
    t16 = *((unsigned char *)t63);
    t62 = xsi_char_to_mem(t16);
    t64 = xsi_string_variable_get_image(t61, t60, t62);
    t67 = ((STD_STANDARD) + 984);
    t65 = xsi_base_array_concat(t65, t66, t67, (char)97, t55, t56, (char)97, t64, t61, (char)101);
    t68 = (t38 + 12U);
    t11 = *((unsigned int *)t68);
    t12 = (5U + t11);
    t13 = (t12 + 9U);
    t69 = (t45 + 12U);
    t14 = *((unsigned int *)t69);
    t23 = (t13 + t14);
    t27 = (t23 + 3U);
    t70 = (t61 + 12U);
    t28 = *((unsigned int *)t70);
    t29 = (t27 + t28);
    xsi_report(t65, t29, 0);

LAB21:    goto LAB10;

LAB17:    goto LAB16;

LAB19:    goto LAB17;

LAB20:    xsi_set_current_line(73, ng0);
    t33 = (t0 + 2848U);
    t34 = *((char **)t33);
    t35 = *((int *)t34);
    t36 = (t35 + 1);
    t33 = (t0 + 2848U);
    t37 = *((char **)t33);
    t33 = (t37 + 0);
    *((int *)t33) = t36;
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 7836);
    t7 = ((STD_STANDARD) + 384);
    t8 = (t0 + 7828);
    t15 = xsi_int_to_mem(*((int *)t8));
    t17 = xsi_string_variable_get_image(t38, t7, t15);
    t19 = ((STD_STANDARD) + 984);
    t20 = (t40 + 0U);
    t21 = (t20 + 0U);
    *((int *)t21) = 1;
    t21 = (t20 + 4U);
    *((int *)t21) = 5;
    t21 = (t20 + 8U);
    *((int *)t21) = 1;
    t9 = (5 - 1);
    t11 = (t9 * 1);
    t11 = (t11 + 1);
    t21 = (t20 + 12U);
    *((unsigned int *)t21) = t11;
    t18 = xsi_base_array_concat(t18, t39, t19, (char)97, t2, t40, (char)97, t17, t38, (char)101);
    t21 = (t0 + 7841);
    t37 = ((STD_STANDARD) + 984);
    t43 = (t42 + 0U);
    t44 = (t43 + 0U);
    *((int *)t44) = 1;
    t44 = (t43 + 4U);
    *((int *)t44) = 15;
    t44 = (t43 + 8U);
    *((int *)t44) = 1;
    t10 = (15 - 1);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t44 = (t43 + 12U);
    *((unsigned int *)t44) = t11;
    t34 = xsi_base_array_concat(t34, t41, t37, (char)97, t18, t39, (char)97, t21, t42, (char)101);
    t44 = ((STD_STANDARD) + 384);
    t46 = (t0 + 1992U);
    t47 = *((char **)t46);
    t46 = (t0 + 7528U);
    t25 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t47, t46);
    t48 = xsi_int_to_mem(t25);
    t49 = xsi_string_variable_get_image(t45, t44, t48);
    t52 = ((STD_STANDARD) + 984);
    t50 = xsi_base_array_concat(t50, t51, t52, (char)97, t34, t41, (char)97, t49, t45, (char)101);
    t53 = (t0 + 7856);
    t57 = ((STD_STANDARD) + 984);
    t59 = (t58 + 0U);
    t60 = (t59 + 0U);
    *((int *)t60) = 1;
    t60 = (t59 + 4U);
    *((int *)t60) = 3;
    t60 = (t59 + 8U);
    *((int *)t60) = 1;
    t26 = (3 - 1);
    t11 = (t26 * 1);
    t11 = (t11 + 1);
    t60 = (t59 + 12U);
    *((unsigned int *)t60) = t11;
    t55 = xsi_base_array_concat(t55, t56, t57, (char)97, t50, t51, (char)97, t53, t58, (char)101);
    t60 = ((IEEE_P_2592010699) + 3216);
    t62 = (t0 + 2152U);
    t63 = *((char **)t62);
    t16 = *((unsigned char *)t63);
    t62 = xsi_char_to_mem(t16);
    t64 = xsi_string_variable_get_image(t61, t60, t62);
    t67 = ((STD_STANDARD) + 984);
    t65 = xsi_base_array_concat(t65, t66, t67, (char)97, t55, t56, (char)97, t64, t61, (char)101);
    t68 = (t38 + 12U);
    t11 = *((unsigned int *)t68);
    t12 = (5U + t11);
    t13 = (t12 + 15U);
    t69 = (t45 + 12U);
    t14 = *((unsigned int *)t69);
    t23 = (t13 + t14);
    t27 = (t23 + 3U);
    t70 = (t61 + 12U);
    t28 = *((unsigned int *)t70);
    t29 = (t27 + t28);
    xsi_report(t65, t29, (unsigned char)2);
    goto LAB21;

LAB23:    t16 = (unsigned char)1;
    goto LAB25;

LAB26:    t23 = 0;

LAB29:    if (t23 < 8U)
        goto LAB30;
    else
        goto LAB28;

LAB30:    t15 = (t4 + t23);
    t17 = (t8 + t23);
    if (*((unsigned char *)t15) != *((unsigned char *)t17))
        goto LAB27;

LAB31:    t23 = (t23 + 1);
    goto LAB29;

LAB33:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 7876);
    xsi_report(t2, 23U, 0);
    goto LAB34;

LAB36:    goto LAB2;

LAB37:    goto LAB36;

LAB39:    goto LAB37;

}


extern void work_a_3394526709_3553469787_init()
{
	static char *pe[] = {(void *)work_a_3394526709_3553469787_p_0,(void *)work_a_3394526709_3553469787_p_1};
	xsi_register_didat("work_a_3394526709_3553469787", "isim/acc_z_tb_isim_beh.exe.sim/work/a_3394526709_3553469787.didat");
	xsi_register_executes(pe);
}
