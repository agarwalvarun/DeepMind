#include<iostream>
#include<list>
#include<iterator>
#include<string>
using namespace std;

int main()
{
    list <string> l;
    list <string> :: iterator it;
    string :: iterator it1;
    string s,sr;
    char s1[100];
    int n;
    cin>>n;
    cin.get();
    for (int i=0;i<n;i++)
    {
        cin.getline(s1,100);
        s=s1;
        l.push_back(s);
    }
    s.clear();
    for (it = l.begin(); it!=l.end();it++)
    {
        s+=*it;
    }
    //cout<<s<<endl;
    for(it1=s.end()-1;it1>=s.begin();it1--)
    {
        sr+=*it1;
        //cout<<*it1;
    }
    //cout<<sr<<endl;
    if(s==sr)
    {
        cout<<"true";
    }

    else
    {
        cout<<"false";
    }
    return 0;
}
