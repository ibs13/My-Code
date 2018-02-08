#include <stdio.h>

int main()
{
    int n,a,b,c,i;

    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        scanf("%d %d %d",&a,&b,&c);

        if((a<b && a>c) || (a>b && a<c))
            printf("Case %d: %d\n",i,a);

            else if((b<a && b>c) || (b>a && b<c))
                printf("Case %d: %d\n",i,b);

            else if((c<a && c>b) || (c>a && c<b))
                printf("Case %d: %d\n",i,c);
    }

    return 0;
}
