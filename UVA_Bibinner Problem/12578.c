#include <stdio.h>
#define pi 3.141592654

int main()
{
    double r,l,w,t,rec,a_cir,a_rec;

    scanf("%lf",&t);

    while(t--)
    {
        scanf("%lf",&l);

        w = 0.6*l;

        rec = l*w;

        r = (l/5);

        a_cir = pi*r*r;

        a_rec = rec - a_cir;

        printf("%.2lf %.2lf\n",a_cir,a_rec);
    }

    return 0;
}
