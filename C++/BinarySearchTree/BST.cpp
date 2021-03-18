#include "BST.h"
#include <queue>
#include <iostream>

template <class T>
BST<T>::BST()
{
    root = nullptr;
}

template <class T>
BST<T>::~BST()
{
    delete root;
}

template <class T>
bool BST<T>::isEmpty() const
{
    return root != nullptr;
}

template <class T>
void BST<T>::insert(BSTNode<T> *node, const T &el)
{
    if (node == nullptr)
    {
        root = new BSTNode<T>(el);
    }
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

template <class T>
void BST<T>::breadthFirst()
{
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