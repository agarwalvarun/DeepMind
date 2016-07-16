#include<iostream>
using namespace std;
int main()
 {
     int n,row=1,col;
     cout<< "enter the number of rows";
     cin>>n;
     while (row<=n)
     {
         col=1;
         while (col<=row)
         {
             cout << "*";
             col++;
         }
         cout<< " ";
         col=1;
         while (col<=n-row+1)
         {
             cout<<"*";
             col++;
         }
         cout<< " ";
         col=1;
         while (col<=n-row+1)
         {
             cout<< "*";
             col++;
         }
         cout<< " ";
         col=1;
         while (col<=row)
         {
             cout<< "*";
             col++;
         }
         cout<< '\n';
         row++;
     }
     return 0;
 }
