#include<iostream>
using namespace std;
void permut(int arr[],int output[],int n,int index)
{
    for (int i=0;i<n;i++)
    {
        if (arr[i]==i+1)
        {
            output[index]=1;
            break;
        }
    }
    return;
}
int main()
{
    int n,t=0,output[1000]={0};
    cin>> n;
    while (n!=0)
    {
        int arr[n];
        for (int i=0;i<n;i++)
        {
            cin>> arr[i];
        }
        permut(arr,output,n,t);
        t++;
        cin>>n;
    }
    for (int i=0;i<t;i++)
    {
        if (output[i]==1)
        {
            cout<< "ambiguous"<<endl;
        }
        else
        {
            cout<< "not ambiguous"<<endl;
        }
    }
    return 0;
}
