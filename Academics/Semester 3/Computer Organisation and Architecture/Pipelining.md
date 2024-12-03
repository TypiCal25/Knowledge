Modern processors are all pipelined in order to improve speed of execution of instructions as well as improve efficiency of a processor.
# What Are The Ways To Improve Speed of Execution? 

1. Increase the circuit technology so that instructions can be executed faster
2. Arrange the hardware so that more number of instructions can be executed at the same time.

# What is Pipe Lining?

Pipelining is an effective way of organizing concurrent activity in a computer system.

It basically allows for the concurrent execution of many steps, by breaking them down into sub-steps rather than executing them as a group.

By breaking the control unit processes into stages, we end up allowing for more number of operations to happen while having the same execution speed for each stage.

Taking an example, Let's say there are 4 instructions that need to be executed through these 4 stages.

# What are Some Good Conditions For Pipelining?

The clock cycle should be sufficiently long to complete the task performed in any of the stages, basically, the stage that takes the most amount of time to execute.

***Pipelining is most efficient for increasing performance if the tasks that are being performed in each stage require about the same time to complete.***

The potential increase in performance resulting from the pipelining is proportional to the number of the pipelining stages.

# What Happens When The Pipeline Gets Stopped?

Anything that results in a stall of the pipeline is known as the hazard.

1. Data Hazard ^058fff
2. Control Hazard ^4d5f15
3. Structural Hazard

## Data Hazard

^d3d709

A data hazard occurs when a particular stage requires more than the regular number of clock cycles to finish the execution of an instruction. Due to this, there is a stall in the pipeline as the preceding and succeeding stages can't be executed. 

The preceding instructions can't override the buffers as the stalling stage is still making use of the information in that buffer, while the succeeding instructions have nothing new to make use of in their instruction.

Once the stalling stage completes its execution, the pipeline continues its execution as usual.

### When Does A Data Hazard Occur?

A Data Hazard occurs when the pipeline is stalled because the data to be operated on are delayed for some reason.

> It is important to note that the execution results from a pipelined and sequential processor should remain the same in any situation.

One such example of such a situation is when the output of one instruction depends on the output of another instruction. This is known as a ***Data Dependency.***

### How To Manage A Data Hazard?

Managing and minimizing data hazards is essential in boosting performance. ***Operand Forwarding*** is a pretty good way of achieving this. This can be done by:

1. Operand Forwarding: We can connect the execution stage through an alternate data path so that its results can be directly re-used by the execution stage again, without having to be loaded from the memory again.
2. Software Methods: The compiler (An Optimizing [[Compiler]]) can add empty instructions or NOP instructions

### Precautions That Should Be Taken For A Pipelined-Processor

A Pipelined processor should have instructions (as part of the [[Instruction Set]]) that don't have a low number of side-effects.

#### What is a Side-Effect?

Similar to other fields of programming, side effects occur when an ***un-noticed*** register gets its value overwritten while another instruction in the pipeline also depends on its value. This causes another type of data hazard. In general, the more number of side-effects that occur along with the execution of an instruction, the more complex the hardware must be in order to account for that change in the execution of the next instruction, without slowing down the pipeline, that is.

## Control Hazard

^631f30

A control hazard occurs due to the delay in the availability of an instruction. This is usually because of issues such as a cache miss, which would then trigger a memory access which usually takes up a lot more clock cycles, as compared to the cache hits.

***Cache Hits usually take up nearly the same time / number of clock cycles as a regular arithmetic operation. Due to this, the fetch stage can be pipelined in the first place.***

### Unconditional Branches

Branching can also cause stalling in a pipelining and incur a ***branching penalty***. This is because of how the wrong instruction might be fetched while the branching instruction is being executed. This would cause the Control Unit to have to completely discard this fetched and decoded instruction and start over with a new instruction.

In order to combat this, many control units have specialized hardware which allows for the branch address to be calculated in the decode step rather than the execution step. This allows for the ***branching penalty*** to only be a single clock cycle rather than two. Although this seems like a small improvement, it has quite a lot of implications.

#### Implementing an Instruction Queue

To reduce the effects of branch stalling in a pipeline, many processors utilize a queue for fetching rather than only fetching a single instruction. The fetch unit aims to keep this queue filled in most of the times so that there aren't any effects on the throughput of the pipeline due to any delays in the fetching of an instruction.

If there is ever a delay in the fetch instruction, the dispatch unit can still use the instructions that are kept in the queue. This helps a lot with the execution time and overall throughput of the entire system.

An instruction queue also helps to mitigate the effects of branching through the concept of ***branch folding***.

### Conditional Branches and Branch Prediction

Branching instructions are pretty common in programs. Due to this, the expected performance hit from branches would negate the performance benefit that would be offered by a pipelined processor in the first place.

A conditional branch instruction adds the hazard as the decision to branch cannot be made until the branching instruction has been executed.

#### Delayed Branching

The location after a branching instruction is known as a ***branch delay slot***. It would be useful to put an instruction in this slot that gets executed no matter what happens with the branch. This is the whole concept of delayed branching. If there are no useful instructions that can be put into these slots, then we should occupy them with NOP instructions instead.

#### Branch Prediction and Speculative Execution

Another form of removing the impacts of branching on the performance is to predict which branch can be taken. The simplest form of branch prediction is to assume that the branch won't be taken. If branch outcomes were random, then half the branches would be taken and half wouldn't be taken. In this case, in half the times, there would be a performance increase in half of the cases from this sort of a speculative execution.

There are two main types of branch prediction:

1. **Static Branch Prediction**: The branch prediction decision is the same every time for the branching prediction. This can either be through an optimizing [[Compiler]] or through simple prediction methods.
2. **Dynamic Branch Prediction**: This can be done by adding additional pieces of information or extra bits that can represent different states, such as LNT (Likely to Not be Taken) and LT (Likely to be Taken). More complex states (such as 4 states could also be used) for better branch prediction.

## Structural Hazard

^fc91b0

A structural hazard usually occurs when two instructions that are executing in two different stages require a given hardware resource at the same time. A usual case in which such a situation occurs, is when an instruction that is being executed requires data from the cache while the fetch stage requires to load the same instruction from the cache memory.

Many CPU's fix this issue by maintaining separate caches for data and instructions.

# What Benefit Does Pipelining Offer?

It is very important to note that while pipelining ***does NOT increase the execution speed of any stage***, it does increase the ***throughput*** of the execution stages.

# Influence of Pipelining on Instruction Sets

We already know how side effects in an instruction set (usually a [[CISC Instruction Set]]) can cause stalls due to data hazards. These would require complex circuitry in order to mitigate the performance hit through hardware methods.

The features that modern instruction sets have are as follows:

1. Access to an operand does not require more than one memory access
2. Only load and store instructions access memory operands
3. The addressing modes have no side effects

These were heavily emphasized in the [[RISC Instruction Set]] as one of its founding principles. This is also why the [[RISC Instruction Set]] is quite a good instruction set to implement in processors at a micro-architecture level.

# Performance Evaluation

For a non-pipelined processor, the execution time can be found as 

$$\Huge T = \frac{N * S}{R}$$
where
- T is the total time of execution of the non-pipelined processor
- N is the total number of instructions that must be executed
- S is the total number of clock cycles per instruction
- R is the total number of clock cycles per second

This is also known as the ***basic performance equation***.






