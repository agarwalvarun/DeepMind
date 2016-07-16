#include<iostream>
using namespace std;
void squeeze(char str[])
{
    for (int i=0;str[i]!='\0';i++)
    {
        if (str[i]!=' ' && str[i]!='\t' && str[i]!='\n')
        {
            cout << str[i];
        }
    }
}
int main()
{
    char str[100];
    cin.getline(str, 100);
    squeeze(str);
    return 0;
}
