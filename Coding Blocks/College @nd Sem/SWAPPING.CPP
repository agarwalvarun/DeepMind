#include<iostream>
using namespace std;
int  main()
{
    int n,arr[100];
    cin>> n;
    cout<<"enter the numbers";
    for(int i=0; i<n; i++)
    {
        cin>> arr[i];
    }
    int i=0,j=0,temp;
    while (i<n)
    {
        j=i;
        while (j<n)
        {
            if (arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                break;
            }
            else
            {
                j++;
            }
        }
        i++;
    }

    for (int k=0; k<n; k++)
    {
        cout<< '\n'<< arr[k]<< '\n';
    }
    return 0;
}
