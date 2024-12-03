# Error Control

After being able to delimit frames, we now have to make sure that they are received in the correct order as well as in the correct form at the receiver's side, i.e, without any errors.

There are two things that we can do. We can add in enough information in order to detect errors or we can add in enough information so that we can correct errors. Both of these are important. Without a doubt, simply being able to detect errors requires a lesser amount of redundant data that must be added.

What we choose is up to the channel that we are making use of. If we are making use of a physical channel that has a low error rate such as an optical fiber, then it is much better to make use of error-detecting codes rather than error-correcting codes. On the other hand, when we use channels where the error rate is a lot higher, it is much better to make use of FEC codes. 

## Error Correcting Codes

1. Hamming Codes
2. Binary Convolution Codes
3. Reed-Solomon Codes
4. Low-Density Parity Check Codes

### Mathematics Behind Error Correcting Codes

All error correcting/detecting codes add in some redundant information or redundant bits. There is no other alternative possible. This is a physical or universal limitation. After all, how would you know whether a bit was wrong or right if no one was there to tell you?

Let's say that there are $m$ bits of data and $r$ bits of redundant information. 

1. Block Codes - redundant bits are calculated solely as a function of the data bits
2. Systematic Codes - the data bits are sent directly along with the check bits without being encoded themselves
3. Linear Codes - the redundant bits can be calculated using the data bits in a linear fashion using some sort of a function.

Let's say the total data size that is being sent consists of $n$ bits. In this case, $n = m + r$. Not all of the $2^n$ possible codewords are valid codewords. Instead only $\dfrac{1}{2^r}$ are actually valid.

In order to detect $d$ errors, you need a $d + 1$ code while to correct $d$ errors, you need a $2d + 1$ code.

$$\Huge (m + r + 1) \le 2^r$$

This inequality allows us to calculate the theoretically minimum number of redundant bits that we need to add along with the data bits in order to be able to detect and correct ***Only Single Bit Errors***.

### Hamming Codes

Hamming code is just one type of an error-correcting code that can be used to correct single bit errors. It allows us to reach the theoretical minimum number of bits required in order to detect and correct these errors as given by the equation above.

In hamming codes, the bits that represent powers of 2 are kept as check bits while the remaining bits are filled up with the data bits.

#### How To Check If A Hamming Code Has An Error?

You perform a check of all the check bits and find out which ones are wrong and which ones are right. You then line them up in the reverse order of powers, i.e, the right most power represents 0.

By the design of hamming codes, we can directly get the bit number that is incorrect, and hence, we can flip that bit in order to correct the bit, and the transmitted data.

## Error Detecting Codes

When we are using channels that are not prone to errors such as high-quality copper cables (twisted pairs, coaxial cables) or optical fiber cables, we do not need to make use of error correcting codes as it is simply more efficient and less bandwidth-heavy to detect errors and retransmit the incorrect frames over the channel again.

1. Parity
2. Checksums
3. Cyclic Redundancy Checks

### Parity Bit

In this, we simply append a bit to the codeword in order to calculate whether the codeword is even or odd. From a simple thought, we get to know that this sort of codeword has a hamming distance of 2. It can therefore, only be used to detect single bit errors. 

To detect more number of errors, we can always arrange the bits as a matrix and calculate the parity bits for each row or column. ***Interleaving can also be performed which transforms the single isolated error-detection power of the parity bits to be able to detect burst errors now.***

### Checksum

^dc9c9a

The internet checksum is a checksum that is obtained from getting a running sum of the 16-bit words of data bits. This is then complemented and sent along with the data on the other side. The receiver's side can also perform a running sum of the 16-bit words that it receives and check whether the sum is 0 or not. If it is 0, then the codeword received is valid, otherwise it is not.

### CRC - Cyclic Redundancy Check

^049e1f


