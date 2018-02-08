#include <stdio.h>
#include <math.h>

int main()
{
    double x,x1,x2,m,a,b,c,temp;

    while(scanf("%lf %lf %lf",&a,&b,&c)==3)
    {
        m = sqrt((b*b)-(4*a*c));

        if(m==0){
        x = (-b)/(2*a);

        if(x==(int)x){
            printf("%.0lf\n",x);
        }
        else{
            printf("%.4lf\n",x);
        }
    }

        else{
        x1 = (-b+m)/(2*a);
        x2 = (-b-m)/(2*a);

        if(x1>x2){
            temp = x1;
            x1 = x2;
            x2 = temp;
        }

        if(x1==(int)x1){
            printf("%.0lf ",x1);
        }
        else{
            printf("%.4lf ",x1);
        }

        if(x2==(int)x2){
            printf("%.0lf\n",x2);
        }
        else{
            printf("%.4lf\n",x2);
        }
    }
    }

    return 0;
}
