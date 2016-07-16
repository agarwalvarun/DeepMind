#include<iostream>
using namespace std;
int sorted(int arr[], int n,int a)
{
    int z=0;
    if (a==n)
    {
        return 1;
    }
    else if (arr[a]<arr[a+1])
    {
        z=sorted(arr,n-1,a+1);
    }
    else
    {
        z=0;
    }
    return z;
}
int main()
{
    int arr[100],n;
    int a=0;
    cout<< "enter the number of elements";
    cin>> n;
    cout<< "enter the elements";
    for (int i=0;i<n;i++)
    {
        cin>> arr[i];
    }
    int z=sorted(arr,n-1,a);
    if(z==1)
    {
        cout<< "yes";
    }
    else
    {
        cout<< "no";
    }
    return 0;
}
