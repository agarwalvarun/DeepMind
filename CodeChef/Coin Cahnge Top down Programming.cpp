#include<bits/stdc++.h>
#define MAX 100000
using namespace std;
int coins(int total,int denom[],int arr[],int length)
{
    if (total==0)
    {
        return 0;
    }
    if (arr[total])
    {
        return arr[total];
    }
    int min=INT_MAX,val;
    for (int i=0;i<length;i++)
    {
        if (total-denom[i]>=0)
        {
             val=coins(total-denom[i],denom,arr,length);
        }
        val++;
        if (val<min)
        {
            min=val;
        }
    }
    arr[total]=min;
    return arr[total];
}
int main()
{
    int total,length,arr[MAX+1]={0};
    cout<< "Enter the total"<<endl;
    cin>>total;
    cout<< "Enter the number of denominations"<<endl;
    cin>>length;
    cout<< "Enter the denominations"<<endl;
    int denom[length];
    for (int i=0;i<length;i++)
    {
        cin>> denom[i];
    }
    coins(total,denom,arr,length);
    cout<<arr[total];
}
