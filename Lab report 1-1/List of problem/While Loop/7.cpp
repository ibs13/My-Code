#include <stdio.h>

int main()
{
    int num,i=1,s=0;

    printf("Enter the number:");
    scanf("%d",&num);

    printf("The all divisor of %d is:",num);

    while(i<=num)
    {
        if(num%i==0)
        {
            printf("%d ",i);
        }
        i++;
    }

    return 0;
}

