#include <stdio.h>

int main()
{
    int t,r,m,n,p,ca=1;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&r);

        p = (r * 3) / 2;
        r = r * 5;
        m = ((r * 45) / 100) * (-1);
        n = (r * 55) / 100;

        printf("Case %d:\n",ca++);
        printf("%d %d\n",m,p);
        printf("%d %d\n",n,p);
        printf("%d %d\n",n,(p*(-1)));
        printf("%d %d\n",m,(p*(-1)));
    }

    return 0;
}
