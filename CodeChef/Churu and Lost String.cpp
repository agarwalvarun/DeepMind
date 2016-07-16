#include<iostream>
using namespace std;
int main()
{
    int t,n,k;
    char str[2005];
    cin>>t;
    for (int i=0;i<t;i++)
    {
        cin>>n>>k;
        for (int j=0;j<n;j++)
        {
            str[j]='(';
        }
        str[n]='\0';
        for (int j=0,x,y;j<k;j++)
        {
            cin >> x >> y;
            str[x]='(';
            str[y]=')';
            for (int k=x+1;k<y-1;k+=2)
            {
                str[k]='(';
                str[k+1]=')';
            }
        }
        cout<<str<<endl;
    }
    return 0;
}
