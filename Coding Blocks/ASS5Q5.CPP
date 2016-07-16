#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<< "enter the number of elements";
    cin>>n;
    int arr1[n],arr2[n],arr3[n];
    cout<< "enter the first set of elements";
    for (int i=0; i<n;i++)
    {
        cin>> arr1[i];
    }
    cout<< "enter the second set of elements";
    for (int i=0; i<n;i++)
    {
        cin>> arr2[i];
    }
    int sum1=0,sum2=0,sum3,digits=0;
    for (int i=0;i<n;i++)
    {
        sum1=sum1*10+arr1[i];
        sum2=sum2*10+arr2[i];
    }
    sum3=sum1+sum2;
    while (sum3>0)
    {
        digits++;
        sum3=sum3/10;
    }
    sum3=sum1+sum2;
    for (int i=digits-1;i>=0;i--)
    {
        arr3[i]=sum3%10;
        sum3=sum3/10;
    }
    for (int i=0;i<digits;i++)
    {
        cout<<'\t'<< arr3[i];
    }

    return 0;
}
