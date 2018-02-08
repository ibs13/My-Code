#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,c,d;

    while(scanf("%d %d",&a,&b)==2)
    {
        d=1/b;

        c = pow(a,d);

        printf("%d\n",c);
    }
    return 0;
}
