`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:54:54 05/05/2015 
// Design Name: 
// Module Name:    id_stage 
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
module id_stage(clk, rst, if_inst, if_pc4, wb_destR, wb_dest,wb_wreg, 
	cu_wreg, cu_m2reg, cu_wmem, cu_aluc, cu_shift, cu_aluimm, cu_branch, id_pc4, id_inA, id_inB, id_imm, cu_regrt, rt, rd, 
	IF_ins_type, IF_ins_number, ID_ins_type, ID_ins_number, which_reg, reg_content, 
	jump_target, branch, ex_m2reg, ex_rt, stall, mem_wreg, mem_desk, mem_data, 
	wreg1, reg_desk1, reg_data1);
	
	input clk;
	input rst;
	input [31:0] if_inst;
	input [31:0] if_pc4;
	input ex_m2reg;
	input [4:0] wb_destR;
	input [4:0] ex_rt;
	input [31:0] wb_dest;
	input wb_wreg;
	input mem_wreg;
	input [4:0]mem_desk;
	input [31:0]mem_data;
	input[3:0] IF_ins_type;
	input[3:0]	IF_ins_number;
	input [4:0] which_reg;
	input wreg1;
	input [4:0] reg_desk1;
	input [31:0] reg_data1;
	output [31:0] reg_content;
	
	output [1:0]cu_branch;
	output cu_wreg;
	output cu_m2reg;
	output cu_wmem;
	output [3:0] cu_aluc;
	output cu_shift;
	output cu_aluimm;
	output [31:0] id_pc4;
	output [31:0] id_inA;
	output [31:0] id_inB;
	output [31:0] id_imm;
	output cu_regrt;
	output [4:0] rd;
	output [4:0] rt;
	output [31:0] jump_target;
	output branch;
	output[3:0] ID_ins_type;
	output[3:0] ID_ins_number;
	output stall;
	
	wire cu_lui;
	wire cu_sext;
	wire cu_regrt;
	wire [1:0]cu_branch;
	reg [31:0] reg_inst;
	reg [31:0] pc4;
	reg wreg;
	reg [4:0]desk;
	reg [31:0]data;
	wire [31:0] rdata_A;
	wire [31:0] rdata_B;
	wire [4:0] rt;
	wire [4:0] rd;
	wire [4:0] rs;
	wire [15:0] imm;
	wire [31:0] id_imm;
	wire zero;
	wire [31:0] id_pc4;
	wire [31:0] address;
	wire cu_jal;
	reg[3:0] ID_ins_type;
	reg[3:0] ID_ins_number;
	wire [31:0] jmp_address;
	

	wire eq_regrs1, eq_regrt1, eq_regrs2, eq_regrt2, eq_memrs, eq_memrt; 
	
	assign imm = reg_inst[15:0];
	assign rt= reg_inst[20:16];
	assign rd = reg_inst[15:11];
	assign rs = reg_inst[25:21];
	assign jmp_address = {6'b000000,reg_inst[25:0]};
	assign id_imm = cu_sext?(imm[15]?{16'hffff,imm}:{16'b0,imm}):(cu_lui?{imm,16'h0000}:{16'b0,imm});   //符号扩展
	assign jump_target = (cu_branch==2'b11)?(cu_jr?id_inA:jmp_address):(id_imm+pc4);
	assign zero=((id_inA-id_inB)==0)?1:0;
	assign branch = (cu_branch[0]&zero) | (cu_branch[1]&(~zero));  //跳转槽标志
	assign id_pc4 = pc4;
	assign address = pc4;
	//assign stall = ((rt!=0 && rt==id_rt)||(rs!=0 && rs==id_rt))?1:0;
	
	always @ (posedge clk or posedge rst) begin
		if (rst==1 || branch==1)
		begin
			reg_inst <= 0;
			pc4 <= 0;			
			ID_ins_type <= 0;
			ID_ins_number <= 0;
			wreg <= 0;
			desk <= 0;
			data <= 0;
		end
		else
		begin
			if(!stall) begin
				reg_inst <= if_inst;
				pc4 <= if_pc4;			
				ID_ins_type <= IF_ins_type;
				ID_ins_number <= IF_ins_number;
				wreg <= wreg1;
				desk <= reg_desk1;
				data <= reg_data1;
			end
		end
		
	end
	
	regfile x_regfile(clk, rst, reg_inst[25:21], reg_inst[20:16], wb_destR, wb_dest, wb_wreg, rdata_A, rdata_B, which_reg, reg_content, cu_jal, address);
	ctrl_unit x_ctrl_unit(clk, rst, if_inst[31:0], reg_inst[31:0],cu_branch, cu_wreg, cu_m2reg, cu_wmem, cu_aluc, cu_shift, cu_aluimm, cu_sext,cu_regrt, ex_m2reg, ex_rt, cu_lui, cu_jr, cu_jal, stall);
	assign eq_regrs1 = wreg1&(rs==reg_desk1&&rs!=0);
	assign eq_regrt1 = wreg1&(rt==reg_desk1&&rt!=0);
	assign eq_regrs2 = wreg&(rs==desk&&rs!=0);
	assign eq_regrt2 = wreg&(rt==desk&&rt!=0);
	assign eq_memrs = mem_wreg&(rs==mem_desk&&rs!=0);
	assign eq_memrt = mem_wreg&(rt==mem_desk&&rt!=0);
	//assign id_inA = wreg1?((rs==reg_desk1)?reg_data1:rdata_B):(mem_wreg?((rs==mem_desk)?mem_data:(wreg2?((rs==reg_desk2)?reg_data2:rdata_B):rdata_A)):rdata_B);         //**  rs, rt
	//assign id_inB = wreg1?((rt==reg_desk1)?reg_data1:rdata_B):(mem_wreg?((rt==mem_desk)?mem_data:(wreg2?((rt==reg_desk2)?reg_data2:rdata_B):rdata_A)):rdata_B);
	assign id_inA = eq_regrs1?reg_data1:(eq_memrs?mem_data:(eq_regrs2?data:rdata_A));
	assign id_inB = eq_regrt1?reg_data1:(eq_memrt?mem_data:(eq_regrt2?data:rdata_B));
endmodule
