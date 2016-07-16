#include<iostream>
using namespace std;
int main()
{
    //FIBONACCI SERIES, NOT TRUE FOR 1,0
    int n,c;
    int a=0, b=1;
    cin>> n;
    c=a+b;
    while (c<=n)
    {
        cout << c;
        a=b;
        b=c;
        c=a+b;

    }
    return 0;
}

