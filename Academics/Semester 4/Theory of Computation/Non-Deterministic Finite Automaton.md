A "Non-Deterministic" finite automaton has the *the power to be in multiple states at once*. 
# Definition
A Non-Deterministic finite automaton A consists of the following:
1. It has a finite set of states $Q$.
2. It has an initial starting state $q_0 \in Q$
3. It has a finite set of input symbols $\sum$
4. It has a finite set of final states $F \subseteq Q$
5. It has a transition function $\delta: Q \times \sum \rightarrow P(Q)$
# Extended Transition Function
Similar to the case in the [[Deterministic Finite Automaton]], we also have the extended transition function defined for [[Non-Deterministic Finite Automaton]]s. This is listed below.

$$\Large \hat \delta (q, \epsilon) = {q}$$
In this case, we have to define the set as the union of the extended transition function over each element of the set that comes out of the extended transition function for any state.
# Language of a Non-Deterministic Finite Automaton
Here again, we have to define the Language of a NFA as $L(A)$ where $L(A)$ is defined as,
$$\Large L(A) = \{w | \hat \delta (q_0, w) \cap F \neq \phi\}$$
# How to convert an Non-Deterministic Finite Automaton to a Deterministic Finite Automaton
Let's say that we have, an NFA $A = (Q_N, \sum, \delta_N, q_0, F_N)$ 


