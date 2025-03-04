SegWit stands for Segregated Witness. In this case, all the witness data that has to be included in a bitcoin transaction is kept in a separate section of the the transaction known as the witness stack. This helps in
1. Non-Malleability of the transaction
2. Increased throughput of the transaction.
# Regular Execution Pre-SegWit
Before SegWit was introduced, in order to evaluate a transaction and to check if the UTXO can get unlocked, you would concatenate the scriptSig with the scriptPubKey and execute it using the bitcoin stack. This would essentially return a true or a false, indicating whether the UTXO was unlocked for this transaction or not. This essentially needed to be true for every single transaction input otherwise the overall transaction was considered invalid.
# Execution Post-SegWit
In newer transactions, post-SegWit,
1. the scriptSig is completely empty
2. the scriptPubKey consists of a "Witness Program" instead.
## Witness Program
SegWit transactions have the scriptPubKey in a specific format. This format is given below
```
OP_0-OP_16 followed by a <2-40 Byte Hash>
```

