#include<iostream>
using namespace std;
pair<int,int> common(int x,int y,char arr[][10])
{
   pair<int,int> P;
   for (int j=y;arr[1][j]!='\0';j++)
   {
       for (int i=x;arr[0][i]!='\0';i++)
       {
           if (arr[1][j]==arr[0][i])
           {
               P.first=i;
               P.second=j;
               return P;
           }
       }
   }
}
int main()
{
    int t,n;
    cin>>t;
    while (t--)
    {
        cin>>n;
        char arr[20][10],stem[20];
        for(int i=0,j=0;i<n;j++)
        {
            arr[i][j]=cin.get();
            if (arr[i][j]==' ')
            {
                arr[i][j]='\0';
                j=-1;
                i++;
            }
        }

    }
}
