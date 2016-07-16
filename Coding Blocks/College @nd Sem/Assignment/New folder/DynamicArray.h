#ifndef DynamicArray_H
#define DynamicArray_H
#include<iostream>
using namespace std;
class MyDynamicArray
{
    int *arr;
    int index;
    unsigned int capacity;
public:
    MyDynamicArray() : capacity(0),index(-1){}

};
#endif // DynamicArray_H
