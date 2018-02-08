#include <stdio.h>
int main()
{
    int t,i;
    long long int n,m,x;
    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
        scanf("%lld %lld %lld",&n,&m,&x);

        if(m<=x)
        {
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }

    return 0;
}
