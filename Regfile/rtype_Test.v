`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:23:29 03/22/2015
// Design Name:   Rtype
// Module Name:   D:/users/ComputerArchitecture/Regfile/rtype_Test.v
// Project Name:  Regfile
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Rtype
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module rtype_Test;

	reg	Clock,  Rst;
	reg[31:0]	Instr;

	parameter	ON_delay=80, OFF_delay=80;

	wire[31:0]	Adat, Bdat, Value;
	
	Rtype	Demo(Clock, Rst, Instr, Adat, Bdat, Value);
	
	always begin
		Clock =1;
		#ON_delay;
		Clock =0;
		#OFF_delay;
	end
	
	initial begin
		Rst=1;
		Instr=32'h01A88020;
		#160	Instr=32'h01C98822;
		#160	Instr=32'h01EA9024;
		#160	Instr=32'h030B9825;
		#160	Instr=32'h032CA02A;
		#1000	$dumpflush;
		$stop;
	end
      
endmodule

