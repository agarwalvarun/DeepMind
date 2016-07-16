#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int t,n,k;
    cin>>t;
    while(t--)
    {
        scanf("%d %d",&n,&k);
        int arr[100001];
        bool flag=1;
        if (k==n)
        {
            cout<< "-1";
            continue;
        }
        for(int i=k+1,j=1;j<=n;i++,j++)
        {
            arr[j]=i;
//            for (int i=1;i<=n;i++)
//            {
//                printf("%d ",arr[i]);
//            }
//            printf("\n");
            if (i==n)
            {
                i=0;
            }
//            if (arr[j]>j-k && arr[j]<j+k)
//            {
//                cout<<arr[j]<<endl;
//                flag=false;
//                break;
//            }
        }
        if (flag)
        {
            for (int i=1;i<=n;i++)
            {
                printf("%d ",arr[i]);
            }
            printf("\n");
        }
        else
        {
            printf("-1\n");
        }

    }
}
