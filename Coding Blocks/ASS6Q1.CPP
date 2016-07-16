#include<iostream>
using namespace std;
int main()
{
    int n,row,col;
    cout<< "enter the value of N for the square matrix";
    cin>> n;
    char arr[200][200];


    for (int diag=0;diag<=n/2;diag++)
    {
        row=diag;
        col=diag;
        for (;col<n-diag;col++)
        {
            if (diag%2==0)
            {
                arr[row][col]='O';
            }
            else
            {
                arr[row][col]='X';
            }
        }
        row=diag;
        col=diag;
        for (;row<n-diag;row++)
        {
            if (diag%2==0)
            {
                arr[row][col]='O';
            }
            else
            {
                arr[row][col]='X';
            }
        }
    }
    for (int diag=n-1;diag>=n/2;diag--)
    {
        row=diag;
        col=diag;
        for (;col>=n-diag;col--)
        {
            if(n%2!=0)
            {
            if (diag%2==0)
            {
                arr[row][col]='O';
            }
            else
            {
                arr[row][col]='X';
            }
            }
            else
            {
               if (diag%2==0)
            {
                arr[row][col]='X';
            }
            else
            {
                arr[row][col]='O';
            }
            }
        }
        row=diag;
        col=diag;
        for(;row>=n-diag;row--)
        {
            if(n%2!=0)
            {
            if (diag%2==0)
            {
                arr[row][col]='O';
            }
            else
            {
                arr[row][col]='X';
            }
            }
            else
            {
               if (diag%2==0)
            {
                arr[row][col]='X';
            }
            else
            {
                arr[row][col]='O';
            }
            }
        }
    }
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            cout<< arr[i][j];
        }
        cout<<'\n';
    }
    return 0;
}
