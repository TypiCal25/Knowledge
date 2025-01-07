# What Is The Aim?
The aim of a message authentication code is to prevent an adversary from modifying a message sent from one party to another party, or from injecting a new message, without the receiver being able to detect it.

But can we do this without adding any new information to the system? Nope.
# Formal Model
To formally model the above, we allow the adversary to request MAC tags for any messages of its choice. We give the adversary the access to a MAC oracle Mac.
## When is it considered a break?
Basically it should be that the adversary is able to convince an honest party that the message was created by another honest party. In that sense, it should be able to create a tag on a message that convinces the honest party.

