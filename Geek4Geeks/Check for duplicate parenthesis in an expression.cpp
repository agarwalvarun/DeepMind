#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<char> bracket;
    char str[100];
    cin.getline(str,100);
    for (int i=0;str[i]!='\0';i++)
    {
        if(str[i]!=')')
        {
            bracket.push(str[i]);
        }
        else if(str[i]==')')
        {
            int total=0;
            bool flag=false;
            while(bracket.top()!='(')
            {
                bracket.pop();
            }
            while(str[i]==')')
            {
                total++;
                i++;
                if(total>1)
                {
                    flag=true;
                }
            }
            i--;
            while(bracket.top()=='(' && total)
            {
                total--;
                bracket.pop();
            }
            if(total==0 && flag)
            {
                cout<<"duplicate"<<endl;
                return 0;
            }
        }
    }
    cout<<"not duplicate";
    return 0;
}
