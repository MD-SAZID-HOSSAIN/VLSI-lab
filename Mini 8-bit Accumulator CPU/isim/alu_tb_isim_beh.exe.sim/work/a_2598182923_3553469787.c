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
static const char *ng0 = "/home/ise/CPU_Set2_22201162/alu_tb.vhd";
extern char *STD_STANDARD;
extern char *IEEE_P_1242562249;
extern char *IEEE_P_2592010699;

int ieee_p_1242562249_sub_17802405650254020620_1035706684(char *, char *, char *);


static void work_a_2598182923_3553469787_p_0(char *t0)
{
    char t30[16];
    char t31[16];
    char t32[16];
    char t34[16];
    char t36[16];
    char t39[16];
    char t45[16];
    char t50[16];
    char t52[16];
    char t55[16];
    char t60[16];
    char t65[16];
    char t67[16];
    char t71[16];
    char t85[16];
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    char *t6;
    char *t7;
    int t8;
    int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    int64 t20;
    unsigned char t21;
    unsigned int t22;
    unsigned char t23;
    unsigned char t24;
    unsigned char t25;
    unsigned char t26;
    int t27;
    int t28;
    char *t29;
    char *t33;
    char *t35;
    char *t37;
    char *t38;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t46;
    char *t47;
    char *t49;
    char *t51;
    char *t53;
    char *t54;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t66;
    char *t68;
    char *t69;
    int t70;
    char *t72;
    char *t73;
    int t74;
    int t75;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    int t81;
    char *t82;
    char *t83;
    char *t84;
    char *t86;
    char *t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    char *t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    char *t98;
    unsigned int t99;
    unsigned int t100;

LAB0:    t1 = (t0 + 3184U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 6957);
    *((int *)t2) = 0;
    t3 = (t0 + 6961);
    *((int *)t3) = 15;
    t4 = 0;
    t5 = 15;

LAB4:    if (t4 <= t5)
        goto LAB5;

LAB7:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 2088U);
    t3 = *((char **)t2);
    t4 = *((int *)t3);
    t21 = (t4 == 0);
    if (t21 != 0)
        goto LAB34;

LAB36:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 7056);
    t6 = ((STD_STANDARD) + 384);
    t7 = (t0 + 2088U);
    t14 = *((char **)t7);
    t4 = *((int *)t14);
    t7 = xsi_int_to_mem(t4);
    t15 = xsi_string_variable_get_image(t30, t6, t7);
    t17 = ((STD_STANDARD) + 984);
    t18 = (t32 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = 1;
    t19 = (t18 + 4U);
    *((int *)t19) = 28;
    t19 = (t18 + 8U);
    *((int *)t19) = 1;
    t5 = (28 - 1);
    t10 = (t5 * 1);
    t10 = (t10 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t10;
    t16 = xsi_base_array_concat(t16, t31, t17, (char)97, t2, t32, (char)97, t15, t30, (char)101);
    t19 = (t30 + 12U);
    t10 = *((unsigned int *)t19);
    t11 = (28U + t10);
    xsi_report(t16, t11, (unsigned char)2);

LAB35:    xsi_set_current_line(86, ng0);

LAB39:    *((char **)t1) = &&LAB40;

LAB1:    return;
LAB5:    xsi_set_current_line(54, ng0);
    t6 = (t0 + 1968U);
    t7 = *((char **)t6);
    t6 = (t0 + 6957);
    t8 = *((int *)t6);
    t9 = (t8 - 0);
    t10 = (t9 * 1);
    t11 = (32U * t10);
    t12 = (0 + t11);
    t13 = (t12 + 0U);
    t14 = (t7 + t13);
    t15 = (t0 + 3568);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t14, 8U);
    xsi_driver_first_trans_fast(t15);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 1968U);
    t3 = *((char **)t2);
    t2 = (t0 + 6957);
    t8 = *((int *)t2);
    t9 = (t8 - 0);
    t10 = (t9 * 1);
    t11 = (32U * t10);
    t12 = (0 + t11);
    t13 = (t12 + 8U);
    t6 = (t3 + t13);
    t7 = (t0 + 3632);
    t14 = (t7 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t6, 8U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 1968U);
    t3 = *((char **)t2);
    t2 = (t0 + 6957);
    t8 = *((int *)t2);
    t9 = (t8 - 0);
    t10 = (t9 * 1);
    t11 = (32U * t10);
    t12 = (0 + t11);
    t13 = (t12 + 16U);
    t6 = (t3 + t13);
    t7 = (t0 + 3696);
    t14 = (t7 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t6, 3U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(57, ng0);
    t20 = (10 * 1000LL);
    t2 = (t0 + 2992);
    xsi_process_wait(t2, t20);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB6:    t2 = (t0 + 6957);
    t4 = *((int *)t2);
    t3 = (t0 + 6961);
    t5 = *((int *)t3);
    if (t4 == t5)
        goto LAB7;

LAB33:    t8 = (t4 + 1);
    t4 = t8;
    t6 = (t0 + 6957);
    *((int *)t6) = t4;
    goto LAB4;

LAB8:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 1968U);
    t3 = *((char **)t2);
    t2 = (t0 + 6957);
    t8 = *((int *)t2);
    t9 = (t8 - 0);
    t10 = (t9 * 1);
    t11 = (32U * t10);
    t12 = (0 + t11);
    t13 = (t12 + 19U);
    t6 = (t3 + t13);
    t7 = (t0 + 6965);
    t21 = 1;
    if (8U == 8U)
        goto LAB15;

