`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:57:42 03/22/2015 
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
module single_aluc(aluop, func, aluc
    );
	input [1:0] aluop;
   input [3:0] func;
   output [2:0] aluc;
	reg [2:0] aluc;
	
	always @(aluop or func) begin
		case (aluop)
			//����aluop��func�Ĳ�ֵͬ����aluc���и�ֵ��
			2'b00: aluc <= 3'b010;
			2'b11: aluc <= 3'b110;
			2'b10:
			begin
			case(func)
			4'b0000: aluc <= 3'b010;
			4'b0010: aluc <= 3'b110;
			4'b0100: aluc <= 3'b000;
			4'b0101: aluc <= 3'b001;
			4'b1010: aluc <= 3'b111;
			endcase
			end
		endcase
	end

endmodule
