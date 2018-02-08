#include <stdio.h>

int main()
{
    int n,i=1;

    scanf("%d",&n);

    while(n>=i)
    {
        printf("%d %d %d\n",i,(i*i),(i*i*i));

        i++;
    }

    return 0;
}
