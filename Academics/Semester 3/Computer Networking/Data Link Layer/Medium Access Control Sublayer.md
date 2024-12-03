# What Is The Point Of The Medium Access Control Sublayer?

The whole point of the medium access control sublayer is that it allows us to decide how to allocate a broadcast channel (a channel that has many different host machines connected to it at the same time)

# Static Allocation Schemes

The static allocation schemes would be to make use of the previously discussed [[Multiplexing]] techniques. But most of them have the same issues - if a user that is assigned a certain frequency range (through [[Multiplexing#^fa2d51|Frequency Division Multiplexing]]) and he doesn't use it regularly or is simply not using it, then that whole range of a frequency band is simply just lost and precious frequency bandwidth is wasted.

The same issue would happen with any of the [[Multiplexing#^5d336d|Time Division Multiplexing]] and other multiplexing schemes. This inherently is the issue with static allocation schemes for the broadcast channels.

# Dynamic Allocation Schemes

## Assumptions We Are Trying To Solve

1. We assume that each host machine that is connected to the broadcast channel has generated a frame. We assume that the host machine simply pauses until the frame that it has generated is sent on the channel.
2. There is only a single channel.
3. All the stations can observe the channel and get to know if a collision has occurred.
	1. This is easy to do for physically connected channels such as copper-wire based, or optical fiber based connections.
	2. This is hard to do for wireless connections, which still will depend on acknowledgement frames.
4. Carrier Sensing may or may not be there. Carrier Sensing essentially lets each host machine know that a frame is being transmitted over the channel and that the channel is ***busy***.
5. Time can either be continuous or it can be discrete/slotted. This depends on the network.

## ALOHA Schemes

The basic idea of an ALOHA scheme is that you let users transmit when they want to transmit.

### Pure ALOHA

Let the users transmit when they want to. In the case of a collision, the host machine waits for a random period of time before trying to send the frame again. 

### Slotted ALOHA

The users are still allowed to transmit as and when they have frames ready but only at the start of a particular slot. This reduces the vulnerable time by nearly half!

## Carrier Sensing Protocols

In all CSMA protocols, propagation delay is still an issue. This can occur when a host machine has started to send a frame on the channel but the signal hasn't reached another host machine. In that case, that host machine might believe that the channel is free/idle and begin a transmission. Due to this, there can be a collision and the frames can become garbled.

### 1-Persistent Carrier Sense Multiple Access (1-p CSMA)

This is the simplest carrier sensing protocol in which a host machine simply checks whether the channel is idle or not. In the case that the channel is idle, it transmits its frame. If it is busy, it waits until the channel is idle. If a collision occurs, it waits a random period of time before trying again.

### Non-Persistent Carrier Sense Multiple Access

In this sort of a carrier sensing protocol, the host machines try to not be so hungry to send their frames on the channel. Instead what they do is that they check whether the channel is busy or idle. In the case that it is busy, they wait a random period of time before trying again. 

By doing this, the delays are more, but the number of collisions are far less.

### p-Persistent Carrier Sense Multiple Access

***It is very important to note that p-Persistent CSMA is only for use in slotted channels!***

In this sort of a CSMA protocol, each host machine has probabilities $p$ and $q = 1- p$ with which it transmits in the current slot or defers until the next slot. If in case, the channel is busy, then it simply waits until the next slot. It then senses whether the channel is idle or not. If it is idle, then it transmits with a probability of $p$ or defers until the next slot with a probability of $q$. This is continuously repeated until the frame has been sent.

### Carrier Sense Multiple Access with Collision Detection (CSMA/CD)

>Ethernet uses CSMA/CD

#### How To Detect Collisions?

Detecting collisions is an analog process and can be done by comparing the received signals on the channel with the sent signals by the host machine. If the two are compared and are different, then it can be concluded that there has been a conclusion.

In this method, the CSMA/CD protocol tells the host machine that has detected a collision while trying to send its frame on the channel to abruptly stop the transmission, wait for a random period of time, and then try again.

[[MAC Sublayer for Ethernet]]
