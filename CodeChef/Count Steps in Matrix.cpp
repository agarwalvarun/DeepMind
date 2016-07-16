#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int t,n,m,sum=0;
    std::ios::sync_with_stdio(false);
    cin>>t;
    while (t--)
    {
        cin>>n;
        int arr_x[n*n],arr_y[n*n];
        sum=0;
        for (int i=1,j=1;i<=n;j++)
        {
            cin>>m;
            arr_x[m]=i;
            arr_y[m]=j;
            if (j==n)
            {
                j=0;
                i++;
            }
        }
        for (int i=2,prev=1;i<=n*n;i++,prev++)
        {
            sum=sum+abs(arr_x[i]-arr_x[prev])+abs(arr_y[i]-arr_y[prev]);
        }
        cout<<sum<<endl;
    }
}
