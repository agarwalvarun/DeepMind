#include "DoubleLinkedListClass.h"
#include<iostream>
using namespace std;
int main()
{
    int data;
    DLLClass <int> L1;
    cin>> data;
    while (data!=-1)
    {
        L1.PushFront(data);
//        cout<< L1.Front()<< endl;
        cin>> data;
    }
//    L1.Reverse();
    while (!L1.isEmpty())
    {
        cout<< L1.Back()<< endl;
        L1.PopBack();
    }
    return 0;
}
