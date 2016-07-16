#include<iostream>
using namespace std;
int ulta(int n,int rev)
{
    int a;
    a=n%10;
    if (n==0)
    {
        return rev;
    }
    rev=rev*10;
    rev=(rev+a);
    int x=ulta(n/10,rev);
    return x;
}
int main()
{
    int n,rev=0;
    cout<< "enter the number"<<endl;
    cin>>n;
    int ans=ulta(n,rev);
    cout<< "reversed number is "<<endl<< ans;
    return 0;
}
