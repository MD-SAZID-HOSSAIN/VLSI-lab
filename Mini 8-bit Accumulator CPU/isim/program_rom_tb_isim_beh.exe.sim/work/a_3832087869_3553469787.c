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
static const char *ng0 = "/home/ise/CPU_Set2_22201162/program_rom_tb.vhd";
extern char *IEEE_P_1242562249;
extern char *STD_STANDARD;

char *ieee_p_1242562249_sub_10420449594411817395_1035706684(char *, char *, int , int );
int ieee_p_1242562249_sub_17802405650254020620_1035706684(char *, char *, char *);


static void work_a_3832087869_3553469787_p_0(char *t0)
{
    char t6[16];
    char t24[16];
    char t25[16];
    char t29[16];
    char t31[16];
    char t34[16];
    char t40[16];
    char t45[16];
    char t47[16];
    char t50[16];
    char t56[16];
    char t63[16];
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
    int t15;
    int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned char t20;
    unsigned int t21;
    int t22;
    int t23;
    char *t26;
    char *t28;
    char *t30;
    char *t32;
    char *t33;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t46;
    char *t48;
    char *t49;
    char *t51;
    char *t52;
    int t53;
    int t54;
    char *t55;
    char *t57;
    char *t58;
    int t59;
    int t60;
    char *t61;
    char *t62;
    char *t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    unsigned int t73;
    unsigned int t74;

LAB0:    t1 = (t0 + 2584U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 5332);
    *((int *)t2) = 0;
    t3 = (t0 + 5336);
    *((int *)t3) = 15;
    t4 = 0;
    t5 = 15;

LAB4:    if (t4 <= t5)
        goto LAB5;

LAB7:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 1608U);
    t3 = *((char **)t2);
    t4 = *((int *)t3);
    t20 = (t4 == 0);
    if (t20 != 0)
        goto LAB22;

LAB24:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 5421);
    t7 = ((STD_STANDARD) + 384);
    t8 = (t0 + 1608U);
    t9 = *((char **)t8);
    t4 = *((int *)t9);
    t8 = xsi_int_to_mem(t4);
    t10 = xsi_string_variable_get_image(t6, t7, t8);
    t12 = ((STD_STANDARD) + 984);
    t13 = (t25 + 0U);
    t26 = (t13 + 0U);
    *((int *)t26) = 1;
    t26 = (t13 + 4U);
    *((int *)t26) = 36;
    t26 = (t13 + 8U);
    *((int *)t26) = 1;
    t5 = (36 - 1);
    t17 = (t5 * 1);
    t17 = (t17 + 1);
    t26 = (t13 + 12U);
    *((unsigned int *)t26) = t17;
    t11 = xsi_base_array_concat(t11, t24, t12, (char)97, t2, t25, (char)97, t10, t6, (char)101);
    t26 = (t6 + 12U);
    t17 = *((unsigned int *)t26);
    t18 = (36U + t17);
    xsi_report(t11, t18, (unsigned char)2);

LAB23:    xsi_set_current_line(55, ng0);

LAB27:    *((char **)t1) = &&LAB28;

LAB1:    return;
LAB5:    xsi_set_current_line(34, ng0);
    t7 = (t0 + 5332);
    t8 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t6, *((int *)t7), 4);
    t9 = (t0 + 2968);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t8, 4U);
    xsi_driver_first_trans_fast(t9);
    xsi_set_current_line(35, ng0);
    t14 = (10 * 1000LL);
    t2 = (t0 + 2392);
    xsi_process_wait(t2, t14);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB6:    t2 = (t0 + 5332);
    t4 = *((int *)t2);
    t3 = (t0 + 5336);
    t5 = *((int *)t3);
    if (t4 == t5)
        goto LAB7;

LAB21:    t15 = (t4 + 1);
    t4 = t15;
    t7 = (t0 + 5332);
    *((int *)t7) = t4;
    goto LAB4;

LAB8:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t2 = (t0 + 1488U);
    t7 = *((char **)t2);
    t2 = (t0 + 5332);
    t15 = *((int *)t2);
    t16 = (t15 - 0);
    t17 = (t16 * 1);
    xsi_vhdl_check_range_of_index(0, 15, 1, *((int *)t2));
    t18 = (12U * t17);
    t19 = (0 + t18);
    t8 = (t7 + t19);
    t20 = 1;
    if (12U == 12U)
        goto LAB15;

