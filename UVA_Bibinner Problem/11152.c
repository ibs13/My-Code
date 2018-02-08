#include <stdio.h>
#include <math.h>
#define pi 3.141592653589793

int main()
{
    double a,b,c,y,p,r,r1,r2,b_cir,tri,s,m;

    while(scanf("%lf %lf %lf",&a,&b,&c)==3)
    {
        s = (a+b+c)/2;

        tri = sqrt(s*(s-a)*(s-b)*(s-c));

        r1 = (a*b*c)/(4*tri);

        b_cir = pi*(r1*r1);

        y = b_cir - tri;

        r2 = tri/s;

        r = pi*(r2*r2);

        p = tri - r;

        printf("%.4lf %.4lf %.4lf\n",y,p,r);
    }

    return 0;
}
