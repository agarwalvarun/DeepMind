#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<< "enter the value of N"<<'\n';
    cin>>n;
    int arr[n];
    cout<< "enter the numbers"<<'\n';
    for (int i=0; i<n;i++)
    {
        cin>> arr[i];
    }
    int x;
    cout<<"enter the sum"<<'\n';
    cin>> x;
    int i=0,j=0,k=0;
    while (i<n)
    {
        j=i;
        while (j<n)
        {
            if (j!=i && arr[j]+arr[i]==x)
            {
                cout << '\t'<<arr[i] << '\t'<< arr[j]<< '\n';
                k++;
            }
            j++;
        }
        i++;
    }
    cout<< '\n'<< " total number of pairs are "  << k<<'\n';
    return 0;
}
