#include<iostream>
using namespace std;
int arr[600000];
void mergeSort(int arr[],int low,int mid,int high){

    int i,m,k,l,temp[high];

    l=low;
    i=low;
    m=mid+1;

    while((l<=mid)&&(m<=high)){

         if(arr[l]<=arr[m]){
             temp[i]=arr[l];
             l++;
         }
         else{
             temp[i]=arr[m];
             m++;
         }
         i++;
    }

    if(l>mid){
         for(k=m;k<=high;k++){
             temp[i]=arr[k];
             i++;
         }
    }
    else{
         for(k=l;k<=mid;k++){
             temp[i]=arr[k];
             i++;
         }
    }

    for(k=low;k<=high;k++){
         arr[k]=temp[k];
    }
}

void part(int arr[],int low,int high){

    int mid;
    if(low<high){
         mid=(low+high)/2;
         part(arr,low,mid);
         part(arr,mid+1,high);
         mergeSort(arr,low,mid,high);
    }
}
int main()
{
    int t,n,temp;
    cin>>t;
    for (int i=0;i<t;i++)
    {
        cin>>n;
        for (int j=0;j<n;j++)
        {
            cin>>arr[j];
        }
        part(arr,0,n-1);
        for (int j=1;j+1<n;j+=2)
        {
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
        for (int j=0;j<n;j++)
        {
            cout<<arr[j]<<" ";
            if (j==n-1)
            {
                cout<<endl;
            }
        }
    }
    return 0;
}
