`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:55:17 05/05/2015 
// Design Name: 
// Module Name:    imm2sa 
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
module imm2sa(odata_imm,sa);
	input[31:0] odata_imm;
	output[31:0] sa;
	
	assign sa = {27'b0,odata_imm[10:6]};
endmodule
