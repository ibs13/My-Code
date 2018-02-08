#include<stdio.h>

int main()
{
    int ara[5]={3,7,9,5,76};

    printf("First element: %d\n",ara[-1]);
    printf("Second element: %d\n",ara[100]);
    printf("Third element: %d\n",ara[50]);

    return 0;
}
