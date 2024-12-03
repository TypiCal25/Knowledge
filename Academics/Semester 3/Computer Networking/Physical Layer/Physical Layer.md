The physical layer is the lowest layer in the networking architecture. 

# Basis For Communication - Fourier Series

^05fb72

>Mother nature has definitely put limitations on how much information can be sent through a channel.

Fourier found out how to break down a periodic signal into its sinusoidal components. It is important to note that in any media, the different Fourier components are diminished to different degrees and due to this, there can be a distortion in the data that is sent over the channel.

The width of the frequency range that can be transmitted without being diminished strongly is known as the bandwidth. It is a physical property of the media.

$\Large \cos{x * t}$ has a time period of $\dfrac{2 \pi}{x}$ . This is important to note as the higher the harmonic number of a Fourier component, the lower is the time period, and hence higher is the frequency. What this tells us is that as the harmonic number increases, the frequency of that component also increases.  
Let's say that there is some frequency cutoff $f_c$ that is introduced into the channel or that is a physical property of that channel. Let's say that we need to send a bit rate of $b$ bits per second, and we have to send a total of $x$ bits. With these details, we would get to know that the lowest harmonic number Fourier component would need to have a time period of $\dfrac{x}{b}$ seconds. This would mean that the frequency of this Fourier component would be $\dfrac{b}{x}$ Hz. All the other Fourier components would have higher frequencies. All the other components would have a multiple of this frequency in the first place. Therefore, with the harmonic numbers in place, the other frequencies would be of the form $\dfrac{nb}{x}$. Therefore, the highest harmonic number could be found using the inequality,  ^c1daf3

$$\Huge \frac{n*b}{x} \le f_c \implies n \le \frac{f_c * x}{b}$$
Therefore, in any media, we would have a limitation with the bit rate and the data that we want to send. Let's say we have a fixed transmission data size of 1 bit, then we can plug in the numbers to find in the number of harmonics that we need. In any case, we can see that as the bit rate increases, the number of harmonics decreases, and hence the fidelity of the data received is also lower. ***This is the physical limitation that Mother Nature puts on every communication medium***.

From a purely CS-oriented point of view, the **bandwidth is the maximum data rate of a channel that is measured in bits/sec**.

[[Guided Transmission Media]]
[[Wireless Transmission Media]]
[[Satellite Communication]]
[[Digital Modulation]]
[[Multiplexing]]
