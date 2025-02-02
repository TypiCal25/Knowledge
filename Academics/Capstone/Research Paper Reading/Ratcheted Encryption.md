Ratcheted encryption is a very new formalization of the principles that lead to forward secrecy as well as backwards secrecy.
# What is Forward Secrecy?
It basically means that you can't uncover the secrets of messages that were using a previous key using the currently exposed keys.
# What is Backwards Secrecy?
# How Does TLS Work?
TLS ensures that there is a secure communication channel between a server and client such that the key exchanges are done using the public key cryptographic principles while the encryption is solely done using symmetric key algorithms.

Lets say that the server has a set of keys (pubkey-server, privkey-server). It also has a certificate authority from which it has gotten a digital signature attesting to this public key.
## Steps
1. The client sends information on all the supported ciphersuites (that have been implemented in software), along with a random Nonce number $N_c$.
2. The 