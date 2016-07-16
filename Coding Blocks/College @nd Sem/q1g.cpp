#include<iostream>
using namespace std;

int main()
{
    float x;
    cout<< "enter the value of angle (in radians)";
    cin>> x;
    float n=1,a=-1,b=1,c=1;
    float sum=0;
    while (n<100)
    {
        for (int i=0; i<n;i++)
        {
            a=a*(-1);
        }
        for (int i=1;i<=2*n-1;i++)
        {
            b=b*x;
        }
        for (int i=1;i<=2*n-1;i++)
        {
            c=c*i;
        }
        sum=sum+((a*b)/c);
        n++;
    }
    cout<< "sin(x)"<< " = "<<'\t'<< sum;
    return 0;
}
