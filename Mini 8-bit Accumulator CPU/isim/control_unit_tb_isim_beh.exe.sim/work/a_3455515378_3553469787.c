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
static const char *ng0 = "/home/ise/CPU_Set2_22201162/control_unit_tb.vhd";
extern char *IEEE_P_1242562249;
extern char *STD_STANDARD;
extern char *IEEE_P_2592010699;

char *ieee_p_1242562249_sub_10420449594411817395_1035706684(char *, char *, int , int );
int ieee_p_1242562249_sub_17802405650254020620_1035706684(char *, char *, char *);


static void work_a_3455515378_3553469787_p_0(char *t0)
{
    char t6[16];
    char t50[16];
    char t51[16];
    char t52[16];
    char t53[16];
    char t54[16];
    char t58[16];
    char t63[16];
    char t65[16];
    char t68[16];
    char t73[16];
    char t78[16];
    char t80[16];
    char t83[16];
    char t88[16];
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    int64 t14;
    unsigned char t15;
    unsigned char t16;
    int t17;
    int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned char t22;
    unsigned int t23;
    unsigned char t24;
    int t25;
    int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    unsigned char t31;
    unsigned char t32;
    char *t33;
    char *t34;
    unsigned char t35;
    char *t36;
    int t37;
    int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    unsigned char t43;
    unsigned char t44;
    char *t45;
    char *t46;
    int t47;
    int t48;
    char *t49;
    char *t55;
    char *t56;
    char *t57;
    char *t59;
    char *t60;
    char *t62;
    char *t64;
    char *t66;
    char *t67;
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    char *t74;
    char *t75;
    char *t77;
    char *t79;
    char *t81;
    char *t82;
    char *t84;
    char *t85;
    char *t86;
    char *t87;
    char *t89;
    char *t90;
    char *t91;
    char *t92;
    char *t93;
    unsigned int t94;

LAB0:    t1 = (t0 + 3024U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 5856);
    *((int *)t2) = 0;
    t3 = (t0 + 5860);
    *((int *)t3) = 15;
    t4 = 0;
    t5 = 15;

LAB4:    if (t4 <= t5)
        goto LAB5;

LAB7:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 2048U);
    t3 = *((char **)t2);
    t4 = *((int *)t3);
    t15 = (t4 == 0);
    if (t15 != 0)
        goto LAB28;

LAB30:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 5968);
    t7 = ((STD_STANDARD) + 384);
    t8 = (t0 + 2048U);
    t9 = *((char **)t8);
    t4 = *((int *)t9);
    t8 = xsi_int_to_mem(t4);
    t10 = xsi_string_variable_get_image(t6, t7, t8);
    t12 = ((STD_STANDARD) + 984);
    t13 = (t51 + 0U);
    t30 = (t13 + 0U);
    *((int *)t30) = 1;
    t30 = (t13 + 4U);
    *((int *)t30) = 37;
    t30 = (t13 + 8U);
    *((int *)t30) = 1;
    t5 = (37 - 1);
    t19 = (t5 * 1);
    t19 = (t19 + 1);
    t30 = (t13 + 12U);
    *((unsigned int *)t30) = t19;
    t11 = xsi_base_array_concat(t11, t50, t12, (char)97, t2, t51, (char)97, t10, t6, (char)101);
    t30 = (t6 + 12U);
    t19 = *((unsigned int *)t30);
    t20 = (37U + t19);
    xsi_report(t11, t20, (unsigned char)2);

LAB29:    xsi_set_current_line(62, ng0);

LAB33:    *((char **)t1) = &&LAB34;

LAB1:    return;
LAB5:    xsi_set_current_line(38, ng0);
    t7 = (t0 + 5856);
    t8 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t6, *((int *)t7), 4);
    t9 = (t0 + 3408);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t8, 4U);
    xsi_driver_first_trans_fast(t9);
    xsi_set_current_line(39, ng0);
    t14 = (10 * 1000LL);
    t2 = (t0 + 2832);
    xsi_process_wait(t2, t14);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB6:    t2 = (t0 + 5856);
    t4 = *((int *)t2);
    t3 = (t0 + 5860);
    t5 = *((int *)t3);
    if (t4 == t5)
        goto LAB7;

LAB27:    t17 = (t4 + 1);
    t4 = t17;
    t7 = (t0 + 5856);
    *((int *)t7) = t4;
    goto LAB4;

