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
## Invertible Numbers Modulo N
If $bc \equiv 1 \mod{N}$ , then we define $c$ to be the modular inverse of the number $b$.
# Group
A group is simply just a set which consists of elements and follows the following properties:
1. It is closed under the operation
2. Associative under the operation
3. Identity element exists
4. Inverse element exists
A group is abelian if the operation is also commutative.

There is the additive as well as multiplicative notation that can be used in the case of groups. In both of these cases, the familiar properties associated with addition and multiplication still do hold, but it is a lot simpler to see the end goal in terms of the Group definition.

We can state that if there is an abelian group, then if you repeatedly perform the operation associated with a group on the element of the group repeatedly with the same number of times as the number of elements in the group, then we will end up with the identity element.







 