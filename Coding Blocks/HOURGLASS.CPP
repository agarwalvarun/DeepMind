#include<iostream>
using namespace std;
int main()
{
    int n,row=1;
    cin>> n;
    while (row<=(n+1)/2)
    {
        int col=1;
        while (col<=row-1)
        {
            cout<< " ";
            col=col+1;
        }
        int val=1;
        while (val<=n-2*row+2)
           {
               cout<< "*";
        val=val+1;
           }
           row=row+1;
           cout<< '\n';
    }
    row=((n+1)/2)+1;
    while (row<=n)
    {
        int col=1;
        while (col<=n-row)
        {
            cout<< " ";
            col=col+1;
        }
        int val=1;
        while (val<=2*row-n)
        {
            cout<< "*";
            val=val+1;
        }
        row=row+1;
        cout<< '\n';
    }
    return 0;
}
