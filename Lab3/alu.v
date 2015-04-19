`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:36:07 04/15/2015 
// Design Name: 
// Module Name:    alu 
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

`define ALU_AND		2'b11
`define ALU_NOR		2'b10
`define ALU_ADD		2'b00
`define ALU_SUB		2'b01
//`define ALU_SLT		3'b111

module alu(i_r,i_s,i_aluc,o_alu);
	input [31:0] i_r;		//i_r: r input
	input [31:0] i_s;		//i_s: s input
	input [1:0] i_aluc;		//i_aluc: ctrl input
	//output o_zf;			//o_zf: zero flag output
	output [31:0] o_alu;		//o_alu: alu result output
	//reg o_zf;
	reg [31:0] o_alu;
	
	initial begin
	o_alu = 0;
	end
	
	always @(i_aluc or i_r or i_s) begin
		case (i_aluc)
			`ALU_AND: begin
				//o_zf = 0;
				o_alu = i_r & i_s;
			end
			`ALU_NOR: begin
				//o_zf = 0;
				o_alu = ~(i_r | i_s);
			end
			`ALU_ADD: begin
				//o_zf = 0;
				o_alu = i_r + i_s;
			end
			`ALU_SUB: begin
				o_alu = i_r - i_s;
				//o_zf  = (o_alu == 0);
			end
			/*
			`ALU_SLT: begin
				//o_zf = 0;
			  if (i_s < i_r)
				  o_alu = 1;
				else
				  o_alu = 0;
			end
			*/
			default: begin
				o_alu = 0;
				//o_zf = 0;
			end
		endcase
	end
endmodule
