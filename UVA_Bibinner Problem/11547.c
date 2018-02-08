#include <stdio.h>

int main()
{
    long int t,n,r,p,i;

    scanf("%ld",&t);

    while(t--)
    {
        i=0;
        scanf("%ld",&n);

        r=((((((n*567)/9)+7492)*235)/47)-498);

        while(i!=2)
        {
            p = r%10;
            r = r/10;
            i++;
        }

        if(p<0)
        {
            p=-p;
        }

            printf("%ld\n",p);
    }
    return 0;
}
