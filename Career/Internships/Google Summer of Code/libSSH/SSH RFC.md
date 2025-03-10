# What Exactly is the SSH Protocol?
Its basically just a protocol which allows secure operations over an insecure network.
# Architecture of SSH
## Host Keys
Each server is recommended to have a host key. A host key consists of
1. A public key
2. A private key
It is also possible for a single host to have multiple host keys according to different algorithms. This is perfectly fine. It **must** have at least one host key with the required public key algorithms.
### Server Verification using Host Keys
The server host key is used during key exchange to verify that the client is really talking to the correct server. How does the client do this?
1. Making use of a certificate authority
2. Manually managing a database of certificates

# Transport Layer
The SSH Transport Layer is a secure, low-level transport protocol. 

When used over TCP/IP, the server normally listens for connections over the port 22. SSH works over any 8 bit reliable transmission medium.
## Protocol Version Exchange
Both sides must send an identification string in the format of
`SSH-protoversion-softwareversion SP comments CR LF`
1. protoversion has been defined to be "2.0" in the RFC documents. But keeping this field allows for future upgrades to the SSH Protocol.
2. The maximum length of this string is 255 characters.
## Compatibility with older SSH Versions
Older versions of the SSH client haven't been documented well. 
#### Old Client, New Server
When a server wants to show that it is compatible with older versions of the SSH protocol, then it should send its protoversion to be 1.99. For newer clients, they will process this as if it is identical to 2.0. 
## SSH Packet Size
![[TCP Packet Image.png]]
SSH packet format is as follows:
1. uint32 - packet_length
2. byte - padding_length
3. byte[n1] - payload; n1 = packet_length - padding_length - 1
4. byte[n2] - random padding; n2 = padding_length
5. byte[m] - mac
Here the packet_length is the total length of the packet data, excluding the packet_length and mac fields.
## Compression
If compression has been negotiated, the 'payload' field will be compressed using the negotiated compression algorithm. This compressed payload will then be used for all other calculations 