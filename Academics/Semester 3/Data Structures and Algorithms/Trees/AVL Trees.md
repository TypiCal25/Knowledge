In a binary search tree, it is not necessary that it is going to be a balanced tree. In the worst case of a binary search tree, the Binary Search Tree can have a height of O(n) and behave like a linked list rather than a binary search tree. The more unbalanced a binary search tree gets, the more useless it gets as the searching benefit of the tree gets removed. 

This is where the AVL Trees come in. An AVL Tree is one type of a ***Binary Search Tree***. The main purpose of making use of an AVL Tree is to limit the height of the AVL Tree to a maximum of $\log n$.

$$\text{Balance Factor} = \text{Height of Left-Sub Tree} - \text{Height of Right Sub-Tree}$$

The only permissible values for the balance factor for a balanced node is -1, 0, 1. If any node doesn't have these values, then it is an unbalanced node
# How To Insert Nodes
We start by counting the balance factors from the node being inserted to the root. Once we find a node that is unbalanced, then we need to go backwards, downwards down the tree.

## LL Children
In this case, you rotate the three nodes clockwise
## RR Children
In this case, you rotate the three nodes anti-clockwise
## LR Children
Convert it to LL. Then proceed.
## RL Children
Convert it to RR. Then proceed

The golden rule is that whenever we are considering a rotation in an AVL tree, that time the median element ends up as the root node. The remaining nodes will get rearranged as required. The median is of the three nodes that are being added respectfully.
# Deletion in an AVL Tree
1. Delete the node just as the same in a BST
2. Check the balance factor of each node again
3. Re-balance any nodes that are required.
