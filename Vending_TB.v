`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:32:31 03/06/2023
// Design Name:   Vending
// Module Name:   C:/Computer System Design/Lab4CSD/Vending_TB.v
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

module Vending_TB;
	// Inputs
	reg clk;
	reg reset;
	reg quarter;
	reg nickel;
	reg dime;
	reg soda;
	reg diet;
	// Outputs
	wire GiveDiet;
	wire GiveSoda;
	// Instantiate the Unit Under Test (UUT)
	Vending uut (
		.clk(clk), 
		.reset(reset), 
		.quarter(quarter), 
		.nickel(nickel), 
		.dime(dime), 
		.soda(soda), 
		.diet(diet), 
		.GiveDiet(GiveDiet), 
		.GiveSoda(GiveSoda)
	);
	
	initial begin
	clk = 1'b0;
	forever #5 clk = ~clk;
	end
	
	initial begin
		// Initialize Inputs
		reset = 0;
		quarter = 0;
		nickel = 0;
		dime = 0;
		soda = 0;
		diet = 0;
		// Test Quarters
		#5;
		soda = 1;
		quarter = 1;
		#5;
		quarter = 0;
		#5;
		quarter = 1;
		#5
		quarter = 0;
		// Test Dime
		#15;
		dime = 1;
		#5;
		dime = 0;
		#5;
		dime = 1;
		#5;
		dime = 0;
		#5;
		dime = 1;
		#5;
		dime = 0;
		#5;
		dime = 1;
		#5;
		dime = 0;
		#5;
		dime = 1;
		#5;
		dime = 0;
		// Test nickels
		#15;
		soda = 0;
		diet = 1;
		nickel = 1;
		#5;
		nickel = 0;
		#5;
		nickel = 1;
		#5
		nickel = 0;
		#5;
		nickel = 1;
		#5;
		nickel = 0;
		#5;
		nickel = 1;
		#5
		nickel = 0;
		#5;
		nickel = 1;
		#5;
		nickel = 0;
		#5;
		nickel = 1;
		#5;
		nickel = 0;
		#5;
		nickel = 1;
		#5
		nickel = 0;
		#5;
		nickel = 1;
		#5;
		nickel = 0;
		#5;
		nickel = 1;
		#5
		nickel = 0;
		// Multiple denominations 
		#15;
		quarter = 1;
		#5;
		quarter = 0;
		#5;
		dime = 1;
		#5;
		dime = 0;
		#5;
		nickel = 1;
		#5;
		nickel = 0;
		#5;
		nickel = 1;
		#5;
		nickel = 0;
		// Reset Test
		#15;
		quarter = 1;
		#5;
		quarter = 0;
		#5;
		reset = 1;
		#5;
		reset = 0;
		#5;
		quarter = 1;
		#5;
		quarter = 0;
		#5;
		quarter = 1;
		#5;
		quarter = 0;
		// Add stimulus here
		#200 $finish;
	end
endmodule

