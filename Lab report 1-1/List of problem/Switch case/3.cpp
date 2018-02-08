#include <stdio.h>

int main()
{
    int a,b,n;

    printf("Enter the two numbers:");
    scanf("%d %d",&a,&b);

    printf("What operation do you want to operate:");
    printf("\n\tPress 1 to addition\n\tPress 2 to subtraction\n\tPress 3 to multiplication\n\tPress 4 to division\n");
    scanf("%d",&n);

    switch(n)
    {
    case 1:
        printf("The addition of two number is %d\n",a+b);
        break;

    case 2:
        printf("The subtraction of two number is %d\n",a-b);
        break;

    case 3:
        printf("The multiplication of two number is %d\n",a*b);
        break;

    case 4:
        printf("The division of two number is %d\n",a/b);
        break;
    }

    return 0;
}
