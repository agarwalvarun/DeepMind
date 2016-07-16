#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<< "enter the number of rows";
    cin>> n;
    cout<< "enter the number of columns";
    cin>> m;
    int arr[n][m];
    for (int row=0;row<n;row++)
    {
        cout<< "enter row number "<< row+1<<endl;
        for (int col=0;col<m;col++)
        {
            cin >> arr[row][col];
        }
    }
    int sum_rnew=0,sum_rold=0,row_num;
    for (int row=0;row<n;row++)
    {
        for (int col=0;col<m;col++)
        {
            sum_rnew=sum_rnew+arr[row][col];
        }
        if(sum_rnew>sum_rold)
        {
            row_num=row;
            sum_rold=sum_rnew;
        }
        sum_rnew=0;
    }

    int sum_cnew=0,sum_cold=0,col_num;
    for (int col=0;col<m;col++)
    {
        for (int row=0;row<n;row++)
        {
            sum_cnew=sum_cnew+arr[row][col];
        }
        if (sum_cnew>sum_cold)
        {
            col_num=col;
            sum_cold=sum_cnew;
        }
        sum_cnew=0;
    }

    if (sum_rold>sum_cold)
    {
        cout<<"sum is "<< sum_rold<<endl;
        cout<< "row number "<<(row_num+1);
    }
    else
    {
        cout<<"sum is "<< sum_cold<<endl;
        cout<< "column number "<<(col_num+1);
    }
    return 0;
}
