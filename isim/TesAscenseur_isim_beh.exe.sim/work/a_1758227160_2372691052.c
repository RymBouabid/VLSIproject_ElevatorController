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
static const char *ng0 = "C:/Users/USER/Desktop/4 IIA4_INSAT/VLSI/tp/PROJET Ascenceur/version finale/ProjetAscenseurVF/TestAscenseur.vhd";



static void work_a_1758227160_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 4072U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 4704);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 3088U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3880);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 4704);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 3088U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3880);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_1758227160_2372691052_p_1(char *t0)
{
    char *t1;
    char *t2;
    int64 t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    int64 t10;

LAB0:    t1 = (t0 + 4320U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(86, ng0);
    t3 = (20 * 1000000000LL);
    t2 = (t0 + 4128);
    xsi_process_wait(t2, t3);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 9000);
    t5 = (t0 + 4768);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(90, ng0);
    t3 = (20 * 1000000000LL);
    t2 = (t0 + 4128);
    xsi_process_wait(t2, t3);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 9004);
    t5 = (t0 + 4832);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(93, ng0);
    t3 = (50 * 1000000000LL);
    t2 = (t0 + 4128);
    xsi_process_wait(t2, t3);

LAB14:    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 9008);
    t5 = (t0 + 4832);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(95, ng0);
    t3 = (1000 * 1000LL);
    t2 = (t0 + 4128);
    xsi_process_wait(t2, t3);

LAB18:    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

LAB16:    xsi_set_current_line(96, ng0);
    t2 = (t0 + 9012);
    t5 = (t0 + 4832);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(99, ng0);
    t3 = (50 * 1000000000LL);
    t2 = (t0 + 4128);
    xsi_process_wait(t2, t3);

LAB22:    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB17:    goto LAB16;

LAB19:    goto LAB17;

LAB20:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 9016);
    t5 = (t0 + 4832);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(101, ng0);
    t3 = (1000 * 1000LL);
    t2 = (t0 + 4128);
    xsi_process_wait(t2, t3);

LAB26:    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB21:    goto LAB20;

LAB23:    goto LAB21;

LAB24:    xsi_set_current_line(102, ng0);
    t2 = (t0 + 9020);
    t5 = (t0 + 4832);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(105, ng0);
    t3 = (50 * 1000000000LL);
    t2 = (t0 + 4128);
    xsi_process_wait(t2, t3);

LAB30:    *((char **)t1) = &&LAB31;
    goto LAB1;

LAB25:    goto LAB24;

LAB27:    goto LAB25;

LAB28:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 9024);
    t5 = (t0 + 4832);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(109, ng0);
    t3 = (50 * 1000000000LL);
    t2 = (t0 + 4128);
    xsi_process_wait(t2, t3);

LAB34:    *((char **)t1) = &&LAB35;
    goto LAB1;

LAB29:    goto LAB28;

LAB31:    goto LAB29;

LAB32:    xsi_set_current_line(110, ng0);
    t2 = (t0 + 4768);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_delta(t2, 0U, 1, 0LL);
    xsi_set_current_line(114, ng0);
    t3 = (100 * 1000000000LL);
    t2 = (t0 + 4128);
    xsi_process_wait(t2, t3);

LAB38:    *((char **)t1) = &&LAB39;
    goto LAB1;

LAB33:    goto LAB32;

LAB35:    goto LAB33;

LAB36:    xsi_set_current_line(115, ng0);
    t2 = (t0 + 4768);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_delta(t2, 1U, 1, 0LL);
    xsi_set_current_line(116, ng0);
    t2 = (t0 + 4768);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_delta(t2, 2U, 1, 0LL);
    xsi_set_current_line(119, ng0);
    t3 = (10 * 1000000000LL);
    t2 = (t0 + 4128);
    xsi_process_wait(t2, t3);

LAB42:    *((char **)t1) = &&LAB43;
    goto LAB1;

LAB37:    goto LAB36;

LAB39:    goto LAB37;

LAB40:    xsi_set_current_line(120, ng0);
    t2 = (t0 + 9028);
    t5 = (t0 + 4832);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(122, ng0);
    t3 = (90 * 1000000000LL);
    t2 = (t0 + 4128);
    xsi_process_wait(t2, t3);

LAB46:    *((char **)t1) = &&LAB47;
    goto LAB1;

LAB41:    goto LAB40;

LAB43:    goto LAB41;

LAB44:    xsi_set_current_line(123, ng0);
    t2 = (t0 + 9032);
    t5 = (t0 + 4832);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(126, ng0);
    t3 = (2 * 1000000000LL);
    t2 = (t0 + 4128);
    xsi_process_wait(t2, t3);

