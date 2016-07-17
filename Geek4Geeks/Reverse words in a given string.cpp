#include<iostream>
using namespace std;
int main()
{
    char str[100],f_str[100];
    cin.getline(str,100);
    int pointer,f_pointer=0,last;
    for (int i=0;str[i]!='\0';i++)
    {
        last=i;
    }
    for (int i=last,j=last;i>=0;i--)
    {
        if(i!=0 && str[i]!=' ')
        {
            continue;
        }
        if(i==0)
        {
            pointer=i;
        }
        else
        {
            pointer=i+1;
        }
        for (;pointer<=j;f_pointer++,pointer++)
        {
            f_str[f_pointer]=str[pointer];
        }
        f_str[f_pointer]=' ';
        f_pointer++;
        j=i-1;
    }
    f_str[f_pointer]='\0';
    cout<<f_str;
    return 0;
}
