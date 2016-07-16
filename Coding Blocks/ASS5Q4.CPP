#include<iostream>
using namespace std;
int main()
{
    int n,x,total=0;
    cout<< " enter the number of elements in the array ";
    cin>>n;
    int arr[100];
    cout << " enter the elements";
    for (int t=0; t<n;t++)
    {
        cin>> arr[t];
    }
    cout<< " enter the sum ";
    cin>>x;
    int i=0,j=0,k=0;
    for (;i<n;i++)
    {
        j=i+1;
        for (;j<n;j++)
        {
            k=j+1;
            while (k<n)
            {
                if ( arr[i]+arr[j]+arr[k]==x)
                {
                    cout<< '\t'<< arr[i]<< '\t'<<arr[j]<< '\t'<< arr[k]<< '\n';
                    total++;
                }
                k++;
            }
        }
    }
    cout<< '\n'<< '\t'<<" number of pairs = "<<total;
}
