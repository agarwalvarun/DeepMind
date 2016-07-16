#include<iostream>
using namespace std;
void sum(int arr[][100],int output[],int n,int index)
{
    int total=0,j=0;
    for (int i=0;i<n-1;i++)
    {
        if (i==0)
        {
            total=arr[i][j];
        }
        else if (arr[i+1][j]>arr[i+1][j+1])
        {
            total+=arr[i+1][j];
        }
        else
        {
            total+=arr[i+1][j+1];
            j++;
        }
    }
    output[index]=total;
    return;
}
int main()
{
    int t;
    cin>> t;
    int output[t];
    for (int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int arr[100][100];
        for (int row=0;row<n;row++)
        {
            for (int col=0;col<=row;col++)
            {
                cin>> arr[row][col];
            }
        }
        sum(arr,output,n,i);
    }
    for (int i=0;i<t;i++)
    {
        cout<< output[i]<<endl;
    }
    return 0;
}
