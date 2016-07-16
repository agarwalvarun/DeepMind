#include<iostream>
#include<stack>
#include<queue>
using namespace std;
int main()
{
    stack<int> S1;
    queue<int> Q1;
    int n,num;
    bool flag=true;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>> num;
        Q1.push(num);
    }
    for (int i=1;i<=n;i++)
    {
        if (!S1.empty())
        {
            if (S1.top()==i)
            {
                S1.pop();
                continue;
            }
            else if (Q1.empty() && S1.top()!=i)
            {
                flag=false;
                break;
            }
        }
        if(!Q1.empty())
        {
            while (1)
            {
                if (Q1.empty())
                {
                    flag=false;
                    break;
                }
                if (Q1.front()==i)
                {
                    Q1.pop();
                    break;
                }
                S1.push(Q1.front());
                Q1.pop();
            }
        }
       if (!flag)
       {
           break;
       }
    }
    if (flag)
    {
        cout<< "Yes"<<endl;
    }
    else
    {
        cout<< "No"<<endl;
    }
    return 0;
}
