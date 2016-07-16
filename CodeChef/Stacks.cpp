#include<iostream>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while (t--)
    {
        cin>>n;
        int arr[n],ans[n],s=0;
        for (int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for (int i=0;i<n;i++)
        {
            if (i==0)
            {
                ans[s]=arr[i];
                s++;
                continue;
            }
            if (ans[s-1]>arr[i])
            {
                for (int j=s-1;j>=0;j--)
                {
                    if (arr[i]>ans[j] || j==0)
                    {
                        ans[j+1]=arr[i];
                        break;
                    }
                }
            }
            else
            {
                ans[s]=arr[i];
                s++;
            }
        }
        cout<<s;
        for (int i=0;i<s;i++)
        {
            cout<< " "<<ans[i];
        }
        cout<<endl;
    }
    return 0;
}
