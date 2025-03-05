Switches are extremely useful for breaking apart collision domains while Routers break apart both collision and broadcast domains. This is extremely important!
# Hub
A hub is simply a layer 1 device. It simply replicates all the signals it gets on all the ports. If two devices send a packet at the same time, the hub causes a collision. In this way, we have to make use of carrier sensing protocols such as the CSMA Protocol. This is pretty inefficient and causes us to split our bandwidth amongst all the devices that are connected because only one device can broadcast a packet at one time.
# Switch
A switch is a layer 2 device which splits apart the collision domains but does NOT split the broadcast domains. In this way, it is extremely useful in order to make LANs more performance-oriented.
## How does a Switch split apart Collision Domains
1. Each device connected is connected using full duplex connections for to-and-fro communications with each device connected to a port
2. It also manages an internal table and only forwards packets to a particular port instead of forwarding it to all of them.
3. There are internal buffers that hold frames in a buffer in case there are more than one that need to be sent to a particular comp