LAB50:    *((char **)t1) = &&LAB51;
    goto LAB1;

LAB45:    goto LAB44;

LAB47:    goto LAB45;

LAB48:    xsi_set_current_line(127, ng0);
    t2 = (t0 + 4896);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(130, ng0);
    t3 = (2 * 1000000000LL);
    t2 = (t0 + 4128);
    xsi_process_wait(t2, t3);

LAB54:    *((char **)t1) = &&LAB55;
    goto LAB1;

LAB49:    goto LAB48;

LAB51:    goto LAB49;

LAB52:    xsi_set_current_line(131, ng0);
    t2 = (t0 + 4896);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(134, ng0);
    t3 = (5 * 1000000000LL);
    t2 = (t0 + 4128);
    xsi_process_wait(t2, t3);

LAB58:    *((char **)t1) = &&LAB59;
    goto LAB1;

LAB53:    goto LAB52;

LAB55:    goto LAB53;

LAB56:    xsi_set_current_line(135, ng0);
    t2 = (t0 + 4960);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_delta(t2, 3U, 1, 0LL);
    xsi_set_current_line(138, ng0);
    t3 = (10 * 1000000000LL);
    t2 = (t0 + 4128);
    xsi_process_wait(t2, t3);

LAB62:    *((char **)t1) = &&LAB63;
    goto LAB1;

LAB57:    goto LAB56;

LAB59:    goto LAB57;

LAB60:    xsi_set_current_line(139, ng0);
    t2 = (t0 + 4768);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_delta(t2, 1U, 1, 0LL);
    xsi_set_current_line(142, ng0);
    t3 = (35 * 1000000000LL);
    t2 = (t0 + 4128);
    xsi_process_wait(t2, t3);

LAB66:    *((char **)t1) = &&LAB67;
    goto LAB1;

LAB61:    goto LAB60;

LAB63:    goto LAB61;

LAB64:    xsi_set_current_line(143, ng0);
    t2 = (t0 + 9036);
    t5 = (t0 + 4832);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(146, ng0);
    t3 = (100 * 1000000000LL);
    t2 = (t0 + 4128);
    xsi_process_wait(t2, t3);

LAB70:    *((char **)t1) = &&LAB71;
    goto LAB1;

LAB65:    goto LAB64;

LAB67:    goto LAB65;

LAB68:    xsi_set_current_line(147, ng0);
    t2 = (t0 + 9040);
    t5 = (t0 + 4832);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(150, ng0);
    t3 = (50 * 1000000000LL);
    t2 = (t0 + 4128);
    xsi_process_wait(t2, t3);

LAB74:    *((char **)t1) = &&LAB75;
    goto LAB1;

LAB69:    goto LAB68;

LAB71:    goto LAB69;

LAB72:    xsi_set_current_line(151, ng0);
    t2 = (t0 + 4768);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_delta(t2, 2U, 1, 0LL);
    xsi_set_current_line(154, ng0);
    t3 = (3000 * 1000LL);
    t2 = (t0 + 4128);
    xsi_process_wait(t2, t3);

LAB78:    *((char **)t1) = &&LAB79;
    goto LAB1;

LAB73:    goto LAB72;

LAB75:    goto LAB73;

LAB76:    xsi_set_current_line(155, ng0);
    t2 = (t0 + 9044);
    t5 = (t0 + 4832);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(159, ng0);
    t3 = (100 * 1000000000LL);
    t2 = (t0 + 4128);
    xsi_process_wait(t2, t3);

LAB82:    *((char **)t1) = &&LAB83;
    goto LAB1;

LAB77:    goto LAB76;

LAB79:    goto LAB77;

LAB80:    xsi_set_current_line(160, ng0);
    t2 = (t0 + 9048);
    t5 = (t0 + 4832);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(162, ng0);
    t3 = (2000 * 1000LL);
    t2 = (t0 + 4128);
    xsi_process_wait(t2, t3);

LAB86:    *((char **)t1) = &&LAB87;
    goto LAB1;

LAB81:    goto LAB80;

LAB83:    goto LAB81;

LAB84:    xsi_set_current_line(163, ng0);
    t2 = (t0 + 4960);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_delta(t2, 3U, 1, 0LL);
    xsi_set_current_line(166, ng0);
    t3 = (2 * 1000000000LL);
    t2 = (t0 + 4128);
    xsi_process_wait(t2, t3);

LAB90:    *((char **)t1) = &&LAB91;
    goto LAB1;

LAB85:    goto LAB84;

LAB87:    goto LAB85;

LAB88:    xsi_set_current_line(167, ng0);
    t2 = (t0 + 4896);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(169, ng0);
    t3 = (5 * 1000000000LL);
    t2 = (t0 + 4128);
    xsi_process_wait(t2, t3);

