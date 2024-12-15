This is also known as **symmetric-key cryptography**.

Perfect secrecy is usually very limited and not very useful in general. In this sense, it is important to study the idea of **computational security**. This underlies most of the world's modern day cryptography.
# Computational Security
Perfect secrecy demands that absolutely no information should be leaked out to any eavesdropper with an unbounded computational power. 

Computational Security on the other hand demands that an encryption scheme would be considered secure if it leaked out only a little information about the encrypted cipher-text to an eavesdropper with a bounded computational power. This is usually more than sufficient for real-world applications.

> A cryptographic encryption scheme is said to be $(t, \epsilon )$-secure if an adversary running for time t succeeds in breaking the encryption scheme with probability at most $\epsilon$.

The interpretation of concrete security claims is difficult though. It can be subject to interpretation and has a whole lot of factors that need to be taken care of.
# Asymptotic Approach


