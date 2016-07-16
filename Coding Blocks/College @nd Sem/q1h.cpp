#include<iostream>
using namespace std;
int main()
{
int n,c=1;
cout<< "enter the number";
cin>>n;
for (int i=1;i<=n;i++)
        {
            c=c*i;
        }
        cout<< "factorial = " << c;
        return 0;
}
