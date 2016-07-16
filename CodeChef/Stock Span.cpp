#include<iostream>
#include<stack>
using namespace std;
void func(int *arr,int n)
{
    int x=0,span=1;
    stack<int> S1;
    for (int i=0,j;i<n;i++)
    {
        x=0;
        j=0;
        span=1;
        while (j!=i+1)
        {
            if (arr[j]<=arr[i])
            {
                S1.push(arr[j]);
                x++;
            }
            else
            {
                while (!S1.empty())
                {
                    S1.pop();
                }
            }
            if (span<=x)
            {
                span=x;
            }
            j++;
        }
        cout<< span<<endl;
    }
    return;
}
int main()
{
    int n;
    cin>> n;
    int arr[n];
    for (int i=0;i<n;i++)
    {
        cin>> arr[i];
    }
    func(arr,n);
    return 0;
}
