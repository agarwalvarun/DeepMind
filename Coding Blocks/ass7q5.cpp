#include<iostream>
using namespace std;
void multiply(int mat1[][100],int mat2[][100],int r1,int r2,int c1,int c2)
{
    int mat3[100][100]={0};
    for (int i=0,i1=0,j2=0;i1<r1;i1++,j2++,i++)
    {
        for (int j=0;j<c2;j++)
        {
            for (int j1=0,i2=0;j1<c1;j1++,i2++)
            {
                mat3[i][j]=mat3[i][j]+mat1[i1][j1]*mat2[i2][j2];
            }
        }
    }
    for (int i=0;i<r1;i++)
    {
        for (int j=0;j<c2;j++)
        {
            cout<< mat3[i][j]<<'\t';
        }
        cout<< endl;
    }
}
int main()
{
    int mat1[100][100],mat2[100][100],r1,r2,c1,c2;
    cout<< "enter the order of 1st matrix (row X column)"<< endl;
    cin>> r1>>c1;
    cout<< "enter the order of 2nd matrix (row X column)"<< endl;
    cin>> r2>>c2;
    if(c1==r2)
    {
        cout<< "enter the first matrix"<< endl;
        for (int i=0;i<r1;i++)
        {
            for (int j=0;j<c1;j++)
            {
                cin>> mat1[i][j];
            }
        }
        cout<< "enter the second matrix"<< endl;
        for (int i=0;i<r2;i++)
        {
            for (int j=0;j<c2;j++)
            {
                cin>> mat2[i][j];
            }
        }
        cout<< endl;
        multiply(mat1, mat2,r1,r2,c1,c2);
    }
    else
    {
        cout<< "invalid";
    }
    return 0;
}
