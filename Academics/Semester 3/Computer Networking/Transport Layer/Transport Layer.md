The Transport layer is responsible for maintaining error control as well as flow congestion. There are two main protocols that are important in the transport layer. These are TCP and UDP. TCP stands for Transmission Control Protocol and UDP 
# TCP Header

The TCP header consists of the following

1. Word 1
	1. Source Port (16 bits)
	2. Destination Port (16 Bits)
2. Word 2
	1. Header Length (4 bits)
	2. Reserved Bits (6 bits)
	3. URG
	4. ACK
	5. PSH
	6. RST
	7. SYN
	8. FIN
	9. Window Size(16 bits)
3. Word 3
	1. TCP Checksum
	2. Urgent Pointer

![[TCP Header.png]]