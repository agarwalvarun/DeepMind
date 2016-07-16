#include<iostream>
using namespace std;
int main()
{
    float p,r,t,si,total;
    cin>> p >> r >> t;
    si=p*r*t/100;
    cout<< "sipmle interest =" << si << '\n';
    total=p+si;
    cout<< "total =" << total;
    return 0;
}
