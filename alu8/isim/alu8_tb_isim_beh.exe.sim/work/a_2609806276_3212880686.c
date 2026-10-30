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
static const char *ng0 = "/home/ise/alu8/alu8.vhd";
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_1331119578910941685_1035706684(char *, char *, char *, char *, char *, char *);
char *ieee_p_1242562249_sub_1331342005737211399_1035706684(char *, char *, char *, char *, char *, char *);
char *ieee_p_1242562249_sub_1331342006639014477_1035706684(char *, char *, char *, char *, char *, char *);
char *ieee_p_1242562249_sub_1701011461141717515_1035706684(char *, char *, char *, char *, char *, char *);
char *ieee_p_1242562249_sub_1701011461141789389_1035706684(char *, char *, char *, char *, char *, char *);
unsigned char ieee_p_1242562249_sub_3307759752501503797_1035706684(char *, char *, char *, int );
char *ieee_p_1242562249_sub_4758460051581457611_1035706684(char *, char *, char *, char *);


static void work_a_2609806276_3212880686_p_0(char *t0)
{
    char t26[16];
    char t29[16];
    char t34[16];
    char *t1;
    char *t2;
    char *t3;
    int t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;
    int t10;
    char *t11;
    char *t12;
    int t13;
    char *t14;
    char *t15;
    int t16;
    char *t17;
    int t19;
    char *t20;
    int t22;
    char *t23;
    int t25;
    char *t27;
    char *t28;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned char t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;

LAB0:    xsi_set_current_line(32, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 2128U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    memcpy(t1, t2, 8U);
    xsi_set_current_line(33, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t1 = (t0 + 2248U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    memcpy(t1, t2, 8U);
    xsi_set_current_line(35, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 5652);
    t4 = xsi_mem_cmp(t1, t2, 3U);
    if (t4 == 1)
        goto LAB3;

LAB12:    t5 = (t0 + 5655);
    t7 = xsi_mem_cmp(t5, t2, 3U);
    if (t7 == 1)
        goto LAB4;

LAB13:    t8 = (t0 + 5658);
    t10 = xsi_mem_cmp(t8, t2, 3U);
    if (t10 == 1)
        goto LAB5;

LAB14:    t11 = (t0 + 5661);
    t13 = xsi_mem_cmp(t11, t2, 3U);
    if (t13 == 1)
        goto LAB6;

LAB15:    t14 = (t0 + 5664);
    t16 = xsi_mem_cmp(t14, t2, 3U);
    if (t16 == 1)
        goto LAB7;

LAB16:    t17 = (t0 + 5667);
    t19 = xsi_mem_cmp(t17, t2, 3U);
    if (t19 == 1)
        goto LAB8;

LAB17:    t20 = (t0 + 5670);
    t22 = xsi_mem_cmp(t20, t2, 3U);
    if (t22 == 1)
        goto LAB9;

LAB18:    t23 = (t0 + 5673);
    t25 = xsi_mem_cmp(t23, t2, 3U);
    if (t25 == 1)
        goto LAB10;

LAB19:
LAB11:    xsi_set_current_line(44, ng0);
    t1 = xsi_get_transient_memory(9U);
    memset(t1, 0, 9U);
    t2 = t1;
    memset(t2, (unsigned char)2, 9U);
    t3 = (t0 + 2368U);
    t5 = *((char **)t3);
    t3 = (t5 + 0);
    memcpy(t3, t1, 9U);

LAB2:    xsi_set_current_line(47, ng0);
    t1 = (t0 + 2368U);
    t2 = *((char **)t1);
    t41 = (8 - 7);
    t42 = (t41 * 1U);
    t43 = (0 + t42);
    t1 = (t2 + t43);
    t3 = (t0 + 3744);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(48, ng0);
    t1 = (t0 + 2368U);
    t2 = *((char **)t1);
    t4 = (8 - 8);
    t41 = (t4 * -1);
    t42 = (1U * t41);
    t43 = (0 + t42);
    t1 = (t2 + t43);
    t44 = *((unsigned char *)t1);
    t3 = (t0 + 3808);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t44;
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(49, ng0);
    t1 = (t0 + 2368U);
    t2 = *((char **)t1);
    t41 = (8 - 7);
    t42 = (t41 * 1U);
    t43 = (0 + t42);
    t1 = (t2 + t43);
    t3 = (t26 + 0U);
    t5 = (t3 + 0U);
    *((int *)t5) = 7;
    t5 = (t3 + 4U);
    *((int *)t5) = 0;
    t5 = (t3 + 8U);
    *((int *)t5) = -1;
    t4 = (0 - 7);
    t45 = (t4 * -1);
    t45 = (t45 + 1);
    t5 = (t3 + 12U);
    *((unsigned int *)t5) = t45;
    t44 = ieee_p_1242562249_sub_3307759752501503797_1035706684(IEEE_P_1242562249, t1, t26, 0);
    if (t44 != 0)
        goto LAB21;

LAB23:    xsi_set_current_line(52, ng0);
    t1 = (t0 + 3872);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB22:    t1 = (t0 + 3664);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(36, ng0);
    t27 = (t0 + 2128U);
    t28 = *((char **)t27);
    t30 = ((IEEE_P_1242562249) + 2976);
    t31 = (t0 + 5552U);
    t27 = xsi_base_array_concat(t27, t29, t30, (char)99, (unsigned char)2, (char)97, t28, t31, (char)101);
    t32 = (t0 + 2248U);
    t33 = *((char **)t32);
    t35 = ((IEEE_P_1242562249) + 2976);
    t36 = (t0 + 5568U);
    t32 = xsi_base_array_concat(t32, t34, t35, (char)99, (unsigned char)2, (char)97, t33, t36, (char)101);
    t37 = ieee_p_1242562249_sub_1701011461141717515_1035706684(IEEE_P_1242562249, t26, t27, t29, t32, t34);
    t38 = (t0 + 2368U);
    t39 = *((char **)t38);
    t38 = (t39 + 0);
    t40 = (t26 + 12U);
    t41 = *((unsigned int *)t40);
    t42 = (1U * t41);
    memcpy(t38, t37, t42);
    goto LAB2;

LAB4:    xsi_set_current_line(37, ng0);
    t1 = (t0 + 2128U);
    t2 = *((char **)t1);
    t3 = ((IEEE_P_1242562249) + 2976);
    t5 = (t0 + 5552U);
    t1 = xsi_base_array_concat(t1, t29, t3, (char)99, (unsigned char)2, (char)97, t2, t5, (char)101);
    t6 = (t0 + 2248U);
    t8 = *((char **)t6);
    t9 = ((IEEE_P_1242562249) + 2976);
    t11 = (t0 + 5568U);
    t6 = xsi_base_array_concat(t6, t34, t9, (char)99, (unsigned char)2, (char)97, t8, t11, (char)101);
    t12 = ieee_p_1242562249_sub_1701011461141789389_1035706684(IEEE_P_1242562249, t26, t1, t29, t6, t34);
    t14 = (t0 + 2368U);
    t15 = *((char **)t14);
    t14 = (t15 + 0);
    t17 = (t26 + 12U);
    t41 = *((unsigned int *)t17);
    t42 = (1U * t41);
    memcpy(t14, t12, t42);
    goto LAB2;

LAB5:    xsi_set_current_line(38, ng0);
    t1 = (t0 + 2128U);
    t2 = *((char **)t1);
    t1 = (t0 + 5552U);
    t3 = (t0 + 2248U);
    t5 = *((char **)t3);
    t3 = (t0 + 5568U);
    t6 = ieee_p_1242562249_sub_1331342005737211399_1035706684(IEEE_P_1242562249, t26, t2, t1, t5, t3);
    t9 = ((IEEE_P_1242562249) + 2976);
    t8 = xsi_base_array_concat(t8, t29, t9, (char)99, (unsigned char)2, (char)97, t6, t26, (char)101);
    t11 = (t0 + 2368U);
    t12 = *((char **)t11);
    t11 = (t12 + 0);
    t14 = (t26 + 12U);
    t41 = *((unsigned int *)t14);
    t42 = (1U * t41);
    t43 = (1U + t42);
    memcpy(t11, t8, t43);
    goto LAB2;

LAB6:    xsi_set_current_line(39, ng0);
    t1 = (t0 + 2128U);
    t2 = *((char **)t1);
    t1 = (t0 + 5552U);
    t3 = (t0 + 2248U);
    t5 = *((char **)t3);
    t3 = (t0 + 5568U);
    t6 = ieee_p_1242562249_sub_1331119578910941685_1035706684(IEEE_P_1242562249, t26, t2, t1, t5, t3);
    t9 = ((IEEE_P_1242562249) + 2976);
    t8 = xsi_base_array_concat(t8, t29, t9, (char)99, (unsigned char)2, (char)97, t6, t26, (char)101);
    t11 = (t0 + 2368U);
    t12 = *((char **)t11);
    t11 = (t12 + 0);
    t14 = (t26 + 12U);
    t41 = *((unsigned int *)t14);
    t42 = (1U * t41);
    t43 = (1U + t42);
    memcpy(t11, t8, t43);
    goto LAB2;

LAB7:    xsi_set_current_line(40, ng0);
    t1 = (t0 + 2128U);
    t2 = *((char **)t1);
    t1 = (t0 + 5552U);
    t3 = (t0 + 2248U);
    t5 = *((char **)t3);
    t3 = (t0 + 5568U);
    t6 = ieee_p_1242562249_sub_1331342006639014477_1035706684(IEEE_P_1242562249, t26, t2, t1, t5, t3);
    t9 = ((IEEE_P_1242562249) + 2976);
    t8 = xsi_base_array_concat(t8, t29, t9, (char)99, (unsigned char)2, (char)97, t6, t26, (char)101);
    t11 = (t0 + 2368U);
    t12 = *((char **)t11);
    t11 = (t12 + 0);
    t14 = (t26 + 12U);
    t41 = *((unsigned int *)t14);
    t42 = (1U * t41);
    t43 = (1U + t42);
    memcpy(t11, t8, t43);
    goto LAB2;

LAB8:    xsi_set_current_line(41, ng0);
    t1 = (t0 + 2128U);
    t2 = *((char **)t1);
    t1 = (t0 + 5552U);
    t3 = ieee_p_1242562249_sub_4758460051581457611_1035706684(IEEE_P_1242562249, t26, t2, t1);
    t6 = ((IEEE_P_1242562249) + 2976);
    t5 = xsi_base_array_concat(t5, t29, t6, (char)99, (unsigned char)2, (char)97, t3, t26, (char)101);
    t8 = (t0 + 2368U);
    t9 = *((char **)t8);
    t8 = (t9 + 0);
    t11 = (t26 + 12U);
    t41 = *((unsigned int *)t11);
    t42 = (1U * t41);
    t43 = (1U + t42);
    memcpy(t8, t5, t43);
    goto LAB2;

LAB9:    xsi_set_current_line(42, ng0);
    t1 = (t0 + 2128U);
    t2 = *((char **)t1);
    t3 = ((IEEE_P_1242562249) + 2976);
    t5 = (t0 + 5552U);
    t1 = xsi_base_array_concat(t1, t26, t3, (char)97, t2, t5, (char)99, (unsigned char)2, (char)101);
    t6 = (t0 + 2368U);
    t8 = *((char **)t6);
    t6 = (t8 + 0);
    t41 = (8U + 1U);
    memcpy(t6, t1, t41);
    goto LAB2;

LAB10:    xsi_set_current_line(43, ng0);
    t1 = (t0 + 2128U);
    t2 = *((char **)t1);
    t4 = (0 - 7);
    t41 = (t4 * -1);
    t42 = (1U * t41);
    t43 = (0 + t42);
    t1 = (t2 + t43);
    t44 = *((unsigned char *)t1);
    t5 = ((IEEE_P_1242562249) + 2976);
    t3 = xsi_base_array_concat(t3, t26, t5, (char)99, t44, (char)99, (unsigned char)2, (char)101);
    t6 = (t0 + 2128U);
    t8 = *((char **)t6);
    t45 = (7 - 7);
    t46 = (t45 * 1U);
    t47 = (0 + t46);
    t6 = (t8 + t47);
    t11 = ((IEEE_P_1242562249) + 2976);
    t12 = (t34 + 0U);
    t14 = (t12 + 0U);
    *((int *)t14) = 7;
    t14 = (t12 + 4U);
    *((int *)t14) = 1;
    t14 = (t12 + 8U);
    *((int *)t14) = -1;
    t7 = (1 - 7);
    t48 = (t7 * -1);
    t48 = (t48 + 1);
    t14 = (t12 + 12U);
    *((unsigned int *)t14) = t48;
    t9 = xsi_base_array_concat(t9, t29, t11, (char)97, t3, t26, (char)97, t6, t34, (char)101);
    t14 = (t0 + 2368U);
    t15 = *((char **)t14);
    t14 = (t15 + 0);
    t48 = (1U + 1U);
    t49 = (t48 + 7U);
    memcpy(t14, t9, t49);
    goto LAB2;

LAB20:;
LAB21:    xsi_set_current_line(50, ng0);
    t5 = (t0 + 3872);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t5);
    goto LAB22;

}


extern void work_a_2609806276_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2609806276_3212880686_p_0};
	xsi_register_didat("work_a_2609806276_3212880686", "isim/alu8_tb_isim_beh.exe.sim/work/a_2609806276_3212880686.didat");
	xsi_register_executes(pe);
}
