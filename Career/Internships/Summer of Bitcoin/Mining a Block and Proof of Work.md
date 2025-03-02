The process of mining a block is central to how Bitcoin works as a blockchain and as a digital asset. It follows a protocol that is known as the "Proof of Work".
# Block Header
A block header consists of three main things:
1. A reference to a previous block hash.
2. Difficulty
3. Timestamp
4. Nonce
5. Merkle Tree Root.

A block hash is the double SHA-256 Hash of the block header. This is very important to note.
# Genesis Block
Every bitcoin client already knows the details of the Genesis block as it is hard-coded inside the Bitcoin Client. 
# Merkle Trees
A Merkle Tree is a very useful data structure that can be used to summarize thousands of transactions in a single go. It also allows us to verify whether a transaction was included in the tree in $< 2 * log_2(n)$ 
# Proof of Work
Mining is the process by which new Bitcoin is added to the money supply in Bitcoin. It is also the process to secure the bitcoin system against fraudulent transactions spending the same amount of bitcoin more than once. 
## Verifying a Transaction
1. Syntax and Data Structure must be correct
2. Input and Outputs must not be empty
3. Transaction size in bytes is less than MAX_BLOCK_SIZE
4. 