`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:00:04 03/31/2015 
// Design Name: 
// Module Name:    single_mux 
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
module single_mux32(Ai,Bi,sel,out);
  		input [31:0] Ai;
  		input [31:0] Bi;
  		input sel;
  		output [31:0] out;
  
  		assign out[31:0] = (sel == 1) ? (Bi[31:0]) : (Ai[31:0]);
endmodule


module single_mux5(Ai,Bi,sel,out);
 		 input [4:0] Ai;
  		input [4:0] Bi;
  		input sel;
  		output [4:0] out;
  
  		assign out[4:0] = (sel == 1) ? (Bi[4:0]) : (Ai[4:0]);
endmodule
