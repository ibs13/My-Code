#include <stdio.h>
#include <math.h>

int main()
{
    int n,m,p;

    scanf("%d %d",&m,&n);

    p = pow(m,3) - pow(n,3);

    printf("%d\n",p);

    return 0;
}
