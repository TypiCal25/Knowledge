# What Is The Point of Logics and Proofs
The whole point of discrete mathematics and this chapter is to give precise meaning to mathematical statements without introducing any doubt or ambiguity.

# Propositions
A proposition is a declarative statement that is either true or false, but not both. A declarative statement is a statement that declares a fact.

We use letters to represent propositions. In order to indicate a negation of a proposition, we make use of the ~ symbol.

We simply add the statement "it is not the case that" whenever there is a negation of a proposition.
# Conditional Statements
## Single Conditionals
$p \rightarrow q$ is known as a condition. It can be read as "if p, then q". Here p is known as the hypothesis statement and q is known as the conclusion statement.

$q \rightarrow p$ is known as the converse of $p \rightarrow q$. 
$\neg q \rightarrow \neg p$ is known as the contra-positive statement of $p \rightarrow q$
$\neg p \rightarrow \neg q$ is known as the inverse of $p \rightarrow q$

The statement and its contra-positive statement are always the same
Similarly the inverse of a statement and its converse are always the same.

We can prove both of these statements through the use of a truth-table.

| p   | q   | R   |
| --- | --- | --- |
| T   | T   | T   |
| T   | F   | F   |
| F   | T   | T   |
| F   | F   | T   |

This is the truth table of $p \rightarrow q$. 
## Bi-conditional Statements
This connective statement is true only when both p and q have the same truth values.
# Propositional Equivalences
A propositional equivalence is a mathematical argument, that we can replace with another mathematical statement having the same truth value.

A compound statement that is always true is known as a tautology.
A compound statement that is always false is known as a fallacy.
A compound statement that is neither a tautology or a contradiction is known as a contingency.

Two compound propositions are called logically equivalent if both of them have the same truth values in all possible cases. This happens if $p \leftrightarrow q$ is a tautology. We use $p \equiv q$ to denote this.
# De-Morgan's Laws
Simply apply the negation inside the brackets and flip the sign
$$\neg(p \wedge q) \equiv \neg p \vee \neg q$$
$$\neg(p \vee q) \equiv \neg p \wedge \neg q$$
# Predicate and Quantifiers
Any function/relation $P(x_1, x_2, x_3, x_4, \ldots, x_n)$, in n variables is called a propositional function, where P is called a predicate function. 

A predicate is basically just a propositional statement generator. Plugging in values into a predicate generates a proposition.

Quantification is the method of creating a proposition from a propositional function by assigning values to variables. **Quantified predicate expressions are also just regular propositions.**
## Negation of Quantified Predicates
Simply just change the quantifier and take the negation sign inside.
## Nested Quantifiers
There are 4 nested quantifier-based statements
1. For all x, For all y, P(x, y)
2. For all x, There exists a y P(x, y)
3. There exists x, For all y P(x, y)
4. There exists x, there exists y P(x, y)

The order of the nested quantifiers matters unless they are the same quantifier.
# Rules of Inference
An argument in propositional logic is a sequence of propositions. Every statement except the first one is known as a premise while the last statement is known as a conclusion. An argument is valid if the truth of all its premises implies that the conclusion is also true.

The presence of the word "Modus" relates to conditionals
$$\text{Modus Ponens: } p, p \rightarrow q \implies q$$
$$\text{Modus tollens: } \neg q, p \rightarrow q \implies \neg p$$

The word syllogism means that there is an intermediate from which two different premises having an intermediate are connected.
$$p \rightarrow q, q \rightarrow r \implies p \rightarrow r$$
$$p \vee q, \neg p \implies q$$

Addition:
$$p, p \wedge q \implies p$$
Simplification:
$$p \rightarrow q \implies p$$
Conjunction: 
$$p, q \implies p \wedge q$$
Resolution:
$$p \vee q, \neg p \vee r \implies q \vee r$$
# Proofs
## Direct Proofs
These are proofs in which there are a direct sequence of steps leading from the hypothesis to the conclusion.
## Proof By Contraposition
We just prove the contrapositive statement and that indirectly proves the 