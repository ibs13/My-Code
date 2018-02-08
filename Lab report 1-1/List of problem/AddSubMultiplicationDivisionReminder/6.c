#include <stdio.h>

int main()
{
    float high,bas,area;

    printf("Enter the base of the rectangle:");
    scanf("%f",&bas);
    printf("Enter the height of the rectangle:");
    scanf("%f",&high);

    area = (high * bas)/2;

    printf("The area of the triangle is %.3f\n",area);

    return 0;
}

