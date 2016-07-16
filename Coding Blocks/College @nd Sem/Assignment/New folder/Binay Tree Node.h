#ifndef BinaryTreeNode_H
#define BinaryTreeNode_H
template<typename T>
class BinaryTreeNode
{
public:
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;
    BinaryTreeNode<T> *parent;
    //Constructor
    BinaryTreeNode(); left(0), right(0),parent(0){}
    BinaryTreeNode(const T &el): left(0),right(0)
    {
        data=el;
    }
};
#endif // BinaryTreeNode_H
