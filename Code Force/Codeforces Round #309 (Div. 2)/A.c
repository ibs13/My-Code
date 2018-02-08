#include <stdio.h>
#include <string.h>

int main()
{
    char a[25];
    int n,m;

    scanf("%s",&a);

    n = strlen(a);

    m = (n*26)+(26-n);

    printf("%d\n",m);

    return 0;
}