LAB16:    t21 = 0;

LAB17:    if (t21 != 0)
        goto LAB12;

LAB14:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 2208U);
    t3 = *((char **)t2);
    t2 = (t3 + 0);
    *((unsigned char *)t2) = (unsigned char)2;

LAB13:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 1968U);
    t6 = *((char **)t2);
    t2 = (t0 + 6957);
    t8 = *((int *)t2);
    t9 = (t8 - 0);
    t10 = (t9 * 1);
    t11 = (32U * t10);
    t12 = (0 + t11);
    t13 = (t12 + 19U);
    t7 = (t6 + t13);
    t23 = 1;
    if (8U == 8U)
        goto LAB27;

LAB28:    t23 = 0;

LAB29:    if ((!(t23)) == 1)
        goto LAB24;

LAB25:    t16 = (t0 + 1672U);
    t17 = *((char **)t16);
    t24 = *((unsigned char *)t17);
    t16 = (t0 + 2208U);
    t18 = *((char **)t16);
    t25 = *((unsigned char *)t18);
    t26 = (t24 != t25);
    t21 = t26;

LAB26:    if (t21 != 0)
        goto LAB21;

LAB23:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 7012);
    t6 = ((STD_STANDARD) + 384);
    t7 = (t0 + 6957);
    t14 = xsi_int_to_mem(*((int *)t7));
    t15 = xsi_string_variable_get_image(t30, t6, t14);
    t17 = ((STD_STANDARD) + 984);
    t18 = (t32 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = 1;
    t19 = (t18 + 4U);
    *((int *)t19) = 5;
    t19 = (t18 + 8U);
    *((int *)t19) = 1;
    t8 = (5 - 1);
    t10 = (t8 * 1);
    t10 = (t10 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t10;
    t16 = xsi_base_array_concat(t16, t31, t17, (char)97, t2, t32, (char)97, t15, t30, (char)101);
    t19 = (t0 + 7017);
    t35 = ((STD_STANDARD) + 984);
    t37 = (t36 + 0U);
    t38 = (t37 + 0U);
    *((int *)t38) = 1;
    t38 = (t37 + 4U);
    *((int *)t38) = 12;
    t38 = (t37 + 8U);
    *((int *)t38) = 1;
    t9 = (12 - 1);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t38 = (t37 + 12U);
    *((unsigned int *)t38) = t10;
    t33 = xsi_base_array_concat(t33, t34, t35, (char)97, t16, t31, (char)97, t19, t36, (char)101);
    t38 = ((STD_STANDARD) + 384);
    t40 = (t0 + 1512U);
    t41 = *((char **)t40);
    t40 = (t0 + 6304U);
    t27 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t41, t40);
    t42 = xsi_int_to_mem(t27);
    t43 = xsi_string_variable_get_image(t39, t38, t42);
    t46 = ((STD_STANDARD) + 984);
    t44 = xsi_base_array_concat(t44, t45, t46, (char)97, t33, t34, (char)97, t43, t39, (char)101);
    t47 = (t0 + 7029);
    t51 = ((STD_STANDARD) + 984);
    t53 = (t52 + 0U);
    t54 = (t53 + 0U);
    *((int *)t54) = 1;
    t54 = (t53 + 4U);
    *((int *)t54) = 6;
    t54 = (t53 + 8U);
    *((int *)t54) = 1;
    t28 = (6 - 1);
    t10 = (t28 * 1);
    t10 = (t10 + 1);
    t54 = (t53 + 12U);
    *((unsigned int *)t54) = t10;
    t49 = xsi_base_array_concat(t49, t50, t51, (char)97, t44, t45, (char)97, t47, t52, (char)101);
    t54 = ((IEEE_P_2592010699) + 3216);
    t56 = (t0 + 1672U);
    t57 = *((char **)t56);
    t21 = *((unsigned char *)t57);
    t56 = xsi_char_to_mem(t21);
    t58 = xsi_string_variable_get_image(t55, t54, t56);
    t61 = ((STD_STANDARD) + 984);
    t59 = xsi_base_array_concat(t59, t60, t61, (char)97, t49, t50, (char)97, t58, t55, (char)101);
    t62 = (t30 + 12U);
    t10 = *((unsigned int *)t62);
    t11 = (5U + t10);
    t12 = (t11 + 12U);
    t63 = (t39 + 12U);
    t13 = *((unsigned int *)t63);
    t22 = (t12 + t13);
    t88 = (t22 + 6U);
    t64 = (t55 + 12U);
    t89 = *((unsigned int *)t64);
    t91 = (t88 + t89);
    xsi_report(t59, t91, 0);

LAB22:    goto LAB6;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    xsi_set_current_line(60, ng0);
    t17 = (t0 + 2208U);
    t18 = *((char **)t17);
    t17 = (t18 + 0);
    *((unsigned char *)t17) = (unsigned char)3;
    goto LAB13;

LAB15:    t22 = 0;

LAB18:    if (t22 < 8U)
        goto LAB19;
    else
        goto LAB17;

LAB19:    t15 = (t6 + t22);
    t16 = (t7 + t22);
    if (*((unsigned char *)t15) != *((unsigned char *)t16))
        goto LAB16;

LAB20:    t22 = (t22 + 1);
    goto LAB18;

LAB21:    xsi_set_current_line(66, ng0);
    t16 = (t0 + 2088U);
    t19 = *((char **)t16);
    t27 = *((int *)t19);
    t28 = (t27 + 1);
    t16 = (t0 + 2088U);
    t29 = *((char **)t16);
    t16 = (t29 + 0);
    *((int *)t16) = t28;
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 6973);
    t6 = ((STD_STANDARD) + 384);
    t7 = (t0 + 6957);
    t14 = xsi_int_to_mem(*((int *)t7));
    t15 = xsi_string_variable_get_image(t30, t6, t14);
    t17 = ((STD_STANDARD) + 984);
    t18 = (t32 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = 1;
    t19 = (t18 + 4U);
    *((int *)t19) = 5;
    t19 = (t18 + 8U);
    *((int *)t19) = 1;
    t8 = (5 - 1);
    t10 = (t8 * 1);
    t10 = (t10 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t10;
    t16 = xsi_base_array_concat(t16, t31, t17, (char)97, t2, t32, (char)97, t15, t30, (char)101);
    t19 = (t0 + 6978);
    t35 = ((STD_STANDARD) + 984);
    t37 = (t36 + 0U);
    t38 = (t37 + 0U);
    *((int *)t38) = 1;
    t38 = (t37 + 4U);
    *((int *)t38) = 18;
    t38 = (t37 + 8U);
    *((int *)t38) = 1;
    t9 = (18 - 1);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t38 = (t37 + 12U);
    *((unsigned int *)t38) = t10;
    t33 = xsi_base_array_concat(t33, t34, t35, (char)97, t16, t31, (char)97, t19, t36, (char)101);
    t38 = ((STD_STANDARD) + 384);
    t40 = (t0 + 1512U);
    t41 = *((char **)t40);
    t40 = (t0 + 6304U);
    t27 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t41, t40);
    t42 = xsi_int_to_mem(t27);
    t43 = xsi_string_variable_get_image(t39, t38, t42);
    t46 = ((STD_STANDARD) + 984);
    t44 = xsi_base_array_concat(t44, t45, t46, (char)97, t33, t34, (char)97, t43, t39, (char)101);
    t47 = (t0 + 6996);
    t51 = ((STD_STANDARD) + 984);
    t53 = (t52 + 0U);
    t54 = (t53 + 0U);
    *((int *)t54) = 1;
    t54 = (t53 + 4U);
    *((int *)t54) = 6;
    t54 = (t53 + 8U);
    *((int *)t54) = 1;
    t28 = (6 - 1);
    t10 = (t28 * 1);
    t10 = (t10 + 1);
    t54 = (t53 + 12U);
    *((unsigned int *)t54) = t10;
    t49 = xsi_base_array_concat(t49, t50, t51, (char)97, t44, t45, (char)97, t47, t52, (char)101);
    t54 = ((IEEE_P_2592010699) + 3216);
    t56 = (t0 + 1672U);
    t57 = *((char **)t56);
    t21 = *((unsigned char *)t57);
    t56 = xsi_char_to_mem(t21);
    t58 = xsi_string_variable_get_image(t55, t54, t56);
    t61 = ((STD_STANDARD) + 984);
    t59 = xsi_base_array_concat(t59, t60, t61, (char)97, t49, t50, (char)97, t58, t55, (char)101);
    t62 = (t0 + 7002);
    t66 = ((STD_STANDARD) + 984);
    t68 = (t67 + 0U);
    t69 = (t68 + 0U);
    *((int *)t69) = 1;
    t69 = (t68 + 4U);
    *((int *)t69) = 10;
    t69 = (t68 + 8U);
    *((int *)t69) = 1;
    t70 = (10 - 1);
    t10 = (t70 * 1);
    t10 = (t10 + 1);
    t69 = (t68 + 12U);
    *((unsigned int *)t69) = t10;
    t64 = xsi_base_array_concat(t64, t65, t66, (char)97, t59, t60, (char)97, t62, t67, (char)101);
    t69 = ((STD_STANDARD) + 384);
    t72 = (t0 + 1968U);
    t73 = *((char **)t72);
    t72 = (t0 + 6957);
    t74 = *((int *)t72);
    t75 = (t74 - 0);
    t10 = (t75 * 1);
    t11 = (32U * t10);
    t12 = (0 + t11);
    t13 = (t12 + 19U);
    t76 = (t73 + t13);
    t77 = (t0 + 4592);
    t78 = xsi_record_get_element_type(t77, 3);
    t79 = (t78 + 72U);
    t80 = *((char **)t79);
    t81 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t76, t80);
    t82 = xsi_int_to_mem(t81);
    t83 = xsi_string_variable_get_image(t71, t69, t82);
    t86 = ((STD_STANDARD) + 984);
    t84 = xsi_base_array_concat(t84, t85, t86, (char)97, t64, t65, (char)97, t83, t71, (char)101);
    t87 = (t30 + 12U);
    t22 = *((unsigned int *)t87);
    t88 = (5U + t22);
    t89 = (t88 + 18U);
    t90 = (t39 + 12U);
    t91 = *((unsigned int *)t90);
    t92 = (t89 + t91);
    t93 = (t92 + 6U);
    t94 = (t55 + 12U);
    t95 = *((unsigned int *)t94);
    t96 = (t93 + t95);
    t97 = (t96 + 10U);
    t98 = (t71 + 12U);
    t99 = *((unsigned int *)t98);
    t100 = (t97 + t99);
    xsi_report(t84, t100, (unsigned char)2);
    goto LAB22;

LAB24:    t21 = (unsigned char)1;
    goto LAB26;

LAB27:    t22 = 0;

LAB30:    if (t22 < 8U)
        goto LAB31;
    else
        goto LAB29;

LAB31:    t14 = (t3 + t22);
    t15 = (t7 + t22);
    if (*((unsigned char *)t14) != *((unsigned char *)t15))
        goto LAB28;

LAB32:    t22 = (t22 + 1);
    goto LAB30;

LAB34:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 7035);
    xsi_report(t2, 21U, 0);
    goto LAB35;

LAB37:    goto LAB2;

LAB38:    goto LAB37;

LAB40:    goto LAB38;

}


extern void work_a_2598182923_3553469787_init()
{
	static char *pe[] = {(void *)work_a_2598182923_3553469787_p_0};
	xsi_register_didat("work_a_2598182923_3553469787", "isim/alu_tb_isim_beh.exe.sim/work/a_2598182923_3553469787.didat");
	xsi_register_executes(pe);
}
