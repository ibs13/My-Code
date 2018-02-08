#include <stdio.h>

int main()
{
    long long int n,m,t,ca=1;

    scanf("%lld",&t);

    while(t--)
    {
        scanf("%lld %lld",&n,&m);

        if(n==m){
            printf("Case %lld: 2\n",ca++);
        }
        else if(n%2==0 && m%2==0){
            printf("Case %lld: %lld\n",ca++,(n+m)/2);
        }
        else{
            printf("Case %lld: %lld\n",ca++,m+n);
        }
    }

    return 0;
}
