A B-Tree is a generalization of a Binary Search Tree wherein each node can have more than one key and can have more than two children.
# Description
1. A B-Tree node can have more than two children nodes
2. A B-Tree node can have more than one keys
3. In a B-Tree, each leaf node must be on the same level.
4. Insertion is always in the leaf nodes
5. All the keys in a node have to be inserted in a sorted order
# Properties of a B-Tree of Order m
1. Every node can have at most m children nodes.
2. The minimum number of children for each node is:
	1. Root node have a minimum of 2 children
	2. Leaf node have a minimum of 0 children
	3. Internal nodes have a minimum of $\lceil \dfrac{m}{2} \rceil$ children
3. The maximum number of keys for any node is m-1
4. The minimum number of keys are:
	1. Root node can have a minimum of 1 key
	2. Other nodes can have a minimum of $\lceil \dfrac{m}{2} \rceil$ - 1 keys
# Deleting An Element in a B-Tree
## Deleting From A Leaf Node
### The Leaf Node Contains More Than Minimum Number of Keys
Simply just remove the element from the leaf node.
### The Leaf Node Contains The Minimum Number of Keys
There are two main situations that we have to worry about.
#### Immediate Siblings Contain More Than Minimum Number of Keys
We have to borrow a key from an immediate sibling through the parent node.
#### Immediate Siblings Contain Equal to the Minimum Number of Keys
We have to merge the current node with its immediate sibling, including the corresponding parent key as well. 
## Deleting From An Internal Node
We need to find the in-order predecessor or the in-order successor. If either of these two nodes has more than the minimum number of keys, then we can directly move that key in place of the target key that has to be deleted.

If we can't delete the element with its predecessor or successor, we merge the array and then delete it using that. We then perform any other possible procedures.

Basic concept is that you have to check whether you can borrow from the immediate siblings. If you can't borrow through the immediate siblings, then you merge.