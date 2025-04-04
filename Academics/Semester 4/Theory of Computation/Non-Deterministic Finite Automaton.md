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
Let's say that we have, an NFA $A = (Q_N, \sum, \delta_N, q_0, F_N)$, that we want to convert to DFA $B = (Q_D, \sum, \delta_D, \{q_0\}, F_D)$

Here we can say that
1. $Q_D$ is the power set formed from $Q_N$
2. $F_D$ is the set of states belonging to $Q_D$ that have at least one state element belonging to $F_N$
3. Create a table and then convert it to a DFA :)
# Epsilon Transitions in Non-Deterministic Finite Automaton
This is basically a transition in which no input symbol is consumed but a state transition occurs from one state to another. 

It makes the act of creating an NFA simpler, but it definitely doesn't add any power into the machine, i.e, the languages that it can recognize are still the same as a regular [[Deterministic Finite Automaton]]. 

You can think of it as sort of an **optional** transition. This is probably one of the best ways to think about it.
## Epsilon Closures
Its basically the set of all elements that can be reached from a particular element through epsilon transitions.

Basis: State $q$ is in ECLOSE(q)
Induction: If p is in ECLOSE(q) and there is a transition from p to r using an $\epsilon$ transition, then r is in ECLOSE(q)
