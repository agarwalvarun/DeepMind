#include<iostream>
#include<stdio.h>
using namespace std;
void overlucky(int n,int index,int arr[])
{
    int divider1,divider2,x,ans=0;
    for (int i=1;i*i<=n;i++)
    {
        divider1=i;
        if (n%divider1==0)
        {
            divider2=n/divider1;
            while (divider1>0)
            {
                x=divider1%10;
                if (x==4 || x==7)
                {
                    ans++;
                    break;
                }
                divider1/=10;
            }
            while (divider2>0)
            {
                x=divider2%10;
                if (x==4 || x==7)
                {
                    ans++;
                    break;
                }
                divider2/=10;
            }
        }
    }
    arr[index]=ans;
    return;
}
int main()
{
    int t,n;
    scanf("%d",&t);
    int arr[t];
    for (int i=0;i<t;i++)
    {
        scanf("%d",&n);
        overlucky(n,i,arr);
    }
    for (int i=0;i<t;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}
