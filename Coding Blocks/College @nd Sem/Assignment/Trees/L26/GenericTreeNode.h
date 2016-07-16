#ifndef GENERIC_TREE_NODE_H
#define GENERIC_TREE_NODE_H
template <typename T>
class GenericTreeNode {
    public:
        T data;
        GenericTreeNode ** children;
        unsigned int child_count;
        GenericTreeNode * parent;
        GenericTreeNode() : children(0), child_count(0), parent(0) {}
        GenericTreeNode(const T & ele) : children(0), child_count(0), parent(0), data(ele) {}
};
#endif
