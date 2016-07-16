#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<< "enter the value of n"<< '\n';
    cin>>n;
    int array1[2*n];
    cout<< "enter the series"<< '\n';
    for (int i=0;i<n;i++)
    {
        cin>> array1[i];
    }
    for (int i=n,j=n-1; i<2*n; i++,j--)
    {
        array1[i]=array1[j];
    }
    for (int i=n;i<2*n; i++ )
    {
        cout<< '\n'<< array1[i]<< '\n';
    }
    return 0;
}

