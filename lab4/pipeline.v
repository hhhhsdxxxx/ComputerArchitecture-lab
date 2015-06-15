`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:50:16 05/05/2015 
// Design Name: 
// Module Name:    pipeline 
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
module pipeline(input wire CCLK, input wire [3:0]btn_in, output wire LED, output wire [7:0]digit, segment
    );
	wire [31:0] if_npc;
	wire [31:0] if_pc4;
	wire [31:0] if_inst;
	
	wire [31:0] id_pc4;	
	wire [31:0] id_inA;
	wire [31:0] id_inB;
	wire [31:0] id_imm;
	wire [4:0] id_destR;
	wire [4:0] id_regrt;
	wire [4:0] id_rt;
	wire [4:0] id_rd;
	wire [1:0]id_branch; 
	wire id_wreg;
	wire id_m2reg;
	wire id_wmem;
	wire [3:0] id_aluc;
	wire id_shift;
	wire id_aluimm;
	
	wire ex_wreg;
	wire ex_m2reg;
	wire ex_wmem;
	wire[31:0] ex_aluR;
	wire[31:0] ex_inB;
	wire[4:0] ex_destR;
	wire ex_zero;
	wire [1:0]ex_branch;
	wire[31:0]ex_pc;
	
	wire mem_wreg;
	wire mem_m2reg;
	wire[31:0] mem_mdata;
	wire[31:0] mem_aluR;
	wire[4:0] mem_destR;
	wire branch;
	wire[31:0] branch_pc;
	
	wire wb_wreg;
	wire[4:0] wb_destR;
	wire[31:0] wb_dest;
	
	wire [3:0] IF_ins_type; 
	wire [3:0] IF_ins_number;
	wire [3:0] ID_ins_type;
	wire [3:0] ID_ins_number;
	wire [3:0] EX_ins_type; 
	wire [3:0] EX_ins_number;
	wire [3:0] MEM_ins_type; 
	wire [3:0] MEM_ins_number;
	wire [3:0] WB_ins_type; 
	wire [3:0] WB_ins_number;
	wire [3:0] OUT_ins_type; 
	wire [3:0] OUT_ins_number;
	wire stall;
	wire [31:0] pc;
	wire [31:0] reg_content;
	wire [3:0] which_reg;
	wire [4:0] ex_rd;
	wire [4:0] dest;
	reg [7:0] clk_cnt;
	wire [31:0] ppc;
	wire [3:0] lcdd;
	wire rslcd, rwlcd, elcd;
	wire clk_1ms;
	wire [3:0] btn;
	wire [4:0]ex_rt;
	wire clk;
	
//	wire [4:0] if_rtt, id_rtt;
	
	reg [3:0] sw;
	reg [2:0] mode;
	reg [31:0] num;
	
	assign LED = btn[0];
	assign clk = btn[0];
	assign which_reg[3:0] = sw[3:0];
	assign dest[4:0] = ex_destR[4:0];
//	assign clk = btn_in[0];
//	assign if_rtt=id_rtt;
	initial begin
		clk_cnt <= 8'b0;
		sw <= 0;
		mode <= 0;
	end
	
	display d0(CCLK, num, digit, segment);
	
	pbtn p0(CCLK, btn_in[0], btn[0]);
	pbtn p1(CCLK, btn_in[1], btn[1]);
	pbtn p2(CCLK, btn_in[2], btn[2]);
	pbtn p3(CCLK, btn_in[3], btn[3]);
	
	always @(posedge btn[0]) begin
		clk_cnt <= clk_cnt + 1;
	end
	
	always@(posedge btn[3])begin
		if(sw < 6)
			sw <= sw+1;
		else
			sw <= 0;
	end
	
	always @(posedge btn[2])begin
		if(mode < 6)
			mode <= mode+1;
		else
			mode <= 0;
	end
	
	always @(posedge CCLK)begin
		case(mode[2:0])
		3'b000: num <= if_inst;
		3'b001: num <= {sw[3:0],reg_content[27:0]};
		3'b010: num[7:0] <= clk_cnt;
		3'b011: 
		begin
//			num[31:28] <= 1;
//			num[27:24] <= IF_ins_number;
//			num[23:20] <= IF_ins_type;
//			num[19:16] <= 0;
//			num[15:12] <= 2;
//			num[11:8]  <= ID_ins_number;
//			num[7:4]   <= ID_ins_type;
//			num[3:0]   <= 0;
//			num <= {3'b000,branch,3'b000,wb_wreg,wb_dest[23:0]};
			num <= {3'b000,id_rt[4:0],wb_dest[23:0]};
		end
		3'b100:
		begin
//			num[31:28] <= 3;
//			num[27:24] <= EX_ins_number;
//			num[23:20] <= EX_ins_type;
//			num[19:16] <= 0;
//			num[15:12] <= 4;
//			num[11:8]  <= MEM_ins_number;
//			num[7:4]   <= MEM_ins_type;
//			num[3:0]   <= 0;
			num <= {id_inA[15:0],id_inB[15:0]};
		end
		3'b101:
		begin
			num[31:28] <= 5;
			num[27:24] <= WB_ins_number;
			num[23:20] <= WB_ins_type;
			num[19:0] <= 0;
		end
		3'b110:
			num <= {11'b000_000_000_00,ex_rt[4:0],ppc[15:0]};
		endcase
	end
	
	assign pc [31:0] = if_npc[31:0];
	assign rst = btn[1];
//	assign rst = btn_in[1];
	if_stage x_if_stage(clk, rst, pc, branch_pc, branch, 
	  if_npc, if_pc4, if_inst, IF_ins_type, IF_ins_number, ID_ins_type, ID_ins_number, stall, ppc);

	id_stage x_id_stage(clk, rst, if_inst, if_pc4, wb_destR, wb_dest,wb_wreg, 
		id_wreg, id_m2reg, id_wmem, id_aluc, id_shift, id_aluimm, id_branch, id_pc4, id_inA, id_inB, id_imm, id_regrt,id_rt,id_rd, 
		ID_ins_type, ID_ins_number, EX_ins_type, EX_ins_number, {1'b0,which_reg}, reg_content, 
		branch_pc, branch, ex_m2reg, ex_rt, stall, mem_m2reg, mem_destR, mem_mdata, ex_wreg&(~mem_m2reg), dest, ex_aluR);
		
	ex_stage x_ex_stage(clk, rst,id_imm, id_inA, id_inB, id_wreg, id_m2reg, id_wmem, id_aluc, id_aluimm,id_shift, id_branch, id_pc4,id_regrt,id_rt,id_rd,
	  ex_wreg, ex_m2reg, ex_wmem, ex_aluR, ex_inB, ex_destR, ex_branch, ex_pc, ex_zero, 
	  EX_ins_type, EX_ins_number, MEM_ins_type, MEM_ins_number, ex_rt, stall);
	  
	mem_stage x_mem_stage(clk, rst, ex_destR, ex_inB, ex_aluR, ex_wreg, ex_m2reg, ex_wmem, ex_branch,ex_pc,ex_zero,  
	  mem_wreg, mem_m2reg, mem_mdata, mem_aluR, mem_destR, mem_branch, mem_pc,
	  MEM_ins_type, MEM_ins_number, WB_ins_type, WB_ins_number);

	wb_stage x_wb_stage(clk, rst, mem_destR, mem_aluR, mem_mdata, mem_wreg, mem_m2reg, 
	  wb_wreg, wb_dest, wb_destR, WB_ins_type, WB_ins_number,OUT_ins_type, OUT_ins_number);
endmodule
