#include<iostream>
using namespace std;
int n,num,arr[10],cheat[]={-1,-1,97,100,103,106,109,112,116,119};
void result(char mat[][5],int row,char ans[])
{
    if (row == n)
    {
        cout<<ans<<endl;
        return ;
    }
    for (int i=0;mat[row][i]!='\0';i++)
    {
        ans[row]=mat[row][i];
        result(mat,row+1,ans);
    }
}
int main()
{
    cin>>num;
    for (int i=0;num>0;i++)
    {
        arr[i]=num%10;
        num=num/10;
        n=i+1;
    }
    for (int i=n-1,j=0,temp;i>j;i--,j++)
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    char mat[n][5],ans[n];
    for (int i=0,len;i<n;i++)
    {
        if (arr[i]!=7 && arr[i]!=9)
        {
            len=3;
        }
        else
        {
            len=4;
        }
        for (int j=0,start=cheat[arr[i]];j<len;j++)
        {
            mat[i][j]=(start+j);
            mat[i][j+1]='\0';
        }
    }
    //cout<<mat[0];
    result(mat,0,ans);
    return 0;
}
