#include <stdio.h>

int main()
{
    float a,b,sum,avr;

    printf("Enter the first number:");
    scanf("%f",&a);
    printf("Enter the second number:");
    scanf("%f",&b);

    sum = a+b;

    avr = sum/2;

    printf("The average is %f\n",avr);

    return 0;
}
