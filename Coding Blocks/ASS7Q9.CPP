#include<iostream>
using namespace std;
int main()
{
    char str[100];
    cout<< "enter the line"<<endl;
    int i=0,n=1;
    str[i]=cin.get();
    for (;str[i]!='\n';)
    {
        i++;
        str[i]=cin.get();
        n++;
    }
    for (int i=0;i<n;i++)
    {
        cout<< str[i];
    }
    return 0;
}
