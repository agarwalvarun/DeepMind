#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int x,n,a;
        n=1;
        cin>> x;
    while(x>1)
    {
        a=pow(2,n);
        if (a>=x)
        {
            a=pow (2,n-1);
            cout << a;
        return 0;
        }
        n=n+1;
    }
    return 0;
}
