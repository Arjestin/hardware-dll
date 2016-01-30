// (c) Copyright 1995-2016 Xilinx, Inc. All rights reserved.
// 
// This file contains confidential and proprietary information
// of Xilinx, Inc. and is protected under U.S. and
// international copyright and other intellectual property
// laws.
// 
// DISCLAIMER
// This disclaimer is not a license and does not grant any
// rights to the materials distributed herewith. Except as
// otherwise provided in a valid license issued to you by
// Xilinx, and to the maximum extent permitted by applicable
// law: (1) THESE MATERIALS ARE MADE AVAILABLE "AS IS" AND
// WITH ALL FAULTS, AND XILINX HEREBY DISCLAIMS ALL WARRANTIES
// AND CONDITIONS, EXPRESS, IMPLIED, OR STATUTORY, INCLUDING
// BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY, NON-
// INFRINGEMENT, OR FITNESS FOR ANY PARTICULAR PURPOSE; and
// (2) Xilinx shall not be liable (whether in contract or tort,
// including negligence, or under any other theory of
// liability) for any loss or damage of any kind or nature
// related to, arising under or in connection with these
// materials, including for any direct, or any indirect,
// special, incidental, or consequential loss or damage
// (including loss of data, profits, goodwill, or any type of
// loss or damage suffered as a result of any action brought
// by a third party) even if such damage or loss was
// reasonably foreseeable or Xilinx had been advised of the
// possibility of the same.
// 
// CRITICAL APPLICATIONS
// Xilinx products are not designed or intended to be fail-
// safe, or for use in any application requiring fail-safe
// performance, such as life-support or safety devices or
// systems, Class III medical devices, nuclear facilities,
// applications related to the deployment of airbags, or any
// other applications that could lead to death, personal
// injury, or severe property or environmental damage
// (individually and collectively, "Critical
// Applications"). Customer assumes the sole risk and
// liability of any use of Xilinx products in Critical
// Applications, subject only to applicable laws and
// regulations governing limitations on product liability.
// 
// THIS COPYRIGHT NOTICE AND DISCLAIMER MUST BE RETAINED AS
// PART OF THIS FILE AT ALL TIMES.
// 
// DO NOT MODIFY THIS FILE.


// IP VLNV: adapteva.com:Adapteva:parallella_gpio_emio:1.0
// IP Revision: 3

(* X_CORE_INFO = "parallella_gpio_emio,Vivado 2015.4" *)
(* CHECK_LICENSE_TYPE = "top_parallella_gpio_emio_0_0,parallella_gpio_emio,{}" *)
(* DowngradeIPIdentifiedWarnings = "yes" *)
module top_parallella_gpio_emio_0_0 (
  PS_GPIO_I,
  GPIO_P,
  GPIO_N,
  PS_GPIO_O,
  PS_GPIO_T
);

output wire [63 : 0] PS_GPIO_I;
inout wire [23 : 0] GPIO_P;
inout wire [23 : 0] GPIO_N;
input wire [63 : 0] PS_GPIO_O;
input wire [63 : 0] PS_GPIO_T;

  parallella_gpio_emio #(
    .NUM_GPIO_PAIRS(24),
    .DIFF_GPIO(0),
    .NUM_PS_SIGS(64)
  ) inst (
    .PS_GPIO_I(PS_GPIO_I),
    .GPIO_P(GPIO_P),
    .GPIO_N(GPIO_N),
    .PS_GPIO_O(PS_GPIO_O),
    .PS_GPIO_T(PS_GPIO_T)
  );
endmodule
