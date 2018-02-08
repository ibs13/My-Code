#include <stdio.h>

int main()
{
    long long int n,k,p,m,s,t,d;

    while(scanf("%lld %lld",&n,&k)==2)
    {
        s = 0;
        m = n;

        while(n>=k)
        {
            p = n/k;
            d = n%k;

            s = s+p;

            n = p+d;
        }

        t = m+s;

        printf("%lld\n",t);
    }

    return 0;
}
