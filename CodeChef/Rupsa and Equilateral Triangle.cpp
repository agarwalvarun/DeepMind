#include<iostream>
#include<stdio.h>
#include<cstdio>
//#include<vector>
#define gc getchar_unlocked
using namespace std;
bool mark[5*1000000+1]={0},check[5000001]={0};
//int prime[174193],k=0;
void scanint(int &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}
void ini()
{
    int i,j;
    for(i=2;i<=5000000;++i)
    {
        if(mark[i])
        {
            continue;
        }
        if(i%4==1)
        {
               // cout<<i;
               // flag=true;
               // return (true);
         //   prime[k]=i;
            //   k++;
            for (int j=1;j*i<=5000000;++j)
            {
                check[j*i]=true;
            }
        }
        for(j=2;j*i<=5000000;++j)
        {
            mark[j*i]=1;
        }
    }
//    for (int i=0;i<k/100000;i++)
//    {
//        cout<<prime[i]<<endl;
//    }
    //cout<<k;
    return;
}
int main()
{
    ios::sync_with_stdio(false);
    ini();
    int t,n;

//    j=0,prime[],arr[]=;
//    for (int i=0;i<1229;i++)
//    {
//        if (arr[i]%4==1)
//        {
//            prime[j]=arr[i];
//            j++;
//        }
//    }
////    for (int i=0;i<j;i++)
//    {
//        cout<<prime[i]<<endl;
//    }
    scanint(t);
    //cin>>t;
    while(t--)
    {
        scanint(n);
      //cin>>n;
      //  bool flag=false;
      //  ini(n);
//        for (int i=0;i<k;i++)
//        {
//            if (n<prime[i])
//            {
//                break;
//            }
//            if (n%prime[i]==0)
//            {
//                flag=true;
//                break;
//            }
//        }
        if (check[n])
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
