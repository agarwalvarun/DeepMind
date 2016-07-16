#include<iostream>
using namespace std;
int power(int a, int n)
{
    if (n==0)
    {
        return 1;
    }
    int ans=a*power(a,n-1);
    return ans;
}
int main()
{
    int a,n;
    cout<< "enter the number";
    cin>> a;
    cout<< "enter the power";
    cin>> n;
    int b=power(a,n);
    cout<< b;
    return 0;
}
