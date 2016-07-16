#include<iostream>
using namespace std;
int main()
{
    int total=0;
    char prev_char, nxt_char;
    prev_char=' ';
    while (nxt_char!='$')
    {
        nxt_char=cin.get();
        if (prev_char==' ' && nxt_char>='a' && nxt_char<='z')
        {
            total++;
        }
        prev_char=nxt_char;
    }
    cout<< total;
    return 0;
}
