#include <stdio.h>

int main()
{
    int n,i;
    float s=0,r;

    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        r=1/i,

        s=s+r;
    }

    printf("%f\n",s);

    return 0;
}
