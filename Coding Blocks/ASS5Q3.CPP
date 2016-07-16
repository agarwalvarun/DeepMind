#include<iostream>
using namespace std;
int main()
{
    int n,total=0,temp;
    cout<< "enter the number of elements  ";
    cin>>n;
    int arr[100];
    cout<< "enter the elements";
    for (int i=0;i<n;i++)
    {
        cin>> arr[i];
    }
    for (int i=0; i<n;i++)
    {
        if (arr[i]==0)
        {
            total++;
        }
    }
    for (;total>0;total--)
    {
        for (int i=0; i<n-1; i++)
        {
            if (arr[i]==0)
            {
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
            }
        }
    }
    for (int i=0; i<n;i++)
    {
        cout <<'\n'<< arr[i]<<'\t';
    }
    return 0;
}
