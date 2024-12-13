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

A formal definition of security, usually contains two things
1. A security model
2. A threat model
### Security Model
There can be multiple ways to define security when it comes to encryption schemes. The **right** one depends on the context. 
1. It should be impossible for an attacker to recover the key.
2. It should be impossible for an attacker to recover the entire plain-text from the cipher text
3. It should be impossible for an attacker to recover any character of the plain text from the cipher text. In other words, this means that the attacker should not be able to gain any extra information about the underlying plain text from the cipher text itself.
### Threat Model
This specifies what **power** the attacker has but not the strategy that he is using.
1. Cipher Text Only Attack: This is the most basic type of attack, and refers to a scenario where the adversary just observes a cipher text and tries to get some information from it.
2. Known Plain Text Attack: This is the type of attack in which the adversary gains knowledge of a plain-text/cipher-text pair (one or more) using a key. The aim of the adversary is then to deduce information about the underlying plain-text of some other cipher-text generated using the same key.
3. Chosen Plain Text Attack
4. Chosen Cipher Text Attack
## Precise Assumptions
By their very nature, assumptions are statements that are not proven but are instead conjectured to be true. 
1. Validation of Assumptions
2. Comparison of Schemes
3. Understanding the Necessary Assumptions
# Perfectly Secret Encryption
The encryption schemes which are effective even against an adversary with an unbounded computation power are known as perfectly secret encryption schemes.
## How Is Randomness Generated?
Modern random-number generation proceeds in taking a high-entropy set of data after which the data is made uniform through some procedures.

Consider the case, where we have some  high-entropy data considering coin flips but in which the data is non-uniform. Let this be the case of a 1000 coin flips. In this case, consider that a $1$ is outputted with a probability of $p$. In order to make the high-entropy data to be completely uniform, we can combine them in pairs in order to generate the random numbers. 
## Defining Perfect Secrecy
We assume that there is an adversary who knows the probability distribution of the message space $M$. Assume that he also knows the encryption scheme that is being used. 

Now assume that the adversary can eavesdrop on the communication channel in between the honest parties. In doing so, he basically has a cipher-text-only attack setup. For perfect secrecy, the posteriori probability of a certain message being sent should be the same as the priori probability of a message being sent, i.e, there should be no extra information that is leaked to the adversary from this cipher text. 

An encryption scheme (Gen, Enc, Dec) with message space M is perfectly secret if for every probability distribution over M, every message m belonging to M, and every cipher-text c belonging to C, for which
$$Pr[M = m | C= c] = Pr[M = m], \text{for } Pr[C=c] > 0$$
This simplifies into,
$$Pr[Enc_k(m) = c] = Pr[M = m]$$
If you see the implications of this statement, it does add up. It just states that the probability of 