LAB94:    *((char **)t1) = &&LAB95;
    goto LAB1;

LAB89:    goto LAB88;

LAB91:    goto LAB89;

LAB92:    xsi_set_current_line(170, ng0);
    t2 = (t0 + 4896);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(173, ng0);
    t3 = (300 * 1000000000LL);
    t2 = (t0 + 4128);
    xsi_process_wait(t2, t3);

LAB98:    *((char **)t1) = &&LAB99;
    goto LAB1;

LAB93:    goto LAB92;

LAB95:    goto LAB93;

LAB96:    xsi_set_current_line(174, ng0);
    t2 = (t0 + 4768);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_delta(t2, 1U, 1, 0LL);
    xsi_set_current_line(175, ng0);
    t2 = (t0 + 4768);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_delta(t2, 2U, 1, 0LL);
    xsi_set_current_line(178, ng0);
    t3 = (1000 * 1000LL);
    t2 = (t0 + 4128);
    xsi_process_wait(t2, t3);

LAB102:    *((char **)t1) = &&LAB103;
    goto LAB1;

LAB97:    goto LAB96;

LAB99:    goto LAB97;

LAB100:    xsi_set_current_line(179, ng0);
    t2 = (t0 + 9052);
    t5 = (t0 + 4832);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(181, ng0);
    t3 = (100 * 1000000000LL);
    t2 = (t0 + 4128);
    xsi_process_wait(t2, t3);

LAB106:    *((char **)t1) = &&LAB107;
    goto LAB1;

LAB101:    goto LAB100;

LAB103:    goto LAB101;

LAB104:    xsi_set_current_line(182, ng0);
    t2 = (t0 + 9056);
    t5 = (t0 + 4832);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(185, ng0);
    t3 = (2 * 1000000000LL);
    t2 = (t0 + 4128);
    xsi_process_wait(t2, t3);

LAB110:    *((char **)t1) = &&LAB111;
    goto LAB1;

LAB105:    goto LAB104;

LAB107:    goto LAB105;

LAB108:    xsi_set_current_line(186, ng0);
    t2 = (t0 + 4896);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(189, ng0);
    t3 = (2 * 1000000000LL);
    t2 = (t0 + 4128);
    xsi_process_wait(t2, t3);

LAB114:    *((char **)t1) = &&LAB115;
    goto LAB1;

LAB109:    goto LAB108;

LAB111:    goto LAB109;

LAB112:    xsi_set_current_line(190, ng0);
    t2 = (t0 + 4896);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(192, ng0);
    t3 = (10 * 1000000000LL);
    t2 = (t0 + 4128);
    xsi_process_wait(t2, t3);

LAB118:    *((char **)t1) = &&LAB119;
    goto LAB1;

LAB113:    goto LAB112;

LAB115:    goto LAB113;

LAB116:    xsi_set_current_line(193, ng0);
    t2 = (t0 + 4960);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_delta(t2, 3U, 1, 0LL);
    xsi_set_current_line(195, ng0);
    t3 = (40 * 1000000000LL);
    t2 = (t0 + 4128);
    xsi_process_wait(t2, t3);

LAB122:    *((char **)t1) = &&LAB123;
    goto LAB1;

LAB117:    goto LAB116;

LAB119:    goto LAB117;

LAB120:    xsi_set_current_line(196, ng0);
    t2 = (t0 + 4768);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_delta(t2, 2U, 1, 0LL);
    xsi_set_current_line(200, ng0);
    t2 = (t0 + 9060);
    t5 = (t0 + 4832);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(202, ng0);
    t3 = (100 * 1000000000LL);
    t2 = (t0 + 4128);
    xsi_process_wait(t2, t3);

LAB126:    *((char **)t1) = &&LAB127;
    goto LAB1;

LAB121:    goto LAB120;

LAB123:    goto LAB121;

LAB124:    xsi_set_current_line(203, ng0);
    t2 = (t0 + 9064);
    t5 = (t0 + 4832);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(205, ng0);
    t3 = (50 * 1000000000LL);
    t2 = (t0 + 4128);
    xsi_process_wait(t2, t3);

LAB130:    *((char **)t1) = &&LAB131;
    goto LAB1;

LAB125:    goto LAB124;

LAB127:    goto LAB125;

LAB128:    xsi_set_current_line(206, ng0);
    t2 = (t0 + 4768);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_delta(t2, 1U, 1, 0LL);
    xsi_set_current_line(209, ng0);
    t3 = (2000 * 1000LL);
    t2 = (t0 + 4128);
    xsi_process_wait(t2, t3);

LAB134:    *((char **)t1) = &&LAB135;
    goto LAB1;

