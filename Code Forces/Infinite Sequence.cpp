#include<iostream>
#include<math.h>
#define ll long long
using namespace std;
int main()
{
    ll int x,sum,ans;
    float n;
    cin>>x;
    n=(sqrt(1+8*x))-1;
    n=n/2;
    n=int(n);
    sum=(n*(n+1))/2;
    ans=x-sum;
    if (ans)
    {
        cout<<x-sum;
    }
    else
    {
        cout<< n;
    }
    return 0;
}
