#include <stdio.h>

int main()
{
    double a,b,c,tr,cr,tp,qr,rt,pi=3.14159;

    scanf("%lf %lf %lf",&a,&b,&c);

    tr=(a*c)/2;
    cr=pi*(c*c);
    tp=((a+b)/2)*c;
    qr=b*b;
    rt=a*b;

    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO:%.3lf\n",tr,cr,tp,qr,rt);

    return 0;
}
