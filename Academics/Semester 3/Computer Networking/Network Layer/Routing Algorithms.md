# Shortest Path Algorithm

In this routing algorithm, we simply construct a graph consisting of the nodes being the routers in the network and the edges of the graph representing the links between routers. These represent the data links.

## What Do The Weights On The Edges of The Graph Mean?

They could mean many things:

1. Geographic Distance
2. Networking Delay
3. Communication Cost
4. Average Traffic

We can change the weights of the graph as a complicated function of any of these. 

## Dijkstra's Algorithm

This is a greedy algorithm that can be used to find the shortest distance between any two nodes in a network.

$$\Huge \text{if } d(u) + c(u,v) \lt d(v) \implies d(v) = d(u) + c(u, v) $$

If there are any two nodes that do not have any direct link, then we can assume that the distance of that from the source node is infinity.

![[Dijkstra's Algorithm.png]]

# Flooding

Each router needs to make a decision on which output line to send the packet on based on local knowledge. It simply sends the packet to every single router and each router then floods it to all the other routers. 

This is used by a lot of military applications since it is really really robust. Even if routers are destroyed, the flooding algorithm WILL find a way to make sure that a packet reaches from source to destination.

# Distance Vector Routing

This is known as the Bellman-Ford routing algorithm. These tables are updated by exchanging information with the neighbors. 

This was the original routing algorithm that was used in the ARPANET.

The distance to the neighbors can be made using any metric but the most commonly used ones are:

1. Number of hops
2. Propagation Delay
3. Average Traffic

Each router maintains a table of each router in the network as well as the distance to that router and which link to use to get that minimum distance. It then uses this link to forward a packet that needs to get to a particular destination.

In order to fill out the table, it can use many methods. Take for example, that the distance metric is the propagation delay. The DVR algorithm can use special ECHO packets to get the routing tables of the neighboring routers and the router already knows the distance to its neighbors. Using the tables from each of the neighboring routers, this router can get to know the minimum distance to a particular destination router through the other routers and update its own routing table. This can be done every so often, and hence it is a dynamic routing algorithm which accounts for the topology of the network.

## Issues With The Distance Vector Routing Algorithm

Convergence in the DVR algorithm can be extremely slow and this is a pretty significant drawback. It reacts to good news almost instantly (i.e, in just one update of the distance vector routing table), but it reacts very slowly to bad updates or bad changes in the network. 

One such example would be the counting to infinity problem that can be faced by the DVR Algorithm.

# Link State Routing

There are 5 steps in the Link State Routing algorithm.

1. Discover its neighbors and learn their network addresses
2. Calculate the distance to the neighbors
3. Create a packet that contains all of this information 
4. Flood the network with these packets so that every router knows the entire topology of the network
5. Compute the shortest path to every other router using the Dijkstra's algorithm

## Discovering the Neighbors

Whenever a router boots up, its first step is to find out information about all the other neighbor routers that are there in the network. It does so by sending a specialized HELLO packet on each point-to-point line. The router on the other end is expected to send back a response with a unique name so that the router can be identified.

If there are any broadcast links, then they can also be modeled as artificial nodes and the HELLO packets can be sent.

## Creating The Packet

The packet consisting of the tables consisting of the distance of each router to its neighbors. It should also have a sequence number and an age. The sequence number will be used in order to dampen the flooding associated with spreading the topology.

# Hierarchical Routing

When the networks get really large, it becomes very very inefficient to be able to have routing tables storing the entire network topology on each router of the network. In this case, it becomes much more efficient to have a hierarchical division of routers on the network.

This makes the processing on each router much more efficient and much less resource intensive :)