LAB8:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t2 = (t0 + 1808U);
    t7 = *((char **)t2);
    t2 = (t0 + 5856);
    t17 = *((int *)t2);
    t18 = (t17 - 0);
    t19 = (t18 * 1);
    xsi_vhdl_check_range_of_index(0, 15, 1, *((int *)t2));
    t20 = (3U * t19);
    t21 = (0 + t20);
    t8 = (t7 + t21);
    t22 = 1;
    if (3U == 3U)
        goto LAB21;

LAB22:    t22 = 0;

LAB23:    if ((!(t22)) == 1)
        goto LAB18;

LAB19:    t11 = (t0 + 1352U);
    t12 = *((char **)t11);
    t24 = *((unsigned char *)t12);
    t11 = (t0 + 1928U);
    t13 = *((char **)t11);
    t11 = (t0 + 5856);
    t25 = *((int *)t11);
    t26 = (t25 - 0);
    t27 = (t26 * 1);
    xsi_vhdl_check_range_of_index(0, 15, 1, *((int *)t11));
    t28 = (1U * t27);
    t29 = (0 + t28);
    t30 = (t13 + t29);
    t31 = *((unsigned char *)t30);
    t32 = (t24 != t31);
    t16 = t32;

LAB20:    if (t16 == 1)
        goto LAB15;

LAB16:    t33 = (t0 + 1512U);
    t34 = *((char **)t33);
    t35 = *((unsigned char *)t34);
    t33 = (t0 + 1928U);
    t36 = *((char **)t33);
    t33 = (t0 + 5856);
    t37 = *((int *)t33);
    t38 = (t37 - 0);
    t39 = (t38 * 1);
    xsi_vhdl_check_range_of_index(0, 15, 1, *((int *)t33));
    t40 = (1U * t39);
    t41 = (0 + t40);
    t42 = (t36 + t41);
    t43 = *((unsigned char *)t42);
    t44 = (t35 != t43);
    t15 = t44;

LAB17:    if (t15 != 0)
        goto LAB12;

LAB14:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 5904);
    t7 = ((STD_STANDARD) + 384);
    t8 = (t0 + 5856);
    t9 = xsi_int_to_mem(*((int *)t8));
    t10 = xsi_string_variable_get_image(t6, t7, t9);
    t12 = ((STD_STANDARD) + 984);
    t13 = (t51 + 0U);
    t30 = (t13 + 0U);
    *((int *)t30) = 1;
    t30 = (t13 + 4U);
    *((int *)t30) = 7;
    t30 = (t13 + 8U);
    *((int *)t30) = 1;
    t17 = (7 - 1);
    t19 = (t17 * 1);
    t19 = (t19 + 1);
    t30 = (t13 + 12U);
    *((unsigned int *)t30) = t19;
    t11 = xsi_base_array_concat(t11, t50, t12, (char)97, t2, t51, (char)97, t10, t6, (char)101);
    t30 = (t0 + 5911);
    t36 = ((STD_STANDARD) + 984);
    t42 = (t53 + 0U);
    t45 = (t42 + 0U);
    *((int *)t45) = 1;
    t45 = (t42 + 4U);
    *((int *)t45) = 13;
    t45 = (t42 + 8U);
    *((int *)t45) = 1;
    t18 = (13 - 1);
    t19 = (t18 * 1);
    t19 = (t19 + 1);
    t45 = (t42 + 12U);
    *((unsigned int *)t45) = t19;
    t34 = xsi_base_array_concat(t34, t52, t36, (char)97, t11, t50, (char)97, t30, t53, (char)101);
    t45 = ((STD_STANDARD) + 384);
    t46 = (t0 + 1192U);
    t49 = *((char **)t46);
    t46 = (t0 + 5704U);
    t25 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t49, t46);
    t55 = xsi_int_to_mem(t25);
    t56 = xsi_string_variable_get_image(t54, t45, t55);
    t59 = ((STD_STANDARD) + 984);
    t57 = xsi_base_array_concat(t57, t58, t59, (char)97, t34, t52, (char)97, t56, t54, (char)101);
    t60 = (t0 + 5924);
    t64 = ((STD_STANDARD) + 984);
    t66 = (t65 + 0U);
    t67 = (t66 + 0U);
    *((int *)t67) = 1;
    t67 = (t66 + 4U);
    *((int *)t67) = 8;
    t67 = (t66 + 8U);
    *((int *)t67) = 1;
    t26 = (8 - 1);
    t19 = (t26 * 1);
    t19 = (t19 + 1);
    t67 = (t66 + 12U);
    *((unsigned int *)t67) = t19;
    t62 = xsi_base_array_concat(t62, t63, t64, (char)97, t57, t58, (char)97, t60, t65, (char)101);
    t67 = ((IEEE_P_2592010699) + 3216);
    t69 = (t0 + 1352U);
    t70 = *((char **)t69);
    t15 = *((unsigned char *)t70);
    t69 = xsi_char_to_mem(t15);
    t71 = xsi_string_variable_get_image(t68, t67, t69);
    t74 = ((STD_STANDARD) + 984);
    t72 = xsi_base_array_concat(t72, t73, t74, (char)97, t62, t63, (char)97, t71, t68, (char)101);
    t75 = (t0 + 5932);
    t79 = ((STD_STANDARD) + 984);
    t81 = (t80 + 0U);
    t82 = (t81 + 0U);
    *((int *)t82) = 1;
    t82 = (t81 + 4U);
    *((int *)t82) = 6;
    t82 = (t81 + 8U);
    *((int *)t82) = 1;
    t37 = (6 - 1);
    t19 = (t37 * 1);
    t19 = (t19 + 1);
    t82 = (t81 + 12U);
    *((unsigned int *)t82) = t19;
    t77 = xsi_base_array_concat(t77, t78, t79, (char)97, t72, t73, (char)97, t75, t80, (char)101);
    t82 = ((IEEE_P_2592010699) + 3216);
    t84 = (t0 + 1512U);
    t85 = *((char **)t84);
    t16 = *((unsigned char *)t85);
    t84 = xsi_char_to_mem(t16);
    t86 = xsi_string_variable_get_image(t83, t82, t84);
    t89 = ((STD_STANDARD) + 984);
    t87 = xsi_base_array_concat(t87, t88, t89, (char)97, t77, t78, (char)97, t86, t83, (char)101);
    t90 = (t6 + 12U);
    t19 = *((unsigned int *)t90);
    t20 = (7U + t19);
    t21 = (t20 + 13U);
    t91 = (t54 + 12U);
    t23 = *((unsigned int *)t91);
    t27 = (t21 + t23);
    t28 = (t27 + 8U);
    t92 = (t68 + 12U);
    t29 = *((unsigned int *)t92);
    t39 = (t28 + t29);
    t40 = (t39 + 6U);
    t93 = (t83 + 12U);
    t41 = *((unsigned int *)t93);
    t94 = (t40 + t41);
    xsi_report(t87, t94, 0);

