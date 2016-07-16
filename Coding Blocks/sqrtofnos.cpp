#include<iostream>
using namespace std;
int main()
//      newtons ramson function
{
    float n,x0,x1;
    cin>> n;
    x0=n/2;
    x1=x0-(((x0*x0)-n)/(2*x0));
    while (x0-x1>=.0005 || x1-x0>=.0005)
    {

    x0=x1;

        x1=x0-(((x0*x0)-n)/(2*x0));


    }
    cout<< x1;
    return 0;
}

