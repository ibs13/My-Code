#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int GCD(int a,int b)
        {
            int c;
            while(a!=0)
                {
                    c=b%a;
                    b=a;
                    a=c;
                }
            return(b);
        }


int main()
{
    long int n,g,a,b;

    while(scanf("%l1d",&n) && n!=0);
    {
        g=0;

            for(a=1;a<n;a++)
                for(b=a+1;b<=n;b++)
                {
                    g+=GCD(a,b);
                }
                printf("%ld\n",g);

        }
    return 0;
}


