#include <stdio.h>
#include <math.h>

int main()
{
    long long int a,b,c,d,i,j,k,n,p,t,s,r,m;

    scanf("%lld",&n);

    while(n--)
    {
        scanf("%lld %lld",&a,&b);

        if(a-b<=10000)
        {
            for(i=a;i<=b;i++)
            {
                k = 2;
                r = 0;
                s = 2;
                t = 0;
                 while(k<sqrt(i)){
                    r = i%k;
                    k++;
                if(r==0){
                    break;
                }
            }
            if(r==0)
            {
                for(j=2;j<i/2;j++)
                {
                    p = i%j;

                    if(p==0)
                    {
                        s++;
                    }
                }
                if(t<s)
            {
                t = s;
                m = i;
            }

            }

        }

        printf("Between %lld and %lld, %lld has a maximum of %lld divisors.\n",a,b,m,t+1);
    }
}
    return 0;
}
