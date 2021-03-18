#include <iostream>
#include "BST.cpp"
#include "BSTNode.cpp"

int main()
{
    BST<int> tree;
    tree.insert(tree.getRoot(), 10);
    tree.insert(tree.getRoot(), 5);
    tree.insert(tree.getRoot(), 12);
    std::cout << "Searched for " << *tree.search(tree.getRoot(), 12) << std::endl;
    return 0;
}