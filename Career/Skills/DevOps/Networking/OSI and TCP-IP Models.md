Reference models allow for devices to interconnect and talk to each other so that they all follow the same "rules" or "technologies" while trying to interconnect.

The obvious winner in what is actually implemented is the TCP/IP model which is what is installed in most systems but network engineers always talk in terms of the OSI model as well.
# Why is the OSI Model Important?
The OSI model is an amazing reference model that lets two computers interconnect and inter-communicate using the same standards. This ensures that even if different manufacturers are creating the hardware, they will still be able to connect to each other.

We have 7 different layers in the OSI Model. These are (from bottom to top):
1. Physical Layer
2. Data Link Layer
3. Network Layer
4. Transport Layer
5. Session Layer
6. Presentation Layer
7. Application Layer
# Different Layers of a Network
1. Backbone Layer
2. Distribution Layer
3. Access Layer
## Backbone Network
The backbone network (also known as the core layer) is the **core** of the network. As such, it is responsible for transporting large amounts of traffic. The main focus should be on extremely low latency and on reliability. As such, you should use Physical Layer constructs like extremely fast cables with redundancy enabled that are reliable in nature.

There should be no packet filtering, etc. done at this layer, as this layer should be solely focused on transporting network traffic.
## Distribution Layer
This layer consists of layer 3 switches (routers) that can perform inter-VLAN routing. It is at this layer, that you can implement all the packet filtering, etc. things that you want to do. It is also the layer that decides whether a packet should be sent to the backbone layer or not. 

In this layer, a single switch from the access layer may be connected to multiple different distribution layer routers in order to provide high availability in case one router goes down temporarily. The remaining network can continue to operate without any hassles.
## Access Layer
This is the modern switched access layer consisting of all the devices.
# Application Layer Programs
1. FTP
2. Telnet
3. SSH
4. DNS
5. DHCP
## DHCP





