/*  Header file for the complete binary tree
    By: Sam Silver
    Date: March 5th 2021
    Class: Advanced Data Structure
*/

#ifndef BTS_H
#define BTS_H

template <class T>
class BTS
{
private:
    BTSNode<T> *root;

public:
    BTS();
    ~BTS();
    bool isEmpty();
    void insert(const T el);
    void deleteNode(const T el);
    BSTNode<T> *getRoot() const;                    // we don't want the root to change as it will mess up the tree
    T *search(BTSNode<T> *node, const T &el) const; // when searching for Node we aren't trying to change it
};

#endif //BTS_H