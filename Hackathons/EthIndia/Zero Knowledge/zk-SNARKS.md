zk-SNARK stands for Zero-Knowledgge Succinct Non-Interactive Argument of Knowledge. It is a cryptographic proof that allows one party to prove that it knows some information without revealing that information.
# A Technical Overview
The prover wants to prove to the verifier that he knows an input $w$ such that $z = f(x, w)$, where x is a publicly known input to the function $f$.

$$\Huge z = f(x, w)$$

In this case, $x$ is the publicly available input, while $w$ needs to be hidden in such a way that the verifier gets no extra information about it. 

The whole point of zk-SNARKs is that they are **non-interactive**. In this case, we just have to provide z and then a string π. This would be able to prove to the verifier that what the prover says is true and there would be no need of any extra information whatsoever.

zk-SNARKS make use of a concept known as [[Quadratic Span Program]] which offer a method of generating very succinct zk-proofs. These make use of [[Finite Fields]] as well. This is irrelevant in the application of zk-SNARKs as it is more of a background detail.

This is going to be the backbone of our project.