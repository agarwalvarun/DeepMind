#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t,n;
    long long int m;
    cin>>t;
    for (int i=0;i<t;i++)
    {
        cin>>n;
        long long int arr[n];
        for (int i=0;i<n;i++)
        {
            cin>>arr[i];
            if (!i)
            {
                m=arr[0];
            }
            else
            {
                if (arr[i]<m)
                {
                    m=arr[i];
                }
            }
        }
        cout<<m*(n-1)<<endl;
    }
    return 0;
}
