#include<iostream>
using namespace std;
void duplicate(int arr[], int n)
{
    int a=n;
    for (int i=0;i<a;i++)
    {
        for (int j=0;j<a;j++)
        {
            if (j!=i && arr[j]==arr[i])
            {
                a--;
                for (int k=j;k<a;k++)
                {
                    arr[k]=arr[k+1];
                }
                continue;
            }
        }
    }
    for (int i=0;i<a;i++)
    {
        cout<< arr[i];
    }
}
int main()
{
    int arr[100],n;
    cout<< "enter the number of elements";
    cin>> n;
    cout<< "enter the numbers";
    for (int i=0;i<n;i++)
    {
        cin>> arr[i];
    }
    duplicate(arr,n);
    return 0;
}
