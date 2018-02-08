#include <stdio.h>

int main()
{
    int a,b;
    float c;

    scanf("%d %d",&a,&b);

    c = (float)(a*b)/12;

    printf("%.3f\n",c);

    return 0;
}
