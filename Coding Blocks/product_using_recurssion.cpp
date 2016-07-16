#include<iostream>
using namespace std;
int prod(int n, int m)
{
    int mul;
    if (m==0)
    {
        return 0;
    }
    mul= n+prod(n,m-1);

    return mul;
}

int main()
{
    int n,m;
    cout<< "enter the numbers to be multiplied";
    cin>>n>>m;
    int mul=prod(n,m);
    cout<< mul;
    return 0;
}
