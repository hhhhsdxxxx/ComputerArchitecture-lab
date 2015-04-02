`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:55:31 03/31/2015 
// Design Name: 
// Module Name:    sel 
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
module sel(clk,rst,ipc,opc);
		input clk,rst;
 		input [8:0] ipc;
  		output [8:0] opc;
		reg [8:0]opc;
		always@(posedge rst or posedge clk)begin
		if(rst == 1)
			opc <= 9'b1111_1111_1;
		else
			opc <= ipc;
		end
endmodule
