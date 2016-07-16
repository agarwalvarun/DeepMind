#include<iostream>
using namespace std;
int main()
{
    float dividend,a=0;
    float x=0;
    cin >> dividend;
    for (;x*x<=dividend;x++)
        {
            a=x*x;
        }
    x=x-1;
    dividend=(dividend-a)*100;
    int divisor=(2*x)*10;
    while (dividend>=0)
        {
            int i=0;
            for ( ;(divisor+i)*i<=dividend; i++)
            {
                a=(divisor+i)*i;

            }
            i=i-1;
            x=x*10+i;
            dividend=(dividend-a)*100;
            divisor=(divisor+i)*10;
        }
        while (x>=10)
        {
            x=x/10;
        }
        cout<< x;
        return 0;
}
