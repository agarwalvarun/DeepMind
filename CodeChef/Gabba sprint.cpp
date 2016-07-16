#include<iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    int t,n,m,s,p,q;
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>s>>p>>q;
        int virat[s],rohit[s],ans=0;
        for (int l=0,i=1,x,y,diff;l<s;l++)
        {
            diff=n-i;
            if (p<=(n-m+1))
            {
                if (diff>=p)
                {
                    i+=p;
                }
                else
                {
                    i=m;
                    i+=(p-diff-1);
                }
            }
            else
            {
                if (l==0)
                {
                    x=p;
                    while (i<m)
                    {
                        i++;
                        x--;
                       // cout<<x<<"a"<<endl;
                    }
                    i+=(x%(n-m+1));
                //    cout<<i<<"q"<<endl;
                }
                else
                {
                    diff=n-i;
                    y=p%(n-m+1);
                    while (y--)
                    {
                        i++;
                        if (i==n+1)
                        {
                            i=m;
                        }
                    }
                }
            }
            virat[l]=i;
        }
        for (int l=0,i=1,x,y,diff;l<s;l++)
        {
            diff=n-i;
            if (q<=(n-m+1))
            {
                if (diff>=q)
                {
                    i+=q;
                }
                else
                {
                    i=m;
                    i+=(q-diff-1);
                }
            }
            else
            {
                if (l==0)
                {
                    x=q;
                    while (i<m)
                    {
                        i++;
                        x--;
                       // cout<<x<<"a"<<endl;
                    }
                    i+=(x%(n-m+1));
                //    cout<<i<<"q"<<endl;
                }
                else
                {
                    diff=n-i;
                    y=q%(n-m+1);
                    while (y--)
                    {
                        i++;
                        if (i==n+1)
                        {
                            i=m;
                        }
                    }
                }
            }
            rohit[l]=i;
        }
        for (int i=0;i<s;i++)
        {
           // cout<< virat[i]<< " "<<rohit[i]<<endl;
            if (virat[i]==rohit[i])
            {
                ans++;
            }
        }
        cout<<ans<<endl;
    }
        return 0;
}
