In every definition of security, there are two main things that we have to worry about:
1. The security model
2. The Thread model
# Multiple Message Eavesdropping Experiment
Instead of having just two messages, the adversary presents a 2 lists of messages, where each corresponding message in both the lists has the same length, that is,
$$|m_{0i}|=|m_{1i}|$$
One list is picked uniformly and all the messages are encrypted. Then the adversary has to output which list has been encrypted. It is similarly shown that,
$$Pr[PrivK_{A, \Pi}]$$