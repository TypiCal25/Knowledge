# The Setting of Private Key Encryption
There are two types of encryption in general - Symmetric Key Encryption and Asymmetric Key Encryption. 
# Syntax of Encryption
Formally, a private key encryption scheme is defined by specifying a message space $M$ along with three algorithms
1. The Key Generation Algorithm
2. The Encryption Algorithm
3. The Decryption Algorithm
## Key Generation Algorithm
The Key Generation Algorithm is a **probabilistic algorithm** that outputs a key $k$ chosen according to some distribution. Its given by $\text{Gen}$
# Kerckhoff's Principle
This is a principle that goes against regular thought but it actually does make quite a bit of sense.

> The cipher method must not be required to be secret, and it must be able to fall into the hands of the enemy without any inconvenience.

**The security of the algorithm should solely rely on the secrecy of the key.**
# Sufficient Key-Space Principle
Any secure encryption scheme must have a key space that is sufficiently large to make an exhaustive-search attack infeasible.

This is a necessary but not sufficient condition for an encryption scheme to be considered secure.
# Principles of Modern Cryptography
## Formal Definition
In earlier times, the security of a scheme was not well defined.
> If you don't understand what you want to achieve, then how will you know when (or if) you have achieved it.

There can be multiple ways to define security when it comes to encryption schemes. The **right** one depends on the context. 

