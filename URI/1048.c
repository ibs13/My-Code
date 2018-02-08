#include <stdio.h>

int main()
{
    double s,n,m;
    char ch = '%';
    int p;


    scanf("%lf",&s);

    if(s<=400.00 && s>=0){
        m = (15 * s) / 100;
        n = s + m;
        p = 15;
    }
    else if(s<=800.00 && s>=0){
        m = (12 * s) / 100;
        n = s + m;
        p = 12;
    }
    else if(s<=1200.00 && s>=0){
        m = (10 * s) / 100;
        n = s + m;
        p = 10;
    }
    else if(s<=2000.00 && s>=0){
        m = (7 * s) / 100;
        n = s + m;
        p = 7;
    }
    else if(s>2000){
        m = (4 * s) / 100;
        n = s + m;
        p = 4;
    }

    printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %d %c\n",n,m,p,ch);

    return 0;
}
