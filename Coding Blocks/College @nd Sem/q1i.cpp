#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<< "enter the number";
    cin>>n;
    int a,prod=1;
    while (n>0)
    {
        a=n%10;
        prod=prod*a;
        n=n/10;
    }
    cout << "product of digits is " << prod;
    return 0;
}
