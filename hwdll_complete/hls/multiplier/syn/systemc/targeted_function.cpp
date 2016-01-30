// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ===========================================================

#include "targeted_function.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic targeted_function::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic targeted_function::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<6> targeted_function::ap_ST_st1_fsm_0 = "1";
const sc_lv<6> targeted_function::ap_ST_st2_fsm_1 = "10";
const sc_lv<6> targeted_function::ap_ST_st3_fsm_2 = "100";
const sc_lv<6> targeted_function::ap_ST_st4_fsm_3 = "1000";
const sc_lv<6> targeted_function::ap_ST_st5_fsm_4 = "10000";
const sc_lv<6> targeted_function::ap_ST_st6_fsm_5 = "100000";
const sc_lv<32> targeted_function::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<1> targeted_function::ap_const_lv1_1 = "1";
const int targeted_function::C_S_AXI_DATA_WIDTH = "100000";
const sc_lv<32> targeted_function::ap_const_lv32_5 = "101";

targeted_function::targeted_function(sc_module_name name) : sc_module(name), mVcdFile(0) {
    targeted_function_rm_s_axi_U = new targeted_function_rm_s_axi<C_S_AXI_RM_ADDR_WIDTH,C_S_AXI_RM_DATA_WIDTH>("targeted_function_rm_s_axi_U");
    targeted_function_rm_s_axi_U->AWVALID(s_axi_rm_AWVALID);
    targeted_function_rm_s_axi_U->AWREADY(s_axi_rm_AWREADY);
    targeted_function_rm_s_axi_U->AWADDR(s_axi_rm_AWADDR);
    targeted_function_rm_s_axi_U->WVALID(s_axi_rm_WVALID);
    targeted_function_rm_s_axi_U->WREADY(s_axi_rm_WREADY);
    targeted_function_rm_s_axi_U->WDATA(s_axi_rm_WDATA);
    targeted_function_rm_s_axi_U->WSTRB(s_axi_rm_WSTRB);
    targeted_function_rm_s_axi_U->ARVALID(s_axi_rm_ARVALID);
    targeted_function_rm_s_axi_U->ARREADY(s_axi_rm_ARREADY);
    targeted_function_rm_s_axi_U->ARADDR(s_axi_rm_ARADDR);
    targeted_function_rm_s_axi_U->RVALID(s_axi_rm_RVALID);
    targeted_function_rm_s_axi_U->RREADY(s_axi_rm_RREADY);
    targeted_function_rm_s_axi_U->RDATA(s_axi_rm_RDATA);
    targeted_function_rm_s_axi_U->RRESP(s_axi_rm_RRESP);
    targeted_function_rm_s_axi_U->BVALID(s_axi_rm_BVALID);
    targeted_function_rm_s_axi_U->BREADY(s_axi_rm_BREADY);
    targeted_function_rm_s_axi_U->BRESP(s_axi_rm_BRESP);
    targeted_function_rm_s_axi_U->ACLK(ap_clk);
    targeted_function_rm_s_axi_U->ARESET(ap_rst_n_inv);
    targeted_function_rm_s_axi_U->ACLK_EN(targeted_function_rm_s_axi_U_ap_dummy_ce);
    targeted_function_rm_s_axi_U->ap_start(ap_start);
    targeted_function_rm_s_axi_U->interrupt(interrupt);
    targeted_function_rm_s_axi_U->ap_ready(ap_ready);
    targeted_function_rm_s_axi_U->ap_done(ap_done);
    targeted_function_rm_s_axi_U->ap_idle(ap_idle);
    targeted_function_rm_s_axi_U->ap_return(ap_return);
    targeted_function_rm_s_axi_U->input_000(input_000);
    targeted_function_rm_s_axi_U->input_001(input_001);
    targeted_function_rm_s_axi_U->output_000(output_000);
    targeted_function_rm_s_axi_U->output_000_ap_vld(output_000_ap_vld);
    targeted_function_mul_32s_32s_32_6_U0 = new targeted_function_mul_32s_32s_32_6<1,6,32,32,32>("targeted_function_mul_32s_32s_32_6_U0");
    targeted_function_mul_32s_32s_32_6_U0->clk(ap_clk);
    targeted_function_mul_32s_32s_32_6_U0->reset(ap_rst_n_inv);
    targeted_function_mul_32s_32s_32_6_U0->din0(input_001);
    targeted_function_mul_32s_32s_32_6_U0->din1(input_000);
    targeted_function_mul_32s_32s_32_6_U0->ce(grp_fu_45_ce);
    targeted_function_mul_32s_32s_32_6_U0->dout(grp_fu_45_p2);

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_sig_cseq_ST_st6_fsm_5 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_sig_cseq_ST_st1_fsm_0 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_sig_cseq_ST_st6_fsm_5 );

    SC_METHOD(thread_ap_return);
    sensitive << ( ap_sig_cseq_ST_st6_fsm_5 );

    SC_METHOD(thread_ap_rst_n_inv);
    sensitive << ( ap_rst_n );

    SC_METHOD(thread_ap_sig_bdd_24);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_sig_bdd_85);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_sig_cseq_ST_st1_fsm_0);
    sensitive << ( ap_sig_bdd_24 );

    SC_METHOD(thread_ap_sig_cseq_ST_st6_fsm_5);
    sensitive << ( ap_sig_bdd_85 );

    SC_METHOD(thread_grp_fu_45_ce);

    SC_METHOD(thread_output_000);
    sensitive << ( grp_fu_45_p2 );
    sensitive << ( ap_sig_cseq_ST_st6_fsm_5 );

    SC_METHOD(thread_output_000_ap_vld);
    sensitive << ( ap_sig_cseq_ST_st6_fsm_5 );

    SC_METHOD(thread_targeted_function_rm_s_axi_U_ap_dummy_ce);

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );

    SC_THREAD(thread_hdltv_gen);
    sensitive << ( ap_clk.pos() );

    ap_CS_fsm = "000001";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "targeted_function_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst_n, "(port)ap_rst_n");
    sc_trace(mVcdFile, s_axi_rm_AWVALID, "(port)s_axi_rm_AWVALID");
    sc_trace(mVcdFile, s_axi_rm_AWREADY, "(port)s_axi_rm_AWREADY");
    sc_trace(mVcdFile, s_axi_rm_AWADDR, "(port)s_axi_rm_AWADDR");
    sc_trace(mVcdFile, s_axi_rm_WVALID, "(port)s_axi_rm_WVALID");
    sc_trace(mVcdFile, s_axi_rm_WREADY, "(port)s_axi_rm_WREADY");
    sc_trace(mVcdFile, s_axi_rm_WDATA, "(port)s_axi_rm_WDATA");
    sc_trace(mVcdFile, s_axi_rm_WSTRB, "(port)s_axi_rm_WSTRB");
    sc_trace(mVcdFile, s_axi_rm_ARVALID, "(port)s_axi_rm_ARVALID");
    sc_trace(mVcdFile, s_axi_rm_ARREADY, "(port)s_axi_rm_ARREADY");
    sc_trace(mVcdFile, s_axi_rm_ARADDR, "(port)s_axi_rm_ARADDR");
    sc_trace(mVcdFile, s_axi_rm_RVALID, "(port)s_axi_rm_RVALID");
    sc_trace(mVcdFile, s_axi_rm_RREADY, "(port)s_axi_rm_RREADY");
    sc_trace(mVcdFile, s_axi_rm_RDATA, "(port)s_axi_rm_RDATA");
    sc_trace(mVcdFile, s_axi_rm_RRESP, "(port)s_axi_rm_RRESP");
    sc_trace(mVcdFile, s_axi_rm_BVALID, "(port)s_axi_rm_BVALID");
    sc_trace(mVcdFile, s_axi_rm_BREADY, "(port)s_axi_rm_BREADY");
    sc_trace(mVcdFile, s_axi_rm_BRESP, "(port)s_axi_rm_BRESP");
    sc_trace(mVcdFile, interrupt, "(port)interrupt");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_rst_n_inv, "ap_rst_n_inv");
    sc_trace(mVcdFile, ap_start, "ap_start");
    sc_trace(mVcdFile, ap_done, "ap_done");
    sc_trace(mVcdFile, ap_idle, "ap_idle");
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_sig_cseq_ST_st1_fsm_0, "ap_sig_cseq_ST_st1_fsm_0");
    sc_trace(mVcdFile, ap_sig_bdd_24, "ap_sig_bdd_24");
    sc_trace(mVcdFile, ap_ready, "ap_ready");
    sc_trace(mVcdFile, input_000, "input_000");
    sc_trace(mVcdFile, input_001, "input_001");
    sc_trace(mVcdFile, output_000, "output_000");
    sc_trace(mVcdFile, output_000_ap_vld, "output_000_ap_vld");
    sc_trace(mVcdFile, ap_return, "ap_return");
    sc_trace(mVcdFile, targeted_function_rm_s_axi_U_ap_dummy_ce, "targeted_function_rm_s_axi_U_ap_dummy_ce");
    sc_trace(mVcdFile, grp_fu_45_p2, "grp_fu_45_p2");
    sc_trace(mVcdFile, ap_sig_cseq_ST_st6_fsm_5, "ap_sig_cseq_ST_st6_fsm_5");
    sc_trace(mVcdFile, ap_sig_bdd_85, "ap_sig_bdd_85");
    sc_trace(mVcdFile, grp_fu_45_ce, "grp_fu_45_ce");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
