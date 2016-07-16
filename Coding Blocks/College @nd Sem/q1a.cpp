#include<stdio.h>
#include<math.h>
int main()
{
    float length, breadth;
    printf("Enter length rectangle:  \n") ;
    scanf("%f",&length);
    printf("Enter breadth rectangle:  \n") ;
    scanf("%f",&breadth);
    float area=length*breadth;
    printf("Area of rectangle is %g.\n",area);
    float a,b,c;
    printf("\nEnter the sides of triangle:");
    scanf("%f%f%f",&a,&b,&c);
    float s=(a+b+c)/2;
    float t=s*(s-a)*(s-b)*(s-c);
    float ar=sqrt(t);
    printf("Area of triangle is %g \n",ar);
    return 0;
}
