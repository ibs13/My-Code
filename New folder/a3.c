#include<stdio.h>
int main()
{
    int a;

    printf("Enter any number:");
    scanf("%d",&a);

    if(a>0)
    {
        printf("The number is positive");
}
    else if(a==0)
    {
        printf("The number is neutral:");
    }
    else{
        printf("THe number is negative");
    }

    return 0;
}
