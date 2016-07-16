#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>> n;

    for (int row=1;row<=n; row=row+1)
    {
        char alpha='A';
        for (int val=1; val<=n-row+1;val=val+1)
            {
                cout<< alpha;
                alpha=alpha+1;
            }
            alpha=alpha-1;
            char beeta;
            beeta=alpha;

            for (int val=1;val<=n-row+1; val=val+1)
            {
                cout<< beeta;
                beeta=beeta-1;

            }
            cout<< '\n';

    }

    return 0;
}
