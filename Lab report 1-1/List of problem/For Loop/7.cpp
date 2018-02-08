#include <stdio.h>

int main()
{
    int num,i,s=0;

    printf("Enter the number:");
    scanf("%d",&num);

    printf("The all divisor of %d is:",num);

    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            printf("%d ",i);
        }
    }

    return 0;
}
