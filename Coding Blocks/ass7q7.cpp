#include<iostream>
using namespace std;
int check(int arr[][8], int n)
{
    for(int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            if (arr[i][j]==1)
            {
                for(int j1=0;j1<n;j1++)
                {
                    if (j1!=j && arr[i][j1]==1)
                    {
                        return 0;
                    }
                }
                for (int i1=0;i1<n;i1++)
                {
                    if (i1!=i && arr[i1][j]==1)
                    {
                        return 0;
                    }
                }
                for (int i1=i-1,j1=j+1;i1>=0;i1--,j1++)
                {
                    if (arr[i1][j1]==1)
                    {
                        return 0;
                    }
                }
                for (int i1=i+1,j1=j+1;i1<n;i1++,j1++)
                {
                    if (arr[i1][j1]==1)
                    {
                        return 0;
                    }
                }
            }
        }
    }
    return 1;
}
int main()
{
    int n,arr[8][8];
    bool x=1;
    cout<< "enetr the value of n";
    cin>> n;
    cout<< "enter the matrix"<<endl;
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            cin>> arr[i][j];
        }
    }
    x=check(arr,n);
    if (x==1)
    {
        cout<< "true";
    }
    else
    {
        cout<< "false";
    }
    return 0;
}
