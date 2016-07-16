#include<iostream>
using namespace std;
int main()
{
    char ch;
    ch=cin.get();
    int digits=0,whitespaces=0,otherchar=0;
    while (ch!='$')
    {

        if (ch>=48 && ch<=57)
        {
            digits=digits+1;
        }
        else if (ch==' ' || ch=='\n' || ch=='\t')
        {
            whitespaces=whitespaces+1;
        }
        else
        {
            otherchar=otherchar+1;
        }
        ch=cin.get();
    }
    cout<< "digits="<<digits <<'\n' << "whitespaces="<<whitespaces <<'\n' << "otherchar="<<otherchar;
    return 0;

}
