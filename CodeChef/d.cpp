#include<iostream>
#define ll long long
using namespace std;
ll int modularpow(ll int b, ll int expo,ll int modul)
{
    ll r = 1;
    while (expo > 0)
    {
        if (expo % 2 == 1)
            r = (r * b) % modul;
        expo = expo >> 1;
        b = (b * b) % modul;
    }
    return r;
}
int main()
{
    ll int x,y,z=1000000007;
    cout<<modularpow(10,18,z);
}
