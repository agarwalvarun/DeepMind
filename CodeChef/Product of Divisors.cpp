#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    int arr[t];
    for(int i=0;i<t;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<t;i++)
    {
        if (arr[i]==1)
        {
            printf("0\n");
        }
        else
        {
            int product=1,divider;
            for (int j=1;j*j<=arr[i];j++)
            {
                if (arr[i]%j==0)
                {
                    divider=arr[i]/j;
                    if(divider!=j && j!=1)
                    {
                        product=(product*j*divider)%10000;
                    }
                    else
                    {
                        product=(product*j)%10000;
                    }
                }
            }
            printf("%d\n",product);
        }
    }
    return 0;
}
