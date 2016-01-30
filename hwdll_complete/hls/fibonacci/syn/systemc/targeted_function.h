// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ===========================================================

#ifndef _targeted_function_HH_
#define _targeted_function_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "targeted_function_rm_s_axi.h"

namespace ap_rtl {

template<unsigned int C_S_AXI_RM_ADDR_WIDTH = 6,
         unsigned int C_S_AXI_RM_DATA_WIDTH = 32>
struct targeted_function : public sc_module {
    // Port declarations 20
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst_n;
    sc_in< sc_logic > s_axi_rm_AWVALID;
    sc_out< sc_logic > s_axi_rm_AWREADY;
    sc_in< sc_uint<C_S_AXI_RM_ADDR_WIDTH> > s_axi_rm_AWADDR;
    sc_in< sc_logic > s_axi_rm_WVALID;
    sc_out< sc_logic > s_axi_rm_WREADY;
    sc_in< sc_uint<C_S_AXI_RM_DATA_WIDTH> > s_axi_rm_WDATA;
    sc_in< sc_uint<C_S_AXI_RM_DATA_WIDTH/8> > s_axi_rm_WSTRB;
    sc_in< sc_logic > s_axi_rm_ARVALID;
    sc_out< sc_logic > s_axi_rm_ARREADY;
    sc_in< sc_uint<C_S_AXI_RM_ADDR_WIDTH> > s_axi_rm_ARADDR;
    sc_out< sc_logic > s_axi_rm_RVALID;
    sc_in< sc_logic > s_axi_rm_RREADY;
    sc_out< sc_uint<C_S_AXI_RM_DATA_WIDTH> > s_axi_rm_RDATA;
    sc_out< sc_lv<2> > s_axi_rm_RRESP;
    sc_out< sc_logic > s_axi_rm_BVALID;
    sc_in< sc_logic > s_axi_rm_BREADY;
    sc_out< sc_lv<2> > s_axi_rm_BRESP;
    sc_out< sc_logic > interrupt;


    // Module declarations
    targeted_function(sc_module_name name);
    SC_HAS_PROCESS(targeted_function);

    ~targeted_function();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    targeted_function_rm_s_axi<C_S_AXI_RM_ADDR_WIDTH,C_S_AXI_RM_DATA_WIDTH>* targeted_function_rm_s_axi_U;
    sc_signal< sc_logic > ap_rst_n_inv;
    sc_signal< sc_logic > ap_start;
    sc_signal< sc_logic > ap_done;
    sc_signal< sc_logic > ap_idle;
    sc_signal< sc_lv<2> > ap_CS_fsm;
    sc_signal< sc_logic > ap_sig_cseq_ST_st1_fsm_0;
    sc_signal< bool > ap_sig_bdd_20;
    sc_signal< sc_logic > ap_ready;
    sc_signal< sc_lv<32> > input_000;
    sc_signal< sc_lv<32> > output_000;
    sc_signal< sc_logic > output_000_ap_vld;
    sc_signal< sc_lv<32> > ap_return;
    sc_signal< sc_logic > targeted_function_rm_s_axi_U_ap_dummy_ce;
    sc_signal< sc_lv<32> > input_000_read_reg_184;
    sc_signal< sc_lv<1> > or_cond_fu_132_p2;
    sc_signal< sc_lv<1> > or_cond_reg_189;
    sc_signal< sc_lv<1> > icmp_fu_148_p2;
    sc_signal< sc_lv<1> > icmp_reg_193;
    sc_signal< sc_lv<32> > second_fu_163_p2;
    sc_signal< sc_logic > ap_sig_cseq_ST_st2_fsm_1;
    sc_signal< bool > ap_sig_bdd_86;
    sc_signal< sc_lv<1> > exitcond_fu_158_p2;
    sc_signal< sc_lv<6> > i_1_fu_170_p2;
    sc_signal< sc_lv<6> > i_reg_67;
    sc_signal< sc_lv<32> > first_reg_78;
    sc_signal< sc_lv<32> > first_1_reg_89;
    sc_signal< sc_lv<1> > p_0_phi_fu_107_p6;
    sc_signal< sc_lv<1> > p_0_reg_102;
    sc_signal< sc_lv<1> > tmp_fu_118_p3;
    sc_signal< sc_lv<1> > tmp_1_fu_126_p2;
    sc_signal< sc_lv<31> > tmp_2_fu_138_p4;
    sc_signal< sc_lv<32> > i_cast_fu_154_p1;
    sc_signal< sc_lv<2> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<2> ap_ST_st1_fsm_0;
    static const sc_lv<2> ap_ST_st2_fsm_1;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const int C_S_AXI_DATA_WIDTH;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<6> ap_const_lv6_1;
    static const sc_lv<32> ap_const_lv32_FFFFFFFF;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<32> ap_const_lv32_2E;
    static const sc_lv<31> ap_const_lv31_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_return();
    void thread_ap_rst_n_inv();
    void thread_ap_sig_bdd_20();
    void thread_ap_sig_bdd_86();
    void thread_ap_sig_cseq_ST_st1_fsm_0();
    void thread_ap_sig_cseq_ST_st2_fsm_1();
    void thread_exitcond_fu_158_p2();
    void thread_i_1_fu_170_p2();
    void thread_i_cast_fu_154_p1();
    void thread_icmp_fu_148_p2();
    void thread_or_cond_fu_132_p2();
    void thread_output_000();
    void thread_output_000_ap_vld();
    void thread_p_0_phi_fu_107_p6();
    void thread_second_fu_163_p2();
    void thread_targeted_function_rm_s_axi_U_ap_dummy_ce();
    void thread_tmp_1_fu_126_p2();
    void thread_tmp_2_fu_138_p4();
    void thread_tmp_fu_118_p3();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif