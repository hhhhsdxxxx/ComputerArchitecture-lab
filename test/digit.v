`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:43:37 03/29/2015
// Design Name:   display
// Module Name:   D:/users/ComputerArchitecture/test/digit.v
// Project Name:  test
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: display
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module digit;

	// Inputs
	reg clk;

	// Outputs
	wire [7:0] dig;
	wire [7:0] segm;

	// Instantiate the Unit Under Test (UUT)
	display uut (
		.clk(clk), 
		.dig(dig), 
		.segm(segm)
	);

	initial begin
		// Initialize Inputs
		clk = 0;

		// Wait 100 ns for global reset to finish
		// Add stimulus here

	end
	always begin
	#10;
	clk = ~clk;
	end
      
endmodule

