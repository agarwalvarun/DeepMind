#include<iostream>
using namespace std;
int swaping(char *ln1,char *ln2)
{
    while(*ln1>0 && *ln2>0)
    {
        char temp=*ln1;
        *ln1=*ln2;
        *ln2=temp;
        ln1++;
        ln2++;
    }
    if (*ln1==0)
    {
        while (*ln2!=0)
        {
            *ln1=*ln2;
            *ln2=0;
            ln1++;
            ln2++;
        }
        *ln1=0;
    }
    else
    {
        while (*ln1!=0)
        {
            *ln2=*ln1;
            *ln1=0;
            ln1++;
            ln2++;
        }
        *ln2=0;
    }
    return 1;
}
int main()
{
    char str1[100],str2[100];
    cout<<"enter first string"<<endl;
    cin.getline(str1,100);
    cout<<"enter second string"<<endl;
    cin.getline(str2,100);
    swaping(str1,str2);
    cout<< "reverse strings are"<<endl;
    cout<< str1<<endl;
    cout<< str2<<endl;
    return 0;
}
