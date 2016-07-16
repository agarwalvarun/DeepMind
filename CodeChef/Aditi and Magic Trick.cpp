#include<iostream>
using namespace std;
int main()
{
    int t;
    long long int n,ans=0;
    cin>> t;
    for (int i=0;i<t;i++)
    {
        ans=0;
        long long int a=0,b=1,c;
        cin>>n;
        c=a+b;
        while (c<=n)
        {
            ans++;
            a=b;
            b=c;
            c=a+b;
        }
        cout<<ans<<endl;
    }
    return 0;
}
