#include <stdio.h>

long long int fun();

long long int a,b,p,m,mul;

int main()
{
    while(scanf("%lld %lld %lld",&b,&p,&m)==3){

        a = fun(b,p);

        printf("%lld\n",a);
    }

    return 0;
}

long long int fun(long long int b,long long int p)
{
    if(p==0)
        return 1;
    if(p%2==0){
        mul = fun(b,p/2);
        return (((mul%m)*(mul%m))%m);
    }
    else{
        return (((b%m)*(fun(b,p-1)%m))%m);
    }
}
