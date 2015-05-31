`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:05:30 05/30/2015
// Design Name:   pipeline
// Module Name:   D:/users/ComputerArchitecture/lab4/test2.v
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

module test2;

	// Inputs
	reg CCLK;
	reg [3:0] btn_in;

	// Outputs
	wire LED;
	wire [7:0] digit;
	wire [7:0] segment;

	// Instantiate the Unit Under Test (UUT)
	pipeline uut (
		.CCLK(CCLK), 
		.btn_in(btn_in), 
		.LED(LED), 
		.digit(digit), 
		.segment(segment)
	);

	initial begin
		// Initialize Inputs
		CCLK = 0;
		btn_in = 0;
		
		// Wait 100 ns for global reset to finish
		#10;
		btn_in[1] = 1;
		#20;
		btn_in[1] = 0;
        
		// Add stimulus here

	end
   always begin
		#1;
		CCLK = ~CCLK;
	end
	always begin
		#5;
		btn_in[0] = ~btn_in[0];  
	end
endmodule

