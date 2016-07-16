#include<iostream>
using namespace std;
int main()
{
    int n,a=0,sum=0;
    cin>>n;
    int c=n;
    for (;c>0; c=c/10)
    {
        a=c%10;
        sum=sum+(a*a*a);
    }
    if (sum==n)
    {
        cout<< "YES";

    }
    else
    {
        cout<< "NO";
    }
    return 0;
}
