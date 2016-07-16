#include<iostream>
using namespace std;
int main()
{
    char str[100];
    cout<< "enter the line"<< '\n';
    cin.getline(str,100);
    int ch;
    for (ch=0;str[ch]!='\0';ch++)
    {
    }
    for (int j=ch-1;j>=0;j--)
    {
        cout<< str[j];
    }
    return 0;
}
