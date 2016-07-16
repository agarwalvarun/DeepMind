#ifndef DynamicArrayQue_H
#define DynamicArrayQue_H
#define SIZE 5
#include<iostream>
using namespace std;
template <typename T>
class MyDynamicArrayQue
{
    T *arr;
    int capacity;
    int head,tail;
    void copyQue(T *arr,T *temp, int len)
    {
        for (int i=0;i<len;i++)
        {
            temp[i]=arr[i];
        }
        return;
    }
    void extender()
    {
        int currentSize=SizeOf();
        capacity*=2;
        T *temp=new T[capacity];
        if (head>tail)
        {
            int j;
            for (int i=head,j=0;i<currentSize;i++,j++)
            {
                temp[j]=arr[i];
            }
            for (int i=0;i<=tail;i++,j++)
            {
                temp[j]=arr[i];
            }
        }
        else
        {
            for (int i=0;i<=tail;i++)
            {
                temp[i]=arr[i];
            }
        }
        delete [] arr;
        arr=temp;
        head=0;
        tail=currentSize-1;
        return;
    }
    void reducer()
    {
        int currentSize=SizeOf();
        int old_capacity=capacity;
        capacity=capacity/2;
        T *temp=new T[capacity];
        if (head>tail)
        {
            int j;
            for (int i=head,j=0;i<old_capacity;i++,j++)
            {
                temp[j]=arr[i];
            }
            for (int i=0;i<=tail;i++,j++)
            {
                temp[j]=arr[i];
            }
        }
        else
        {
            if (head!=-1 && tail!=-1)
            {
                for(int i=head,j=0;i<=tail;i++,j++)
                {
                    temp[j]=arr[i];
                }
            }
        }
        delete [] arr;
        arr=temp;
        if (head==-1&& tail==-1){}
        else
        {
            head=0;
            tail=currentSize-1;
        }
        return;
    }
    void addElement(const T & el)
    {
        int currentSize=SizeOf();
        if (!currentSize)
        {
            head=0;
            tail=0;
            arr[tail]=el;
            return;
        }
        if (currentSize==capacity)
        {
            extender();
        }
        tail=(tail+1)%capacity;
        arr[tail]=el;
        return;
    }
public:
    //Constructor
    MyDynamicArrayQue():head(-1), tail(-1),capacity(SIZE)
    {
        arr=new T[capacity];
    }
    MyDynamicArrayQue(const int &capacity): head(-1), tail(-1)
    {
        arr=new T[capacity];
    }
    //Copy Constructor
    MyDynamicArrayQue(const MyDynamicArrayQue<T> &A)
    {
        head=A.head;
        tail=A.tail;
        capacity=A.capacity;
        int len=SizeOf();
        arr=new T[capacity];
        copyQue(A.arr,arr,len);
    }
    // '=' Assignment Operator
    MyDynamicArrayQue & operator = (const MyDynamicArrayQue<T> &A)
    {
        delete [] arr;
        head=A.head;
        tail=A.tail;
        capacity=A.capacity;
        int len=SizeOf();
        arr=new T[capacity];
        copyQue(A.arr,arr,len);
        return *this;
    }
    void push(const T & el)
    {
        addElement(el);
        return;
    }
    void pop()
    {
        int currentSize=SizeOf();
        if (currentSize==0)
        {
            throw "Stack is Empty";
        }
        else if (currentSize==1)
        {
            head=-1;
            tail=-1;
        }
        else
        {
            head=(head+1)%capacity;
        }
        currentSize=SizeOf();
        if(currentSize<=capacity/4)
        {
            reducer();
        }
        return;
    }
    T & Front()
    {
        if(!SizeOf())
        {
            throw "Stack is Empty";
        }
        return arr[head];
    }
    unsigned int SizeOf () const
    {
        if (head==-1 && tail==-1)
        {
            return 0;
        }
        else if (head==tail)
        {
            return 1;
        }
        else if (tail<head)
        {
            return capacity-(head-tail-1);
        }
        else
        {
            return tail-head+1;
        }
    }

};
#endif // DynamicArrayQue_H
