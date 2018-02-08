#include <stdio.h>

int main()
{
    int i=1,sum=0;

    while(i<=100)
    {
        sum = sum + i;

        i++;
    }

    printf("The summation of 1 to 100 is %d\n",sum);

    return 0;
}



