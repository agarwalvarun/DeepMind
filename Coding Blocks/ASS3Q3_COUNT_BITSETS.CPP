#include<iostream>
using namespace std;
int main()
{
    int n,b=0,e=0,count_bitset=0;
    cin>> n;
    for (int a=0; n>0; n=n/2)
    {
        a=n%2;
        b=b*10+a;
    }
    for (int c=b; c>0; c=c/10)
    {
        int d=c%10;
        e=e*10+d;
    }
    cout << e;
    while (e>0)
    {
        int f=e%10;
        if (f==1)
        {
            count_bitset=count_bitset+1;
        }
        e=e/10;
    }
    cout<< '\n'<< "count bitset ="<<count_bitset;
    return 0;
}
