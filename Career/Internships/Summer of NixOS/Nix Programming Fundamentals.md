An Attribute Set is a collection of name-value pairs. This essentially means that an Attribute set in the nix programming language is equivalent to a HashMap.

If you see a rec before an attribute set, it basically allows us to use the values that are currently being defined in the attribute set itself.

To define lists in the Nix Programming Language, you simply have brackets with elements having spaces in between.

`with` allows you to use the elements in an attribute set without having to constantly type out the entire attribute set's name. But its scope is only limited to the expression following the semi-colon.

`inherit` allows you to use to assign the value of a name to the same name inside another scope. 
# Functions in NixOS
A function is another way to assign names to values.
1. Always takes one argument
2. The argument and function body are separated by a `:`

[[Nix Derivations]]
