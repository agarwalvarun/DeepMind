#include<iostream>
using namespace std;
int factorial(int x,int output[])
{
    int index=0;
    for (int i=1;i<=x;i++)
    {
        if (i==1)
        {
            output[0]=1;
            index=1;
        }
        else
        {
            int temp=0;
            for (int j=0;1;j++)
            {
                if (temp==0 && output[j]==0 && index==j)
                {
                    break;
                }
                output[j]=(output[j]*i)+temp;
                if (output[j]>9)
                {
                    temp=output[j];
                    output[j]=temp%10;
                    temp=temp/10;
                }
                else
                {
                    temp=0;
                }
                for (int m=199;m>=0;m--)
                {
                    if (output[m]!=0)
                    {
                        index=m+1;
                        break;
                    }
                }
            }
        }
    }
    return index-1;
}
int main()
{
    int t,index;
    cin>>t;
    int arr[t];
    for (int i=0;i<t;i++)
    {
        cin>> arr[i];
    }
    for (int i=0;i<t;i++)
    {
        int output[200]={0};
        index=factorial(arr[i],output);
        for (int i=index;i>=0;i--)
        {
            cout<< output[i];
        }
        cout<< endl;
    }
    return 0;
}
