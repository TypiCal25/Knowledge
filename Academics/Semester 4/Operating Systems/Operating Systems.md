A computer simply contains too many devices and connections to be worried about. There are mouses, keyboards, screens, network-interfaces etc. If every programmer had to worry about every small thing, then nothing would get done at all.

Operating systems is a layer of software that comes installed with a computer that provides users with a simpler, and cleaner model of the computer. It is **a layer of abstraction.**
# What is an Operating System
There are two primary ways in which we can look at what an operating system does:
1. A top down approach shows that the operating system would be the layer of software that provides clean abstractions and interfaces
2. A bottom up approach would be that the operating system is a hardware resource manager.
## Abstractions and Interface - Top Down Approach
You can look at an operating system as an extended machine that abstracts away a lot of the inner workings and inner details about the functioning of the computer. 
### A Small Example - SATA Hard Drives
SATA stands for Serial ATA. In earlier times, every programmer who wanted to make use of a SATA hard drive would have to need to learn the inner workings of how they work in the first place. This would take so much time and wouldn't even be worth the time invested in the first place.

Instead, what happens now is that a piece of software called a **disk driver** deals with the hardware and provides a simplified, and very clean interface to the user in order to use the hard-disk without having to know the internal details.

But even this level of abstraction isn't enough. The disk driver still provides a very messy interface that can't be used easily by the users or general purpose programmers. For this purpose, the operating system provides an even more clean interface - the concept of files!

# Introduction
- [[Computer Hardware Review]]
- [[How Does A Computer Boot Up?]]
- [[Types of Operating Systems]]
- Concepts of Operating Systems
	- [[Processes]]
	- [[Address Spaces]]
	- [[Files]]
	- [[Input - Output in OS]]
	- [[Protection]]