#include <stdio.h>
#include <string.h>

int main()
{
    char a[100],b[100]
    int i,j,l;

    printf("Enter an input:");

    scanf("%s",a);

    l = strlen(a);

    for(i=l-1,j=0;i>=0,j<l;i--,j++)
    {
        b[j] = a[i];
    }

    printf("The reverse of input is:%s\n",b);

    return 0;
}
