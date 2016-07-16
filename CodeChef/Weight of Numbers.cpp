#include<iostream>
using namespace std;
void weight(int n,int w,int arr[],int output[],int index)
{
    int number=1,answer=0;
    for (int i=0;i<n-1;i++)
    {
        number*=10;
    }
    for (;number<number*10;number++)
    {
        int sum=0;
        for (int x=number,i=0;x>0;x/=10,i++)
        {
            arr[i]=x%10;
        }
        for (int i=0;i<n-1;i++)
        {
            sum=sum+(arr[i]-arr[i+1]);
        }
        if (sum==w)
        {
            answer++;
        }
    }
    output[index]=answer%1000007;
    return;
}
int main()
{
    int t,n,w;
    cin>> t;
    int output[t];
    for (int i=0;i<t;i++)
    {
        cin >> n>> w;
        int arr[n];
        weight(n,w,arr,output,i);
    }
    for (int i=0;i<t;i++)
    {
        cout<< output[i]<<endl;
    }
    return 0;
}
