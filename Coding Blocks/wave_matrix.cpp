#include<iostream>
using namespace std;
void wave(int arr[][100],int n,int m)
{
    int col=-1;
    while (col<m-1)
    {
        col++;
        for (int row=0;row<n;row++)
            {
                cout<< arr[row][col]<<'\n';
            }
        col++;
        for (int row=n-1;row>=0;row--)
            {
                cout<< arr[row][col]<<endl;
            }
    }
}
int main()
{
    int arr[100][100],n,m;
    cout<< "enter the number of rows";
    cin>> n;
    cout<< "enter the number of columns";
    cin>> m;
    cout<< "enter the matrix";
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    wave(arr,n,m);
    return 0;
}
