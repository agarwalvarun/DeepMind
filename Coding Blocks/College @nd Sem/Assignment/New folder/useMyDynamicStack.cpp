#include<iostream>
#include"MyDynamicStack.h"
using namespace std;
int main()
{
    MyDynamicStack S1,S2,S3;
    int data;
    cout<< "enter the stack..." << endl;
    cin>> data;
    while (data!=-1)
    {
        S1.push(data);
        cin>> data;
    }
    S2=S1;
    S3=S1+S2;
    MyDynamicStack S4=S1+S2;
    cout<< "your stack is ..." << endl;
    while (!S3.isEmpty())
    {
        cout<< S3.top()<<endl;
        S3.pop();
    }
    cout << "Enjoy!!!!!!!";
    return 0;
}
