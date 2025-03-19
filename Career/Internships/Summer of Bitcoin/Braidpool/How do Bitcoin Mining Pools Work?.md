Mining pools allow bitcoin miners in order to pool together their computation powers and hashing power in order to mine blocks for the bitcoin blockchain. They do come with their pros and cons though.

# General Considerations for a Decentralized Bitcoin Mining Pool
There are mainly 5 main components in a decentralized mining pool

1. Weak Blocks
2. Consensus Mechanism 
3. Payout Commitments 
4. Signing Procedure
5. Transaction Selection Procedure for building bitcoin blocks

In general, in a decentralized bitcoin mining pool, there must be some additional structure that shows that this share belongs to the mining pool itself. This must be done using some additional metadata that must be committed.
# Bitcoin's Chain Decision Strategy
## How Many Hashes are required to find a valid block?
### Explanation 1
In the random oracle method of assuming the SHA-256 hash, we know that for a particular difficulty $t$, there must be some probability of getting a correct hash. This would be
$$\Large \dfrac{t}{2^{256}}$$
This is due to the fact that the total probability required to find a successful hash would be
$$\Large \dfrac{t}{2^{256}} + \dfrac{2^{256} - t}{2^{256}}\cdot\dfrac{t}{2^{256}} + ...$$
### Explanation 2
But there is also the other way of seeing things. This  