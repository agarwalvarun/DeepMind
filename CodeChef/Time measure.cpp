#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    int t;
    float a,angle,x;
    cin>>t;
    while (t--)
    {
           cin>>a;
           for (int m=0,h=0,mm,hh;m<720;m++)
           {
               angle=abs((float((m%60)*6))-(m*.5));
               if (angle>180)
               {
                   angle=360-angle;
               }
               x=abs(a-angle);
               if(x<=(float(1)/120))
               {
                   mm=m%60;
                   hh=m/60;
             //      cout<<angle<< " "<<x<< " "<<m<<endl;
                   cout<<setw(2)<<setfill('0')<<hh<< ':'<<setw(2)<<setfill('0')<<mm<<endl;
               }
           }
    }
    return 0;
}
