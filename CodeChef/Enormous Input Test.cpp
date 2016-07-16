#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n,k,t,output=0;
    cin>>n>>k;
    while (n--)
    {
        scanf("%d",&t);
        if (t%k==0)
        {
            output++;
        }
    }
    cout<< output;
    return 0;
}
