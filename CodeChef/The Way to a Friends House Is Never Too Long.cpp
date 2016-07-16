#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        pair<float,float> arr[n];
        for (int i=0;i<n;i++)
        {
            cin>>arr[i].first>>arr[i].second;
            arr[i].second*=-1;
        }
        sort(arr,arr+n);
        float ans=0;
        for (int i=0;i<n-1;i++)
        {
            ans+=sqrt((arr[i+1].first-arr[i].first)*(arr[i+1].first-arr[i].first)+(arr[i].second-arr[i+1].second)*(arr[i].second-arr[i+1].second));
        }
        cout<< std::fixed<< std::setprecision(2)<<ans<<endl;
    }
    return 0;
}
