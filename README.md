# Binary Search Tree assignment

This is an implementation of a binary search tree using C++.
This was an old assignment that I have fixed with comments to make it more accessible.

## Compiling

To run, clone this repo, compile mainBST.cpp and then run the executable created:

```
git clone https://github.com/sam55silver/BinarySearchTree.git
cd BinarySearchTree
g++ mainBST.cpp
./a.out
```

## Description of Code

I Implemented Nodes of the tree through BSTNode.cpp. Here I created a node instance that has a key and pointers to the left and right of the node.

I implemented the tree functions through BST.cpp. Here I added basic functions of a binary tree such as inserting, searching and getRoot. Here I also added functions to view the tree, inorder, preorder, and postorder.

- inorder: Shows the tree from the smallest to largest keys - From left of tree to the right.
- preorder: Shows the tree going down the left side of the tree, then right.
- postorder: Shows the tree from the left side of the tree on the right branch.
- breadthFirst: Runs through each tree level starting with the root. Each level is read left to right, and print out each node.