LAB129:    goto LAB128;

LAB131:    goto LAB129;

LAB132:    xsi_set_current_line(210, ng0);
    t2 = (t0 + 9068);
    t5 = (t0 + 4832);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(212, ng0);
    t3 = (100 * 1000000000LL);
    t2 = (t0 + 4128);
    xsi_process_wait(t2, t3);

LAB138:    *((char **)t1) = &&LAB139;
    goto LAB1;

LAB133:    goto LAB132;

LAB135:    goto LAB133;

LAB136:    xsi_set_current_line(213, ng0);
    t2 = (t0 + 9072);
    t5 = (t0 + 4832);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(215, ng0);
    t3 = (1000 * 1000LL);
    t2 = (t0 + 4128);
    xsi_process_wait(t2, t3);

LAB142:    *((char **)t1) = &&LAB143;
    goto LAB1;

LAB137:    goto LAB136;

LAB139:    goto LAB137;

LAB140:    xsi_set_current_line(216, ng0);
    t2 = (t0 + 9076);
    t5 = (t0 + 4832);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(219, ng0);
    t3 = (50 * 1000000000LL);
    t2 = (t0 + 4128);
    xsi_process_wait(t2, t3);

LAB146:    *((char **)t1) = &&LAB147;
    goto LAB1;

LAB141:    goto LAB140;

LAB143:    goto LAB141;

LAB144:    xsi_set_current_line(220, ng0);
    t2 = (t0 + 5024);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(221, ng0);
    t3 = (2000 * 1000LL);
    t2 = (t0 + 4128);
    xsi_process_wait(t2, t3);

LAB150:    *((char **)t1) = &&LAB151;
    goto LAB1;

LAB145:    goto LAB144;

LAB147:    goto LAB145;

LAB148:    xsi_set_current_line(222, ng0);
    t2 = (t0 + 5024);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(224, ng0);
    t3 = (50 * 1000000000LL);
    t2 = (t0 + 4128);
    xsi_process_wait(t2, t3);

LAB154:    *((char **)t1) = &&LAB155;
    goto LAB1;

LAB149:    goto LAB148;

LAB151:    goto LAB149;

LAB152:    xsi_set_current_line(225, ng0);
    t2 = (t0 + 9080);
    t5 = (t0 + 4832);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(226, ng0);
    t2 = (t0 + 5088);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(228, ng0);
    t3 = (2000 * 1000LL);
    t2 = (t0 + 4128);
    xsi_process_wait(t2, t3);

LAB158:    *((char **)t1) = &&LAB159;
    goto LAB1;

LAB153:    goto LAB152;

LAB155:    goto LAB153;

LAB156:    xsi_set_current_line(229, ng0);
    t2 = (t0 + 5088);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(231, ng0);
    t3 = (2 * 1000000000LL);
    t2 = (t0 + 4128);
    xsi_process_wait(t2, t3);

LAB162:    *((char **)t1) = &&LAB163;
    goto LAB1;

LAB157:    goto LAB156;

LAB159:    goto LAB157;

LAB160:    xsi_set_current_line(232, ng0);
    t2 = (t0 + 4960);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_delta(t2, 3U, 1, 0LL);
    xsi_set_current_line(233, ng0);
    t2 = (t0 + 4896);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(235, ng0);
    t3 = (5 * 1000000000LL);
    t2 = (t0 + 4128);
    xsi_process_wait(t2, t3);

LAB166:    *((char **)t1) = &&LAB167;
    goto LAB1;

LAB161:    goto LAB160;

LAB163:    goto LAB161;

LAB164:    xsi_set_current_line(236, ng0);
    t2 = (t0 + 4896);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(240, ng0);
    t2 = (t0 + 3088U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t10 = (t3 * 10);
    t2 = (t0 + 4128);
    xsi_process_wait(t2, t10);

LAB170:    *((char **)t1) = &&LAB171;
    goto LAB1;

LAB165:    goto LAB164;

LAB167:    goto LAB165;

LAB168:    xsi_set_current_line(241, ng0);

LAB174:    *((char **)t1) = &&LAB175;
    goto LAB1;

LAB169:    goto LAB168;

LAB171:    goto LAB169;

LAB172:    goto LAB2;

LAB173:    goto LAB172;

LAB175:    goto LAB173;

}


extern void work_a_1758227160_2372691052_init()
{
	static char *pe[] = {(void *)work_a_1758227160_2372691052_p_0,(void *)work_a_1758227160_2372691052_p_1};
	xsi_register_didat("work_a_1758227160_2372691052", "isim/TesAscenseur_isim_beh.exe.sim/work/a_1758227160_2372691052.didat");
	xsi_register_executes(pe);
}
