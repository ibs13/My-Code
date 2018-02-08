#include <stdio.h>

int main()
{
    long long int n,m,p,ca=1;;

    while(scanf("%lld",&n)!=EOF)
    {
        printf("%4d. ",ca++);

        if(n==0){
            printf("0\n");
        }
        else{
             p = 0;
        if(n>=10000000){
            p = 1;
        }
        if(n>=100000000000000){
            m = n / 100000000000000;
            n = n % 100000000000000;
            printf("%lld kuti ",m);
        }
        if(n>=1000000000000){
            m = n / 1000000000000;
            n = n % 1000000000000;
            printf("%lld lakh ",m);
        }
        if(n>=10000000000){
            m = n / 10000000000;
            n = n % 10000000000;
            printf("%lld hajar ",m);
        }
        if(n>=1000000000){
            m = n / 1000000000;
            n = n % 1000000000;
            printf("%lld shata ",m);
        }
        if(n>=10000000){
            m = n / 10000000;
            n = n % 10000000;
            printf("%lld ",m);
        }
        if(p==1){
            printf("kuti");
            if(n!=0){
                printf(" ");
            }
        }
        if(n>=100000){
            m = n / 100000;
            n = n % 100000;
            printf("%lld lakh",m);
            if(n!=0){
                printf(" ");
            }
        }
        if(n>=1000){
            m = n / 1000;
            n = n % 1000;
            printf("%lld hajar",m);
            if(n!=0){
                printf(" ");
            }
        }
        if(n>=100){
            m = n / 100;
            n = n % 100;
            printf("%lld shata",m);
            if(n!=0){
                printf(" ");
            }
        }
        if(n<100){
            m = n % 100;
            if(n!=0)
            printf("%lld",m);
        }
        printf("\n");
        }
    }

    return 0;
}
