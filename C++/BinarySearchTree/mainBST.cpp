#include <iostream>
#include "BST.cpp"
#include "BSTNode.cpp"

int main()
{
    BST<int> tree;
    tree.insert(tree.getRoot(), 38);
    tree.insert(tree.getRoot(), 5);
    tree.insert(tree.getRoot(), 45);
    tree.insert(tree.getRoot(), 47);
    tree.insert(tree.getRoot(), 46);
    tree.insert(tree.getRoot(), 1);
    tree.insert(tree.getRoot(), 9);
    tree.insert(tree.getRoot(), 8);
    tree.insert(tree.getRoot(), 15);
    tree.insert(tree.getRoot(), 13);

    std::cout << "inorder: ";
    tree.inorder(tree.getRoot());
    std::cout << std::endl;

    std::cout << "preorder: ";
    tree.preorder(tree.getRoot());
    std::cout << std::endl;

    std::cout << "postorder: ";
    tree.postorder(tree.getRoot());
    std::cout << std::endl;

    return 0;
}