In chosen plain-text attacks, the adversary is able to obtain cipher-texts for plain-texts of his/her choice. This is either by influencing the messages that are being sent. 

**Chosen Plain-Text Attacks encompass all of the known-plain-text attacks as well**

There are many real-life examples where chosen plain-text attacks have been successful.
# Indistinguishability Experiment for CPA Attacks
It is pretty much similar to the initial indistinguishability experiment, but the only difference is that the adversary has access to the encryption oracle as well. 
## What is the Encryption Oracle
It is a sort of black box with which the adversary can interact. It returns the $\text{Enc}_k(\cdot)$ output in which the key $k$ is unknown to the adversary.

This is a much more powerful experiment than the other one :) 

Basically, in this type of an attack mode, the adversary can *query* the oracle with any plain-texts of his/her choice.
