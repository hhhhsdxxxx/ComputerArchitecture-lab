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
module top(clk, led
    );
input clk;
output [7:0]led;
reg [7:0]num;
reg [15:0]cnt;

always@(clk)begin
	cnt <= cnt+1;
	if(cnt == 0)
		num <= num+1;
end

assign led = num;

endmodule
