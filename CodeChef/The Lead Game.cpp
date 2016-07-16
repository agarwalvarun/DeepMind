#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>> t;
    int player1[t],player2[t],lead[t],lead_player[t],maximum=0,index;
    for (int i=0;i<t;i++)
    {
        cin >> player1[i] >> player2[i];
    }
    for (int i=1;i<t;i++)
    {
        player1[i]+=player1[i-1];
        player2[i]+=player2[i-1];
    }

    for (int i=0;i<t;i++)
    {
        lead[i]=player1[i]-player2[i];
        if (lead[i]>0)
        {
            lead_player[i]=1;
        }
        else
        {
            lead[i]*=(-1);
            lead_player[i]=2;
        }
        if (lead[i]>maximum)
        {
            maximum=lead[i];
            index=i;
        }
    }
    cout<< lead_player[index]<< ' '<<lead[index];
    return 0;
}
