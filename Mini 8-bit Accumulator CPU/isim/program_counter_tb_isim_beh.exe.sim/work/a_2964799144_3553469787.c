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
static const char *ng0 = "/home/ise/CPU_Set2_22201162/program_counter_tb.vhd";
extern char *IEEE_P_1242562249;
extern char *STD_STANDARD;
extern char *IEEE_P_2592010699;

int ieee_p_1242562249_sub_17802405650254020620_1035706684(char *, char *, char *);
unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_2964799144_3553469787_p_0(char *t0)
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

LAB0:    t1 = (t0 + 2904U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(23, ng0);

LAB4:    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (!(t4));
    if (t5 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(27, ng0);

LAB18:    *((char **)t1) = &&LAB19;

LAB1:    return;
LAB5:    xsi_set_current_line(24, ng0);
    t2 = (t0 + 3600);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(24, ng0);
    t2 = (t0 + 1808U);
    t3 = *((char **)t2);
    t10 = *((int64 *)t3);
    t11 = (t10 / 2);
    t2 = (t0 + 2712);
    xsi_process_wait(t2, t11);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB6:;
LAB8:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 3600);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(25, ng0);
    t2 = (t0 + 1808U);
    t3 = *((char **)t2);
    t10 = *((int64 *)t3);
    t11 = (t10 / 2);
    t2 = (t0 + 2712);
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

void work_a_2964799144_3553469787_sub_3594626352298903923_2166916210(char *t0, char *t1, int t2, int t3)
{
    char t5[16];
    char t17[16];
    char t19[16];
    char t21[16];
    char t27[16];
    char t29[16];
    char t32[16];
    char t38[16];
    char t43[16];
    char t45[16];
    char t49[16];
    char t53[16];
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    int t10;
    unsigned char t11;
    char *t12;
    char *t13;
    int t14;
    int t15;
    char *t16;
    char *t18;
    char *t20;
    char *t22;
    char *t23;
    unsigned int t24;
    char *t26;
    char *t28;
    char *t30;
    char *t31;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t39;
    char *t40;
    char *t42;
    char *t44;
    char *t46;
    char *t47;
    int t48;
    char *t50;
    char *t51;
    char *t52;
    char *t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    unsigned int t63;
    unsigned int t64;

LAB0:    t6 = (t5 + 4U);
    *((int *)t6) = t2;
    t7 = (t5 + 8U);
    *((int *)t7) = t3;
    t8 = (t0 + 1352U);
    t9 = *((char **)t8);
    t8 = (t0 + 5744U);
    t10 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t9, t8);
    t11 = (t10 != t3);
    if (t11 != 0)
        goto LAB2;

LAB4:    t8 = (t0 + 5817);
    t12 = ((STD_STANDARD) + 384);
    t13 = xsi_int_to_mem(t2);
    t16 = xsi_string_variable_get_image(t17, t12, t13);
    t20 = ((STD_STANDARD) + 984);
    t22 = (t21 + 0U);
    t23 = (t22 + 0U);
    *((int *)t23) = 1;
    t23 = (t22 + 4U);
    *((int *)t23) = 5;
    t23 = (t22 + 8U);
    *((int *)t23) = 1;
    t10 = (5 - 1);
    t24 = (t10 * 1);
    t24 = (t24 + 1);
    t23 = (t22 + 12U);
    *((unsigned int *)t23) = t24;
    t18 = xsi_base_array_concat(t18, t19, t20, (char)97, t8, t21, (char)97, t16, t17, (char)101);
    t23 = (t0 + 5822);
    t28 = ((STD_STANDARD) + 984);
    t30 = (t29 + 0U);
    t31 = (t30 + 0U);
    *((int *)t31) = 1;
    t31 = (t30 + 4U);
    *((int *)t31) = 8;
    t31 = (t30 + 8U);
    *((int *)t31) = 1;
    t14 = (8 - 1);
    t24 = (t14 * 1);
    t24 = (t24 + 1);
    t31 = (t30 + 12U);
    *((unsigned int *)t31) = t24;
    t26 = xsi_base_array_concat(t26, t27, t28, (char)97, t18, t19, (char)97, t23, t29, (char)101);
    t31 = ((STD_STANDARD) + 384);
    t33 = xsi_int_to_mem(t3);
    t34 = xsi_string_variable_get_image(t32, t31, t33);
    t36 = ((STD_STANDARD) + 984);
    t35 = xsi_base_array_concat(t35, t38, t36, (char)97, t26, t27, (char)97, t34, t32, (char)101);
    t37 = (t17 + 12U);
    t24 = *((unsigned int *)t37);
    t56 = (5U + t24);
    t57 = (t56 + 8U);
    t39 = (t32 + 12U);
    t59 = *((unsigned int *)t39);
    t60 = (t57 + t59);
    xsi_report(t35, t60, 0);

LAB3:
LAB1:    return;
LAB2:    t12 = (t0 + 1928U);
    t13 = *((char **)t12);
    t14 = *((int *)t13);
    t15 = (t14 + 1);
    t12 = (t0 + 1928U);
    t16 = *((char **)t12);
    t12 = (t16 + 0);
    *((int *)t12) = t15;
    t8 = (t0 + 5788);
    t12 = ((STD_STANDARD) + 384);
    t13 = xsi_int_to_mem(t2);
    t16 = xsi_string_variable_get_image(t17, t12, t13);
    t20 = ((STD_STANDARD) + 984);
    t22 = (t21 + 0U);
    t23 = (t22 + 0U);
    *((int *)t23) = 1;
    t23 = (t22 + 4U);
    *((int *)t23) = 5;
    t23 = (t22 + 8U);
    *((int *)t23) = 1;
    t10 = (5 - 1);
    t24 = (t10 * 1);
    t24 = (t24 + 1);
    t23 = (t22 + 12U);
    *((unsigned int *)t23) = t24;
    t18 = xsi_base_array_concat(t18, t19, t20, (char)97, t8, t21, (char)97, t16, t17, (char)101);
    t23 = (t0 + 5793);
    t28 = ((STD_STANDARD) + 984);
    t30 = (t29 + 0U);
    t31 = (t30 + 0U);
    *((int *)t31) = 1;
    t31 = (t30 + 4U);
    *((int *)t31) = 14;
    t31 = (t30 + 8U);
    *((int *)t31) = 1;
    t14 = (14 - 1);
    t24 = (t14 * 1);
    t24 = (t24 + 1);
    t31 = (t30 + 12U);
    *((unsigned int *)t31) = t24;
    t26 = xsi_base_array_concat(t26, t27, t28, (char)97, t18, t19, (char)97, t23, t29, (char)101);
    t31 = ((STD_STANDARD) + 384);
    t33 = (t0 + 1352U);
    t34 = *((char **)t33);
    t33 = (t0 + 5744U);
    t15 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t34, t33);
    t35 = xsi_int_to_mem(t15);
    t36 = xsi_string_variable_get_image(t32, t31, t35);
    t39 = ((STD_STANDARD) + 984);
    t37 = xsi_base_array_concat(t37, t38, t39, (char)97, t26, t27, (char)97, t36, t32, (char)101);
    t40 = (t0 + 5807);
    t44 = ((STD_STANDARD) + 984);
    t46 = (t45 + 0U);
    t47 = (t46 + 0U);
    *((int *)t47) = 1;
    t47 = (t46 + 4U);
    *((int *)t47) = 10;
    t47 = (t46 + 8U);
    *((int *)t47) = 1;
    t48 = (10 - 1);
    t24 = (t48 * 1);
    t24 = (t24 + 1);
    t47 = (t46 + 12U);
    *((unsigned int *)t47) = t24;
    t42 = xsi_base_array_concat(t42, t43, t44, (char)97, t37, t38, (char)97, t40, t45, (char)101);
    t47 = ((STD_STANDARD) + 384);
    t50 = xsi_int_to_mem(t3);
    t51 = xsi_string_variable_get_image(t49, t47, t50);
    t54 = ((STD_STANDARD) + 984);
    t52 = xsi_base_array_concat(t52, t53, t54, (char)97, t42, t43, (char)97, t51, t49, (char)101);
    t55 = (t17 + 12U);
    t24 = *((unsigned int *)t55);
    t56 = (5U + t24);
    t57 = (t56 + 14U);
    t58 = (t32 + 12U);
    t59 = *((unsigned int *)t58);
    t60 = (t57 + t59);
    t61 = (t60 + 10U);
    t62 = (t49 + 12U);
    t63 = *((unsigned int *)t62);
    t64 = (t61 + t63);
    xsi_report(t52, t64, (unsigned char)2);
    goto LAB3;

}

