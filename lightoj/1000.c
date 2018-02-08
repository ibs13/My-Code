#include <stdio.h>

int main()
{
    int t,ca=1,a,b,s;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d %d",&a,&b);

        s=a+b;

        printf("Case %d: %d\n",ca++,s);
    }

    return 0;
}