LAB16:    t20 = 0;

LAB17:    if ((!(t20)) != 0)
        goto LAB12;

LAB14:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 5374);
    t7 = ((STD_STANDARD) + 384);
    t8 = (t0 + 5332);
    t9 = xsi_int_to_mem(*((int *)t8));
    t10 = xsi_string_variable_get_image(t6, t7, t9);
    t12 = ((STD_STANDARD) + 984);
    t13 = (t25 + 0U);
    t26 = (t13 + 0U);
    *((int *)t26) = 1;
    t26 = (t13 + 4U);
    *((int *)t26) = 8;
    t26 = (t13 + 8U);
    *((int *)t26) = 1;
    t15 = (8 - 1);
    t17 = (t15 * 1);
    t17 = (t17 + 1);
    t26 = (t13 + 12U);
    *((unsigned int *)t26) = t17;
    t11 = xsi_base_array_concat(t11, t24, t12, (char)97, t2, t25, (char)97, t10, t6, (char)101);
    t26 = (t0 + 5382);
    t30 = ((STD_STANDARD) + 984);
    t32 = (t31 + 0U);
    t33 = (t32 + 0U);
    *((int *)t33) = 1;
    t33 = (t32 + 4U);
    *((int *)t33) = 10;
    t33 = (t32 + 8U);
    *((int *)t33) = 1;
    t16 = (10 - 1);
    t17 = (t16 * 1);
    t17 = (t17 + 1);
    t33 = (t32 + 12U);
    *((unsigned int *)t33) = t17;
    t28 = xsi_base_array_concat(t28, t29, t30, (char)97, t11, t24, (char)97, t26, t31, (char)101);
    t33 = ((STD_STANDARD) + 384);
    t35 = (t0 + 1192U);
    t36 = *((char **)t35);
    t35 = (t0 + 5064U);
    t22 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t36, t35);
    t37 = xsi_int_to_mem(t22);
    t38 = xsi_string_variable_get_image(t34, t33, t37);
    t41 = ((STD_STANDARD) + 984);
    t39 = xsi_base_array_concat(t39, t40, t41, (char)97, t28, t29, (char)97, t38, t34, (char)101);
    t42 = (t6 + 12U);
    t17 = *((unsigned int *)t42);
    t18 = (8U + t17);
    t19 = (t18 + 10U);
    t43 = (t34 + 12U);
    t21 = *((unsigned int *)t43);
    t66 = (t19 + t21);
    xsi_report(t39, t66, 0);