static void work_a_2964799144_3553469787_p_1(char *t0)
{
    char t12[16];
    char t15[16];
    char t17[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    unsigned char t7;
    int64 t8;
    int t9;
    int t10;
    int t11;
    char *t13;
    char *t14;
    char *t16;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;

LAB0:    t1 = (t0 + 3152U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 3664);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(49, ng0);

LAB6:    t2 = (t0 + 3472);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    t4 = (t0 + 3472);
    *((int *)t4) = 0;
    xsi_set_current_line(50, ng0);
    t8 = (1 * 1000LL);
    t2 = (t0 + 2960);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    t3 = (t0 + 992U);
    t7 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t7 == 1)
        goto LAB4;
    else
        goto LAB6;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 2960);
    work_a_2964799144_3553469787_sub_3594626352298903923_2166916210(t0, t2, 0, 0);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 3664);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 5830);
    *((int *)t2) = 1;
    t3 = (t0 + 5834);
    *((int *)t3) = 20;
    t9 = 1;
    t10 = 20;

LAB12:    if (t9 <= t10)
        goto LAB13;

LAB15:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 3664);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(63, ng0);

LAB27:    t2 = (t0 + 3504);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB28;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB13:    xsi_set_current_line(56, ng0);

LAB18:    t4 = (t0 + 3488);
    *((int *)t4) = 1;
    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB14:    t2 = (t0 + 5830);
    t9 = *((int *)t2);
    t3 = (t0 + 5834);
    t10 = *((int *)t3);
    if (t9 == t10)
        goto LAB15;

