#include <stdio.h>

int main()
{
    int a;

    printf("Enter the achieving number:");
    scanf("%d",&a);

    if(a>100)
    {
        printf("Invalid input");
    }
    else if(a>=80)
    {
        printf("You got A+");
    }
    else if(a>=75)
    {
        printf("You got A");
    }
    else if(a>=70)
    {
        printf("You got A-");
    }
    else if(a>=65)
    {
        printf("You got B+");
    }
    else if(a>=60)
    {
        printf("You got B");
    }
    else if(a>=55)
    {
        printf("You got B-");
    }
    else if(a>=50)
    {
        printf("You got C+");
    }
    else if(a>=45)
    {
        printf("You got C");
    }
    else if(a>=40)
    {
        printf("You got D");
    }
    else
    {
        printf("You got F");
    }

    return 0;
}
