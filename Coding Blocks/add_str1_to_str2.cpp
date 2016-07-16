#include<iostream>
using namespace std;
int join(char str1[], char str2[])
{
    int i;
    for (i=0;str1[i]!='\0';i++)
    {
    }
    for (int j=0;str2[j]!='\0';j++)
    {
        str1[i]=str2[j];
        i++;
    }
    str1[i]='\0';
    cout<< str1;
}
int main()
{
    char str1[100],str2[100];
    cout<< "enter the first line"<<'\n';
    cin.getline(str1,100);
    cout<<"enter the second"<<'\n';
    cin.getline(str2,100);
    join(str1, str2);
    return 0;
}
