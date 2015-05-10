`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:21:02 05/05/2015 
// Design Name: 
// Module Name:    Alu 
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
`define ALU_ADD		4'b0000
`define ALU_SUB		4'b0010
`define ALU_AND		4'b0100
`define ALU_OR			4'b0101
`define ALU_NOR		4'b0111 
`define ALU_SLT		4'b1000
`define ALU_SLL		4'b1100
`define ALU_SRL		4'b1101
`define ALU_SRA		4'b1111
`define ALU_NONE		4'b1110
module Alu(op1, op2, aluc, o_alu
    );
input [31:0] op1, op2;
input [3:0] aluc;
output [31:0] o_alu;

reg [31:0] o_alu;

initial begin
o_alu <= 0;
end

always@(op1 or op2 or aluc)begin
	case(aluc[3:0])
	`ALU_ADD: o_alu <= op1+op2;
	`ALU_SUB: o_alu <= op1-op2;
	`ALU_AND: o_alu <= op1&op2;
	`ALU_OR:  o_alu <= op1|op2;
	`ALU_NOR: o_alu <= ~(op1|op2);
	`ALU_SLT: o_alu <= (op1<op2)?1:0;
	`ALU_SLL: o_alu <= op1 << op2;
	`ALU_SRL: o_alu <= op1 >> op2;
	`ALU_SRA: o_alu <= op1[31]?((32'hffff_ffff<<(32-op2))|op1>>op2):(op1>>op2);
	endcase
end

endmodule
