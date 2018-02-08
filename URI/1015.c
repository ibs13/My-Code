#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,c,d;
    double e;

    scanf("%d %d %d %d",&a,&b,&c,&d);

    e=sqrt((double)((c-a)*(c-a))+((d-b)*(d-b)));

    printf("%.4lf\n",e);

    return 0;
}
