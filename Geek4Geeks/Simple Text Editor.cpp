#include<iostream>
#include<stack>
#include<queue>
char str[1000000];
using namespace std;
void append()
{
    int i;
    char x[1000000];
    cin.getline(x,1000000);
    for (i=0;str[i]!='\0';i++)
    {}
    for(int j=0;x[j]!='\0';j++,i++)
    {

    }
}
int main()
{
    int t,n;
    cin>>t;
    str[0]='\0';
    while(t--)
    {
        cin>>n;
        if(n==1)
        {
            append();
        }
        else if(n==2)
        {
            delet();
        }
        else if(n==3)
        {
            undo();
        }
    }
    return 0;
}
