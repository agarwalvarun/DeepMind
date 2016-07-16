#include<stdio.h>
int main()
{
    int n,a,sum=0;
    printf("Enter the number : \n");
    scanf("%d",&n);
    while (n>0)
    {
        a=n%10;
        sum+=a;
        n=n/10;
    }
    printf("Sum =  %d", sum);
    return 0;
}
