#include <stdio.h>

int main()
{
    long long int n,s,p,i,j;

    while(scanf("%lld",&n)==1)
    {
        if(n==-1)
        {
            break;
        }
        else{
            p = 1;
            s = 1;

            for(i=1,j=0;i<=n,j<n;i++,j++)
            {
                s = s+i;
                p = p+j;
            }

            printf("%lld %lld\n",p,s);
        }

    }

    return 0;
}
