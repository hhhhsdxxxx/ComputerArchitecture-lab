`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:41:00 03/22/2015 
// Design Name: 
// Module Name:    top 
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
module display(clk, /*num,*/ dig, segm);
input clk;
//input [31:0]num;
//input [3:0]sw;
output [7:0]dig;
output [7:0]segm;

reg [2:0]cnt;
reg [3:0]data;
reg [7:0]segment, seg;
wire [31:0]num;
wire clk_ms;
clk_10ms m0(clk, clk_ms);
assign num = 32'h1234_5678;
initial begin
	cnt <= 0;
	data <= 0;
	segment <= 0;
	seg <= 0;
end
always@(posedge clk_ms)begin
	cnt <= cnt+1;
	case(cnt[2:0])
	3'b000: begin seg <= 8'b1111_1110; data <= num[3:0]; end
	3'b001: begin seg <= 8'b1111_1101; data <= num[7:4]; end
	3'b010: begin seg <= 8'b1111_1011; data <= num[11:8]; end
	3'b011: begin seg <= 8'b1111_0111; data <= num[15:12]; end
	3'b100: begin seg <= 8'b1110_1111; data <= num[19:16]; end
	3'b101: begin seg <= 8'b1101_1111; data <= num[23:20]; end
	3'b110: begin seg <= 8'b1011_1111; data <= num[27:24]; end
	3'b111: begin seg <= 8'b0111_1111; data <= num[31:28]; end
	endcase
end

always@(posedge seg[0] or posedge seg[1] or posedge seg[2] or posedge seg[3] or posedge seg[4] or posedge seg[5] or posedge seg[6] or posedge seg[7])begin
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
assign segm = segment;
assign dig = seg;
endmodule

module clk_10ms(clk, oclk);
input clk;
output oclk;
reg oclk;
reg [31:0] cnt;
initial begin
	cnt <= 0;
	oclk <= 0;
end
always@(posedge clk)begin
	cnt <= cnt + 1;
	if(cnt == 25000)begin
		cnt <= 0;
		oclk <= ~oclk;
	end
end
endmodule
