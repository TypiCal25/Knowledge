The processor has an address space that is usually byte-addressable in the memory unit. It can access individual memory locations using the word address and fetch anything from memory in words rather than individual bytes.

We can extend this to be able to write and read from I/O devices as well.

![[Input - Output.png]]

# I/O Device Interface

The I/O devices are connected to the interconnection network / bus through a device interface. This is basically just a device controller. It provides the necessary means for data transfer as well as for the exchange of the status and control information needed to facilitate data transfers. 

There can be buffers for reading and writing data to and from the device itself. There can also be a register that has a few bits set for the status of the I/O device. 

# Program Controlled I/O

A set of instructions that executes on the processor is responsible for controlling the input and output from and to I/O devices. This is why it is also known as ***Program Controlled I/O***.

Lets take the example of a keyboard and a display that is connected to a processor.

The keyboard can only produce keys at a few characters per second (skill issue from the user's side). Similarly, the output device, which is a screen can only process about 1000 characters being sent to it per second. But the processor that is being used is extremely fast and can process nearly a billion instructions per second. So we need to find a way to synchronize this in such a way that the program controlled I/O can execute effectively.

A simple solution is to just wait for the keyboard to say that the register is full through the status registers and then read from the data registers. The same could be done for the display registers.

Checking whether the data is ready in the register by checking the status flag of the device controller/interface is known as polling. The reason for the unusual address that is given is due to the processor being better implemented for word-aligned memory addresses which are more efficient to read and write from.

In Carl Hamacher, we make use of LoadByte and StoreByte in order to differentiate it from Load and Store due to the size of the I/O device's data registers.

# Interrupt Controlled I/O

## Single Devices

Interrupt-Controlled I/O is made possible solely through the use of [[Instruction Set Architecture#^e99cd8|Routines]].

This entails that if a routine has to be played on top of another sub-routine, then the contents of the PC register must be saved somewhere temporarily.

The processor also needs to inform the device that its request has been recognized. This can be done through the means of an ***interrupt acknowledge***.

Apart from this, the new sub-routine that is being called must also make sure that the data integrity of the previous routine that was executing on the processor was maintained. In most cases, the problem with this is that you would need to store all the registers that were being used. This adds a significant interrupt delay, which is very difficult and bad. Instead, what most modern day processors do is that they maintain only the contents of the Program Counter and the Processor Status Register (NZVC). The remaining register temporary storage must be done inside the INTERRUPT routine.

Some computers maintain a completely different, mimicked set of registers solely for the purpose of the interrupt routines. These are known as ***shadow registers***.

It is also important that we should be allowed to enable and disable interrupts that can be generated from input/output devices. This should be able to be done from both the processor as well as the I/O device. The processor maintains a status register which contains all the information about its current state of operation. One bit from this status register can be known as the IE bit that is used to set whether the processor is currently stopping on taking interrupt registers. Similarly, each I/O device can also contain one bit to understand whether the I/O device can send processor interrupts.

But now think about the case that the processor has an interrupt signal being sent to it from a device. Because of this, the processor can possibly also end up in an infinite cycle. A simple and elegant solution to this problem would be to set the IE flag to be disabled in the PS register.

## Multiple Devices

There are many issues that get associated with using multiple devices at the same time. The assumption is that each device has its own independent operation and because of that, it can generate its own interrupt signals independently.

### Problems Associated With Multiple Devices

1. How can the processor determine which device sent this interrupt request
2. How to find the interrupt routine for that particular device
3. How to make sure that one interrupt request doesn't interrupt an already running interrupt routine
4. How to handle two interrupts at the same time

### Vectored Interrupts

