#ifndef BSTNODE_H
#define BSTNODE_H

template <class T>
class BSTNode
{
public:
    T key;
    BSTNode<T> *right;
    BSTNode<T> *left;
    BSTNode();
    BSTNode(const T el, BSTNode<T> *l = nullptr, BSTNode<T> *r = nullptr);
};

#endif //BSTNODE_H