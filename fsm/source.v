`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:36:05 01/23/2015 
// Design Name: 
// Module Name:    source 
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
module source(clk,rst,entered_pin,ammount_entered,OP,IC,CS,MT,blance,pin,y0,y1,y2,y3,y4,y5,y6,y7,y8,y9,y10,y11);
input wire clk,rst,IC,CS,MT; //IC=insert_card,CS=card_scan,MT=more_transaction
input wire [1:0] entered_pin;
input wire [1:0] ammount_entered;
input wire [1:0] OP; //OP= option that is selected by the user
output reg y0,y1,y2,y3,y4,y5,y6,y7,y8,y9,y10,y11;
input wire [1:0] blance;
input wire  [1:0] pin;
reg [1:0] blance_reg;
reg [1:0] pin_reg;
localparam [3:0] idle_state=4'b0000, // s0
					  scan_card=4'b0001,  //s1
					  enter_pin=4'b0010,  //s2
					  option_select=4'b0011, //s3
					  invalid=4'b0100,     //s4
					  withdraw=4'b0101,  //s5
					  blance_check=4'b0110,  //s6
					  deposit=4'b0111,    //s7
					  money_withdraw=4'b1000,  //s8
					  blance_show=4'b1001,  //s9
					  money_deposited=4'b1010,  //s10
					  anything_else=4'b1011;  //s11
	
reg [3:0] current_state, next_state;




always @(posedge clk or negedge rst)
begin
	if(!rst)
	begin
		current_state<=idle_state;
		
		end
	else
		current_state<=next_state;
end


always @(*)
begin
y0 <= 0;
		y1 <= 0; 
		y2 <= 0;
		y3 <= 0;
		y4 <= 0;
		y5 <= 0;
		y6 <= 0;
		y7 <= 0;
		y8 <= 0;
		y9 <= 0;
		y10 <= 0;
		y11 <= 0;
next_state <= current_state;
blance_reg <= blance;
pin_reg <= pin;
case(current_state)
		idle_state:begin
							if(IC)
								begin
								next_state <= scan_card;
								y1 <= 1;
								end
							else
								begin
								next_state <= idle_state;
								y0 <= 1;
								end
					  end
		scan_card: begin
							if(CS)
								begin
								next_state <= enter_pin;
								y2 <= 1;
								end
							else
								begin
								next_state <= idle_state;
								y0 <= 1;
								end
					  end
		enter_pin: begin
							if(entered_pin == pin_reg)
								begin
									next_state <= option_select;
									y3 <= 1;
								end
							else
								begin
								next_state <= invalid;
								y4 <= 1;
								end
					  end
		invalid: begin
						next_state <= idle_state;
						y0 <= 1;
					end
		option_select:begin
							if(OP == 2'b10)
								begin
								next_state <= withdraw;
								y5 <= 1;
								end
							else if(OP == 2'b01)
								begin
								next_state <= blance_check;
								y6 <= 1;
								end
							else if(OP == 2'b11)
								begin
								next_state <= deposit;
								y7 <= 1;
								end
							else
								begin
								next_state <= invalid;
								y4 <= 1;
								end
						  end
		withdraw: begin
							if(ammount_entered <= blance_reg) 		//if ammount entered is less that blance in account
								begin
								next_state <= money_withdraw;
								y8 <= 1;
								end
							else
								begin
								next_state <= invalid;
								y4 <= 1;
								end
					 end
		blance_check: begin
							next_state <= blance_show;
							y9 <= 1;
						  end
		deposit: begin
							if(ammount_entered <= 11) //if entered ammount is 16 bit num
								begin
								next_state <= money_deposited;
								y10 <= 1;
								end
							else
								begin
								next_state <= invalid;
								y4 <= 1;
								end
					end
		money_withdraw: begin
								next_state <= anything_else;
								y11 <= 1;
							 end
		blance_show: begin
							next_state <= anything_else;
							y11 <= 1;
						 end
		money_deposited: begin
									next_state <= anything_else;
									y11 <= 1;
							  end
		anything_else: begin
								if(MT)
									begin
									next_state <= option_select;
									y3 <= 1;
									end
								else
									begin
									next_state <= idle_state;
									y0 <= 1;
									end
							end
endcase
end


endmodule

