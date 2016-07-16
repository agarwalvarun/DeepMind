#include<iostream>
using namespace std;
int binarysearch(int arr[],int x,int start,int last)
{
    int mid=(start+last)/2,z=0;
    if (start>last)
    {
        z=0;
    }
    else if (start<=last)
    {
        if (x>arr[mid])
        {
            start=mid+1;
            z=binarysearch(arr, x,start,last);
        }
        else if (x<arr[mid])
        {
            last=mid-1;
            z=binarysearch(arr,x,start,last);
        }
        else
        {
            z=1;
            return z;
        }
    }
     return z;
}
int main()
{
    int arr[100],n,x;

    cout<< "enter the number of elements in array";
    cin>> n;
    int last=n-1, start=0;
    cout<< "enter the elements";
    for (int i=0;i<n;i++)
    {
        cin>> arr[i];
    }
    cout<< "enter the number to be checked";
    cin>> x;
    int z=binarysearch(arr,x,start,last);
    if (z==1)
    {
        cout<< "found";
    }
    else
    {
        cout<< "not found";
    }
    return 0;
}
