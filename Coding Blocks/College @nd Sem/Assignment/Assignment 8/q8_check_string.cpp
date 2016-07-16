#include<iostream>
using namespace std;
int check(char str[],char str1[],int n,int a)
{
    int z=0;
    if (a==n)
    {
        return 1;
    }
    else if (str1[a]==str[n-1-a])
    {
        z=check(str,str1,n,a+1);
    }
    return z;
}
int main()
{
   char str[100],str1[100],n=0;
   cout<< "enter 1st string"<<endl;
   cin.getline(str,100);
   cout<< "enter 2nd string"<<endl;
   cin.getline(str1,100);
   for (int i=0;str[i]!=0;i++)
   {
       n++;
   }
   int a=0;
   int x=check(str,str1,n,a);
   if (x==1)
   {
       cout<<endl<< "YES........judje it for yourself brruhh..."<<endl;
   }
    else
    {
        cout<<endl<< "hell NO....r u mad....cant u see"<<endl;
    }
    return 0;
}