#endif

    }
    mHdltvinHandle.open("targeted_function.hdltvin.dat");
    mHdltvoutHandle.open("targeted_function.hdltvout.dat");
}

targeted_function::~targeted_function() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    mHdltvinHandle << "] " << endl;
    mHdltvoutHandle << "] " << endl;
    mHdltvinHandle.close();
    mHdltvoutHandle.close();
    delete targeted_function_rm_s_axi_U;
    delete targeted_function_mul_32s_32s_32_6_U0;
}

void targeted_function::thread_ap_clk_no_reset_() {
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_st1_fsm_0;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
}

void targeted_function::thread_ap_done() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st6_fsm_5.read())) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void targeted_function::thread_ap_idle() {
    if ((!esl_seteq<1,1,1>(ap_const_logic_1, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void targeted_function::thread_ap_ready() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st6_fsm_5.read())) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void targeted_function::thread_ap_return() {
    ap_return = ap_const_lv32_0;
}

void targeted_function::thread_ap_rst_n_inv() {
    ap_rst_n_inv =  (sc_logic) (~ap_rst_n.read());
}

void targeted_function::thread_ap_sig_bdd_24() {
    ap_sig_bdd_24 = esl_seteq<1,1,1>(ap_CS_fsm.read().range(0, 0), ap_const_lv1_1);
}

void targeted_function::thread_ap_sig_bdd_85() {
    ap_sig_bdd_85 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(5, 5));
}

void targeted_function::thread_ap_sig_cseq_ST_st1_fsm_0() {
    if (ap_sig_bdd_24.read()) {
        ap_sig_cseq_ST_st1_fsm_0 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st1_fsm_0 = ap_const_logic_0;
    }
}

void targeted_function::thread_ap_sig_cseq_ST_st6_fsm_5() {
    if (ap_sig_bdd_85.read()) {
        ap_sig_cseq_ST_st6_fsm_5 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st6_fsm_5 = ap_const_logic_0;
    }
}

void targeted_function::thread_grp_fu_45_ce() {
    grp_fu_45_ce = ap_const_logic_1;
}

void targeted_function::thread_output_000() {
    output_000 = grp_fu_45_p2.read();
}

void targeted_function::thread_output_000_ap_vld() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st6_fsm_5.read())) {
        output_000_ap_vld = ap_const_logic_1;
    } else {
        output_000_ap_vld = ap_const_logic_0;
    }
}

