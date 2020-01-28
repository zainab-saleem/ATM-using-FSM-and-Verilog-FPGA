`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:36:47 01/23/2015
// Design Name:   source
// Module Name:   C:/.Xilinx/fsm/atmtest.v
// Project Name:  fsm
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: source
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module atmtest;

	// Inputs
	reg clk;
	reg rst;
	reg [1:0] entered_pin;
	reg [1:0] ammount_entered;
	reg [1:0] OP;
	reg IC;
	reg CS;
	reg MT;
	reg [1:0] blance;
	reg [1:0] pin;

	// Outputs
	wire y0;
	wire y1;
	wire y2;
	wire y3;
	wire y4;
	wire y5;
	wire y6;
	wire y7;
	wire y8;
	wire y9;
	wire y10;
	wire y11;

	// Instantiate the Unit Under Test (UUT)
	source uut (
		.clk(clk), 
		.rst(rst), 
		.entered_pin(entered_pin), 
		.ammount_entered(ammount_entered), 
		.OP(OP), 
		.IC(IC), 
		.CS(CS), 
		.MT(MT), 
		.blance(blance), 
		.pin(pin), 
		.y0(y0), 
		.y1(y1), 
		.y2(y2), 
		.y3(y3), 
		.y4(y4), 
		.y5(y5), 
		.y6(y6), 
		.y7(y7), 
		.y8(y8), 
		.y9(y9), 
		.y10(y10), 
		.y11(y11)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 0;
		entered_pin = 0;
		ammount_entered = 0;
		OP = 0;
		IC = 0;
		CS = 0;
		MT = 0;
		blance = 0;
		pin = 0;
		

		// Wait 100 ns for global reset to finish
		#50;
		
		rst = 1;
		entered_pin = 00;
		ammount_entered = 0;
		OP = 0;
		IC = 0;
		CS = 0;
		MT = 0;
		blance =11;
		pin = 11;
		
		#50;
		
		entered_pin = 00;
		ammount_entered = 0;
		OP = 0;
		IC = 1;
		CS = 0;
		MT = 0;
		blance =11;
		pin = 11;
        
		  #50;
		  entered_pin = 0;
		ammount_entered = 0;
		OP = 0;
		IC = 1;
		CS = 1;
		MT = 0;
		blance = 11;
		pin = 11;
		
		#50;
		  entered_pin = 11;
		ammount_entered = 0;
		OP = 0;
		IC = 1;
		CS = 1;
		MT = 0;
		blance = 11;
		pin = 11;
		
		#50;
		  entered_pin = 11;
		ammount_entered = 0;
		OP = 2'b11;
		IC = 1;
		CS = 1;
		MT = 0;
		blance = 11;
		pin = 11;
		 // here
		#50;
		  entered_pin = 11;
		ammount_entered =2'b11;
		OP = 2'b11;
		IC = 1;
		CS = 1;
		MT = 0;
		blance = 11;
		pin = 11;
		
		#50;
		  entered_pin = 11;
		ammount_entered =2'b11;
		OP = 2'b11;
		IC = 1;
		CS = 1;
		MT = 0;
		blance = 11;
		pin = 11;
		
		 
		 #50;
		  entered_pin = 11;
		ammount_entered =2'b11;
		OP = 2'b11;
		IC = 1;
		CS = 1;
		MT = 0;
		blance = 11;
		pin = 11;
		
		#50;
		  entered_pin = 11;
		ammount_entered =2'b11;
		OP = 2'b11;
		IC = 1;
		CS = 1;
		MT = 0;
		blance = 11;
		pin = 11;
		
		 
		 #50;
		  entered_pin = 11;
		ammount_entered =2'b11;
		OP = 2'b11;
		IC = 1;
		CS = 1;
		MT = 0;
		blance = 11;
		pin = 11;
		
		#50;
		  entered_pin = 11;
		ammount_entered =2'b11;
		OP = 2'b11;
		IC = 1;
		CS = 1;
		MT = 0;
		blance = 11;
		pin = 11;
		
		#50;
		  entered_pin = 11;
		ammount_entered =2'b11;
		OP = 2'b11;
		IC = 1;
		CS = 1;
		MT = 1;
		blance = 11;
		pin = 11;
		
		#50;
		  entered_pin = 11;
		ammount_entered =2'b11;
		OP = 2'b11;
		IC = 1;
		CS = 1;
		MT = 1;
		blance = 11;
		pin = 11;
		
		
		
		
		
		#50 $finish;
		// Add stimulus here

	end
      always
		#50 clk=(~clk);
		initial
			$monitor($time, "IC=%b,CS=%b,blance=%b,pin=%b,entered_pin=%b,ammount_entered=%b,OP=%b,MT=%b,y0=%b,y1=%b,y2=%b,y3=%b,y4=%b,y5=%b,y6=%b,y7=%b,y8=%b,y9=%b,y10=%b,y11=%b",IC,CS,blance,pin,entered_pin,ammount_entered,OP,MT,y0,y1,y2,y3,y4,y5,y6,y7,y8,y9,y10,y11);


endmodule

