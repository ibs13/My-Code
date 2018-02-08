#include <stdio.h>

int main()
{
    long long int a,b,i=1,n,m;

    scanf("%lld %lld",&a,&b);

    if(a==1 || b==1)
    {
        if(a==1)
        {
            printf("%lld\n",b);
        }
        else{
            printf("%lld\n",a);
        }
    }

    else{
            while(a!=b)
    {
        if(a>b)
        {
            m = a-b;
            a = m;
        }
        else{
            n = b-a;
            b = n;
        }
        i++;
    }

    printf("%lld\n",i);
    }

    return 0;
}