LAB13:    goto LAB6;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    xsi_set_current_line(42, ng0);
    t45 = (t0 + 2048U);
    t46 = *((char **)t45);
    t47 = *((int *)t46);
    t48 = (t47 + 1);
    t45 = (t0 + 2048U);
    t49 = *((char **)t45);
    t45 = (t49 + 0);
    *((int *)t45) = t48;
    xsi_set_current_line(43, ng0);
    t2 = (t0 + 5864);
    t7 = ((STD_STANDARD) + 384);
    t8 = (t0 + 5856);
    t9 = xsi_int_to_mem(*((int *)t8));
    t10 = xsi_string_variable_get_image(t6, t7, t9);
    t12 = ((STD_STANDARD) + 984);
    t13 = (t51 + 0U);
    t30 = (t13 + 0U);
    *((int *)t30) = 1;
    t30 = (t13 + 4U);
    *((int *)t30) = 7;
    t30 = (t13 + 8U);
    *((int *)t30) = 1;
    t17 = (7 - 1);
    t19 = (t17 * 1);
    t19 = (t19 + 1);
    t30 = (t13 + 12U);
    *((unsigned int *)t30) = t19;
    t11 = xsi_base_array_concat(t11, t50, t12, (char)97, t2, t51, (char)97, t10, t6, (char)101);
    t30 = (t0 + 5871);
    t36 = ((STD_STANDARD) + 984);
    t42 = (t53 + 0U);
    t45 = (t42 + 0U);
    *((int *)t45) = 1;
    t45 = (t42 + 4U);
    *((int *)t45) = 19;
    t45 = (t42 + 8U);
    *((int *)t45) = 1;
    t18 = (19 - 1);
    t19 = (t18 * 1);
    t19 = (t19 + 1);
    t45 = (t42 + 12U);
    *((unsigned int *)t45) = t19;
    t34 = xsi_base_array_concat(t34, t52, t36, (char)97, t11, t50, (char)97, t30, t53, (char)101);
    t45 = ((STD_STANDARD) + 384);
    t46 = (t0 + 1192U);
    t49 = *((char **)t46);
    t46 = (t0 + 5704U);
    t25 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t49, t46);
    t55 = xsi_int_to_mem(t25);
    t56 = xsi_string_variable_get_image(t54, t45, t55);
    t59 = ((STD_STANDARD) + 984);
    t57 = xsi_base_array_concat(t57, t58, t59, (char)97, t34, t52, (char)97, t56, t54, (char)101);
    t60 = (t0 + 5890);
    t64 = ((STD_STANDARD) + 984);
    t66 = (t65 + 0U);
    t67 = (t66 + 0U);
    *((int *)t67) = 1;
    t67 = (t66 + 4U);
    *((int *)t67) = 8;
    t67 = (t66 + 8U);
    *((int *)t67) = 1;
    t26 = (8 - 1);
    t19 = (t26 * 1);
    t19 = (t19 + 1);
    t67 = (t66 + 12U);
    *((unsigned int *)t67) = t19;
    t62 = xsi_base_array_concat(t62, t63, t64, (char)97, t57, t58, (char)97, t60, t65, (char)101);
    t67 = ((IEEE_P_2592010699) + 3216);
    t69 = (t0 + 1352U);
    t70 = *((char **)t69);
    t15 = *((unsigned char *)t70);
    t69 = xsi_char_to_mem(t15);
    t71 = xsi_string_variable_get_image(t68, t67, t69);
    t74 = ((STD_STANDARD) + 984);
    t72 = xsi_base_array_concat(t72, t73, t74, (char)97, t62, t63, (char)97, t71, t68, (char)101);
    t75 = (t0 + 5898);
    t79 = ((STD_STANDARD) + 984);
    t81 = (t80 + 0U);
    t82 = (t81 + 0U);
    *((int *)t82) = 1;
    t82 = (t81 + 4U);
    *((int *)t82) = 6;
    t82 = (t81 + 8U);
    *((int *)t82) = 1;
    t37 = (6 - 1);
    t19 = (t37 * 1);
    t19 = (t19 + 1);
    t82 = (t81 + 12U);
    *((unsigned int *)t82) = t19;
    t77 = xsi_base_array_concat(t77, t78, t79, (char)97, t72, t73, (char)97, t75, t80, (char)101);
    t82 = ((IEEE_P_2592010699) + 3216);
    t84 = (t0 + 1512U);
    t85 = *((char **)t84);
    t16 = *((unsigned char *)t85);
    t84 = xsi_char_to_mem(t16);
    t86 = xsi_string_variable_get_image(t83, t82, t84);
    t89 = ((STD_STANDARD) + 984);
    t87 = xsi_base_array_concat(t87, t88, t89, (char)97, t77, t78, (char)97, t86, t83, (char)101);
    t90 = (t6 + 12U);
    t19 = *((unsigned int *)t90);
    t20 = (7U + t19);
    t21 = (t20 + 19U);
    t91 = (t54 + 12U);
    t23 = *((unsigned int *)t91);
    t27 = (t21 + t23);
    t28 = (t27 + 8U);
    t92 = (t68 + 12U);
    t29 = *((unsigned int *)t92);
    t39 = (t28 + t29);
    t40 = (t39 + 6U);
    t93 = (t83 + 12U);
    t41 = *((unsigned int *)t93);
    t94 = (t40 + t41);
    xsi_report(t87, t94, (unsigned char)2);
    goto LAB13;

LAB15:    t15 = (unsigned char)1;
    goto LAB17;

LAB18:    t16 = (unsigned char)1;
    goto LAB20;

LAB21:    t23 = 0;

LAB24:    if (t23 < 3U)
        goto LAB25;
    else
        goto LAB23;

LAB25:    t9 = (t3 + t23);
    t10 = (t8 + t23);
    if (*((unsigned char *)t9) != *((unsigned char *)t10))
        goto LAB22;

LAB26:    t23 = (t23 + 1);
    goto LAB24;

LAB28:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 5938);
    xsi_report(t2, 30U, 0);
    goto LAB29;

LAB31:    goto LAB2;

LAB32:    goto LAB31;

LAB34:    goto LAB32;

}


extern void work_a_3455515378_3553469787_init()
{
	static char *pe[] = {(void *)work_a_3455515378_3553469787_p_0};
	xsi_register_didat("work_a_3455515378_3553469787", "isim/control_unit_tb_isim_beh.exe.sim/work/a_3455515378_3553469787.didat");
	xsi_register_executes(pe);
}
