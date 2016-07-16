#include<iostream>
using namespace std;
void merg(int arr, int start, int last)
{
    int arr2[100];
    mid=(start+last)/2;
    int j=mid+1,k=start,i=0;
        for (;j<n && k<=mid;)
        {
            if (arr[j]>=arr[k])
            {
                arr2[i]=arr[k];
                k++;
            }
            else
            {
                arr2[i]=arr[j];
                j++;
            }
            i++;
        }
        for (;j<n;j++)
        {
            arr2[i]=arr[j];
            i++;
        }
        for (;k<=mid;k++)
        {
            arr2[i]=arr2[k];
            i++;
        }
}
void mergesort()
{

}
int main()
{

}
