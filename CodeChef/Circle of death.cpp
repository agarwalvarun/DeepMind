#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
void formCircle(float x[],float y[],int i,int j,int k,float &centre_x,float &centre_y,float &rad)
{
    float m1,m2;
    if ((x[j]==x[i]))
    {
        m1=INT_MAX;
        m2=(y[k]-float(y[j]))/(x[k]-x[j]);
    }
    else if (x[k]==x[j])
    {
        m1=(y[j]-float(y[i]))/(x[j]-x[i]);
        m2=INT_MAX;
    }
    else
    {
        m1=(y[j]-float(y[i]))/(x[j]-x[i]);
        m2=(y[k]-float(y[j]))/(x[k]-x[j]);
    }
    centre_x=(m1*m2*(y[k]-y[i]) + m1*(x[j]+x[k]) - m2*(x[i]+x[j]))/(2*(m1-m2));
    if (m1==0)
    {
        centre_y=(y[j]+y[k])/2;
    }
    else if (m2==0)
    {
        centre_y=(y[j]+y[i])/2;
    }
    else
    {
        centre_y=(1/m1)*(((x[i]+x[j])/2) - centre_x) + (y[i]+y[j])/2;
    }
    rad=sqrt((x[i]-centre_x)*(x[i]-centre_x) + (y[i]-centre_y)*(y[i]-centre_y));
    return;
}
int main()
{
    int t,n;
    cin>>t;
    while (t--)
    {
        cin>>n;
        float x[n],y[n],totalways=(n-3)*(n*(n-1)*(n-2))/6;
        float rad,centre_x,centre_y,ans=0;
        for (int i=0;i<n;i++)
        {
            cin>>x[i]>>y[i];
        }
        for (int i=0;i<n-2;i++)
        {
            for (int j=i+1;j<n-1;j++)
            {
                for (int k=j+1;k<n;k++)
                {
                    if ((x[i]==x[j] && x[j]==x[k]) || (y[i]==y[j] && y[j]==y[k]))
                    {
                        continue;
                    }
                    formCircle(x,y,i,j,k,centre_x,centre_y,rad);
                    for (int l=0;l<n;l++)
                    {
                        if (l!=i && l!=j && l!=k && sqrt((x[l]-centre_x)*(x[l]-centre_x) + (y[l]-centre_y)*(y[l]-centre_y))<=rad)
                        {
//                            cout<<centre_x<< " "<<centre_y<< " "<<rad<<endl;
//                            cout<<i<< " "<<j<< " "<<k<< " "<<l<<endl;
                            ans++;
                        }
                    }
                }
            }
        }
        cout<<std::fixed<<std::setprecision(6)<<ans/totalways<<endl;
    }
    return 0;
}
