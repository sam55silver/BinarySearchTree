/*  Header file for a node of binary tree
    By: Sam Silver
    Date: March 5th 2021
    Class: Advanced Data Structure
*/

#ifndef BTSNODE_H
#define BTSNODE_H

template <class T>
class BTSNode
{
public:
    T key;
    BTSNode<T> *left;
    BTSNode<T> *right;
    BTSNode();
    BTSNode(const T el, BTSNode<T> *l = nullptr, BTSNode<T> *r = nullptr);
};

#endif //BTSNODE_H