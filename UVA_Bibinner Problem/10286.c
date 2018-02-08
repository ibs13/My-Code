#include <stdio.h>

int main()
{
    double pl,sl,m=1.067395682;


    while(scanf("%lf",&pl)==1)
    {
        sl=pl*m;

        printf("%.10lf\n",sl);
    }

    return 0;
}
