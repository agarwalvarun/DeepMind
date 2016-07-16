#include<iostream>
#include<stdio.h>
using namespace std;
int arr[1000000]={0};
void wayout(int *arr,long long int n,long long int h)
{
    //bool flag=0;
    long long int free=0,ans,final_ans=0;
    {
        for (int i=0;i+h<=n;i++)
        {
            free=0;
            for (int k=i,j=0;j<h;k++,j++)
            {
                free+=arr[k];
            }
        //    cout<<free<<endl;
            ans=n*h-free;
            if (!final_ans)
            {
                final_ans=ans;
            }
            else if (final_ans>ans)
            {
                final_ans=ans;
            }
        }
        cout<< final_ans<<endl;
    }
}
int main()
{
    int t,n,h;
    cin >> t;
    for (int i=0;i<t;i++)
    {
        cin>> n>> h;
        int j=0,first[n],last[n];
        for (int x=0;x<n;x++)
        {
            cin>> first[x]>> last[x];
//            cin>> first1>> last1;
//            for (int k=first;k<=last;k++)
//            {
//                arr[k]++;
//            }
        }
        for (int k=first[j];j<n;k++)
        {
            arr[k]++;
            if(k==last[j])
            {
                j++;
                k=first[j];
                k--;
            }
        }
        wayout(arr,n,h);
        for (int i=0;i<n;i++)
        {
            arr[i]=0;
        }
    }
    return 0;
}
