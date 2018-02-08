#include <stdio.h>
#include <math.h>

int main()
{
    long long int s,p,g,m,t,ca=1,q;
    double n,f;

    scanf("%lld",&t);

    while(t--)
    {
        scanf("%lld",&s);

        n = sqrt((double)s);

        q = (long long int)n;

        if(n==q){
            if(s%2==0){
                printf("Case %lld: %.0lld 1\n",ca++,q);
            }
            else{
                printf("Case %lld: 1 %.0lld\n",ca++,q);
            }
        }
        else{
            f = n - (double)q;
            if(f>=.5)
            {
                q = q + 1;
            }
            else{
                q = q;
            }
            p = q*q;

            if(p>s){
                if(p%2==1){
                    g = (p-s)+1;

                    printf("Case %lld: %lld %lld\n",ca++,g,q);
                }
                else{
                    g = (p-s)+1;
                    printf("Case %lld: %lld %lld\n",ca++,q,g);
                }
            }

            else{
                if(p%2==1){
                    printf("Case %lld: %lld %lld\n",ca++,s-p,q+1);
                }
                else{
                    printf("Case %lld: %lld %lld\n",ca++,q+1,s-p);
                }
            }
        }
    }

    return 0;
}
