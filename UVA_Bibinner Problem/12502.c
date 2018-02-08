#include <stdio.h>

int main()
{
    double x,y,z,n,t,m,p;

    scanf("%lf",&t);

    while(t--){
        scanf("%lf %lf %lf",&x,&y,&z);

        n =(x + y)/ 3;

        m = x - n;

        if(m>0){
            p = m * (z/n);
        }
        else{
            p = 0;
        }

        printf("%.0lf\n",p);
    }

    return 0;
}
