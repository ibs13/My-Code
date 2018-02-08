#include <stdio.h>

int main()
{
    int n,a,b,c,d,e,f,g,m;

    scanf("%d",&n);

    m = n;

    a = n / 100;
    n = n % 100;
    b = n / 50;
    n = n % 50;
    c = n / 20;
    n = n % 20;
    d = n / 10;
    n = n % 10;
    e = n / 5;
    n = n % 5;
    f = n / 2;
    g = n % 2;

    printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n",m,a,b,c,d,e,f,g);

    return 0;
}
