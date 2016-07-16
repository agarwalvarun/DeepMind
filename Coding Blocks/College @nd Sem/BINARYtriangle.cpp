#include<iostream>
using namespace std;
int main()
{
    int n,row=1,col;
    cout<< "enter the number of rows";
    cin>> n;
    while (row<=n)
    {
        if (row%2!=0)
        {
        col=1;
           while (col<=row)
           {
               if (col%2!=0)
               {
                   cout<< "1";
               }
               else
               {
                   cout<< "0";
               }
               col++;
           }
        }
        else
        {
            col=1;
            while (col<=row)
            {
                if(col%2!=0)
                {
                    cout<< "0";
                }
                else
                {
                    cout<< "1";
                }
                col++;
            }
        }
        cout<<'\n';
        row++;
    }
   return 0;
    }

