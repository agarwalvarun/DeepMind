#include<iostream>
using namespace std;
int main()
{
    float a,b,c;
    float x0,x1;

    cout<< "enter coefficient of x^2"<<'\n';
    cin>>a;
    cout<< "enter coefficient of x"<<'\n';
    cin>>b;
    cout<< "enter constant"<<'\n';
    cin>>c;

    float n=(b*b)-(4*a*c);

    float root1,root2;

    if(n>0)
    {
        x0=n/2;
        x1=x0-(((x0*x0)-n)/(2*x0));

    while (x0-x1>=.0005 || x1-x0>=.0005)
    {

        x0=x1;

        x1=x0-(((x0*x0)-n)/(2*x0));
    }
    root1=((-b)+x1)/(2*a);
    root2=((-b)-x1)/(2*a);
    cout<< "roots are real" << '\n'<< "Roots are "<<root1<< '\t' <<root2;
    }

    else if(n==0)
        {
        root1=root2=-b/(2*a);
        cout<< "roots are real" << '\n'<< "Roots are "<<root1<< '\t' <<root2;
        }
    else
    {
        cout<< '\n'<<"roots are non real";

    }
    return 0;
}
