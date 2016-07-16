#include<iostream>
using namespace std;
void max_sum(int arr[],int n)
{
    int sum_1=0,sum_2=0,total=0,diff=0,index,temp=0;
    for (int j=0;j<n;j++)
    {
        total+=arr[j];
    }
    for (int i=0;i<n;i++)
    {
        sum_1=0;
        for (int j=0;j<=i;j++)
        {
            sum_1+=arr[j];
        }
        sum_2=total-sum_1;
        if (sum_1>sum_2)
        {
            diff=sum_1-sum_2;
        }
        else
        {
            diff=sum_2-sum_1;
        }
        if (diff>=temp)
        {
            temp=diff;
            index=i;
        }
    }
    cout<< index<<endl;
}
    int main()
{
    int arr[100],n;
    cout<<"enter the number of elemetns";
    cin>>n;
    cout<< "enter the elements";
    for(int i=0;i<n;i++)
    {
        cin>> arr[i];
    }
    max_sum(arr,n);
    return 0;
}
