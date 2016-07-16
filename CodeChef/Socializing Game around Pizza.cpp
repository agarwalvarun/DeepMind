#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while (t--)
    {
     //   int *arr=new int[10][10];
        cin>>n;
        if (n%4==2 || n%4==3)
        {
            cout<< "Arjuna"<<endl;
        }
        else
        {
            cout<< "Bhima"<<endl;
        }
    }
    return 0;
}
