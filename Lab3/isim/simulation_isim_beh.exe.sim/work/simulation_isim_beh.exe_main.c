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
    xilinxcorelib_ver_m_00000000001358910285_3131131465_init();
    xilinxcorelib_ver_m_00000000001687936702_4016793922_init();
    xilinxcorelib_ver_m_00000000000277421008_2493281167_init();
    xilinxcorelib_ver_m_00000000001603977570_2006600223_init();
    work_m_00000000003617559063_2381739659_init();
    work_m_00000000002869979297_2885957937_init();
    work_m_00000000000986337361_0728036232_init();
    work_m_00000000000394598896_3824692077_init();
    work_m_00000000001800354665_1419638249_init();
    work_m_00000000001028100936_2725559894_init();
    work_m_00000000003851012299_0497686046_init();
    work_m_00000000000423166785_3823007873_init();
    work_m_00000000002772331606_1064484548_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002772331606_1064484548");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
