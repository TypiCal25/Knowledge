# What Exactly is the SSH Protocol?
Its basically just a protocol which allows secure operations over an insecure network.
# Architecture of SSH
## Host Keys
Each server is recommended to have a host key. A host key consists of
1. A public key
2. A private key
It is also possible for a single host to have multiple host keys according to different algorithms. This is perfectly fine. It **must** have at least one host key with the required public key algorithms.
### Server Verification using Host Keys
The server host key is used during key exchange to verify that the client is really talking to the 

