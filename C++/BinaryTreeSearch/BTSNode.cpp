/*  implementation of BTSNode
    By: Sam Silver
    Date: March 5th 2021
    Class: Advanced Data Structure
*/
#include "BTSNode.h"
#include <iostream>

template <class T>
BTSNode<T>::BTSNode()
{
    left = nullptr;
    right = nullptr;
}

template <class T>
BTSNode<T>::BTSNode(const T el, BTSNode<T> *l, BTSNode<T> *r)
{
    key = el;
    left = l;
    right = r;
}