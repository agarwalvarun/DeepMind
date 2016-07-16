#include<iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    int t,n;
    cin>>t;
    while (t--)
    {
        long long int x,ans=0;
        cin>>n;
        long long int arr[n];
        for (int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for (int i=0,j=0;j<n;)
        {
            while (arr[j]<arr[j+1] && j<n-1)
            {
                j++;
            }
            x=j-i+1;
            ans+=(x*(x+1)/2);
            j++;
            i=j;
        }
        //ans+=n;
        cout<<ans<<endl;
    }
    return 0;
}
