The process of converting digital bits into analog signals is known as digital modulation.

# Baseband Transmission

## Unipolar Encoding

### NRZ Encoding - Non Returning to Zero

This is the simplest encoding scheme and simply uses a high voltage to represent a '1' bit and a zero voltage to represent a '0' bit.

Due to its simplicity, the number of harmonics to encode it in an analog format is lower. Due to this, it uses lower bandwidth than the other encoding schemes. But its simplicity does not allow for error correction and also causes synchronization errors for a long length of 1s and 0s.

### RZ Encoding - Returning to Zero

For representing a '1' bit, for half of the bit duration, there is a high voltage while for the remaining its zero voltage.

This requires more bandwidth than NRZ encoding scheme as there will be a requirement of more high frequency components and hence a higher frequency bandwidth usage than the NRZ encoding scheme which won't require as many high frequency Fourier Components.


