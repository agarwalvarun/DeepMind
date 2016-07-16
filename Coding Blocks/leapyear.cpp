#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if (n%100==0 && n%400==0)
    {
        cout<< "leap year";
    return 0;
    }
    if (n%100!=0 && n%4==0)
    {
        cout<< "leap year";
    return 0;
    }
    cout<< "not leap year";
    return 0;

}
