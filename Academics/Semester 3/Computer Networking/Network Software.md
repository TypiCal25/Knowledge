To reduce the design complexity of network software, they are usually broken down into layers, where each layer provides some services to the layer above it, and the function of each layer differ from network to network. 

# What Is The Purpose Of Each Layer?

1. To provide some services to the layer above it.
2. Shielding those layers from the details of how these services are actually implemented.

This is very similar to the concept of abstraction in all fields of computer science. In a sense, each layer of the network is a virtual machine that performs some functions.

When a layer on one machine talks to the same layer on another machine, the set of rules that they use to communicate is known as that layer's protocol

# Considerations While Creating Layers

1. Minimum amount of information must be passed from one layer to another layer
2. The interface must be clean and well-written
3. We should be able to switch out a complete implementation and not have it affect any of the upper layers

Each layer may add in some information that must only be known to its peer layer on the other machine but not to the upper layers. 

# Relationship Between Services and Protocols

A service is a set of primitives that a layer offers to the layer above it. A protocol on the other hand is the set of rules that peer layer use to communicate between each other.

# Reference Models

Reference models are some of the standard network architectures that are used to explain various implementations of network software.

[[OSI Reference Model]]
[[TCP/IP Model]]
