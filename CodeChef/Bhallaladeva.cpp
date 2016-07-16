#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n],sum[n],q,k;
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for (int i=0;i<n;i++)
    {
        if (!i)
        {
            sum[i]=arr[i];
        }
        else
        {
            sum[i]=arr[i]+sum[i-1];
        }
    }
    cin>>q;
    while (q--)
    {
        int ans=0;
        cin>>k;
//        if (n%2==0)
//        {
//            for (int i=0;i<=((n/k)-1))
//        }
//        for (int i=0,j=n-1;;i++)
//        {
//            ans+=arr[i];
//            if (j-i>k)
//            {
//                j-=k;
//            }
//            else
//            {
//                break;
//            }
//        }
        int i;
        if (n%(k+1)==0)
        {
            i=n/(k+1);
        }
        else
        {
            i=1+(n/(k+1));
        }
        cout<<sum[i-1]<<endl;
    }
}





