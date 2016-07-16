#include<iostream>
using namespace std;
int main()
{
    int x;
    float y;
    cin>> x>>y;
    if (x%5==0 && (x+.5)<=y)
    {
        cout<< y-x-.5;
    }
    else
    {
        cout<< y;
    }
    return 0;
}
