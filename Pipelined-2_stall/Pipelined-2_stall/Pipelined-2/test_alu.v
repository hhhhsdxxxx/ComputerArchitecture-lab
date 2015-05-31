`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:47:29 03/25/2014
// Design Name:   Alu
// Module Name:   C:/Users/Student/Desktop/Pipelined-2/test_alu.v
// Project Name:  Pipelined
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Alu
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////
`include "macro.vh"
module test_alu;

	// Inputs
	reg [31:0] A;
	reg [31:0] B;
	reg [5:0] ALUoper;

	// Outputs
	wire [31:0] Result;
	wire LED1;

	// Instantiate the Unit Under Test (UUT)
	Alu uut (
		.A(A), 
		.B(B), 
		.ALUoper(ALUoper), 
		.Result(Result), 
		.LED1(LED1)
	);

	
		parameter DELAY = 100;

	initial begin
		// Initialize Inputs
		A = 32'h8000_00FA;
		B = 32'h0000_0004;

		ALUoper = `ALU_ADD; #DELAY;
		ALUoper = `ALU_SUB; #DELAY;
		ALUoper = `ALU_AND; #DELAY;
		ALUoper = `ALU_OR; #DELAY;
		ALUoper = `ALU_NOR; #DELAY;
		ALUoper = `ALU_SLT; #DELAY;
		ALUoper = `ALU_SLL; #DELAY;
		ALUoper = `ALU_SRL; #DELAY;
		ALUoper = `ALU_SRA; #DELAY;
		ALUoper = `ALU_NONE; #DELAY;
	end

      
endmodule

