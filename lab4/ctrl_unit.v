`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:58:53 05/05/2015 
// Design Name: 
// Module Name:    ctrl_unit 
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
`define OP_LW		6'b100011
`define OP_SW		6'b101011
`define OP_BEQ		6'b000100
`define OP_BNE 	6'b000101
`define OP_JMP		6'b000010
`define OP_JAL		6'b000011
`define OP_NOP		32'b00000_100000
`define OP_ALUOp	6'b000000
`define OP_ADDI	6'b001000
`define OP_ADDIU	6'b001001
`define OP_ANDI	6'b001100
`define OP_ORI		6'b001101
`define OP_XORI	6'b001110
`define OP_LUI		6'b001111
`define OP_SLTI	6'b001010
`define OP_SLTIU	6'b001011

//ALU FUNCTION CODE
`define FUNC_ADD		6'b100000
`define FUNC_ADDU		6'b100001
`define FUNC_SUB		6'b100010
`define FUNC_SUBU		6'b100011
`define FUNC_AND		6'b100100
`define FUNC_OR		6'b100101
`define FUNC_XOR		6'b100110
`define FUNC_NOR		6'b100111
`define FUNC_SLT		6'b101010
`define FUNC_SLTU		6'b101011
`define FUNC_SLL		6'b000000
`define FUNC_SRL		6'b000010
`define FUNC_SRA		6'b000011
`define FUNC_SLLV		6'b000100
`define FUNC_SRLV		6'b000110
`define FUNC_SRAV		6'b000111
`define FUNC_JR		6'b001000

//ALU CODE
`define ALU_ADD		4'b0000
`define ALU_SUB		4'b0010
`define ALU_AND		4'b0100
`define ALU_OR			4'b0101
`define ALU_NOR		4'b0111
`define ALU_XOR		4'b0110  
`define ALU_SLT		4'b1000
`define ALU_SLL		4'b1100
`define ALU_SLTU		4'b1001
`define ALU_SRL		4'b1101
`define ALU_SRA		4'b1111
`define ALU_NONE		4'b1110

//INST TYPE CODE
`define	INST_TYPE_NOP	4'b0000
`define	INST_TYPE_ADD	4'b0001
`define	INST_TYPE_SUB	4'b0010
`define	INST_TYPE_AND	4'b0011
`define	INST_TYPE_OR	4'b0100
`define	INST_TYPE_NOR	4'b0101
`define	INST_TYPE_LW	4'b0110
`define	INST_TYPE_SW	4'b0111
`define	INST_TYPE_BEQ	4'b1000
`define	INST_TYPE_JMP	4'b1001
`define	INST_TYPE_BNE	4'b1010
`define	INST_TYPE_SLT	4'b1011
`define	INST_TYPE_SLL	4'b1100
`define	INST_TYPE_SRL	4'b1101
`define	INST_TYPE_SRA	4'b1110
`define	INST_TYPE_NONE	4'b1111

