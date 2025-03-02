This has now become the de-facto way in order to perform shared circuit evaluation, and is much more optimized!

This has become the de-facto method of evaluation in generic MPC protocols. It is also known as **shared-circuit evaluation with correlated randomness**.
# Main Idea
The main idea of the shared circuit evaluation model is to split the circuit evaluation into two main steps
1. Circuit/Function independent Pre-Processing Phase
2. Shared Circuit Evaluation
There is obviously going to be some relation in between these two phases. **We want to shift all the expensive operations to the pre-processing phase**.

> The whole point of this is to make the processing of multiplicative gates much faster as the computation of the linear gates for additive gates is already very fast. 
# Beaver's Random Multiplication Triples
For each multiplication gate, there should