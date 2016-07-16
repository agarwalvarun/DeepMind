#include<iostream>
using namespace std;
int palindrome(char str[],int start,int last)
{
    int z=0;
    if (start>last)
    {
        return 1;
    }
    if (str[start]==str[last])
    {
        z=palindrome(str,start+1,last-1);
    }
    return z;
}
int main()
{
    char str[100];
    cout<< "enter the string"<<endl;
    cin.getline(str, 100);
    int start=0,last;
    for (last=0;str[last]!='\0';last++){}
    int z=palindrome(str,start,last-1);
    if (z==1)
    {
        cout<< "palindrome";
    }
    else
    {
        cout<< "not palindrome";
    }
    return 0;
}
