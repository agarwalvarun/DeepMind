#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>> n;
    int row=1;
    int val=1;
    while (row<=n)
    {
        int col=1;
        while (col<=n-row)
        {
            cout<< " ";
        col=col+1;
        }
        val=row;
        while (val<=2*row-1)
        {
            cout<< val;
            val=val+1;
        }
        val=2*(row-1);
        while (val>=row)
            {cout<< val;
        val=val-1;}
    row=row+1;
    cout <<'\n';
    }
    return 0;
}
