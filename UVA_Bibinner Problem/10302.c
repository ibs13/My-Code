#include <stdio.h>
#include <math.h>

int main()
{
    long long int x,s,i,r;

    while(scanf("%lld",&x)==1)
    {
        s=0;

        for(i=x;i>0;i--)
        {
            r = pow(i,3);

            s =s +r;
        }

        printf("%lld\n",s);
    }

    return 0;
}
