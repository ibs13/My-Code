#include <stdio.h>
#define p .5555555556

int main()
{
    double t,ca=1,n,m;

    scanf("%lf",&t);

    while(t--)
    {
        scanf("%lf %lf",&n,&m);

        printf("Case %.0lf: %.2lf\n",ca++,((p*m)+n));
    }

    return 0;
}
