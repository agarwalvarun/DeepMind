#include<iostream>
using namespace std;
int main()
{
    int b,x;
    cout<< "enter the value of base";
    cin>> b;
    x=b/2;
    int row=1, col,sum=0;
    while (row<=x)
    {
        col=1;
        while (col<=row-1)
        {
            sum++;
            col++;
        }
        row++;
    }
    cout<< '\n'<<sum;
    return 0;
}
