#include <stdio.h>
#include <math.h>

int main()
{
    double a,b,c,n,m,p,q;

    scanf("%lf %lf %lf",&a,&b,&c);

    if(a>0)
    {
        n = (b*b)-(4*a*c);

        if(n>=0)
        {
            m = sqrt(n);

            p = (-b+m)/(2*a);
            q = (-b-m)/(2*a);

            printf("R1 = %.5lf\nR2 = %.5lf\n",p,q);
        }
        else{
            printf("Impossivel calcular\n");
        }
    }
    else{
            printf("Impossivel calcular\n");
        }

        return 0;
}
