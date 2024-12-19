This is also known as **symmetric-key cryptography**.

Perfect secrecy is usually very limited and not very useful in general. In this sense, it is important to study the idea of **computational security**. This underlies most of the world's modern day cryptography.
# Computational Security
Perfect secrecy demands that absolutely no information should be leaked out to any eavesdropper with an unbounded computational power. 

Computational Security on the other hand demands that an encryption scheme would be considered secure if it leaked out only a little information about the encrypted cipher-text to an eavesdropper with a bounded computational power. This is usually more than sufficient for real-world applications.

> A cryptographic encryption scheme is said to be $(t, \epsilon )$-secure if an adversary running for time t succeeds in breaking the encryption scheme with probability at most $\epsilon$.

The interpretation of concrete security claims is difficult though. It can be subject to interpretation and has a whole lot of factors that need to be taken care of.
# Asymptotic Approach
This approach is rooted in the study of **complexity theory**.

In this approach, we introduce a security parameter $n$ which is used to parameterizes, both, the scheme as well as all parties that are involved.

It is assumed that the adversaries know of this security parameter as well.

Usually, an asymptotic approach can very easily be converted into the concrete simply by plugging in values for the security parameter of $n$. In doing so, an honest party can very easily generate a new key with a newer security parameter value.
## Efficient Algorithms
For an algorithm to be considered **efficient**, it should run in polynomial time compared to its total input.
### Probabilistic Algorithms
We assume all algorithms to be probabilistic. But what does this mean? This basically means that every algorithm will have access to a random, unbiased bit at every single computation step.
#### Why Assume Probabilistic Algorithms?
1. Cryptography is wholly based on randomness
2. Randomness gives the advantage to the attackers.

With this, we have the proper definition of computationally secure algorithms in the asymptotic definition.

> A scheme is secure if for every probabilistic polynomial-time adversary $A$ carrying out an attack of some formally specified type, and for every positive polynomial p, there exists an integer N such that when $n > N$, the probability that $A$ succeeds in the attack is less than $\dfrac{1}{p(n)}$
# Getting Into Newer Definitions
In most cases, the algorithm $\text{Gen}(1^n)$ simply outputs a uniform n-bit string as the key. 

A private key encryption scheme is a tuple of probabilistic polynomial-time algorithms. 

# Semantic Security
The full definition of semantic security is very important. 
1. The definition 