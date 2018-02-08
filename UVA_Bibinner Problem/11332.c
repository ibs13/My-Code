#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s,r,m,p,t,g;

    long long int n,h;

    while(scanf("%lld",&h)!=0)
    {
        if(h==0)
        {
            exit(0);
        }
        else{
        n=h;
        if(n<10)
        {
            printf("%lld\n",n);
        }
        else{
        while(n!=0)
        {
            r=n%10;
            n=n/10;

            s=s+r;
        }
        if(s<10)
        {
            printf("%d\n",s);
        }
        else{
        while(s!=0)
        {
            p=s%10;
            s=s/10;

            t=t+p;
        }

        if(t>9)
        {
            while(t!=0)
            {
                m=t%10;
                t=t/10;

                g=g+m;
            }

            printf("%d\n",g);
        }

        else{
            printf("%d\n",t);
        }
        }
        }
        s=0;
        t=0;
        g=0;
        }
    }

    return 0;
}
