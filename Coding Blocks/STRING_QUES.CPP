#include<iostream>
using namespace std;
int main()
{
    int n,ch=0,temp=0;
    char str[100],str1[100];
    cout<<"enter the number of lines";
    cin>> n;

    for(int i=0;i<n;i++)
    {
    cout<< "enter the line"<<'\n';
    cin.getline(str,100);
    for (ch=0;str[ch]!='\0';ch++)
    {
    }
    if(ch>temp)
    {
        temp=ch;
        for(int j=0;j<=ch;j++)
        {
            str1[j]=str[j];
        }
    }
    }
    cout<< str1;
    return 0;
}
