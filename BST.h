#ifndef BST_H
#define BST_H

#include "BSTNode.h"
template <class T>
class BST
{
private:
    BSTNode<T> *root;

public:
    BST();
    ~BST();
    bool isEmpty() const;
    void insert(BSTNode<T> *node, const T &el);
    BSTNode<T> *getRoot();
    T *search(BSTNode<T> *node, const T &el) const;
    void breadthFirst();
    void inorder(BSTNode<T> *node);
    void preorder(BSTNode<T> *node);
    void postorder(BSTNode<T> *node);
};

#endif //BST_H