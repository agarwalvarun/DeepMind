#include<iostream>
using namespace std;
void ulta(char str[],char str1[],int n,int x,int i)
{
    if (x==-1)
    {
        return;
    }
    if (x>=0)
    {
        str1[i]=str[n-1-i];
        ulta(str,str1,n,x-1,i+1);
    }
    return;
}
int main()
{
    int n=0,i=0;
    char str[100],str1[100];
    cout<<"enter the string"<<endl;
    cin.getline(str,100);
    for (int i=0;str[i]!=0;i++)
        {
            n++;
        }
    int x=n-1;
    ulta(str,str1,n,x,i);
    cout<< str1;
    return 0;
}
