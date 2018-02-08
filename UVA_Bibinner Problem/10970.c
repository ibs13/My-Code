#include <stdio.h>

int main()
{
    int m,n,p;

    while(scanf("%d %d",&m,&n)==2)
    {
        p = (m-1)+((n-1)*m);

        printf("%d\n",p);
    }
    return 0;
}
