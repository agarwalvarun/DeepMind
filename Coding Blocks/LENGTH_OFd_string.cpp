#include<iostream>
using namespace std;
int length(char s[])
{
    int len=0;
    for (int i=0;s[i]!='\0';i++)
    {
        len++;
    }
    return (len);
}
int main()
{
    char str[100];
    cout<< "enter the line"<<'\n';
    cin.getline(str, 100);
    cout<<  length(str);
    return 0;
}
