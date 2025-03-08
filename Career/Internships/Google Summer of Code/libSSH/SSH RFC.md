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

When used over TCP/IP, the server normally listens for connections over the port 22. 
## Protocol Version Exchange
Both sides must send an identification string in the format of
`SSH-protoversion-softwareversion SP comments CR LF`
1. protoversion has been defined to be "2.0" in the RFC documents. But keeping this field allows for future upgrades to the SSH Protocol.
2. 