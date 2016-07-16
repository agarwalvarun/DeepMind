#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>> t;
    char str[t][100];
    cin.get();
    for (int i=0;i<t;i++)
    {
        cin.getline(str[i],100);
    }
    for (int i=0;i<t;i++)
    {
        int output=0;
        for (int j=0;str[i][j]!='\0';j++)
        {
            if (str[i][j]=='B')
            {
                output+=2;
            }
            else if (str[i][j]=='A' || str[i][j]=='D' || str[i][j]=='O' || str[i][j]=='P' || str[i][j]=='Q' || str[i][j]=='R')
            {
                output+=1;
            }
        }
        cout<< output<< endl;
    }
    return 0;
}
