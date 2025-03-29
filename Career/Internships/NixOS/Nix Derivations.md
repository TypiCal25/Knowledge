Nix Derivations is the key feature of the [[Nix Programming Fundamentals|Nix Programming Language]].

The Nix language is used to describe derivations. Nix then runs these derivations in order to create build results. These build results can then be used in other nix derivations.

There is a built-in impure function given by Nix known as `derivation`. In practice, this is the primitive that is used to create Nix Derivations. But in practice, we are never going to be using this. Instead, we are going to be using mkDerivation.

