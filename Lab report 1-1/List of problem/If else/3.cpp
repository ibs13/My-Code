#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number:");
    scanf("%d",&num);

    if(num>0)
    {
        printf("Positive\n");
    }
    else if(num<0)
    {
        printf("Negative\n");
    }

    return 0;
}

