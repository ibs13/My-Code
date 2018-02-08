#include <stdio.h>

int main()
{
    long long int a,b,i,s,n,p,c;

    while(scanf("%lld %lld",&a,&b)==2)
    {
        printf("%lld %lld",a,b);
        p=0;
        if(a>b)
        {
            c=a;
            a=b;
            b=c;
        }
        {
           for(i=a;i<=b;i++)
        {
            s=1;
            n=i;
            while(n>1)
            {
                s++;
                if(n%2==1)
                {
                    n=(3*n)+1;
                }
                else{
                    n=n/2;
                }
            }
            if(p<=s)
            {
               p=s;
            }
        }
        }

        printf(" %lld\n",p);
    }
    return 0;
}
