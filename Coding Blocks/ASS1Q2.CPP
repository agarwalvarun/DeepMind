#include<iostream>
using namespace std;
int main()
{
    int a,b,n,m;
    cin>> n;
    cin>> m;
a=n;
    while (n<m)
    {

    if (n%a==0 && m%a==0)
    {
        cout << a;
     return 0;
    }
    a=a-1;
    }
    b=m;
while (m<n)
{
    if (m%b==0 && n%b==0)
    {
        cout<< b;
        return 0;
    }
        b=b-1;
}
return 0;
}