LAB13:    goto LAB6;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    xsi_set_current_line(37, ng0);
    t11 = (t0 + 1608U);
    t12 = *((char **)t11);
    t22 = *((int *)t12);
    t23 = (t22 + 1);
    t11 = (t0 + 1608U);
    t13 = *((char **)t11);
    t11 = (t13 + 0);
    *((int *)t11) = t23;
    xsi_set_current_line(38, ng0);
    t2 = (t0 + 5340);
    t7 = ((STD_STANDARD) + 384);
    t8 = (t0 + 5332);
    t9 = xsi_int_to_mem(*((int *)t8));
    t10 = xsi_string_variable_get_image(t6, t7, t9);
    t12 = ((STD_STANDARD) + 984);
    t13 = (t25 + 0U);
    t26 = (t13 + 0U);
    *((int *)t26) = 1;
    t26 = (t13 + 4U);
    *((int *)t26) = 8;
    t26 = (t13 + 8U);
    *((int *)t26) = 1;
    t15 = (8 - 1);
    t17 = (t15 * 1);
    t17 = (t17 + 1);
    t26 = (t13 + 12U);
    *((unsigned int *)t26) = t17;
    t11 = xsi_base_array_concat(t11, t24, t12, (char)97, t2, t25, (char)97, t10, t6, (char)101);
    t26 = (t0 + 5348);
    t30 = ((STD_STANDARD) + 984);
    t32 = (t31 + 0U);
    t33 = (t32 + 0U);
    *((int *)t33) = 1;
    t33 = (t32 + 4U);
    *((int *)t33) = 16;
    t33 = (t32 + 8U);
    *((int *)t33) = 1;
    t16 = (16 - 1);
    t17 = (t16 * 1);
    t17 = (t17 + 1);
    t33 = (t32 + 12U);
    *((unsigned int *)t33) = t17;
    t28 = xsi_base_array_concat(t28, t29, t30, (char)97, t11, t24, (char)97, t26, t31, (char)101);
    t33 = ((STD_STANDARD) + 384);
    t35 = (t0 + 1192U);
    t36 = *((char **)t35);
    t35 = (t0 + 5064U);
    t22 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t36, t35);
    t37 = xsi_int_to_mem(t22);
    t38 = xsi_string_variable_get_image(t34, t33, t37);
    t41 = ((STD_STANDARD) + 984);
    t39 = xsi_base_array_concat(t39, t40, t41, (char)97, t28, t29, (char)97, t38, t34, (char)101);
    t42 = (t0 + 5364);
    t46 = ((STD_STANDARD) + 984);
    t48 = (t47 + 0U);
    t49 = (t48 + 0U);
    *((int *)t49) = 1;
    t49 = (t48 + 4U);
    *((int *)t49) = 10;
    t49 = (t48 + 8U);
    *((int *)t49) = 1;
    t23 = (10 - 1);
    t17 = (t23 * 1);
    t17 = (t17 + 1);
    t49 = (t48 + 12U);
    *((unsigned int *)t49) = t17;
    t44 = xsi_base_array_concat(t44, t45, t46, (char)97, t39, t40, (char)97, t42, t47, (char)101);
    t49 = ((STD_STANDARD) + 384);
    t51 = (t0 + 1488U);
    t52 = *((char **)t51);
    t51 = (t0 + 5332);
    t53 = *((int *)t51);
    t54 = (t53 - 0);
    t17 = (t54 * 1);
    xsi_vhdl_check_range_of_index(0, 15, 1, *((int *)t51));
    t18 = (12U * t17);
    t19 = (0 + t18);
    t55 = (t52 + t19);
    t57 = (t56 + 0U);
    t58 = (t57 + 0U);
    *((int *)t58) = 11;
    t58 = (t57 + 4U);
    *((int *)t58) = 0;
    t58 = (t57 + 8U);
    *((int *)t58) = -1;
    t59 = (0 - 11);
    t21 = (t59 * -1);
    t21 = (t21 + 1);
    t58 = (t57 + 12U);
    *((unsigned int *)t58) = t21;
    t60 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t55, t56);
    t58 = xsi_int_to_mem(t60);
    t61 = xsi_string_variable_get_image(t50, t49, t58);
    t64 = ((STD_STANDARD) + 984);
    t62 = xsi_base_array_concat(t62, t63, t64, (char)97, t44, t45, (char)97, t61, t50, (char)101);
    t65 = (t6 + 12U);
    t21 = *((unsigned int *)t65);
    t66 = (8U + t21);
    t67 = (t66 + 16U);
    t68 = (t34 + 12U);
    t69 = *((unsigned int *)t68);
    t70 = (t67 + t69);
    t71 = (t70 + 10U);
    t72 = (t50 + 12U);
    t73 = *((unsigned int *)t72);
    t74 = (t71 + t73);
    xsi_report(t62, t74, (unsigned char)2);
    goto LAB13;

LAB15:    t21 = 0;

LAB18:    if (t21 < 12U)
        goto LAB19;
    else
        goto LAB17;

LAB19:    t9 = (t3 + t21);
    t10 = (t8 + t21);
    if (*((unsigned char *)t9) != *((unsigned char *)t10))
        goto LAB16;

LAB20:    t21 = (t21 + 1);
    goto LAB18;

LAB22:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 5392);
    xsi_report(t2, 29U, 0);
    goto LAB23;

LAB25:    goto LAB2;

LAB26:    goto LAB25;

LAB28:    goto LAB26;

}


extern void work_a_3832087869_3553469787_init()
{
	static char *pe[] = {(void *)work_a_3832087869_3553469787_p_0};
	xsi_register_didat("work_a_3832087869_3553469787", "isim/program_rom_tb_isim_beh.exe.sim/work/a_3832087869_3553469787.didat");
	xsi_register_executes(pe);
}
