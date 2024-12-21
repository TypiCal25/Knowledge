Chip-8 is simply just an interpreted programming language. It was originally introduced in order to simplify the process of programming a device. 
# Specifications
- **Memory**: Chip-8 has access to 4 Kilobytes of RAM. This requires 12 bits to access the different memory locations associated with Chip-8
- **Display**: There is a 64 x 32 pixels
- There is a program counter which points to a current instruction in memory
- There is also a 16-bit index register called I which is used to point to memory locations. Since there are only 4096 memory locations, we will make use  of only 12 bits in this register.
- There is an 8 bit Delay timer which is decremented at a rate of 60 Hz. 
- There is also a 8-bit sound timer which is decremented at a rate of 60 Hz. It plays an audio sound until its value is 0. 
- There are also 16 8-bit general purpose registers from V0 to VF. VF is also used as a flag register by many of the instructions so it is better to not make use of this register.
# Memory
The Chip-8 interpreter uses memory from 000 to 1FF to store the interpreter itself. This means that we are storing the interpreter from memory location 0 to 512. 
# How the Stack Pointer Works
Source: [[Carl Hamacher - Computer Organisation and Architecture.pdf#page=79&selection=13,0,13,6|Carl Hamacher - Computer Organisation and Architecture, page 79]]

There is a stack that is stored as part of the main memory. This is stored in the high to low memory addresses, through the stack pointer.

This is how the stack pointer works.

Subnesting-routines can be stored using this st