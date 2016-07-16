#include<iostream>
using namespace std;
void answer(int n)
{
    int num=n,ans;
    bool flag=0;
    while(num>=0)
    {
        if (num%7==0)
        {
            flag=1;
            ans=num;
            break;
        }
        num-=4;
    }
    if (flag)
    {
        cout<<ans<<endl;
    }
    else
    {
        cout<<"-1"<<endl;
    }
    return;
}
int main()
{
    int t,n;
    cin>>t;
    for (int i=0;i<t;i++)
    {
        cin>>n;
        answer(n);
    }
}
