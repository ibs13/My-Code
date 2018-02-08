#include <stdio.h>

int main()
{
    int t,n,m,p,e,f,c;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d %d %d",&e,&f,&c);

        p = 0;

        m = e + f;

        while(m>=c)
        {
            n = m / c;
            p = n + p;
            m = n + (m%c);
        }

        printf("%d\n",p);
    }

    return 0;
}
