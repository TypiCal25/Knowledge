The [[RSA Assumption]] is related to the [[Factoring Assumption]] in the way that if the [[Factoring Assumption]] is easy to solve, then so is the RSA problem.
# RSA Assumption
The challenger creates a tuple $(N, p, q)$ where $p$ and $q$ are randomly chosen larger prime integers. It then randomly selects a value $e > 1$ such that the $gcd(e, \phi(n)) = 1 \implies$ we can calculate the multiplicative inverse of e modulo N. Say this number is d.

It can then be proved that the function $f_d(y) = [y^d \bmod N]$. This is the inverse function of the encryption function.
# Drawbacks of the Plain RSA Encryption Scheme
1. If we use the plain RSA encryption scheme, then it is deterministic in nature.