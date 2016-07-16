#include<iostream>
using namespace std;
int solution()
{
    if
}
int main()
{
    int x,y,z,a=5,b=10,c=25;

}




    int a=i+1,b=j+1;
    if (a==9 && b==9)
    {
        return true;
    }
    for (int i=0;i<N;i++)
    {
        for (int j=0;j<N;j++)
        {
            if (mat[i][j]==0)
            {
                for (int x=1;x<=9;x++)
                {
                    mat[i][j]=x;
                    bool z=isSafe(mat,i,j,N);
                    if (z)
                    {
                       if( Sudoku(mat,i,j,N))
                       {
                           return true;
                       }
                    }

                }
            }
        }
    }
