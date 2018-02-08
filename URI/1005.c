#include <stdio.h>

int main()
{
    float a,b,avg;

    scanf("%f",&a);
    scanf("%f",&b);

    avg=((3.5*a)+(7.5*b))/(3.5+7.5);

    printf("MEDIA = %.5f\n",avg);

    return 0;
}
