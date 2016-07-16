#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"number of elements in series";
    cin>> n;
    int array1[100],array2[100],array3[200];
    cout<< "enter the 1st series" <<'\n';
    for (int i=0; i<n; i++)
    {
        cin>> array1[i];
    }
    cout<< "enter the 2nd series" <<'\n';
    for (int j=0; j<n; j++)
    {
        cin>> array2[j];
    }
    int i=0,j=0,k=0;
    while (i<n && j<n)
    {
        if (array1[i]<=array2[j])
        {
            array3[k]=array1[i];
            k++;
            i++;
        }
        else if (array1[i]>=array2[j])
        {
            array3[k]=array2[j];
            k=k+1;
            j=j+1;
        }
        if (i==n)
        {
            while (j<n)
            {
                array3[k]=array2[j];
                k++;
                j++;
            }
        }
        else if (j==n)
        {
            array3[k]=array1[i];
                k++;
                i++;
        }


            cout << "3" << '\t'<<"4";

       //  int t=(array3[(n)]+ array3[(n+1)])/2;
        // cout << " median is " << t  ;
        return 0;
    }


}
