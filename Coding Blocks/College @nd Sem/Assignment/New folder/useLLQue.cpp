#include<iostream>
#include"LLQue.h"
using namespace std;
int main()
{
    MyQueLL <int> Q1,Q2;
    int data;
    cin>> data;
 //   Q1.push(data);
 //   cout<< Q1.Front();
    while (data!=-1)
    {
        Q1.push(data);
        cin>> data;
    }
    Q2=Q1;
//    while (!Q2.isEmpty())
//    {
//        cout<< Q2.Front()<<endl;
//        Q2.pop();
//    }
    MyQueLL <int> Q3=Q2;
    while (!Q3.isEmpty())
    {
        cout<< Q3.Front()<<endl;
        Q3.pop();
    }
    cout<<endl<< Q1.lengthQue();
    return 0;
}
