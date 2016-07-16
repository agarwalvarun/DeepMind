#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int hh,mm,a,add_h,add_m,ans_h,ans_m;
    char input[6];
    cin.getline(input,6);
    hh=((int)input[0]-48)*10+((int)input[1]-48);
    mm=((int)input[3]-48)*10+((int)input[4]-48);
    cin>>a;
    add_m=a%60;
    add_h=(a-add_m)/60;
    if(add_h+hh<=23)
    {
        ans_h=add_h+hh;
    }
    else
    {
        ans_h=add_h-(23-hh)-1;
    }
    if(add_m+mm<60)
    {
        ans_m=add_m+mm;
    }
    else
    {
        ans_m=add_m-(60-mm);
        ans_h++;
    }
    if(ans_h>23)
    {
        ans_h=ans_h-24;
    }
    cout<<setw(2)<<setfill('0')<<ans_h<< ':'<<setw(2)<<setfill('0')<<ans_m;
}
