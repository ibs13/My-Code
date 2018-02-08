#include <stdio.h>

int main()
{
    float F,C;

    printf("Enter the temperature in Celsius scale:");
    scanf("%f",&C);

    F = ((9*C)/5) + 32;

    printf("The temperature in Fahrenheit scale is %f\n",F);

    return 0;
}
