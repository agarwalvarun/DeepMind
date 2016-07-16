#include<iostream>
#include<math.h>
using namespace std;
void htoi(char str[])
{
    int arr[100],j=0,n=0,sum=0;
    for (int i=0;str[i]!='\0';i++)
    {
        if (str[i]>='0' && str[i]<='9')
        {
            arr[j]=(str[i]-48);
            j++;
            n++;
        }
        else
        {
            arr[j]=(str[i]-55);
            j++;
            n++;
        }
    }
    for (int i=0;i<n;i++)
    {
        sum=sum+(arr[i]*pow(16, n-1-i));
    }
    cout<< sum;
}
int main()
{
    char str[100];
    cout<< "enter the hexadecimal code";
    cin.getline(str,100);
    htoi(str);
    return 0;
}
