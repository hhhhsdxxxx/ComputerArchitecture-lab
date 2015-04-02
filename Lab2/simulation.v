`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:57:59 04/01/2015
// Design Name:   single_cpu
// Module Name:   D:/users/ComputerArchitecture/Lab2/simulation.v
// Project Name:  Lab2
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: single_cpu
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module simulation;

	// Inputs
	reg CCLK;
	reg [3:0] btn;

	// Outputs
	wire [7:0] dig;
	wire [7:0] segm;

	// Instantiate the Unit Under Test (UUT)
	single_cpu uut (
		.CCLK(CCLK), 
		.btn(btn),  
		.dig(dig), 
		.segm(segm)
	);

	initial begin
		// Initialize Inputs
		CCLK = 0;
		btn = 0;
		
		// Wait 100 ns for global reset to finish
		#200;
		btn[1] = 1;
		#10;
		btn[1] = 0;
		// Add stimulus here

	end
   always begin
		#1;
		CCLK = ~CCLK;
	end
	
	always begin
		#4;
		btn[0] = ~btn[0];
	end
endmodule

