#include <stdio.h>
#include <math.h>

int main()
{
    long long t,n,p,m;

    scanf("%lld",&t);

    while(t--)
    {
        scanf("%lld",&n);

        if(n==0){
            p =  1;
        }
        else{
            p = (sqrt(8*n)+1)/2;

            m = (p*(p+1))/2;

            if(n==m){
                p++;
            }
        }

        printf("%lld\n",p-1);
    }

    return 0;
}
