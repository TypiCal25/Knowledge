This has now become the de-facto way in order to perform shared circuit evaluation, and is much more optimized!

This has become the de-facto method of evaluation in generic MPC protocols. It is also known as **shared-circuit evaluation with correlated randomness**.
# Main Idea
The main idea of the shared circuit evaluation model is to split the circuit evaluation into two main steps
1. Circuit/Function independent Pre-Processing Phase
2. Shared Circuit Evaluation
There is obviously going to be some relation in between these two phases. **We want to shift all the expensive operations to the pre-processing phase**.

> The whole point of this is to make the processing of multiplicative gates much faster as the computation of the linear gates for additive gates is already very fast. 
# Beaver's Random Multiplication Triples
For each multiplication gate, there should be one multiplication trip that is random, and private. These multiplicative triples will be (n, t) - Shamir secret shared.

This simplifies so much!

We can convert $$x_3x_4 = (x_3 - a + a)(x_4 - b + b)$$
Using the pre-processed values, we won't have any problems in computing and we simplify the multiplicative gates by a lot!
# How To Collectively Generate Random Values Without having any one know the random values?
We need to create a protocol in which we want to generate (n,t) Shamir sharing of L number of random and private values.
## Rand-Extract Protocol
1. We first generate (n, t) Shamir Shares of n-t private and random values. Here, the adversary has control over t parties. So for that reason, we need to ensure that we need at least t + 1 parties to reconstruct the value. So we perform Shamir Secret Sharing with a polynomial of degree t. In this way, the adversary is not able to recalculate the random value of the honest parties. At the same time, the honest parties CANNOT know which parties from this list are honest and which are not. 
2. 
