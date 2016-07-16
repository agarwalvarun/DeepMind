#include<iostream>
using namespace std;
int main()
{
    int n,x=0;
    cout<< "enter the value of n";
    cin>> n;
    cout<< "enter the (2n+1) numbers";
    int array1[2*n+1];
    for (int i=0; i<2*n+1; i++)
    {
        cin>> array1[i];
    }
    int i=0,j=0;

        while (i<2*n+1)
        {
            j=0;
            while (j<2*n+1)
            {
                if (j!=i && array1[i]==array1[j])
                {
                    break;
                }
                else
                {
                    j++;
                }

            }
            if (j==2*n+1)
                {
                    x=array1[i];
                    cout << '\n'<< x;
                    return 0;
                }
            i++;
        }

    return 0;
}
