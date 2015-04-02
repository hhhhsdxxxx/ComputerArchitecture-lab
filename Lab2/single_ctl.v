`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:23:41 03/31/2015 
// Design Name: 
// Module Name:    single_ctl 
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
module single_ctl(clk, OP, RegDst, ALUsrc, ALUop, MemtoReg,
RegWrite, MemRead, MemWrite, Branch, Jump);
   input clk;
   input [5:0] OP;
   output RegDst;
   output ALUsrc;    
	output [1:0] ALUop;
   output MemtoReg;
   output RegWrite;
   output MemRead;
   output MemWrite;
   output Branch;
   output Jump;

   assign RegDst = (~OP[5])&(~OP[4])&(~OP[3])&(~OP[2])&(~OP[1])&(~OP[0]);
	assign MemtoReg = (OP[5])&(~OP[4])&(~OP[3])&(~OP[2])&(OP[1])&(OP[0]);
	assign RegWrite = RegDst|MemtoReg;
	assign ALUsrc = MemtoReg|MemWrite;
	assign ALUop[1] = RegDst;
	assign ALUop[0] = (~OP[5])&(~OP[4])&(~OP[3])&(OP[2])&(~OP[1])&(~OP[0]);
	assign MemWrite = (OP[5])&(~OP[4])&(OP[3])&(~OP[2])&(OP[1])&(OP[0]);
	assign Branch = ALUop[0];
	assign Jump = (~OP[5])&(~OP[4])&(~OP[3])&(~OP[2])&(OP[1])&(~OP[0]);
endmodule
