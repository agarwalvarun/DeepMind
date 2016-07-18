#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<char> s;
    char str[100];
    bool flag=false;
    cin.getline(str,100);
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]=='[' || str[i]=='{' || str[i]=='(')
        {
            s.push(str[i]);
        }
        else if (str[i]==']' || str[i]=='}' || str[i]==')')
        {
            if ((str[i]==']' && s.top()=='[') || (str[i]=='}' && s.top()=='{') || (str[i]==')' && s.top()=='('))
            {
                s.pop();
            }
            else
            {
                break;
            }
        }
    }
    if (s.empty())
    {
        cout<<"balanced";
    }
    else
    {
        cout<<"not";
    }
    return 0;
}