module ctrl_unit(clk, rst, if_instr, instr, cu_branch, cu_wreg, cu_m2reg, cu_wmem, cu_aluc, cu_shift, cu_aluimm, cu_sext, cu_regrt, ex_m2reg, ex_rtt, cu_lui, cu_jr, cu_jal, stall);
	
	input clk;
	input rst;
	input [31:0] instr;
	input [31:0] if_instr;
	input [4:0] ex_rtt;
	input ex_m2reg;
	output [1:0]cu_branch;
	output cu_wreg;
	output cu_m2reg;
	output cu_wmem;
	output [3:0] cu_aluc;
	output cu_shift;
	output cu_aluimm;
	output cu_sext;
	output cu_regrt;
	output stall;
	output cu_lui;
	output cu_jr;
	output cu_jal;
	wire [5:0] func;
	wire [5:0] opcode;
	wire [4:0] rs;
	wire [4:0] rt;
	wire [4:0] rd;
	
	wire [5:0] if_func;
	wire [5:0] if_opcode;
	wire [4:0] if_rs;
	wire [4:0] if_rt;
	wire [4:0] if_rd; 
	
	wire [4:0] ex_rs;
	wire [4:0] ex_rt;
	wire [4:0] ex_rd;
	wire [4:0] mem_rt;
	wire [4:0] mem_rd;
	wire [4:0] wb_rd;
	wire [4:0] wb_rt;
	wire [5:0] ex_op;
	wire [5:0] mem_op;
	wire [5:0] wb_op;

	reg [31:0] ex_instr;
	reg [31:0] mem_instr;
	reg [31:0] wb_instr;
	reg [3:0] cu_aluc;
	
	assign opcode[5:0] =instr[31:26];
	assign rs[4:0] = instr[25:21];
	assign rt[4:0] = instr[20:16];
	assign rd[4:0] = instr[15:11];
	assign func[5:0] = instr[5:0];
	
	assign if_opcode[5:0] =if_instr[31:26];
	assign if_rs[4:0] = if_instr[25:21];
	assign if_rt[4:0] = if_instr[20:16];
	assign if_rd[4:0] = if_instr[15:11];
	assign if_func[5:0] = if_instr[5:0];
	assign cu_jal = (opcode==`OP_JAL);
	assign ex_rs[4:0] = ex_instr[25:21];
	assign ex_rt[4:0] = ex_instr[20:16];
	assign ex_rd[4:0] = ex_instr[15:11];
	assign mem_rt[4:0] = mem_instr[20:16];
	assign mem_rd[4:0] = mem_instr[15:11];
	assign wb_rd[4:0] = wb_instr[15:11];
	assign wb_rt[4:0] = wb_instr[20:16];
	assign ex_op[5:0] = ex_instr[31:26];
	assign mem_op[5:0] = mem_instr[31:26];
	assign wb_op[5:0] = wb_instr[31:26];
	assign cu_jr = (opcode==`OP_ALUOp)&&(func==`FUNC_JR);
	assign cu_branch[0] = (opcode==`OP_BEQ || opcode==`OP_JMP || opcode==`OP_JAL || cu_jr)?1:0; //if instr type == BEQ then 1 else 0
	assign cu_branch[1] = (opcode==`OP_BNE || opcode==`OP_JMP || opcode==`OP_JAL || cu_jr)?1:0;
	assign cu_regrt = (opcode==`OP_ALUOp)?0:1; //if instr type = R type then 0 else 1;
	assign cu_sext = (opcode==`OP_BEQ || opcode==`OP_BNE || opcode==`OP_ADDI || opcode==`OP_SLTI)?1:0;//when need to sign extend?
	assign cu_lui = opcode==`OP_LUI;
	assign cu_wreg = ((opcode==`OP_ALUOp || cu_m2reg==1 || opcode==`OP_ADDI || opcode==`OP_ANDI || opcode==`OP_ORI || opcode==`OP_XORI || opcode==`OP_ADDIU 
							|| opcode==`OP_SLTI || opcode==`OP_SLTIU || opcode==`OP_LUI) && instr!=0)?1:0;//when need to write reg?
	assign cu_m2reg = (opcode==`OP_LW)?1:0;//when need to write mem to reg??
	assign cu_wmem = (opcode==`OP_SW)?1:0;//when need to enable write mem?
	assign cu_shift = ((opcode == `OP_ALUOp) && (func[5:2] == 4'b0))? 1 : 0;
	assign cu_aluimm = (opcode != `OP_ALUOp && opcode != `OP_BNE && opcode != `OP_BEQ && opcode != `OP_JMP && opcode != `OP_JAL)?1:0;
	assign stall = ex_m2reg?(cu_regrt?((rs==ex_rtt && rs!=0)?1:0):(((rs==ex_rtt&&rs!=0) || (rt==ex_rtt&&rt!=0))?1:0)):0;
	
	
	always @ (posedge clk or posedge rst)
		if(rst == 1)
		begin
			
		end
		else
		begin
			wb_instr[31:0] <= mem_instr[31:0];
			mem_instr[31:0] <= ex_instr[31:0];
			ex_instr[31:0] <= instr[31:0];
		end
	
	always @(opcode or func) begin
			case(opcode)
				`OP_ADDI: begin
					cu_aluc <= `ALU_ADD;
				end
				`OP_ANDI: begin
					cu_aluc <= `ALU_AND;
				end
				`OP_ORI: begin
					cu_aluc <= `ALU_OR;
				end
				`OP_XORI: begin
					cu_aluc <= `ALU_XOR;
				end
				`OP_SLTI: begin
					cu_aluc <= `ALU_SLT;
				end
				`OP_SLTIU: begin
					cu_aluc <= `ALU_SLT;
				end
				`OP_ADDIU: begin
					cu_aluc <= `ALU_ADD;
				end
//				`OP_BEQ: begin
//					cu_aluc <= `ALU_SUB;
//				end
//				`OP_BNE: begin
//					cu_aluc <= `ALU_SUB;
//				end
				`OP_ALUOp: begin
					case(func)
						`FUNC_ADD: begin
							cu_aluc <= `ALU_ADD;
						end
						`FUNC_ADDU: begin
							cu_aluc <= `ALU_ADD;
						end
						`FUNC_SUB: begin
							cu_aluc <= `ALU_SUB;
						end
						`FUNC_SUBU: begin
							cu_aluc <= `ALU_SUB;
						end
						`FUNC_AND: begin
							cu_aluc <= `ALU_AND;
						end
						`FUNC_XOR: begin
							cu_aluc <= `ALU_XOR;
						end
						`FUNC_OR: begin
							cu_aluc <= `ALU_OR;
						end
						`FUNC_NOR: begin
							cu_aluc <= `ALU_NOR;
						end
						`FUNC_SLT: begin
							cu_aluc <= `ALU_SLT;
						end
						`FUNC_SLTU: begin
							cu_aluc <= `ALU_SLTU;
						end
						`FUNC_SLL: begin
							cu_aluc <= `ALU_SLL;
						end
						`FUNC_SRL: begin
							cu_aluc <= `ALU_SRL;
						end
						`FUNC_SRA: begin
							cu_aluc <= `ALU_SRA;
						end
						`FUNC_SLLV: begin
							cu_aluc <= `ALU_SLL;
						end
						`FUNC_SRLV: begin
							cu_aluc <= `ALU_SRL;
						end
						`FUNC_SRAV: begin
							cu_aluc <= `ALU_SRA;
						end
					endcase
				end
				default: begin
					cu_aluc <= `ALU_ADD;
				end
			endcase
		end
endmodule
