An operating system's functioning is specifically tied to the hardware on which it is run. It is a very intimate connection between the two as the operating system is also a hardware resource manager.
# Processor
This is the brain of the computer. It fetches instructions from the memory and executes them. 

There is the 
1. Fetch
2. Decode
3. Execute

This was covered in a lot more detail in [[Computer Organization and Architecture]] as part of the [[Third Semester]]. Each CPU has a specific set of instructions that it can execute. 

In most cases, the CPU has two modes - the user mode, and the kernel mode. This is usually governed by a flag bit that is present in the PSW register of the CPU. 

Whenever a trap occurs, such as a system call, or any exception that is returned, the operating system must decide what to do in all these cases. 
# Memory
In ideal conditions, memory should be:
1. Extremely Fast
2. Abundantly Available
3. Dirt Cheap

Usually, we can't find all three of these in the same way, so instead what we do is we follow a layered approach - consisting of caches, the main memory, as well as secondary memory.

Apart from the caches, and the main memory, we also have other types of memory.
1. ROM: This stands for *read only memory* and it is usually used in order to store code at the factory which can never be written to again.
2. EEPROM: This stands for *electrically-erasable read only memory*. It is usually 
3. Flash Memory: This is another type of non-volatile memory.
4. CMOS: This is usually used to store the time and has its only tiny battery that keeps it alive.
## Non-Volatile Storage
These contain mainly
1. Hard-Disks
2. Solid-State Drives
3. Persistent Memory

Hard disks are 2-3 orders of magnitude cheaper than RAM but also 2-3 orders of magnitude slower than RAM. 
### Rotation-Based Hard Disk Storage

^2781fb

A disk contains of one or more metal platters that rotate at various speeds. Some of the standardized rotation speeds are 5400 RPM, 7200 RPM, 10800 RPM, 15000 RPM, etc. Each disk contains a metallic arm hovering over it (*very similar to the ones in vinyl records*). In a certain fixed position, these arms can read annular parts of the disk which are each known as tracks. If there are multiple stacked disks, these annular portions form a cylinder. 

Each track is also divided into a number of sectors. 
# I/O Devices
The CPU and the memory are not the only things that need to be managed by the operating system. There are many other resources as well.

> Any general device contains a controller and the device itself.

The controller gives a simplified, but still pretty complicated interface in order to access or make use of the device. The controller is basically a **physical chip** that controls how the device works. 

For example, in the above case with [[Computer Hardware Review#^2781fb|Rotation-Based Hard Disks]], the operating system would give a task to the controller such as "read so-and-so sector from so-and-so disk". The controller would then have to decide which cylinder this sector belongs to (owing to the fact that the outer cylinders have more sectors than the inner ones). It then needs to generate the signals required in order to move the magnetic heads to that particular cylinder as well as to rotate the disks until that sector can be read from. This requires a lot of complex work. 

Because each device controller is different, every device manufacturer needs to provide a device driver. 

Every device controller also contains a small set of registers that it needs in order to function properly. This forms the [[I/O Port Space]].
## 3 Ways of Performing I/O
1. The User calls the system call. The Operating System then uses the device driver in order to issue commands to the device controller. The device driver then simply just polls the device until the operation has been completed and it then returns control back to the caller.
2. The second method is known as the interrupt-driven method of I/O.
3. Through a DMA Chip
### Interrupt-Driven I/O
Once the system call is generated, the I/O device driver signals the device controller in order to perform the required operations. It then does **NOT** poll the device. Rather, when the device is done with its operation, it first moves all the remaining data into the right registers, or right locations and then generates an interrupt.
#### How Is The Interrupt Handled?
A few signals are used in dedicated lines on the main bus to an interrupt controller chip. If the controller is free to handle the interrupt, it signals this to a specific pin on the CPU. It then puts the number of the device that generated the interrupt onto the bus so that the CPU can then use this information however it needs to.

The CPU may use the number of the device as an index in a table in order to find the interrupt handler associated with this device. This table is known as an **interrupt vector table**. It then saves the program counter and the PSW, as well as the other important registers, after which the interrupt action is completed.
