# Stream Cipher Modes of Operation
Stream Ciphers are basically flexible pseudo-random generators that can generate any number of pseudo-random bits.
## Synchronized Mode
In this mode of operation, the sender and receiver must both be synchronized in what they know. In this way, we can use a stream cipher to encrypt how many ever messages that we want using the same key as long as there is a synchronized state between both the machines.
## Un-synchronized Mode
In this case, we can achieve a stateless form of encryption using stream ciphers by using the concept of initialization vectors to generate the stream of pseudo-random bits. 
# Cipher Block Chaining
