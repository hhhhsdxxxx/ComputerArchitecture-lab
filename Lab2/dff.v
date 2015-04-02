`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:54:53 03/31/2015 
// Design Name: 
// Module Name:    dff 
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
module dff(clk,d,q);
		input clk;
		input [8:0] d;
		output [8:0] q;
		reg [8:0] q;
		
		initial begin
			q<=0;
		end
		
		always @ (posedge clk) begin
			q<= d ;
		end
endmodule
