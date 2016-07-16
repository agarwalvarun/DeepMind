#include<iostream>
using namespace std;
int main()
{
   char ch;
   int acount[52]={0} ;
   for (ch=cin.get();ch!='\n';ch=cin.get())
   {
       if (ch>='A' && ch<='Z')
       {
           acount[ch-'A']++;
       }
       else if (ch>='a' && ch<='z')
       {
           acount[ch-'a'+26]++;
       }
   }
   for (int i=0; i<=25; i++)
   {
       cout<< '\t'  << char('A'+i) << '\t'  << acount[i] <<'\n';
   }
   for (int i=0; i<=25; i++)
   {
       cout << '\t'  << char('a'+i) << '\t'  << acount[i+26] <<'\n';
   }
   return 0;
}
