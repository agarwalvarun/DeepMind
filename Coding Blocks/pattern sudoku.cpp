#include<iostream>
using namespace std;
int main() {
int row=1, spaces;
int n;
cin>> n;
while (row<n)
{
    spaces=0;
    while (spaces <= n-row-1 )
    {
                cout<< " ";
                spaces=spaces+1;

    }
    int j=row;
    while (j<2*(row)+1)
    {
        cout <<j+1;
        j=j+1;

    }
    row = row + 1;
}
return 0;
}
