#include<iostream>
#include<stdio.h>
#include<cstdio>
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
    int t,n;
    scanint(t);
    while (t--)
    {
        scanint(n);
        int arr[n];
        for (int  i=0;i<n;i++)
        {
            scanint(arr[i]);
        }
        bool flag=true;
//        if (n==3)
//        {
//            if (arr[0]>arr[2])
//        }
        for (int i=0;flag && i<n-2;i++)
        {
            if (i==0 || i==1)
            {
                if (arr[i+2]<arr[i])
                {
               //     cout<< "a";
                    flag=0;
                }
            }
            else if (i==n-1 || i==n-2)
            {
                if (arr[i-2]>arr[i])
                {
                    //cout<< "b";
                    flag=0;
                }
            }
            else
            {
                if (arr[i-2]>arr[i] || arr[i-2]>arr[i])
                {
                    //cout<< "c";
                    flag=0;
                }
            }
        }
        if (flag)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
