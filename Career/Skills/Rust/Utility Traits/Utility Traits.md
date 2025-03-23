# Drop Trait

![[Drop.png]]

A `Box <Dyn Write>` would be implemented as a fat pointer. This can be moved, since it is of a fixed size. While objects of type `dyn Write` aren't known to be of the same size. For that reason, we can't put it in a variable or even just a return type.

![[Clone.png]]![[Deref and Deref Mut.png]]