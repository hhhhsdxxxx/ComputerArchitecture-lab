`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:16:39 03/22/2015 
// Design Name: 
// Module Name:    display_digit 
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
module display_digit(clk, num, seg, segment  
    );
input clk;
input wire [31:0]num1;
output reg [7:0]seg;
output reg [7:0]segment;
reg[2:0] cnt;
reg[3:0] data;

always@(posedge clk)begin
	cnt <= cnt+1;
	case(cnt)
	3'b000: begin seg <= 2'b1111_1110; data = num[3:0]; end
	3'b001: begin seg <= 2'b1111_1101; data = num[7:4]; end
	3'b010: begin seg <= 2'b1111_1011; data = num[11:8]; end
	3'b011: begin seg <= 2'b1111_0111; data = num[15:12]; end
	3'b100: begin seg <= 2'b1110_1111; data = num[19:16]; end
	3'b101: begin seg <= 2'b1101_1111; data = num[23:20]; end
	3'b110: begin seg <= 2'b1011_1111; data = num[27:24]; end
	3'b111: begin seg <= 2'b0111_1111; data = num[31:28]; end
	endcase
end

always@(posedge seg or posedge data)begin
	case(data)
	4'b0000: segment <= 8'b1100_0000;
	4'b0001: segment <= 8'b1111_1001;
	4'b0010: segment <= 8'b1010_0100;
	4'b0011: segment <= 8'b1011_0000;
	4'b0100: segment <= 8'b1001_1001;
	4'b0101: segment <= 8'b1001_0010;
	4'b0110: segment <= 8'b1000_0010;
	4'b0111: segment <= 8'b1111_1000;
	4'b1000: segment <= 8'b1000_0000;
	4'b1001: segment <= 8'b1001_1000;
	4'b1010: segment <= 8'b1000_1000;
	4'b1011: segment <= 8'b1000_0011;
	4'b1100: segment <= 8'b1100_0110;
	4'b1101: segment <= 8'b1010_0001;
	4'b1110: segment <= 8'b1000_0110;
	4'b1111: segment <= 8'b1000_1110;
	endcase
end

endmodule
