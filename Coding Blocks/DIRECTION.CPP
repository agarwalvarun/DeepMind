#include<iostream>
using namespace std;
int main()
{
    char ch;
    int x,y;
    ch=cin.get();
    while (ch!='\n')
    {
        ch=cin.get();
        if (ch=='N')
        {
            x++;
        }
        if (ch=='S')
        {
            x--;
        }
        if (ch=='W')
        {
            y++;
        }
        if (ch=='E')
        {
            y--;
        }

    }

    if (x>0)
    {
        for (int a=1; a<=x; a++)
        {
            cout<< "N";
        }
    }
    else

    {
        for (int a=x; a>=0; a++)
        {
            cout<< "S";
        }
    }
    if (y>0)
    {
        for (int a=1; a<=y; a++)
        {
            cout<< "W";
        }
    }
    else

    {
        for (int a=y; a>=0; a++)
        {
            cout<< "E";
        }
    }
    return 0;
}
