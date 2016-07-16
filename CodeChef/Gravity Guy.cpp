#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
char l1[200001],l2[200001];
int answer(char *l1,char *l2)
{
    int len=strlen(l1),ans=0;
    for (int i=0;i<len-1;)
    {
        if (l1[i+1]=='.')
        {
            i++;
        }
        else if (l2[i+1]=='.')
        {
            i++;
            ans++;
            char *temp;
            temp=l1;
            l1=l2;
            l2=temp;
//            strcpy(temp,l1);
//            strcpy(l1,l2);
//            strcpy(l2,temp);
        }
        else
        {
            return -1;
        }
    }
    return ans;
}
void gravity(char l1[],char l2[])
{
    int ans=0;
    if (l1[0]=='.' && l2[0]=='#')
    {
        ans=answer(l1,l2);
    }
    else if(l2[0]=='.' && l1[0]=='#')
    {
        ans=answer(l2,l1);
    }
    else if (l1[0]=='.' && l2[0]=='.')
    {
        int x,y;
        char str1[200001],str2[200001];
        strcpy(str1,l1);
        strcpy(str2,l2);
        x=answer(l1,l2);
        y=answer(str2,str1);
        if (x>y)
        {
            ans=y;
        }
        else
        {
            ans=x;
        }
    }
    else
    {
        cout<< "No"<<endl;
        return;
    }
    if (ans>=0)
    {
        cout<< "Yes"<<endl<<ans<<endl;
    }

    else
    {
        cout<< "No"<<endl;
    }
    return;
}
int main()
{
    int t,x;
    cin>>t;
    cin.get();
    for (int i=0;i<t;i++)
    {
        scanf("%s %s",l1,l2);
        fflush(stdin);
      //  cin.getline(l2,200001);
        gravity(l1,l2);
    }
    return 0;
}


