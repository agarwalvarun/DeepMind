#include<iostream>
#include<math.h>
using namespace std;
float geometric_sum(int k)
{
    if (k==0)
    {
        return 1;
    }
    float sum=(1/pow(2,k))+geometric_sum(k-1);
    return sum;
}
int main()
{
    int k;
    float sum=0;
    cout<< "enter the value of K"<<endl;
    cin>> k;
    sum=geometric_sum(k);
    cout<<sum<<endl;
    return 0;
}
