#include <stdio.h>
#include <math.h>

int main()
{
    long long int s,f;
    double a,n;

    while(scanf("%lld",&s)!=EOF)
    {
    n = sqrt(s);

    f = roundf(n);

    printf("%lld\n",f);
    }

    return 0;
}
