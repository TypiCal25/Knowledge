A stream cipher can be used to instantiate a pseudo-random generator.

A stream cipher is a pair of deterministic algorithms Init, and GenBits.

1. Init takes in an input seed $s$ and an optional initialization vector $IV$, and outputs an initial state $st_0$.
2. GenBits takes as an input state information $st_i$ and outputs a bit y and and an updated state $st_{i+1}$.

