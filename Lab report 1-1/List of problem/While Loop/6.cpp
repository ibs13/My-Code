#include <stdio.h>

int main()
{
    int num,i=1,s=0;

    printf("Enter the number:");
    scanf("%d",&num);

    while(i<=num)
    {
        if(num%i==0)
        {
            s++;
        }
        i++;
    }

    printf("The total number of the divisor of %d is %d\n",num,s);

    return 0;
}

