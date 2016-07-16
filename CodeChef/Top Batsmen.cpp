#include<iostream>
using namespace std;
void insertion_sort(int *scores)
{
    int minimum;
    for (int i=0,j0;i<11;i++)
    {
        minimum=scores[i];
        for (int j=i+1;j<11;j++)
        {
            if (minimum>scores[j])
            {
                minimum=scores[j];
                j0=j;
            }
        }
        if (scores[i]!=minimum)
        {
            int temp=scores[i];
            scores[i]=minimum;
            scores[j0]=temp;
        }
    }
}
void top_batsmen(int *scores,int k)
{
    int maximum=0;
    for (int i=10,j=0;j<k;i--,j++)
    {
        maximum+=scores[i];
    }
    cout<<maximum;
}
int main()
{
    int t;
    cin>>t;
    for (int i=0;i<t;i++)
    {
        int scores[11],k;
        for (int j=0;j<11;j++)
        {
            cin>> scores[j];
        }
        cin>>k;
        insertion_sort(scores);
        top_batsmen(scores,k);
    }
}
