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
        BTSNode<T> *node = root;
        while (node != nullptr)
        {
            // TODO: Add if statement that checks if left el is < then el of current node
        }
    }
}