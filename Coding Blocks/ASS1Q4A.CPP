#include<iostream>
using namespace std;
int main()
{

int n;
cin>> n;
int row=1;
while (row<=(n+1)/2)
{
    int col=1;
    while (col<=(n+1)/2-row)
    {
        cout<<  " ";
        col=col+1;
    }
    int val=1;
    while (val<=2*row-1)
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
    while (col<=row-((n+1))/2)
    {
        cout<< " ";
        col=col+1;
    }
    int val=1;
    while (val<=2*n-2*row+1)
    {
        cout<< "*";
        val=val+1;
    }
    row=row+1;
    cout<< '\n';
}
return 0;
}
