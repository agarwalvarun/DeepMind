#include<iostream>
using namespace std;
int prime(int j)
{
    int a=2;
    while (a<j)
 {
     if (j%a==0)
     {
         return 0;
     }
     a=a+1;
 }
 return 1;
}
int main()
{
    long double n;
    int arr[100],x;
    cin>> n;
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=n/2;j++)
        {
            if (i%j==0 && j<=100)
            {
                x=prime(j);
                if (x==1)
                {
                    tot++;
                }
            }
        }
    }
    return 0;
}
