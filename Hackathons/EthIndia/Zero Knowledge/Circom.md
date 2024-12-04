Circom is used in order to generate the Rank 1 Constraint System which can then be combined with Snark.JS in order to generate zero knowledge proofs. 
# Writing Circuits
The signals show that there are a whole list of circuits. Each gate provides a constraint defined by the gate itself. In this case, the gates are addition, and multiplication modulo the prime p of the Finite field $F_p$.
# Assignment Operators
<-- is used simply as a direct assignment operator to the signals
<== specifies a constraint system.
# Public and Private Signals
- Signals are always considered to be private. The programmer can set some input signals to be public
- Output signals are always public
- A signal is immutable
## Variables
There are also variables in the programming language of Circom. These hold non-signal data and can be defined as var. 
# Templates
- This is like an object which can be used to generate circuit objects.
- Assigning a value to an input signal inside the same template is wrong.
- 