#include <stdio.h>

int main()
{
    float a,b,c,avg;

    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);

    avg=((a*2)+(b*3)+(c*5))/10;

    printf("MEDIA = %.1f\n",avg);

    return 0;
}
