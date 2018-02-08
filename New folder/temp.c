#include <stdio.h>

int main()
{
    float c,f;

    printf("Enter the temperature in degree : ");
    scanf("%f",&c);

    f=(((c/5)*9)+32);

    printf("The temperature in fahrenheit is :%f \n",f);

    return 0;
}
