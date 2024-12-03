The maximum size of the memory that can be used by a computer is determined by its addressing scheme.

Memory access time is the time that elapses between the initiation of an operation to transfer a word of data and the completion time of the operation.

Memory cycle time is the minimum amount of time that must pass in between two successive memory operations.

A memory unit is called a random access memory unit if the access to any memory location is the same, independent of the location's address.

# Static Memories

Static memories retain their contents in memory only as long as power is being applied to the memory units.

# Dynamic Memories

# Cache Memories

It is a small, and very fast memory, interposed between the processor and the main memory. 

# Locality of Reference

Most of the execution times of programs are spent in repetitive executions take place. 

#### Temporal Locality

Temporal Locality states that if an instruction has been executed, then it is likely to be needed again

### Spatial Locality

Spatial Locality states that if an instruction has been brought into the cache, then it is likely that you are going to be needing the adjacent memory addresses as well.

# Cache Hits

### Read Hits

When the processor requests a read for a block with a certain memory address (given in the word-address through the byte-addressable scheme), then the cache directly returns the required word quickly. This is known as a Read-Cache hit.

### Write Hits

The system can proceed in two ways

1. Write-Through Protocol
2. Copy-Back Protocol

In the write through protocol, both the required cache block and the memory block are updated. Execution follows as normal after that.

In the copy back protocol, the required block is updated only in the cache, and that block is marked with an associated flag, which is known as the dirty and modified bit.

# Cache Misses

### Read Miss

In this case, the block of words that consists of the requested word by the processor is copied into a block of the cache memory, and it is then forwarded to the processor. Another faster way would be to directly send it to the processor as soon as it is read from the memory and simultaneously also update the cache memory.

### Write Miss

When this occurs, for a computer that uses the write-through protocol, it is directly written to the main memory.

For a computer that makes use of write-back, the required block is first copied into the cache memory, and it is then modified with the dirty bit.

# Mapping Functions

## Direct Mapping

This is the simplest mapping function where the block number is stored in

$$\Huge x = N \text{ mod } j$$

While studying the concept of cache memory, it is important to forget the remaining things. Lets assume that we have a block consisting of many words. Here assume that the system is word-addressable rather than byte-addressable now.

Number of tag bits required are $\log_2 \left ( \dfrac{x}{j} \right )$
## Associative Mapping

In associative memory, a block from the memory can be associated or mapped into any other frame on the cache memory. This is the most flexible scheme of a mapping function between the two.

It uses a CAM memory which functions very much the same like a HashTable. Searching can be done in parallel so this is very fast.

## Set Associative Mapping


# Performance Metrics

Ideally what happens is that the processor doesn't even know that there exists a cache and that it is different from the main memory. This is a sort of abstraction that we can offer to the processor.

The miss penalty is the total amount of access time as seen by the processor whenever there is a cache miss.

$$\Huge t_{\text{avg}} =hC + (1-h)M$$

This is the average access time to the memory as seen by the processor