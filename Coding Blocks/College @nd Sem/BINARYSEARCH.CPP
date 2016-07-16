#include<iostream>
using namespace std;
int main()
{
    int n,arr[100];
    cout<< "enter the number of elements";
    cin>> n;
    for(int i=0;i<n;i++)
    {
        cin>> arr[i];
    }
    int x;
    cout<< "enter the value to be checked";
    cin>> x;
    int start=0, last=n-1;
    int mid=(start+last)/2;
    while (start<=last)
    {
        if (x>arr[mid])
        {
            start=mid+1;
        }
        else if (x<arr[mid])
        {
            last=mid-1;
        }
        else
        {
            cout<< "yes";
            return 0;
        }
        mid=(start+last)/2;
    }
    cout<< "no";
    return 0;
}
