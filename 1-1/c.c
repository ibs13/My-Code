#include <stdio.h>

int main()
{
    int a,b,c;

    printf("The first number is: ");
    scanf("%d",&a);

    printf("The second number is: ");
    scanf("%d",&b);

    c=a+b;

    printf("The addition of a & b is:%d\n",c);

    c=a-b;

    printf("The subtraction of a & b is:%d\n",c);

    c=a*b;

    printf("The multiplication of a & b is:%d\n",c);

    c=a/b;

    printf("The division of a & b is:%d\n",c);

    c=a%b;

    printf("The modulo division of a & b is:%d\n",c);

    return 0;
}
