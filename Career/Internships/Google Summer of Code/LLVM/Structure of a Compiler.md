A compiler basically has five different phases. 
1. Lexical Analysis
2. Parsing
3. Semantic Analysis
4. Optimization
5. Code Generation

This can very much be translated to how a human looks at an English sentence.
# Lexical Analysis
Lexical Analysis divides program text into "words" or "tokens"
1. Understand the meaning of each token
2. Grouping these tokens into meaningful context.

Compilers can only do very limited semantic analysis of programs. Because of this, programming languages define very strict rules to avoid such ambiguities.

## Token Classes
The goal of a lexical analyzer is to classify program sub-strings according to their class type. They basically communicate the tokens into the parser.

The sub-strings are called lexemes. The goal of the lexical analyser is to identify the token class of a lexema.

[[Finite Automata]]
