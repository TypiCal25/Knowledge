# A Simplistic View of Interrupts
In this case, a device controller simply puts a signal on the interrupt request line of a CPU. The CPU in turn, uses the signal as an index into the interrupt vector in order to run some fixed interrupt-handler routine. This then stores all the registers that may be being used by the processor, performs the required interrupt routine, and then resets the router to its previous state (before the interrupt was called).

But this is hardly what we need and is very very simplistic.
## What a 
