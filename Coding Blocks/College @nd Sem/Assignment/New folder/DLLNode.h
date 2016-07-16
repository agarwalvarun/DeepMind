#ifndef DLLNode_H
#define DLLNode_H
template<typename T>
class DLLNode
{
public:
    T data;
    DLLNode<T> *next;
    DLLNode<T> *previous;
    //Constructor
    DLLNode (): next(0),previous(0){}
    DLLNode (const T & el): data(el), next(0),previous(0){}
    // Copy Constructor
    DLLNode (const DLLNode <T> & N)
    {
        data=N.data;
        next=NULL;
        previous=NULL;
    }
};
#endif // DLLNode_H
