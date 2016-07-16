#include<iostream>
using namespace std;
int counting(int n,int i)
{
    if (n==0)
    {
        return i;
    }
    int a=n%10;
    if (a==0)
    {
        i++;
    }
    int x=counting(n/10,i);
    return x;
}
int main()
{
    int n,i=0;
    cout<<"enter the number"<<endl;
    cin>> n;
    int ans=counting(n,i);
    cout<< ans;
    return 0;
}
