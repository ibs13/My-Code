#include <stdio.h>

int main()
{
    long long int n;

    while(scanf("%lld",&n)!=EOF)
    {
        if((n%4!=0 && n%15!=0 && n%55!=0) || (n%4==0 && n%100==0 && n%400!=0 && n%15!=0 && n%55!=0))
        {
            printf("This is an ordinary year.\n");
        }
        else{
            if(n%4==0 && n%100!=0)
            {
                printf("This is a leap year.\n");
            }

            else if(n%100==0 && n%400==0)
            {
                printf("This is leap year.\n");
            }

            if(n%15==0)
            {
                printf("This is huluculu festival yaer.\n");
            }

            if(n%55==0)
            {
                printf("This is bulukulu festival year.\n");
            }
        }

        printf("\n");
    }

    return 0;
}
