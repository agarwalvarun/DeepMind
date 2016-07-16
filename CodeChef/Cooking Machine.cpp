#include<iostream>
using namespace std;
void func(int a, int b)
{
    int arr[19],ans=0;
    bool x=0;
    if (a==b)
    {
        cout<<ans<<endl;
        return;
    }
    for (int i=0,j=1;i<=19;i++)
    {
        arr[i]=j;
        j=j*2;
    }

    while (1)
    {
            int first=0,last=19,mid=(first+last)/2;
            while (first <= last)
            {
            if (arr[mid] < a)
            {first = mid + 1;}
            else if (arr[mid] == a) {
            x=1;
            break;
            }
            else
            last = mid - 1;
            mid = (first + last)/2;
            }
        if (x)
        {
            break;
        }
        else
        {
            a=a/2;
            ans++;
        }
    }
    if (a<b)
    {
       while (a!=b)
        {
            a=a*2;
            ans++;
        }
    }
    else
    {
        while (a!=b)
        {
            a=a/2;
            ans++;
        }
    }
    cout<< ans<<endl;
    return;
}
int main()
{
    int t,a,b;
    cin>>t;
    for (int i=0;i<t;i++)
    {
        cin>> a>>b;
        func(a,b);
    }
    return 0;
}
