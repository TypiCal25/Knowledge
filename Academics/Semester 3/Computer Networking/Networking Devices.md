# Hub

A Hub is one of the simplest ethernet devices that are available. It is simply a layer 1 device that acts exactly as classic ethernet does - that is, it just acts as if all the wires were connected to each other as in the classic ethernet. It does not have any smart capabilities and is pretty obsolete in today's world.

In other words, if any frames were being sent to a hub, it would simply broadcast it to all the devices that were connected to the hub.

A Hub is a layer 1 device.

# Switch

A switch is very similar to a hub but it does have some smart capabilities. It is a layer 2 device. In the case that it does a receive a frame, it only sends that frame to the particular connection that it is addressed for. How it does this does not need to be standardized as it is completely hidden behind the router.

A Switch with a full-duplex connection on a port removes the need for CSMA/CD because each port is now part of a separate collision domain. This wouldn't be possible if the connection was a half-duplex connection.

A regular switch is essentially a layer-2 device.

## Working Of A Switch

A switch maintains a hash table of data entries, where in the destination address of a device and the port to which it is connected to are known. 

Initially when the devices are just connected, the hash table is empty. If any frame is sent to the switch, it can decipher the frame header to identify the source destination address and the port on which it arrived. It can then add in an entry into its hash table as well as the time at which the last message was received from that source address.

The switch purges any entries that are more than a minute or two old. This allows for it to be extremely responsive to port changes and device changes.

This process of learning is known as backward learning.

If the destination port is unknown, then it is flooded onto all the ports except the port that it arrived on.

Since a Layer 2 switch only uses the destination header field of the frame header to decide which port to forward the frame on, it can be done instantaneously and is usually implemented as extremely fast and low-latency VLSI chips. This is also referred to as cut-through switching.

