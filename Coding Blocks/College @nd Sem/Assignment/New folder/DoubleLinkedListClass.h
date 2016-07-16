#ifndef DoubleLinkedListClass_H
#define DoubleLinkedListClass_H
#include <iostream>
#include "DLLNode.h"
using namespace std;
template <typename T>
class DLLClass
{
    DLLNode <T> *head;
    void clearDLL()
    {
        while (head)
        {
            DLLNode <T> * currentnode=head;
            head=head->next;
            delete currentnode;
        }
        return;
    }
    void duplicator(const DLLClass &A)
    {
       // if condition works only when the duplicator is called from the ASSIGNMENT operator
        if (head)
        {
            clearDLL();
        }
        DLLNode<T> *currentnode=A.head;
        DLLNode<T> *previousnode=NULL;
        while (currentnode)
        {
            DLLNode<T> *copynode=new DLLNode <T> (*currentnode);
            if (!head)
            {
                head=currentnode;
            }
            else
            {
                previousnode->next=copynode;
                copynode->previous=previousnode;
            }
            previousnode=copynode;
            currentnode=currentnode->next;
        }
        return;
    }
public:
    //Constructor
    DLLClass (): head(0){}
    //Copy Constructor
    DLLClass (const DLLClass <T> & A): head (NULL)
    {
        duplicator(A);
    }
    // '=' Assignment Operator
    DLLClass & operator = (const DLLClass <T> & A)
    {
        duplicator(A);
        return *this;
    }
    //Destructor
    ~DLLClass ()
    {
        clearDLL();
    }
    DLLNode <T> * Begin() const
    {
        if(isEmpty())
        {
            throw "Empty";
        }
        return head;
    }
    DLLNode <T> * End()
    {
        if(isEmpty())
        {
            throw "Empty";
        }
        DLLNode <T> *temp=head;
        while (temp)
        {
            temp=temp->next;
        }
        return temp;
    }
    bool isEmpty() const
    {
        return !head;
    }
    unsigned int Size()
    {
        int length=0;
        DLLNode <T> *temp=head;
        while (temp)
        {
            length++;
            temp=temp->next;
        }
        return length;
    }
    T & Front() const
    {
        if(isEmpty())
        {
            throw "Empty";
        }
        return head->data;
    }
    T Back()
    {
        if(isEmpty())
        {
            throw "Empty";
        }
        DLLNode <T> *temp=head;
        while (temp->next)
        {
            temp=temp->next;
        }
        return temp->data;
    }
    void PushFront(const T &el)
    {
        DLLNode<T> * newnode= new DLLNode<T>(el);
        if (isEmpty())
        {
            head=newnode;
            return;
        }
        newnode->next=head;
        head->previous=newnode;
        head=newnode;
        return;
    }
    void PushBack(const T & el)
    {
        if (isEmpty())
        {
            PushFront(el);
            return;
        }
        DLLNode <T> *last= head;
        while (last->next)
        {
            last=last->next;
        }
        DLLNode <T> *newnode= new DLLNode<T> (el);
        last->next=newnode;
        newnode->previous=last;
        return;
    }
    void PopFront()
    {
        if (isEmpty())
        {
            throw "Empty";
        }
        DLLNode<T> *temp=head;
        if (Size()==1)
        {
            delete head;
            head=0;
            return;
        }
        head=head->next;
        head->previous=0;
        delete temp;
        return;
    }
    void PopBack()
    {
        if (isEmpty())
        {
            throw "Empty";
        }
        DLLNode<T> *last=head;
        while (last->next)
        {
            last=last->next;
        }
        if (last==head)
        {
            delete head;
            head=0;
        }
        else
        {
            last->previous->next=0;
            delete last;
            last=0;
        }
        return;
    }
    void Insert(DLLNode<T> *prev, const T & el)
    {
        DLLNode<T> *temp=new DLLNode <T> (el);
        if (head==prev)
        {
            head=temp;
        }
        else
        {
            prev->previous->next=temp;
            temp->previous=prev->previous;
        }
        temp->next=prev;
        prev->previous=temp;
    }
    DLLNode<T> * Erase(DLLNode <T> *e)
    {
        if (isEmpty())
        {
            throw "Empty";
        }
        if (Size()==1)
        {
            head=0;
            delete e;
            return head;
        }
        else if (e==head)
        {
            e->next->previous=0;
            head=e->next;
            delete e;
            return head;
        }
        else if (e->next==0)
        {
            e->previous->next=0;
            delete e;
            return 0;
        }
        e->previous->next=e->next;
        e->next->previous=e->previous;
        DLLNode<T> * temp=e->next;
        delete e;
        return temp;
    }
    DLLNode<T> * Erase(const T & el)
    {
        DLLNode<T> * temp =head;
        while (temp->data!=el)
        {
            temp=temp->next;
        }
        if (temp==0)
        {
            throw "not found";
        }
        temp=Erase(temp);
        return temp;
    }
    void Reverse()
    {
        DLLNode<T> *tail=head;
        while (tail->next)
        {
            tail=tail->next;
        }
        DLLNode<T> *currentnode=tail;
        while (currentnode)
        {
            DLLNode <T> *temp=currentnode->next;
            currentnode->next=currentnode->previous;
            currentnode->previous=temp;
            currentnode=currentnode->next;
        }
        head=tail;
        return;
    }
};
#endif // DoubleLinkedListClass_H
