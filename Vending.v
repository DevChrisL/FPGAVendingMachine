`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:34:33 03/04/2023 
// Design Name: 
// Module Name:    Vending 
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
module Vending(
		input clk, reset,
		input quarter, nickel, dime, soda, diet,
		output reg GiveDiet = 0, GiveSoda = 0
   );
	//Moore FSM
	parameter Cents0   = 4'b0000;
	parameter Cents5   = 4'b0001;
	parameter Cents10  = 4'b0010;
	parameter Cents15  = 4'b0011;
	parameter Cents20  = 4'b0100;
	parameter Cents25  = 4'b0101;
	parameter Cents30  = 4'b0110;
	parameter Cents35  = 4'b0111;
	parameter Cents40  = 4'b1000;
	parameter Vend = 4'b1001;
	
	reg [9:0] state_reg = Cents0;
	
	always @ (posedge clk) begin
		if(reset) begin
			state_reg <= Cents0;
			GiveDiet <= 0;
			GiveSoda <= 0;
		end
		else begin
			case (state_reg)
				Cents0: begin
					GiveDiet <= 0;
					GiveSoda <= 0;
					if(quarter)
						state_reg <= Cents25;
					else if (nickel)
						state_reg <= Cents5;
					else if (dime)
						state_reg <= Cents10;
					end
				Cents5: begin
					if(quarter)
						state_reg <= Cents30;
					else if (nickel)
						state_reg <= Cents10;
					else if (dime)
						state_reg <= Cents15;
					end
				Cents10: begin
					if(quarter)
						state_reg <= Cents35;
					else if (nickel)
						state_reg <= Cents15;
					else if (dime)
						state_reg <= Cents20;
					end
				Cents15: begin
					if(quarter)
						state_reg <= Cents40;
					else if (nickel)
						state_reg <= Cents20;
					else if (dime)
						state_reg <= Cents25;
					end
				Cents20: begin
					if(quarter)
						state_reg <= Vend;
					else if (nickel)
						state_reg <= Cents25;
					else if (dime)
						state_reg <= Cents30;
					end
				Cents25: begin
					if(quarter)
						state_reg <= Vend;
					else if (nickel)
						state_reg <= Cents30;
					else if (dime)
						state_reg <= Cents35;
					end
				Cents30: begin
					if(quarter)
						state_reg <= Vend;
					else if (nickel)
						state_reg <= Cents35;
					else if (dime)
						state_reg <= Cents40;
					end
				Cents35: begin
					if(quarter)
						state_reg <= Vend;
					else if (nickel)
						state_reg <= Cents40;
					else if (dime)
						state_reg <= Vend;
					end
				Cents40:
					state_reg <= Vend;
				Vend: begin
					state_reg <= Cents0;
					GiveDiet <= diet;
					GiveSoda <= soda;
				 end
			endcase
		end
	end
endmodule

