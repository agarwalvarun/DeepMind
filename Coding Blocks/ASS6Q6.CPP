#include<iostream>
using namespace std;
int main()
{
    int n,x,arr1[100][100],arr2[100][100],a=0;
    cout<<"enter the number of rows in matrix";
    cin>>n;
    cout<< "enter the matrix"<<endl;
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            cin>> arr1[i][j];
        }
    }
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if (arr1[i][j]==0)
            {
            for(int b=0;b<n;b++)
                {
                    arr2[a][b]=0;
                }
            a++;
            break;
            }
            x=j+1;
        }
        if (x==n)
        {
         for(int b=0;b<n;b++)
            {
                arr2[a][b]=1;
            }
            a++;
        }
    }
    int d=0;
    for (int j=0;j<n;j++)
    {
        d=j;
        for (int i=0;i<n;i++)
        {
            if (arr1[i][j]==0)
            {
                for (int c=0;c<n;c++)
                {
                    arr2[c][d]=0;
                }

                break;
            }
        }
    }
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            cout<< arr2[i][j];
        }
        cout<< endl;
    }
    return 0;
}
