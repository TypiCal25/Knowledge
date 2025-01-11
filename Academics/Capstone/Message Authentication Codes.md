# What Is The Aim?
The aim of a message authentication code is to prevent an adversary from modifying a message sent from one party to another party, or from injecting a new message, without the receiver being able to detect it.

But can we do this without adding any new information to the system? Nope.
# Formal Model
## Intuition
In the intuitive setup, the adversary, who is computationally bounded in this case, is allowed to eavesdrop on all messages. But at the same time, his job is to basically "fool" the honest parties that the message is valid and from the right source even if its not.

To do this, the adversary basically needs to do forge a new tag on a message and send that over to the honest party in order to convince him/her that the message is valid
## Formalization
We give the adversary access to a MAC oracle with a key k (that the adversary doesn't get to know), from which he can basically ask the tags for any message m.

The scheme is broken if the adversary is able to forge a tag "t" on **any** message m which passes the verification test and that the adversary didn't already ask a tag on the given message m.
