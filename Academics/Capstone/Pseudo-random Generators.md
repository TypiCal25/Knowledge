A pseudo-random generator $G$ is an efficient (which means it runs in polynomial time), **deterministic** algorithm that transforms a short uniform string, into a longer, **uniform-looking** output string.

The key point is that it is deterministic. In this sense, if you feed the same seed into a Pseudo-random generator, then it will output the same output string. This is the exact meaning of a deterministic function.
# But What Exactly is a Pseudo-Random String?
The basic realization is that a pseudo-random string should be able to pass all efficient statistical distinguishing tests. 
## What is a Distribution in Strings
A distribution basically means that you are assigning a probability to every string.
## What is Sampling?
Sampling basically means picking a string from this distribution according to the probability distribution.
# How Do We Judge Pseudo-Randomness
Basically, we need to find and ensure that informally,
> A pseudo-random string is just as good as a uniform-string.

This is basically the main intuition behind the whole concept as *as long as we consider polynomial-time observers.*

[[Pseudo-random Generators]]