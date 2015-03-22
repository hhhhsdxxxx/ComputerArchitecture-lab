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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000001222986429_0254784918_init();
    work_m_00000000003816425971_1817473448_init();
    work_m_00000000001734546688_3444871305_init();
    work_m_00000000000600903439_0665426926_init();
    work_m_00000000000598195099_2899691000_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000000598195099_2899691000");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
