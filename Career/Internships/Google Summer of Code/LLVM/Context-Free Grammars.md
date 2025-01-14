A grammar is called ambiguous if it has more than one parse tree for the same string.

A grammar is basically just a set of:
1. Terminal States
2. Non Terminal States
3. A set of productions having a non-terminal state which maps onto a set of non-terminal or terminal states.
# Handling Ambiguity in Context-Free Grammars
There are many ways in which you can deal with ambiguity. But what exactly is this ambiguity in the first place.
## What is Ambiguity in a Context-Free Grammar?
When a single string can be represented through two different parsing trees, it causes an ambiguity because you are leaving it up to the compiler to decide which parse tree it has to generate the code for. This is extremely bad in general, because a compiler should be non-ambiguous and completely predictable in its functioning.
## How to Deal With Ambiguity?
1. Re-write the context-free grammar to be non-am