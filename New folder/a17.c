#include <stdio.h>

int main()
{
    int m=0,n,i;

    printf("Entetr any number: ");
    scanf("%d",&n);

    for(i=1;i<=10;i++)
    {
        m=n+m;

        printf("%d X %d =%d\n",n,i,m);
    }

    return 0;
}
