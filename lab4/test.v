`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:47:35 05/05/2015
// Design Name:   pipeline
// Module Name:   D:/users/ComputerArchitecture/lab4/test.v
// Project Name:  lab4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: pipeline
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test;

	// Inputs
	reg CCLK;
	reg BTN3;
	reg BTN2;
	reg [3:0] SW;

	// Outputs
	wire LED;
	wire LCDE;
	wire LCDRS;
	wire LCDRW;
	wire [3:0] LCDDAT;

	// Instantiate the Unit Under Test (UUT)
	pipeline uut (
		.CCLK(CCLK), 
		.BTN3(BTN3), 
		.BTN2(BTN2), 
		.SW(SW), 
		.LED(LED), 
		.LCDE(LCDE), 
		.LCDRS(LCDRS), 
		.LCDRW(LCDRW), 
		.LCDDAT(LCDDAT)
	);

	initial begin
		// Initialize Inputs
		CCLK = 0;
		BTN3 = 0;
		BTN2 = 0;
		SW = 0;

		// Wait 100 ns for global reset to finish
		#10;
			BTN2 = 1;
		#10;
			BTN2 = 0;
		// Add stimulus here

	end
   always begin
		#1;
		CCLK = ~CCLK;
	end
	always begin
		#5;
		BTN3 = ~BTN3;
	end
endmodule

