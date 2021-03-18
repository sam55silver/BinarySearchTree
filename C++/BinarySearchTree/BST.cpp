#include "BST.h"

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