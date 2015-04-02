`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:54:24 03/31/2015 
// Design Name: 
// Module Name:    single_pc 
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
module single_pc(clk,rst,ipc,opc);
		input clk;
		input rst;
 		input [8:0] ipc;
  		output [8:0] opc;
		wire [8:0] tpc;
		
		dff x_dff(clk,ipc,tpc);
		sel x_sel(clk,rst,tpc,opc);
endmodule
