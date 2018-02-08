#include <stdio.h>

int main()
{
    int a;

    printf("Enter the achieving number:");
    scanf("%d",&a);

    if(a>=80 && a<=100)
    {
        printf("You got A+\n");
    }
    else if(a>=70 && a<80)
    {
        printf("You got A\n");
    }
    else if(a>=60 && a<70)
    {
        printf("You got B\n");
    }
    else if(a>=50 && a<60)
    {
        printf("You got C\n");
    }
    else if(a>=40 && a<50)
    {
        printf("You got D\n");
    }
    else
    {
        printf("You got Fail\n");
    }

    return 0;
}

