#include<iostream>
using namespace std;
int main()
{
    int a,n;
    cin>> n;
    a=2;
 while (a<n)
 {
     if (n%a==0)
     {
         cout<< "not prime";
         return 0;
     }
     a=a+1;
 }
 cout << "prime";
 return 0;
}

