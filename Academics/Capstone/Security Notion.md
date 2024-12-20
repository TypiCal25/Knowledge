In every definition of security, there are two main things that we have to worry about:
1. The security model
2. The Thread model
# Multiple Message Eavesdropping Experiment
Instead of having just two messages, the adversary presents a 2 lists of messages, where each corresponding message in both the lists has the same length, that is,
$$|m_{0i}|=|m_{1i}|$$
One list is picked uniformly and all the messages are encrypted. Then the adversary has to output which list has been encrypted. It is similarly shown that,
$$Pr[PrivK_{A, \Pi}^{\text{mult}} = 1]\le \dfrac{1}{2} + negI(n)$$
where all the encryptions for all the messages are done with the same key k.
## What Does this Imply?
It implies, that even after having the cipher-texts of all the messages, the adversary is still not able to get to know which list of messages has been encrypted. In doing so, he should also not be able to differentiate between any single pair of messages that have been encrypted and cannot use the information together as well. This is a very very strong definition of security. 

The previous version of the experiment with just one pair of messages is basically a simplified version of this stronger definition of security.
## Breaking the One-Time Pad as being Insecure for Multiple Communications
In the case of the one-time pad, it is very easy to show that it leaks out some information about the plain-texts itself. 

Consider an adversary A who outputs 2 separate lists of messages. Since these messages can be anything, the first message contains the list of two same messages, while the other does not.

Since the one-time pad scheme is deterministic in nature, this proves that the messages would be the same. 