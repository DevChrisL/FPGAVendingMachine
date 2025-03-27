# FPGA Vending Machine

This project implements a vending machine controller on an FPGA using Verilog. The controller leverages a finite state machine (FSM) to manage coin insertions and determine whether to dispense a product or not.

## Features

- **Finite State Machine (FSM) Based Control:**  
  The vending machine utilizes a Mealy FSM where outputs depend on both the current state and the inputs.
  
- **Coin Acceptance and Product Dispensing:**  
  Accepts coins of various denominations and dispenses products once the required amount is reached.

## FPGA Implementation

To implement the vending machine controller on an FPGA:

1. **Synthesis:**  
   Use an FPGA development tool (e.g., Xilinx Vivado or Intel Quartus) to synthesize the `vending.v` file.
   
2. **Generate Bitstream:**  
   Create the bitstream file from the synthesized design.
   
3. **Programming the FPGA:**  
   Program your FPGA with the generated bitstream.

