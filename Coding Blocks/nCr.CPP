#include<iostream>
using namespace std;
int main()
{
    int n,r;
    cin>> n >> r;
    int numerator=1;
    int denominator=1;
    int m;
    m=n;
    while (m>=n-r+1)
    {
        numerator=numerator*m;
        m=m-1;
    }
    while (r>=1)
    {

        denominator=denominator*r;
        r=r-1;

    }
   int ans;
   ans=numerator/denominator;
   cout<< ans;
   return 0;
}
