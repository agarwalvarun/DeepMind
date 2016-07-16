#include<iostream>
using namespace std;
void convert(char str[],int n,int k)
{
    if (str[k]==0)
    {
        return;
    }
    else
    {
        if (str[k]==str[k-1])
        {
            for (int j=k;j<n;j++)
            {
                str[j]=str[j+1];
            }
        }
        convert(str,n,k+1);
    }
    return ;
}
int main()
{
    char str[100],n=0,k=1;
    cout<< "enter the string"<<endl;
    cin.getline(str,100);
    for (int i=0;str[i]!='\0';i++)
    {
        n++;
    }
    convert(str,n,k);
    cout<< str;
    return 0;
}
