#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n],dp[n],maximum=1;
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for (int i=0;i<n;i++)
    {
        dp[i]=1;
    }
    for (int j=1;j<n;j++)
    {
        for (int i=0;i<=j-1;i++)
        {
            if (arr[i]<arr[j])
            {
                dp[j]=max(dp[i]+1,dp[j]);
                if (dp[j]>maximum)
                {
                    maximum=dp[j];
                }
            }
        }
    }
//    for (int i=0;i<n;i++)
//    {
//        cout<<dp[i]<<endl;
//    }
    cout<<maximum<<endl;
    return 0;
}
