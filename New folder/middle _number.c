#include <stdio.h>

int main()
{
    int a,b,c;

    printf("Enter the 1st number: ");
    scanf("%d",&a);
    printf("\nEnter the 2nd number: ");
    scanf("%d",&b);
    printf("\nEnter the 3rd number: ");
    scanf("%d",&c);

    if((a>b && b>c) ||(a<b && b<c))
    {
        printf("\nThe middle number is: %d\n",b);
    }

    else if((b<a && a<c) || (b>a && a>c))
    {
        printf("\nThe middle number is: %d\n",a);
    }

    else if((a>c && b<c) || (a<c && b>c))
    {
        printf("\nThe middle number is: %d\n",c);
    }

    return 0;
}
