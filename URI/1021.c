#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,c,d,e,f,g,h,i,j,k,l,m,p;
    float n;

    scanf("%f",&n);

    m = (int)n;

    p = roundf((n - m)*100);

    a = m / 100;
    m = m % 100;
    b = m / 50;
    m = m % 50;
    c = m / 20;
    m = m % 20;
    d = m / 10;
    m = m % 10;
    e = m / 5;
    m = m % 5;
    f = m / 2;
    g = m % 2;

    h = p / 50;
    p = p % 50;
    i = p / 25;
    p = p % 25;
    j = p / 10;
    p = p % 10;
    k = p / 5;
    l = p % 5;

    printf("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\nMOEDAS:\n%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01\n",a,b,c,d,e,f,g,h,i,j,k,l);

    return 0;
}
