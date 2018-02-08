#include <stdio.h>

int main()
{
    long int t,n,a,b,c,s,p,i;

    scanf("%ld",&t);

    while(t--)
    {
        s = 0;

        scanf("%ld",&n);

        for(i=0;i<n;i++)
        {
            scanf("%ld %ld %ld",&a,&b,&c);

            p = a*c;

            s = s+p;
        }

        printf("%ld\n",s);
    }

    return 0;
}
