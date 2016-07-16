#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<< "enter the numbers";
    cin>>a>>b>>c;
    if (a>b && a>c)
    {
        cout << "greatest number is "<< a;
    }
    else if (b>a && b>c)
    {
        cout << "greatest number is "<< b;
    }
    else
    {
        cout<< "greatest number is "<< c;
    }
    return 0;

}
