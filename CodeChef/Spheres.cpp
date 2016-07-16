#include<iostream>
#include<cstdio>
#include<stdio.h>
#define MAX 100002
#define gc getchar_unlocked
using namespace std;
void scanint(int &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}

int main()
{
    int n,m,c,upper[MAX]={0},lower[MAX]={0},minim;
    long long int ways[MAX];
    long long int *arr_1=new long long int [MAX],*arr_2= new long long int [MAX];
    scanint(n);
    scanint(m);
    scanint(c);
    for (int i=1,x;i<=n;i++)
    {
        scanint(x);
        upper[x]++;
    }
    for (int i=1,x;i<=m;i++)
    {
        scanint(x);
        lower[x]++;
    }
    minim=min(n,m);
    for (int i=1;i<=minim;i++)
    {
        ways[i]=upper[i]*lower[i];
        if (i==1)
        {
            arr_1[i]=ways[i];
        }
        else
        {
            arr_1[i]=arr_1[i-1]+ways[i];
        }
    }
    for (int i=1,k;i<=c;i++)
    {
        k=i+1;
        long long int ans=0;
        for (int j=1;k<=minim;j++,k++)
        {
            arr_2[j]=(arr_1[j]*ways[k])%1000000007;
            ans+=arr_2[j];
            if (j!=1)
            {
                arr_2[j]=(arr_2[j]+arr_2[j-1])%1000000007;

            }
        }
        cout<<(ans%1000000007)<< " ";
        long long int *temp=arr_1;
        arr_1=arr_2;
        arr_2=temp;
    }
    return 0;
}
