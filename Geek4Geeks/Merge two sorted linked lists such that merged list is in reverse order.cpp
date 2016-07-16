#include<iostream>
#include<list>
#include<iterator>
using namespace std;

int main()
{
    list <int> l1,l2,l3;
    list <int> :: iterator it1,it2,it;
    int n1,n2,x;
    cin>>n1>>n2;
    int flag=0;
    for (int i=0;i<n1;i++)
    {
        cin>>x;
        l1.push_back(x);
    }
    for (int i=0;i<n2;i++)
    {
        cin>>x;
        l2.push_back(x);
    }
    for (it1 = l1.begin(), it2 = l2.begin();;)
    {
        if (it1==l1.end())
        {
            while(it2!=l2.end())
            {
                l3.push_back(*it2);
                it2++;
            }
            break;
        }
        else if (it2==l2.end())
        {
            while(it1!=l1.end())
            {
                l3.push_back(*it1);
                it1++;
            }
            break;
        }
        if (*it1 >= *it2)
        {
            l3.push_back(*it1);
            it1++;
        }
        else
        {
            l3.push_back(*it2);
            it2++;
        }
    }
    for (it=l3.begin();it!=l3.end();it++)
    {
        cout<<*it<<"    ";
    }
    return 0;
}
