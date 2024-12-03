# Infix to Postfix
1. Print operands as they come
2. If stack is empty or contains a left parentheses on top, then just push the operator on to the stack
3. If it is (, then push it onto the stack
4. If the operator is ), then pop the stack till the left parentheses is popped off
5. If incoming operator is of higher precedence, then push it onto the stack
6. If the incoming operator is of lower precedence, then pop off the top onto the output and then check the stack and repeat till you can push the operator onto the stack
# Infix to Prefix
1. Reverse the input string
2. Apply infix to postfix but only pop off of the stack if the precedence of the incoming operator is higher than the operator on the top of the stack. Do this until you can add the operator onto the stack
# Postfix to Infix
1. Push operands on to the stack
2. If you have an operator, pop two elements off of the stack, calculate the result, and then push it back onto the stack
3. Parentheses minimization
	1. If the left operand has a precedence lower than the current operand, then we add brackets.
	2. If the right operand has a precedence lower than the current operand, or if the precedence is the same and the current operator is "/" or "-", then we add brackets
# Prefix to Infix
Do the same thing but after reversing the pre-fix expression!