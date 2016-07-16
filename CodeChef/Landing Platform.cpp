#include<iostream>
#include<stdio.h>
#include<limits.h>
using namespace std;
int main()
{
    int  t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m;
        scanf("%d %d",&n,&m);
        int arr[n][m];
        int i,j;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                scanf("%d",&arr[i][j]);
            }
        }
        int max=INT_MIN,sum=0;
        for (i=0,j=0;j<m-1;i++)
        {
            for (int row=i+1,col=j+1;row<n && col<m;row++,col++)
            {
                for (int x0=i,y0=j;x0<=row;x0++,y0++)
                {
                    sum+=arr[x0][y0];
                }
                for (int x0=row,y0=j;y0<=col;x0--,y0++)
                {
                    sum+=arr[x0][y0];
                }
                if ((row-i+1)%2)
                {
                    sum-=arr[(i+row)/2][(j+col)/2];
                }
                if (sum>max)
                {
                    max=sum;
                }
                sum=0;
            }
            if(i==n-2)
            {
                i=-1;
                j++;
            }
        }
        cout<<max<<endl;
    }
    return 0;
}
