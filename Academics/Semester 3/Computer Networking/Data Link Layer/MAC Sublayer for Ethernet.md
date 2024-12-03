It is important to study the data protocol that is used in the classic ethernet protocol.

![[Ethernet MAC Sublayer.png]]

The Preamble consists of 10101010 for 7 bytes and 10101011 for the 8th byte. This is used to delimit the start of the frame. 

# MAC Addresses

It then consists of a destination address and a source address. 

The source and destination addresses are 48-bit numbers that are unique to each and every single host machine. The number of possible combinations are $2^{48}$. But in reality, these are not the total number of possible combinations.

The first 3 bytes (24 bits) are Organizationally Unique Identifiers. This is assigned by IEEE itself. They identify the manufacturer of a device. This is exactly how the MAC addresses can be used to identify which brand a laptop or device is, when it is connected to the network.

