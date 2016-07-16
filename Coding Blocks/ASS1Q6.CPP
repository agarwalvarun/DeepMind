#include<iostream>
using namespace std;
int main()
{
    int a,b,c,n;
    cin>> a;
    cin>> b;
    while (a==b)
    {
        if (a%2==0)
        {
            c=2*a;
            cout<< c;
        }
        else
        {
            c=2*a-1;
            cout<< c;
        }
        return 0;
    }
    while (a==b+2)
    {
        if (a%2==0)
        {
            c=2+((a/2)-1)*4;
            cout<< c;
        }
        else{
            n=(a-1)/2;
            c=3+(n-1)*4;
            cout<< c;
        }
        return 0;
    }
    cout<< "invalid";
    return 0;
}
