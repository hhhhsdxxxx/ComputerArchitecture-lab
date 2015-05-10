`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:00:45 03/31/2015 
// Design Name: 
// Module Name:    single_aluc 
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
`include "macro.vh"
module single_aluc(aluop, func, aluc);
    input [1:0] aluop;
    input [5:0] func;
    output [2:0] aluc;
	 reg [2:0] aluc;
	
	 always @(aluop or func) begin
		case (aluop)
			2'b00: begin
				aluc = `ALU_ADD;        //lw | sw
			end
			2'b01: begin
				aluc = `ALU_SUB;			 //beq
			end
			2'b10: begin
				case (func)
				  `RTYPE_ADD:  aluc = `ALU_ADD;
				  `RTYPE_SUB:  aluc = `ALU_SUB;
				  `RTYPE_SLT:  aluc = `ALU_SLT;
				  `RTYPE_AND:  aluc = `ALU_AND;
				  `RTYPE_OR:  aluc = `ALU_OR;
					default: aluc = 3'b000;
				endcase
			end
			default: begin
			    aluc=3'b000;
			end
		endcase
	end
endmodule

module single_alu(i_r,i_s,i_aluc,o_zf,o_alu);
	input [31:0] i_r;		//i_r: r input
	input [31:0] i_s;		//i_s: s input
	input [2:0] i_aluc;		//i_aluc: ctrl input
	output o_zf;			//o_zf: zero flag output
	output [31:0] o_alu;		//o_alu: alu result output
	reg o_zf;
	reg [31:0] o_alu;
	
	initial begin
	o_alu <= 0;
	end
	
	always @(i_aluc or i_r or i_s) begin
		case (i_aluc)
			`ALU_AND: begin
				o_zf = 0;
				o_alu = i_r & i_s;
			end
			`ALU_OR: begin
				o_zf = 0;
				o_alu = i_r | i_s;
			end
			`ALU_ADD: begin
				o_zf = 0;
				o_alu = i_r + i_s;
			end
			`ALU_SUB: begin
				o_alu = i_r - i_s;
				o_zf  = (o_alu == 0);
			end
			`ALU_SLT: begin
				o_zf = 0;
			  if (i_s < i_r)
				  o_alu = 1;
				else
				  o_alu = 0;
			end
			default: begin
				o_alu = 0;
				o_zf = 0;
			end
		endcase
	end
endmodule

//GPRÄ£¿é
module single_gpr(
    rst,//reset
    clk,//clock
    i_adr1,//register index 1
    i_adr2,//register index 2
    i_adr3,//register index 3
    i_wreg,//register to write
    i_wdata,//data to write
    i_wen,//write enable
    o_op1,//read data1, out
    o_op2,//read data2, out
    o_op3//read data3, out
);
                             
	 input clk;
	 input rst;                
	 input [4:0] i_adr1; 
	 input [4:0] i_adr2;
	 input [4:0] i_adr3;
	 input [31:0] i_wdata;
	 input [4:0] i_wreg;
	 input i_wen;
	 output [31:0] o_op1;
	 output [31:0] o_op2;
	 output [31:0] o_op3;
	 reg [31:0] mem[31:0];
	initial begin
			mem[0] <= 32'h00000000;
			mem[1] <= 32'h00000000;
			mem[2] <= 32'h00000000;
			mem[3] <= 32'h00000000;
			mem[4] <= 32'h00000000;
	end

	 
		assign o_op1 = mem[i_adr1];
		assign o_op2 = mem[i_adr2];
		assign o_op3 = mem[i_adr3];
	 always @(negedge clk or negedge rst) begin
		if (rst == 0) begin
			mem[0] <= 32'h00000000;
			mem[1] <= 32'h00000000;
			mem[2] <= 32'h00000000;
			mem[3] <= 32'h00000000;
			mem[4] <= 32'h00000000;
		end
		else if (i_wen == 1) begin
		mem[i_wreg] <= (i_wreg == 5'b00000)?32'h0000_0000:i_wdata;
		end
	 end
endmodule
