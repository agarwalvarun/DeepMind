/* Class: LLNode
 * This is generic class of LL Node with only one pointer next. 
 * I have separated this class from LL/Stacks/Queues to avoid repetition.
 * We would just include this in our DS Codes where we want a node to store a data and one address [generally address of next node]
 */
#ifndef LLNODE_H
#define LLNODE_H
template <typename T>
class LLNode {
    public:
        T data; 
        LLNode * next; 
        // constructor 
        LLNode(): next(0) {}
        LLNode(const T & el) : data(el), next(0) {}
        // copy constructor
        LLNode(const LLNode & N) {
            data = N.data;
            next = N.next;
        }
};
#endif
