#include<iostream>
#include<math.h>
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
        x1=sqrt(n);
    root1=((-b)+x1)/(2*a);
    root2=((-b)-x1)/(2*a);
    cout<< "roots are real" << '\n'<< "Roots are "<<root1<< '\t' <<root2;
    }

    else if(n==0)
        {
        root1=root2=-b/(2*a);
        cout<< "roots are real" << '\n'<< "Roots are "<<root1<< '\t' <<root2;
        }
        else if (n<0)
        {
            n=(-1)*n;
            x1=sqrt(n);
            cout<< (-1)*b/(2*a)<<'\t'<<" + i"<< x1/(2*a)<<'\n';
            cout<< (-1)*b/(2*a)<<'\t'<<" - i"<< x1/(2*a);
        }
    else
    {
        cout<< '\n'<<"roots are non real";

    }
    return 0;
}
