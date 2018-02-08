#include <stdio.h>
#include <string.h>

int main()
{
    char a[1000],b[1000],c[2000];
    int m,n,i,j;

    printf("Enter two string :");
    scanf("%s %s",&a,&b);

    n = strlen(a);
    m = strlen(b);

    for(i=0,j=0;i<n;i++,j++)
    {
        c[j] = a[i];
    }

    for(i=0,j=n;j<m+n;i++,j++)
    {
        c[j] = b[i];
    }

    printf("\n\nAfter concatenating two strings are:");

    for(i=0;i<n+m;i++)
    {
        printf("%c",c[i]);
    }

    printf("\n");

    return 0;
}





