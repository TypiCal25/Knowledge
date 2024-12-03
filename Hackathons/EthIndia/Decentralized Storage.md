For every piece of data to be persisted forever, we need to use a persistence mechanism.
# Blockchain-Based Persistence
Block-chain based persistence is where all the data gets stored onto the blockchain. In this case, the data is part of the entire block and gets validated by the chain validators. There must be some incentive for these validators to continue their process of **mining**. In this case, that would be the currency on the blockchain. On the [[Ethereum]] chain, this is the cryptocurrency Ether. 

All the data can't be stored onto the chain as that would make the size of the chain simply too big to be stored on all the nodes.
# Contract-Based Persistence
In this type of persistence, we assume that the entire chain cannot store all the data. Instead what happens is that we store a hash of where the data is actually located - sort of like a pointer. This pointer points to a node on the chain where the data actually does get stored. 

This would be the whole point of a "contract" where the node decides to store a given piece of data for a fixed period of time and after that, the data is deleted. And in the case, that you do want the data to get stored continuously, you would have to "renew" the contract.

One example of this would be the [[Filecoin]] platform. [[Filecoin]] and [[Arweave]] also have challenge mechanisms where in order to find out whether the data is still present, we issue a cryptographic puzzle that must be solved. This is known as the **proof-of-access**.

[[Filecoin]] is an incentive layer on top of [[IPFS]]. [[Pinata]] is a pinning tool on top of IPFS.

