`timescale 1ns / 1ps

module Ctrl_Unit_Test;

	// Inputs
	reg clk;
	reg rst;
	reg [31:0] if_instr;
	reg [31:0] instr;
	reg rsrtequ;
	reg rsrtneq;

	// Outputs
	wire cu_branch;
	wire cu_jump;
	wire jmp_stall;
	wire cu_wreg;
	wire cu_m2reg;
	wire cu_wmem;
	wire [5:0] cu_aluc;
	wire cu_shift;
	wire cu_aluimm;
	wire cu_sext;
	wire cu_regrt;
	wire cu_wpcir;
	wire [1:0] cu_fwda;
	wire [1:0] cu_fwdb;
	wire cu_jal;
	wire cu_jr;

	// Instantiate the Unit Under Test (UUT)
	ctrl_unit uut (
		.clk(clk), 
		.rst(rst), 
		.if_instr(if_instr), 
		.instr(instr), 
		.rsrtequ(rsrtequ), 
		.rsrtneq(rsrtneq), 
		.cu_branch(cu_branch), 
		.cu_jump(cu_jump), 
		.jmp_stall(jmp_stall), 
		.cu_wreg(cu_wreg), 
		.cu_m2reg(cu_m2reg), 
		.cu_wmem(cu_wmem), 
		.cu_aluc(cu_aluc), 
		.cu_shift(cu_shift), 
		.cu_aluimm(cu_aluimm), 
		.cu_sext(cu_sext), 
		.cu_regrt(cu_regrt), 
		.cu_wpcir(cu_wpcir), 
		.cu_fwda(cu_fwda), 
		.cu_fwdb(cu_fwdb), 
		.cu_jal(cu_jal), 
		.cu_jr(cu_jr)
	);

	parameter FULL_CYC = 40, HALF_CYC = FULL_CYC/2;
	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 0;
		if_instr = 0;
		
		instr = 0;

		// Wait 100 ns for global reset to finish
		#FULL_CYC;
		if_instr   =32'h8c02_0015;
		instr=32'h8c01_0014;		
		#FULL_CYC;
		if_instr   =32'h0022_1820;
		instr=32'h8c02_0015;			
		//
		#FULL_CYC;
		if_instr   =32'h0000_1020;
		instr=32'h0022_1820;	
		//
		#FULL_CYC;
		if_instr   =32'h0023_2022;
		instr=32'h0000_1020;		
	//
		#FULL_CYC;
		if_instr   =32'h0064_2824;
		instr=32'h0023_2022;		
	//
		#FULL_CYC;
		if_instr   =32'h0085_3027;
		instr=32'h0064_2824;		
	//
		#FULL_CYC;
		if_instr   =32'hac06_0016;
		instr=32'h0085_3027;		
	//
		#FULL_CYC;
		if_instr   =32'h10c7_fff8;
		instr=32'hac06_0016;		
	       
		// Add stimulus here

	end
   always #HALF_CYC clk = ~clk;
  	
endmodule

