#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>> n;
    int row=1;
    while (row<=n)
    {
        int col=1;
        while (col<=n-row)
        {
            cout<< " ";
            col=col+1;
        }
     int val=0;
     int num=1;
     int den=1;
     int m;
     m=row-1;

     while (val<=m)

     {

         int t;
         t=m;
         while (t>=row-val)
         {

             num=num*t;
             t=t-1;
         }
         int k;
         k=val;
         while (k>=1)
         {
             den=den*k;
             k=k-1;
         }
         int ans;
         ans=num/den;
         cout<< ans<<" ";
         val=val+1;

     }
        cout<< '\n';
        row=row+1;

            }

return 0;
}
