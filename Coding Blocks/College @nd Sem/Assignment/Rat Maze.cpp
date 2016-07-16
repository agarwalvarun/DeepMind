#include<iostream>
using namespace std;
char CanMove(char mat[][100],int i,int j,int end_X,int end_Y,int N)
{
    if (i>=0 && j>=0 && i<N && j<N)
    {
        if (mat[i][j+1]==0 && j+1<N)
        {
            return 'R';
        }
        else if(mat[i+1][j]==0 && i+1<N)
        {
            return 'D';
        }
        else if (mat[i][j-1]==0 && j-1>=0)
        {
            return 'L';
        }
        else if (mat[i-1][j]==0 && i-1>=0)
        {
            return 'U';
        }
    }
    return 'N';
}
void printSolution(char mat[][100],int N)
{
    cout<< "------------------------------------------"<<endl;
    for (int i=0;i<N;i++)
    {
        for (int j=0;j<N;j++)
        {
            cout<< mat[i][j]<< "  ";
        }
        cout<< endl;
    }
    return;
}
bool RatMaze(char mat[][100], int i, int j,int end_X,int end_Y,int N)
{
    if (i==end_X && j==end_Y)
    {
        //printSolution(mat,N);
        return true;
    }
//    while (i>=0 && j>=0 && i<N && j<N)
//    {
        char ans=CanMove(mat,i,j,end_X,end_Y,N);
        if (ans=='R')
        {
            mat[i][j]=='R';
            RatMaze(mat,i,j+1,end_X,end_Y,N);
        }
        else if (ans=='D')
        {
            mat[i][j]=='D';
            RatMaze(mat,i+1,j,end_X,end_Y,N);
        }
        else if (ans=='L')
        {
            mat[i][j]=='L';
            RatMaze(mat,i,j-1,end_X,end_Y,N);
        }
        else if (ans=='U')
        {
            mat[i][j]=='U';
            RatMaze(mat,i-1,j,end_X,end_Y,N);
        }
        else if (ans=='N')
        {
            mat[i][j]=-1;
        }
//    }
    return false;
}
int main()
{
    char mat[100][100];
    int i=0,j=0,end_X,end_Y,N;
    cout<< "Enter the order of the Maze"<<endl;
    cin>> N;
    cout<< "Enter the Maze"<<endl;
    for (int i=0;i<N;i++)
    {
        for (int j=0;j<N;j++)
        {
            cin>>mat[i][j];
        }
    }
    cout<< "Enter the Ending Co-ordinates"<<endl;
    cin>> end_X >> end_Y;
    //mat[end_X][end_Y]='*';
    RatMaze(mat,i,j,end_X,end_Y,N);
    printSolution(mat,N);
    return 0;
}
