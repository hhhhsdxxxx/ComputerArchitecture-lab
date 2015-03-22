//Macro.vh
//macro definitions

//ALU CONTROL CODES
`define ALUC_CTL_AND	3'b000
`define ALUC_CTL_OR	3'b001
`define ALUC_CTL_ADD	3'b010
`define ALUC_CTL_SUB	3'b110
`define ALUC_CTL_SLT	3'b111
`define RTYPE_ADD		4'b0000
`define RTYPE_SUB		4'b0010
`define RTYPE_SLT		4'b1010
`define RTYPE_AND		4'b0100
`define RTYPE_OR		4'b0101
`define RTYPE_XOR		4'b0110
`define RTYPE_NOR		4'b0111
`define RTYPE_ADDU	4'b0001
`define RTYPE_SLTU	4'b1011