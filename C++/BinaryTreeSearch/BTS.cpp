/*  implementation of BTS.h
    By: Sam Silver
    Date: March 5th 2021
    Class: Advanced Data Structure
*/

#include "BTS.h"
#include <iostream>

template <class T>
BTS<T>::BTS()
{
    root = nullptr
}

template <class T>
BTS<T>::~BTS()
{
    delete root; // Make sure to delete whole tree before root
}

template <class T>
bool BTS<T>::isEmpty()
{
    if (root == nullptr)
    {
        return true;
    }
    return false;
}

template <class T>
void BTS<T>::insert(const T el)
{
    if (root == nullptr)
    {
        root = new BTSNode<T>(el, nullptr, nullptr)
    }
    else
    {
        // TODO: Add stuff here
    }
}

template <class T>
T *BST<T>::search(BTSNode<T> *node, const T &el) const
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
BSTNode<T> *BTS<T>::getRoot() const
{
    return root;
}

template <class T>
void BTS<T>::deleteNode(const T el)
{
    // TODO: add delete right here
}