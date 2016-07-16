#include<iostream>
#include "DynamicArrayQue.h"
using namespace std;
int main()
{
    MyDynamicArrayQue<int> Q1;
    int data;
    cout<< "enter the data in Q1"<<endl;
    cin>> data;
    while(data!=-1)
    {
        Q1.push(data);
//        cout<< Q1.Front()<<endl;
//        Q1.pop();
        cin>> data;
    }
    Q1.pop();
    Q1.push(9);
//    int len=Q1.SizeOf();
//    cout<< endl<<len<<endl;

    MyDynamicArrayQue<int> Q2=Q1;
    cout<< "here is the copy in Q2";
    while (Q2.SizeOf())
    {
        cout<<endl<< Q2.Front();
        Q2.pop();
    }
    return 0;
}