LAB24:    t11 = (t9 + 1);
    t9 = t11;
    t4 = (t0 + 5830);
    *((int *)t4) = t9;
    goto LAB12;

LAB16:    t6 = (t0 + 3488);
    *((int *)t6) = 0;
    xsi_set_current_line(57, ng0);
    t8 = (1 * 1000LL);
    t2 = (t0 + 2960);
    xsi_process_wait(t2, t8);

LAB22:    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB17:    t5 = (t0 + 992U);
    t7 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t5, 0U, 0U);
    if (t7 == 1)
        goto LAB16;
    else
        goto LAB18;

LAB19:    goto LAB17;

LAB20:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 2960);
    t3 = (t0 + 5830);
    t4 = (t0 + 5830);
    t11 = xsi_vhdl_mod(*((int *)t4), 16);
    work_a_2964799144_3553469787_sub_3594626352298903923_2166916210(t0, t2, *((int *)t3), t11);
    goto LAB14;

LAB21:    goto LAB20;

LAB23:    goto LAB21;

LAB25:    t4 = (t0 + 3504);
    *((int *)t4) = 0;
    xsi_set_current_line(64, ng0);
    t8 = (1 * 1000LL);
    t2 = (t0 + 2960);
    xsi_process_wait(t2, t8);

LAB31:    *((char **)t1) = &&LAB32;
    goto LAB1;

LAB26:    t3 = (t0 + 992U);
    t7 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t7 == 1)
        goto LAB25;
    else
        goto LAB27;

LAB28:    goto LAB26;

LAB29:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 2960);
    work_a_2964799144_3553469787_sub_3594626352298903923_2166916210(t0, t2, 21, 0);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 3664);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(69, ng0);

LAB35:    t2 = (t0 + 3520);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB36;
    goto LAB1;

LAB30:    goto LAB29;

LAB32:    goto LAB30;

LAB33:    t4 = (t0 + 3520);
    *((int *)t4) = 0;
    xsi_set_current_line(70, ng0);
    t8 = (1 * 1000LL);
    t2 = (t0 + 2960);
    xsi_process_wait(t2, t8);

LAB39:    *((char **)t1) = &&LAB40;
    goto LAB1;

LAB34:    t3 = (t0 + 992U);
    t7 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t7 == 1)
        goto LAB33;
    else
        goto LAB35;

LAB36:    goto LAB34;

LAB37:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 2960);
    work_a_2964799144_3553469787_sub_3594626352298903923_2166916210(t0, t2, 22, 1);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 1928U);
    t3 = *((char **)t2);
    t9 = *((int *)t3);
    t7 = (t9 == 0);
    if (t7 != 0)
        goto LAB41;

LAB43:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 5871);
    t4 = ((STD_STANDARD) + 384);
    t5 = (t0 + 1928U);
    t6 = *((char **)t5);
    t9 = *((int *)t6);
    t5 = xsi_int_to_mem(t9);
    t13 = xsi_string_variable_get_image(t12, t4, t5);
    t16 = ((STD_STANDARD) + 984);
    t18 = (t17 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = 1;
    t19 = (t18 + 4U);
    *((int *)t19) = 40;
    t19 = (t18 + 8U);
    *((int *)t19) = 1;
    t10 = (40 - 1);
    t20 = (t10 * 1);
    t20 = (t20 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t20;
    t14 = xsi_base_array_concat(t14, t15, t16, (char)97, t2, t17, (char)97, t13, t12, (char)101);
    t19 = (t12 + 12U);
    t20 = *((unsigned int *)t19);
    t21 = (40U + t20);
    xsi_report(t14, t21, (unsigned char)2);

LAB42:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 3728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)1;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(81, ng0);

LAB46:    *((char **)t1) = &&LAB47;
    goto LAB1;

LAB38:    goto LAB37;

LAB40:    goto LAB38;

LAB41:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 5838);
    xsi_report(t2, 33U, 0);
    goto LAB42;

LAB44:    goto LAB2;

LAB45:    goto LAB44;

LAB47:    goto LAB45;

}


extern void work_a_2964799144_3553469787_init()
{
	static char *pe[] = {(void *)work_a_2964799144_3553469787_p_0,(void *)work_a_2964799144_3553469787_p_1};
	static char *se[] = {(void *)work_a_2964799144_3553469787_sub_3594626352298903923_2166916210};
	xsi_register_didat("work_a_2964799144_3553469787", "isim/program_counter_tb_isim_beh.exe.sim/work/a_2964799144_3553469787.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
