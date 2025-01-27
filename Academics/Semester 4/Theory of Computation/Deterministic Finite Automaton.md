A deterministic finite automaton consists of:
1. A finite set of states, often denoted by Q
2. A finite set of input symbols, often denoted by $\sum$.
3. A transition function $\delta : Q \times \sum \rightarrow Q$  
4. A start state
5. A set of final states $F, F\subseteq Q$  

Therefore, a DFA is defined as a tuple $(Q, \sum, \delta, q_0, F)$.
# Tabular Representation
A Deterministic Finite Automaton can also be represented in a tabular fashion. In this case, the rows represent the input states while the columns represent the symbols from the alphabet that are used for making the transition.
# Extended Transition Function
If $\delta$ is a transition function, then we can call the extended transition function $\hat{\delta}$. 

Suppose $w$ is a string of the form $xa$, where $x$ belongs to $\sum^*$ and $a$ is a symbol taken from the alphabet $\sum$, then we can have that,
$$\Large \hat \delta(q ,\epsilon) = q$$
$$\Large \hat\delta(q, w) = \hat \delta(\hat\delta(q, x), a)$$


