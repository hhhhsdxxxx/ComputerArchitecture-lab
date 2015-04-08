`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:43:59 03/31/2015 
// Design Name: 
// Module Name:    single_cpu 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module single_cpu(input wire CCLK, input wire [3:0]btn, output wire [7:0]dig, output[7:0]segm);
  
	wire [8:0] pc_out;
	wire [8:0] pc_in;
	wire [8:0] pc_plus_4;
	wire [4:0] reg3_out;
	wire [31:0] wdata_out;
	wire [31:0] instr_out;
	wire regwrite;
	wire alusrc;
	wire [1:0] aluop;
	wire memwrite;
	wire memtoreg;
	wire memread;
	wire branch;
	wire jump;
	wire regdst;
	wire [31:0] reg1_dat;
	wire [31:0] reg2_dat;
	wire [2:0] alu_ctrl; 
	wire [31:0] signext_out;
	wire [31:0] mux_to_alu;
	wire [31:0] alu_out;
	wire alu_zero;
	wire [31:0] mem_dat_out;
	wire and_out;
	wire [31:0] branch_addr_out;
	wire [31:0] branch_mux_out;
	wire [31:0] gpr_disp_out;
	wire clk_ms;
	reg [15:0] clk_cnt;

	reg [31:0]num;
	wire [31:0]num1;
	wire [3:0]btn_out;
	reg [1:0]ch;
	reg [3:0]SW;
	initial begin
	clk_cnt <= 0;
	num <= 0;
	ch <=2'b00;
	SW <= 0;
	end
	always@(negedge btn_out[2])begin
	if(ch == 2'b11)
		ch <= 0;
	else
		ch <= ch + 1;
	end
	always@(posedge CCLK)begin
	case(ch[1:0])
	2'b00:num <= instr_out;
	2'b01:num <= {16'h0000, clk_cnt[15:0]};
	2'b10:num <= {23'b0000_0000_0000_0000_0000_000, pc_out[8:0]};
	2'b11:num <= gpr_disp_out;
	endcase
	end
	assign num1 = instr_out;
	always@(negedge btn_out[3])begin
		if(SW == 5)
			SW <= 0;
		else
			SW <= SW+1;
	end
	
	always@(negedge btn_out[0] or negedge btn_out[1])begin
		if(btn_out[1] == 0)begin
			clk_cnt <= 0;
		end
		else begin
			clk_cnt <= clk_cnt + 1;
		end
	end
	//display M0 (CCLK, cls, strdata, rslcd, rwlcd, elcd, lcdd);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    
	display d0(clk_ms, num, dig, segm);
	pbtn b0(CCLK, btn[0], btn_out[0]);
	pbtn b1(CCLK, btn[1], btn_out[1]);
	pbtn b2(CCLK, btn[2], btn_out[2]);
	pbtn b3(CCLK, btn[3], btn_out[3]);	
	clk_10ms m0(CCLK, clk_ms);
	assign o_instr = instr_out[31:26];
	assign and_out = alu_zero & branch;
	assign pc_in = jump ? instr_out[8:0] : branch_mux_out[8:0];
	single_pc 	x_single_pc(btn_out[0],btn_out[1],pc_in,pc_out);
	c_instr_mem 	x_c_instr_mem(CCLK,pc_out,instr_out);
	single_pc_plus4 	x_single_pc_plus4(pc_out,pc_plus_4);
	single_mux5 	x_single_mux5(instr_out[20:16],instr_out[15:11],regdst,reg3_out);
	single_gpr 	x_single_gpr(btn_out[1],btn_out[0],instr_out[25:21],instr_out[20:16],
		{1'b0,SW},reg3_out,wdata_out,regwrite,reg1_dat,reg2_dat,gpr_disp_out);
	single_aluc 	x_single_aluc(aluop,instr_out[5:0],alu_ctrl);
	single_signext 	x_single_signext(instr_out[15:0],signext_out);
	single_mux32 	x_single_mux32(reg2_dat,signext_out,alusrc,mux_to_alu);
	single_alu	 x_single_alu(reg1_dat,mux_to_alu,alu_ctrl,alu_zero,alu_out);
	c_dat_mem 	x_c_dat_mem(CCLK, memwrite, alu_out[8:0],reg2_dat,mem_dat_out);
	single_mux32 	x_single_mux32_2(alu_out,mem_dat_out,memtoreg,wdata_out);
	single_add 	x_single_add(signext_out,{{23'b0},pc_plus_4},
					branch_addr_out);
	single_mux32 	x_single_mux32_3({{23'b0},pc_plus_4},
						branch_addr_out,and_out,branch_mux_out);
	single_ctl 	x_single_ctl(btn_out[0],instr_out[31:26],regdst,alusrc,aluop,memtoreg,
					regwrite,memread,memwrite,branch,jump);	
endmodule

