Quadratic Span Polynomials generate the most succinct, computationally space efficient zk-SNARK proof. It also helps in having the most efficient prover, and most efficient verifier.
# Introduction
An important pre-requisite before all of this is the concept of [[Finite Fields]]. A new definition of NP polynomials came up that they were problems that could be solved using the concept of PCPs which are basically Probabilistically Checkable Proofs. This opened up a whole new field of mathematics based on this.

These are **poly-logarithmic** in nature, as well as **non-interactive** in nature.

Using Quadratic Span Polynomials, we create an NIZK Argument (Non-Interactive Zero Knowledge Argument), in the CRS (Common Reference String)
# CRS Setup Phase
We first choose a generator element from a finite field F with certain properties. This is very similar to the Generator Number G in the generation of public and private keys in elliptic curves. We then define an encryption scheme (in the case of zk-SNARKs, this is usually a method of homomorphic encryption which allows us to perform operations on the encrypted data without having to decrypt it first.)
$$\Huge E(x) = g^x$$
The verifier then puts in a secret value of s, into this function in order to generate a CRS string from the values of
$$E(s^0), E(s^1), E(s^2),\ldots,E(s^d)$$
$$E(zs^0), E(zs^1),E(zs^2), \ldots, E(zs^d)$$
Here $d$ is the highest degree of the polynomial in the polynomial set of the QSP itself. These polynomial functions usually represent the input fields and the witness polynomial functions. Here the $z$ is different from the equation listed below.

A quick reminder to the initial formula reminds us that 
$$\Huge z = f(x, w)$$
Here $w$ is the important piece of information that we can't reveal, $x$ is a public piece of information, and $z$ is what the prover wants to prove to the verifier without disclosing the information present in $w$.

