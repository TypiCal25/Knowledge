Each system in the internet has a unique IP Address. It is a sort of Unique ID for identifying the system.

The IP Addresses are assigned by  ^7f586c
1. ICANN (Internet Corporation for Assigned Names and Numbers)
2. IANA (Internet Assigned Number Authority)
3. RIR (Regional Internet Registries)
4. ISP (Internet Service Provider)

IPv4 Addresses were just not enough, as the total number of possible devices was simply just $2^{32} = 4,294,967,296$ devices. On the other hand, it is predicted that by 2025, there will be 75 billion IoT devices alone in the internet.

So what can we do? We can make use of IPv6!

## Types of IP Addresses

We have public IP Addresses and Private IP Addresses. The public IP Addresses are visible to everyone on the internet, while the private IP Addresses are simple available locally in the network. The private IP Addresses do not have any cost associated with them, while the public IP Addresses have some cost which will be defined by the [[IP Addressing#^7f586c|assigning organisation]]. 

Private and Public IP Addresses are mapped to each other using a ***Network Address Translation Table (NAT Table)***. The ports are the end-points.

## Network IP Addresses

Just as every host system has an assigned IP Address, so does each network. Usually, its the very first IP Address in the range and it is used for delimiting the network. In simpler words, we can say that it is the network address itself. 

### Why Even have a Network Address?

It is useful in routing the packets, as we can first decide which network it needs to reach and how it can get there through the different routers, etc. This is done in the **Network Layer**.

The destination system is then found in the network using a combination of IP Address and MAC Addresses. This is done in the MAC Layer.

## ARP Table

An ***Address Resolution Table*** maps the IP Addresses on to the corresponding MAC Address. For a node or system, the MAC Address cannot change but the IP Address of that node can change.

An ARP request packet can be sent on the LAN and only the corresponding node or system responds to that packet. The MAC address is then mapped in the ARP Table.

### Disadvantages of ARP Request Packets

1. They consume some bandwidth off of the main network bandwidth
2. All nodes must include some processing for the ARP request packet even if it isn't the node that is required.
3. ARP Table construction also adds some end-to-end delay time.

## IPv4 Packets

There are about 20 - 60 bytes worth of header in the IPv4 Packet. This consists of 5 words of 4 bytes each. There can also be an additional 40 bytes worth of header information.

The payload data can have a maximum of 65535 bytes.

### IPv4 Headers

They contain control information. Their whole purpose is to:

1. Help the network layer in finding the source and destination addresses.
2. To find resource-rich paths in between the two
3. Plans for what to do when:
	1. Packet is lost
	2. Network Configuration is Poor

The IP Header usually contains a minimum of 5 words for control information, along with any additional header options. The mandatory five words are as follows:

1. Word 1
	1. Version (4 Bits)
	2. IHL (4 Bits) - Internet Header Length. The IHL tells you how many words are present in the IP Header. It's default value is 5. It's maximum value is 15, hence signifying that the maximum size of the IP Header is $15 * 4 = 60$ bytes
	3. DSCP (6 Bits) - Differentiated Service Code Point - This is used to indicate what ***Quality of Service*** you want to use.
	4. ECN (2 Bits) - Explicit Congestion Control. This is pretty useful when used with congestion active protocols such as TCP. They can set these bits in order to inform the sender/receiver of the bits.
	5. Total Length (16 Bits)
2. Word 2
	1. Identification (16 Bits)
	2. Flags (3 Bits)
	3. Fragment Offset (13 Bits)
3. Word 3
	1. Time to live (8 Bits)
	2. Protocol (8 Bits)
	3. Header Checksum (16 Bits)
4. Word 4 - Source IP Address
5. Word 5 - Destination IP Address

### What Is The Size Of An IP Packet

The IP Packet's maximum transmission unit size is known as the ***MTU***. It decides the size of the packet in the Ethernet connection. It's default value is $1500$ bytes.

If the packet size is bigger than the MTU of any intermediate link in the network, an ICMP packet will be sent back which will ask the packet to be fragmented down further. This is the use of a DF bit in the first place.

### Flags In the IP Packet

There are 3 flags in the IP Packet. These are

1. Flag Bit 0 (Reserved for use and just set to 0)
2. Bit 1 - Don't fragment bit. This signifies that this fragment shouldn't be fragmented in the first place.
3. Bit 2 - More Fragment. This signifies whether the fragment is the last one in a fragmented packet or are there more fragments that must still be received.

Fragment Offset gives you the offset of 8-byte blocks of data. This is useful in knowing the order of the fragments of a packet. 

# IPv6 Header

The IPv6 Header is very different than the IPv4 header. It does not contain a lot of the fields that are there in the IPv4 Header.

1. 4 Bits for Version
2. 6 Bits for DSCP
3. 2 Bits for ECN
4. 20 Bits for Flow Label
5. 8 Bits for Next Header
6. 8 Bits for Hop Limit
7. Source Address is 128 bits
8. Destination Address is 128 bits

![[IPv6 Header.png]]




