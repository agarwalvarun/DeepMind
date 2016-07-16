#include<iostream>
using namespace std;
int main()
{
    int i=0;
    char n;
    cin>> n;
    while (n!='$')
    {
        cin>> n;
        i=i+1;
    }
    cout<< i;
    return 0;
}
