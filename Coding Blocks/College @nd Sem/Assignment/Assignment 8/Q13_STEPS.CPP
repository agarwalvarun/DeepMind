#include<iostream>
using namespace std;
int steps(int a,int total)
{
    if (a==0)
    {
        total++;
        return 1;
    }
    steps(a-1,total);
    steps(a-2,total);
    steps(a-3,total);
    return total;
}
int main()
{
    int n;
    cout<< "enter the number of steps";
    cin>> n;
    int a=n,total=0;
    int otal=steps(a,total);
    cout<< otal;
    return 0;
}
