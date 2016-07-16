#include<iostream>
using namespace std;
void func(int initTax,int slot1,int slot2,int k,int n)
{
    int arr[slot1+slot2+1];
    unsigned long long int sum=initTax,prev,fin_arr[k];
    arr[0]=initTax;
    for (int i=0;i<slot1;i++)
    {
        sum++;
    //    sum=sum%(10000007);
        arr[i+1]=sum;
    //    cout<<sum<<endl;
    }
    for (int i=0;i<slot2;i++)
    {
        sum*=2;
     //   sum=sum%(10000007);
        arr[i+slot1+1]=sum;
        //cout<<sum<<endl;
    }
    sum=1;
    for (int i=slot1+slot2,j=k-1;j>=0;i--,j--)
    {
        fin_arr[j]=arr[i];
        sum=(sum*arr[i]);
    //    cout<<sum<<endl;
    }
    for (int i=0,j=0;i<n;i++,j++)
    {
        if (j==k)
        {
            j=0;
        }
        if (i)
        {
            sum=(sum/prev)*sum;
        }
        prev=fin_arr[j];
        fin_arr[j]=sum;
        cout<<sum<<endl;
    }
    cout<<sum%(10000007)<<endl;
}
int main()
{
    int t,initTax,slot1,slot2,k,n;
    cin>>t;
    for (int i=0;i<t;i++)
    {
        cin>>initTax>>slot1>>slot2>>k>>n;
        func(initTax,slot1,slot2,k,n);
    }
    return 0;
}
