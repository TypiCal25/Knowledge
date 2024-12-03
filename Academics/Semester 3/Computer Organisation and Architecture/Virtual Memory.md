If a program doesn't fit fully into the main memory, then it can be stored on the hard disk as well.

A special hardware unit known as the MMU keeps track of which parts of the virtual address space are in the physical memory while which are there in the secondary memory as well.

It works by splitting the program file into pages consisting of a block of words.

The page length shouldn't be too small, because then there would be a need for too many transfers. But it shouldn't be too large either, because then a large part of the page wouldn't be used at all, causing tremendous wastage.

# How Does Virtual Memory Work?

Each physical address that is generated from the processor generates a virtual address consisting of a page number and a page offset.

The processor only ever generates virtual or logical addresses. These are translated into physical addresses by the Memory Management Unit or the MMU. The logical address simply consists of a base page number and then a base page offset for the required word. The page number is added to the page table address that is stored into a register. 

It is then looked up into a page table, which has some control bits regarding that page entry, as well as the page frame as part of the physical address. This physical address frame then gets added on to generate the physical address.

Control bits are to indicate:

1. Whether the page required is in the main memory
2. Whether the page required is invalid
3. Whether the page has been overwritten

# Translation Lookaside Buffer

The page table information is used by the MMU in order to find out the physical address corresponding to a certain virtual address. The table can be pretty large, but the MMU is a hardware component. A Translation Lookaside buffer keeps the most accessed pages as part of a buffer, much like how a cache works in the first place. 

# Page Faults

When a program generates an access request to a page that is not in the main memory, then a page fault is said to have occurred. The entire page must be brought from the main disk to the main memory. 

This generates an interrupt and the program that had generated the page fault is interrupted. In the time that the page is being loaded into the memory, the processor allows other programs whose pages are present in the main memory to run so that no time is wasted of the CPU.

When the MMU raises the interrupt, it might have done it because of a memory read instruction that might have been partially executed as well. In this case, it becomes very important for the program to continue without having been affected. 

1. Instruction can continue from where it was left
2. Instruction has to be restarted

