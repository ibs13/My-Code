#include <stdio.h>

int main()
{
    long long int t,a,b,i,p,r,k,ca=1,s;

    scanf("%lld",&t);

    while(t--)
    {
        k =0;
        scanf("%lld %lld",&a,&b);

        i = a;

        while(i<=b)
        {
            s = i;
            p = 0;
            while(s!=0)
            {
                r = s%10;
                p = (10*p)+r;
                s = s/10;
            }

            if(p<=b && p>=a)
            {
                k++;
            }
            i++;
        }

        printf("Case %lld: %lld\n",ca++,k);
    }

    return 0;
}
