#include<iostream>
#include<cmath>
#include<unordered_map>
using namespace std;
int main()
{
    unordered_map M<int,int>;
    int n,el;
    bool flag=true;
    cin>>n;
    for (int i=0;flag && i<n;i++)
    {
        cin>>el;
        if (M.find(el)!=M.end() && abs(M[el]-i)<=k)
        {
            cout<<el<< " "<<
        }
    }
}

