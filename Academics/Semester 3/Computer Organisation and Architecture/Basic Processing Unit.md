In this chapter, we basically understand the processing unit which actually executes the machine-language instructions.

# Fundamentals

A typical programming tasks involves the execution of a set of instructions. Each instruction is fetched one at a time and executed. The program counter keeps track of the current instruction that has to be executed. It is brought into the instruction register and executed after which the program counter is incremented as well.

The instruction register holds the instruction until its execution is completed.

$$IR \leftarrow [[PC]]$$
$$PC \leftarrow [PC] + 4$$
$$\text{Carry out the instruction after this!}$$

The main types of things which can be executed are:

1. Load
	1. From memory
	2. From registers
2. Arithmetic Operations
3. Store

![[Hardware Components of a Processor.png]]

The Processor memory interface is used whenever there is a read-write operation to the memory in order to either load some data into a general process register or to write to a memory location.

The Instruction Address generator is responsible for correctly incrementing the PC counter.

The register file consists of memory locations that are organized into the general purpose registers that are used to store the operands of the instructions.

The ALU is used to perform the actual calculations and required computation.

## Data Processing Hardware

A typical computation always uses the data that is used in registers, and passes it through combinational circuits in order to perform computations.

Registers consist of edge-triggered flip-flops into which new data is loaded at the edge of the active clock. Here the active clock is the rising edge. The time in between the rising edges should be great enough to allow the combinational circuits to perform their computation.

# Hardware Components

## Register File

The register file is a small and fast memory block. It consists of an array of memory locations that can be read and written to at extremely fast speeds. The access circuitry allows for two registers to be read at the same time (as A and B).

The register file has two inputs which decide which registers have to be read. These are connected to the two fields in the instruction register. It also consists of an input field which specifies which register to store data in. 

There are two ways of implementing this. We can either just have one set of registers with duplicate data paths and access circuitry that allows two registers to be read from at the same time. The other version of this would be to have two blocks and two copies of the same register file. These two files will have identical content.

## Datapath

### Arithmetic Operations

1. Fetch the instruction and store it in the IR. Also increment the PC
2. Decode the instruction and fetch the operands
3. Perform the Computation
4. No action
5. Load the result into destination register

### Store Instructions

1. Fetch the instruction into the IR and increment the PC
2. Decode the instruction and fetch the operands
3. Compute the effective address
4. Store the contents of the register into the memory location
5. No action.

The No action is in order to add a useless step so that it can fit into the 5 staged pipeline that is common with RISC architectures of the CPUs.

### Stages

1. Fetching Instruction
2. Decoding Instruction and Reading Source Registers
3. ALU
4. Memory Access
5. Destination Register

![[Processor Datapath.png]]

There is a main data bus that is running in the middle. The PC, MAR, MDR, Y are connected to the left, and the general purpose registers, IR, and instruction decoder and control logic are connected to the right along with a temporary register.

It is also important to note that MDR has two inputs and two outputs. The data stored in the MDR can be put on either bus, i.e, the internal processor bus as well as the memory bus.

The input of MAR is connected to the internal bus and the output is the external memory bus

With very few exceptions:

1. Transfer a word of data from one processor register to another or the ALU
2. Perform an arithmetic or logical operation and store the result in a processor register
3. Fetch the contents of a given memory location and load them into a processor register
4. Store a word of data from a processor register into a memory location

For every register, there are two control signals that can be used to either load the data on the bus into the register or to load the data on the register onto the bus. These are generated from the instruction decoder and control logic unit.

Registers consists of edge triggered flip flops. As such they are read to or written from during the rising edge of the processor clock. 

For the sake of simplicity, you can also assume that $MAR_{\text{out}}$ is always enabled. When a new address is loaded into the MAR, it will appear on the memory bus at the beginning of the next clock cycle. 

The MR and MW signals will be starting at the start of the next clock cycle. 

1. Fetch instruction and add 4 to the PC

PC_out, MAR_in, Read, Select_4, Add, Z_in
Z_out, PC_in, MDR_E_in, WFMC, Y_in (This is only added since it adds no harm for any instruction but is necessary when calculating the branch target address).
MDR_out, IR_in

R3_out, MAR_in, Read
MDR_E_in, WFMC, Y_in, R1_out
MDR_out, Select Y, Add, Z_in
Z_out, R1_in

You can for simplicity sake also assume that MDR_E_in and MDR_E_out are always set to 1. But it is better to explicitly mention it in the examination.

# Multiple Bus Organization

When you make use of a single bus structure, there are more number of control signals that are required since only one register's value can be put on the bus at a single time. To reduce the number of steps, commercial processors all make use of multiple internal buses.

The general purpose registers are all combined into a register file, similar to the Random Access Memory. There are two output ports as well as one input port so that 2 registers can be read from and a register can be written to all in one clock cycle.

The ALU can directly read buses A and B and can perform arithmetic and logical operations. It can also pass the values of bus A and B unmodified onto Bus C. We can represent the unmodified pass-through with R = A or R = B

There is also an incrementer unit which increments the PC value by 4.

The ALU still is connected to a multiplexer which can select a constant value of 4. This is still pretty useful in addition and referencing addresses especially in the LoadMultiple and StoreMultiple instructions.

The instruction decoder only outputs onto the Bus A. The IR, MDR, and MAR only take input from the bus C.

Except the ALU, everything only outputs onto buses A and B. PC only outputs onto bus B. Instruction decoder unit only outputs onto bus A. MDR outputs to both buses. Registers can output to both buses.

![[Multiple Bus Organisation.png]]

Add R4, R5, R6

PC_out, R = B, incPC, MAR_in, Read
MDR_E_in, WFMC
MDR_out_B, R = B, IR_in
R4_out_A, R5_out_B, SelectA, Add, R6_in

# Hardwired Control

The decoder is a combinational circuit that generates the required control outputs, depending on the state of all its inputs.

The hardwired control unit is a lot faster than the microprogrammed control unit as it uses direct hardware circuit such as gates, encoders, decoders, etc. This is preferred in the RISC computers.

It makes use of the

1. Clock
2. Step Decoder
3. Decoder
4. Encoder
5. External Inputs
6. Condition Codes
7. Control Step Counter

# Microprogrammed Control

A control word is a word whose individual bits represent the various control signals. That is, if there are n control signals that are required, then there will be n bits. Each of these control words represents a processor instruction for the processor.

The sequence of 1s and 0s in the control word corresponding to a specific instruction is known as the micro-routine for that particular instruction.

The micro-routines for all the processor instructions in the instruction set of a computer are stored in the control store. 

There is a $\mu$PC that is maintained and automatically incremented by the clock to read the microinstructions from the control store. 

## Micro-instructions with Branching

The starting address generator becomes the starting and branch address generator. It can load the $\mu$PC with an address when the control unit instructs it to. It has the IR and condition codes as inputs as well. Everything else remains the same. 