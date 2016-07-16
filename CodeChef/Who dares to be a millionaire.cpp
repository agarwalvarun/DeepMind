#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    int t,n,flag=0,ans=-1,x;
    cin>>t;
    while (t--)
    {
        cin>>n;
        ans=-1,x=0;
        char correct[n],chef[n];
        int arr[n+1];
        for (int i=0;i<n;i++)
        {
            cin>> correct[i];
        }
        for (int i=0;i<n;i++)
        {
            cin>> chef[i];
        }
        for (int i=0;i<n+1;i++)
        {
            cin>>arr[i];
        }
        for (int j=0;j<n;j++)
        {
            if (correct[j]==chef[j])
            {
                x++;
            }
        }
        if (x==n)
        {
            ans=arr[n];
        }
        else
        {
            for (int i=0;i<=x;i++)
            {
                if (arr[i]>ans)
                {
                    ans=arr[i];
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
