#include <stdio.h>

int main()
{
    double a1,a2,b1,b2,c1,c2,x,y;

    printf("Enter the equation's coefficient and constant is:");
    scanf("%lf %lf %lf",&a1,&b1,&c1);

    printf("Enter the equation's coefficient and constant is:");
    scanf("%lf %lf %lf",&a2,&b2,&c2);

    x=(b2*c1-b1*c2)/(a1*b2-a2*b1);
    y=(a1*c2-a2*c1)/(a1*b2-a2*b1);

    printf("The value of x and y is :%.2lf & %.2lf",x,y);

    return 0;
}
