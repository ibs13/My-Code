#include <stdio.h>
#include <string.h>

int main()
{
    double s,b,t;

    char n[100];

    gets(n);
    scanf("%lf",&s);
    scanf("%lf",&b);

    t=s+((15*b)/100);

    printf("TOTAL = R$ %.2lf\n",t);

    return 0;
}
