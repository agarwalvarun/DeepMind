#ifndef MyDynamicStack_H
#define MyDynamicStack_H
#include<iostream>
#define MAX_SIZE 100
using namespace std;
class MyDynamicStack
{
    int *arr;
    int index;
    int capacity;
    void addCpy(int *arr,int *temp, int index)
    {
        for (int i=0;i<index;i++)
        {
            temp[i]=arr[i];
        }
        return;
    }
    void addElement(int el)
    {
        if (index==capacity)
        {
            capacity*=2;
            int *temp=new int [capacity];
            addCpy(arr,temp,index);
            delete arr;
            arr=temp;
        }
        arr[index]=el;
        index++;
    }
    void reducer (const int &index, int &capacity)
    {
        if (index<=capacity/4)
        {
            capacity=capacity/2 ;
        }
        return;
    }
public:
    //CONSTRUCTOR
    MyDynamicStack():index(0), capacity(MAX_SIZE)
    {
        arr=new int [MAX_SIZE];
    }
    MyDynamicStack(int c):index(0), capacity(c)
    {
        arr=new int [MAX_SIZE];
    }
    //COPY CONSTRUCTOR
    MyDynamicStack(const MyDynamicStack &A)
    {
        capacity=A.capacity;
        index=A.index;
        arr=new int[capacity];
        addCpy(A.arr,arr,A.index);
    }
    //DESTRUCTOR
    ~MyDynamicStack()
    {
        clear();
    }
    // '=' Assignment Operator Overloading
    MyDynamicStack &operator = (const MyDynamicStack &A)
    {
        delete[] arr;
        capacity=A.capacity;
        index=A.index;
        arr=new int [capacity];
        addCpy(A.arr,arr,A.index);
        return *this;
    }
    //'+=' Operator Overloading
    MyDynamicStack &operator += (const MyDynamicStack &A)
    {
        for (int i=0;i<A.index;i++)
        {
            addElement(A.arr[i]);
        }
        return *this;
    }
    // '+' Operator Overloading
    MyDynamicStack operator + (const MyDynamicStack &A)
    {
        MyDynamicStack temp=*this;
        temp+=A;
        return temp;
    }
    bool isEmpty()
    {
        return index==0;
    }
    void push(const int &el)
    {
        addElement(el);
        return;
    }
    bool pop()
    {
        if (isEmpty())
        {
            return false;
        }
        index--;
        reducer(index,capacity);
        return true;
    }
    int &top()
    {
        if (isEmpty())
        {
            throw "Stack is Empty";
        }
        return arr[index-1];
    }
    void clear()
    {
        delete [] arr;
        index=0;
        capacity=MAX_SIZE;
    }
};
#endif // MyDynamicStack_H
