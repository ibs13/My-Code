#include <stdio.h>

int main()
{
    int a,b,c;

    printf("Enter the first number:");
    scanf("%d",&a);

    printf("Enter the second number:");
    scanf("%d",&b);

    printf("Enter the third number:");
    scanf("%d",&c);

    if(a>b && a>c && b>c)
    {
        printf("The middle number is %d\n",b);

    }
    else if(b>a && b>c && a>c)
    {
        printf("The middle number is %d\n",a);

    }
    else if(a>c && a>b && c>b)
    {
        printf("The middle number is %d\n",c);
    }
    else if(c>b && c>a && a>b)
    {
        printf("The middle number is %d\n",a);
    }
    else if(c>a && c>b && b>a)
    {
        printf("The middle number is %d\n",b);
    }
    else if(b>a && b>c && c>a)
    {
        printf("The middle number is %d\n",c);
    }

    return 0;

}

