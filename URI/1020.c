#include <stdio.h>

int main()
{
    int n,y,m,d,p;

    scanf("%d",&n);

    p = n%365;
    y = n/365;

    d = p%30;
    m = p/30;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",y,m,d);

    return 0;
}
