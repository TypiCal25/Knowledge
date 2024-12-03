# What Services Does The Network Layer Provide To The Transport Layer?

The network layer is meant to somehow find a path or a route to send packets from the source computer to the destination computer, even if it has to take a jump through multiple computers along the way.

On the other hand, the data link layer is only concerned with sending a frame directly from one machine to another machine. 

# Routing Algorithms

Routing algorithms are the pieces of software that are responsible for deciding what output line a specific packet should take or be transmitted on. 

Routers have two processes going on inside them:

1. A packet is received, and the router looks up what entry on the router table or which output line to forward it on. This is known as ***forwarding***.
2. Filling up the routing tables.

## Features Required

1. Stability
2. Robustness
3. Correctness
4. Simplicity

There are adaptive algorithms and then there are non-adaptive algorithms. Non-adaptive algorithms are also known as static routing algorithms. These sort of routing algorithms don't take into account anything about the network topology or its current situation. They are simply just routes that are pre-calculated and downloaded on the routers.

# Optimality Principle

If an intermediate router J in between routers I and K is on the optimal path between the two routers, then the optimal route between routers J and K also lies along the same route.

[[Routing Algorithms]]