void targeted_function::thread_targeted_function_rm_s_axi_U_ap_dummy_ce() {
    targeted_function_rm_s_axi_U_ap_dummy_ce = ap_const_logic_1;
}

void targeted_function::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if (!esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) {
                ap_NS_fsm = ap_ST_st2_fsm_1;
            } else {
                ap_NS_fsm = ap_ST_st1_fsm_0;
            }
            break;
        case 2 : 
            ap_NS_fsm = ap_ST_st3_fsm_2;
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_st4_fsm_3;
            break;
        case 8 : 
            ap_NS_fsm = ap_ST_st5_fsm_4;
            break;
        case 16 : 
            ap_NS_fsm = ap_ST_st6_fsm_5;
            break;
        case 32 : 
            ap_NS_fsm = ap_ST_st1_fsm_0;
            break;
        default : 
            ap_NS_fsm = "XXXXXX";
            break;
    }
}

void targeted_function::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"ap_rst_n\" :  \"" << ap_rst_n.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_rm_AWVALID\" :  \"" << s_axi_rm_AWVALID.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"s_axi_rm_AWREADY\" :  \"" << s_axi_rm_AWREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_rm_AWADDR\" :  \"" << s_axi_rm_AWADDR.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_rm_WVALID\" :  \"" << s_axi_rm_WVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_rm_WREADY\" :  \"" << s_axi_rm_WREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_rm_WDATA\" :  \"" << s_axi_rm_WDATA.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_rm_WSTRB\" :  \"" << s_axi_rm_WSTRB.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_rm_ARVALID\" :  \"" << s_axi_rm_ARVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_rm_ARREADY\" :  \"" << s_axi_rm_ARREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_rm_ARADDR\" :  \"" << s_axi_rm_ARADDR.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_rm_RVALID\" :  \"" << s_axi_rm_RVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_rm_RREADY\" :  \"" << s_axi_rm_RREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_rm_RDATA\" :  \"" << s_axi_rm_RDATA.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_rm_RRESP\" :  \"" << s_axi_rm_RRESP.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_rm_BVALID\" :  \"" << s_axi_rm_BVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_rm_BREADY\" :  \"" << s_axi_rm_BREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_rm_BRESP\" :  \"" << s_axi_rm_BRESP.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"interrupt\" :  \"" << interrupt.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}

