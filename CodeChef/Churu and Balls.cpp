#include<iostream>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while (t--)
    {
        cin>>n;
        int arr[n],ans=0;
        for (int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for (int i=1;i<n;i++)
        {
            if (arr[i-1]>arr[i])
            {
                ans+=(arr[i-1]-arr[i]);
                arr[i]=arr[i-1];
            }
        }
        for (int i=0;i<n;i++)
        {
            if (arr[i]%2!=0)
            {
                arr[i]++;
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
