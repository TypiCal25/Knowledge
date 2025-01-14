# Parsing Algorithms
## Recursive Descent
This is a top-down approach to a parsing algorithm. It uses backtracking but it is very easy to implement using recursive calls and those features of the programming language.
## Predictive Parsing
In this method, we can predict which production to use by looking at the next few tokens in line. This is done without any backtracking and without any mistakes.

Predictive parsers accept LL(k) grammars. But what does this mean? The first L means Left-To-Right grammars, the second L stands for left most derivation, and k is the number of tokens to look ahead.
 