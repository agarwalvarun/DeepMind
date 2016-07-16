#include<iostream>
using namespace std;
bool isSafe(int mat[][9],int i, int j, int N)
{
    for (int col=0;col<N;col++)
    {
        if (mat[i][j]==mat[i][col] && j!=col)
        {
            return false;
        }
    }

    for (int row=0;row<N;row++)
    {
        if (mat[i][j]==mat[row][j] && i!=row)
        {
            return false;
        }
    }
    int k=(i/3)*3,l=(j/3)*3;
    for (int row=k;row<=k+2;row++)
    {
        for (int col=l;col<=l+2;col++)
        {
            if (mat[i][j]==mat[row][col])
            {
                if (row==i && col==j){}
                else
                {
                    return false;
                }
            }
        }
    }
    return true;
}
void printSudoku(int mat[][9], int N)
{
    cout<< endl<< "-----------------------------------------------------------------"<<endl;
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
bool Sudoku(int mat[][9],int row,int col,int N)
{
    if (col==9)
    {
        row++;
        col=0;
    }
    if (row==9)
    {
        return true;
    }
    if(mat[row][col]!=0)
    {
        if (Sudoku(mat,row,col+1,N))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    if(mat[row][col]==0)
    {
        for (int x=1;x<=9;x++)
                {
                    mat[row][col]=x;
                    bool z=isSafe(mat,row,col,N);
                    if (z)
                    {
                       if(Sudoku(mat,row,col+1,N))
                       {
                           return true;
                       }
                    }
                }
    }
    return false;
}
int main()
{
    int mat[9][9]={0};
   // int mat[9][9]={0,0,9,5,6,0,0,0,0,0,1,3,9,4,0,0,0,0,0,0,0,8,0,0,2,4,0,0,6,5,0,0,0,4,0,3,0,7,0,0,0,5,0,2,0,0,0,0,4,1,0,0,0,8,0,8,0,2,0,0,0,1,0,5,0,4,0,0,3,9,7,6,7,0,0,0,0,0,0,0,0};
    int i=0,j=0,N=9;
  /*  cout<< "enter the PUZZLE"<<endl;
    for (int i=0;i<N;i++)
    {
        for (int j=0;j<N;j++)
        {
           cin>> mat[i][j];
        }
    } */
    bool ans = Sudoku(mat,i,j,N);
    if (ans)
    {
        printSudoku(mat,N);
    }
    else
    {
        cout<< "Wrong Sudoku";
    }
    return 0;
}
