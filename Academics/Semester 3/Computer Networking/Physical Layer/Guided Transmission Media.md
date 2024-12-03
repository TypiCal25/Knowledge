There are different media for performing communication over.

These are:
- Guided Transmission Media
- Wireless and Unguided Transmission Media
## Magnetic Media

A simple way of transmitting data would be to record and store data on high-storage capacity magnetic disks and physically transport this to wherever the data is needed. This will give such a high bandwidth and data rate.

### Advantages

1. Extremely High Bandwidth
2. Extremely Cost Efficient per Bit of Data

### Disadvantages

1. Extremely High Transmission Times

## Twisted Pairs

A twisted pair consists of two insulated copper wires, typically about 1 mm thick. The wires are twisted together in a helical form, just like in DNA. 

### Why Twist The Wires Rather Than Keeping Them Parallel?

Two parallel wires essentially constitute an antenna and radiate waves. If the two wires are twisted around each other in a helical form, then the waves from the different waves cancel out, and cross-interference is minimized.

### Bandwidth of a Twisted Pair

The bandwidth of a twisted pair cable mainly depends upon:

1. Thickness of the cable
2. Distance that the cable is running.

### Category 5 Twisted Pair Cables

A category 5 twisted pair cable consists of 4 twisted pairs of insulated wires.

100 Mbps Ethernet uses only 2 of the 4 twisted pairs, one for each direction. This is also known as a simplex connection. Higher speed 1 Gbps Ethernet uses all 4 twisted pairs in both directions simultaneously. This is known as full-duplex.

## Coaxial Cable

Another common transmission media is the coaxial cable. 

1. Better Shielding
2. Less Cross talk
3. More suitable for longer distances
4. Higher Speed

![[Coaxial Cable.png]]

Coaxial cables have bandwidths in the ranges of Gigahertz as compared to Megahertz in the twisted pairs. In this way, a coaxial cable can account for a higher bit rate whilst keeping the same number of harmonics as seen in [[Physical Layer#^c1daf3|mathematical derivation]].

## Power Lines

Power lines have been used since quite a while for very low-rate communication such as remote-metering that has been done by the electricity corporations for quite a while.

### Problems Faced By Communication Over Power Lines

Power lines or electrical wiring attenuate any signals that are above 50-60 MHz. Due to this, the bit rate is extremely low at best.

1. There is no twisting, and hence each wire picks up on waves and also radiates waves, while acting as antennas.
2. Transient electrical signals that are generated while switching appliances on and off create bursts and distortions over a wide range of frequencies, hence distorting the signals.
3. Many signals together bounce around the wiring causing a lot of distortion.

## Fiber Optics

It works primarily on the principle of total internal reflection. Light is made to be incident on the boundaries of a thin glass fiber at angles of incidence greater than the critical angles for the media boundary pair. This causes total internal reflection.

1. Multi-mode: Many different light rays could be bouncing around inside the cable at different angles of incidence (greater than the critical angle for the media pair).
2. Single Mode: If we reduce the diameter of the glass fiber to a few times the multiple of the wavelength of light, then, while following the principle of total internal reflection, the light starts travelling as if it were being guided in a single line. This is more expensive to achieve but also has greater efficiency. 

![[Optical Fiber Cable.png]]

### Ways Of Connecting Optical Fibers

1. Fiber Connectors
2. Mechanical Splicing
3. Physical Fusing
