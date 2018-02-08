#include <stdio.h>

int main()
{
    int num,i,s=0;

    printf("Enter the number:");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            s++;
        }
    }

    printf("The total number of the divisor of %d is %d\n",num,s);

    return 0;
}
