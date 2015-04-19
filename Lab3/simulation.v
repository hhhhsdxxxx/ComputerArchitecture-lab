`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:23:49 04/15/2015
// Design Name:   top
// Module Name:   D:/users/ComputerArchitecture/Lab3/simulation.v
// Project Name:  Lab3
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: top
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
	reg BTN3;
	reg BTN2;

	// Outputs
	wire [7:0] LED;
	wire LCDE;
	wire LCDRS;
	wire LCDRW;
	wire [3:0] LCDDAT;

	// Instantiate the Unit Under Test (UUT)
	top uut (
		.CCLK(CCLK), 
		.BTN3(BTN3), 
		.BTN2(BTN2), 
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

		// Wait 100 ns for global reset to finish
		#10;
		BTN2=1;
		#50;
		BTN2=0;
		#800;
      BTN2=1;
		#100;
		BTN2=0;
		// Add stimulus here

	end
   always begin
		#1;
		CCLK = ~CCLK;
	end
	always begin
		#5;
		BTN3=~BTN3;
	end
endmodule

