# How Do Zero Knowledge Proofs Work?
At a very high level, zero knowledge proofs work on making the person who needs to be verified have to repeatedly do a task that requires knowledge of a certain piece of information that the verifier asks.
# Characteristics of a Zero-Knowledge Proof
## Completeness
If a statement is true, then an honest verifier can be convinced by an honest prover that they know the secret.
## Soundness
If a statement is false, then a dishonest prover will never be able to prove to an honest prover that they know the secret.
## Zero Knowledge
If the statement is true, then the verifier learns nothing about the statement itself.
# Types of Zero Knowledge Proofs
There are **interactive** and **non-interactive** zero-knowledge proofs.
1. [[zk-SNARKS]]
2. [[zk-STARKS]]
3. PLONK
# Concepts That Need To Be Learnt
[[zkEVM ]]
[[zk-SNARKS]]
[[zk-STARKS]]
# A Basic Example
Prove that for a graph G, there exists a 3-coloring scheme such that every edge contains vertices having different colors.

A zero knowledge proof of this statement would be as follows:
1. The verifier picks a random edge on the graph G, and the prover gives two colorings for u and v that are different in color. The verifier has three options
	1. He shows that they both have the same color, in which case, it gets proved that he has a wrong solution
	2. He shows that they both have different colors, but he could be lying as well while presenting the verifier with these colors, because the solution might have them having the same color but the prover might lie about them. But what is the probability of this happening? Whenever the verifier picks a random edge, there is a $\dfrac{1}{3}$ chance that he is cheating.
# Task List
- [ ] Study the mathematics behind zk-Proofs
- [ ] Read research papers on zk-Proofs
- [x] Ask Janani Ma'am for resources on zero-knowledge proofs