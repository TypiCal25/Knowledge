To provide services to the network layers, the data link layer must use the service provided to it by the physical layer. This is of very great importance as a layer in itself.

The physical layer's job (or in other words, the service it provides) is that it transmits bits and might add in some redundancy in order to make the error levels to a tolerable amount. But in no way, does it completely remove these errors.

This job falls on the hands of the Data Link Layer.

# Breaking Down The Bit Stream Into Frames

The go to approach would be to package a group of bits as a frame. But this comes with own challenges - primarily, ***How do you get to know where a frame starts and ends?***. This is also known as the synchronization problem.

1. [[Computer Networks - Andrew Tanenbaum.pdf#page=221&selection=47,0,53,26|Byte Count]]
4. Flag bytes with byte stuffing
5. Flag bits with bit stuffing

in flag bits with bit stuffing, if 5 consecutive 1s are found in the data that is being sent, then a 0 is padded on to it. The reverse is done on the receiver's side.

# Frame Header

The frame header consists of many pieces of information but mainly consists of these three:

1. Kind of information in the frame
	1. Control Information
	2. Packet Information
2. Sequence Number
3. Acknowledgement Numberr

# Frame Trailer

This contains the checksum for the particular information. This is usually done using [[Error Control#^049e1f|CRC]] or [[Error Control#^dc9c9a|Checksum]]
