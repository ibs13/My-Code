#include <stdio.h>

int main()
{
    int t,n,p,q;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);

        p = n / 2;
        q = n - p;

        printf("%d %d\n",p,q);
    }
    return 0;
}
