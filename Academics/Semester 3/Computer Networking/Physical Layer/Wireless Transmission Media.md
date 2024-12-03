# Wireless Transmission Media

![[Electromagnetic Spectrum.png]]

## Why Not Use UV, X-Rays, and Gamma Rays For Communication?

### Advantages

1. As they are of high frequency, they are better suited for communication and can provide a higher bit rate.

### Disadvantages

1. It is hard to modulate and produce these types of waves.
2. They are dangerous to living things.
3. They do not propagate well through buildings.

$$\Huge \text{Maximum Number of Bits/Sec} = B * \log_2 \left (1 + \frac{S}{N} \right )$$

This is known as Shannon's equation and gives the maximum bit rate for any channel with a bandwidth of $B$ and a signal-to-noise ratio of $\dfrac{S}{N}$. 

## Frequency Hopping 

In frequency hopping, the transmitter jumps from one frequency to another frequency, hundreds of times per second. 

1. Impossible to jam communications
2. Makes it very hard to detect communications.
3. Made use of for military purposes

> It is important to note that for sending some data over a channel using frequencies, you definitely need more than simply one harmonic. You need a set of frequencies rather than just one.

## Politics of Electromagnetic Transmissions

Everyone wants more frequency spectrum as they all want higher data rates while being able to still transmit the same number of harmonics for the same amount of fidelity. 

### ISM Bands

The ISM Bands stand for Industry, Scientific, and Medicine bands. These are frequency bands that are free for everyone to use. Government regulating agencies let everyone transmit on these bands but have regulations on the power of the transmissions. They also allow them to use a range of frequencies so as to spread the transmissions as well as reduce the overall power of transmission that is required.

The ISM Bands according to the FCC (In the United States) are as follows:

![[ISM Bands.png]]

## Radio Transmission

1. Easy to Generate
2. Can penetrate through buildings easily
3. Omni-Directional

Radio waves have a path loss that is proportional to $\dfrac{1}{r^2}$. This means that the same amount of attenuation fraction drop occurs every time the distance is doubled. Radio transmissions are also easily interfered with by mechanical and electrical parts in circuits.

In the VLF, LF, and MF bands of the Radio waves, these are mostly ground waves. They do not get absorbed as much by the Earth and propagate over longer distances than the HF, and VHF space waves.

## Microwave Transmission

Microwave transmissions travel much more in a straight line and need to be more directed as compared to radio transmissions. For this purpose, specialized parabolic dishes are used to concentrate the waves at a single point.

### Multi-path Fading

Multi-path fading is a rather weather oriented issue. It occurs when the microwaves that are being sent are refracted and are received at the receiver's side with a certain delay. This causes them to be out of phase with the direct waves that are being sent from the sender's side. This causes a cancellation of the signal as a whole.

It basically wipes out a frequency band that could have been used. For this reason, many operators keep a certain band free to use when another frequency band has been wiped out of use temporarily due to the issue of multi path fading.

### Effective Cost

Installing microwave towers can be significantly less costly than burying kilometers worth of fiber or copper cables under the surface of the earth. Installing microwave towers is as simple as buying a small piece of land, installing a tower with 4 guy wires and a few antennas. This would be more than sufficient for nearly 80 or so kilometers worth of communication.

## Infrared Transmission

Infrared transmission devices are very widespread. Infrared transmission doesn't travel through any solid objects and behaves a lot more like visible light.
