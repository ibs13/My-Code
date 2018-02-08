#include<stdio.h>

int main()
{
    int n,i,sum=0;

    printf("How many number:\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
       sum=sum+((8*i)-4);
    }

    printf("The Summation of the series is:%d",sum);

    return 0;
}

