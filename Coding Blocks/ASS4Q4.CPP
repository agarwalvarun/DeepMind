#include<iostream>
using namespace std;
int main()
{
    int array1[5], array2[5];
    cout<< "enter the first series"<< '\n';
    for (int i=0;i<5;i++)
    {
        cin>> array1[i];
    }
    cout<< "enter the second series"<< '\n';
    for (int i=0;i<5;i++)
    {
        cin>> array2[i];
    }
    int i=0, j=0;
    while (i<5)
    {
        j=0;
        while (j<5)
        {
            if (array2[j]==array1[i])
            {
                cout << '\n'<< array1[i];
                break;
            }
            j++;
        }
        i++;
    }
    return 0;
}
