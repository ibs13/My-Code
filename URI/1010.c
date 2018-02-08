#include <stdio.h>

int main()
{
    int c1,a1,c2,a2;
    float u1,u2,t;

    scanf("%d %d %f",&c1,&a1,&u1);
    scanf("%d %d %f",&c2,&a2,&u2);

    t=(a1*u1)+(a2*u2);

    printf("VALOR A PAGAR: R$ %.2f\n",t);

    return 0;
}
