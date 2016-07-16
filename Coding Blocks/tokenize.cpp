#include<iostream>
using namespace std;
int tokenize(char str[][100], char str2[][100],int n, char ch=' ')
{
    int a=0,b=0;
    for (int i=0;i<n;i++)
    {
        for (int j=0;str[i][j]!='\0';j++)
        {
           if (str[i][j]!=ch)
           {
               str2[a][b]=str[i][j];
               b++;
           }
           else
           {
               str2[a][b]='\0';
               a++;
               b=0;
           }
        }
    }
    return a+1;
}
int main()
{
    int n;
    cout<< "enter the number of rows";
    cin>> n;
    cin.get();
    char str[100][100],str2[100][100];
    cout<< "enter the lines ";
    for (int i=0;i<n;i++)
    {
        cin.getline(str[i], 100);
    }
    int total=tokenize(str, str2, n);
    cout<< total;
    return 0;
}
