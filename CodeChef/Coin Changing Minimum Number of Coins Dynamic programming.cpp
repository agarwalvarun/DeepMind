#include<bits/stdc++.h>
using namespace std;
void coins(int total,int denom[],int arr[][100001],int length)
{
    for (int row=0;row<length;row++)
    {
        for (int col=0;col<total+1;col++)
        {
            if (row==0)
            {
                if (col%denom[row]==0)
                {
                    arr[row][col]=col/denom[row];
                }
            }
            else
            {
                if (col<denom[row])
                {
                    arr[row][col]=arr[row-1][col];
                }
                else if (col==denom[row])
                {
                    arr[row][col]=1;
                }
                else if (arr[row][col-denom[row]]==0 && arr[row-1][col]!=0)
                {
                    arr[row][col]=arr[row-1][col];
//                    cout<<row<<" "<<col<<endl;
                }
                else if (arr[row][col-denom[row]]!=0 && arr[row-1][col]==0)
                {
                    arr[row][col]=arr[row][col-denom[row]]+1;
                }
                else if (arr[row][col-denom[row]]!=0 && arr[row-1][col]!=0)
                {
                    arr[row][col]=min(arr[row][col-denom[row]]+1,arr[row-1][col]);
                 //   cout<<row<<" "<<col<<endl;
                }
                else
                {
                    arr[row][col]=0;
                }
            }
        }
    }
    return;
}
int main()
{
    int total,length;
    cout<< "Enter the total"<<endl;
    cin>>total;
    cout<< "Enter the number of denominations"<<endl;
    cin>>length;
    cout<< "Enter the denominations"<<endl;
    int denom[length],arr[length][100001];
    for (int i=0;i<length;i++)
    {
        cin>> denom[i];
    }
    coins(total,denom,arr,length);
//    for (int row=0;row<length;row++)
//    {
//        for (int col=0;col<total+1;col++)
//        {
//            cout<<arr[row][col]<< " ";
//        }
//        cout<<endl;
//    }
    cout<<arr[length-1][total]<<endl;
    return 0;
}

