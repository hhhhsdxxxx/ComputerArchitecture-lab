`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:28:26 03/22/2015 
// Design Name: 
// Module Name:    Regfile 
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
module RegFile(clk, regA, regB, regW, Wdat, Adat, Bdat, RegWrite
    );
	input clk;
	input [4:0] regA;
   input [4:0] regB;
   input [4:0] regW;
   input [31:0] Wdat;
   input RegWrite;
	 
   output [31:0] Adat, Bdat;
   reg [31:0] Adat, Bdat;

	reg[31:0]	Szero, Sat, Sa0, Sa1, Sv0, Sv1, Sv2, Sv3;	//0
	reg[31:0]	St0, St1, St2, St3, St4, St5, St6, St7;	//8
	reg[31:0]	Ss0, Ss1, Ss2, Ss3, Ss4, Ss5, Ss6, Ss7;	//16
	reg[31:0]	St8, St9, Sk0, Sk1, Sgp, Sfp, Ssp, Sra;	//24

	initial begin
		Szero = 0;	//¼Ä´æÆ÷×é
		Sat = 1;
		Sa0 = 2;
		Sa1 = 3;
		Sv0 = 4;
		Sv1 = 5;
		Sv2 = 6;
		Sv3 = 7;
		St0 = 8;
		St1 = 9;
		St2 = 10;
		St3 = 11;
		St4 = 12;
		St5 = 13;
		St6 = 14;
		St7 = 15;
		Ss0 = 16;
		Ss1 = 17;
		Ss2 = 18;
		Ss3 = 19;
		Ss4 = 20;
		Ss5 = 21;
		Ss6 = 22;
		Ss7 = 23;
		St8 = 24;
		St9 = 25;
		Sk0 = 26;
		Sk1 = 27;
		Sgp = 28;
		Sfp = 29;
		Ssp = 30;
		Sra = 31;
	end
	always @ (posedge clk)begin
		case(regA)
		//¶Á¼Ä´æÆ÷regA
		5'b00000: Adat <= Szero;
		5'b00001: Adat <= Sat;
		5'b00010: Adat <= Sa0;
		5'b00011: Adat <= Sa1;
		5'b00100: Adat <= Sv0;
		5'b00101: Adat <= Sv1;
		5'b00110: Adat <= Sv2;
		5'b00111: Adat <= Sv3;
		5'b01000: Adat <= St0;
		5'b01001: Adat <= St1;
		5'b01010: Adat <= St2;
		5'b01011: Adat <= St3;
		5'b01100: Adat <= St4;
		5'b01101: Adat <= St5;
		5'b01110: Adat <= St6;
		5'b01111: Adat <= St7;
		5'b10000: Adat <= Ss0;
		5'b10001: Adat <= Ss1;
		5'b10010: Adat <= Ss2;
		5'b10011: Adat <= Ss3;
		5'b10100: Adat <= Ss4;
		5'b10101: Adat <= Ss5;
		5'b10110: Adat <= Ss6;
		5'b10111: Adat <= Ss7;
		5'b11000: Adat <= St8;
		5'b11001: Adat <= St9;
		5'b11010: Adat <= Sk0;
		5'b11011: Adat <= Sk1;
		5'b11100: Adat <= Sgp;
		5'b11101: Adat <= Sfp;
		5'b11110: Adat <= Ssp;
		5'b11111: Adat <= Sra;
		endcase
		case(regB)
		//¶Á¼Ä´æÆ÷regB
		5'b00000: Bdat <= Szero;
		5'b00001: Bdat <= Sat;
		5'b00010: Bdat <= Sa0;
		5'b00011: Bdat <= Sa1;
		5'b00100: Bdat <= Sv0;
		5'b00101: Bdat <= Sv1;
		5'b00110: Bdat <= Sv2;
		5'b00111: Bdat <= Sv3;
		5'b01000: Bdat <= St0;
		5'b01001: Bdat <= St1;
		5'b01010: Bdat <= St2;
		5'b01011: Bdat <= St3;
		5'b01100: Bdat <= St4;
		5'b01101: Bdat <= St5;
		5'b01110: Bdat <= St6;
		5'b01111: Bdat <= St7;
		5'b10000: Bdat <= Ss0;
		5'b10001: Bdat <= Ss1;
		5'b10010: Bdat <= Ss2;
		5'b10011: Bdat <= Ss3;
		5'b10100: Bdat <= Ss4;
		5'b10101: Bdat <= Ss5;
		5'b10110: Bdat <= Ss6;
		5'b10111: Bdat <= Ss7;
		5'b11000: Bdat <= St8;
		5'b11001: Bdat <= St9;
		5'b11010: Bdat <= Sk0;
		5'b11011: Bdat <= Sk1;
		5'b11100: Bdat <= Sgp;
		5'b11101: Bdat <= Sfp;
		5'b11110: Bdat <= Ssp;
		5'b11111: Bdat <= Sra;
		endcase
	end
	always @ (negedge clk)begin
		if(RegWrite==1)
		case(regW)
		//Ð´¼Ä´æÆ÷Wdat
		5'b00000: Szero <= Wdat;
		5'b00001: Sat <= Wdat;
		5'b00010: Sa0 <= Wdat;
		5'b00011: Sa1 <= Wdat;
		5'b00100: Sv0 <= Wdat;
		5'b00101: Sv1 <= Wdat;
		5'b00110: Sv2 <= Wdat;
		5'b00111: Sv3 <= Wdat;
		5'b01000: St0 <= Wdat;
		5'b01001: St1 <= Wdat;
		5'b01010: St2 <= Wdat;
		5'b01011: St3 <= Wdat;
		5'b01100: St4 <= Wdat;
		5'b01101: St5 <= Wdat;
		5'b01110: St6 <= Wdat;
		5'b01111: St7 <= Wdat;
		5'b10000: Ss0 <= Wdat;
		5'b10001: Ss1 <= Wdat;
		5'b10010: Ss2 <= Wdat;
		5'b10011: Ss3 <= Wdat;
		5'b10100: Ss4 <= Wdat;
		5'b10101: Ss5 <= Wdat;
		5'b10110: Ss6 <= Wdat;
		5'b10111: Ss7 <= Wdat;
		5'b11000: St8 <= Wdat;
		5'b11001: St9 <= Wdat;
		5'b11010: Sk0 <= Wdat;
		5'b11011: Sk1 <= Wdat;
		5'b11100: Sgp <= Wdat;
		5'b11101: Sfp <= Wdat;
		5'b11110: Ssp <= Wdat;
		5'b11111: Sra <= Wdat;
		endcase
	end

endmodule
