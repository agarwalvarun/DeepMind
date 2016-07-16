#include<iostream>
using namespace std;
int main()
{
    int a,b;
    float d;
    char c;
    cin>> a >>c >>b;
    if (c=='+')
    {
        d=a+b;
        cout<< d;
    }
    else if (c=='-')
    {
        d=a-b;
        cout<< d;
    }
    else if (c=='*')
     {
         d=a*b;
    cout << d;
     }
     else if (c=='/')
     {

        d=a/b;
     cout<< d;
     }
    else if (c=='%')
        {
            d=a%b;
          cout<< d;
        }
        else
        {
            cout << "invalid";
        }
    return 0;
}

