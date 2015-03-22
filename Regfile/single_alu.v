`timescale 1ns / 1ps
`include "macro.vh"
// single_alu
module single_alu(i_r,i_s,i_aluc,o_zf,o_alu);
	input [31:0] i_r;		//i_r: r input
	input [31:0] i_s;		//i_s: s input
	input [2:0] i_aluc;		//i_aluc: ctrl input
	output o_zf;			//o_zf: zero flag output
	output [31:0] o_alu;		//o_alu: alu result output
	reg o_zf;
	reg [31:0] o_alu;
	
	always @(i_aluc or i_r or i_s) begin
		case (i_aluc)
			//
			`ALUC_CTL_AND:	o_alu <= i_r & i_s;
			`ALUC_CTL_OR:	o_alu <= i_r | i_s;
			`ALUC_CTL_ADD:	o_alu <= i_r + i_s;
			`ALUC_CTL_SUB:	o_alu <= i_r - i_s;
			`ALUC_CTL_SLT:	o_alu <= (i_r < i_s)? 1 : 0;
		endcase
		o_zf <= (o_alu == 0)? 1 : 0;
	end
endmodule