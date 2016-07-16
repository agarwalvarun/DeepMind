#include<iostream>
using namespace std;
int main()
{
    char n;
    cin>> n;
    if (n>='A' && n<='Z')
    {
        cout << "capital letter";
    }
    else if (n>='a' && n<='z')
    {
        cout << "small letter";
    }
    else
    {
        cout<< "invalid";
    }
    return 0;
}
