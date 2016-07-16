#include<iostream>
using namespace std;
bool isSafe(bool mat[][100], int i,int j,int N)
{
    for (int k=0;k<j;k++)
    {
        if (mat[i][k]==1)
        {
            return false;
        }
    }
    for (int k=i-1,l=j-1;k>=0 && l>=0;k--,l--)
    {
        if (mat[k][l]==1)
        {
            return false;
        }
    }
    for (int k=i+1,l=j-1;k<N && l>=0;k++,l--)
    {
        {
        if (mat[k][l]==1)
            return false;
        }
    }
    return true;
}
void printnQueen(bool mat[][100], int N)
{
    cout<< endl<< "-----------------------------------"<<endl;
    for (int i=0;i<N;i++)
    {
        for (int j=0;j<N;j++)
        {
            cout<< mat[i][j]<<"  ";
        }
        cout << endl;
    }
    return;
}
bool nQueen(bool mat[][100],int i, int j, int N,int &countSolution)
{
    if (j==N)
    {
        countSolution++;
 //       printnQueen(mat,N);
//      return true;
    }
    for (int i=0;i<N;i++)
    {
        bool z=isSafe(mat,i,j,N);
        if(z)
        {
            mat[i][j]=1;
            bool ans=nQueen(mat,i,j+1,N,countSolution);
            if (ans)
            {
                return true;
            }
            else
            {
                mat[i][j]=0;
            }
        }
    }
    return false;
}
int main()
{
    int i=0,j=0,N,countSolution=0;
    bool mat[100][100]={0};
    cout << "enter the value of N"<<endl;
    cin >> N;
        bool x=nQueen(mat,i,j,N,countSolution);
//        if(x)
//        {
//            printnQueen(mat,N);
//        }
//        else
//        {
//            cout<< "No Solution";
//        }
    cout<<endl<< "TOTAL NUMER OF SOLUTION = "<<countSolution;
    return 0;
}
