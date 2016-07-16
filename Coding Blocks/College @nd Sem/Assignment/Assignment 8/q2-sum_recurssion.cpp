#include<iostream>
using namespace std;
int sum(int arr[],int n)
{
    if (n==0)
    {
        return 0;
    }
    int total=arr[n]+sum(arr,n-1);
    return total;
}
int main()
{
    int arr[100],n;
    cout<< "enter number of elements";
    cin>> n;
    cout<< "enter the elements";
    for (int i=1;i<=n;i++)
    {
        cin>> arr[i];
    }
    int total=sum(arr,n);
    cout<< total;
    return 0;
}
