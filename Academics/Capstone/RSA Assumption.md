The [[RSA Assumption]] is related to the [[Factoring Assumption]] in the way that if the [[Factoring Assumption]] is easy to solve, then so is the RSA problem.
# RSA Assumption
The challenger creates a tuple $(N, p, q)$ where $p$ and $q$ are randomly chosen larger prime integers. It then randomly selects a value $e > 1$ such that the $gcd(e, \phi(n)) = 1 \implies$ 