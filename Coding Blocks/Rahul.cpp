#include<iostream>
using namespace std;

int fact(int n)
{
    if(n==1||n==0)
    {
        return 1;
    }
    else
    {n = n * fact(n-1);
        return n;}
}

int main()
{
    int n;
    cin>>n;
    for(int j=0;j<n;j++)
    {
    for(int i=j;i<n;i++)
    {
        cout<<" ";
    }
    for(int i=0;i<=j;i++)
    {
        cout<<fact(j)/(fact(i)*fact(j-i))<<" ";
    }
    cout<<endl;

    }
    return 0;
}
