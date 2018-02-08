#include <stdio.h>

int main()
{
    int num;
    float real;
    char ch;

    printf("Enter a integer,a floating point and a character:");
    scanf("%d %f %c",&num,&real,&ch);

    printf("\nThe integer is %d\n",num);
    printf("The floating point number is %f\n",real);
    printf("The character is %c\n",ch);

    return 0;
}
