#include "BSTNode.h"

template <class T>
BSTNode<T>::BSTNode()
{
    right = nullptr;
    left = nullptr;
}

template <class T>
BSTNode<T>::BSTNode(const T el, BSTNode<T> *l, BSTNode<T> *r)
{
    key = el;
    right = r;
    left = l;
}

template class BSTNode<int>;