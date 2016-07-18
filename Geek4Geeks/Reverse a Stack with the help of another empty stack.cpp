#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int> s1,s2;
    int val=0;
    cin>>val;
    while(val!=-1)
    {
        s1.push(val);
        cin>>val;
    }
    while(!s1.empty())
    {
        s2.push(s1.top());
        s1.pop();
        cout<<s2.top()<<"   ";
    }
    return 0;
}
