 A fundamental theory of arithmetic is that
 > Every number can be written as a product of primes.

Let $a$ be an integer and $b$ be a positive integer, then there exist unique integers q and r such that 
$$a = b \cdot q + r$$
This is basically just the remainder theorem. Furthermore, given the values a and b, it is possible to compute the values of q and r in polynomial time.

The binary length of any integer is given by
$$||N|| = \text{floor}(log_2 N) + 1$$
# Modular Arithmetic
$[a \text{ mod }N]$  is the remainder when a is divided by N. We write that a = b mod N, which is that a is congruent to b modulo N if the remainder when you divide both by N is the same number.

The whole point is that in modulo arithmetic, the regular arithmetic operations of addition, subtraction, and multiplication still work. So essentially what you can do is you can basically reduce and then perform the operations rather than perform the operations and then reduce. This can usually simplify a lot of the calculations. This is something that holds true even in the case of competitive programming.




 