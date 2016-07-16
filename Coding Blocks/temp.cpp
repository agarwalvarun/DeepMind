
#include<iostream>
#include<cmath>
using namespace std;
/*
char ab(int n)
{
    return 'a';
}
*/
int main()
{
    int x=0,n;
    cin>> n;
    while (n>0)
    {
        float ans=pow(10,x);
        cout<< ans<<endl;
        x++;
        n--;
    }
   /* char a=ab(1);
    cout<< a; */

   /* int x=10;
    int *ptr;
    ptr=&x;
    cout<< &x<<endl;
    cout<<*(&(*(&x)))<<endl;
//    cout<<&(10)<<endl;
    cout<< ptr; */
    return 0;
}
