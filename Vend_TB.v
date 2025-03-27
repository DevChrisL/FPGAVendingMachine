`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:01:48 03/06/2023
// Design Name:   Vending
// Module Name:   C:/Computer System Design/Lab4CSD/Vend_TB.v
// Project Name:  Lab4CSD
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Vending
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Vend_TB;

	// Inputs
	reg clk;
	reg reset;
	reg quarter;
	reg nickel;
	reg dime;
	reg soda;
	reg diet;

	// Outputs
	wire dietO;
	wire sodaO;

	// Instantiate the Unit Under Test (UUT)
	Vending uut (
		.clk(clk), 
		.reset(reset), 
		.quarter(quarter), 
		.nickel(nickel), 
		.dime(dime), 
		.soda(soda), 
		.diet(diet), 
		.dietO(dietO), 
		.sodaO(sodaO)
	);
	
	main_module uut (
		.clk_in(clk_in)
		.clk_out(clk_out)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		quarter = 0;
		nickel = 0;
		dime = 0;
		soda = 0;
		diet = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

