#include "BST.h"
#include <queue>
#include <iostream>

// Constructor of tree, set root to null
template <class T>
BST<T>::BST()
{
    root = nullptr;
}

// Destructor of tree, delete root, and the whole tree with it
template <class T>
BST<T>::~BST()
{
    delete root;
}

// Check if tree is empty by checking if root is null
template <class T>
bool BST<T>::isEmpty() const
{
    return root != nullptr;
}

// Insert a new node into the tree
// node will run through all branches of tree until it finds a node, either left or right side depending on keys in tree
template <class T>
void BST<T>::insert(BSTNode<T> *node, const T &el)
{
    // If no root, create node as root
    if (node == nullptr)
    {
        root = new BSTNode<T>(el);
    }
    // Go through each node that inserted key is greater then until it finds a node with no right child
    else if (node->key < el)
    {
        if (node->right == nullptr)
        {
            node->right = new BSTNode<T>(el);
        }
        else
        {
            insert(node->right, el);
        }
    }
    // Go through each node that inserted key is less then until it finds a node with no left child
    else
    {
        if (node->left == nullptr)
        {
            node->left = new BSTNode<T>(el);
        }
        else
        {
            insert(node->left, el);
        }
    }
}

template <class T>
BSTNode<T> *BST<T>::getRoot()
{
    return root;
}

// Run through all branches of tree until it finds node with key equal to el
template <class T>
T *BST<T>::search(BSTNode<T> *node, const T &el) const
{
    if (node == nullptr)
    {
        return nullptr;
    }
    else if (el == node->key)
    {
        return &node->key;
    }
    else if (el < node->key)
    {
        return search(node->left, el);
    }
    else
    {
        return search(node->right, el);
    }
}

// Runs through each tree level starting with the root. Each level is read left to right, and print out each node
template <class T>
void BST<T>::breadthFirst()
{
    // Create copy of tree to not change original tree
    std::queue<BSTNode<T> *> myqueue;
    BSTNode<T> *p = root;
    if (p != 0)
    {
        myqueue.push(p);
        while (!myqueue.empty())
        {
            p = myqueue.front();
            myqueue.pop();
            std::cout << "Visited node " << p->key << std::endl;
            if (p->left != 0)
            {
                myqueue.push(p->left);
            }
            if (p->right != 0)
            {
                myqueue.push(p->right);
            }
        }
    }
}

// Shows the tree from the smallest to largest keys - From left of tree to the right.
template <class T>
void BST<T>::inorder(BSTNode<T> *node)
{
    if (node != 0)
    {
        inorder(node->left);
        std::cout << node->key << ", "; // Parent node
        inorder(node->right);
    }
}

// Shows the tree going down the left side of the tree, then right
template <class T>
void BST<T>::preorder(BSTNode<T> *node)
{
    if (node != 0)
    {
        std::cout << node->key << ", "; // Parent node
        preorder(node->left);
        preorder(node->right);
    }
}

// Shows the tree from the left side of the tree on the right branch
template <class T>
void BST<T>::postorder(BSTNode<T> *node)
{
    if (node != 0)
    {
        postorder(node->left);
        postorder(node->right);
        std::cout << node->key << ", "; // Parent node
    }
}