#ifndef LLQue_H
#define LLQue_H
#include "LLNode.h"
// address kaise denge agar header file is not in same folder
template<typename T>
class MyQueLL
{
    LLNode<T> *head,*tail;
    void clearQue()
    {
        while (head)
        {
            LLNode<T> * currentNode=head;
            head=head->next;
            tail=head;
            delete currentNode;
        }
    }
    void duplicator(const MyQueLL <T> & A)
    {
        // if condition works only when the duplicator is called from the ASSIGNMENT operator
        if (head)
        {
            clearQue();
        }
        LLNode<T> *currentNode=A.head;
        LLNode<T> *tail=NULL;
        while (currentNode)
        {
            LLNode<T> *copyNode=new LLNode<T>(*currentNode);
            if (!head)
            {
                head=copyNode;
            }
            else
            {
                tail->next=copyNode;
            }
            tail=copyNode;
            currentNode=currentNode->next;
        }
    }
public:
    //Constructor
    MyQueLL():head(0), tail(0){}

    //Copy Constructor
    MyQueLL(const MyQueLL<T> & A) : head(NULL)
    {
        duplicator(A);
    }

    //'=' Assignment Operator Overloading
    MyQueLL & operator = (const MyQueLL<T> & A)
    {
        duplicator(A);
        return *this;
    }

    //Destructor
    ~MyQueLL()
    {
        clearQue();
    }

    bool isEmpty() const
    {
        return head == NULL;
    }
    void push (const T & el)
    {
        LLNode<T> *temp=new LLNode <T> (el);
        if (isEmpty())
        {
            head=temp;
        }
        else
        {
            tail->next=temp;
        }
        tail=temp;
    }
    void pop()
    {
        if (isEmpty())
        {
            throw "Queue is Empty";
        }
        LLNode<T> *temp=head;
        head=head->next;
        delete temp;
    }
    T & Front() const
    {
        if (isEmpty())
        {
            throw "Queue is Empty";
        }
        return head->data;
    }
    unsigned int lengthQue()
    {
        LLNode<T> *temp=head;
        int length=0;
        while (temp)
        {
            length++;
            temp=temp->next;
        }
        return length;
    }
};

#endif // LLQue_H
