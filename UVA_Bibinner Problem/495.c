#include <stdio.h>
#define lli long long int

int main()
{
    lli b,c=0,d=1,i,a[5001];

    a[0] = 0;
    a[1] = 1;

    for(i=2;i<=5000;i++){
            a[i] = c + d;
            c = d;
            d = a[i];
        }

    while(scanf("%lld",&b)==1){
        printf("The Fibonacci number for %lld is %lld\n",b,a[b]);
    }

    return 0;
}
