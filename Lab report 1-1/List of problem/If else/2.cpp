#include <stdio.h>

int main()
{
    int year;

    printf("Enter the year:");
    scanf("%d",&year);

    printf("Is it leap year\n");

    if((year%4==0 && year%100!=0) || (year%100==0 && year%400==0))
    {
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    return 0;
}
