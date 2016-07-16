#include<iostream>
#include<deque>
#include<stack>
using namespace std;
int main()
{
    deque<int> D1;
    stack<int> S1;
    int n,num,sum=0;
    cin>> n;
    int arr[100]={0},x;
    for (int i=0;i<n;i++)
    {
        cout<< "Enter the Data and Priority"<<endl;
        cin>>num>>x;
        D1.push_back(num);
        arr[x]++;
    }
    cout<< "Enter the DATA to be inserted and its PRIORITY"<<endl;
    cin>> num>>x;
    for (int i=1;i<=x;i++)
    {
        sum+=arr[i];
    }
    for (int i=0;i<sum;i++)
    {
        S1.push(D1.front());
        D1.pop_front();
    }
    D1.push_front(num);
    for (int i=0;i<sum;i++)
    {
        D1.push_front(S1.top());
        S1.pop();
    }
    arr[x]++;
    while (!D1.empty())
    {
        cout<< D1.front()<< " ";
        D1.pop_front();
    }
    return 0;
}
