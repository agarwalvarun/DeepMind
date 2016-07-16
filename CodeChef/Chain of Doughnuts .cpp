#include<iostream>
//#include<algorithm>
using namespace std;
int main()
{ios_base::sync_with_stdio(false);
    long long int n,t,x,m,count_one=0,spaces=0,ans=0;


    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        long long int arr[m];
        count_one=0;
        ans=0;
        for (long long int i=0,j=0;i<m;i++)
        {
            cin>>x;
            if (x==1)
            {
                count_one++;
            }
            else
            {
                arr[j]=x;
                j++;
            }
        }
        x=m-count_one;
  //      sort(arr,arr+x);
        spaces=m-1;
        while (count_one)
        {
            if (spaces-2<0)
            {
                break;
            }
            spaces-=2;
            count_one--;
            ans++;
        }
        if (spaces==1)
        {
            ans++;
        }
        else if (spaces !=0)
        {
            ans+=(spaces-(spaces/3));
        }
    //    ans+=spaces;
        cout<<ans<<endl;
    }
    return 0;
}
