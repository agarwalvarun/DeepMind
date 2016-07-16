#include<iostream>
using namespace std;
int main()
{
    int i=0;
    char ch;
    ch= cin.get();
    while (ch!='$')
    {
        ch=cin.get();
        if (ch==' ')
        {
            i=i+1;
        }
    }
    cout<< i;
    return 0;
}

