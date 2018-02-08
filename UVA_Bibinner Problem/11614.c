#include <stdio.h>

int main()
{
    long long int t,n,p,i;

    scanf("%lld",&t);

    while(t--)
    {
        scanf("%lld",&n);

        for(i=0;p<=n+i;i++){
            p = (i*(i+1))/2;
        }

        printf("%lld\n",i-1);
    }

    return 0;
}
