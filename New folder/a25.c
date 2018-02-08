#include <stdio.h>
int main()
{
    double a1,b1,c1,a2,b2,c2,d,x,y;

    printf("Enter the 1st equaton's co-efficients and constant:\n");
    scanf("%lf %lf %lf",&a1,&b1,&c1);

    printf("Enter the 2nd equaton's co-efficients and constant:\n");
    scanf("%lf %lf %lf",&a2,&b2,&c2);

    d=a1*b2-a2*b1;

    x=(b2*c1-b1*c2)/d;
    y=(a1*c2-a2*c1)/d;

    if((int)d==0)
    {
        printf("The value of x and y are not determind");
    }

    else
    {
        printf("The value of x and y are: \n x=%.2lf \n y=%.2lf",x,y);
            }

    return 0;
}
