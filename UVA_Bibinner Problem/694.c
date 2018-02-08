#include <stdio.h>

int main()
{
    long long int a,l,ca=1,p,d;

    while(scanf("%lld %lld",&a,&l)==2)
    {
        d=a;
        p = 1;
        if(a<0 && l<0)
        {
            break;
        }
        else{
            while(a!=1 && a<=l)
            {
                if(a%2==0)
                {
                    a = a/2;
                }
                else{
                    a = (3*a)+1;
                }
                p++;
            }
            if(a>l)
            {
                p = p-1;
            }
            printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n",ca++,d,l,p);
        }
    }

    return 0;
}
